/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_simulation_game_transform_update_response@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_simulation_game_transform_update_response const c_enum_no_init<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_simulation_game_transform_update_response@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_simulation_game_transform_update_response@@B"
// public: static enum e_simulation_game_transform_update_response_flags const c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_simulation_game_transform_update_response_flags@@B"
// float k_simulation_position_update_ragdoll_ignore_update_tolerance; // "?k_simulation_position_update_ragdoll_ignore_update_tolerance@@3MA"
// float k_simulation_position_update_ragdoll_headshot_ignore_update_tolerance; // "?k_simulation_position_update_ragdoll_headshot_ignore_update_tolerance@@3MA"
// float k_simulation_position_update_ragdoll_headshot_velocity_update_tolerance; // "?k_simulation_position_update_ragdoll_headshot_velocity_update_tolerance@@3MA"
// float k_simulation_transform_update_default_position_warp_tolerance; // "?k_simulation_transform_update_default_position_warp_tolerance@@3MA"
// bool g_simulation_interpolation_visualize; // "?g_simulation_interpolation_visualize@@3_NA"
// bool g_simulation_interpolation_disable_all_position_interpolation; // "?g_simulation_interpolation_disable_all_position_interpolation@@3_NA"
// bool g_simulation_interpolation_disable_all_rotation_interpolation; // "?g_simulation_interpolation_disable_all_rotation_interpolation@@3_NA"
// bool g_simulation_interpolation_force_all_interpolation_to_use_velocity_bumps; // "?g_simulation_interpolation_force_all_interpolation_to_use_velocity_bumps@@3_NA"
// bool g_simulation_interpolation_force_all_interpolation_to_use_blending; // "?g_simulation_interpolation_force_all_interpolation_to_use_blending@@3_NA"
// bool g_simulation_interpolation_force_all_interpolation_to_use_warps; // "?g_simulation_interpolation_force_all_interpolation_to_use_warps@@3_NA"
// bool g_simulation_interpolation_disable_velocity_bumps; // "?g_simulation_interpolation_disable_velocity_bumps@@3_NA"
// bool g_simulation_interpolation_disable_blends; // "?g_simulation_interpolation_disable_blends@@3_NA"
// bool g_simulation_interpolation_use_override_position_config; // "?g_simulation_interpolation_use_override_position_config@@3_NA"
// bool g_simulation_interpolation_use_override_rotation_config; // "?g_simulation_interpolation_use_override_rotation_config@@3_NA"
// union argb_color const **update_response_colors; // "?update_response_colors@@3PAPBTargb_color@@A"

// void simulation_evaluate_and_apply_position_update(long, long, enum e_simulation_game_position_update_context, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// void simulation_blend_object(long, union real_point3d const *, union vector3d const *, union vector3d const *);
// bool simulation_update_object_interpolation(long);
// bool simulation_get_object_interpolated_position(long, union real_point3d *);
// bool simulation_get_object_interpolated_orientation(long, union vector3d *, union vector3d *);
// bool simulation_get_object_position_error(long, union vector3d *);
// bool simulation_get_object_orientation_error(long, struct real32_quaternion *);
// bool simulation_object_definition_is_set_up_for_interpolation(long);
// void simulation_notify_authority_ignored_predicted_position(long);
// void simulation_notify_skipped_transform_update(long);
// void simulation_get_object_translational_velocity_from_blending(long, union vector3d *);
// void simulation_disable_object_interpolation(long);
// void simulation_clear_cached_authoritative_transform_data(long);
// bool object_is_coming_to_rest_in_last_known_authoritative_data(long);
// bool object_is_coming_to_rest(bool, float, float, struct s_simulation_single_domain_interpolation_configuration const *);
// struct s_simulation_game_position_update_result simulation_evaluate_position_update(long, enum e_simulation_game_position_update_context, union real_point3d *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// enum e_simulation_game_transform_update_response choose_response_for_small_error(long, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, float, float, struct s_simulation_single_domain_interpolation_configuration const *, struct s_simulation_single_domain_interpolation_configuration const *);
// public: s_simulation_game_position_update_result::s_simulation_game_position_update_result(void);
// void simulation_apply_position_update(long, long, enum e_simulation_game_position_update_context, struct s_simulation_game_position_update_result, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// public: s_variant_object_datum::s_variant_object_datum(void);
// public: s_variant_multiplayer_object_properties_definition::s_variant_multiplayer_object_properties_definition(void);
// public: s_multiplayer_object_boundary::s_multiplayer_object_boundary(void);
// public: void s_variant_object_datum::initialize_to_default(void);
// void simulation_blend_object_internal(long, class c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>, union real_point3d const *, union vector3d const *, union vector3d const *);
// void simulation_warp_object(long, class c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// public: void c_motor_request::setup(enum e_action, enum e_motor_task);
// protected: void c_motor_request_base::setup_base(enum e_motor_task, enum e_action);
// public: c_motor_request::c_motor_request(void);
// protected: c_motor_request_base::c_motor_request_base(void);
// public: virtual void const * c_motor_request_base::cast_to(enum e_motor_task) const;
// void simulation_nudge_object_with_velocity(long, class c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>, enum e_simulation_game_position_update_context, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// void simulation_calculate_velocity_for_velocity_adjustment(long, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, struct s_simulation_single_domain_interpolation_configuration const *, struct s_simulation_single_domain_interpolation_configuration const *, union vector3d *, union vector3d *);
// bool object_is_dead_or_dying_biped(long);
// void reset_seat_acceleration_data(long);
// struct s_simulation_object_interpolation_data const * simulation_object_get_interpolation_data(long);
// struct s_simulation_object_interpolation_data * simulation_object_modify_interpolation_data(long, enum e_sanity_check);
// void simulation_object_sanity_check_interpolation_data(long, struct s_simulation_object_interpolation_data *);
// enum e_interpolation_status simulation_update_object_blended_position(long, union vector3d *);
// enum e_interpolation_status simulation_update_object_blended_orientation(long, struct real32_quaternion *);
// void simulation_set_object_position_for_interpolation(long, union real_point3d const *);
// void simulation_set_object_orientation_for_interpolation(long, union vector3d const *, union vector3d const *);
// struct s_simulation_interpolation_definition const * simulation_get_interpolation_configuration_from_definition(long);
// struct s_simulation_interpolation_definition const * simulation_get_interpolation_configuration(long);
// struct s_simulation_single_domain_interpolation_configuration const * simulation_get_position_interpolation_configuration(long);
// struct s_simulation_single_domain_interpolation_configuration const * simulation_get_rotation_interpolation_configuration(long);
// float object_get_translational_speed(long);
// float object_get_angular_speed(long);
// void object_adjust_position_to_avoid_device_machine_interpenetration(long, union real_point3d *);
// public: s_havok_ray_test::s_havok_ray_test(void);
// public: c_enum<enum e_multiplayer_object_boundary_shape, char, 0, 4, struct s_multiplayer_object_boundary_shape_string_resolver>::c_enum<enum e_multiplayer_object_boundary_shape, char, 0, 4, struct s_multiplayer_object_boundary_shape_string_resolver>(void);
// public: c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>(void);
// public: c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>(void);
// public: c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>(unsigned char);
// public: c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_simulation_game_transform_update_response);
// public: enum e_simulation_game_transform_update_response c_enum_no_init<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_simulation_game_transform_update_response(void) const;
// public: bool c_enum_no_init<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_simulation_game_transform_update_response) const;
// public: c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>(unsigned char);
// public: void c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::set(enum e_object_physics_flags, bool);
// public: bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::test(enum e_multiplayer_object_data_flags) const;
// public: c_flags<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::c_flags<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>(void);
// public: c_flags<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::c_flags<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>(void);
// public: void c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum e_simulation_object_interpolation_flags, bool);
// public: void c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_simulation_game_transform_update_response_flags) const;
// public: void c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_simulation_game_transform_update_response_flags, bool);
// public: void c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: static bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_object_data_flags);
// private: static unsigned short c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_object_data_flags);
// public: void c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// public: void c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_game_transform_update_response_flags);
// public: bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_game_transform_update_response_flags);
// private: static unsigned char c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::make_N_bit_mask_size_type(enum e_variant_placement_flags);
// private: static unsigned short c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::make_N_bit_mask_size_type(enum e_variant_object_placement_flags);
// private: static unsigned char c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_game_transform_update_response_flags);

//void simulation_evaluate_and_apply_position_update(long, long, enum e_simulation_game_position_update_context, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_evaluate_and_apply_position_update@@YAXJJW4e_simulation_game_position_update_context@@PBTreal_point3d@@PBTvector3d@@222@Z");
//};

//void simulation_blend_object(long, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_blend_object@@YAXJPBTreal_point3d@@PBTvector3d@@1@Z");
//};

//bool simulation_update_object_interpolation(long)
//{
//    mangled_ppc("?simulation_update_object_interpolation@@YA_NJ@Z");
//};

//bool simulation_get_object_interpolated_position(long, union real_point3d *)
//{
//    mangled_ppc("?simulation_get_object_interpolated_position@@YA_NJPATreal_point3d@@@Z");
//};

//bool simulation_get_object_interpolated_orientation(long, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?simulation_get_object_interpolated_orientation@@YA_NJPATvector3d@@0@Z");
//};

//bool simulation_get_object_position_error(long, union vector3d *)
//{
//    mangled_ppc("?simulation_get_object_position_error@@YA_NJPATvector3d@@@Z");
//};

//bool simulation_get_object_orientation_error(long, struct real32_quaternion *)
//{
//    mangled_ppc("?simulation_get_object_orientation_error@@YA_NJPAUreal32_quaternion@@@Z");
//};

//bool simulation_object_definition_is_set_up_for_interpolation(long)
//{
//    mangled_ppc("?simulation_object_definition_is_set_up_for_interpolation@@YA_NJ@Z");
//};

//void simulation_notify_authority_ignored_predicted_position(long)
//{
//    mangled_ppc("?simulation_notify_authority_ignored_predicted_position@@YAXJ@Z");
//};

//void simulation_notify_skipped_transform_update(long)
//{
//    mangled_ppc("?simulation_notify_skipped_transform_update@@YAXJ@Z");
//};

//void simulation_get_object_translational_velocity_from_blending(long, union vector3d *)
//{
//    mangled_ppc("?simulation_get_object_translational_velocity_from_blending@@YAXJPATvector3d@@@Z");
//};

//void simulation_disable_object_interpolation(long)
//{
//    mangled_ppc("?simulation_disable_object_interpolation@@YAXJ@Z");
//};

//void simulation_clear_cached_authoritative_transform_data(long)
//{
//    mangled_ppc("?simulation_clear_cached_authoritative_transform_data@@YAXJ@Z");
//};

//bool object_is_coming_to_rest_in_last_known_authoritative_data(long)
//{
//    mangled_ppc("?object_is_coming_to_rest_in_last_known_authoritative_data@@YA_NJ@Z");
//};

//bool object_is_coming_to_rest(bool, float, float, struct s_simulation_single_domain_interpolation_configuration const *)
//{
//    mangled_ppc("?object_is_coming_to_rest@@YA_N_NMMPBUs_simulation_single_domain_interpolation_configuration@@@Z");
//};

//struct s_simulation_game_position_update_result simulation_evaluate_position_update(long, enum e_simulation_game_position_update_context, union real_point3d *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_evaluate_position_update@@YA?AUs_simulation_game_position_update_result@@JW4e_simulation_game_position_update_context@@PATreal_point3d@@PBTvector3d@@222@Z");
//};

//enum e_simulation_game_transform_update_response choose_response_for_small_error(long, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, float, float, struct s_simulation_single_domain_interpolation_configuration const *, struct s_simulation_single_domain_interpolation_configuration const *)
//{
//    mangled_ppc("?choose_response_for_small_error@@YA?AW4e_simulation_game_transform_update_response@@JPBTreal_point3d@@PBTvector3d@@111MMPBUs_simulation_single_domain_interpolation_configuration@@2@Z");
//};

//public: s_simulation_game_position_update_result::s_simulation_game_position_update_result(void)
//{
//    mangled_ppc("??0s_simulation_game_position_update_result@@QAA@XZ");
//};

//void simulation_apply_position_update(long, long, enum e_simulation_game_position_update_context, struct s_simulation_game_position_update_result, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_apply_position_update@@YAXJJW4e_simulation_game_position_update_context@@Us_simulation_game_position_update_result@@PBTreal_point3d@@PBTvector3d@@333@Z");
//};

//public: s_variant_object_datum::s_variant_object_datum(void)
//{
//    mangled_ppc("??0s_variant_object_datum@@QAA@XZ");
//};

//public: s_variant_multiplayer_object_properties_definition::s_variant_multiplayer_object_properties_definition(void)
//{
//    mangled_ppc("??0s_variant_multiplayer_object_properties_definition@@QAA@XZ");
//};

//public: s_multiplayer_object_boundary::s_multiplayer_object_boundary(void)
//{
//    mangled_ppc("??0s_multiplayer_object_boundary@@QAA@XZ");
//};

//public: void s_variant_object_datum::initialize_to_default(void)
//{
//    mangled_ppc("?initialize_to_default@s_variant_object_datum@@QAAXXZ");
//};

//void simulation_blend_object_internal(long, class c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_blend_object_internal@@YAXJV?$c_flags@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@PBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void simulation_warp_object(long, class c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_warp_object@@YAXJV?$c_flags@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@PBTreal_point3d@@PBTvector3d@@222@Z");
//};

//public: void c_motor_request::setup(enum e_action, enum e_motor_task)
//{
//    mangled_ppc("?setup@c_motor_request@@QAAXW4e_action@@W4e_motor_task@@@Z");
//};

//protected: void c_motor_request_base::setup_base(enum e_motor_task, enum e_action)
//{
//    mangled_ppc("?setup_base@c_motor_request_base@@IAAXW4e_motor_task@@W4e_action@@@Z");
//};

//public: c_motor_request::c_motor_request(void)
//{
//    mangled_ppc("??0c_motor_request@@QAA@XZ");
//};

//protected: c_motor_request_base::c_motor_request_base(void)
//{
//    mangled_ppc("??0c_motor_request_base@@IAA@XZ");
//};

//public: virtual void const * c_motor_request_base::cast_to(enum e_motor_task) const
//{
//    mangled_ppc("?cast_to@c_motor_request_base@@UBAPBXW4e_motor_task@@@Z");
//};

//void simulation_nudge_object_with_velocity(long, class c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>, enum e_simulation_game_position_update_context, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_nudge_object_with_velocity@@YAXJV?$c_flags@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@W4e_simulation_game_position_update_context@@PBTreal_point3d@@PBTvector3d@@333@Z");
//};

//void simulation_calculate_velocity_for_velocity_adjustment(long, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, struct s_simulation_single_domain_interpolation_configuration const *, struct s_simulation_single_domain_interpolation_configuration const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?simulation_calculate_velocity_for_velocity_adjustment@@YAXJPBTreal_point3d@@PBTvector3d@@111PBUs_simulation_single_domain_interpolation_configuration@@2PAT2@3@Z");
//};

//bool object_is_dead_or_dying_biped(long)
//{
//    mangled_ppc("?object_is_dead_or_dying_biped@@YA_NJ@Z");
//};

//void reset_seat_acceleration_data(long)
//{
//    mangled_ppc("?reset_seat_acceleration_data@@YAXJ@Z");
//};

//struct s_simulation_object_interpolation_data const * simulation_object_get_interpolation_data(long)
//{
//    mangled_ppc("?simulation_object_get_interpolation_data@@YAPBUs_simulation_object_interpolation_data@@J@Z");
//};

//struct s_simulation_object_interpolation_data * simulation_object_modify_interpolation_data(long, enum e_sanity_check)
//{
//    mangled_ppc("?simulation_object_modify_interpolation_data@@YAPAUs_simulation_object_interpolation_data@@JW4e_sanity_check@@@Z");
//};

//void simulation_object_sanity_check_interpolation_data(long, struct s_simulation_object_interpolation_data *)
//{
//    mangled_ppc("?simulation_object_sanity_check_interpolation_data@@YAXJPAUs_simulation_object_interpolation_data@@@Z");
//};

//enum e_interpolation_status simulation_update_object_blended_position(long, union vector3d *)
//{
//    mangled_ppc("?simulation_update_object_blended_position@@YA?AW4e_interpolation_status@@JPATvector3d@@@Z");
//};

//enum e_interpolation_status simulation_update_object_blended_orientation(long, struct real32_quaternion *)
//{
//    mangled_ppc("?simulation_update_object_blended_orientation@@YA?AW4e_interpolation_status@@JPAUreal32_quaternion@@@Z");
//};

//void simulation_set_object_position_for_interpolation(long, union real_point3d const *)
//{
//    mangled_ppc("?simulation_set_object_position_for_interpolation@@YAXJPBTreal_point3d@@@Z");
//};

//void simulation_set_object_orientation_for_interpolation(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?simulation_set_object_orientation_for_interpolation@@YAXJPBTvector3d@@0@Z");
//};

//struct s_simulation_interpolation_definition const * simulation_get_interpolation_configuration_from_definition(long)
//{
//    mangled_ppc("?simulation_get_interpolation_configuration_from_definition@@YAPBUs_simulation_interpolation_definition@@J@Z");
//};

//struct s_simulation_interpolation_definition const * simulation_get_interpolation_configuration(long)
//{
//    mangled_ppc("?simulation_get_interpolation_configuration@@YAPBUs_simulation_interpolation_definition@@J@Z");
//};

//struct s_simulation_single_domain_interpolation_configuration const * simulation_get_position_interpolation_configuration(long)
//{
//    mangled_ppc("?simulation_get_position_interpolation_configuration@@YAPBUs_simulation_single_domain_interpolation_configuration@@J@Z");
//};

//struct s_simulation_single_domain_interpolation_configuration const * simulation_get_rotation_interpolation_configuration(long)
//{
//    mangled_ppc("?simulation_get_rotation_interpolation_configuration@@YAPBUs_simulation_single_domain_interpolation_configuration@@J@Z");
//};

//float object_get_translational_speed(long)
//{
//    mangled_ppc("?object_get_translational_speed@@YAMJ@Z");
//};

//float object_get_angular_speed(long)
//{
//    mangled_ppc("?object_get_angular_speed@@YAMJ@Z");
//};

//void object_adjust_position_to_avoid_device_machine_interpenetration(long, union real_point3d *)
//{
//    mangled_ppc("?object_adjust_position_to_avoid_device_machine_interpenetration@@YAXJPATreal_point3d@@@Z");
//};

//public: s_havok_ray_test::s_havok_ray_test(void)
//{
//    mangled_ppc("??0s_havok_ray_test@@QAA@XZ");
//};

//public: c_enum<enum e_multiplayer_object_boundary_shape, char, 0, 4, struct s_multiplayer_object_boundary_shape_string_resolver>::c_enum<enum e_multiplayer_object_boundary_shape, char, 0, 4, struct s_multiplayer_object_boundary_shape_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_boundary_shape@@D$0A@$03Us_multiplayer_object_boundary_shape_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_type@@D$0A@$0BM@Us_multiplayer_object_type_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>(unsigned char)
//{
//    mangled_ppc("??0?$c_flags@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QAA@E@Z");
//};

//public: c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_game_transform_update_response@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_simulation_game_transform_update_response)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_game_transform_update_response@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_simulation_game_transform_update_response@@@Z");
//};

//public: enum e_simulation_game_transform_update_response c_enum_no_init<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_simulation_game_transform_update_response(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_simulation_game_transform_update_response@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_simulation_game_transform_update_response@@XZ");
//};

//public: bool c_enum_no_init<enum e_simulation_game_transform_update_response, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_simulation_game_transform_update_response) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_simulation_game_transform_update_response@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_game_transform_update_response@@@Z");
//};

//public: c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>(unsigned char)
//{
//    mangled_ppc("??0?$c_flags@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QAA@E@Z");
//};

//public: void c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::set(enum e_object_physics_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_object_physics_flags@@K$0BM@Us_default_enum_string_resolver@@@@QAAXW4e_object_physics_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::test(enum e_multiplayer_object_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@QBA_NW4e_multiplayer_object_data_flags@@@Z");
//};

//public: c_flags<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::c_flags<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::c_flags<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_variant_object_placement_flags@@G$01Us_variant_object_placement_flags_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_simulation_object_interpolation_flags, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum e_simulation_object_interpolation_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_object_interpolation_flags@@E$07Us_default_enum_string_resolver@@@@QAAXW4e_simulation_object_interpolation_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_simulation_game_transform_update_response_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_game_transform_update_response_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_simulation_game_transform_update_response_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_simulation_game_transform_update_response_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_object_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@SA_NW4e_multiplayer_object_data_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_object_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@CAGW4e_multiplayer_object_data_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_variant_object_placement_flags@@G$01Us_variant_object_placement_flags_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_variant_object_placement_flags@@G$01Us_variant_object_placement_flags_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_game_transform_update_response_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_simulation_game_transform_update_response_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_game_transform_update_response_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_simulation_game_transform_update_response_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@CAEXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_variant_object_placement_flags@@G$01Us_variant_object_placement_flags_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::make_N_bit_mask_size_type(enum e_variant_placement_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@CAEW4e_variant_placement_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_variant_object_placement_flags, unsigned short, 2, struct s_variant_object_placement_flags_string_resolver>::make_N_bit_mask_size_type(enum e_variant_object_placement_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_variant_object_placement_flags@@G$01Us_variant_object_placement_flags_string_resolver@@@@CAGW4e_variant_object_placement_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_game_transform_update_response_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_game_transform_update_response_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_simulation_game_transform_update_response_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_simulation_game_transform_update_response_flags@@@Z");
//};

