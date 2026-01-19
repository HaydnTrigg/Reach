/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_animation_blend_change_scale; // "?g_animation_blend_change_scale@@3MA"
// float const `public: void __cdecl t_short_fixed<13>::import_real(float)'::`2'::s_real_one; // "?s_real_one@?1??import_real@?$t_short_fixed@$0N@@@QAAXM@Z@4MB"
// `public: void __cdecl t_short_fixed<13>::import_real(float)'::`2'::`local static guard'{2}; // "??_B?1??import_real@?$t_short_fixed@$0N@@@QAAXM@Z@51"

// public: c_animation_channel::c_animation_channel(void);
// public: c_animation_channel::~c_animation_channel(void);
// public: void c_animation_channel::reset(void);
// public: void c_animation_channel::initialize(void);
// public: class c_animation_id c_animation_channel::get_dominant_animation_id(void) const;
// public: class c_model_animation const * c_animation_channel::get_dominant_animation(void) const;
// public: class c_model_animation const * c_animation_channel::get_blended_animation(long) const;
// public: bool c_animation_channel::get_blended_animation_data(long, class c_animation_data *) const;
// private: void c_animation_channel::update_animation_playback_state(void);
// public: void c_animation_channel::enable_looping(bool);
// public: void c_animation_channel::jump_to_last_frame_and_stop(void);
// public: void c_animation_channel::set_frame_position(float);
// public: void c_animation_channel::set_frame_position_from_authored_time(float);
// public: void c_animation_channel::set_frame_position_from_playback_time(float);
// public: void c_animation_channel::set_frame_position_from_playback_ratio(float);
// public: float c_animation_channel::get_frame_position_step(void) const;
// public: bool c_animation_channel::update_to_authored_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: bool c_animation_channel::update_to_playback_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: bool c_animation_channel::update_to_frame_position(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// bool frame_event_flags_test_matches(class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>);
// void state_flags_clear_matches(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver> *);
// void state_flags_set_matches(class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver> *);
// public: float c_model_animation::get_override_blend_out_time(void) const;
// public: bool c_animation_channel::update(class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: bool c_animation_channel::update_to_playback_ratio(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: void c_animation_channel::pause_playback(bool);
// public: void c_animation_channel::set_playback_complete(void);
// private: void c_animation_channel::internal_note_all_events(long);
// public: struct animation_aiming_screen_bounds const * c_animation_channel::get_aiming_screen_bounds(void) const;
// public: bool c_animation_channel::get_pill_offset_data(union real_point3d *, union vector3d *) const;
// private: bool c_animation_channel::get_pill_offset_data_for_frame(float, union real_point3d *, union vector3d *) const;
// public: bool c_animation_channel::contains_motion_data(void) const;
// public: void c_animation_channel::get_motion_rates(union vector3d *, union vector3d *) const;
// public: void c_animation_channel::get_motion_offsets(union vector3d *, union vector3d *) const;
// public: bool c_animation_channel::get_real_motion_data_for_frame_range(float, float, union vector3d *, union vector3d *) const;
// public: bool c_animation_channel::get_real_motion_data_for_frame(float, union vector3d *, union vector3d *) const;
// public: float c_animation_channel::get_playback_ratio(void) const;
// public: float c_animation_channel::get_playback_ratio_remaining(void) const;
// public: float c_animation_channel::get_authored_time(void) const;
// public: void c_animation_channel::append_debug_string(char const *, char const *, char *, int) const;
// public: void c_animation_channel::apply_node_orientations(struct render_model_definition const *, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: void c_animation_channel::apply_weighted_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: void c_animation_channel::apply_blend_screen_node_orientations(float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: void c_animation_channel::apply_weighted_blend_screen_node_orientations(float, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: void c_animation_channel::apply_node_orientations_at_playback_ratio(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long) const;
// public: void c_animation_channel::apply_weighted_node_orientations_at_playback_ratio(struct render_model_definition const *, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long) const;
// public: bool c_animation_channel::aiming_screen_attached(void) const;
// private: void c_animation_channel::internal_apply_weighted_node_orientations(class c_animation_id, float, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// private: void c_animation_channel::internal_apply_weighted_node_orientations_at_playback_ratio(class c_animation_id, struct render_model_definition const *, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long) const;
// private: void c_animation_channel::internal_apply_weighted_blend_screen_node_orientations(class c_animation_id, float, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: bool c_animation_channel::update_analog_blend_from_velocity(union vector3d const *, bool);
// public: bool c_animation_channel::update_analog_blend_from_throttle(union vector3d const *, bool);
// public: bool c_animation_channel::setup_additional_animation(long, class c_animation_id, float);
// public: void c_animation_channel::set_additional_animation_id(long, class c_animation_id);
// public: void c_animation_channel::set_additional_weight(long, float);
// public: void c_animation_channel::clear_additional_animations(void);
// public: void c_animation_channel::clear_additional_animation(long);
// private: class t_short_fixed<13> c_animation_channel::compute_base_animation_weight(void) const;
// private: void c_animation_channel::prepare_animation_weights(void);
// public: long c_animation_channel::get_frame_index(void) const;
// public: bool c_animation_channel::get_event_key_authored_time(enum e_animation_frame_event_types, float *) const;
// public: bool c_animation_channel::get_event_key_playback_time(enum e_animation_frame_event_types, float *) const;
// public: bool c_animation_channel::get_primary_key_authored_time(float *) const;
// public: bool c_animation_channel::get_primary_key_playback_time(float *) const;
// public: bool c_animation_channel::get_secondary_key_authored_time(float *) const;
// public: long c_animation_channel::get_function_overlay_index(void) const;
// public: bool c_animation_channel::get_secondary_key_playback_time(float *) const;
// public: float c_animation_channel::get_playback_duration(void) const;
// public: float c_animation_channel::get_frames_remaining(void) const;
// public: float c_animation_channel::get_authored_time_remaining(void) const;
// public: float c_animation_channel::get_playback_time_remaining(void) const;
// public: float c_animation_channel::get_playback_rate(void) const;
// public: void c_animation_channel::get_channel_settings(class c_animation_channel_settings *) const;
// public: void c_animation_channel::get_blended_animations(struct s_blended_animations *) const;
// public: float c_animation_channel::compute_frame_ratio(class c_model_animation const *, class c_model_animation const *) const;
// public: float c_animation_channel::compute_relative_frame_time(float, class c_model_animation const *, class c_model_animation const *) const;
// public: float c_animation_channel::compute_relative_frame_time(class c_model_animation const *, class c_model_animation const *) const;
// float compute_relative_frame_index_within_blend_range(float, class c_model_animation const *, class c_model_animation const *);
// public: long c_animation_channel::count_blend_markers(class c_animation_id);
// private: bool c_animation_channel::setup_channel(class c_animation_channel_settings const *);
// public: bool c_animation_channel::analog_blending_weights_locked(void) const;
// public: void c_animation_channel::lock_analog_blending_weights(bool);
// public: class t_short_fixed<13> & t_short_fixed<13>::operator=(int);
// public: bool t_short_fixed<13>::operator!=(int) const;
// public: bool t_short_fixed<13>::operator>(class t_short_fixed<13> const &) const;
// public: void t_short_fixed<13>::import_real(float);
// public: void c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::set(enum e_animation_frame_event_types, bool);
// public: class c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> const &);
// public: c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::set(enum e_animation_state_flags, bool);
// public: c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned long c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_state_flags);

