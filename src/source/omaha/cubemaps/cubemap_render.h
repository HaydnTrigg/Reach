#pragma once
#ifndef __CUBEMAP_RENDER_H__
#define __CUBEMAP_RENDER_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class c_cubemap_render_manager
{
public:
    void activate(void);
    bool is_processing_bsp(long);
    bool setup_process_bsp(long, long, unsigned long);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __CUBEMAP_RENDER_H__
