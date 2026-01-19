/* ---------- headers */

#include "omaha\game\game_time.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_game_time_pause_reason const c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_game_time_pause_reason@@G$08Us_default_enum_string_resolver@@@@2W4e_game_time_pause_reason@@B"
// public: static long const s_static_array<struct s_game_time_record, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_game_time_record@@$07@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 8>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$07@@2JB"
// float debug_game_speed; // "?debug_game_speed@@3MA"
// bool debug_use_omaha_synchronous_game_time_matching; // "?debug_use_omaha_synchronous_game_time_matching@@3_NA"
// bool debug_game_time_statistics; // "?debug_game_time_statistics@@3_NA"
// bool debug_game_time_lock; // "?debug_game_time_lock@@3_NA"
// bool debug_pause_game_active; // "?debug_pause_game_active@@3_NA"
// bool debug_pause_game; // "?debug_pause_game@@3_NA"
// bool debug_render_game_time_history; // "?debug_render_game_time_history@@3_NA"
// bool debug_gather_game_time_history; // "?debug_gather_game_time_history@@3_NA"
// bool g_use_halo3_and_atlas_shipping_leftover_ticks_approach; // "?g_use_halo3_and_atlas_shipping_leftover_ticks_approach@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_game_time_globals_allocator::*)(void *)> g_game_time_globals_allocator; // "?g_game_time_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@A"
// struct game_time_globals_definition *game_time_globals; // "?game_time_globals@@3PAUgame_time_globals_definition@@A"

// void __tls_set_g_game_time_globals_allocator(void *);
// void game_time_initialize(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// bool game_time_initialized(void);
// void game_time_initialize_for_new_map(void);
// void game_time_dispose_from_old_map(void);
// void game_time_dispose(void);
// float game_time_get_safe_in_seconds(void);
// long game_time_get(void);
// void game_time_set(long);
// bool game_time_update(float, float *, long *);
// bool saved_film_manager_seeking(long *);
// void game_time_discard(long, long, float *);
// void game_time_advance(void);
// bool game_time_get_paused(void);
// bool game_time_get_paused_for_reason(enum e_game_time_pause_reason);
// void game_time_set_paused(bool, enum e_game_time_pause_reason);
// float game_time_get_speed(void);
// void game_time_set_speed(float);
// void game_time_set_rate_scale(float, float, float);
// void game_time_set_rate_scale_direct(float);
// long game_tick_rate(void);
// float game_tick_length(void);
// float game_ticks_to_seconds(float);
// long game_ticks_to_seconds_ceil(long);
// long game_seconds_integer_to_ticks(long);
// float game_seconds_to_ticks_real(float);
// long game_seconds_to_ticks_round(float);
// void game_time_events_format_function(long, char *);
// void game_time_statistics_start(void);
// void game_time_statistics_frame(float, float, float, long, long, long, long, float, bool);
// void game_time_statistics_stop(void);
// void game_time_render_debug(void);
// void game_time_toggle_history_gather(void);
// void game_time_toggle_history_render(void);
// void game_time_update_paused_flags(void);
// public: bool c_controller_interface::is_attached(void) const;
// void game_time_update_match_network_time(float, long, long *, bool *);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: struct s_game_time_record & t_static_ring_buffer<struct s_game_time_record, 60>::get_element(long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::valid(void) const;
// public: bool c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_game_time_pause_reason) const;
// public: void c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_game_time_pause_reason, bool);
// public: void t_event_queue<struct s_game_time_record, 8>::initialize(void);
// public: struct s_game_time_record * t_event_queue<struct s_game_time_record, 8>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_game_time_record, 8>::queue_event(struct s_game_time_record *);
// public: struct s_game_time_record * t_event_queue<struct s_game_time_record, 8>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_game_time_record * t_event_queue<struct s_game_time_record, 8>::release_chain_top_event(struct s_game_time_record *);
// public: static bool c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_game_time_pause_reason);
// private: static unsigned short c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_time_pause_reason);
// public: void t_event_queue<struct s_game_time_record, 8>::initialize_limited(long);
// public: bool t_event_queue<struct s_game_time_record, 8>::valid_event(void const *) const;
// public: void t_event_queue<struct s_game_time_record, 8>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: static long s_static_array<struct s_game_time_record, 8>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 8>::get_elements(void);
// public: struct s_game_time_record & s_static_array<struct s_game_time_record, 8>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 8>::operator[]<long>(long);
// public: struct s_game_time_record const & s_static_array<struct s_game_time_record, 8>::operator[]<int>(int) const;
// public: struct s_game_time_record const & s_static_array<struct s_game_time_record, 8>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_game_time_record, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_game_time_record, 8>::valid<int>(int);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::free_memory(void);
// public: t_static_ring_buffer<struct s_game_time_record, 60>::t_static_ring_buffer<struct s_game_time_record, 60>(void);
// public: t_event_queue<struct s_game_time_record, 8>::t_event_queue<struct s_game_time_record, 8>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>(void);
// public: t_static_ring_buffer<struct s_game_time_record, 60>::~t_static_ring_buffer<struct s_game_time_record, 60>(void);
// public: t_event_queue<struct s_game_time_record, 8>::~t_event_queue<struct s_game_time_record, 8>(void);
// void g_game_time_globals_allocator::`dynamic atexit destructor'(void);
// void g_game_time_history::`dynamic atexit destructor'(void);
// void g_game_time_recent::`dynamic atexit destructor'(void);

//void __tls_set_g_game_time_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z");
//};

//void game_time_initialize(void)
//{
//    mangled_ppc("?game_time_initialize@@YAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//bool game_time_initialized(void)
//{
//    mangled_ppc("?game_time_initialized@@YA_NXZ");
//};

//void game_time_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_time_initialize_for_new_map@@YAXXZ");
//};

//void game_time_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_time_dispose_from_old_map@@YAXXZ");
//};

//void game_time_dispose(void)
//{
//    mangled_ppc("?game_time_dispose@@YAXXZ");
//};

//float game_time_get_safe_in_seconds(void)
//{
//    mangled_ppc("?game_time_get_safe_in_seconds@@YAMXZ");
//};

//long game_time_get(void)
//{
//    mangled_ppc("?game_time_get@@YAJXZ");
//};

//void game_time_set(long)
//{
//    mangled_ppc("?game_time_set@@YAXJ@Z");
//};

//bool game_time_update(float, float *, long *)
//{
//    mangled_ppc("?game_time_update@@YA_NMPAMPAJ@Z");
//};

//bool saved_film_manager_seeking(long *)
//{
//    mangled_ppc("?saved_film_manager_seeking@@YA_NPAJ@Z");
//};

//void game_time_discard(long, long, float *)
//{
//    mangled_ppc("?game_time_discard@@YAXJJPAM@Z");
//};

//void game_time_advance(void)
//{
//    mangled_ppc("?game_time_advance@@YAXXZ");
//};

//bool game_time_get_paused(void)
//{
//    mangled_ppc("?game_time_get_paused@@YA_NXZ");
//};

//bool game_time_get_paused_for_reason(enum e_game_time_pause_reason)
//{
//    mangled_ppc("?game_time_get_paused_for_reason@@YA_NW4e_game_time_pause_reason@@@Z");
//};

//void game_time_set_paused(bool, enum e_game_time_pause_reason)
//{
//    mangled_ppc("?game_time_set_paused@@YAX_NW4e_game_time_pause_reason@@@Z");
//};

//float game_time_get_speed(void)
//{
//    mangled_ppc("?game_time_get_speed@@YAMXZ");
//};

//void game_time_set_speed(float)
//{
//    mangled_ppc("?game_time_set_speed@@YAXM@Z");
//};

//void game_time_set_rate_scale(float, float, float)
//{
//    mangled_ppc("?game_time_set_rate_scale@@YAXMMM@Z");
//};

//void game_time_set_rate_scale_direct(float)
//{
//    mangled_ppc("?game_time_set_rate_scale_direct@@YAXM@Z");
//};

//long game_tick_rate(void)
//{
//    mangled_ppc("?game_tick_rate@@YAJXZ");
//};

//float game_tick_length(void)
//{
//    mangled_ppc("?game_tick_length@@YAMXZ");
//};

//float game_ticks_to_seconds(float)
//{
//    mangled_ppc("?game_ticks_to_seconds@@YAMM@Z");
//};

//long game_ticks_to_seconds_ceil(long)
//{
//    mangled_ppc("?game_ticks_to_seconds_ceil@@YAJJ@Z");
//};

//long game_seconds_integer_to_ticks(long)
//{
//    mangled_ppc("?game_seconds_integer_to_ticks@@YAJJ@Z");
//};

//float game_seconds_to_ticks_real(float)
//{
//    mangled_ppc("?game_seconds_to_ticks_real@@YAMM@Z");
//};

//long game_seconds_to_ticks_round(float)
//{
//    mangled_ppc("?game_seconds_to_ticks_round@@YAJM@Z");
//};

//void game_time_events_format_function(long, char *)
//{
//    mangled_ppc("?game_time_events_format_function@@YAXJPAD@Z");
//};

//void game_time_statistics_start(void)
//{
//    mangled_ppc("?game_time_statistics_start@@YAXXZ");
//};

