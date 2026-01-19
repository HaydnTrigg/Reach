/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_839473F8; // "except_record_839473F8"
// except_record_83947628; // "except_record_83947628"
// except_record_83947928; // "except_record_83947928"
// except_record_83948038; // "except_record_83948038"
// except_record_839482B8; // "except_record_839482B8"
// except_record_83948400; // "except_record_83948400"
// except_record_839485A8; // "except_record_839485A8"
// except_record_83948808; // "except_record_83948808"
// except_record_8394A2A8; // "except_record_8394A2A8"
// except_record_8394ADF8; // "except_record_8394ADF8"
// except_record_8394BD78; // "except_record_8394BD78"
// except_record_8394E508; // "except_record_8394E508"
// short *global_clump_state_combat_status_mapping; // "?global_clump_state_combat_status_mapping@@3PAFA"
// char **group_state_names; // "?group_state_names@@3PAPADA"
// char **salience_names; // "?salience_names@@3PAPADA"
// struct group_behavior_state *global_group_states; // "?global_group_states@@3PAUgroup_behavior_state@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_clump_data_allocator::*)(void *)> g_clump_data_allocator; // "?g_clump_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *clump_data; // "?clump_data@@3PAUs_data_array@@A"

// void __tls_set_g_clump_data_allocator(void *);
// void clumps_initialize(void);
// void clumps_initialize_for_new_map(void);
// void clumps_create_for_new_map(void);
// void clumps_dispose(void);
// void clumps_dispose_from_old_map(void);
// public: void c_clump_behavior_state::reset(void);
// public: void c_clump_behavior_state::set_state(short);
// void clump_invitations_update(long);
// void clumps_update(void);
// void clump_props_update(long);
// void clump_prop_update(long, long);
// void clump_remove_dead_references(long);
// void clump_activate(long);
// void clump_deactivate(long);
// void clumps_update_state(void);
// void clump_update_activation(long);
// void clump_update_position(long);
// void clump_actor_get_position(long, union real_point3d *);
// void clumps_update_actor_membership(void);
// bool clump_compatible(struct clump_datum const *, struct actor_datum *);
// float score_clump(struct actor_datum *, union real_point3d const *, struct clump_datum const *);
// void clump_mark_relevance(long);
// void cull_dead_clumps(void);
// long clump_new(union real_point3d const *, enum e_campaign_team, bool);
// void clump_delete(long);
// void clump_add_actor(long, long);
// void clump_remove_actor(long, long);
// void clump_absorb_memory(long, long);
// void clump_update_player_distance(long);
// void clump_perception_update(long);
// int clump_qsort_compare_temp_props(void const *, void const *);
// void recursive_clump_consider_object(long, long, struct temp_prop *, short *, struct s_object_marking_data *);
// float clump_consider_object(long, long, long, struct temp_prop *, enum e_clump_importance, struct s_object_marking_data *);
// float clump_get_player_attenuation(long, float);
// void clump_refresh_props(long);
// long clump_new_prop(long, short, float, long, struct prop_datum const *);
// void clump_new_prop_init(long, long, short, float, long);
// long clump_new_prop_internal(struct clump_datum *, float);
// short clump_cull_props(long, float);
// void clump_new_prop_absorb(struct prop_datum *, struct prop_datum const *);
// long clump_prop_ref_new(long);
// void prop_ref_initialize(struct prop_ref_datum *, struct prop_datum const *);
// void clump_add_prop(long, long);
// void clump_add_prop_ref(long, long);
// void actor_add_prop_ref(long, long);
// void clump_delete_prop(struct clump_datum *, long);
// void actor_remove_prop_ref(struct prop_ref_datum *);
// void clump_remove_prop_ref(struct prop_ref_datum *);
// long clump_aquire_prop(long, long, enum e_clump_importance);
// long clump_aquire_prop_ref(long, long, enum e_clump_importance);
// void clump_prop_acknowledge(struct prop_datum *, struct prop_state const *);
// bool clump_prop_acknowledged_by_someone(long);
// void clump_handle_deleted_object(long);
// long clump_get_prop_datum(long, long);
// void actor_remove_unacknowledged_prop_refs(long);
// long clump_get_clump_prop(long, long);
// void clump_reset_combat_state(long);
// void clump_update_behavior_state(long);
// short group_state_update(class c_clump_behavior_state *, float *, float *);
// short group_state_postcombat_next_state(class c_clump_behavior_state *, float *, float *);
// short group_state_searching_next_state(class c_clump_behavior_state *, float *, float *);
// bool group_state_searching_override(float *, float *);
// short group_state_attacking_next_state(class c_clump_behavior_state *, float *, float *);
// bool group_state_attacking_override(float *, float *);
// bool clump_actor_berserk_allowed(long, long, long);
// bool clump_actor_kamikaze_allowed(long, long);
// bool clump_request_grenade_throw(long, long);
// void clump_notify_grenade_throw(long, long);
// void clump_notify_death(long);
// void clump_notify_kill(long, long, long);
// void clump_notify_friendly_ai_kill(long, long, long, long *);
// short clump_calculate_postombat_result(long);
// void clump_actor_iterator_new(struct clump_actor_iterator *, long);
// void clump_actor_iterator_new(struct clump_actor_iterator *, struct clump_datum const *);
// struct actor_datum * clump_actor_iterator_next(struct clump_actor_iterator *);
// void clump_prop_iterator_new(struct clump_prop_iterator *, long);
// struct prop_datum * clump_prop_iterator_next(struct clump_prop_iterator *);
// void clump_iterator_new(struct clump_iterator *);
// struct clump_datum * clump_iterator_next(struct clump_iterator *);
// void actor_prop_ref_iterator_new(struct actor_prop_ref_iterator *, long);
// struct prop_ref_datum * actor_prop_ref_iterator_next(struct actor_prop_ref_iterator *);
// void clump_prop_ref_iterator_new(struct clump_prop_ref_iterator *, long);
// struct prop_ref_datum * clump_prop_ref_iterator_next(struct clump_prop_ref_iterator *);
// short clump_num_props(long);
// public: struct clump_datum * c_data_iterator<struct clump_datum>::get_datum(void) const;
// public: void c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_clump_fought_flags, bool);
// public: void c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void);
// public: void prop_ref_datum::set_object_index(long);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>(void);
// void g_clump_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_clump_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_clump_data_allocator@@YAXPAX@Z");
//};

