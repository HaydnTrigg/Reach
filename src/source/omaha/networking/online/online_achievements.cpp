/* ---------- headers */

#include "omaha\networking\online\online_achievements.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_achievement, char, 0, 79, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_achievement@@D$0A@$0EP@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_achievement const c_enum_no_init<enum e_achievement, char, 0, 79, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_achievement@@D$0A@$0EP@Us_default_enum_string_resolver@@@@2W4e_achievement@@B"
// public: static long const s_static_array<struct s_achievement_controller, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_achievement_controller@@$03@@2JB"
// char const **k_controller_achievement_failure_text; // "?k_controller_achievement_failure_text@@3PAPBDA"
// long volatile `public: virtual unsigned long __cdecl c_achievements_enumerate_overlapped_task::start(void *)'::`68'::x_event_category_index; // "?x_event_category_index@?EE@??start@c_achievements_enumerate_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_achievements_enumerate_overlapped_task::start(void *)'::`59'::x_event_category_index; // "?x_event_category_index@?DL@??start@c_achievements_enumerate_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_achievements_enumerate_overlapped_task::start(void *)'::`50'::x_event_category_index; // "?x_event_category_index@?DC@??start@c_achievements_enumerate_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual void __cdecl c_achievements_enumerate_overlapped_task::success(unsigned long)'::`26'::x_event_category_index; // "?x_event_category_index@?BK@??success@c_achievements_enumerate_overlapped_task@@UAAXK@Z@4JC"
// long volatile `public: virtual void __cdecl c_achievements_enumerate_overlapped_task::success(unsigned long)'::`17'::x_event_category_index; // "?x_event_category_index@?BB@??success@c_achievements_enumerate_overlapped_task@@UAAXK@Z@4JC"
// long volatile `public: virtual void __cdecl c_achievements_enumerate_overlapped_task::failure(unsigned long, unsigned long, unsigned long)'::`8'::x_event_category_index; // "?x_event_category_index@?7??failure@c_achievements_enumerate_overlapped_task@@UAAXKKK@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_achievement_write_overlapped_task::start(void *)'::`78'::x_event_category_index; // "?x_event_category_index@?EO@??start@c_achievement_write_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_achievement_write_overlapped_task::start(void *)'::`69'::x_event_category_index; // "?x_event_category_index@?EF@??start@c_achievement_write_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_achievement_write_overlapped_task::start(void *)'::`60'::x_event_category_index; // "?x_event_category_index@?DM@??start@c_achievement_write_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_achievement_write_overlapped_task::start(void *)'::`48'::x_event_category_index; // "?x_event_category_index@?DA@??start@c_achievement_write_overlapped_task@@UAAKPAX@Z@4JC"