//void game_time_statistics_frame(float, float, float, long, long, long, long, float, bool)
//{
//    mangled_ppc("?game_time_statistics_frame@@YAXMMMJJJJM_N@Z");
//};

//void game_time_statistics_stop(void)
//{
//    mangled_ppc("?game_time_statistics_stop@@YAXXZ");
//};

//void game_time_render_debug(void)
//{
//    mangled_ppc("?game_time_render_debug@@YAXXZ");
//};

//void game_time_toggle_history_gather(void)
//{
//    mangled_ppc("?game_time_toggle_history_gather@@YAXXZ");
//};

//void game_time_toggle_history_render(void)
//{
//    mangled_ppc("?game_time_toggle_history_render@@YAXXZ");
//};

//void game_time_update_paused_flags(void)
//{
//    mangled_ppc("?game_time_update_paused_flags@@YAXXZ");
//};

//public: bool c_controller_interface::is_attached(void) const
//{
//    mangled_ppc("?is_attached@c_controller_interface@@QBA_NXZ");
//};

//void game_time_update_match_network_time(float, long, long *, bool *)
//{
//    mangled_ppc("?game_time_update_match_network_time@@YAXMJPAJPA_N@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: struct s_game_time_record & t_static_ring_buffer<struct s_game_time_record, 60>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_game_time_record@@$0DM@@@QAAAAUs_game_time_record@@J@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_game_time_pause_reason) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_time_pause_reason@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_game_time_pause_reason@@@Z");
//};

//public: void c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_game_time_pause_reason, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_time_pause_reason@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_game_time_pause_reason@@_N@Z");
//};

//public: void t_event_queue<struct s_game_time_record, 8>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_game_time_record@@$07@@QAAXXZ");
//};

//public: struct s_game_time_record * t_event_queue<struct s_game_time_record, 8>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_game_time_record@@$07@@QAAPAUs_game_time_record@@XZ");
//};

//public: void t_event_queue<struct s_game_time_record, 8>::queue_event(struct s_game_time_record *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_game_time_record@@$07@@QAAXPAUs_game_time_record@@@Z");
//};

//public: struct s_game_time_record * t_event_queue<struct s_game_time_record, 8>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_game_time_record@@$07@@QAAPAUs_game_time_record@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_game_time_record * t_event_queue<struct s_game_time_record, 8>::release_chain_top_event(struct s_game_time_record *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_game_time_record@@$07@@QAAPAUs_game_time_record@@PAU2@@Z");
//};

//public: static bool c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_game_time_pause_reason)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_time_pause_reason@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_game_time_pause_reason@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_game_time_pause_reason, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_time_pause_reason)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_time_pause_reason@@G$08Us_default_enum_string_resolver@@@@CAGW4e_game_time_pause_reason@@@Z");
//};

//public: void t_event_queue<struct s_game_time_record, 8>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_game_time_record@@$07@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_game_time_record, 8>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_game_time_record@@$07@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_game_time_record, 8>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_game_time_record@@$07@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: static long s_static_array<struct s_game_time_record, 8>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_game_time_record@@$07@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 8>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$07@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//public: struct s_game_time_record & s_static_array<struct s_game_time_record, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_time_record@@$07@@QAAAAUs_game_time_record@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$07@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: struct s_game_time_record const & s_static_array<struct s_game_time_record, 8>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_game_time_record@@$07@@QBAABUs_game_time_record@@H@Z");
//};

//public: struct s_game_time_record const & s_static_array<struct s_game_time_record, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_time_record@@$07@@QBAABUs_game_time_record@@J@Z");
//};

//public: static bool s_static_array<struct s_game_time_record, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_game_time_record@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_game_time_record, 8>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_game_time_record@@$07@@SA_NH@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_static_ring_buffer<struct s_game_time_record, 60>::t_static_ring_buffer<struct s_game_time_record, 60>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@Us_game_time_record@@$0DM@@@QAA@XZ");
//};

//public: t_event_queue<struct s_game_time_record, 8>::t_event_queue<struct s_game_time_record, 8>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_game_time_record@@$07@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_time_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_time_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct s_game_time_record, 60>::~t_static_ring_buffer<struct s_game_time_record, 60>(void)
//{
//    mangled_ppc("??1?$t_static_ring_buffer@Us_game_time_record@@$0DM@@@QAA@XZ");
//};

//public: t_event_queue<struct s_game_time_record, 8>::~t_event_queue<struct s_game_time_record, 8>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_game_time_record@@$07@@QAA@XZ");
//};

//void g_game_time_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_time_globals_allocator@@YAXXZ");
//};

//void g_game_time_history::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_time_history@@YAXXZ");
//};

//void g_game_time_recent::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_time_recent@@YAXXZ");
//};

