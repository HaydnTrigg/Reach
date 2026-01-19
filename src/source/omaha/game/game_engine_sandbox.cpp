/* ---------- headers */

#include "omaha\game\game_engine_sandbox.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_forge_menu_item_base *, 32>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_forge_menu_item_base@@$0CA@@@2JB"
// public: static long const s_static_array<class c_forge_menu_item_base *, 256>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_forge_menu_item_base@@$0BAA@@@2JB"
// public: static long const s_static_array<class c_forge_menu_item_base *, 16>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_forge_menu_item_base@@$0BA@@@2JB"
// public: static long const s_static_array<class c_forge_menu_item_base *, 20>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_forge_menu_item_base@@$0BE@@@2JB"
// public: static long const s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 9>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$08@@2JB"
// public: static long const s_static_array<long, 9>::k_element_count; // "?k_element_count@?$s_static_array@J$08@@2JB"
// public: static long const s_static_array<class c_flags<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>, 3>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_flags@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@$02@@2JB"
// public: static long const s_static_array<class c_enum<enum e_multiplayer_object_boundary_shape, char, 0, 4, struct s_multiplayer_object_boundary_shape_string_resolver>, 4>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_enum@W4e_multiplayer_object_boundary_shape@@D$0A@$03Us_multiplayer_object_boundary_shape_string_resolver@@@@$03@@2JB"
// public: static long const s_static_array<enum e_teleporter_channel, 26>::k_element_count; // "?k_element_count@?$s_static_array@W4e_teleporter_channel@@$0BK@@@2JB"
// public: static long const s_static_array<long, 26>::k_element_count; // "?k_element_count@?$s_static_array@J$0BK@@@2JB"
// public: static long const s_static_array<bool, 2>::k_element_count; // "?k_element_count@?$s_static_array@_N$01@@2JB"
// public: static long const s_static_array<class c_flags<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_flags@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@$01@@2JB"
// public: static long const s_static_array<class c_forge_menu_item_base *, 8>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_forge_menu_item_base@@$07@@2JB"
// public: static long const s_static_array<enum e_sandbox_rotation_snap, 9>::k_element_count; // "?k_element_count@?$s_static_array@W4e_sandbox_rotation_snap@@$08@@2JB"
// public: static long const s_static_array<class c_forge_menu_item_base *, 6>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_forge_menu_item_base@@$05@@2JB"
// public: static long const s_static_array<struct s_sandbox_player_data, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_sandbox_player_data@@$0BA@@@2JB"
// public: static long const s_static_array<union real_point3d, 32>::k_element_count; // "?k_element_count@?$s_static_array@Treal_point3d@@$0CA@@@2JB"
// float g_editor_maximum_edited_object_speed; // "?g_editor_maximum_edited_object_speed@@3MA"
// float g_editor_edited_object_spring_constant; // "?g_editor_edited_object_spring_constant@@3MA"
// float g_editor_default_object_distance; // "?g_editor_default_object_distance@@3MA"
// float g_editor_maximum_rotation_speed; // "?g_editor_maximum_rotation_speed@@3MA"
// class c_game_engine *sandbox_engine; // "?sandbox_engine@@3PAVc_game_engine@@A"
// bool superforge; // "?superforge@@3_NA"
// class c_sandbox_engine internal_sandbox_engine; // "?internal_sandbox_engine@@3Vc_sandbox_engine@@A"

