/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_facial_animation_cinematic_decrease_rate; // "?g_facial_animation_cinematic_decrease_rate@@3MA"
// float g_facial_animation_active_increase_rate; // "?g_facial_animation_active_increase_rate@@3MA"
// float g_facial_animation_active_decrease_rate; // "?g_facial_animation_active_decrease_rate@@3MA"
// float g_facial_animation_noise_head_scale; // "?g_facial_animation_noise_head_scale@@3MA"
// float g_facial_animation_noise_eyes_scale; // "?g_facial_animation_noise_eyes_scale@@3MA"
// float g_facial_animation_noise_brow_scale; // "?g_facial_animation_noise_brow_scale@@3MA"
// float g_facial_animation_noise_mouth_scale; // "?g_facial_animation_noise_mouth_scale@@3MA"
// float g_facial_animation_base_speed; // "?g_facial_animation_base_speed@@3MA"
// float g_facial_animation_mod_speed; // "?g_facial_animation_mod_speed@@3MA"
// float g_facial_animation_offset_speed; // "?g_facial_animation_offset_speed@@3MA"
// float g_facial_animation_base_scale; // "?g_facial_animation_base_scale@@3MA"
// float g_facial_animation_mod_scale; // "?g_facial_animation_mod_scale@@3MA"
// float g_facial_animation_offset_scale; // "?g_facial_animation_offset_scale@@3MA"
// float *g_sine_wave; // "?g_sine_wave@@3PAMA"
// float *g_blink_weights; // "?g_blink_weights@@3PAMA"
// bool g_enable_facial_animation; // "?g_enable_facial_animation@@3_NA"
// bool g_enable_facial_animation_emotion; // "?g_enable_facial_animation_emotion@@3_NA"
// bool g_enable_facial_animation_lipsync; // "?g_enable_facial_animation_lipsync@@3_NA"
// bool g_enable_facial_animation_gestures; // "?g_enable_facial_animation_gestures@@3_NA"
// char const **g_facial_animation_track_names; // "?g_facial_animation_track_names@@3PAPBDA"
// bool g_enable_facial_animation_noise; // "?g_enable_facial_animation_noise@@3_NA"

// char const * get_facial_animation_track_name(long);
// char const * get_facial_animation_emotion_name(long);
// long facial_animation_get_lipsync_frame_offset(long);
// public: c_facial_animation_channel::c_facial_animation_channel(void);
// public: c_facial_animation_emotion::c_facial_animation_emotion(void);
// public: c_facial_animation_channel::~c_facial_animation_channel(void);
// public: c_facial_animation_emotion::~c_facial_animation_emotion(void);
// public: void c_facial_animation_channel::initialize(void);
// public: void c_facial_animation_channel::reset(void);
// protected: void c_facial_animation_channel::update_track_weights_from_audio(struct s_track_weights &);
// bool english_cinematic_in_progress(void);
// protected: void c_facial_animation_channel::update_facial_animation_lipsync(long, long, float);
// protected: void c_facial_animation_channel::end_facial_animation_lipsync(long);
// protected: bool c_facial_animation_channel::update(void);
// short real_to_short_fixed(float);
// public: void c_facial_animation_emotion::set_weight(float);
// public: float c_facial_animation_emotion::get_weight(void) const;
// public: bool c_facial_animation_emotion::weight_non_zero(void) const;
// public: void c_facial_animation_emotion::set_target(float);
// public: float c_facial_animation_emotion::get_target(void) const;
// public: void c_facial_animation_emotion::set_transition(float);
// public: float c_facial_animation_emotion::get_transition(void) const;
// float short_fixed_to_real(short);
// public: void c_facial_animation_emotion::set_short_fixed_transition(short);
// public: short c_facial_animation_emotion::get_short_fixed_transition(void) const;
// public: void c_facial_animation_emotion::snap_to_target(void);
// protected: void c_facial_animation_channel::append_debug_string(char const *, char const *, char *, int) const;
// protected: void c_facial_animation_channel::apply_gesture_orientations(struct render_model_definition const *, float, long, long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// protected: void c_facial_animation_channel::apply_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: bool c_facial_animation_channel::setup_channel(class c_facial_animation_channel_settings const *);
// public: void c_facial_animation_channel::set_target_emotion(long, float, float);
// public: void c_facial_animation_channel::set_target_emotion_by_name(long, float, float);
// public: void c_facial_animation_channel::get_channel_settings(class c_facial_animation_channel_settings *) const;
// protected: void c_facial_animation_channel::get_nodes_moved_by_animation(class c_big_flags_typed_no_init<long, 256> *) const;
// public: bool c_facial_animation_channel::facial_animation_in_progress(void) const;
// public: class t_short_fixed<8> & t_short_fixed<8>::operator=(int);
// public: bool t_short_fixed<8>::operator<(int) const;
// public: bool t_short_fixed<8>::operator<(class t_short_fixed<8> const &) const;
// public: class t_short_fixed<8> & t_short_fixed<8>::operator-=(class t_short_fixed<8> const &);
// public: enum e_facial_animation_track_list c_enum_no_init<enum e_facial_animation_track_list, long, 0, 34, struct s_default_enum_string_resolver>::operator enum e_facial_animation_track_list(void) const;
// public: void c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: c_flags<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_facial_animation_state_flags) const;
// public: c_flags<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_facial_animation_settings_flags);
// private: static unsigned char c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_facial_animation_state_flags);
// public: t_short_fixed<8>::t_short_fixed<8>(long);
// void k_blink_duration::`dynamic atexit destructor'(void);
// void k_blink_inv_count::`dynamic atexit destructor'(void);

//char const * get_facial_animation_track_name(long)
//{
//    mangled_ppc("?get_facial_animation_track_name@@YAPBDJ@Z");
//};

//char const * get_facial_animation_emotion_name(long)
//{
//    mangled_ppc("?get_facial_animation_emotion_name@@YAPBDJ@Z");
//};

//long facial_animation_get_lipsync_frame_offset(long)
//{
//    mangled_ppc("?facial_animation_get_lipsync_frame_offset@@YAJJ@Z");
//};

//public: c_facial_animation_channel::c_facial_animation_channel(void)
//{
//    mangled_ppc("??0c_facial_animation_channel@@QAA@XZ");
//};

//public: c_facial_animation_emotion::c_facial_animation_emotion(void)
//{
//    mangled_ppc("??0c_facial_animation_emotion@@QAA@XZ");
//};

//public: c_facial_animation_channel::~c_facial_animation_channel(void)
//{
//    mangled_ppc("??1c_facial_animation_channel@@QAA@XZ");
//};

//public: c_facial_animation_emotion::~c_facial_animation_emotion(void)
//{
//    mangled_ppc("??1c_facial_animation_emotion@@QAA@XZ");
//};

//public: void c_facial_animation_channel::initialize(void)
//{
//    mangled_ppc("?initialize@c_facial_animation_channel@@QAAXXZ");
//};

//public: void c_facial_animation_channel::reset(void)
//{
//    mangled_ppc("?reset@c_facial_animation_channel@@QAAXXZ");
//};

//protected: void c_facial_animation_channel::update_track_weights_from_audio(struct s_track_weights &)
//{
//    mangled_ppc("?update_track_weights_from_audio@c_facial_animation_channel@@IAAXAAUs_track_weights@@@Z");
//};

//bool english_cinematic_in_progress(void)
//{
//    mangled_ppc("?english_cinematic_in_progress@@YA_NXZ");
//};

//protected: void c_facial_animation_channel::update_facial_animation_lipsync(long, long, float)
//{
//    mangled_ppc("?update_facial_animation_lipsync@c_facial_animation_channel@@IAAXJJM@Z");
//};

//protected: void c_facial_animation_channel::end_facial_animation_lipsync(long)
//{
//    mangled_ppc("?end_facial_animation_lipsync@c_facial_animation_channel@@IAAXJ@Z");
//};

//protected: bool c_facial_animation_channel::update(void)
//{
//    mangled_ppc("?update@c_facial_animation_channel@@IAA_NXZ");
//};

//short real_to_short_fixed(float)
//{
//    mangled_ppc("?real_to_short_fixed@@YAFM@Z");
//};

//public: void c_facial_animation_emotion::set_weight(float)
//{
//    mangled_ppc("?set_weight@c_facial_animation_emotion@@QAAXM@Z");
//};

//public: float c_facial_animation_emotion::get_weight(void) const
//{
//    mangled_ppc("?get_weight@c_facial_animation_emotion@@QBAMXZ");
//};

//public: bool c_facial_animation_emotion::weight_non_zero(void) const
//{
//    mangled_ppc("?weight_non_zero@c_facial_animation_emotion@@QBA_NXZ");
//};

//public: void c_facial_animation_emotion::set_target(float)
//{
//    mangled_ppc("?set_target@c_facial_animation_emotion@@QAAXM@Z");
//};

//public: float c_facial_animation_emotion::get_target(void) const
//{
//    mangled_ppc("?get_target@c_facial_animation_emotion@@QBAMXZ");
//};

//public: void c_facial_animation_emotion::set_transition(float)
//{
//    mangled_ppc("?set_transition@c_facial_animation_emotion@@QAAXM@Z");
//};

//public: float c_facial_animation_emotion::get_transition(void) const
//{
//    mangled_ppc("?get_transition@c_facial_animation_emotion@@QBAMXZ");
//};

//float short_fixed_to_real(short)
//{
//    mangled_ppc("?short_fixed_to_real@@YAMF@Z");
//};

//public: void c_facial_animation_emotion::set_short_fixed_transition(short)
//{
//    mangled_ppc("?set_short_fixed_transition@c_facial_animation_emotion@@QAAXF@Z");
//};

//public: short c_facial_animation_emotion::get_short_fixed_transition(void) const
//{
//    mangled_ppc("?get_short_fixed_transition@c_facial_animation_emotion@@QBAFXZ");
//};

//public: void c_facial_animation_emotion::snap_to_target(void)
//{
//    mangled_ppc("?snap_to_target@c_facial_animation_emotion@@QAAXXZ");
//};

//protected: void c_facial_animation_channel::append_debug_string(char const *, char const *, char *, int) const
//{
//    mangled_ppc("?append_debug_string@c_facial_animation_channel@@IBAXPBD0PADH@Z");
//};

//protected: void c_facial_animation_channel::apply_gesture_orientations(struct render_model_definition const *, float, long, long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_gesture_orientations@c_facial_animation_channel@@IAAXPBUrender_model_definition@@MJJPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//protected: void c_facial_animation_channel::apply_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_node_orientations@c_facial_animation_channel@@IAAXPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: bool c_facial_animation_channel::setup_channel(class c_facial_animation_channel_settings const *)
//{
//    mangled_ppc("?setup_channel@c_facial_animation_channel@@QAA_NPBVc_facial_animation_channel_settings@@@Z");
//};

//public: void c_facial_animation_channel::set_target_emotion(long, float, float)
//{
//    mangled_ppc("?set_target_emotion@c_facial_animation_channel@@QAAXJMM@Z");
//};

//public: void c_facial_animation_channel::set_target_emotion_by_name(long, float, float)
//{
//    mangled_ppc("?set_target_emotion_by_name@c_facial_animation_channel@@QAAXJMM@Z");
//};

//public: void c_facial_animation_channel::get_channel_settings(class c_facial_animation_channel_settings *) const
//{
//    mangled_ppc("?get_channel_settings@c_facial_animation_channel@@QBAXPAVc_facial_animation_channel_settings@@@Z");
//};

//protected: void c_facial_animation_channel::get_nodes_moved_by_animation(class c_big_flags_typed_no_init<long, 256> *) const
//{
//    mangled_ppc("?get_nodes_moved_by_animation@c_facial_animation_channel@@IBAXPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//public: bool c_facial_animation_channel::facial_animation_in_progress(void) const
//{
//    mangled_ppc("?facial_animation_in_progress@c_facial_animation_channel@@QBA_NXZ");
//};

//public: class t_short_fixed<8> & t_short_fixed<8>::operator=(int)
//{
//    mangled_ppc("??4?$t_short_fixed@$07@@QAAAAV0@H@Z");
//};

//public: bool t_short_fixed<8>::operator<(int) const
//{
//    mangled_ppc("??M?$t_short_fixed@$07@@QBA_NH@Z");
//};

//public: bool t_short_fixed<8>::operator<(class t_short_fixed<8> const &) const
//{
//    mangled_ppc("??M?$t_short_fixed@$07@@QBA_NABV0@@Z");
//};

//public: class t_short_fixed<8> & t_short_fixed<8>::operator-=(class t_short_fixed<8> const &)
//{
//    mangled_ppc("??Z?$t_short_fixed@$07@@QAAAAV0@ABV0@@Z");
//};

//public: enum e_facial_animation_track_list c_enum_no_init<enum e_facial_animation_track_list, long, 0, 34, struct s_default_enum_string_resolver>::operator enum e_facial_animation_track_list(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_facial_animation_track_list@@J$0A@$0CC@Us_default_enum_string_resolver@@@@QBA?AW4e_facial_animation_track_list@@XZ");
//};

//public: void c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_facial_animation_settings_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: c_flags<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_facial_animation_settings_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_facial_animation_state_flags@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_facial_animation_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_facial_animation_state_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_facial_animation_state_flags@@@Z");
//};

//public: c_flags<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_facial_animation_state_flags@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_facial_animation_settings_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_facial_animation_state_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_facial_animation_settings_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_facial_animation_state_flags@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_facial_animation_settings_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_facial_animation_settings_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_facial_animation_settings_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_facial_animation_settings_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_facial_animation_state_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_facial_animation_state_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_facial_animation_state_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_facial_animation_state_flags@@@Z");
//};

//public: t_short_fixed<8>::t_short_fixed<8>(long)
//{
//    mangled_ppc("??0?$t_short_fixed@$07@@QAA@J@Z");
//};

//void k_blink_duration::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fk_blink_duration@@YAXXZ");
//};

//void k_blink_inv_count::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fk_blink_inv_count@@YAXXZ");
//};