//public: c_animation_channel::c_animation_channel(void)
//{
//    mangled_ppc("??0c_animation_channel@@QAA@XZ");
//};

//public: c_animation_channel::~c_animation_channel(void)
//{
//    mangled_ppc("??1c_animation_channel@@QAA@XZ");
//};

//public: void c_animation_channel::reset(void)
//{
//    mangled_ppc("?reset@c_animation_channel@@QAAXXZ");
//};

//public: void c_animation_channel::initialize(void)
//{
//    mangled_ppc("?initialize@c_animation_channel@@QAAXXZ");
//};

//public: class c_animation_id c_animation_channel::get_dominant_animation_id(void) const
//{
//    mangled_ppc("?get_dominant_animation_id@c_animation_channel@@QBA?AVc_animation_id@@XZ");
//};

//public: class c_model_animation const * c_animation_channel::get_dominant_animation(void) const
//{
//    mangled_ppc("?get_dominant_animation@c_animation_channel@@QBAPBVc_model_animation@@XZ");
//};

//public: class c_model_animation const * c_animation_channel::get_blended_animation(long) const
//{
//    mangled_ppc("?get_blended_animation@c_animation_channel@@QBAPBVc_model_animation@@J@Z");
//};

//public: bool c_animation_channel::get_blended_animation_data(long, class c_animation_data *) const
//{
//    mangled_ppc("?get_blended_animation_data@c_animation_channel@@QBA_NJPAVc_animation_data@@@Z");
//};

