/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool simulation_query_object_placement(struct s_object_placement_data const *);
// bool simulation_object_is_attached_to_distributed_networking(long);
// bool simulation_query_object_is_predicted(long);
// bool simulation_query_local_control(long, long);
// bool simulation_query_local_predictive_control(long, long);
// bool simulation_query_control(long, long, long *);
// bool simulation_query_predictive_event(long, long, long *);
// void simulation_action_game_engine_globals_create(void);
// void simulation_action_game_engine_globals_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_game_engine_globals_force_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_game_engine_globals_delete(void);
// void simulation_action_game_statborg_create(long);
// void simulation_action_game_statborg_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_game_statborg_delete(long);
// void simulation_action_debug_globals_create(void);
// void simulation_action_debug_globals_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_debug_globals_delete(void);
// void simulation_action_game_ai_create(void);
// void simulation_action_game_ai_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_game_ai_delete(void);
// void simulation_action_game_map_variant_create_for_chunk(long);
// public: void c_map_variant::set_chunk_simulation_object_glue_index(long, long);
// public: long c_map_variant::get_chunk_simulation_object_glue_index(long);
// void simulation_action_game_map_variant_create_all(void);
// void simulation_action_game_map_variant_update(long, unsigned __int64);
// void simulation_action_game_map_variant_update_internal(long, unsigned __int64, bool);
// void simulation_action_game_map_variant_update_all_properties(long);
// void simulation_action_game_map_variant_force_update(long, unsigned __int64);
// void simulation_action_game_map_variant_delete(void);
// void simulation_action_game_engine_player_create(short);
// long game_engine_player_entity_index_from_player_absolute_index(long);
// void simulation_action_game_engine_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_game_engine_player_force_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// void simulation_action_game_engine_player_delete(short);
// void simulation_action_object_create(long);
// public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_object_update_flag);
// public: c_dirty_simulation_flags_object_functor::c_dirty_simulation_flags_object_functor(class c_simulation_object_update_flags);
// void simulation_action_object_recapture_creation_data(long);
// void simulation_action_object_create_build_entity_types(long, long, long, long *, enum e_simulation_entity_type *, long *);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_object_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_biped_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_item_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_projectile_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_weapon_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_generic_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_device_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_breakable_surface_group_update_flag);
// public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_vehicle_update_flag);
// private: enum e_simulation_entity_type c_simulation_object_update_flags::get_simulation_entity_type(long);
// void simulation_action_object_update(long, class c_simulation_object_update_flags);
// void simulation_action_object_update_internal(long, class c_simulation_object_update_flags);
// void simulation_action_object_force_update(long, class c_simulation_object_update_flags);
// void simulation_action_object_delete(long);
// void simulation_action_object_update_multiplayer_properties(long, bool);
// void simulation_action_actor_create(long);
// void simulation_action_actor_died(long);
// void simulation_action_breakable_surfaces_create(void);
// public: c_breakable_surface_group_handle::c_breakable_surface_group_handle(void);
// public: c_breakable_surface_group_handle::~c_breakable_surface_group_handle(void);
// public: long c_breakable_surface_group_handle::get_raw_handle(void) const;
// void simulation_action_breakable_surface_update(long, long);
// void simulation_action_breakable_surfaces_delete(void);
// void simulation_action_incident(struct s_incident_networked const *, long *, long);
// public: s_simulation_event_incident_data::s_simulation_event_incident_data(void);
// public: s_incident_networked::s_incident_networked(void);
// public: s_incident_metadata::s_incident_metadata(void);
// public: s_damage_reporting_info::s_damage_reporting_info(void);
// void simulation_action_held_weapon_state_update(long);
// bool construct_weapon_fire_event_data(long, long, bool, unsigned long, float, short, struct s_simulation_action_projectile_fire_result const *, long, struct s_weapon_fire_event_sending_data *);
// void simulation_request_weapon_fire(long, long, bool, unsigned long, float, short, struct s_simulation_action_projectile_fire_result const *, long);
// public: s_weapon_fire_event_sending_data::s_weapon_fire_event_sending_data(void);
// public: s_simulation_weapon_fire_event_data::s_simulation_weapon_fire_event_data(void);
// public: s_aim_assist_targeting_result::s_aim_assist_targeting_result(void);
// void simulation_action_weapon_fire(long, long, bool, unsigned long, float, short, struct s_simulation_action_projectile_fire_result const *, long, bool);
// void simulation_action_weapon_effect(long, union real_point3d const *, long);
// void simulation_action_damage_aftermath(long, struct s_damage_aftermath_result_data const *);
// bool should_send_damage_aftermath_event(long, struct s_damage_aftermath_result_data const *);
// bool damage_aftermath_is_important(long, struct s_damage_aftermath_result_data const *);
// void build_damage_aftermath_event_data(long, struct s_damage_aftermath_result_data const *, struct s_simulation_damage_aftermath_event_data *, long *const);
// public: s_simulation_damage_aftermath_event_data::s_simulation_damage_aftermath_event_data(void);
// void simulation_action_damage_aftermath_exclusive_list(long, struct s_damage_aftermath_result_data const *, long const *, long);
// void simulation_action_damage_section_response(long, long, long, enum e_damage_section_response_type);
// void simulation_action_projectile_attached(long, long, short, union real_point3d const *, struct s_location const *);
// bool construct_projectile_attached_event_data(long, long, short, union real_point3d const *, struct s_location const *, struct s_projectile_attached_event_sending_data *);
// void simulation_request_projectile_attachment(long, long, short, union real_point3d const *, struct s_location const *, struct collision_result const *, float, float, union vector3d const *, bool, bool);
// void build_projectile_object_impact_effect_event_from_collision(struct s_simulation_projectile_object_impact_effect_event_data *, bool, long, float, float, union vector3d const *, struct collision_result const *, bool, long);
// void build_projectile_object_impact_effect_event(struct s_simulation_projectile_object_impact_effect_event_data *, long, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, class c_global_material_type, bool, long, long, bool, bool);
// public: short c_global_material_type::get_raw_material_index(void) const;
// bool collision_result_is_object(struct collision_result const *);
// void simulation_action_projectile_impact_raw(long, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, class c_global_material_type, bool, long, long, bool, bool);
// void simulation_action_projectile_impact(bool, long, float, float, union vector3d const *, struct collision_result const *, bool);
// void simulation_action_projectile_detonate(long, union real_point3d const *, union vector3d const *, union vector3d const *, float, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>, class c_global_material_type, struct s_location const *, long, long, bool, bool, bool);
// public: s_simulation_projectile_detonate_event_data::s_simulation_projectile_detonate_event_data(void);
// void simulation_action_breakable_surface_break(long, long, long, long, union real_point3d const *, struct s_location const *, union vector3d const *);
// void simulation_action_breakable_surface_damage_aoe(struct s_location const *, union real_point3d const *, float);
// void simulation_action_pickup_ammo(long, long, long, long);
// void simulation_action_pickup_equipment(long, long);
// void simulation_action_pickup_powerup(long, long);
// void simulation_action_pickup_weapon(long, long);
// void simulation_action_teleporter_blocked(long);
// void simulation_action_apply_predicted_object(long, long, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// void simulation_action_unit_exit_vehicle(long);
// void simulation_action_unit_debug_teleport(long, union real_point3d const *);
// void simulation_action_unit_board_vehicle(long);
// void simulation_action_unit_grenade_initiate(long, short);
// void simulation_action_unit_equipment_initiate(long, long);
// void simulation_action_unit_melee_initiate(long, long, long, long, long);
// void simulation_action_unit_melee_clang(long, long, long, union real_point3d const *, union vector3d const *);
// void simulation_action_unit_reload(long, bool, bool);
// void simulation_action_unit_interrupt_reload(long, bool, bool, bool);
// void simulation_action_weapon_empty_click(long, long);
// void simulation_request_pickup_equipment(long, long);
// public: s_simulation_biped_pickup_item_request_event_data::s_simulation_biped_pickup_item_request_event_data(void);
// void simulation_request_pickup_grenade(long, long);
// void simulation_request_autopickup_equipment(long, long);
// void simulation_request_autopickup_powerup(long, long);
// void simulation_request_autopickup_grenade(long, long);
// void simulation_request_autopickup_ammo(long, long, long);
// void simulation_request_pickup_weapon(long, long, enum e_weapon_addition_method);
// void simulation_request_put_away_weapon(long, short);
// void simulation_request_drop_weapon(long, short);
// void simulation_request_flip_vehicle(long, long);
// void simulation_request_vehicle_trick(long, long);
// void simulation_request_touch_device(long, long);
// void simulation_action_unit_touch_device(long, long);
// void simulation_action_biped_dodge(long, long, union vector3d const *);
// void simulation_action_unit_update_desired_weapon_set(long);
// void simulation_request_unit_throw_release(long, short, long, union real_point3d const *, union vector3d const *);
// public: s_simulation_biped_throw_release_event_data::s_simulation_biped_throw_release_event_data(void);
// void simulation_request_unit_melee_damage(long, long, long, struct s_unit_player_melee_damage_target const *);
// public: s_simulation_biped_melee_damage_event_data::s_simulation_biped_melee_damage_event_data(void);
// void simulation_request_unit_melee_damage_with_prebuilt_event_data(long, long, struct s_simulation_biped_melee_damage_event_data *);
// void simulation_action_helper_build_melee_damage_event_data(long, long, long, struct s_unit_player_melee_damage_target const *, struct s_simulation_biped_melee_damage_event_data *);
// void damage_reporting_info_build(struct s_damage_reporting_info *, enum e_damage_reporting_type, enum e_damage_reporting_modifier);
// void simulation_request_unit_assassinate(long, long, long, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_simulation_biped_melee_damage_event_data const *);
// void simulation_request_unit_enter_vehicle(long, long, short);
// void simulation_request_unit_exit_vehicle(long);
// void simulation_request_unit_exit_and_detach_vehicle(long);
// void simulation_request_player_boot(long, long);
// void simulation_request_object_refresh(long);
// void simulation_request_player_purchase(long, long, enum e_weapon_purchase_slot);
// void simulation_request_player_loadout(long, long);
// void simulation_request_unit_debug_teleport(long, union real_point3d const *);
// void simulation_equipment_activation(long, enum e_equipment_request_type, bool);
// public: s_simulation_biped_equipment_activation_event_data::s_simulation_biped_equipment_activation_event_data(void);
// void simulation_action_unit_zoom(long, long);
// void simulation_action_player_account_balance_notification(long, long);
// void simulation_set_player_respawn_target_transform(long, union real_point3d const *, union vector3d const *);
// void simulation_set_player_desired_respawn_target_player(long, long, bool);
// void simulation_player_force_base_respawn(long);
// void simulation_request_projectile_supercombine(long);
// void simulation_request_weapon_tether_release(long);
// bool simulation_request_player_attach(long, long);
// void simulation_request_player_detach(long);
// bool simulation_request_actor_create(long, long);
// void simulation_request_actor_delete(long);
// public: class c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver>::operator=(enum e_damage_reporting_type);
// public: c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_damage_reporting_modifier);
// public: c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(enum e_simulation_biped_pickup_item_request_type);
// public: c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>(enum e_equipment_request_type);
// public: c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum e_simulation_object_interpolation_flags) const;
// public: long & s_static_array<long, 31>::operator[]<long>(long);
// public: c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_object_recycling_flags) const;
// public: class c_target_tracking_system const * c_opaque_data<class c_target_tracking_system, 60, 4>::get_const(void) const;
// public: void c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::set(enum e_projectile_flags, bool);
// bool operator!=<enum e_simulation_entity_type>(enum e_simulation_entity_type const &, enum e_none_sentinel const &);
// void object_functor_apply_recursive<class c_dirty_simulation_flags_object_functor>(class c_dirty_simulation_flags_object_functor, long);
// public: void c_dirty_simulation_flags_object_functor::operator()(long) const;
// void simulation_action_object_update_internal<enum e_simulation_object_update_flag>(long, enum e_simulation_object_update_flag);
// void simulation_action_object_update<enum e_simulation_biped_update_flag>(long, enum e_simulation_biped_update_flag);
// public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_biped_update_flag);
// bool struct_is_zeroed<struct s_simulation_projectile_attached_event_data>(struct s_simulation_projectile_attached_event_data const *);
// bool struct_is_zeroed<struct s_simulation_projectile_object_impact_effect_event_data>(struct s_simulation_projectile_object_impact_effect_event_data const *);
// void simulation_action_object_update<enum e_simulation_vehicle_update_flag>(long, enum e_simulation_vehicle_update_flag);
// public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_vehicle_update_flag);
// public: void c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_object_interpolation_flags);
// private: static unsigned char c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_object_interpolation_flags);
// public: void c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_object_recycling_flags);
// private: static unsigned char c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_recycling_flags);
// public: static bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::valid_bit(enum e_projectile_flags);
// private: static unsigned long c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::flag_size_type(enum e_projectile_flags);
// private: static unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_projectile_effect_flag);
// private: static unsigned char c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_suppressed_incident_flags);
// private: static unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_incident_special_kill_type);
// struct s_location * location_invalidate(struct s_location *);

//bool simulation_query_object_placement(struct s_object_placement_data const *)
//{
//    mangled_ppc("?simulation_query_object_placement@@YA_NPBUs_object_placement_data@@@Z");
//};

//bool simulation_object_is_attached_to_distributed_networking(long)
//{
//    mangled_ppc("?simulation_object_is_attached_to_distributed_networking@@YA_NJ@Z");
//};

//bool simulation_query_object_is_predicted(long)
//{
//    mangled_ppc("?simulation_query_object_is_predicted@@YA_NJ@Z");
//};

//bool simulation_query_local_control(long, long)
//{
//    mangled_ppc("?simulation_query_local_control@@YA_NJJ@Z");
//};

//bool simulation_query_local_predictive_control(long, long)
//{
//    mangled_ppc("?simulation_query_local_predictive_control@@YA_NJJ@Z");
//};

//bool simulation_query_control(long, long, long *)
//{
//    mangled_ppc("?simulation_query_control@@YA_NJJPAJ@Z");
//};

//bool simulation_query_predictive_event(long, long, long *)
//{
//    mangled_ppc("?simulation_query_predictive_event@@YA_NJJPAJ@Z");
//};

//void simulation_action_game_engine_globals_create(void)
//{
//    mangled_ppc("?simulation_action_game_engine_globals_create@@YAXXZ");
//};

//void simulation_action_game_engine_globals_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_game_engine_globals_update@@YAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_game_engine_globals_force_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_game_engine_globals_force_update@@YAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_game_engine_globals_delete(void)
//{
//    mangled_ppc("?simulation_action_game_engine_globals_delete@@YAXXZ");
//};

//void simulation_action_game_statborg_create(long)
//{
//    mangled_ppc("?simulation_action_game_statborg_create@@YAXJ@Z");
//};

//void simulation_action_game_statborg_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_game_statborg_update@@YAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_game_statborg_delete(long)
//{
//    mangled_ppc("?simulation_action_game_statborg_delete@@YAXJ@Z");
//};

//void simulation_action_debug_globals_create(void)
//{
//    mangled_ppc("?simulation_action_debug_globals_create@@YAXXZ");
//};

//void simulation_action_debug_globals_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_debug_globals_update@@YAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_debug_globals_delete(void)
//{
//    mangled_ppc("?simulation_action_debug_globals_delete@@YAXXZ");
//};

//void simulation_action_game_ai_create(void)
//{
//    mangled_ppc("?simulation_action_game_ai_create@@YAXXZ");
//};

//void simulation_action_game_ai_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_game_ai_update@@YAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_game_ai_delete(void)
//{
//    mangled_ppc("?simulation_action_game_ai_delete@@YAXXZ");
//};

//void simulation_action_game_map_variant_create_for_chunk(long)
//{
//    mangled_ppc("?simulation_action_game_map_variant_create_for_chunk@@YAXJ@Z");
//};

//public: void c_map_variant::set_chunk_simulation_object_glue_index(long, long)
//{
//    mangled_ppc("?set_chunk_simulation_object_glue_index@c_map_variant@@QAAXJJ@Z");
//};

//public: long c_map_variant::get_chunk_simulation_object_glue_index(long)
//{
//    mangled_ppc("?get_chunk_simulation_object_glue_index@c_map_variant@@QAAJJ@Z");
//};

//void simulation_action_game_map_variant_create_all(void)
//{
//    mangled_ppc("?simulation_action_game_map_variant_create_all@@YAXXZ");
//};

//void simulation_action_game_map_variant_update(long, unsigned __int64)
//{
//    mangled_ppc("?simulation_action_game_map_variant_update@@YAXJ_K@Z");
//};

//void simulation_action_game_map_variant_update_internal(long, unsigned __int64, bool)
//{
//    mangled_ppc("?simulation_action_game_map_variant_update_internal@@YAXJ_K_N@Z");
//};

//void simulation_action_game_map_variant_update_all_properties(long)
//{
//    mangled_ppc("?simulation_action_game_map_variant_update_all_properties@@YAXJ@Z");
//};

//void simulation_action_game_map_variant_force_update(long, unsigned __int64)
//{
//    mangled_ppc("?simulation_action_game_map_variant_force_update@@YAXJ_K@Z");
//};

//void simulation_action_game_map_variant_delete(void)
//{
//    mangled_ppc("?simulation_action_game_map_variant_delete@@YAXXZ");
//};

//void simulation_action_game_engine_player_create(short)
//{
//    mangled_ppc("?simulation_action_game_engine_player_create@@YAXF@Z");
//};

//long game_engine_player_entity_index_from_player_absolute_index(long)
//{
//    mangled_ppc("?game_engine_player_entity_index_from_player_absolute_index@@YAJJ@Z");
//};

//void simulation_action_game_engine_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_game_engine_player_update@@YAXFV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_game_engine_player_force_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?simulation_action_game_engine_player_force_update@@YAXFV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//void simulation_action_game_engine_player_delete(short)
//{
//    mangled_ppc("?simulation_action_game_engine_player_delete@@YAXF@Z");
//};

//void simulation_action_object_create(long)
//{
//    mangled_ppc("?simulation_action_object_create@@YAXJ@Z");
//};

//public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_object_update_flag)
//{
//    mangled_ppc("??0c_simulation_object_update_flags@@QAA@JW4e_simulation_object_update_flag@@@Z");
//};

//public: c_dirty_simulation_flags_object_functor::c_dirty_simulation_flags_object_functor(class c_simulation_object_update_flags)
//{
//    mangled_ppc("??0c_dirty_simulation_flags_object_functor@@QAA@Vc_simulation_object_update_flags@@@Z");
//};

//void simulation_action_object_recapture_creation_data(long)
//{
//    mangled_ppc("?simulation_action_object_recapture_creation_data@@YAXJ@Z");
//};

//void simulation_action_object_create_build_entity_types(long, long, long, long *, enum e_simulation_entity_type *, long *)
//{
//    mangled_ppc("?simulation_action_object_create_build_entity_types@@YAXJJJPAJPAW4e_simulation_entity_type@@0@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_object_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_object_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_biped_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_biped_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_item_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_item_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_projectile_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_projectile_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_weapon_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_weapon_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_generic_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_generic_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_device_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_device_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_breakable_surface_group_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_breakable_surface_group_update_flag@@@Z");
//};

//public: void c_simulation_object_update_flags::set_flag(long, enum e_simulation_vehicle_update_flag)
//{
//    mangled_ppc("?set_flag@c_simulation_object_update_flags@@QAAXJW4e_simulation_vehicle_update_flag@@@Z");
//};

//private: enum e_simulation_entity_type c_simulation_object_update_flags::get_simulation_entity_type(long)
//{
//    mangled_ppc("?get_simulation_entity_type@c_simulation_object_update_flags@@AAA?AW4e_simulation_entity_type@@J@Z");
//};

//void simulation_action_object_update(long, class c_simulation_object_update_flags)
//{
//    mangled_ppc("?simulation_action_object_update@@YAXJVc_simulation_object_update_flags@@@Z");
//};

//void simulation_action_object_update_internal(long, class c_simulation_object_update_flags)
//{
//    mangled_ppc("?simulation_action_object_update_internal@@YAXJVc_simulation_object_update_flags@@@Z");
//};

//void simulation_action_object_force_update(long, class c_simulation_object_update_flags)
//{
//    mangled_ppc("?simulation_action_object_force_update@@YAXJVc_simulation_object_update_flags@@@Z");
//};

//void simulation_action_object_delete(long)
//{
//    mangled_ppc("?simulation_action_object_delete@@YAXJ@Z");
//};

//void simulation_action_object_update_multiplayer_properties(long, bool)
//{
//    mangled_ppc("?simulation_action_object_update_multiplayer_properties@@YAXJ_N@Z");
//};

//void simulation_action_actor_create(long)
//{
//    mangled_ppc("?simulation_action_actor_create@@YAXJ@Z");
//};

//void simulation_action_actor_died(long)
//{
//    mangled_ppc("?simulation_action_actor_died@@YAXJ@Z");
//};

//void simulation_action_breakable_surfaces_create(void)
//{
//    mangled_ppc("?simulation_action_breakable_surfaces_create@@YAXXZ");
//};

//public: c_breakable_surface_group_handle::c_breakable_surface_group_handle(void)
//{
//    mangled_ppc("??0c_breakable_surface_group_handle@@QAA@XZ");
//};

//public: c_breakable_surface_group_handle::~c_breakable_surface_group_handle(void)
//{
//    mangled_ppc("??1c_breakable_surface_group_handle@@QAA@XZ");
//};

//public: long c_breakable_surface_group_handle::get_raw_handle(void) const
//{
//    mangled_ppc("?get_raw_handle@c_breakable_surface_group_handle@@QBAJXZ");
//};

//void simulation_action_breakable_surface_update(long, long)
//{
//    mangled_ppc("?simulation_action_breakable_surface_update@@YAXJJ@Z");
//};

//void simulation_action_breakable_surfaces_delete(void)
//{
//    mangled_ppc("?simulation_action_breakable_surfaces_delete@@YAXXZ");
//};

//void simulation_action_incident(struct s_incident_networked const *, long *, long)
//{
//    mangled_ppc("?simulation_action_incident@@YAXPBUs_incident_networked@@PAJJ@Z");
//};

//public: s_simulation_event_incident_data::s_simulation_event_incident_data(void)
//{
//    mangled_ppc("??0s_simulation_event_incident_data@@QAA@XZ");
//};

//public: s_incident_networked::s_incident_networked(void)
//{
//    mangled_ppc("??0s_incident_networked@@QAA@XZ");
//};

//public: s_incident_metadata::s_incident_metadata(void)
//{
//    mangled_ppc("??0s_incident_metadata@@QAA@XZ");
//};

//public: s_damage_reporting_info::s_damage_reporting_info(void)
//{
//    mangled_ppc("??0s_damage_reporting_info@@QAA@XZ");
//};

//void simulation_action_held_weapon_state_update(long)
//{
//    mangled_ppc("?simulation_action_held_weapon_state_update@@YAXJ@Z");
//};

