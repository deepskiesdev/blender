/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "RNA_types.hh"

bool RNA_static_owner_is_ready(const PointerRNA &ptr);
bool RNA_static_property_is_ready(const PointerRNA &ptr, const PropertyRNA *prop);

/* Resolve and copy a complete, admitted native array without a Python sequence conversion. */
bool RNA_path_read_array_static(
    const PointerRNA *root, const char *path, RawPropertyType type, void *dest, int length);

/* Read only fixed typed values. Refuse runtime properties and conversion scratch. */
int RNA_property_collection_raw_get_static(PointerRNA *ptr,
                                           PropertyRNA *prop,
                                           const char *propname,
                                           void *array,
                                           RawPropertyType type,
                                           int len);