// void achievements_initialize(void);
// public: c_achievements_enumerate_overlapped_task::c_achievements_enumerate_overlapped_task(char const *, long);
// public: virtual char const * c_achievements_enumerate_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_achievements_enumerate_overlapped_task::start(void *);
// public: virtual void c_achievements_enumerate_overlapped_task::success(unsigned long);
// public: virtual void c_achievements_enumerate_overlapped_task::failure(unsigned long, unsigned long, unsigned long);
// public: virtual void c_achievements_enumerate_overlapped_task::complete(void);
// merged_82AC9888;
// public: virtual c_achievements_enumerate_overlapped_task::~c_achievements_enumerate_overlapped_task(void);
// public: c_achievement_write_overlapped_task::c_achievement_write_overlapped_task(char const *, long);
// public: virtual char const * c_achievement_write_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_achievement_write_overlapped_task::start(void *);
// enum e_achievement operator++(enum e_achievement &, int);
// public: virtual void c_achievement_write_overlapped_task::complete(void);
// merged_82AC9E90;
// public: virtual c_achievement_write_overlapped_task::~c_achievement_write_overlapped_task(void);
// void achievements_dispose(void);
// void achievements_update(float);
// public: bool c_cui_screen_manager::category_active(enum e_window_index, enum e_cui_screen_category) const;
// private: struct c_cui_screen_manager::s_window const * c_cui_screen_manager::get_window(long) const;
// public: void c_achievements_enumerate_overlapped_task::initialize(enum e_controller_index);
// public: void c_achievement_write_overlapped_task::initialize(enum e_controller_index, class c_big_flags_typed_no_init<long, 256> const *);
// bool controller_has_achievement(enum e_controller_index, enum e_achievement);
// bool controller_has_achievement_by_name(enum e_controller_index, long);
// bool controller_has_achievement_by_name_no_warn(enum e_controller_index, long);
// char const * controller_failure_reason_get_string_const(enum e_controller_achievement_failure_reason);
// void controller_grant_achievement(enum e_controller_index, enum e_achievement);
// enum e_controller_achievement_failure_reason controller_get_achievement_failure_reason(enum e_controller_index, enum e_achievement, bool, bool);
// public: bool c_controller_interface::is_unsigned_in_user(void) const;
// public: bool c_controller_interface::in_use(void) const;
// void controller_grant_achievement_lsp_no_condition_check(enum e_controller_index, enum e_achievement);
// void controller_grant_achievement_by_name(enum e_controller_index, long);
// void scripting_grant_achievement_to_all_players_by_name(long);
// enum e_achievement get_e_achievement_from_online_achievement_id(unsigned long);
// unsigned long get_online_achievement_id_from_e_achievement(enum e_achievement);
// void online_achievements_register_controller_monitor(void);
// public: c_achievement_controller_monitor::c_achievement_controller_monitor(void);
// void online_achievements_controller_initialize(enum e_controller_index);
// bool controller_has_achievement_by_name_internal(enum e_controller_index, long, bool);
// public: virtual bool c_achievement_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_achievement_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// void online_achievements_controller_achievements_begin_retrieval(enum e_controller_index);
// public: virtual void c_achievement_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// public: long c_big_flags_typed_no_init<long, 256>::get_lowest_bit_set(void) const;
// public: bool c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::test(enum e_controller_state_flags) const;
// public: bool c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_cui_screen_category) const;
// void overlapped_track_delete<class c_achievements_enumerate_overlapped_task>(class c_achievements_enumerate_overlapped_task *);
// void overlapped_track_delete<class c_achievement_write_overlapped_task>(class c_achievement_write_overlapped_task *);
// public: struct s_achievement_controller & s_static_array<struct s_achievement_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// bool operator!=<enum e_controller_index>(enum e_controller_index const &, enum e_none_sentinel const &);
// public: static bool c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::valid_bit(enum e_controller_state_flags);
// private: static unsigned long c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::flag_size_type(enum e_controller_state_flags);
// public: static bool c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_cui_screen_category);
// private: static unsigned long c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_cui_screen_category);
// public: static bool s_static_array<struct s_achievement_controller, 4>::valid<enum e_controller_index>(enum e_controller_index);
// bool operator==<enum e_controller_index>(enum e_controller_index const &, enum e_none_sentinel const &);
// public: s_achievement_globals::s_achievement_globals(void);

//void achievements_initialize(void)
//{
//    mangled_ppc("?achievements_initialize@@YAXXZ");
//};

//public: c_achievements_enumerate_overlapped_task::c_achievements_enumerate_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_achievements_enumerate_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_achievements_enumerate_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_achievements_enumerate_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_achievements_enumerate_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_achievements_enumerate_overlapped_task@@UAAKPAX@Z");
//};

//public: virtual void c_achievements_enumerate_overlapped_task::success(unsigned long)
//{
//    mangled_ppc("?success@c_achievements_enumerate_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_achievements_enumerate_overlapped_task::failure(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?failure@c_achievements_enumerate_overlapped_task@@UAAXKKK@Z");
//};

//public: virtual void c_achievements_enumerate_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_achievements_enumerate_overlapped_task@@UAAXXZ");
//};

//merged_82AC9888
//{
//    mangled_ppc("merged_82AC9888");
//};

//public: virtual c_achievements_enumerate_overlapped_task::~c_achievements_enumerate_overlapped_task(void)
//{
//    mangled_ppc("??1c_achievements_enumerate_overlapped_task@@UAA@XZ");
//};

