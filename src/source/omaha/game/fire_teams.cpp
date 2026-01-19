/* ---------- headers */

#include "omaha\game\fire_teams.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_ai_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_ai_directive_types const c_enum_no_init<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_ai_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@2W4e_ai_directive_types@@B"
// public: static long const s_static_array<struct ai_directive_score, 16>::k_element_count; // "?k_element_count@?$s_static_array@Uai_directive_score@@$0BA@@@2JB"
// char const **directive_type_names; // "?directive_type_names@@3PAPBDA"
// long g_fire_team_num_strings; // "?g_fire_team_num_strings@@3JA"
// bool debug_fire_teams; // "?debug_fire_teams@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_fire_team_data_allocator::*)(void *)> g_fire_team_data_allocator; // "?g_fire_team_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@A"
// class c_static_string<256> *g_fire_team_status_strings; // "?g_fire_team_status_strings@@3PAV?$c_static_string@$0BAA@@@A"
// struct s_data_array *fire_team_data; // "?fire_team_data@@3PAUs_data_array@@A"

// void __tls_set_g_fire_team_data_allocator(void *);
// void fire_teams_initialize(void);
// void fire_teams_dispose(void);
// void fire_teams_initialize_for_new_map(void);
// void fire_teams_dispose_from_old_map(void);
// void fire_teams_handle_deleted_actor(long);
// void fire_team_handle_removed_actor(long, long);
// void fire_teams_handle_deleted_object(long);
// void fire_teams_handle_deleted_player(long);
// void fire_teams_handle_killed_player(long);
// void fire_team_notify_actor_joined(long, long);
// public: void s_fire_team_ai_member::clear(void);
// void fire_team_notify_actor_damaged(long, long, float, long);
// void fire_team_notify_actor_died(long, long);
// void data_mine_insert_fireteam_member_death(long, long);
// void fire_team_remove_ai_member(long, long);
// long fire_team_find_ai_member(long, long);
// void fire_team_deactivate_regroup_directive(long, bool);
// void fire_teams_reset(void);
// public: void fire_team_directive::clear(void);
// void fire_teams_update(void);
// void fire_team_update_ai_member_list(long);
// long fire_team_new(void);
// void fire_team_delete(long);
// bool fire_team_datum_available_to_current_thread(void);
// long fire_team_get_pending_directive_selected_member_unit_index(long);
// bool fire_team_contains_alive_actors(long);
// short fire_team_get_alive_actor_count(long);
// short fire_team_get_total_actor_count(long);
// long fire_team_get_actor_max(long);
// bool fire_team_is_full(long);
// float fire_team_get_max_squad_absorb_distance(long);
// bool fire_team_attach_squad(long, long);
// bool fire_team_detach_squad(long);
// bool fire_team_attach_player(long, long);
// bool fire_team_detach_player(long);
// long fire_team_get_leader_unit_index(long);
// long fire_team_get_closest_actor_to_leader(long);
// long unit_get_fire_team_index(long);
// long fire_team_get_current_directive_target_object_index(long);
// long fire_team_get_pending_directive_target_object_index(long);
// long fire_team_get_next_directive_target_object_index(long);
// long fire_team_get_pending_directive_unit(long);
// long fire_team_get_current_directive_unit(long);
// bool actor_has_fire_team_directive(int);
// bool actor_has_completed_fire_team_directive(int);
// bool fire_team_is_regroup_directive_active(long);
// void fire_team_issue_directive(long, enum e_directive_types, struct fire_team_directive_data *);
// bool fire_team_performing_directive(struct fire_team_datum const *, enum e_directive_types, struct fire_team_directive_data *);
// void fire_team_clear_directive(struct fire_team_directive *);
// void fire_team_directive_data_clear(struct fire_team_directive_data *);
// void fire_team_scripting_add_player_squad(long, long);
// void fire_team_scripting_remove_player_squad(long, long);
// bool fire_team_scripting_is_ai_in_fireteam(long);
// void fire_team_scripting_set_max(long, short);
// struct fire_team_datum * get_fire_team_from_player_unit_index(long, char const *);
// void fire_team_scripting_set_no_max(long);
// void fire_team_scripting_set_max_squad_absorb_distance(long, float);
// void fire_team_scripting_set_fallback_squad(long, long);
// void fire_team_iterator_new(struct fire_team_iterator *);
// struct fire_team_datum * fire_team_iterator_next(struct fire_team_iterator *);
// void fire_team_squad_iterator_new(struct fire_team_squad_iterator *, long);
// struct squad_datum * fire_team_squad_iterator_next(struct fire_team_squad_iterator *);
// void fire_team_actor_iterator_new(struct fire_team_actor_iterator *, long);
// struct actor_datum * fire_team_actor_iterator_next(struct fire_team_actor_iterator *);
// void fire_team_ai_member_iterator_new(struct fire_team_ai_member_iterator *, long);
// struct s_fire_team_ai_member * fire_team_ai_member_iterator_next(struct fire_team_ai_member_iterator *);
// void fire_team_player_iterator_new(struct fire_team_player_iterator *, long);
// struct player_datum * fire_team_player_iterator_next(struct fire_team_player_iterator *);
// void fire_teams_debug_render(void);
// void fire_team_debug_render(long);
// void fire_teams_debug_add_status_line(char const *);
// public: c_enum<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_directive_types);
// public: enum e_directive_types c_enum_no_init<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_directive_types(void) const;
// public: bool c_enum_no_init<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_directive_types) const;
// public: c_enum<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>(enum e_fireteam_member_state_type);
// public: enum e_fireteam_member_state_type c_enum_no_init<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_fireteam_member_state_type(void) const;
// public: bool c_enum_no_init<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_fireteam_member_state_type) const;
// public: void c_data_iterator<struct fire_team_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct fire_team_datum>::next(void);
// public: struct fire_team_datum * c_data_iterator<struct fire_team_datum>::get_datum(void) const;
// public: long c_data_iterator<struct fire_team_datum>::get_index(void) const;
// public: struct ai_directive_score & s_static_array<struct ai_directive_score, 16>::operator[]<long>(long);
// bool operator!=<int>(int const &, enum e_none_sentinel const &);
// public: static bool s_static_array<struct ai_directive_score, 16>::valid<long>(long);
// bool operator==<int>(int const &, enum e_none_sentinel const &);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>(void);
// void g_fire_team_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_fire_team_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z");
//};