//void clumps_initialize(void)
//{
//    mangled_ppc("?clumps_initialize@@YAXXZ");
//};

//void clumps_initialize_for_new_map(void)
//{
//    mangled_ppc("?clumps_initialize_for_new_map@@YAXXZ");
//};

//void clumps_create_for_new_map(void)
//{
//    mangled_ppc("?clumps_create_for_new_map@@YAXXZ");
//};

//void clumps_dispose(void)
//{
//    mangled_ppc("?clumps_dispose@@YAXXZ");
//};

//void clumps_dispose_from_old_map(void)
//{
//    mangled_ppc("?clumps_dispose_from_old_map@@YAXXZ");
//};

//public: void c_clump_behavior_state::reset(void)
//{
//    mangled_ppc("?reset@c_clump_behavior_state@@QAAXXZ");
//};

//public: void c_clump_behavior_state::set_state(short)
//{
//    mangled_ppc("?set_state@c_clump_behavior_state@@QAAXF@Z");
//};

//void clump_invitations_update(long)
//{
//    mangled_ppc("?clump_invitations_update@@YAXJ@Z");
//};

//void clumps_update(void)
//{
//    mangled_ppc("?clumps_update@@YAXXZ");
//};

//void clump_props_update(long)
//{
//    mangled_ppc("?clump_props_update@@YAXJ@Z");
//};

//void clump_prop_update(long, long)
//{
//    mangled_ppc("?clump_prop_update@@YAXJJ@Z");
//};

//void clump_remove_dead_references(long)
//{
//    mangled_ppc("?clump_remove_dead_references@@YAXJ@Z");
//};

//void clump_activate(long)
//{
//    mangled_ppc("?clump_activate@@YAXJ@Z");
//};

//void clump_deactivate(long)
//{
//    mangled_ppc("?clump_deactivate@@YAXJ@Z");
//};

//void clumps_update_state(void)
//{
//    mangled_ppc("?clumps_update_state@@YAXXZ");
//};

//void clump_update_activation(long)
//{
//    mangled_ppc("?clump_update_activation@@YAXJ@Z");
//};

