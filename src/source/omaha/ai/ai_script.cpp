/* ---------- headers */

#include "omaha\ai\ai_script.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_string<264>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0BAI@@@2JB"
// public: static long const s_static_string<264>::k_element_count; // "?k_element_count@?$s_static_string@$0BAI@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 20>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0BE@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 20>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0BE@@@2JB"
// except_record_838D6978; // "except_record_838D6978"
// except_record_838D6F90; // "except_record_838D6F90"
// char const *const k_actor_reference_string; // "?k_actor_reference_string@@3PBDB"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 20>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0BE@@@QAAXXZ@4JC"
// struct ai_script_context global_script_context; // "?global_script_context@@3Uai_script_context@@A"

// void ai_script_initialize(void);
// void ai_script_dispose(void);
// void ai_script_initialize_for_new_map(void);
// void ai_script_dispose_from_old_map(void);
// bool ai_index_from_string(struct scenario *, char const *, long *);
// void ai_index_to_string(long, struct scenario *, char *, long);
// long object_index_from_ai(long, enum e_hs_type);
// long ai_index_actor_get_actor_index(long);
// long ai_index_get_actor(long);
// bool squad_member_of_ai_index(long, long);
// bool actor_member_of_ai_index(long, long);
// long ai_player_get_vehicle_squad(long);
// bool ai_scripting_carrying_player(long);
// bool ai_scripting_player_needs_vehicle(long);
// bool ai_scripting_player_any_needs_vehicle(void);
// bool ai_scripting_player_in_vehicle(long);
// short ai_scripting_vehicle_count(long);
// void ai_index_squad_iterator_new(long, struct ai_index_squad_iterator *);
// struct squad_datum * ai_index_squad_iterator_next(struct ai_index_squad_iterator *);
// void ai_index_actor_iterator_new(long, struct ai_index_actor_iterator *);
// struct actor_datum * ai_index_actor_iterator_next(struct ai_index_actor_iterator *);
// bool ai_handle_script_verification(bool);
// void ai_fragments_handle_rebuild_hs_source(long, char *);
// bool ai_script_process_fragment(struct s_file_reference *, char const *, char const *);
// void ai_performances_handle_rebuild_hs_source(long, char *);
// void performance_scripting_aggregate_lines(struct s_scenario_performance *, struct s_file_reference *);
// void performance_scripting_emit_fragment(struct s_scenario_performance_line_script_fragment *, struct s_file_reference *, long, bool);
// void performance_scripting_sanitize_line(char const *, long, class c_static_string<264> *);
// long object_list_from_ai_reference(long);
// long object_get_ai(long);
// long ai_scripting_ai_index_from_spawn_formation(long, long);
// void ai_scripting_cannot_die(long, bool);
// bool ai_scripting_vitality_pinned(long);
// void ai_scripting_set_clump_index(long, short);
// void ai_scripting_set_clump_perception_range(float);
// void ai_scripting_set_clump_targeting_group(short);
// void ai_scripting_place(long);
// void ai_scripting_place2(long, short);
// void ai_scripting_place_in_limbo(long);
// void ai_scripting_place_in_limbo2(long, short);
// void ai_scripting_place_in_vehicle(long, long);
// long ai_scripting_get_unit(long);
// long ai_scripting_get_object(long);
// long ai_scripting_get_squad(long);
// long ai_scripting_get_turret_ai(long, short);
// long ai_scripting_random_point(long, float, float, float);
// long ai_scripting_nearest_point(long, long);
// long ai_scripting_point_count(long);
// long ai_scripting_point_set_get_point(long, short);
// void ai_scripting_resurrect(long);
// void ai_scripting_kill(long);
// void ai_scripting_kill_silent(long);
// void ai_scripting_kill_no_statistics(long);
// void ai_scripting_erase(long);
// void ai_script_erase_squad_vehicles(short);
// void ai_scripting_erase_all(void);
// void ai_scripting_erase_inactive(long, short);
// void ai_scripting_disposable(long, bool);
// void ai_scripting_flood_disperse(long, long);
// void ai_scripting_stuck_flying_enable_kill(long, bool);
// void ai_scripting_set_stuck_velocity_threshold(long, float);
// void ai_scripting_survival_cleanup(long, bool, bool);
// void ai_scripting_deselect(void);
// void ai_scripting_select_squad(long);
// void ai_scripting_set_weapon_up(long, bool);
// void ai_scripting_set_deaf(long, bool);
// void ai_scripting_set_blind(long, bool);
// void ai_scripting_set_fireteam_absorber(long, bool);
// void ai_magically_see(long, long);
// void ai_magically_see_object(long, long);
// void ai_scripting_set_activity(long, long);
// void ai_scripting_set_active_camo(long, bool);
// void ai_scripting_suppress_combat(long, bool);
// void ai_scripting_grunt_kamikaze(long);
// void ai_scripting_engineer_explode(long);
// long ai_scripting_swarm_count(long);
// long ai_scripting_count_internal(long, short, long *, float *);
// long ai_scripting_nonswarm_count(long);
// long ai_scripting_living_count(long);
// long ai_scripting_in_vehicle_count(long);
// long ai_scripting_body_count(long);
// float ai_scripting_living_fraction(long);
// float ai_scripting_strength(long);
// bool ai_scripting_is_attacking(long);
// short ai_fighting_count(long);
// void ai_scripting_migrate_infantry(long, long);
// void ai_scripting_migrate(long, long);
// void ai_scripting_migrate_internal(long, long, bool, bool, bool);
// void ai_scripting_squad_enumerate_immigrants(long, bool);
// void ai_scripting_migrate_forever(long, long);
// void ai_scripting_migrate_by_unit(long, long);
// void ai_scripting_migrate_by_unit_internal(long, long, bool, bool);
// void ai_scripting_migrate_and_speak(long, long, char const *);
// void ai_scripting_allegiance(enum e_campaign_team, enum e_campaign_team);
// void ai_scripting_allegiance_remove(enum e_campaign_team, enum e_campaign_team);
// void ai_scripting_allegiance_break(enum e_campaign_team, enum e_campaign_team);
// bool ai_scripting_allegiance_broken(enum e_campaign_team, enum e_campaign_team);
// short ai_enter_squad_vehicles(long);
// short ai_assign_actors_to_seats(long const *, short, struct unit_seat_source const *, short, bool);
// void ai_vehicle_enter(long, long, long);
// void ai_vehicle_enter_internal(long, long, long, bool);
// void ai_vehicle_enter2(long, long);
// void ai_vehicle_enter_immediate(long, long, long);
// void ai_vehicle_enter_immediate2(long, long);
// void ai_scripting_exit_vehicle(long, long);
// void ai_scripting_exit_vehicle2(long);
// void ai_scripting_braindead(long, bool);
// void ai_scripting_braindead_by_unit(long, bool);
// void ai_scripting_disregard_orphans(long);
// void ai_scripting_ignore(long, bool);
// void ai_scripting_prefer_target(long, bool);
// void ai_scripting_prefer_target_team(long, enum e_campaign_team);
// void ai_scripting_prefer_target_ai(long, long, bool);
// void ai_scripting_set_targeting_group(long, short);
// void ai_scripting_set_targeting_group2(long, short, bool);
// void ai_scripting_teleport_to_spawn_point_if_outside_bsp(long);
// void ai_scripting_teleport(long, long);
// void ai_scripting_bring_forward(long, float);
// void ai_scripting_renew(long);
// void ai_scripting_force_active(long, bool);
// void ai_scripting_exit_limbo(long);
// void ai_scripting_force_active_by_unit(long, bool);
// void ai_scripting_reconnect(void);
// void ai_scripting_playfight(long, bool);
// void ai_scripting_berserk(long, bool);
// void ai_scripting_set_team(long, enum e_campaign_team);
// void ai_scripting_allow_dormant(long, bool);
// short ai_spawn_count(long);
// void ai_scripting_verify_tags(void);
// long ai_scripting_squad_group_get_squad(long, short);
// short ai_scripting_squad_group_get_squad_count(long);
// void ai_scripting_set_object_ownership(long, enum e_campaign_team);
// struct ai_targetable_object * find_targetable_object(long);
// void ai_scripting_set_object_targeting_bias(long, float);
// void ai_scripting_set_object_targeting_ranges(long, float, float);
// void ai_scripting_enable_object_vehicle_targeting(long, bool);
// void ai_scripting_enable_object_grenade_attack(long, bool);
// void ai_scripting_abort_activity(long);
// bool ai_vehicle_overturned(long);
// void ai_vehicle_flip(long);
// long ai_vehicle_get(long);
// long ai_vehicle_get_from_spawn_point(long);
// long ai_index_get_vehicle(long, short);
// long ai_vehicle_get_from_squad(long, short);
// short ai_vehicle_get_squad_count(long);
// bool ai_vehicle_reserve_seat(long, long, bool);
// bool ai_vehicle_reserve(long, bool);
// short ai_scripting_combat_status(long);
// void ai_scripting_set_combat_status(long, short);
// short ai_play_line(long, long);
// short play_line_compile_actor_list(long, long *, short, short);
// bool play_line_compare(long, long, void const *);
// short ai_play_line_at_player(long, long);
// short ai_play_line_on_object(long, long);
// short ai_play_line_on_object_for_team(long, long, short);
// short ai_play_line_on_point_set(long, long, short);
// short ai_play_line_on_point_set2(long, long, short, long);
// short point_distance(struct cs_point const *);
// bool point_compare(long, long, void *);
// bool ai_scripting_wall_lean(long);
// bool ai_scripting_pathfinding_generate_all(void);
// bool flock_start(long);
// bool flock_stop(long);
// bool ai_scripting_flock_create(long);
// bool ai_scripting_flock_delete(long);
// bool ai_scripting_flock_destroy(long);
// bool ai_scripting_flock_definition_set(long, long);
// void ai_scripting_flock_unperch(long);
// void ai_scripting_flock_set_targeting_group(long, short);
// void ai_scripting_flock_destination_set_enabled(long, long, bool);
// void ai_scripting_flock_destination_set_position(long, long, long);
// void ai_scripting_flock_destination_copy_position(long, long, long);
// void ai_scripting_flock_change_boid_desination(long, long, long);
// void ai_scripting_drop_ai(char const *, char const *);
// bool ai_scripting_set_spawn_point_weapons(long, char const *, char const *);
// bool ai_scripting_set_spawn_point_vehicle(long, char const *);
// long ai_scripting_get_runtime_squad_cell_count(char const *);
// long ai_scripting_add_cell_to_runtime_squad(char const *, char const *);
// char const * ai_scripting_get_current_map_name(void);
// bool ai_scripting_clear_runtime_pointsets(char const *);
// bool ai_scripting_clear_runtime_squads(void);
// bool ai_scripting_create_runtime_squad(char const *);
// void ai_queue_cs(long, short);
// void ai_stack_cs(long, short);
// void ai_attach_cs(long, short);
// void ai_reserve(long, long, short);
// void ai_reserve2(long, long, bool, short);
// void ai_release(long, long);
// void ai_release_all(long);
// bool ai_cast(long, long, bool, short, long);
// bool ai_cast(long, long, bool, short, long, long);
// bool ai_cast(long, long, bool, short, long, long, long);
// bool ai_cast(long, long, bool, short, long, long, long, long);
// bool ai_cast(long, long, bool, short, long, long, long, long, long);
// bool ai_cast(long, long, bool, short, long, long, long, long, long, long);
// bool ai_cast(long, long, bool, short, long, long, long, long, long, long, long);
// void ai_scripting_render_paths_all(void);
// bool ai_index_player_nearby(long, float);
// bool cs_command_script_running(long, long);
// bool cs_command_script_attached(long, long);
// short cs_number_queued(long);
// void ai_scripting_place_internal(long, short, bool);
// void ai_scripting_kill_internal(long, bool, bool);
// void ai_scripting_dont_do_avoidance(long, bool);
// void ai_scripting_selected_actor_jump(float, float);
// void ai_scripting_set_highlight(long, bool);
// void ai_scripting_dump_behavior_tree(bool);
// void ai_recursive_tree_dump(short, char const *, bool);
// public: enum e_scenario_performance_script_fragment_placement c_enum_no_init<enum e_scenario_performance_script_fragment_placement, short, 0, 2, struct s_default_enum_string_resolver>::operator enum e_scenario_performance_script_fragment_placement(void) const;
// public: bool c_enum_no_init<enum e_scenario_performance_script_fragment_placement, short, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_scenario_performance_script_fragment_placement) const;
// public: enum e_scenario_performance_script_fragment_type c_enum_no_init<enum e_scenario_performance_script_fragment_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_scenario_performance_script_fragment_type(void) const;
// public: c_big_flags<20>::c_big_flags<20>(void);
// public: void c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_flock_runtime_destination_flags, bool);
// public: void s_static_string<264>::clear(void);
// public: void s_static_string<264>::set_length(long);
// public: char const * s_static_string<264>::append(char const *);
// public: void s_static_string<264>::null_terminate(void);
// public: long s_static_string<264>::index_of(char const *) const;
// public: bool s_static_string<264>::substring(long, long, class s_static_string<264> *) const;
// public: long s_static_string<264>::length(void) const;
// public: char const * s_static_string<264>::get_string(void) const;
// public: char const * s_static_string<264>::operator char const *(void) const;
// public: c_static_string<264>::c_static_string<264>(char const *);
// public: c_static_string<264>::c_static_string<264>(void);
// public: bool c_big_flags_typed_no_init<long, 20>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 20>::set(long, bool);
// public: c_big_flags_typed<long, 20>::c_big_flags_typed<long, 20>(void);
// bool operator!=<enum e_campaign_team>(enum e_campaign_team const &, enum e_none_sentinel const &);
// int sprintf_s<256>(char (&)[256], char const *, ...);
// public: void s_static_string<264>::set(char const *);
// public: long s_static_string<264>::next_index_of(char const *, long) const;
// public: void c_big_flags_typed_no_init<long, 20>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 20>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 20>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 20>::valid(void) const;
// bool operator==<enum e_campaign_team>(enum e_campaign_team const &, enum e_none_sentinel const &);
// protected: static unsigned long c_big_flags_typed_no_init<long, 20>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 20>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 20>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 20>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 20>::get_mask_of_first_slice_of_chunk_exclusive(long);

//void ai_script_initialize(void)
//{
//    mangled_ppc("?ai_script_initialize@@YAXXZ");
//};

//void ai_script_dispose(void)
//{
//    mangled_ppc("?ai_script_dispose@@YAXXZ");
//};

//void ai_script_initialize_for_new_map(void)
//{
//    mangled_ppc("?ai_script_initialize_for_new_map@@YAXXZ");
//};

//void ai_script_dispose_from_old_map(void)
//{
//    mangled_ppc("?ai_script_dispose_from_old_map@@YAXXZ");
//};

//bool ai_index_from_string(struct scenario *, char const *, long *)
//{
//    mangled_ppc("?ai_index_from_string@@YA_NPAUscenario@@PBDPAJ@Z");
//};

//void ai_index_to_string(long, struct scenario *, char *, long)
//{
//    mangled_ppc("?ai_index_to_string@@YAXJPAUscenario@@PADJ@Z");
//};

//long object_index_from_ai(long, enum e_hs_type)
//{
//    mangled_ppc("?object_index_from_ai@@YAJJW4e_hs_type@@@Z");
//};

//long ai_index_actor_get_actor_index(long)
//{
//    mangled_ppc("?ai_index_actor_get_actor_index@@YAJJ@Z");
//};

//long ai_index_get_actor(long)
//{
//    mangled_ppc("?ai_index_get_actor@@YAJJ@Z");
//};

