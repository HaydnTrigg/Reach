/* ---------- headers */

#include "omaha\ai\ai.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool const g_suppress_pathfinding_generation; // "?g_suppress_pathfinding_generation@@3_NB"
// except_record_837EDE08; // "except_record_837EDE08"
// except_record_837EF510; // "except_record_837EF510"
// except_record_837F13B0; // "except_record_837F13B0"
// except_record_837F33E0; // "except_record_837F33E0"
// except_record_837F4B08; // "except_record_837F4B08"
// except_record_837F6C40; // "except_record_837F6C40"
// struct s_tag_struct_definition ai_spawn_conditions_struct; // "?ai_spawn_conditions_struct@@3Us_tag_struct_definition@@A"
// bool g_xbox_enable_pathfinding_generation; // "?g_xbox_enable_pathfinding_generation@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_ai_globals_allocator::*)(void *)> g_ai_globals_allocator; // "?g_ai_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@A"
// class c_tag_struct_vtable<class c_null_tag_vtable> ai_spawn_conditions_struct_struct_vtable; // "?ai_spawn_conditions_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_null_tag_vtable@@@@A"
// struct s_ai_global_state *ai_global_state; // "?ai_global_state@@3PAUs_ai_global_state@@A"

// void __tls_set_g_ai_globals_allocator(void *);
// void visual_studio_is_the_greatest_piece_of_software_ever_exclamation_mark(void);
// public: s_task_record::s_task_record(void);
// public: actor_debug_info::actor_debug_info(void);
// void ai_initialize(void);
// void ai_dispose(void);
// void ai_initialize_for_new_map(void);
// void ai_dispose_from_old_map(void);
// bool ai_point3d_in_bsp(long, class c_ai_point3d const *, long);
// void ai_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *);
// void ai_initialize_for_new_structure_bsp(unsigned long);
// void ai_dispose_from_old_structure_bsp(unsigned long);
// void ai_initialize_for_saved_game(long);
// void ai_place(enum e_game_mode);
// void ai_update(void);
// bool actor_resurrection_biped_safe(long);
// bool ai_adjust_damage(long, long, struct s_damage_data *, float *);
// void ai_erase(long, bool);
// long ai_release_inactive_swarms(long, unsigned char *, long, bool *, char *, long);
// void ai_find_inactive_squads(long, unsigned char *, long);
// bool compare_releasable_inactive_squads(void const *, void const *, void const *);
// long ai_release_inactive_squads(long, unsigned char *, long, bool *, char *, long);
// bool ai_find_location(union real_point3d const *, struct s_location *);
// bool ai_test_line_of_fire(long, long, union real_point3d const *, union vector3d const *, long *);
// void ai_find_line_of_fire_friend_pills(long, class c_static_stack<struct line_of_fire_pill, 32> *);
// void ai_generate_line_of_fire_pill(long, long, struct line_of_fire_pill *);
// short ai_test_line_of_sight(union real_point3d const *, struct s_cluster_reference, union real_point3d const *, struct s_cluster_reference, short, bool, long, long, bool, bool, long *, bool *, union real_point3d *);
// short ai_test_line_of_sight(union real_point3d const *, struct s_cluster_reference, union real_point3d const *, struct s_cluster_reference, short, bool, long, long, bool, bool, long *, bool *);
// bool ai_test_line_of_fire_geometry(long, long, float, union real_point3d const *, union real_point3d const *);
// bool ai_test_ballistic_line_of_fire(long, union real_point3d const *, float, union vector3d const *, float, long, bool);
// bool ai_try_vehicle_eviction(long, long, bool);
// float ai_get_situation_danger_score(long);
// float ai_get_weapon_score(long, long, float);
// long ai_get_unit_responsible_for_damage(long, bool);
// void ai_handle_death(long, long, short, long, float, float);
// void ai_handle_targetable_object_allegiance_change(long, enum e_campaign_team);
// void ai_handle_allegiance_status_changed(enum e_campaign_team, enum e_campaign_team, bool, bool, bool);
// void ai_update_team_status(void);
// bool ai_get_active_clusters(long, unsigned long *, long);
// void ai_handle_bump(long, long, union vector3d const *);
// void ai_handle_noisemaker(long);
// void ai_handle_equipment_release(long, long);
// void ai_handle_damage(long, long, short, long, float, float, union vector3d const *, bool);
// void ai_handle_stun(long, float, union vector3d const *);
// void ai_handle_projectile_attach(long, long);
// float ai_danger_level(short);
// float ai_chance_this_tick(float);
// float ai_chance_in_delta_time(float, float);
// void ai_create_mounted_weapons_for_unit(long);
// void ai_handle_deleted_object(long);
// void ai_handle_squad_editing(void);
// void ai_reset(void);
// void ai_handle_squad_addition(long);
// void ai_handle_squad_deletion(unsigned long const *);
// void ai_handle_squad_group_addition(long);
// void ai_handle_squad_group_deletion(unsigned long const *);
// void ai_handle_objectives_editing(void);
// void ai_handle_squad_patrol_editing(void);
// void ai_handle_tasks_addition(long);
// void ai_handle_tasks_deletion(unsigned long const *);
// void ai_handle_squad_patrol_waypoint_addition(long, long, long);
// void ai_handle_squad_patrol_waypoint_deletion(long, long, long);
// void ai_handle_zone_addition(long);
// void ai_handle_zone_deletion(unsigned long const *);
// void ai_handle_firing_position_move(short, short, union vector3d const *);
// void ai_handle_spawn_point_change(short, short);
// void ai_handle_areas_delete(short, unsigned long const *);
// void ai_handle_well_point_move(short, short, union vector3d const *);
// void ai_handle_sector_point_move(short, short, short, union vector3d const *, struct s_tag_block_definition const *);
// void ai_handle_ai_point_move(union real_point3d const *, class c_ai_point3d *);
// void ai_handle_cs_data_point_move(short, short);
// void ai_handle_unit_effect(long, enum e_sound_type, enum e_ai_sound_volume);
// void ai_handle_weapon_trade(long, long, long, long);
// void ai_handle_get_attention(long, long);
// void ai_handle_effect_creation(long, short, long, short, float, float, struct real_matrix4x3const *);
// bool ai_enemies_can_see_player(long *);
// long actor_endangering_player(bool, bool, unsigned long *);
// bool ai_enemies_attacking_players(long *, unsigned long *);
// bool ai_should_target_object(enum e_campaign_team, long);
// void ai_flush_spatial_effects(void);
// void ai_handle_spatial_effect(long, union real_point3d const *, short, short, short);
// void ai_handle_projectile_impact(long, long);
// void ai_verify_tags(void);
// char * ai_describe_actor(long, long, bool, char *, long);
// void ai_get_center_of_mass(long, union real_point3d *);
// void * ai_scratch_allocate(unsigned int);
// void ai_scratch_free(void *);
// bool ai_test_spawn_conditions(struct s_ai_spawn_conditions const *);
// public: struct tracking_datum * c_data_iterator<struct tracking_datum>::get_datum(void) const;
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: long c_pointer_to_member_int<struct s_cell_definition>::get_value(struct s_cell_definition const *) const;
// public: bool c_pointer_to_member_int<struct s_cell_definition>::valid(void) const;
// public: long c_pointer_to_member_int<struct s_spawn_point_definition>::get_value(struct s_spawn_point_definition const *) const;
// public: bool c_pointer_to_member_int<struct s_spawn_point_definition>::valid(void) const;
// public: long c_static_stack<struct actor_spawn_definition, 192>::count(void) const;
// public: struct actor_spawn_definition * c_static_stack<struct actor_spawn_definition, 192>::get(long);
// public: c_static_stack<struct actor_spawn_definition, 192>::c_static_stack<struct actor_spawn_definition, 192>(void);
// public: bool c_static_stack<struct line_of_fire_pill, 32>::full(void) const;
// public: long c_static_stack<struct line_of_fire_pill, 32>::count(void) const;
// public: long c_static_stack<struct line_of_fire_pill, 32>::push(void);
// public: struct line_of_fire_pill & c_static_stack<struct line_of_fire_pill, 32>::operator[](long);
// public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::get_top(void);
// public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::begin(void);
// public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::end(void);
// public: c_static_stack<struct line_of_fire_pill, 32>::c_static_stack<struct line_of_fire_pill, 32>(void);
// public: struct prop_ref_datum * c_data_iterator<struct prop_ref_datum>::get_datum(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::valid(void) const;
// private: static long c_pointer_to_member_int<struct s_cell_definition>::get_int_from_buffer(class c_basic_buffer<void const>, enum c_pointer_to_member_int<struct s_cell_definition>::e_int_type);
// private: static long c_pointer_to_member_int<struct s_spawn_point_definition>::get_int_from_buffer(class c_basic_buffer<void const>, enum c_pointer_to_member_int<struct s_spawn_point_definition>::e_int_type);
// public: bool c_static_stack<struct actor_spawn_definition, 192>::valid(long) const;
// public: bool c_static_stack<struct line_of_fire_pill, 32>::valid(void) const;
// public: bool c_static_stack<struct line_of_fire_pill, 32>::valid(long) const;
// public: long c_static_stack<struct line_of_fire_pill, 32>::top(void) const;
// public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::get(long);
// public: bool c_static_stack<struct actor_spawn_definition, 192>::valid(void) const;
// public: bool c_static_stack<struct line_of_fire_pill, 32>::empty(void) const;
// public: c_flags<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::c_flags<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>(void);
// public: unsigned short & s_static_array<unsigned short, 512>::operator[]<int>(int);
// public: c_flags<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::c_flags<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>(void);
// public: char const * c_basic_buffer<void const>::get_as_type<char const>(void);
// public: short const * c_basic_buffer<void const>::get_as_type<short const>(void);
// public: long const * c_basic_buffer<void const>::get_as_type<long const>(void);
// public: void c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool s_static_array<unsigned short, 512>::valid<int>(int);
// public: void c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: char const * c_basic_buffer<void const>::get_as_type_from_offset<char const>(unsigned long);
// public: short const * c_basic_buffer<void const>::get_as_type_from_offset<short const>(unsigned long);
// public: long const * c_basic_buffer<void const>::get_as_type_from_offset<long const>(unsigned long);
// private: static unsigned short c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_task_record_flags);
// private: static unsigned short c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_debug_behavior_failure_flags);
// public: short c_ai_point3d::bsp_index(void) const;
// struct s_collision_test_flags collision_test_flags_invert(struct s_collision_test_flags);
// public: long s_squad_definition::get_cell_count(void) const;
// public: bool s_squad_definition::use_template(void) const;
// public: struct s_cell_definition * s_squad_definition::get_cell(long) const;
// public: long s_squad_definition::get_designer_cell_count(void) const;
// public: long s_squad_definition::get_template_cell_count(void) const;
// public: struct s_cell_definition * s_squad_definition::get_designer_cell(long) const;
// public: struct s_cell_definition * s_squad_definition::get_template_cell(long) const;
// public: class c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver> c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::operator~(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::free_memory(void);
// public: c_pointer_to_member_int<struct s_cell_definition>::c_pointer_to_member_int<struct s_cell_definition>(int);
// ??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@PQs_cell_definition@@F@Z;
// ??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@PQs_cell_definition@@Us_tag_block@@@Z;
// ??0?$c_pointer_to_member_int@Us_spawn_point_definition@@@@QAA@PQs_spawn_point_definition@@F@Z;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>(void);
// void g_ai_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_ai_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_ai_globals_allocator@@YAXPAX@Z");
//};

//void visual_studio_is_the_greatest_piece_of_software_ever_exclamation_mark(void)
//{
//    mangled_ppc("?visual_studio_is_the_greatest_piece_of_software_ever_exclamation_mark@@YAXXZ");
//};

//public: s_task_record::s_task_record(void)
//{
//    mangled_ppc("??0s_task_record@@QAA@XZ");
//};

//public: actor_debug_info::actor_debug_info(void)
//{
//    mangled_ppc("??0actor_debug_info@@QAA@XZ");
//};

//void ai_initialize(void)
//{
//    mangled_ppc("?ai_initialize@@YAXXZ");
//};

//void ai_dispose(void)
//{
//    mangled_ppc("?ai_dispose@@YAXXZ");
//};

//void ai_initialize_for_new_map(void)
//{
//    mangled_ppc("?ai_initialize_for_new_map@@YAXXZ");
//};

//void ai_dispose_from_old_map(void)
//{
//    mangled_ppc("?ai_dispose_from_old_map@@YAXXZ");
//};

//bool ai_point3d_in_bsp(long, class c_ai_point3d const *, long)
//{
//    mangled_ppc("?ai_point3d_in_bsp@@YA_NJPBVc_ai_point3d@@J@Z");
//};

//void ai_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *)
//{
//    mangled_ppc("?ai_attach_resources_to_bsp_zone@@YAXJJPAVc_game_system_resource_registrar@@@Z");
//};

