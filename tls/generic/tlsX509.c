/*
 * Parse X.509 certificates and return contents as a TCL key-value list.
 *
 * Copyright (C) 1997-2000 Sensus Consulting Ltd.
 * Matt Newman <matt@sensus.org>
 * Copyright (C) 2023 Brian O'Hagan
 */
#include <tcl.h>
#include <stdio.h>
#include <openssl/bio.h>
#include <openssl/sha.h>
#include <openssl/x509.h>
#include <openssl/x509v3.h>
#include <openssl/x509_vfy.h>
#include <openssl/asn1.h>
#include "tlsInt.h"

/* Define maximum certificate size. Max PEM size 100kB and DER size is 24kB. */
#define CERT_STR_SIZE 24576


/*
 *-----------------------------------------------------------------------------
 *
 * String_to_Hex --
 *
 *	Format contents of a binary string as a hex string
 *
 * Results:
 *	TCL byte array object with x509 identifier as a hex string
 *
 * Side Effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *String_to_Hex(unsigned char* input, int ilen) {
    unsigned char *iptr = input;
    Tcl_Obj *resultObj = Tcl_NewByteArrayObj(NULL, 0);
    unsigned char *data = Tcl_SetByteArrayLength(resultObj, (Tcl_Size)ilen*2);
    unsigned char *dptr = &data[0];
    const char *hex = "0123456789abcdef";

    if (resultObj == NULL) {
	return NULL;
    }

    for (int i = 0; i < ilen; i++) {
	*dptr++ = (unsigned char)hex[(*iptr>>4)&0xF];
	*dptr++ = (unsigned char)hex[(*iptr++)&0xF];
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BIO_to_Buffer --
 *
 *	Output contents of a BIO to a buffer
 *
 * Results:
 *	Returns length of string in buffer
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Size BIO_to_Buffer(int result, BIO *bio, void *output, int olen) {
    Tcl_Size len = 0;
    int pending = BIO_pending(bio);

    if (result) {
	len = (Tcl_Size) BIO_read(bio, output, (pending < olen) ? pending : olen);
	(void)BIO_flush(bio);
	if (len < 0) {
	    len = 0;
	}
    }
    return len;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509Extensions --
 *
 *	Get list of X.509 Certificate Extensions
 *
 * Results:
 *	TCL list of extensions and boolean critical status
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509Extensions(Tcl_Interp *interp, X509 *cert) {
    const STACK_OF(X509_EXTENSION) *exts;
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);

    if (resultObj == NULL) {
	return NULL;
    }

    if ((exts = X509_get0_extensions(cert)) != NULL) {
	for (int i=0; i < X509_get_ext_count(cert); i++) {
	    X509_EXTENSION *ex = sk_X509_EXTENSION_value(exts, i);
	    ASN1_OBJECT *obj = X509_EXTENSION_get_object(ex);
	    /* ASN1_OCTET_STRING *data = X509_EXTENSION_get_data(ex); */
	    int critical = X509_EXTENSION_get_critical(ex);
	    LAPPEND_BOOL(interp, resultObj, OBJ_nid2ln(OBJ_obj2nid(obj)), critical);
	}
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509Identifier --
 *
 *	Get X.509 certificate Authority or Subject Key Identifiers
 *
 * Results:
 *	TCL byte array object with x509 identifier as a hex string
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509Identifier(const ASN1_OCTET_STRING *astring) {
    Tcl_Obj *resultObj = NULL;

    if (astring != NULL) {
	resultObj = String_to_Hex((unsigned char *)ASN1_STRING_get0_data(astring),
	    ASN1_STRING_length(astring));
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509KeyUsage --
 *
 *	Get X.509 certificate key usage types
 *
 * Results:
 *	Tcl list of types
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509KeyUsage(Tcl_Interp *interp, X509 *cert, uint32_t xflags) {
    uint32_t usage = X509_get_key_usage(cert);
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);

    if (resultObj == NULL) {
	return NULL;
    }

    if ((xflags & EXFLAG_KUSAGE) && usage < UINT32_MAX) {
	if (usage & KU_DIGITAL_SIGNATURE) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Digital Signature", -1));
	}
	if (usage & KU_NON_REPUDIATION) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Non-Repudiation", -1));
	}
	if (usage & KU_KEY_ENCIPHERMENT) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Key Encipherment", -1));
	}
	if (usage & KU_DATA_ENCIPHERMENT) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Data Encipherment", -1));
	}
	if (usage & KU_KEY_AGREEMENT) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Key Agreement", -1));
	}
	if (usage & KU_KEY_CERT_SIGN) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Certificate Signing", -1));
	}
	if (usage & KU_CRL_SIGN) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("CRL Signing", -1));
	}
	if (usage & KU_ENCIPHER_ONLY) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Encipher Only", -1));
	}
	if (usage & KU_DECIPHER_ONLY) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Decipher Only", -1));
	}
    } else {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("unrestricted", -1));
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509Purpose --
 *
 *	Get X.509 certificate purpose
 *
 * Results:
 *	Purpose string
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
const char *Tls_x509Purpose(X509 *cert) {
    const char *purpose = NULL;

    if (X509_check_purpose(cert, X509_PURPOSE_SSL_CLIENT, 0) > 0) {
	purpose = "SSL Client";
    } else if (X509_check_purpose(cert, X509_PURPOSE_SSL_SERVER, 0) > 0) {
	purpose = "SSL Server";
    } else if (X509_check_purpose(cert, X509_PURPOSE_NS_SSL_SERVER, 0) > 0) {
	purpose = "MSS SSL Server";
    } else if (X509_check_purpose(cert, X509_PURPOSE_SMIME_SIGN, 0) > 0) {
	purpose = "SMIME Signing";
    } else if (X509_check_purpose(cert, X509_PURPOSE_SMIME_ENCRYPT, 0) > 0) {
	purpose = "SMIME Encryption";
    } else if (X509_check_purpose(cert, X509_PURPOSE_CRL_SIGN, 0) > 0) {
	purpose = "CRL Signing";
    } else if (X509_check_purpose(cert, X509_PURPOSE_ANY, 0) > 0) {
	purpose = "Any";
    } else if (X509_check_purpose(cert, X509_PURPOSE_OCSP_HELPER, 0) > 0) {
	purpose = "OCSP Helper";
    } else if (X509_check_purpose(cert, X509_PURPOSE_TIMESTAMP_SIGN, 0) > 0) {
	purpose = "Timestamp Signing";
    } else {
	purpose = "";
    }
    return purpose;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509Purposes --
 *
 *	Get X.509 certificate purpose types
 *
 * Results:
 *	Tcl list of each purpose and whether it is CA or non-CA
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509Purposes(Tcl_Interp *interp, X509 *cert) {
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);
    X509_PURPOSE *ptmp;

    if (resultObj == NULL) {
	return NULL;
    }

    for (int i = 0; i < X509_PURPOSE_get_count(); i++) {
	ptmp = X509_PURPOSE_get0(i);
	Tcl_Obj *tmpPtr = Tcl_NewListObj(0, NULL);

	for (int j = 0; j < 2; j++) {
	    int idret = X509_check_purpose(cert, X509_PURPOSE_get_id(ptmp), j);
	    Tcl_ListObjAppendElement(interp, tmpPtr, Tcl_NewStringObj(j ? "CA" : "nonCA", -1));
	    Tcl_ListObjAppendElement(interp, tmpPtr, Tcl_NewStringObj(idret == 1 ? "Yes" : "No", -1));
	}
	LAPPEND_OBJ(interp, resultObj, X509_PURPOSE_get0_name(ptmp), tmpPtr);
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509Names --
 *
 *	Get a list of Subject Alternate Names (SAN) or Issuer Alternate Names
 *
 * Results:
 *	Tcl list of alternate names
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509Names(Tcl_Interp *interp, X509 *cert, int nid, BIO *bio) {
    STACK_OF(GENERAL_NAME) *names;
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);
    Tcl_Size len;
    char buffer[1024];

    if (resultObj == NULL) {
	return NULL;
    }

    if ((names = (STACK_OF(GENERAL_NAME) *)X509_get_ext_d2i(cert, nid, NULL, NULL)) != NULL) {
	for (int i=0; i < sk_GENERAL_NAME_num(names); i++) {
	    const GENERAL_NAME *name = sk_GENERAL_NAME_value(names, i);

	    len = BIO_to_Buffer(name && GENERAL_NAME_print(bio, (GENERAL_NAME *) name), bio, buffer, 1024);
	    LAPPEND_STR(interp, resultObj, NULL, buffer, len);
	}
	sk_GENERAL_NAME_pop_free(names, GENERAL_NAME_free);
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509ExtKeyUsage --
 *
 *	Get a list of Extended Key Usages
 *
 * Returns:
 *	Tcl list of usages
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509ExtKeyUsage(Tcl_Interp *interp, X509 *cert, uint32_t xflags) {
    uint32_t usage = X509_get_key_usage(cert);
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);

    if (resultObj == NULL) {
	return NULL;
    }

    if ((xflags & EXFLAG_XKUSAGE) && usage < UINT32_MAX) {
	usage = X509_get_extended_key_usage(cert);

	if (usage & XKU_SSL_SERVER) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("TLS Web Server Authentication", -1));
	}
	if (usage & XKU_SSL_CLIENT) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("TLS Web Client Authentication", -1));
	}
	if (usage & XKU_SMIME) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("E-mail Protection", -1));
	}
	if (usage & XKU_CODE_SIGN) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Code Signing", -1));
	}
	if (usage & XKU_SGC) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("SGC", -1));
	}
	if (usage & XKU_OCSP_SIGN) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("OCSP Signing", -1));
	}
	if (usage & XKU_TIMESTAMP) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Time Stamping", -1));
	}
	if (usage & XKU_DVCS ) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("DVCS", -1));
	}
	if (usage & XKU_ANYEKU) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("Any Extended Key Usage", -1));
	}
    } else {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("unrestricted", -1));
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509CrlDp --
 *
 *	Get list of CRL Distribution Points
 *
 * Returns:
 *	Tcl list of URIs and relative-names
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509CrlDp(Tcl_Interp *interp, X509 *cert) {
    STACK_OF(DIST_POINT) *crl;
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);

    if (resultObj == NULL) {
	return NULL;
    }

    if ((crl = (STACK_OF(DIST_POINT) *)X509_get_ext_d2i(cert, NID_crl_distribution_points, NULL, NULL)) != NULL) {
	for (int i=0; i < sk_DIST_POINT_num(crl); i++) {
	    DIST_POINT *dp = sk_DIST_POINT_value(crl, i);
	    DIST_POINT_NAME *distpoint = dp->distpoint;

	    if (distpoint->type == 0) {
		/* full-name GENERALIZEDNAME */
		for (int j = 0; j < sk_GENERAL_NAME_num(distpoint->name.fullname); j++) {
		    GENERAL_NAME *gen = sk_GENERAL_NAME_value(distpoint->name.fullname, j);
		    int type;
		    ASN1_STRING *uri = (ASN1_STRING *)GENERAL_NAME_get0_value(gen, &type);
		    if (type == GEN_URI) {
			LAPPEND_STR(interp, resultObj, (char *) NULL, (char *) ASN1_STRING_get0_data(uri), (Tcl_Size) ASN1_STRING_length(uri));
		    }
		}
	    } else if (distpoint->type == 1) {
		/* relative-name X509NAME */
		STACK_OF(X509_NAME_ENTRY) *sk_relname = distpoint->name.relativename;
		for (int j = 0; j < sk_X509_NAME_ENTRY_num(sk_relname); j++) {
		    X509_NAME_ENTRY *e = sk_X509_NAME_ENTRY_value(sk_relname, j);
		    ASN1_STRING *d = X509_NAME_ENTRY_get_data(e);
		    LAPPEND_STR(interp, resultObj, (char *) NULL, (char *) ASN1_STRING_get0_data(d), (Tcl_Size) ASN1_STRING_length(d));
		}
	    }
	}
	CRL_DIST_POINTS_free(crl);
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509Oscp
 *
 *	Get list of On-line Certificate Status Protocol (OSCP) URIs
 *
 * Results:
 *	Tcl list of URIs
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509Oscp(Tcl_Interp *interp, X509 *cert) {
    STACK_OF(OPENSSL_STRING) *ocsp;
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);

    if (resultObj == NULL) {
	return NULL;
    }

    if ((ocsp = X509_get1_ocsp(cert)) != NULL) {
	for (int i = 0; i < sk_OPENSSL_STRING_num(ocsp); i++) {
	    LAPPEND_STR(interp, resultObj, NULL, sk_OPENSSL_STRING_value(ocsp, i), -1);
	}
	X509_email_free(ocsp);
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_x509CaIssuers --
 *
 *	Get list of Certificate Authority (CA) Issuer URIs
 *
 * Results:
 *	Tcl list of CA issuer URIs
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_x509CaIssuers(Tcl_Interp *interp, X509 *cert) {
    STACK_OF(ACCESS_DESCRIPTION) *ads;
    ACCESS_DESCRIPTION *ad;
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);
    unsigned char *buf;

    if (resultObj == NULL) {
	return NULL;
    }

    if ((ads = (STACK_OF(ACCESS_DESCRIPTION) *)X509_get_ext_d2i(cert, NID_info_access, NULL, NULL)) != NULL) {
	for (int i = 0; i < sk_ACCESS_DESCRIPTION_num(ads); i++) {
	    ad = (ACCESS_DESCRIPTION *)sk_ACCESS_DESCRIPTION_value(ads, i);
	    if (OBJ_obj2nid(ad->method) == NID_ad_ca_issuers && ad->location) {
		if (ad->location->type == GEN_URI) {
		    Tcl_Size len = (Tcl_Size) ASN1_STRING_to_UTF8(&buf, ad->location->d.uniformResourceIdentifier);
		    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj((char *) buf, len));
		    OPENSSL_free(buf);
		    break;
		}
	    }
	}
	/* sk_ACCESS_DESCRIPTION_pop_free(ads, ACCESS_DESCRIPTION_free); */
	AUTHORITY_INFO_ACCESS_free(ads);
    }
    return resultObj;
}

