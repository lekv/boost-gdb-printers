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
	v1_47 \
	v1_48 \
	v1_49 \
	v1_50 \
	v1_51 \
	v1_52 \
	v1_53 \
	v1_54 \
	v1_55 \
	v1_56 \
	v1_57 \
	v1_58 \
	v1_59 \
	v1_60 \
	v1_61 \
	v1_62 \
	v1_63

CLEANFILES = v1_*.log v1_*.sum

RUNTEST=$(RUNTEST_BIN)
DEJATOOL = $(PP_VERSION)
AM_RUNTESTFLAGS = BINFILE=src/test GDB=$(GDB) PP_VERSION=$(PP_VERSION)

export PYTHONPATH=$(top_srcdir)/py

## vim: set shiftwidth=4 tabstop=4 noexpandtab:
