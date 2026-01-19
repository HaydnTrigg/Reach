/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum s_vehicle_alien_scout_definition::e_flags const c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@s_vehicle_alien_scout_definition@@E$00Us_default_enum_string_resolver@@@@2W4e_flags@s_vehicle_alien_scout_definition@@B"
// public: static enum s_vehicle_turret_definition::e_flag const c_flags_no_init<enum s_vehicle_turret_definition::e_flag, unsigned short, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flag@s_vehicle_turret_definition@@G$04Us_default_enum_string_resolver@@@@2W4e_flag@s_vehicle_turret_definition@@B"
// public: static enum s_vehicle_space_fighter_definition::e_turn_back_flag const c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_turn_back_flag@s_vehicle_space_fighter_definition@@K$00Us_default_enum_string_resolver@@@@2W4e_turn_back_flag@s_vehicle_space_fighter_definition@@B"
// bool vehicle_status_display; // "?vehicle_status_display@@3_NA"
// struct c_status_line *vehicle_status_meters; // "?vehicle_status_meters@@3PAUc_status_line@@A"

// void vehicles_initialize(void);
// void vehicles_initialize_for_new_map(void);
// void vehicles_dispose_from_old_map(void);
// void vehicles_dispose(void);
// void vehicle_place(long, struct s_scenario_vehicle *);
// void vehicle_reset(long);
// bool vehicle_new(long, struct s_object_placement_data *, bool *);
// enum e_vehicle_type vehicle_get_type(long);
// bool vehicle_should_override_deactivation(long);
// bool vehicle_update(long);
// void vehicle_deplete_function_variables(long);
// void vehicle_update_kill_volumes(long);
// void vehicle_handle_deleted_object(long, long);
// void vehicle_died(long);
// void vehicle_affected_by_shape_phantom_this_tick(long);
// void vehicle_adjust_gravity_scale(long, float *);
// void vehicle_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *);
// bool vehicle_causes_collision_damage(long);
// bool vehicle_build_update(long, void *, short *, short);
// bool vehicle_parse_update(long, void *, short *, short);
// void vehicle_set_auto_turret(long, long, float, float, float);
// void vehicle_set_auto_turret(long, long, float, float, float, long);
// bool vehicle_auto_control(long);
// void vehicle_set_auto_turret_damage_owner(long, long);
// bool vehicle_get_auto_turret_damage_owner(long, struct s_damage_owner *);
// void vehicle_hover(long, bool);
// void vehicle_render_debug(long);
// void vehicle_find_pathfinding_location(long, short *, long *, class c_sector_ref *, union real_point3d *, long *, unsigned long *);
// bool vehicle_can_be_teleported(long);
// bool vehicle_physics_disabled(long);
// void vehicle_enable_ghost_effects(bool);
// void vehicle_handle_tag_change(long);
// bool vehicle_is_flipped(long);
// bool vehicle_is_stopped(long);
// bool vehicle_has_fixed_camera_yaw(long);
// bool vehicle_compute_function_value(long, long, long, float *, bool *, bool *);
// public: suspension_animation_iterator::suspension_animation_iterator(void);
// public: suspension_animation_iterator::~suspension_animation_iterator(void);
// bool vehicle_moving_near_any_player(long *);
// bool vehicle_about_to_detonate_near_any_player(long *);
// bool vehicle_is_running_trick(long);
// bool vehicle_is_running_animated_trick(long);
// struct s_unit_trick_definition const * vehicle_get_current_trick_definition(long);
// bool vehicle_start_trick(long, long);
// long vehicle_count_bipeds_killed(long);
// void vehicle_get_seat_position(long, short, union real_point3d *);
// long vehicle_get_ultimate_parent(long);
// short vehicle_get_driver_seat(long, long *);
// long vehicle_unit_occupant(long, long *, bool, bool);
// void vehicle_eject_all_players(long);
// bool object_is_huge_vehicle(long);
// void vehicle_set_emp_timer_from_authority(long, long);
// void vehicle_get_deceleration_by_type(long, float *, float *, float *);
// public: void c_object_iterator<struct vehicle_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct vehicle_datum>::next(void);
// public: struct vehicle_datum * c_object_iterator<struct vehicle_datum>::get_datum(void);
// public: void c_flags_no_init<enum e_vehicle_flags, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum s_vehicle_alien_scout_definition::e_flags) const;
// public: static bool c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_vehicle_alien_scout_definition::e_flags);
// private: static unsigned char c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_vehicle_alien_scout_definition::e_flags);

//void vehicles_initialize(void)
//{
//    mangled_ppc("?vehicles_initialize@@YAXXZ");
//};

//void vehicles_initialize_for_new_map(void)
//{
//    mangled_ppc("?vehicles_initialize_for_new_map@@YAXXZ");
//};

//void vehicles_dispose_from_old_map(void)
//{
//    mangled_ppc("?vehicles_dispose_from_old_map@@YAXXZ");
//};

//void vehicles_dispose(void)
//{
//    mangled_ppc("?vehicles_dispose@@YAXXZ");
//};

//void vehicle_place(long, struct s_scenario_vehicle *)
//{
//    mangled_ppc("?vehicle_place@@YAXJPAUs_scenario_vehicle@@@Z");
//};

//void vehicle_reset(long)
//{
//    mangled_ppc("?vehicle_reset@@YAXJ@Z");
//};

//bool vehicle_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?vehicle_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//enum e_vehicle_type vehicle_get_type(long)
//{
//    mangled_ppc("?vehicle_get_type@@YA?AW4e_vehicle_type@@J@Z");
//};

//bool vehicle_should_override_deactivation(long)
//{
//    mangled_ppc("?vehicle_should_override_deactivation@@YA_NJ@Z");
//};

//bool vehicle_update(long)
//{
//    mangled_ppc("?vehicle_update@@YA_NJ@Z");
//};

//void vehicle_deplete_function_variables(long)
//{
//    mangled_ppc("?vehicle_deplete_function_variables@@YAXJ@Z");
//};

//void vehicle_update_kill_volumes(long)
//{
//    mangled_ppc("?vehicle_update_kill_volumes@@YAXJ@Z");
//};

//void vehicle_handle_deleted_object(long, long)
//{
//    mangled_ppc("?vehicle_handle_deleted_object@@YAXJJ@Z");
//};

//void vehicle_died(long)
//{
//    mangled_ppc("?vehicle_died@@YAXJ@Z");
//};

//void vehicle_affected_by_shape_phantom_this_tick(long)
//{
//    mangled_ppc("?vehicle_affected_by_shape_phantom_this_tick@@YAXJ@Z");
//};

//void vehicle_adjust_gravity_scale(long, float *)
//{
//    mangled_ppc("?vehicle_adjust_gravity_scale@@YAXJPAM@Z");
//};

//void vehicle_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *)
//{
//    mangled_ppc("?vehicle_preprocess_node_orientations@@YAXJPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@@Z");
//};

//bool vehicle_causes_collision_damage(long)
//{
//    mangled_ppc("?vehicle_causes_collision_damage@@YA_NJ@Z");
//};

//bool vehicle_build_update(long, void *, short *, short)
//{
//    mangled_ppc("?vehicle_build_update@@YA_NJPAXPAFF@Z");
//};

//bool vehicle_parse_update(long, void *, short *, short)
//{
//    mangled_ppc("?vehicle_parse_update@@YA_NJPAXPAFF@Z");
//};

//void vehicle_set_auto_turret(long, long, float, float, float)
//{
//    mangled_ppc("?vehicle_set_auto_turret@@YAXJJMMM@Z");
//};

//void vehicle_set_auto_turret(long, long, float, float, float, long)
//{
//    mangled_ppc("?vehicle_set_auto_turret@@YAXJJMMMJ@Z");
//};

//bool vehicle_auto_control(long)
//{
//    mangled_ppc("?vehicle_auto_control@@YA_NJ@Z");
//};

//void vehicle_set_auto_turret_damage_owner(long, long)
//{
//    mangled_ppc("?vehicle_set_auto_turret_damage_owner@@YAXJJ@Z");
//};

//bool vehicle_get_auto_turret_damage_owner(long, struct s_damage_owner *)
//{
//    mangled_ppc("?vehicle_get_auto_turret_damage_owner@@YA_NJPAUs_damage_owner@@@Z");
//};

//void vehicle_hover(long, bool)
//{
//    mangled_ppc("?vehicle_hover@@YAXJ_N@Z");
//};

//void vehicle_render_debug(long)
//{
//    mangled_ppc("?vehicle_render_debug@@YAXJ@Z");
//};

//void vehicle_find_pathfinding_location(long, short *, long *, class c_sector_ref *, union real_point3d *, long *, unsigned long *)
//{
//    mangled_ppc("?vehicle_find_pathfinding_location@@YAXJPAFPAJPAVc_sector_ref@@PATreal_point3d@@1PAK@Z");
//};

//bool vehicle_can_be_teleported(long)
//{
//    mangled_ppc("?vehicle_can_be_teleported@@YA_NJ@Z");
//};

//bool vehicle_physics_disabled(long)
//{
//    mangled_ppc("?vehicle_physics_disabled@@YA_NJ@Z");
//};

//void vehicle_enable_ghost_effects(bool)
//{
//    mangled_ppc("?vehicle_enable_ghost_effects@@YAX_N@Z");
//};

//void vehicle_handle_tag_change(long)
//{
//    mangled_ppc("?vehicle_handle_tag_change@@YAXJ@Z");
//};

//bool vehicle_is_flipped(long)
//{
//    mangled_ppc("?vehicle_is_flipped@@YA_NJ@Z");
//};

//bool vehicle_is_stopped(long)
//{
//    mangled_ppc("?vehicle_is_stopped@@YA_NJ@Z");
//};

//bool vehicle_has_fixed_camera_yaw(long)
//{
//    mangled_ppc("?vehicle_has_fixed_camera_yaw@@YA_NJ@Z");
//};

//bool vehicle_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?vehicle_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//public: suspension_animation_iterator::suspension_animation_iterator(void)
//{
//    mangled_ppc("??0suspension_animation_iterator@@QAA@XZ");
//};

//public: suspension_animation_iterator::~suspension_animation_iterator(void)
//{
//    mangled_ppc("??1suspension_animation_iterator@@QAA@XZ");
//};

//bool vehicle_moving_near_any_player(long *)
//{
//    mangled_ppc("?vehicle_moving_near_any_player@@YA_NPAJ@Z");
//};

//bool vehicle_about_to_detonate_near_any_player(long *)
//{
//    mangled_ppc("?vehicle_about_to_detonate_near_any_player@@YA_NPAJ@Z");
//};

//bool vehicle_is_running_trick(long)
//{
//    mangled_ppc("?vehicle_is_running_trick@@YA_NJ@Z");
//};

//bool vehicle_is_running_animated_trick(long)
//{
//    mangled_ppc("?vehicle_is_running_animated_trick@@YA_NJ@Z");
//};

//struct s_unit_trick_definition const * vehicle_get_current_trick_definition(long)
//{
//    mangled_ppc("?vehicle_get_current_trick_definition@@YAPBUs_unit_trick_definition@@J@Z");
//};

//bool vehicle_start_trick(long, long)
//{
//    mangled_ppc("?vehicle_start_trick@@YA_NJJ@Z");
//};

//long vehicle_count_bipeds_killed(long)
//{
//    mangled_ppc("?vehicle_count_bipeds_killed@@YAJJ@Z");
//};

//void vehicle_get_seat_position(long, short, union real_point3d *)
//{
//    mangled_ppc("?vehicle_get_seat_position@@YAXJFPATreal_point3d@@@Z");
//};

//long vehicle_get_ultimate_parent(long)
//{
//    mangled_ppc("?vehicle_get_ultimate_parent@@YAJJ@Z");
//};

//short vehicle_get_driver_seat(long, long *)
//{
//    mangled_ppc("?vehicle_get_driver_seat@@YAFJPAJ@Z");
//};

//long vehicle_unit_occupant(long, long *, bool, bool)
//{
//    mangled_ppc("?vehicle_unit_occupant@@YAJJPAJ_N1@Z");
//};

//void vehicle_eject_all_players(long)
//{
//    mangled_ppc("?vehicle_eject_all_players@@YAXJ@Z");
//};

//bool object_is_huge_vehicle(long)
//{
//    mangled_ppc("?object_is_huge_vehicle@@YA_NJ@Z");
//};

//void vehicle_set_emp_timer_from_authority(long, long)
//{
//    mangled_ppc("?vehicle_set_emp_timer_from_authority@@YAXJJ@Z");
//};

//void vehicle_get_deceleration_by_type(long, float *, float *, float *)
//{
//    mangled_ppc("?vehicle_get_deceleration_by_type@@YAXJPAM00@Z");
//};

//public: void c_object_iterator<struct vehicle_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Uvehicle_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct vehicle_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Uvehicle_datum@@@@QAA_NXZ");
//};

//public: struct vehicle_datum * c_object_iterator<struct vehicle_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Uvehicle_datum@@@@QAAPAUvehicle_datum@@XZ");
//};

//public: void c_flags_no_init<enum e_vehicle_flags, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_vehicle_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum s_vehicle_alien_scout_definition::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@s_vehicle_alien_scout_definition@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_flags@s_vehicle_alien_scout_definition@@@Z");
//};

//public: static bool c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_vehicle_alien_scout_definition::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@s_vehicle_alien_scout_definition@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_flags@s_vehicle_alien_scout_definition@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_vehicle_alien_scout_definition::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_vehicle_alien_scout_definition::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@s_vehicle_alien_scout_definition@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flags@s_vehicle_alien_scout_definition@@@Z");
//};