//public: c_achievement_write_overlapped_task::c_achievement_write_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_achievement_write_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_achievement_write_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_achievement_write_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_achievement_write_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_achievement_write_overlapped_task@@UAAKPAX@Z");
//};

//enum e_achievement operator++(enum e_achievement &, int)
//{
//    mangled_ppc("??E@YA?AW4e_achievement@@AAW40@H@Z");
//};

//public: virtual void c_achievement_write_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_achievement_write_overlapped_task@@UAAXXZ");
//};

//merged_82AC9E90
//{
//    mangled_ppc("merged_82AC9E90");
//};

//public: virtual c_achievement_write_overlapped_task::~c_achievement_write_overlapped_task(void)
//{
//    mangled_ppc("??1c_achievement_write_overlapped_task@@UAA@XZ");
//};

//void achievements_dispose(void)
//{
//    mangled_ppc("?achievements_dispose@@YAXXZ");
//};

//void achievements_update(float)
//{
//    mangled_ppc("?achievements_update@@YAXM@Z");
//};

//public: bool c_cui_screen_manager::category_active(enum e_window_index, enum e_cui_screen_category) const
//{
//    mangled_ppc("?category_active@c_cui_screen_manager@@QBA_NW4e_window_index@@W4e_cui_screen_category@@@Z");
//};

//private: struct c_cui_screen_manager::s_window const * c_cui_screen_manager::get_window(long) const
//{
//    mangled_ppc("?get_window@c_cui_screen_manager@@ABAPBUs_window@1@J@Z");
//};

//public: void c_achievements_enumerate_overlapped_task::initialize(enum e_controller_index)
//{
//    mangled_ppc("?initialize@c_achievements_enumerate_overlapped_task@@QAAXW4e_controller_index@@@Z");
//};

//public: void c_achievement_write_overlapped_task::initialize(enum e_controller_index, class c_big_flags_typed_no_init<long, 256> const *)
//{
//    mangled_ppc("?initialize@c_achievement_write_overlapped_task@@QAAXW4e_controller_index@@PBV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//bool controller_has_achievement(enum e_controller_index, enum e_achievement)
//{
//    mangled_ppc("?controller_has_achievement@@YA_NW4e_controller_index@@W4e_achievement@@@Z");
//};

//bool controller_has_achievement_by_name(enum e_controller_index, long)
//{
//    mangled_ppc("?controller_has_achievement_by_name@@YA_NW4e_controller_index@@J@Z");
//};

//bool controller_has_achievement_by_name_no_warn(enum e_controller_index, long)
//{
//    mangled_ppc("?controller_has_achievement_by_name_no_warn@@YA_NW4e_controller_index@@J@Z");
//};

//char const * controller_failure_reason_get_string_const(enum e_controller_achievement_failure_reason)
//{
//    mangled_ppc("?controller_failure_reason_get_string_const@@YAPBDW4e_controller_achievement_failure_reason@@@Z");
//};

//void controller_grant_achievement(enum e_controller_index, enum e_achievement)
//{
//    mangled_ppc("?controller_grant_achievement@@YAXW4e_controller_index@@W4e_achievement@@@Z");
//};

//enum e_controller_achievement_failure_reason controller_get_achievement_failure_reason(enum e_controller_index, enum e_achievement, bool, bool)
//{
//    mangled_ppc("?controller_get_achievement_failure_reason@@YA?AW4e_controller_achievement_failure_reason@@W4e_controller_index@@W4e_achievement@@_N2@Z");
//};

//public: bool c_controller_interface::is_unsigned_in_user(void) const
//{
//    mangled_ppc("?is_unsigned_in_user@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::in_use(void) const
//{
//    mangled_ppc("?in_use@c_controller_interface@@QBA_NXZ");
//};

//void controller_grant_achievement_lsp_no_condition_check(enum e_controller_index, enum e_achievement)
//{
//    mangled_ppc("?controller_grant_achievement_lsp_no_condition_check@@YAXW4e_controller_index@@W4e_achievement@@@Z");
//};

//void controller_grant_achievement_by_name(enum e_controller_index, long)
//{
//    mangled_ppc("?controller_grant_achievement_by_name@@YAXW4e_controller_index@@J@Z");
//};