//void ai_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?ai_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void ai_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?ai_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void ai_initialize_for_saved_game(long)
//{
//    mangled_ppc("?ai_initialize_for_saved_game@@YAXJ@Z");
//};

//void ai_place(enum e_game_mode)
//{
//    mangled_ppc("?ai_place@@YAXW4e_game_mode@@@Z");
//};

//void ai_update(void)
//{
//    mangled_ppc("?ai_update@@YAXXZ");
//};

//bool actor_resurrection_biped_safe(long)
//{
//    mangled_ppc("?actor_resurrection_biped_safe@@YA_NJ@Z");
//};

//bool ai_adjust_damage(long, long, struct s_damage_data *, float *)
//{
//    mangled_ppc("?ai_adjust_damage@@YA_NJJPAUs_damage_data@@PAM@Z");
//};

//void ai_erase(long, bool)
//{
//    mangled_ppc("?ai_erase@@YAXJ_N@Z");
//};

//long ai_release_inactive_swarms(long, unsigned char *, long, bool *, char *, long)
//{
//    mangled_ppc("?ai_release_inactive_swarms@@YAJJPAEJPA_NPADJ@Z");
//};

//void ai_find_inactive_squads(long, unsigned char *, long)
//{
//    mangled_ppc("?ai_find_inactive_squads@@YAXJPAEJ@Z");
//};

