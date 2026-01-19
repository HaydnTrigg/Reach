/* ---------- headers */

#include "omaha\ai\swarms.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_8389FB00; // "except_record_8389FB00"
// except_record_838A1C00; // "except_record_838A1C00"
// char **swarm_action_names; // "?swarm_action_names@@3PAPADA"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_swarm_properties_internal>, class c_character_swarm_properties_internal>(class c_character_runtime_properties<class c_character_swarm_properties_internal> *, class c_character_swarm_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@Vc_character_swarm_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@PBVc_character_swarm_properties_internal@@@Z@4JC"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_swarm_data_allocator::*)(void *)> g_swarm_data_allocator; // "?g_swarm_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_swarm_spawners_allocator::*)(void *)> g_swarm_spawners_allocator; // "?g_swarm_spawners_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_spawner_globals_allocator::*)(void *)> g_spawner_globals_allocator; // "?g_spawner_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@A"
// struct s_data_array *swarm_data; // "?swarm_data@@3PAUs_data_array@@A"
// struct s_swarm_spawner *g_swarm_spawners; // "?g_swarm_spawners@@3PAUs_swarm_spawner@@A"
// struct s_spawner_globals *g_spawner_globals; // "?g_spawner_globals@@3PAUs_spawner_globals@@A"

// void __tls_set_g_swarm_data_allocator(void *);
// void __tls_set_g_swarm_spawners_allocator(void *);
// void __tls_set_g_spawner_globals_allocator(void *);
// void swarms_initialize(void);
// void swarms_initialize_for_new_map(void);
// void swarms_dispose_from_old_map(void);
// long swarm_place(struct actor_spawn_definition const *);
// long swarm_create_creature(long, long, struct actor_spawn_definition const *, bool);
// void initialize_creature_state(struct swarm_creature_state *);
// void actor_attach_swarm(long, long);
// void actor_detach_swarm(long);
// void swarm_delete(long);
// void swarm_kill(long, bool);
// bool swarm_add_creature(long, long);
// bool swarm_remove_creature(long, long, bool, bool);
// void swarm_creature_update_timers(long, long, struct swarm_creature_state *);
// void swarm_creature_update(long, long);
// bool swarm_target_get_info(short, long, long *, union real_point3d *, union real_point3d *);
// void creature_generate_up_vector(long, struct swarm_creature_state *);
// bool swarm_creature_infect(long, long, struct object_marker const *, union vector3d const *);
// bool swarm_action_execute_command_script(long, long, union vector3d *, union vector3d *);
// void swarm_movement_update(long, long);
// void swarm_creature_control(long);
// void swarm_update(long);
// void creature_state_refresh(long, struct swarm_creature_state *);
// void swarm_input_update(long);
// bool swarm_perception_find_sense_position(long, union real_point3d const *, struct actor_position_data *);
// long swarm_perception_creature_from_swarm(long, struct actor_position_data const *, long);
// void swarm_handle_creature_death(long, long, short);
// void swarm_handle_delete_object(long);
// void swarm_flush_prop(long, long);
// void swarm_flush_structure_indices(long);
// void swarm_creature_handle_action_finished(long, long, long);
// bool ai_allow_attachment(long, bool *);
// bool ai_swarm_creature_handle_attach(long, long);
// bool swarm_is_active(long);
// void swarm_freeze(long);
// void swarm_freeze_creature(long);
// bool swarm_creature_moving_jump(long, float, float, union real_point3d const *, union vector3d *);
// bool swarm_creature_aim_jump(long, union vector3d *);
// void swarm_accelerate(long, union vector3d const *);
// void swarm_spawner_definition_new(struct swarm_spawner_definition *);
// short swarm_spawner_new(struct swarm_spawner_definition *);
// bool swarm_spawner_new_at_index(short, struct swarm_spawner_definition const *);
// void swarm_spawner_new_from_defintion(struct swarm_spawner_definition const *, struct s_swarm_spawner *);
// bool swarm_spawner_new_definition(short, struct actor_spawn_definition *);
// void swarm_spawner_start(short);
// void swarm_spawner_new_swarm(short);
// void spawner_initialize_creature(short, long);
// short swarm_num_spawners_of_type(long);
// void swarm_spawners_update(void);
// void swarm_spawner_new_creature(short);
// void swarm_spawner_accelerate_creature(short, long);
// void swarm_spawner_end(short);
// void swarm_spawners_handle_deleted_object(long);
// void swarm_set_team(long, enum e_campaign_team);
// void swarm_iterator_new(struct swarm_iterator *);
// struct swarm_datum * swarm_iterator_next(struct swarm_iterator *);
// void swarm_creature_iterator_new(long, struct swarm_creature_iterator *);
// struct creature_datum * swarm_creature_iterator_next(struct swarm_creature_iterator *);
// void swarm_render_debug(long);
// public: void c_data_iterator<struct swarm_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct swarm_datum>::next(void);
// public: long c_data_iterator<struct swarm_datum>::get_index(void) const;
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void c_object_iterator<struct creature_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct creature_datum>::next(void);
// public: struct creature_datum * c_object_iterator<struct creature_datum>::get_datum(void);
// public: c_character_runtime_properties<class c_character_swarm_properties_internal>::c_character_runtime_properties<class c_character_swarm_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_swarm_properties_internal>::valid(void) const;
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::valid(void) const;
// void actor_get_character_definition_properties<class c_character_swarm_properties_internal, 252>(long, class c_character_runtime_properties<class c_character_swarm_properties_internal> &);
// public: void c_character_runtime_properties<class c_character_swarm_properties_internal>::set(class c_character_swarm_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_swarm_properties_internal>::invalidate(void);
// public: static void c_character_properties_base<class c_character_swarm_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_swarm_properties_internal> *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_swarm_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_swarm_properties_internal> &);
// class c_character_swarm_properties_internal * character_definition_properties_get_direct<class c_character_swarm_properties_internal, 252>(long, class c_stimulus_flags const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_swarm_properties_internal>, class c_character_swarm_properties_internal>(class c_character_runtime_properties<class c_character_swarm_properties_internal> *, class c_character_swarm_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_swarm_properties_internal>::static_valid(void *);
// struct s_tag_block * character_definition_property_block_get<252>(long, class c_stimulus_flags const *);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>(void);
// void g_swarm_data_allocator::`dynamic atexit destructor'(void);
// void g_swarm_spawners_allocator::`dynamic atexit destructor'(void);
// void g_spawner_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_swarm_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_swarm_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_swarm_spawners_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_spawner_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z");
//};

