/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **global_squad_patrol_member_state_names; // "?global_squad_patrol_member_state_names@@3PAPBDA"
// struct s_tag_struct_definition squad_patrol_member_block_struct_definition; // "?squad_patrol_member_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition squad_patrol_member_block; // "?squad_patrol_member_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition squad_patrol_point_block; // "?squad_patrol_point_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition squad_patrol_point_block_struct_definition; // "?squad_patrol_point_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition squad_patrol_waypoint_block_struct_definition; // "?squad_patrol_waypoint_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition squad_patrol_waypoint_block; // "?squad_patrol_waypoint_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition squad_patrol_transition_block; // "?squad_patrol_transition_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition squad_patrol_transition_block_struct_definition; // "?squad_patrol_transition_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition squad_patrol_block_struct_definition; // "?squad_patrol_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition squad_patrol_block; // "?squad_patrol_block@@3Us_tag_block_definition@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_squad_patrol_data_allocator::*)(void *)> g_squad_patrol_data_allocator; // "?g_squad_patrol_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *squad_patrol_data; // "?squad_patrol_data@@3PAUs_data_array@@A"

// void __tls_set_g_squad_patrol_data_allocator(void *);
// void squad_patrol_initialize(void);
// void squad_patrol_dispose(void);
// void squad_patrol_initialize_for_new_map(void);
// void squad_patrol_dispose_from_old_map(void);
// void squad_patrol_update(void);
// long squad_patrol_get_squad_patrol_index(short, long *);
// long squad_patrol_get_squad_member_index(long, short);
// bool squad_patrol_member_should_search(long, long);
// bool squad_patrol_member_should_run(long, long);
// long squad_patrol_add_transition(long, long, long);
// long squad_patrol_transition_add_waypoint(long, long, union real_point3d const *, long);
// bool squad_patrol_waypoint_set_position(long, long, long, union real_point3d const *);
// void squad_patrol_clear_sector_indices(long);
// void squad_patrol_attach_sectors(long);
// void squad_patrol_enable_by_name(long, bool);
// void squad_patrol_iterator_new(struct squad_patrol_iterator *);
// struct s_squad_patrol_datum * squad_patrol_iterator_next(struct squad_patrol_iterator *);
// void squad_patrol_new(long);
// void squad_patrol_member_clear_state(struct s_squad_patrol_member_state *);
// void squad_patrol_point_clear_state(struct s_squad_patrol_point_state *);
// void squad_patrol_update_patrol(long);
// struct s_squad_patrol_datum * squad_patrol_get_by_name(long);
// void squad_patrol_update_stragglers(long, long);
// void squad_patrol_update_member_state(long, long);
// void squad_patrol_member_check_combat_status(long, long);
// bool squad_arrival_imminent(long);
// bool squad_patrol_member_attempt_pass_through(long, long);
// bool squad_patrol_member_select_point(long, long, union vector3d const *, short, struct s_patrol_transition *);
// long squad_patrol_get_transitions(long, long, struct s_patrol_transition *, long, bool, bool *);
// void squad_patrol_member_set_state(long, long, short);
// void squad_patrol_member_assign_to_point(long, long, struct s_patrol_transition const *);
// void squad_patrol_member_assign_to_point(long, long, struct s_patrol_transition const *, short);
// bool add_point_to_history(struct s_squad_patrol_member_state *, short);
// void actor_transition_data_set(long, long, long, bool);
// void actor_transition_data_clear(long);
// void actor_transition_data_update(long);
// bool squad_patrol_setup_path_waypoints(struct s_actor_patrol_state const *, struct path_input *);
// void squad_patrol_squad_reset(long);
// void ai_debug_render_squad_patrol(void);
// bool squad_patrol_should_debug(long);
// void squad_patrol_debug_patrol(long);
// public: void c_data_iterator<struct s_squad_patrol_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_squad_patrol_datum>::next(void);
// public: struct s_squad_patrol_datum * c_data_iterator<struct s_squad_patrol_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_squad_patrol_datum>::get_index(void) const;
// public: void c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_squad_patrol_flags) const;
// public: void c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_squad_patrol_flags, bool);
// public: bool c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_objective_runtime_flags) const;
// public: bool c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_actor_patrol_flags) const;
// public: void c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_actor_patrol_flags, bool);
// public: static bool c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_squad_patrol_flags);
// private: static unsigned short c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_squad_patrol_flags);
// public: static bool c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_objective_runtime_flags);
// private: static short c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_objective_runtime_flags);
// public: static bool c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_actor_patrol_flags);
// private: static unsigned short c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_actor_patrol_flags);
// public: void s_actor_patrol_state::clear(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>(void);
// void g_squad_patrol_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_squad_patrol_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z");
//};

