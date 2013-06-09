/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Set to 1 when building package */
#define BUILD_TclOO 

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Do we have <limits.h>? */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `lseek64' function. */
#define HAVE_LSEEK64 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Do we have <net/errno.h>? */
/* #undef HAVE_NET_ERRNO_H */

/* Define to 1 if you have the `open64' function. */
#define HAVE_OPEN64 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Is 'struct dirent64' in <sys/types.h>? */
/* #undef HAVE_STRUCT_DIRENT64 */

/* Is 'struct stat64' in <sys/stat.h>? */
#define HAVE_STRUCT_STAT64 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Is off64_t in <sys/types.h>? */
#define HAVE_TYPE_OFF64_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Compiler support for module scope symbols */
#define MODULE_SCOPE extern __attribute__((__visibility__("hidden")))

/* Do we have <dirent.h>? */
/* #undef NO_DIRENT_H */

/* Do we have <dlfcn.h>? */
/* #undef NO_DLFCN_H */

/* Do we have <errno.h>? */
/* #undef NO_ERRNO_H */

/* Do we have <float.h>? */
/* #undef NO_FLOAT_H */

/* Do we have <limits.h>? */
/* #undef NO_LIMITS_H */

/* Do we have <stdlib.h>? */
/* #undef NO_STDLIB_H */

/* Do we have <string.h>? */
/* #undef NO_STRING_H */

/* Do we have <sys/wait.h>? */
/* #undef NO_SYS_WAIT_H */

/* Do we have <values.h>? */
/* #undef NO_VALUES_H */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "TclOO"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "TclOO 1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "tcloo"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0"

/* Is this a static build? */
/* #undef STATIC_BUILD */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Is memory debugging enabled? */
/* #undef TCL_MEM_DEBUG */

/* Are we building with threads enabled? */
#define TCL_THREADS 1

/* Are wide integers to be implemented with C 'long's? */
/* #undef TCL_WIDE_INT_IS_LONG */

/* What type should be used to define wide integers? */
#define TCL_WIDE_INT_TYPE long long

/* UNDER_CE version */
/* #undef UNDER_CE */

/* Do we need a special AIX hack for timezones? */
/* #undef USE_DELTA_FOR_TZ */

/* Should always be 1 */
#define USE_TCL_STUBS 1

/* Do we want to use the threaded memory allocator? */
#define USE_THREAD_ALLOC 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Add the _ISOC99_SOURCE flag when building */
/* #undef _ISOC99_SOURCE */

/* Add the _LARGEFILE64_SOURCE flag when building */
#define _LARGEFILE64_SOURCE 1

/* Add the _LARGEFILE_SOURCE64 flag when building */
/* #undef _LARGEFILE_SOURCE64 */

/* # needed in sys/socket.h Should OS/390 do the right thing with sockets? */
/* #undef _OE_SOCKETS */

/* Do we really want to follow the standard? Yes we do! */
/* #undef _POSIX_PTHREAD_SEMANTICS */

/* Do we want the reentrant OS API? */
#define _REENTRANT 1

/* Do we want the thread-safe OS API? */
#define _THREAD_SAFE 1

/* _WIN32_WCE version */
/* #undef _WIN32_WCE */

/* Do we want to use the XOPEN network library? */
/* #undef _XOPEN_SOURCE_EXTENDED */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
