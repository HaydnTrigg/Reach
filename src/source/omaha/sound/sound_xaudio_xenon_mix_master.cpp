/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::k_element_count; // "?k_element_count@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0CE@@@2JB"
// public: static long const s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::k_element_count; // "?k_element_count@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$05@@2JB"
// public: static long const s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::k_element_count; // "?k_element_count@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0BI@@@2JB"
// public: static long const s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::k_element_count; // "?k_element_count@?$s_static_array@UXAUDIOVOICEOUTPUTVOLUMEENTRY@@$06@@2JB"
// public: static long const s_static_array<class s_static_array<float, 2>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$s_static_array@M$01@@$01@@2JB"

// public: void c_sound_xaudio_xenon_mix_master::set_global_mixes(struct s_sound_surround_mix_definition const *, struct s_sound_surround_mix_definition const *, struct s_sound_global_mix_configuration const *);
// public: void c_sound_xaudio_xenon_mix_master::set_pause_gain(float);
// public: void c_sound_xaudio_xenon_mix_master::source_initialize_properties(long, struct s_platform_sound_source_properties const *, struct s_platform_sound_effect_properties const *);
// public: void c_sound_xaudio_xenon_mix_master::source_update_properties(long, struct s_platform_sound_source_properties const *, struct s_platform_sound_effect_properties const *, bool);
// public: void c_sound_xaudio_xenon_mix_master::player_voice_update_properties(long, struct s_platform_sound_player_voice_properties const *);
// public: struct s_xaudio_source_state const * c_sound_xaudio_xenon_mix_master::get_source_state(long) const;
// public: bool c_sound_xaudio_xenon_mix_master::is_radio_active(void) const;
// private: struct s_xaudio_source_state * c_sound_xaudio_xenon_mix_master::get_mutable_source_state(long);
// public: void c_sound_xaudio_xenon_mix_master::update_mix(class c_xenon_audio_source_manager *, class c_xenon_audio_voice_manager *, class c_xenon_audio_dsp_manager *);
// private: void c_sound_xaudio_xenon_mix_master::update_voice_center_mix(struct IXAudioVoice *, struct s_sound_center_mix_definition const *);
// private: void c_sound_xaudio_xenon_mix_master::update_source_hardware_output(class c_xenon_audio_source_manager *, class c_xenon_audio_voice_manager *, long);
// public: bool c_platform_source_datum::is_paused(void) const;
// public: c_sound_xaudio_volume_output_builder::c_sound_xaudio_volume_output_builder(struct s_xaudio_platform_output &);
// public: struct XAUDIOVOICEOUTPUTVOLUME * c_sound_xaudio_volume_output_builder::get_xaudio_output_volume(void);
// public: s_xaudio_platform_output::s_xaudio_platform_output(void);
// public: s_xaudio_voice_mix_state::s_xaudio_voice_mix_state(void);
// private: void c_sound_xaudio_xenon_mix_master::update_player_voice_hardware_output(class c_xenon_audio_source_manager *, class c_xenon_audio_voice_manager *, long);
// private: struct s_sound_center_mix_definition const * c_sound_xaudio_xenon_mix_master::get_active_center_mix(void) const;
// private: struct s_sound_center_mix_definition const * c_sound_xaudio_xenon_mix_master::get_active_radio_center_mix(void) const;
// private: void c_sound_xaudio_xenon_mix_master::source_get_output(long, long, struct s_xaudio_platform_output *);
// public: c_sound_speaker_mixer::c_sound_speaker_mixer(struct s_xaudio_source_state const *);
// public: void c_sound_speaker_mixer::attenuate_all_speakers(float);
// public: void c_sound_speaker_mixer::attenuate_front_speakers(float);
// public: void c_sound_speaker_mixer::attenuate_rear_speakers(float);
// public: void c_sound_speaker_mixer::attenuate_center_channel_speakers(float, float, class c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_sound_speaker_mixer::attenuate_lfe_channel(float, class c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_sound_speaker_mixer::attenuate_all_but_lfe_channel(float);
// public: void c_sound_speaker_mixer::set_first_person_weapon_stereo_pan(float, float);
// public: void c_sound_speaker_mixer::set_stereo_pan(float, float);
// public: void c_sound_speaker_mixer::set_left_stereo_pan(float, float);
// public: void c_sound_speaker_mixer::set_right_stereo_pan(float, float);
// public: void c_sound_speaker_mixer::set_speaker_volumes(long, struct s_xaudio_platform_output *);
// public: float & s_xaudio_platform_output::get_channel_speaker(long, long, enum e_xaudio_output_speaker);
// private: void c_sound_speaker_mixer::update_volumes(class c_wrapped_array<enum e_xaudio_output_speaker>, float);
// private: void c_sound_speaker_mixer::combine_speaker_output(struct s_xaudio_platform_output *, unsigned long, unsigned long, float, float);
// private: struct real_decibel c_sound_xaudio_xenon_mix_master::get_3d_attenuation(long) const;
// private: struct real_decibel c_sound_xaudio_xenon_mix_master::get_first_person_attenuation(long) const;
// private: struct real_decibel c_sound_xaudio_xenon_mix_master::get_lfe_folddown_attenuation(long) const;
// public: c_enum<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>(enum e_sound_radio_mix_setting);
// public: bool c_enum_no_init<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_sound_radio_mix_setting) const;
// public: c_static_sized_dynamic_array<float, 36>::c_static_sized_dynamic_array<float, 36>(void);
// public: void c_static_sized_dynamic_array<float, 36>::resize(long);
// public: long c_static_sized_dynamic_array<float, 36>::count(void) const;
// public: float & c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::operator[](long);
// public: void c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::set_all(float const &);
// public: void s_static_array<float, 6>::set_all(float const &);
// public: struct XAUDIOCHANNELVOLUMEENTRY * s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::get_elements(void);
// public: static long s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::get_count(void);
// public: struct XAUDIOCHANNELVOLUMEENTRY * s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::get_elements(void);
// public: struct XAUDIOCHANNELVOLUMEENTRY * s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::get_elements(void);
// public: struct XAUDIOVOICEOUTPUTVOLUMEENTRY * s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::get_elements(void);
// public: static long s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::get_count(void);
// public: long c_wrapped_array_no_init<enum e_xaudio_output_speaker>::count(void) const;
// public: enum e_xaudio_output_speaker & c_array_operator_interface<class c_wrapped_array_no_init<enum e_xaudio_output_speaker>, enum e_xaudio_output_speaker>::operator[](long);
// public: float * c_static_sized_dynamic_array<float, 36>::begin(void);
// public: float * c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::begin(void);
// public: float * c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::end(void);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<float, 36> * c_recursive_template_pattern<class c_static_sized_dynamic_array<float, 36> >::get_super_class(void);
// public: static long s_static_array<float, 36>::get_count(void);
// public: enum e_xaudio_output_speaker * c_wrapped_array_no_init<enum e_xaudio_output_speaker>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<enum e_xaudio_output_speaker>, enum e_xaudio_output_speaker>::valid_index(long) const;
// public: class c_wrapped_array_no_init<enum e_xaudio_output_speaker> * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_xaudio_output_speaker> >::get_super_class(void);
// public: float * c_static_sized_dynamic_array<float, 36>::end(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::count(void) const;
// public: float * s_static_array<float, 36>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<enum e_xaudio_output_speaker>, enum e_xaudio_output_speaker>::count(void) const;
// public: class c_static_sized_dynamic_array<float, 36> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<float, 36> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<enum e_xaudio_output_speaker> const * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_xaudio_output_speaker> >::get_super_class(void) const;
// public: void c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: void c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::test(unsigned long) const;
// public: void c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: void c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_sound_xaudio_source_state_bit) const;
// public: void c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::set(enum e_sound_xaudio_source_state_bit, bool);
// public: struct XAUDIOVOICEOUTPUTVOLUMEENTRY & s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::operator[]<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output);
// public: struct XAUDIOCHANNELVOLUMEENTRY & s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::operator[]<long>(long);
// public: struct XAUDIOCHANNELVOLUMEENTRY & s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::operator[]<long>(long);
// public: struct XAUDIOCHANNELVOLUMEENTRY & s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::operator[]<long>(long);
// public: struct real_decibel const & s_static_array<struct real_decibel, 4>::operator[]<long>(long) const;
// public: struct s_platform_sound_player_voice_properties & s_static_array<struct s_platform_sound_player_voice_properties, 16>::operator[]<long>(long);
// public: struct s_xaudio_source_state const & s_static_array<struct s_xaudio_source_state, 196>::operator[]<long>(long) const;
// public: struct s_xaudio_source_state & s_static_array<struct s_xaudio_source_state, 196>::operator[]<long>(long);
// public: struct real_decibel const & s_static_array<struct real_decibel, 4>::operator[]<enum e_sound_speaker>(enum e_sound_speaker) const;
// public: class s_static_array<float, 2> & s_static_array<class s_static_array<float, 2>, 2>::operator[]<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel);
// public: float & s_static_array<float, 2>::operator[]<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel);
// public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<6>(enum e_xaudio_output_speaker (&)[6]);
// public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<2>(enum e_xaudio_output_speaker (&)[2]);
// public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<1>(enum e_xaudio_output_speaker (&)[1]);
// public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<5>(enum e_xaudio_output_speaker (&)[5]);
// public: float & s_static_array<float, 6>::operator[]<enum e_xaudio_output_speaker>(enum e_xaudio_output_speaker);
// void std::fill<float *, float>(float *, float *, float const &);
// public: void c_wrapped_array_no_init<enum e_xaudio_output_speaker>::set_elements(enum e_xaudio_output_speaker *, long);
// public: bool c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(unsigned long);
// public: bool c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(unsigned long);
// public: static bool c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_xaudio_source_state_bit);
// private: static unsigned long c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_xaudio_source_state_bit);
// public: static bool s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::valid<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output);
// public: static bool s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::valid<long>(long);
// public: static bool s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::valid<long>(long);
// public: static bool s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::valid<long>(long);
// public: static bool s_static_array<struct s_platform_sound_player_voice_properties, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_xaudio_source_state, 196>::valid<long>(long);
// public: static bool s_static_array<struct real_decibel, 4>::valid<enum e_sound_speaker>(enum e_sound_speaker);
// public: static bool s_static_array<class s_static_array<float, 2>, 2>::valid<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel);
// public: static bool s_static_array<float, 2>::valid<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel);
// public: static bool s_static_array<float, 6>::valid<enum e_xaudio_output_speaker>(enum e_xaudio_output_speaker);
// void std::_Fill<float *, float>(float *, float *, float const &);
// private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long);