//void fire_teams_initialize(void)
//{
//    mangled_ppc("?fire_teams_initialize@@YAXXZ");
//};

//void fire_teams_dispose(void)
//{
//    mangled_ppc("?fire_teams_dispose@@YAXXZ");
//};

//void fire_teams_initialize_for_new_map(void)
//{
//    mangled_ppc("?fire_teams_initialize_for_new_map@@YAXXZ");
//};

//void fire_teams_dispose_from_old_map(void)
//{
//    mangled_ppc("?fire_teams_dispose_from_old_map@@YAXXZ");
//};

//void fire_teams_handle_deleted_actor(long)
//{
//    mangled_ppc("?fire_teams_handle_deleted_actor@@YAXJ@Z");
//};

//void fire_team_handle_removed_actor(long, long)
//{
//    mangled_ppc("?fire_team_handle_removed_actor@@YAXJJ@Z");
//};

//void fire_teams_handle_deleted_object(long)
//{
//    mangled_ppc("?fire_teams_handle_deleted_object@@YAXJ@Z");
//};

//void fire_teams_handle_deleted_player(long)
//{
//    mangled_ppc("?fire_teams_handle_deleted_player@@YAXJ@Z");
//};

//void fire_teams_handle_killed_player(long)
//{
//    mangled_ppc("?fire_teams_handle_killed_player@@YAXJ@Z");
//};

//void fire_team_notify_actor_joined(long, long)
//{
//    mangled_ppc("?fire_team_notify_actor_joined@@YAXJJ@Z");
//};

//public: void s_fire_team_ai_member::clear(void)
//{
//    mangled_ppc("?clear@s_fire_team_ai_member@@QAAXXZ");
//};

//void fire_team_notify_actor_damaged(long, long, float, long)
//{
//    mangled_ppc("?fire_team_notify_actor_damaged@@YAXJJMJ@Z");
//};

