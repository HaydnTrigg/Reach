/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::acquire_access_cache(void) volatile;
// public: void c_tag_resource_cache_thread_lock_lock_freeish::release_access_cache_access(class c_tag_resource_cache_file_access_cache *, bool) volatile;
// public: void c_tag_resource_cache_thread_lock_lock_freeish::release_access_cache(class c_tag_resource_cache_file_access_cache *) volatile;
// private: void c_tag_resource_cache_thread_lock_lock_freeish::release_access_cache_internal(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache volatile *) volatile;
// public: void c_tag_resource_cache_thread_lock_lock_freeish::initialize(void);
// public: static void c_tag_resource_cache_thread_lock_lock_freeish::dispose(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::allocate_storage(unsigned long, class c_allocation_interface *);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::initialize_for_new_map(unsigned long, class c_allocation_interface *);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::free_storage(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::dispose_from_old_map(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::verify_safe_to_dispose(void);
// public: static void c_tag_resource_cache_thread_lock_lock_freeish::lock_for_async_update(void);
// public: static void c_tag_resource_cache_thread_lock_lock_freeish::unlock_for_async_update(void);
// public: bool c_tag_resource_cache_thread_lock_lock_freeish::can_update(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::lock_for_blocking_update(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::unlock_for_blocking_update(void);
// public: bool c_tag_resource_cache_thread_lock_lock_freeish::any_unlocked_access_cache(bool);
// public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::acquire_unlocked_access_cache(bool);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::release_unlocked_access_cache(class c_tag_resource_cache_file_access_cache *);
// public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::get_available_access_cache(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::publish_access_cache(class c_tag_resource_cache_file_access_cache *);
// public: long c_tag_resource_cache_thread_lock_lock_freeish::get_access_cache_count(void) const;
// public: void c_tag_resource_cache_thread_lock_lock_freeish::flush_all_access_caches(void);
// private: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache volatile * c_tag_resource_cache_thread_lock_lock_freeish::get_owned_access_cache(class c_tag_resource_cache_file_access_cache *) volatile;
// private: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::get_owned_access_cache(class c_tag_resource_cache_file_access_cache *);
// private: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * c_tag_resource_cache_thread_lock_lock_freeish::allocate_on_release_event(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache *);
// private: void c_tag_resource_cache_thread_lock_lock_freeish::fire_on_release_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *) volatile;
// private: static void c_tag_resource_cache_thread_lock_lock_freeish::queue_access_cache(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache *, class t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3> volatile *);
// private: void c_tag_resource_cache_thread_lock_lock_freeish::set_dpc_event(long) volatile;
// private: void c_tag_resource_cache_thread_lock_lock_freeish::get_dpc_event(long *, bool *);
// private: static bool c_tag_resource_cache_thread_lock_lock_freeish::can_dequeue_access_cache(class t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3> *, bool);
// private: static class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::dequeue_access_cache(class t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3> *, bool);
// public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::acquire(void) volatile;
// public: void c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::acquire_for_publishing(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::allocate_dpc_event(void) volatile;
// public: bool c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::wait_on_dpc_event(bool);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::release(void) volatile;
// public: bool c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::unlocked(void);
// public: void c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::reset(void);
// public: static long s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::get_count(void);
// public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::begin(void);
// public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::end(void);
// public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_synchronized_pointer<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache>::peek(void) const volatile;
// public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_synchronized_pointer<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache>::set(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache *) volatile;
// public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::initialize(void);
// public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::reset(void);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::try_to_allocate_event(void);
// public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::queue_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::acquire_top_event(void);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::release_chain_top_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::requeue_chain_top_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *);
// public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache & s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::operator[]<long>(long);
// public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::initialize_limited(long);
// public: bool t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::valid_event(void const *) const;
// public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::acquire_event_chain(enum e_event_queue_chain_order);
// public: static bool s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::valid<long>(long);
// public: static long s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::get_count(void);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event & s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::operator[]<long>(long);
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event const & s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::operator[]<int>(int) const;
// public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event const & s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::operator[]<long>(long) const;
// public: static bool s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::valid<long>(long);
// public: static bool s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::valid<int>(int);

//public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::acquire_access_cache(void) volatile
//{
//    mangled_ppc("?acquire_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QCAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::release_access_cache_access(class c_tag_resource_cache_file_access_cache *, bool) volatile
//{
//    mangled_ppc("?release_access_cache_access@c_tag_resource_cache_thread_lock_lock_freeish@@QCAXPAVc_tag_resource_cache_file_access_cache@@_N@Z");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::release_access_cache(class c_tag_resource_cache_file_access_cache *) volatile
//{
//    mangled_ppc("?release_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QCAXPAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//private: void c_tag_resource_cache_thread_lock_lock_freeish::release_access_cache_internal(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache volatile *) volatile
//{
//    mangled_ppc("?release_access_cache_internal@c_tag_resource_cache_thread_lock_lock_freeish@@ACAXPCVc_synchronized_access_cache@1@@Z");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: static void c_tag_resource_cache_thread_lock_lock_freeish::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_cache_thread_lock_lock_freeish@@SAXXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::allocate_storage(unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXKPAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::initialize_for_new_map(unsigned long, class c_allocation_interface *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXKPAVc_allocation_interface@@@Z");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::verify_safe_to_dispose(void)
//{
//    mangled_ppc("?verify_safe_to_dispose@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: static void c_tag_resource_cache_thread_lock_lock_freeish::lock_for_async_update(void)
//{
//    mangled_ppc("?lock_for_async_update@c_tag_resource_cache_thread_lock_lock_freeish@@SAXXZ");
//};

//public: static void c_tag_resource_cache_thread_lock_lock_freeish::unlock_for_async_update(void)
//{
//    mangled_ppc("?unlock_for_async_update@c_tag_resource_cache_thread_lock_lock_freeish@@SAXXZ");
//};

//public: bool c_tag_resource_cache_thread_lock_lock_freeish::can_update(void)
//{
//    mangled_ppc("?can_update@c_tag_resource_cache_thread_lock_lock_freeish@@QAA_NXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::lock_for_blocking_update(void)
//{
//    mangled_ppc("?lock_for_blocking_update@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::unlock_for_blocking_update(void)
//{
//    mangled_ppc("?unlock_for_blocking_update@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: bool c_tag_resource_cache_thread_lock_lock_freeish::any_unlocked_access_cache(bool)
//{
//    mangled_ppc("?any_unlocked_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAA_N_N@Z");
//};

//public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::acquire_unlocked_access_cache(bool)
//{
//    mangled_ppc("?acquire_unlocked_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAAPAVc_tag_resource_cache_file_access_cache@@_N@Z");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::release_unlocked_access_cache(class c_tag_resource_cache_file_access_cache *)
//{
//    mangled_ppc("?release_unlocked_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXPAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::get_available_access_cache(void)
//{
//    mangled_ppc("?get_available_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::publish_access_cache(class c_tag_resource_cache_file_access_cache *)
//{
//    mangled_ppc("?publish_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXPAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//public: long c_tag_resource_cache_thread_lock_lock_freeish::get_access_cache_count(void) const
//{
//    mangled_ppc("?get_access_cache_count@c_tag_resource_cache_thread_lock_lock_freeish@@QBAJXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::flush_all_access_caches(void)
//{
//    mangled_ppc("?flush_all_access_caches@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//private: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache volatile * c_tag_resource_cache_thread_lock_lock_freeish::get_owned_access_cache(class c_tag_resource_cache_file_access_cache *) volatile
//{
//    mangled_ppc("?get_owned_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@ACAPCVc_synchronized_access_cache@1@PAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//private: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::get_owned_access_cache(class c_tag_resource_cache_file_access_cache *)
//{
//    mangled_ppc("?get_owned_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@AAAPAVc_synchronized_access_cache@1@PAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//private: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * c_tag_resource_cache_thread_lock_lock_freeish::allocate_on_release_event(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache *)
//{
//    mangled_ppc("?allocate_on_release_event@c_tag_resource_cache_thread_lock_lock_freeish@@AAAPAUs_access_cache_available_event@1@PAVc_synchronized_access_cache@1@@Z");
//};

//private: void c_tag_resource_cache_thread_lock_lock_freeish::fire_on_release_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *) volatile
//{
//    mangled_ppc("?fire_on_release_event@c_tag_resource_cache_thread_lock_lock_freeish@@ACAXPAUs_access_cache_available_event@1@@Z");
//};

//private: static void c_tag_resource_cache_thread_lock_lock_freeish::queue_access_cache(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache *, class t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3> volatile *)
//{
//    mangled_ppc("?queue_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@CAXPAVc_synchronized_access_cache@1@PCV?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@@Z");
//};

//private: void c_tag_resource_cache_thread_lock_lock_freeish::set_dpc_event(long) volatile
//{
//    mangled_ppc("?set_dpc_event@c_tag_resource_cache_thread_lock_lock_freeish@@ACAXJ@Z");
//};

//private: void c_tag_resource_cache_thread_lock_lock_freeish::get_dpc_event(long *, bool *)
//{
//    mangled_ppc("?get_dpc_event@c_tag_resource_cache_thread_lock_lock_freeish@@AAAXPAJPA_N@Z");
//};

//private: static bool c_tag_resource_cache_thread_lock_lock_freeish::can_dequeue_access_cache(class t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3> *, bool)
//{
//    mangled_ppc("?can_dequeue_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@CA_NPAV?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@_N@Z");
//};

//private: static class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::dequeue_access_cache(class t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3> *, bool)
//{
//    mangled_ppc("?dequeue_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@CAPAVc_synchronized_access_cache@1@PAV?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@_N@Z");
//};

//public: class c_tag_resource_cache_file_access_cache * c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::acquire(void) volatile
//{
//    mangled_ppc("?acquire@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QCAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::acquire_for_publishing(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *)
//{
//    mangled_ppc("?acquire_for_publishing@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXPAUs_access_cache_available_event@2@@Z");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::allocate_dpc_event(void) volatile
//{
//    mangled_ppc("?allocate_dpc_event@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QCAXXZ");
//};

//public: bool c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::wait_on_dpc_event(bool)
//{
//    mangled_ppc("?wait_on_dpc_event@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAA_N_N@Z");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::release(void) volatile
//{
//    mangled_ppc("?release@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QCAPAUs_access_cache_available_event@2@XZ");
//};

//public: bool c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::unlocked(void)
//{
//    mangled_ppc("?unlocked@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAA_NXZ");
//};

//public: void c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache::reset(void)
//{
//    mangled_ppc("?reset@c_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@QAAXXZ");
//};

//public: static long s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@SAJXZ");
//};

//public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAVc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@XZ");
//};

//public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::end(void)
//{
//    mangled_ppc("?end@?$s_static_array@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAVc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@XZ");
//};

//public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_synchronized_pointer<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache>::peek(void) const volatile
//{
//    mangled_ppc("?peek@?$c_synchronized_pointer@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@@@QDAPAVc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@XZ");
//};

//public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache * c_synchronized_pointer<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache>::set(class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache *) volatile
//{
//    mangled_ppc("?set@?$c_synchronized_pointer@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@@@QCAPAVc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@PAV23@@Z");
//};

//public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAXXZ");
//};

//public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::reset(void)
//{
//    mangled_ppc("?reset@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAXXZ");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@XZ");
//};

//public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::queue_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAXPAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@@Z");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::acquire_top_event(void)
//{
//    mangled_ppc("?acquire_top_event@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@XZ");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::release_chain_top_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@PAU23@@Z");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::requeue_chain_top_event(struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event *)
//{
//    mangled_ppc("?requeue_chain_top_event@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@PAU23@@Z");
//};

//public: class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache & s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAAAVc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@J@Z");
//};

//public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event * t_event_queue<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAPAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@W4e_event_queue_chain_order@@@Z");
//};

//public: static bool s_static_array<class c_tag_resource_cache_thread_lock_lock_freeish::c_synchronized_access_cache, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_synchronized_access_cache@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@SA_NJ@Z");
//};

//public: static long s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@SAJXZ");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event & s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QAAAAUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@J@Z");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event const & s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QBAABUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@H@Z");
//};

//public: struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event const & s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@QBAABUs_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@J@Z");
//};

//public: static bool s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_tag_resource_cache_thread_lock_lock_freeish::s_access_cache_available_event, 3>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_access_cache_available_event@c_tag_resource_cache_thread_lock_lock_freeish@@$02@@SA_NH@Z");
//};

