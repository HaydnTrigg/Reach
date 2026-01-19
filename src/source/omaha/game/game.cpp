/* ---------- headers */

#include "omaha\game\game.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **global_campaign_difficulty_level_names; // "?global_campaign_difficulty_level_names@@3PAPBDA"
// struct s_string_list_definition global_campaign_difficulty_enum; // "?global_campaign_difficulty_enum@@3Us_string_list_definition@@A"
// struct s_string_list_definition global_campaign_difficulty_flags; // "?global_campaign_difficulty_flags@@3Us_string_list_definition@@A"
// char const **global_campaign_difficulty_level_names_full_list; // "?global_campaign_difficulty_level_names_full_list@@3PAPBDA"
// char const **k_game_simulation_names; // "?k_game_simulation_names@@3PAPBDA"
// char const **k_game_playback_names; // "?k_game_playback_names@@3PAPBDA"
// long debug_determinism_version; // "?debug_determinism_version@@3JA"
// long debug_determinism_compatible_version; // "?debug_determinism_compatible_version@@3JA"
// enum e_game_time_holiday g_override_holiday; // "?g_override_holiday@@3W4e_game_time_holiday@@A"
// bool g_debug_survival_mode_respawn_if_iron; // "?g_debug_survival_mode_respawn_if_iron@@3_NA"
// bool global_playtest_mode; // "?global_playtest_mode@@3_NA"
// bool debug_pvs_editor_mode; // "?debug_pvs_editor_mode@@3_NA"
// bool g_game_has_initialized; // "?g_game_has_initialized@@3_NA"
// bool g_game_is_running_lightmap; // "?g_game_is_running_lightmap@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_game_globals_allocator::*)(void *)> g_game_globals_allocator; // "?g_game_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@A"
// struct game_globals_storage *game_globals; // "?game_globals@@3PAUgame_globals_storage@@A"

// public: static void c_decal_system::prepare_for_new_zone_set(unsigned long, unsigned long);
// public: static void c_decal_system::initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// public: static void c_decal_system::dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void effects_prepare_for_new_zone_set(unsigned long, unsigned long);
// void effects_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void effects_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// public: static void c_visible_items::dispose(void);
// public: static void c_atmosphere_fog_interface::initialize(void);
// public: static void c_atmosphere_fog_interface::dispose_from_old_map(void);
// public: static void c_atmosphere_fog_interface::dispose(void);
// public: static void c_atmosphere_fog_interface::dispose_from_old_structure_bsp(unsigned long);
// void threads_initialize(void);
// void threads_dispose(void);
// void threads_dispose_from_old_map(void);
// void __tls_set_g_game_globals_allocator(void *);
// public: static void s_campaign_difficulty_level_string_resolver::to_string(enum e_campaign_difficulty_level, class c_static_string<64> *);
// void game_initialize(void);
// bool game_has_initialized(void);
// void game_dispose(void);
// void game_initialize_for_new_map(struct s_game_options const *);
// void game_dispose_from_old_map(void);
// void game_initialize_for_new_structure_bsp(unsigned long);
// void game_dispose_from_old_structure_bsp(unsigned long);
// void game_prepare_to_switch_structure_bsp(unsigned long, unsigned long);
// unsigned long game_get_active_structure_bsp_mask(void);
// void game_attach_resources_to_bsp_zone(long, long, class c_scenario_structure_bsp_resource_registrar *);
// public: c_default_game_system_resource_registrar::c_default_game_system_resource_registrar(char const *, class c_scenario_structure_bsp_resource_registrar *);
// public: c_default_game_system_resource_registrar::~c_default_game_system_resource_registrar(void);
// public: virtual bool c_default_game_system_resource_registrar::visit_tag(enum e_game_resource_attachment_type, long);
// public: virtual bool c_default_game_system_resource_registrar::register_tag_variant(enum e_game_resource_attachment_type, long, long);
// public: virtual void c_default_game_system_resource_registrar::visit_tag_block_element(enum e_game_resource_attachment_type, struct s_tag_block const *, long);
// public: virtual void c_default_game_system_resource_registrar::visit_entire_tag_block(enum e_game_resource_attachment_type, struct s_tag_block const *);
// public: c_game_system_resource_registrar::c_game_system_resource_registrar(void);
// void game_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void game_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void game_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// unsigned long game_get_active_designer_zone_mask(void);
// unsigned long game_get_active_cinematic_zone_mask(void);
// void game_globals_initialize_for_new_map(struct s_game_options const *);
// void game_globals_dispose_from_old_map(void);
// struct s_game_performance_throttle_profile const * game_performance_throttle_profile_get(void);
// void game_create_ai(enum e_game_create_mode);
// void game_create_objects(enum e_game_create_mode);
// void game_create_missing_objects(enum e_game_create_mode);
// void game_kill_bipeds_not_under_player_control(void);
// void game_delete_dead_bipeds(void);
// void game_create_players(void);
// void game_frame(float);
// void game_update(long, float *);
// void game_tick(void);
// public: static void c_hue_saturation_control::copy_to_gamestate(void);
// void game_options_new(struct s_game_options *);
// void game_options_validate_for_saved_game(long);
// void game_options_validate(struct s_game_options *);
// void assert_game_options_verify(struct s_game_options const *);
// bool game_options_verify(struct s_game_options const *, char *, long);
// void game_options_encode(class c_bitstream *, struct s_game_options const *);
// bool game_options_decode(class c_bitstream *, struct s_game_options *);
// long game_options_get_game_options_player_index_from_controller(enum e_controller_index, struct s_machine_identifier const *);
// long game_options_get_game_options_player_index_from_player_identifier(struct s_player_identifier const *, struct s_machine_identifier const *);
// long game_options_get_game_options_player_index_from_player_identifier_machine_agnostic(struct s_player_identifier const *);
// unsigned __int64 player_identifier_extract_actual_player_identifier(struct s_player_identifier);
// void game_campaign_armaments_encode(class c_bitstream *, struct s_campaign_armaments const *);
// bool game_campaign_armaments_decode(class c_bitstream *, struct s_campaign_armaments *);
// bool game_options_match(struct s_game_options const *, struct s_game_options const *);
// void game_options_setup_default_players(long, struct s_game_options *);
// int sort_controllers_ascending(void const *, void const *);
// bool game_in_startup_phase(void);
// bool game_in_progress(void);
// long game_create_lock_resources(enum e_game_create_mode);
// void game_create_unlock_resources(enum e_game_create_mode, long &);
// void game_start(enum e_game_create_mode);
// bool game_options_valid(void);
// struct s_game_options const * game_options_get(void);
// void game_options_print_game_id(void);
// void game_options_setup_for_playback(enum e_game_playback_type);
// void game_options_clear_game_playback(void);
// void game_options_game_engine_fixup(void);
// bool game_options_build_checksum(struct s_game_options const *, unsigned long *);
// enum e_campaign_difficulty_level game_difficulty_level_get(void);
// enum e_campaign_difficulty_level game_difficulty_level_get_ignore_easy(void);
// short game_insertion_point_get(void);
// void game_insertion_point_set(short);
// enum e_game_mode game_mode_get(void);
// bool game_is_splitscreen_deterministic(void);
// bool game_is_ui_shell(void);
// bool game_is_multiplayer(void);
// bool game_is_campaign_or_survival(void);
// bool game_is_campaign(void);
// bool game_is_survival(void);
// void game_set_difficulty(enum e_campaign_difficulty_level);
// void game_set_active_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &);
// void game_skull_enable(enum e_game_skulls, bool);
// class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> game_get_active_skulls(void);
// bool game_skull_affects_player(enum e_game_skulls, long);
// bool game_is_cooperative(void);
// bool game_is_or_was_cooperative(void);
// long game_coop_player_count(void);
// long game_coop_player_count_of_team(class c_game_team const &);
// bool game_has_nonlocal_players(void);
// bool game_is_playtest(void);
// bool game_had_an_update_tick_this_frame(void);
// enum e_game_simulation_type game_simulation_get(void);
// bool game_is_playback(void);
// bool game_is_authoritative_playback(void);
// void game_playback_set(enum e_game_playback_type);
// enum e_game_playback_type game_playback_get(void);
// void game_simulation_set(enum e_game_simulation_type);
// bool game_is_synchronous_networking(void);
// bool game_is_networked(void);
// bool game_is_server(void);
// bool game_is_authoritative(void);
// bool game_is_predicted(void);
// bool game_is_distributed(void);
// long game_tick_rate_get(void);
// bool game_coop_allow_respawn(void);
// bool game_skull_is_active(enum e_game_skulls);
// bool game_survival_allow_respawn(long);
// bool game_is_cross_language(void);
// enum e_language game_get_master_language(void);
// void game_react_to_level_completion(void);
// void game_won(void);
// bool game_is_won(void);
// void game_lost(bool);
// bool game_is_lost(void);
// void game_finish(void);
// void game_finish_immediate(void);
// bool game_is_finished(void);
// bool game_is_finished_immediate(void);
// bool game_is_finished_waiting_for_level_advance(void);
// void game_insertion_point_unlock(short);
// void game_insertion_point_lock(short);
// bool game_is_available(void);
// bool game_has_game_variant(void);
// bool game_has_map_variant(void);
// struct s_game_cluster_bit_vectors const * game_get_cluster_pvs(void);
// struct s_game_cluster_bit_vectors const * game_get_cluster_pvs_local(void);
// struct s_game_cluster_bit_vectors const * game_get_cluster_activation(void);
// bool game_test_cluster_activation(struct s_cluster_reference const *);
// void game_pvs_enable_scripted_camera_pvs(void);
// void game_pvs_clear_scripted_camera_pvs(void);
// void game_pvs_scripted_set_object(long);
// void game_pvs_scripted_set_camera_point(short);
// void game_pvs_scripted_clear(void);
// void game_update_pvs(void);
// struct s_cluster_reference game_pvs_scripted_get_cluster_reference(void);
// void game_compute_pvs(struct s_game_cluster_bit_vectors *, bool, class s_static_array<class s_static_array<long, 255>, 16> *);
// void game_pvs_reset(void);
// void game_clear_structure_pvs(struct s_game_cluster_bit_vectors *, unsigned long);
// void game_tick_pulse_random_seed_deterministic(struct simulation_update const *);
// void game_pvs_debug_render(void);
// void game_loss_update(void);
// void game_finished_update(void);
// void game_launch_initial_script(void);
// void game_clusters_or(struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors *);
// void game_clusters_and(struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors *);
// void game_clusters_fill(struct s_game_cluster_bit_vectors *, bool);
// void game_get_determinism_versions(long *, long *);
// bool game_determinism_versions_available(void);
// bool game_determinism_version_compatible(long);
// void game_time_get_date_and_time(struct s_date_and_time *);
// enum e_game_time_holiday game_time_get_holiday(void);
// bool game_time_matching_remote_time(void);
// bool game_time_matching_remote_time_and_updates_are_available(void);
// long game_get_recently_spawned_grace_period_seconds(enum e_multiplayer_team);
// public: unsigned char c_game_engine_respawn_options::get_respawn_player_traits_duration_seconds(void) const;
// void threads_initialize_for_new_map(void);
// void game_bsp_debug_status(char const *, unsigned long);
// void game_designer_zone_set_debug_status(char const *, unsigned long);
// void game_cinematic_zone_set_debug_status(char const *, unsigned long);
// char const * get_game_difficulty_name(short);
// void game_notity_running_lightmap_job_begin(void);
// void game_notity_running_lightmap_job_end(void);
// bool game_is_running_lightmap_job(void);
// void game_set_random_holiday(void);
// public: static unsigned int s_static_array<class c_big_flags_typed_no_init<long, 255>, 16>::get_element_size(void);
// public: static enum e_gui_game_mode c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>::begin(void);
// public: static enum e_gui_game_mode c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>::end(void);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::valid(void) const;
// public: unsigned long const * c_big_flags_typed_no_init<long, 255>::get_bits_direct(void) const;
// public: unsigned long * c_big_flags_typed_no_init<long, 255>::get_writeable_bits_direct(void);
// unsigned long fast_checksum<struct s_game_options>(unsigned long, struct s_game_options const *);
// public: long & s_static_array<long, 255>::operator[]<long>(long);
// public: class c_big_flags_typed_no_init<long, 255> & s_static_array<class c_big_flags_typed_no_init<long, 255>, 16>::operator[]<long>(long);
// public: class s_static_array<long, 255> & s_static_array<class s_static_array<long, 255>, 16>::operator[]<long>(long);
// void prefetch<struct s_game_options>(struct s_game_options const *);
// time;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>(void);
// void g_game_globals_allocator::`dynamic atexit destructor'(void);

//public: static void c_decal_system::prepare_for_new_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?prepare_for_new_zone_set@c_decal_system@@SAXKK@Z");
//};

//public: static void c_decal_system::initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?initialize_for_new_non_bsp_zone_set@c_decal_system@@SAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//public: static void c_decal_system::dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?dispose_from_old_non_bsp_zone_set@c_decal_system@@SAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void effects_prepare_for_new_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?effects_prepare_for_new_zone_set@@YAXKK@Z");
//};

//void effects_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?effects_initialize_for_new_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void effects_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?effects_dispose_from_old_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//public: static void c_visible_items::dispose(void)
//{
//    mangled_ppc("?dispose@c_visible_items@@SAXXZ");
//};

//public: static void c_atmosphere_fog_interface::initialize(void)
//{
//    mangled_ppc("?initialize@c_atmosphere_fog_interface@@SAXXZ");
//};

//public: static void c_atmosphere_fog_interface::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_atmosphere_fog_interface@@SAXXZ");
//};

//public: static void c_atmosphere_fog_interface::dispose(void)
//{
//    mangled_ppc("?dispose@c_atmosphere_fog_interface@@SAXXZ");
//};

//public: static void c_atmosphere_fog_interface::dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?dispose_from_old_structure_bsp@c_atmosphere_fog_interface@@SAXK@Z");
//};

//void threads_initialize(void)
//{
//    mangled_ppc("?threads_initialize@@YAXXZ");
//};

//void threads_dispose(void)
//{
//    mangled_ppc("?threads_dispose@@YAXXZ");
//};

//void threads_dispose_from_old_map(void)
//{
//    mangled_ppc("?threads_dispose_from_old_map@@YAXXZ");
//};

//void __tls_set_g_game_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_game_globals_allocator@@YAXPAX@Z");
//};

//public: static void s_campaign_difficulty_level_string_resolver::to_string(enum e_campaign_difficulty_level, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_campaign_difficulty_level_string_resolver@@SAXW4e_campaign_difficulty_level@@PAV?$c_static_string@$0EA@@@@Z");
//};

//void game_initialize(void)
//{
//    mangled_ppc("?game_initialize@@YAXXZ");
//};

//bool game_has_initialized(void)
//{
//    mangled_ppc("?game_has_initialized@@YA_NXZ");
//};

//void game_dispose(void)
//{
//    mangled_ppc("?game_dispose@@YAXXZ");
//};

//void game_initialize_for_new_map(struct s_game_options const *)
//{
//    mangled_ppc("?game_initialize_for_new_map@@YAXPBUs_game_options@@@Z");
//};

//void game_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_dispose_from_old_map@@YAXXZ");
//};

//void game_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?game_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void game_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?game_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void game_prepare_to_switch_structure_bsp(unsigned long, unsigned long)
//{
//    mangled_ppc("?game_prepare_to_switch_structure_bsp@@YAXKK@Z");
//};

//unsigned long game_get_active_structure_bsp_mask(void)
//{
//    mangled_ppc("?game_get_active_structure_bsp_mask@@YAKXZ");
//};

//void game_attach_resources_to_bsp_zone(long, long, class c_scenario_structure_bsp_resource_registrar *)
//{
//    mangled_ppc("?game_attach_resources_to_bsp_zone@@YAXJJPAVc_scenario_structure_bsp_resource_registrar@@@Z");
//};

//public: c_default_game_system_resource_registrar::c_default_game_system_resource_registrar(char const *, class c_scenario_structure_bsp_resource_registrar *)
//{
//    mangled_ppc("??0c_default_game_system_resource_registrar@@QAA@PBDPAVc_scenario_structure_bsp_resource_registrar@@@Z");
//};

//public: c_default_game_system_resource_registrar::~c_default_game_system_resource_registrar(void)
//{
//    mangled_ppc("??1c_default_game_system_resource_registrar@@QAA@XZ");
//};

//public: virtual bool c_default_game_system_resource_registrar::visit_tag(enum e_game_resource_attachment_type, long)
//{
//    mangled_ppc("?visit_tag@c_default_game_system_resource_registrar@@UAA_NW4e_game_resource_attachment_type@@J@Z");
//};

//public: virtual bool c_default_game_system_resource_registrar::register_tag_variant(enum e_game_resource_attachment_type, long, long)
//{
//    mangled_ppc("?register_tag_variant@c_default_game_system_resource_registrar@@UAA_NW4e_game_resource_attachment_type@@JJ@Z");
//};

//public: virtual void c_default_game_system_resource_registrar::visit_tag_block_element(enum e_game_resource_attachment_type, struct s_tag_block const *, long)
//{
//    mangled_ppc("?visit_tag_block_element@c_default_game_system_resource_registrar@@UAAXW4e_game_resource_attachment_type@@PBUs_tag_block@@J@Z");
//};

//public: virtual void c_default_game_system_resource_registrar::visit_entire_tag_block(enum e_game_resource_attachment_type, struct s_tag_block const *)
//{
//    mangled_ppc("?visit_entire_tag_block@c_default_game_system_resource_registrar@@UAAXW4e_game_resource_attachment_type@@PBUs_tag_block@@@Z");
//};

//public: c_game_system_resource_registrar::c_game_system_resource_registrar(void)
//{
//    mangled_ppc("??0c_game_system_resource_registrar@@QAA@XZ");
//};

//void game_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?game_initialize_for_new_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void game_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?game_dispose_from_old_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void game_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?game_prepare_for_non_bsp_zone_set_switch@@YAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//unsigned long game_get_active_designer_zone_mask(void)
//{
//    mangled_ppc("?game_get_active_designer_zone_mask@@YAKXZ");
//};

//unsigned long game_get_active_cinematic_zone_mask(void)
//{
//    mangled_ppc("?game_get_active_cinematic_zone_mask@@YAKXZ");
//};

//void game_globals_initialize_for_new_map(struct s_game_options const *)
//{
//    mangled_ppc("?game_globals_initialize_for_new_map@@YAXPBUs_game_options@@@Z");
//};

//void game_globals_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_globals_dispose_from_old_map@@YAXXZ");
//};

//struct s_game_performance_throttle_profile const * game_performance_throttle_profile_get(void)
//{
//    mangled_ppc("?game_performance_throttle_profile_get@@YAPBUs_game_performance_throttle_profile@@XZ");
//};

//void game_create_ai(enum e_game_create_mode)
//{
//    mangled_ppc("?game_create_ai@@YAXW4e_game_create_mode@@@Z");
//};

//void game_create_objects(enum e_game_create_mode)
//{
//    mangled_ppc("?game_create_objects@@YAXW4e_game_create_mode@@@Z");
//};

//void game_create_missing_objects(enum e_game_create_mode)
//{
//    mangled_ppc("?game_create_missing_objects@@YAXW4e_game_create_mode@@@Z");
//};

//void game_kill_bipeds_not_under_player_control(void)
//{
//    mangled_ppc("?game_kill_bipeds_not_under_player_control@@YAXXZ");
//};

//void game_delete_dead_bipeds(void)
//{
//    mangled_ppc("?game_delete_dead_bipeds@@YAXXZ");
//};

//void game_create_players(void)
//{
//    mangled_ppc("?game_create_players@@YAXXZ");
//};

//void game_frame(float)
//{
//    mangled_ppc("?game_frame@@YAXM@Z");
//};

//void game_update(long, float *)
//{
//    mangled_ppc("?game_update@@YAXJPAM@Z");
//};

//void game_tick(void)
//{
//    mangled_ppc("?game_tick@@YAXXZ");
//};

//public: static void c_hue_saturation_control::copy_to_gamestate(void)
//{
//    mangled_ppc("?copy_to_gamestate@c_hue_saturation_control@@SAXXZ");
//};

//void game_options_new(struct s_game_options *)
//{
//    mangled_ppc("?game_options_new@@YAXPAUs_game_options@@@Z");
//};

//void game_options_validate_for_saved_game(long)
//{
//    mangled_ppc("?game_options_validate_for_saved_game@@YAXJ@Z");
//};

//void game_options_validate(struct s_game_options *)
//{
//    mangled_ppc("?game_options_validate@@YAXPAUs_game_options@@@Z");
//};

//void assert_game_options_verify(struct s_game_options const *)
//{
//    mangled_ppc("?assert_game_options_verify@@YAXPBUs_game_options@@@Z");
//};

//bool game_options_verify(struct s_game_options const *, char *, long)
//{
//    mangled_ppc("?game_options_verify@@YA_NPBUs_game_options@@PADJ@Z");
//};

//void game_options_encode(class c_bitstream *, struct s_game_options const *)
//{
//    mangled_ppc("?game_options_encode@@YAXPAVc_bitstream@@PBUs_game_options@@@Z");
//};

//bool game_options_decode(class c_bitstream *, struct s_game_options *)
//{
//    mangled_ppc("?game_options_decode@@YA_NPAVc_bitstream@@PAUs_game_options@@@Z");
//};

//long game_options_get_game_options_player_index_from_controller(enum e_controller_index, struct s_machine_identifier const *)
//{
//    mangled_ppc("?game_options_get_game_options_player_index_from_controller@@YAJW4e_controller_index@@PBUs_machine_identifier@@@Z");
//};

//long game_options_get_game_options_player_index_from_player_identifier(struct s_player_identifier const *, struct s_machine_identifier const *)
//{
//    mangled_ppc("?game_options_get_game_options_player_index_from_player_identifier@@YAJPBUs_player_identifier@@PBUs_machine_identifier@@@Z");
//};

//long game_options_get_game_options_player_index_from_player_identifier_machine_agnostic(struct s_player_identifier const *)
//{
//    mangled_ppc("?game_options_get_game_options_player_index_from_player_identifier_machine_agnostic@@YAJPBUs_player_identifier@@@Z");
//};

//unsigned __int64 player_identifier_extract_actual_player_identifier(struct s_player_identifier)
//{
//    mangled_ppc("?player_identifier_extract_actual_player_identifier@@YA_KUs_player_identifier@@@Z");
//};

//void game_campaign_armaments_encode(class c_bitstream *, struct s_campaign_armaments const *)
//{
//    mangled_ppc("?game_campaign_armaments_encode@@YAXPAVc_bitstream@@PBUs_campaign_armaments@@@Z");
//};

//bool game_campaign_armaments_decode(class c_bitstream *, struct s_campaign_armaments *)
//{
//    mangled_ppc("?game_campaign_armaments_decode@@YA_NPAVc_bitstream@@PAUs_campaign_armaments@@@Z");
//};

//bool game_options_match(struct s_game_options const *, struct s_game_options const *)
//{
//    mangled_ppc("?game_options_match@@YA_NPBUs_game_options@@0@Z");
//};

//void game_options_setup_default_players(long, struct s_game_options *)
//{
//    mangled_ppc("?game_options_setup_default_players@@YAXJPAUs_game_options@@@Z");
//};

//int sort_controllers_ascending(void const *, void const *)
//{
//    mangled_ppc("?sort_controllers_ascending@@YAHPBX0@Z");
//};

//bool game_in_startup_phase(void)
//{
//    mangled_ppc("?game_in_startup_phase@@YA_NXZ");
//};

//bool game_in_progress(void)
//{
//    mangled_ppc("?game_in_progress@@YA_NXZ");
//};

//long game_create_lock_resources(enum e_game_create_mode)
//{
//    mangled_ppc("?game_create_lock_resources@@YAJW4e_game_create_mode@@@Z");
//};

//void game_create_unlock_resources(enum e_game_create_mode, long &)
//{
//    mangled_ppc("?game_create_unlock_resources@@YAXW4e_game_create_mode@@AAJ@Z");
//};

//void game_start(enum e_game_create_mode)
//{
//    mangled_ppc("?game_start@@YAXW4e_game_create_mode@@@Z");
//};

//bool game_options_valid(void)
//{
//    mangled_ppc("?game_options_valid@@YA_NXZ");
//};

//struct s_game_options const * game_options_get(void)
//{
//    mangled_ppc("?game_options_get@@YAPBUs_game_options@@XZ");
//};

//void game_options_print_game_id(void)
//{
//    mangled_ppc("?game_options_print_game_id@@YAXXZ");
//};

//void game_options_setup_for_playback(enum e_game_playback_type)
//{
//    mangled_ppc("?game_options_setup_for_playback@@YAXW4e_game_playback_type@@@Z");
//};

//void game_options_clear_game_playback(void)
//{
//    mangled_ppc("?game_options_clear_game_playback@@YAXXZ");
//};

//void game_options_game_engine_fixup(void)
//{
//    mangled_ppc("?game_options_game_engine_fixup@@YAXXZ");
//};

//bool game_options_build_checksum(struct s_game_options const *, unsigned long *)
//{
//    mangled_ppc("?game_options_build_checksum@@YA_NPBUs_game_options@@PAK@Z");
//};

//enum e_campaign_difficulty_level game_difficulty_level_get(void)
//{
//    mangled_ppc("?game_difficulty_level_get@@YA?AW4e_campaign_difficulty_level@@XZ");
//};

//enum e_campaign_difficulty_level game_difficulty_level_get_ignore_easy(void)
//{
//    mangled_ppc("?game_difficulty_level_get_ignore_easy@@YA?AW4e_campaign_difficulty_level@@XZ");
//};

//short game_insertion_point_get(void)
//{
//    mangled_ppc("?game_insertion_point_get@@YAFXZ");
//};

//void game_insertion_point_set(short)
//{
//    mangled_ppc("?game_insertion_point_set@@YAXF@Z");
//};

//enum e_game_mode game_mode_get(void)
//{
//    mangled_ppc("?game_mode_get@@YA?AW4e_game_mode@@XZ");
//};

//bool game_is_splitscreen_deterministic(void)
//{
//    mangled_ppc("?game_is_splitscreen_deterministic@@YA_NXZ");
//};

//bool game_is_ui_shell(void)
//{
//    mangled_ppc("?game_is_ui_shell@@YA_NXZ");
//};

//bool game_is_multiplayer(void)
//{
//    mangled_ppc("?game_is_multiplayer@@YA_NXZ");
//};

//bool game_is_campaign_or_survival(void)
//{
//    mangled_ppc("?game_is_campaign_or_survival@@YA_NXZ");
//};

//bool game_is_campaign(void)
//{
//    mangled_ppc("?game_is_campaign@@YA_NXZ");
//};

//bool game_is_survival(void)
//{
//    mangled_ppc("?game_is_survival@@YA_NXZ");
//};

//void game_set_difficulty(enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?game_set_difficulty@@YAXW4e_campaign_difficulty_level@@@Z");
//};

//void game_set_active_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?game_set_active_skulls@@YAXABV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//void game_skull_enable(enum e_game_skulls, bool)
//{
//    mangled_ppc("?game_skull_enable@@YAXW4e_game_skulls@@_N@Z");
//};

//class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> game_get_active_skulls(void)
//{
//    mangled_ppc("?game_get_active_skulls@@YA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//bool game_skull_affects_player(enum e_game_skulls, long)
//{
//    mangled_ppc("?game_skull_affects_player@@YA_NW4e_game_skulls@@J@Z");
//};

//bool game_is_cooperative(void)
//{
//    mangled_ppc("?game_is_cooperative@@YA_NXZ");
//};

//bool game_is_or_was_cooperative(void)
//{
//    mangled_ppc("?game_is_or_was_cooperative@@YA_NXZ");
//};

//long game_coop_player_count(void)
//{
//    mangled_ppc("?game_coop_player_count@@YAJXZ");
//};

//long game_coop_player_count_of_team(class c_game_team const &)
//{
//    mangled_ppc("?game_coop_player_count_of_team@@YAJABVc_game_team@@@Z");
//};

//bool game_has_nonlocal_players(void)
//{
//    mangled_ppc("?game_has_nonlocal_players@@YA_NXZ");
//};

//bool game_is_playtest(void)
//{
//    mangled_ppc("?game_is_playtest@@YA_NXZ");
//};

//bool game_had_an_update_tick_this_frame(void)
//{
//    mangled_ppc("?game_had_an_update_tick_this_frame@@YA_NXZ");
//};

//enum e_game_simulation_type game_simulation_get(void)
//{
//    mangled_ppc("?game_simulation_get@@YA?AW4e_game_simulation_type@@XZ");
//};

//bool game_is_playback(void)
//{
//    mangled_ppc("?game_is_playback@@YA_NXZ");
//};

//bool game_is_authoritative_playback(void)
//{
//    mangled_ppc("?game_is_authoritative_playback@@YA_NXZ");
//};

//void game_playback_set(enum e_game_playback_type)
//{
//    mangled_ppc("?game_playback_set@@YAXW4e_game_playback_type@@@Z");
//};

//enum e_game_playback_type game_playback_get(void)
//{
//    mangled_ppc("?game_playback_get@@YA?AW4e_game_playback_type@@XZ");
//};

//void game_simulation_set(enum e_game_simulation_type)
//{
//    mangled_ppc("?game_simulation_set@@YAXW4e_game_simulation_type@@@Z");
//};

//bool game_is_synchronous_networking(void)
//{
//    mangled_ppc("?game_is_synchronous_networking@@YA_NXZ");
//};

//bool game_is_networked(void)
//{
//    mangled_ppc("?game_is_networked@@YA_NXZ");
//};

//bool game_is_server(void)
//{
//    mangled_ppc("?game_is_server@@YA_NXZ");
//};

//bool game_is_authoritative(void)
//{
//    mangled_ppc("?game_is_authoritative@@YA_NXZ");
//};

//bool game_is_predicted(void)
//{
//    mangled_ppc("?game_is_predicted@@YA_NXZ");
//};

//bool game_is_distributed(void)
//{
//    mangled_ppc("?game_is_distributed@@YA_NXZ");
//};

//long game_tick_rate_get(void)
//{
//    mangled_ppc("?game_tick_rate_get@@YAJXZ");
//};

//bool game_coop_allow_respawn(void)
//{
//    mangled_ppc("?game_coop_allow_respawn@@YA_NXZ");
//};

//bool game_skull_is_active(enum e_game_skulls)
//{
//    mangled_ppc("?game_skull_is_active@@YA_NW4e_game_skulls@@@Z");
//};

//bool game_survival_allow_respawn(long)
//{
//    mangled_ppc("?game_survival_allow_respawn@@YA_NJ@Z");
//};

//bool game_is_cross_language(void)
//{
//    mangled_ppc("?game_is_cross_language@@YA_NXZ");
//};

//enum e_language game_get_master_language(void)
//{
//    mangled_ppc("?game_get_master_language@@YA?AW4e_language@@XZ");
//};

//void game_react_to_level_completion(void)
//{
//    mangled_ppc("?game_react_to_level_completion@@YAXXZ");
//};

//void game_won(void)
//{
//    mangled_ppc("?game_won@@YAXXZ");
//};

//bool game_is_won(void)
//{
//    mangled_ppc("?game_is_won@@YA_NXZ");
//};

//void game_lost(bool)
//{
//    mangled_ppc("?game_lost@@YAX_N@Z");
//};

//bool game_is_lost(void)
//{
//    mangled_ppc("?game_is_lost@@YA_NXZ");
//};

//void game_finish(void)
//{
//    mangled_ppc("?game_finish@@YAXXZ");
//};

//void game_finish_immediate(void)
//{
//    mangled_ppc("?game_finish_immediate@@YAXXZ");
//};

//bool game_is_finished(void)
//{
//    mangled_ppc("?game_is_finished@@YA_NXZ");
//};

//bool game_is_finished_immediate(void)
//{
//    mangled_ppc("?game_is_finished_immediate@@YA_NXZ");
//};

//bool game_is_finished_waiting_for_level_advance(void)
//{
//    mangled_ppc("?game_is_finished_waiting_for_level_advance@@YA_NXZ");
//};

//void game_insertion_point_unlock(short)
//{
//    mangled_ppc("?game_insertion_point_unlock@@YAXF@Z");
//};

//void game_insertion_point_lock(short)
//{
//    mangled_ppc("?game_insertion_point_lock@@YAXF@Z");
//};

//bool game_is_available(void)
//{
//    mangled_ppc("?game_is_available@@YA_NXZ");
//};

//bool game_has_game_variant(void)
//{
//    mangled_ppc("?game_has_game_variant@@YA_NXZ");
//};

//bool game_has_map_variant(void)
//{
//    mangled_ppc("?game_has_map_variant@@YA_NXZ");
//};

//struct s_game_cluster_bit_vectors const * game_get_cluster_pvs(void)
//{
//    mangled_ppc("?game_get_cluster_pvs@@YAPBUs_game_cluster_bit_vectors@@XZ");
//};

//struct s_game_cluster_bit_vectors const * game_get_cluster_pvs_local(void)
//{
//    mangled_ppc("?game_get_cluster_pvs_local@@YAPBUs_game_cluster_bit_vectors@@XZ");
//};

//struct s_game_cluster_bit_vectors const * game_get_cluster_activation(void)
//{
//    mangled_ppc("?game_get_cluster_activation@@YAPBUs_game_cluster_bit_vectors@@XZ");
//};

//bool game_test_cluster_activation(struct s_cluster_reference const *)
//{
//    mangled_ppc("?game_test_cluster_activation@@YA_NPBUs_cluster_reference@@@Z");
//};

//void game_pvs_enable_scripted_camera_pvs(void)
//{
//    mangled_ppc("?game_pvs_enable_scripted_camera_pvs@@YAXXZ");
//};

//void game_pvs_clear_scripted_camera_pvs(void)
//{
//    mangled_ppc("?game_pvs_clear_scripted_camera_pvs@@YAXXZ");
//};

//void game_pvs_scripted_set_object(long)
//{
//    mangled_ppc("?game_pvs_scripted_set_object@@YAXJ@Z");
//};

//void game_pvs_scripted_set_camera_point(short)
//{
//    mangled_ppc("?game_pvs_scripted_set_camera_point@@YAXF@Z");
//};

//void game_pvs_scripted_clear(void)
//{
//    mangled_ppc("?game_pvs_scripted_clear@@YAXXZ");
//};

//void game_update_pvs(void)
//{
//    mangled_ppc("?game_update_pvs@@YAXXZ");
//};

//struct s_cluster_reference game_pvs_scripted_get_cluster_reference(void)
//{
//    mangled_ppc("?game_pvs_scripted_get_cluster_reference@@YA?AUs_cluster_reference@@XZ");
//};

//void game_compute_pvs(struct s_game_cluster_bit_vectors *, bool, class s_static_array<class s_static_array<long, 255>, 16> *)
//{
//    mangled_ppc("?game_compute_pvs@@YAXPAUs_game_cluster_bit_vectors@@_NPAV?$s_static_array@V?$s_static_array@J$0PP@@@$0BA@@@@Z");
//};

//void game_pvs_reset(void)
//{
//    mangled_ppc("?game_pvs_reset@@YAXXZ");
//};

//void game_clear_structure_pvs(struct s_game_cluster_bit_vectors *, unsigned long)
//{
//    mangled_ppc("?game_clear_structure_pvs@@YAXPAUs_game_cluster_bit_vectors@@K@Z");
//};

//void game_tick_pulse_random_seed_deterministic(struct simulation_update const *)
//{
//    mangled_ppc("?game_tick_pulse_random_seed_deterministic@@YAXPBUsimulation_update@@@Z");
//};

//void game_pvs_debug_render(void)
//{
//    mangled_ppc("?game_pvs_debug_render@@YAXXZ");
//};

//void game_loss_update(void)
//{
//    mangled_ppc("?game_loss_update@@YAXXZ");
//};

//void game_finished_update(void)
//{
//    mangled_ppc("?game_finished_update@@YAXXZ");
//};

//void game_launch_initial_script(void)
//{
//    mangled_ppc("?game_launch_initial_script@@YAXXZ");
//};

//void game_clusters_or(struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors *)
//{
//    mangled_ppc("?game_clusters_or@@YAXPBUs_game_cluster_bit_vectors@@0PAU1@@Z");
//};

//void game_clusters_and(struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors const *, struct s_game_cluster_bit_vectors *)
//{
//    mangled_ppc("?game_clusters_and@@YAXPBUs_game_cluster_bit_vectors@@0PAU1@@Z");
//};

//void game_clusters_fill(struct s_game_cluster_bit_vectors *, bool)
//{
//    mangled_ppc("?game_clusters_fill@@YAXPAUs_game_cluster_bit_vectors@@_N@Z");
//};

//void game_get_determinism_versions(long *, long *)
//{
//    mangled_ppc("?game_get_determinism_versions@@YAXPAJ0@Z");
//};

//bool game_determinism_versions_available(void)
//{
//    mangled_ppc("?game_determinism_versions_available@@YA_NXZ");
//};

//bool game_determinism_version_compatible(long)
//{
//    mangled_ppc("?game_determinism_version_compatible@@YA_NJ@Z");
//};

//void game_time_get_date_and_time(struct s_date_and_time *)
//{
//    mangled_ppc("?game_time_get_date_and_time@@YAXPAUs_date_and_time@@@Z");
//};

//enum e_game_time_holiday game_time_get_holiday(void)
//{
//    mangled_ppc("?game_time_get_holiday@@YA?AW4e_game_time_holiday@@XZ");
//};

//bool game_time_matching_remote_time(void)
//{
//    mangled_ppc("?game_time_matching_remote_time@@YA_NXZ");
//};

//bool game_time_matching_remote_time_and_updates_are_available(void)
//{
//    mangled_ppc("?game_time_matching_remote_time_and_updates_are_available@@YA_NXZ");
//};

//long game_get_recently_spawned_grace_period_seconds(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_get_recently_spawned_grace_period_seconds@@YAJW4e_multiplayer_team@@@Z");
//};

//public: unsigned char c_game_engine_respawn_options::get_respawn_player_traits_duration_seconds(void) const
//{
//    mangled_ppc("?get_respawn_player_traits_duration_seconds@c_game_engine_respawn_options@@QBAEXZ");
//};

//void threads_initialize_for_new_map(void)
//{
//    mangled_ppc("?threads_initialize_for_new_map@@YAXXZ");
//};

//void game_bsp_debug_status(char const *, unsigned long)
//{
//    mangled_ppc("?game_bsp_debug_status@@YAXPBDK@Z");
//};

//void game_designer_zone_set_debug_status(char const *, unsigned long)
//{
//    mangled_ppc("?game_designer_zone_set_debug_status@@YAXPBDK@Z");
//};

//void game_cinematic_zone_set_debug_status(char const *, unsigned long)
//{
//    mangled_ppc("?game_cinematic_zone_set_debug_status@@YAXPBDK@Z");
//};

//char const * get_game_difficulty_name(short)
//{
//    mangled_ppc("?get_game_difficulty_name@@YAPBDF@Z");
//};

//void game_notity_running_lightmap_job_begin(void)
//{
//    mangled_ppc("?game_notity_running_lightmap_job_begin@@YAXXZ");
//};

//void game_notity_running_lightmap_job_end(void)
//{
//    mangled_ppc("?game_notity_running_lightmap_job_end@@YAXXZ");
//};

//bool game_is_running_lightmap_job(void)
//{
//    mangled_ppc("?game_is_running_lightmap_job@@YA_NXZ");
//};

//void game_set_random_holiday(void)
//{
//    mangled_ppc("?game_set_random_holiday@@YAXXZ");
//};

//public: static unsigned int s_static_array<class c_big_flags_typed_no_init<long, 255>, 16>::get_element_size(void)
//{
//    mangled_ppc("?get_element_size@?$s_static_array@V?$c_big_flags_typed_no_init@J$0PP@@@$0BA@@@SAIXZ");
//};

//public: static enum e_gui_game_mode c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>::begin(void)
//{
//    mangled_ppc("?begin@?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@SA?AW4e_gui_game_mode@@XZ");
//};

//public: static enum e_gui_game_mode c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>::end(void)
//{
//    mangled_ppc("?end@?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@SA?AW4e_gui_game_mode@@XZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: unsigned long const * c_big_flags_typed_no_init<long, 255>::get_bits_direct(void) const
//{
//    mangled_ppc("?get_bits_direct@?$c_big_flags_typed_no_init@J$0PP@@@QBAPBKXZ");
//};

//public: unsigned long * c_big_flags_typed_no_init<long, 255>::get_writeable_bits_direct(void)
//{
//    mangled_ppc("?get_writeable_bits_direct@?$c_big_flags_typed_no_init@J$0PP@@@QAAPAKXZ");
//};

//unsigned long fast_checksum<struct s_game_options>(unsigned long, struct s_game_options const *)
//{
//    mangled_ppc("??$fast_checksum@Us_game_options@@@@YAKKPBUs_game_options@@@Z");
//};

//public: long & s_static_array<long, 255>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0PP@@@QAAAAJJ@Z");
//};

//public: class c_big_flags_typed_no_init<long, 255> & s_static_array<class c_big_flags_typed_no_init<long, 255>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_big_flags_typed_no_init@J$0PP@@@$0BA@@@QAAAAV?$c_big_flags_typed_no_init@J$0PP@@@J@Z");
//};

//public: class s_static_array<long, 255> & s_static_array<class s_static_array<long, 255>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@J$0PP@@@$0BA@@@QAAAAV?$s_static_array@J$0PP@@@J@Z");
//};

//void prefetch<struct s_game_options>(struct s_game_options const *)
//{
//    mangled_ppc("??$prefetch@Us_game_options@@@@YAXPBUs_game_options@@@Z");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_game_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_globals_allocator@@YAXXZ");
//};