//bool compare_releasable_inactive_squads(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_releasable_inactive_squads@@YA_NPBX00@Z");
//};

//long ai_release_inactive_squads(long, unsigned char *, long, bool *, char *, long)
//{
//    mangled_ppc("?ai_release_inactive_squads@@YAJJPAEJPA_NPADJ@Z");
//};

//bool ai_find_location(union real_point3d const *, struct s_location *)
//{
//    mangled_ppc("?ai_find_location@@YA_NPBTreal_point3d@@PAUs_location@@@Z");
//};

//bool ai_test_line_of_fire(long, long, union real_point3d const *, union vector3d const *, long *)
//{
//    mangled_ppc("?ai_test_line_of_fire@@YA_NJJPBTreal_point3d@@PBTvector3d@@PAJ@Z");
//};

//void ai_find_line_of_fire_friend_pills(long, class c_static_stack<struct line_of_fire_pill, 32> *)
//{
//    mangled_ppc("?ai_find_line_of_fire_friend_pills@@YAXJPAV?$c_static_stack@Uline_of_fire_pill@@$0CA@@@@Z");
//};

//void ai_generate_line_of_fire_pill(long, long, struct line_of_fire_pill *)
//{
//    mangled_ppc("?ai_generate_line_of_fire_pill@@YAXJJPAUline_of_fire_pill@@@Z");
//};

//short ai_test_line_of_sight(union real_point3d const *, struct s_cluster_reference, union real_point3d const *, struct s_cluster_reference, short, bool, long, long, bool, bool, long *, bool *, union real_point3d *)
//{
//    mangled_ppc("?ai_test_line_of_sight@@YAFPBTreal_point3d@@Us_cluster_reference@@01F_NJJ22PAJPA_NPAT1@@Z");
//};

//short ai_test_line_of_sight(union real_point3d const *, struct s_cluster_reference, union real_point3d const *, struct s_cluster_reference, short, bool, long, long, bool, bool, long *, bool *)
//{
//    mangled_ppc("?ai_test_line_of_sight@@YAFPBTreal_point3d@@Us_cluster_reference@@01F_NJJ22PAJPA_N@Z");
//};

//bool ai_test_line_of_fire_geometry(long, long, float, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?ai_test_line_of_fire_geometry@@YA_NJJMPBTreal_point3d@@0@Z");
//};

//bool ai_test_ballistic_line_of_fire(long, union real_point3d const *, float, union vector3d const *, float, long, bool)
//{
//    mangled_ppc("?ai_test_ballistic_line_of_fire@@YA_NJPBTreal_point3d@@MPBTvector3d@@MJ_N@Z");
//};

//bool ai_try_vehicle_eviction(long, long, bool)
//{
//    mangled_ppc("?ai_try_vehicle_eviction@@YA_NJJ_N@Z");
//};

//float ai_get_situation_danger_score(long)
//{
//    mangled_ppc("?ai_get_situation_danger_score@@YAMJ@Z");
//};

//float ai_get_weapon_score(long, long, float)
//{
//    mangled_ppc("?ai_get_weapon_score@@YAMJJM@Z");
//};

//long ai_get_unit_responsible_for_damage(long, bool)
//{
//    mangled_ppc("?ai_get_unit_responsible_for_damage@@YAJJ_N@Z");
//};

//void ai_handle_death(long, long, short, long, float, float)
//{
//    mangled_ppc("?ai_handle_death@@YAXJJFJMM@Z");
//};