//void swarms_initialize(void)
//{
//    mangled_ppc("?swarms_initialize@@YAXXZ");
//};

//void swarms_initialize_for_new_map(void)
//{
//    mangled_ppc("?swarms_initialize_for_new_map@@YAXXZ");
//};

//void swarms_dispose_from_old_map(void)
//{
//    mangled_ppc("?swarms_dispose_from_old_map@@YAXXZ");
//};

//long swarm_place(struct actor_spawn_definition const *)
//{
//    mangled_ppc("?swarm_place@@YAJPBUactor_spawn_definition@@@Z");
//};

//long swarm_create_creature(long, long, struct actor_spawn_definition const *, bool)
//{
//    mangled_ppc("?swarm_create_creature@@YAJJJPBUactor_spawn_definition@@_N@Z");
//};

//void initialize_creature_state(struct swarm_creature_state *)
//{
//    mangled_ppc("?initialize_creature_state@@YAXPAUswarm_creature_state@@@Z");
//};

//void actor_attach_swarm(long, long)
//{
//    mangled_ppc("?actor_attach_swarm@@YAXJJ@Z");
//};

//void actor_detach_swarm(long)
//{
//    mangled_ppc("?actor_detach_swarm@@YAXJ@Z");
//};

//void swarm_delete(long)
//{
//    mangled_ppc("?swarm_delete@@YAXJ@Z");
//};

//void swarm_kill(long, bool)
//{
//    mangled_ppc("?swarm_kill@@YAXJ_N@Z");
//};

//bool swarm_add_creature(long, long)
//{
//    mangled_ppc("?swarm_add_creature@@YA_NJJ@Z");
//};

//bool swarm_remove_creature(long, long, bool, bool)
//{
//    mangled_ppc("?swarm_remove_creature@@YA_NJJ_N0@Z");
//};

//void swarm_creature_update_timers(long, long, struct swarm_creature_state *)
//{
//    mangled_ppc("?swarm_creature_update_timers@@YAXJJPAUswarm_creature_state@@@Z");
//};

//void swarm_creature_update(long, long)
//{
//    mangled_ppc("?swarm_creature_update@@YAXJJ@Z");
//};

//bool swarm_target_get_info(short, long, long *, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?swarm_target_get_info@@YA_NFJPAJPATreal_point3d@@1@Z");
//};

//void creature_generate_up_vector(long, struct swarm_creature_state *)
//{
//    mangled_ppc("?creature_generate_up_vector@@YAXJPAUswarm_creature_state@@@Z");
//};

//bool swarm_creature_infect(long, long, struct object_marker const *, union vector3d const *)
//{
//    mangled_ppc("?swarm_creature_infect@@YA_NJJPBUobject_marker@@PBTvector3d@@@Z");
//};

//bool swarm_action_execute_command_script(long, long, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?swarm_action_execute_command_script@@YA_NJJPATvector3d@@0@Z");
//};

//void swarm_movement_update(long, long)
//{
//    mangled_ppc("?swarm_movement_update@@YAXJJ@Z");
//};

//void swarm_creature_control(long)
//{
//    mangled_ppc("?swarm_creature_control@@YAXJ@Z");
//};

//void swarm_update(long)
//{
//    mangled_ppc("?swarm_update@@YAXJ@Z");
//};

//void creature_state_refresh(long, struct swarm_creature_state *)
//{
//    mangled_ppc("?creature_state_refresh@@YAXJPAUswarm_creature_state@@@Z");
//};

//void swarm_input_update(long)
//{
//    mangled_ppc("?swarm_input_update@@YAXJ@Z");
//};

//bool swarm_perception_find_sense_position(long, union real_point3d const *, struct actor_position_data *)
//{
//    mangled_ppc("?swarm_perception_find_sense_position@@YA_NJPBTreal_point3d@@PAUactor_position_data@@@Z");
//};

//long swarm_perception_creature_from_swarm(long, struct actor_position_data const *, long)
//{
//    mangled_ppc("?swarm_perception_creature_from_swarm@@YAJJPBUactor_position_data@@J@Z");
//};

//void swarm_handle_creature_death(long, long, short)
//{
//    mangled_ppc("?swarm_handle_creature_death@@YAXJJF@Z");
//};

//void swarm_handle_delete_object(long)
//{
//    mangled_ppc("?swarm_handle_delete_object@@YAXJ@Z");
//};

//void swarm_flush_prop(long, long)
//{
//    mangled_ppc("?swarm_flush_prop@@YAXJJ@Z");
//};

//void swarm_flush_structure_indices(long)
//{
//    mangled_ppc("?swarm_flush_structure_indices@@YAXJ@Z");
//};

//void swarm_creature_handle_action_finished(long, long, long)
//{
//    mangled_ppc("?swarm_creature_handle_action_finished@@YAXJJJ@Z");
//};

//bool ai_allow_attachment(long, bool *)
//{
//    mangled_ppc("?ai_allow_attachment@@YA_NJPA_N@Z");
//};

//bool ai_swarm_creature_handle_attach(long, long)
//{
//    mangled_ppc("?ai_swarm_creature_handle_attach@@YA_NJJ@Z");
//};

//bool swarm_is_active(long)
//{
//    mangled_ppc("?swarm_is_active@@YA_NJ@Z");
//};

//void swarm_freeze(long)
//{
//    mangled_ppc("?swarm_freeze@@YAXJ@Z");
//};

//void swarm_freeze_creature(long)
//{
//    mangled_ppc("?swarm_freeze_creature@@YAXJ@Z");
//};

//bool swarm_creature_moving_jump(long, float, float, union real_point3d const *, union vector3d *)
//{
//    mangled_ppc("?swarm_creature_moving_jump@@YA_NJMMPBTreal_point3d@@PATvector3d@@@Z");
//};

//bool swarm_creature_aim_jump(long, union vector3d *)
//{
//    mangled_ppc("?swarm_creature_aim_jump@@YA_NJPATvector3d@@@Z");
//};

//void swarm_accelerate(long, union vector3d const *)
//{
//    mangled_ppc("?swarm_accelerate@@YAXJPBTvector3d@@@Z");
//};

//void swarm_spawner_definition_new(struct swarm_spawner_definition *)
//{
//    mangled_ppc("?swarm_spawner_definition_new@@YAXPAUswarm_spawner_definition@@@Z");
//};

//short swarm_spawner_new(struct swarm_spawner_definition *)
//{
//    mangled_ppc("?swarm_spawner_new@@YAFPAUswarm_spawner_definition@@@Z");
//};

//bool swarm_spawner_new_at_index(short, struct swarm_spawner_definition const *)
//{
//    mangled_ppc("?swarm_spawner_new_at_index@@YA_NFPBUswarm_spawner_definition@@@Z");
//};

//void swarm_spawner_new_from_defintion(struct swarm_spawner_definition const *, struct s_swarm_spawner *)
//{
//    mangled_ppc("?swarm_spawner_new_from_defintion@@YAXPBUswarm_spawner_definition@@PAUs_swarm_spawner@@@Z");
//};

//bool swarm_spawner_new_definition(short, struct actor_spawn_definition *)
//{
//    mangled_ppc("?swarm_spawner_new_definition@@YA_NFPAUactor_spawn_definition@@@Z");
//};