//bool construct_weapon_fire_event_data(long, long, bool, unsigned long, float, short, struct s_simulation_action_projectile_fire_result const *, long, struct s_weapon_fire_event_sending_data *)
//{
//    mangled_ppc("?construct_weapon_fire_event_data@@YA_NJJ_NKMFPBUs_simulation_action_projectile_fire_result@@JPAUs_weapon_fire_event_sending_data@@@Z");
//};

//void simulation_request_weapon_fire(long, long, bool, unsigned long, float, short, struct s_simulation_action_projectile_fire_result const *, long)
//{
//    mangled_ppc("?simulation_request_weapon_fire@@YAXJJ_NKMFPBUs_simulation_action_projectile_fire_result@@J@Z");
//};

//public: s_weapon_fire_event_sending_data::s_weapon_fire_event_sending_data(void)
//{
//    mangled_ppc("??0s_weapon_fire_event_sending_data@@QAA@XZ");
//};

//public: s_simulation_weapon_fire_event_data::s_simulation_weapon_fire_event_data(void)
//{
//    mangled_ppc("??0s_simulation_weapon_fire_event_data@@QAA@XZ");
//};

//public: s_aim_assist_targeting_result::s_aim_assist_targeting_result(void)
//{
//    mangled_ppc("??0s_aim_assist_targeting_result@@QAA@XZ");
//};

//void simulation_action_weapon_fire(long, long, bool, unsigned long, float, short, struct s_simulation_action_projectile_fire_result const *, long, bool)
//{
//    mangled_ppc("?simulation_action_weapon_fire@@YAXJJ_NKMFPBUs_simulation_action_projectile_fire_result@@J0@Z");
//};

//void simulation_action_weapon_effect(long, union real_point3d const *, long)
//{
//    mangled_ppc("?simulation_action_weapon_effect@@YAXJPBTreal_point3d@@J@Z");
//};

//void simulation_action_damage_aftermath(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?simulation_action_damage_aftermath@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//bool should_send_damage_aftermath_event(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?should_send_damage_aftermath_event@@YA_NJPBUs_damage_aftermath_result_data@@@Z");
//};

//bool damage_aftermath_is_important(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?damage_aftermath_is_important@@YA_NJPBUs_damage_aftermath_result_data@@@Z");
//};

//void build_damage_aftermath_event_data(long, struct s_damage_aftermath_result_data const *, struct s_simulation_damage_aftermath_event_data *, long *const)
//{
//    mangled_ppc("?build_damage_aftermath_event_data@@YAXJPBUs_damage_aftermath_result_data@@PAUs_simulation_damage_aftermath_event_data@@QAJ@Z");
//};

//public: s_simulation_damage_aftermath_event_data::s_simulation_damage_aftermath_event_data(void)
//{
//    mangled_ppc("??0s_simulation_damage_aftermath_event_data@@QAA@XZ");
//};

//void simulation_action_damage_aftermath_exclusive_list(long, struct s_damage_aftermath_result_data const *, long const *, long)
//{
//    mangled_ppc("?simulation_action_damage_aftermath_exclusive_list@@YAXJPBUs_damage_aftermath_result_data@@PBJJ@Z");
//};

//void simulation_action_damage_section_response(long, long, long, enum e_damage_section_response_type)
//{
//    mangled_ppc("?simulation_action_damage_section_response@@YAXJJJW4e_damage_section_response_type@@@Z");
//};

//void simulation_action_projectile_attached(long, long, short, union real_point3d const *, struct s_location const *)
//{
//    mangled_ppc("?simulation_action_projectile_attached@@YAXJJFPBTreal_point3d@@PBUs_location@@@Z");
//};

//bool construct_projectile_attached_event_data(long, long, short, union real_point3d const *, struct s_location const *, struct s_projectile_attached_event_sending_data *)
//{
//    mangled_ppc("?construct_projectile_attached_event_data@@YA_NJJFPBTreal_point3d@@PBUs_location@@PAUs_projectile_attached_event_sending_data@@@Z");
//};

//void simulation_request_projectile_attachment(long, long, short, union real_point3d const *, struct s_location const *, struct collision_result const *, float, float, union vector3d const *, bool, bool)
//{
//    mangled_ppc("?simulation_request_projectile_attachment@@YAXJJFPBTreal_point3d@@PBUs_location@@PBUcollision_result@@MMPBTvector3d@@_N4@Z");
//};

//void build_projectile_object_impact_effect_event_from_collision(struct s_simulation_projectile_object_impact_effect_event_data *, bool, long, float, float, union vector3d const *, struct collision_result const *, bool, long)
//{
//    mangled_ppc("?build_projectile_object_impact_effect_event_from_collision@@YAXPAUs_simulation_projectile_object_impact_effect_event_data@@_NJMMPBTvector3d@@PBUcollision_result@@1J@Z");
//};

//void build_projectile_object_impact_effect_event(struct s_simulation_projectile_object_impact_effect_event_data *, long, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, class c_global_material_type, bool, long, long, bool, bool)
//{
//    mangled_ppc("?build_projectile_object_impact_effect_event@@YAXPAUs_simulation_projectile_object_impact_effect_event_data@@JMMPBTvector3d@@PBTreal_point3d@@1Vc_global_material_type@@_NJJ44@Z");
//};

//public: short c_global_material_type::get_raw_material_index(void) const
//{
//    mangled_ppc("?get_raw_material_index@c_global_material_type@@QBAFXZ");
//};

//bool collision_result_is_object(struct collision_result const *)
//{
//    mangled_ppc("?collision_result_is_object@@YA_NPBUcollision_result@@@Z");
//};

//void simulation_action_projectile_impact_raw(long, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, class c_global_material_type, bool, long, long, bool, bool)
//{
//    mangled_ppc("?simulation_action_projectile_impact_raw@@YAXJMMPBTvector3d@@PBTreal_point3d@@0Vc_global_material_type@@_NJJ33@Z");
//};

//void simulation_action_projectile_impact(bool, long, float, float, union vector3d const *, struct collision_result const *, bool)
//{
//    mangled_ppc("?simulation_action_projectile_impact@@YAX_NJMMPBTvector3d@@PBUcollision_result@@0@Z");
//};