//void ai_handle_targetable_object_allegiance_change(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_handle_targetable_object_allegiance_change@@YAXJW4e_campaign_team@@@Z");
//};

//void ai_handle_allegiance_status_changed(enum e_campaign_team, enum e_campaign_team, bool, bool, bool)
//{
//    mangled_ppc("?ai_handle_allegiance_status_changed@@YAXW4e_campaign_team@@0_N11@Z");
//};

//void ai_update_team_status(void)
//{
//    mangled_ppc("?ai_update_team_status@@YAXXZ");
//};

//bool ai_get_active_clusters(long, unsigned long *, long)
//{
//    mangled_ppc("?ai_get_active_clusters@@YA_NJPAKJ@Z");
//};

//void ai_handle_bump(long, long, union vector3d const *)
//{
//    mangled_ppc("?ai_handle_bump@@YAXJJPBTvector3d@@@Z");
//};

//void ai_handle_noisemaker(long)
//{
//    mangled_ppc("?ai_handle_noisemaker@@YAXJ@Z");
//};

//void ai_handle_equipment_release(long, long)
//{
//    mangled_ppc("?ai_handle_equipment_release@@YAXJJ@Z");
//};

//void ai_handle_damage(long, long, short, long, float, float, union vector3d const *, bool)
//{
//    mangled_ppc("?ai_handle_damage@@YAXJJFJMMPBTvector3d@@_N@Z");
//};

//void ai_handle_stun(long, float, union vector3d const *)
//{
//    mangled_ppc("?ai_handle_stun@@YAXJMPBTvector3d@@@Z");
//};

//void ai_handle_projectile_attach(long, long)
//{
//    mangled_ppc("?ai_handle_projectile_attach@@YAXJJ@Z");
//};

//float ai_danger_level(short)
//{
//    mangled_ppc("?ai_danger_level@@YAMF@Z");
//};

//float ai_chance_this_tick(float)
//{
//    mangled_ppc("?ai_chance_this_tick@@YAMM@Z");
//};

//float ai_chance_in_delta_time(float, float)
//{
//    mangled_ppc("?ai_chance_in_delta_time@@YAMMM@Z");
//};

//void ai_create_mounted_weapons_for_unit(long)
//{
//    mangled_ppc("?ai_create_mounted_weapons_for_unit@@YAXJ@Z");
//};

//void ai_handle_deleted_object(long)
//{
//    mangled_ppc("?ai_handle_deleted_object@@YAXJ@Z");
//};

//void ai_handle_squad_editing(void)
//{
//    mangled_ppc("?ai_handle_squad_editing@@YAXXZ");
//};

//void ai_reset(void)
//{
//    mangled_ppc("?ai_reset@@YAXXZ");
//};

//void ai_handle_squad_addition(long)
//{
//    mangled_ppc("?ai_handle_squad_addition@@YAXJ@Z");
//};

//void ai_handle_squad_deletion(unsigned long const *)
//{
//    mangled_ppc("?ai_handle_squad_deletion@@YAXPBK@Z");
//};

//void ai_handle_squad_group_addition(long)
//{
//    mangled_ppc("?ai_handle_squad_group_addition@@YAXJ@Z");
//};

//void ai_handle_squad_group_deletion(unsigned long const *)
//{
//    mangled_ppc("?ai_handle_squad_group_deletion@@YAXPBK@Z");
//};

//void ai_handle_objectives_editing(void)
//{
//    mangled_ppc("?ai_handle_objectives_editing@@YAXXZ");
//};

//void ai_handle_squad_patrol_editing(void)
//{
//    mangled_ppc("?ai_handle_squad_patrol_editing@@YAXXZ");
//};

//void ai_handle_tasks_addition(long)
//{
//    mangled_ppc("?ai_handle_tasks_addition@@YAXJ@Z");
//};

//void ai_handle_tasks_deletion(unsigned long const *)
//{
//    mangled_ppc("?ai_handle_tasks_deletion@@YAXPBK@Z");
//};

//void ai_handle_squad_patrol_waypoint_addition(long, long, long)
//{
//    mangled_ppc("?ai_handle_squad_patrol_waypoint_addition@@YAXJJJ@Z");
//};

//void ai_handle_squad_patrol_waypoint_deletion(long, long, long)
//{
//    mangled_ppc("?ai_handle_squad_patrol_waypoint_deletion@@YAXJJJ@Z");
//};