//public: void c_sound_xaudio_xenon_mix_master::set_global_mixes(struct s_sound_surround_mix_definition const *, struct s_sound_surround_mix_definition const *, struct s_sound_global_mix_configuration const *)
//{
//    mangled_ppc("?set_global_mixes@c_sound_xaudio_xenon_mix_master@@QAAXPBUs_sound_surround_mix_definition@@0PBUs_sound_global_mix_configuration@@@Z");
//};

//public: void c_sound_xaudio_xenon_mix_master::set_pause_gain(float)
//{
//    mangled_ppc("?set_pause_gain@c_sound_xaudio_xenon_mix_master@@QAAXM@Z");
//};

//public: void c_sound_xaudio_xenon_mix_master::source_initialize_properties(long, struct s_platform_sound_source_properties const *, struct s_platform_sound_effect_properties const *)
//{
//    mangled_ppc("?source_initialize_properties@c_sound_xaudio_xenon_mix_master@@QAAXJPBUs_platform_sound_source_properties@@PBUs_platform_sound_effect_properties@@@Z");
//};

//public: void c_sound_xaudio_xenon_mix_master::source_update_properties(long, struct s_platform_sound_source_properties const *, struct s_platform_sound_effect_properties const *, bool)
//{
//    mangled_ppc("?source_update_properties@c_sound_xaudio_xenon_mix_master@@QAAXJPBUs_platform_sound_source_properties@@PBUs_platform_sound_effect_properties@@_N@Z");
//};

