## Process this file with automake to produce Makefile.in

ACLOCAL_AMFLAGS = -I m4

SUBDIRS = py test

gdbpythondir = $(GDBDATADIR)/python
dist_gdbpython_DATA = boost-gdb-printers.py

EXTRA_DIST = \
	AUTHORS \
	COPYING \
	NEWS \
	README \
	autogen.sh

distclean-local:
	rm -rf boost-gdb-printers.py *.cache *~

dist-hook:
	git log --date=short --pretty="format:@%cd  %an  <%ae>  [%H]%n%n%s%n%n%e%b" | sed -e "s|^\([^@]\)|\t\1|" -e "s|^@||" >$(distdir)/ChangeLog

## vim: set shiftwidth=4 tabstop=4 noexpandtab:
