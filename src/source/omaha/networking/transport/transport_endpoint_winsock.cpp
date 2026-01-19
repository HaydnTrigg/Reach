/* ---------- headers */

#include "omaha\networking\transport\transport_endpoint_winsock.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_endpoint_client const c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@2W4e_endpoint_client@@B"
// public: static long const c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@2JB"
// struct s_winsock_globals winsock_globals; // "?winsock_globals@@3Us_winsock_globals@@A"

// bool address_previously_validated(unsigned long);
// void validate_ip_address(struct transport_address const *, bool);
// struct transport_endpoint * transport_endpoint_create(enum e_transport_type, char const *);
// void transport_endpoint_setup(struct transport_endpoint *, enum e_transport_type, char const *);
// void transport_endpoint_delete(struct transport_endpoint *);
// long transport_endpoint_get_option_value(struct transport_endpoint *, enum e_transport_endpoint_option);
// long get_platform_socket_option(enum e_transport_endpoint_option);
// bool transport_endpoint_set_option_value(struct transport_endpoint *, enum e_transport_endpoint_option, long);
// bool transport_get_endpoint_address(struct transport_endpoint *, struct transport_address *);
// enum e_transport_type transport_endpoint_get_type(struct transport_endpoint *);
// void transport_endpoint_set_is_alpha(struct transport_endpoint *, bool);
// bool transport_endpoint_set_blocking(struct transport_endpoint *, bool);
// bool transport_endpoint_bind(struct transport_endpoint *, struct transport_address const *);
// bool transport_endpoint_connect(struct transport_endpoint *, struct transport_address const *);
// void transport_endpoint_disconnect(struct transport_endpoint *);
// bool transport_endpoint_listen(struct transport_endpoint *);
// struct transport_endpoint * transport_endpoint_accept_internal(struct transport_endpoint *, enum e_transport_thread_safety_checking, char const *);
// struct transport_endpoint * transport_endpoint_accept(struct transport_endpoint *, char const *);
// struct transport_endpoint * transport_endpoint_accept_temp_hack(struct transport_endpoint *, enum e_transport_thread_safety_checking, char const *);
// bool transport_endpoint_reject(struct transport_endpoint *);
// long transport_endpoint_read(struct transport_endpoint *, void *, long);
// long transport_endpoint_write(struct transport_endpoint *, void const *, long);
// long transport_internal_endpoint_read_from(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, void *, long, struct transport_address *);
// void transport_internal_convert_endpoint_reference_into_threadsafe_reference(struct transport_endpoint *const, class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> *);
// long transport_internal_endpoint_wait_for_readable(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> const *, long, long);
// long transport_endpoint_read_from(struct transport_endpoint *, void *, long, struct transport_address *, unsigned long *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long transport_endpoint_write_to(struct transport_endpoint *, void const *, long, struct transport_address const *);
// bool transport_endpoint_readable(struct transport_endpoint *);
// bool transport_endpoint_writeable(struct transport_endpoint *);
// bool transport_endpoint_connected(struct transport_endpoint *);
// bool transport_endpoint_listening(struct transport_endpoint *);
// bool transport_endpoint_blocking(struct transport_endpoint *);
// void transport_endpoint_set_name(struct transport_endpoint *, char const *);
// char const * transport_endpoint_get_name(struct transport_endpoint *);
// bool transport_endpoint_async_connect(struct transport_endpoint *, struct transport_address const *);
// bool transport_endpoint_async_is_connected(struct transport_endpoint *, bool *);
// char const * transport_endpoint_describe(struct transport_endpoint *, class c_static_string<256> *);
// bool transport_endpoint_enable_multithreaded_receive(struct transport_endpoint *);
// bool transport_internal_endpoint_is_pending_deletion(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>);
// bool transport_winsock_internal_socket_is_pending_deletion(unsigned int);
// void transport_internal_endpoint_dependencies_cleared_by_client(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, enum e_endpoint_client);
// bool transport_internal_endpoint_is_invalid(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>);
// void transport_internal_endpoint_system_shutdown(void);
// bool switch_to_thread(void);
// bool transport_endpoint_create_socket(struct transport_endpoint *, struct transport_address const *);
// bool transport_endpoint_get_socket_address(struct transport_address const *, long *, unsigned char *const);
// bool transport_endpoint_get_transport_address(long, unsigned char const *const, struct transport_address *);
// void assert_thread_safety_and_validity(struct transport_endpoint *);
// void transport_endpoint_schedule_endpoint_for_deletion(struct transport_endpoint *);
// void transport_winsock_internal_endpoint_delete_immediate(struct transport_endpoint *);
// bool known_error_code(long);
// enum e_event_level error_level(long);
// unsigned int winsock_socket(int, int, int, char const *);
// int winsock_send(unsigned int, char const *, int, int, char const *);
// int winsock_recv(unsigned int, char *, int, int, char const *);
// int winsock_recvfrom(unsigned int, char *, int, int, struct sockaddr *, int *, char const *);
// unsigned int winsock_accept(unsigned int, struct sockaddr *, int *, char const *);
// int winsock_listen(unsigned int, int, char const *);
// int winsock_shutdown(unsigned int, int, char const *);
// int winsock_closesocket(unsigned int, char const *);
// int winsock_connect(unsigned int, struct sockaddr const *, int, char const *);
// int winsock_bind(unsigned int, struct sockaddr const *, int, char const *);
// int winsock_ioctlsocket(unsigned int, long, unsigned long *, char const *);
// int winsock_getsockopt(unsigned int, int, int, char *, int *, char const *);
// int winsock_setsockopt(unsigned int, int, int, char const *, int, char const *);
// int winsock_sendto(unsigned int, char const *, int, int, struct sockaddr const *, int, char const *);
// int winsock_select(int, struct fd_set *, struct fd_set *, struct fd_set *, struct timeval const *, char const *);
// public: unsigned long & t_static_ring_buffer<unsigned long, 32>::get_element(long);
// public: void c_flags_no_init<enum e_transport_endpoint_flag, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_transport_endpoint_flag, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_transport_endpoint_flag) const;
// public: unsigned short c_flags_no_init<enum e_transport_endpoint_flag, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: bool c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_endpoint_client, bool);
// public: bool c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::set(long, bool);
// public: long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::count_set(void) const;
// public: struct s_threadsafe_endpoint_reference_internal * c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>::get(void);
// public: struct s_threadsafe_endpoint_reference_internal const * c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>::get_const(void) const;
// public: static bool c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_endpoint_client);
// private: static unsigned char c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_endpoint_client);
// private: static unsigned char c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::flag_size_type(long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_endpoint_client);
// private: static unsigned long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// public: s_winsock_globals::s_winsock_globals(void);
// public: s_endpoint_pending_deletion::s_endpoint_pending_deletion(void);
// public: c_flags<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: c_flags<long, unsigned long, 20, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 20, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::clear(void);
// public: t_static_ring_buffer<unsigned long, 32>::t_static_ring_buffer<unsigned long, 32>(void);
// public: s_winsock_globals::~s_winsock_globals(void);
// public: t_static_ring_buffer<unsigned long, 32>::~t_static_ring_buffer<unsigned long, 32>(void);
// void winsock_globals::`dynamic atexit destructor'(void);
// void g_validated_addresses::`dynamic atexit destructor'(void);

//bool address_previously_validated(unsigned long)
//{
//    mangled_ppc("?address_previously_validated@@YA_NK@Z");
//};

//void validate_ip_address(struct transport_address const *, bool)
//{
//    mangled_ppc("?validate_ip_address@@YAXPBUtransport_address@@_N@Z");
//};

//struct transport_endpoint * transport_endpoint_create(enum e_transport_type, char const *)
//{
//    mangled_ppc("?transport_endpoint_create@@YAPAUtransport_endpoint@@W4e_transport_type@@PBD@Z");
//};

//void transport_endpoint_setup(struct transport_endpoint *, enum e_transport_type, char const *)
//{
//    mangled_ppc("?transport_endpoint_setup@@YAXPAUtransport_endpoint@@W4e_transport_type@@PBD@Z");
//};

//void transport_endpoint_delete(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_delete@@YAXPAUtransport_endpoint@@@Z");
//};

//long transport_endpoint_get_option_value(struct transport_endpoint *, enum e_transport_endpoint_option)
//{
//    mangled_ppc("?transport_endpoint_get_option_value@@YAJPAUtransport_endpoint@@W4e_transport_endpoint_option@@@Z");
//};

//long get_platform_socket_option(enum e_transport_endpoint_option)
//{
//    mangled_ppc("?get_platform_socket_option@@YAJW4e_transport_endpoint_option@@@Z");
//};

//bool transport_endpoint_set_option_value(struct transport_endpoint *, enum e_transport_endpoint_option, long)
//{
//    mangled_ppc("?transport_endpoint_set_option_value@@YA_NPAUtransport_endpoint@@W4e_transport_endpoint_option@@J@Z");
//};

//bool transport_get_endpoint_address(struct transport_endpoint *, struct transport_address *)
//{
//    mangled_ppc("?transport_get_endpoint_address@@YA_NPAUtransport_endpoint@@PAUtransport_address@@@Z");
//};

//enum e_transport_type transport_endpoint_get_type(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_get_type@@YA?AW4e_transport_type@@PAUtransport_endpoint@@@Z");
//};

//void transport_endpoint_set_is_alpha(struct transport_endpoint *, bool)
//{
//    mangled_ppc("?transport_endpoint_set_is_alpha@@YAXPAUtransport_endpoint@@_N@Z");
//};

//bool transport_endpoint_set_blocking(struct transport_endpoint *, bool)
//{
//    mangled_ppc("?transport_endpoint_set_blocking@@YA_NPAUtransport_endpoint@@_N@Z");
//};

//bool transport_endpoint_bind(struct transport_endpoint *, struct transport_address const *)
//{
//    mangled_ppc("?transport_endpoint_bind@@YA_NPAUtransport_endpoint@@PBUtransport_address@@@Z");
//};

//bool transport_endpoint_connect(struct transport_endpoint *, struct transport_address const *)
//{
//    mangled_ppc("?transport_endpoint_connect@@YA_NPAUtransport_endpoint@@PBUtransport_address@@@Z");
//};

//void transport_endpoint_disconnect(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_disconnect@@YAXPAUtransport_endpoint@@@Z");
//};

//bool transport_endpoint_listen(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_listen@@YA_NPAUtransport_endpoint@@@Z");
//};

//struct transport_endpoint * transport_endpoint_accept_internal(struct transport_endpoint *, enum e_transport_thread_safety_checking, char const *)
//{
//    mangled_ppc("?transport_endpoint_accept_internal@@YAPAUtransport_endpoint@@PAU1@W4e_transport_thread_safety_checking@@PBD@Z");
//};

//struct transport_endpoint * transport_endpoint_accept(struct transport_endpoint *, char const *)
//{
//    mangled_ppc("?transport_endpoint_accept@@YAPAUtransport_endpoint@@PAU1@PBD@Z");
//};

//struct transport_endpoint * transport_endpoint_accept_temp_hack(struct transport_endpoint *, enum e_transport_thread_safety_checking, char const *)
//{
//    mangled_ppc("?transport_endpoint_accept_temp_hack@@YAPAUtransport_endpoint@@PAU1@W4e_transport_thread_safety_checking@@PBD@Z");
//};

//bool transport_endpoint_reject(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_reject@@YA_NPAUtransport_endpoint@@@Z");
//};

//long transport_endpoint_read(struct transport_endpoint *, void *, long)
//{
//    mangled_ppc("?transport_endpoint_read@@YAJPAUtransport_endpoint@@PAXJ@Z");
//};

//long transport_endpoint_write(struct transport_endpoint *, void const *, long)
//{
//    mangled_ppc("?transport_endpoint_write@@YAJPAUtransport_endpoint@@PBXJ@Z");
//};

//long transport_internal_endpoint_read_from(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, void *, long, struct transport_address *)
//{
//    mangled_ppc("?transport_internal_endpoint_read_from@@YAJV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@PAXJPAUtransport_address@@@Z");
//};

//void transport_internal_convert_endpoint_reference_into_threadsafe_reference(struct transport_endpoint *const, class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> *)
//{
//    mangled_ppc("?transport_internal_convert_endpoint_reference_into_threadsafe_reference@@YAXQAUtransport_endpoint@@PAV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@@Z");
//};

//long transport_internal_endpoint_wait_for_readable(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> const *, long, long)
//{
//    mangled_ppc("?transport_internal_endpoint_wait_for_readable@@YAJPBV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@JJ@Z");
//};

//long transport_endpoint_read_from(struct transport_endpoint *, void *, long, struct transport_address *, unsigned long *)
//{
//    mangled_ppc("?transport_endpoint_read_from@@YAJPAUtransport_endpoint@@PAXJPAUtransport_address@@PAK@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long transport_endpoint_write_to(struct transport_endpoint *, void const *, long, struct transport_address const *)
//{
//    mangled_ppc("?transport_endpoint_write_to@@YAJPAUtransport_endpoint@@PBXJPBUtransport_address@@@Z");
//};

//bool transport_endpoint_readable(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_readable@@YA_NPAUtransport_endpoint@@@Z");
//};

//bool transport_endpoint_writeable(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_writeable@@YA_NPAUtransport_endpoint@@@Z");
//};

//bool transport_endpoint_connected(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_connected@@YA_NPAUtransport_endpoint@@@Z");
//};

//bool transport_endpoint_listening(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_listening@@YA_NPAUtransport_endpoint@@@Z");
//};

//bool transport_endpoint_blocking(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_blocking@@YA_NPAUtransport_endpoint@@@Z");
//};

//void transport_endpoint_set_name(struct transport_endpoint *, char const *)
//{
//    mangled_ppc("?transport_endpoint_set_name@@YAXPAUtransport_endpoint@@PBD@Z");
//};

//char const * transport_endpoint_get_name(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_get_name@@YAPBDPAUtransport_endpoint@@@Z");
//};

//bool transport_endpoint_async_connect(struct transport_endpoint *, struct transport_address const *)
//{
//    mangled_ppc("?transport_endpoint_async_connect@@YA_NPAUtransport_endpoint@@PBUtransport_address@@@Z");
//};

//bool transport_endpoint_async_is_connected(struct transport_endpoint *, bool *)
//{
//    mangled_ppc("?transport_endpoint_async_is_connected@@YA_NPAUtransport_endpoint@@PA_N@Z");
//};

//char const * transport_endpoint_describe(struct transport_endpoint *, class c_static_string<256> *)
//{
//    mangled_ppc("?transport_endpoint_describe@@YAPBDPAUtransport_endpoint@@PAV?$c_static_string@$0BAA@@@@Z");
//};

//bool transport_endpoint_enable_multithreaded_receive(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_enable_multithreaded_receive@@YA_NPAUtransport_endpoint@@@Z");
//};

//bool transport_internal_endpoint_is_pending_deletion(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>)
//{
//    mangled_ppc("?transport_internal_endpoint_is_pending_deletion@@YA_NV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@@Z");
//};

//bool transport_winsock_internal_socket_is_pending_deletion(unsigned int)
//{
//    mangled_ppc("?transport_winsock_internal_socket_is_pending_deletion@@YA_NI@Z");
//};

//void transport_internal_endpoint_dependencies_cleared_by_client(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, enum e_endpoint_client)
//{
//    mangled_ppc("?transport_internal_endpoint_dependencies_cleared_by_client@@YAXV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@W4e_endpoint_client@@@Z");
//};

//bool transport_internal_endpoint_is_invalid(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>)
//{
//    mangled_ppc("?transport_internal_endpoint_is_invalid@@YA_NV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@@Z");
//};

//void transport_internal_endpoint_system_shutdown(void)
//{
//    mangled_ppc("?transport_internal_endpoint_system_shutdown@@YAXXZ");
//};

//bool switch_to_thread(void)
//{
//    mangled_ppc("?switch_to_thread@@YA_NXZ");
//};

//bool transport_endpoint_create_socket(struct transport_endpoint *, struct transport_address const *)
//{
//    mangled_ppc("?transport_endpoint_create_socket@@YA_NPAUtransport_endpoint@@PBUtransport_address@@@Z");
//};

//bool transport_endpoint_get_socket_address(struct transport_address const *, long *, unsigned char *const)
//{
//    mangled_ppc("?transport_endpoint_get_socket_address@@YA_NPBUtransport_address@@PAJQAE@Z");
//};

//bool transport_endpoint_get_transport_address(long, unsigned char const *const, struct transport_address *)
//{
//    mangled_ppc("?transport_endpoint_get_transport_address@@YA_NJQBEPAUtransport_address@@@Z");
//};

//void assert_thread_safety_and_validity(struct transport_endpoint *)
//{
//    mangled_ppc("?assert_thread_safety_and_validity@@YAXPAUtransport_endpoint@@@Z");
//};

//void transport_endpoint_schedule_endpoint_for_deletion(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_schedule_endpoint_for_deletion@@YAXPAUtransport_endpoint@@@Z");
//};

//void transport_winsock_internal_endpoint_delete_immediate(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_winsock_internal_endpoint_delete_immediate@@YAXPAUtransport_endpoint@@@Z");
//};

//bool known_error_code(long)
//{
//    mangled_ppc("?known_error_code@@YA_NJ@Z");
//};

//enum e_event_level error_level(long)
//{
//    mangled_ppc("?error_level@@YA?AW4e_event_level@@J@Z");
//};

//unsigned int winsock_socket(int, int, int, char const *)
//{
//    mangled_ppc("?winsock_socket@@YAIHHHPBD@Z");
//};

//int winsock_send(unsigned int, char const *, int, int, char const *)
//{
//    mangled_ppc("?winsock_send@@YAHIPBDHH0@Z");
//};

//int winsock_recv(unsigned int, char *, int, int, char const *)
//{
//    mangled_ppc("?winsock_recv@@YAHIPADHHPBD@Z");
//};

//int winsock_recvfrom(unsigned int, char *, int, int, struct sockaddr *, int *, char const *)
//{
//    mangled_ppc("?winsock_recvfrom@@YAHIPADHHPAUsockaddr@@PAHPBD@Z");
//};

//unsigned int winsock_accept(unsigned int, struct sockaddr *, int *, char const *)
//{
//    mangled_ppc("?winsock_accept@@YAIIPAUsockaddr@@PAHPBD@Z");
//};

//int winsock_listen(unsigned int, int, char const *)
//{
//    mangled_ppc("?winsock_listen@@YAHIHPBD@Z");
//};

//int winsock_shutdown(unsigned int, int, char const *)
//{
//    mangled_ppc("?winsock_shutdown@@YAHIHPBD@Z");
//};

//int winsock_closesocket(unsigned int, char const *)
//{
//    mangled_ppc("?winsock_closesocket@@YAHIPBD@Z");
//};

//int winsock_connect(unsigned int, struct sockaddr const *, int, char const *)
//{
//    mangled_ppc("?winsock_connect@@YAHIPBUsockaddr@@HPBD@Z");
//};

//int winsock_bind(unsigned int, struct sockaddr const *, int, char const *)
//{
//    mangled_ppc("?winsock_bind@@YAHIPBUsockaddr@@HPBD@Z");
//};

//int winsock_ioctlsocket(unsigned int, long, unsigned long *, char const *)
//{
//    mangled_ppc("?winsock_ioctlsocket@@YAHIJPAKPBD@Z");
//};

//int winsock_getsockopt(unsigned int, int, int, char *, int *, char const *)
//{
//    mangled_ppc("?winsock_getsockopt@@YAHIHHPADPAHPBD@Z");
//};

//int winsock_setsockopt(unsigned int, int, int, char const *, int, char const *)
//{
//    mangled_ppc("?winsock_setsockopt@@YAHIHHPBDH0@Z");
//};

//int winsock_sendto(unsigned int, char const *, int, int, struct sockaddr const *, int, char const *)
//{
//    mangled_ppc("?winsock_sendto@@YAHIPBDHHPBUsockaddr@@H0@Z");
//};

//int winsock_select(int, struct fd_set *, struct fd_set *, struct fd_set *, struct timeval const *, char const *)
//{
//    mangled_ppc("?winsock_select@@YAHHPAUfd_set@@00PBUtimeval@@PBD@Z");
//};

//public: unsigned long & t_static_ring_buffer<unsigned long, 32>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@K$0CA@@@QAAAAKJ@Z");
//};

//public: void c_flags_no_init<enum e_transport_endpoint_flag, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_transport_endpoint_flag@@G$08Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_transport_endpoint_flag, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_transport_endpoint_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_transport_endpoint_flag@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_transport_endpoint_flag@@@Z");
//};

//public: unsigned short c_flags_no_init<enum e_transport_endpoint_flag, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_transport_endpoint_flag@@G$08Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: bool c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_endpoint_client, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_endpoint_client@@_N@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: struct s_threadsafe_endpoint_reference_internal * c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@QAAPAUs_threadsafe_endpoint_reference_internal@@XZ");
//};

//public: struct s_threadsafe_endpoint_reference_internal const * c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@QBAPBUs_threadsafe_endpoint_reference_internal@@XZ");
//};

//public: static bool c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_endpoint_client)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_endpoint_client@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_endpoint_client)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@CAEW4e_endpoint_client@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: static bool c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_endpoint_client)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@CAEW4e_endpoint_client@@@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//public: s_winsock_globals::s_winsock_globals(void)
//{
//    mangled_ppc("??0s_winsock_globals@@QAA@XZ");
//};

//public: s_endpoint_pending_deletion::s_endpoint_pending_deletion(void)
//{
//    mangled_ppc("??0s_endpoint_pending_deletion@@QAA@XZ");
//};

//public: c_flags<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<long, unsigned long, 20, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 20, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JK$0BE@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_endpoint_client, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_endpoint_client@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<long, unsigned long, 20, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JK$0BE@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: t_static_ring_buffer<unsigned long, 32>::t_static_ring_buffer<unsigned long, 32>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@K$0CA@@@QAA@XZ");
//};

//public: s_winsock_globals::~s_winsock_globals(void)
//{
//    mangled_ppc("??1s_winsock_globals@@QAA@XZ");
//};

//public: t_static_ring_buffer<unsigned long, 32>::~t_static_ring_buffer<unsigned long, 32>(void)
//{
//    mangled_ppc("??1?$t_static_ring_buffer@K$0CA@@@QAA@XZ");
//};

//void winsock_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fwinsock_globals@@YAXXZ");
//};

//void g_validated_addresses::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_validated_addresses@@YAXXZ");
//};

