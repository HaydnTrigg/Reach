/* ---------- headers */

#include "omaha\items\weapons.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_scenario_weapon_flags const c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_scenario_weapon_flags@@K$02Us_default_enum_string_resolver@@@@2W4e_scenario_weapon_flags@@B"
// public: static enum e_user_hint_spline_segment_flags const c_flags_no_init<enum e_user_hint_spline_segment_flags, unsigned short, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_user_hint_spline_segment_flags@@G$00Us_default_enum_string_resolver@@@@2W4e_user_hint_spline_segment_flags@@B"
// public: static long const s_static_array<struct s_simulation_action_projectile_fire_result, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_simulation_action_projectile_fire_result@@$0BA@@@2JB"
// bool debug_weapons_triggers; // "?debug_weapons_triggers@@3_NA"
// bool debug_weapons_barrels; // "?debug_weapons_barrels@@3_NA"
// bool debug_weapons_magazines; // "?debug_weapons_magazines@@3_NA"
// bool debug_weapons_primary; // "?debug_weapons_primary@@3_NA"
// bool debug_weapon_tracking; // "?debug_weapon_tracking@@3_NA"
// bool debug_weapons; // "?debug_weapons@@3_NA"
// bool debug_weapons_secondary; // "?debug_weapons_secondary@@3_NA"
// bool g_weapon_barrel_create_projectiles_log; // "?g_weapon_barrel_create_projectiles_log@@3_NA"

// void weapons_fire_barrels(void);
// void weapon_fire_barrels(long, struct s_predicted_weapon_fire_data const *, bool, long);
// long weapon_place(long, struct s_scenario_weapon const *);
// struct weapon_datum * object_try_and_dynamic_cast_to_weapon(long);
// bool weapon_new(long, struct s_object_placement_data *, bool *);
// void weapon_delete(long);
// void weapon_reset_and_idle_if_not_reloading(long, long);
// void weapon_effect_fire_empty_click(long, long);
// float weapon_get_pitch_throttling(long);
// long weapon_get_active_barrel_index(long);
// bool weapon_can_interrupt_reload(long);
// bool weapon_uses_3rd_person_camera(long);
// bool weapon_update(long);
// bool weapon_magazine_update(long, long);
// bool weapon_owner_submit_reload_action(long, short, bool);
// bool weapon_trigger_update(long, long);
// bool weapon_trigger_can_update_when_disabled(long, long);
// bool weapon_barrel_update(long, long);
// bool weapon_barrel_apply_fire_error(long, long, bool);
// bool weapon_update_physics(long);
// bool weapon_update_targeting(long);
// bool weapon_update_animation(long);
// public: short c_model_animation::get_frame_count(void) const;
// public: bool c_model_animation::is_shared(void) const;
// public: bool c_channel_base::valid(void) const;
// public: bool c_animation_id::valid(void) const;
// public: bool c_channel_base::initialized(void) const;
// public: bool c_animation_channel::playing(void) const;
// public: bool c_channel_base::autoplay_enabled(void) const;
// public: bool c_animation_channel::paused(void) const;
// public: bool c_animation_channel::playback_complete(void) const;
// public: bool c_animation_channel::reached_completion_frame(void) const;
// bool state_flags_test_matches(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>);
// public: class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> const & c_animation_channel::get_event_flags(void) const;
// public: class c_animation_channel const * c_animation_manager::get_state_channel(void) const;
// public: class c_model_animation const * c_animation_manager::get_state_animation(void) const;
// bool weapon_update_use_timers(long);
// bool weapon_update_detonation(long);
// bool weapon_update_power(long);
// bool weapon_update_heat(long);
// void weapon_unzoom(long, bool);
// bool weapon_update_state_timers(long);
// bool weapon_compute_function_value_ignore_unit_owner(long, long, long, float *, bool *, bool *);
// bool weapon_compute_function_value_internal(long, long, long, float *, bool *, bool *, bool);
// bool weapon_compute_function_value(long, long, long, float *, bool *, bool *);
// void weapon_handle_deleted_projectile(long, long);
// long weapon_get_label(long);
// bool weapon_handle_potential_inventory_item(long, long, long, long, short *);
// void weapon_ready(long, bool, bool);
// void weapon_unready(long);
// bool weapon_put_away(long, bool, bool);
// bool weapon_stop_put_away(long);
// bool weapon_destroy_barrel(long, long);
// bool weapon_damage_barrel(long, long);
// void weapon_inventory_unit_died(long);
// void weapon_owner_update(long, class c_flags<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>, float);
// void weapon_build_weapon_interface_state(long, struct weapon_interface_state *);
// void weapon_get_target_tracking_reticle_position(class c_aim_target_object const *, union real_point3d *);
// bool weapon_reloading(long, long, short *, short *);
// bool weapon_recently_reloading(long, long, short *);
// void weapon_magazine_execute_reload_networking(long);
// long weapon_get_magazine_state(long, long);
// bool weapon_has_any_rounds_loaded(long);
// long weapon_get_rounds_loaded(long, long);
// long weapon_get_rounds_inventory(long, long, bool);
// long weapon_get_rounds_total(long, long, bool);
// bool weapon_take_inventory_rounds(long, long, long);
// bool weapon_is_attached_to_unit(long);
// bool weapon_is_controlled_by_player(long);
// void weapon_set_power(long, float);
// void weapon_apply_predicted_state(long);
// void weapon_delay_predicted_state(long);
// void weapon_set_predicted_heat(long, float);
// void weapon_set_predicted_age(long, float);
// void weapon_set_predicted_rounds_loaded(long, short, short);
// void weapon_set_predicted_rounds_inventory(long, short, short);
// bool weapon_aim(long, short, union real_point3d const *, union real_point3d const *, float *, bool, union vector3d *, float *, float *, float *, bool *);
// float weapon_estimate_time_to_target(long, short, float, bool);
// bool weapon_can_be_fired(long);
// bool weapon_useful(long);
// float weapon_compute_movement_penalty(long, bool, bool);
// bool weapon_can_zoom(long);
// bool weapon_is_zoomable(long);
// short weapon_rotate_zoom_level(long, short);
// float weapon_get_field_of_view_change_time(long);
// float weapon_get_zoom_magnification(long, short);
// bool weapon_is_tracking(long);
// bool weapon_can_track(long);
// bool weapon_can_track_bipeds(long);
// long weapon_try_and_get_tracking_sound_definition_index(long);
// long weapon_try_and_get_locked_sound_definition_index(long);
// bool weapon_has_networked_aiming_consequences(long);
// bool weapon_must_be_readied(long);
// bool weapon_counts_towards_inventory_limit(long);
// bool weapon_prevents_melee_attack(long);
// bool weapon_is_melee_only(long);
// bool weapon_has_clang_melee(long);
// bool weapon_uses_charging_melee(long);
// bool weapon_allows_unaimed_lunge(long);
// bool weapon_disables_non_lunge_melee_dash(long);
// bool weapon_prevents_crouching(long);
// bool weapon_prevents_grenade_throwing(long);
// bool weapon_state_prevents_throwing(long);
// bool weapon_prevents_equipment_throwing(long);
// bool weapon_reload(long, long);
// void weapon_stop_reload(long, bool);
// bool weapon_overcharged(long);
// bool weapon_can_be_dual_wielded(long, long);
// bool weapon_can_only_be_dual_wielded(long);
// bool weapon_is_dual_wielded(long);
// void weapon_steal_goodies(long, long);
// void weapon_set_total_rounds(long, short const *);
// void weapon_set_initial_rounds(long, short, short, short);
// void weapon_set_initial_rounds_from_scenario_weapon(long, struct s_scenario_weapon const *);
// void weapon_set_current_amount(long, float);
// long weapon_barrel_get_marker_name(long, long);
// bool weapon_get_trigger_position(long, short, union real_point3d *);
// bool weapon_action_can_be_interrupted(long);
// void weapon_report_kill(long, long);
// bool weapon_is_being_suppressed_by_equipment(long);
// bool weapon_firing_is_disabled(long);
// bool weapon_is_ready_for_use(long);
// bool weapon_definition_is_age_based(long);
// bool weapon_is_age_based(long);
// bool weapon_definition_is_support_weapon(long);
// bool weapon_is_support_weapon(long);
// bool weapon_is_support_weapon_or_must_be_readied(long);
// bool weapon_age_external(long);
// bool weapon_is_venting(long);
// bool weapon_can_vent(long);
// char const * weapon_get_vent_state_name(short);
// void weapon_set_vent_state(long, short);
// bool weapon_has_vented_for_anim_duration(long, bool);
// bool weapon_update_vent(long);
// void weapon_vent(long);
// void weapon_stop_vent(long, bool);
// void weapon_reset_and_idle_if_not_venting(long);
// void weapon_age(long, float);
// struct weapon_barrel * weapon_barrel_get(struct weapon_datum *, short);
// struct weapon_trigger * weapon_trigger_get(struct weapon_datum *, short);
// struct weapon_magazine * weapon_magazine_get(struct weapon_datum *, short);
// long weapon_get_effect_object_index(long);
// long weapon_get_owner_unit_index(long);
// long weapon_get_owner_unit_inventory_index(long);
// long weapon_get_projectile_owner_unit_index(long);
// void weapon_notify_inventory_ownership_changed(long);
// float weapon_trigger_get_charged_fraction(long, short);
// float weapon_trigger_get_charged_with_cooldown_fraction(long, short, bool);
// float weapon_trigger_get_spew_fraction(long, short);
// float weapon_barrel_compute_ticks_per_round(long, short, bool);
// bool weapon_barrel_can_fire_this_tick_predicted(long, short, long *, long *, long *, long *, long *);
// bool weapon_barrel_must_recover_predicted(long, short);
// void weapon_barrel_force_immediate_recover_completion(long, short);
// bool weapon_barrel_is_spew_networking_suppressed(long, short);
// bool weapon_barrel_can_fire_this_tick(long, short, bool *, bool *, bool *);
// bool weapon_barrel_is_recovering(long, short);
// bool weapon_barrel_is_locked_recovering(long, short);
// bool weapon_barrel_check_for_reload(long, long);
// bool weapon_barrel_can_fire(long, short, bool);
// bool weapon_barrel_markers_can_fire(long, short);
// void weapon_trigger_determine_analog_autofire_behavior(long, long, bool *, bool *, bool *);
// bool weapon_magazine_starting_continuous_reload(long, short);
// void weapon_hold_trigger_hs(long, long, bool);
// bool weapon_magazine_start_or_continue_reload(long, short);
// bool weapon_magazine_state_change_ok(long);
// void weapon_magazine_execute_reload(long, short);
// void weapon_magazine_finish_reload(long, short, bool);
// void weapon_magazine_start_chamber(long, short);
// bool weapon_magazine_is_reloading(long, short, short *, short *);
// bool weapon_magazine_recently_reloading(long, short, short *);
// long weapon_magazine_get_state(long, short);
// void weapon_trigger_fully_charged(long, short);
// void weapon_trigger_release_charge(long, short);
// void weapon_trigger_overcharged(long, short);
// bool get_weapon_trigger_is_overcharged(long, short);
// void weapon_barrel_set_fire_bit(long, short, bool);
// void weapon_barrel_clear_empty_click_bit(long, short);
// void weapon_trigger_tethered_projectile_release(long, long, bool);
// void weapon_release_tethered_projectile(long);
// void weapon_unlink_tethered_projectile(long, bool);
// bool weapon_trigger_is_still_latching_tethered_projectile(long);
// bool weapon_is_tethered_to_projectile(long, long);
// void weapon_barrel_fire(long, short, bool);
// long weapon_barrel_get_bonus_allowed(long, long, bool);
// bool weapon_magazine_can_fire_weapon(long, long, long, bool);
// void weapon_barrel_fire_update_magazine(long, long, long);
// void weapon_barrel_fire_update_barrel(long, long, long);
// bool weapon_barrel_will_misfire(long, long);
// void weapon_barrel_fire_interrupt_reload(long);
// void weapon_barrel_fire_notify_game(long);
// void weapon_barrel_fire_ding_camouflage(long);
// void weapon_barrel_fire_weapon_heat(long, long);
// void weapon_heat(long, float);
// void weapon_barrel_fire_weapon_age(long, long, bool);
// void weapon_barrel_perform_empty_click(long, short);
// void weapon_barrel_fire_create_effects(long, long, bool, bool);
// void weapon_barrel_fire_get_effect_data(long, long, bool, bool, struct s_weapon_barrel_fire_effect_info *);
// void weapon_barrel_fire_create_reflexive_effects(long, struct s_weapon_barrel_fire_effect_info const *);
// void weapon_barrel_fire_create_firing_effects(long, long, struct s_weapon_barrel_fire_effect_info const *);
// long weapon_effect_new(long, long, long, float, float);
// void weapon_trigger_recover(long, short, bool);
// void weapon_trigger_idle(long, short);
// bool weapon_trigger_can_begin_charging(long, short);
// void weapon_trigger_begin_charging(long, short);
// void weapon_barrel_idle(long, short);
// bool weapon_barrel_can_owner_override_firing_parameters(long);
// void weapon_barrel_compute_recovery_ticks(long, short, float *, float *);
// void weapon_barrel_recover(long, short, bool);
// void weapon_barrel_set_predicted_recover(long, short);
// void weapon_barrel_finish_recover(long, short);
// float weapon_barrel_get_barrel_error_angle_from_weapon(long, long, bool, short, float);
// void weapon_detonate(long);
// void weapon_trigger_change_state(long, short, short, short);
// void weapon_trigger_set_charged_shots(long, short, unsigned char);
// void weapon_reset(long);
// void weapon_barrel_create_projectiles(long, short, struct s_predicted_weapon_fire_data const *, bool);
// long int_min(int, unsigned char);
// bool projectile_definition_supports_burst_group_counting(long);
// public: c_stimulus_distribution::c_stimulus_distribution(void);
// public: void c_stimulus_distribution::set_immediate(bool);
// public: c_stimulus_origin::c_stimulus_origin(void);
// public: c_stimulus_payload::c_stimulus_payload(void);
// unsigned long weapon_barrel_create_projectiles_get_initial_random_seed(long, struct s_predicted_weapon_fire_data const *, bool, bool, unsigned long *);
// public: s_damage_data::s_damage_data(void);
// float weapon_get_projectile_error(long, long);
// void weapon_set_projectile_error(long, long, float);
// float weapon_get_maximum_damage_range(long);
// bool weapon_must_stay_awake_for_accuracy_penalties(long);
// void weapon_barrel_accuracy_penalty_movement(long, long);
// bool weapon_barrel_evaluate_penalty_function(long, long, bool, enum s_projectile_accuracy_penalty_functions::e_penalty_function, float, float *);
// void weapon_barrel_accuracy_penalty_rotation(long, union vector3d const *, union vector3d const *);
// void weapon_barrel_accuracy_penalty_firing(long, long);
// void weapon_barrel_accuracy_penalty_jump(long);
// void weapon_barrel_accuracy_ding(long, enum s_projectile_accuracy_penalty_info::e_penalty_ding);
// void weapon_barrel_accuracy_penalty_weapon_switch(long);
// void weapon_barrel_accuracy_penalty_reload(long);
// void weapon_barrel_accuracy_penalty_zoom(long);
// bool weapon_get_safe_trigger_position(long, union real_point3d *);
// void projectile_distribute(union vector3d *, union vector3d const *, short, float, short, short);
// void weapon_barrel_start_ejection_port(long, short, bool);
// void weapon_state_key_frame(long);
// void weapon_state_next(long, bool);
// bool weapon_magazine_state_interruptable(short, short);
// bool weapon_set_state(long, long, bool);
// bool weapon_state_interruptable(long, long);
// float weapon_get_reload_percentage(long, long);
// float weapon_get_barrel_recovery_percentage(long, long);
// void weapon_magazine_set_state(long, short, short);
// enum e_unit_messages weapon_magazine_get_reload_unit_message(long, short, bool);
// void weapon_reset_first_person_emulation(long);
// public: void c_animation_id::clear(void);
// bool weapon_is_controlled_by_local_player(long);
// void weapon_update_overheat_from_authority(long, bool, bool);
// void emulated_first_person_handle_sound_interruptions(long, long, bool);
// bool weapon_setup_first_person_emulation(long, long);
// public: c_animation_id::~c_animation_id(void);
// public: c_animation_manager::~c_animation_manager(void);
// void emulated_first_person_animation_callback(struct s_animation_event_data const *, long);
// bool weapon_update_first_person_emulation(long);
// void weapon_send_message_to_unit(long, enum e_unit_messages);
// bool weapon_has_infinite_ammo(long);
// bool weapon_has_bottomless_clip(long);
// bool weapon_is_charged_plasma_pistol(long, bool);
// float weapon_get_age(long);
// bool weapon_is_depleted(long);
// bool weapon_can_be_stowed(long, long, bool);
// void weapon_stow(long, long);
// bool weapon_should_set_targeting_data(long, struct s_projectile_targeting_data const *);
// long weapon_respond_to_drop(long);
// bool weapon_available_for_pickup(long, long, union real_point3d const *, float);
// struct s_melee_damage_parameters const * weapon_get_melee_damage_parameters(long);
// bool indirect_fire_compute_ballistics(long, long, long, union real_point3d const *, union vector3d *, float *);
// bool indirect_fire_get_aim_target_position(long, union real_point3d *);
// float indirect_fire_compute_arcing_fraction(long, float);
// void weapon_set_primary_barrel_firing(long, bool);
// void weapon_debug_render(long, long);
// void weapons_debug_render(void);
// void weapons_debug_render_toggle(void);
// public: class c_enum_no_init<enum e_unit_melee_player_types, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_unit_melee_player_types, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_unit_melee_player_types);
// public: class c_enum_no_init<enum e_unit_melee_prediction_types, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_unit_melee_prediction_types, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_unit_melee_prediction_types);
// public: c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>(unsigned long);
// public: void c_object_iterator<struct weapon_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct weapon_datum>::next(void);
// public: struct weapon_datum * c_object_iterator<struct weapon_datum>::get_datum(void);
// protected: struct object_datum * c_object_iterator_base::get_datum_internal(void);
// public: struct s_simulation_action_projectile_fire_result * s_static_array<struct s_simulation_action_projectile_fire_result, 16>::get_elements(void);
// public: static long s_static_array<struct s_simulation_action_projectile_fire_result, 16>::get_count(void);
// public: bool c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::test(enum e_animation_frame_event_types) const;
// public: bool c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::test(enum e_animation_state_flags) const;
// public: bool c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_item_datum_flags) const;
// public: void c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_item_datum_flags, bool);
// public: void c_flags_no_init<enum e_weapon_flags, unsigned short, 6, struct s_default_enum_string_resolver>::set(enum e_weapon_flags, bool);
// public: void c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_weapon_control_flags) const;
// public: void c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_weapon_control_flags, bool);
// public: unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::c_flags<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_weapon_barrel_definition_flags, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_weapon_barrel_definition_flags) const;
// public: bool c_flags_no_init<enum e_weapon_definition_flags, unsigned long, 32, struct s_default_enum_string_resolver>::test(enum e_weapon_definition_flags) const;
// public: bool c_flags_no_init<enum e_weapon_definition_secondary_flags, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_weapon_definition_secondary_flags) const;
// public: bool c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_scenario_weapon_flags) const;
// public: bool c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_model_target_flags) const;
// public: void c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set(enum e_animation_state_change_flags, bool);
// public: bool c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_animation_playback_flags) const;
// public: void c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set(enum e_animation_playback_flags, bool);
// public: void c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: void c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::set(enum e_distribution_flags, bool);
// public: bool c_flags_no_init<enum e_unit_definition_flags, unsigned long, 30, struct s_default_enum_string_resolver>::test(enum e_unit_definition_flags) const;
// public: bool c_flags_no_init<enum e_vehicle_definition_flags, unsigned long, 13, struct s_default_enum_string_resolver>::test(enum e_vehicle_definition_flags) const;
// void simulation_action_object_update<enum e_simulation_weapon_update_flag>(long, enum e_simulation_weapon_update_flag);
// public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_weapon_update_flag);
// unsigned long fast_checksum<union vector3d>(unsigned long, union vector3d const *);
// public: struct s_predicted_weapon_fire_projectile_data const & s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::operator[]<long>(long) const;
// public: struct s_simulation_action_projectile_fire_result & s_static_array<struct s_simulation_action_projectile_fire_result, 16>::operator[]<long>(long);
// bool operator!=<enum e_unit_messages>(enum e_unit_messages const &, enum e_none_sentinel const &);
// public: static bool c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_frame_event_types);
// private: static unsigned long c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_frame_event_types);
// public: static bool c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_state_flags);
// private: static unsigned long c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_state_flags);
// public: static bool c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_item_datum_flags);
// private: static unsigned char c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_item_datum_flags);
// public: bool c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_control_flags);
// private: static unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_control_flags);
// public: static bool c_flags_no_init<enum e_weapon_barrel_definition_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_barrel_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_weapon_barrel_definition_flags, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_barrel_definition_flags);
// public: static bool c_flags_no_init<enum e_weapon_definition_flags, unsigned long, 32, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_weapon_definition_flags, unsigned long, 32, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_definition_flags);
// public: static bool c_flags_no_init<enum e_weapon_definition_secondary_flags, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_definition_secondary_flags);
// private: static unsigned long c_flags_no_init<enum e_weapon_definition_secondary_flags, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_definition_secondary_flags);
// public: static bool c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_weapon_flags);
// private: static unsigned long c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_weapon_flags);
// public: static bool c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_model_target_flags);
// private: static unsigned char c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_model_target_flags);
// public: static bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_state_change_flags);
// private: static unsigned short c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_state_change_flags);
// public: static bool c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_playback_flags);
// public: bool c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_playback_flags);
// public: static bool c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_flags);
// private: static short c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_flags);
// public: static bool c_flags_no_init<enum e_unit_definition_flags, unsigned long, 30, struct s_default_enum_string_resolver>::valid_bit(enum e_unit_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_unit_definition_flags, unsigned long, 30, struct s_default_enum_string_resolver>::flag_size_type(enum e_unit_definition_flags);
// public: static bool c_flags_no_init<enum e_vehicle_definition_flags, unsigned long, 13, struct s_default_enum_string_resolver>::valid_bit(enum e_vehicle_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_vehicle_definition_flags, unsigned long, 13, struct s_default_enum_string_resolver>::flag_size_type(enum e_vehicle_definition_flags);
// void prefetch<union vector3d>(union vector3d const *);
// public: static bool s_static_array<struct s_simulation_action_projectile_fire_result, 16>::valid<long>(long);
// bool operator==<enum e_unit_messages>(enum e_unit_messages const &, enum e_none_sentinel const &);
// private: static unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_weapon_control_flags);
// private: static unsigned long c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_playback_flags);
// float power(float, float);
// float normalize_and_clamp_linear(float, float, float, bool);

//void weapons_fire_barrels(void)
//{
//    mangled_ppc("?weapons_fire_barrels@@YAXXZ");
//};

//void weapon_fire_barrels(long, struct s_predicted_weapon_fire_data const *, bool, long)
//{
//    mangled_ppc("?weapon_fire_barrels@@YAXJPBUs_predicted_weapon_fire_data@@_NJ@Z");
//};

//long weapon_place(long, struct s_scenario_weapon const *)
//{
//    mangled_ppc("?weapon_place@@YAJJPBUs_scenario_weapon@@@Z");
//};

//struct weapon_datum * object_try_and_dynamic_cast_to_weapon(long)
//{
//    mangled_ppc("?object_try_and_dynamic_cast_to_weapon@@YAPAUweapon_datum@@J@Z");
//};

//bool weapon_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?weapon_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void weapon_delete(long)
//{
//    mangled_ppc("?weapon_delete@@YAXJ@Z");
//};

//void weapon_reset_and_idle_if_not_reloading(long, long)
//{
//    mangled_ppc("?weapon_reset_and_idle_if_not_reloading@@YAXJJ@Z");
//};

//void weapon_effect_fire_empty_click(long, long)
//{
//    mangled_ppc("?weapon_effect_fire_empty_click@@YAXJJ@Z");
//};

//float weapon_get_pitch_throttling(long)
//{
//    mangled_ppc("?weapon_get_pitch_throttling@@YAMJ@Z");
//};

//long weapon_get_active_barrel_index(long)
//{
//    mangled_ppc("?weapon_get_active_barrel_index@@YAJJ@Z");
//};

//bool weapon_can_interrupt_reload(long)
//{
//    mangled_ppc("?weapon_can_interrupt_reload@@YA_NJ@Z");
//};

//bool weapon_uses_3rd_person_camera(long)
//{
//    mangled_ppc("?weapon_uses_3rd_person_camera@@YA_NJ@Z");
//};

//bool weapon_update(long)
//{
//    mangled_ppc("?weapon_update@@YA_NJ@Z");
//};

//bool weapon_magazine_update(long, long)
//{
//    mangled_ppc("?weapon_magazine_update@@YA_NJJ@Z");
//};

//bool weapon_owner_submit_reload_action(long, short, bool)
//{
//    mangled_ppc("?weapon_owner_submit_reload_action@@YA_NJF_N@Z");
//};

//bool weapon_trigger_update(long, long)
//{
//    mangled_ppc("?weapon_trigger_update@@YA_NJJ@Z");
//};

//bool weapon_trigger_can_update_when_disabled(long, long)
//{
//    mangled_ppc("?weapon_trigger_can_update_when_disabled@@YA_NJJ@Z");
//};

//bool weapon_barrel_update(long, long)
//{
//    mangled_ppc("?weapon_barrel_update@@YA_NJJ@Z");
//};

//bool weapon_barrel_apply_fire_error(long, long, bool)
//{
//    mangled_ppc("?weapon_barrel_apply_fire_error@@YA_NJJ_N@Z");
//};

//bool weapon_update_physics(long)
//{
//    mangled_ppc("?weapon_update_physics@@YA_NJ@Z");
//};

//bool weapon_update_targeting(long)
//{
//    mangled_ppc("?weapon_update_targeting@@YA_NJ@Z");
//};

//bool weapon_update_animation(long)
//{
//    mangled_ppc("?weapon_update_animation@@YA_NJ@Z");
//};

//public: short c_model_animation::get_frame_count(void) const
//{
//    mangled_ppc("?get_frame_count@c_model_animation@@QBAFXZ");
//};

//public: bool c_model_animation::is_shared(void) const
//{
//    mangled_ppc("?is_shared@c_model_animation@@QBA_NXZ");
//};

//public: bool c_channel_base::valid(void) const
//{
//    mangled_ppc("?valid@c_channel_base@@QBA_NXZ");
//};

//public: bool c_animation_id::valid(void) const
//{
//    mangled_ppc("?valid@c_animation_id@@QBA_NXZ");
//};

//public: bool c_channel_base::initialized(void) const
//{
//    mangled_ppc("?initialized@c_channel_base@@QBA_NXZ");
//};

//public: bool c_animation_channel::playing(void) const
//{
//    mangled_ppc("?playing@c_animation_channel@@QBA_NXZ");
//};

//public: bool c_channel_base::autoplay_enabled(void) const
//{
//    mangled_ppc("?autoplay_enabled@c_channel_base@@QBA_NXZ");
//};

//public: bool c_animation_channel::paused(void) const
//{
//    mangled_ppc("?paused@c_animation_channel@@QBA_NXZ");
//};

//public: bool c_animation_channel::playback_complete(void) const
//{
//    mangled_ppc("?playback_complete@c_animation_channel@@QBA_NXZ");
//};

//public: bool c_animation_channel::reached_completion_frame(void) const
//{
//    mangled_ppc("?reached_completion_frame@c_animation_channel@@QBA_NXZ");
//};

//bool state_flags_test_matches(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?state_flags_test_matches@@YA_NV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> const & c_animation_channel::get_event_flags(void) const
//{
//    mangled_ppc("?get_event_flags@c_animation_channel@@QBAABV?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_animation_channel const * c_animation_manager::get_state_channel(void) const
//{
//    mangled_ppc("?get_state_channel@c_animation_manager@@QBAPBVc_animation_channel@@XZ");
//};

//public: class c_model_animation const * c_animation_manager::get_state_animation(void) const
//{
//    mangled_ppc("?get_state_animation@c_animation_manager@@QBAPBVc_model_animation@@XZ");
//};

//bool weapon_update_use_timers(long)
//{
//    mangled_ppc("?weapon_update_use_timers@@YA_NJ@Z");
//};

//bool weapon_update_detonation(long)
//{
//    mangled_ppc("?weapon_update_detonation@@YA_NJ@Z");
//};

//bool weapon_update_power(long)
//{
//    mangled_ppc("?weapon_update_power@@YA_NJ@Z");
//};

//bool weapon_update_heat(long)
//{
//    mangled_ppc("?weapon_update_heat@@YA_NJ@Z");
//};

//void weapon_unzoom(long, bool)
//{
//    mangled_ppc("?weapon_unzoom@@YAXJ_N@Z");
//};

//bool weapon_update_state_timers(long)
//{
//    mangled_ppc("?weapon_update_state_timers@@YA_NJ@Z");
//};

//bool weapon_compute_function_value_ignore_unit_owner(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?weapon_compute_function_value_ignore_unit_owner@@YA_NJJJPAMPA_N1@Z");
//};

//bool weapon_compute_function_value_internal(long, long, long, float *, bool *, bool *, bool)
//{
//    mangled_ppc("?weapon_compute_function_value_internal@@YA_NJJJPAMPA_N1_N@Z");
//};

//bool weapon_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?weapon_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//void weapon_handle_deleted_projectile(long, long)
//{
//    mangled_ppc("?weapon_handle_deleted_projectile@@YAXJJ@Z");
//};

//long weapon_get_label(long)
//{
//    mangled_ppc("?weapon_get_label@@YAJJ@Z");
//};

//bool weapon_handle_potential_inventory_item(long, long, long, long, short *)
//{
//    mangled_ppc("?weapon_handle_potential_inventory_item@@YA_NJJJJPAF@Z");
//};

//void weapon_ready(long, bool, bool)
//{
//    mangled_ppc("?weapon_ready@@YAXJ_N0@Z");
//};

//void weapon_unready(long)
//{
//    mangled_ppc("?weapon_unready@@YAXJ@Z");
//};

//bool weapon_put_away(long, bool, bool)
//{
//    mangled_ppc("?weapon_put_away@@YA_NJ_N0@Z");
//};

//bool weapon_stop_put_away(long)
//{
//    mangled_ppc("?weapon_stop_put_away@@YA_NJ@Z");
//};

//bool weapon_destroy_barrel(long, long)
//{
//    mangled_ppc("?weapon_destroy_barrel@@YA_NJJ@Z");
//};

//bool weapon_damage_barrel(long, long)
//{
//    mangled_ppc("?weapon_damage_barrel@@YA_NJJ@Z");
//};

//void weapon_inventory_unit_died(long)
//{
//    mangled_ppc("?weapon_inventory_unit_died@@YAXJ@Z");
//};

//void weapon_owner_update(long, class c_flags<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>, float)
//{
//    mangled_ppc("?weapon_owner_update@@YAXJV?$c_flags@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@M@Z");
//};

//void weapon_build_weapon_interface_state(long, struct weapon_interface_state *)
//{
//    mangled_ppc("?weapon_build_weapon_interface_state@@YAXJPAUweapon_interface_state@@@Z");
//};

//void weapon_get_target_tracking_reticle_position(class c_aim_target_object const *, union real_point3d *)
//{
//    mangled_ppc("?weapon_get_target_tracking_reticle_position@@YAXPBVc_aim_target_object@@PATreal_point3d@@@Z");
//};

//bool weapon_reloading(long, long, short *, short *)
//{
//    mangled_ppc("?weapon_reloading@@YA_NJJPAF0@Z");
//};

//bool weapon_recently_reloading(long, long, short *)
//{
//    mangled_ppc("?weapon_recently_reloading@@YA_NJJPAF@Z");
//};

//void weapon_magazine_execute_reload_networking(long)
//{
//    mangled_ppc("?weapon_magazine_execute_reload_networking@@YAXJ@Z");
//};

//long weapon_get_magazine_state(long, long)
//{
//    mangled_ppc("?weapon_get_magazine_state@@YAJJJ@Z");
//};

//bool weapon_has_any_rounds_loaded(long)
//{
//    mangled_ppc("?weapon_has_any_rounds_loaded@@YA_NJ@Z");
//};

//long weapon_get_rounds_loaded(long, long)
//{
//    mangled_ppc("?weapon_get_rounds_loaded@@YAJJJ@Z");
//};

//long weapon_get_rounds_inventory(long, long, bool)
//{
//    mangled_ppc("?weapon_get_rounds_inventory@@YAJJJ_N@Z");
//};

//long weapon_get_rounds_total(long, long, bool)
//{
//    mangled_ppc("?weapon_get_rounds_total@@YAJJJ_N@Z");
//};

//bool weapon_take_inventory_rounds(long, long, long)
//{
//    mangled_ppc("?weapon_take_inventory_rounds@@YA_NJJJ@Z");
//};

//bool weapon_is_attached_to_unit(long)
//{
//    mangled_ppc("?weapon_is_attached_to_unit@@YA_NJ@Z");
//};

//bool weapon_is_controlled_by_player(long)
//{
//    mangled_ppc("?weapon_is_controlled_by_player@@YA_NJ@Z");
//};

//void weapon_set_power(long, float)
//{
//    mangled_ppc("?weapon_set_power@@YAXJM@Z");
//};

//void weapon_apply_predicted_state(long)
//{
//    mangled_ppc("?weapon_apply_predicted_state@@YAXJ@Z");
//};

//void weapon_delay_predicted_state(long)
//{
//    mangled_ppc("?weapon_delay_predicted_state@@YAXJ@Z");
//};

//void weapon_set_predicted_heat(long, float)
//{
//    mangled_ppc("?weapon_set_predicted_heat@@YAXJM@Z");
//};

//void weapon_set_predicted_age(long, float)
//{
//    mangled_ppc("?weapon_set_predicted_age@@YAXJM@Z");
//};

//void weapon_set_predicted_rounds_loaded(long, short, short)
//{
//    mangled_ppc("?weapon_set_predicted_rounds_loaded@@YAXJFF@Z");
//};

//void weapon_set_predicted_rounds_inventory(long, short, short)
//{
//    mangled_ppc("?weapon_set_predicted_rounds_inventory@@YAXJFF@Z");
//};

//bool weapon_aim(long, short, union real_point3d const *, union real_point3d const *, float *, bool, union vector3d *, float *, float *, float *, bool *)
//{
//    mangled_ppc("?weapon_aim@@YA_NJFPBTreal_point3d@@0PAM_NPATvector3d@@111PA_N@Z");
//};

//float weapon_estimate_time_to_target(long, short, float, bool)
//{
//    mangled_ppc("?weapon_estimate_time_to_target@@YAMJFM_N@Z");
//};

//bool weapon_can_be_fired(long)
//{
//    mangled_ppc("?weapon_can_be_fired@@YA_NJ@Z");
//};

//bool weapon_useful(long)
//{
//    mangled_ppc("?weapon_useful@@YA_NJ@Z");
//};

//float weapon_compute_movement_penalty(long, bool, bool)
//{
//    mangled_ppc("?weapon_compute_movement_penalty@@YAMJ_N0@Z");
//};

//bool weapon_can_zoom(long)
//{
//    mangled_ppc("?weapon_can_zoom@@YA_NJ@Z");
//};

//bool weapon_is_zoomable(long)
//{
//    mangled_ppc("?weapon_is_zoomable@@YA_NJ@Z");
//};

//short weapon_rotate_zoom_level(long, short)
//{
//    mangled_ppc("?weapon_rotate_zoom_level@@YAFJF@Z");
//};

//float weapon_get_field_of_view_change_time(long)
//{
//    mangled_ppc("?weapon_get_field_of_view_change_time@@YAMJ@Z");
//};

//float weapon_get_zoom_magnification(long, short)
//{
//    mangled_ppc("?weapon_get_zoom_magnification@@YAMJF@Z");
//};

//bool weapon_is_tracking(long)
//{
//    mangled_ppc("?weapon_is_tracking@@YA_NJ@Z");
//};

//bool weapon_can_track(long)
//{
//    mangled_ppc("?weapon_can_track@@YA_NJ@Z");
//};

//bool weapon_can_track_bipeds(long)
//{
//    mangled_ppc("?weapon_can_track_bipeds@@YA_NJ@Z");
//};

//long weapon_try_and_get_tracking_sound_definition_index(long)
//{
//    mangled_ppc("?weapon_try_and_get_tracking_sound_definition_index@@YAJJ@Z");
//};

//long weapon_try_and_get_locked_sound_definition_index(long)
//{
//    mangled_ppc("?weapon_try_and_get_locked_sound_definition_index@@YAJJ@Z");
//};

//bool weapon_has_networked_aiming_consequences(long)
//{
//    mangled_ppc("?weapon_has_networked_aiming_consequences@@YA_NJ@Z");
//};

//bool weapon_must_be_readied(long)
//{
//    mangled_ppc("?weapon_must_be_readied@@YA_NJ@Z");
//};

//bool weapon_counts_towards_inventory_limit(long)
//{
//    mangled_ppc("?weapon_counts_towards_inventory_limit@@YA_NJ@Z");
//};

//bool weapon_prevents_melee_attack(long)
//{
//    mangled_ppc("?weapon_prevents_melee_attack@@YA_NJ@Z");
//};

//bool weapon_is_melee_only(long)
//{
//    mangled_ppc("?weapon_is_melee_only@@YA_NJ@Z");
//};

//bool weapon_has_clang_melee(long)
//{
//    mangled_ppc("?weapon_has_clang_melee@@YA_NJ@Z");
//};

//bool weapon_uses_charging_melee(long)
//{
//    mangled_ppc("?weapon_uses_charging_melee@@YA_NJ@Z");
//};

//bool weapon_allows_unaimed_lunge(long)
//{
//    mangled_ppc("?weapon_allows_unaimed_lunge@@YA_NJ@Z");
//};

//bool weapon_disables_non_lunge_melee_dash(long)
//{
//    mangled_ppc("?weapon_disables_non_lunge_melee_dash@@YA_NJ@Z");
//};

//bool weapon_prevents_crouching(long)
//{
//    mangled_ppc("?weapon_prevents_crouching@@YA_NJ@Z");
//};

//bool weapon_prevents_grenade_throwing(long)
//{
//    mangled_ppc("?weapon_prevents_grenade_throwing@@YA_NJ@Z");
//};

//bool weapon_state_prevents_throwing(long)
//{
//    mangled_ppc("?weapon_state_prevents_throwing@@YA_NJ@Z");
//};

//bool weapon_prevents_equipment_throwing(long)
//{
//    mangled_ppc("?weapon_prevents_equipment_throwing@@YA_NJ@Z");
//};

//bool weapon_reload(long, long)
//{
//    mangled_ppc("?weapon_reload@@YA_NJJ@Z");
//};

//void weapon_stop_reload(long, bool)
//{
//    mangled_ppc("?weapon_stop_reload@@YAXJ_N@Z");
//};

//bool weapon_overcharged(long)
//{
//    mangled_ppc("?weapon_overcharged@@YA_NJ@Z");
//};

//bool weapon_can_be_dual_wielded(long, long)
//{
//    mangled_ppc("?weapon_can_be_dual_wielded@@YA_NJJ@Z");
//};

//bool weapon_can_only_be_dual_wielded(long)
//{
//    mangled_ppc("?weapon_can_only_be_dual_wielded@@YA_NJ@Z");
//};

//bool weapon_is_dual_wielded(long)
//{
//    mangled_ppc("?weapon_is_dual_wielded@@YA_NJ@Z");
//};

//void weapon_steal_goodies(long, long)
//{
//    mangled_ppc("?weapon_steal_goodies@@YAXJJ@Z");
//};

//void weapon_set_total_rounds(long, short const *)
//{
//    mangled_ppc("?weapon_set_total_rounds@@YAXJPBF@Z");
//};

//void weapon_set_initial_rounds(long, short, short, short)
//{
//    mangled_ppc("?weapon_set_initial_rounds@@YAXJFFF@Z");
//};

//void weapon_set_initial_rounds_from_scenario_weapon(long, struct s_scenario_weapon const *)
//{
//    mangled_ppc("?weapon_set_initial_rounds_from_scenario_weapon@@YAXJPBUs_scenario_weapon@@@Z");
//};

//void weapon_set_current_amount(long, float)
//{
//    mangled_ppc("?weapon_set_current_amount@@YAXJM@Z");
//};

//long weapon_barrel_get_marker_name(long, long)
//{
//    mangled_ppc("?weapon_barrel_get_marker_name@@YAJJJ@Z");
//};

//bool weapon_get_trigger_position(long, short, union real_point3d *)
//{
//    mangled_ppc("?weapon_get_trigger_position@@YA_NJFPATreal_point3d@@@Z");
//};

//bool weapon_action_can_be_interrupted(long)
//{
//    mangled_ppc("?weapon_action_can_be_interrupted@@YA_NJ@Z");
//};

//void weapon_report_kill(long, long)
//{
//    mangled_ppc("?weapon_report_kill@@YAXJJ@Z");
//};

//bool weapon_is_being_suppressed_by_equipment(long)
//{
//    mangled_ppc("?weapon_is_being_suppressed_by_equipment@@YA_NJ@Z");
//};

//bool weapon_firing_is_disabled(long)
//{
//    mangled_ppc("?weapon_firing_is_disabled@@YA_NJ@Z");
//};

//bool weapon_is_ready_for_use(long)
//{
//    mangled_ppc("?weapon_is_ready_for_use@@YA_NJ@Z");
//};

//bool weapon_definition_is_age_based(long)
//{
//    mangled_ppc("?weapon_definition_is_age_based@@YA_NJ@Z");
//};

//bool weapon_is_age_based(long)
//{
//    mangled_ppc("?weapon_is_age_based@@YA_NJ@Z");
//};

//bool weapon_definition_is_support_weapon(long)
//{
//    mangled_ppc("?weapon_definition_is_support_weapon@@YA_NJ@Z");
//};

//bool weapon_is_support_weapon(long)
//{
//    mangled_ppc("?weapon_is_support_weapon@@YA_NJ@Z");
//};

//bool weapon_is_support_weapon_or_must_be_readied(long)
//{
//    mangled_ppc("?weapon_is_support_weapon_or_must_be_readied@@YA_NJ@Z");
//};

//bool weapon_age_external(long)
//{
//    mangled_ppc("?weapon_age_external@@YA_NJ@Z");
//};

//bool weapon_is_venting(long)
//{
//    mangled_ppc("?weapon_is_venting@@YA_NJ@Z");
//};

//bool weapon_can_vent(long)
//{
//    mangled_ppc("?weapon_can_vent@@YA_NJ@Z");
//};

//char const * weapon_get_vent_state_name(short)
//{
//    mangled_ppc("?weapon_get_vent_state_name@@YAPBDF@Z");
//};

//void weapon_set_vent_state(long, short)
//{
//    mangled_ppc("?weapon_set_vent_state@@YAXJF@Z");
//};

//bool weapon_has_vented_for_anim_duration(long, bool)
//{
//    mangled_ppc("?weapon_has_vented_for_anim_duration@@YA_NJ_N@Z");
//};

//bool weapon_update_vent(long)
//{
//    mangled_ppc("?weapon_update_vent@@YA_NJ@Z");
//};

//void weapon_vent(long)
//{
//    mangled_ppc("?weapon_vent@@YAXJ@Z");
//};

//void weapon_stop_vent(long, bool)
//{
//    mangled_ppc("?weapon_stop_vent@@YAXJ_N@Z");
//};

//void weapon_reset_and_idle_if_not_venting(long)
//{
//    mangled_ppc("?weapon_reset_and_idle_if_not_venting@@YAXJ@Z");
//};

//void weapon_age(long, float)
//{
//    mangled_ppc("?weapon_age@@YAXJM@Z");
//};

//struct weapon_barrel * weapon_barrel_get(struct weapon_datum *, short)
//{
//    mangled_ppc("?weapon_barrel_get@@YAPAUweapon_barrel@@PAUweapon_datum@@F@Z");
//};

//struct weapon_trigger * weapon_trigger_get(struct weapon_datum *, short)
//{
//    mangled_ppc("?weapon_trigger_get@@YAPAUweapon_trigger@@PAUweapon_datum@@F@Z");
//};

//struct weapon_magazine * weapon_magazine_get(struct weapon_datum *, short)
//{
//    mangled_ppc("?weapon_magazine_get@@YAPAUweapon_magazine@@PAUweapon_datum@@F@Z");
//};

//long weapon_get_effect_object_index(long)
//{
//    mangled_ppc("?weapon_get_effect_object_index@@YAJJ@Z");
//};

//long weapon_get_owner_unit_index(long)
//{
//    mangled_ppc("?weapon_get_owner_unit_index@@YAJJ@Z");
//};

//long weapon_get_owner_unit_inventory_index(long)
//{
//    mangled_ppc("?weapon_get_owner_unit_inventory_index@@YAJJ@Z");
//};

//long weapon_get_projectile_owner_unit_index(long)
//{
//    mangled_ppc("?weapon_get_projectile_owner_unit_index@@YAJJ@Z");
//};

//void weapon_notify_inventory_ownership_changed(long)
//{
//    mangled_ppc("?weapon_notify_inventory_ownership_changed@@YAXJ@Z");
//};

//float weapon_trigger_get_charged_fraction(long, short)
//{
//    mangled_ppc("?weapon_trigger_get_charged_fraction@@YAMJF@Z");
//};

//float weapon_trigger_get_charged_with_cooldown_fraction(long, short, bool)
//{
//    mangled_ppc("?weapon_trigger_get_charged_with_cooldown_fraction@@YAMJF_N@Z");
//};

//float weapon_trigger_get_spew_fraction(long, short)
//{
//    mangled_ppc("?weapon_trigger_get_spew_fraction@@YAMJF@Z");
//};

//float weapon_barrel_compute_ticks_per_round(long, short, bool)
//{
//    mangled_ppc("?weapon_barrel_compute_ticks_per_round@@YAMJF_N@Z");
//};

//bool weapon_barrel_can_fire_this_tick_predicted(long, short, long *, long *, long *, long *, long *)
//{
//    mangled_ppc("?weapon_barrel_can_fire_this_tick_predicted@@YA_NJFPAJ0000@Z");
//};

//bool weapon_barrel_must_recover_predicted(long, short)
//{
//    mangled_ppc("?weapon_barrel_must_recover_predicted@@YA_NJF@Z");
//};

//void weapon_barrel_force_immediate_recover_completion(long, short)
//{
//    mangled_ppc("?weapon_barrel_force_immediate_recover_completion@@YAXJF@Z");
//};

//bool weapon_barrel_is_spew_networking_suppressed(long, short)
//{
//    mangled_ppc("?weapon_barrel_is_spew_networking_suppressed@@YA_NJF@Z");
//};

//bool weapon_barrel_can_fire_this_tick(long, short, bool *, bool *, bool *)
//{
//    mangled_ppc("?weapon_barrel_can_fire_this_tick@@YA_NJFPA_N00@Z");
//};

//bool weapon_barrel_is_recovering(long, short)
//{
//    mangled_ppc("?weapon_barrel_is_recovering@@YA_NJF@Z");
//};

//bool weapon_barrel_is_locked_recovering(long, short)
//{
//    mangled_ppc("?weapon_barrel_is_locked_recovering@@YA_NJF@Z");
//};

//bool weapon_barrel_check_for_reload(long, long)
//{
//    mangled_ppc("?weapon_barrel_check_for_reload@@YA_NJJ@Z");
//};

//bool weapon_barrel_can_fire(long, short, bool)
//{
//    mangled_ppc("?weapon_barrel_can_fire@@YA_NJF_N@Z");
//};

//bool weapon_barrel_markers_can_fire(long, short)
//{
//    mangled_ppc("?weapon_barrel_markers_can_fire@@YA_NJF@Z");
//};

//void weapon_trigger_determine_analog_autofire_behavior(long, long, bool *, bool *, bool *)
//{
//    mangled_ppc("?weapon_trigger_determine_analog_autofire_behavior@@YAXJJPA_N00@Z");
//};

//bool weapon_magazine_starting_continuous_reload(long, short)
//{
//    mangled_ppc("?weapon_magazine_starting_continuous_reload@@YA_NJF@Z");
//};

//void weapon_hold_trigger_hs(long, long, bool)
//{
//    mangled_ppc("?weapon_hold_trigger_hs@@YAXJJ_N@Z");
//};

//bool weapon_magazine_start_or_continue_reload(long, short)
//{
//    mangled_ppc("?weapon_magazine_start_or_continue_reload@@YA_NJF@Z");
//};

//bool weapon_magazine_state_change_ok(long)
//{
//    mangled_ppc("?weapon_magazine_state_change_ok@@YA_NJ@Z");
//};

//void weapon_magazine_execute_reload(long, short)
//{
//    mangled_ppc("?weapon_magazine_execute_reload@@YAXJF@Z");
//};

//void weapon_magazine_finish_reload(long, short, bool)
//{
//    mangled_ppc("?weapon_magazine_finish_reload@@YAXJF_N@Z");
//};

//void weapon_magazine_start_chamber(long, short)
//{
//    mangled_ppc("?weapon_magazine_start_chamber@@YAXJF@Z");
//};

//bool weapon_magazine_is_reloading(long, short, short *, short *)
//{
//    mangled_ppc("?weapon_magazine_is_reloading@@YA_NJFPAF0@Z");
//};

//bool weapon_magazine_recently_reloading(long, short, short *)
//{
//    mangled_ppc("?weapon_magazine_recently_reloading@@YA_NJFPAF@Z");
//};

//long weapon_magazine_get_state(long, short)
//{
//    mangled_ppc("?weapon_magazine_get_state@@YAJJF@Z");
//};

//void weapon_trigger_fully_charged(long, short)
//{
//    mangled_ppc("?weapon_trigger_fully_charged@@YAXJF@Z");
//};

//void weapon_trigger_release_charge(long, short)
//{
//    mangled_ppc("?weapon_trigger_release_charge@@YAXJF@Z");
//};

//void weapon_trigger_overcharged(long, short)
//{
//    mangled_ppc("?weapon_trigger_overcharged@@YAXJF@Z");
//};

//bool get_weapon_trigger_is_overcharged(long, short)
//{
//    mangled_ppc("?get_weapon_trigger_is_overcharged@@YA_NJF@Z");
//};

//void weapon_barrel_set_fire_bit(long, short, bool)
//{
//    mangled_ppc("?weapon_barrel_set_fire_bit@@YAXJF_N@Z");
//};

//void weapon_barrel_clear_empty_click_bit(long, short)
//{
//    mangled_ppc("?weapon_barrel_clear_empty_click_bit@@YAXJF@Z");
//};

//void weapon_trigger_tethered_projectile_release(long, long, bool)
//{
//    mangled_ppc("?weapon_trigger_tethered_projectile_release@@YAXJJ_N@Z");
//};

//void weapon_release_tethered_projectile(long)
//{
//    mangled_ppc("?weapon_release_tethered_projectile@@YAXJ@Z");
//};

//void weapon_unlink_tethered_projectile(long, bool)
//{
//    mangled_ppc("?weapon_unlink_tethered_projectile@@YAXJ_N@Z");
//};

//bool weapon_trigger_is_still_latching_tethered_projectile(long)
//{
//    mangled_ppc("?weapon_trigger_is_still_latching_tethered_projectile@@YA_NJ@Z");
//};

//bool weapon_is_tethered_to_projectile(long, long)
//{
//    mangled_ppc("?weapon_is_tethered_to_projectile@@YA_NJJ@Z");
//};

//void weapon_barrel_fire(long, short, bool)
//{
//    mangled_ppc("?weapon_barrel_fire@@YAXJF_N@Z");
//};

//long weapon_barrel_get_bonus_allowed(long, long, bool)
//{
//    mangled_ppc("?weapon_barrel_get_bonus_allowed@@YAJJJ_N@Z");
//};

//bool weapon_magazine_can_fire_weapon(long, long, long, bool)
//{
//    mangled_ppc("?weapon_magazine_can_fire_weapon@@YA_NJJJ_N@Z");
//};

//void weapon_barrel_fire_update_magazine(long, long, long)
//{
//    mangled_ppc("?weapon_barrel_fire_update_magazine@@YAXJJJ@Z");
//};

//void weapon_barrel_fire_update_barrel(long, long, long)
//{
//    mangled_ppc("?weapon_barrel_fire_update_barrel@@YAXJJJ@Z");
//};

//bool weapon_barrel_will_misfire(long, long)
//{
//    mangled_ppc("?weapon_barrel_will_misfire@@YA_NJJ@Z");
//};

//void weapon_barrel_fire_interrupt_reload(long)
//{
//    mangled_ppc("?weapon_barrel_fire_interrupt_reload@@YAXJ@Z");
//};

//void weapon_barrel_fire_notify_game(long)
//{
//    mangled_ppc("?weapon_barrel_fire_notify_game@@YAXJ@Z");
//};

//void weapon_barrel_fire_ding_camouflage(long)
//{
//    mangled_ppc("?weapon_barrel_fire_ding_camouflage@@YAXJ@Z");
//};

//void weapon_barrel_fire_weapon_heat(long, long)
//{
//    mangled_ppc("?weapon_barrel_fire_weapon_heat@@YAXJJ@Z");
//};

//void weapon_heat(long, float)
//{
//    mangled_ppc("?weapon_heat@@YAXJM@Z");
//};

//void weapon_barrel_fire_weapon_age(long, long, bool)
//{
//    mangled_ppc("?weapon_barrel_fire_weapon_age@@YAXJJ_N@Z");
//};

//void weapon_barrel_perform_empty_click(long, short)
//{
//    mangled_ppc("?weapon_barrel_perform_empty_click@@YAXJF@Z");
//};

//void weapon_barrel_fire_create_effects(long, long, bool, bool)
//{
//    mangled_ppc("?weapon_barrel_fire_create_effects@@YAXJJ_N0@Z");
//};

//void weapon_barrel_fire_get_effect_data(long, long, bool, bool, struct s_weapon_barrel_fire_effect_info *)
//{
//    mangled_ppc("?weapon_barrel_fire_get_effect_data@@YAXJJ_N0PAUs_weapon_barrel_fire_effect_info@@@Z");
//};

//void weapon_barrel_fire_create_reflexive_effects(long, struct s_weapon_barrel_fire_effect_info const *)
//{
//    mangled_ppc("?weapon_barrel_fire_create_reflexive_effects@@YAXJPBUs_weapon_barrel_fire_effect_info@@@Z");
//};

//void weapon_barrel_fire_create_firing_effects(long, long, struct s_weapon_barrel_fire_effect_info const *)
//{
//    mangled_ppc("?weapon_barrel_fire_create_firing_effects@@YAXJJPBUs_weapon_barrel_fire_effect_info@@@Z");
//};

//long weapon_effect_new(long, long, long, float, float)
//{
//    mangled_ppc("?weapon_effect_new@@YAJJJJMM@Z");
//};

//void weapon_trigger_recover(long, short, bool)
//{
//    mangled_ppc("?weapon_trigger_recover@@YAXJF_N@Z");
//};

//void weapon_trigger_idle(long, short)
//{
//    mangled_ppc("?weapon_trigger_idle@@YAXJF@Z");
//};

//bool weapon_trigger_can_begin_charging(long, short)
//{
//    mangled_ppc("?weapon_trigger_can_begin_charging@@YA_NJF@Z");
//};

//void weapon_trigger_begin_charging(long, short)
//{
//    mangled_ppc("?weapon_trigger_begin_charging@@YAXJF@Z");
//};

//void weapon_barrel_idle(long, short)
//{
//    mangled_ppc("?weapon_barrel_idle@@YAXJF@Z");
//};

//bool weapon_barrel_can_owner_override_firing_parameters(long)
//{
//    mangled_ppc("?weapon_barrel_can_owner_override_firing_parameters@@YA_NJ@Z");
//};

//void weapon_barrel_compute_recovery_ticks(long, short, float *, float *)
//{
//    mangled_ppc("?weapon_barrel_compute_recovery_ticks@@YAXJFPAM0@Z");
//};

//void weapon_barrel_recover(long, short, bool)
//{
//    mangled_ppc("?weapon_barrel_recover@@YAXJF_N@Z");
//};

//void weapon_barrel_set_predicted_recover(long, short)
//{
//    mangled_ppc("?weapon_barrel_set_predicted_recover@@YAXJF@Z");
//};

//void weapon_barrel_finish_recover(long, short)
//{
//    mangled_ppc("?weapon_barrel_finish_recover@@YAXJF@Z");
//};

//float weapon_barrel_get_barrel_error_angle_from_weapon(long, long, bool, short, float)
//{
//    mangled_ppc("?weapon_barrel_get_barrel_error_angle_from_weapon@@YAMJJ_NFM@Z");
//};

//void weapon_detonate(long)
//{
//    mangled_ppc("?weapon_detonate@@YAXJ@Z");
//};

//void weapon_trigger_change_state(long, short, short, short)
//{
//    mangled_ppc("?weapon_trigger_change_state@@YAXJFFF@Z");
//};

//void weapon_trigger_set_charged_shots(long, short, unsigned char)
//{
//    mangled_ppc("?weapon_trigger_set_charged_shots@@YAXJFE@Z");
//};

//void weapon_reset(long)
//{
//    mangled_ppc("?weapon_reset@@YAXJ@Z");
//};

//void weapon_barrel_create_projectiles(long, short, struct s_predicted_weapon_fire_data const *, bool)
//{
//    mangled_ppc("?weapon_barrel_create_projectiles@@YAXJFPBUs_predicted_weapon_fire_data@@_N@Z");
//};

//long int_min(int, unsigned char)
//{
//    mangled_ppc("?int_min@@YAJHE@Z");
//};

//bool projectile_definition_supports_burst_group_counting(long)
//{
//    mangled_ppc("?projectile_definition_supports_burst_group_counting@@YA_NJ@Z");
//};

//public: c_stimulus_distribution::c_stimulus_distribution(void)
//{
//    mangled_ppc("??0c_stimulus_distribution@@QAA@XZ");
//};

//public: void c_stimulus_distribution::set_immediate(bool)
//{
//    mangled_ppc("?set_immediate@c_stimulus_distribution@@QAAX_N@Z");
//};

//public: c_stimulus_origin::c_stimulus_origin(void)
//{
//    mangled_ppc("??0c_stimulus_origin@@QAA@XZ");
//};

//public: c_stimulus_payload::c_stimulus_payload(void)
//{
//    mangled_ppc("??0c_stimulus_payload@@QAA@XZ");
//};

//unsigned long weapon_barrel_create_projectiles_get_initial_random_seed(long, struct s_predicted_weapon_fire_data const *, bool, bool, unsigned long *)
//{
//    mangled_ppc("?weapon_barrel_create_projectiles_get_initial_random_seed@@YAKJPBUs_predicted_weapon_fire_data@@_N1PAK@Z");
//};

//public: s_damage_data::s_damage_data(void)
//{
//    mangled_ppc("??0s_damage_data@@QAA@XZ");
//};

//float weapon_get_projectile_error(long, long)
//{
//    mangled_ppc("?weapon_get_projectile_error@@YAMJJ@Z");
//};

//void weapon_set_projectile_error(long, long, float)
//{
//    mangled_ppc("?weapon_set_projectile_error@@YAXJJM@Z");
//};

//float weapon_get_maximum_damage_range(long)
//{
//    mangled_ppc("?weapon_get_maximum_damage_range@@YAMJ@Z");
//};

//bool weapon_must_stay_awake_for_accuracy_penalties(long)
//{
//    mangled_ppc("?weapon_must_stay_awake_for_accuracy_penalties@@YA_NJ@Z");
//};

//void weapon_barrel_accuracy_penalty_movement(long, long)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_movement@@YAXJJ@Z");
//};

//bool weapon_barrel_evaluate_penalty_function(long, long, bool, enum s_projectile_accuracy_penalty_functions::e_penalty_function, float, float *)
//{
//    mangled_ppc("?weapon_barrel_evaluate_penalty_function@@YA_NJJ_NW4e_penalty_function@s_projectile_accuracy_penalty_functions@@MPAM@Z");
//};

//void weapon_barrel_accuracy_penalty_rotation(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_rotation@@YAXJPBTvector3d@@0@Z");
//};

//void weapon_barrel_accuracy_penalty_firing(long, long)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_firing@@YAXJJ@Z");
//};

//void weapon_barrel_accuracy_penalty_jump(long)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_jump@@YAXJ@Z");
//};

//void weapon_barrel_accuracy_ding(long, enum s_projectile_accuracy_penalty_info::e_penalty_ding)
//{
//    mangled_ppc("?weapon_barrel_accuracy_ding@@YAXJW4e_penalty_ding@s_projectile_accuracy_penalty_info@@@Z");
//};

//void weapon_barrel_accuracy_penalty_weapon_switch(long)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_weapon_switch@@YAXJ@Z");
//};

//void weapon_barrel_accuracy_penalty_reload(long)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_reload@@YAXJ@Z");
//};

//void weapon_barrel_accuracy_penalty_zoom(long)
//{
//    mangled_ppc("?weapon_barrel_accuracy_penalty_zoom@@YAXJ@Z");
//};

//bool weapon_get_safe_trigger_position(long, union real_point3d *)
//{
//    mangled_ppc("?weapon_get_safe_trigger_position@@YA_NJPATreal_point3d@@@Z");
//};

//void projectile_distribute(union vector3d *, union vector3d const *, short, float, short, short)
//{
//    mangled_ppc("?projectile_distribute@@YAXPATvector3d@@PBT1@FMFF@Z");
//};

//void weapon_barrel_start_ejection_port(long, short, bool)
//{
//    mangled_ppc("?weapon_barrel_start_ejection_port@@YAXJF_N@Z");
//};

//void weapon_state_key_frame(long)
//{
//    mangled_ppc("?weapon_state_key_frame@@YAXJ@Z");
//};

//void weapon_state_next(long, bool)
//{
//    mangled_ppc("?weapon_state_next@@YAXJ_N@Z");
//};

//bool weapon_magazine_state_interruptable(short, short)
//{
//    mangled_ppc("?weapon_magazine_state_interruptable@@YA_NFF@Z");
//};

//bool weapon_set_state(long, long, bool)
//{
//    mangled_ppc("?weapon_set_state@@YA_NJJ_N@Z");
//};

//bool weapon_state_interruptable(long, long)
//{
//    mangled_ppc("?weapon_state_interruptable@@YA_NJJ@Z");
//};

//float weapon_get_reload_percentage(long, long)
//{
//    mangled_ppc("?weapon_get_reload_percentage@@YAMJJ@Z");
//};

//float weapon_get_barrel_recovery_percentage(long, long)
//{
//    mangled_ppc("?weapon_get_barrel_recovery_percentage@@YAMJJ@Z");
//};

//void weapon_magazine_set_state(long, short, short)
//{
//    mangled_ppc("?weapon_magazine_set_state@@YAXJFF@Z");
//};

//enum e_unit_messages weapon_magazine_get_reload_unit_message(long, short, bool)
//{
//    mangled_ppc("?weapon_magazine_get_reload_unit_message@@YA?AW4e_unit_messages@@JF_N@Z");
//};

//void weapon_reset_first_person_emulation(long)
//{
//    mangled_ppc("?weapon_reset_first_person_emulation@@YAXJ@Z");
//};

//public: void c_animation_id::clear(void)
//{
//    mangled_ppc("?clear@c_animation_id@@QAAXXZ");
//};

//bool weapon_is_controlled_by_local_player(long)
//{
//    mangled_ppc("?weapon_is_controlled_by_local_player@@YA_NJ@Z");
//};

//void weapon_update_overheat_from_authority(long, bool, bool)
//{
//    mangled_ppc("?weapon_update_overheat_from_authority@@YAXJ_N0@Z");
//};

//void emulated_first_person_handle_sound_interruptions(long, long, bool)
//{
//    mangled_ppc("?emulated_first_person_handle_sound_interruptions@@YAXJJ_N@Z");
//};

//bool weapon_setup_first_person_emulation(long, long)
//{
//    mangled_ppc("?weapon_setup_first_person_emulation@@YA_NJJ@Z");
//};

//public: c_animation_id::~c_animation_id(void)
//{
//    mangled_ppc("??1c_animation_id@@QAA@XZ");
//};

//public: c_animation_manager::~c_animation_manager(void)
//{
//    mangled_ppc("??1c_animation_manager@@QAA@XZ");
//};

//void emulated_first_person_animation_callback(struct s_animation_event_data const *, long)
//{
//    mangled_ppc("?emulated_first_person_animation_callback@@YAXPBUs_animation_event_data@@J@Z");
//};

//bool weapon_update_first_person_emulation(long)
//{
//    mangled_ppc("?weapon_update_first_person_emulation@@YA_NJ@Z");
//};

//void weapon_send_message_to_unit(long, enum e_unit_messages)
//{
//    mangled_ppc("?weapon_send_message_to_unit@@YAXJW4e_unit_messages@@@Z");
//};

//bool weapon_has_infinite_ammo(long)
//{
//    mangled_ppc("?weapon_has_infinite_ammo@@YA_NJ@Z");
//};

//bool weapon_has_bottomless_clip(long)
//{
//    mangled_ppc("?weapon_has_bottomless_clip@@YA_NJ@Z");
//};

//bool weapon_is_charged_plasma_pistol(long, bool)
//{
//    mangled_ppc("?weapon_is_charged_plasma_pistol@@YA_NJ_N@Z");
//};

//float weapon_get_age(long)
//{
//    mangled_ppc("?weapon_get_age@@YAMJ@Z");
//};

//bool weapon_is_depleted(long)
//{
//    mangled_ppc("?weapon_is_depleted@@YA_NJ@Z");
//};

//bool weapon_can_be_stowed(long, long, bool)
//{
//    mangled_ppc("?weapon_can_be_stowed@@YA_NJJ_N@Z");
//};

//void weapon_stow(long, long)
//{
//    mangled_ppc("?weapon_stow@@YAXJJ@Z");
//};

//bool weapon_should_set_targeting_data(long, struct s_projectile_targeting_data const *)
//{
//    mangled_ppc("?weapon_should_set_targeting_data@@YA_NJPBUs_projectile_targeting_data@@@Z");
//};

//long weapon_respond_to_drop(long)
//{
//    mangled_ppc("?weapon_respond_to_drop@@YAJJ@Z");
//};

//bool weapon_available_for_pickup(long, long, union real_point3d const *, float)
//{
//    mangled_ppc("?weapon_available_for_pickup@@YA_NJJPBTreal_point3d@@M@Z");
//};

//struct s_melee_damage_parameters const * weapon_get_melee_damage_parameters(long)
//{
//    mangled_ppc("?weapon_get_melee_damage_parameters@@YAPBUs_melee_damage_parameters@@J@Z");
//};

//bool indirect_fire_compute_ballistics(long, long, long, union real_point3d const *, union vector3d *, float *)
//{
//    mangled_ppc("?indirect_fire_compute_ballistics@@YA_NJJJPBTreal_point3d@@PATvector3d@@PAM@Z");
//};

//bool indirect_fire_get_aim_target_position(long, union real_point3d *)
//{
//    mangled_ppc("?indirect_fire_get_aim_target_position@@YA_NJPATreal_point3d@@@Z");
//};

//float indirect_fire_compute_arcing_fraction(long, float)
//{
//    mangled_ppc("?indirect_fire_compute_arcing_fraction@@YAMJM@Z");
//};

//void weapon_set_primary_barrel_firing(long, bool)
//{
//    mangled_ppc("?weapon_set_primary_barrel_firing@@YAXJ_N@Z");
//};

//void weapon_debug_render(long, long)
//{
//    mangled_ppc("?weapon_debug_render@@YAXJJ@Z");
//};

//void weapons_debug_render(void)
//{
//    mangled_ppc("?weapons_debug_render@@YAXXZ");
//};

//void weapons_debug_render_toggle(void)
//{
//    mangled_ppc("?weapons_debug_render_toggle@@YAXXZ");
//};

//public: class c_enum_no_init<enum e_unit_melee_player_types, char, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_unit_melee_player_types, char, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_unit_melee_player_types)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_unit_melee_player_types@@D$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_unit_melee_player_types@@@Z");
//};

//public: class c_enum_no_init<enum e_unit_melee_prediction_types, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_unit_melee_prediction_types, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_unit_melee_prediction_types)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_unit_melee_prediction_types@@D$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_unit_melee_prediction_types@@@Z");
//};

//public: c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: void c_object_iterator<struct weapon_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Uweapon_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct weapon_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Uweapon_datum@@@@QAA_NXZ");
//};

//public: struct weapon_datum * c_object_iterator<struct weapon_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Uweapon_datum@@@@QAAPAUweapon_datum@@XZ");
//};

//protected: struct object_datum * c_object_iterator_base::get_datum_internal(void)
//{
//    mangled_ppc("?get_datum_internal@c_object_iterator_base@@IAAPAUobject_datum@@XZ");
//};

//public: struct s_simulation_action_projectile_fire_result * s_static_array<struct s_simulation_action_projectile_fire_result, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_simulation_action_projectile_fire_result@@$0BA@@@QAAPAUs_simulation_action_projectile_fire_result@@XZ");
//};

//public: static long s_static_array<struct s_simulation_action_projectile_fire_result, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_simulation_action_projectile_fire_result@@$0BA@@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::test(enum e_animation_frame_event_types) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@QBA_NW4e_animation_frame_event_types@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::test(enum e_animation_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@QBA_NW4e_animation_state_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_item_datum_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_item_datum_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_item_datum_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_item_datum_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_item_datum_flags@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_item_datum_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_weapon_flags, unsigned short, 6, struct s_default_enum_string_resolver>::set(enum e_weapon_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_weapon_flags@@G$05Us_default_enum_string_resolver@@@@QAAXW4e_weapon_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_weapon_control_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_weapon_control_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_weapon_control_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_weapon_control_flags@@_N@Z");
//};

//public: unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: c_flags<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::c_flags<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_weapon_barrel_definition_flags, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_weapon_barrel_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_weapon_barrel_definition_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NW4e_weapon_barrel_definition_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_weapon_definition_flags, unsigned long, 32, struct s_default_enum_string_resolver>::test(enum e_weapon_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_weapon_definition_flags@@K$0CA@Us_default_enum_string_resolver@@@@QBA_NW4e_weapon_definition_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_weapon_definition_secondary_flags, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_weapon_definition_secondary_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_weapon_definition_secondary_flags@@K$0L@Us_default_enum_string_resolver@@@@QBA_NW4e_weapon_definition_secondary_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_scenario_weapon_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scenario_weapon_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_scenario_weapon_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_model_target_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_model_target_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_model_target_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set(enum e_animation_state_change_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_animation_state_change_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_animation_playback_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NW4e_animation_playback_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set(enum e_animation_playback_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAXW4e_animation_playback_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: void c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::set(enum e_distribution_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_distribution_flags@@F$00Us_default_enum_string_resolver@@@@QAAXW4e_distribution_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_unit_definition_flags, unsigned long, 30, struct s_default_enum_string_resolver>::test(enum e_unit_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_unit_definition_flags@@K$0BO@Us_default_enum_string_resolver@@@@QBA_NW4e_unit_definition_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_vehicle_definition_flags, unsigned long, 13, struct s_default_enum_string_resolver>::test(enum e_vehicle_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_vehicle_definition_flags@@K$0N@Us_default_enum_string_resolver@@@@QBA_NW4e_vehicle_definition_flags@@@Z");
//};

//void simulation_action_object_update<enum e_simulation_weapon_update_flag>(long, enum e_simulation_weapon_update_flag)
//{
//    mangled_ppc("??$simulation_action_object_update@W4e_simulation_weapon_update_flag@@@@YAXJW4e_simulation_weapon_update_flag@@@Z");
//};

//public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_weapon_update_flag)
//{
//    mangled_ppc("??0c_simulation_object_update_flags@@QAA@JW4e_simulation_weapon_update_flag@@@Z");
//};

//unsigned long fast_checksum<union vector3d>(unsigned long, union vector3d const *)
//{
//    mangled_ppc("??$fast_checksum@Tvector3d@@@@YAKKPBTvector3d@@@Z");
//};

//public: struct s_predicted_weapon_fire_projectile_data const & s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_predicted_weapon_fire_projectile_data@@$03@@QBAABUs_predicted_weapon_fire_projectile_data@@J@Z");
//};

//public: struct s_simulation_action_projectile_fire_result & s_static_array<struct s_simulation_action_projectile_fire_result, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_simulation_action_projectile_fire_result@@$0BA@@@QAAAAUs_simulation_action_projectile_fire_result@@J@Z");
//};

//bool operator!=<enum e_unit_messages>(enum e_unit_messages const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_unit_messages@@@@YA_NABW4e_unit_messages@@ABW4e_none_sentinel@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_frame_event_types)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@SA_NW4e_animation_frame_event_types@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_frame_event_types)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@CAKW4e_animation_frame_event_types@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_state_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@SA_NW4e_animation_state_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_state_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@CAKW4e_animation_state_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_item_datum_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_item_datum_flags@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_item_datum_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_item_datum_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_item_datum_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_item_datum_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_item_datum_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_control_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_weapon_control_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_control_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_weapon_control_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_weapon_barrel_definition_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_barrel_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_weapon_barrel_definition_flags@@K$0BC@Us_default_enum_string_resolver@@@@SA_NW4e_weapon_barrel_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_weapon_barrel_definition_flags, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_barrel_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_weapon_barrel_definition_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKW4e_weapon_barrel_definition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_weapon_definition_flags, unsigned long, 32, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_weapon_definition_flags@@K$0CA@Us_default_enum_string_resolver@@@@SA_NW4e_weapon_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_weapon_definition_flags, unsigned long, 32, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_weapon_definition_flags@@K$0CA@Us_default_enum_string_resolver@@@@CAKW4e_weapon_definition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_weapon_definition_secondary_flags, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_weapon_definition_secondary_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_weapon_definition_secondary_flags@@K$0L@Us_default_enum_string_resolver@@@@SA_NW4e_weapon_definition_secondary_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_weapon_definition_secondary_flags, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_weapon_definition_secondary_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_weapon_definition_secondary_flags@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_weapon_definition_secondary_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_weapon_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_weapon_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_scenario_weapon_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_scenario_weapon_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_weapon_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_weapon_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_scenario_weapon_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_model_target_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_model_target_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_model_target_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_model_target_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_model_target_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_model_target_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_state_change_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@SA_NW4e_animation_state_change_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_state_change_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@CAGW4e_animation_state_change_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_playback_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@SA_NW4e_animation_playback_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_playback_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKW4e_animation_playback_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_distribution_flags@@F$00Us_default_enum_string_resolver@@@@SA_NW4e_distribution_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_distribution_flags@@F$00Us_default_enum_string_resolver@@@@CAFW4e_distribution_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_unit_definition_flags, unsigned long, 30, struct s_default_enum_string_resolver>::valid_bit(enum e_unit_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_unit_definition_flags@@K$0BO@Us_default_enum_string_resolver@@@@SA_NW4e_unit_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_unit_definition_flags, unsigned long, 30, struct s_default_enum_string_resolver>::flag_size_type(enum e_unit_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_unit_definition_flags@@K$0BO@Us_default_enum_string_resolver@@@@CAKW4e_unit_definition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_vehicle_definition_flags, unsigned long, 13, struct s_default_enum_string_resolver>::valid_bit(enum e_vehicle_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_vehicle_definition_flags@@K$0N@Us_default_enum_string_resolver@@@@SA_NW4e_vehicle_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_vehicle_definition_flags, unsigned long, 13, struct s_default_enum_string_resolver>::flag_size_type(enum e_vehicle_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_vehicle_definition_flags@@K$0N@Us_default_enum_string_resolver@@@@CAKW4e_vehicle_definition_flags@@@Z");
//};

//void prefetch<union vector3d>(union vector3d const *)
//{
//    mangled_ppc("??$prefetch@Tvector3d@@@@YAXPBTvector3d@@@Z");
//};

//public: static bool s_static_array<struct s_simulation_action_projectile_fire_result, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_simulation_action_projectile_fire_result@@$0BA@@@SA_NJ@Z");
//};

//bool operator==<enum e_unit_messages>(enum e_unit_messages const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_unit_messages@@@@YA_NABW4e_unit_messages@@ABW4e_none_sentinel@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_weapon_control_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_weapon_control_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_weapon_control_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_weapon_control_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_playback_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKW4e_animation_playback_flags@@@Z");
//};

//float power(float, float)
//{
//    mangled_ppc("?power@@YAMMM@Z");
//};

//float normalize_and_clamp_linear(float, float, float, bool)
//{
//    mangled_ppc("?normalize_and_clamp_linear@@YAMMMM_N@Z");
//};

