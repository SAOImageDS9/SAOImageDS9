//This file is part of ezMPEG
//Copyright (C)2002 Ingo Oppermann ( ingo_opp@users.sourceforge.net / http://sourceforge.net/projects/ezmpeg/ )
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either
//version 2 of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

// Version 0.1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "ezmpeg.h"

#define c(i) (((i) == 0) ? 0.3535534 : 0.5)		// 1 / (0.5 * sqrt(2))

#define LUMINANCE 1
#define CHROMINANCE 2

int zigzag[64] = {0, 1, 8, 16, 9, 2, 3, 10, 17, 24, 32, 25, 18, 11, 4, 5, 12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6, 7, 14, 21, 28, 35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51, 58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63};

// Quantisierungsmatrix
float intraquant[64] = {8.0, 16.0, 19.0, 22.0, 26.0, 27.0, 29.0, 34.0, 16.0, 16.0, 22.0, 24.0, 27.0, 29.0, 34.0, 37.0, 19.0, 22.0, 26.0, 27.0, 29.0, 34.0, 34.0, 38.0, 22.0, 22.0, 26.0, 27.0, 29.0, 34.0, 37.0, 40.0, 22.0, 26.0, 27.0, 29.0, 32.0, 35.0, 40.0, 48.0, 26.0, 27.0, 29.0, 32.0, 35.0, 40.0, 48.0, 58.0, 26.0, 27.0, 29.0, 34.0, 38.0, 46.0, 56.0, 69.0, 27.0, 29.0, 35.0, 38.0, 46.0, 56.0, 69.0, 83.0};

// Cosinustabelle
float fcostable[32];

// Macroblock Address Increment VLC (Tabelle B.1)
int macroblock_address_increment_code[36] = {0x0, 0x1, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x6, 0xB, 0xA, 0x9, 0x8, 0x7, 0x6, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x23,  0x22, 0x21, 0x20, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0xF, 0x8};
int macroblock_address_increment_length[36] = {0, 1, 3, 3, 4, 4, 5, 5, 7, 7, 8, 8, 8, 8, 8, 8, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};

#define MACROBLOCK_STUFFING 34
#define MACROBLOCK_ESCAPE 35

// Index des Arrays ist size, von 0 bis 8 (Tabelle D.12)
int diff_dc_size_codes_lum[9] = {0x4, 0x0, 0x1, 0x5, 0x6, 0xE, 0x1E, 0x3E, 0x7E};
int diff_dc_size_length_lum[9] = {3, 2, 2, 3, 3, 4, 5, 6, 7};
int diff_dc_size_codes_chrom[9] = {0x0, 0x1, 0x2, 0x6, 0xE, 0x1E, 0x3E, 0x7E, 0xFE};
int diff_dc_size_length_chrom[9] = {2, 2, 2, 3, 4, 5, 6, 7, 8};

