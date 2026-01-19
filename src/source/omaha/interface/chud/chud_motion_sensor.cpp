/* ---------- headers */

#include "omaha\interface\chud\chud_motion_sensor.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_chud_motion_sensor::c_chud_motion_sensor(void);
// public: c_chud_motion_sensor::s_motion_sensor_history::s_motion_sensor_history(void);
// public: c_chud_motion_sensor::s_motion_sensor_blip::s_motion_sensor_blip(void);
// public: c_chud_motion_sensor::s_motion_sensor_scripted_ping::s_motion_sensor_scripted_ping(void);
// public: void c_chud_motion_sensor::initialize(enum e_output_user_index);
// public: void c_chud_motion_sensor::reset(void);
// public: bool c_chud_motion_sensor::enemies_nearby(void);
// public: bool c_chud_motion_sensor::slow_moving_boardable_enemy_vehicles_nearby(void);
// public: static bool c_chud_motion_sensor::should_use_3d_motion_tracker(enum e_output_user_index);
// public: static bool c_chud_motion_sensor::relative_to_player_camera_space(enum e_output_user_index);
// private: bool c_chud_motion_sensor::get_sensor_origin(union real_point3d *);
// private: void c_chud_motion_sensor::invalidate_tracked_entity(long);
// public: void c_chud_motion_sensor::invalidate(void);
// private: void c_chud_motion_sensor::object_get_position(long, union real_point3d *);
// private: float c_chud_motion_sensor::get_gutter_distance_squared(long);
// private: bool c_chud_motion_sensor::object_should_be_tracked(long);
// private: long c_chud_motion_sensor::new_tracked_entity(long);
// private: void c_chud_motion_sensor::update_tracked_entity(long);
// private: void c_chud_motion_sensor::update_user_properties(void);
// public: bool c_chud_motion_sensor::should_use_vehicle_3d_motion_tracker(void);
// private: void c_chud_motion_sensor::update_scripted_pings(void);
// private: void c_chud_motion_sensor::update_tracked_entities(bool);
// private: bool c_chud_motion_sensor::entity_is_equipment(long);
// private: long c_chud_motion_sensor::object_get_scripted_ping_time(long);
// public: struct c_chud_motion_sensor::s_motion_sensor_blip * c_chud_motion_sensor::s_motion_sensor_history::create_new_blip(union real_point3d const &);
// private: bool c_chud_motion_sensor::entity_create_blip(long, union real_point3d const *, float);
// private: bool c_chud_motion_sensor::entity_create_blip(long, long, float);
// private: bool c_chud_motion_sensor::create_custom_blip(union real_point3d const *, struct c_chud_motion_sensor::s_motion_sensor_blip *, float);
// private: bool c_chud_motion_sensor::entity_should_ping(long) const;
// private: void c_chud_motion_sensor::entity_create_ping_blip(long, struct c_chud_motion_sensor::s_motion_sensor_blip const *);
// private: void c_chud_motion_sensor::build_new_history(class c_chud_navpoint_manager const *);
// public: void c_chud_motion_sensor::update(bool, class c_chud_navpoint_manager const *);
// private: enum c_chud_motion_sensor::e_blip_type c_chud_motion_sensor::object_get_blip_type(long);
// private: static enum c_chud_motion_sensor::e_blip_size c_chud_motion_sensor::object_get_blip_size(long);
// private: bool c_chud_motion_sensor::object_should_show_on_sensor(long);
// public: static bool c_chud_motion_sensor::object_velocity_exceeds_threshold(long);
// private: void c_chud_motion_sensor::set_radar_distance(float);
// private: bool c_chud_motion_sensor::scripted_ping_valid(long);
// public: void c_chud_motion_sensor::submit_scripted_ping(long, long, float);
// public: c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum c_chud_motion_sensor::e_blip_type);
// public: c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum c_chud_motion_sensor::e_blip_size);
// public: c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum c_chud_motion_sensor::e_blip_shape);
// public: bool c_flags_no_init<enum s_chud_globals_definition::e_motion_sensor_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum s_chud_globals_definition::e_motion_sensor_flags) const;
// public: void c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags) const;
// public: void c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, bool);
// public: c_flags<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void);
// public: static bool c_flags_no_init<enum s_chud_globals_definition::e_motion_sensor_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum s_chud_globals_definition::e_motion_sensor_flags);
// private: static unsigned char c_flags_no_init<enum s_chud_globals_definition::e_motion_sensor_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum s_chud_globals_definition::e_motion_sensor_flags);
// public: bool c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags);
// private: static unsigned long c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags);
// private: static unsigned long c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags);

//public: c_chud_motion_sensor::c_chud_motion_sensor(void)
//{
//    mangled_ppc("??0c_chud_motion_sensor@@QAA@XZ");
//};

//public: c_chud_motion_sensor::s_motion_sensor_history::s_motion_sensor_history(void)
//{
//    mangled_ppc("??0s_motion_sensor_history@c_chud_motion_sensor@@QAA@XZ");
//};

//public: c_chud_motion_sensor::s_motion_sensor_blip::s_motion_sensor_blip(void)
//{
//    mangled_ppc("??0s_motion_sensor_blip@c_chud_motion_sensor@@QAA@XZ");
//};

//public: c_chud_motion_sensor::s_motion_sensor_scripted_ping::s_motion_sensor_scripted_ping(void)
//{
//    mangled_ppc("??0s_motion_sensor_scripted_ping@c_chud_motion_sensor@@QAA@XZ");
//};

//public: void c_chud_motion_sensor::initialize(enum e_output_user_index)
//{
//    mangled_ppc("?initialize@c_chud_motion_sensor@@QAAXW4e_output_user_index@@@Z");
//};

//public: void c_chud_motion_sensor::reset(void)
//{
//    mangled_ppc("?reset@c_chud_motion_sensor@@QAAXXZ");
//};

//public: bool c_chud_motion_sensor::enemies_nearby(void)
//{
//    mangled_ppc("?enemies_nearby@c_chud_motion_sensor@@QAA_NXZ");
//};

//public: bool c_chud_motion_sensor::slow_moving_boardable_enemy_vehicles_nearby(void)
//{
//    mangled_ppc("?slow_moving_boardable_enemy_vehicles_nearby@c_chud_motion_sensor@@QAA_NXZ");
//};

//public: static bool c_chud_motion_sensor::should_use_3d_motion_tracker(enum e_output_user_index)
//{
//    mangled_ppc("?should_use_3d_motion_tracker@c_chud_motion_sensor@@SA_NW4e_output_user_index@@@Z");
//};

//public: static bool c_chud_motion_sensor::relative_to_player_camera_space(enum e_output_user_index)
//{
//    mangled_ppc("?relative_to_player_camera_space@c_chud_motion_sensor@@SA_NW4e_output_user_index@@@Z");
//};

//private: bool c_chud_motion_sensor::get_sensor_origin(union real_point3d *)
//{
//    mangled_ppc("?get_sensor_origin@c_chud_motion_sensor@@AAA_NPATreal_point3d@@@Z");
//};

//private: void c_chud_motion_sensor::invalidate_tracked_entity(long)
//{
//    mangled_ppc("?invalidate_tracked_entity@c_chud_motion_sensor@@AAAXJ@Z");
//};

//public: void c_chud_motion_sensor::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_chud_motion_sensor@@QAAXXZ");
//};

//private: void c_chud_motion_sensor::object_get_position(long, union real_point3d *)
//{
//    mangled_ppc("?object_get_position@c_chud_motion_sensor@@AAAXJPATreal_point3d@@@Z");
//};

//private: float c_chud_motion_sensor::get_gutter_distance_squared(long)
//{
//    mangled_ppc("?get_gutter_distance_squared@c_chud_motion_sensor@@AAAMJ@Z");
//};