//private: void c_animation_channel::update_animation_playback_state(void)
//{
//    mangled_ppc("?update_animation_playback_state@c_animation_channel@@AAAXXZ");
//};

//public: void c_animation_channel::enable_looping(bool)
//{
//    mangled_ppc("?enable_looping@c_animation_channel@@QAAX_N@Z");
//};

//public: void c_animation_channel::jump_to_last_frame_and_stop(void)
//{
//    mangled_ppc("?jump_to_last_frame_and_stop@c_animation_channel@@QAAXXZ");
//};

//public: void c_animation_channel::set_frame_position(float)
//{
//    mangled_ppc("?set_frame_position@c_animation_channel@@QAAXM@Z");
//};

//public: void c_animation_channel::set_frame_position_from_authored_time(float)
//{
//    mangled_ppc("?set_frame_position_from_authored_time@c_animation_channel@@QAAXM@Z");
//};

//public: void c_animation_channel::set_frame_position_from_playback_time(float)
//{
//    mangled_ppc("?set_frame_position_from_playback_time@c_animation_channel@@QAAXM@Z");
//};

//public: void c_animation_channel::set_frame_position_from_playback_ratio(float)
//{
//    mangled_ppc("?set_frame_position_from_playback_ratio@c_animation_channel@@QAAXM@Z");
//};

//public: float c_animation_channel::get_frame_position_step(void) const
//{
//    mangled_ppc("?get_frame_position_step@c_animation_channel@@QBAMXZ");
//};

//public: bool c_animation_channel::update_to_authored_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_to_authored_time@c_animation_channel@@QAA_NMPBVc_animation_manager@@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: bool c_animation_channel::update_to_playback_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_to_playback_time@c_animation_channel@@QAA_NMPBVc_animation_manager@@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: bool c_animation_channel::update_to_frame_position(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_to_frame_position@c_animation_channel@@QAA_NMPBVc_animation_manager@@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//bool frame_event_flags_test_matches(class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?frame_event_flags_test_matches@@YA_NV?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@@Z");
//};

//void state_flags_clear_matches(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?state_flags_clear_matches@@YAXPAV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@@Z");
//};

//void state_flags_set_matches(class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?state_flags_set_matches@@YAXV?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@PAV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: float c_model_animation::get_override_blend_out_time(void) const
//{
//    mangled_ppc("?get_override_blend_out_time@c_model_animation@@QBAMXZ");
//};

//public: bool c_animation_channel::update(class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update@c_animation_channel@@QAA_NPBVc_animation_manager@@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: bool c_animation_channel::update_to_playback_ratio(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_to_playback_ratio@c_animation_channel@@QAA_NMPBVc_animation_manager@@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_channel::pause_playback(bool)
//{
//    mangled_ppc("?pause_playback@c_animation_channel@@QAAX_N@Z");
//};

//public: void c_animation_channel::set_playback_complete(void)
//{
//    mangled_ppc("?set_playback_complete@c_animation_channel@@QAAXXZ");
//};

//private: void c_animation_channel::internal_note_all_events(long)
//{
//    mangled_ppc("?internal_note_all_events@c_animation_channel@@AAAXJ@Z");
//};

//public: struct animation_aiming_screen_bounds const * c_animation_channel::get_aiming_screen_bounds(void) const
//{
//    mangled_ppc("?get_aiming_screen_bounds@c_animation_channel@@QBAPBUanimation_aiming_screen_bounds@@XZ");
//};

