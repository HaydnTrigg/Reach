/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_shared_model_animation::clear(void);
// public: void c_model_animation::clear(void);
// public: void c_model_animation::reset_to_default_compression_settings(void);
// public: class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> c_model_animation::get_default_compression_settings(void) const;
// public: bool c_model_animation::create_shared_animation(void);
// public: class c_shared_model_animation * c_model_animation::get_writable_shared_animation(void);
// public: void c_model_animation::clear_shared_animation(void);
// public: void c_model_animation::remove_shared_animation(void);
// public: void c_model_animation::clear_shared_animation_reference(void);
// public: void c_model_animation::set_shared_animation_reference(long, long);
// public: char const * c_model_animation::get_name_string(void) const;
// public: float c_model_animation::get_frame_position_from_blend_marker_and_fraction(long, float) const;
// public: float c_model_animation::get_blend_range_frame_count(float, float *, float *, long *) const;
// public: bool c_model_animation::get_blend_range_marker_and_playback_fraction(float, long *, float *) const;
// public: long c_model_animation::get_total_keyframe_events(void) const;
// public: struct s_frame_event const * c_model_animation::get_keyframe_event(long) const;
// public: long c_model_animation::get_total_sound_events(void) const;
// public: struct s_tag_block const & c_model_animation::get_sound_events(void) const;
// public: struct s_sound_event const * c_model_animation::get_sound_event(long) const;
// public: long c_model_animation::get_total_effect_events(void) const;
// public: struct s_effect_event const * c_model_animation::get_effect_event(long) const;
// public: long c_model_animation::get_total_dialogue_events(void) const;
// public: struct s_tag_block const & c_model_animation::get_dialogue_events(void) const;
// public: struct s_dialogue_event const * c_model_animation::get_dialogue_event(long) const;
// public: short c_model_animation::find_first_key_of_type(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>) const;
// public: short c_model_animation::find_next_key_of_type(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, short, bool) const;
// public: short c_model_animation::find_most_recent_key_of_type(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, float, bool, float *) const;
// public: short c_model_animation::find_first_sound_event(long *) const;
// public: short c_model_animation::find_first_match_key(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver> *) const;
// public: float c_model_animation::get_last_frame_index(void) const;
// public: float c_model_animation::get_frame_position_from_playback_ratio(float) const;
// public: float c_model_animation::get_playback_ratio_from_frame_position(float) const;
// public: float c_model_animation::get_authored_duration(void) const;
// public: float c_model_animation::get_average_angular_rate(void) const;
// public: void c_flags_no_init<enum e_animation_user_flags, unsigned short, 15, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_animation_internal_flags, unsigned short, 10, struct s_default_enum_string_resolver>::clear(void);

//public: void c_shared_model_animation::clear(void)
//{
//    mangled_ppc("?clear@c_shared_model_animation@@QAAXXZ");
//};

//public: void c_model_animation::clear(void)
//{
//    mangled_ppc("?clear@c_model_animation@@QAAXXZ");
//};

//public: void c_model_animation::reset_to_default_compression_settings(void)
//{
//    mangled_ppc("?reset_to_default_compression_settings@c_model_animation@@QAAXXZ");
//};

//public: class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> c_model_animation::get_default_compression_settings(void) const
//{
//    mangled_ppc("?get_default_compression_settings@c_model_animation@@QBA?AV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_model_animation::create_shared_animation(void)
//{
//    mangled_ppc("?create_shared_animation@c_model_animation@@QAA_NXZ");
//};

//public: class c_shared_model_animation * c_model_animation::get_writable_shared_animation(void)
//{
//    mangled_ppc("?get_writable_shared_animation@c_model_animation@@QAAPAVc_shared_model_animation@@XZ");
//};

//public: void c_model_animation::clear_shared_animation(void)
//{
//    mangled_ppc("?clear_shared_animation@c_model_animation@@QAAXXZ");
//};

//public: void c_model_animation::remove_shared_animation(void)
//{
//    mangled_ppc("?remove_shared_animation@c_model_animation@@QAAXXZ");
//};

//public: void c_model_animation::clear_shared_animation_reference(void)
//{
//    mangled_ppc("?clear_shared_animation_reference@c_model_animation@@QAAXXZ");
//};

//public: void c_model_animation::set_shared_animation_reference(long, long)
//{
//    mangled_ppc("?set_shared_animation_reference@c_model_animation@@QAAXJJ@Z");
//};

//public: char const * c_model_animation::get_name_string(void) const
//{
//    mangled_ppc("?get_name_string@c_model_animation@@QBAPBDXZ");
//};

//public: float c_model_animation::get_frame_position_from_blend_marker_and_fraction(long, float) const
//{
//    mangled_ppc("?get_frame_position_from_blend_marker_and_fraction@c_model_animation@@QBAMJM@Z");
//};

//public: float c_model_animation::get_blend_range_frame_count(float, float *, float *, long *) const
//{
//    mangled_ppc("?get_blend_range_frame_count@c_model_animation@@QBAMMPAM0PAJ@Z");
//};

//public: bool c_model_animation::get_blend_range_marker_and_playback_fraction(float, long *, float *) const
//{
//    mangled_ppc("?get_blend_range_marker_and_playback_fraction@c_model_animation@@QBA_NMPAJPAM@Z");
//};

//public: long c_model_animation::get_total_keyframe_events(void) const
//{
//    mangled_ppc("?get_total_keyframe_events@c_model_animation@@QBAJXZ");
//};

//public: struct s_frame_event const * c_model_animation::get_keyframe_event(long) const
//{
//    mangled_ppc("?get_keyframe_event@c_model_animation@@QBAPBUs_frame_event@@J@Z");
//};

//public: long c_model_animation::get_total_sound_events(void) const
//{
//    mangled_ppc("?get_total_sound_events@c_model_animation@@QBAJXZ");
//};

//public: struct s_tag_block const & c_model_animation::get_sound_events(void) const
//{
//    mangled_ppc("?get_sound_events@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//public: struct s_sound_event const * c_model_animation::get_sound_event(long) const
//{
//    mangled_ppc("?get_sound_event@c_model_animation@@QBAPBUs_sound_event@@J@Z");
//};

//public: long c_model_animation::get_total_effect_events(void) const
//{
//    mangled_ppc("?get_total_effect_events@c_model_animation@@QBAJXZ");
//};

//public: struct s_effect_event const * c_model_animation::get_effect_event(long) const
//{
//    mangled_ppc("?get_effect_event@c_model_animation@@QBAPBUs_effect_event@@J@Z");
//};

//public: long c_model_animation::get_total_dialogue_events(void) const
//{
//    mangled_ppc("?get_total_dialogue_events@c_model_animation@@QBAJXZ");
//};

//public: struct s_tag_block const & c_model_animation::get_dialogue_events(void) const
//{
//    mangled_ppc("?get_dialogue_events@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//public: struct s_dialogue_event const * c_model_animation::get_dialogue_event(long) const
//{
//    mangled_ppc("?get_dialogue_event@c_model_animation@@QBAPBUs_dialogue_event@@J@Z");
//};

//public: short c_model_animation::find_first_key_of_type(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?find_first_key_of_type@c_model_animation@@QBAFV?$c_enum@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@@Z");
//};

//public: short c_model_animation::find_next_key_of_type(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, short, bool) const
//{
//    mangled_ppc("?find_next_key_of_type@c_model_animation@@QBAFV?$c_enum@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@F_N@Z");
//};

//public: short c_model_animation::find_most_recent_key_of_type(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, float, bool, float *) const
//{
//    mangled_ppc("?find_most_recent_key_of_type@c_model_animation@@QBAFV?$c_enum@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@M_NPAM@Z");
//};

//public: short c_model_animation::find_first_sound_event(long *) const
//{
//    mangled_ppc("?find_first_sound_event@c_model_animation@@QBAFPAJ@Z");
//};

//public: short c_model_animation::find_first_match_key(class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?find_first_match_key@c_model_animation@@QBAFPAV?$c_enum@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@@Z");
//};

//public: float c_model_animation::get_last_frame_index(void) const
//{
//    mangled_ppc("?get_last_frame_index@c_model_animation@@QBAMXZ");
//};

//public: float c_model_animation::get_frame_position_from_playback_ratio(float) const
//{
//    mangled_ppc("?get_frame_position_from_playback_ratio@c_model_animation@@QBAMM@Z");
//};

//public: float c_model_animation::get_playback_ratio_from_frame_position(float) const
//{
//    mangled_ppc("?get_playback_ratio_from_frame_position@c_model_animation@@QBAMM@Z");
//};

//public: float c_model_animation::get_authored_duration(void) const
//{
//    mangled_ppc("?get_authored_duration@c_model_animation@@QBAMXZ");
//};

//public: float c_model_animation::get_average_angular_rate(void) const
//{
//    mangled_ppc("?get_average_angular_rate@c_model_animation@@QBAMXZ");
//};

//public: void c_flags_no_init<enum e_animation_user_flags, unsigned short, 15, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_animation_user_flags@@G$0P@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_animation_production_flags@@G$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_animation_internal_flags, unsigned short, 10, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_animation_internal_flags@@G$09Us_default_enum_string_resolver@@@@QAAXXZ");
//};

