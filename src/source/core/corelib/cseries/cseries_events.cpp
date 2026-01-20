/* ---------- headers */

#include "core\corelib\cseries\cseries_events.h"
#include "core\corelib\cseries\events\event_handler.h"

#include <cstdarg>
#include <stdarg.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

bool event_level_query(e_event_level level)
{
    mangled_ppc("?event_level_query@@YA_NW4e_event_level@@@Z");

    bool result = false;
    if(c_event_handler_hook::active())
    {
        result = c_event_handler_hook::get_handler()->event_level_query(level);
    }
    return result;
};

bool event_query(s_event_properties const * properties)
{
    mangled_ppc("?event_query@@YA_NPBUs_event_properties@@@Z");

    bool result = false;
    if(c_event_handler_hook::active())
    {
        result = c_event_handler_hook::get_handler()->event_query(properties);
    }
    return result;
};

long event_process(s_event_properties const * properties, char const * format, ...)
{
    mangled_ppc("?event_process@@YAJPBUs_event_properties@@PBDZZ");

    long result = -1; // $todo NONE
    va_list arglist;
    va_start(arglist, format);
    if(c_event_handler_hook::active())
    {
        result = c_event_handler_hook::get_handler()->event_process(properties, format, arglist);
    }
    va_end(arglist);
    return result;
};

long event_process_va(s_event_properties const * properties, char const * format, va_list arglist)
{
    mangled_ppc("?event_process_va@@YAJPBUs_event_properties@@PBDPAD@Z");

    long result = -1; // $todo NONE
    if(c_event_handler_hook::active())
    {
        result = c_event_handler_hook::get_handler()->event_process(properties, format, arglist);
    }
    return result;
};

void event_store_category(long arg1, long volatile * arg2)
{
    mangled_ppc("?event_store_category@@YAXJPCJ@Z");

    if(c_event_handler_hook::active())
    {
        c_event_handler_hook::get_handler()->store_category(arg1, arg2);
    }
};

void event_context_push(char const * arg1, unsigned long arg2, char const * arg3)
{
    mangled_ppc("?event_context_push@@YAXPBDK0@Z");

    if(c_event_handler_hook::active())
    {
        c_event_handler_hook::get_handler()->context_push(arg1, arg2, arg3);
    }
};

void event_context_pop(void)
{
    mangled_ppc("?event_context_pop@@YAXXZ");

    if(c_event_handler_hook::active())
    {
        c_event_handler_hook::get_handler()->context_pop();
    }
};

/* ---------- private code */

/* ---------- reverse engineering */