//public: void c_sound_xaudio_xenon_mix_master::player_voice_update_properties(long, struct s_platform_sound_player_voice_properties const *)
//{
//    mangled_ppc("?player_voice_update_properties@c_sound_xaudio_xenon_mix_master@@QAAXJPBUs_platform_sound_player_voice_properties@@@Z");
//};

//public: struct s_xaudio_source_state const * c_sound_xaudio_xenon_mix_master::get_source_state(long) const
//{
//    mangled_ppc("?get_source_state@c_sound_xaudio_xenon_mix_master@@QBAPBUs_xaudio_source_state@@J@Z");
//};

//public: bool c_sound_xaudio_xenon_mix_master::is_radio_active(void) const
//{
//    mangled_ppc("?is_radio_active@c_sound_xaudio_xenon_mix_master@@QBA_NXZ");
//};

//private: struct s_xaudio_source_state * c_sound_xaudio_xenon_mix_master::get_mutable_source_state(long)
//{
//    mangled_ppc("?get_mutable_source_state@c_sound_xaudio_xenon_mix_master@@AAAPAUs_xaudio_source_state@@J@Z");
//};

//public: void c_sound_xaudio_xenon_mix_master::update_mix(class c_xenon_audio_source_manager *, class c_xenon_audio_voice_manager *, class c_xenon_audio_dsp_manager *)
//{
//    mangled_ppc("?update_mix@c_sound_xaudio_xenon_mix_master@@QAAXPAVc_xenon_audio_source_manager@@PAVc_xenon_audio_voice_manager@@PAVc_xenon_audio_dsp_manager@@@Z");
//};

//private: void c_sound_xaudio_xenon_mix_master::update_voice_center_mix(struct IXAudioVoice *, struct s_sound_center_mix_definition const *)
//{
//    mangled_ppc("?update_voice_center_mix@c_sound_xaudio_xenon_mix_master@@AAAXPAUIXAudioVoice@@PBUs_sound_center_mix_definition@@@Z");
//};

//private: void c_sound_xaudio_xenon_mix_master::update_source_hardware_output(class c_xenon_audio_source_manager *, class c_xenon_audio_voice_manager *, long)
//{
//    mangled_ppc("?update_source_hardware_output@c_sound_xaudio_xenon_mix_master@@AAAXPAVc_xenon_audio_source_manager@@PAVc_xenon_audio_voice_manager@@J@Z");
//};

//public: bool c_platform_source_datum::is_paused(void) const
//{
//    mangled_ppc("?is_paused@c_platform_source_datum@@QBA_NXZ");
//};

//public: c_sound_xaudio_volume_output_builder::c_sound_xaudio_volume_output_builder(struct s_xaudio_platform_output &)
//{
//    mangled_ppc("??0c_sound_xaudio_volume_output_builder@@QAA@AAUs_xaudio_platform_output@@@Z");
//};

//public: struct XAUDIOVOICEOUTPUTVOLUME * c_sound_xaudio_volume_output_builder::get_xaudio_output_volume(void)
//{
//    mangled_ppc("?get_xaudio_output_volume@c_sound_xaudio_volume_output_builder@@QAAPAUXAUDIOVOICEOUTPUTVOLUME@@XZ");
//};

//public: s_xaudio_platform_output::s_xaudio_platform_output(void)
//{
//    mangled_ppc("??0s_xaudio_platform_output@@QAA@XZ");
//};

//public: s_xaudio_voice_mix_state::s_xaudio_voice_mix_state(void)
//{
//    mangled_ppc("??0s_xaudio_voice_mix_state@@QAA@XZ");
//};

//private: void c_sound_xaudio_xenon_mix_master::update_player_voice_hardware_output(class c_xenon_audio_source_manager *, class c_xenon_audio_voice_manager *, long)
//{
//    mangled_ppc("?update_player_voice_hardware_output@c_sound_xaudio_xenon_mix_master@@AAAXPAVc_xenon_audio_source_manager@@PAVc_xenon_audio_voice_manager@@J@Z");
//};

//private: struct s_sound_center_mix_definition const * c_sound_xaudio_xenon_mix_master::get_active_center_mix(void) const
//{
//    mangled_ppc("?get_active_center_mix@c_sound_xaudio_xenon_mix_master@@ABAPBUs_sound_center_mix_definition@@XZ");
//};

//private: struct s_sound_center_mix_definition const * c_sound_xaudio_xenon_mix_master::get_active_radio_center_mix(void) const
//{
//    mangled_ppc("?get_active_radio_center_mix@c_sound_xaudio_xenon_mix_master@@ABAPBUs_sound_center_mix_definition@@XZ");
//};

//private: void c_sound_xaudio_xenon_mix_master::source_get_output(long, long, struct s_xaudio_platform_output *)
//{
//    mangled_ppc("?source_get_output@c_sound_xaudio_xenon_mix_master@@AAAXJJPAUs_xaudio_platform_output@@@Z");
//};

//public: c_sound_speaker_mixer::c_sound_speaker_mixer(struct s_xaudio_source_state const *)
//{
//    mangled_ppc("??0c_sound_speaker_mixer@@QAA@PBUs_xaudio_source_state@@@Z");
//};

//public: void c_sound_speaker_mixer::attenuate_all_speakers(float)
//{
//    mangled_ppc("?attenuate_all_speakers@c_sound_speaker_mixer@@QAAXM@Z");
//};

//public: void c_sound_speaker_mixer::attenuate_front_speakers(float)
//{
//    mangled_ppc("?attenuate_front_speakers@c_sound_speaker_mixer@@QAAXM@Z");
//};

//public: void c_sound_speaker_mixer::attenuate_rear_speakers(float)
//{
//    mangled_ppc("?attenuate_rear_speakers@c_sound_speaker_mixer@@QAAXM@Z");
//};

//public: void c_sound_speaker_mixer::attenuate_center_channel_speakers(float, float, class c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?attenuate_center_channel_speakers@c_sound_speaker_mixer@@QAAXMMV?$c_flags_no_init@W4e_platform_sound_source_bit@@K$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_sound_speaker_mixer::attenuate_lfe_channel(float, class c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?attenuate_lfe_channel@c_sound_speaker_mixer@@QAAXMV?$c_flags_no_init@W4e_platform_sound_source_bit@@K$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_sound_speaker_mixer::attenuate_all_but_lfe_channel(float)
//{
//    mangled_ppc("?attenuate_all_but_lfe_channel@c_sound_speaker_mixer@@QAAXM@Z");
//};

//public: void c_sound_speaker_mixer::set_first_person_weapon_stereo_pan(float, float)
//{
//    mangled_ppc("?set_first_person_weapon_stereo_pan@c_sound_speaker_mixer@@QAAXMM@Z");
//};

//public: void c_sound_speaker_mixer::set_stereo_pan(float, float)
//{
//    mangled_ppc("?set_stereo_pan@c_sound_speaker_mixer@@QAAXMM@Z");
//};

//public: void c_sound_speaker_mixer::set_left_stereo_pan(float, float)
//{
//    mangled_ppc("?set_left_stereo_pan@c_sound_speaker_mixer@@QAAXMM@Z");
//};

//public: void c_sound_speaker_mixer::set_right_stereo_pan(float, float)
//{
//    mangled_ppc("?set_right_stereo_pan@c_sound_speaker_mixer@@QAAXMM@Z");
//};

//public: void c_sound_speaker_mixer::set_speaker_volumes(long, struct s_xaudio_platform_output *)
//{
//    mangled_ppc("?set_speaker_volumes@c_sound_speaker_mixer@@QAAXJPAUs_xaudio_platform_output@@@Z");
//};

//public: float & s_xaudio_platform_output::get_channel_speaker(long, long, enum e_xaudio_output_speaker)
//{
//    mangled_ppc("?get_channel_speaker@s_xaudio_platform_output@@QAAAAMJJW4e_xaudio_output_speaker@@@Z");
//};

//private: void c_sound_speaker_mixer::update_volumes(class c_wrapped_array<enum e_xaudio_output_speaker>, float)
//{
//    mangled_ppc("?update_volumes@c_sound_speaker_mixer@@AAAXV?$c_wrapped_array@W4e_xaudio_output_speaker@@@@M@Z");
//};

//private: void c_sound_speaker_mixer::combine_speaker_output(struct s_xaudio_platform_output *, unsigned long, unsigned long, float, float)
//{
//    mangled_ppc("?combine_speaker_output@c_sound_speaker_mixer@@AAAXPAUs_xaudio_platform_output@@KKMM@Z");
//};

//private: struct real_decibel c_sound_xaudio_xenon_mix_master::get_3d_attenuation(long) const
//{
//    mangled_ppc("?get_3d_attenuation@c_sound_xaudio_xenon_mix_master@@ABA?AUreal_decibel@@J@Z");
//};

//private: struct real_decibel c_sound_xaudio_xenon_mix_master::get_first_person_attenuation(long) const
//{
//    mangled_ppc("?get_first_person_attenuation@c_sound_xaudio_xenon_mix_master@@ABA?AUreal_decibel@@J@Z");
//};

//private: struct real_decibel c_sound_xaudio_xenon_mix_master::get_lfe_folddown_attenuation(long) const
//{
//    mangled_ppc("?get_lfe_folddown_attenuation@c_sound_xaudio_xenon_mix_master@@ABA?AUreal_decibel@@J@Z");
//};

//public: c_enum<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>(enum e_sound_radio_mix_setting)
//{
//    mangled_ppc("??0?$c_enum@W4e_sound_radio_mix_setting@@J$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_sound_radio_mix_setting@@@Z");
//};

//public: bool c_enum_no_init<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_sound_radio_mix_setting) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_sound_radio_mix_setting@@J$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_sound_radio_mix_setting@@@Z");
//};

//public: c_static_sized_dynamic_array<float, 36>::c_static_sized_dynamic_array<float, 36>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@M$0CE@@@QAA@XZ");
//};

//public: void c_static_sized_dynamic_array<float, 36>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@M$0CE@@@QAAXJ@Z");
//};

//public: long c_static_sized_dynamic_array<float, 36>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@M$0CE@@@QBAJXZ");
//};

//public: float & c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@M$0CE@@@M@@QAAAAMJ@Z");
//};

//public: void c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::set_all(float const &)
//{
//    mangled_ppc("?set_all@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@M$0CE@@@M@@QAAXABM@Z");
//};

//public: void s_static_array<float, 6>::set_all(float const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@M$05@@QAAXABM@Z");
//};

//public: struct XAUDIOCHANNELVOLUMEENTRY * s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0CE@@@QAAPAUXAUDIOCHANNELVOLUMEENTRY@@XZ");
//};

//public: static long s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0CE@@@SAJXZ");
//};

//public: struct XAUDIOCHANNELVOLUMEENTRY * s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$05@@QAAPAUXAUDIOCHANNELVOLUMEENTRY@@XZ");
//};

//public: struct XAUDIOCHANNELVOLUMEENTRY * s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0BI@@@QAAPAUXAUDIOCHANNELVOLUMEENTRY@@XZ");
//};

//public: struct XAUDIOVOICEOUTPUTVOLUMEENTRY * s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@UXAUDIOVOICEOUTPUTVOLUMEENTRY@@$06@@QAAPAUXAUDIOVOICEOUTPUTVOLUMEENTRY@@XZ");
//};

//public: static long s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@UXAUDIOVOICEOUTPUTVOLUMEENTRY@@$06@@SAJXZ");
//};

//public: long c_wrapped_array_no_init<enum e_xaudio_output_speaker>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@QBAJXZ");
//};

//public: enum e_xaudio_output_speaker & c_array_operator_interface<class c_wrapped_array_no_init<enum e_xaudio_output_speaker>, enum e_xaudio_output_speaker>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@W4e_xaudio_output_speaker@@@@QAAAAW4e_xaudio_output_speaker@@J@Z");
//};

//public: float * c_static_sized_dynamic_array<float, 36>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@M$0CE@@@QAAPAMXZ");
//};

//public: float * c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@M$0CE@@@M@@QAAPAMXZ");
//};

//public: float * c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::end(void)
//{
//    mangled_ppc("?end@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@M$0CE@@@M@@QAAPAMXZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@M$0CE@@@M@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<float, 36> * c_recursive_template_pattern<class c_static_sized_dynamic_array<float, 36> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@M$0CE@@@@@QAAPAV?$c_static_sized_dynamic_array@M$0CE@@@XZ");
//};

//public: static long s_static_array<float, 36>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@M$0CE@@@SAJXZ");
//};

//public: enum e_xaudio_output_speaker * c_wrapped_array_no_init<enum e_xaudio_output_speaker>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@QAAPAW4e_xaudio_output_speaker@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<enum e_xaudio_output_speaker>, enum e_xaudio_output_speaker>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@W4e_xaudio_output_speaker@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<enum e_xaudio_output_speaker> * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_xaudio_output_speaker> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@@@QAAPAV?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@XZ");
//};

//public: float * c_static_sized_dynamic_array<float, 36>::end(void)
//{
//    mangled_ppc("?end@?$c_static_sized_dynamic_array@M$0CE@@@QAAPAMXZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<float, 36>, float>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@M$0CE@@@M@@QBAJXZ");
//};