/*
 *-----------------------------------------------------------------------------
 *
 * Tls_NewX509Obj --
 *
 *	Parses a X509 certificate and returns contents as a key-value Tcl list.
 *
 * Result:
 *	A Tcl List with the X509 certificate info as a key-value list
 *
 * Side effects:
 *	None
 *
 *-----------------------------------------------------------------------------
 */
Tcl_Obj *Tls_NewX509Obj(Tcl_Interp *interp, X509 *cert, int all) {
    Tcl_Obj *resultObj = Tcl_NewListObj(0, NULL);
    BIO *bio = BIO_new(BIO_s_mem());
    int mdnid, pknid, bits;
    Tcl_Size len;
    unsigned int ulen;
    uint32_t xflags;
    unsigned long flags = XN_FLAG_RFC2253 | ASN1_STRFLGS_UTF8_CONVERT;
    flags &= ~(unsigned long)ASN1_STRFLGS_ESC_MSB;

    char *buffer = (char *)ckalloc(BUFSIZ > EVP_MAX_MD_SIZE ? BUFSIZ : EVP_MAX_MD_SIZE);

    dprintf("Called");

    if (interp == NULL || cert == NULL || bio == NULL || resultObj == NULL || buffer == NULL) {
	Tcl_DecrRefCount(resultObj);
	BIO_free(bio);
	if (buffer != NULL) ckfree(buffer);
	return NULL;
    }

    /* Signature algorithm and value - RFC 5280 section 4.1.1.2 and 4.1.1.3 */
    /* signatureAlgorithm is the id of the cryptographic algorithm used by the
	CA to sign this cert. signatureValue is the digital signature computed
	upon the ASN.1 DER encoded tbsCertificate. */
    {
	const X509_ALGOR *sig_alg;
	const ASN1_BIT_STRING *sig;
	int sig_nid;

	X509_get0_signature(&sig, &sig_alg, cert);
	/* sig_nid = X509_get_signature_nid(cert) */
	sig_nid = OBJ_obj2nid(sig_alg->algorithm);
	LAPPEND_STR(interp, resultObj, "signatureAlgorithm", OBJ_nid2ln(sig_nid), -1);
	if (sig_nid != NID_undef) {
	    LAPPEND_OBJ(interp, resultObj, "signatureValue", String_to_Hex(sig->data, sig->length));
	} else {
	    LAPPEND_STR(interp, resultObj, "signatureValue", "", 0);
	}
    }

    /* Version of the encoded certificate - RFC 5280 section 4.1.2.1 */
    LAPPEND_LONG(interp, resultObj, "version", X509_get_version(cert)+1);

    /* Unique number assigned by CA to certificate - RFC 5280 section 4.1.2.2 */
    len = BIO_to_Buffer(i2a_ASN1_INTEGER(bio, X509_get0_serialNumber(cert)), bio, buffer, BUFSIZ);
    LAPPEND_STR(interp, resultObj, "serialNumber", buffer, len);

    /* Signature algorithm used by the CA to sign the certificate. Must match
	signatureAlgorithm. RFC 5280 section 4.1.2.3 */
    LAPPEND_STR(interp, resultObj, "signature", OBJ_nid2ln(X509_get_signature_nid(cert)), -1);

    /* Issuer identifies the entity that signed and issued the cert. RFC 5280 section 4.1.2.4 */
    len = BIO_to_Buffer(X509_NAME_print_ex(bio, X509_get_issuer_name(cert), 0, flags), bio, buffer, BUFSIZ);
    LAPPEND_STR(interp, resultObj, "issuer", buffer, len);

    /* Certificate validity period is the interval the CA warrants that it will
	maintain info on the status of the certificate. RFC 5280 section 4.1.2.5 */
    /* Get Validity - Not Before */
    len = BIO_to_Buffer(ASN1_TIME_print(bio, X509_get0_notBefore(cert)), bio, buffer, BUFSIZ);
    LAPPEND_STR(interp, resultObj, "notBefore", buffer, len);

    /* Get Validity - Not After */
    len = BIO_to_Buffer(ASN1_TIME_print(bio, X509_get0_notAfter(cert)), bio, buffer, BUFSIZ);
    LAPPEND_STR(interp, resultObj, "notAfter", buffer, len);

    /* Subject identifies the entity associated with the public key stored in
	the subject public key field. RFC 5280 section 4.1.2.6 */
    len = BIO_to_Buffer(X509_NAME_print_ex(bio, X509_get_subject_name(cert), 0, flags), bio, buffer, BUFSIZ);
    LAPPEND_STR(interp, resultObj, "subject", buffer, len);

    /* SHA1 Digest (Fingerprint) of cert - DER representation */
    if (X509_digest(cert, EVP_sha1(), (unsigned char *)buffer, &ulen)) {
	LAPPEND_OBJ(interp, resultObj, "sha1_hash", String_to_Hex((unsigned char *)buffer, (int) ulen));
    }

    /* SHA256 Digest (Fingerprint) of cert - DER representation */
    if (X509_digest(cert, EVP_sha256(), (unsigned char *)buffer, &ulen)) {
	LAPPEND_OBJ(interp, resultObj, "sha256_hash", String_to_Hex((unsigned char *)buffer, (int) ulen));
    }

    /* Subject Public Key Info specifies the public key and identifies the
	algorithm with which the key is used. RFC 5280 section 4.1.2.7 */
    if (X509_get_signature_info(cert, &mdnid, &pknid, &bits, &xflags)) {
	ASN1_BIT_STRING *key;
	unsigned int n;

	LAPPEND_STR(interp, resultObj, "signingDigest", OBJ_nid2ln(mdnid), -1);
	LAPPEND_STR(interp, resultObj, "publicKeyAlgorithm", OBJ_nid2ln(pknid), -1);
	LAPPEND_INT(interp, resultObj, "bits", bits); /* Effective security bits */

	key = X509_get0_pubkey_bitstr(cert);
	LAPPEND_OBJ(interp, resultObj, "publicKey", String_to_Hex(key->data, key->length));

	if (X509_pubkey_digest(cert, EVP_get_digestbynid(pknid), (unsigned char *)buffer, &n)) {
	    LAPPEND_OBJ(interp, resultObj, "publicKeyHash", String_to_Hex((unsigned char *)buffer, (int) n));
	} else {
	    LAPPEND_STR(interp, resultObj, "publicKeyHash", "", 0);
	}

	/* digest of the DER representation of the certificate */
	if (X509_digest(cert, EVP_get_digestbynid(mdnid), (unsigned char *)buffer, &n)) {
	    LAPPEND_OBJ(interp, resultObj, "signatureHash", String_to_Hex((unsigned char *)buffer, (int) n));
	} else {
	    LAPPEND_STR(interp, resultObj, "signatureHash", "", 0);
	}
    }

    /* Certificate Purpose. Call before checking for extensions. */
    LAPPEND_STR(interp, resultObj, "purpose", Tls_x509Purpose(cert), -1);
    LAPPEND_OBJ(interp, resultObj, "certificatePurpose", Tls_x509Purposes(interp, cert));

    /* Get extensions flags */
    xflags = X509_get_extension_flags(cert);
    LAPPEND_INT(interp, resultObj, "extFlags", xflags);

	/* Check if cert was issued by CA cert issuer or self signed */
    LAPPEND_BOOL(interp, resultObj, "selfIssued", xflags & EXFLAG_SI);
    LAPPEND_BOOL(interp, resultObj, "selfSigned", xflags & EXFLAG_SS);
    LAPPEND_BOOL(interp, resultObj, "isProxyCert", xflags & EXFLAG_PROXY);
    LAPPEND_BOOL(interp, resultObj, "extInvalid", xflags & EXFLAG_INVALID);
    LAPPEND_BOOL(interp, resultObj, "isCACert", X509_check_ca(cert));

    /* The Unique Ids are used to handle the possibility of reuse of subject
	and/or issuer names over time. RFC 5280 section 4.1.2.8 */
    {
	const ASN1_BIT_STRING *iuid, *suid;
	X509_get0_uids(cert, &iuid, &suid);

	Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("issuerUniqueId", -1));
	if (iuid != NULL) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewByteArrayObj((const unsigned char *)iuid->data, (Tcl_Size) iuid->length));
	} else {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("", -1));
	}

	Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("subjectUniqueId", -1));
	if (suid != NULL) {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewByteArrayObj((const unsigned char *)suid->data, (Tcl_Size) suid->length));
	} else {
	    Tcl_ListObjAppendElement(interp, resultObj, Tcl_NewStringObj("", -1));
	}
    }

    /* X509 v3 Extensions - RFC 5280 section 4.1.2.9 */
    LAPPEND_INT(interp, resultObj, "extCount", X509_get_ext_count(cert));
    LAPPEND_OBJ(interp, resultObj, "extensions", Tls_x509Extensions(interp, cert));

    /* Authority Key Identifier (AKI) is the Subject Key Identifier (SKI) of
	its signer (the CA). RFC 5280 section 4.2.1.1, NID_authority_key_identifier */
    LAPPEND_OBJ(interp, resultObj, "authorityKeyIdentifier",
	Tls_x509Identifier(X509_get0_authority_key_id(cert)));

    /* Subject Key Identifier (SKI) is used to identify certificates that contain
	a particular public key. RFC 5280 section 4.2.1.2, NID_subject_key_identifier */
    LAPPEND_OBJ(interp, resultObj, "subjectKeyIdentifier",
	Tls_x509Identifier(X509_get0_subject_key_id(cert)));

    /* Key usage extension defines the purpose (e.g., encipherment, signature, certificate
	signing) of the key in the certificate. RFC 5280 section 4.2.1.3, NID_key_usage */
    LAPPEND_OBJ(interp, resultObj, "keyUsage", Tls_x509KeyUsage(interp, cert, xflags));

    /* Certificate Policies - indicates the issuing CA considers its issuerDomainPolicy
	equivalent to the subject CA's subjectDomainPolicy. RFC 5280 section 4.2.1.4, NID_certificate_policies */
    if (xflags & EXFLAG_INVALID_POLICY) {
	/* Reject cert */
    }

    /* Policy Mappings - RFC 5280 section 4.2.1.5, NID_policy_mappings */

    /* Subject Alternative Name (SAN) contains additional URLs, DNS names, or IP
	addresses bound to certificate. RFC 5280 section 4.2.1.6, NID_subject_alt_name */
    LAPPEND_OBJ(interp, resultObj, "subjectAltName", Tls_x509Names(interp, cert, NID_subject_alt_name, bio));

    /* Issuer Alternative Name is used to associate Internet style identities
	with the certificate issuer. RFC 5280 section 4.2.1.7, NID_issuer_alt_name */
    LAPPEND_OBJ(interp, resultObj, "issuerAltName", Tls_x509Names(interp, cert, NID_issuer_alt_name, bio));

    /* Subject Directory Attributes provides identification attributes (e.g., nationality)
	of the subject. RFC 5280 section 4.2.1.8 (subjectDirectoryAttributes) */

    /* Basic Constraints identifies whether the subject of the cert is a CA and
	the max depth of valid cert paths for this cert. RFC 5280 section 4.2.1.9, NID_basic_constraints */
    if (!(xflags & EXFLAG_PROXY)) {
	LAPPEND_LONG(interp, resultObj, "pathLen", X509_get_pathlen(cert));
    } else {
	LAPPEND_LONG(interp, resultObj, "pathLen", X509_get_proxy_pathlen(cert));
    }
    LAPPEND_BOOL(interp, resultObj, "basicConstraintsCA", xflags & EXFLAG_CA);

    /* Name Constraints is only used in CA certs to indicate the name space for
	all subject names in subsequent certificates in a certification path
	MUST be located. RFC 5280 section 4.2.1.10, NID_name_constraints */

    /* Policy Constraints is only used in CA certs to limit the length of a
	cert chain for that CA. RFC 5280 section 4.2.1.11, NID_policy_constraints */

    /* Extended Key Usage indicates the purposes the certified public key may be
	used, beyond the basic purposes. RFC 5280 section 4.2.1.12, NID_ext_key_usage */
    LAPPEND_OBJ(interp, resultObj, "extendedKeyUsage", Tls_x509ExtKeyUsage(interp, cert, xflags));

    /* CRL Distribution Points identifies where CRL information can be obtained.
	RFC 5280 section 4.2.1.13*/
    LAPPEND_OBJ(interp, resultObj, "crlDistributionPoints", Tls_x509CrlDp(interp, cert));

    /* Freshest CRL extension */
    if (xflags & EXFLAG_FRESHEST) {
    }

    /* Authority Information Access indicates how to access info and services
	for the certificate issuer. RFC 5280 section 4.2.2.1, NID_info_access */

    /* On-line Certificate Status Protocol (OSCP) Responders URL */
    LAPPEND_OBJ(interp, resultObj, "ocspResponders", Tls_x509Oscp(interp, cert));

    /* Certificate Authority (CA) Issuers URL */
    LAPPEND_OBJ(interp, resultObj, "caIssuers", Tls_x509CaIssuers(interp, cert));

    /* Subject Information Access - RFC 5280 section 4.2.2.2, NID_sinfo_access */

    /* Certificate Alias. If uses a PKCS#12 structure, alias will reflect the
	friendlyName attribute (RFC 2985). */
    {
	int ilen = 0;
	unsigned char *string = X509_alias_get0(cert, &ilen);
	LAPPEND_STR(interp, resultObj, "alias", (char *) string, (Tcl_Size) ilen);
	string = X509_keyid_get0(cert, &ilen);
	LAPPEND_STR(interp, resultObj, "keyId", (char *) string, (Tcl_Size) ilen);
    }

    /* Certificate and dump all data */
    if (all) {
	Tcl_Obj *allObj = Tcl_NewByteArrayObj(NULL, 0);
	Tcl_Obj *certObj = Tcl_NewByteArrayObj(NULL, 0);
	unsigned char *allStr, *certStr;

	if (allObj == NULL || certObj == NULL) {
	    Tcl_DecrRefCount(allObj);
	    BIO_free(bio);
	    ckfree(buffer);
	    return resultObj;
	}

	/* Get certificate */
	certStr = Tcl_SetByteArrayLength(certObj, CERT_STR_SIZE);
	len = BIO_to_Buffer(PEM_write_bio_X509(bio, cert), bio, certStr, CERT_STR_SIZE);
	Tcl_SetByteArrayLength(certObj, len);
	LAPPEND_OBJ(interp, resultObj, "certificate", certObj)

	/* Get all info on certificate */
	allStr = Tcl_SetByteArrayLength(allObj, CERT_STR_SIZE * 2);
	len = BIO_to_Buffer(X509_print_ex(bio, cert, flags, 0), bio, allStr, CERT_STR_SIZE * 2);
	Tcl_SetByteArrayLength(allObj, len);
	LAPPEND_OBJ(interp, resultObj, "all", allObj)
    }

    BIO_free(bio);
    ckfree(buffer);
    return resultObj;
}
