/* ---------- headers */

#include "omaha\physics\collision_usage.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **global_collision_function_names; // "?global_collision_function_names@@3PAPBDA"
// char const **global_collision_user_names; // "?global_collision_user_names@@3PAPBDA"
// struct collision_period *collision_usage_last_frame_buffer; // "?collision_usage_last_frame_buffer@@3PAUcollision_period@@A"
// struct collision_period *collision_usage_this_frame_buffer; // "?collision_usage_this_frame_buffer@@3PAUcollision_period@@A"
// struct collision_period collision_usage_current; // "?collision_usage_current@@3Ucollision_period@@A"
// short *global_collision_periods; // "?global_collision_periods@@3PAFA"
// short *global_current_collision_users; // "?global_current_collision_users@@3PAFA"
// bool collision_log_render_enable; // "?collision_log_render_enable@@3_NA"
// bool collision_log_detailed; // "?collision_log_detailed@@3_NA"
// bool collision_log_extended; // "?collision_log_extended@@3_NA"
// bool collision_log_totals_only; // "?collision_log_totals_only@@3_NA"
// bool collision_log_time; // "?collision_log_time@@3_NA"
// bool global_collision_log_enable; // "?global_collision_log_enable@@3_NA"
// bool global_collision_log_switch_pending; // "?global_collision_log_switch_pending@@3_NA"
// bool global_collision_log_switch_pending_value; // "?global_collision_log_switch_pending_value@@3_NA"
// short global_current_collision_user_depth; // "?global_current_collision_user_depth@@3FA"
// short global_collision_period_depth; // "?global_collision_period_depth@@3FA"

// void collision_log_initialize(void);
// void collision_log_dispose(void);
// bool collision_log_is_enabled(void);
// void collision_log_enable(bool);
// void collision_log_begin_frame(void);
// void collision_log_end_frame(void);
// void collision_log_begin_period(short);
// void collision_log_end_period(void);
// short collision_log_get_current_period(void);
// void collision_log_store_period(short);
// void collision_log_render(void);
// int collision_log_compare_users(void const *, void const *);
// void collision_log_format_usage(struct collision_log const *, char *, long);
// void collision_log_start_time(__int64*);
// void collision_log_end_time(short, __int64);
// short collision_log_get_current_user(short);
// void collision_log_usage(short);
// void collision_log_display(char *, long);
// bool collision_log_fetch(struct s_collision_log_data *);
// bool collision_log_query_functions(char const ***, float *, long *);
// bool collision_log_query_users(long, char const ***, float *, long *);
// long collision_log_function_from_bsp(struct collision_bsp const *);
// long collision_log_function_from_bsp(struct large_collision_bsp const *);
// long collision_log_function_from_bsp_internal<struct collision_bsp>(struct collision_bsp const *);
// long collision_log_function_from_bsp_internal<struct large_collision_bsp>(struct large_collision_bsp const *);

//void collision_log_initialize(void)
//{
//    mangled_ppc("?collision_log_initialize@@YAXXZ");
//};

//void collision_log_dispose(void)
//{
//    mangled_ppc("?collision_log_dispose@@YAXXZ");
//};

//bool collision_log_is_enabled(void)
//{
//    mangled_ppc("?collision_log_is_enabled@@YA_NXZ");
//};

//void collision_log_enable(bool)
//{
//    mangled_ppc("?collision_log_enable@@YAX_N@Z");
//};

//void collision_log_begin_frame(void)
//{
//    mangled_ppc("?collision_log_begin_frame@@YAXXZ");
//};

//void collision_log_end_frame(void)
//{
//    mangled_ppc("?collision_log_end_frame@@YAXXZ");
//};

//void collision_log_begin_period(short)
//{
//    mangled_ppc("?collision_log_begin_period@@YAXF@Z");
//};

//void collision_log_end_period(void)
//{
//    mangled_ppc("?collision_log_end_period@@YAXXZ");
//};

//short collision_log_get_current_period(void)
//{
//    mangled_ppc("?collision_log_get_current_period@@YAFXZ");
//};

//void collision_log_store_period(short)
//{
//    mangled_ppc("?collision_log_store_period@@YAXF@Z");
//};

//void collision_log_render(void)
//{
//    mangled_ppc("?collision_log_render@@YAXXZ");
//};

//int collision_log_compare_users(void const *, void const *)
//{
//    mangled_ppc("?collision_log_compare_users@@YAHPBX0@Z");
//};

//void collision_log_format_usage(struct collision_log const *, char *, long)
//{
//    mangled_ppc("?collision_log_format_usage@@YAXPBUcollision_log@@PADJ@Z");
//};

//void collision_log_start_time(__int64*)
//{
//    mangled_ppc("?collision_log_start_time@@YAXPA_J@Z");
//};

//void collision_log_end_time(short, __int64)
//{
//    mangled_ppc("?collision_log_end_time@@YAXF_J@Z");
//};

//short collision_log_get_current_user(short)
//{
//    mangled_ppc("?collision_log_get_current_user@@YAFF@Z");
//};

//void collision_log_usage(short)
//{
//    mangled_ppc("?collision_log_usage@@YAXF@Z");
//};

//void collision_log_display(char *, long)
//{
//    mangled_ppc("?collision_log_display@@YAXPADJ@Z");
//};

//bool collision_log_fetch(struct s_collision_log_data *)
//{
//    mangled_ppc("?collision_log_fetch@@YA_NPAUs_collision_log_data@@@Z");
//};

//bool collision_log_query_functions(char const ***, float *, long *)
//{
//    mangled_ppc("?collision_log_query_functions@@YA_NPAPAPBDPAMPAJ@Z");
//};

//bool collision_log_query_users(long, char const ***, float *, long *)
//{
//    mangled_ppc("?collision_log_query_users@@YA_NJPAPAPBDPAMPAJ@Z");
//};

//long collision_log_function_from_bsp(struct collision_bsp const *)
//{
//    mangled_ppc("?collision_log_function_from_bsp@@YAJPBUcollision_bsp@@@Z");
//};

//long collision_log_function_from_bsp(struct large_collision_bsp const *)
//{
//    mangled_ppc("?collision_log_function_from_bsp@@YAJPBUlarge_collision_bsp@@@Z");
//};

//long collision_log_function_from_bsp_internal<struct collision_bsp>(struct collision_bsp const *)
//{
//    mangled_ppc("??$collision_log_function_from_bsp_internal@Ucollision_bsp@@@@YAJPBUcollision_bsp@@@Z");
//};

//long collision_log_function_from_bsp_internal<struct large_collision_bsp>(struct large_collision_bsp const *)
//{
//    mangled_ppc("??$collision_log_function_from_bsp_internal@Ularge_collision_bsp@@@@YAJPBUlarge_collision_bsp@@@Z");
//};