// Index des Arrays ist size, von 0 bis 8 (Tabelle D.13)
int diff_dc_add_codes_pos[9] = {0x0, 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80};
int diff_dc_add_codes_neg[9] = {0x0, 0x0, 0x1, 0x3, 0x7, 0xF, 0x1F, 0x3F, 0x7F};
int diff_dc_add_length[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

// Tabelle D.15, der Index ist level ohne Vorzeichen, das muss noch extra hinzugefügt werden!
// Bei Index==0 steht drin, wieviele Levels da sind

int ac_codes_intra0[41] = {40, 3, 4, 5, 6, 38, 33, 10, 29, 24, 19, 16, 26, 25, 24, 23, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 24, 23, 22, 21, 20, 19, 18, 17, 16};
int ac_length_intra0[41] = {0, 2, 4, 5, 7, 8, 8, 10, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15};

int ac_codes_intra1[19] = {18, 3, 6, 37, 12, 27, 22, 21, 31, 30, 29, 28, 27, 26, 25, 19, 18, 17, 16};
int ac_length_intra1[19] = {0, 3, 6, 8, 10, 12, 13, 13, 15, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16};

int ac_codes_intra2[6] = {5, 5, 4, 11, 20, 20};
int ac_length_intra2[6] = {0, 4, 7, 10, 12, 13};

int ac_codes_intra3[5] = {4, 7, 36, 28, 19};
int ac_length_intra3[5] = {0, 5, 8, 12, 13};

int ac_codes_intra4[4] = {3, 6, 15, 18};
int ac_length_intra4[4] = {0, 5, 10, 12};

int ac_codes_intra5[4] = {3, 7, 9, 18};
int ac_length_intra5[4] = {0, 6, 10, 13};

int ac_codes_intra6[4] = {3, 5, 30, 20};
int ac_length_intra6[4] = {0, 6, 12, 16};

int ac_codes_intra7[3] = {2, 4, 21};
int ac_length_intra7[3] = {0, 6, 12};

int ac_codes_intra8[3] = {2, 7, 17};
int ac_length_intra8[3] = {0, 7, 12};

int ac_codes_intra9[3] = {2, 5, 17};
int ac_length_intra9[3] = {0, 7, 13};

int ac_codes_intra10[3] = {2, 39, 16};
int ac_length_intra10[3] = {0, 8, 13};

int ac_codes_intra11[3] = {2, 35, 26};
int ac_length_intra11[3] = {0, 8, 16};

int ac_codes_intra12[3] = {2, 34, 25};
int ac_length_intra12[3] = {0, 8, 16};

int ac_codes_intra13[3] = {2, 32, 24};
int ac_length_intra13[3] = {0, 8, 16};

int ac_codes_intra14[3] = {2, 14, 23};
int ac_length_intra14[3] = {0, 10, 16};

int ac_codes_intra15[3] = {2, 13, 22};
int ac_length_intra15[3] = {0, 10, 16};

int ac_codes_intra16[3] = {2, 8, 21};
int ac_length_intra16[3] = {0, 10, 16};

int ac_codes_intra17[2] = {1, 31};
int ac_length_intra17[2] = {0, 12};

int ac_codes_intra18[2] = {1, 26};
int ac_length_intra18[2] = {0, 12};

int ac_codes_intra19[2] = {1, 25};
int ac_length_intra19[2] = {0, 12};

int ac_codes_intra20[2] = {1, 23};
int ac_length_intra20[2] = {0, 12};

int ac_codes_intra21[2] = {1, 22};
int ac_length_intra21[2] = {0, 12};

int ac_codes_intra22[2] = {1, 31};
int ac_length_intra22[2] = {0, 13};

int ac_codes_intra23[2] = {1, 30};
int ac_length_intra23[2] = {0, 13};

int ac_codes_intra24[2] = {1, 29};
int ac_length_intra24[2] = {0, 13};

int ac_codes_intra25[2] = {1, 28};
int ac_length_intra25[2] = {0, 13};

int ac_codes_intra26[2] = {1, 27};
int ac_length_intra26[2] = {0, 13};

int ac_codes_intra27[2] = {1, 31};
int ac_length_intra27[2] = {0, 16};

int ac_codes_intra28[2] = {1, 30};
int ac_length_intra28[2] = {0, 16};

int ac_codes_intra29[2] = {1, 29};
int ac_length_intra29[2] = {0, 16};

int ac_codes_intra30[2] = {1, 28};
int ac_length_intra30[2] = {0, 16};

int ac_codes_intra31[2] = {1, 27};
int ac_length_intra31[2] = {0, 16};

int *ac_codes_intra[] = {
ac_codes_intra0,  ac_codes_intra1,  ac_codes_intra2,  ac_codes_intra3,
ac_codes_intra4,  ac_codes_intra5,  ac_codes_intra6,  ac_codes_intra7,
ac_codes_intra8,  ac_codes_intra9,  ac_codes_intra10, ac_codes_intra11,
ac_codes_intra12, ac_codes_intra13, ac_codes_intra14, ac_codes_intra15,
ac_codes_intra16, ac_codes_intra17, ac_codes_intra18, ac_codes_intra19,
ac_codes_intra20, ac_codes_intra21, ac_codes_intra22, ac_codes_intra23,
ac_codes_intra24, ac_codes_intra25, ac_codes_intra26, ac_codes_intra27,
ac_codes_intra28, ac_codes_intra29, ac_codes_intra30, ac_codes_intra31};

int *ac_length_intra[] = {
ac_length_intra0,  ac_length_intra1,  ac_length_intra2,  ac_length_intra3,
ac_length_intra4,  ac_length_intra5,  ac_length_intra6,  ac_length_intra7,
ac_length_intra8,  ac_length_intra9,  ac_length_intra10, ac_length_intra11,
ac_length_intra12, ac_length_intra13, ac_length_intra14, ac_length_intra15,
ac_length_intra16, ac_length_intra17, ac_length_intra18, ac_length_intra19,
ac_length_intra20, ac_length_intra21, ac_length_intra22, ac_length_intra23,
ac_length_intra24, ac_length_intra25, ac_length_intra26, ac_length_intra27,
ac_length_intra28, ac_length_intra29, ac_length_intra30, ac_length_intra31};

// Spezielle Codes
int ac_codes_special[2] = {2, 1};
int ac_length_special[2] = {2, 6};

#define BLOCK_EOB 0
#define BLOCK_ESCAPE 1

int ezMPEG_Init(ezMPEGStream *ms, const char *outfile, int hsize, int vsize, int picture_rate, int gop_size, int q_scale)
{
	int i, j;

	if(ms == NULL)
		return 0;

	if(outfile == NULL) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Please specify an output filename");
		return 0;
	}

	if(hsize < 16 || hsize > 768) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Horizontal size should be between 16 and 768");
		return 0;
	}

	if(vsize < 16 || vsize > 576) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Vertical size should be between 16 and 576");
		return 0;
	}

	if(picture_rate != 25) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Picture rate should be 25 (for now)");
		return 0;
	}

	if(gop_size == 0) {
		ezMPEG_SetError(ms, "ezMPEG_Init: GOP size should be 1 or greater");
		return 0;
	}

	if(q_scale < 1 || q_scale > 31) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Quantizer scale should be between 1 and 31");
		return 0;
	}

	ms->outfile = (char *)malloc((strlen(outfile) + 1) * sizeof(char));
	if(!ms->outfile) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Couldn't allocate enough memory");
		return 0;
	}
	strcpy(ms->outfile, outfile);
	ms->hsize = hsize / 16;
	ms->vsize = vsize / 16;
	ms->picture_rate = picture_rate;		// picture_rate;
	ms->gop_size = gop_size;
	ms->dc_prev[0] = 128;
	ms->dc_prev[1] = 128;
	ms->dc_prev[2] = 128;
	ms->q_scale = (float)q_scale;

	// Versteckte Felder
	ms->picture_count = 0;
	ms->buffersize = 8192;
	ms->buffercount = 0;
	ms->buffer = (char *)malloc(ms->buffersize * sizeof(char));
	if(!ms->buffer) {
		ezMPEG_SetError(ms, "ezMPEG_Init: Couldn't allocate enough memory");
		return 0;
	}

	ms->error_code = 0;
	strcpy(ms->error_msg, "");

	// Cosinustabelle füllen
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 4; j++) {
			if((i % 2))		// ungerade
				fcostable[i * 4 + j] = cos((M_PI * (2.0 * (float)j + 1.0) / 16.0) + (M_PI * (float)((i - 1) / 2) * (2.0 * (float)j + 1.0) / 8.0));
			else
				fcostable[i * 4 + j] = cos(M_PI * (float)(i / 2) * (2.0 * (float)j + 1.0) / 8.0);
		}
	}

	return 1;
}

