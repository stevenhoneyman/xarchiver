/*
 *  Copyright (C) 2008 Giuseppe Torelli <colossus73@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Street #330, Boston, MA 02111-1307, USA.
 */

#ifndef BZIP2_H
#define BZIP2_H

#include <gtk/gtk.h>
#include "support.h"
#include "main.h"
#include "archive.h"

void xa_open_bzip2_lzma (XArchive *);
gboolean lzma_bzip2_extract (XArchive *,GSList*);
void xa_open_tar_compressed_file(XArchive *);
gboolean xa_lzma_bzip2_test (XArchive *);
#endif
