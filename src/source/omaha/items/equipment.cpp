/* ---------- headers */

#include "omaha\items\equipment.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool equipment_new(long, struct s_object_placement_data *, bool *);
// enum e_equipment_type & operator++(enum e_equipment_type &);
// void equipment_place(long, struct s_scenario_equipment const *);
// void equipment_create_children(long, class c_flags<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver> const &);
// bool equipment_update(long);
// bool equipment_update_phantoms(long);
// bool equipment_update_animation(long);
// bool equipment_update_effects(long);
// bool equipment_update_predicted_timers(long);
// bool equipment_update_queued_sprint(long);
// bool equipment_update_energy(long);
// bool equipment_override_damage_material_type(long, class c_global_material_type *);
// bool equipment_prevents_instant_kills(long);
// void equipment_client_requests_key_frame_action(long);
// bool equipment_override_melee_damage(long, struct s_melee_damage_effects const **, struct s_melee_damage_effects const **);
// bool equipment_override_collision_damage(long, long *);
// bool equipment_melee_reflect_response_damage(long, long, long *);
// bool equipment_is_object_in_showme_range(long);
// bool equipment_desires_3rd_person_camera(long);
// bool equipment_desires_hidden_reticule(long);
// bool equipment_blocks_tracking(long);
// bool equipment_get_unit_camera(long, struct s_unit_camera const **);
// bool equipment_compute_function_value(long, long, long, float *, bool *, bool *);
// bool equipment_is_active_authoritative(long);
// bool equipment_is_active(long);
// bool equipment_is_active_noise_maker(long);
// bool equipment_is_active_daddy(long);
// bool equipment_is_active_jetpack(long);
// bool equipment_is_active_invincibility_mode(long);
// float equipment_get_invincible_fraction(long);
// float equipment_get_jet_pack_landing_anticipation_time(long);
// long equipment_calculate_noise_maker_blip_count(long);
// void equipment_calculate_noise_maker_blip(long, unsigned long *, long, union real_point2d *);
// bool equipment_allows_sprinting(long);
// bool equipment_suppresses_weapon_usage(long);
// bool equipment_action_suppression_active(long);
// bool equipment_suppresses_melee(long);
// bool equipment_suppresses_grenade_usage(long);
// bool equipment_suppresses_device_interaction(long);
// enum e_ai_sound_volume equipment_adjust_object_noise(long, enum e_ai_sound_volume);
// bool equipment_desires_sound_ducking(long);
// bool equipment_suppresses_all_actions(long);
// bool equipment_ignores_predicted_activation(long);
// void equipment_handle_pickup(long, long);
// void equipment_definition_handle_pickup(long, long);
// void equipment_notify_child_took_shield_damage(long, float);
// bool equipment_can_be_thrown(long);
// float equipment_get_energy(long);
// float equipment_active_fraction(long);
// long equipment_remaining_charges(long);
// void equipment_calculate_spawn_location(long, float, float, float, short, union real_point3d *, union vector3d *);
// bool equipment_test_activation_restrictions(long, bool);
// bool equipment_validate_equipment_index(enum e_output_user_index, long);
// bool equipment_begin_activation_animation(long);
// bool equipment_activate(long, enum e_equipment_activation_source);
// bool equipment_activate_local_player(long);
// void equipment_reset_prediction_timer(long);
// bool equipment_can_be_activated(long);
// void equipment_activate_on_authority(long);
// void equipment_play_activation_effects(long);
// long equipment_try_and_get_owner_player_index(long);
// bool player_can_use_equipment(long);
// bool equipment_activate_client_request(long);
// bool equipment_activate_host_update(long);
// void equipment_handle_activation_attempted_while_disabled_by_player_traits(long, long);
// bool equipment_deactivate(long, enum e_equipment_activation_source);
// bool equipment_deactivate_local_player(long);
// void equipment_deactivate_effects(long);
// void equipment_deactivate_on_authority(long);
// bool equipment_deactivate_client_request(long);
// bool equipment_deactivate_host_update(long);
// void equipment_apply_player_traits(long, class c_player_traits *);
// bool equipment_begin_animation_state(long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>);
// public: void s_animation_auxillary_settings::clear(void);
// public: s_animation_auxillary_settings::s_animation_auxillary_settings(void);
// long equipment_get_age(long);
// long equipment_get_age_authoritative(long);
// bool equipment_is_warming_up(long);
// long equipment_animation_get_desired_idle(long);
// bool equipment_owner_has_infinite_energy(long);
// public: bool c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_equipment_datum_flag) const;
// public: void c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum e_equipment_datum_flag, bool);
// public: void c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_setup_animation_channel_flags, bool);
// public: c_flags<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>(void);
// public: static bool c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_equipment_datum_flag);
// private: static unsigned short c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_equipment_datum_flag);
// public: bool c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_setup_animation_channel_flags);
// private: static unsigned long c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_setup_animation_channel_flags);
// private: static unsigned long c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_setup_animation_channel_flags);

//bool equipment_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?equipment_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//enum e_equipment_type & operator++(enum e_equipment_type &)
//{
//    mangled_ppc("??E@YAAAW4e_equipment_type@@AAW40@@Z");
//};

//void equipment_place(long, struct s_scenario_equipment const *)
//{
//    mangled_ppc("?equipment_place@@YAXJPBUs_scenario_equipment@@@Z");
//};

//void equipment_create_children(long, class c_flags<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?equipment_create_children@@YAXJABV?$c_flags@W4e_object_placement_flags@@K$0M@Us_default_enum_string_resolver@@@@@Z");
//};

//bool equipment_update(long)
//{
//    mangled_ppc("?equipment_update@@YA_NJ@Z");
//};

//bool equipment_update_phantoms(long)
//{
//    mangled_ppc("?equipment_update_phantoms@@YA_NJ@Z");
//};

//bool equipment_update_animation(long)
//{
//    mangled_ppc("?equipment_update_animation@@YA_NJ@Z");
//};

//bool equipment_update_effects(long)
//{
//    mangled_ppc("?equipment_update_effects@@YA_NJ@Z");
//};

//bool equipment_update_predicted_timers(long)
//{
//    mangled_ppc("?equipment_update_predicted_timers@@YA_NJ@Z");
//};

//bool equipment_update_queued_sprint(long)
//{
//    mangled_ppc("?equipment_update_queued_sprint@@YA_NJ@Z");
//};

//bool equipment_update_energy(long)
//{
//    mangled_ppc("?equipment_update_energy@@YA_NJ@Z");
//};

//bool equipment_override_damage_material_type(long, class c_global_material_type *)
//{
//    mangled_ppc("?equipment_override_damage_material_type@@YA_NJPAVc_global_material_type@@@Z");
//};

//bool equipment_prevents_instant_kills(long)
//{
//    mangled_ppc("?equipment_prevents_instant_kills@@YA_NJ@Z");
//};

//void equipment_client_requests_key_frame_action(long)
//{
//    mangled_ppc("?equipment_client_requests_key_frame_action@@YAXJ@Z");
//};

//bool equipment_override_melee_damage(long, struct s_melee_damage_effects const **, struct s_melee_damage_effects const **)
//{
//    mangled_ppc("?equipment_override_melee_damage@@YA_NJPAPBUs_melee_damage_effects@@0@Z");
//};

//bool equipment_override_collision_damage(long, long *)
//{
//    mangled_ppc("?equipment_override_collision_damage@@YA_NJPAJ@Z");
//};

//bool equipment_melee_reflect_response_damage(long, long, long *)
//{
//    mangled_ppc("?equipment_melee_reflect_response_damage@@YA_NJJPAJ@Z");
//};

//bool equipment_is_object_in_showme_range(long)
//{
//    mangled_ppc("?equipment_is_object_in_showme_range@@YA_NJ@Z");
//};

//bool equipment_desires_3rd_person_camera(long)
//{
//    mangled_ppc("?equipment_desires_3rd_person_camera@@YA_NJ@Z");
//};

//bool equipment_desires_hidden_reticule(long)
//{
//    mangled_ppc("?equipment_desires_hidden_reticule@@YA_NJ@Z");
//};

//bool equipment_blocks_tracking(long)
//{
//    mangled_ppc("?equipment_blocks_tracking@@YA_NJ@Z");
//};

//bool equipment_get_unit_camera(long, struct s_unit_camera const **)
//{
//    mangled_ppc("?equipment_get_unit_camera@@YA_NJPAPBUs_unit_camera@@@Z");
//};

//bool equipment_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?equipment_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//bool equipment_is_active_authoritative(long)
//{
//    mangled_ppc("?equipment_is_active_authoritative@@YA_NJ@Z");
//};

//bool equipment_is_active(long)
//{
//    mangled_ppc("?equipment_is_active@@YA_NJ@Z");
//};

//bool equipment_is_active_noise_maker(long)
//{
//    mangled_ppc("?equipment_is_active_noise_maker@@YA_NJ@Z");
//};

//bool equipment_is_active_daddy(long)
//{
//    mangled_ppc("?equipment_is_active_daddy@@YA_NJ@Z");
//};

//bool equipment_is_active_jetpack(long)
//{
//    mangled_ppc("?equipment_is_active_jetpack@@YA_NJ@Z");
//};

//bool equipment_is_active_invincibility_mode(long)
//{
//    mangled_ppc("?equipment_is_active_invincibility_mode@@YA_NJ@Z");
//};

//float equipment_get_invincible_fraction(long)
//{
//    mangled_ppc("?equipment_get_invincible_fraction@@YAMJ@Z");
//};

//float equipment_get_jet_pack_landing_anticipation_time(long)
//{
//    mangled_ppc("?equipment_get_jet_pack_landing_anticipation_time@@YAMJ@Z");
//};

//long equipment_calculate_noise_maker_blip_count(long)
//{
//    mangled_ppc("?equipment_calculate_noise_maker_blip_count@@YAJJ@Z");
//};

//void equipment_calculate_noise_maker_blip(long, unsigned long *, long, union real_point2d *)
//{
//    mangled_ppc("?equipment_calculate_noise_maker_blip@@YAXJPAKJPATreal_point2d@@@Z");
//};

//bool equipment_allows_sprinting(long)
//{
//    mangled_ppc("?equipment_allows_sprinting@@YA_NJ@Z");
//};

//bool equipment_suppresses_weapon_usage(long)
//{
//    mangled_ppc("?equipment_suppresses_weapon_usage@@YA_NJ@Z");
//};

//bool equipment_action_suppression_active(long)
//{
//    mangled_ppc("?equipment_action_suppression_active@@YA_NJ@Z");
//};

//bool equipment_suppresses_melee(long)
//{
//    mangled_ppc("?equipment_suppresses_melee@@YA_NJ@Z");
//};

//bool equipment_suppresses_grenade_usage(long)
//{
//    mangled_ppc("?equipment_suppresses_grenade_usage@@YA_NJ@Z");
//};

//bool equipment_suppresses_device_interaction(long)
//{
//    mangled_ppc("?equipment_suppresses_device_interaction@@YA_NJ@Z");
//};

//enum e_ai_sound_volume equipment_adjust_object_noise(long, enum e_ai_sound_volume)
//{
//    mangled_ppc("?equipment_adjust_object_noise@@YA?AW4e_ai_sound_volume@@JW41@@Z");
//};

//bool equipment_desires_sound_ducking(long)
//{
//    mangled_ppc("?equipment_desires_sound_ducking@@YA_NJ@Z");
//};

//bool equipment_suppresses_all_actions(long)
//{
//    mangled_ppc("?equipment_suppresses_all_actions@@YA_NJ@Z");
//};

//bool equipment_ignores_predicted_activation(long)
//{
//    mangled_ppc("?equipment_ignores_predicted_activation@@YA_NJ@Z");
//};

//void equipment_handle_pickup(long, long)
//{
//    mangled_ppc("?equipment_handle_pickup@@YAXJJ@Z");
//};

//void equipment_definition_handle_pickup(long, long)
//{
//    mangled_ppc("?equipment_definition_handle_pickup@@YAXJJ@Z");
//};

//void equipment_notify_child_took_shield_damage(long, float)
//{
//    mangled_ppc("?equipment_notify_child_took_shield_damage@@YAXJM@Z");
//};

//bool equipment_can_be_thrown(long)
//{
//    mangled_ppc("?equipment_can_be_thrown@@YA_NJ@Z");
//};

//float equipment_get_energy(long)
//{
//    mangled_ppc("?equipment_get_energy@@YAMJ@Z");
//};

//float equipment_active_fraction(long)
//{
//    mangled_ppc("?equipment_active_fraction@@YAMJ@Z");
//};

//long equipment_remaining_charges(long)
//{
//    mangled_ppc("?equipment_remaining_charges@@YAJJ@Z");
//};

//void equipment_calculate_spawn_location(long, float, float, float, short, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?equipment_calculate_spawn_location@@YAXJMMMFPATreal_point3d@@PATvector3d@@@Z");
//};

//bool equipment_test_activation_restrictions(long, bool)
//{
//    mangled_ppc("?equipment_test_activation_restrictions@@YA_NJ_N@Z");
//};

//bool equipment_validate_equipment_index(enum e_output_user_index, long)
//{
//    mangled_ppc("?equipment_validate_equipment_index@@YA_NW4e_output_user_index@@J@Z");
//};

//bool equipment_begin_activation_animation(long)
//{
//    mangled_ppc("?equipment_begin_activation_animation@@YA_NJ@Z");
//};

//bool equipment_activate(long, enum e_equipment_activation_source)
//{
//    mangled_ppc("?equipment_activate@@YA_NJW4e_equipment_activation_source@@@Z");
//};

//bool equipment_activate_local_player(long)
//{
//    mangled_ppc("?equipment_activate_local_player@@YA_NJ@Z");
//};

//void equipment_reset_prediction_timer(long)
//{
//    mangled_ppc("?equipment_reset_prediction_timer@@YAXJ@Z");
//};

//bool equipment_can_be_activated(long)
//{
//    mangled_ppc("?equipment_can_be_activated@@YA_NJ@Z");
//};

//void equipment_activate_on_authority(long)
//{
//    mangled_ppc("?equipment_activate_on_authority@@YAXJ@Z");
//};

//void equipment_play_activation_effects(long)
//{
//    mangled_ppc("?equipment_play_activation_effects@@YAXJ@Z");
//};

//long equipment_try_and_get_owner_player_index(long)
//{
//    mangled_ppc("?equipment_try_and_get_owner_player_index@@YAJJ@Z");
//};

//bool player_can_use_equipment(long)
//{
//    mangled_ppc("?player_can_use_equipment@@YA_NJ@Z");
//};

//bool equipment_activate_client_request(long)
//{
//    mangled_ppc("?equipment_activate_client_request@@YA_NJ@Z");
//};

//bool equipment_activate_host_update(long)
//{
//    mangled_ppc("?equipment_activate_host_update@@YA_NJ@Z");
//};

//void equipment_handle_activation_attempted_while_disabled_by_player_traits(long, long)
//{
//    mangled_ppc("?equipment_handle_activation_attempted_while_disabled_by_player_traits@@YAXJJ@Z");
//};

//bool equipment_deactivate(long, enum e_equipment_activation_source)
//{
//    mangled_ppc("?equipment_deactivate@@YA_NJW4e_equipment_activation_source@@@Z");
//};

//bool equipment_deactivate_local_player(long)
//{
//    mangled_ppc("?equipment_deactivate_local_player@@YA_NJ@Z");
//};

//void equipment_deactivate_effects(long)
//{
//    mangled_ppc("?equipment_deactivate_effects@@YAXJ@Z");
//};

//void equipment_deactivate_on_authority(long)
//{
//    mangled_ppc("?equipment_deactivate_on_authority@@YAXJ@Z");
//};

//bool equipment_deactivate_client_request(long)
//{
//    mangled_ppc("?equipment_deactivate_client_request@@YA_NJ@Z");
//};

//bool equipment_deactivate_host_update(long)
//{
//    mangled_ppc("?equipment_deactivate_host_update@@YA_NJ@Z");
//};

//void equipment_apply_player_traits(long, class c_player_traits *)
//{
//    mangled_ppc("?equipment_apply_player_traits@@YAXJPAVc_player_traits@@@Z");
//};

//bool equipment_begin_animation_state(long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?equipment_begin_animation_state@@YA_NJJV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void s_animation_auxillary_settings::clear(void)
//{
//    mangled_ppc("?clear@s_animation_auxillary_settings@@QAAXXZ");
//};

//public: s_animation_auxillary_settings::s_animation_auxillary_settings(void)
//{
//    mangled_ppc("??0s_animation_auxillary_settings@@QAA@XZ");
//};

//long equipment_get_age(long)
//{
//    mangled_ppc("?equipment_get_age@@YAJJ@Z");
//};

//long equipment_get_age_authoritative(long)
//{
//    mangled_ppc("?equipment_get_age_authoritative@@YAJJ@Z");
//};

//bool equipment_is_warming_up(long)
//{
//    mangled_ppc("?equipment_is_warming_up@@YA_NJ@Z");
//};

//long equipment_animation_get_desired_idle(long)
//{
//    mangled_ppc("?equipment_animation_get_desired_idle@@YAJJ@Z");
//};

//bool equipment_owner_has_infinite_energy(long)
//{
//    mangled_ppc("?equipment_owner_has_infinite_energy@@YA_NJ@Z");
//};

//public: bool c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_equipment_datum_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_equipment_datum_flag@@G$03Us_default_enum_string_resolver@@@@QBA_NW4e_equipment_datum_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::set(enum e_equipment_datum_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_equipment_datum_flag@@G$03Us_default_enum_string_resolver@@@@QAAXW4e_equipment_datum_flag@@_N@Z");
//};

//public: void c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_setup_animation_channel_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_setup_animation_channel_flags@@_N@Z");
//};

//public: c_flags<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_equipment_datum_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_equipment_datum_flag@@G$03Us_default_enum_string_resolver@@@@SA_NW4e_equipment_datum_flag@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_equipment_datum_flag, unsigned short, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_equipment_datum_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_equipment_datum_flag@@G$03Us_default_enum_string_resolver@@@@CAGW4e_equipment_datum_flag@@@Z");
//};

//public: bool c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_setup_animation_channel_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_setup_animation_channel_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_setup_animation_channel_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_setup_animation_channel_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_setup_animation_channel_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_setup_animation_channel_flags@@@Z");
//};

