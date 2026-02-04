#pragma once
#ifndef __CUBEMAP_DEBUG_H__
#define __CUBEMAP_DEBUG_H__

/* ---------- headers */

/* ---------- constants */

enum e_output_user_index;

/* ---------- definitions */

class c_cubemap_debug
{
public:
    static bool g_render;
    static void render();
    static void render_object_cubemap_samples(long object_index);
    static void render_user_cubemap_samples(e_output_user_index user_index);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __CUBEMAP_DEBUG_H__