//void fire_team_notify_actor_died(long, long)
//{
//    mangled_ppc("?fire_team_notify_actor_died@@YAXJJ@Z");
//};

//void data_mine_insert_fireteam_member_death(long, long)
//{
//    mangled_ppc("?data_mine_insert_fireteam_member_death@@YAXJJ@Z");
//};

//void fire_team_remove_ai_member(long, long)
//{
//    mangled_ppc("?fire_team_remove_ai_member@@YAXJJ@Z");
//};

//long fire_team_find_ai_member(long, long)
//{
//    mangled_ppc("?fire_team_find_ai_member@@YAJJJ@Z");
//};

//void fire_team_deactivate_regroup_directive(long, bool)
//{
//    mangled_ppc("?fire_team_deactivate_regroup_directive@@YAXJ_N@Z");
//};

//void fire_teams_reset(void)
//{
//    mangled_ppc("?fire_teams_reset@@YAXXZ");
//};

//public: void fire_team_directive::clear(void)
//{
//    mangled_ppc("?clear@fire_team_directive@@QAAXXZ");
//};

//void fire_teams_update(void)
//{
//    mangled_ppc("?fire_teams_update@@YAXXZ");
//};

//void fire_team_update_ai_member_list(long)
//{
//    mangled_ppc("?fire_team_update_ai_member_list@@YAXJ@Z");
//};

//long fire_team_new(void)
//{
//    mangled_ppc("?fire_team_new@@YAJXZ");
//};

//void fire_team_delete(long)
//{
//    mangled_ppc("?fire_team_delete@@YAXJ@Z");
//};

//bool fire_team_datum_available_to_current_thread(void)
//{
//    mangled_ppc("?fire_team_datum_available_to_current_thread@@YA_NXZ");
//};

//long fire_team_get_pending_directive_selected_member_unit_index(long)
//{
//    mangled_ppc("?fire_team_get_pending_directive_selected_member_unit_index@@YAJJ@Z");
//};

//bool fire_team_contains_alive_actors(long)
//{
//    mangled_ppc("?fire_team_contains_alive_actors@@YA_NJ@Z");
//};

//short fire_team_get_alive_actor_count(long)
//{
//    mangled_ppc("?fire_team_get_alive_actor_count@@YAFJ@Z");
//};

//short fire_team_get_total_actor_count(long)
//{
//    mangled_ppc("?fire_team_get_total_actor_count@@YAFJ@Z");
//};

//long fire_team_get_actor_max(long)
//{
//    mangled_ppc("?fire_team_get_actor_max@@YAJJ@Z");
//};

//bool fire_team_is_full(long)
//{
//    mangled_ppc("?fire_team_is_full@@YA_NJ@Z");
//};

//float fire_team_get_max_squad_absorb_distance(long)
//{
//    mangled_ppc("?fire_team_get_max_squad_absorb_distance@@YAMJ@Z");
//};

//bool fire_team_attach_squad(long, long)
//{
//    mangled_ppc("?fire_team_attach_squad@@YA_NJJ@Z");
//};

//bool fire_team_detach_squad(long)
//{
//    mangled_ppc("?fire_team_detach_squad@@YA_NJ@Z");
//};

//bool fire_team_attach_player(long, long)
//{
//    mangled_ppc("?fire_team_attach_player@@YA_NJJ@Z");
//};

//bool fire_team_detach_player(long)
//{
//    mangled_ppc("?fire_team_detach_player@@YA_NJ@Z");
//};

//long fire_team_get_leader_unit_index(long)
//{
//    mangled_ppc("?fire_team_get_leader_unit_index@@YAJJ@Z");
//};

//long fire_team_get_closest_actor_to_leader(long)
//{
//    mangled_ppc("?fire_team_get_closest_actor_to_leader@@YAJJ@Z");
//};

//long unit_get_fire_team_index(long)
//{
//    mangled_ppc("?unit_get_fire_team_index@@YAJJ@Z");
//};

//long fire_team_get_current_directive_target_object_index(long)
//{
//    mangled_ppc("?fire_team_get_current_directive_target_object_index@@YAJJ@Z");
//};