//void ai_handle_zone_addition(long)
//{
//    mangled_ppc("?ai_handle_zone_addition@@YAXJ@Z");
//};

//void ai_handle_zone_deletion(unsigned long const *)
//{
//    mangled_ppc("?ai_handle_zone_deletion@@YAXPBK@Z");
//};

//void ai_handle_firing_position_move(short, short, union vector3d const *)
//{
//    mangled_ppc("?ai_handle_firing_position_move@@YAXFFPBTvector3d@@@Z");
//};

//void ai_handle_spawn_point_change(short, short)
//{
//    mangled_ppc("?ai_handle_spawn_point_change@@YAXFF@Z");
//};

//void ai_handle_areas_delete(short, unsigned long const *)
//{
//    mangled_ppc("?ai_handle_areas_delete@@YAXFPBK@Z");
//};

//void ai_handle_well_point_move(short, short, union vector3d const *)
//{
//    mangled_ppc("?ai_handle_well_point_move@@YAXFFPBTvector3d@@@Z");
//};

//void ai_handle_sector_point_move(short, short, short, union vector3d const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?ai_handle_sector_point_move@@YAXFFFPBTvector3d@@PBUs_tag_block_definition@@@Z");
//};

//void ai_handle_ai_point_move(union real_point3d const *, class c_ai_point3d *)
//{
//    mangled_ppc("?ai_handle_ai_point_move@@YAXPBTreal_point3d@@PAVc_ai_point3d@@@Z");
//};

//void ai_handle_cs_data_point_move(short, short)
//{
//    mangled_ppc("?ai_handle_cs_data_point_move@@YAXFF@Z");
//};

//void ai_handle_unit_effect(long, enum e_sound_type, enum e_ai_sound_volume)
//{
//    mangled_ppc("?ai_handle_unit_effect@@YAXJW4e_sound_type@@W4e_ai_sound_volume@@@Z");
//};

//void ai_handle_weapon_trade(long, long, long, long)
//{
//    mangled_ppc("?ai_handle_weapon_trade@@YAXJJJJ@Z");
//};

//void ai_handle_get_attention(long, long)
//{
//    mangled_ppc("?ai_handle_get_attention@@YAXJJ@Z");
//};

//void ai_handle_effect_creation(long, short, long, short, float, float, struct real_matrix4x3const *)
//{
//    mangled_ppc("?ai_handle_effect_creation@@YAXJFJFMMPBUreal_matrix4x3@@@Z");
//};

//bool ai_enemies_can_see_player(long *)
//{
//    mangled_ppc("?ai_enemies_can_see_player@@YA_NPAJ@Z");
//};

//long actor_endangering_player(bool, bool, unsigned long *)
//{
//    mangled_ppc("?actor_endangering_player@@YAJ_N0PAK@Z");
//};

//bool ai_enemies_attacking_players(long *, unsigned long *)
//{
//    mangled_ppc("?ai_enemies_attacking_players@@YA_NPAJPAK@Z");
//};

//bool ai_should_target_object(enum e_campaign_team, long)
//{
//    mangled_ppc("?ai_should_target_object@@YA_NW4e_campaign_team@@J@Z");
//};

//void ai_flush_spatial_effects(void)
//{
//    mangled_ppc("?ai_flush_spatial_effects@@YAXXZ");
//};

//void ai_handle_spatial_effect(long, union real_point3d const *, short, short, short)
//{
//    mangled_ppc("?ai_handle_spatial_effect@@YAXJPBTreal_point3d@@FFF@Z");
//};

//void ai_handle_projectile_impact(long, long)
//{
//    mangled_ppc("?ai_handle_projectile_impact@@YAXJJ@Z");
//};

//void ai_verify_tags(void)
//{
//    mangled_ppc("?ai_verify_tags@@YAXXZ");
//};

//char * ai_describe_actor(long, long, bool, char *, long)
//{
//    mangled_ppc("?ai_describe_actor@@YAPADJJ_NPADJ@Z");
//};

//void ai_get_center_of_mass(long, union real_point3d *)
//{
//    mangled_ppc("?ai_get_center_of_mass@@YAXJPATreal_point3d@@@Z");
//};

//void * ai_scratch_allocate(unsigned int)
//{
//    mangled_ppc("?ai_scratch_allocate@@YAPAXI@Z");
//};

//void ai_scratch_free(void *)
//{
//    mangled_ppc("?ai_scratch_free@@YAXPAX@Z");
//};

