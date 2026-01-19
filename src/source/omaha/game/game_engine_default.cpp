/* ---------- headers */

#include "omaha\game\game_engine_default.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<enum e_multiplayer_team_designator, 9>::k_element_count; // "?k_element_count@?$s_static_array@W4e_multiplayer_team_designator@@$08@@2JB"

// public: virtual enum e_game_engine_type c_game_engine::get_type(void) const;
// public: virtual long c_game_engine::get_score_to_win_round(void) const;
// public: virtual void c_game_engine::recompute_team_score(enum e_multiplayer_team, long, enum e_team_scoring_method) const;
// public: virtual void c_game_engine::get_score_string(long, class c_static_wchar_string<256> *) const;
// public: virtual void c_game_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const;
// public: virtual bool c_game_engine::get_objective_interface_state(long, struct s_objective_status *) const;
// public: virtual bool c_game_engine::minimap_available(long) const;
// public: virtual bool c_game_engine::team_mapping_is_valid(void) const;
// public: virtual bool c_game_engine::initialize_for_new_map(void) const;
// public: virtual void c_game_engine::dispose_from_old_map(void) const;
// public: virtual void c_game_engine::initialize_for_new_round(void) const;
// public: virtual void c_game_engine::stats_reset_for_round_switch(void) const;
// public: virtual bool c_game_engine::validate_team_designator_for_new_map(enum e_multiplayer_team_designator) const;
// void recompute_team_designators_rotate(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *);
// void recompute_team_designators_random(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *);
// void recompute_team_designators_none(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *);
// public: virtual void c_game_engine::build_valid_team_mapping(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *) const;
// public: virtual void c_game_engine::player_added(long) const;
// public: virtual void c_game_engine::player_activated(long) const;
// public: virtual void c_game_engine::player_left(long) const;
// public: virtual void c_game_engine::player_rejoined(long) const;
// public: virtual void c_game_engine::player_changed_indices(long, long) const;
// public: virtual void c_game_engine::player_changed_teams(long) const;
// public: virtual void c_game_engine::player_about_to_spawn(long) const;
// public: virtual void c_game_engine::player_just_spawned(long) const;
// public: virtual void c_game_engine::game_ending(void) const;
// public: virtual void c_game_engine::game_starting(void) const;
// public: virtual bool c_game_engine::should_end_round(long *) const;
// public: virtual bool c_game_engine::should_update_round_timer(void) const;
// public: virtual void c_game_engine::render(long) const;
// public: virtual void c_game_engine::render_debug(long) const;
// public: virtual void c_game_engine::submit_navpoints(enum e_output_user_index, long) const;
// public: virtual bool c_game_engine::build_player_navpoint(enum e_output_user_index, long, long, bool, struct c_chud_navpoint *) const;
// bool voice_player_is_talking(long);
// bool voice_lifecycle_in_game(void);
// public: virtual bool c_game_engine::should_draw_navpoint(enum e_output_user_index, long) const;
// public: virtual void c_game_engine::player_update(long) const;
// public: virtual void c_game_engine::apply_baseline_traits_for_player(long, class c_player_traits *) const;
// public: virtual void c_game_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const;
// public: virtual void c_game_engine::apply_ai_traits(class c_ai_traits *) const;
// public: virtual void c_game_engine::assemble_spawn_influencers_for_player(long, struct s_netgame_goal_influencer *, long *) const;
// public: virtual bool c_game_engine::coop_spawning_enabled(long) const;
// public: virtual long c_game_engine::compare_players(long, long) const;
// public: virtual long c_game_engine::compare_teams(enum e_multiplayer_team, enum e_multiplayer_team) const;
// public: virtual char const * c_game_engine::get_key_set_from_scoring_type(long) const;
// public: virtual void c_game_engine::handle_new_multiplayer_object(long) const;
// public: virtual void c_game_engine::handle_deleted_object(long) const;
// public: virtual void c_game_engine::multiplayer_object_before_team_change(long, enum e_multiplayer_team_designator) const;
// public: virtual void c_game_engine::multiplayer_object_after_team_change(long, enum e_multiplayer_team_designator) const;
// public: virtual enum e_multiplayer_team_designator c_game_engine::get_player_team_designator(long) const;
// public: virtual void c_game_engine::update(void) const;
// public: virtual bool c_game_engine::requires_scenario_object(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const;
// public: virtual bool c_game_engine::requires_unplaced_object(struct s_object_placement_data const *) const;
// public: virtual long c_game_engine::object_get_emblem_player(long) const;
// public: virtual float c_game_engine::compute_object_function(long, long) const;
// public: virtual bool c_game_engine::player_is_enemy(long, long) const;
// public: virtual bool c_game_engine::team_is_enemy(enum e_multiplayer_team, enum e_multiplayer_team) const;
// public: virtual bool c_game_engine::allow_weapon_pickup(long, long) const;
// public: virtual bool c_game_engine::does_weapon_have_pickup_priority(long) const;
// public: virtual bool c_game_engine::should_auto_pickup_weapon(long, long) const;
// public: virtual void c_game_engine::player_damaged_player(long, long, long, bool) const;
// public: virtual void c_game_engine::player_assisted_with_kill(long, long) const;
// public: virtual long c_game_engine::player_killed_player_get_kill_message(long, long, bool) const;
// public: virtual void c_game_engine::handle_incident_begin(void) const;
// public: virtual void c_game_engine::handle_incident_end(void) const;
// public: virtual void c_game_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const;
// public: virtual void c_game_engine::object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &) const;
// public: virtual bool c_game_engine::player_purchase_menu_available(long) const;
// public: virtual class c_flags<enum e_scenario_requisition_trigger_volume_flag, unsigned short, 5, struct s_default_enum_string_resolver> c_game_engine::get_player_purchase_flags(long) const;
// public: virtual long c_game_engine::get_current_object_price(struct scenario_requisition_palette_entry const *, long) const;
// public: virtual bool c_game_engine::object_can_be_damaged(long) const;
// public: virtual void c_game_engine::prepare_for_new_state(long) const;
// public: virtual bool c_game_engine::handle_player_laser_designation(long) const;
// public: virtual void c_game_engine::adjust_object_gravity(long, float *) const;
// public: virtual void c_game_engine::score_header_string(class c_static_wchar_string<256> *) const;
// public: virtual bool c_game_engine::is_medal_allowed(long) const;
// public: virtual long c_game_engine::parse_multiplayer_string_token(long, wchar_t const *, long, struct s_incident_metadata const *, wchar_t *, long) const;
// public: virtual bool c_game_engine::enable_lead_change_messages(void) const;
// public: virtual bool c_game_engine::enable_tied_leader_messages(void) const;
// public: virtual long c_game_engine::get_message_chud_reference(void) const;
// protected: virtual void c_game_engine::emit_game_start_event(long) const;
// protected: virtual void c_game_engine::fire_team_get_interface_state(long, struct game_engine_interface_state *) const;
// protected: virtual void c_game_engine::build_interface_fireteam_member_status(long, long, struct s_mp_objective_fireteam_member *) const;
// public: virtual void c_game_engine::dump_settings(struct s_file_reference *) const;
// public: wchar_t const * c_game_engine_base_variant::get_description(void) const;
// public: static void c_game_engine::dump_player_trait_settings(char const *, class c_player_traits const *, struct s_file_reference *);
// public: virtual void c_game_engine::player_hump(long) const;
// public: virtual enum e_network_game_simulation_protocol c_game_engine::get_simulation_protocol(void) const;
// public: virtual bool c_game_engine::requires_valid_multiplayer_globals_in_scenario(void) const;
// public: virtual bool c_game_engine::desires_round_based_fading(void) const;
// public: virtual bool c_game_engine::competitive_game_in_progress(void) const;
// public: virtual bool c_game_engine::desires_garbage_collection(void) const;
// public: virtual bool c_game_engine::desires_influence_based_spawning(void) const;
// public: virtual bool c_game_engine::desires_teleporters(void) const;
// public: virtual enum e_game_engine_status c_game_engine::get_player_state_index(long, bool *) const;
// public: virtual enum e_simulation_entity_type c_game_engine::get_simulation_entity_type(void) const;
// public: virtual void c_game_engine::build_simulation_baseline(long, void *) const;
// public: virtual void c_game_engine::build_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const;
// public: virtual bool c_game_engine::apply_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const;
// public: virtual void c_game_engine::build_player_baseline(long, void *) const;
// public: virtual void c_game_engine::build_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const;
// public: virtual bool c_game_engine::apply_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const;
// public: virtual void c_game_engine::promote_to_simulation_authority(class c_bitstream *, enum e_game_engine_restoration_type) const;
// public: virtual void c_game_engine::build_snapshot_state(class c_bitstream *) const;
// public: virtual void c_game_engine::recover_state_before_promotion(void) const;
// public: virtual void c_game_engine::notify_authority_that_client_reset_game_engine_state(void) const;
// public: virtual void c_game_engine::build_global_baseline(struct s_game_engine_state_data *) const;
// public: virtual void c_game_engine::build_global_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_game_engine_state_data *) const;
// public: virtual bool c_game_engine::apply_global_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_game_engine_state_data const *) const;
// public: virtual void c_game_engine::close_any_custom_ui(enum e_output_user_index) const;
// void player_killed_player_perform_respawn_on_kill_check(long, long);
// void player_killed_player_check_for_respawn_time_growth(long, long);
// public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> const * s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::get_elements(void) const;
// public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> * s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::get_elements(void);
// public: unsigned int s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::get_total_element_size(void) const;
// public: static long s_static_array<struct s_mp_objective_fireteam_member, 3>::get_count(void);
// public: void s_static_array<enum e_multiplayer_team_designator, 9>::set_all(enum e_multiplayer_team_designator const &);
// public: void s_static_array<long, 9>::set_all(long const &);
// public: long c_static_stack<enum e_multiplayer_team_designator, 9>::count(void) const;
// public: long c_static_stack<enum e_multiplayer_team_designator, 9>::push(void);
// public: enum e_multiplayer_team_designator & c_static_stack<enum e_multiplayer_team_designator, 9>::operator[](long);
// public: c_static_stack<enum e_multiplayer_team_designator, 9>::c_static_stack<enum e_multiplayer_team_designator, 9>(void);
// public: bool c_static_stack<enum e_multiplayer_team_designator, 9>::valid(long) const;
// public: bool c_static_stack<enum e_multiplayer_team_designator, 9>::full(void) const;
// public: bool c_static_stack<enum e_multiplayer_team_designator, 9>::valid(void) const;
// public: long c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::count_set(void) const;
// public: bool c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_chud_navpoint_flags) const;
// public: unsigned char c_flags_no_init<enum e_game_engine_round_condition, unsigned char, 8, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_mp_objective_fireteam_member_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_mp_objective_fireteam_member_flags, bool);
// public: void c_static_wchar_string<19>::set(wchar_t const *);
// public: long & s_static_array<long, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: struct s_mp_objective_fireteam_member & s_static_array<struct s_mp_objective_fireteam_member, 3>::operator[]<long>(long);
// public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> & s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::operator[]<int>(int);
// public: char & s_static_array<char, 8>::operator[]<int>(int);
// public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> const & s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team) const;
// public: static bool c_flags_no_init<enum e_mp_objective_fireteam_member_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_mp_objective_fireteam_member_flags);
// private: static unsigned char c_flags_no_init<enum e_mp_objective_fireteam_member_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_mp_objective_fireteam_member_flags);
// public: static bool s_static_array<long, 9>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: static bool s_static_array<struct s_mp_objective_fireteam_member, 3>::valid<long>(long);
// public: static bool s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::valid<int>(int);
// public: static bool s_static_array<char, 8>::valid<int>(int);

//public: virtual enum e_game_engine_type c_game_engine::get_type(void) const
//{
//    mangled_ppc("?get_type@c_game_engine@@UBA?AW4e_game_engine_type@@XZ");
//};

//public: virtual long c_game_engine::get_score_to_win_round(void) const
//{
//    mangled_ppc("?get_score_to_win_round@c_game_engine@@UBAJXZ");
//};

//public: virtual void c_game_engine::recompute_team_score(enum e_multiplayer_team, long, enum e_team_scoring_method) const
//{
//    mangled_ppc("?recompute_team_score@c_game_engine@@UBAXW4e_multiplayer_team@@JW4e_team_scoring_method@@@Z");
//};

//public: virtual void c_game_engine::get_score_string(long, class c_static_wchar_string<256> *) const
//{
//    mangled_ppc("?get_score_string@c_game_engine@@UBAXJPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//public: virtual void c_game_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const
//{
//    mangled_ppc("?get_hud_interface_state@c_game_engine@@UBAXJPAUgame_engine_interface_state@@@Z");
//};

//public: virtual bool c_game_engine::get_objective_interface_state(long, struct s_objective_status *) const
//{
//    mangled_ppc("?get_objective_interface_state@c_game_engine@@UBA_NJPAUs_objective_status@@@Z");
//};

//public: virtual bool c_game_engine::minimap_available(long) const
//{
//    mangled_ppc("?minimap_available@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual bool c_game_engine::team_mapping_is_valid(void) const
//{
//    mangled_ppc("?team_mapping_is_valid@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::initialize_for_new_map(void) const
//{
//    mangled_ppc("?initialize_for_new_map@c_game_engine@@UBA_NXZ");
//};

//public: virtual void c_game_engine::dispose_from_old_map(void) const
//{
//    mangled_ppc("?dispose_from_old_map@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::initialize_for_new_round(void) const
//{
//    mangled_ppc("?initialize_for_new_round@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::stats_reset_for_round_switch(void) const
//{
//    mangled_ppc("?stats_reset_for_round_switch@c_game_engine@@UBAXXZ");
//};

//public: virtual bool c_game_engine::validate_team_designator_for_new_map(enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?validate_team_designator_for_new_map@c_game_engine@@UBA_NW4e_multiplayer_team_designator@@@Z");
//};

//void recompute_team_designators_rotate(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *)
//{
//    mangled_ppc("?recompute_team_designators_rotate@@YAXPAV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@PAV?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@@Z");
//};

//void recompute_team_designators_random(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *)
//{
//    mangled_ppc("?recompute_team_designators_random@@YAXPAV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@PAV?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@@Z");
//};

//void recompute_team_designators_none(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *)
//{
//    mangled_ppc("?recompute_team_designators_none@@YAXPAV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@PAV?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@@Z");
//};

//public: virtual void c_game_engine::build_valid_team_mapping(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *) const
//{
//    mangled_ppc("?build_valid_team_mapping@c_game_engine@@UBAXPAV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@PAV?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@0PAV?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@@Z");
//};

//public: virtual void c_game_engine::player_added(long) const
//{
//    mangled_ppc("?player_added@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::player_activated(long) const
//{
//    mangled_ppc("?player_activated@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::player_left(long) const
//{
//    mangled_ppc("?player_left@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::player_rejoined(long) const
//{
//    mangled_ppc("?player_rejoined@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::player_changed_indices(long, long) const
//{
//    mangled_ppc("?player_changed_indices@c_game_engine@@UBAXJJ@Z");
//};

//public: virtual void c_game_engine::player_changed_teams(long) const
//{
//    mangled_ppc("?player_changed_teams@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::player_about_to_spawn(long) const
//{
//    mangled_ppc("?player_about_to_spawn@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::player_just_spawned(long) const
//{
//    mangled_ppc("?player_just_spawned@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::game_ending(void) const
//{
//    mangled_ppc("?game_ending@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::game_starting(void) const
//{
//    mangled_ppc("?game_starting@c_game_engine@@UBAXXZ");
//};

//public: virtual bool c_game_engine::should_end_round(long *) const
//{
//    mangled_ppc("?should_end_round@c_game_engine@@UBA_NPAJ@Z");
//};

//public: virtual bool c_game_engine::should_update_round_timer(void) const
//{
//    mangled_ppc("?should_update_round_timer@c_game_engine@@UBA_NXZ");
//};

//public: virtual void c_game_engine::render(long) const
//{
//    mangled_ppc("?render@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::render_debug(long) const
//{
//    mangled_ppc("?render_debug@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::submit_navpoints(enum e_output_user_index, long) const
//{
//    mangled_ppc("?submit_navpoints@c_game_engine@@UBAXW4e_output_user_index@@J@Z");
//};

//public: virtual bool c_game_engine::build_player_navpoint(enum e_output_user_index, long, long, bool, struct c_chud_navpoint *) const
//{
//    mangled_ppc("?build_player_navpoint@c_game_engine@@UBA_NW4e_output_user_index@@JJ_NPAUc_chud_navpoint@@@Z");
//};

//bool voice_player_is_talking(long)
//{
//    mangled_ppc("?voice_player_is_talking@@YA_NJ@Z");
//};

//bool voice_lifecycle_in_game(void)
//{
//    mangled_ppc("?voice_lifecycle_in_game@@YA_NXZ");
//};

//public: virtual bool c_game_engine::should_draw_navpoint(enum e_output_user_index, long) const
//{
//    mangled_ppc("?should_draw_navpoint@c_game_engine@@UBA_NW4e_output_user_index@@J@Z");
//};

//public: virtual void c_game_engine::player_update(long) const
//{
//    mangled_ppc("?player_update@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::apply_baseline_traits_for_player(long, class c_player_traits *) const
//{
//    mangled_ppc("?apply_baseline_traits_for_player@c_game_engine@@UBAXJPAVc_player_traits@@@Z");
//};

//public: virtual void c_game_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const
//{
//    mangled_ppc("?apply_game_engine_traits_for_player@c_game_engine@@UBAXJPAVc_player_traits@@@Z");
//};

//public: virtual void c_game_engine::apply_ai_traits(class c_ai_traits *) const
//{
//    mangled_ppc("?apply_ai_traits@c_game_engine@@UBAXPAVc_ai_traits@@@Z");
//};

//public: virtual void c_game_engine::assemble_spawn_influencers_for_player(long, struct s_netgame_goal_influencer *, long *) const
//{
//    mangled_ppc("?assemble_spawn_influencers_for_player@c_game_engine@@UBAXJPAUs_netgame_goal_influencer@@PAJ@Z");
//};

//public: virtual bool c_game_engine::coop_spawning_enabled(long) const
//{
//    mangled_ppc("?coop_spawning_enabled@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual long c_game_engine::compare_players(long, long) const
//{
//    mangled_ppc("?compare_players@c_game_engine@@UBAJJJ@Z");
//};

//public: virtual long c_game_engine::compare_teams(enum e_multiplayer_team, enum e_multiplayer_team) const
//{
//    mangled_ppc("?compare_teams@c_game_engine@@UBAJW4e_multiplayer_team@@0@Z");
//};

//public: virtual char const * c_game_engine::get_key_set_from_scoring_type(long) const
//{
//    mangled_ppc("?get_key_set_from_scoring_type@c_game_engine@@UBAPBDJ@Z");
//};

//public: virtual void c_game_engine::handle_new_multiplayer_object(long) const
//{
//    mangled_ppc("?handle_new_multiplayer_object@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::handle_deleted_object(long) const
//{
//    mangled_ppc("?handle_deleted_object@c_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_game_engine::multiplayer_object_before_team_change(long, enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?multiplayer_object_before_team_change@c_game_engine@@UBAXJW4e_multiplayer_team_designator@@@Z");
//};

//public: virtual void c_game_engine::multiplayer_object_after_team_change(long, enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?multiplayer_object_after_team_change@c_game_engine@@UBAXJW4e_multiplayer_team_designator@@@Z");
//};

//public: virtual enum e_multiplayer_team_designator c_game_engine::get_player_team_designator(long) const
//{
//    mangled_ppc("?get_player_team_designator@c_game_engine@@UBA?AW4e_multiplayer_team_designator@@J@Z");
//};

//public: virtual void c_game_engine::update(void) const
//{
//    mangled_ppc("?update@c_game_engine@@UBAXXZ");
//};

//public: virtual bool c_game_engine::requires_scenario_object(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const
//{
//    mangled_ppc("?requires_scenario_object@c_game_engine@@UBA_NJW4e_object_type@@JPBUs_scenario_object@@PBUs_scenario_multiplayer_object_properties@@@Z");
//};

//public: virtual bool c_game_engine::requires_unplaced_object(struct s_object_placement_data const *) const
//{
//    mangled_ppc("?requires_unplaced_object@c_game_engine@@UBA_NPBUs_object_placement_data@@@Z");
//};

//public: virtual long c_game_engine::object_get_emblem_player(long) const
//{
//    mangled_ppc("?object_get_emblem_player@c_game_engine@@UBAJJ@Z");
//};

//public: virtual float c_game_engine::compute_object_function(long, long) const
//{
//    mangled_ppc("?compute_object_function@c_game_engine@@UBAMJJ@Z");
//};

//public: virtual bool c_game_engine::player_is_enemy(long, long) const
//{
//    mangled_ppc("?player_is_enemy@c_game_engine@@UBA_NJJ@Z");
//};

//public: virtual bool c_game_engine::team_is_enemy(enum e_multiplayer_team, enum e_multiplayer_team) const
//{
//    mangled_ppc("?team_is_enemy@c_game_engine@@UBA_NW4e_multiplayer_team@@0@Z");
//};

//public: virtual bool c_game_engine::allow_weapon_pickup(long, long) const
//{
//    mangled_ppc("?allow_weapon_pickup@c_game_engine@@UBA_NJJ@Z");
//};

//public: virtual bool c_game_engine::does_weapon_have_pickup_priority(long) const
//{
//    mangled_ppc("?does_weapon_have_pickup_priority@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual bool c_game_engine::should_auto_pickup_weapon(long, long) const
//{
//    mangled_ppc("?should_auto_pickup_weapon@c_game_engine@@UBA_NJJ@Z");
//};

//public: virtual void c_game_engine::player_damaged_player(long, long, long, bool) const
//{
//    mangled_ppc("?player_damaged_player@c_game_engine@@UBAXJJJ_N@Z");
//};

//public: virtual void c_game_engine::player_assisted_with_kill(long, long) const
//{
//    mangled_ppc("?player_assisted_with_kill@c_game_engine@@UBAXJJ@Z");
//};

//public: virtual long c_game_engine::player_killed_player_get_kill_message(long, long, bool) const
//{
//    mangled_ppc("?player_killed_player_get_kill_message@c_game_engine@@UBAJJJ_N@Z");
//};

//public: virtual void c_game_engine::handle_incident_begin(void) const
//{
//    mangled_ppc("?handle_incident_begin@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::handle_incident_end(void) const
//{
//    mangled_ppc("?handle_incident_end@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?handle_incident@c_game_engine@@UBAXJJJABUs_damage_reporting_info@@@Z");
//};

//public: virtual void c_game_engine::object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?object_killed@c_game_engine@@UBAXJJJABVc_game_team@@ABUs_damage_reporting_info@@@Z");
//};

//public: virtual bool c_game_engine::player_purchase_menu_available(long) const
//{
//    mangled_ppc("?player_purchase_menu_available@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual class c_flags<enum e_scenario_requisition_trigger_volume_flag, unsigned short, 5, struct s_default_enum_string_resolver> c_game_engine::get_player_purchase_flags(long) const
//{
//    mangled_ppc("?get_player_purchase_flags@c_game_engine@@UBA?AV?$c_flags@W4e_scenario_requisition_trigger_volume_flag@@G$04Us_default_enum_string_resolver@@@@J@Z");
//};

//public: virtual long c_game_engine::get_current_object_price(struct scenario_requisition_palette_entry const *, long) const
//{
//    mangled_ppc("?get_current_object_price@c_game_engine@@UBAJPBUscenario_requisition_palette_entry@@J@Z");
//};

//public: virtual bool c_game_engine::object_can_be_damaged(long) const
//{
//    mangled_ppc("?object_can_be_damaged@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual void c_game_engine::prepare_for_new_state(long) const
//{
//    mangled_ppc("?prepare_for_new_state@c_game_engine@@UBAXJ@Z");
//};

//public: virtual bool c_game_engine::handle_player_laser_designation(long) const
//{
//    mangled_ppc("?handle_player_laser_designation@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual void c_game_engine::adjust_object_gravity(long, float *) const
//{
//    mangled_ppc("?adjust_object_gravity@c_game_engine@@UBAXJPAM@Z");
//};

//public: virtual void c_game_engine::score_header_string(class c_static_wchar_string<256> *) const
//{
//    mangled_ppc("?score_header_string@c_game_engine@@UBAXPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//public: virtual bool c_game_engine::is_medal_allowed(long) const
//{
//    mangled_ppc("?is_medal_allowed@c_game_engine@@UBA_NJ@Z");
//};

//public: virtual long c_game_engine::parse_multiplayer_string_token(long, wchar_t const *, long, struct s_incident_metadata const *, wchar_t *, long) const
//{
//    mangled_ppc("?parse_multiplayer_string_token@c_game_engine@@UBAJJPB_WJPBUs_incident_metadata@@PA_WJ@Z");
//};

//public: virtual bool c_game_engine::enable_lead_change_messages(void) const
//{
//    mangled_ppc("?enable_lead_change_messages@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::enable_tied_leader_messages(void) const
//{
//    mangled_ppc("?enable_tied_leader_messages@c_game_engine@@UBA_NXZ");
//};

//public: virtual long c_game_engine::get_message_chud_reference(void) const
//{
//    mangled_ppc("?get_message_chud_reference@c_game_engine@@UBAJXZ");
//};

//protected: virtual void c_game_engine::emit_game_start_event(long) const
//{
//    mangled_ppc("?emit_game_start_event@c_game_engine@@MBAXJ@Z");
//};

//protected: virtual void c_game_engine::fire_team_get_interface_state(long, struct game_engine_interface_state *) const
//{
//    mangled_ppc("?fire_team_get_interface_state@c_game_engine@@MBAXJPAUgame_engine_interface_state@@@Z");
//};

//protected: virtual void c_game_engine::build_interface_fireteam_member_status(long, long, struct s_mp_objective_fireteam_member *) const
//{
//    mangled_ppc("?build_interface_fireteam_member_status@c_game_engine@@MBAXJJPAUs_mp_objective_fireteam_member@@@Z");
//};

//public: virtual void c_game_engine::dump_settings(struct s_file_reference *) const
//{
//    mangled_ppc("?dump_settings@c_game_engine@@UBAXPAUs_file_reference@@@Z");
//};

//public: wchar_t const * c_game_engine_base_variant::get_description(void) const
//{
//    mangled_ppc("?get_description@c_game_engine_base_variant@@QBAPB_WXZ");
//};

//public: static void c_game_engine::dump_player_trait_settings(char const *, class c_player_traits const *, struct s_file_reference *)
//{
//    mangled_ppc("?dump_player_trait_settings@c_game_engine@@SAXPBDPBVc_player_traits@@PAUs_file_reference@@@Z");
//};

//public: virtual void c_game_engine::player_hump(long) const
//{
//    mangled_ppc("?player_hump@c_game_engine@@UBAXJ@Z");
//};

//public: virtual enum e_network_game_simulation_protocol c_game_engine::get_simulation_protocol(void) const
//{
//    mangled_ppc("?get_simulation_protocol@c_game_engine@@UBA?AW4e_network_game_simulation_protocol@@XZ");
//};

//public: virtual bool c_game_engine::requires_valid_multiplayer_globals_in_scenario(void) const
//{
//    mangled_ppc("?requires_valid_multiplayer_globals_in_scenario@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::desires_round_based_fading(void) const
//{
//    mangled_ppc("?desires_round_based_fading@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::competitive_game_in_progress(void) const
//{
//    mangled_ppc("?competitive_game_in_progress@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::desires_garbage_collection(void) const
//{
//    mangled_ppc("?desires_garbage_collection@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::desires_influence_based_spawning(void) const
//{
//    mangled_ppc("?desires_influence_based_spawning@c_game_engine@@UBA_NXZ");
//};

//public: virtual bool c_game_engine::desires_teleporters(void) const
//{
//    mangled_ppc("?desires_teleporters@c_game_engine@@UBA_NXZ");
//};

//public: virtual enum e_game_engine_status c_game_engine::get_player_state_index(long, bool *) const
//{
//    mangled_ppc("?get_player_state_index@c_game_engine@@UBA?AW4e_game_engine_status@@JPA_N@Z");
//};

//public: virtual enum e_simulation_entity_type c_game_engine::get_simulation_entity_type(void) const
//{
//    mangled_ppc("?get_simulation_entity_type@c_game_engine@@UBA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual void c_game_engine::build_simulation_baseline(long, void *) const
//{
//    mangled_ppc("?build_simulation_baseline@c_game_engine@@UBAXJPAX@Z");
//};

//public: virtual void c_game_engine::build_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const
//{
//    mangled_ppc("?build_simulation_update@c_game_engine@@UBAXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_game_engine::apply_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const
//{
//    mangled_ppc("?apply_simulation_update@c_game_engine@@UBA_NV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual void c_game_engine::build_player_baseline(long, void *) const
//{
//    mangled_ppc("?build_player_baseline@c_game_engine@@UBAXJPAX@Z");
//};

//public: virtual void c_game_engine::build_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const
//{
//    mangled_ppc("?build_player_update@c_game_engine@@UBAXFPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_game_engine::apply_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const
//{
//    mangled_ppc("?apply_player_update@c_game_engine@@UBA_NFV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual void c_game_engine::promote_to_simulation_authority(class c_bitstream *, enum e_game_engine_restoration_type) const
//{
//    mangled_ppc("?promote_to_simulation_authority@c_game_engine@@UBAXPAVc_bitstream@@W4e_game_engine_restoration_type@@@Z");
//};

//public: virtual void c_game_engine::build_snapshot_state(class c_bitstream *) const
//{
//    mangled_ppc("?build_snapshot_state@c_game_engine@@UBAXPAVc_bitstream@@@Z");
//};

//public: virtual void c_game_engine::recover_state_before_promotion(void) const
//{
//    mangled_ppc("?recover_state_before_promotion@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::notify_authority_that_client_reset_game_engine_state(void) const
//{
//    mangled_ppc("?notify_authority_that_client_reset_game_engine_state@c_game_engine@@UBAXXZ");
//};

//public: virtual void c_game_engine::build_global_baseline(struct s_game_engine_state_data *) const
//{
//    mangled_ppc("?build_global_baseline@c_game_engine@@UBAXPAUs_game_engine_state_data@@@Z");
//};

//public: virtual void c_game_engine::build_global_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_game_engine_state_data *) const
//{
//    mangled_ppc("?build_global_update@c_game_engine@@UBAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PAV2@PAUs_game_engine_state_data@@@Z");
//};

//public: virtual bool c_game_engine::apply_global_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_game_engine_state_data const *) const
//{
//    mangled_ppc("?apply_global_update@c_game_engine@@UBA_NV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBUs_game_engine_state_data@@@Z");
//};

//public: virtual void c_game_engine::close_any_custom_ui(enum e_output_user_index) const
//{
//    mangled_ppc("?close_any_custom_ui@c_game_engine@@UBAXW4e_output_user_index@@@Z");
//};

//void player_killed_player_perform_respawn_on_kill_check(long, long)
//{
//    mangled_ppc("?player_killed_player_perform_respawn_on_kill_check@@YAXJJ@Z");
//};

//void player_killed_player_check_for_respawn_time_growth(long, long)
//{
//    mangled_ppc("?player_killed_player_check_for_respawn_time_growth@@YAXJJ@Z");
//};

//public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> const * s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QBAPBV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@XZ");
//};

//public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> * s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QAAPAV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@XZ");
//};

//public: unsigned int s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QBAIXZ");
//};

//public: static long s_static_array<struct s_mp_objective_fireteam_member, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_mp_objective_fireteam_member@@$02@@SAJXZ");
//};

//public: void s_static_array<enum e_multiplayer_team_designator, 9>::set_all(enum e_multiplayer_team_designator const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@W4e_multiplayer_team_designator@@$08@@QAAXABW4e_multiplayer_team_designator@@@Z");
//};

//public: void s_static_array<long, 9>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$08@@QAAXABJ@Z");
//};

//public: long c_static_stack<enum e_multiplayer_team_designator, 9>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QBAJXZ");
//};

//public: long c_static_stack<enum e_multiplayer_team_designator, 9>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QAAJXZ");
//};

//public: enum e_multiplayer_team_designator & c_static_stack<enum e_multiplayer_team_designator, 9>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QAAAAW4e_multiplayer_team_designator@@J@Z");
//};

//public: c_static_stack<enum e_multiplayer_team_designator, 9>::c_static_stack<enum e_multiplayer_team_designator, 9>(void)
//{
//    mangled_ppc("??0?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QAA@XZ");
//};

//public: bool c_static_stack<enum e_multiplayer_team_designator, 9>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QBA_NJ@Z");
//};

//public: bool c_static_stack<enum e_multiplayer_team_designator, 9>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QBA_NXZ");
//};

//public: bool c_static_stack<enum e_multiplayer_team_designator, 9>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@W4e_multiplayer_team_designator@@$08@@QBA_NXZ");
//};

//public: long c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_chud_navpoint_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_chud_navpoint_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_game_engine_round_condition, unsigned char, 8, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_game_engine_round_condition@@E$07Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_mp_objective_fireteam_member_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_mp_objective_fireteam_member_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_mp_objective_fireteam_member_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_mp_objective_fireteam_member_flags@@_N@Z");
//};

//public: void c_static_wchar_string<19>::set(wchar_t const *)
//{
//    mangled_ppc("?set@?$c_static_wchar_string@$0BD@@@QAAXPB_W@Z");
//};

//public: long & s_static_array<long, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team_designator@@@?$s_static_array@J$08@@QAAAAJW4e_multiplayer_team_designator@@@Z");
//};

//public: struct s_mp_objective_fireteam_member & s_static_array<struct s_mp_objective_fireteam_member, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_mp_objective_fireteam_member@@$02@@QAAAAUs_mp_objective_fireteam_member@@J@Z");
//};

//public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> & s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QAAAAV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@H@Z");
//};

//public: char & s_static_array<char, 8>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@D$07@@QAAAADH@Z");
//};

//public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> const & s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team) const
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QBAABV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@W4e_multiplayer_team@@@Z");
//};

//public: static bool c_flags_no_init<enum e_mp_objective_fireteam_member_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_mp_objective_fireteam_member_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_mp_objective_fireteam_member_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_mp_objective_fireteam_member_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_mp_objective_fireteam_member_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_mp_objective_fireteam_member_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_mp_objective_fireteam_member_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_mp_objective_fireteam_member_flags@@@Z");
//};

//public: static bool s_static_array<long, 9>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team_designator@@@?$s_static_array@J$08@@SA_NW4e_multiplayer_team_designator@@@Z");
//};

//public: static bool s_static_array<struct s_mp_objective_fireteam_member, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_mp_objective_fireteam_member@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@SA_NH@Z");
//};

//public: static bool s_static_array<char, 8>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@D$07@@SA_NH@Z");
//};

