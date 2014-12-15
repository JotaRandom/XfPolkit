NULL=

AM_CPPFLAGS = \
	-I$(srcdir) \
	-DPACKAGE_DATA_DIR=\""$(datadir)/xfpolkit"\" \
	-DPACKAGE_UI_DIR=\""$(datadir)/xfpolkit/ui"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	$(NULL)

libexec_PROGRAMS = xfpolkit
xfpolkit_SOURCES = \
	xfpolkit.c \
	xfpolkit-listener.c \
	xfpolkit-listener.h \
	$(NULL)

xfpolkit_CFLAGS = \
	$(GTK_CFLAGS) \
	$(POLKIT_CFLAGS) \
	-Werror-implicit-function-declaration \
	$(NULL)

xfpolkit_LDADD = \
	$(GTK_LIBS) \
	$(POLKIT_LIBS) \
	$(INTLLIBS) \
	$(NULL)


# Little program to optimize size of xml files
noinst_PROGRAMS=xml-purge
xml_purge_SOURCES=$(top_srcdir)/src/xml-purge.c
xml_purge_CFLAGS=$(GTK_CFLAGS)
xml_purge_LDADD=$(GTK_LIBS)