//bool ai_test_spawn_conditions(struct s_ai_spawn_conditions const *)
//{
//    mangled_ppc("?ai_test_spawn_conditions@@YA_NPBUs_ai_spawn_conditions@@@Z");
//};

//public: struct tracking_datum * c_data_iterator<struct tracking_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Utracking_datum@@@@QBAPAUtracking_datum@@XZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: long c_pointer_to_member_int<struct s_cell_definition>::get_value(struct s_cell_definition const *) const
//{
//    mangled_ppc("?get_value@?$c_pointer_to_member_int@Us_cell_definition@@@@QBAJPBUs_cell_definition@@@Z");
//};

//public: bool c_pointer_to_member_int<struct s_cell_definition>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_pointer_to_member_int@Us_cell_definition@@@@QBA_NXZ");
//};

//public: long c_pointer_to_member_int<struct s_spawn_point_definition>::get_value(struct s_spawn_point_definition const *) const
//{
//    mangled_ppc("?get_value@?$c_pointer_to_member_int@Us_spawn_point_definition@@@@QBAJPBUs_spawn_point_definition@@@Z");
//};

//public: bool c_pointer_to_member_int<struct s_spawn_point_definition>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_pointer_to_member_int@Us_spawn_point_definition@@@@QBA_NXZ");
//};

//public: long c_static_stack<struct actor_spawn_definition, 192>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Uactor_spawn_definition@@$0MA@@@QBAJXZ");
//};

//public: struct actor_spawn_definition * c_static_stack<struct actor_spawn_definition, 192>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Uactor_spawn_definition@@$0MA@@@QAAPAUactor_spawn_definition@@J@Z");
//};

//public: c_static_stack<struct actor_spawn_definition, 192>::c_static_stack<struct actor_spawn_definition, 192>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Uactor_spawn_definition@@$0MA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct line_of_fire_pill, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct line_of_fire_pill, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QBAJXZ");
//};

//public: long c_static_stack<struct line_of_fire_pill, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAAJXZ");
//};

//public: struct line_of_fire_pill & c_static_stack<struct line_of_fire_pill, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAAAAUline_of_fire_pill@@J@Z");
//};

//public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAAPAUline_of_fire_pill@@XZ");
//};

//public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAAPAUline_of_fire_pill@@XZ");
//};

//public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAAPAUline_of_fire_pill@@XZ");
//};

//public: c_static_stack<struct line_of_fire_pill, 32>::c_static_stack<struct line_of_fire_pill, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAA@XZ");
//};

//public: struct prop_ref_datum * c_data_iterator<struct prop_ref_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Uprop_ref_datum@@@@QBAPAUprop_ref_datum@@XZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//private: static long c_pointer_to_member_int<struct s_cell_definition>::get_int_from_buffer(class c_basic_buffer<void const>, enum c_pointer_to_member_int<struct s_cell_definition>::e_int_type)
//{
//    mangled_ppc("?get_int_from_buffer@?$c_pointer_to_member_int@Us_cell_definition@@@@CAJV?$c_basic_buffer@$$CBX@@W4e_int_type@1@@Z");
//};

//private: static long c_pointer_to_member_int<struct s_spawn_point_definition>::get_int_from_buffer(class c_basic_buffer<void const>, enum c_pointer_to_member_int<struct s_spawn_point_definition>::e_int_type)
//{
//    mangled_ppc("?get_int_from_buffer@?$c_pointer_to_member_int@Us_spawn_point_definition@@@@CAJV?$c_basic_buffer@$$CBX@@W4e_int_type@1@@Z");
//};

//public: bool c_static_stack<struct actor_spawn_definition, 192>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uactor_spawn_definition@@$0MA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct line_of_fire_pill, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct line_of_fire_pill, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct line_of_fire_pill, 32>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QBAJXZ");
//};

//public: struct line_of_fire_pill * c_static_stack<struct line_of_fire_pill, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QAAPAUline_of_fire_pill@@J@Z");
//};

//public: bool c_static_stack<struct actor_spawn_definition, 192>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uactor_spawn_definition@@$0MA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct line_of_fire_pill, 32>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Uline_of_fire_pill@@$0CA@@@QBA_NXZ");
//};

//public: c_flags<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::c_flags<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_task_record_flags@@G$0L@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: unsigned short & s_static_array<unsigned short, 512>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@G$0CAA@@@QAAAAGH@Z");
//};

