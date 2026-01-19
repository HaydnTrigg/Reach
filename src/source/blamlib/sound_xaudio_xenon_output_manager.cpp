/* ---------- headers */

#include "blamlib\sound_xaudio_xenon_output_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct XAUDIOVOICEOUTPUTENTRY make_xaudio_voice_output_entry(struct IXAudioVoice *, struct XAUDIOCHANNELMAP *);
// public: void c_xenon_audio_output_manager::initialize(class c_xenon_audio_reverb_manager *, class c_xenon_audio_dsp_manager *);
// public: class c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY> c_xenon_audio_output_manager::get_source_output(enum e_sound_channel_type);
// public: struct XAUDIOVOICEOUTPUTENTRY * s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::get_elements(void);
// public: static long s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::get_count(void);
// public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 2>::operator[]<int>(int);
// public: class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7> & s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::operator[]<long>(long);
// public: struct XAUDIOVOICEOUTPUTENTRY & s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::operator[]<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output);
// public: class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7> & s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::operator[]<enum e_sound_channel_type>(enum e_sound_channel_type);
// class c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY> make_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY>(struct XAUDIOVOICEOUTPUTENTRY *, long);
// public: c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY>::c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY>(struct XAUDIOVOICEOUTPUTENTRY *, long);
// public: void c_wrapped_array_no_init<struct XAUDIOVOICEOUTPUTENTRY>::set_elements(struct XAUDIOVOICEOUTPUTENTRY *, long);
// public: static bool s_static_array<struct IXAudioSubmixVoice *, 2>::valid<int>(int);
// public: static bool s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::valid<long>(long);
// public: static bool s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::valid<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output);
// public: static bool s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::valid<enum e_sound_channel_type>(enum e_sound_channel_type);

//struct XAUDIOVOICEOUTPUTENTRY make_xaudio_voice_output_entry(struct IXAudioVoice *, struct XAUDIOCHANNELMAP *)
//{
//    mangled_ppc("?make_xaudio_voice_output_entry@@YA?AUXAUDIOVOICEOUTPUTENTRY@@PAUIXAudioVoice@@PAUXAUDIOCHANNELMAP@@@Z");
//};

//public: void c_xenon_audio_output_manager::initialize(class c_xenon_audio_reverb_manager *, class c_xenon_audio_dsp_manager *)
//{
//    mangled_ppc("?initialize@c_xenon_audio_output_manager@@QAAXPAVc_xenon_audio_reverb_manager@@PAVc_xenon_audio_dsp_manager@@@Z");
//};

//public: class c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY> c_xenon_audio_output_manager::get_source_output(enum e_sound_channel_type)
//{
//    mangled_ppc("?get_source_output@c_xenon_audio_output_manager@@QAA?AV?$c_wrapped_array@UXAUDIOVOICEOUTPUTENTRY@@@@W4e_sound_channel_type@@@Z");
//};

//public: struct XAUDIOVOICEOUTPUTENTRY * s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@QAAPAUXAUDIOVOICEOUTPUTENTRY@@XZ");
//};

//public: static long s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@SAJXZ");
//};

//public: struct IXAudioSubmixVoice *& s_static_array<struct IXAudioSubmixVoice *, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@PAUIXAudioSubmixVoice@@$01@@QAAAAPAUIXAudioSubmixVoice@@H@Z");
//};

//public: class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7> & s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@$04@@QAAAAV?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@J@Z");
//};

//public: struct XAUDIOVOICEOUTPUTENTRY & s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::operator[]<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output)
//{
//    mangled_ppc("??$?AW4e_xenon_audio_source_output@@@?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@QAAAAUXAUDIOVOICEOUTPUTENTRY@@W4e_xenon_audio_source_output@@@Z");
//};

//public: class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7> & s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::operator[]<enum e_sound_channel_type>(enum e_sound_channel_type)
//{
//    mangled_ppc("??$?AW4e_sound_channel_type@@@?$s_static_array@V?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@$04@@QAAAAV?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@W4e_sound_channel_type@@@Z");
//};

//class c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY> make_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY>(struct XAUDIOVOICEOUTPUTENTRY *, long)
//{
//    mangled_ppc("??$make_wrapped_array@UXAUDIOVOICEOUTPUTENTRY@@@@YA?AV?$c_wrapped_array@UXAUDIOVOICEOUTPUTENTRY@@@@PAUXAUDIOVOICEOUTPUTENTRY@@J@Z");
//};

//public: c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY>::c_wrapped_array<struct XAUDIOVOICEOUTPUTENTRY>(struct XAUDIOVOICEOUTPUTENTRY *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@UXAUDIOVOICEOUTPUTENTRY@@@@QAA@PAUXAUDIOVOICEOUTPUTENTRY@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct XAUDIOVOICEOUTPUTENTRY>::set_elements(struct XAUDIOVOICEOUTPUTENTRY *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@UXAUDIOVOICEOUTPUTENTRY@@@@QAAXPAUXAUDIOVOICEOUTPUTENTRY@@J@Z");
//};

//public: static bool s_static_array<struct IXAudioSubmixVoice *, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@PAUIXAudioSubmixVoice@@$01@@SA_NH@Z");
//};

//public: static bool s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@$04@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>::valid<enum e_xenon_audio_source_output>(enum e_xenon_audio_source_output)
//{
//    mangled_ppc("??$valid@W4e_xenon_audio_source_output@@@?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@SA_NW4e_xenon_audio_source_output@@@Z");
//};

//public: static bool s_static_array<class s_static_array<struct XAUDIOVOICEOUTPUTENTRY, 7>, 5>::valid<enum e_sound_channel_type>(enum e_sound_channel_type)
//{
//    mangled_ppc("??$valid@W4e_sound_channel_type@@@?$s_static_array@V?$s_static_array@UXAUDIOVOICEOUTPUTENTRY@@$06@@$04@@SA_NW4e_sound_channel_type@@@Z");
//};

