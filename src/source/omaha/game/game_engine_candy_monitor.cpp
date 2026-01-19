/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool debug_objects_spawn_timers; // "?debug_objects_spawn_timers@@3_NA"

// void game_engine_register_object(long);
// void game_engine_unregister_map_variant_object(long);
// void game_engine_unregister_object(long);
// void game_engine_candy_monitor_prepare_for_promotion_to_simulation_authority(void);
// void game_engine_candy_monitor_debug_dump_state_to_disk(void);
// long upload_game_engine_candy_monitor_dump_start(long, struct s_file_reference *);
// void game_engine_candy_monitor_manager_debug_render(void);
// public: void c_candy_spawner::initialize(void);
// public: void c_candy_spawner::initialize(long);
// public: void c_candy_spawner::update(void);
// public: bool c_candy_spawner::respawn_timer_starts_on_disturbance(void) const;
// public: bool c_candy_spawner::respawn_timer_starts_on_death(void) const;
// public: long c_candy_spawner::get_last_object_spawned_index(void) const;
// public: short c_candy_spawner::get_respawn_timer_seconds(void) const;
// public: bool c_candy_spawner::monitoring_something(void) const;
// public: long c_candy_monitor::get_spawned_object_index(void) const;
// public: bool c_candy_monitor::disturbed_from_initial_placement(void) const;
// public: void c_candy_spawner::respawn_timer_update(void);
// public: bool c_candy_spawner::spawn_object(bool);
// public: void c_candy_spawner::debug_render(void) const;
// public: void c_candy_monitor::initialize(long);
// public: void c_candy_monitor::update(void);
// public: short c_candy_monitor::get_abandoned_seconds(void) const;
// public: void c_candy_monitor::set_disturbed_from_initial_placement(bool);
// public: bool c_candy_monitor::monitoring_something(void) const;
// public: void c_candy_monitor::abandoned_timer_update(void);
// public: void c_candy_monitor::abandoned_timer_reset(void);
// public: void c_candy_monitor::delete_object(bool);
// public: void c_candy_monitor::debug_render(void) const;
// public: void c_multiplayer_candy_monitor_manager::initialize_for_new_map(void);
// public: static void c_multiplayer_candy_monitor_manager::initialize_for_new_round(void);
// public: void c_multiplayer_candy_monitor_manager::dispose_from_old_round(void);
// public: void c_multiplayer_candy_monitor_manager::map_reset(void);
// public: void c_multiplayer_candy_monitor_manager::update(void);
// public: void c_multiplayer_candy_monitor_manager::debug_render(void);
// public: void c_multiplayer_candy_monitor_manager::monitor_object(long, long);
// public: void c_multiplayer_candy_monitor_manager::detach_object(long);
// public: void c_candy_spawner::set_last_spawned_object_index(long);
// public: static long c_multiplayer_candy_monitor_manager::get_candy_monitor_object_definition_index(long);
// public: long c_multiplayer_candy_monitor_manager::get_active_object_count(long, long);
// public: bool c_multiplayer_candy_monitor_manager::quotas_permit_spawn(long, bool *);
// public: void c_multiplayer_candy_monitor_manager::try_to_spawn_new_object(long, class c_candy_spawner *);
// public: short c_candy_spawner::get_map_variant_index(void) const;
// public: class c_candy_spawner * c_multiplayer_candy_monitor_manager::spawner_try_and_get(long);
// public: class c_candy_monitor * c_multiplayer_candy_monitor_manager::monitor_try_and_get(long);
// public: void c_multiplayer_candy_monitor_manager::debug_dump_state_to_disk(void) const;
// long object_get_respawn_time_seconds(long);
// long scenario_object_get_abandonment_time_seconds(long);
// bool scenario_object_is_significant(enum e_object_type, long);
// bool game_engine_object_is_dead(long);
// bool game_engine_object_is_item_in_inventory(long);
// bool game_engine_object_is_vehicle_with_passengers(long);
// bool game_engine_object_has_been_disturbed(long);
// bool game_engine_object_has_been_abandoned(long);
// bool game_engine_object_being_used(long);
// bool game_engine_desires_garbage_collection(void);
// bool game_engine_player_is_nearby(union real_point3d const *, float);
// bool game_engine_any_player_nearby_and_looking_at_sphere(union real_point3d const *, float, float);
// bool game_engine_player_is_looking_at_sphere(long, union real_point3d const *, float);
// bool game_engine_vehicle_has_passengers(long);
// bool game_engine_object_is_useless_weapon(long);
// public: static long s_static_array<class c_candy_spawner, 715>::get_count(void);
// public: static long s_static_array<class c_candy_monitor, 715>::get_count(void);
// public: bool c_enum_no_init<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_multiplayer_object_spawn_timer_type) const;
// public: void c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::test(enum c_candy_spawner::e_candy_spawner_flags) const;
// public: void c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::set(enum c_candy_spawner::e_candy_spawner_flags, bool);
// public: class c_candy_spawner & s_static_array<class c_candy_spawner, 715>::operator[]<long>(long);
// public: class c_candy_monitor & s_static_array<class c_candy_monitor, 715>::operator[]<long>(long);
// public: class c_candy_spawner const & s_static_array<class c_candy_spawner, 715>::operator[]<long>(long) const;
// public: class c_candy_monitor const & s_static_array<class c_candy_monitor, 715>::operator[]<long>(long) const;
// public: static bool c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::valid_bit(enum c_candy_spawner::e_candy_spawner_flags);
// private: static char c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum c_candy_spawner::e_candy_spawner_flags);
// public: static bool s_static_array<class c_candy_spawner, 715>::valid<long>(long);
// public: static bool s_static_array<class c_candy_monitor, 715>::valid<long>(long);

//void game_engine_register_object(long)
//{
//    mangled_ppc("?game_engine_register_object@@YAXJ@Z");
//};

//void game_engine_unregister_map_variant_object(long)
//{
//    mangled_ppc("?game_engine_unregister_map_variant_object@@YAXJ@Z");
//};

//void game_engine_unregister_object(long)
//{
//    mangled_ppc("?game_engine_unregister_object@@YAXJ@Z");
//};

//void game_engine_candy_monitor_prepare_for_promotion_to_simulation_authority(void)
//{
//    mangled_ppc("?game_engine_candy_monitor_prepare_for_promotion_to_simulation_authority@@YAXXZ");
//};

//void game_engine_candy_monitor_debug_dump_state_to_disk(void)
//{
//    mangled_ppc("?game_engine_candy_monitor_debug_dump_state_to_disk@@YAXXZ");
//};

//long upload_game_engine_candy_monitor_dump_start(long, struct s_file_reference *)
//{
//    mangled_ppc("?upload_game_engine_candy_monitor_dump_start@@YAJJPAUs_file_reference@@@Z");
//};

//void game_engine_candy_monitor_manager_debug_render(void)
//{
//    mangled_ppc("?game_engine_candy_monitor_manager_debug_render@@YAXXZ");
//};

//public: void c_candy_spawner::initialize(void)
//{
//    mangled_ppc("?initialize@c_candy_spawner@@QAAXXZ");
//};

//public: void c_candy_spawner::initialize(long)
//{
//    mangled_ppc("?initialize@c_candy_spawner@@QAAXJ@Z");
//};

//public: void c_candy_spawner::update(void)
//{
//    mangled_ppc("?update@c_candy_spawner@@QAAXXZ");
//};

//public: bool c_candy_spawner::respawn_timer_starts_on_disturbance(void) const
//{
//    mangled_ppc("?respawn_timer_starts_on_disturbance@c_candy_spawner@@QBA_NXZ");
//};

//public: bool c_candy_spawner::respawn_timer_starts_on_death(void) const
//{
//    mangled_ppc("?respawn_timer_starts_on_death@c_candy_spawner@@QBA_NXZ");
//};

//public: long c_candy_spawner::get_last_object_spawned_index(void) const
//{
//    mangled_ppc("?get_last_object_spawned_index@c_candy_spawner@@QBAJXZ");
//};

//public: short c_candy_spawner::get_respawn_timer_seconds(void) const
//{
//    mangled_ppc("?get_respawn_timer_seconds@c_candy_spawner@@QBAFXZ");
//};

//public: bool c_candy_spawner::monitoring_something(void) const
//{
//    mangled_ppc("?monitoring_something@c_candy_spawner@@QBA_NXZ");
//};

//public: long c_candy_monitor::get_spawned_object_index(void) const
//{
//    mangled_ppc("?get_spawned_object_index@c_candy_monitor@@QBAJXZ");
//};

//public: bool c_candy_monitor::disturbed_from_initial_placement(void) const
//{
//    mangled_ppc("?disturbed_from_initial_placement@c_candy_monitor@@QBA_NXZ");
//};

//public: void c_candy_spawner::respawn_timer_update(void)
//{
//    mangled_ppc("?respawn_timer_update@c_candy_spawner@@QAAXXZ");
//};

//public: bool c_candy_spawner::spawn_object(bool)
//{
//    mangled_ppc("?spawn_object@c_candy_spawner@@QAA_N_N@Z");
//};

//public: void c_candy_spawner::debug_render(void) const
//{
//    mangled_ppc("?debug_render@c_candy_spawner@@QBAXXZ");
//};

//public: void c_candy_monitor::initialize(long)
//{
//    mangled_ppc("?initialize@c_candy_monitor@@QAAXJ@Z");
//};

//public: void c_candy_monitor::update(void)
//{
//    mangled_ppc("?update@c_candy_monitor@@QAAXXZ");
//};

//public: short c_candy_monitor::get_abandoned_seconds(void) const
//{
//    mangled_ppc("?get_abandoned_seconds@c_candy_monitor@@QBAFXZ");
//};

//public: void c_candy_monitor::set_disturbed_from_initial_placement(bool)
//{
//    mangled_ppc("?set_disturbed_from_initial_placement@c_candy_monitor@@QAAX_N@Z");
//};

//public: bool c_candy_monitor::monitoring_something(void) const
//{
//    mangled_ppc("?monitoring_something@c_candy_monitor@@QBA_NXZ");
//};

//public: void c_candy_monitor::abandoned_timer_update(void)
//{
//    mangled_ppc("?abandoned_timer_update@c_candy_monitor@@QAAXXZ");
//};

//public: void c_candy_monitor::abandoned_timer_reset(void)
//{
//    mangled_ppc("?abandoned_timer_reset@c_candy_monitor@@QAAXXZ");
//};

//public: void c_candy_monitor::delete_object(bool)
//{
//    mangled_ppc("?delete_object@c_candy_monitor@@QAAX_N@Z");
//};

//public: void c_candy_monitor::debug_render(void) const
//{
//    mangled_ppc("?debug_render@c_candy_monitor@@QBAXXZ");
//};

//public: void c_multiplayer_candy_monitor_manager::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_multiplayer_candy_monitor_manager@@QAAXXZ");
//};

//public: static void c_multiplayer_candy_monitor_manager::initialize_for_new_round(void)
//{
//    mangled_ppc("?initialize_for_new_round@c_multiplayer_candy_monitor_manager@@SAXXZ");
//};

//public: void c_multiplayer_candy_monitor_manager::dispose_from_old_round(void)
//{
//    mangled_ppc("?dispose_from_old_round@c_multiplayer_candy_monitor_manager@@QAAXXZ");
//};

//public: void c_multiplayer_candy_monitor_manager::map_reset(void)
//{
//    mangled_ppc("?map_reset@c_multiplayer_candy_monitor_manager@@QAAXXZ");
//};

//public: void c_multiplayer_candy_monitor_manager::update(void)
//{
//    mangled_ppc("?update@c_multiplayer_candy_monitor_manager@@QAAXXZ");
//};

//public: void c_multiplayer_candy_monitor_manager::debug_render(void)
//{
//    mangled_ppc("?debug_render@c_multiplayer_candy_monitor_manager@@QAAXXZ");
//};

//public: void c_multiplayer_candy_monitor_manager::monitor_object(long, long)
//{
//    mangled_ppc("?monitor_object@c_multiplayer_candy_monitor_manager@@QAAXJJ@Z");
//};

//public: void c_multiplayer_candy_monitor_manager::detach_object(long)
//{
//    mangled_ppc("?detach_object@c_multiplayer_candy_monitor_manager@@QAAXJ@Z");
//};

//public: void c_candy_spawner::set_last_spawned_object_index(long)
//{
//    mangled_ppc("?set_last_spawned_object_index@c_candy_spawner@@QAAXJ@Z");
//};

//public: static long c_multiplayer_candy_monitor_manager::get_candy_monitor_object_definition_index(long)
//{
//    mangled_ppc("?get_candy_monitor_object_definition_index@c_multiplayer_candy_monitor_manager@@SAJJ@Z");
//};

//public: long c_multiplayer_candy_monitor_manager::get_active_object_count(long, long)
//{
//    mangled_ppc("?get_active_object_count@c_multiplayer_candy_monitor_manager@@QAAJJJ@Z");
//};

//public: bool c_multiplayer_candy_monitor_manager::quotas_permit_spawn(long, bool *)
//{
//    mangled_ppc("?quotas_permit_spawn@c_multiplayer_candy_monitor_manager@@QAA_NJPA_N@Z");
//};

//public: void c_multiplayer_candy_monitor_manager::try_to_spawn_new_object(long, class c_candy_spawner *)
//{
//    mangled_ppc("?try_to_spawn_new_object@c_multiplayer_candy_monitor_manager@@QAAXJPAVc_candy_spawner@@@Z");
//};

//public: short c_candy_spawner::get_map_variant_index(void) const
//{
//    mangled_ppc("?get_map_variant_index@c_candy_spawner@@QBAFXZ");
//};

//public: class c_candy_spawner * c_multiplayer_candy_monitor_manager::spawner_try_and_get(long)
//{
//    mangled_ppc("?spawner_try_and_get@c_multiplayer_candy_monitor_manager@@QAAPAVc_candy_spawner@@J@Z");
//};

//public: class c_candy_monitor * c_multiplayer_candy_monitor_manager::monitor_try_and_get(long)
//{
//    mangled_ppc("?monitor_try_and_get@c_multiplayer_candy_monitor_manager@@QAAPAVc_candy_monitor@@J@Z");
//};

//public: void c_multiplayer_candy_monitor_manager::debug_dump_state_to_disk(void) const
//{
//    mangled_ppc("?debug_dump_state_to_disk@c_multiplayer_candy_monitor_manager@@QBAXXZ");
//};

//long object_get_respawn_time_seconds(long)
//{
//    mangled_ppc("?object_get_respawn_time_seconds@@YAJJ@Z");
//};

//long scenario_object_get_abandonment_time_seconds(long)
//{
//    mangled_ppc("?scenario_object_get_abandonment_time_seconds@@YAJJ@Z");
//};

//bool scenario_object_is_significant(enum e_object_type, long)
//{
//    mangled_ppc("?scenario_object_is_significant@@YA_NW4e_object_type@@J@Z");
//};

//bool game_engine_object_is_dead(long)
//{
//    mangled_ppc("?game_engine_object_is_dead@@YA_NJ@Z");
//};

//bool game_engine_object_is_item_in_inventory(long)
//{
//    mangled_ppc("?game_engine_object_is_item_in_inventory@@YA_NJ@Z");
//};

//bool game_engine_object_is_vehicle_with_passengers(long)
//{
//    mangled_ppc("?game_engine_object_is_vehicle_with_passengers@@YA_NJ@Z");
//};

//bool game_engine_object_has_been_disturbed(long)
//{
//    mangled_ppc("?game_engine_object_has_been_disturbed@@YA_NJ@Z");
//};

//bool game_engine_object_has_been_abandoned(long)
//{
//    mangled_ppc("?game_engine_object_has_been_abandoned@@YA_NJ@Z");
//};