//public: float * s_static_array<float, 36>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@M$0CE@@@QAAPAMXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<enum e_xaudio_output_speaker>, enum e_xaudio_output_speaker>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@W4e_xaudio_output_speaker@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<float, 36> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<float, 36> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@M$0CE@@@@@QBAPBV?$c_static_sized_dynamic_array@M$0CE@@@XZ");
//};

//public: class c_wrapped_array_no_init<enum e_xaudio_output_speaker> const * c_recursive_template_pattern<class c_wrapped_array_no_init<enum e_xaudio_output_speaker> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@@@QBAPBV?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@XZ");
//};

//public: void c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_platform_sound_source_bit@@K$0BA@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::test(unsigned long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@QBA_NK@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: void c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_sound_xaudio_source_state_bit@@K$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_sound_xaudio_source_state_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_sound_xaudio_source_state_bit@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_sound_xaudio_source_state_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::set(enum e_sound_xaudio_source_state_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_sound_xaudio_source_state_bit@@K$00Us_default_enum_string_resolver@@@@QAAXW4e_sound_xaudio_source_state_bit@@_N@Z");
//};

//public: struct XAUDIOVOICEOUTPUTVOLUMEENTRY & s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::operator[]<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output)
//{
//    mangled_ppc("??$?AW4e_xenon_audio_source_output@@@?$s_static_array@UXAUDIOVOICEOUTPUTVOLUMEENTRY@@$06@@QAAAAUXAUDIOVOICEOUTPUTVOLUMEENTRY@@W4e_xenon_audio_source_output@@@Z");
//};

//public: struct XAUDIOCHANNELVOLUMEENTRY & s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0CE@@@QAAAAUXAUDIOCHANNELVOLUMEENTRY@@J@Z");
//};

//public: struct XAUDIOCHANNELVOLUMEENTRY & s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$05@@QAAAAUXAUDIOCHANNELVOLUMEENTRY@@J@Z");
//};

//public: struct XAUDIOCHANNELVOLUMEENTRY & s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0BI@@@QAAAAUXAUDIOCHANNELVOLUMEENTRY@@J@Z");
//};

//public: struct real_decibel const & s_static_array<struct real_decibel, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ureal_decibel@@$03@@QBAABUreal_decibel@@J@Z");
//};

//public: struct s_platform_sound_player_voice_properties & s_static_array<struct s_platform_sound_player_voice_properties, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_platform_sound_player_voice_properties@@$0BA@@@QAAAAUs_platform_sound_player_voice_properties@@J@Z");
//};

//public: struct s_xaudio_source_state const & s_static_array<struct s_xaudio_source_state, 196>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_xaudio_source_state@@$0ME@@@QBAABUs_xaudio_source_state@@J@Z");
//};

//public: struct s_xaudio_source_state & s_static_array<struct s_xaudio_source_state, 196>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_xaudio_source_state@@$0ME@@@QAAAAUs_xaudio_source_state@@J@Z");
//};

//public: struct real_decibel const & s_static_array<struct real_decibel, 4>::operator[]<enum e_sound_speaker>(enum e_sound_speaker) const
//{
//    mangled_ppc("??$?AW4e_sound_speaker@@@?$s_static_array@Ureal_decibel@@$03@@QBAABUreal_decibel@@W4e_sound_speaker@@@Z");
//};

//public: class s_static_array<float, 2> & s_static_array<class s_static_array<float, 2>, 2>::operator[]<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel)
//{
//    mangled_ppc("??$?AW4e_xaudio_stereo_channel@@@?$s_static_array@V?$s_static_array@M$01@@$01@@QAAAAV?$s_static_array@M$01@@W4e_xaudio_stereo_channel@@@Z");
//};

//public: float & s_static_array<float, 2>::operator[]<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel)
//{
//    mangled_ppc("??$?AW4e_xaudio_stereo_channel@@@?$s_static_array@M$01@@QAAAAMW4e_xaudio_stereo_channel@@@Z");
//};

//public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<6>(enum e_xaudio_output_speaker (&)[6])
//{
//    mangled_ppc("??$?0$05@?$c_wrapped_array@W4e_xaudio_output_speaker@@@@QAA@AAY05W4e_xaudio_output_speaker@@@Z");
//};

//public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<2>(enum e_xaudio_output_speaker (&)[2])
//{
//    mangled_ppc("??$?0$01@?$c_wrapped_array@W4e_xaudio_output_speaker@@@@QAA@AAY01W4e_xaudio_output_speaker@@@Z");
//};

