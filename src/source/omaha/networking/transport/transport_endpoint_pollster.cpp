/* ---------- headers */

#include "omaha\networking\transport\transport_endpoint_pollster.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_polling_endpoint, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_polling_endpoint@@$01@@2JB"
// struct s_endpoint_pollster_globals endpoint_pollster_globals; // "?endpoint_pollster_globals@@3Us_endpoint_pollster_globals@@A"

// void transport_endpoint_pollster_initialize(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void transport_endpoint_pollster_dispose(void);
// long transport_endpoint_pollster_allocate_endpoint(struct transport_endpoint *);
// void transport_endpoint_pollster_update_threadsafe_references(struct transport_endpoint *, long);
// void transport_endpoint_pollster_update(void);
// long transport_endpoint_pollster_read_from(long, unsigned char *, long, struct transport_address *, unsigned long *);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void transport_lock_resources_for_endpoint_reading(void);
// void transport_unlock_resources_for_endpoint_reading(void);
// long transport_endpoint_pollster_read_datagram(long, unsigned char *, long, struct transport_address *, unsigned long *);
// void transport_endpoint_pollster_remove_head_datagram_from_polling_endpoint(long);
// void transport_endpoint_pollster_free_datagram(struct s_datagram *);
// void transport_endpoint_pollster_retrieve_datagram_internal(long, struct s_datagram_payload_header *, unsigned char *, long);
// bool transport_endpoint_pollster_lock(enum e_pollster_lock_purpose, enum e_pollster_lock_blocking_policy);
// void transport_endpoint_pollster_unlock(enum e_pollster_lock_purpose);
// bool transport_endpoint_pollster_locked(enum e_pollster_lock_purpose);
// void transport_endpoint_pollster_update_internal(void);
// void transport_endpoint_pollster_update_endpoints_locked(void);
// void transport_endpoint_pollster_write_datagram(long, struct transport_address const *, unsigned char *, long);
// struct s_datagram * transport_endpoint_pollster_allocate_datagram(void);
// long transport_endpoint_pollster_write_datagram_payload(unsigned char *, long, struct s_datagram_payload_header const *);
// void transport_endpoint_pollster_remove_datagram_internal(void);
// void transport_endpoint_pollster_notify_endpoint_of_removed_payload(long, long, struct s_datagram_payload_header const *);
// void transport_endpoint_pollster_internal_free_endpoint(long);
// void transport_endpoint_pollster_update_profiling(void);
// public: static long s_static_array<struct s_polling_endpoint, 2>::get_count(void);
// public: long c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::count(void) const;
// public: void c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::push_back(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> const &);
// public: class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> * c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::get_elements(void);
// public: c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>(void);
// public: long c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::push(void);
// public: class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> * c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::get(long);
// public: bool c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::valid(long) const;
// public: bool c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::full(void) const;
// public: bool c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::valid(void) const;
// public: struct s_polling_endpoint & s_static_array<struct s_polling_endpoint, 2>::operator[]<long>(long);
// public: static bool s_static_array<struct s_polling_endpoint, 2>::valid<long>(long);
// public: s_endpoint_pollster_globals::s_endpoint_pollster_globals(void);
// public: c_ring_stream::c_ring_stream(void);
// public: s_endpoint_pollster_globals::~s_endpoint_pollster_globals(void);
// public: c_ring_stream::~c_ring_stream(void);
// void endpoint_pollster_globals::`dynamic atexit destructor'(void);

//void transport_endpoint_pollster_initialize(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_initialize@@YAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void transport_endpoint_pollster_dispose(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_dispose@@YAXXZ");
//};

//long transport_endpoint_pollster_allocate_endpoint(struct transport_endpoint *)
//{
//    mangled_ppc("?transport_endpoint_pollster_allocate_endpoint@@YAJPAUtransport_endpoint@@@Z");
//};

//void transport_endpoint_pollster_update_threadsafe_references(struct transport_endpoint *, long)
//{
//    mangled_ppc("?transport_endpoint_pollster_update_threadsafe_references@@YAXPAUtransport_endpoint@@J@Z");
//};

//void transport_endpoint_pollster_update(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_update@@YAXXZ");
//};

//long transport_endpoint_pollster_read_from(long, unsigned char *, long, struct transport_address *, unsigned long *)
//{
//    mangled_ppc("?transport_endpoint_pollster_read_from@@YAJJPAEJPAUtransport_address@@PAK@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void transport_lock_resources_for_endpoint_reading(void)
//{
//    mangled_ppc("?transport_lock_resources_for_endpoint_reading@@YAXXZ");
//};

//void transport_unlock_resources_for_endpoint_reading(void)
//{
//    mangled_ppc("?transport_unlock_resources_for_endpoint_reading@@YAXXZ");
//};

//long transport_endpoint_pollster_read_datagram(long, unsigned char *, long, struct transport_address *, unsigned long *)
//{
//    mangled_ppc("?transport_endpoint_pollster_read_datagram@@YAJJPAEJPAUtransport_address@@PAK@Z");
//};

