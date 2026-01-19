/* ---------- headers */

#include "omaha\units\giants.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long g_giant_hunt_player; // "?g_giant_hunt_player@@3JA"
// float g_giant_hunting_min_radius; // "?g_giant_hunting_min_radius@@3MA"
// float g_giant_hunting_max_radius; // "?g_giant_hunting_max_radius@@3MA"
// float g_giant_hunting_throttle_scale; // "?g_giant_hunting_throttle_scale@@3MA"
// long g_giant_weapon_wait_time; // "?g_giant_weapon_wait_time@@3JA"
// long g_giant_weapon_trigger_time; // "?g_giant_weapon_trigger_time@@3JA"
// bool g_giant_foot_ik; // "?g_giant_foot_ik@@3_NA"
// bool g_giant_ankle_ik; // "?g_giant_ankle_ik@@3_NA"
// bool g_giant_elevation_control; // "?g_giant_elevation_control@@3_NA"
// bool g_giant_buckle_rotation; // "?g_giant_buckle_rotation@@3_NA"
// float g_giant_custom_animation_recovery_time; // "?g_giant_custom_animation_recovery_time@@3MA"
// bool g_giant_force_buckle; // "?g_giant_force_buckle@@3_NA"
// bool g_giant_force_crouch; // "?g_giant_force_crouch@@3_NA"
// bool g_giant_force_death; // "?g_giant_force_death@@3_NA"
// bool debug_objects_giant_feet; // "?debug_objects_giant_feet@@3_NA"
// bool debug_objects_giant_buckle; // "?debug_objects_giant_buckle@@3_NA"

// void giant_render_debug(long);
// union real_point3d * get_buckling_ground_map_point(struct s_buckling_workspace *, long, long);
// void giant_place(long, struct s_scenario_giant *);
// bool giant_new(long, struct s_object_placement_data *, bool *);
// void giant_delete(long);
// void giant_update_crouch(long);
// bool giant_update(long);
// bool giant_compute_function_value(long, long, long, float *, bool *, bool *);
// float giant_buckling_magnitude_get(long);
// void giant_clear_foot_tracking_data(long);
// void giant_setup_foot_tracking_data(long);
// void giant_update_elevation(long, float);
// void giant_update_foot_tracking(long);
// bool giant_predict_future_foot_position(long, long, long, union real_point3d *, union real_point3d *, union vector3d *, union real_point3d *);
// bool giant_find_ground_point(long, union real_point3d const *, union real_point3d *, union vector3d *, union real_point3d *);
// bool giant_solve_future_marker_position(long, long, long, struct real_matrix4x3*);
// bool giant_ik_foot_chain(long, union real_point3d const *, float, long, float, float, long, struct real_matrix4x3*);
// void giant_adjust_node_matrices(long, long, struct real_matrix4x3*);
// public: float c_animation_manager::get_interpolation_ratio(void) const;
// void giant_clear_foot_target_flags(long);
// void giant_set_buckle_desire(long, bool);
// void giant_set_crouch_desire(long, bool);
// void giant_set_death_desire(long, bool);
// bool giant_waiting_to_buckle(long);
// bool giant_waiting_to_buckle_or_buckling(long);
// void giant_animation_setup_mixing_board(class c_animation_manager *);
// void giant_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *);
// void giant_setup_buckling_parameters(long);
// void setup_buckling_globals(long, long, long, struct real_matrix4x3const *, float, float, float, float);
// float compute_score_of_buckle_angles(struct s_buckling_workspace *, float, float, struct real_matrix4x3const *, struct real_matrix4x3*);
// public: c_buckling_map_iterator::c_buckling_map_iterator(void);
// public: c_buckling_map_iterator::~c_buckling_map_iterator(void);
// public: void c_buckling_map_iterator::setup(struct s_buckling_workspace *, long, long);
// public: bool c_buckling_map_iterator::valid(void) const;
// public: bool c_buckling_map_iterator::next(void);
// public: union real_point3d const * c_buckling_map_iterator::get_point_const(void) const;
// bool giant_handle_motor_update(long, bool);
// public: class c_model_animation const * c_animation_manager::get_active_animation(void) const;
// short giant_pathfinding_policy(long, struct s_scenario_giant const *);
// struct giant_buckle_parameters const * giant_get_current_buckle_parameters(long);
// long giant_get_current_buckle_state_name(long);
// void giant_locate_auxilary_animations(long, class c_animation_manager *, void *);
// void giant_find_pathfinding_location(long, short *, long *, class c_sector_ref *, union real_point3d *, long *, unsigned long *);
// public: c_enum<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_foot_tracking_state);
// public: enum e_foot_tracking_state c_enum_no_init<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_foot_tracking_state(void) const;
// public: bool c_enum_no_init<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_foot_tracking_state) const;
// public: enum e_giant_buckle_type c_enum_no_init<enum e_giant_buckle_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_giant_buckle_type(void) const;
// public: bool c_enum_no_init<enum e_giant_buckle_type, short, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_giant_buckle_type) const;
// public: c_enum<enum e_giant_buckle_state, short, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_giant_buckle_state, short, 0, 5, struct s_default_enum_string_resolver>(enum e_giant_buckle_state);
// public: bool c_enum_no_init<enum e_giant_buckle_state, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_giant_buckle_state) const;
// public: void c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_giant_foot_flags) const;
// public: void c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_giant_foot_flags, bool);
// public: bool c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::test(enum e_giant_flag) const;
// public: void c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::set(enum e_giant_flag, bool);
// public: static bool c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_giant_foot_flags);
// private: static unsigned char c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_giant_foot_flags);
// public: static bool c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_giant_flag);
// private: static unsigned long c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_giant_flag);

//void giant_render_debug(long)
//{
//    mangled_ppc("?giant_render_debug@@YAXJ@Z");
//};

//union real_point3d * get_buckling_ground_map_point(struct s_buckling_workspace *, long, long)
//{
//    mangled_ppc("?get_buckling_ground_map_point@@YAPATreal_point3d@@PAUs_buckling_workspace@@JJ@Z");
//};

//void giant_place(long, struct s_scenario_giant *)
//{
//    mangled_ppc("?giant_place@@YAXJPAUs_scenario_giant@@@Z");
//};

//bool giant_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?giant_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void giant_delete(long)
//{
//    mangled_ppc("?giant_delete@@YAXJ@Z");
//};

//void giant_update_crouch(long)
//{
//    mangled_ppc("?giant_update_crouch@@YAXJ@Z");
//};

//bool giant_update(long)
//{
//    mangled_ppc("?giant_update@@YA_NJ@Z");
//};

//bool giant_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?giant_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//float giant_buckling_magnitude_get(long)
//{
//    mangled_ppc("?giant_buckling_magnitude_get@@YAMJ@Z");
//};

//void giant_clear_foot_tracking_data(long)
//{
//    mangled_ppc("?giant_clear_foot_tracking_data@@YAXJ@Z");
//};

//void giant_setup_foot_tracking_data(long)
//{
//    mangled_ppc("?giant_setup_foot_tracking_data@@YAXJ@Z");
//};

//void giant_update_elevation(long, float)
//{
//    mangled_ppc("?giant_update_elevation@@YAXJM@Z");
//};

//void giant_update_foot_tracking(long)
//{
//    mangled_ppc("?giant_update_foot_tracking@@YAXJ@Z");
//};

//bool giant_predict_future_foot_position(long, long, long, union real_point3d *, union real_point3d *, union vector3d *, union real_point3d *)
//{
//    mangled_ppc("?giant_predict_future_foot_position@@YA_NJJJPATreal_point3d@@0PATvector3d@@0@Z");
//};

//bool giant_find_ground_point(long, union real_point3d const *, union real_point3d *, union vector3d *, union real_point3d *)
//{
//    mangled_ppc("?giant_find_ground_point@@YA_NJPBTreal_point3d@@PAT1@PATvector3d@@1@Z");
//};

//bool giant_solve_future_marker_position(long, long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?giant_solve_future_marker_position@@YA_NJJJPAUreal_matrix4x3@@@Z");
//};

//bool giant_ik_foot_chain(long, union real_point3d const *, float, long, float, float, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?giant_ik_foot_chain@@YA_NJPBTreal_point3d@@MJMMJPAUreal_matrix4x3@@@Z");
//};

//void giant_adjust_node_matrices(long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?giant_adjust_node_matrices@@YAXJJPAUreal_matrix4x3@@@Z");
//};

//public: float c_animation_manager::get_interpolation_ratio(void) const
//{
//    mangled_ppc("?get_interpolation_ratio@c_animation_manager@@QBAMXZ");
//};

//void giant_clear_foot_target_flags(long)
//{
//    mangled_ppc("?giant_clear_foot_target_flags@@YAXJ@Z");
//};

//void giant_set_buckle_desire(long, bool)
//{
//    mangled_ppc("?giant_set_buckle_desire@@YAXJ_N@Z");
//};

//void giant_set_crouch_desire(long, bool)
//{
//    mangled_ppc("?giant_set_crouch_desire@@YAXJ_N@Z");
//};

//void giant_set_death_desire(long, bool)
//{
//    mangled_ppc("?giant_set_death_desire@@YAXJ_N@Z");
//};

//bool giant_waiting_to_buckle(long)
//{
//    mangled_ppc("?giant_waiting_to_buckle@@YA_NJ@Z");
//};

//bool giant_waiting_to_buckle_or_buckling(long)
//{
//    mangled_ppc("?giant_waiting_to_buckle_or_buckling@@YA_NJ@Z");
//};

//void giant_animation_setup_mixing_board(class c_animation_manager *)
//{
//    mangled_ppc("?giant_animation_setup_mixing_board@@YAXPAVc_animation_manager@@@Z");
//};

//void giant_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *)
//{
//    mangled_ppc("?giant_preprocess_node_orientations@@YAXJPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@@Z");
//};

//void giant_setup_buckling_parameters(long)
//{
//    mangled_ppc("?giant_setup_buckling_parameters@@YAXJ@Z");
//};

//void setup_buckling_globals(long, long, long, struct real_matrix4x3const *, float, float, float, float)
//{
//    mangled_ppc("?setup_buckling_globals@@YAXJJJPBUreal_matrix4x3@@MMMM@Z");
//};

//float compute_score_of_buckle_angles(struct s_buckling_workspace *, float, float, struct real_matrix4x3const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?compute_score_of_buckle_angles@@YAMPAUs_buckling_workspace@@MMPBUreal_matrix4x3@@PAU2@@Z");
//};

//public: c_buckling_map_iterator::c_buckling_map_iterator(void)
//{
//    mangled_ppc("??0c_buckling_map_iterator@@QAA@XZ");
//};

//public: c_buckling_map_iterator::~c_buckling_map_iterator(void)
//{
//    mangled_ppc("??1c_buckling_map_iterator@@QAA@XZ");
//};

//public: void c_buckling_map_iterator::setup(struct s_buckling_workspace *, long, long)
//{
//    mangled_ppc("?setup@c_buckling_map_iterator@@QAAXPAUs_buckling_workspace@@JJ@Z");
//};

//public: bool c_buckling_map_iterator::valid(void) const
//{
//    mangled_ppc("?valid@c_buckling_map_iterator@@QBA_NXZ");
//};

//public: bool c_buckling_map_iterator::next(void)
//{
//    mangled_ppc("?next@c_buckling_map_iterator@@QAA_NXZ");
//};

//public: union real_point3d const * c_buckling_map_iterator::get_point_const(void) const
//{
//    mangled_ppc("?get_point_const@c_buckling_map_iterator@@QBAPBTreal_point3d@@XZ");
//};

//bool giant_handle_motor_update(long, bool)
//{
//    mangled_ppc("?giant_handle_motor_update@@YA_NJ_N@Z");
//};

//public: class c_model_animation const * c_animation_manager::get_active_animation(void) const
//{
//    mangled_ppc("?get_active_animation@c_animation_manager@@QBAPBVc_model_animation@@XZ");
//};

//short giant_pathfinding_policy(long, struct s_scenario_giant const *)
//{
//    mangled_ppc("?giant_pathfinding_policy@@YAFJPBUs_scenario_giant@@@Z");
//};

//struct giant_buckle_parameters const * giant_get_current_buckle_parameters(long)
//{
//    mangled_ppc("?giant_get_current_buckle_parameters@@YAPBUgiant_buckle_parameters@@J@Z");
//};

//long giant_get_current_buckle_state_name(long)
//{
//    mangled_ppc("?giant_get_current_buckle_state_name@@YAJJ@Z");
//};

//void giant_locate_auxilary_animations(long, class c_animation_manager *, void *)
//{
//    mangled_ppc("?giant_locate_auxilary_animations@@YAXJPAVc_animation_manager@@PAX@Z");
//};

//void giant_find_pathfinding_location(long, short *, long *, class c_sector_ref *, union real_point3d *, long *, unsigned long *)
//{
//    mangled_ppc("?giant_find_pathfinding_location@@YAXJPAFPAJPAVc_sector_ref@@PATreal_point3d@@1PAK@Z");
//};

//public: c_enum<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_foot_tracking_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_foot_tracking_state@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_foot_tracking_state@@@Z");
//};

//public: enum e_foot_tracking_state c_enum_no_init<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_foot_tracking_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_foot_tracking_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_foot_tracking_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_foot_tracking_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_foot_tracking_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_foot_tracking_state@@@Z");
//};

//public: enum e_giant_buckle_type c_enum_no_init<enum e_giant_buckle_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_giant_buckle_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_giant_buckle_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_giant_buckle_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_giant_buckle_type, short, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_giant_buckle_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_giant_buckle_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_giant_buckle_type@@@Z");
//};

//public: c_enum<enum e_giant_buckle_state, short, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_giant_buckle_state, short, 0, 5, struct s_default_enum_string_resolver>(enum e_giant_buckle_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_giant_buckle_state@@F$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_giant_buckle_state@@@Z");
//};

//public: bool c_enum_no_init<enum e_giant_buckle_state, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_giant_buckle_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_giant_buckle_state@@F$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_giant_buckle_state@@@Z");
//};

//public: void c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_giant_foot_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_giant_foot_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_giant_foot_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_giant_foot_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_giant_foot_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_giant_foot_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_giant_foot_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::test(enum e_giant_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_giant_flag@@K$07Us_default_enum_string_resolver@@@@QBA_NW4e_giant_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::set(enum e_giant_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_giant_flag@@K$07Us_default_enum_string_resolver@@@@QAAXW4e_giant_flag@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_giant_foot_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_giant_foot_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_giant_foot_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_giant_foot_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_giant_foot_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_giant_foot_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_giant_foot_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_giant_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_giant_flag@@K$07Us_default_enum_string_resolver@@@@SA_NW4e_giant_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_giant_flag, unsigned long, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_giant_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_giant_flag@@K$07Us_default_enum_string_resolver@@@@CAKW4e_giant_flag@@@Z");
//};

