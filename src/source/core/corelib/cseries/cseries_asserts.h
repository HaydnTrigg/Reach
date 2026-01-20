#pragma once
#ifndef __CSERIES_ASSERTS_H__
#define __CSERIES_ASSERTS_H__

/* ---------- headers */

/* ---------- constants */

#define assert(expression) if(!(expression) && !assert_handle(#expression, __FILE__, __LINE__)) { if(assert_is_debugger_present()) { __debugbreak(); } else { assert_halt(); } }
#define assert_decomp(expression, file, line) if(!(expression) && !assert_handle(#expression, file, line)) { if(assert_is_debugger_present()) { __debugbreak(); } else { assert_halt(); } }
#define assert_tag_debug_untracked_jul_11_2011(LINE, ...) if(!(__VA_ARGS__) && !assert_handle(#__VA_ARGS__, __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__, LINE)) { if(assert_is_debugger_present()) { __debugbreak(); } else { assert_halt(); } }

/* ---------- definitions */

/* ---------- prototypes */

extern bool assert_handle(char const * expression, char const * file, long line);
extern bool assert_is_debugger_present(void);
extern void assert_halt(void);

/* ---------- globals */

/* ---------- public code */

#endif // __CSERIES_ASSERTS_H__
