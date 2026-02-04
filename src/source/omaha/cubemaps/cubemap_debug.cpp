/* ---------- headers */

#include "omaha\cubemaps\cubemap_debug.h"
#include "omaha\game\player_mapping.h"

/* ---------- constants */

/* ---------- definitions */

bool c_cubemap_debug::g_render = false; // "?g_render@c_cubemap_debug@@2_NA"

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

void c_cubemap_debug::render(void)
{
    mangled_ppc("?render@c_cubemap_debug@@SAXXZ");

    if (c_cubemap_debug::g_render)
    {
        render_user_cubemap_samples(_output_user_0);
    }
};

void c_cubemap_debug::render_user_cubemap_samples(e_output_user_index user_index)
{
    mangled_ppc("?render_user_cubemap_samples@c_cubemap_debug@@SAXW4e_output_user_index@@@Z");
    
    if (c_cubemap_debug::g_render && user_index != k_output_user_none)
    {
        long user_object_index = player_mapping_get_unit_by_output_user(user_index);
        c_cubemap_debug::render_object_cubemap_samples(user_object_index);
    }
};

void c_cubemap_debug::render_object_cubemap_samples(long object_index)
{
    mangled_ppc("?render_object_cubemap_samples@c_cubemap_debug@@SAXJ@Z");

    NOT_IMPLEMENTED;
};

/* ---------- private code */

/* ---------- reverse engineering */