//void transport_endpoint_pollster_remove_head_datagram_from_polling_endpoint(long)
//{
//    mangled_ppc("?transport_endpoint_pollster_remove_head_datagram_from_polling_endpoint@@YAXJ@Z");
//};

//void transport_endpoint_pollster_free_datagram(struct s_datagram *)
//{
//    mangled_ppc("?transport_endpoint_pollster_free_datagram@@YAXPAUs_datagram@@@Z");
//};

//void transport_endpoint_pollster_retrieve_datagram_internal(long, struct s_datagram_payload_header *, unsigned char *, long)
//{
//    mangled_ppc("?transport_endpoint_pollster_retrieve_datagram_internal@@YAXJPAUs_datagram_payload_header@@PAEJ@Z");
//};

//bool transport_endpoint_pollster_lock(enum e_pollster_lock_purpose, enum e_pollster_lock_blocking_policy)
//{
//    mangled_ppc("?transport_endpoint_pollster_lock@@YA_NW4e_pollster_lock_purpose@@W4e_pollster_lock_blocking_policy@@@Z");
//};

//void transport_endpoint_pollster_unlock(enum e_pollster_lock_purpose)
//{
//    mangled_ppc("?transport_endpoint_pollster_unlock@@YAXW4e_pollster_lock_purpose@@@Z");
//};

//bool transport_endpoint_pollster_locked(enum e_pollster_lock_purpose)
//{
//    mangled_ppc("?transport_endpoint_pollster_locked@@YA_NW4e_pollster_lock_purpose@@@Z");
//};

//void transport_endpoint_pollster_update_internal(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_update_internal@@YAXXZ");
//};

//void transport_endpoint_pollster_update_endpoints_locked(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_update_endpoints_locked@@YAXXZ");
//};

//void transport_endpoint_pollster_write_datagram(long, struct transport_address const *, unsigned char *, long)
//{
//    mangled_ppc("?transport_endpoint_pollster_write_datagram@@YAXJPBUtransport_address@@PAEJ@Z");
//};

//struct s_datagram * transport_endpoint_pollster_allocate_datagram(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_allocate_datagram@@YAPAUs_datagram@@XZ");
//};

//long transport_endpoint_pollster_write_datagram_payload(unsigned char *, long, struct s_datagram_payload_header const *)
//{
//    mangled_ppc("?transport_endpoint_pollster_write_datagram_payload@@YAJPAEJPBUs_datagram_payload_header@@@Z");
//};

//void transport_endpoint_pollster_remove_datagram_internal(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_remove_datagram_internal@@YAXXZ");
//};

//void transport_endpoint_pollster_notify_endpoint_of_removed_payload(long, long, struct s_datagram_payload_header const *)
//{
//    mangled_ppc("?transport_endpoint_pollster_notify_endpoint_of_removed_payload@@YAXJJPBUs_datagram_payload_header@@@Z");
//};

//void transport_endpoint_pollster_internal_free_endpoint(long)
//{
//    mangled_ppc("?transport_endpoint_pollster_internal_free_endpoint@@YAXJ@Z");
//};

//void transport_endpoint_pollster_update_profiling(void)
//{
//    mangled_ppc("?transport_endpoint_pollster_update_profiling@@YAXXZ");
//};

//public: static long s_static_array<struct s_polling_endpoint, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_polling_endpoint@@$01@@SAJXZ");
//};

//public: long c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QBAJXZ");
//};

//public: void c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::push_back(class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QAAXABV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@@Z");
//};

//public: class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> * c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QAAPAV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@XZ");
//};

//public: c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QAA@XZ");
//};

//public: long c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QAAJXZ");
//};

//public: class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4> * c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QAAPAV?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@J@Z");
//};

//public: bool c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_opaque_data<struct s_threadsafe_endpoint_reference_internal, 4, 4>, 2>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_opaque_data@Us_threadsafe_endpoint_reference_internal@@$03$03@@$01@@QBA_NXZ");
//};

//public: struct s_polling_endpoint & s_static_array<struct s_polling_endpoint, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_polling_endpoint@@$01@@QAAAAUs_polling_endpoint@@J@Z");
//};

//public: static bool s_static_array<struct s_polling_endpoint, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_polling_endpoint@@$01@@SA_NJ@Z");
//};

//public: s_endpoint_pollster_globals::s_endpoint_pollster_globals(void)
//{
//    mangled_ppc("??0s_endpoint_pollster_globals@@QAA@XZ");
//};

//public: c_ring_stream::c_ring_stream(void)
//{
//    mangled_ppc("??0c_ring_stream@@QAA@XZ");
//};

//public: s_endpoint_pollster_globals::~s_endpoint_pollster_globals(void)
//{
//    mangled_ppc("??1s_endpoint_pollster_globals@@QAA@XZ");
//};

//public: c_ring_stream::~c_ring_stream(void)
//{
//    mangled_ppc("??1c_ring_stream@@QAA@XZ");
//};

//void endpoint_pollster_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fendpoint_pollster_globals@@YAXXZ");
//};

