NAME
  checkdns - Validate current network configuration
  
SYNOPSIS
  checkdns host delay ?connect?
__________________________________________________________________________

DESCRIPTION
  Performs a quick check of the current network configuration using
  'gethostbyname(const char *name)'. 

  host - string containing hostname, can be NULL.
  delay - integer, timeout in seconds
  connect - integer, optional, if positive, connect to host to validate
  
