## Process this file with automake to produce Makefile.in

AUTOMAKE_OPTIONS = dejagnu

SUBDIRS = src

EXTRA_DIST = \
	boards \
	common \
	config \
	lib \
	v1_44 \
	v1_45 \
	v1_46 \
	v1_48

RUNTEST=$(RUNTEST_BIN)
DEJATOOL = common $(PP_VERSION)
AM_RUNTESTFLAGS = BINFILE=src/test GDB=$(GDB) PP_VERSION=$(PP_VERSION)

export PYTHONPATH=$(top_srcdir)/py

## vim: set shiftwidth=4 tabstop=4 noexpandtab:
