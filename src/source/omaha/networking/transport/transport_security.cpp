/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned __int64const global_invalid_nonce; // "?global_invalid_nonce@@3_KB"
// public: static long const s_static_array<class c_static_string<32>, 3>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_string@$0CA@@@$02@@2JB"

// void transport_security_initialize(void);
// void transport_security_startup(void);
// bool transport_security_incompatible_version_detected(bool *);
// void transport_security_incompatible_version_clear(void);
// bool transport_secure_key_create(struct s_transport_session_description *, enum e_transport_platform);
// bool transport_secure_key_register(struct s_transport_session_description *, enum e_transport_platform);
// void transport_secure_key_unregister(struct s_transport_session_description *, enum e_transport_platform);
// void transport_secure_address_reset_for_new_networking_mode(void *);
// bool transport_secure_address_pending(void);
// bool transport_secure_address_resolve(void);
// bool transport_secure_address_get(struct s_transport_secure_address *);
// struct s_transport_secure_address const * transport_secure_address_get_safe(void);
// bool transport_secure_address_get_insecure(struct transport_address *);
// void transport_secure_address_sanitize_out_ip_information(struct s_transport_secure_address *);
// bool transport_secure_address_decode(struct s_transport_session_description const *, struct s_transport_secure_address const *, unsigned short, struct transport_address *);
// bool transport_secure_address_retrieve(struct transport_address const *, enum e_transport_platform, struct s_transport_secure_address *);
// void transport_secure_identifier_invalidate(struct s_transport_secure_identifier *);
// bool transport_secure_identifier_valid(struct s_transport_secure_identifier const *);
// bool transport_secure_identifier_retrieve(struct transport_address const *, enum e_transport_platform, struct s_transport_secure_identifier *, struct s_transport_secure_address *);
// bool transport_secure_identifier_compare(struct s_transport_secure_identifier const *, struct s_transport_secure_identifier const *);
// bool transport_secure_address_compare(struct s_transport_secure_address const *, struct s_transport_secure_address const *);
// void transport_secure_address_extract_identifier(struct s_transport_secure_address const *, struct s_transport_unique_identifier *);
// unsigned __int64 transport_secure_address_extract_identifier_into_qword(struct s_transport_secure_address const *);
// void transport_secure_address_build_from_identifier(struct s_transport_unique_identifier const *, struct s_transport_secure_address *);
// bool transport_secure_address_get_secure_machine_id(struct s_transport_secure_address const *, unsigned __int64*);
// bool transport_secure_address_get_local_secure_machine_id(unsigned __int64*);
// bool transport_secure_connection_initiate(struct transport_address const *);
// enum e_transport_secure_connection transport_secure_connection_status(struct transport_address const *);
// void transport_secure_connection_terminate(struct transport_address const *);
// unsigned __int64 transport_secure_nonce_generate(void);
// char const * transport_secure_nonce_get_string(unsigned __int64);
// bool transport_secure_nonce_compare(unsigned __int64, unsigned __int64);
// bool transport_secure_nonce_valid(unsigned __int64);
// void transport_secure_random(long, unsigned char *);
// unsigned __int64 transport_local_machine_nonce_get(void);
// struct s_transport_unique_identifier const * transport_unique_identifier_get(void);
// char const * transport_secure_address_get_mac_string(struct s_transport_secure_address const *);
// char const * transport_unique_identifier_get_string(struct s_transport_unique_identifier const *);
// bool transport_unique_identifier_compare(struct s_transport_unique_identifier const *, struct s_transport_unique_identifier const *);
// char const * transport_session_description_get_string(struct s_transport_session_description const *);
// char * transport_secure_address_get_string(struct s_transport_secure_address const *);
// char * transport_secure_address_to_string(struct s_transport_secure_address const *, char *, long, bool, bool);
// char const * transport_secure_identifier_get_string(struct s_transport_secure_identifier const *);
// public: s_static_array<class c_static_string<32>, 3>::s_static_array<class c_static_string<32>, 3>(void);
// void transport_unique_identifier_resolve(void);
// bool transport_address_get_insecure_xbox_address(struct transport_address const *, struct in_addr *);
// public: static long s_static_array<class c_static_string<32>, 3>::get_count(void);
// public: class c_static_string<32> & s_static_array<class c_static_string<32>, 3>::operator[]<long>(long);
// public: char const * s_static_string<32>::print(char const *, ...);
// public: static bool s_static_array<class c_static_string<32>, 3>::valid<long>(long);

//void transport_security_initialize(void)
//{
//    mangled_ppc("?transport_security_initialize@@YAXXZ");
//};

//void transport_security_startup(void)
//{
//    mangled_ppc("?transport_security_startup@@YAXXZ");
//};

//bool transport_security_incompatible_version_detected(bool *)
//{
//    mangled_ppc("?transport_security_incompatible_version_detected@@YA_NPA_N@Z");
//};

//void transport_security_incompatible_version_clear(void)
//{
//    mangled_ppc("?transport_security_incompatible_version_clear@@YAXXZ");
//};

//bool transport_secure_key_create(struct s_transport_session_description *, enum e_transport_platform)
//{
//    mangled_ppc("?transport_secure_key_create@@YA_NPAUs_transport_session_description@@W4e_transport_platform@@@Z");
//};

//bool transport_secure_key_register(struct s_transport_session_description *, enum e_transport_platform)
//{
//    mangled_ppc("?transport_secure_key_register@@YA_NPAUs_transport_session_description@@W4e_transport_platform@@@Z");
//};

//void transport_secure_key_unregister(struct s_transport_session_description *, enum e_transport_platform)
//{
//    mangled_ppc("?transport_secure_key_unregister@@YAXPAUs_transport_session_description@@W4e_transport_platform@@@Z");
//};

//void transport_secure_address_reset_for_new_networking_mode(void *)
//{
//    mangled_ppc("?transport_secure_address_reset_for_new_networking_mode@@YAXPAX@Z");
//};

//bool transport_secure_address_pending(void)
//{
//    mangled_ppc("?transport_secure_address_pending@@YA_NXZ");
//};

//bool transport_secure_address_resolve(void)
//{
//    mangled_ppc("?transport_secure_address_resolve@@YA_NXZ");
//};

//bool transport_secure_address_get(struct s_transport_secure_address *)
//{
//    mangled_ppc("?transport_secure_address_get@@YA_NPAUs_transport_secure_address@@@Z");
//};

//struct s_transport_secure_address const * transport_secure_address_get_safe(void)
//{
//    mangled_ppc("?transport_secure_address_get_safe@@YAPBUs_transport_secure_address@@XZ");
//};

//bool transport_secure_address_get_insecure(struct transport_address *)
//{
//    mangled_ppc("?transport_secure_address_get_insecure@@YA_NPAUtransport_address@@@Z");
//};

//void transport_secure_address_sanitize_out_ip_information(struct s_transport_secure_address *)
//{
//    mangled_ppc("?transport_secure_address_sanitize_out_ip_information@@YAXPAUs_transport_secure_address@@@Z");
//};

//bool transport_secure_address_decode(struct s_transport_session_description const *, struct s_transport_secure_address const *, unsigned short, struct transport_address *)
//{
//    mangled_ppc("?transport_secure_address_decode@@YA_NPBUs_transport_session_description@@PBUs_transport_secure_address@@GPAUtransport_address@@@Z");
//};

//bool transport_secure_address_retrieve(struct transport_address const *, enum e_transport_platform, struct s_transport_secure_address *)
//{
//    mangled_ppc("?transport_secure_address_retrieve@@YA_NPBUtransport_address@@W4e_transport_platform@@PAUs_transport_secure_address@@@Z");
//};

//void transport_secure_identifier_invalidate(struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?transport_secure_identifier_invalidate@@YAXPAUs_transport_secure_identifier@@@Z");
//};

//bool transport_secure_identifier_valid(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?transport_secure_identifier_valid@@YA_NPBUs_transport_secure_identifier@@@Z");
//};

//bool transport_secure_identifier_retrieve(struct transport_address const *, enum e_transport_platform, struct s_transport_secure_identifier *, struct s_transport_secure_address *)
//{
//    mangled_ppc("?transport_secure_identifier_retrieve@@YA_NPBUtransport_address@@W4e_transport_platform@@PAUs_transport_secure_identifier@@PAUs_transport_secure_address@@@Z");
//};

//bool transport_secure_identifier_compare(struct s_transport_secure_identifier const *, struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?transport_secure_identifier_compare@@YA_NPBUs_transport_secure_identifier@@0@Z");
//};

//bool transport_secure_address_compare(struct s_transport_secure_address const *, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?transport_secure_address_compare@@YA_NPBUs_transport_secure_address@@0@Z");
//};

//void transport_secure_address_extract_identifier(struct s_transport_secure_address const *, struct s_transport_unique_identifier *)
//{
//    mangled_ppc("?transport_secure_address_extract_identifier@@YAXPBUs_transport_secure_address@@PAUs_transport_unique_identifier@@@Z");
//};

//unsigned __int64 transport_secure_address_extract_identifier_into_qword(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?transport_secure_address_extract_identifier_into_qword@@YA_KPBUs_transport_secure_address@@@Z");
//};

//void transport_secure_address_build_from_identifier(struct s_transport_unique_identifier const *, struct s_transport_secure_address *)
//{
//    mangled_ppc("?transport_secure_address_build_from_identifier@@YAXPBUs_transport_unique_identifier@@PAUs_transport_secure_address@@@Z");
//};

//bool transport_secure_address_get_secure_machine_id(struct s_transport_secure_address const *, unsigned __int64*)
//{
//    mangled_ppc("?transport_secure_address_get_secure_machine_id@@YA_NPBUs_transport_secure_address@@PA_K@Z");
//};

//bool transport_secure_address_get_local_secure_machine_id(unsigned __int64*)
//{
//    mangled_ppc("?transport_secure_address_get_local_secure_machine_id@@YA_NPA_K@Z");
//};

//bool transport_secure_connection_initiate(struct transport_address const *)
//{
//    mangled_ppc("?transport_secure_connection_initiate@@YA_NPBUtransport_address@@@Z");
//};

//enum e_transport_secure_connection transport_secure_connection_status(struct transport_address const *)
//{
//    mangled_ppc("?transport_secure_connection_status@@YA?AW4e_transport_secure_connection@@PBUtransport_address@@@Z");
//};

//void transport_secure_connection_terminate(struct transport_address const *)
//{
//    mangled_ppc("?transport_secure_connection_terminate@@YAXPBUtransport_address@@@Z");
//};

//unsigned __int64 transport_secure_nonce_generate(void)
//{
//    mangled_ppc("?transport_secure_nonce_generate@@YA_KXZ");
//};

//char const * transport_secure_nonce_get_string(unsigned __int64)
//{
//    mangled_ppc("?transport_secure_nonce_get_string@@YAPBD_K@Z");
//};

//bool transport_secure_nonce_compare(unsigned __int64, unsigned __int64)
//{
//    mangled_ppc("?transport_secure_nonce_compare@@YA_N_K0@Z");
//};

//bool transport_secure_nonce_valid(unsigned __int64)
//{
//    mangled_ppc("?transport_secure_nonce_valid@@YA_N_K@Z");
//};

//void transport_secure_random(long, unsigned char *)
//{
//    mangled_ppc("?transport_secure_random@@YAXJPAE@Z");
//};

//unsigned __int64 transport_local_machine_nonce_get(void)
//{
//    mangled_ppc("?transport_local_machine_nonce_get@@YA_KXZ");
//};

//struct s_transport_unique_identifier const * transport_unique_identifier_get(void)
//{
//    mangled_ppc("?transport_unique_identifier_get@@YAPBUs_transport_unique_identifier@@XZ");
//};

//char const * transport_secure_address_get_mac_string(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?transport_secure_address_get_mac_string@@YAPBDPBUs_transport_secure_address@@@Z");
//};

//char const * transport_unique_identifier_get_string(struct s_transport_unique_identifier const *)
//{
//    mangled_ppc("?transport_unique_identifier_get_string@@YAPBDPBUs_transport_unique_identifier@@@Z");
//};

//bool transport_unique_identifier_compare(struct s_transport_unique_identifier const *, struct s_transport_unique_identifier const *)
//{
//    mangled_ppc("?transport_unique_identifier_compare@@YA_NPBUs_transport_unique_identifier@@0@Z");
//};

//char const * transport_session_description_get_string(struct s_transport_session_description const *)
//{
//    mangled_ppc("?transport_session_description_get_string@@YAPBDPBUs_transport_session_description@@@Z");
//};

//char * transport_secure_address_get_string(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?transport_secure_address_get_string@@YAPADPBUs_transport_secure_address@@@Z");
//};

//char * transport_secure_address_to_string(struct s_transport_secure_address const *, char *, long, bool, bool)
//{
//    mangled_ppc("?transport_secure_address_to_string@@YAPADPBUs_transport_secure_address@@PADJ_N2@Z");
//};

//char const * transport_secure_identifier_get_string(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?transport_secure_identifier_get_string@@YAPBDPBUs_transport_secure_identifier@@@Z");
//};

//public: s_static_array<class c_static_string<32>, 3>::s_static_array<class c_static_string<32>, 3>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_string@$0CA@@@$02@@QAA@XZ");
//};

//void transport_unique_identifier_resolve(void)
//{
//    mangled_ppc("?transport_unique_identifier_resolve@@YAXXZ");
//};

//bool transport_address_get_insecure_xbox_address(struct transport_address const *, struct in_addr *)
//{
//    mangled_ppc("?transport_address_get_insecure_xbox_address@@YA_NPBUtransport_address@@PAUin_addr@@@Z");
//};

//public: static long s_static_array<class c_static_string<32>, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_static_string@$0CA@@@$02@@SAJXZ");
//};

//public: class c_static_string<32> & s_static_array<class c_static_string<32>, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_string@$0CA@@@$02@@QAAAAV?$c_static_string@$0CA@@@J@Z");
//};

//public: char const * s_static_string<32>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0CA@@@QAAPBDPBDZZ");
//};

//public: static bool s_static_array<class c_static_string<32>, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_static_string@$0CA@@@$02@@SA_NJ@Z");
//};