//private: bool c_chud_motion_sensor::object_should_be_tracked(long)
//{
//    mangled_ppc("?object_should_be_tracked@c_chud_motion_sensor@@AAA_NJ@Z");
//};

//private: long c_chud_motion_sensor::new_tracked_entity(long)
//{
//    mangled_ppc("?new_tracked_entity@c_chud_motion_sensor@@AAAJJ@Z");
//};

//private: void c_chud_motion_sensor::update_tracked_entity(long)
//{
//    mangled_ppc("?update_tracked_entity@c_chud_motion_sensor@@AAAXJ@Z");
//};

//private: void c_chud_motion_sensor::update_user_properties(void)
//{
//    mangled_ppc("?update_user_properties@c_chud_motion_sensor@@AAAXXZ");
//};

//public: bool c_chud_motion_sensor::should_use_vehicle_3d_motion_tracker(void)
//{
//    mangled_ppc("?should_use_vehicle_3d_motion_tracker@c_chud_motion_sensor@@QAA_NXZ");
//};

//private: void c_chud_motion_sensor::update_scripted_pings(void)
//{
//    mangled_ppc("?update_scripted_pings@c_chud_motion_sensor@@AAAXXZ");
//};

//private: void c_chud_motion_sensor::update_tracked_entities(bool)
//{
//    mangled_ppc("?update_tracked_entities@c_chud_motion_sensor@@AAAX_N@Z");
//};

//private: bool c_chud_motion_sensor::entity_is_equipment(long)
//{
//    mangled_ppc("?entity_is_equipment@c_chud_motion_sensor@@AAA_NJ@Z");
//};

//private: long c_chud_motion_sensor::object_get_scripted_ping_time(long)
//{
//    mangled_ppc("?object_get_scripted_ping_time@c_chud_motion_sensor@@AAAJJ@Z");
//};

//public: struct c_chud_motion_sensor::s_motion_sensor_blip * c_chud_motion_sensor::s_motion_sensor_history::create_new_blip(union real_point3d const &)
//{
//    mangled_ppc("?create_new_blip@s_motion_sensor_history@c_chud_motion_sensor@@QAAPAUs_motion_sensor_blip@2@ABTreal_point3d@@@Z");
//};

//private: bool c_chud_motion_sensor::entity_create_blip(long, union real_point3d const *, float)
//{
//    mangled_ppc("?entity_create_blip@c_chud_motion_sensor@@AAA_NJPBTreal_point3d@@M@Z");
//};

//private: bool c_chud_motion_sensor::entity_create_blip(long, long, float)
//{
//    mangled_ppc("?entity_create_blip@c_chud_motion_sensor@@AAA_NJJM@Z");
//};

//private: bool c_chud_motion_sensor::create_custom_blip(union real_point3d const *, struct c_chud_motion_sensor::s_motion_sensor_blip *, float)
//{
//    mangled_ppc("?create_custom_blip@c_chud_motion_sensor@@AAA_NPBTreal_point3d@@PAUs_motion_sensor_blip@1@M@Z");
//};

//private: bool c_chud_motion_sensor::entity_should_ping(long) const
//{
//    mangled_ppc("?entity_should_ping@c_chud_motion_sensor@@ABA_NJ@Z");
//};

//private: void c_chud_motion_sensor::entity_create_ping_blip(long, struct c_chud_motion_sensor::s_motion_sensor_blip const *)
//{
//    mangled_ppc("?entity_create_ping_blip@c_chud_motion_sensor@@AAAXJPBUs_motion_sensor_blip@1@@Z");
//};

//private: void c_chud_motion_sensor::build_new_history(class c_chud_navpoint_manager const *)
//{
//    mangled_ppc("?build_new_history@c_chud_motion_sensor@@AAAXPBVc_chud_navpoint_manager@@@Z");
//};