//public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<1>(enum e_xaudio_output_speaker (&)[1])
//{
//    mangled_ppc("??$?0$00@?$c_wrapped_array@W4e_xaudio_output_speaker@@@@QAA@AAY00W4e_xaudio_output_speaker@@@Z");
//};

//public: c_wrapped_array<enum e_xaudio_output_speaker>::ctor<5>(enum e_xaudio_output_speaker (&)[5])
//{
//    mangled_ppc("??$?0$04@?$c_wrapped_array@W4e_xaudio_output_speaker@@@@QAA@AAY04W4e_xaudio_output_speaker@@@Z");
//};

//public: float & s_static_array<float, 6>::operator[]<enum e_xaudio_output_speaker>(enum e_xaudio_output_speaker)
//{
//    mangled_ppc("??$?AW4e_xaudio_output_speaker@@@?$s_static_array@M$05@@QAAAAMW4e_xaudio_output_speaker@@@Z");
//};

//void std::fill<float *, float>(float *, float *, float const &)
//{
//    mangled_ppc("??$fill@PAMM@std@@YAXPAM0ABM@Z");
//};

//public: void c_wrapped_array_no_init<enum e_xaudio_output_speaker>::set_elements(enum e_xaudio_output_speaker *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@W4e_xaudio_output_speaker@@@@QAAXPAW4e_xaudio_output_speaker@@J@Z");
//};

//public: bool c_flags_no_init<enum e_platform_sound_source_bit, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_platform_sound_source_bit@@K$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(unsigned long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@SA_NK@Z");
//};

//public: bool c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(unsigned long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@CAKK@Z");
//};

//public: static bool c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_xaudio_source_state_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_sound_xaudio_source_state_bit@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_sound_xaudio_source_state_bit@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_sound_xaudio_source_state_bit, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_xaudio_source_state_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_sound_xaudio_source_state_bit@@K$00Us_default_enum_string_resolver@@@@CAKW4e_sound_xaudio_source_state_bit@@@Z");
//};

//public: static bool s_static_array<struct XAUDIOVOICEOUTPUTVOLUMEENTRY, 7>::valid<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output)
//{
//    mangled_ppc("??$valid@W4e_xenon_audio_source_output@@@?$s_static_array@UXAUDIOVOICEOUTPUTVOLUMEENTRY@@$06@@SA_NW4e_xenon_audio_source_output@@@Z");
//};

//public: static bool s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 36>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0CE@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 6>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$05@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct XAUDIOCHANNELVOLUMEENTRY, 24>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@UXAUDIOCHANNELVOLUMEENTRY@@$0BI@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_platform_sound_player_voice_properties, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_platform_sound_player_voice_properties@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_xaudio_source_state, 196>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_xaudio_source_state@@$0ME@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct real_decibel, 4>::valid<enum e_sound_speaker>(enum e_sound_speaker)
//{
//    mangled_ppc("??$valid@W4e_sound_speaker@@@?$s_static_array@Ureal_decibel@@$03@@SA_NW4e_sound_speaker@@@Z");
//};

//public: static bool s_static_array<class s_static_array<float, 2>, 2>::valid<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel)
//{
//    mangled_ppc("??$valid@W4e_xaudio_stereo_channel@@@?$s_static_array@V?$s_static_array@M$01@@$01@@SA_NW4e_xaudio_stereo_channel@@@Z");
//};

//public: static bool s_static_array<float, 2>::valid<enum e_xaudio_stereo_channel>(enum e_xaudio_stereo_channel)
//{
//    mangled_ppc("??$valid@W4e_xaudio_stereo_channel@@@?$s_static_array@M$01@@SA_NW4e_xaudio_stereo_channel@@@Z");
//};

//public: static bool s_static_array<float, 6>::valid<enum e_xaudio_output_speaker>(enum e_xaudio_output_speaker)
//{
//    mangled_ppc("??$valid@W4e_xaudio_output_speaker@@@?$s_static_array@M$05@@SA_NW4e_xaudio_output_speaker@@@Z");
//};

//void std::_Fill<float *, float>(float *, float *, float const &)
//{
//    mangled_ppc("??$_Fill@PAMM@std@@YAXPAM0ABM@Z");
//};

//private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@KK$03Us_default_enum_string_resolver@@@@CAKK@Z");
//};