//void squad_patrol_initialize(void)
//{
//    mangled_ppc("?squad_patrol_initialize@@YAXXZ");
//};

//void squad_patrol_dispose(void)
//{
//    mangled_ppc("?squad_patrol_dispose@@YAXXZ");
//};

//void squad_patrol_initialize_for_new_map(void)
//{
//    mangled_ppc("?squad_patrol_initialize_for_new_map@@YAXXZ");
//};

//void squad_patrol_dispose_from_old_map(void)
//{
//    mangled_ppc("?squad_patrol_dispose_from_old_map@@YAXXZ");
//};

//void squad_patrol_update(void)
//{
//    mangled_ppc("?squad_patrol_update@@YAXXZ");
//};

//long squad_patrol_get_squad_patrol_index(short, long *)
//{
//    mangled_ppc("?squad_patrol_get_squad_patrol_index@@YAJFPAJ@Z");
//};

//long squad_patrol_get_squad_member_index(long, short)
//{
//    mangled_ppc("?squad_patrol_get_squad_member_index@@YAJJF@Z");
//};

//bool squad_patrol_member_should_search(long, long)
//{
//    mangled_ppc("?squad_patrol_member_should_search@@YA_NJJ@Z");
//};

//bool squad_patrol_member_should_run(long, long)
//{
//    mangled_ppc("?squad_patrol_member_should_run@@YA_NJJ@Z");
//};

//long squad_patrol_add_transition(long, long, long)
//{
//    mangled_ppc("?squad_patrol_add_transition@@YAJJJJ@Z");
//};

//long squad_patrol_transition_add_waypoint(long, long, union real_point3d const *, long)
//{
//    mangled_ppc("?squad_patrol_transition_add_waypoint@@YAJJJPBTreal_point3d@@J@Z");
//};

//bool squad_patrol_waypoint_set_position(long, long, long, union real_point3d const *)
//{
//    mangled_ppc("?squad_patrol_waypoint_set_position@@YA_NJJJPBTreal_point3d@@@Z");
//};

//void squad_patrol_clear_sector_indices(long)
//{
//    mangled_ppc("?squad_patrol_clear_sector_indices@@YAXJ@Z");
//};

//void squad_patrol_attach_sectors(long)
//{
//    mangled_ppc("?squad_patrol_attach_sectors@@YAXJ@Z");
//};

//void squad_patrol_enable_by_name(long, bool)
//{
//    mangled_ppc("?squad_patrol_enable_by_name@@YAXJ_N@Z");
//};

//void squad_patrol_iterator_new(struct squad_patrol_iterator *)
//{
//    mangled_ppc("?squad_patrol_iterator_new@@YAXPAUsquad_patrol_iterator@@@Z");
//};

//struct s_squad_patrol_datum * squad_patrol_iterator_next(struct squad_patrol_iterator *)
//{
//    mangled_ppc("?squad_patrol_iterator_next@@YAPAUs_squad_patrol_datum@@PAUsquad_patrol_iterator@@@Z");
//};

//void squad_patrol_new(long)
//{
//    mangled_ppc("?squad_patrol_new@@YAXJ@Z");
//};

//void squad_patrol_member_clear_state(struct s_squad_patrol_member_state *)
//{
//    mangled_ppc("?squad_patrol_member_clear_state@@YAXPAUs_squad_patrol_member_state@@@Z");
//};

//void squad_patrol_point_clear_state(struct s_squad_patrol_point_state *)
//{
//    mangled_ppc("?squad_patrol_point_clear_state@@YAXPAUs_squad_patrol_point_state@@@Z");
//};

//void squad_patrol_update_patrol(long)
//{
//    mangled_ppc("?squad_patrol_update_patrol@@YAXJ@Z");
//};

//struct s_squad_patrol_datum * squad_patrol_get_by_name(long)
//{
//    mangled_ppc("?squad_patrol_get_by_name@@YAPAUs_squad_patrol_datum@@J@Z");
//};

//void squad_patrol_update_stragglers(long, long)
//{
//    mangled_ppc("?squad_patrol_update_stragglers@@YAXJJ@Z");
//};

//void squad_patrol_update_member_state(long, long)
//{
//    mangled_ppc("?squad_patrol_update_member_state@@YAXJJ@Z");
//};

//void squad_patrol_member_check_combat_status(long, long)
//{
//    mangled_ppc("?squad_patrol_member_check_combat_status@@YAXJJ@Z");
//};

//bool squad_arrival_imminent(long)
//{
//    mangled_ppc("?squad_arrival_imminent@@YA_NJ@Z");
//};

