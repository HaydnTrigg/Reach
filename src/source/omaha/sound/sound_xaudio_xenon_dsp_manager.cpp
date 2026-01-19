/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long create_surround_to_parallel_mono_fx_mixbin(struct IXAudioSubmixVoice **, class s_static_array<struct IXAudioSubmixVoice *, 6> &, struct IXAudioSubmixVoice *, unsigned char, void *, long);
// public: void c_xenon_audio_dsp_manager::initialize(void);
// public: void c_xenon_audio_dsp_manager::initialize_occlusion(class c_xenon_audio_reverb_manager *);
// public: static struct XAUDIOVOICEFXCHAIN const * c_xenon_audio_dsp_manager::get_per_source_effect_chain(long);
// public: struct XAUDIOVOICEFXCHAIN const * c_xenon_audio_dsp_manager::get_headset_effect_chain(void) const;
// public: struct XAUDIOVOICEFXCHAIN const * c_xenon_audio_dsp_manager::get_remote_voice_mixbin_chain(void) const;
// public: struct IXAudioSubmixVoice * c_xenon_audio_dsp_manager::create_remote_voice_output(long, class c_xenon_audio_output_manager *);
// public: struct IXAudioVoice * c_xenon_audio_dsp_manager::get_global_dsp_effect(enum e_sound_xaudio_dsp_effect);
// public: void c_xenon_audio_dsp_manager::update_obstruction(struct s_sound_lowpass_settings const *);
// void set_lowpass_settings_for_waves_q1(struct IXAudioVoice *, long, struct s_sound_lowpass_settings const *);
// public: void c_xenon_audio_dsp_manager::update_occlusion(struct s_sound_lowpass_settings const *);
// public: void c_xenon_audio_dsp_manager::update_radio_distortion(struct s_sound_look_up_table_distortion_settings const *);
// public: void c_xenon_audio_dsp_manager::update_radio_equalizer(struct s_sound_equalizer_settings const *);
// public: enum e_sound_equalizer_band_type c_enum_no_init<enum e_sound_equalizer_band_type, long, 0, 5, struct s_default_enum_string_resolver>::operator enum e_sound_equalizer_band_type(void) const;
// public: static long s_static_array<struct IXAudioSubmixVoice *, 2>::get_count(void);
// public: long c_static_stack<float, 256>::count(void) const;
// public: static unsigned int c_static_stack<float, 256>::element_size(void);
// public: void c_static_stack<float, 256>::resize(long);
// public: float & c_static_stack<float, 256>::operator[](long);
// public: float * c_static_stack<float, 256>::get_elements(void);
// public: c_static_stack<float, 256>::c_static_stack<float, 256>(void);
// public: bool c_static_stack<float, 256>::valid(void) const;
// public: bool c_static_stack<float, 256>::valid(long) const;
// public: bool c_flags_no_init<enum e_sound_look_up_table_distortion_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_sound_look_up_table_distortion_flags) const;
// public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 6>::operator[]<int>(int);
// public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 6>::operator[]<enum e_sound_xaudio_dsp_effect>(enum e_sound_xaudio_dsp_effect);
// public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 6>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_sound_look_up_table_distortion_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_look_up_table_distortion_flags);
// private: static unsigned long c_flags_no_init<enum e_sound_look_up_table_distortion_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_look_up_table_distortion_flags);
// public: static bool s_static_array<struct IXAudioSubmixVoice *, 6>::valid<int>(int);
// public: static bool s_static_array<struct IXAudioSubmixVoice *, 6>::valid<enum e_sound_xaudio_dsp_effect>(enum e_sound_xaudio_dsp_effect);
// public: static bool s_static_array<struct IXAudioSubmixVoice *, 6>::valid<long>(long);
// public: long IXAudioVoice::SetEffectParam(unsigned char, unsigned char, unsigned char, union XAUDIOFXPARAM const *);

