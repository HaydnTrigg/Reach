#pragma once
#ifndef __ASSERT_HANDLER_H__
#define __ASSERT_HANDLER_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class c_assert_handler;

class c_assert_handler_hook
{
private: 
    static c_assert_handler* g_assert_handler;
public:
    static void c_assert_handler_hook::attach_handler(c_assert_handler * handler);
    static void c_assert_handler_hook::detach_handler(c_assert_handler * handler);
    static bool c_assert_handler_hook::active(void);
    static c_assert_handler * c_assert_handler_hook::get_handler(void);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __ASSERT_HANDLER_H__