//void clump_update_position(long)
//{
//    mangled_ppc("?clump_update_position@@YAXJ@Z");
//};

//void clump_actor_get_position(long, union real_point3d *)
//{
//    mangled_ppc("?clump_actor_get_position@@YAXJPATreal_point3d@@@Z");
//};

//void clumps_update_actor_membership(void)
//{
//    mangled_ppc("?clumps_update_actor_membership@@YAXXZ");
//};

//bool clump_compatible(struct clump_datum const *, struct actor_datum *)
//{
//    mangled_ppc("?clump_compatible@@YA_NPBUclump_datum@@PAUactor_datum@@@Z");
//};

//float score_clump(struct actor_datum *, union real_point3d const *, struct clump_datum const *)
//{
//    mangled_ppc("?score_clump@@YAMPAUactor_datum@@PBTreal_point3d@@PBUclump_datum@@@Z");
//};

//void clump_mark_relevance(long)
//{
//    mangled_ppc("?clump_mark_relevance@@YAXJ@Z");
//};

//void cull_dead_clumps(void)
//{
//    mangled_ppc("?cull_dead_clumps@@YAXXZ");
//};

//long clump_new(union real_point3d const *, enum e_campaign_team, bool)
//{
//    mangled_ppc("?clump_new@@YAJPBTreal_point3d@@W4e_campaign_team@@_N@Z");
//};

//void clump_delete(long)
//{
//    mangled_ppc("?clump_delete@@YAXJ@Z");
//};

//void clump_add_actor(long, long)
//{
//    mangled_ppc("?clump_add_actor@@YAXJJ@Z");
//};

//void clump_remove_actor(long, long)
//{
//    mangled_ppc("?clump_remove_actor@@YAXJJ@Z");
//};

//void clump_absorb_memory(long, long)
//{
//    mangled_ppc("?clump_absorb_memory@@YAXJJ@Z");
//};

//void clump_update_player_distance(long)
//{
//    mangled_ppc("?clump_update_player_distance@@YAXJ@Z");
//};

//void clump_perception_update(long)
//{
//    mangled_ppc("?clump_perception_update@@YAXJ@Z");
//};

//int clump_qsort_compare_temp_props(void const *, void const *)
//{
//    mangled_ppc("?clump_qsort_compare_temp_props@@YAHPBX0@Z");
//};

//void recursive_clump_consider_object(long, long, struct temp_prop *, short *, struct s_object_marking_data *)
//{
//    mangled_ppc("?recursive_clump_consider_object@@YAXJJPAUtemp_prop@@PAFPAUs_object_marking_data@@@Z");
//};

//float clump_consider_object(long, long, long, struct temp_prop *, enum e_clump_importance, struct s_object_marking_data *)
//{
//    mangled_ppc("?clump_consider_object@@YAMJJJPAUtemp_prop@@W4e_clump_importance@@PAUs_object_marking_data@@@Z");
//};

//float clump_get_player_attenuation(long, float)
//{
//    mangled_ppc("?clump_get_player_attenuation@@YAMJM@Z");
//};

//void clump_refresh_props(long)
//{
//    mangled_ppc("?clump_refresh_props@@YAXJ@Z");
//};

//long clump_new_prop(long, short, float, long, struct prop_datum const *)
//{
//    mangled_ppc("?clump_new_prop@@YAJJFMJPBUprop_datum@@@Z");
//};

//void clump_new_prop_init(long, long, short, float, long)
//{
//    mangled_ppc("?clump_new_prop_init@@YAXJJFMJ@Z");
//};

//long clump_new_prop_internal(struct clump_datum *, float)
//{
//    mangled_ppc("?clump_new_prop_internal@@YAJPAUclump_datum@@M@Z");
//};

//short clump_cull_props(long, float)
//{
//    mangled_ppc("?clump_cull_props@@YAFJM@Z");
//};

//void clump_new_prop_absorb(struct prop_datum *, struct prop_datum const *)
//{
//    mangled_ppc("?clump_new_prop_absorb@@YAXPAUprop_datum@@PBU1@@Z");
//};

//long clump_prop_ref_new(long)
//{
//    mangled_ppc("?clump_prop_ref_new@@YAJJ@Z");
//};

