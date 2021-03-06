/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __IA_CSS_PGPREVIEW_H__
#define __IA_CSS_PGPREVIEW_H__

#include "ia_css_pg_param_internal.h" /* ia_css_pg_param_t*/
#include "ia_css_psys_program_group_manifest.h"
#include "ia_css_program_group_param.h"

extern size_t
ia_camera_sizeof_preview_var2_program_group_manifest(void);

extern ia_css_program_group_manifest_t *
ia_camera_preview_var2_program_group_manifest_get(void *blob);

extern size_t
ia_camera_sizeof_preview_var2_program_group_param(void);

extern ia_css_program_group_param_t *
ia_camera_preview_var2_program_group_param_get(void *blob);

extern size_t
ia_camera_sizeof_preview_var2_cached_param(void);

/* TODO: Add symmetic _free() api's if something special needs to be done for
 * each PG while being freed. Otherwise, use base program_group_free() */

ia_css_pg_param_t *
ia_camera_pg_preview_var2_cached_param_get(
	void *blob,
	ia_css_frame_descriptor_t *in_desc,
	ia_css_frame_descriptor_t *out_desc);
#endif /* __IA_CSS_PGPREVIEW_H__ */