//bool game_engine_object_being_used(long)
//{
//    mangled_ppc("?game_engine_object_being_used@@YA_NJ@Z");
//};

//bool game_engine_desires_garbage_collection(void)
//{
//    mangled_ppc("?game_engine_desires_garbage_collection@@YA_NXZ");
//};

//bool game_engine_player_is_nearby(union real_point3d const *, float)
//{
//    mangled_ppc("?game_engine_player_is_nearby@@YA_NPBTreal_point3d@@M@Z");
//};

//bool game_engine_any_player_nearby_and_looking_at_sphere(union real_point3d const *, float, float)
//{
//    mangled_ppc("?game_engine_any_player_nearby_and_looking_at_sphere@@YA_NPBTreal_point3d@@MM@Z");
//};

//bool game_engine_player_is_looking_at_sphere(long, union real_point3d const *, float)
//{
//    mangled_ppc("?game_engine_player_is_looking_at_sphere@@YA_NJPBTreal_point3d@@M@Z");
//};

//bool game_engine_vehicle_has_passengers(long)
//{
//    mangled_ppc("?game_engine_vehicle_has_passengers@@YA_NJ@Z");
//};

//bool game_engine_object_is_useless_weapon(long)
//{
//    mangled_ppc("?game_engine_object_is_useless_weapon@@YA_NJ@Z");
//};

//public: static long s_static_array<class c_candy_spawner, 715>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_candy_spawner@@$0CML@@@SAJXZ");
//};

//public: static long s_static_array<class c_candy_monitor, 715>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_candy_monitor@@$0CML@@@SAJXZ");
//};

//public: bool c_enum_no_init<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_multiplayer_object_spawn_timer_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_multiplayer_object_spawn_timer_type@@D$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_multiplayer_object_spawn_timer_type@@@Z");
//};

//public: void c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_candy_spawner_flags@c_candy_spawner@@D$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::test(enum c_candy_spawner::e_candy_spawner_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_candy_spawner_flags@c_candy_spawner@@D$03Us_default_enum_string_resolver@@@@QBA_NW4e_candy_spawner_flags@c_candy_spawner@@@Z");
//};

//public: void c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::set(enum c_candy_spawner::e_candy_spawner_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_candy_spawner_flags@c_candy_spawner@@D$03Us_default_enum_string_resolver@@@@QAAXW4e_candy_spawner_flags@c_candy_spawner@@_N@Z");
//};

//public: class c_candy_spawner & s_static_array<class c_candy_spawner, 715>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_candy_spawner@@$0CML@@@QAAAAVc_candy_spawner@@J@Z");
//};

//public: class c_candy_monitor & s_static_array<class c_candy_monitor, 715>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_candy_monitor@@$0CML@@@QAAAAVc_candy_monitor@@J@Z");
//};

//public: class c_candy_spawner const & s_static_array<class c_candy_spawner, 715>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_candy_spawner@@$0CML@@@QBAABVc_candy_spawner@@J@Z");
//};

//public: class c_candy_monitor const & s_static_array<class c_candy_monitor, 715>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_candy_monitor@@$0CML@@@QBAABVc_candy_monitor@@J@Z");
//};

//public: static bool c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::valid_bit(enum c_candy_spawner::e_candy_spawner_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_candy_spawner_flags@c_candy_spawner@@D$03Us_default_enum_string_resolver@@@@SA_NW4e_candy_spawner_flags@c_candy_spawner@@@Z");
//};

//private: static char c_flags_no_init<enum c_candy_spawner::e_candy_spawner_flags, char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum c_candy_spawner::e_candy_spawner_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_candy_spawner_flags@c_candy_spawner@@D$03Us_default_enum_string_resolver@@@@CADW4e_candy_spawner_flags@c_candy_spawner@@@Z");
//};

//public: static bool s_static_array<class c_candy_spawner, 715>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_candy_spawner@@$0CML@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_candy_monitor, 715>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_candy_monitor@@$0CML@@@SA_NJ@Z");
//};

