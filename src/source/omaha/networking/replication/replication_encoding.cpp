/* ---------- headers */

#include "omaha\networking\replication\replication_encoding.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void player_motion_encode(class c_bitstream *, struct s_player_motion const *);
// bool player_motion_decode(class c_bitstream *, struct s_player_motion *);
// bool player_motion_compare(struct s_player_motion const *, struct s_player_motion *);
// bool player_motion_valid(struct s_player_motion const *);
// void predicted_aim_assist_clear(struct s_player_predicted_aim_assist *);
// void predicted_aim_assist_encode(class c_bitstream *, struct s_player_predicted_aim_assist const *, bool, enum e_aim_assist_encoding_precision);
// bool predicted_aim_assist_decode(class c_bitstream *, struct s_player_predicted_aim_assist *, enum e_aim_assist_encoding_precision);
// bool predicted_aim_assist_compare(struct s_player_predicted_aim_assist const *, struct s_player_predicted_aim_assist *);
// public: void c_player_prediction_object::initialize(void);
// public: bool c_player_prediction_object::is_valid(void) const;
// public: void c_player_prediction_object::encode(class c_bitstream *, enum e_replication_entity_encoding_type, bool) const;
// public: void c_player_prediction_object::decode(class c_bitstream *, enum e_replication_entity_encoding_type, bool);
// public: void c_player_prediction_object::set_object_index(long);
// public: long c_player_prediction_object::get_object_index(void) const;
// public: void c_player_prediction_object::prepare_for_gameworld(void);
// void player_prediction_encode(class c_bitstream *, struct s_player_prediction const *, bool);
// bool player_prediction_decode(class c_bitstream *, struct s_player_prediction *, bool);
// bool real_vector3d_compare_identical(union vector3d const *, union vector3d const *);
// bool player_prediction_compare_identical(struct s_player_prediction const *, struct s_player_prediction const *);
// bool player_prediction_valid(struct s_player_prediction const *);
// public: void c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_aim_assist_targeting_result_flags, bool);
// public: void c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_weapon_set_flags, bool);
// public: bool c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> const &) const;
// public: void c_bitstream::write_flags<class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> *);
// public: unsigned char c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: unsigned char c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const;
// bool valid_real_vector2d(union vector2d const *);
// bool valid_real_euler_angles3d(union euler_angles3d const *);

//void player_motion_encode(class c_bitstream *, struct s_player_motion const *)
//{
//    mangled_ppc("?player_motion_encode@@YAXPAVc_bitstream@@PBUs_player_motion@@@Z");
//};

//bool player_motion_decode(class c_bitstream *, struct s_player_motion *)
//{
//    mangled_ppc("?player_motion_decode@@YA_NPAVc_bitstream@@PAUs_player_motion@@@Z");
//};

//bool player_motion_compare(struct s_player_motion const *, struct s_player_motion *)
//{
//    mangled_ppc("?player_motion_compare@@YA_NPBUs_player_motion@@PAU1@@Z");
//};

//bool player_motion_valid(struct s_player_motion const *)
//{
//    mangled_ppc("?player_motion_valid@@YA_NPBUs_player_motion@@@Z");
//};

//void predicted_aim_assist_clear(struct s_player_predicted_aim_assist *)
//{
//    mangled_ppc("?predicted_aim_assist_clear@@YAXPAUs_player_predicted_aim_assist@@@Z");
//};

//void predicted_aim_assist_encode(class c_bitstream *, struct s_player_predicted_aim_assist const *, bool, enum e_aim_assist_encoding_precision)
//{
//    mangled_ppc("?predicted_aim_assist_encode@@YAXPAVc_bitstream@@PBUs_player_predicted_aim_assist@@_NW4e_aim_assist_encoding_precision@@@Z");
//};

//bool predicted_aim_assist_decode(class c_bitstream *, struct s_player_predicted_aim_assist *, enum e_aim_assist_encoding_precision)
//{
//    mangled_ppc("?predicted_aim_assist_decode@@YA_NPAVc_bitstream@@PAUs_player_predicted_aim_assist@@W4e_aim_assist_encoding_precision@@@Z");
//};

//bool predicted_aim_assist_compare(struct s_player_predicted_aim_assist const *, struct s_player_predicted_aim_assist *)
//{
//    mangled_ppc("?predicted_aim_assist_compare@@YA_NPBUs_player_predicted_aim_assist@@PAU1@@Z");
//};

//public: void c_player_prediction_object::initialize(void)
//{
//    mangled_ppc("?initialize@c_player_prediction_object@@QAAXXZ");
//};

//public: bool c_player_prediction_object::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_player_prediction_object@@QBA_NXZ");
//};

//public: void c_player_prediction_object::encode(class c_bitstream *, enum e_replication_entity_encoding_type, bool) const
//{
//    mangled_ppc("?encode@c_player_prediction_object@@QBAXPAVc_bitstream@@W4e_replication_entity_encoding_type@@_N@Z");
//};

//public: void c_player_prediction_object::decode(class c_bitstream *, enum e_replication_entity_encoding_type, bool)
//{
//    mangled_ppc("?decode@c_player_prediction_object@@QAAXPAVc_bitstream@@W4e_replication_entity_encoding_type@@_N@Z");
//};

//public: void c_player_prediction_object::set_object_index(long)
//{
//    mangled_ppc("?set_object_index@c_player_prediction_object@@QAAXJ@Z");
//};

//public: long c_player_prediction_object::get_object_index(void) const
//{
//    mangled_ppc("?get_object_index@c_player_prediction_object@@QBAJXZ");
//};

//public: void c_player_prediction_object::prepare_for_gameworld(void)
//{
//    mangled_ppc("?prepare_for_gameworld@c_player_prediction_object@@QAAXXZ");
//};

//void player_prediction_encode(class c_bitstream *, struct s_player_prediction const *, bool)
//{
//    mangled_ppc("?player_prediction_encode@@YAXPAVc_bitstream@@PBUs_player_prediction@@_N@Z");
//};

//bool player_prediction_decode(class c_bitstream *, struct s_player_prediction *, bool)
//{
//    mangled_ppc("?player_prediction_decode@@YA_NPAVc_bitstream@@PAUs_player_prediction@@_N@Z");
//};

//bool real_vector3d_compare_identical(union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?real_vector3d_compare_identical@@YA_NPBTvector3d@@0@Z");
//};

//bool player_prediction_compare_identical(struct s_player_prediction const *, struct s_player_prediction const *)
//{
//    mangled_ppc("?player_prediction_compare_identical@@YA_NPBUs_player_prediction@@0@Z");
//};

//bool player_prediction_valid(struct s_player_prediction const *)
//{
//    mangled_ppc("?player_prediction_valid@@YA_NPBUs_player_prediction@@@Z");
//};

//public: void c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_aim_assist_targeting_result_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_aim_assist_targeting_result_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_weapon_set_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_weapon_set_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_weapon_set_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned char c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_player_prediction_object_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_player_prediction_object_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_player_prediction_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_player_prediction_flag@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//bool valid_real_vector2d(union vector2d const *)
//{
//    mangled_ppc("?valid_real_vector2d@@YA_NPBTvector2d@@@Z");
//};

//bool valid_real_euler_angles3d(union euler_angles3d const *)
//{
//    mangled_ppc("?valid_real_euler_angles3d@@YA_NPBTeuler_angles3d@@@Z");
//};