//long fire_team_get_pending_directive_target_object_index(long)
//{
//    mangled_ppc("?fire_team_get_pending_directive_target_object_index@@YAJJ@Z");
//};

//long fire_team_get_next_directive_target_object_index(long)
//{
//    mangled_ppc("?fire_team_get_next_directive_target_object_index@@YAJJ@Z");
//};

//long fire_team_get_pending_directive_unit(long)
//{
//    mangled_ppc("?fire_team_get_pending_directive_unit@@YAJJ@Z");
//};

//long fire_team_get_current_directive_unit(long)
//{
//    mangled_ppc("?fire_team_get_current_directive_unit@@YAJJ@Z");
//};

//bool actor_has_fire_team_directive(int)
//{
//    mangled_ppc("?actor_has_fire_team_directive@@YA_NH@Z");
//};

//bool actor_has_completed_fire_team_directive(int)
//{
//    mangled_ppc("?actor_has_completed_fire_team_directive@@YA_NH@Z");
//};

//bool fire_team_is_regroup_directive_active(long)
//{
//    mangled_ppc("?fire_team_is_regroup_directive_active@@YA_NJ@Z");
//};

//void fire_team_issue_directive(long, enum e_directive_types, struct fire_team_directive_data *)
//{
//    mangled_ppc("?fire_team_issue_directive@@YAXJW4e_directive_types@@PAUfire_team_directive_data@@@Z");
//};

//bool fire_team_performing_directive(struct fire_team_datum const *, enum e_directive_types, struct fire_team_directive_data *)
//{
//    mangled_ppc("?fire_team_performing_directive@@YA_NPBUfire_team_datum@@W4e_directive_types@@PAUfire_team_directive_data@@@Z");
//};

//void fire_team_clear_directive(struct fire_team_directive *)
//{
//    mangled_ppc("?fire_team_clear_directive@@YAXPAUfire_team_directive@@@Z");
//};

//void fire_team_directive_data_clear(struct fire_team_directive_data *)
//{
//    mangled_ppc("?fire_team_directive_data_clear@@YAXPAUfire_team_directive_data@@@Z");
//};

//void fire_team_scripting_add_player_squad(long, long)
//{
//    mangled_ppc("?fire_team_scripting_add_player_squad@@YAXJJ@Z");
//};

//void fire_team_scripting_remove_player_squad(long, long)
//{
//    mangled_ppc("?fire_team_scripting_remove_player_squad@@YAXJJ@Z");
//};

//bool fire_team_scripting_is_ai_in_fireteam(long)
//{
//    mangled_ppc("?fire_team_scripting_is_ai_in_fireteam@@YA_NJ@Z");
//};

//void fire_team_scripting_set_max(long, short)
//{
//    mangled_ppc("?fire_team_scripting_set_max@@YAXJF@Z");
//};

//struct fire_team_datum * get_fire_team_from_player_unit_index(long, char const *)
//{
//    mangled_ppc("?get_fire_team_from_player_unit_index@@YAPAUfire_team_datum@@JPBD@Z");
//};

//void fire_team_scripting_set_no_max(long)
//{
//    mangled_ppc("?fire_team_scripting_set_no_max@@YAXJ@Z");
//};

//void fire_team_scripting_set_max_squad_absorb_distance(long, float)
//{
//    mangled_ppc("?fire_team_scripting_set_max_squad_absorb_distance@@YAXJM@Z");
//};

//void fire_team_scripting_set_fallback_squad(long, long)
//{
//    mangled_ppc("?fire_team_scripting_set_fallback_squad@@YAXJJ@Z");
//};

//void fire_team_iterator_new(struct fire_team_iterator *)
//{
//    mangled_ppc("?fire_team_iterator_new@@YAXPAUfire_team_iterator@@@Z");
//};

//struct fire_team_datum * fire_team_iterator_next(struct fire_team_iterator *)
//{
//    mangled_ppc("?fire_team_iterator_next@@YAPAUfire_team_datum@@PAUfire_team_iterator@@@Z");
//};

//void fire_team_squad_iterator_new(struct fire_team_squad_iterator *, long)
//{
//    mangled_ppc("?fire_team_squad_iterator_new@@YAXPAUfire_team_squad_iterator@@J@Z");
//};