//long create_surround_to_parallel_mono_fx_mixbin(struct IXAudioSubmixVoice **, class s_static_array<struct IXAudioSubmixVoice *, 6> &, struct IXAudioSubmixVoice *, unsigned char, void *, long)
//{
//    mangled_ppc("?create_surround_to_parallel_mono_fx_mixbin@@YAJPAPAUIXAudioSubmixVoice@@AAV?$s_static_array@PAUIXAudioSubmixVoice@@$05@@PAU1@EPAXJ@Z");
//};

//public: void c_xenon_audio_dsp_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_xenon_audio_dsp_manager@@QAAXXZ");
//};

//public: void c_xenon_audio_dsp_manager::initialize_occlusion(class c_xenon_audio_reverb_manager *)
//{
//    mangled_ppc("?initialize_occlusion@c_xenon_audio_dsp_manager@@QAAXPAVc_xenon_audio_reverb_manager@@@Z");
//};

//public: static struct XAUDIOVOICEFXCHAIN const * c_xenon_audio_dsp_manager::get_per_source_effect_chain(long)
//{
//    mangled_ppc("?get_per_source_effect_chain@c_xenon_audio_dsp_manager@@SAPBUXAUDIOVOICEFXCHAIN@@J@Z");
//};

//public: struct XAUDIOVOICEFXCHAIN const * c_xenon_audio_dsp_manager::get_headset_effect_chain(void) const
//{
//    mangled_ppc("?get_headset_effect_chain@c_xenon_audio_dsp_manager@@QBAPBUXAUDIOVOICEFXCHAIN@@XZ");
//};

//public: struct XAUDIOVOICEFXCHAIN const * c_xenon_audio_dsp_manager::get_remote_voice_mixbin_chain(void) const
//{
//    mangled_ppc("?get_remote_voice_mixbin_chain@c_xenon_audio_dsp_manager@@QBAPBUXAUDIOVOICEFXCHAIN@@XZ");
//};

//public: struct IXAudioSubmixVoice * c_xenon_audio_dsp_manager::create_remote_voice_output(long, class c_xenon_audio_output_manager *)
//{
//    mangled_ppc("?create_remote_voice_output@c_xenon_audio_dsp_manager@@QAAPAUIXAudioSubmixVoice@@JPAVc_xenon_audio_output_manager@@@Z");
//};

//public: struct IXAudioVoice * c_xenon_audio_dsp_manager::get_global_dsp_effect(enum e_sound_xaudio_dsp_effect)
//{
//    mangled_ppc("?get_global_dsp_effect@c_xenon_audio_dsp_manager@@QAAPAUIXAudioVoice@@W4e_sound_xaudio_dsp_effect@@@Z");
//};

//public: void c_xenon_audio_dsp_manager::update_obstruction(struct s_sound_lowpass_settings const *)
//{
//    mangled_ppc("?update_obstruction@c_xenon_audio_dsp_manager@@QAAXPBUs_sound_lowpass_settings@@@Z");
//};

//void set_lowpass_settings_for_waves_q1(struct IXAudioVoice *, long, struct s_sound_lowpass_settings const *)
//{
//    mangled_ppc("?set_lowpass_settings_for_waves_q1@@YAXPAUIXAudioVoice@@JPBUs_sound_lowpass_settings@@@Z");
//};

//public: void c_xenon_audio_dsp_manager::update_occlusion(struct s_sound_lowpass_settings const *)
//{
//    mangled_ppc("?update_occlusion@c_xenon_audio_dsp_manager@@QAAXPBUs_sound_lowpass_settings@@@Z");
//};

//public: void c_xenon_audio_dsp_manager::update_radio_distortion(struct s_sound_look_up_table_distortion_settings const *)
//{
//    mangled_ppc("?update_radio_distortion@c_xenon_audio_dsp_manager@@QAAXPBUs_sound_look_up_table_distortion_settings@@@Z");
//};

