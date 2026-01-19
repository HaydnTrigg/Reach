/* ---------- headers */

#include "omaha\ai\ai_actions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83818570; // "except_record_83818570"
// except_record_8381AC70; // "except_record_8381AC70"
// except_record_8381BF48; // "except_record_8381BF48"
// except_record_8381D138; // "except_record_8381D138"
// except_record_8381E3F8; // "except_record_8381E3F8"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_bunker_properties_internal>, class c_character_bunker_properties_internal>(class c_character_runtime_properties<class c_character_bunker_properties_internal> *, class c_character_bunker_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@Vc_character_bunker_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@PBVc_character_bunker_properties_internal@@@Z@4JC"

// public: bool c_ai_direction::valid(void) const;
// public: void c_ai_direction::clear(void);
// public: void c_ai_direction::to_movement(void);
// public: void c_ai_direction::to_prop(long);
// public: void c_ai_direction::to_target(void);
// public: void c_ai_direction::to_point(union real_point3d const *);
// public: void c_ai_direction::to_ai_point(class c_ai_point3d const *);
// public: void c_ai_direction::to_vector(union vector3d const *);
// public: void c_ai_direction::to_object(long);
// public: void c_ai_direction::flush_prop(long);
// public: void c_ai_direction::flush_object(long);
// public: bool c_ai_direction::get(long, enum e_ai_direction_mode, union vector3d *);
// public: bool c_ai_direction::get(long, enum e_ai_direction_mode, union vector3d *, bool *, union real_point3d *);
// public: bool c_ai_direction::get(long, enum e_ai_direction_mode, union real_point3d const *, union vector3d *, bool *, union real_point3d *);
// public: void c_ai_action::clear(void);
// public: bool c_ai_action::valid(void) const;
// public: bool c_ai_action::setup_bunker(class c_ai_point3d const *, class c_ai_direction const *, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state);
// public: bool c_ai_action::setup_posture(class c_ai_point3d const *, class c_ai_direction const *, long);
// public: bool c_ai_action::setup_perch(class c_ai_point3d const *, union vector3d const *);
// public: bool c_ai_action::setup_land(class c_ai_point3d const *);
// public: bool c_ai_action::setup_animation(long, class c_ai_direction const *, long);
// public: bool c_ai_action::setup_animation(long, class c_ai_direction const *, long, short);
// public: bool c_ai_action::setup_face(class c_ai_direction const *, short);
// public: bool c_ai_action::get_entry_point(long, class c_ai_point3d const *, class c_sector_ref const *, class c_ai_point3d *, union vector3d *, class c_sector_ref *);
// public: enum e_ai_action_result c_ai_action::execute(long);
// bool process_pending_ground_actions(long);
// void actor_set_bunker_control_mode(long, enum e_bunker_control_mode);
// bool actor_bunker_update(long);
// float bunker_get_peek_chance(long);
// float bunker_get_open_chance(long);
// float bunker_get_min_closed_time(long);
// float bunker_get_close_danger_level(long);
// bool actor_bunker_change_state(long, enum e_bunker_state);
// float bunker_get_open_duration(long);
// void actor_berserk(long, bool, bool);
// void actor_berserk_set_movement_mapping(long, bool);
// void actor_berserk_melee_success(long);
// void actor_stow_weapon(long, bool, bool);
// bool actor_exit_posture(long);
// bool actor_is_evading(long);
// bool actor_is_juking(long);
// bool actor_evade(long);
// bool ai_posture_allow_automatic_exit(long);
// bool ai_posture_allow_animation(long, long);
// bool ai_posture_allow_hard_ping(long);
// bool actor_allow_weapon_stow(long);
// bool actor_bring_forward(long, struct actor_teleport_state *);
// bool ai_resurrect_get_marker(long, struct object_marker *, bool *);
// long actor_resurrect(long, enum e_campaign_team, short, short);
// bool ai_handle_resurrection(long);
// public: c_character_runtime_properties<class c_character_bunker_properties_internal>::c_character_runtime_properties<class c_character_bunker_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_bunker_properties_internal>::valid(void) const;
// void actor_get_character_definition_properties<class c_character_bunker_properties_internal, 420>(long, class c_character_runtime_properties<class c_character_bunker_properties_internal> &);
// public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_actor_teleport_restriction_flags) const;
// public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test_range(enum e_actor_teleport_restriction_flags, enum e_actor_teleport_restriction_flags) const;
// public: void c_character_runtime_properties<class c_character_bunker_properties_internal>::set(class c_character_bunker_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_bunker_properties_internal>::invalidate(void);
// public: static void c_character_properties_base<class c_character_bunker_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_bunker_properties_internal> *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_bunker_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_bunker_properties_internal> &);
// class c_character_bunker_properties_internal * character_definition_properties_get_direct<class c_character_bunker_properties_internal, 420>(long, class c_stimulus_flags const *);
// public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: class c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_actor_teleport_restriction_flags, enum e_actor_teleport_restriction_flags);
// public: static bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_actor_teleport_restriction_flags);
// private: static unsigned short c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_actor_teleport_restriction_flags);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_bunker_properties_internal>, class c_character_bunker_properties_internal>(class c_character_runtime_properties<class c_character_bunker_properties_internal> *, class c_character_bunker_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_bunker_properties_internal>::static_valid(void *);
// struct s_tag_block * character_definition_property_block_get<420>(long, class c_stimulus_flags const *);
// public: void c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// private: static unsigned short c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_actor_teleport_restriction_flags);
// private: static unsigned short c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid(void) const;
// public: long c_static_stack<struct s_firing_position, 512>::count(void) const;
// public: struct s_firing_position * c_static_stack<struct s_firing_position, 512>::get(long);
// public: bool c_static_stack<struct s_firing_position, 512>::valid(long) const;
// public: bool c_static_stack<struct s_firing_position, 512>::valid(void) const;

//public: bool c_ai_direction::valid(void) const
//{
//    mangled_ppc("?valid@c_ai_direction@@QBA_NXZ");
//};

//public: void c_ai_direction::clear(void)
//{
//    mangled_ppc("?clear@c_ai_direction@@QAAXXZ");
//};

//public: void c_ai_direction::to_movement(void)
//{
//    mangled_ppc("?to_movement@c_ai_direction@@QAAXXZ");
//};

//public: void c_ai_direction::to_prop(long)
//{
//    mangled_ppc("?to_prop@c_ai_direction@@QAAXJ@Z");
//};

//public: void c_ai_direction::to_target(void)
//{
//    mangled_ppc("?to_target@c_ai_direction@@QAAXXZ");
//};

//public: void c_ai_direction::to_point(union real_point3d const *)
//{
//    mangled_ppc("?to_point@c_ai_direction@@QAAXPBTreal_point3d@@@Z");
//};

//public: void c_ai_direction::to_ai_point(class c_ai_point3d const *)
//{
//    mangled_ppc("?to_ai_point@c_ai_direction@@QAAXPBVc_ai_point3d@@@Z");
//};

//public: void c_ai_direction::to_vector(union vector3d const *)
//{
//    mangled_ppc("?to_vector@c_ai_direction@@QAAXPBTvector3d@@@Z");
//};

//public: void c_ai_direction::to_object(long)
//{
//    mangled_ppc("?to_object@c_ai_direction@@QAAXJ@Z");
//};

//public: void c_ai_direction::flush_prop(long)
//{
//    mangled_ppc("?flush_prop@c_ai_direction@@QAAXJ@Z");
//};

//public: void c_ai_direction::flush_object(long)
//{
//    mangled_ppc("?flush_object@c_ai_direction@@QAAXJ@Z");
//};

//public: bool c_ai_direction::get(long, enum e_ai_direction_mode, union vector3d *)
//{
//    mangled_ppc("?get@c_ai_direction@@QAA_NJW4e_ai_direction_mode@@PATvector3d@@@Z");
//};

//public: bool c_ai_direction::get(long, enum e_ai_direction_mode, union vector3d *, bool *, union real_point3d *)
//{
//    mangled_ppc("?get@c_ai_direction@@QAA_NJW4e_ai_direction_mode@@PATvector3d@@PA_NPATreal_point3d@@@Z");
//};

//public: bool c_ai_direction::get(long, enum e_ai_direction_mode, union real_point3d const *, union vector3d *, bool *, union real_point3d *)
//{
//    mangled_ppc("?get@c_ai_direction@@QAA_NJW4e_ai_direction_mode@@PBTreal_point3d@@PATvector3d@@PA_NPAT3@@Z");
//};

//public: void c_ai_action::clear(void)
//{
//    mangled_ppc("?clear@c_ai_action@@QAAXXZ");
//};

//public: bool c_ai_action::valid(void) const
//{
//    mangled_ppc("?valid@c_ai_action@@QBA_NXZ");
//};

//public: bool c_ai_action::setup_bunker(class c_ai_point3d const *, class c_ai_direction const *, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state)
//{
//    mangled_ppc("?setup_bunker@c_ai_action@@QAA_NPBVc_ai_point3d@@PBVc_ai_direction@@W4e_bunker_direction@@W4e_bunker_height@@W4e_bunker_state@@@Z");
//};

//public: bool c_ai_action::setup_posture(class c_ai_point3d const *, class c_ai_direction const *, long)
//{
//    mangled_ppc("?setup_posture@c_ai_action@@QAA_NPBVc_ai_point3d@@PBVc_ai_direction@@J@Z");
//};

//public: bool c_ai_action::setup_perch(class c_ai_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?setup_perch@c_ai_action@@QAA_NPBVc_ai_point3d@@PBTvector3d@@@Z");
//};

//public: bool c_ai_action::setup_land(class c_ai_point3d const *)
//{
//    mangled_ppc("?setup_land@c_ai_action@@QAA_NPBVc_ai_point3d@@@Z");
//};

//public: bool c_ai_action::setup_animation(long, class c_ai_direction const *, long)
//{
//    mangled_ppc("?setup_animation@c_ai_action@@QAA_NJPBVc_ai_direction@@J@Z");
//};

//public: bool c_ai_action::setup_animation(long, class c_ai_direction const *, long, short)
//{
//    mangled_ppc("?setup_animation@c_ai_action@@QAA_NJPBVc_ai_direction@@JF@Z");
//};

//public: bool c_ai_action::setup_face(class c_ai_direction const *, short)
//{
//    mangled_ppc("?setup_face@c_ai_action@@QAA_NPBVc_ai_direction@@F@Z");
//};

//public: bool c_ai_action::get_entry_point(long, class c_ai_point3d const *, class c_sector_ref const *, class c_ai_point3d *, union vector3d *, class c_sector_ref *)
//{
//    mangled_ppc("?get_entry_point@c_ai_action@@QAA_NJPBVc_ai_point3d@@PBVc_sector_ref@@PAV2@PATvector3d@@PAV3@@Z");
//};

//public: enum e_ai_action_result c_ai_action::execute(long)
//{
//    mangled_ppc("?execute@c_ai_action@@QAA?AW4e_ai_action_result@@J@Z");
//};

//bool process_pending_ground_actions(long)
//{
//    mangled_ppc("?process_pending_ground_actions@@YA_NJ@Z");
//};

//void actor_set_bunker_control_mode(long, enum e_bunker_control_mode)
//{
//    mangled_ppc("?actor_set_bunker_control_mode@@YAXJW4e_bunker_control_mode@@@Z");
//};

//bool actor_bunker_update(long)
//{
//    mangled_ppc("?actor_bunker_update@@YA_NJ@Z");
//};

//float bunker_get_peek_chance(long)
//{
//    mangled_ppc("?bunker_get_peek_chance@@YAMJ@Z");
//};

//float bunker_get_open_chance(long)
//{
//    mangled_ppc("?bunker_get_open_chance@@YAMJ@Z");
//};

//float bunker_get_min_closed_time(long)
//{
//    mangled_ppc("?bunker_get_min_closed_time@@YAMJ@Z");
//};

//float bunker_get_close_danger_level(long)
//{
//    mangled_ppc("?bunker_get_close_danger_level@@YAMJ@Z");
//};

//bool actor_bunker_change_state(long, enum e_bunker_state)
//{
//    mangled_ppc("?actor_bunker_change_state@@YA_NJW4e_bunker_state@@@Z");
//};

//float bunker_get_open_duration(long)
//{
//    mangled_ppc("?bunker_get_open_duration@@YAMJ@Z");
//};

//void actor_berserk(long, bool, bool)
//{
//    mangled_ppc("?actor_berserk@@YAXJ_N0@Z");
//};

//void actor_berserk_set_movement_mapping(long, bool)
//{
//    mangled_ppc("?actor_berserk_set_movement_mapping@@YAXJ_N@Z");
//};

//void actor_berserk_melee_success(long)
//{
//    mangled_ppc("?actor_berserk_melee_success@@YAXJ@Z");
//};

//void actor_stow_weapon(long, bool, bool)
//{
//    mangled_ppc("?actor_stow_weapon@@YAXJ_N0@Z");
//};

//bool actor_exit_posture(long)
//{
//    mangled_ppc("?actor_exit_posture@@YA_NJ@Z");
//};