//struct squad_datum * fire_team_squad_iterator_next(struct fire_team_squad_iterator *)
//{
//    mangled_ppc("?fire_team_squad_iterator_next@@YAPAUsquad_datum@@PAUfire_team_squad_iterator@@@Z");
//};

//void fire_team_actor_iterator_new(struct fire_team_actor_iterator *, long)
//{
//    mangled_ppc("?fire_team_actor_iterator_new@@YAXPAUfire_team_actor_iterator@@J@Z");
//};

//struct actor_datum * fire_team_actor_iterator_next(struct fire_team_actor_iterator *)
//{
//    mangled_ppc("?fire_team_actor_iterator_next@@YAPAUactor_datum@@PAUfire_team_actor_iterator@@@Z");
//};

//void fire_team_ai_member_iterator_new(struct fire_team_ai_member_iterator *, long)
//{
//    mangled_ppc("?fire_team_ai_member_iterator_new@@YAXPAUfire_team_ai_member_iterator@@J@Z");
//};

//struct s_fire_team_ai_member * fire_team_ai_member_iterator_next(struct fire_team_ai_member_iterator *)
//{
//    mangled_ppc("?fire_team_ai_member_iterator_next@@YAPAUs_fire_team_ai_member@@PAUfire_team_ai_member_iterator@@@Z");
//};

//void fire_team_player_iterator_new(struct fire_team_player_iterator *, long)
//{
//    mangled_ppc("?fire_team_player_iterator_new@@YAXPAUfire_team_player_iterator@@J@Z");
//};

//struct player_datum * fire_team_player_iterator_next(struct fire_team_player_iterator *)
//{
//    mangled_ppc("?fire_team_player_iterator_next@@YAPAUplayer_datum@@PAUfire_team_player_iterator@@@Z");
//};

//void fire_teams_debug_render(void)
//{
//    mangled_ppc("?fire_teams_debug_render@@YAXXZ");
//};

//void fire_team_debug_render(long)
//{
//    mangled_ppc("?fire_team_debug_render@@YAXJ@Z");
//};

//void fire_teams_debug_add_status_line(char const *)
//{
//    mangled_ppc("?fire_teams_debug_add_status_line@@YAXPBD@Z");
//};

//public: c_enum<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_directive_types)
//{
//    mangled_ppc("??0?$c_enum@W4e_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_directive_types@@@Z");
//};

//public: enum e_directive_types c_enum_no_init<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_directive_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_directive_types@@XZ");
//};

//public: bool c_enum_no_init<enum e_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_directive_types) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_directive_types@@@Z");
//};

//public: c_enum<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>(enum e_fireteam_member_state_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_fireteam_member_state_type@@G$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_fireteam_member_state_type@@@Z");
//};

//public: enum e_fireteam_member_state_type c_enum_no_init<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_fireteam_member_state_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_fireteam_member_state_type@@G$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_fireteam_member_state_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_fireteam_member_state_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_fireteam_member_state_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_fireteam_member_state_type@@G$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_fireteam_member_state_type@@@Z");
//};

//public: void c_data_iterator<struct fire_team_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Ufire_team_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct fire_team_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Ufire_team_datum@@@@QAA_NXZ");
//};

//public: struct fire_team_datum * c_data_iterator<struct fire_team_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Ufire_team_datum@@@@QBAPAUfire_team_datum@@XZ");
//};

//public: long c_data_iterator<struct fire_team_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Ufire_team_datum@@@@QBAJXZ");
//};

//public: struct ai_directive_score & s_static_array<struct ai_directive_score, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uai_directive_score@@$0BA@@@QAAAAUai_directive_score@@J@Z");
//};

//bool operator!=<int>(int const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9H@@YA_NABHABW4e_none_sentinel@@@Z");
//};

//public: static bool s_static_array<struct ai_directive_score, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uai_directive_score@@$0BA@@@SA_NJ@Z");
//};

//bool operator==<int>(int const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8H@@YA_NABHABW4e_none_sentinel@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_fire_team_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_fire_team_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_fire_team_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_fire_team_data_allocator@@YAXXZ");
//};