//bool squad_member_of_ai_index(long, long)
//{
//    mangled_ppc("?squad_member_of_ai_index@@YA_NJJ@Z");
//};

//bool actor_member_of_ai_index(long, long)
//{
//    mangled_ppc("?actor_member_of_ai_index@@YA_NJJ@Z");
//};

//long ai_player_get_vehicle_squad(long)
//{
//    mangled_ppc("?ai_player_get_vehicle_squad@@YAJJ@Z");
//};

//bool ai_scripting_carrying_player(long)
//{
//    mangled_ppc("?ai_scripting_carrying_player@@YA_NJ@Z");
//};

//bool ai_scripting_player_needs_vehicle(long)
//{
//    mangled_ppc("?ai_scripting_player_needs_vehicle@@YA_NJ@Z");
//};

//bool ai_scripting_player_any_needs_vehicle(void)
//{
//    mangled_ppc("?ai_scripting_player_any_needs_vehicle@@YA_NXZ");
//};

//bool ai_scripting_player_in_vehicle(long)
//{
//    mangled_ppc("?ai_scripting_player_in_vehicle@@YA_NJ@Z");
//};

//short ai_scripting_vehicle_count(long)
//{
//    mangled_ppc("?ai_scripting_vehicle_count@@YAFJ@Z");
//};

//void ai_index_squad_iterator_new(long, struct ai_index_squad_iterator *)
//{
//    mangled_ppc("?ai_index_squad_iterator_new@@YAXJPAUai_index_squad_iterator@@@Z");
//};

//struct squad_datum * ai_index_squad_iterator_next(struct ai_index_squad_iterator *)
//{
//    mangled_ppc("?ai_index_squad_iterator_next@@YAPAUsquad_datum@@PAUai_index_squad_iterator@@@Z");
//};

//void ai_index_actor_iterator_new(long, struct ai_index_actor_iterator *)
//{
//    mangled_ppc("?ai_index_actor_iterator_new@@YAXJPAUai_index_actor_iterator@@@Z");
//};

//struct actor_datum * ai_index_actor_iterator_next(struct ai_index_actor_iterator *)
//{
//    mangled_ppc("?ai_index_actor_iterator_next@@YAPAUactor_datum@@PAUai_index_actor_iterator@@@Z");
//};

//bool ai_handle_script_verification(bool)
//{
//    mangled_ppc("?ai_handle_script_verification@@YA_N_N@Z");
//};

//void ai_fragments_handle_rebuild_hs_source(long, char *)
//{
//    mangled_ppc("?ai_fragments_handle_rebuild_hs_source@@YAXJPAD@Z");
//};

//bool ai_script_process_fragment(struct s_file_reference *, char const *, char const *)
//{
//    mangled_ppc("?ai_script_process_fragment@@YA_NPAUs_file_reference@@PBD1@Z");
//};

//void ai_performances_handle_rebuild_hs_source(long, char *)
//{
//    mangled_ppc("?ai_performances_handle_rebuild_hs_source@@YAXJPAD@Z");
//};

//void performance_scripting_aggregate_lines(struct s_scenario_performance *, struct s_file_reference *)
//{
//    mangled_ppc("?performance_scripting_aggregate_lines@@YAXPAUs_scenario_performance@@PAUs_file_reference@@@Z");
//};

//void performance_scripting_emit_fragment(struct s_scenario_performance_line_script_fragment *, struct s_file_reference *, long, bool)
//{
//    mangled_ppc("?performance_scripting_emit_fragment@@YAXPAUs_scenario_performance_line_script_fragment@@PAUs_file_reference@@J_N@Z");
//};

//void performance_scripting_sanitize_line(char const *, long, class c_static_string<264> *)
//{
//    mangled_ppc("?performance_scripting_sanitize_line@@YAXPBDJPAV?$c_static_string@$0BAI@@@@Z");
//};

//long object_list_from_ai_reference(long)
//{
//    mangled_ppc("?object_list_from_ai_reference@@YAJJ@Z");
//};

//long object_get_ai(long)
//{
//    mangled_ppc("?object_get_ai@@YAJJ@Z");
//};

//long ai_scripting_ai_index_from_spawn_formation(long, long)
//{
//    mangled_ppc("?ai_scripting_ai_index_from_spawn_formation@@YAJJJ@Z");
//};

//void ai_scripting_cannot_die(long, bool)
//{
//    mangled_ppc("?ai_scripting_cannot_die@@YAXJ_N@Z");
//};

//bool ai_scripting_vitality_pinned(long)
//{
//    mangled_ppc("?ai_scripting_vitality_pinned@@YA_NJ@Z");
//};

//void ai_scripting_set_clump_index(long, short)
//{
//    mangled_ppc("?ai_scripting_set_clump_index@@YAXJF@Z");
//};

//void ai_scripting_set_clump_perception_range(float)
//{
//    mangled_ppc("?ai_scripting_set_clump_perception_range@@YAXM@Z");
//};

//void ai_scripting_set_clump_targeting_group(short)
//{
//    mangled_ppc("?ai_scripting_set_clump_targeting_group@@YAXF@Z");
//};

//void ai_scripting_place(long)
//{
//    mangled_ppc("?ai_scripting_place@@YAXJ@Z");
//};

//void ai_scripting_place2(long, short)
//{
//    mangled_ppc("?ai_scripting_place2@@YAXJF@Z");
//};

//void ai_scripting_place_in_limbo(long)
//{
//    mangled_ppc("?ai_scripting_place_in_limbo@@YAXJ@Z");
//};

//void ai_scripting_place_in_limbo2(long, short)
//{
//    mangled_ppc("?ai_scripting_place_in_limbo2@@YAXJF@Z");
//};

//void ai_scripting_place_in_vehicle(long, long)
//{
//    mangled_ppc("?ai_scripting_place_in_vehicle@@YAXJJ@Z");
//};

//long ai_scripting_get_unit(long)
//{
//    mangled_ppc("?ai_scripting_get_unit@@YAJJ@Z");
//};

//long ai_scripting_get_object(long)
//{
//    mangled_ppc("?ai_scripting_get_object@@YAJJ@Z");
//};

//long ai_scripting_get_squad(long)
//{
//    mangled_ppc("?ai_scripting_get_squad@@YAJJ@Z");
//};

//long ai_scripting_get_turret_ai(long, short)
//{
//    mangled_ppc("?ai_scripting_get_turret_ai@@YAJJF@Z");
//};

//long ai_scripting_random_point(long, float, float, float)
//{
//    mangled_ppc("?ai_scripting_random_point@@YAJJMMM@Z");
//};

//long ai_scripting_nearest_point(long, long)
//{
//    mangled_ppc("?ai_scripting_nearest_point@@YAJJJ@Z");
//};

//long ai_scripting_point_count(long)
//{
//    mangled_ppc("?ai_scripting_point_count@@YAJJ@Z");
//};

//long ai_scripting_point_set_get_point(long, short)
//{
//    mangled_ppc("?ai_scripting_point_set_get_point@@YAJJF@Z");
//};

//void ai_scripting_resurrect(long)
//{
//    mangled_ppc("?ai_scripting_resurrect@@YAXJ@Z");
//};

//void ai_scripting_kill(long)
//{
//    mangled_ppc("?ai_scripting_kill@@YAXJ@Z");
//};

//void ai_scripting_kill_silent(long)
//{
//    mangled_ppc("?ai_scripting_kill_silent@@YAXJ@Z");
//};

//void ai_scripting_kill_no_statistics(long)
//{
//    mangled_ppc("?ai_scripting_kill_no_statistics@@YAXJ@Z");
//};

//void ai_scripting_erase(long)
//{
//    mangled_ppc("?ai_scripting_erase@@YAXJ@Z");
//};

//void ai_script_erase_squad_vehicles(short)
//{
//    mangled_ppc("?ai_script_erase_squad_vehicles@@YAXF@Z");
//};

//void ai_scripting_erase_all(void)
//{
//    mangled_ppc("?ai_scripting_erase_all@@YAXXZ");
//};

//void ai_scripting_erase_inactive(long, short)
//{
//    mangled_ppc("?ai_scripting_erase_inactive@@YAXJF@Z");
//};

//void ai_scripting_disposable(long, bool)
//{
//    mangled_ppc("?ai_scripting_disposable@@YAXJ_N@Z");
//};

//void ai_scripting_flood_disperse(long, long)
//{
//    mangled_ppc("?ai_scripting_flood_disperse@@YAXJJ@Z");
//};

//void ai_scripting_stuck_flying_enable_kill(long, bool)
//{
//    mangled_ppc("?ai_scripting_stuck_flying_enable_kill@@YAXJ_N@Z");
//};

//void ai_scripting_set_stuck_velocity_threshold(long, float)
//{
//    mangled_ppc("?ai_scripting_set_stuck_velocity_threshold@@YAXJM@Z");
//};

//void ai_scripting_survival_cleanup(long, bool, bool)
//{
//    mangled_ppc("?ai_scripting_survival_cleanup@@YAXJ_N0@Z");
//};

//void ai_scripting_deselect(void)
//{
//    mangled_ppc("?ai_scripting_deselect@@YAXXZ");
//};

//void ai_scripting_select_squad(long)
//{
//    mangled_ppc("?ai_scripting_select_squad@@YAXJ@Z");
//};

//void ai_scripting_set_weapon_up(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_weapon_up@@YAXJ_N@Z");
//};

//void ai_scripting_set_deaf(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_deaf@@YAXJ_N@Z");
//};

//void ai_scripting_set_blind(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_blind@@YAXJ_N@Z");
//};

//void ai_scripting_set_fireteam_absorber(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_fireteam_absorber@@YAXJ_N@Z");
//};

//void ai_magically_see(long, long)
//{
//    mangled_ppc("?ai_magically_see@@YAXJJ@Z");
//};

//void ai_magically_see_object(long, long)
//{
//    mangled_ppc("?ai_magically_see_object@@YAXJJ@Z");
//};

//void ai_scripting_set_activity(long, long)
//{
//    mangled_ppc("?ai_scripting_set_activity@@YAXJJ@Z");
//};

//void ai_scripting_set_active_camo(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_active_camo@@YAXJ_N@Z");
//};

//void ai_scripting_suppress_combat(long, bool)
//{
//    mangled_ppc("?ai_scripting_suppress_combat@@YAXJ_N@Z");
//};

//void ai_scripting_grunt_kamikaze(long)
//{
//    mangled_ppc("?ai_scripting_grunt_kamikaze@@YAXJ@Z");
//};

//void ai_scripting_engineer_explode(long)
//{
//    mangled_ppc("?ai_scripting_engineer_explode@@YAXJ@Z");
//};

//long ai_scripting_swarm_count(long)
//{
//    mangled_ppc("?ai_scripting_swarm_count@@YAJJ@Z");
//};

//long ai_scripting_count_internal(long, short, long *, float *)
//{
//    mangled_ppc("?ai_scripting_count_internal@@YAJJFPAJPAM@Z");
//};

//long ai_scripting_nonswarm_count(long)
//{
//    mangled_ppc("?ai_scripting_nonswarm_count@@YAJJ@Z");
//};

//long ai_scripting_living_count(long)
//{
//    mangled_ppc("?ai_scripting_living_count@@YAJJ@Z");
//};

//long ai_scripting_in_vehicle_count(long)
//{
//    mangled_ppc("?ai_scripting_in_vehicle_count@@YAJJ@Z");
//};

//long ai_scripting_body_count(long)
//{
//    mangled_ppc("?ai_scripting_body_count@@YAJJ@Z");
//};

//float ai_scripting_living_fraction(long)
//{
//    mangled_ppc("?ai_scripting_living_fraction@@YAMJ@Z");
//};

//float ai_scripting_strength(long)
//{
//    mangled_ppc("?ai_scripting_strength@@YAMJ@Z");
//};

//bool ai_scripting_is_attacking(long)
//{
//    mangled_ppc("?ai_scripting_is_attacking@@YA_NJ@Z");
//};

//short ai_fighting_count(long)
//{
//    mangled_ppc("?ai_fighting_count@@YAFJ@Z");
//};

//void ai_scripting_migrate_infantry(long, long)
//{
//    mangled_ppc("?ai_scripting_migrate_infantry@@YAXJJ@Z");
//};

//void ai_scripting_migrate(long, long)
//{
//    mangled_ppc("?ai_scripting_migrate@@YAXJJ@Z");
//};

//void ai_scripting_migrate_internal(long, long, bool, bool, bool)
//{
//    mangled_ppc("?ai_scripting_migrate_internal@@YAXJJ_N00@Z");
//};

//void ai_scripting_squad_enumerate_immigrants(long, bool)
//{
//    mangled_ppc("?ai_scripting_squad_enumerate_immigrants@@YAXJ_N@Z");
//};

//void ai_scripting_migrate_forever(long, long)
//{
//    mangled_ppc("?ai_scripting_migrate_forever@@YAXJJ@Z");
//};

//void ai_scripting_migrate_by_unit(long, long)
//{
//    mangled_ppc("?ai_scripting_migrate_by_unit@@YAXJJ@Z");
//};

//void ai_scripting_migrate_by_unit_internal(long, long, bool, bool)
//{
//    mangled_ppc("?ai_scripting_migrate_by_unit_internal@@YAXJJ_N0@Z");
//};

//void ai_scripting_migrate_and_speak(long, long, char const *)
//{
//    mangled_ppc("?ai_scripting_migrate_and_speak@@YAXJJPBD@Z");
//};

//void ai_scripting_allegiance(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_allegiance@@YAXW4e_campaign_team@@0@Z");
//};

//void ai_scripting_allegiance_remove(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_allegiance_remove@@YAXW4e_campaign_team@@0@Z");
//};

//void ai_scripting_allegiance_break(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_allegiance_break@@YAXW4e_campaign_team@@0@Z");
//};

//bool ai_scripting_allegiance_broken(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_allegiance_broken@@YA_NW4e_campaign_team@@0@Z");
//};

//short ai_enter_squad_vehicles(long)
//{
//    mangled_ppc("?ai_enter_squad_vehicles@@YAFJ@Z");
//};

//short ai_assign_actors_to_seats(long const *, short, struct unit_seat_source const *, short, bool)
//{
//    mangled_ppc("?ai_assign_actors_to_seats@@YAFPBJFPBUunit_seat_source@@F_N@Z");
//};

//void ai_vehicle_enter(long, long, long)
//{
//    mangled_ppc("?ai_vehicle_enter@@YAXJJJ@Z");
//};

//void ai_vehicle_enter_internal(long, long, long, bool)
//{
//    mangled_ppc("?ai_vehicle_enter_internal@@YAXJJJ_N@Z");
//};

//void ai_vehicle_enter2(long, long)
//{
//    mangled_ppc("?ai_vehicle_enter2@@YAXJJ@Z");
//};

//void ai_vehicle_enter_immediate(long, long, long)
//{
//    mangled_ppc("?ai_vehicle_enter_immediate@@YAXJJJ@Z");
//};

//void ai_vehicle_enter_immediate2(long, long)
//{
//    mangled_ppc("?ai_vehicle_enter_immediate2@@YAXJJ@Z");
//};

//void ai_scripting_exit_vehicle(long, long)
//{
//    mangled_ppc("?ai_scripting_exit_vehicle@@YAXJJ@Z");
//};

//void ai_scripting_exit_vehicle2(long)
//{
//    mangled_ppc("?ai_scripting_exit_vehicle2@@YAXJ@Z");
//};

//void ai_scripting_braindead(long, bool)
//{
//    mangled_ppc("?ai_scripting_braindead@@YAXJ_N@Z");
//};

//void ai_scripting_braindead_by_unit(long, bool)
//{
//    mangled_ppc("?ai_scripting_braindead_by_unit@@YAXJ_N@Z");
//};

//void ai_scripting_disregard_orphans(long)
//{
//    mangled_ppc("?ai_scripting_disregard_orphans@@YAXJ@Z");
//};

//void ai_scripting_ignore(long, bool)
//{
//    mangled_ppc("?ai_scripting_ignore@@YAXJ_N@Z");
//};

//void ai_scripting_prefer_target(long, bool)
//{
//    mangled_ppc("?ai_scripting_prefer_target@@YAXJ_N@Z");
//};

//void ai_scripting_prefer_target_team(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_prefer_target_team@@YAXJW4e_campaign_team@@@Z");
//};

//void ai_scripting_prefer_target_ai(long, long, bool)
//{
//    mangled_ppc("?ai_scripting_prefer_target_ai@@YAXJJ_N@Z");
//};

//void ai_scripting_set_targeting_group(long, short)
//{
//    mangled_ppc("?ai_scripting_set_targeting_group@@YAXJF@Z");
//};

//void ai_scripting_set_targeting_group2(long, short, bool)
//{
//    mangled_ppc("?ai_scripting_set_targeting_group2@@YAXJF_N@Z");
//};

//void ai_scripting_teleport_to_spawn_point_if_outside_bsp(long)
//{
//    mangled_ppc("?ai_scripting_teleport_to_spawn_point_if_outside_bsp@@YAXJ@Z");
//};

//void ai_scripting_teleport(long, long)
//{
//    mangled_ppc("?ai_scripting_teleport@@YAXJJ@Z");
//};

//void ai_scripting_bring_forward(long, float)
//{
//    mangled_ppc("?ai_scripting_bring_forward@@YAXJM@Z");
//};

//void ai_scripting_renew(long)
//{
//    mangled_ppc("?ai_scripting_renew@@YAXJ@Z");
//};

//void ai_scripting_force_active(long, bool)
//{
//    mangled_ppc("?ai_scripting_force_active@@YAXJ_N@Z");
//};

//void ai_scripting_exit_limbo(long)
//{
//    mangled_ppc("?ai_scripting_exit_limbo@@YAXJ@Z");
//};

//void ai_scripting_force_active_by_unit(long, bool)
//{
//    mangled_ppc("?ai_scripting_force_active_by_unit@@YAXJ_N@Z");
//};

//void ai_scripting_reconnect(void)
//{
//    mangled_ppc("?ai_scripting_reconnect@@YAXXZ");
//};

//void ai_scripting_playfight(long, bool)
//{
//    mangled_ppc("?ai_scripting_playfight@@YAXJ_N@Z");
//};

//void ai_scripting_berserk(long, bool)
//{
//    mangled_ppc("?ai_scripting_berserk@@YAXJ_N@Z");
//};

//void ai_scripting_set_team(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_set_team@@YAXJW4e_campaign_team@@@Z");
//};

//void ai_scripting_allow_dormant(long, bool)
//{
//    mangled_ppc("?ai_scripting_allow_dormant@@YAXJ_N@Z");
//};

//short ai_spawn_count(long)
//{
//    mangled_ppc("?ai_spawn_count@@YAFJ@Z");
//};

//void ai_scripting_verify_tags(void)
//{
//    mangled_ppc("?ai_scripting_verify_tags@@YAXXZ");
//};

//long ai_scripting_squad_group_get_squad(long, short)
//{
//    mangled_ppc("?ai_scripting_squad_group_get_squad@@YAJJF@Z");
//};

//short ai_scripting_squad_group_get_squad_count(long)
//{
//    mangled_ppc("?ai_scripting_squad_group_get_squad_count@@YAFJ@Z");
//};

//void ai_scripting_set_object_ownership(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_set_object_ownership@@YAXJW4e_campaign_team@@@Z");
//};

//struct ai_targetable_object * find_targetable_object(long)
//{
//    mangled_ppc("?find_targetable_object@@YAPAUai_targetable_object@@J@Z");
//};

//void ai_scripting_set_object_targeting_bias(long, float)
//{
//    mangled_ppc("?ai_scripting_set_object_targeting_bias@@YAXJM@Z");
//};

//void ai_scripting_set_object_targeting_ranges(long, float, float)
//{
//    mangled_ppc("?ai_scripting_set_object_targeting_ranges@@YAXJMM@Z");
//};

//void ai_scripting_enable_object_vehicle_targeting(long, bool)
//{
//    mangled_ppc("?ai_scripting_enable_object_vehicle_targeting@@YAXJ_N@Z");
//};

//void ai_scripting_enable_object_grenade_attack(long, bool)
//{
//    mangled_ppc("?ai_scripting_enable_object_grenade_attack@@YAXJ_N@Z");
//};

//void ai_scripting_abort_activity(long)
//{
//    mangled_ppc("?ai_scripting_abort_activity@@YAXJ@Z");
//};

//bool ai_vehicle_overturned(long)
//{
//    mangled_ppc("?ai_vehicle_overturned@@YA_NJ@Z");
//};

//void ai_vehicle_flip(long)
//{
//    mangled_ppc("?ai_vehicle_flip@@YAXJ@Z");
//};

//long ai_vehicle_get(long)
//{
//    mangled_ppc("?ai_vehicle_get@@YAJJ@Z");
//};

//long ai_vehicle_get_from_spawn_point(long)
//{
//    mangled_ppc("?ai_vehicle_get_from_spawn_point@@YAJJ@Z");
//};

//long ai_index_get_vehicle(long, short)
//{
//    mangled_ppc("?ai_index_get_vehicle@@YAJJF@Z");
//};

//long ai_vehicle_get_from_squad(long, short)
//{
//    mangled_ppc("?ai_vehicle_get_from_squad@@YAJJF@Z");
//};

//short ai_vehicle_get_squad_count(long)
//{
//    mangled_ppc("?ai_vehicle_get_squad_count@@YAFJ@Z");
//};

//bool ai_vehicle_reserve_seat(long, long, bool)
//{
//    mangled_ppc("?ai_vehicle_reserve_seat@@YA_NJJ_N@Z");
//};

//bool ai_vehicle_reserve(long, bool)
//{
//    mangled_ppc("?ai_vehicle_reserve@@YA_NJ_N@Z");
//};

//short ai_scripting_combat_status(long)
//{
//    mangled_ppc("?ai_scripting_combat_status@@YAFJ@Z");
//};

//void ai_scripting_set_combat_status(long, short)
//{
//    mangled_ppc("?ai_scripting_set_combat_status@@YAXJF@Z");
//};

//short ai_play_line(long, long)
//{
//    mangled_ppc("?ai_play_line@@YAFJJ@Z");
//};

//short play_line_compile_actor_list(long, long *, short, short)
//{
//    mangled_ppc("?play_line_compile_actor_list@@YAFJPAJFF@Z");
//};

//bool play_line_compare(long, long, void const *)
//{
//    mangled_ppc("?play_line_compare@@YA_NJJPBX@Z");
//};

//short ai_play_line_at_player(long, long)
//{
//    mangled_ppc("?ai_play_line_at_player@@YAFJJ@Z");
//};

//short ai_play_line_on_object(long, long)
//{
//    mangled_ppc("?ai_play_line_on_object@@YAFJJ@Z");
//};

//short ai_play_line_on_object_for_team(long, long, short)
//{
//    mangled_ppc("?ai_play_line_on_object_for_team@@YAFJJF@Z");
//};

//short ai_play_line_on_point_set(long, long, short)
//{
//    mangled_ppc("?ai_play_line_on_point_set@@YAFJJF@Z");
//};

//short ai_play_line_on_point_set2(long, long, short, long)
//{
//    mangled_ppc("?ai_play_line_on_point_set2@@YAFJJFJ@Z");
//};

//short point_distance(struct cs_point const *)
//{
//    mangled_ppc("?point_distance@@YAFPBUcs_point@@@Z");
//};

//bool point_compare(long, long, void *)
//{
//    mangled_ppc("?point_compare@@YA_NJJPAX@Z");
//};

//bool ai_scripting_wall_lean(long)
//{
//    mangled_ppc("?ai_scripting_wall_lean@@YA_NJ@Z");
//};

//bool ai_scripting_pathfinding_generate_all(void)
//{
//    mangled_ppc("?ai_scripting_pathfinding_generate_all@@YA_NXZ");
//};

//bool flock_start(long)
//{
//    mangled_ppc("?flock_start@@YA_NJ@Z");
//};

//bool flock_stop(long)
//{
//    mangled_ppc("?flock_stop@@YA_NJ@Z");
//};

//bool ai_scripting_flock_create(long)
//{
//    mangled_ppc("?ai_scripting_flock_create@@YA_NJ@Z");
//};

//bool ai_scripting_flock_delete(long)
//{
//    mangled_ppc("?ai_scripting_flock_delete@@YA_NJ@Z");
//};

//bool ai_scripting_flock_destroy(long)
//{
//    mangled_ppc("?ai_scripting_flock_destroy@@YA_NJ@Z");
//};

//bool ai_scripting_flock_definition_set(long, long)
//{
//    mangled_ppc("?ai_scripting_flock_definition_set@@YA_NJJ@Z");
//};

//void ai_scripting_flock_unperch(long)
//{
//    mangled_ppc("?ai_scripting_flock_unperch@@YAXJ@Z");
//};

//void ai_scripting_flock_set_targeting_group(long, short)
//{
//    mangled_ppc("?ai_scripting_flock_set_targeting_group@@YAXJF@Z");
//};

//void ai_scripting_flock_destination_set_enabled(long, long, bool)
//{
//    mangled_ppc("?ai_scripting_flock_destination_set_enabled@@YAXJJ_N@Z");
//};

//void ai_scripting_flock_destination_set_position(long, long, long)
//{
//    mangled_ppc("?ai_scripting_flock_destination_set_position@@YAXJJJ@Z");
//};

//void ai_scripting_flock_destination_copy_position(long, long, long)
//{
//    mangled_ppc("?ai_scripting_flock_destination_copy_position@@YAXJJJ@Z");
//};

//void ai_scripting_flock_change_boid_desination(long, long, long)
//{
//    mangled_ppc("?ai_scripting_flock_change_boid_desination@@YAXJJJ@Z");
//};

//void ai_scripting_drop_ai(char const *, char const *)
//{
//    mangled_ppc("?ai_scripting_drop_ai@@YAXPBD0@Z");
//};

//bool ai_scripting_set_spawn_point_weapons(long, char const *, char const *)
//{
//    mangled_ppc("?ai_scripting_set_spawn_point_weapons@@YA_NJPBD0@Z");
//};

//bool ai_scripting_set_spawn_point_vehicle(long, char const *)
//{
//    mangled_ppc("?ai_scripting_set_spawn_point_vehicle@@YA_NJPBD@Z");
//};

//long ai_scripting_get_runtime_squad_cell_count(char const *)
//{
//    mangled_ppc("?ai_scripting_get_runtime_squad_cell_count@@YAJPBD@Z");
//};

//long ai_scripting_add_cell_to_runtime_squad(char const *, char const *)
//{
//    mangled_ppc("?ai_scripting_add_cell_to_runtime_squad@@YAJPBD0@Z");
//};

//char const * ai_scripting_get_current_map_name(void)
//{
//    mangled_ppc("?ai_scripting_get_current_map_name@@YAPBDXZ");
//};

//bool ai_scripting_clear_runtime_pointsets(char const *)
//{
//    mangled_ppc("?ai_scripting_clear_runtime_pointsets@@YA_NPBD@Z");
//};

//bool ai_scripting_clear_runtime_squads(void)
//{
//    mangled_ppc("?ai_scripting_clear_runtime_squads@@YA_NXZ");
//};

//bool ai_scripting_create_runtime_squad(char const *)
//{
//    mangled_ppc("?ai_scripting_create_runtime_squad@@YA_NPBD@Z");
//};

//void ai_queue_cs(long, short)
//{
//    mangled_ppc("?ai_queue_cs@@YAXJF@Z");
//};

//void ai_stack_cs(long, short)
//{
//    mangled_ppc("?ai_stack_cs@@YAXJF@Z");
//};

//void ai_attach_cs(long, short)
//{
//    mangled_ppc("?ai_attach_cs@@YAXJF@Z");
//};

//void ai_reserve(long, long, short)
//{
//    mangled_ppc("?ai_reserve@@YAXJJF@Z");
//};

//void ai_reserve2(long, long, bool, short)
//{
//    mangled_ppc("?ai_reserve2@@YAXJJ_NF@Z");
//};

//void ai_release(long, long)
//{
//    mangled_ppc("?ai_release@@YAXJJ@Z");
//};

//void ai_release_all(long)
//{
//    mangled_ppc("?ai_release_all@@YAXJ@Z");
//};

//bool ai_cast(long, long, bool, short, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJ@Z");
//};

//bool ai_cast(long, long, bool, short, long, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJJ@Z");
//};

//bool ai_cast(long, long, bool, short, long, long, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJJJ@Z");
//};

//bool ai_cast(long, long, bool, short, long, long, long, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJJJJ@Z");
//};

//bool ai_cast(long, long, bool, short, long, long, long, long, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJJJJJ@Z");
//};

//bool ai_cast(long, long, bool, short, long, long, long, long, long, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJJJJJJ@Z");
//};

//bool ai_cast(long, long, bool, short, long, long, long, long, long, long, long)
//{
//    mangled_ppc("?ai_cast@@YA_NJJ_NFJJJJJJJ@Z");
//};

//void ai_scripting_render_paths_all(void)
//{
//    mangled_ppc("?ai_scripting_render_paths_all@@YAXXZ");
//};

//bool ai_index_player_nearby(long, float)
//{
//    mangled_ppc("?ai_index_player_nearby@@YA_NJM@Z");
//};

//bool cs_command_script_running(long, long)
//{
//    mangled_ppc("?cs_command_script_running@@YA_NJJ@Z");
//};

//bool cs_command_script_attached(long, long)
//{
//    mangled_ppc("?cs_command_script_attached@@YA_NJJ@Z");
//};

//short cs_number_queued(long)
//{
//    mangled_ppc("?cs_number_queued@@YAFJ@Z");
//};

//void ai_scripting_place_internal(long, short, bool)
//{
//    mangled_ppc("?ai_scripting_place_internal@@YAXJF_N@Z");
//};

//void ai_scripting_kill_internal(long, bool, bool)
//{
//    mangled_ppc("?ai_scripting_kill_internal@@YAXJ_N0@Z");
//};

//void ai_scripting_dont_do_avoidance(long, bool)
//{
//    mangled_ppc("?ai_scripting_dont_do_avoidance@@YAXJ_N@Z");
//};

//void ai_scripting_selected_actor_jump(float, float)
//{
//    mangled_ppc("?ai_scripting_selected_actor_jump@@YAXMM@Z");
//};

//void ai_scripting_set_highlight(long, bool)
//{
//    mangled_ppc("?ai_scripting_set_highlight@@YAXJ_N@Z");
//};

//void ai_scripting_dump_behavior_tree(bool)
//{
//    mangled_ppc("?ai_scripting_dump_behavior_tree@@YAX_N@Z");
//};

//void ai_recursive_tree_dump(short, char const *, bool)
//{
//    mangled_ppc("?ai_recursive_tree_dump@@YAXFPBD_N@Z");
//};

//public: enum e_scenario_performance_script_fragment_placement c_enum_no_init<enum e_scenario_performance_script_fragment_placement, short, 0, 2, struct s_default_enum_string_resolver>::operator enum e_scenario_performance_script_fragment_placement(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_scenario_performance_script_fragment_placement@@F$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_scenario_performance_script_fragment_placement@@XZ");
//};

//public: bool c_enum_no_init<enum e_scenario_performance_script_fragment_placement, short, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_scenario_performance_script_fragment_placement) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_scenario_performance_script_fragment_placement@@F$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_performance_script_fragment_placement@@@Z");
//};

//public: enum e_scenario_performance_script_fragment_type c_enum_no_init<enum e_scenario_performance_script_fragment_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_scenario_performance_script_fragment_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_scenario_performance_script_fragment_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_scenario_performance_script_fragment_type@@XZ");
//};

//public: c_big_flags<20>::c_big_flags<20>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0BE@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_flock_runtime_destination_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flock_runtime_destination_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_flock_runtime_destination_flags@@_N@Z");
//};

//public: void s_static_string<264>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0BAI@@@QAAXXZ");
//};

//public: void s_static_string<264>::set_length(long)
//{
//    mangled_ppc("?set_length@?$s_static_string@$0BAI@@@QAAXJ@Z");
//};

//public: char const * s_static_string<264>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0BAI@@@QAAPBDPBD@Z");
//};

//public: void s_static_string<264>::null_terminate(void)
//{
//    mangled_ppc("?null_terminate@?$s_static_string@$0BAI@@@QAAXXZ");
//};

//public: long s_static_string<264>::index_of(char const *) const
//{
//    mangled_ppc("?index_of@?$s_static_string@$0BAI@@@QBAJPBD@Z");
//};

//public: bool s_static_string<264>::substring(long, long, class s_static_string<264> *) const
//{
//    mangled_ppc("?substring@?$s_static_string@$0BAI@@@QBA_NJJPAV1@@Z");
//};

//public: long s_static_string<264>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0BAI@@@QBAJXZ");
//};

//public: char const * s_static_string<264>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0BAI@@@QBAPBDXZ");
//};

//public: char const * s_static_string<264>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0BAI@@@QBAPBDXZ");
//};

//public: c_static_string<264>::c_static_string<264>(char const *)
//{
//    mangled_ppc("??0?$c_static_string@$0BAI@@@QAA@PBD@Z");
//};

//public: c_static_string<264>::c_static_string<264>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0BAI@@@QAA@XZ");
//};

//public: bool c_big_flags_typed_no_init<long, 20>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0BE@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 20>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0BE@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 20>::c_big_flags_typed<long, 20>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0BE@@@QAA@XZ");
//};

//bool operator!=<enum e_campaign_team>(enum e_campaign_team const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_campaign_team@@@@YA_NABW4e_campaign_team@@ABW4e_none_sentinel@@@Z");
//};

//int sprintf_s<256>(char (&)[256], char const *, ...)
//{
//    mangled_ppc("??$sprintf_s@$0BAA@@@YAHAAY0BAA@DPBDZZ");
//};

//public: void s_static_string<264>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0BAI@@@QAAXPBD@Z");
//};

//public: long s_static_string<264>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0BAI@@@QBAJPBDJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 20>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0BE@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 20>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0BE@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 20>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0BE@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 20>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0BE@@@QBA_NXZ");
//};

//bool operator==<enum e_campaign_team>(enum e_campaign_team const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_campaign_team@@@@YA_NABW4e_campaign_team@@ABW4e_none_sentinel@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 20>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0BE@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 20>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0BE@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 20>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0BE@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 20>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0BE@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 20>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0BE@@@KAKJ@Z");
//};

