/* ---------- headers */

#include "omaha\cutscene\recorded_animation_playback.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const *const const animation_seat_event_data_bs_codes; // "?animation_seat_event_data_bs_codes@@3QBJB"
// long const *const const aiming_speed_event_data_bs_codes; // "?aiming_speed_event_data_bs_codes@@3QBJB"
// long const *const const control_flags_event_data_bs_codes; // "?control_flags_event_data_bs_codes@@3QBJB"
// long const *const const primary_weapon_index_event_data_bs_codes; // "?primary_weapon_index_event_data_bs_codes@@3QBJB"
// long const *const const secondary_weapon_index_event_data_bs_codes; // "?secondary_weapon_index_event_data_bs_codes@@3QBJB"
// long const *const const throttle_event_data_bs_codes; // "?throttle_event_data_bs_codes@@3QBJB"
// long const *const const vector_char_difference_data_bs_codes; // "?vector_char_difference_data_bs_codes@@3QBJB"
// long const *const const vector_short_difference_data_bs_codes; // "?vector_short_difference_data_bs_codes@@3QBJB"

// void apply_animation_seat(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void apply_aiming_speed(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void apply_control_flags(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void apply_primary_weapon_index(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void apply_secondary_weapon_index(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void apply_throttle(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void apply_vector_char_difference(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void update_controller_char(struct vector_char_difference_data const *, struct direction_playback_controller *);
// void uncompress_vector_from_controller(union vector3d *, struct direction_playback_controller const *);
// void apply_vector_short_difference(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **);
// void update_controller_short(struct vector_short_difference_data const *, struct direction_playback_controller *);
// void recorded_animation_initialize_event_stream(struct animation_playback_controller *, struct unit_control_data *, char const **, unsigned char);
// void recorded_animation_initialize_event_stream_with_size(struct animation_playback_controller *, struct unit_control_data *, char const **);
// bool recorded_animation_apply_event_stream(struct animation_playback_controller *, struct unit_control_data *, long *, char const **);
// void byte_swap_recording_stream(void *, long, unsigned char);

//void apply_animation_seat(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_animation_seat@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void apply_aiming_speed(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_aiming_speed@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void apply_control_flags(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_control_flags@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void apply_primary_weapon_index(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_primary_weapon_index@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void apply_secondary_weapon_index(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_secondary_weapon_index@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void apply_throttle(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_throttle@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void apply_vector_char_difference(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_vector_char_difference@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void update_controller_char(struct vector_char_difference_data const *, struct direction_playback_controller *)
//{
//    mangled_ppc("?update_controller_char@@YAXPBUvector_char_difference_data@@PAUdirection_playback_controller@@@Z");
//};

//void uncompress_vector_from_controller(union vector3d *, struct direction_playback_controller const *)
//{
//    mangled_ppc("?uncompress_vector_from_controller@@YAXPATvector3d@@PBUdirection_playback_controller@@@Z");
//};

//void apply_vector_short_difference(struct animation_playback_controller *, struct unit_control_data *, struct animation_event_header const *, char const **)
//{
//    mangled_ppc("?apply_vector_short_difference@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PBUanimation_event_header@@PAPBD@Z");
//};

//void update_controller_short(struct vector_short_difference_data const *, struct direction_playback_controller *)
//{
//    mangled_ppc("?update_controller_short@@YAXPBUvector_short_difference_data@@PAUdirection_playback_controller@@@Z");
//};

//void recorded_animation_initialize_event_stream(struct animation_playback_controller *, struct unit_control_data *, char const **, unsigned char)
//{
//    mangled_ppc("?recorded_animation_initialize_event_stream@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PAPBDE@Z");
//};

//void recorded_animation_initialize_event_stream_with_size(struct animation_playback_controller *, struct unit_control_data *, char const **)
//{
//    mangled_ppc("?recorded_animation_initialize_event_stream_with_size@@YAXPAUanimation_playback_controller@@PAUunit_control_data@@PAPBD@Z");
//};

//bool recorded_animation_apply_event_stream(struct animation_playback_controller *, struct unit_control_data *, long *, char const **)
//{
//    mangled_ppc("?recorded_animation_apply_event_stream@@YA_NPAUanimation_playback_controller@@PAUunit_control_data@@PAJPAPBD@Z");
//};

//void byte_swap_recording_stream(void *, long, unsigned char)
//{
//    mangled_ppc("?byte_swap_recording_stream@@YAXPAXJE@Z");
//};