//public: bool c_animation_channel::get_pill_offset_data(union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?get_pill_offset_data@c_animation_channel@@QBA_NPATreal_point3d@@PATvector3d@@@Z");
//};

//private: bool c_animation_channel::get_pill_offset_data_for_frame(float, union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?get_pill_offset_data_for_frame@c_animation_channel@@ABA_NMPATreal_point3d@@PATvector3d@@@Z");
//};

//public: bool c_animation_channel::contains_motion_data(void) const
//{
//    mangled_ppc("?contains_motion_data@c_animation_channel@@QBA_NXZ");
//};

//public: void c_animation_channel::get_motion_rates(union vector3d *, union vector3d *) const
//{
//    mangled_ppc("?get_motion_rates@c_animation_channel@@QBAXPATvector3d@@0@Z");
//};

//public: void c_animation_channel::get_motion_offsets(union vector3d *, union vector3d *) const
//{
//    mangled_ppc("?get_motion_offsets@c_animation_channel@@QBAXPATvector3d@@0@Z");
//};

//public: bool c_animation_channel::get_real_motion_data_for_frame_range(float, float, union vector3d *, union vector3d *) const
//{
//    mangled_ppc("?get_real_motion_data_for_frame_range@c_animation_channel@@QBA_NMMPATvector3d@@0@Z");
//};

//public: bool c_animation_channel::get_real_motion_data_for_frame(float, union vector3d *, union vector3d *) const
//{
//    mangled_ppc("?get_real_motion_data_for_frame@c_animation_channel@@QBA_NMPATvector3d@@0@Z");
//};

//public: float c_animation_channel::get_playback_ratio(void) const
//{
//    mangled_ppc("?get_playback_ratio@c_animation_channel@@QBAMXZ");
//};

//public: float c_animation_channel::get_playback_ratio_remaining(void) const
//{
//    mangled_ppc("?get_playback_ratio_remaining@c_animation_channel@@QBAMXZ");
//};

//public: float c_animation_channel::get_authored_time(void) const
//{
//    mangled_ppc("?get_authored_time@c_animation_channel@@QBAMXZ");
//};

//public: void c_animation_channel::append_debug_string(char const *, char const *, char *, int) const
//{
//    mangled_ppc("?append_debug_string@c_animation_channel@@QBAXPBD0PADH@Z");
//};

//public: void c_animation_channel::apply_node_orientations(struct render_model_definition const *, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_node_orientations@c_animation_channel@@QAAXPBUrender_model_definition@@PBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: void c_animation_channel::apply_weighted_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_weighted_node_orientations@c_animation_channel@@QAAXPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: void c_animation_channel::apply_blend_screen_node_orientations(float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_blend_screen_node_orientations@c_animation_channel@@QAAXMMPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: void c_animation_channel::apply_weighted_blend_screen_node_orientations(float, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_weighted_blend_screen_node_orientations@c_animation_channel@@QAAXMMMPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: void c_animation_channel::apply_node_orientations_at_playback_ratio(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long) const
//{
//    mangled_ppc("?apply_node_orientations_at_playback_ratio@c_animation_channel@@QBAXPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: void c_animation_channel::apply_weighted_node_orientations_at_playback_ratio(struct render_model_definition const *, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long) const
//{
//    mangled_ppc("?apply_weighted_node_orientations_at_playback_ratio@c_animation_channel@@QBAXPBUrender_model_definition@@MMPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: bool c_animation_channel::aiming_screen_attached(void) const
//{
//    mangled_ppc("?aiming_screen_attached@c_animation_channel@@QBA_NXZ");
//};

//private: void c_animation_channel::internal_apply_weighted_node_orientations(class c_animation_id, float, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?internal_apply_weighted_node_orientations@c_animation_channel@@AAAXVc_animation_id@@MPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@0PBKM@ZJ@Z");
//};

//private: void c_animation_channel::internal_apply_weighted_node_orientations_at_playback_ratio(class c_animation_id, struct render_model_definition const *, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long) const
//{
//    mangled_ppc("?internal_apply_weighted_node_orientations_at_playback_ratio@c_animation_channel@@ABAXVc_animation_id@@PBUrender_model_definition@@MMPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@0PBKM@ZJ@Z");
//};

//private: void c_animation_channel::internal_apply_weighted_blend_screen_node_orientations(class c_animation_id, float, float, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?internal_apply_weighted_blend_screen_node_orientations@c_animation_channel@@AAAXVc_animation_id@@MMMPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@0PBKM@ZJ@Z");
//};

//public: bool c_animation_channel::update_analog_blend_from_velocity(union vector3d const *, bool)
//{
//    mangled_ppc("?update_analog_blend_from_velocity@c_animation_channel@@QAA_NPBTvector3d@@_N@Z");
//};

//public: bool c_animation_channel::update_analog_blend_from_throttle(union vector3d const *, bool)
//{
//    mangled_ppc("?update_analog_blend_from_throttle@c_animation_channel@@QAA_NPBTvector3d@@_N@Z");
//};

//public: bool c_animation_channel::setup_additional_animation(long, class c_animation_id, float)
//{
//    mangled_ppc("?setup_additional_animation@c_animation_channel@@QAA_NJVc_animation_id@@M@Z");
//};

//public: void c_animation_channel::set_additional_animation_id(long, class c_animation_id)
//{
//    mangled_ppc("?set_additional_animation_id@c_animation_channel@@QAAXJVc_animation_id@@@Z");
//};

//public: void c_animation_channel::set_additional_weight(long, float)
//{
//    mangled_ppc("?set_additional_weight@c_animation_channel@@QAAXJM@Z");
//};

//public: void c_animation_channel::clear_additional_animations(void)
//{
//    mangled_ppc("?clear_additional_animations@c_animation_channel@@QAAXXZ");
//};

//public: void c_animation_channel::clear_additional_animation(long)
//{
//    mangled_ppc("?clear_additional_animation@c_animation_channel@@QAAXJ@Z");
//};

//private: class t_short_fixed<13> c_animation_channel::compute_base_animation_weight(void) const
//{
//    mangled_ppc("?compute_base_animation_weight@c_animation_channel@@ABA?AV?$t_short_fixed@$0N@@@XZ");
//};

//private: void c_animation_channel::prepare_animation_weights(void)
//{
//    mangled_ppc("?prepare_animation_weights@c_animation_channel@@AAAXXZ");
//};

//public: long c_animation_channel::get_frame_index(void) const
//{
//    mangled_ppc("?get_frame_index@c_animation_channel@@QBAJXZ");
//};

//public: bool c_animation_channel::get_event_key_authored_time(enum e_animation_frame_event_types, float *) const
//{
//    mangled_ppc("?get_event_key_authored_time@c_animation_channel@@QBA_NW4e_animation_frame_event_types@@PAM@Z");
//};

//public: bool c_animation_channel::get_event_key_playback_time(enum e_animation_frame_event_types, float *) const
//{
//    mangled_ppc("?get_event_key_playback_time@c_animation_channel@@QBA_NW4e_animation_frame_event_types@@PAM@Z");
//};

//public: bool c_animation_channel::get_primary_key_authored_time(float *) const
//{
//    mangled_ppc("?get_primary_key_authored_time@c_animation_channel@@QBA_NPAM@Z");
//};

//public: bool c_animation_channel::get_primary_key_playback_time(float *) const
//{
//    mangled_ppc("?get_primary_key_playback_time@c_animation_channel@@QBA_NPAM@Z");
//};

//public: bool c_animation_channel::get_secondary_key_authored_time(float *) const
//{
//    mangled_ppc("?get_secondary_key_authored_time@c_animation_channel@@QBA_NPAM@Z");
//};

//public: long c_animation_channel::get_function_overlay_index(void) const
//{
//    mangled_ppc("?get_function_overlay_index@c_animation_channel@@QBAJXZ");
//};

//public: bool c_animation_channel::get_secondary_key_playback_time(float *) const
//{
//    mangled_ppc("?get_secondary_key_playback_time@c_animation_channel@@QBA_NPAM@Z");
//};

//public: float c_animation_channel::get_playback_duration(void) const
//{
//    mangled_ppc("?get_playback_duration@c_animation_channel@@QBAMXZ");
//};

