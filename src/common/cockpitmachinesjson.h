/*
 * This file is part of Cockpit.
 *
 * Copyright (C) 2017 Red Hat, Inc.
 *
 * Cockpit is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Cockpit is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Cockpit; If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __COCKPIT_MACHINES_JSON_H__
#define __COCKPIT_MACHINES_JSON_H__

#include <glib.h>
#include <json-glib/json-glib.h>

G_BEGIN_DECLS

const char *    get_machines_json_dir (void);

JsonNode *      read_machines_json    (void);

gboolean        update_machines_json  (const char *filename,
                                       const char *hostname,
                                       JsonNode *info,
                                       GError **error);

G_END_DECLS

#endif /* __COCKPIT_MACHINES_JSON_H__ */
