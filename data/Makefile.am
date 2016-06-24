FULL_LIBEXECDIR=$(libexecdir)

xfpolkit.desktop.in : xfpolkit.desktop.in.in
		cat xfpolkit.desktop.in.in | sed 's,@FULL_LIBEXECDIR@,$(FULL_LIBEXECDIR),' > $@

NULL=

SUBDIRS= \
	ui \
	$(NULL)

# FIXME: install this to /etc/xdg/autostart
desktopdir=$(sysconfdir)/xdg/autostart
desktop_in_files = \
	xfpolkit.desktop.in.in \
	$(NULL)
desktop_DATA = $(desktop_in_files:.desktop.in.in=.desktop)
@INTLTOOL_DESKTOP_RULE@

EXTRA_DIST= \
	$(desktop_DATA) \
	$(NULL)