//public: float c_animation_channel::get_frames_remaining(void) const
//{
//    mangled_ppc("?get_frames_remaining@c_animation_channel@@QBAMXZ");
//};

//public: float c_animation_channel::get_authored_time_remaining(void) const
//{
//    mangled_ppc("?get_authored_time_remaining@c_animation_channel@@QBAMXZ");
//};

//public: float c_animation_channel::get_playback_time_remaining(void) const
//{
//    mangled_ppc("?get_playback_time_remaining@c_animation_channel@@QBAMXZ");
//};

//public: float c_animation_channel::get_playback_rate(void) const
//{
//    mangled_ppc("?get_playback_rate@c_animation_channel@@QBAMXZ");
//};

//public: void c_animation_channel::get_channel_settings(class c_animation_channel_settings *) const
//{
//    mangled_ppc("?get_channel_settings@c_animation_channel@@QBAXPAVc_animation_channel_settings@@@Z");
//};

//public: void c_animation_channel::get_blended_animations(struct s_blended_animations *) const
//{
//    mangled_ppc("?get_blended_animations@c_animation_channel@@QBAXPAUs_blended_animations@@@Z");
//};

//public: float c_animation_channel::compute_frame_ratio(class c_model_animation const *, class c_model_animation const *) const
//{
//    mangled_ppc("?compute_frame_ratio@c_animation_channel@@QBAMPBVc_model_animation@@0@Z");
//};

//public: float c_animation_channel::compute_relative_frame_time(float, class c_model_animation const *, class c_model_animation const *) const
//{
//    mangled_ppc("?compute_relative_frame_time@c_animation_channel@@QBAMMPBVc_model_animation@@0@Z");
//};

//public: float c_animation_channel::compute_relative_frame_time(class c_model_animation const *, class c_model_animation const *) const
//{
//    mangled_ppc("?compute_relative_frame_time@c_animation_channel@@QBAMPBVc_model_animation@@0@Z");
//};

//float compute_relative_frame_index_within_blend_range(float, class c_model_animation const *, class c_model_animation const *)
//{
//    mangled_ppc("?compute_relative_frame_index_within_blend_range@@YAMMPBVc_model_animation@@0@Z");
//};

//public: long c_animation_channel::count_blend_markers(class c_animation_id)
//{
//    mangled_ppc("?count_blend_markers@c_animation_channel@@QAAJVc_animation_id@@@Z");
//};

//private: bool c_animation_channel::setup_channel(class c_animation_channel_settings const *)
//{
//    mangled_ppc("?setup_channel@c_animation_channel@@AAA_NPBVc_animation_channel_settings@@@Z");
//};

//public: bool c_animation_channel::analog_blending_weights_locked(void) const
//{
//    mangled_ppc("?analog_blending_weights_locked@c_animation_channel@@QBA_NXZ");
//};

//public: void c_animation_channel::lock_analog_blending_weights(bool)
//{
//    mangled_ppc("?lock_analog_blending_weights@c_animation_channel@@QAAX_N@Z");
//};

//public: class t_short_fixed<13> & t_short_fixed<13>::operator=(int)
//{
//    mangled_ppc("??4?$t_short_fixed@$0N@@@QAAAAV0@H@Z");
//};

//public: bool t_short_fixed<13>::operator!=(int) const
//{
//    mangled_ppc("??9?$t_short_fixed@$0N@@@QBA_NH@Z");
//};

//public: bool t_short_fixed<13>::operator>(class t_short_fixed<13> const &) const
//{
//    mangled_ppc("??O?$t_short_fixed@$0N@@@QBA_NABV0@@Z");
//};

//public: void t_short_fixed<13>::import_real(float)
//{
//    mangled_ppc("?import_real@?$t_short_fixed@$0N@@@QAAXM@Z");
//};

//public: void c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::set(enum e_animation_frame_event_types, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@QAAXW4e_animation_frame_event_types@@_N@Z");
//};

//public: class c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::set(enum e_animation_state_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@QAAXW4e_animation_state_flags@@_N@Z");
//};

//public: c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_state_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@CAKW4e_animation_state_flags@@@Z");
//};

