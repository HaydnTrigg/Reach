/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: virtual struct s_voice_repeater_configuration const * __cdecl c_generic_network_session_parameter<struct s_voice_repeater_configuration>::get(void) const'::`8'::x_event_category_index; // "?x_event_category_index@?7??get@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UBAPBUs_voice_repeater_configuration@@XZ@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_voice_repeater_configuration>::set(struct s_voice_repeater_configuration const *)'::`30'::x_event_category_index; // "?x_event_category_index@?BO@??set@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UAA_NPBUs_voice_repeater_configuration@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_voice_repeater_configuration>::set(struct s_voice_repeater_configuration const *)'::`15'::x_event_category_index; // "?x_event_category_index@?P@??set@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UAA_NPBUs_voice_repeater_configuration@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_voice_repeater_configuration>::request_change(struct s_voice_repeater_configuration const *)'::`34'::x_event_category_index; // "?x_event_category_index@?CC@??request_change@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UAA_NPBUs_voice_repeater_configuration@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_voice_repeater_configuration>::request_change(struct s_voice_repeater_configuration const *)'::`15'::x_event_category_index; // "?x_event_category_index@?P@??request_change@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UAA_NPBUs_voice_repeater_configuration@@@Z@4JC"

// public: c_network_session_parameter_voice::c_network_session_parameter_voice(void);
// public: c_generic_network_session_parameter<struct s_voice_repeater_configuration>::c_generic_network_session_parameter<struct s_voice_repeater_configuration>(void);
// public: virtual void c_network_session_parameter_voice::notify_clear(void);
// private: virtual void c_network_session_parameter_voice::get_update_payload(long, void *) const;
// private: virtual long c_network_session_parameter_voice::get_update_payload_size(void) const;
// private: virtual bool c_network_session_parameter_voice::handle_update_payload(void const *);
// private: virtual void c_network_session_parameter_voice::get_change_request_payload(long, long, void *) const;
// private: virtual long c_network_session_parameter_voice::get_change_request_payload_size(void) const;
// private: virtual bool c_network_session_parameter_voice::handle_change_request_payload(void const *);
// private: virtual void c_network_session_parameter_voice::validate_buffer(long, void const *, void *, void *);
// private: void c_network_session_parameter_voice::clear_internal(void);
// void voice_repeater_encode_update_function(class c_bitstream *, void const *, long);
// bool voice_repeater_decode_update_function(class c_bitstream *, void *, long);
// void voice_repeater_encode_change_request_function(class c_bitstream *, void const *, long);
// bool voice_repeater_decode_change_request_function(class c_bitstream *, void *, long);
// public: void s_voice_repeater_configuration::clear(void);
// public: c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>(void);
// protected: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::notify_reset_peer_state(long);
// protected: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::notify_clear(void);
// protected: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::notify_transition_state_to_become_host(void);
// private: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_update_payload(long, void *) const;
// private: virtual long c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_update_payload_size(void) const;
// private: virtual bool c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::handle_update_payload(void const *);
// private: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_change_request_payload(long, long, void *) const;
// private: virtual long c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_change_request_payload_size(void) const;
// private: virtual bool c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::handle_change_request_payload(void const *);
// public: virtual struct s_voice_repeater_configuration const * c_generic_network_session_parameter<struct s_voice_repeater_configuration>::get(void) const;
// public: virtual struct s_voice_repeater_configuration const * c_generic_network_session_parameter<struct s_voice_repeater_configuration>::get_request(void) const;
// public: virtual bool c_generic_network_session_parameter<struct s_voice_repeater_configuration>::set(struct s_voice_repeater_configuration const *);
// public: virtual bool c_generic_network_session_parameter<struct s_voice_repeater_configuration>::request_change(struct s_voice_repeater_configuration const *);
// public: struct s_peer_voice_repeater_configuration const & s_static_array<struct s_peer_voice_repeater_configuration, 16>::operator[]<long>(long) const;
// public: struct s_peer_voice_repeater_configuration & s_static_array<struct s_peer_voice_repeater_configuration, 16>::operator[]<long>(long);
// protected: void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::validate(void);
// protected: void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::validate_request(void);
// private: void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::clear_internal(void);
// public: static bool s_static_array<struct s_peer_voice_repeater_configuration, 16>::valid<long>(long);

//public: c_network_session_parameter_voice::c_network_session_parameter_voice(void)
//{
//    mangled_ppc("??0c_network_session_parameter_voice@@QAA@XZ");
//};

//public: c_generic_network_session_parameter<struct s_voice_repeater_configuration>::c_generic_network_session_parameter<struct s_voice_repeater_configuration>(void)
//{
//    mangled_ppc("??0?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@QAA@XZ");
//};

//public: virtual void c_network_session_parameter_voice::notify_clear(void)
//{
//    mangled_ppc("?notify_clear@c_network_session_parameter_voice@@UAAXXZ");
//};

//private: virtual void c_network_session_parameter_voice::get_update_payload(long, void *) const
//{
//    mangled_ppc("?get_update_payload@c_network_session_parameter_voice@@EBAXJPAX@Z");
//};

//private: virtual long c_network_session_parameter_voice::get_update_payload_size(void) const
//{
//    mangled_ppc("?get_update_payload_size@c_network_session_parameter_voice@@EBAJXZ");
//};

//private: virtual bool c_network_session_parameter_voice::handle_update_payload(void const *)
//{
//    mangled_ppc("?handle_update_payload@c_network_session_parameter_voice@@EAA_NPBX@Z");
//};

//private: virtual void c_network_session_parameter_voice::get_change_request_payload(long, long, void *) const
//{
//    mangled_ppc("?get_change_request_payload@c_network_session_parameter_voice@@EBAXJJPAX@Z");
//};

//private: virtual long c_network_session_parameter_voice::get_change_request_payload_size(void) const
//{
//    mangled_ppc("?get_change_request_payload_size@c_network_session_parameter_voice@@EBAJXZ");
//};

//private: virtual bool c_network_session_parameter_voice::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@c_network_session_parameter_voice@@EAA_NPBX@Z");
//};

//private: virtual void c_network_session_parameter_voice::validate_buffer(long, void const *, void *, void *)
//{
//    mangled_ppc("?validate_buffer@c_network_session_parameter_voice@@EAAXJPBXPAX1@Z");
//};

//private: void c_network_session_parameter_voice::clear_internal(void)
//{
//    mangled_ppc("?clear_internal@c_network_session_parameter_voice@@AAAXXZ");
//};

//void voice_repeater_encode_update_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?voice_repeater_encode_update_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool voice_repeater_decode_update_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?voice_repeater_decode_update_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void voice_repeater_encode_change_request_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?voice_repeater_encode_change_request_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool voice_repeater_decode_change_request_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?voice_repeater_decode_change_request_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: void s_voice_repeater_configuration::clear(void)
//{
//    mangled_ppc("?clear@s_voice_repeater_configuration@@QAAXXZ");
//};

//public: c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>(void)
//{
//    mangled_ppc("??0?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@QAA@XZ");
//};

//protected: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::notify_reset_peer_state(long)
//{
//    mangled_ppc("?notify_reset_peer_state@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@MAAXJ@Z");
//};

//protected: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::notify_clear(void)
//{
//    mangled_ppc("?notify_clear@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@MAAXXZ");
//};

//protected: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::notify_transition_state_to_become_host(void)
//{
//    mangled_ppc("?notify_transition_state_to_become_host@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@MAAXXZ");
//};

//private: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_update_payload(long, void *) const
//{
//    mangled_ppc("?get_update_payload@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@EBAXJPAX@Z");
//};

//private: virtual long c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_update_payload_size(void) const
//{
//    mangled_ppc("?get_update_payload_size@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@EBAJXZ");
//};

//private: virtual bool c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::handle_update_payload(void const *)
//{
//    mangled_ppc("?handle_update_payload@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@EAA_NPBX@Z");
//};

//private: virtual void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_change_request_payload(long, long, void *) const
//{
//    mangled_ppc("?get_change_request_payload@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@EBAXJJPAX@Z");
//};

//private: virtual long c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::get_change_request_payload_size(void) const
//{
//    mangled_ppc("?get_change_request_payload_size@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@EBAJXZ");
//};

//private: virtual bool c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@EAA_NPBX@Z");
//};

//public: virtual struct s_voice_repeater_configuration const * c_generic_network_session_parameter<struct s_voice_repeater_configuration>::get(void) const
//{
//    mangled_ppc("?get@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UBAPBUs_voice_repeater_configuration@@XZ");
//};

//public: virtual struct s_voice_repeater_configuration const * c_generic_network_session_parameter<struct s_voice_repeater_configuration>::get_request(void) const
//{
//    mangled_ppc("?get_request@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UBAPBUs_voice_repeater_configuration@@XZ");
//};

//public: virtual bool c_generic_network_session_parameter<struct s_voice_repeater_configuration>::set(struct s_voice_repeater_configuration const *)
//{
//    mangled_ppc("?set@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UAA_NPBUs_voice_repeater_configuration@@@Z");
//};

//public: virtual bool c_generic_network_session_parameter<struct s_voice_repeater_configuration>::request_change(struct s_voice_repeater_configuration const *)
//{
//    mangled_ppc("?request_change@?$c_generic_network_session_parameter@Us_voice_repeater_configuration@@@@UAA_NPBUs_voice_repeater_configuration@@@Z");
//};

//public: struct s_peer_voice_repeater_configuration const & s_static_array<struct s_peer_voice_repeater_configuration, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_peer_voice_repeater_configuration@@$0BA@@@QBAABUs_peer_voice_repeater_configuration@@J@Z");
//};

//public: struct s_peer_voice_repeater_configuration & s_static_array<struct s_peer_voice_repeater_configuration, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_peer_voice_repeater_configuration@@$0BA@@@QAAAAUs_peer_voice_repeater_configuration@@J@Z");
//};

//protected: void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::validate(void)
//{
//    mangled_ppc("?validate@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@IAAXXZ");
//};

//protected: void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::validate_request(void)
//{
//    mangled_ppc("?validate_request@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@IAAXXZ");
//};

//private: void c_generic_network_session_parameter_data<struct s_voice_repeater_configuration>::clear_internal(void)
//{
//    mangled_ppc("?clear_internal@?$c_generic_network_session_parameter_data@Us_voice_repeater_configuration@@@@AAAXXZ");
//};

//public: static bool s_static_array<struct s_peer_voice_repeater_configuration, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_peer_voice_repeater_configuration@@$0BA@@@SA_NJ@Z");
//};

