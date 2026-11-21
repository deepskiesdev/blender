/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "RNA_types.hh"

namespace blender {

bool RNA_static_owner_is_ready(const PointerRNA &ptr);
bool RNA_static_property_is_ready(const PointerRNA &ptr, const PropertyRNA *prop);

/* Read only fixed typed values. Refuse runtime properties and conversion scratch. */
int RNA_property_collection_raw_get_static(PointerRNA *ptr,
                                           PropertyRNA *prop,
                                           const char *propname,
                                           void *array,
                                           RawPropertyType type,
                                           int len);

}  // namespace blender