//void simulation_action_projectile_detonate(long, union real_point3d const *, union vector3d const *, union vector3d const *, float, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>, class c_global_material_type, struct s_location const *, long, long, bool, bool, bool)
//{
//    mangled_ppc("?simulation_action_projectile_detonate@@YAXJPBTreal_point3d@@PBTvector3d@@1MV?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@Vc_global_material_type@@PBUs_location@@JJ_N55@Z");
//};

//public: s_simulation_projectile_detonate_event_data::s_simulation_projectile_detonate_event_data(void)
//{
//    mangled_ppc("??0s_simulation_projectile_detonate_event_data@@QAA@XZ");
//};

//void simulation_action_breakable_surface_break(long, long, long, long, union real_point3d const *, struct s_location const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_action_breakable_surface_break@@YAXJJJJPBTreal_point3d@@PBUs_location@@PBTvector3d@@@Z");
//};

//void simulation_action_breakable_surface_damage_aoe(struct s_location const *, union real_point3d const *, float)
//{
//    mangled_ppc("?simulation_action_breakable_surface_damage_aoe@@YAXPBUs_location@@PBTreal_point3d@@M@Z");
//};

//void simulation_action_pickup_ammo(long, long, long, long)
//{
//    mangled_ppc("?simulation_action_pickup_ammo@@YAXJJJJ@Z");
//};

//void simulation_action_pickup_equipment(long, long)
//{
//    mangled_ppc("?simulation_action_pickup_equipment@@YAXJJ@Z");
//};

//void simulation_action_pickup_powerup(long, long)
//{
//    mangled_ppc("?simulation_action_pickup_powerup@@YAXJJ@Z");
//};

//void simulation_action_pickup_weapon(long, long)
//{
//    mangled_ppc("?simulation_action_pickup_weapon@@YAXJJ@Z");
//};

//void simulation_action_teleporter_blocked(long)
//{
//    mangled_ppc("?simulation_action_teleporter_blocked@@YAXJ@Z");
//};

//void simulation_action_apply_predicted_object(long, long, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_action_apply_predicted_object@@YAXJJPBTreal_point3d@@PBTvector3d@@111@Z");
//};

//void simulation_action_unit_exit_vehicle(long)
//{
//    mangled_ppc("?simulation_action_unit_exit_vehicle@@YAXJ@Z");
//};

//void simulation_action_unit_debug_teleport(long, union real_point3d const *)
//{
//    mangled_ppc("?simulation_action_unit_debug_teleport@@YAXJPBTreal_point3d@@@Z");
//};

//void simulation_action_unit_board_vehicle(long)
//{
//    mangled_ppc("?simulation_action_unit_board_vehicle@@YAXJ@Z");
//};

//void simulation_action_unit_grenade_initiate(long, short)
//{
//    mangled_ppc("?simulation_action_unit_grenade_initiate@@YAXJF@Z");
//};

//void simulation_action_unit_equipment_initiate(long, long)
//{
//    mangled_ppc("?simulation_action_unit_equipment_initiate@@YAXJJ@Z");
//};

//void simulation_action_unit_melee_initiate(long, long, long, long, long)
//{
//    mangled_ppc("?simulation_action_unit_melee_initiate@@YAXJJJJJ@Z");
//};

//void simulation_action_unit_melee_clang(long, long, long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_action_unit_melee_clang@@YAXJJJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//void simulation_action_unit_reload(long, bool, bool)
//{
//    mangled_ppc("?simulation_action_unit_reload@@YAXJ_N0@Z");
//};

//void simulation_action_unit_interrupt_reload(long, bool, bool, bool)
//{
//    mangled_ppc("?simulation_action_unit_interrupt_reload@@YAXJ_N00@Z");
//};

//void simulation_action_weapon_empty_click(long, long)
//{
//    mangled_ppc("?simulation_action_weapon_empty_click@@YAXJJ@Z");
//};

//void simulation_request_pickup_equipment(long, long)
//{
//    mangled_ppc("?simulation_request_pickup_equipment@@YAXJJ@Z");
//};

//public: s_simulation_biped_pickup_item_request_event_data::s_simulation_biped_pickup_item_request_event_data(void)
//{
//    mangled_ppc("??0s_simulation_biped_pickup_item_request_event_data@@QAA@XZ");
//};

//void simulation_request_pickup_grenade(long, long)
//{
//    mangled_ppc("?simulation_request_pickup_grenade@@YAXJJ@Z");
//};

//void simulation_request_autopickup_equipment(long, long)
//{
//    mangled_ppc("?simulation_request_autopickup_equipment@@YAXJJ@Z");
//};

//void simulation_request_autopickup_powerup(long, long)
//{
//    mangled_ppc("?simulation_request_autopickup_powerup@@YAXJJ@Z");
//};

//void simulation_request_autopickup_grenade(long, long)
//{
//    mangled_ppc("?simulation_request_autopickup_grenade@@YAXJJ@Z");
//};

//void simulation_request_autopickup_ammo(long, long, long)
//{
//    mangled_ppc("?simulation_request_autopickup_ammo@@YAXJJJ@Z");
//};

//void simulation_request_pickup_weapon(long, long, enum e_weapon_addition_method)
//{
//    mangled_ppc("?simulation_request_pickup_weapon@@YAXJJW4e_weapon_addition_method@@@Z");
//};

//void simulation_request_put_away_weapon(long, short)
//{
//    mangled_ppc("?simulation_request_put_away_weapon@@YAXJF@Z");
//};

//void simulation_request_drop_weapon(long, short)
//{
//    mangled_ppc("?simulation_request_drop_weapon@@YAXJF@Z");
//};

//void simulation_request_flip_vehicle(long, long)
//{
//    mangled_ppc("?simulation_request_flip_vehicle@@YAXJJ@Z");
//};