//void prop_ref_initialize(struct prop_ref_datum *, struct prop_datum const *)
//{
//    mangled_ppc("?prop_ref_initialize@@YAXPAUprop_ref_datum@@PBUprop_datum@@@Z");
//};

//void clump_add_prop(long, long)
//{
//    mangled_ppc("?clump_add_prop@@YAXJJ@Z");
//};

//void clump_add_prop_ref(long, long)
//{
//    mangled_ppc("?clump_add_prop_ref@@YAXJJ@Z");
//};

//void actor_add_prop_ref(long, long)
//{
//    mangled_ppc("?actor_add_prop_ref@@YAXJJ@Z");
//};

//void clump_delete_prop(struct clump_datum *, long)
//{
//    mangled_ppc("?clump_delete_prop@@YAXPAUclump_datum@@J@Z");
//};

//void actor_remove_prop_ref(struct prop_ref_datum *)
//{
//    mangled_ppc("?actor_remove_prop_ref@@YAXPAUprop_ref_datum@@@Z");
//};

//void clump_remove_prop_ref(struct prop_ref_datum *)
//{
//    mangled_ppc("?clump_remove_prop_ref@@YAXPAUprop_ref_datum@@@Z");
//};

//long clump_aquire_prop(long, long, enum e_clump_importance)
//{
//    mangled_ppc("?clump_aquire_prop@@YAJJJW4e_clump_importance@@@Z");
//};

//long clump_aquire_prop_ref(long, long, enum e_clump_importance)
//{
//    mangled_ppc("?clump_aquire_prop_ref@@YAJJJW4e_clump_importance@@@Z");
//};

//void clump_prop_acknowledge(struct prop_datum *, struct prop_state const *)
//{
//    mangled_ppc("?clump_prop_acknowledge@@YAXPAUprop_datum@@PBUprop_state@@@Z");
//};

//bool clump_prop_acknowledged_by_someone(long)
//{
//    mangled_ppc("?clump_prop_acknowledged_by_someone@@YA_NJ@Z");
//};

//void clump_handle_deleted_object(long)
//{
//    mangled_ppc("?clump_handle_deleted_object@@YAXJ@Z");
//};

//long clump_get_prop_datum(long, long)
//{
//    mangled_ppc("?clump_get_prop_datum@@YAJJJ@Z");
//};

//void actor_remove_unacknowledged_prop_refs(long)
//{
//    mangled_ppc("?actor_remove_unacknowledged_prop_refs@@YAXJ@Z");
//};

//long clump_get_clump_prop(long, long)
//{
//    mangled_ppc("?clump_get_clump_prop@@YAJJJ@Z");
//};

//void clump_reset_combat_state(long)
//{
//    mangled_ppc("?clump_reset_combat_state@@YAXJ@Z");
//};

//void clump_update_behavior_state(long)
//{
//    mangled_ppc("?clump_update_behavior_state@@YAXJ@Z");
//};

//short group_state_update(class c_clump_behavior_state *, float *, float *)
//{
//    mangled_ppc("?group_state_update@@YAFPAVc_clump_behavior_state@@PAM1@Z");
//};

//short group_state_postcombat_next_state(class c_clump_behavior_state *, float *, float *)
//{
//    mangled_ppc("?group_state_postcombat_next_state@@YAFPAVc_clump_behavior_state@@PAM1@Z");
//};

//short group_state_searching_next_state(class c_clump_behavior_state *, float *, float *)
//{
//    mangled_ppc("?group_state_searching_next_state@@YAFPAVc_clump_behavior_state@@PAM1@Z");
//};

//bool group_state_searching_override(float *, float *)
//{
//    mangled_ppc("?group_state_searching_override@@YA_NPAM0@Z");
//};

//short group_state_attacking_next_state(class c_clump_behavior_state *, float *, float *)
//{
//    mangled_ppc("?group_state_attacking_next_state@@YAFPAVc_clump_behavior_state@@PAM1@Z");
//};

//bool group_state_attacking_override(float *, float *)
//{
//    mangled_ppc("?group_state_attacking_override@@YA_NPAM0@Z");
//};

//bool clump_actor_berserk_allowed(long, long, long)
//{
//    mangled_ppc("?clump_actor_berserk_allowed@@YA_NJJJ@Z");
//};

//bool clump_actor_kamikaze_allowed(long, long)
//{
//    mangled_ppc("?clump_actor_kamikaze_allowed@@YA_NJJ@Z");
//};

