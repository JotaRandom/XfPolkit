/*
 *      xf-polkit-listener.h
 *
 *      Copyright 2010 PCMan <pcman.tw@gmail.com>
 *	Copyright 2014 Pablo Lezaeta <prflr88@gmail.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */


#ifndef __XF_POLKIT_LISTENER_H__
#define __XF_POLKIT_LISTENER_H__

#define POLKIT_AGENT_I_KNOW_API_IS_SUBJECT_TO_CHANGE
#include <polkitagent/polkitagent.h>

G_BEGIN_DECLS

#define XFPOLKIT_LISTENER_TYPE				(xfpolkit_listener_get_type())
#define XFPOLKIT_LISTENER(obj)				(G_TYPE_CHECK_INSTANCE_CAST((obj),\
			XFPOLKIT_LISTENER_TYPE, XfPolkitListener))
#define XFPOLKIT_LISTENER_CLASS(klass)		(G_TYPE_CHECK_CLASS_CAST((klass),\
			XFPOLKIT_LISTENER_TYPE, XfPolkitListenerClass))
#define IS_XFPOLKIT_LISTENER(obj)			(G_TYPE_CHECK_INSTANCE_TYPE((obj),\
			XFPOLKIT_LISTENER_TYPE))
#define IS_XFPOLKIT_LISTENER_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE((klass),\
			XFPOLKIT_LISTENER_TYPE))

typedef struct _XfPolkitListener			XfPolkitListener;
typedef struct _XfPolkitListenerClass		XfPolkitListenerClass;

struct _XfPolkitListener
{
	PolkitAgentListener parent;
};

struct _XfPolkitListenerClass
{
	PolkitAgentListenerClass parent_class;
};

GType xfpolkit_listener_get_type(void);
PolkitAgentListener* xfpolkit_listener_new(void);

G_END_DECLS

#endif /* __XF_POLKIT_LISTENER_H__ */
