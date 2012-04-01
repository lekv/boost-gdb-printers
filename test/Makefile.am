## Process this file with automake to produce Makefile.in

AUTOMAKE_OPTIONS = dejagnu

SUBDIRS = src

EXTRA_DIST = \
	boards \
	boost \
	config \
	lib

RUNTEST=$(RUNTEST_BIN)
DEJATOOL = boost
AM_RUNTESTFLAGS = BINFILE=src/test GDB=$(GDB)

export PYTHONPATH=$(top_srcdir)/py

## vim: set shiftwidth=4 tabstop=4 noexpandtab:
