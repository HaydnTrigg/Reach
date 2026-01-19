/* ---------- headers */

#include "omaha\simulation\simulation_encoding.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_unit_trick_activation_type, unsigned char, 0, 20, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_unit_trick_activation_type@@E$0A@$0BE@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_unit_trick_activation_type const c_enum_no_init<enum e_unit_trick_activation_type, unsigned char, 0, 20, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_unit_trick_activation_type@@E$0A@$0BE@Us_default_enum_string_resolver@@@@2W4e_unit_trick_activation_type@@B"
// public: static int const c_enum_no_init<enum e_unit_trick_velocity_preservation_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_unit_trick_velocity_preservation_mode@@E$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_unit_trick_velocity_preservation_mode const c_enum_no_init<enum e_unit_trick_velocity_preservation_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_unit_trick_velocity_preservation_mode@@E$0A@$02Us_default_enum_string_resolver@@@@2W4e_unit_trick_velocity_preservation_mode@@B"
// public: static enum e_unit_trick_flags const c_flags_no_init<enum e_unit_trick_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_unit_trick_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_unit_trick_flags@@B"
// public: static long const s_static_array<union int32_point3d, 32>::k_element_count; // "?k_element_count@?$s_static_array@Tint32_point3d@@$0CA@@@2JB"
// public: static long const s_static_array<union real_rectangle3d, 16>::k_element_count; // "?k_element_count@?$s_static_array@Treal_rectangle3d@@$0BA@@@2JB"
// struct s_simulation_encoding_globals simulation_encoding_globals; // "?simulation_encoding_globals@@3Us_simulation_encoding_globals@@A"

// void simulation_encoding_initialize_for_new_structure_bsp(unsigned long);
// void simulation_encoding_dispose_from_old_structure_bsp(unsigned long);
// void simulation_write_position(class c_bitstream *, union real_point3d const *, long, union real_rectangle3d const *);
// void simulation_quantize_position(union real_point3d const *, long, union real_rectangle3d const *, bool *, long *, union int32_point3d *, union int32_point3d *);
// void simulation_read_position(class c_bitstream *, union real_point3d *, long, bool, bool, union real_rectangle3d const *);
// bool simulation_compare_positions(union real_point3d const *, union real_point3d const *, long, union real_rectangle3d const *);
// long simulation_get_required_encoding_bits_for_position(long);
// void simulation_write_node_space_position(class c_bitstream *, union real_point3d const *, enum e_simulation_node_space_encoding_type, long);
// void simulation_read_node_space_position(class c_bitstream *, union real_point3d *, enum e_simulation_node_space_encoding_type, long);
// bool simulation_compare_node_space_positions(union real_point3d const *, union real_point3d const *, enum e_simulation_node_space_encoding_type, long);
// void simulation_write_location(class c_bitstream *, struct s_location const *);
// void simulation_read_location(class c_bitstream *, struct s_location *);
// long simulation_get_required_encoding_bits_for_location(void);
// void player_action_encode(class c_bitstream *, struct s_player_action const *);
// bool player_action_decode(class c_bitstream *, struct s_player_action *);
// bool player_action_compare(struct s_player_action const *, struct s_player_action *);
// void simulation_player_update_encode(class c_bitstream *, struct simulation_player_update const *);
// bool simulation_player_update_decode(class c_bitstream *, struct simulation_player_update *);
// void simulation_machine_update_encode(class c_bitstream *, struct simulation_machine_update const *);
// bool simulation_machine_update_decode(class c_bitstream *, struct simulation_machine_update *);
// void simulation_camera_update_encode(class c_bitstream *, struct s_simulation_camera_update const *);
// bool simulation_camera_update_decode(class c_bitstream *, struct s_simulation_camera_update *);
// void simulation_update_encode(class c_bitstream *, struct simulation_update const *, bool);
// bool simulation_update_decode(class c_bitstream *, struct simulation_update *, bool);
// bool simulation_update_compare(struct simulation_update const *, struct simulation_update *);
// bool simulation_update_compare_strict(struct simulation_update const *, struct simulation_update *);
// long simulation_update_encoding_get_maximum_encoded_size_of_bookkeeping_queue(void);
// long simulation_update_encoding_get_maximum_encoded_size_of_game_simulation_queue(void);
// bool unit_control_encode(class c_bitstream *, struct unit_control_data const *);
// bool unit_control_decode(class c_bitstream *, struct unit_control_data *);
// bool unit_throttle_encode(class c_bitstream *, union vector2d const *, float);
// bool unit_throttle_decode(class c_bitstream *, union vector2d *, float *);
// bool unit_throttle_compare(union vector2d const *, float, union vector2d *, float *);
// enum e_simulation_node_space_encoding_type simulation_get_node_space_encoding_type(long);
// union real_rectangle3d const * simulation_encoding_get_world_bounds(void);
// void simulation_encoding_update_playable_bsp_bounding_box(unsigned long);
// void build_bsp_bounding_box(unsigned long, bool, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *, union real_rectangle3d *);
// bool simulation_encoding_point_within_world(union real_point3d const *);
// long simulation_encoding_point_find_containing_active_bsp(union real_point3d const *);
// union real_rectangle3d const * simulation_encoding_get_bsp_world_bounds(long);
// bool simulation_encoding_rectangle_is_default_fallback(union real_rectangle3d const *);
// void simulation_encoding_adjust_axis_encoding_bit_count_to_meet_error_goals(long, union real_rectangle3d const *, long, union int32_point3d *);
// void bit_block_flags_encode(class c_bitstream *, class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> const &, long, long);
// class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_decode(class c_bitstream *, long, long);
// public: c_enum<enum e_player_interaction, unsigned short, 0, 15, struct s_default_enum_string_resolver>::c_enum<enum e_player_interaction, unsigned short, 0, 15, struct s_default_enum_string_resolver>(enum e_player_interaction);
// public: enum e_player_interaction c_enum_no_init<enum e_player_interaction, unsigned short, 0, 15, struct s_default_enum_string_resolver>::operator enum e_player_interaction(void) const;
// public: static long s_static_array<union int32_point3d, 32>::get_count(void);
// public: bool c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid(void) const;
// public: unsigned short c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: unsigned long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>(void);
// public: union real_rectangle3d & s_static_array<union real_rectangle3d, 16>::operator[]<long>(long);
// public: union int32_point3d & s_static_array<union int32_point3d, 32>::operator[]<long>(long);
// public: void c_bitstream::write_index<4, long>(char const *, long);
// public: long c_bitstream::read_index<4>(char const *);
// public: void c_bitstream::write_flags<enum e_unit_control_flags, 47, struct s_default_enum_string_resolver>(char const *, class c_flags_no_init<enum e_unit_control_flags, unsigned __int64, 47, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_qword(char const *, unsigned __int64, long);
// public: void c_bitstream::write_flags<class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<628318548, 100000000>, 13, 0, 0>(char const *, float);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 12, 0, 0>(char const *, float);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<1, 1>, 5, 0, 1>(char const *, float);
// public: void c_bitstream::write_index<7, short>(char const *, short);
// public: void c_bitstream::write_index<4, char>(char const *, char);
// public: void c_bitstream::write_index<3, short>(char const *, short);
// public: void c_bitstream::write_valid_index<8, long>(char const *, long);
// public: void c_bitstream::write_enum<class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<enum e_unit_control_flags, 47, struct s_default_enum_string_resolver>(char const *, class c_flags_no_init<enum e_unit_control_flags, unsigned __int64, 47, struct s_default_enum_string_resolver> *);
// public: unsigned __int64 c_bitstream::read_qword(char const *, long);
// public: void c_bitstream::read_flags<class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_index<7>(char const *);
// public: long c_bitstream::read_index<3>(char const *);
// public: long c_bitstream::read_valid_index<8>(char const *);
// public: void c_bitstream::read_enum<class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_unit_vector_fast<19>(char const *, union vector3d const *);
// long quantize_unit_vector3d_fast<19>(union vector3d const *);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 5, 1, 1>(char const *, float);
// public: enum e_remote_player_sprint_state c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_remote_player_sprint_state(void) const;
// public: bool c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 294, 1, 0>(float);
// public: unsigned __int64 c_flags_no_init<enum e_unit_control_flags, unsigned __int64, 47, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: unsigned long c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool s_static_array<union real_rectangle3d, 16>::valid<long>(long);
// public: static bool s_static_array<union int32_point3d, 32>::valid<long>(long);
// long required_encoding_bits_for_index<4>(void);
// long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<628318548, 100000000>, 8192, 0, 0>(float);
// long quantize_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 4096, 0, 0>(float);
// long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<1, 1>, 32, 0, 1>(float);
// long required_encoding_bits_for_index<7>(void);
// long required_encoding_bits_for_index<3>(void);
// long required_encoding_bits_for_enum<class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_remote_player_sprint_state c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 32, 1, 1>(float);
// public: float const t_quantize_real_float<-1, 1>::operator float const(void) const;
// public: float const t_quantize_real_float<1, 1>::operator float const(void) const;
// public: float const t_quantize_real_float<0, 1>::operator float const(void) const;
// public: float const t_quantize_real_float<628318548, 100000000>::operator float const(void) const;
// public: float const t_quantize_real_float<-314159274, 100000000>::operator float const(void) const;
// public: float const t_quantize_real_float<314159274, 100000000>::operator float const(void) const;
// long quantize_real_fast_guts<1, 0>(float, float, float, long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// long quantize_real_fast_guts<0, 1>(float, float, float, long);
// long quantize_real_fast_guts<1, 1>(float, float, float, long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// void quantize_real_asserts(float, float, float, long, bool, bool);
// long adjust_quantized_value_count_to_attain_exact_midpoint(long, bool);
// void quantize_real_point3d(union real_point3d const *, union real_rectangle3d const *, long, union int32_point3d *);
// void dequantize_real_point3d(union int32_point3d const *, union real_rectangle3d const *, long, union real_point3d *);
// float dequantize_real(long, float, float, long, bool, bool);
// void quantize_real_point3d_per_axis(union real_point3d const *, union real_rectangle3d const *, union int32_point3d const *, union int32_point3d *);
// void dequantize_real_point3d_per_axis(union int32_point3d const *, union real_rectangle3d const *, union int32_point3d const *, union real_point3d *);
// long quantize_real_fast3<0, 0>(float, float, float, long);
// long quantize_real_fast_guts<0, 0>(float, float, float, long);
// public: s_simulation_encoding_globals::s_simulation_encoding_globals(void);
// public: void s_static_array<union int32_point3d, 32>::set_memory(long);
// public: void s_static_array<union real_rectangle3d, 16>::set_all(union real_rectangle3d const &);

//void simulation_encoding_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?simulation_encoding_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void simulation_encoding_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?simulation_encoding_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void simulation_write_position(class c_bitstream *, union real_point3d const *, long, union real_rectangle3d const *)
//{
//    mangled_ppc("?simulation_write_position@@YAXPAVc_bitstream@@PBTreal_point3d@@JPBTreal_rectangle3d@@@Z");
//};

//void simulation_quantize_position(union real_point3d const *, long, union real_rectangle3d const *, bool *, long *, union int32_point3d *, union int32_point3d *)
//{
//    mangled_ppc("?simulation_quantize_position@@YAXPBTreal_point3d@@JPBTreal_rectangle3d@@PA_NPAJPATint32_point3d@@4@Z");
//};

//void simulation_read_position(class c_bitstream *, union real_point3d *, long, bool, bool, union real_rectangle3d const *)
//{
//    mangled_ppc("?simulation_read_position@@YAXPAVc_bitstream@@PATreal_point3d@@J_N2PBTreal_rectangle3d@@@Z");
//};

//bool simulation_compare_positions(union real_point3d const *, union real_point3d const *, long, union real_rectangle3d const *)
//{
//    mangled_ppc("?simulation_compare_positions@@YA_NPBTreal_point3d@@0JPBTreal_rectangle3d@@@Z");
//};

//long simulation_get_required_encoding_bits_for_position(long)
//{
//    mangled_ppc("?simulation_get_required_encoding_bits_for_position@@YAJJ@Z");
//};

//void simulation_write_node_space_position(class c_bitstream *, union real_point3d const *, enum e_simulation_node_space_encoding_type, long)
//{
//    mangled_ppc("?simulation_write_node_space_position@@YAXPAVc_bitstream@@PBTreal_point3d@@W4e_simulation_node_space_encoding_type@@J@Z");
//};

//void simulation_read_node_space_position(class c_bitstream *, union real_point3d *, enum e_simulation_node_space_encoding_type, long)
//{
//    mangled_ppc("?simulation_read_node_space_position@@YAXPAVc_bitstream@@PATreal_point3d@@W4e_simulation_node_space_encoding_type@@J@Z");
//};

//bool simulation_compare_node_space_positions(union real_point3d const *, union real_point3d const *, enum e_simulation_node_space_encoding_type, long)
//{
//    mangled_ppc("?simulation_compare_node_space_positions@@YA_NPBTreal_point3d@@0W4e_simulation_node_space_encoding_type@@J@Z");
//};

//void simulation_write_location(class c_bitstream *, struct s_location const *)
//{
//    mangled_ppc("?simulation_write_location@@YAXPAVc_bitstream@@PBUs_location@@@Z");
//};

//void simulation_read_location(class c_bitstream *, struct s_location *)
//{
//    mangled_ppc("?simulation_read_location@@YAXPAVc_bitstream@@PAUs_location@@@Z");
//};

//long simulation_get_required_encoding_bits_for_location(void)
//{
//    mangled_ppc("?simulation_get_required_encoding_bits_for_location@@YAJXZ");
//};

//void player_action_encode(class c_bitstream *, struct s_player_action const *)
//{
//    mangled_ppc("?player_action_encode@@YAXPAVc_bitstream@@PBUs_player_action@@@Z");
//};

//bool player_action_decode(class c_bitstream *, struct s_player_action *)
//{
//    mangled_ppc("?player_action_decode@@YA_NPAVc_bitstream@@PAUs_player_action@@@Z");
//};

//bool player_action_compare(struct s_player_action const *, struct s_player_action *)
//{
//    mangled_ppc("?player_action_compare@@YA_NPBUs_player_action@@PAU1@@Z");
//};

//void simulation_player_update_encode(class c_bitstream *, struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_update_encode@@YAXPAVc_bitstream@@PBUsimulation_player_update@@@Z");
//};

//bool simulation_player_update_decode(class c_bitstream *, struct simulation_player_update *)
//{
//    mangled_ppc("?simulation_player_update_decode@@YA_NPAVc_bitstream@@PAUsimulation_player_update@@@Z");
//};

//void simulation_machine_update_encode(class c_bitstream *, struct simulation_machine_update const *)
//{
//    mangled_ppc("?simulation_machine_update_encode@@YAXPAVc_bitstream@@PBUsimulation_machine_update@@@Z");
//};

//bool simulation_machine_update_decode(class c_bitstream *, struct simulation_machine_update *)
//{
//    mangled_ppc("?simulation_machine_update_decode@@YA_NPAVc_bitstream@@PAUsimulation_machine_update@@@Z");
//};

//void simulation_camera_update_encode(class c_bitstream *, struct s_simulation_camera_update const *)
//{
//    mangled_ppc("?simulation_camera_update_encode@@YAXPAVc_bitstream@@PBUs_simulation_camera_update@@@Z");
//};

//bool simulation_camera_update_decode(class c_bitstream *, struct s_simulation_camera_update *)
//{
//    mangled_ppc("?simulation_camera_update_decode@@YA_NPAVc_bitstream@@PAUs_simulation_camera_update@@@Z");
//};

//void simulation_update_encode(class c_bitstream *, struct simulation_update const *, bool)
//{
//    mangled_ppc("?simulation_update_encode@@YAXPAVc_bitstream@@PBUsimulation_update@@_N@Z");
//};

//bool simulation_update_decode(class c_bitstream *, struct simulation_update *, bool)
//{
//    mangled_ppc("?simulation_update_decode@@YA_NPAVc_bitstream@@PAUsimulation_update@@_N@Z");
//};

//bool simulation_update_compare(struct simulation_update const *, struct simulation_update *)
//{
//    mangled_ppc("?simulation_update_compare@@YA_NPBUsimulation_update@@PAU1@@Z");
//};

//bool simulation_update_compare_strict(struct simulation_update const *, struct simulation_update *)
//{
//    mangled_ppc("?simulation_update_compare_strict@@YA_NPBUsimulation_update@@PAU1@@Z");
//};

//long simulation_update_encoding_get_maximum_encoded_size_of_bookkeeping_queue(void)
//{
//    mangled_ppc("?simulation_update_encoding_get_maximum_encoded_size_of_bookkeeping_queue@@YAJXZ");
//};

//long simulation_update_encoding_get_maximum_encoded_size_of_game_simulation_queue(void)
//{
//    mangled_ppc("?simulation_update_encoding_get_maximum_encoded_size_of_game_simulation_queue@@YAJXZ");
//};

//bool unit_control_encode(class c_bitstream *, struct unit_control_data const *)
//{
//    mangled_ppc("?unit_control_encode@@YA_NPAVc_bitstream@@PBUunit_control_data@@@Z");
//};

//bool unit_control_decode(class c_bitstream *, struct unit_control_data *)
//{
//    mangled_ppc("?unit_control_decode@@YA_NPAVc_bitstream@@PAUunit_control_data@@@Z");
//};

//bool unit_throttle_encode(class c_bitstream *, union vector2d const *, float)
//{
//    mangled_ppc("?unit_throttle_encode@@YA_NPAVc_bitstream@@PBTvector2d@@M@Z");
//};

//bool unit_throttle_decode(class c_bitstream *, union vector2d *, float *)
//{
//    mangled_ppc("?unit_throttle_decode@@YA_NPAVc_bitstream@@PATvector2d@@PAM@Z");
//};

//bool unit_throttle_compare(union vector2d const *, float, union vector2d *, float *)
//{
//    mangled_ppc("?unit_throttle_compare@@YA_NPBTvector2d@@MPAT1@PAM@Z");
//};

//enum e_simulation_node_space_encoding_type simulation_get_node_space_encoding_type(long)
//{
//    mangled_ppc("?simulation_get_node_space_encoding_type@@YA?AW4e_simulation_node_space_encoding_type@@J@Z");
//};

//union real_rectangle3d const * simulation_encoding_get_world_bounds(void)
//{
//    mangled_ppc("?simulation_encoding_get_world_bounds@@YAPBTreal_rectangle3d@@XZ");
//};

//void simulation_encoding_update_playable_bsp_bounding_box(unsigned long)
//{
//    mangled_ppc("?simulation_encoding_update_playable_bsp_bounding_box@@YAXK@Z");
//};

//void build_bsp_bounding_box(unsigned long, bool, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *, union real_rectangle3d *)
//{
//    mangled_ppc("?build_bsp_bounding_box@@YAXK_NPAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PATreal_rectangle3d@@@Z");
//};

//bool simulation_encoding_point_within_world(union real_point3d const *)
//{
//    mangled_ppc("?simulation_encoding_point_within_world@@YA_NPBTreal_point3d@@@Z");
//};

//long simulation_encoding_point_find_containing_active_bsp(union real_point3d const *)
//{
//    mangled_ppc("?simulation_encoding_point_find_containing_active_bsp@@YAJPBTreal_point3d@@@Z");
//};

//union real_rectangle3d const * simulation_encoding_get_bsp_world_bounds(long)
//{
//    mangled_ppc("?simulation_encoding_get_bsp_world_bounds@@YAPBTreal_rectangle3d@@J@Z");
//};

//bool simulation_encoding_rectangle_is_default_fallback(union real_rectangle3d const *)
//{
//    mangled_ppc("?simulation_encoding_rectangle_is_default_fallback@@YA_NPBTreal_rectangle3d@@@Z");
//};

//void simulation_encoding_adjust_axis_encoding_bit_count_to_meet_error_goals(long, union real_rectangle3d const *, long, union int32_point3d *)
//{
//    mangled_ppc("?simulation_encoding_adjust_axis_encoding_bit_count_to_meet_error_goals@@YAXJPBTreal_rectangle3d@@JPATint32_point3d@@@Z");
//};

//void bit_block_flags_encode(class c_bitstream *, class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> const &, long, long)
//{
//    mangled_ppc("?bit_block_flags_encode@@YAXPAVc_bitstream@@ABV?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@JJ@Z");
//};

//class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_decode(class c_bitstream *, long, long)
//{
//    mangled_ppc("?bit_block_flags_decode@@YA?AV?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@PAVc_bitstream@@JJ@Z");
//};

//public: c_enum<enum e_player_interaction, unsigned short, 0, 15, struct s_default_enum_string_resolver>::c_enum<enum e_player_interaction, unsigned short, 0, 15, struct s_default_enum_string_resolver>(enum e_player_interaction)
//{
//    mangled_ppc("??0?$c_enum@W4e_player_interaction@@G$0A@$0P@Us_default_enum_string_resolver@@@@QAA@W4e_player_interaction@@@Z");
//};

//public: enum e_player_interaction c_enum_no_init<enum e_player_interaction, unsigned short, 0, 15, struct s_default_enum_string_resolver>::operator enum e_player_interaction(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_player_interaction@@G$0A@$0P@Us_default_enum_string_resolver@@@@QBA?AW4e_player_interaction@@XZ");
//};

//public: static long s_static_array<union int32_point3d, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Tint32_point3d@@$0CA@@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_simulation_update_high_level_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: unsigned short c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_simulation_update_high_level_flags@@G$04Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_simulation_update_high_level_flags@@G$04Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: unsigned long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: union real_rectangle3d & s_static_array<union real_rectangle3d, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Treal_rectangle3d@@$0BA@@@QAAAATreal_rectangle3d@@J@Z");
//};

//public: union int32_point3d & s_static_array<union int32_point3d, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Tint32_point3d@@$0CA@@@QAAAATint32_point3d@@J@Z");
//};

//public: void c_bitstream::write_index<4, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$03J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_index<4>(char const *)
//{
//    mangled_ppc("??$read_index@$03@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_flags<enum e_unit_control_flags, 47, struct s_default_enum_string_resolver>(char const *, class c_flags_no_init<enum e_unit_control_flags, unsigned __int64, 47, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@W4e_unit_control_flags@@$0CP@Us_default_enum_string_resolver@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_unit_control_flags@@_K$0CP@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_qword(char const *, unsigned __int64, long)
//{
//    mangled_ppc("?write_qword@c_bitstream@@QAAXPBD_KJ@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<628318548, 100000000>, 13, 0, 0>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$0CFHDGBFE@$0FPFOBAA@@@$0N@$0A@$0A@@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 12, 0, 0>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@U?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@$0M@$0A@$0A@@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<1, 1>, 5, 0, 1>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$00$00@@$04$0A@$00@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_index<7, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$06F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::write_index<4, char>(char const *, char)
//{
//    mangled_ppc("??$write_index@$03D@c_bitstream@@QAAXPBDD@Z");
//};

//public: void c_bitstream::write_index<3, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$02F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::write_valid_index<8, long>(char const *, long)
//{
//    mangled_ppc("??$write_valid_index@$07J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<enum e_unit_control_flags, 47, struct s_default_enum_string_resolver>(char const *, class c_flags_no_init<enum e_unit_control_flags, unsigned __int64, 47, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@W4e_unit_control_flags@@$0CP@Us_default_enum_string_resolver@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_unit_control_flags@@_K$0CP@Us_default_enum_string_resolver@@@@@Z");
//};

//public: unsigned __int64 c_bitstream::read_qword(char const *, long)
//{
//    mangled_ppc("?read_qword@c_bitstream@@QAA_KPBDJ@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_index<7>(char const *)
//{
//    mangled_ppc("??$read_index@$06@c_bitstream@@QAAJPBD@Z");
//};

//public: long c_bitstream::read_index<3>(char const *)
//{
//    mangled_ppc("??$read_index@$02@c_bitstream@@QAAJPBD@Z");
//};

//public: long c_bitstream::read_valid_index<8>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$07@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_unit_vector_fast<19>(char const *, union vector3d const *)
//{
//    mangled_ppc("??$write_unit_vector_fast@$0BD@@c_bitstream@@QAAXPBDPBTvector3d@@@Z");
//};

//long quantize_unit_vector3d_fast<19>(union vector3d const *)
//{
//    mangled_ppc("??$quantize_unit_vector3d_fast@$0BD@@@YAJPBTvector3d@@@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 5, 1, 1>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$04$00$00@c_bitstream@@QAAXPBDM@Z");
//};

//public: enum e_remote_player_sprint_state c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_remote_player_sprint_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_remote_player_sprint_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 294, 1, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$0BCG@$00$0A@@@YAJM@Z");
//};

//public: unsigned __int64 c_flags_no_init<enum e_unit_control_flags, unsigned __int64, 47, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_unit_control_flags@@_K$0CP@Us_default_enum_string_resolver@@@@QBA_KXZ");
//};

//public: unsigned long c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<union real_rectangle3d, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Treal_rectangle3d@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<union int32_point3d, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Tint32_point3d@@$0CA@@@SA_NJ@Z");
//};

//long required_encoding_bits_for_index<4>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$03@@YAJXZ");
//};

//long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<628318548, 100000000>, 8192, 0, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$0CFHDGBFE@$0FPFOBAA@@@$0CAAA@$0A@$0A@@@YAJM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 4096, 0, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@U?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@$0BAAA@$0A@$0A@@@YAJM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<1, 1>, 32, 0, 1>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$00$00@@$0CA@$0A@$00@@YAJM@Z");
//};

//long required_encoding_bits_for_index<7>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$06@@YAJXZ");
//};

//long required_encoding_bits_for_index<3>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$02@@YAJXZ");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_remote_player_sprint_state c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_remote_player_sprint_state@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_remote_player_sprint_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_remote_player_sprint_state@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 32, 1, 1>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$0CA@$00$00@@YAJM@Z");
//};

//public: float const t_quantize_real_float<-1, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0?0$00@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<1, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$00$00@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<0, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0A@$00@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<628318548, 100000000>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0CFHDGBFE@$0FPFOBAA@@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<-314159274, 100000000>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<314159274, 100000000>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@QBA?BMXZ");
//};

//long quantize_real_fast_guts<1, 0>(float, float, float, long)
//{
//    mangled_ppc("??$quantize_real_fast_guts@$00$0A@@@YAJMMMJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//long quantize_real_fast_guts<0, 1>(float, float, float, long)
//{
//    mangled_ppc("??$quantize_real_fast_guts@$0A@$00@@YAJMMMJ@Z");
//};

//long quantize_real_fast_guts<1, 1>(float, float, float, long)
//{
//    mangled_ppc("??$quantize_real_fast_guts@$00$00@@YAJMMMJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//void quantize_real_asserts(float, float, float, long, bool, bool)
//{
//    mangled_ppc("?quantize_real_asserts@@YAXMMMJ_N0@Z");
//};

//long adjust_quantized_value_count_to_attain_exact_midpoint(long, bool)
//{
//    mangled_ppc("?adjust_quantized_value_count_to_attain_exact_midpoint@@YAJJ_N@Z");
//};

//void quantize_real_point3d(union real_point3d const *, union real_rectangle3d const *, long, union int32_point3d *)
//{
//    mangled_ppc("?quantize_real_point3d@@YAXPBTreal_point3d@@PBTreal_rectangle3d@@JPATint32_point3d@@@Z");
//};

//void dequantize_real_point3d(union int32_point3d const *, union real_rectangle3d const *, long, union real_point3d *)
//{
//    mangled_ppc("?dequantize_real_point3d@@YAXPBTint32_point3d@@PBTreal_rectangle3d@@JPATreal_point3d@@@Z");
//};

//float dequantize_real(long, float, float, long, bool, bool)
//{
//    mangled_ppc("?dequantize_real@@YAMJMMJ_N0@Z");
//};

//void quantize_real_point3d_per_axis(union real_point3d const *, union real_rectangle3d const *, union int32_point3d const *, union int32_point3d *)
//{
//    mangled_ppc("?quantize_real_point3d_per_axis@@YAXPBTreal_point3d@@PBTreal_rectangle3d@@PBTint32_point3d@@PAT3@@Z");
//};

//void dequantize_real_point3d_per_axis(union int32_point3d const *, union real_rectangle3d const *, union int32_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?dequantize_real_point3d_per_axis@@YAXPBTint32_point3d@@PBTreal_rectangle3d@@0PATreal_point3d@@@Z");
//};

//long quantize_real_fast3<0, 0>(float, float, float, long)
//{
//    mangled_ppc("??$quantize_real_fast3@$0A@$0A@@@YAJMMMJ@Z");
//};

//long quantize_real_fast_guts<0, 0>(float, float, float, long)
//{
//    mangled_ppc("??$quantize_real_fast_guts@$0A@$0A@@@YAJMMMJ@Z");
//};

//public: s_simulation_encoding_globals::s_simulation_encoding_globals(void)
//{
//    mangled_ppc("??0s_simulation_encoding_globals@@QAA@XZ");
//};

//public: void s_static_array<union int32_point3d, 32>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Tint32_point3d@@$0CA@@@QAAXJ@Z");
//};

//public: void s_static_array<union real_rectangle3d, 16>::set_all(union real_rectangle3d const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Treal_rectangle3d@@$0BA@@@QAAXABTreal_rectangle3d@@@Z");
//};