//bool actor_is_evading(long)
//{
//    mangled_ppc("?actor_is_evading@@YA_NJ@Z");
//};

//bool actor_is_juking(long)
//{
//    mangled_ppc("?actor_is_juking@@YA_NJ@Z");
//};

//bool actor_evade(long)
//{
//    mangled_ppc("?actor_evade@@YA_NJ@Z");
//};

//bool ai_posture_allow_automatic_exit(long)
//{
//    mangled_ppc("?ai_posture_allow_automatic_exit@@YA_NJ@Z");
//};

//bool ai_posture_allow_animation(long, long)
//{
//    mangled_ppc("?ai_posture_allow_animation@@YA_NJJ@Z");
//};

//bool ai_posture_allow_hard_ping(long)
//{
//    mangled_ppc("?ai_posture_allow_hard_ping@@YA_NJ@Z");
//};

//bool actor_allow_weapon_stow(long)
//{
//    mangled_ppc("?actor_allow_weapon_stow@@YA_NJ@Z");
//};

//bool actor_bring_forward(long, struct actor_teleport_state *)
//{
//    mangled_ppc("?actor_bring_forward@@YA_NJPAUactor_teleport_state@@@Z");
//};

//bool ai_resurrect_get_marker(long, struct object_marker *, bool *)
//{
//    mangled_ppc("?ai_resurrect_get_marker@@YA_NJPAUobject_marker@@PA_N@Z");
//};

//long actor_resurrect(long, enum e_campaign_team, short, short)
//{
//    mangled_ppc("?actor_resurrect@@YAJJW4e_campaign_team@@FF@Z");
//};

//bool ai_handle_resurrection(long)
//{
//    mangled_ppc("?ai_handle_resurrection@@YA_NJ@Z");
//};

//public: c_character_runtime_properties<class c_character_bunker_properties_internal>::c_character_runtime_properties<class c_character_bunker_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_bunker_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@QBA_NXZ");
//};

//void actor_get_character_definition_properties<class c_character_bunker_properties_internal, 420>(long, class c_character_runtime_properties<class c_character_bunker_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_bunker_properties_internal@@$0BKE@@@YAXJAAV?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@@Z");
//};

//public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_actor_teleport_restriction_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NW4e_actor_teleport_restriction_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test_range(enum e_actor_teleport_restriction_flags, enum e_actor_teleport_restriction_flags) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NW4e_actor_teleport_restriction_flags@@0@Z");
//};

//public: void c_character_runtime_properties<class c_character_bunker_properties_internal>::set(class c_character_bunker_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@QAAXPBVc_character_bunker_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_bunker_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@QAAXXZ");
//};

//public: static void c_character_properties_base<class c_character_bunker_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_bunker_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_bunker_properties_internal@@@@SAXPAV1@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_bunker_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_bunker_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@@Z");
//};

//class c_character_bunker_properties_internal * character_definition_properties_get_direct<class c_character_bunker_properties_internal, 420>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_bunker_properties_internal@@$0BKE@@@YAPAVc_character_bunker_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: class c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_actor_teleport_restriction_flags, enum e_actor_teleport_restriction_flags)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@SA?AV1@W4e_actor_teleport_restriction_flags@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_actor_teleport_restriction_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@SA_NW4e_actor_teleport_restriction_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_actor_teleport_restriction_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@CAGW4e_actor_teleport_restriction_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_bunker_properties_internal>, class c_character_bunker_properties_internal>(class c_character_runtime_properties<class c_character_bunker_properties_internal> *, class c_character_bunker_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@Vc_character_bunker_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@PBVc_character_bunker_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_bunker_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_bunker_properties_internal@@@@SA_NPAX@Z");
//};

//struct s_tag_block * character_definition_property_block_get<420>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BKE@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_actor_teleport_restriction_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@CAGW4e_actor_teleport_restriction_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@CAGXZ");
//};

//public: bool c_flags_no_init<enum e_actor_teleport_restriction_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_actor_teleport_restriction_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_firing_position, 512>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_firing_position@@$0CAA@@@QBAJXZ");
//};

//public: struct s_firing_position * c_static_stack<struct s_firing_position, 512>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_firing_position@@$0CAA@@@QAAPAUs_firing_position@@J@Z");
//};

//public: bool c_static_stack<struct s_firing_position, 512>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_firing_position@@$0CAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_firing_position, 512>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_firing_position@@$0CAA@@@QBA_NXZ");
//};

