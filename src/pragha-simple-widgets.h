/*************************************************************************/
/* Copyright (C) 2009-2013 matias <mati86dl@gmail.com>                   */
/*                                                                       */
/* This program is free software: you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation, either version 3 of the License, or     */
/* (at your option) any later version.                                   */
/*                                                                       */
/* This program is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/* GNU General Public License for more details.                          */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */
/*************************************************************************/

#ifndef PRAGHA_SIMPLE_WIDGETS_H
#define PRAGHA_SIMPLE_WIDGETS_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

typedef struct _PraghaTrackProgress PraghaTrackProgress;
typedef struct _PraghaContainer     PraghaContainer;

gpointer sokoke_xfce_header_new (const gchar *header, const gchar *icon);

PraghaTrackProgress *pragha_track_progress_new (void);
PraghaContainer     *pragha_container_new      (void);

G_END_DECLS

#endif /* PRAGHA_SIMPLE_WIDGETS_H */