// public: static void s_sandbox_rotation_snap_string_resolver::to_string(enum e_sandbox_rotation_snap, class c_static_string<64> *);
// long game_engine_sandbox_get_rotation_snap_angle(enum e_sandbox_rotation_snap);
// float game_engine_sandbox_get_player_cursor_distance(long);
// struct s_sandbox_player_data * get_player_sandbox_data(long);
// struct s_sandbox_globals * get_sandbox_globals(void);
// bool game_engine_sandbox_is_player_editing_object(long);
// bool game_engine_sandbox_is_player_in_edit_mode(long);
// void game_engine_sandbox_get_player_desired_object_transform(long, struct real_matrix4x3*);
// enum e_sandbox_rotation_snap game_engine_sandbox_get_player_rotation_snap(long);
// bool game_engine_sandbox_get_megalo_running(void);
// bool game_engine_sandbox_can_place_object(long, long);
// void game_engine_sandbox_refresh_object_physics(long);
// void game_engine_sandbox_refresh_object_attachment_to_filter_lists(long);
// void game_engine_sandbox_record_last_predicted_edited_object_transform(long, long, union real_point3d const *, union vector3d const *, union vector3d const *);
// bool game_engine_sandbox_camera_should_apply_pitch_offset(long);
// long game_engine_sandbox_get_edited_object_index_for_player(long);
// long game_engine_sandbox_get_target_object_index_for_player(long);
// public: long s_sandbox_player_data::get_edited_object_index(void) const;
// public: void s_sandbox_player_data::set_edited_object_index(long);
// enum e_sandbox_object_physics_mode get_desired_sandbox_physics_mode_for_object(long);
// long get_player_who_is_editing_object(long);
// void change_object_physics_mode(long, enum e_sandbox_object_physics_mode);
// void game_engine_sandbox_snapshot_object_position_to_variant(long);
// void game_engine_sandbox_get_player_object_creation_position(long, union real_point3d *, long);
// bool game_engine_sandbox_is_object_being_tracked(long);
// bool game_engine_is_object_being_edited(long, long *);
// bool game_engine_is_sandbox(void);
// bool game_engine_is_player_in_edit_mode(long, long *, long *);
// bool player_in_edit_mode(long);
// long get_edited_object_index_for_player(long);
// bool game_engine_sandbox_legal_status(bool);
// bool game_engine_object_is_device_machine(long);
// bool game_engine_object_is_fixed(long);
// public: virtual void c_sandbox_engine::prepare_for_new_state(long) const;
// public: void c_sandbox_engine::rotate_object(long, long, float, float, float) const;
// public: void c_sandbox_engine::manipulate_object(long, long) const;
// public: void c_sandbox_engine::set_player_mode(long, enum e_sandbox_edit_mode) const;
// public: virtual void c_sandbox_engine::handle_deleted_object(long) const;
// public: virtual bool c_sandbox_engine::competitive_game_in_progress(void) const;
// public: virtual bool c_sandbox_engine::should_end_round(long *) const;
// public: virtual bool c_sandbox_engine::should_update_round_timer(void) const;
// public: virtual enum e_game_engine_type c_sandbox_engine::get_type(void) const;
// public: virtual void c_sandbox_engine::dispose_from_old_map(void) const;
// public: virtual bool c_sandbox_engine::initialize_for_new_map(void) const;
// public: void s_sandbox_player_data::initialize(void);
// public: virtual void c_sandbox_engine::initialize_for_new_round(void) const;
// public: virtual void c_sandbox_engine::game_starting(void) const;
// public: virtual void c_sandbox_engine::player_activated(long) const;
// public: virtual void c_sandbox_engine::player_just_spawned(long) const;
// public: virtual void c_sandbox_engine::player_left(long) const;
// void player_forge_cleanup_on_death(long);
// public: virtual void c_sandbox_engine::render(long) const;
// public: bool c_sandbox_engine::shoot_probe_for_player(long, long *) const;
// public: void c_sandbox_engine::update_local_player(long) const;
// public: enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings c_game_engine_sandbox_variant::get_edit_mode(void) const;
// bool player_editing_object(long);
// bool sandbox_input_inhibited(enum e_controller_index);
// public: void c_sandbox_engine::update_player(long) const;
// public: bool c_map_variant::is_showing_helpers(void);
// public: virtual void c_sandbox_engine::player_update(long) const;
// public: virtual void c_sandbox_engine::player_changed_teams(long) const;
// public: virtual void c_sandbox_engine::update(void) const;
// protected: virtual void c_sandbox_engine::execute_triggers(void) const;
// public: virtual enum e_game_engine_status c_sandbox_engine::get_player_state_index(long, bool *) const;
// public: virtual void c_sandbox_engine::score_header_string(class c_static_wchar_string<256> *) const;
// public: virtual enum e_simulation_entity_type c_sandbox_engine::get_simulation_entity_type(void) const;
// public: virtual void c_sandbox_engine::build_simulation_baseline(long, void *) const;
// public: virtual void c_sandbox_engine::build_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const;
// public: virtual bool c_sandbox_engine::apply_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const;
// public: virtual void c_sandbox_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const;
// public: class c_player_traits const * c_game_engine_sandbox_variant::get_player_traits(void) const;
// public: virtual void c_sandbox_engine::promote_to_simulation_authority(class c_bitstream *, enum e_game_engine_restoration_type) const;
// public: virtual bool c_sandbox_engine::allow_weapon_pickup(long, long) const;
// public: virtual void c_sandbox_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const;
// public: virtual void c_sandbox_engine::adjust_object_gravity(long, float *) const;
// public: virtual void c_sandbox_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const;
// public: virtual void c_sandbox_engine::object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &) const;
// public: virtual bool c_sandbox_engine::team_mapping_is_valid(void) const;
// public: virtual void c_sandbox_engine::close_any_custom_ui(enum e_output_user_index) const;
// float get_object_bounding_radius(long);
// bool can_place_object_at(long, union real_point3d *, long);
// void update_tracked_objects(void);
// bool object_needs_soft_ceiling_check(long);
// void stop_tracking_object(long, long, bool);
// bool remove_object_from_tracking_queue(long, long);
// void snapshot_object_position(bool, long);
// void sandbox_update_object_position(bool, long, union real_point3d const *, union vector3d const *, union vector3d const *);
// void show_effect(long, union real_point3d const *, union vector3d const *);
// bool player_can_switch_to_monitor(long);
// bool detach_biped_from_player(long);
// bool player_can_switch_to_biped(long);
// bool attach_biped_to_player(long);
// long game_engine_sandbox_get_player_chief_biped_unit_index(long);
// void game_engine_sandbox_recalculate_budget_for_newly_placed_object(long, long);
// void game_engine_sandbox_apply_action(class c_sandbox_action const *);
// void player_clear_cursor_offset(long);
// void player_update_cursor_offset(long, long);
// void apply_create_object(long, long, long, long, union real_point3d const *);
// public: struct s_map_variant_object_variant const * s_map_variant_palette_entry::get_variant(long) const;
// void apply_delete_object(long, long);
// void stop_editing_object(long);
// void editor_detach_from_object(long, long);
// void apply_player_switch_mode(long, enum e_sandbox_edit_mode);
// void apply_grab_object_predicted(long, long);
// void apply_grab_object_no_fail(long, long);
// void apply_grab_object_authoritative(long, long);
// void apply_drop_object_predicted(long, long, bool);
// void apply_drop_object_no_fail(long, long, bool);
// void start_tracking_object(long);
// void apply_drop_object_authoritative(long, long, bool);
// void apply_edit_object_properties(long, long, struct s_variant_multiplayer_object_properties_definition const *);
// void apply_edit_object_quota(long, long, long, long);
// void apply_start_new_round(long);
// void apply_delete_all_of_type(long, long, long, long);
// void apply_set_desired_transform(long, long, struct real_matrix4x3const *);
// void apply_set_rotation_snap(long, enum e_sandbox_rotation_snap);
// void apply_set_megalo_running(long, bool);
// bool player_can_edit_object(long, long);
// void constrain_rotation_matrix(struct real_matrix4x3*, float);
// bool object_is_outside_world(long);
// long get_editing_player_for_object(long);
// public: enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings c_enum_no_init<enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings, char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings(void) const;
// public: enum e_sandbox_rotation_snap c_enum_no_init<enum e_sandbox_rotation_snap, unsigned char, 0, 6, struct s_sandbox_rotation_snap_string_resolver>::operator enum e_sandbox_rotation_snap(void) const;
// public: enum e_sandbox_action_type c_enum_no_init<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>::operator enum e_sandbox_action_type(void) const;
// public: void c_object_iterator<struct biped_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct biped_datum>::next(void);
// public: struct biped_datum * c_object_iterator<struct biped_datum>::get_datum(void);
// public: bool c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::test(enum e_variant_placement_flags) const;
// public: void c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::set(enum e_variant_placement_flags, bool);
// public: struct s_variant_multiplayer_object_properties_definition const * c_opaque_data<struct s_variant_multiplayer_object_properties_definition, 32, 4>::get_const(void) const;
// public: bool c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_map_variant_palette_flags) const;
// public: void c_flags_no_init<enum e_unit_map_editor_helper_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_unit_map_editor_helper_flags, bool);
// public: struct s_sandbox_player_data & s_static_array<struct s_sandbox_player_data, 16>::operator[]<long>(long);
// bool struct_is_zeroed<union vector3d>(union vector3d const *);
// public: union real_point3d & s_static_array<union real_point3d, 32>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::valid_bit(enum e_variant_placement_flags);
// private: static unsigned char c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::flag_size_type(enum e_variant_placement_flags);
// public: static bool c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_map_variant_palette_flags);
// private: static unsigned char c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_map_variant_palette_flags);
// public: static bool s_static_array<struct s_sandbox_player_data, 16>::valid<long>(long);
// public: static bool s_static_array<union real_point3d, 32>::valid<long>(long);
// bool _realmatrix3x3cmp(struct matrix3x3const *, struct matrix3x3const *, float);
// public: class hkVector4const & hkpRigidBody::getPosition(void) const;
// public: class hkVector4const & hkpMotion::getPosition(void) const;
// public: class hkTransform const & hkMotionState::getTransform(void) const;
// public: class hkTransform const & hkpRigidBody::getTransform(void) const;
// public: class hkTransform const & hkpMotion::getTransform(void) const;
// public: c_sandbox_engine::c_sandbox_engine(void);
// public: virtual bool c_game_engine::handle_incoming_simulation_event(enum e_simulation_event_type, void const *) const;
// public: virtual long c_game_engine::get_message_chud_reference(struct s_multiplayer_runtime_globals_definition *) const;
// public: virtual bool c_custom_game_engine::validate_team_designator_for_new_map(enum e_multiplayer_team_designator) const;
// public: virtual bool c_sandbox_engine::requires_scenario_object(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const;
// public: class c_game_engine_sandbox_variant const * c_game_variant::get_sandbox_variant(void) const;
// public: bool c_game_engine_sandbox_variant::get_requires_all_objects(void) const;
// public: virtual bool c_sandbox_engine::requires_unplaced_object(struct s_object_placement_data const *) const;
// public: c_custom_game_engine::c_custom_game_engine(void);
// public: virtual enum e_game_engine_type c_custom_game_engine::get_type(void) const;
// public: c_game_engine::c_game_engine(void);
// public: virtual void c_game_engine::detach_from_simulation(void) const;
// public: bool c_flags_no_init<enum e_sandbox_variant_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_sandbox_variant_flags) const;
// public: static bool c_flags_no_init<enum e_sandbox_variant_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_sandbox_variant_flags);
// private: static unsigned char c_flags_no_init<enum e_sandbox_variant_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_sandbox_variant_flags);

//public: static void s_sandbox_rotation_snap_string_resolver::to_string(enum e_sandbox_rotation_snap, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_sandbox_rotation_snap_string_resolver@@SAXW4e_sandbox_rotation_snap@@PAV?$c_static_string@$0EA@@@@Z");
//};

//long game_engine_sandbox_get_rotation_snap_angle(enum e_sandbox_rotation_snap)
//{
//    mangled_ppc("?game_engine_sandbox_get_rotation_snap_angle@@YAJW4e_sandbox_rotation_snap@@@Z");
//};

//float game_engine_sandbox_get_player_cursor_distance(long)
//{
//    mangled_ppc("?game_engine_sandbox_get_player_cursor_distance@@YAMJ@Z");
//};

//struct s_sandbox_player_data * get_player_sandbox_data(long)
//{
//    mangled_ppc("?get_player_sandbox_data@@YAPAUs_sandbox_player_data@@J@Z");
//};

//struct s_sandbox_globals * get_sandbox_globals(void)
//{
//    mangled_ppc("?get_sandbox_globals@@YAPAUs_sandbox_globals@@XZ");
//};

//bool game_engine_sandbox_is_player_editing_object(long)
//{
//    mangled_ppc("?game_engine_sandbox_is_player_editing_object@@YA_NJ@Z");
//};

//bool game_engine_sandbox_is_player_in_edit_mode(long)
//{
//    mangled_ppc("?game_engine_sandbox_is_player_in_edit_mode@@YA_NJ@Z");
//};

//void game_engine_sandbox_get_player_desired_object_transform(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?game_engine_sandbox_get_player_desired_object_transform@@YAXJPAUreal_matrix4x3@@@Z");
//};

//enum e_sandbox_rotation_snap game_engine_sandbox_get_player_rotation_snap(long)
//{
//    mangled_ppc("?game_engine_sandbox_get_player_rotation_snap@@YA?AW4e_sandbox_rotation_snap@@J@Z");
//};

//bool game_engine_sandbox_get_megalo_running(void)
//{
//    mangled_ppc("?game_engine_sandbox_get_megalo_running@@YA_NXZ");
//};

//bool game_engine_sandbox_can_place_object(long, long)
//{
//    mangled_ppc("?game_engine_sandbox_can_place_object@@YA_NJJ@Z");
//};

//void game_engine_sandbox_refresh_object_physics(long)
//{
//    mangled_ppc("?game_engine_sandbox_refresh_object_physics@@YAXJ@Z");
//};

//void game_engine_sandbox_refresh_object_attachment_to_filter_lists(long)
//{
//    mangled_ppc("?game_engine_sandbox_refresh_object_attachment_to_filter_lists@@YAXJ@Z");
//};

//void game_engine_sandbox_record_last_predicted_edited_object_transform(long, long, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?game_engine_sandbox_record_last_predicted_edited_object_transform@@YAXJJPBTreal_point3d@@PBTvector3d@@1@Z");
//};

//bool game_engine_sandbox_camera_should_apply_pitch_offset(long)
//{
//    mangled_ppc("?game_engine_sandbox_camera_should_apply_pitch_offset@@YA_NJ@Z");
//};

//long game_engine_sandbox_get_edited_object_index_for_player(long)
//{
//    mangled_ppc("?game_engine_sandbox_get_edited_object_index_for_player@@YAJJ@Z");
//};

//long game_engine_sandbox_get_target_object_index_for_player(long)
//{
//    mangled_ppc("?game_engine_sandbox_get_target_object_index_for_player@@YAJJ@Z");
//};

//public: long s_sandbox_player_data::get_edited_object_index(void) const
//{
//    mangled_ppc("?get_edited_object_index@s_sandbox_player_data@@QBAJXZ");
//};

//public: void s_sandbox_player_data::set_edited_object_index(long)
//{
//    mangled_ppc("?set_edited_object_index@s_sandbox_player_data@@QAAXJ@Z");
//};

//enum e_sandbox_object_physics_mode get_desired_sandbox_physics_mode_for_object(long)
//{
//    mangled_ppc("?get_desired_sandbox_physics_mode_for_object@@YA?AW4e_sandbox_object_physics_mode@@J@Z");
//};

//long get_player_who_is_editing_object(long)
//{
//    mangled_ppc("?get_player_who_is_editing_object@@YAJJ@Z");
//};

//void change_object_physics_mode(long, enum e_sandbox_object_physics_mode)
//{
//    mangled_ppc("?change_object_physics_mode@@YAXJW4e_sandbox_object_physics_mode@@@Z");
//};

//void game_engine_sandbox_snapshot_object_position_to_variant(long)
//{
//    mangled_ppc("?game_engine_sandbox_snapshot_object_position_to_variant@@YAXJ@Z");
//};

//void game_engine_sandbox_get_player_object_creation_position(long, union real_point3d *, long)
//{
//    mangled_ppc("?game_engine_sandbox_get_player_object_creation_position@@YAXJPATreal_point3d@@J@Z");
//};

//bool game_engine_sandbox_is_object_being_tracked(long)
//{
//    mangled_ppc("?game_engine_sandbox_is_object_being_tracked@@YA_NJ@Z");
//};

//bool game_engine_is_object_being_edited(long, long *)
//{
//    mangled_ppc("?game_engine_is_object_being_edited@@YA_NJPAJ@Z");
//};

//bool game_engine_is_sandbox(void)
//{
//    mangled_ppc("?game_engine_is_sandbox@@YA_NXZ");
//};

//bool game_engine_is_player_in_edit_mode(long, long *, long *)
//{
//    mangled_ppc("?game_engine_is_player_in_edit_mode@@YA_NJPAJ0@Z");
//};

//bool player_in_edit_mode(long)
//{
//    mangled_ppc("?player_in_edit_mode@@YA_NJ@Z");
//};

//long get_edited_object_index_for_player(long)
//{
//    mangled_ppc("?get_edited_object_index_for_player@@YAJJ@Z");
//};

//bool game_engine_sandbox_legal_status(bool)
//{
//    mangled_ppc("?game_engine_sandbox_legal_status@@YA_N_N@Z");
//};

//bool game_engine_object_is_device_machine(long)
//{
//    mangled_ppc("?game_engine_object_is_device_machine@@YA_NJ@Z");
//};

//bool game_engine_object_is_fixed(long)
//{
//    mangled_ppc("?game_engine_object_is_fixed@@YA_NJ@Z");
//};

//public: virtual void c_sandbox_engine::prepare_for_new_state(long) const
//{
//    mangled_ppc("?prepare_for_new_state@c_sandbox_engine@@UBAXJ@Z");
//};

//public: void c_sandbox_engine::rotate_object(long, long, float, float, float) const
//{
//    mangled_ppc("?rotate_object@c_sandbox_engine@@QBAXJJMMM@Z");
//};

//public: void c_sandbox_engine::manipulate_object(long, long) const
//{
//    mangled_ppc("?manipulate_object@c_sandbox_engine@@QBAXJJ@Z");
//};

//public: void c_sandbox_engine::set_player_mode(long, enum e_sandbox_edit_mode) const
//{
//    mangled_ppc("?set_player_mode@c_sandbox_engine@@QBAXJW4e_sandbox_edit_mode@@@Z");
//};

//public: virtual void c_sandbox_engine::handle_deleted_object(long) const
//{
//    mangled_ppc("?handle_deleted_object@c_sandbox_engine@@UBAXJ@Z");
//};

//public: virtual bool c_sandbox_engine::competitive_game_in_progress(void) const
//{
//    mangled_ppc("?competitive_game_in_progress@c_sandbox_engine@@UBA_NXZ");
//};

//public: virtual bool c_sandbox_engine::should_end_round(long *) const
//{
//    mangled_ppc("?should_end_round@c_sandbox_engine@@UBA_NPAJ@Z");
//};

//public: virtual bool c_sandbox_engine::should_update_round_timer(void) const
//{
//    mangled_ppc("?should_update_round_timer@c_sandbox_engine@@UBA_NXZ");
//};

//public: virtual enum e_game_engine_type c_sandbox_engine::get_type(void) const
//{
//    mangled_ppc("?get_type@c_sandbox_engine@@UBA?AW4e_game_engine_type@@XZ");
//};

//public: virtual void c_sandbox_engine::dispose_from_old_map(void) const
//{
//    mangled_ppc("?dispose_from_old_map@c_sandbox_engine@@UBAXXZ");
//};

//public: virtual bool c_sandbox_engine::initialize_for_new_map(void) const
//{
//    mangled_ppc("?initialize_for_new_map@c_sandbox_engine@@UBA_NXZ");
//};

//public: void s_sandbox_player_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_sandbox_player_data@@QAAXXZ");
//};

//public: virtual void c_sandbox_engine::initialize_for_new_round(void) const
//{
//    mangled_ppc("?initialize_for_new_round@c_sandbox_engine@@UBAXXZ");
//};

//public: virtual void c_sandbox_engine::game_starting(void) const
//{
//    mangled_ppc("?game_starting@c_sandbox_engine@@UBAXXZ");
//};

//public: virtual void c_sandbox_engine::player_activated(long) const
//{
//    mangled_ppc("?player_activated@c_sandbox_engine@@UBAXJ@Z");
//};

//public: virtual void c_sandbox_engine::player_just_spawned(long) const
//{
//    mangled_ppc("?player_just_spawned@c_sandbox_engine@@UBAXJ@Z");
//};

//public: virtual void c_sandbox_engine::player_left(long) const
//{
//    mangled_ppc("?player_left@c_sandbox_engine@@UBAXJ@Z");
//};

//void player_forge_cleanup_on_death(long)
//{
//    mangled_ppc("?player_forge_cleanup_on_death@@YAXJ@Z");
//};

//public: virtual void c_sandbox_engine::render(long) const
//{
//    mangled_ppc("?render@c_sandbox_engine@@UBAXJ@Z");
//};

//public: bool c_sandbox_engine::shoot_probe_for_player(long, long *) const
//{
//    mangled_ppc("?shoot_probe_for_player@c_sandbox_engine@@QBA_NJPAJ@Z");
//};

//public: void c_sandbox_engine::update_local_player(long) const
//{
//    mangled_ppc("?update_local_player@c_sandbox_engine@@QBAXJ@Z");
//};

//public: enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings c_game_engine_sandbox_variant::get_edit_mode(void) const
//{
//    mangled_ppc("?get_edit_mode@c_game_engine_sandbox_variant@@QBA?AW4e_sandbox_edit_mode_settings@1@XZ");
//};

//bool player_editing_object(long)
//{
//    mangled_ppc("?player_editing_object@@YA_NJ@Z");
//};

//bool sandbox_input_inhibited(enum e_controller_index)
//{
//    mangled_ppc("?sandbox_input_inhibited@@YA_NW4e_controller_index@@@Z");
//};

//public: void c_sandbox_engine::update_player(long) const
//{
//    mangled_ppc("?update_player@c_sandbox_engine@@QBAXJ@Z");
//};

//public: bool c_map_variant::is_showing_helpers(void)
//{
//    mangled_ppc("?is_showing_helpers@c_map_variant@@QAA_NXZ");
//};

//public: virtual void c_sandbox_engine::player_update(long) const
//{
//    mangled_ppc("?player_update@c_sandbox_engine@@UBAXJ@Z");
//};

//public: virtual void c_sandbox_engine::player_changed_teams(long) const
//{
//    mangled_ppc("?player_changed_teams@c_sandbox_engine@@UBAXJ@Z");
//};

//public: virtual void c_sandbox_engine::update(void) const
//{
//    mangled_ppc("?update@c_sandbox_engine@@UBAXXZ");
//};

//protected: virtual void c_sandbox_engine::execute_triggers(void) const
//{
//    mangled_ppc("?execute_triggers@c_sandbox_engine@@MBAXXZ");
//};

//public: virtual enum e_game_engine_status c_sandbox_engine::get_player_state_index(long, bool *) const
//{
//    mangled_ppc("?get_player_state_index@c_sandbox_engine@@UBA?AW4e_game_engine_status@@JPA_N@Z");
//};

//public: virtual void c_sandbox_engine::score_header_string(class c_static_wchar_string<256> *) const
//{
//    mangled_ppc("?score_header_string@c_sandbox_engine@@UBAXPAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//public: virtual enum e_simulation_entity_type c_sandbox_engine::get_simulation_entity_type(void) const
//{
//    mangled_ppc("?get_simulation_entity_type@c_sandbox_engine@@UBA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual void c_sandbox_engine::build_simulation_baseline(long, void *) const
//{
//    mangled_ppc("?build_simulation_baseline@c_sandbox_engine@@UBAXJPAX@Z");
//};

//public: virtual void c_sandbox_engine::build_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const
//{
//    mangled_ppc("?build_simulation_update@c_sandbox_engine@@UBAXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_sandbox_engine::apply_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const
//{
//    mangled_ppc("?apply_simulation_update@c_sandbox_engine@@UBA_NV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual void c_sandbox_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const
//{
//    mangled_ppc("?apply_game_engine_traits_for_player@c_sandbox_engine@@UBAXJPAVc_player_traits@@@Z");
//};

//public: class c_player_traits const * c_game_engine_sandbox_variant::get_player_traits(void) const
//{
//    mangled_ppc("?get_player_traits@c_game_engine_sandbox_variant@@QBAPBVc_player_traits@@XZ");
//};

//public: virtual void c_sandbox_engine::promote_to_simulation_authority(class c_bitstream *, enum e_game_engine_restoration_type) const
//{
//    mangled_ppc("?promote_to_simulation_authority@c_sandbox_engine@@UBAXPAVc_bitstream@@W4e_game_engine_restoration_type@@@Z");
//};

//public: virtual bool c_sandbox_engine::allow_weapon_pickup(long, long) const
//{
//    mangled_ppc("?allow_weapon_pickup@c_sandbox_engine@@UBA_NJJ@Z");
//};

//public: virtual void c_sandbox_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const
//{
//    mangled_ppc("?get_hud_interface_state@c_sandbox_engine@@UBAXJPAUgame_engine_interface_state@@@Z");
//};

//public: virtual void c_sandbox_engine::adjust_object_gravity(long, float *) const
//{
//    mangled_ppc("?adjust_object_gravity@c_sandbox_engine@@UBAXJPAM@Z");
//};

//public: virtual void c_sandbox_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?handle_incident@c_sandbox_engine@@UBAXJJJABUs_damage_reporting_info@@@Z");
//};

//public: virtual void c_sandbox_engine::object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?object_killed@c_sandbox_engine@@UBAXJJJABVc_game_team@@ABUs_damage_reporting_info@@@Z");
//};

//public: virtual bool c_sandbox_engine::team_mapping_is_valid(void) const
//{
//    mangled_ppc("?team_mapping_is_valid@c_sandbox_engine@@UBA_NXZ");
//};

//public: virtual void c_sandbox_engine::close_any_custom_ui(enum e_output_user_index) const
//{
//    mangled_ppc("?close_any_custom_ui@c_sandbox_engine@@UBAXW4e_output_user_index@@@Z");
//};

//float get_object_bounding_radius(long)
//{
//    mangled_ppc("?get_object_bounding_radius@@YAMJ@Z");
//};

//bool can_place_object_at(long, union real_point3d *, long)
//{
//    mangled_ppc("?can_place_object_at@@YA_NJPATreal_point3d@@J@Z");
//};

//void update_tracked_objects(void)
//{
//    mangled_ppc("?update_tracked_objects@@YAXXZ");
//};

//bool object_needs_soft_ceiling_check(long)
//{
//    mangled_ppc("?object_needs_soft_ceiling_check@@YA_NJ@Z");
//};

//void stop_tracking_object(long, long, bool)
//{
//    mangled_ppc("?stop_tracking_object@@YAXJJ_N@Z");
//};

//bool remove_object_from_tracking_queue(long, long)
//{
//    mangled_ppc("?remove_object_from_tracking_queue@@YA_NJJ@Z");
//};

//void snapshot_object_position(bool, long)
//{
//    mangled_ppc("?snapshot_object_position@@YAX_NJ@Z");
//};

//void sandbox_update_object_position(bool, long, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?sandbox_update_object_position@@YAX_NJPBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void show_effect(long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?show_effect@@YAXJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//bool player_can_switch_to_monitor(long)
//{
//    mangled_ppc("?player_can_switch_to_monitor@@YA_NJ@Z");
//};

//bool detach_biped_from_player(long)
//{
//    mangled_ppc("?detach_biped_from_player@@YA_NJ@Z");
//};

//bool player_can_switch_to_biped(long)
//{
//    mangled_ppc("?player_can_switch_to_biped@@YA_NJ@Z");
//};

//bool attach_biped_to_player(long)
//{
//    mangled_ppc("?attach_biped_to_player@@YA_NJ@Z");
//};

//long game_engine_sandbox_get_player_chief_biped_unit_index(long)
//{
//    mangled_ppc("?game_engine_sandbox_get_player_chief_biped_unit_index@@YAJJ@Z");
//};

//void game_engine_sandbox_recalculate_budget_for_newly_placed_object(long, long)
//{
//    mangled_ppc("?game_engine_sandbox_recalculate_budget_for_newly_placed_object@@YAXJJ@Z");
//};

//void game_engine_sandbox_apply_action(class c_sandbox_action const *)
//{
//    mangled_ppc("?game_engine_sandbox_apply_action@@YAXPBVc_sandbox_action@@@Z");
//};

//void player_clear_cursor_offset(long)
//{
//    mangled_ppc("?player_clear_cursor_offset@@YAXJ@Z");
//};

//void player_update_cursor_offset(long, long)
//{
//    mangled_ppc("?player_update_cursor_offset@@YAXJJ@Z");
//};

//void apply_create_object(long, long, long, long, union real_point3d const *)
//{
//    mangled_ppc("?apply_create_object@@YAXJJJJPBTreal_point3d@@@Z");
//};

//public: struct s_map_variant_object_variant const * s_map_variant_palette_entry::get_variant(long) const
//{
//    mangled_ppc("?get_variant@s_map_variant_palette_entry@@QBAPBUs_map_variant_object_variant@@J@Z");
//};

//void apply_delete_object(long, long)
//{
//    mangled_ppc("?apply_delete_object@@YAXJJ@Z");
//};

//void stop_editing_object(long)
//{
//    mangled_ppc("?stop_editing_object@@YAXJ@Z");
//};

//void editor_detach_from_object(long, long)
//{
//    mangled_ppc("?editor_detach_from_object@@YAXJJ@Z");
//};

//void apply_player_switch_mode(long, enum e_sandbox_edit_mode)
//{
//    mangled_ppc("?apply_player_switch_mode@@YAXJW4e_sandbox_edit_mode@@@Z");
//};

//void apply_grab_object_predicted(long, long)
//{
//    mangled_ppc("?apply_grab_object_predicted@@YAXJJ@Z");
//};

//void apply_grab_object_no_fail(long, long)
//{
//    mangled_ppc("?apply_grab_object_no_fail@@YAXJJ@Z");
//};

//void apply_grab_object_authoritative(long, long)
//{
//    mangled_ppc("?apply_grab_object_authoritative@@YAXJJ@Z");
//};

//void apply_drop_object_predicted(long, long, bool)
//{
//    mangled_ppc("?apply_drop_object_predicted@@YAXJJ_N@Z");
//};

//void apply_drop_object_no_fail(long, long, bool)
//{
//    mangled_ppc("?apply_drop_object_no_fail@@YAXJJ_N@Z");
//};

//void start_tracking_object(long)
//{
//    mangled_ppc("?start_tracking_object@@YAXJ@Z");
//};

//void apply_drop_object_authoritative(long, long, bool)
//{
//    mangled_ppc("?apply_drop_object_authoritative@@YAXJJ_N@Z");
//};

//void apply_edit_object_properties(long, long, struct s_variant_multiplayer_object_properties_definition const *)
//{
//    mangled_ppc("?apply_edit_object_properties@@YAXJJPBUs_variant_multiplayer_object_properties_definition@@@Z");
//};

//void apply_edit_object_quota(long, long, long, long)
//{
//    mangled_ppc("?apply_edit_object_quota@@YAXJJJJ@Z");
//};

//void apply_start_new_round(long)
//{
//    mangled_ppc("?apply_start_new_round@@YAXJ@Z");
//};

//void apply_delete_all_of_type(long, long, long, long)
//{
//    mangled_ppc("?apply_delete_all_of_type@@YAXJJJJ@Z");
//};

//void apply_set_desired_transform(long, long, struct real_matrix4x3const *)
//{
//    mangled_ppc("?apply_set_desired_transform@@YAXJJPBUreal_matrix4x3@@@Z");
//};

//void apply_set_rotation_snap(long, enum e_sandbox_rotation_snap)
//{
//    mangled_ppc("?apply_set_rotation_snap@@YAXJW4e_sandbox_rotation_snap@@@Z");
//};

//void apply_set_megalo_running(long, bool)
//{
//    mangled_ppc("?apply_set_megalo_running@@YAXJ_N@Z");
//};

//bool player_can_edit_object(long, long)
//{
//    mangled_ppc("?player_can_edit_object@@YA_NJJ@Z");
//};

//void constrain_rotation_matrix(struct real_matrix4x3*, float)
//{
//    mangled_ppc("?constrain_rotation_matrix@@YAXPAUreal_matrix4x3@@M@Z");
//};

//bool object_is_outside_world(long)
//{
//    mangled_ppc("?object_is_outside_world@@YA_NJ@Z");
//};

//long get_editing_player_for_object(long)
//{
//    mangled_ppc("?get_editing_player_for_object@@YAJJ@Z");
//};

//public: enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings c_enum_no_init<enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings, char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_game_engine_sandbox_variant::e_sandbox_edit_mode_settings(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_sandbox_edit_mode_settings@c_game_engine_sandbox_variant@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_sandbox_edit_mode_settings@c_game_engine_sandbox_variant@@XZ");
//};

//public: enum e_sandbox_rotation_snap c_enum_no_init<enum e_sandbox_rotation_snap, unsigned char, 0, 6, struct s_sandbox_rotation_snap_string_resolver>::operator enum e_sandbox_rotation_snap(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_sandbox_rotation_snap@@E$0A@$05Us_sandbox_rotation_snap_string_resolver@@@@QBA?AW4e_sandbox_rotation_snap@@XZ");
//};

//public: enum e_sandbox_action_type c_enum_no_init<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>::operator enum e_sandbox_action_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_sandbox_action_type@@G$0A@$0M@Us_default_enum_string_resolver@@@@QBA?AW4e_sandbox_action_type@@XZ");
//};

//public: void c_object_iterator<struct biped_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Ubiped_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct biped_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Ubiped_datum@@@@QAA_NXZ");
//};

//public: struct biped_datum * c_object_iterator<struct biped_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Ubiped_datum@@@@QAAPAUbiped_datum@@XZ");
//};

//public: bool c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::test(enum e_variant_placement_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@QBA_NW4e_variant_placement_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::set(enum e_variant_placement_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@QAAXW4e_variant_placement_flags@@_N@Z");
//};

//public: struct s_variant_multiplayer_object_properties_definition const * c_opaque_data<struct s_variant_multiplayer_object_properties_definition, 32, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_opaque_data@Us_variant_multiplayer_object_properties_definition@@$0CA@$03@@QBAPBUs_variant_multiplayer_object_properties_definition@@XZ");
//};

