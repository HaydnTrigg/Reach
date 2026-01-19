/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: long c_platform_source_datum::get_state(void) const;
// public: bool c_platform_source_datum::just_finished_transition_chunk(void) const;
// public: void c_platform_source_datum::stop(void);
// public: void c_platform_source_datum::stop_immediately(void);
// public: void c_platform_source_datum::signal_complete(void);
// public: void c_platform_source_datum::queue_sound(struct s_sound_permutation_chunk *);
// public: void c_platform_source_datum::dequeue_sound(struct s_sound_permutation_chunk *);
// public: bool c_platform_source_datum::no_more_packets(void) const;
// public: bool c_platform_source_datum::verify_sounds(struct s_sound_permutation_chunk const *, struct s_sound_permutation_chunk const *) const;
// public: bool c_platform_source_datum::initialize(struct XAUDIOSOURCEVOICEINIT const *, class c_platform_source_packet_controller *, long, long);
// public: long c_platform_source_datum::get_sound_channel_count(void) const;
// public: void c_platform_source_datum::dispose(void);
// public: void c_platform_source_datum::flush(void);
// public: void c_platform_source_datum::initialize_channel(long);
// public: void c_platform_source_datum::pause_channel(void);
// public: void c_platform_source_datum::prepare_for_unpause(void);
// private: static void c_platform_source_datum::set_envelope(float, float);
// public: void c_platform_source_datum::clear_channel(void);
// public: static void c_platform_source_datum::restart_channel(void);
// public: struct s_sound_permutation_chunk * c_platform_source_datum::try_to_get_queued_chunk(long) const;
// public: class c_static_string<256> c_platform_source_datum::dump_voice_state_error(char const *, unsigned long);
// public: void c_platform_source_datum::verify_channel(void);
// public: void c_platform_source_datum::set_initial_sample_offset(long);
// public: bool c_platform_source_datum::update_stopped_status(bool);
// public: void c_platform_source_datum::update_flushed_status(void);
// private: bool c_platform_source_datum::can_queue_packets(void);
// public: void c_platform_source_datum::fill(void);
// public: void c_platform_source_datum::start_for_synch(void);
// private: bool c_platform_source_datum::queue_packet(bool);
// public: void c_platform_source_datum::debug_sound_cache(class c_sound_cache_debugger *);
// public: void c_platform_source_datum::completion_callback(void *, unsigned long);
// private: void c_platform_source_datum::release_sound_data(void);
// private: void c_platform_source_datum::fake_finish_packets_due_to_stop(void);
// private: void c_platform_source_datum::resync_internal_state_due_to_faked_completions(void);
// private: void c_platform_source_datum::flush_xaudio_source_internal(void);
// public: void c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::set(enum c_platform_source_datum::e_platform_source_xenon_bit, bool);
// public: bool c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_platform_source_datum::e_platform_source_xenon_bit);
// public: long IXAudioSourceVoice::FlushPackets(void);
// public: long IXAudioSourceVoice::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// public: long IXAudioSourceVoice::FlushSourceBuffers(void);
// public: long IXAudioSourceVoice::Discontinuity(void);

//public: long c_platform_source_datum::get_state(void) const
//{
//    mangled_ppc("?get_state@c_platform_source_datum@@QBAJXZ");
//};

//public: bool c_platform_source_datum::just_finished_transition_chunk(void) const
//{
//    mangled_ppc("?just_finished_transition_chunk@c_platform_source_datum@@QBA_NXZ");
//};

//public: void c_platform_source_datum::stop(void)
//{
//    mangled_ppc("?stop@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::stop_immediately(void)
//{
//    mangled_ppc("?stop_immediately@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::signal_complete(void)
//{
//    mangled_ppc("?signal_complete@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::queue_sound(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?queue_sound@c_platform_source_datum@@QAAXPAUs_sound_permutation_chunk@@@Z");
//};

//public: void c_platform_source_datum::dequeue_sound(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?dequeue_sound@c_platform_source_datum@@QAAXPAUs_sound_permutation_chunk@@@Z");
//};

//public: bool c_platform_source_datum::no_more_packets(void) const
//{
//    mangled_ppc("?no_more_packets@c_platform_source_datum@@QBA_NXZ");
//};

//public: bool c_platform_source_datum::verify_sounds(struct s_sound_permutation_chunk const *, struct s_sound_permutation_chunk const *) const
//{
//    mangled_ppc("?verify_sounds@c_platform_source_datum@@QBA_NPBUs_sound_permutation_chunk@@0@Z");
//};

//public: bool c_platform_source_datum::initialize(struct XAUDIOSOURCEVOICEINIT const *, class c_platform_source_packet_controller *, long, long)
//{
//    mangled_ppc("?initialize@c_platform_source_datum@@QAA_NPBUXAUDIOSOURCEVOICEINIT@@PAVc_platform_source_packet_controller@@JJ@Z");
//};

//public: long c_platform_source_datum::get_sound_channel_count(void) const
//{
//    mangled_ppc("?get_sound_channel_count@c_platform_source_datum@@QBAJXZ");
//};

//public: void c_platform_source_datum::dispose(void)
//{
//    mangled_ppc("?dispose@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::flush(void)
//{
//    mangled_ppc("?flush@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::initialize_channel(long)
//{
//    mangled_ppc("?initialize_channel@c_platform_source_datum@@QAAXJ@Z");
//};