//void scripting_grant_achievement_to_all_players_by_name(long)
//{
//    mangled_ppc("?scripting_grant_achievement_to_all_players_by_name@@YAXJ@Z");
//};

//enum e_achievement get_e_achievement_from_online_achievement_id(unsigned long)
//{
//    mangled_ppc("?get_e_achievement_from_online_achievement_id@@YA?AW4e_achievement@@K@Z");
//};

//unsigned long get_online_achievement_id_from_e_achievement(enum e_achievement)
//{
//    mangled_ppc("?get_online_achievement_id_from_e_achievement@@YAKW4e_achievement@@@Z");
//};

//void online_achievements_register_controller_monitor(void)
//{
//    mangled_ppc("?online_achievements_register_controller_monitor@@YAXXZ");
//};

//public: c_achievement_controller_monitor::c_achievement_controller_monitor(void)
//{
//    mangled_ppc("??0c_achievement_controller_monitor@@QAA@XZ");
//};

//void online_achievements_controller_initialize(enum e_controller_index)
//{
//    mangled_ppc("?online_achievements_controller_initialize@@YAXW4e_controller_index@@@Z");
//};

//bool controller_has_achievement_by_name_internal(enum e_controller_index, long, bool)
//{
//    mangled_ppc("?controller_has_achievement_by_name_internal@@YA_NW4e_controller_index@@J_N@Z");
//};

//public: virtual bool c_achievement_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_achievement_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_achievement_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_achievement_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//void online_achievements_controller_achievements_begin_retrieval(enum e_controller_index)
//{
//    mangled_ppc("?online_achievements_controller_achievements_begin_retrieval@@YAXW4e_controller_index@@@Z");
//};

//public: virtual void c_achievement_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_achievement_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: long c_big_flags_typed_no_init<long, 256>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_big_flags_typed_no_init@J$0BAA@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::test(enum e_controller_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@QBA_NW4e_controller_state_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_cui_screen_category) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cui_screen_category@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NW4e_cui_screen_category@@@Z");
//};

//void overlapped_track_delete<class c_achievements_enumerate_overlapped_task>(class c_achievements_enumerate_overlapped_task *)
//{
//    mangled_ppc("??$overlapped_track_delete@Vc_achievements_enumerate_overlapped_task@@@@YAXPAVc_achievements_enumerate_overlapped_task@@@Z");
//};

//void overlapped_track_delete<class c_achievement_write_overlapped_task>(class c_achievement_write_overlapped_task *)
//{
//    mangled_ppc("??$overlapped_track_delete@Vc_achievement_write_overlapped_task@@@@YAXPAVc_achievement_write_overlapped_task@@@Z");
//};

//public: struct s_achievement_controller & s_static_array<struct s_achievement_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_achievement_controller@@$03@@QAAAAUs_achievement_controller@@W4e_controller_index@@@Z");
//};

//bool operator!=<enum e_controller_index>(enum e_controller_index const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_controller_index@@@@YA_NABW4e_controller_index@@ABW4e_none_sentinel@@@Z");
//};

//public: static bool c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::valid_bit(enum e_controller_state_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@SA_NW4e_controller_state_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::flag_size_type(enum e_controller_state_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@CAKW4e_controller_state_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_cui_screen_category)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cui_screen_category@@K$0BC@Us_default_enum_string_resolver@@@@SA_NW4e_cui_screen_category@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_cui_screen_category)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cui_screen_category@@K$0BC@Us_default_enum_string_resolver@@@@CAKW4e_cui_screen_category@@@Z");
//};

//public: static bool s_static_array<struct s_achievement_controller, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_achievement_controller@@$03@@SA_NW4e_controller_index@@@Z");
//};

//bool operator==<enum e_controller_index>(enum e_controller_index const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_controller_index@@@@YA_NABW4e_controller_index@@ABW4e_none_sentinel@@@Z");
//};

//public: s_achievement_globals::s_achievement_globals(void)
//{
//    mangled_ppc("??0s_achievement_globals@@QAA@XZ");
//};