//public: bool c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_map_variant_palette_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_map_variant_palette_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_map_variant_palette_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_unit_map_editor_helper_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_unit_map_editor_helper_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_unit_map_editor_helper_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_unit_map_editor_helper_flags@@_N@Z");
//};

//public: struct s_sandbox_player_data & s_static_array<struct s_sandbox_player_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_sandbox_player_data@@$0BA@@@QAAAAUs_sandbox_player_data@@J@Z");
//};

//bool struct_is_zeroed<union vector3d>(union vector3d const *)
//{
//    mangled_ppc("??$struct_is_zeroed@Tvector3d@@@@YA_NPBTvector3d@@@Z");
//};

//public: union real_point3d & s_static_array<union real_point3d, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Treal_point3d@@$0CA@@@QAAAATreal_point3d@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::valid_bit(enum e_variant_placement_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@SA_NW4e_variant_placement_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_variant_placement_flags, unsigned char, 8, struct s_variant_placement_flags_string_resolver>::flag_size_type(enum e_variant_placement_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_variant_placement_flags@@E$07Us_variant_placement_flags_string_resolver@@@@CAEW4e_variant_placement_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_map_variant_palette_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_map_variant_palette_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_map_variant_palette_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_map_variant_palette_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_map_variant_palette_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_map_variant_palette_flags@@@Z");
//};

//public: static bool s_static_array<struct s_sandbox_player_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_sandbox_player_data@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<union real_point3d, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Treal_point3d@@$0CA@@@SA_NJ@Z");
//};

//bool _realmatrix3x3cmp(struct matrix3x3const *, struct matrix3x3const *, float)
//{
//    mangled_ppc("?_realmatrix3x3cmp@@YA_NPBUmatrix3x3@@0M@Z");
//};

//public: class hkVector4const & hkpRigidBody::getPosition(void) const
//{
//    mangled_ppc("?getPosition@hkpRigidBody@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4const & hkpMotion::getPosition(void) const
//{
//    mangled_ppc("?getPosition@hkpMotion@@QBAABVhkVector4@@XZ");
//};

//public: class hkTransform const & hkMotionState::getTransform(void) const
//{
//    mangled_ppc("?getTransform@hkMotionState@@QBAABVhkTransform@@XZ");
//};

//public: class hkTransform const & hkpRigidBody::getTransform(void) const
//{
//    mangled_ppc("?getTransform@hkpRigidBody@@QBAABVhkTransform@@XZ");
//};

//public: class hkTransform const & hkpMotion::getTransform(void) const
//{
//    mangled_ppc("?getTransform@hkpMotion@@QBAABVhkTransform@@XZ");
//};

//public: c_sandbox_engine::c_sandbox_engine(void)
//{
//    mangled_ppc("??0c_sandbox_engine@@QAA@XZ");
//};

//public: virtual bool c_game_engine::handle_incoming_simulation_event(enum e_simulation_event_type, void const *) const
//{
//    mangled_ppc("?handle_incoming_simulation_event@c_game_engine@@UBA_NW4e_simulation_event_type@@PBX@Z");
//};

//public: virtual long c_game_engine::get_message_chud_reference(struct s_multiplayer_runtime_globals_definition *) const
//{
//    mangled_ppc("?get_message_chud_reference@c_game_engine@@UBAJPAUs_multiplayer_runtime_globals_definition@@@Z");
//};

//public: virtual bool c_custom_game_engine::validate_team_designator_for_new_map(enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?validate_team_designator_for_new_map@c_custom_game_engine@@UBA_NW4e_multiplayer_team_designator@@@Z");
//};

//public: virtual bool c_sandbox_engine::requires_scenario_object(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const
//{
//    mangled_ppc("?requires_scenario_object@c_sandbox_engine@@UBA_NJW4e_object_type@@JPBUs_scenario_object@@PBUs_scenario_multiplayer_object_properties@@@Z");
//};

//public: class c_game_engine_sandbox_variant const * c_game_variant::get_sandbox_variant(void) const
//{
//    mangled_ppc("?get_sandbox_variant@c_game_variant@@QBAPBVc_game_engine_sandbox_variant@@XZ");
//};

//public: bool c_game_engine_sandbox_variant::get_requires_all_objects(void) const
//{
//    mangled_ppc("?get_requires_all_objects@c_game_engine_sandbox_variant@@QBA_NXZ");
//};

//public: virtual bool c_sandbox_engine::requires_unplaced_object(struct s_object_placement_data const *) const
//{
//    mangled_ppc("?requires_unplaced_object@c_sandbox_engine@@UBA_NPBUs_object_placement_data@@@Z");
//};

//public: c_custom_game_engine::c_custom_game_engine(void)
//{
//    mangled_ppc("??0c_custom_game_engine@@QAA@XZ");
//};

//public: virtual enum e_game_engine_type c_custom_game_engine::get_type(void) const
//{
//    mangled_ppc("?get_type@c_custom_game_engine@@UBA?AW4e_game_engine_type@@XZ");
//};

//public: c_game_engine::c_game_engine(void)
//{
//    mangled_ppc("??0c_game_engine@@QAA@XZ");
//};

//public: virtual void c_game_engine::detach_from_simulation(void) const
//{
//    mangled_ppc("?detach_from_simulation@c_game_engine@@UBAXXZ");
//};

//public: bool c_flags_no_init<enum e_sandbox_variant_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_sandbox_variant_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_sandbox_variant_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_sandbox_variant_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_sandbox_variant_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_sandbox_variant_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_sandbox_variant_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_sandbox_variant_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_sandbox_variant_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_sandbox_variant_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_sandbox_variant_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_sandbox_variant_flags@@@Z");
//};

