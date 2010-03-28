NULL=

SUBDIRS= \
	ui \
	$(NULL)

# FIXME: install this to /etc/xdg/autostart
desktopdir=$(sysconfdir)/xdg/autostart
desktop_in_files = \
	lxpolkit.desktop.in \
	$(NULL)
desktop_DATA = $(desktop_in_files:.desktop.in=.desktop)
@INTLTOOL_DESKTOP_RULE@

EXTRA_DIST= \
	$(desktop_DATA) \
	$(NULL)