//bool squad_patrol_member_attempt_pass_through(long, long)
//{
//    mangled_ppc("?squad_patrol_member_attempt_pass_through@@YA_NJJ@Z");
//};

//bool squad_patrol_member_select_point(long, long, union vector3d const *, short, struct s_patrol_transition *)
//{
//    mangled_ppc("?squad_patrol_member_select_point@@YA_NJJPBTvector3d@@FPAUs_patrol_transition@@@Z");
//};

//long squad_patrol_get_transitions(long, long, struct s_patrol_transition *, long, bool, bool *)
//{
//    mangled_ppc("?squad_patrol_get_transitions@@YAJJJPAUs_patrol_transition@@J_NPA_N@Z");
//};

//void squad_patrol_member_set_state(long, long, short)
//{
//    mangled_ppc("?squad_patrol_member_set_state@@YAXJJF@Z");
//};

//void squad_patrol_member_assign_to_point(long, long, struct s_patrol_transition const *)
//{
//    mangled_ppc("?squad_patrol_member_assign_to_point@@YAXJJPBUs_patrol_transition@@@Z");
//};

//void squad_patrol_member_assign_to_point(long, long, struct s_patrol_transition const *, short)
//{
//    mangled_ppc("?squad_patrol_member_assign_to_point@@YAXJJPBUs_patrol_transition@@F@Z");
//};

//bool add_point_to_history(struct s_squad_patrol_member_state *, short)
//{
//    mangled_ppc("?add_point_to_history@@YA_NPAUs_squad_patrol_member_state@@F@Z");
//};

//void actor_transition_data_set(long, long, long, bool)
//{
//    mangled_ppc("?actor_transition_data_set@@YAXJJJ_N@Z");
//};

//void actor_transition_data_clear(long)
//{
//    mangled_ppc("?actor_transition_data_clear@@YAXJ@Z");
//};

//void actor_transition_data_update(long)
//{
//    mangled_ppc("?actor_transition_data_update@@YAXJ@Z");
//};

//bool squad_patrol_setup_path_waypoints(struct s_actor_patrol_state const *, struct path_input *)
//{
//    mangled_ppc("?squad_patrol_setup_path_waypoints@@YA_NPBUs_actor_patrol_state@@PAUpath_input@@@Z");
//};

//void squad_patrol_squad_reset(long)
//{
//    mangled_ppc("?squad_patrol_squad_reset@@YAXJ@Z");
//};

//void ai_debug_render_squad_patrol(void)
//{
//    mangled_ppc("?ai_debug_render_squad_patrol@@YAXXZ");
//};

//bool squad_patrol_should_debug(long)
//{
//    mangled_ppc("?squad_patrol_should_debug@@YA_NJ@Z");
//};

//void squad_patrol_debug_patrol(long)
//{
//    mangled_ppc("?squad_patrol_debug_patrol@@YAXJ@Z");
//};

//public: void c_data_iterator<struct s_squad_patrol_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_squad_patrol_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_squad_patrol_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_squad_patrol_datum@@@@QAA_NXZ");
//};

//public: struct s_squad_patrol_datum * c_data_iterator<struct s_squad_patrol_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_squad_patrol_datum@@@@QBAPAUs_squad_patrol_datum@@XZ");
//};

//public: long c_data_iterator<struct s_squad_patrol_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_squad_patrol_datum@@@@QBAJXZ");
//};

//public: void c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_squad_patrol_flags@@G$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_squad_patrol_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_squad_patrol_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_squad_patrol_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_squad_patrol_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_squad_patrol_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_squad_patrol_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_objective_runtime_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_objective_runtime_flags@@F$00Us_default_enum_string_resolver@@@@QBA_NW4e_objective_runtime_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_actor_patrol_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_actor_patrol_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_actor_patrol_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_actor_patrol_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_actor_patrol_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_actor_patrol_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_squad_patrol_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_squad_patrol_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_squad_patrol_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_squad_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_squad_patrol_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_squad_patrol_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_squad_patrol_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_objective_runtime_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_objective_runtime_flags@@F$00Us_default_enum_string_resolver@@@@SA_NW4e_objective_runtime_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_objective_runtime_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_objective_runtime_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_objective_runtime_flags@@F$00Us_default_enum_string_resolver@@@@CAFW4e_objective_runtime_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_actor_patrol_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_actor_patrol_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_actor_patrol_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_actor_patrol_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_actor_patrol_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_actor_patrol_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_actor_patrol_flags@@@Z");
//};

//public: void s_actor_patrol_state::clear(void)
//{
//    mangled_ppc("?clear@s_actor_patrol_state@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_squad_patrol_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_squad_patrol_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_squad_patrol_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_squad_patrol_data_allocator@@YAXXZ");
//};