//public: void c_xenon_audio_dsp_manager::update_radio_equalizer(struct s_sound_equalizer_settings const *)
//{
//    mangled_ppc("?update_radio_equalizer@c_xenon_audio_dsp_manager@@QAAXPBUs_sound_equalizer_settings@@@Z");
//};

//public: enum e_sound_equalizer_band_type c_enum_no_init<enum e_sound_equalizer_band_type, long, 0, 5, struct s_default_enum_string_resolver>::operator enum e_sound_equalizer_band_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_sound_equalizer_band_type@@J$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_sound_equalizer_band_type@@XZ");
//};

//public: static long s_static_array<struct IXAudioSubmixVoice *, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAUIXAudioSubmixVoice@@$01@@SAJXZ");
//};

//public: long c_static_stack<float, 256>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@M$0BAA@@@QBAJXZ");
//};

//public: static unsigned int c_static_stack<float, 256>::element_size(void)
//{
//    mangled_ppc("?element_size@?$c_static_stack@M$0BAA@@@SAIXZ");
//};

//public: void c_static_stack<float, 256>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@M$0BAA@@@QAAXJ@Z");
//};

//public: float & c_static_stack<float, 256>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@M$0BAA@@@QAAAAMJ@Z");
//};

//public: float * c_static_stack<float, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@M$0BAA@@@QAAPAMXZ");
//};

//public: c_static_stack<float, 256>::c_static_stack<float, 256>(void)
//{
//    mangled_ppc("??0?$c_static_stack@M$0BAA@@@QAA@XZ");
//};

//public: bool c_static_stack<float, 256>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@M$0BAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<float, 256>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@M$0BAA@@@QBA_NJ@Z");
//};

//public: bool c_flags_no_init<enum e_sound_look_up_table_distortion_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_sound_look_up_table_distortion_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_sound_look_up_table_distortion_flags@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_sound_look_up_table_distortion_flags@@@Z");
//};

//public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 6>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@PAUIXAudioSubmixVoice@@$05@@QAAAAPAUIXAudioSubmixVoice@@H@Z");
//};

//public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 6>::operator[]<enum e_sound_xaudio_dsp_effect>(enum e_sound_xaudio_dsp_effect)
//{
//    mangled_ppc("??$?AW4e_sound_xaudio_dsp_effect@@@?$s_static_array@PAUIXAudioSubmixVoice@@$05@@QAAAAPAUIXAudioSubmixVoice@@W4e_sound_xaudio_dsp_effect@@@Z");
//};

//public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUIXAudioSubmixVoice@@$05@@QAAAAPAUIXAudioSubmixVoice@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_sound_look_up_table_distortion_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_look_up_table_distortion_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_sound_look_up_table_distortion_flags@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_sound_look_up_table_distortion_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_sound_look_up_table_distortion_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_look_up_table_distortion_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_sound_look_up_table_distortion_flags@@K$00Us_default_enum_string_resolver@@@@CAKW4e_sound_look_up_table_distortion_flags@@@Z");
//};

//public: static bool s_static_array<struct IXAudioSubmixVoice *, 6>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@PAUIXAudioSubmixVoice@@$05@@SA_NH@Z");
//};

//public: static bool s_static_array<struct IXAudioSubmixVoice *, 6>::valid<enum e_sound_xaudio_dsp_effect>(enum e_sound_xaudio_dsp_effect)
//{
//    mangled_ppc("??$valid@W4e_sound_xaudio_dsp_effect@@@?$s_static_array@PAUIXAudioSubmixVoice@@$05@@SA_NW4e_sound_xaudio_dsp_effect@@@Z");
//};

//public: static bool s_static_array<struct IXAudioSubmixVoice *, 6>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUIXAudioSubmixVoice@@$05@@SA_NJ@Z");
//};

//public: long IXAudioVoice::SetEffectParam(unsigned char, unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetEffectParam@IXAudioVoice@@QAAJEEEPBTXAUDIOFXPARAM@@@Z");
//};

