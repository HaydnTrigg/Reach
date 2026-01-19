/* ---------- headers */

#include "omaha\cseries\async_xoverlapped.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_static_string<64>, 64>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_string@$0EA@@@$0EA@@@2JB"
// char const **overlapped_task_state_strings; // "?overlapped_task_state_strings@@3PAPBDA"

// public: c_async_xoverlapped_scope_lock::c_async_xoverlapped_scope_lock(void);
// public: c_async_xoverlapped_scope_lock::~c_async_xoverlapped_scope_lock(void);
// public: c_overlapped_task::c_overlapped_task(char const *, long);
// public: void c_overlapped_task::set_task_state_internal(enum e_overlapped_task_state);
// merged_82E22480;
// public: virtual c_overlapped_task::~c_overlapped_task(void);
// public: virtual void c_overlapped_task::update(unsigned long);
// public: virtual void c_overlapped_task::success(unsigned long);
// public: virtual void c_overlapped_task::failure(unsigned long, unsigned long, unsigned long);
// public: virtual void c_overlapped_task::complete(void);
// public: virtual void c_overlapped_task::reset(void);
// public: virtual void c_overlapped_task::post_complete(enum e_overlapped_task_state);
// public: virtual bool c_overlapped_task::is_result_successful(unsigned long, unsigned long, unsigned long);
// void overlapped_initialize(void);
// void overlapped_dispose(void);
// void overlapped_update(void);
// public: unsigned long c_overlapped_task::get_minimum_duration_milliseconds(void);
// void overlapped_render(void);
// void overlapped_tasks_log_to_debug_txt(enum e_event_level);
// bool overlapped_task_start_internal(class c_overlapped_task *, char const *, long);
// bool overlapped_task_is_running(class c_overlapped_task const *);
// void overlapped_task_block_until_finished(class c_overlapped_task const *);
// void overlapped_task_terminate(class c_overlapped_task const *);
// void overlapped_task_toggle_debug_rendering(bool);
// void overlapped_task_wait_for_all_tasks_to_finish(void);
// void overlapped_task_display_task_descriptions(void);
// void overlapped_task_inject_error(char const *, bool);
// void overlapped_task_pause(char const *, bool);
// void task_block_until_finished(struct s_task_slot *);
// void task_start(struct s_task_slot *);
// bool task_is_complete(struct s_task_slot *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, bool);
// void task_now_finished(struct s_task_slot *, unsigned long, unsigned long, unsigned long, unsigned long);
// public: void c_overlapped_task::task_recycled_during_completion(bool);
// public: bool c_overlapped_task::task_was_recycled_during_completion(void) const;
// struct s_task_slot * find_task_slot(class c_overlapped_task const *);
// public: c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_overlapped_task_state);
// public: static long s_static_array<class c_static_string<64>, 64>::get_count(void);
// public: bool c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum c_overlapped_task::e_overlapped_task_flags) const;
// public: void c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum c_overlapped_task::e_overlapped_task_flags, bool);
// public: c_flags<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>(void);
// public: void s_static_string<64>::to_lower(void);
// public: class c_static_string<64> & s_static_array<class c_static_string<64>, 64>::operator[]<long>(long);
// public: void c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_overlapped_task::e_overlapped_task_flags);
// private: static unsigned short c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_overlapped_task::e_overlapped_task_flags);
// public: long s_static_string<64>::length(void) const;
// public: static bool s_static_array<class c_static_string<64>, 64>::valid<long>(long);
// private: static unsigned short c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_overlapped_task::e_overlapped_task_flags);
// public: s_overlapped_globals::s_overlapped_globals(void);
// public: s_static_array<class c_static_string<64>, 64>::s_static_array<class c_static_string<64>, 64>(void);

//public: c_async_xoverlapped_scope_lock::c_async_xoverlapped_scope_lock(void)
//{
//    mangled_ppc("??0c_async_xoverlapped_scope_lock@@QAA@XZ");
//};

//public: c_async_xoverlapped_scope_lock::~c_async_xoverlapped_scope_lock(void)
//{
//    mangled_ppc("??1c_async_xoverlapped_scope_lock@@QAA@XZ");
//};

//public: c_overlapped_task::c_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_overlapped_task@@QAA@PBDJ@Z");
//};

//public: void c_overlapped_task::set_task_state_internal(enum e_overlapped_task_state)
//{
//    mangled_ppc("?set_task_state_internal@c_overlapped_task@@QAAXW4e_overlapped_task_state@@@Z");
//};

//merged_82E22480
//{
//    mangled_ppc("merged_82E22480");
//};

//public: virtual c_overlapped_task::~c_overlapped_task(void)
//{
//    mangled_ppc("??1c_overlapped_task@@UAA@XZ");
//};

//public: virtual void c_overlapped_task::update(unsigned long)
//{
//    mangled_ppc("?update@c_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_overlapped_task::success(unsigned long)
//{
//    mangled_ppc("?success@c_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_overlapped_task::failure(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?failure@c_overlapped_task@@UAAXKKK@Z");
//};

//public: virtual void c_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_overlapped_task@@UAAXXZ");
//};

//public: virtual void c_overlapped_task::reset(void)
//{
//    mangled_ppc("?reset@c_overlapped_task@@UAAXXZ");
//};

//public: virtual void c_overlapped_task::post_complete(enum e_overlapped_task_state)
//{
//    mangled_ppc("?post_complete@c_overlapped_task@@UAAXW4e_overlapped_task_state@@@Z");
//};

//public: virtual bool c_overlapped_task::is_result_successful(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?is_result_successful@c_overlapped_task@@UAA_NKKK@Z");
//};

//void overlapped_initialize(void)
//{
//    mangled_ppc("?overlapped_initialize@@YAXXZ");
//};

