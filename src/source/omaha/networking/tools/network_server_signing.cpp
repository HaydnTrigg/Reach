/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_signing_slot, 1>::k_element_count; // "?k_element_count@?$s_static_array@Vc_signing_slot@@$00@@2JB"
// struct s_server_signing_globals server_signing_globals; // "?server_signing_globals@@3Us_server_signing_globals@@A"

// bool network_server_signing_initalize(void);
// void network_server_signing_dispose(void);
// void network_server_signing_update(void);
// public: c_signable::c_signable(void);
// public: void c_signable::submit(enum e_controller_index);
// public: void c_signable::cancel(void);
// public: void c_signable::reset(void);
// public: enum e_sign_result c_signable::get_result(void) const;
// public: struct s_server_signature const * c_signable::get_signature(void) const;
// private: void c_signable::reset_sign_state(void);
// bool network_server_sign_build_signable_http_request_hash(unsigned char const *, long, class c_signable_generic<struct s_network_http_request_hash> *);
// public: void c_signing_slot::initialize(long);
// public: void c_signing_slot::start(class c_signable *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_signing_slot::update(void);
// public: void c_http_buffer_downloader::set_http_post_source(class c_http_post_source const *);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void c_signing_slot::cancel(void);
// public: bool c_signing_slot::is_free(void) const;
// struct s_server_signing_globals * get_server_signing_globals(void);
// long find_free_slot(void);
// public: static long s_static_array<class c_signing_slot, 1>::get_count(void);
// public: void c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_http_buffer_downloader::e_internal_flags, bool);
// void zero_and_reconstruct<struct s_server_signing_globals>(struct s_server_signing_globals *);
// public: class c_signing_slot & s_static_array<class c_signing_slot, 1>::operator[]<long>(long);
// public: void c_signable_generic<struct s_network_http_request_hash>::initialize(struct s_network_http_request_hash const *);
// void zero_and_reconstruct<class c_signing_slot>(class c_signing_slot *);
// public: static bool c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_http_buffer_downloader::e_internal_flags);
// private: static unsigned char c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_http_buffer_downloader::e_internal_flags);
// void reconstruct<struct s_server_signing_globals>(struct s_server_signing_globals *);
// public: s_server_signing_globals::s_server_signing_globals(void);
// public: s_static_array<class c_signing_slot, 1>::s_static_array<class c_signing_slot, 1>(void);
// public: c_signing_slot::c_signing_slot(void);
// public: c_http_stored_buffer_downloader<40>::c_http_stored_buffer_downloader<40>(void);
// merged_8288D028;
// public: virtual c_http_stored_buffer_downloader<40>::~c_http_stored_buffer_downloader<40>(void);
// public: static bool s_static_array<class c_signing_slot, 1>::valid<long>(long);
// void reconstruct<class c_signing_slot>(class c_signing_slot *);
// public: s_server_signing_globals::~s_server_signing_globals(void);
// public: s_static_array<class c_signing_slot, 1>::~s_static_array<class c_signing_slot, 1>(void);
// public: c_signing_slot::~c_signing_slot(void);
// void server_signing_globals::`dynamic atexit destructor'(void);

//bool network_server_signing_initalize(void)
//{
//    mangled_ppc("?network_server_signing_initalize@@YA_NXZ");
//};

//void network_server_signing_dispose(void)
//{
//    mangled_ppc("?network_server_signing_dispose@@YAXXZ");
//};

//void network_server_signing_update(void)
//{
//    mangled_ppc("?network_server_signing_update@@YAXXZ");
//};

//public: c_signable::c_signable(void)
//{
//    mangled_ppc("??0c_signable@@QAA@XZ");
//};

//public: void c_signable::submit(enum e_controller_index)
//{
//    mangled_ppc("?submit@c_signable@@QAAXW4e_controller_index@@@Z");
//};

//public: void c_signable::cancel(void)
//{
//    mangled_ppc("?cancel@c_signable@@QAAXXZ");
//};

//public: void c_signable::reset(void)
//{
//    mangled_ppc("?reset@c_signable@@QAAXXZ");
//};

//public: enum e_sign_result c_signable::get_result(void) const
//{
//    mangled_ppc("?get_result@c_signable@@QBA?AW4e_sign_result@@XZ");
//};

//public: struct s_server_signature const * c_signable::get_signature(void) const
//{
//    mangled_ppc("?get_signature@c_signable@@QBAPBUs_server_signature@@XZ");
//};

//private: void c_signable::reset_sign_state(void)
//{
//    mangled_ppc("?reset_sign_state@c_signable@@AAAXXZ");
//};

//bool network_server_sign_build_signable_http_request_hash(unsigned char const *, long, class c_signable_generic<struct s_network_http_request_hash> *)
//{
//    mangled_ppc("?network_server_sign_build_signable_http_request_hash@@YA_NPBEJPAV?$c_signable_generic@Us_network_http_request_hash@@@@@Z");
//};

//public: void c_signing_slot::initialize(long)
//{
//    mangled_ppc("?initialize@c_signing_slot@@QAAXJ@Z");
//};

//public: void c_signing_slot::start(class c_signable *)
//{
//    mangled_ppc("?start@c_signing_slot@@QAAXPAVc_signable@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_signing_slot::update(void)
//{
//    mangled_ppc("?update@c_signing_slot@@QAAXXZ");
//};

//public: void c_http_buffer_downloader::set_http_post_source(class c_http_post_source const *)
//{
//    mangled_ppc("?set_http_post_source@c_http_buffer_downloader@@QAAXPBVc_http_post_source@@@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: void c_signing_slot::cancel(void)
//{
//    mangled_ppc("?cancel@c_signing_slot@@QAAXXZ");
//};

//public: bool c_signing_slot::is_free(void) const
//{
//    mangled_ppc("?is_free@c_signing_slot@@QBA_NXZ");
//};

//struct s_server_signing_globals * get_server_signing_globals(void)
//{
//    mangled_ppc("?get_server_signing_globals@@YAPAUs_server_signing_globals@@XZ");
//};

//long find_free_slot(void)
//{
//    mangled_ppc("?find_free_slot@@YAJXZ");
//};

//public: static long s_static_array<class c_signing_slot, 1>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_signing_slot@@$00@@SAJXZ");
//};

//public: void c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_http_buffer_downloader::e_internal_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_internal_flags@c_http_buffer_downloader@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_internal_flags@c_http_buffer_downloader@@_N@Z");
//};

//void zero_and_reconstruct<struct s_server_signing_globals>(struct s_server_signing_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_server_signing_globals@@@@YAXPAUs_server_signing_globals@@@Z");
//};

//public: class c_signing_slot & s_static_array<class c_signing_slot, 1>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_signing_slot@@$00@@QAAAAVc_signing_slot@@J@Z");
//};

//public: void c_signable_generic<struct s_network_http_request_hash>::initialize(struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?initialize@?$c_signable_generic@Us_network_http_request_hash@@@@QAAXPBUs_network_http_request_hash@@@Z");
//};

//void zero_and_reconstruct<class c_signing_slot>(class c_signing_slot *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Vc_signing_slot@@@@YAXPAVc_signing_slot@@@Z");
//};

//public: static bool c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_http_buffer_downloader::e_internal_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_internal_flags@c_http_buffer_downloader@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_internal_flags@c_http_buffer_downloader@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_http_buffer_downloader::e_internal_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_internal_flags@c_http_buffer_downloader@@E$02Us_default_enum_string_resolver@@@@CAEW4e_internal_flags@c_http_buffer_downloader@@@Z");
//};

//void reconstruct<struct s_server_signing_globals>(struct s_server_signing_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_server_signing_globals@@@@YAXPAUs_server_signing_globals@@@Z");
//};

//public: s_server_signing_globals::s_server_signing_globals(void)
//{
//    mangled_ppc("??0s_server_signing_globals@@QAA@XZ");
//};

//public: s_static_array<class c_signing_slot, 1>::s_static_array<class c_signing_slot, 1>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_signing_slot@@$00@@QAA@XZ");
//};

//public: c_signing_slot::c_signing_slot(void)
//{
//    mangled_ppc("??0c_signing_slot@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<40>::c_http_stored_buffer_downloader<40>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0CI@@@QAA@XZ");
//};

//merged_8288D028
//{
//    mangled_ppc("merged_8288D028");
//};

//public: virtual c_http_stored_buffer_downloader<40>::~c_http_stored_buffer_downloader<40>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0CI@@@UAA@XZ");
//};

//public: static bool s_static_array<class c_signing_slot, 1>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_signing_slot@@$00@@SA_NJ@Z");
//};

//void reconstruct<class c_signing_slot>(class c_signing_slot *)
//{
//    mangled_ppc("??$reconstruct@Vc_signing_slot@@@@YAXPAVc_signing_slot@@@Z");
//};

//public: s_server_signing_globals::~s_server_signing_globals(void)
//{
//    mangled_ppc("??1s_server_signing_globals@@QAA@XZ");
//};

//public: s_static_array<class c_signing_slot, 1>::~s_static_array<class c_signing_slot, 1>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_signing_slot@@$00@@QAA@XZ");
//};

//public: c_signing_slot::~c_signing_slot(void)
//{
//    mangled_ppc("??1c_signing_slot@@QAA@XZ");
//};

//void server_signing_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fserver_signing_globals@@YAXXZ");
//};