//bool clump_request_grenade_throw(long, long)
//{
//    mangled_ppc("?clump_request_grenade_throw@@YA_NJJ@Z");
//};

//void clump_notify_grenade_throw(long, long)
//{
//    mangled_ppc("?clump_notify_grenade_throw@@YAXJJ@Z");
//};

//void clump_notify_death(long)
//{
//    mangled_ppc("?clump_notify_death@@YAXJ@Z");
//};

//void clump_notify_kill(long, long, long)
//{
//    mangled_ppc("?clump_notify_kill@@YAXJJJ@Z");
//};

//void clump_notify_friendly_ai_kill(long, long, long, long *)
//{
//    mangled_ppc("?clump_notify_friendly_ai_kill@@YAXJJJPAJ@Z");
//};

//short clump_calculate_postombat_result(long)
//{
//    mangled_ppc("?clump_calculate_postombat_result@@YAFJ@Z");
//};

//void clump_actor_iterator_new(struct clump_actor_iterator *, long)
//{
//    mangled_ppc("?clump_actor_iterator_new@@YAXPAUclump_actor_iterator@@J@Z");
//};

//void clump_actor_iterator_new(struct clump_actor_iterator *, struct clump_datum const *)
//{
//    mangled_ppc("?clump_actor_iterator_new@@YAXPAUclump_actor_iterator@@PBUclump_datum@@@Z");
//};

//struct actor_datum * clump_actor_iterator_next(struct clump_actor_iterator *)
//{
//    mangled_ppc("?clump_actor_iterator_next@@YAPAUactor_datum@@PAUclump_actor_iterator@@@Z");
//};

//void clump_prop_iterator_new(struct clump_prop_iterator *, long)
//{
//    mangled_ppc("?clump_prop_iterator_new@@YAXPAUclump_prop_iterator@@J@Z");
//};

//struct prop_datum * clump_prop_iterator_next(struct clump_prop_iterator *)
//{
//    mangled_ppc("?clump_prop_iterator_next@@YAPAUprop_datum@@PAUclump_prop_iterator@@@Z");
//};

//void clump_iterator_new(struct clump_iterator *)
//{
//    mangled_ppc("?clump_iterator_new@@YAXPAUclump_iterator@@@Z");
//};

//struct clump_datum * clump_iterator_next(struct clump_iterator *)
//{
//    mangled_ppc("?clump_iterator_next@@YAPAUclump_datum@@PAUclump_iterator@@@Z");
//};

//void actor_prop_ref_iterator_new(struct actor_prop_ref_iterator *, long)
//{
//    mangled_ppc("?actor_prop_ref_iterator_new@@YAXPAUactor_prop_ref_iterator@@J@Z");
//};

//struct prop_ref_datum * actor_prop_ref_iterator_next(struct actor_prop_ref_iterator *)
//{
//    mangled_ppc("?actor_prop_ref_iterator_next@@YAPAUprop_ref_datum@@PAUactor_prop_ref_iterator@@@Z");
//};

//void clump_prop_ref_iterator_new(struct clump_prop_ref_iterator *, long)
//{
//    mangled_ppc("?clump_prop_ref_iterator_new@@YAXPAUclump_prop_ref_iterator@@J@Z");
//};

//struct prop_ref_datum * clump_prop_ref_iterator_next(struct clump_prop_ref_iterator *)
//{
//    mangled_ppc("?clump_prop_ref_iterator_next@@YAPAUprop_ref_datum@@PAUclump_prop_ref_iterator@@@Z");
//};

//short clump_num_props(long)
//{
//    mangled_ppc("?clump_num_props@@YAFJ@Z");
//};

//public: struct clump_datum * c_data_iterator<struct clump_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Uclump_datum@@@@QBAPAUclump_datum@@XZ");
//};

//public: void c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_clump_fought_flags@@F$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_clump_fought_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_clump_fought_flags@@F$01Us_default_enum_string_resolver@@@@QAAXW4e_clump_fought_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_prop_ref_flags@@G$08Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void prop_ref_datum::set_object_index(long)
//{
//    mangled_ppc("?set_object_index@prop_ref_datum@@QAAXJ@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_clump_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_clump_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_clump_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_clump_data_allocator@@YAXXZ");
//};

