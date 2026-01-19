/* ---------- headers */

#include "omaha\objects\multiplayer_game_objects.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void s_multiplayer_object_properties::set_team_designator(long, enum e_multiplayer_team_designator);
// public: void s_multiplayer_object_properties::initialize_from_object_definition_and_scenario_placement(long, struct s_multiplayer_object_properties_definition const *, struct s_scenario_multiplayer_object_properties const *);
// public: void s_multiplayer_object_properties::validate_and_report(long);
// void multiplayer_get_spawn_object_position_and_facing(long, union real_point3d *, float *);
// void multiplayer_get_spawn_object_position_and_facing_vectors(long, union real_point3d *, union vector3d *, union vector3d *);
// bool point_in_multiplayer_object_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *);
// bool player_in_multiplayer_object_boundary(long, struct s_multiplayer_object_boundary_geometry_data const *);
// void multiplayer_object_render_debug_boundary(struct s_multiplayer_object_boundary_geometry_data const *, union argb_color const *);
// void multiplayer_object_submit_boundary(struct s_multiplayer_object_boundary_geometry_data const *, union argb_color const *, long, unsigned long);
// void multiplayer_object_calculate_boundary_geometry(long, struct s_multiplayer_object_boundary_geometry_data *, bool);
// void multiplayer_object_calculate_boundary_geometry_from_properties(long, struct s_multiplayer_object_properties const *, struct s_multiplayer_object_boundary_geometry_data *, bool);
// long multiplayer_object_boundary_get_root_object(long);
// void debug_multiplayer_object_boundary_geometry(bool);
// bool multiplayer_object_can_be_used_by_designator(enum e_multiplayer_team_designator, enum e_multiplayer_team_designator);
// bool multiplayer_object_can_be_used_by_team(enum e_multiplayer_team_designator, char, enum e_multiplayer_team, long);
// void multiplayer_object_calculate_sphere_boundary_geometry(struct s_multiplayer_object_boundary const *, struct s_multiplayer_object_boundary_geometry_data *);
// void multiplayer_object_calculate_cylinder_boundary_geometry(struct s_multiplayer_object_boundary const *, struct s_multiplayer_object_boundary_geometry_data *);
// void multiplayer_object_calculate_box_boundary_geometry(struct s_multiplayer_object_boundary const *, struct s_multiplayer_object_boundary_geometry_data *);
// bool point_in_multiplayer_object_sphere_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *);
// bool point_in_multiplayer_object_cylinder_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *);
// bool point_in_multiplayer_object_box_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *);
// public: c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>(enum e_multiplayer_object_type);
// public: c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>(enum e_multiplayer_object_spawn_timer_type);
// public: enum e_multiplayer_object_spawn_timer_type c_enum_no_init<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_multiplayer_object_spawn_timer_type(void) const;
// public: c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>(enum e_multiplayer_object_remapping_policy);
// public: enum e_multiplayer_object_remapping_policy c_enum_no_init<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_multiplayer_object_remapping_policy(void) const;
// public: class c_enum_no_init<enum e_teleporter_channel, unsigned char, 0, 26, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_teleporter_channel, unsigned char, 0, 26, struct s_default_enum_string_resolver>::operator=(enum e_teleporter_channel);
// public: enum e_teleporter_channel c_enum_no_init<enum e_teleporter_channel, unsigned char, 0, 26, struct s_default_enum_string_resolver>::operator enum e_teleporter_channel(void) const;
// public: c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_game_engine_symmetric_placement);
// public: enum e_game_engine_symmetric_placement c_enum_no_init<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_game_engine_symmetric_placement(void) const;
// public: void c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::set_all(void);
// public: bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::valid(void) const;
// public: unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const;
// public: unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::set(enum e_multiplayer_object_data_flags, bool);
// public: static class c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver> c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::make_mask_from_range(enum e_game_engine_type, enum e_game_engine_type);
// private: static unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_teleporter_passability);

//public: void s_multiplayer_object_properties::set_team_designator(long, enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?set_team_designator@s_multiplayer_object_properties@@QAAXJW4e_multiplayer_team_designator@@@Z");
//};

//public: void s_multiplayer_object_properties::initialize_from_object_definition_and_scenario_placement(long, struct s_multiplayer_object_properties_definition const *, struct s_scenario_multiplayer_object_properties const *)
//{
//    mangled_ppc("?initialize_from_object_definition_and_scenario_placement@s_multiplayer_object_properties@@QAAXJPBUs_multiplayer_object_properties_definition@@PBUs_scenario_multiplayer_object_properties@@@Z");
//};

//public: void s_multiplayer_object_properties::validate_and_report(long)
//{
//    mangled_ppc("?validate_and_report@s_multiplayer_object_properties@@QAAXJ@Z");
//};

//void multiplayer_get_spawn_object_position_and_facing(long, union real_point3d *, float *)
//{
//    mangled_ppc("?multiplayer_get_spawn_object_position_and_facing@@YAXJPATreal_point3d@@PAM@Z");
//};

//void multiplayer_get_spawn_object_position_and_facing_vectors(long, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?multiplayer_get_spawn_object_position_and_facing_vectors@@YAXJPATreal_point3d@@PATvector3d@@1@Z");
//};

//bool point_in_multiplayer_object_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *)
//{
//    mangled_ppc("?point_in_multiplayer_object_boundary@@YA_NPBTreal_point3d@@PBUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//bool player_in_multiplayer_object_boundary(long, struct s_multiplayer_object_boundary_geometry_data const *)
//{
//    mangled_ppc("?player_in_multiplayer_object_boundary@@YA_NJPBUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//void multiplayer_object_render_debug_boundary(struct s_multiplayer_object_boundary_geometry_data const *, union argb_color const *)
//{
//    mangled_ppc("?multiplayer_object_render_debug_boundary@@YAXPBUs_multiplayer_object_boundary_geometry_data@@PBTargb_color@@@Z");
//};

//void multiplayer_object_submit_boundary(struct s_multiplayer_object_boundary_geometry_data const *, union argb_color const *, long, unsigned long)
//{
//    mangled_ppc("?multiplayer_object_submit_boundary@@YAXPBUs_multiplayer_object_boundary_geometry_data@@PBTargb_color@@JK@Z");
//};

//void multiplayer_object_calculate_boundary_geometry(long, struct s_multiplayer_object_boundary_geometry_data *, bool)
//{
//    mangled_ppc("?multiplayer_object_calculate_boundary_geometry@@YAXJPAUs_multiplayer_object_boundary_geometry_data@@_N@Z");
//};

//void multiplayer_object_calculate_boundary_geometry_from_properties(long, struct s_multiplayer_object_properties const *, struct s_multiplayer_object_boundary_geometry_data *, bool)
//{
//    mangled_ppc("?multiplayer_object_calculate_boundary_geometry_from_properties@@YAXJPBUs_multiplayer_object_properties@@PAUs_multiplayer_object_boundary_geometry_data@@_N@Z");
//};

//long multiplayer_object_boundary_get_root_object(long)
//{
//    mangled_ppc("?multiplayer_object_boundary_get_root_object@@YAJJ@Z");
//};

//void debug_multiplayer_object_boundary_geometry(bool)
//{
//    mangled_ppc("?debug_multiplayer_object_boundary_geometry@@YAX_N@Z");
//};

//bool multiplayer_object_can_be_used_by_designator(enum e_multiplayer_team_designator, enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?multiplayer_object_can_be_used_by_designator@@YA_NW4e_multiplayer_team_designator@@0@Z");
//};

//bool multiplayer_object_can_be_used_by_team(enum e_multiplayer_team_designator, char, enum e_multiplayer_team, long)
//{
//    mangled_ppc("?multiplayer_object_can_be_used_by_team@@YA_NW4e_multiplayer_team_designator@@DW4e_multiplayer_team@@J@Z");
//};

//void multiplayer_object_calculate_sphere_boundary_geometry(struct s_multiplayer_object_boundary const *, struct s_multiplayer_object_boundary_geometry_data *)
//{
//    mangled_ppc("?multiplayer_object_calculate_sphere_boundary_geometry@@YAXPBUs_multiplayer_object_boundary@@PAUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//void multiplayer_object_calculate_cylinder_boundary_geometry(struct s_multiplayer_object_boundary const *, struct s_multiplayer_object_boundary_geometry_data *)
//{
//    mangled_ppc("?multiplayer_object_calculate_cylinder_boundary_geometry@@YAXPBUs_multiplayer_object_boundary@@PAUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//void multiplayer_object_calculate_box_boundary_geometry(struct s_multiplayer_object_boundary const *, struct s_multiplayer_object_boundary_geometry_data *)
//{
//    mangled_ppc("?multiplayer_object_calculate_box_boundary_geometry@@YAXPBUs_multiplayer_object_boundary@@PAUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//bool point_in_multiplayer_object_sphere_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *)
//{
//    mangled_ppc("?point_in_multiplayer_object_sphere_boundary@@YA_NPBTreal_point3d@@PBUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//bool point_in_multiplayer_object_cylinder_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *)
//{
//    mangled_ppc("?point_in_multiplayer_object_cylinder_boundary@@YA_NPBTreal_point3d@@PBUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//bool point_in_multiplayer_object_box_boundary(union real_point3d const *, struct s_multiplayer_object_boundary_geometry_data const *)
//{
//    mangled_ppc("?point_in_multiplayer_object_box_boundary@@YA_NPBTreal_point3d@@PBUs_multiplayer_object_boundary_geometry_data@@@Z");
//};

//public: c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>::c_enum<enum e_multiplayer_object_type, char, 0, 28, struct s_multiplayer_object_type_string_resolver>(enum e_multiplayer_object_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_type@@D$0A@$0BM@Us_multiplayer_object_type_string_resolver@@@@QAA@W4e_multiplayer_object_type@@@Z");
//};

//public: c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>(enum e_multiplayer_object_spawn_timer_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_spawn_timer_type@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_multiplayer_object_spawn_timer_type@@@Z");
//};

//public: enum e_multiplayer_object_spawn_timer_type c_enum_no_init<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_multiplayer_object_spawn_timer_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_multiplayer_object_spawn_timer_type@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_object_spawn_timer_type@@XZ");
//};

//public: c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>(enum e_multiplayer_object_remapping_policy)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_remapping_policy@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_multiplayer_object_remapping_policy@@@Z");
//};

//public: enum e_multiplayer_object_remapping_policy c_enum_no_init<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_multiplayer_object_remapping_policy(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_multiplayer_object_remapping_policy@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_object_remapping_policy@@XZ");
//};

//public: class c_enum_no_init<enum e_teleporter_channel, unsigned char, 0, 26, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_teleporter_channel, unsigned char, 0, 26, struct s_default_enum_string_resolver>::operator=(enum e_teleporter_channel)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_teleporter_channel@@E$0A@$0BK@Us_default_enum_string_resolver@@@@QAAAAV0@W4e_teleporter_channel@@@Z");
//};

//public: enum e_teleporter_channel c_enum_no_init<enum e_teleporter_channel, unsigned char, 0, 26, struct s_default_enum_string_resolver>::operator enum e_teleporter_channel(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_teleporter_channel@@E$0A@$0BK@Us_default_enum_string_resolver@@@@QBA?AW4e_teleporter_channel@@XZ");
//};

//public: c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_game_engine_symmetric_placement)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_symmetric_placement@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_game_engine_symmetric_placement@@@Z");
//};

//public: enum e_game_engine_symmetric_placement c_enum_no_init<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_game_engine_symmetric_placement(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_game_engine_symmetric_placement@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_game_engine_symmetric_placement@@XZ");
//};

//public: void c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QBA_NXZ");
//};

//public: unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::set(enum e_multiplayer_object_data_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@QAAXW4e_multiplayer_object_data_flags@@_N@Z");
//};

//public: static class c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver> c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::make_mask_from_range(enum e_game_engine_type, enum e_game_engine_type)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@SA?AV1@W4e_game_engine_type@@0@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: void c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_teleporter_passability)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@CAEW4e_teleporter_passability@@@Z");
//};