//void overlapped_dispose(void)
//{
//    mangled_ppc("?overlapped_dispose@@YAXXZ");
//};

//void overlapped_update(void)
//{
//    mangled_ppc("?overlapped_update@@YAXXZ");
//};

//public: unsigned long c_overlapped_task::get_minimum_duration_milliseconds(void)
//{
//    mangled_ppc("?get_minimum_duration_milliseconds@c_overlapped_task@@QAAKXZ");
//};

//void overlapped_render(void)
//{
//    mangled_ppc("?overlapped_render@@YAXXZ");
//};

//void overlapped_tasks_log_to_debug_txt(enum e_event_level)
//{
//    mangled_ppc("?overlapped_tasks_log_to_debug_txt@@YAXW4e_event_level@@@Z");
//};

//bool overlapped_task_start_internal(class c_overlapped_task *, char const *, long)
//{
//    mangled_ppc("?overlapped_task_start_internal@@YA_NPAVc_overlapped_task@@PBDJ@Z");
//};

//bool overlapped_task_is_running(class c_overlapped_task const *)
//{
//    mangled_ppc("?overlapped_task_is_running@@YA_NPBVc_overlapped_task@@@Z");
//};

//void overlapped_task_block_until_finished(class c_overlapped_task const *)
//{
//    mangled_ppc("?overlapped_task_block_until_finished@@YAXPBVc_overlapped_task@@@Z");
//};

//void overlapped_task_terminate(class c_overlapped_task const *)
//{
//    mangled_ppc("?overlapped_task_terminate@@YAXPBVc_overlapped_task@@@Z");
//};

//void overlapped_task_toggle_debug_rendering(bool)
//{
//    mangled_ppc("?overlapped_task_toggle_debug_rendering@@YAX_N@Z");
//};

//void overlapped_task_wait_for_all_tasks_to_finish(void)
//{
//    mangled_ppc("?overlapped_task_wait_for_all_tasks_to_finish@@YAXXZ");
//};

//void overlapped_task_display_task_descriptions(void)
//{
//    mangled_ppc("?overlapped_task_display_task_descriptions@@YAXXZ");
//};

//void overlapped_task_inject_error(char const *, bool)
//{
//    mangled_ppc("?overlapped_task_inject_error@@YAXPBD_N@Z");
//};

//void overlapped_task_pause(char const *, bool)
//{
//    mangled_ppc("?overlapped_task_pause@@YAXPBD_N@Z");
//};

//void task_block_until_finished(struct s_task_slot *)
//{
//    mangled_ppc("?task_block_until_finished@@YAXPAUs_task_slot@@@Z");
//};

//void task_start(struct s_task_slot *)
//{
//    mangled_ppc("?task_start@@YAXPAUs_task_slot@@@Z");
//};

//bool task_is_complete(struct s_task_slot *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, bool)
//{
//    mangled_ppc("?task_is_complete@@YA_NPAUs_task_slot@@PAK111_N@Z");
//};

//void task_now_finished(struct s_task_slot *, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?task_now_finished@@YAXPAUs_task_slot@@KKKK@Z");
//};

//public: void c_overlapped_task::task_recycled_during_completion(bool)
//{
//    mangled_ppc("?task_recycled_during_completion@c_overlapped_task@@QAAX_N@Z");
//};

//public: bool c_overlapped_task::task_was_recycled_during_completion(void) const
//{
//    mangled_ppc("?task_was_recycled_during_completion@c_overlapped_task@@QBA_NXZ");
//};

//struct s_task_slot * find_task_slot(class c_overlapped_task const *)
//{
//    mangled_ppc("?find_task_slot@@YAPAUs_task_slot@@PBVc_overlapped_task@@@Z");
//};

//public: c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_overlapped_task_state@@G$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_overlapped_task_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_overlapped_task_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_overlapped_task_state@@G$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_overlapped_task_state@@@Z");
//};

//public: static long s_static_array<class c_static_string<64>, 64>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_static_string@$0EA@@@$0EA@@@SAJXZ");
//};

//public: bool c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum c_overlapped_task::e_overlapped_task_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_overlapped_task_flags@c_overlapped_task@@@Z");
//};

//public: void c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum c_overlapped_task::e_overlapped_task_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_overlapped_task_flags@c_overlapped_task@@_N@Z");
//};

//public: c_flags<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void s_static_string<64>::to_lower(void)
//{
//    mangled_ppc("?to_lower@?$s_static_string@$0EA@@@QAAXXZ");
//};

//public: class c_static_string<64> & s_static_array<class c_static_string<64>, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_string@$0EA@@@$0EA@@@QAAAAV?$c_static_string@$0EA@@@J@Z");
//};

//public: void c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_overlapped_task::e_overlapped_task_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_overlapped_task_flags@c_overlapped_task@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_overlapped_task::e_overlapped_task_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@CAGW4e_overlapped_task_flags@c_overlapped_task@@@Z");
//};

//public: long s_static_string<64>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0EA@@@QBAJXZ");
//};

//public: static bool s_static_array<class c_static_string<64>, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_static_string@$0EA@@@$0EA@@@SA_NJ@Z");
//};

//private: static unsigned short c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum c_overlapped_task::e_overlapped_task_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_overlapped_task::e_overlapped_task_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_overlapped_task_flags@c_overlapped_task@@G$01Us_default_enum_string_resolver@@@@CAGW4e_overlapped_task_flags@c_overlapped_task@@@Z");
//};

//public: s_overlapped_globals::s_overlapped_globals(void)
//{
//    mangled_ppc("??0s_overlapped_globals@@QAA@XZ");
//};

//public: s_static_array<class c_static_string<64>, 64>::s_static_array<class c_static_string<64>, 64>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_string@$0EA@@@$0EA@@@QAA@XZ");
//};

