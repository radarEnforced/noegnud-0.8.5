#ifndef _NOEGNUD_CONFIG_H_
#define _NOEGNUD_CONFIG_H_

#define NOEGNUD_NAME "noegnud"
#define NOEGNUD_VERSION_VERSION "0"
#define NOEGNUD_VERSION_REVISION "8"
#define NOEGNUD_VERSION_PATCHLEVEL "5"
#define NOEGNUD_VERSION NOEGNUD_VERSION_VERSION "." NOEGNUD_VERSION_REVISION "." NOEGNUD_VERSION_PATCHLEVEL
#define NOEGNUD_BUILD __DATE__ " " __TIME__

#define NOEGNUD_FULLNAME NOEGNUD_NAME "-" NOEGNUD_VERSION

#define NOEGNUD_DATADIR "data"

#ifdef NETHACK
# define VARIANT_NAME "nethack"
# define VARIANT_VERSION "3.4.3"
# define VARIANT_TILETYPE "nethack"
#endif

#ifdef SLASHEM
# define VARIANT_NAME "slashem"
# define VARIANT_VERSION "0.0.7E7F3"
# define VARIANT_TILETYPE "slashem"
#endif

#ifndef VARIANT_NAME
#error variant type not set !
#endif

#define VARIANT_FULLNAME VARIANT_NAME "-" VARIANT_VERSION

#ifndef VARIANT_TILETYPE
# define VARIANT_TILETYPE VARIANT_FULLNAME
#endif

#define NOEGNUD_FULLNAMEVERSION NOEGNUD_FULLNAME "-" VARIANT_FULLNAME

#ifdef __WIN32__
# define NOEGNUD_HOMECONFIG_DIR NOEGNUD_NAME "-userdata"
# define NOEGNUD_HOMECONFIG_FILENAME "configuration-" NOEGNUD_FULLNAME ".txt"
#else
# define NOEGNUD_HOMECONFIG_DIR "." NOEGNUD_NAME
# define NOEGNUD_HOMECONFIG_FILENAME NOEGNUD_FULLNAME ".config"
#endif

#endif //_NOEGNUD_CONFIG_H_
