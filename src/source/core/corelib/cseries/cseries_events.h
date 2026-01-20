#pragma once
#ifndef __CSERIES_EVENTS_H__
#define __CSERIES_EVENTS_H__

/* ---------- headers */

#include <vadefs.h>

/* ---------- constants */

enum e_event_level;

/* ---------- definitions */

struct s_event_properties;

/* ---------- prototypes */

bool event_level_query(e_event_level level);
bool event_query(s_event_properties const * properties);
long event_process(s_event_properties const * properties, char const * format, ...);
long event_process_va(s_event_properties const * properties, char const * format, va_list arglist);
void event_store_category(long arg1, long volatile * arg2);
void event_context_push(char const * arg1, unsigned long arg2, char const * arg3);
void event_context_pop(void);

/* ---------- globals */

/* ---------- public code */

#endif // __CSERIES_EVENTS_H__