//public: void c_chud_motion_sensor::update(bool, class c_chud_navpoint_manager const *)
//{
//    mangled_ppc("?update@c_chud_motion_sensor@@QAAX_NPBVc_chud_navpoint_manager@@@Z");
//};

//private: enum c_chud_motion_sensor::e_blip_type c_chud_motion_sensor::object_get_blip_type(long)
//{
//    mangled_ppc("?object_get_blip_type@c_chud_motion_sensor@@AAA?AW4e_blip_type@1@J@Z");
//};

//private: static enum c_chud_motion_sensor::e_blip_size c_chud_motion_sensor::object_get_blip_size(long)
//{
//    mangled_ppc("?object_get_blip_size@c_chud_motion_sensor@@CA?AW4e_blip_size@1@J@Z");
//};

//private: bool c_chud_motion_sensor::object_should_show_on_sensor(long)
//{
//    mangled_ppc("?object_should_show_on_sensor@c_chud_motion_sensor@@AAA_NJ@Z");
//};

//public: static bool c_chud_motion_sensor::object_velocity_exceeds_threshold(long)
//{
//    mangled_ppc("?object_velocity_exceeds_threshold@c_chud_motion_sensor@@SA_NJ@Z");
//};

//private: void c_chud_motion_sensor::set_radar_distance(float)
//{
//    mangled_ppc("?set_radar_distance@c_chud_motion_sensor@@AAAXM@Z");
//};

//private: bool c_chud_motion_sensor::scripted_ping_valid(long)
//{
//    mangled_ppc("?scripted_ping_valid@c_chud_motion_sensor@@AAA_NJ@Z");
//};

//public: void c_chud_motion_sensor::submit_scripted_ping(long, long, float)
//{
//    mangled_ppc("?submit_scripted_ping@c_chud_motion_sensor@@QAAXJJM@Z");
//};

//public: c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_blip_type@c_chud_motion_sensor@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum c_chud_motion_sensor::e_blip_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_blip_type@c_chud_motion_sensor@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@W4e_blip_type@c_chud_motion_sensor@@@Z");
//};

//public: c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_blip_size@c_chud_motion_sensor@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_size, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum c_chud_motion_sensor::e_blip_size)
//{
//    mangled_ppc("??0?$c_enum@W4e_blip_size@c_chud_motion_sensor@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_blip_size@c_chud_motion_sensor@@@Z");
//};

//public: c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_blip_shape@c_chud_motion_sensor@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_chud_motion_sensor::e_blip_shape, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum c_chud_motion_sensor::e_blip_shape)
//{
//    mangled_ppc("??0?$c_enum@W4e_blip_shape@c_chud_motion_sensor@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_blip_shape@c_chud_motion_sensor@@@Z");
//};

//public: bool c_flags_no_init<enum s_chud_globals_definition::e_motion_sensor_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum s_chud_globals_definition::e_motion_sensor_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_motion_sensor_flags@s_chud_globals_definition@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_motion_sensor_flags@s_chud_globals_definition@@@Z");
//};

//public: void c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@QBA_NW4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@@Z");
//};

//public: void c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@QAAXW4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@_N@Z");
//};

//public: c_flags<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum s_chud_globals_definition::e_motion_sensor_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum s_chud_globals_definition::e_motion_sensor_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_motion_sensor_flags@s_chud_globals_definition@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_motion_sensor_flags@s_chud_globals_definition@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_chud_globals_definition::e_motion_sensor_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum s_chud_globals_definition::e_motion_sensor_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_motion_sensor_flags@s_chud_globals_definition@@E$03Us_default_enum_string_resolver@@@@CAEW4e_motion_sensor_flags@s_chud_globals_definition@@@Z");
//};

//public: bool c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@SA_NW4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@CAKW4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum c_chud_motion_sensor::e_motion_sensor_tracking_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_chud_motion_sensor::e_motion_sensor_tracking_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@K$04Us_default_enum_string_resolver@@@@CAKW4e_motion_sensor_tracking_flags@c_chud_motion_sensor@@@Z");
//};