int ezMPEG_Start(ezMPEGStream *ms)
{
	if(ms == NULL)
		return 0;

	// Datei zum Reinschreiben aufmachen
	ms->out = fopen(ms->outfile, "wb");
	if(ms->out == NULL) {
		ezMPEG_SetError(ms, "ezMPEG_Start: Couldn't open output file");
		return 0;
	}

	// BitBuffer initialisieren
	ezMPEG_InitBitBuffer(ms);

	// MPEG Video Sequence Header schreiben
	ezMPEG_WriteSequenceHeader(ms);

	if(ms->error_code)
		return 0;

	return 1;
}

void ezMPEG_WriteSequenceHeader(ezMPEGStream *ms)
{
	ezMPEG_ByteAlign(ms);

	ezMPEG_WriteBits(ms, 0x1B3, 32);						// sequence_header_code
	ezMPEG_WriteBits(ms, ms->hsize & 0xFF, 8);			// horizontal_size (in Macroblocks)
	ezMPEG_WriteBits(ms, (ms->hsize >> 8) & 0xF, 4);		//
	ezMPEG_WriteBits(ms, ms->vsize & 0xFF, 8);			// vertical_size (in Macroblocks)
	ezMPEG_WriteBits(ms, (ms->vsize >> 8) & 0xF, 4);		//
	ezMPEG_WriteBits(ms, 1, 4);							// pel_aspect_ratio (1:1)
	ezMPEG_WriteBits(ms, 3, 4);							// picture_rate (25Hz)

	ezMPEG_WriteBits(ms, 0xFFFF, 16);					// variable_length_bitrate (18x 1)
	ezMPEG_WriteBits(ms, 0x3, 2);						//

	ezMPEG_WriteBits(ms, 1, 1);							// marker_bit (1)
	ezMPEG_WriteBits(ms, 20, 10);						// vbv_buffer_size (20)
	ezMPEG_WriteBits(ms, 1, 1);							// constrained_parameter_flags (1)
	ezMPEG_WriteBits(ms, 0, 1);							// load_intra_quantizer_matrix (0)
	ezMPEG_WriteBits(ms, 0, 1);							// load_non_intra_quantizer_maxtrix (0)

	if(ms->error_code)
		strcpy(ms->error_msg, "ezMPEG_WriteSequenceHeader: Couldn't write sequence header");

	return;
}

void ezMPEG_InitBitBuffer(ezMPEGStream *ms)
{
	ezMPEG_WriteBits(ms, 0, -1);

	return;
}

void ezMPEG_ByteAlign(ezMPEGStream *ms)
{
	ezMPEG_WriteBits(ms, 0, -2);

	return;
}

int ezMPEG_WriteBits(ezMPEGStream *ms, unsigned int value, int length)
{
	int temp;

	if(length == -1) {
		ms->buf = 0;
		ms->pos = 0;
		return 1;
	}
	if(length == -2) {
		if(ms->pos == 0)
			return 1;
		length = 8 - ms->pos;
		value = 0;
	}

	do {
		if(length >= 8) {
			temp = value >> ((length - 8) + ms->pos);
			ms->buf += temp;
			ms->buffer[ms->buffercount++] = ms->buf;
			length -= (8 - ms->pos);
			ms->pos = 0;
			ms->buf = 0;
		}
		else {
			if(length + ms->pos < 8) {
				temp = value << (8 - length);
				temp = temp & 0xFF;
				temp = temp >> ms->pos;
				ms->buf += temp;
				ms->pos += length;
				length = 0;
			}
			else {
				temp = value << (8 - length);
				temp = temp & 0xFF;
				temp = temp >> ms->pos;
				ms->buf += temp;
				ms->buffer[ms->buffercount++] = ms->buf;
				length -= (8 - ms->pos);
				ms->buf = 0;
				ms->pos = 0;
			}
		}

		if(ms->buffercount >= ms->buffersize) {
			if(fwrite(ms->buffer, ms->buffercount, 1, ms->out) < 1) {
				ezMPEG_SetError(ms, "ezMPEG_WriteBits: Couldn't write buffer to file");
				return 0;
			}
			ms->buffercount = 0;
		}
	}while(length != 0);

	return 1;
}

