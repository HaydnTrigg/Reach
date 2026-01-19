/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_xenon_audio_voice_manager::initialize(class c_xenon_audio_source_manager *, float);
// public: void c_xenon_audio_voice_manager::dispose(void);
// public: void c_xenon_audio_voice_manager::update_listeners(struct s_platform_sound_listener const *, class c_flags<long, unsigned long, 4, struct s_default_enum_string_resolver>);
// void copy_to_xaudio_vector(struct _D3DVECTOR &, union vector3d const &);
// void copy_to_xaudio_position(struct _D3DVECTOR &, union real_point3d const &);
// public: static void c_xenon_audio_voice_manager::update_voice_status(struct s_platform_sound_status *);
// public: static bool c_xenon_audio_voice_manager::voice_is_idle_async(long);
// public: static void c_xenon_audio_voice_manager::voice_initialize_properties(long);
// public: void c_xenon_audio_voice_manager::voice_update_properties(long, struct s_platform_sound_voice_update_definition const *, float);
// public: void c_xenon_audio_voice_manager::voice_get_platform_output(long, struct s_xaudio_voice_mix_state const *, struct s_xaudio_voice_setup const *, struct s_xaudio_platform_output *, float *);
// public: void c_big_flags_typed_no_init<long, 212>::set_all(void);
// public: bool c_flags_no_init<long, unsigned long, 4, struct s_default_enum_string_resolver>::test(long) const;
// public: struct X3DAUDIO_LISTENER & s_static_array<struct X3DAUDIO_LISTENER, 4>::operator[]<long>(long);
// public: struct X3DAUDIO_LISTENER & s_static_array<struct X3DAUDIO_LISTENER, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index);
// public: class c_xaudio_voice_speaker_datum & s_static_array<class c_xaudio_voice_speaker_datum, 212>::operator[]<long>(long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<struct X3DAUDIO_LISTENER, 4>::valid<long>(long);
// public: static bool s_static_array<struct X3DAUDIO_LISTENER, 4>::valid<enum e_output_user_index>(enum e_output_user_index);
// public: static bool s_static_array<class c_xaudio_voice_speaker_datum, 212>::valid<long>(long);

//public: void c_xenon_audio_voice_manager::initialize(class c_xenon_audio_source_manager *, float)
//{
//    mangled_ppc("?initialize@c_xenon_audio_voice_manager@@QAAXPAVc_xenon_audio_source_manager@@M@Z");
//};

//public: void c_xenon_audio_voice_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_xenon_audio_voice_manager@@QAAXXZ");
//};

//public: void c_xenon_audio_voice_manager::update_listeners(struct s_platform_sound_listener const *, class c_flags<long, unsigned long, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?update_listeners@c_xenon_audio_voice_manager@@QAAXPBUs_platform_sound_listener@@V?$c_flags@JK$03Us_default_enum_string_resolver@@@@@Z");
//};

//void copy_to_xaudio_vector(struct _D3DVECTOR &, union vector3d const &)
//{
//    mangled_ppc("?copy_to_xaudio_vector@@YAXAAU_D3DVECTOR@@ABTvector3d@@@Z");
//};

//void copy_to_xaudio_position(struct _D3DVECTOR &, union real_point3d const &)
//{
//    mangled_ppc("?copy_to_xaudio_position@@YAXAAU_D3DVECTOR@@ABTreal_point3d@@@Z");
//};

//public: static void c_xenon_audio_voice_manager::update_voice_status(struct s_platform_sound_status *)
//{
//    mangled_ppc("?update_voice_status@c_xenon_audio_voice_manager@@SAXPAUs_platform_sound_status@@@Z");
//};

//public: static bool c_xenon_audio_voice_manager::voice_is_idle_async(long)
//{
//    mangled_ppc("?voice_is_idle_async@c_xenon_audio_voice_manager@@SA_NJ@Z");
//};

//public: static void c_xenon_audio_voice_manager::voice_initialize_properties(long)
//{
//    mangled_ppc("?voice_initialize_properties@c_xenon_audio_voice_manager@@SAXJ@Z");
//};

//public: void c_xenon_audio_voice_manager::voice_update_properties(long, struct s_platform_sound_voice_update_definition const *, float)
//{
//    mangled_ppc("?voice_update_properties@c_xenon_audio_voice_manager@@QAAXJPBUs_platform_sound_voice_update_definition@@M@Z");
//};

//public: void c_xenon_audio_voice_manager::voice_get_platform_output(long, struct s_xaudio_voice_mix_state const *, struct s_xaudio_voice_setup const *, struct s_xaudio_platform_output *, float *)
//{
//    mangled_ppc("?voice_get_platform_output@c_xenon_audio_voice_manager@@QAAXJPBUs_xaudio_voice_mix_state@@PBUs_xaudio_voice_setup@@PAUs_xaudio_platform_output@@PAM@Z");
//};

//public: void c_big_flags_typed_no_init<long, 212>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_big_flags_typed_no_init@J$0NE@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 4, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JK$03Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: struct X3DAUDIO_LISTENER & s_static_array<struct X3DAUDIO_LISTENER, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@UX3DAUDIO_LISTENER@@$03@@QAAAAUX3DAUDIO_LISTENER@@J@Z");
//};

//public: struct X3DAUDIO_LISTENER & s_static_array<struct X3DAUDIO_LISTENER, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$?AW4e_output_user_index@@@?$s_static_array@UX3DAUDIO_LISTENER@@$03@@QAAAAUX3DAUDIO_LISTENER@@W4e_output_user_index@@@Z");
//};

//public: class c_xaudio_voice_speaker_datum & s_static_array<class c_xaudio_voice_speaker_datum, 212>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_xaudio_voice_speaker_datum@@$0NE@@@QAAAAVc_xaudio_voice_speaker_datum@@J@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JK$03Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//public: static bool s_static_array<struct X3DAUDIO_LISTENER, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@UX3DAUDIO_LISTENER@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct X3DAUDIO_LISTENER, 4>::valid<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$valid@W4e_output_user_index@@@?$s_static_array@UX3DAUDIO_LISTENER@@$03@@SA_NW4e_output_user_index@@@Z");
//};

//public: static bool s_static_array<class c_xaudio_voice_speaker_datum, 212>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_xaudio_voice_speaker_datum@@$0NE@@@SA_NJ@Z");
//};

