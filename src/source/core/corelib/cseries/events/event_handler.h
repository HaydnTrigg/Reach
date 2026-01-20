#pragma once
#ifndef __EVENT_HANDLER_H__
#define __EVENT_HANDLER_H__

/* ---------- headers */

/* ---------- constants */

enum e_event_level;

/* ---------- definitions */

struct s_event_properties;

class c_event_handler
{
public:
    virtual bool __cdecl event_level_query(enum e_event_level) = 0;
    virtual bool __cdecl event_query(s_event_properties const *) = 0;
    virtual long __cdecl event_process(s_event_properties const *,char const *,char *) = 0;
    virtual void __cdecl store_category(long,long volatile *) = 0;
    virtual void __cdecl context_push(char const *,unsigned long,char const *) = 0;
    virtual void __cdecl context_pop(void) = 0;
};

class c_event_handler_hook
{
private: 
    static c_event_handler* g_event_handler;
public:
    static void attach_handler(c_event_handler * handler);
    static void detach_handler(c_event_handler * handler);
    static bool active(void);
    static c_event_handler * get_handler(void);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __EVENT_HANDLER_H__