//void simulation_request_vehicle_trick(long, long)
//{
//    mangled_ppc("?simulation_request_vehicle_trick@@YAXJJ@Z");
//};

//void simulation_request_touch_device(long, long)
//{
//    mangled_ppc("?simulation_request_touch_device@@YAXJJ@Z");
//};

//void simulation_action_unit_touch_device(long, long)
//{
//    mangled_ppc("?simulation_action_unit_touch_device@@YAXJJ@Z");
//};

//void simulation_action_biped_dodge(long, long, union vector3d const *)
//{
//    mangled_ppc("?simulation_action_biped_dodge@@YAXJJPBTvector3d@@@Z");
//};

//void simulation_action_unit_update_desired_weapon_set(long)
//{
//    mangled_ppc("?simulation_action_unit_update_desired_weapon_set@@YAXJ@Z");
//};

//void simulation_request_unit_throw_release(long, short, long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_request_unit_throw_release@@YAXJFJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//public: s_simulation_biped_throw_release_event_data::s_simulation_biped_throw_release_event_data(void)
//{
//    mangled_ppc("??0s_simulation_biped_throw_release_event_data@@QAA@XZ");
//};

//void simulation_request_unit_melee_damage(long, long, long, struct s_unit_player_melee_damage_target const *)
//{
//    mangled_ppc("?simulation_request_unit_melee_damage@@YAXJJJPBUs_unit_player_melee_damage_target@@@Z");
//};

//public: s_simulation_biped_melee_damage_event_data::s_simulation_biped_melee_damage_event_data(void)
//{
//    mangled_ppc("??0s_simulation_biped_melee_damage_event_data@@QAA@XZ");
//};

//void simulation_request_unit_melee_damage_with_prebuilt_event_data(long, long, struct s_simulation_biped_melee_damage_event_data *)
//{
//    mangled_ppc("?simulation_request_unit_melee_damage_with_prebuilt_event_data@@YAXJJPAUs_simulation_biped_melee_damage_event_data@@@Z");
//};

//void simulation_action_helper_build_melee_damage_event_data(long, long, long, struct s_unit_player_melee_damage_target const *, struct s_simulation_biped_melee_damage_event_data *)
//{
//    mangled_ppc("?simulation_action_helper_build_melee_damage_event_data@@YAXJJJPBUs_unit_player_melee_damage_target@@PAUs_simulation_biped_melee_damage_event_data@@@Z");
//};

//void damage_reporting_info_build(struct s_damage_reporting_info *, enum e_damage_reporting_type, enum e_damage_reporting_modifier)
//{
//    mangled_ppc("?damage_reporting_info_build@@YAXPAUs_damage_reporting_info@@W4e_damage_reporting_type@@W4e_damage_reporting_modifier@@@Z");
//};

//void simulation_request_unit_assassinate(long, long, long, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_simulation_biped_melee_damage_event_data const *)
//{
//    mangled_ppc("?simulation_request_unit_assassinate@@YAXJJJPBTreal_point3d@@PBTvector3d@@1PBUs_simulation_biped_melee_damage_event_data@@@Z");
//};

//void simulation_request_unit_enter_vehicle(long, long, short)
//{
//    mangled_ppc("?simulation_request_unit_enter_vehicle@@YAXJJF@Z");
//};

//void simulation_request_unit_exit_vehicle(long)
//{
//    mangled_ppc("?simulation_request_unit_exit_vehicle@@YAXJ@Z");
//};

//void simulation_request_unit_exit_and_detach_vehicle(long)
//{
//    mangled_ppc("?simulation_request_unit_exit_and_detach_vehicle@@YAXJ@Z");
//};

//void simulation_request_player_boot(long, long)
//{
//    mangled_ppc("?simulation_request_player_boot@@YAXJJ@Z");
//};

//void simulation_request_object_refresh(long)
//{
//    mangled_ppc("?simulation_request_object_refresh@@YAXJ@Z");
//};

//void simulation_request_player_purchase(long, long, enum e_weapon_purchase_slot)
//{
//    mangled_ppc("?simulation_request_player_purchase@@YAXJJW4e_weapon_purchase_slot@@@Z");
//};

//void simulation_request_player_loadout(long, long)
//{
//    mangled_ppc("?simulation_request_player_loadout@@YAXJJ@Z");
//};

//void simulation_request_unit_debug_teleport(long, union real_point3d const *)
//{
//    mangled_ppc("?simulation_request_unit_debug_teleport@@YAXJPBTreal_point3d@@@Z");
//};

//void simulation_equipment_activation(long, enum e_equipment_request_type, bool)
//{
//    mangled_ppc("?simulation_equipment_activation@@YAXJW4e_equipment_request_type@@_N@Z");
//};

//public: s_simulation_biped_equipment_activation_event_data::s_simulation_biped_equipment_activation_event_data(void)
//{
//    mangled_ppc("??0s_simulation_biped_equipment_activation_event_data@@QAA@XZ");
//};

//void simulation_action_unit_zoom(long, long)
//{
//    mangled_ppc("?simulation_action_unit_zoom@@YAXJJ@Z");
//};

//void simulation_action_player_account_balance_notification(long, long)
//{
//    mangled_ppc("?simulation_action_player_account_balance_notification@@YAXJJ@Z");
//};

//void simulation_set_player_respawn_target_transform(long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_set_player_respawn_target_transform@@YAXJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//void simulation_set_player_desired_respawn_target_player(long, long, bool)
//{
//    mangled_ppc("?simulation_set_player_desired_respawn_target_player@@YAXJJ_N@Z");
//};

//void simulation_player_force_base_respawn(long)
//{
//    mangled_ppc("?simulation_player_force_base_respawn@@YAXJ@Z");
//};

//void simulation_request_projectile_supercombine(long)
//{
//    mangled_ppc("?simulation_request_projectile_supercombine@@YAXJ@Z");
//};

//void simulation_request_weapon_tether_release(long)
//{
//    mangled_ppc("?simulation_request_weapon_tether_release@@YAXJ@Z");
//};