//public: void c_platform_source_datum::pause_channel(void)
//{
//    mangled_ppc("?pause_channel@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::prepare_for_unpause(void)
//{
//    mangled_ppc("?prepare_for_unpause@c_platform_source_datum@@QAAXXZ");
//};

//private: static void c_platform_source_datum::set_envelope(float, float)
//{
//    mangled_ppc("?set_envelope@c_platform_source_datum@@CAXMM@Z");
//};

//public: void c_platform_source_datum::clear_channel(void)
//{
//    mangled_ppc("?clear_channel@c_platform_source_datum@@QAAXXZ");
//};

//public: static void c_platform_source_datum::restart_channel(void)
//{
//    mangled_ppc("?restart_channel@c_platform_source_datum@@SAXXZ");
//};

//public: struct s_sound_permutation_chunk * c_platform_source_datum::try_to_get_queued_chunk(long) const
//{
//    mangled_ppc("?try_to_get_queued_chunk@c_platform_source_datum@@QBAPAUs_sound_permutation_chunk@@J@Z");
//};

//public: class c_static_string<256> c_platform_source_datum::dump_voice_state_error(char const *, unsigned long)
//{
//    mangled_ppc("?dump_voice_state_error@c_platform_source_datum@@QAA?AV?$c_static_string@$0BAA@@@PBDK@Z");
//};

//public: void c_platform_source_datum::verify_channel(void)
//{
//    mangled_ppc("?verify_channel@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::set_initial_sample_offset(long)
//{
//    mangled_ppc("?set_initial_sample_offset@c_platform_source_datum@@QAAXJ@Z");
//};

//public: bool c_platform_source_datum::update_stopped_status(bool)
//{
//    mangled_ppc("?update_stopped_status@c_platform_source_datum@@QAA_N_N@Z");
//};

//public: void c_platform_source_datum::update_flushed_status(void)
//{
//    mangled_ppc("?update_flushed_status@c_platform_source_datum@@QAAXXZ");
//};

//private: bool c_platform_source_datum::can_queue_packets(void)
//{
//    mangled_ppc("?can_queue_packets@c_platform_source_datum@@AAA_NXZ");
//};

//public: void c_platform_source_datum::fill(void)
//{
//    mangled_ppc("?fill@c_platform_source_datum@@QAAXXZ");
//};

//public: void c_platform_source_datum::start_for_synch(void)
//{
//    mangled_ppc("?start_for_synch@c_platform_source_datum@@QAAXXZ");
//};

//private: bool c_platform_source_datum::queue_packet(bool)
//{
//    mangled_ppc("?queue_packet@c_platform_source_datum@@AAA_N_N@Z");
//};

//public: void c_platform_source_datum::debug_sound_cache(class c_sound_cache_debugger *)
//{
//    mangled_ppc("?debug_sound_cache@c_platform_source_datum@@QAAXPAVc_sound_cache_debugger@@@Z");
//};

//public: void c_platform_source_datum::completion_callback(void *, unsigned long)
//{
//    mangled_ppc("?completion_callback@c_platform_source_datum@@QAAXPAXK@Z");
//};

//private: void c_platform_source_datum::release_sound_data(void)
//{
//    mangled_ppc("?release_sound_data@c_platform_source_datum@@AAAXXZ");
//};

//private: void c_platform_source_datum::fake_finish_packets_due_to_stop(void)
//{
//    mangled_ppc("?fake_finish_packets_due_to_stop@c_platform_source_datum@@AAAXXZ");
//};

//private: void c_platform_source_datum::resync_internal_state_due_to_faked_completions(void)
//{
//    mangled_ppc("?resync_internal_state_due_to_faked_completions@c_platform_source_datum@@AAAXXZ");
//};

//private: void c_platform_source_datum::flush_xaudio_source_internal(void)
//{
//    mangled_ppc("?flush_xaudio_source_internal@c_platform_source_datum@@AAAXXZ");
//};

//public: void c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_platform_source_xenon_bit@c_platform_source_datum@@G$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::set(enum c_platform_source_datum::e_platform_source_xenon_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_platform_source_xenon_bit@c_platform_source_datum@@G$0L@Us_default_enum_string_resolver@@@@QAAXW4e_platform_source_xenon_bit@c_platform_source_datum@@_N@Z");
//};

//public: bool c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_platform_source_xenon_bit@c_platform_source_datum@@G$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_platform_source_xenon_bit@c_platform_source_datum@@G$0L@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum c_platform_source_datum::e_platform_source_xenon_bit, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_platform_source_datum::e_platform_source_xenon_bit)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_platform_source_xenon_bit@c_platform_source_datum@@G$0L@Us_default_enum_string_resolver@@@@CAGW4e_platform_source_xenon_bit@c_platform_source_datum@@@Z");
//};

//public: long IXAudioSourceVoice::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@IXAudioSourceVoice@@QAAJXZ");
//};

//public: long IXAudioSourceVoice::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@IXAudioSourceVoice@@QAAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//public: long IXAudioSourceVoice::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@IXAudioSourceVoice@@QAAJXZ");
//};

//public: long IXAudioSourceVoice::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@IXAudioSourceVoice@@QAAJXZ");
//};

