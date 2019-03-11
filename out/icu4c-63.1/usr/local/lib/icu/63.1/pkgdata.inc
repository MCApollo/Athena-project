GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.63.1.dylib
COMPILE=aarch64-apple-darwin18.2-clang -DU_ATTRIBUTE_DEPRECATED=   -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1  -O2 -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/usr/local/include  -dynamic
GENLIB=aarch64-apple-darwin18.2-clang -dynamiclib -dynamic -O2 -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-rpath,/usr/local/lib 
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,63 -Wl,-current_version -Wl,63.1 -install_name /usr/local/lib/
RPATH_FLAGS=
BIR_LDFLAGS=
AR=aarch64-apple-darwin18.2-ar
ARFLAGS=r -c
RANLIB=aarch64-apple-darwin18.2-ranlib
INSTALL_CMD=/usr/bin/install -c