//void swarm_spawner_start(short)
//{
//    mangled_ppc("?swarm_spawner_start@@YAXF@Z");
//};

//void swarm_spawner_new_swarm(short)
//{
//    mangled_ppc("?swarm_spawner_new_swarm@@YAXF@Z");
//};

//void spawner_initialize_creature(short, long)
//{
//    mangled_ppc("?spawner_initialize_creature@@YAXFJ@Z");
//};

//short swarm_num_spawners_of_type(long)
//{
//    mangled_ppc("?swarm_num_spawners_of_type@@YAFJ@Z");
//};

//void swarm_spawners_update(void)
//{
//    mangled_ppc("?swarm_spawners_update@@YAXXZ");
//};

//void swarm_spawner_new_creature(short)
//{
//    mangled_ppc("?swarm_spawner_new_creature@@YAXF@Z");
//};

//void swarm_spawner_accelerate_creature(short, long)
//{
//    mangled_ppc("?swarm_spawner_accelerate_creature@@YAXFJ@Z");
//};

//void swarm_spawner_end(short)
//{
//    mangled_ppc("?swarm_spawner_end@@YAXF@Z");
//};

//void swarm_spawners_handle_deleted_object(long)
//{
//    mangled_ppc("?swarm_spawners_handle_deleted_object@@YAXJ@Z");
//};

//void swarm_set_team(long, enum e_campaign_team)
//{
//    mangled_ppc("?swarm_set_team@@YAXJW4e_campaign_team@@@Z");
//};

//void swarm_iterator_new(struct swarm_iterator *)
//{
//    mangled_ppc("?swarm_iterator_new@@YAXPAUswarm_iterator@@@Z");
//};

//struct swarm_datum * swarm_iterator_next(struct swarm_iterator *)
//{
//    mangled_ppc("?swarm_iterator_next@@YAPAUswarm_datum@@PAUswarm_iterator@@@Z");
//};

//void swarm_creature_iterator_new(long, struct swarm_creature_iterator *)
//{
//    mangled_ppc("?swarm_creature_iterator_new@@YAXJPAUswarm_creature_iterator@@@Z");
//};

//struct creature_datum * swarm_creature_iterator_next(struct swarm_creature_iterator *)
//{
//    mangled_ppc("?swarm_creature_iterator_next@@YAPAUcreature_datum@@PAUswarm_creature_iterator@@@Z");
//};

//void swarm_render_debug(long)
//{
//    mangled_ppc("?swarm_render_debug@@YAXJ@Z");
//};

//public: void c_data_iterator<struct swarm_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Uswarm_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct swarm_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Uswarm_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct swarm_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Uswarm_datum@@@@QBAJXZ");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void c_object_iterator<struct creature_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Ucreature_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct creature_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Ucreature_datum@@@@QAA_NXZ");
//};

//public: struct creature_datum * c_object_iterator<struct creature_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Ucreature_datum@@@@QAAPAUcreature_datum@@XZ");
//};

//public: c_character_runtime_properties<class c_character_swarm_properties_internal>::c_character_runtime_properties<class c_character_swarm_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_swarm_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//void actor_get_character_definition_properties<class c_character_swarm_properties_internal, 252>(long, class c_character_runtime_properties<class c_character_swarm_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_swarm_properties_internal@@$0PM@@@YAXJAAV?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_swarm_properties_internal>::set(class c_character_swarm_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@QAAXPBVc_character_swarm_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_swarm_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@QAAXXZ");
//};

//public: static void c_character_properties_base<class c_character_swarm_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_swarm_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_swarm_properties_internal@@@@SAXPAV1@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_swarm_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_swarm_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@@Z");
//};

//class c_character_swarm_properties_internal * character_definition_properties_get_direct<class c_character_swarm_properties_internal, 252>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_swarm_properties_internal@@$0PM@@@YAPAVc_character_swarm_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_swarm_properties_internal>, class c_character_swarm_properties_internal>(class c_character_runtime_properties<class c_character_swarm_properties_internal> *, class c_character_swarm_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@Vc_character_swarm_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@PBVc_character_swarm_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_swarm_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_swarm_properties_internal@@@@SA_NPAX@Z");
//};

//struct s_tag_block * character_definition_property_block_get<252>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0PM@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_swarm_spawners_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_swarm_spawners_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_spawner_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_spawner_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_swarm_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_swarm_data_allocator@@YAXXZ");
//};

//void g_swarm_spawners_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_swarm_spawners_allocator@@YAXXZ");
//};

//void g_spawner_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_spawner_globals_allocator@@YAXXZ");
//};