//bool simulation_request_player_attach(long, long)
//{
//    mangled_ppc("?simulation_request_player_attach@@YA_NJJ@Z");
//};

//void simulation_request_player_detach(long)
//{
//    mangled_ppc("?simulation_request_player_detach@@YAXJ@Z");
//};

//bool simulation_request_actor_create(long, long)
//{
//    mangled_ppc("?simulation_request_actor_create@@YA_NJJ@Z");
//};

//void simulation_request_actor_delete(long)
//{
//    mangled_ppc("?simulation_request_actor_delete@@YAXJ@Z");
//};

//public: class c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver>::operator=(enum e_damage_reporting_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@QAAAAV0@W4e_damage_reporting_type@@@Z");
//};

//public: c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_damage_reporting_modifier@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_damage_reporting_modifier, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_damage_reporting_modifier)
//{
//    mangled_ppc("??0?$c_enum@W4e_damage_reporting_modifier@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_damage_reporting_modifier@@@Z");
//};

//public: c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_biped_pickup_item_request_type@@E$0A@$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_biped_pickup_item_request_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(enum e_simulation_biped_pickup_item_request_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_biped_pickup_item_request_type@@E$0A@$00Us_default_enum_string_resolver@@@@QAA@W4e_simulation_biped_pickup_item_request_type@@@Z");
//};

//public: c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_equipment_request_type@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_equipment_request_type, char, 0, 2, struct s_default_enum_string_resolver>(enum e_equipment_request_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_equipment_request_type@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_equipment_request_type@@@Z");
//};

//public: c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum e_simulation_object_interpolation_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_simulation_object_interpolation_flags@@E$07Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_object_interpolation_flags@@@Z");
//};

//public: long & s_static_array<long, 31>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BP@@@QAAAAJJ@Z");
//};

//public: c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_object_recycling_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_object_recycling_flags@@@Z");
//};

//public: class c_target_tracking_system const * c_opaque_data<class c_target_tracking_system, 60, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_opaque_data@Vc_target_tracking_system@@$0DM@$03@@QBAPBVc_target_tracking_system@@XZ");
//};

//public: void c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::set(enum e_projectile_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QAAXW4e_projectile_flags@@_N@Z");
//};

//bool operator!=<enum e_simulation_entity_type>(enum e_simulation_entity_type const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_simulation_entity_type@@@@YA_NABW4e_simulation_entity_type@@ABW4e_none_sentinel@@@Z");
//};

//void object_functor_apply_recursive<class c_dirty_simulation_flags_object_functor>(class c_dirty_simulation_flags_object_functor, long)
//{
//    mangled_ppc("??$object_functor_apply_recursive@Vc_dirty_simulation_flags_object_functor@@@@YAXVc_dirty_simulation_flags_object_functor@@J@Z");
//};

//public: void c_dirty_simulation_flags_object_functor::operator()(long) const
//{
//    mangled_ppc("??Rc_dirty_simulation_flags_object_functor@@QBAXJ@Z");
//};

//void simulation_action_object_update_internal<enum e_simulation_object_update_flag>(long, enum e_simulation_object_update_flag)
//{
//    mangled_ppc("??$simulation_action_object_update_internal@W4e_simulation_object_update_flag@@@@YAXJW4e_simulation_object_update_flag@@@Z");
//};

//void simulation_action_object_update<enum e_simulation_biped_update_flag>(long, enum e_simulation_biped_update_flag)
//{
//    mangled_ppc("??$simulation_action_object_update@W4e_simulation_biped_update_flag@@@@YAXJW4e_simulation_biped_update_flag@@@Z");
//};

//public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_biped_update_flag)
//{
//    mangled_ppc("??0c_simulation_object_update_flags@@QAA@JW4e_simulation_biped_update_flag@@@Z");
//};

//bool struct_is_zeroed<struct s_simulation_projectile_attached_event_data>(struct s_simulation_projectile_attached_event_data const *)
//{
//    mangled_ppc("??$struct_is_zeroed@Us_simulation_projectile_attached_event_data@@@@YA_NPBUs_simulation_projectile_attached_event_data@@@Z");
//};

//bool struct_is_zeroed<struct s_simulation_projectile_object_impact_effect_event_data>(struct s_simulation_projectile_object_impact_effect_event_data const *)
//{
//    mangled_ppc("??$struct_is_zeroed@Us_simulation_projectile_object_impact_effect_event_data@@@@YA_NPBUs_simulation_projectile_object_impact_effect_event_data@@@Z");
//};

//void simulation_action_object_update<enum e_simulation_vehicle_update_flag>(long, enum e_simulation_vehicle_update_flag)
//{
//    mangled_ppc("??$simulation_action_object_update@W4e_simulation_vehicle_update_flag@@@@YAXJW4e_simulation_vehicle_update_flag@@@Z");
//};

//public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_vehicle_update_flag)
//{
//    mangled_ppc("??0c_simulation_object_update_flags@@QAA@JW4e_simulation_vehicle_update_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_object_interpolation_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_simulation_object_interpolation_flags@@E$07Us_default_enum_string_resolver@@@@SA_NW4e_simulation_object_interpolation_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_object_interpolation_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_simulation_object_interpolation_flags@@E$07Us_default_enum_string_resolver@@@@CAEW4e_simulation_object_interpolation_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_object_recycling_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_object_recycling_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_recycling_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_object_recycling_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::valid_bit(enum e_projectile_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@SA_NW4e_projectile_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::flag_size_type(enum e_projectile_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@CAKW4e_projectile_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_projectile_effect_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@CAEW4e_simulation_projectile_effect_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_suppressed_incident_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_suppressed_incident_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_incident_special_kill_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_incident_special_kill_type@@@Z");
//};

//struct s_location * location_invalidate(struct s_location *)
//{
//    mangled_ppc("?location_invalidate@@YAPAUs_location@@PAU1@@Z");
//};