int ezMPEG_Add(ezMPEGStream *ms, unsigned char *picture)
{
	int m;
	Macroblock mb;

	// Schauen, ob eine neue GOP angefangen werden muss
	if(ms->picture_count % ms->gop_size == 0)
		ezMPEG_WriteGOPHeader(ms);

	ezMPEG_WritePictureHeader(ms);

	for(m = 0; m < ms->hsize * ms->vsize; m++) {
		// Das Bild in Macroblocks und YCbCr umwandeln
		mb = ezMPEG_GetMacroblock(ms, picture, m /* Nummer */);

		// Das Bild transformieren und scalieren
		mb = ezMPEG_QuantizeMacroblock(ms, mb);

		// Macroblock codieren und schreiben
		ezMPEG_WriteMacroblock(ms, mb);
	}

	ms->picture_count++;

	if(ms->error_code)
		return 0;

	return 1;
}

void ezMPEG_WriteMacroblock(ezMPEGStream *ms, Macroblock mb)
{
	int j, k, run, level, dc_diff;

	// Macroblock Header, macroblock_address_increment
	ezMPEG_WriteBits(ms, macroblock_address_increment_code[1], macroblock_address_increment_length[1]);

	if(ms->q_scale != 1.0) {
		ezMPEG_WriteBits(ms, 1, 2);					// macroblock_type (I-Block, intra-q)
		ezMPEG_WriteBits(ms, (int)ms->q_scale, 5);	// nochmals quantizer_scale wie im Slice
	}
	else
		ezMPEG_WriteBits(ms, 1, 1);					// macroblock_type (I-Block, intra-d)

	// Ueber jeden Block in diesem Macroblock gehen (zuerst Luminance)
	for(j = 0; j < 4; j++) {

		// DC-Koeffizienten codieren
		mb.lum[j].a[0] += (mb.lum[j].a[0] > 0.0) ? 0.5 : -0.5;
		dc_diff = (int)mb.lum[j].a[0] - ms->dc_prev[0];

		ezMPEG_EncodeDC(ms, dc_diff, LUMINANCE);
		ms->dc_prev[0] += dc_diff;

		// AC-Koeffizienten Runlength codieren
		run = 0;
		level = 0;

		for(k = 1; k < 64; k++) {
			mb.lum[j].a[zigzag[k]] += (mb.lum[j].a[zigzag[k]] > 0.0) ? 0.5 : -0.5;
			level = (int)mb.lum[j].a[zigzag[k]];
			if(level != 0) {
				ezMPEG_EncodeAC(ms, run, level);
				run = 0;
			}
			else
				run++;
		}
		ezMPEG_WriteBits(ms, ac_codes_special[BLOCK_EOB], ac_length_special[BLOCK_EOB]);
	}

	// Ueber den Cb-Block gehen
	mb.chrom[0].a[0] += (mb.chrom[0].a[0] > 0.0) ? 0.5 : -0.5;
	dc_diff = (int)mb.chrom[0].a[0] - ms->dc_prev[1];

	ezMPEG_EncodeDC(ms, dc_diff, CHROMINANCE);
	ms->dc_prev[1] += dc_diff;

	run = 0;
	level = 0;
	for(k = 1; k < 64; k++) {
		mb.chrom[0].a[zigzag[k]] += (mb.chrom[0].a[zigzag[k]] > 0.0) ? 0.5 : -0.5;
		level = (int)mb.chrom[0].a[zigzag[k]];
		if(level != 0) {
			ezMPEG_EncodeAC(ms, run, level);
			run = 0;
		}
		else
			run++;
	}
	ezMPEG_WriteBits(ms, ac_codes_special[BLOCK_EOB], ac_length_special[BLOCK_EOB]);

	// Ueber den Cr-Block gehen
	mb.chrom[1].a[0] += (mb.chrom[1].a[0] > 0.0) ? 0.5 : -0.5;
	dc_diff = (int)mb.chrom[1].a[0] - ms->dc_prev[2];

	ezMPEG_EncodeDC(ms, dc_diff, CHROMINANCE);
	ms->dc_prev[2] += dc_diff;

	run = 0;
	level = 0;
	for(k = 1; k < 64; k++) {
		mb.chrom[1].a[zigzag[k]] += (mb.chrom[1].a[zigzag[k]] > 0.0) ? 0.5 : -0.5;
		level = (int)mb.chrom[1].a[zigzag[k]];
		if(level != 0) {
			ezMPEG_EncodeAC(ms, run, level);
			run = 0;
		}
		else
			run++;
	}
	ezMPEG_WriteBits(ms, ac_codes_special[BLOCK_EOB], ac_length_special[BLOCK_EOB]);

	return;
}

void ezMPEG_WriteGOPHeader(ezMPEGStream *ms)
{
	ezMPEG_ByteAlign(ms);

	ezMPEG_WriteBits(ms, 0x1B8, 32);	// group_start_code
	ezMPEG_WriteBits(ms, 0, 1);		// time_code
	ezMPEG_WriteBits(ms, ((ms->picture_count / ms->picture_rate) / 60) / 24, 5);		// Stunden
	ezMPEG_WriteBits(ms, ((ms->picture_count / ms->picture_rate) / 60) % 24, 6);		// Minuten
	ezMPEG_WriteBits(ms, 1, 1);		//
	ezMPEG_WriteBits(ms, (ms->picture_count / ms->picture_rate) % 60, 6);			// Sekunden
	ezMPEG_WriteBits(ms, ms->picture_count % ms->picture_rate, 6);					// picture_time_code
	ezMPEG_WriteBits(ms, 1, 1);		// closed_gop (1)
	ezMPEG_WriteBits(ms, 0, 1);		// broken_link (0)

	if(ms->error_code)
		ezMPEG_SetError(ms, "ezMPEG_WriteGOPHeader: Couldn't write GOP header");

	return;
}

void ezMPEG_WritePictureHeader(ezMPEGStream *ms)
{
	ezMPEG_ByteAlign(ms);
	ezMPEG_WriteBits(ms, 0x100, 32);	// picture_start_code (0x100)

	// temporal_reference (0) wird bei jedem Bild in dieser GOP um 1 erhöht
	// und fängt bei einer neuen GOP wieder bei 0 an
	ezMPEG_WriteBits(ms, ms->picture_count % ms->gop_size, 10);

	ezMPEG_WriteBits(ms, 1, 3);		// picture_coding_type (1, I-Picture)
	ezMPEG_WriteBits(ms, 0, 16);		// vbv_delay (0, kann irgendwas sein wenn variable Bitrate)

	ezMPEG_WriteBits(ms, 0, 1);		// extra_bit_picture

	// Ein Slice pro Picture sollte reichen
	ezMPEG_ByteAlign(ms);
	ezMPEG_WriteBits(ms, 0x101, 32);	// slice_start_code (vertikale Position diese Slices in Macroblockeinheiten)
									// horizontale Position gegeben durch macroblock_address(_increment) des ersten
									// Macroblocks in diesem Slice. Jeder Slice ist 16 Pels hoch
									// Reset der DC-Keoff. für differential-Codierung
									// dc_lum_prev = 128, dc_cb_prev = 128, dc_cr_prev = 128
									// slice_vertical_position = macroblock_row + 1;

	// quantize_scale, in jedem Macroblockheader muss macroblock_type=intra_q (01), oder intra_d (1) sein.
	// Wenn intra_q => macroblock_quant wird == 1 sein
	ezMPEG_WriteBits(ms, (int)ms->q_scale, 5);

	ezMPEG_WriteBits(ms, 0, 1);		// extra_bit_slice

	ms->dc_prev[0] = 128;
	ms->dc_prev[1] = 128;
	ms->dc_prev[2] = 128;

	if(ms->error_code)
		ezMPEG_SetError(ms, "ezMPEG_WritePictureHeader: Couldn't write picture header");

	return;
}

Macroblock ezMPEG_GetMacroblock(ezMPEGStream *ms, unsigned char *picture, int number)
{
	int i, j, k, l, m;
	int mb_r[64], mb_g[64], mb_b[64];
	int offset;
	Macroblock mb;

	i = number / ms->hsize;
	j = number % ms->hsize;
	offset = 3 * ms->hsize * 16;

	// 1. Block
	m = 0;
	for(k = i * 16; k < i * 16 + 8; k++) {
		for(l = j * 16 * 3; l < j * 16 * 3 + 24; l += 3) {
			mb.lum[0].a[m] = 0.299 * (float)picture[k * offset + l] + 0.587 * (float)picture[k * offset + l + 1] + 0.114 * (float)picture[k * offset + l + 2];

			mb_r[m] = picture[k * offset + l];
			mb_g[m] = picture[k * offset + l + 1];
			mb_b[m] = picture[k * offset + l + 2];

			m++;
		}
	}

	// 2. Block
	m = 0;
	for(k = i * 16; k < i * 16 + 8; k++) {
		for(l = j * 16 * 3 + 24; l < j * 16 * 3 + 48; l += 3) {
			mb.lum[1].a[m] = 0.299 * (float)picture[k * offset + l] + 0.587 * (float)picture[k * offset + l + 1] + 0.114 * (float)picture[k * offset + l + 2];

			mb_r[m] += picture[k * offset + l];
			mb_g[m] += picture[k * offset + l + 1];
			mb_b[m] += picture[k * offset + l + 2];

			m++;
		}
	}

	// 3. Block
	m = 0;
	for(k = i * 16 + 8; k < (i + 1) * 16; k++) {
		for(l = j * 16 * 3; l < j * 16 * 3 + 24; l += 3) {
			mb.lum[2].a[m] = 0.299 * (float)picture[k * offset + l] + 0.587 * (float)picture[k * offset + l + 1] + 0.114 * (float)picture[k * offset + l + 2];

			mb_r[m] += picture[k * offset + l];
			mb_g[m] += picture[k * offset + l + 1];
			mb_b[m] += picture[k * offset + l + 2];

			m++;
		}
	}

	// 4. Block
	m = 0;
	for(k = i * 16 + 8; k < (i + 1) * 16; k++) {
		for(l = j * 16 * 3 + 24; l < j * 16 * 3 + 48; l += 3) {
			mb.lum[3].a[m] = 0.299 * (float)picture[k * offset + l] + 0.587 * (float)picture[k * offset + l + 1] + 0.114 * (float)picture[k * offset + l + 2];

			mb_r[m] += picture[k * offset + l];
			mb_g[m] += picture[k * offset + l + 1];
			mb_b[m] += picture[k * offset + l + 2];

			m++;
		}
	}

	for(m = 0; m < 64; m++) {
		mb.chrom[0].a[m] = -0.1687 * (float)mb_r[m] * 0.25 - 0.3313 * (float)mb_g[m] * 0.25 + 0.5 * (float)mb_b[m] * 0.25 + 128.0;
		mb.chrom[1].a[m] = 0.5 * (float)mb_r[m] * 0.25 - 0.4187 * (float)mb_g[m] * 0.25 - 0.0813 * (float)mb_b[m] * 0.25 + 128.0;
	}

	return mb;
}

Macroblock ezMPEG_QuantizeMacroblock(ezMPEGStream *ms, Macroblock mb)
{
	int i, j, l, p;
	float w[8];
	Macroblock tempmb;

	// Ueber alle Luminanceblocks gehen
	for(l = 0; l < 4; l++) {
		// Ueber alle Einträge im Block gehen
		for(i = 0; i < 8; i++) {
			for(j = 0; j < 8; j++) {

				for(p = 0; p < 8; p++) {
						// Koeffizienten mit FDCT berechnen
						w[p] = ezMPEG_1DFDCT(&mb.lum[l].a[p * 8], j);
				}

				tempmb.lum[l].a[i * 8 + j] = ezMPEG_1DFDCT(w, i) * c(i) * c(j);

				// Quantifizierung
				if(i == 0 && j == 0)
					tempmb.lum[l].a[i * 8 + j] /= 8.0;
				else		// mit quantizer_scale (slice_header und macroblock_header beachten)
					tempmb.lum[l].a[i * 8 + j] *= 8.0 / (ms->q_scale * intraquant[i * 8 + j]);
			}
		}
	}

	// Ueber alle Chrominanceblocks gehen
	for(l = 0; l < 2; l++) {
		// Ueber alle Einträge im Block gehen
		for(i = 0; i < 8; i++) {
			for(j = 0; j < 8; j++) {

				for(p = 0; p < 8; p++) {
					// Koeffizienten mit FDCT berechnen
					w[p] = ezMPEG_1DFDCT(&mb.chrom[l].a[p * 8], j);
				}

				tempmb.chrom[l].a[i * 8 + j] = ezMPEG_1DFDCT(w, i) * c(i) * c(j);

				// Quantifizierung
				if(i == 0 && j == 0)
					tempmb.chrom[l].a[i * 8 + j] /= 8.0;
				else		// mit quantizer_scale
					tempmb.chrom[l].a[i * 8 + j] *= 8.0 / (ms->q_scale * intraquant[i * 8 + j]);
			}
		}
	}

	return tempmb;
}

float ezMPEG_1DFDCT(float *v, int i)
{
	int n;
	float temp;

	temp = 0.0;
	if((i % 2)) {	// i ungerade
		for(n = 0; n < 4; n++)
			temp += (v[n] - v[7 - n]) * fcostable[i * 4 + n];
	}
	else {			// i gerade
		for(n = 0; n < 4; n++)
			temp += (v[n] + v[7 - n]) * fcostable[i * 4 + n];
	}

	return temp;
}

void ezMPEG_EncodeAC(ezMPEGStream *ms, int runlength, int level)
{
	int level_abs;

	level_abs = level < 0 ? -level : level;

	// ac_codes_intra[runlength][0]: Dieser Wert dort gibt an, ob der entsprechende Level
	// direkt codiert werden kann:
	if((level_abs > ac_codes_intra[runlength][0]) || runlength > 31) {

		// Benutze ac_codes_special[BLOCK_ESCAPE]
		ezMPEG_WriteBits(ms, ac_codes_special[BLOCK_ESCAPE], ac_length_special[BLOCK_ESCAPE]);

		// Table D.16, Codierung der Runlenght, wenn runlength/level-Kombination in Tabel D.15 nicht vorkommt:
		ezMPEG_WriteBits(ms, runlength, 6);

		// Der Escape-Code wurde oben schon ausgegeben und es ist kein Array nötig, da die runlength direkt codiert wird

		// Hier kommet noch Tabelle D.17 zur Anwendung
		// Hier muss noch der Level codiert werden:

		if(level > 0) {
			if(level >= 1 && level < 128)
				ezMPEG_WriteBits(ms, level, 8);
			else
				ezMPEG_WriteBits(ms, level, 16);
		}
		else {
			if(level <= -1 && level > -128) {
				ezMPEG_WriteBits(ms, 256 + level, 8);
			}
			else {
				ezMPEG_WriteBits(ms, 32896 + (level + 128), 16);
			}
		}
	 }
	 else {
		// Table D.15
		// code = ac_codes_intra[runlength][abs(level)];
		// length = ac_length_intra[runlength][abs(level)];
		ezMPEG_WriteBits(ms, ac_codes_intra[runlength][level_abs], ac_length_intra[runlength][level_abs]);

		// Und noch das Vorzeichen
		if(level < 0.0) {
 			ezMPEG_WriteBits(ms, 1, 1);
		}
 		else {
			ezMPEG_WriteBits(ms, 0, 1);
		}
	}

	if(ms->error_code)
		ezMPEG_SetError(ms, "ezMPEG_EncodeAC: Couldn't write ac codes");

	return;
}

void ezMPEG_EncodeDC(ezMPEGStream *ms, int dc_diff, int type)
{
	int dc_diff_abs;
	int code = 0, length = 0;

	dc_diff_abs = dc_diff < 0 ? -dc_diff : dc_diff;

	if(type == LUMINANCE) {
		if(dc_diff_abs == 0) {
			code   = diff_dc_size_codes_lum[0];
			length = diff_dc_size_length_lum[0];
		}
		else if(dc_diff_abs == 1) {
			code   = diff_dc_size_codes_lum[1];
			length = diff_dc_size_length_lum[1];
		}
		else if(dc_diff_abs >= 2 && dc_diff_abs <= 3) {
			code   = diff_dc_size_codes_lum[2];
			length = diff_dc_size_length_lum[2];
		}
		else if(dc_diff_abs >= 4 && dc_diff_abs <= 7) {
			code   = diff_dc_size_codes_lum[3];
			length = diff_dc_size_length_lum[3];
		}
		else if(dc_diff_abs >= 8 && dc_diff_abs <= 15) {
			code   = diff_dc_size_codes_lum[4];
			length = diff_dc_size_length_lum[4];
		}
		else if(dc_diff_abs >= 16 && dc_diff_abs <= 31) {
			code   = diff_dc_size_codes_lum[5];
			length = diff_dc_size_length_lum[5];
		}
		else if(dc_diff_abs >= 32 && dc_diff_abs <= 63) {
			code   = diff_dc_size_codes_lum[6];
			length = diff_dc_size_length_lum[6];
		}
		else if(dc_diff_abs >= 64 && dc_diff_abs <= 127) {
			code   = diff_dc_size_codes_lum[7];
			length = diff_dc_size_length_lum[7];
		}
		else if(dc_diff_abs >= 128 && dc_diff_abs <= 255) {
			code   = diff_dc_size_codes_lum[8];
			length = diff_dc_size_length_lum[8];
		}
		else {
			ezMPEG_SetError(ms, "ezMPEG_EncodeDC: FATAL! absolute dc difference > 255 (Luminance)");
		}
	}
	else if(type == CHROMINANCE) {
		if(dc_diff_abs == 0) {
			code   = diff_dc_size_codes_chrom[0];
			length = diff_dc_size_length_chrom[0];
		}
		else if(dc_diff_abs == 1) {
			code   = diff_dc_size_codes_chrom[1];
			length = diff_dc_size_length_chrom[1];
		}
		else if(dc_diff_abs >= 2 && dc_diff_abs <= 3) {
			code   = diff_dc_size_codes_chrom[2];
			length = diff_dc_size_length_chrom[2];
		}
		else if(dc_diff_abs >= 4 && dc_diff_abs <= 7) {
			code   = diff_dc_size_codes_chrom[3];
			length = diff_dc_size_length_chrom[3];
		}
		else if(dc_diff_abs >= 8 && dc_diff_abs <= 15) {
			code   = diff_dc_size_codes_chrom[4];
			length = diff_dc_size_length_chrom[4];
		}
		else if(dc_diff_abs >= 16 && dc_diff_abs <= 31) {
			code   = diff_dc_size_codes_chrom[5];
			length = diff_dc_size_length_chrom[5];
		}
		else if(dc_diff_abs >= 32 && dc_diff_abs <= 63) {
			code   = diff_dc_size_codes_chrom[6];
			length = diff_dc_size_length_chrom[6];
		}
		else if(dc_diff_abs >= 64 && dc_diff_abs <= 127) {
			code   = diff_dc_size_codes_chrom[7];
			length = diff_dc_size_length_chrom[7];
		}
		else if(dc_diff_abs >= 128 && dc_diff_abs <= 255) {
			code   = diff_dc_size_codes_chrom[8];
			length = diff_dc_size_length_chrom[8];
		}
		else {
			ezMPEG_SetError(ms, "ezMPEG_EncodeDC: FATAL! absolute dc difference > 255 (Chrominance)");
		}
	}
	else {
		ezMPEG_SetError(ms, "ezMPEG_EncodeDC: FATAL! Unknown coefficient type");
	}

	ezMPEG_WriteBits(ms, code, length);

	if(dc_diff == 0) {
		return;
	}

	if(dc_diff < 0) {
		if(dc_diff == -1) {
			code = diff_dc_add_codes_neg[1];
 			length = diff_dc_add_length[1];
 		}
		else if(dc_diff <= -2 && dc_diff >= -3) {
			code = diff_dc_add_codes_neg[2] - (-2 - dc_diff);
			length = diff_dc_add_length[2];
		}
		else if(dc_diff <= -4 && dc_diff >= -7) {
			code = diff_dc_add_codes_neg[3] - (-4 - dc_diff);
			length = diff_dc_add_length[3];
		}
		else if(dc_diff <= -8 && dc_diff >= -15) {
			code = diff_dc_add_codes_neg[4] - (-8 - dc_diff);
			length = diff_dc_add_length[4];
		}
		else if(dc_diff <= -16 && dc_diff >= -31) {
			code = diff_dc_add_codes_neg[5] - (-16 - dc_diff);
			length = diff_dc_add_length[5];
		}
		else if(dc_diff <= -32 && dc_diff >= -63) {
			code = diff_dc_add_codes_neg[6] - (-32 - dc_diff);
			length = diff_dc_add_length[6];
		}
		else if(dc_diff <= -64 && dc_diff >= -127) {
			code = diff_dc_add_codes_neg[7] - (-64 - dc_diff);
			length = diff_dc_add_length[7];
		}
		else if(dc_diff <= -128 && dc_diff >= -255) {
			code = diff_dc_add_codes_neg[8] - (-128 - dc_diff);
			length = diff_dc_add_length[8];
		}
		else {
			ezMPEG_SetError(ms, "ezMPEG_EncodeDC: FATAL! dc difference < -255");
		}
	}
	else {
		if(dc_diff == 1) {
			code = diff_dc_add_codes_pos[1];
			length = diff_dc_add_length[1];
		}
		else if(dc_diff >= 2 && dc_diff <= 3) {
			code = diff_dc_add_codes_pos[2] + (dc_diff - 2);
			length = diff_dc_add_length[2];
		}
		else if(dc_diff >= 4 && dc_diff <= 7) {
			code = diff_dc_add_codes_pos[3] + (dc_diff - 4);
			length = diff_dc_add_length[3];
		}
		else if(dc_diff >= 8 && dc_diff <= 15) {
			code = diff_dc_add_codes_pos[4] + (dc_diff - 8);
			length = diff_dc_add_length[4];
		}
		else if(dc_diff >= 16 && dc_diff <= 31) {
			code = diff_dc_add_codes_pos[5] + (dc_diff - 16);
			length = diff_dc_add_length[5];
		}
		else if(dc_diff >= 32 && dc_diff <= 63) {
			code = diff_dc_add_codes_pos[6] + (dc_diff - 32);
			length = diff_dc_add_length[6];
		}
		else if(dc_diff >= 64 && dc_diff <= 127) {
			code = diff_dc_add_codes_pos[7] + (dc_diff - 64);
			length = diff_dc_add_length[7];
		}
		else if(dc_diff >= 128 && dc_diff <= 255) {
			code = diff_dc_add_codes_pos[8] + (dc_diff - 128);
			length = diff_dc_add_length[8];
		}
		else {
			ezMPEG_SetError(ms, "ezMPEG_EncodeDC: FATAL! dc difference > 255");
		}
	}

	ezMPEG_WriteBits(ms, code, length);

	return;
}