//public: c_flags<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::c_flags<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_debug_behavior_failure_flags@@G$08Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: char const * c_basic_buffer<void const>::get_as_type<char const>(void)
//{
//    mangled_ppc("??$get_as_type@$$CBD@?$c_basic_buffer@$$CBX@@QAAPBDXZ");
//};

//public: short const * c_basic_buffer<void const>::get_as_type<short const>(void)
//{
//    mangled_ppc("??$get_as_type@$$CBF@?$c_basic_buffer@$$CBX@@QAAPBFXZ");
//};

//public: long const * c_basic_buffer<void const>::get_as_type<long const>(void)
//{
//    mangled_ppc("??$get_as_type@$$CBJ@?$c_basic_buffer@$$CBX@@QAAPBJXZ");
//};

//public: void c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_task_record_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_task_record_flags@@G$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<unsigned short, 512>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@G$0CAA@@@SA_NH@Z");
//};

//public: void c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_debug_behavior_failure_flags@@G$08Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_debug_behavior_failure_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: char const * c_basic_buffer<void const>::get_as_type_from_offset<char const>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBD@?$c_basic_buffer@$$CBX@@QAAPBDK@Z");
//};

//public: short const * c_basic_buffer<void const>::get_as_type_from_offset<short const>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBF@?$c_basic_buffer@$$CBX@@QAAPBFK@Z");
//};

//public: long const * c_basic_buffer<void const>::get_as_type_from_offset<long const>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBJ@?$c_basic_buffer@$$CBX@@QAAPBJK@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_task_record_flags@@G$0L@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_debug_behavior_failure_flags@@G$08Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_task_record_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_task_record_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_task_record_flags@@G$0L@Us_default_enum_string_resolver@@@@CAGW4e_task_record_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_debug_behavior_failure_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_debug_behavior_failure_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_debug_behavior_failure_flags@@@Z");
//};

//public: short c_ai_point3d::bsp_index(void) const
//{
//    mangled_ppc("?bsp_index@c_ai_point3d@@QBAFXZ");
//};

//struct s_collision_test_flags collision_test_flags_invert(struct s_collision_test_flags)
//{
//    mangled_ppc("?collision_test_flags_invert@@YA?AUs_collision_test_flags@@U1@@Z");
//};

//public: long s_squad_definition::get_cell_count(void) const
//{
//    mangled_ppc("?get_cell_count@s_squad_definition@@QBAJXZ");
//};

//public: bool s_squad_definition::use_template(void) const
//{
//    mangled_ppc("?use_template@s_squad_definition@@QBA_NXZ");
//};

//public: struct s_cell_definition * s_squad_definition::get_cell(long) const
//{
//    mangled_ppc("?get_cell@s_squad_definition@@QBAPAUs_cell_definition@@J@Z");
//};

//public: long s_squad_definition::get_designer_cell_count(void) const
//{
//    mangled_ppc("?get_designer_cell_count@s_squad_definition@@QBAJXZ");
//};

//public: long s_squad_definition::get_template_cell_count(void) const
//{
//    mangled_ppc("?get_template_cell_count@s_squad_definition@@QBAJXZ");
//};

//public: struct s_cell_definition * s_squad_definition::get_designer_cell(long) const
//{
//    mangled_ppc("?get_designer_cell@s_squad_definition@@QBAPAUs_cell_definition@@J@Z");
//};

//public: struct s_cell_definition * s_squad_definition::get_template_cell(long) const
//{
//    mangled_ppc("?get_template_cell@s_squad_definition@@QBAPAUs_cell_definition@@J@Z");
//};

//public: class c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver> c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_collision_test_flag@@K$0BI@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: c_pointer_to_member_int<struct s_cell_definition>::c_pointer_to_member_int<struct s_cell_definition>(int)
//{
//    mangled_ppc("??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@H@Z");
//};

//??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@PQs_cell_definition@@F@Z
//{
//    mangled_ppc("??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@PQs_cell_definition@@F@Z");
//};

//??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@PQs_cell_definition@@Us_tag_block@@@Z
//{
//    mangled_ppc("??0?$c_pointer_to_member_int@Us_cell_definition@@@@QAA@PQs_cell_definition@@Us_tag_block@@@Z");
//};

//??0?$c_pointer_to_member_int@Us_spawn_point_definition@@@@QAA@PQs_spawn_point_definition@@F@Z
//{
//    mangled_ppc("??0?$c_pointer_to_member_int@Us_spawn_point_definition@@@@QAA@PQs_spawn_point_definition@@F@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_ai_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_ai_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_ai_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ai_globals_allocator@@YAXXZ");
//};

