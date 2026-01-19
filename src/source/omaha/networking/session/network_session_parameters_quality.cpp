/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: virtual struct s_network_quality_live_for_all_peers const * __cdecl c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::get(void) const'::`8'::x_event_category_index; // "?x_event_category_index@?7??get@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UBAPBUs_network_quality_live_for_all_peers@@XZ@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::set(struct s_network_quality_live_for_all_peers const *)'::`30'::x_event_category_index; // "?x_event_category_index@?BO@??set@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UAA_NPBUs_network_quality_live_for_all_peers@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::set(struct s_network_quality_live_for_all_peers const *)'::`15'::x_event_category_index; // "?x_event_category_index@?P@??set@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UAA_NPBUs_network_quality_live_for_all_peers@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::request_change(struct s_network_quality_live_for_all_peers const *)'::`34'::x_event_category_index; // "?x_event_category_index@?CC@??request_change@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UAA_NPBUs_network_quality_live_for_all_peers@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::request_change(struct s_network_quality_live_for_all_peers const *)'::`15'::x_event_category_index; // "?x_event_category_index@?P@??request_change@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UAA_NPBUs_network_quality_live_for_all_peers@@@Z@4JC"

// public: c_network_session_parameter_live_quality::c_network_session_parameter_live_quality(void);
// public: c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>(void);
// public: virtual void c_network_session_parameter_live_quality::notify_clear(void);
// private: virtual void c_network_session_parameter_live_quality::get_change_request_payload(long, long, void *) const;
// private: virtual long c_network_session_parameter_live_quality::get_change_request_payload_size(void) const;
// private: virtual bool c_network_session_parameter_live_quality::handle_change_request_payload(void const *);
// private: virtual void c_network_session_parameter_live_quality::validate_buffer(long, void const *, void *, void *);
// private: void c_network_session_parameter_live_quality::clear_internal(void);
// void network_quality_encode_update_function(class c_bitstream *, void const *, long);
// bool network_quality_decode_update_function(class c_bitstream *, void *, long);
// bool network_quality_compare_update_function(void *, void *, long);
// void network_quality_encode_change_request_function(class c_bitstream *, void const *, long);
// bool network_quality_decode_change_request_function(class c_bitstream *, void *, long);
// bool network_quality_compare_change_request_function(void *, void *, long);
// void session_parameter_network_quality_request_change(class c_network_session_parameter_live_quality *, struct s_network_quality_live const *, long);
// public: void s_network_quality_live_for_all_peers::clear(void);
// void scoreboard_quality_encode_function(class c_bitstream *, void const *, long);
// bool scoreboard_quality_decode_function(class c_bitstream *, void *, long);
// bool scoreboard_quality_compare_function(void *, void *, long);
// public: void s_network_session_parameter_scoreboard_quality::initialize(void);
// public: c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>(void);
// protected: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::notify_reset_peer_state(long);
// protected: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::notify_clear(void);
// protected: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::notify_transition_state_to_become_host(void);
// private: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_update_payload(long, void *) const;
// private: virtual long c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_update_payload_size(void) const;
// private: virtual bool c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::handle_update_payload(void const *);
// private: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_change_request_payload(long, long, void *) const;
// private: virtual long c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_change_request_payload_size(void) const;
// private: virtual bool c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::handle_change_request_payload(void const *);
// public: virtual struct s_network_quality_live_for_all_peers const * c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::get(void) const;
// public: virtual struct s_network_quality_live_for_all_peers const * c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::get_request(void) const;
// public: virtual bool c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::set(struct s_network_quality_live_for_all_peers const *);
// public: virtual bool c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::request_change(struct s_network_quality_live_for_all_peers const *);
// public: struct s_network_quality_live const & s_static_array<struct s_network_quality_live, 16>::operator[]<long>(long) const;
// public: struct s_network_quality_live & s_static_array<struct s_network_quality_live, 16>::operator[]<long>(long);
// protected: void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::validate(void);
// protected: void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::validate_request(void);
// private: void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::clear_internal(void);
// public: static bool s_static_array<struct s_network_quality_live, 16>::valid<long>(long);

//public: c_network_session_parameter_live_quality::c_network_session_parameter_live_quality(void)
//{
//    mangled_ppc("??0c_network_session_parameter_live_quality@@QAA@XZ");
//};

//public: c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>(void)
//{
//    mangled_ppc("??0?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@QAA@XZ");
//};

//public: virtual void c_network_session_parameter_live_quality::notify_clear(void)
//{
//    mangled_ppc("?notify_clear@c_network_session_parameter_live_quality@@UAAXXZ");
//};

//private: virtual void c_network_session_parameter_live_quality::get_change_request_payload(long, long, void *) const
//{
//    mangled_ppc("?get_change_request_payload@c_network_session_parameter_live_quality@@EBAXJJPAX@Z");
//};

//private: virtual long c_network_session_parameter_live_quality::get_change_request_payload_size(void) const
//{
//    mangled_ppc("?get_change_request_payload_size@c_network_session_parameter_live_quality@@EBAJXZ");
//};

//private: virtual bool c_network_session_parameter_live_quality::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@c_network_session_parameter_live_quality@@EAA_NPBX@Z");
//};

//private: virtual void c_network_session_parameter_live_quality::validate_buffer(long, void const *, void *, void *)
//{
//    mangled_ppc("?validate_buffer@c_network_session_parameter_live_quality@@EAAXJPBXPAX1@Z");
//};

//private: void c_network_session_parameter_live_quality::clear_internal(void)
//{
//    mangled_ppc("?clear_internal@c_network_session_parameter_live_quality@@AAAXXZ");
//};

//void network_quality_encode_update_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?network_quality_encode_update_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool network_quality_decode_update_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?network_quality_decode_update_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//bool network_quality_compare_update_function(void *, void *, long)
//{
//    mangled_ppc("?network_quality_compare_update_function@@YA_NPAX0J@Z");
//};

//void network_quality_encode_change_request_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?network_quality_encode_change_request_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool network_quality_decode_change_request_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?network_quality_decode_change_request_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//bool network_quality_compare_change_request_function(void *, void *, long)
//{
//    mangled_ppc("?network_quality_compare_change_request_function@@YA_NPAX0J@Z");
//};

//void session_parameter_network_quality_request_change(class c_network_session_parameter_live_quality *, struct s_network_quality_live const *, long)
//{
//    mangled_ppc("?session_parameter_network_quality_request_change@@YAXPAVc_network_session_parameter_live_quality@@PBUs_network_quality_live@@J@Z");
//};

//public: void s_network_quality_live_for_all_peers::clear(void)
//{
//    mangled_ppc("?clear@s_network_quality_live_for_all_peers@@QAAXXZ");
//};

//void scoreboard_quality_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?scoreboard_quality_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool scoreboard_quality_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?scoreboard_quality_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//bool scoreboard_quality_compare_function(void *, void *, long)
//{
//    mangled_ppc("?scoreboard_quality_compare_function@@YA_NPAX0J@Z");
//};

//public: void s_network_session_parameter_scoreboard_quality::initialize(void)
//{
//    mangled_ppc("?initialize@s_network_session_parameter_scoreboard_quality@@QAAXXZ");
//};

//public: c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>(void)
//{
//    mangled_ppc("??0?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@QAA@XZ");
//};

//protected: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::notify_reset_peer_state(long)
//{
//    mangled_ppc("?notify_reset_peer_state@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@MAAXJ@Z");
//};

//protected: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::notify_clear(void)
//{
//    mangled_ppc("?notify_clear@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@MAAXXZ");
//};

//protected: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::notify_transition_state_to_become_host(void)
//{
//    mangled_ppc("?notify_transition_state_to_become_host@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@MAAXXZ");
//};

//private: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_update_payload(long, void *) const
//{
//    mangled_ppc("?get_update_payload@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@EBAXJPAX@Z");
//};

//private: virtual long c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_update_payload_size(void) const
//{
//    mangled_ppc("?get_update_payload_size@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@EBAJXZ");
//};

//private: virtual bool c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::handle_update_payload(void const *)
//{
//    mangled_ppc("?handle_update_payload@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@EAA_NPBX@Z");
//};

//private: virtual void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_change_request_payload(long, long, void *) const
//{
//    mangled_ppc("?get_change_request_payload@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@EBAXJJPAX@Z");
//};

//private: virtual long c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::get_change_request_payload_size(void) const
//{
//    mangled_ppc("?get_change_request_payload_size@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@EBAJXZ");
//};

//private: virtual bool c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@EAA_NPBX@Z");
//};

//public: virtual struct s_network_quality_live_for_all_peers const * c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::get(void) const
//{
//    mangled_ppc("?get@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UBAPBUs_network_quality_live_for_all_peers@@XZ");
//};

//public: virtual struct s_network_quality_live_for_all_peers const * c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::get_request(void) const
//{
//    mangled_ppc("?get_request@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UBAPBUs_network_quality_live_for_all_peers@@XZ");
//};

//public: virtual bool c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::set(struct s_network_quality_live_for_all_peers const *)
//{
//    mangled_ppc("?set@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UAA_NPBUs_network_quality_live_for_all_peers@@@Z");
//};

//public: virtual bool c_generic_network_session_parameter<struct s_network_quality_live_for_all_peers>::request_change(struct s_network_quality_live_for_all_peers const *)
//{
//    mangled_ppc("?request_change@?$c_generic_network_session_parameter@Us_network_quality_live_for_all_peers@@@@UAA_NPBUs_network_quality_live_for_all_peers@@@Z");
//};

//public: struct s_network_quality_live const & s_static_array<struct s_network_quality_live, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_quality_live@@$0BA@@@QBAABUs_network_quality_live@@J@Z");
//};

//public: struct s_network_quality_live & s_static_array<struct s_network_quality_live, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_quality_live@@$0BA@@@QAAAAUs_network_quality_live@@J@Z");
//};

//protected: void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::validate(void)
//{
//    mangled_ppc("?validate@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@IAAXXZ");
//};

//protected: void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::validate_request(void)
//{
//    mangled_ppc("?validate_request@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@IAAXXZ");
//};

//private: void c_generic_network_session_parameter_data<struct s_network_quality_live_for_all_peers>::clear_internal(void)
//{
//    mangled_ppc("?clear_internal@?$c_generic_network_session_parameter_data@Us_network_quality_live_for_all_peers@@@@AAAXXZ");
//};

//public: static bool s_static_array<struct s_network_quality_live, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_quality_live@@$0BA@@@SA_NJ@Z");
//};