int ezMPEG_Finalize(ezMPEGStream *ms)
{
	// Den Stream mit dem entsprechenden Code beenden
	// und den Buffer flushen
	ezMPEG_ByteAlign(ms);
	ezMPEG_WriteBits(ms, 0x01B7, 32);		// sequence_end_code

	ezMPEG_FlushBuffer(ms);

	// ms->out schliessen
	fclose(ms->out);

	// Speicher freigeben
	free(ms->outfile);
	free(ms->buffer);

	if(ms->error_code)
		return 0;

	return 1;
}

void ezMPEG_FlushBuffer(ezMPEGStream *ms)
{
	if(fwrite(ms->buffer, ms->buffercount, 1, ms->out) < 1)
		ezMPEG_SetError(ms, "ezMPEG_FlushBuffer: Couldn't write buffer to file");

	ms->buffercount = 0;

	return;
}

void ezMPEG_SetError(ezMPEGStream *ms, const char *error_msg)
{
	if(ms != NULL && error_msg != NULL) {
		ms->error_code = 1;
		strcpy(ms->error_msg, error_msg);
	}

	return;
}

char *ezMPEG_GetLastError(ezMPEGStream *ms)
{
	ms->error_code = 0;
	return ms->error_msg;
}

void ezMPEG_Resize(ezMPEGStream *ms, unsigned char *outbild, unsigned char *inbild, int x, int y, int u, int v)
{
	float hor, ver;
	int a, b, c, d, e, f, g, h;

	if(outbild == NULL || inbild == NULL)
		ezMPEG_SetError(ms, "ezMPEG_Resize: Nullpointer");

	if(x <= 0 || y <= 0 || u <= 0 || v <= 0)
		ezMPEG_SetError(ms, "ezMPEG_Resize: Dimensions must be greater than 0");

	if(ms->error_code)
		return;

	hor = (float)u / (float)x;
	ver = (float)v / (float)y;

	c = y;
	d = x;

	if(ver > 1.0) {
		c = v;
	}
	if(hor > 1.0) {
		d = u;
	}


	for(a = 0; a < c; a++) {
		for(b = 0; b < d; b++) {
			if(ver > 1.0) {
				e = a * u;
				g = (int)((float)a / ver) * x;
			}
			else {
				e = (int)((float)a * ver) * u;
				g = a * x;
			}

			if(hor > 1.0) {
				f = b;
				h = (int)((float)b / hor);
			}
			else {
				f = (int)((float)b * hor);
				h = b;
			}

			outbild[e * 3 + f * 3] = inbild[g * 3 + h * 3];
			outbild[e * 3 + f * 3 + 1] = inbild[g * 3 + h * 3 + 1];
			outbild[e * 3 + f * 3 + 2] = inbild[g * 3 + h * 3 + 2];
		}
	}

	return;
}
