/* ---------- headers */

#include "omaha\tag_files\tag_resource_threading.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_registered_threads c_tag_resource_thread_access::get_current_thread_index(void);
// private: class c_tag_resource_cache_file_access_cache * c_tag_resource_thread_access::get_current_thread_access_cache(void);
// public: bool c_tag_resource_thread_access::resource_available(long);
// public: bool c_tag_resource_thread_access::resource_test_access_state(long, enum e_tag_resource_access_state_bit);
// public: void * c_tag_resource_thread_access::get_resource_data(long);
// public: void * c_tag_resource_thread_access::try_to_get_resource_data(long);
// public: unsigned __int64 c_tag_resource_thread_access::get_resource_snapshot(long);
// public: bool c_tag_resource_thread_access::all_resource_snapshots_valid(class c_wrapped_array<unsigned __int64const>);
// public: void * c_thread_safeish_tag_resource_cache::get_resource_data(long);
// private: class c_tag_resource_cache_new * c_thread_safeish_tag_resource_cache::get_resource_cache(void);
// private: class c_tag_resource_thread_access * c_thread_safeish_tag_resource_cache::get_thread_access(void);
// public: void c_tag_resource_thread_access::initialize(void);
// public: static void c_tag_resource_thread_access::dispose(void);
// public: void c_tag_resource_thread_access::initialize_for_new_map(class c_tag_resource_cache_thread_lock_lock_freeish volatile *);
// public: void c_tag_resource_thread_access::dispose_from_old_map(void);
// public: bool c_tag_resource_thread_access::current_thread_has_access(void) const;
// public: void c_tag_resource_thread_access::lock_for_current_thread(void);
// public: void c_tag_resource_thread_access::unlock_for_current_thread(void);
// public: struct s_resource_access_cookie * c_tag_resource_thread_access::unlock_access_for_current_thread_dpc(void);
// public: bool c_tag_resource_thread_access::locked_for_current_thread_UGLY(void);
// private: struct s_resource_access_cookie * c_tag_resource_thread_access::unlock_access_for_current_thread_internal(bool);
// public: void c_tag_resource_thread_access::unlock_usage_for_current_thread(struct s_resource_access_cookie *);
// public: void c_thread_safeish_tag_resource_cache::initialize(void);
// public: void c_thread_safeish_tag_resource_cache::dispose(void);
// public: void c_thread_safeish_tag_resource_cache::load_required_data_only_blocking(class c_io_result *);
// public: void c_thread_safeish_tag_resource_cache::load_pending_data_only_blocking(class c_io_result *);
// public: void c_thread_safeish_tag_resource_cache::update_required_data_assuming_incremental_changes(class c_io_result *);
// public: void c_thread_safeish_tag_resource_cache::unload_everything(void);
// public: void c_thread_safeish_tag_resource_cache::fall_on_sword(void);
// public: void c_thread_safeish_tag_resource_cache::allocate_storage(unsigned long, unsigned long, bool, class c_allocation_interface *);
// public: bool c_thread_safeish_tag_resource_cache::initialize_for_new_map(unsigned long, unsigned long, bool, class c_tag_resource_runtime_listener *, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_datum_handler *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_runtime_active_set *, class c_tag_resource_cache_file_prefetch_set *, class c_allocation_interface *, class c_tag_resource_page_range_allocator *);
// public: void c_thread_safeish_tag_resource_cache::prepare_for_disposal_from_old_map(void);
// public: void c_thread_safeish_tag_resource_cache::free_storage(void);
// public: void c_thread_safeish_tag_resource_cache::dispose_from_old_map(void);
// private: void c_thread_safeish_tag_resource_cache::report_unavailable_resource(long);
// public: long const & c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::operator[](long) const;
// public: class c_tag_resource_cache_file_access_cache *& c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::operator[](long);
// public: void c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::set_all(class c_tag_resource_cache_file_access_cache *const &);
// public: c_status_value<bool, 0>::c_status_value<bool, 0>(bool const &);
// public: bool & c_status_value<bool, 0>::operator=(bool const &);
// public: bool & c_status_value<bool, 0>::operator bool &(void);
// public: class c_tag_resource_cache_file_access_cache ** c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>::begin(void);
// public: class c_tag_resource_cache_file_access_cache ** c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::begin(void);
// public: class c_tag_resource_cache_file_access_cache ** c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::end(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::valid_index(long) const;
// public: class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> >::get_super_class(void);
// public: class c_tag_resource_cache_file_access_cache ** c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>::end(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::count(void) const;
// public: long c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>::count(void) const;
// public: class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> >::get_super_class(void) const;
// public: c_wrapped_array<long>::ctor<17>(long (&)[17]);
// public: c_wrapped_array<class c_tag_resource_cache_file_access_cache *>::ctor<17>(class c_tag_resource_cache_file_access_cache * (&)[17]);
// void std::fill<class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *const &);
// class c_tag_resource_cache_file_access_cache ** std::_Checked_base<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **&);
// void std::_Fill<class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *const &);
// class c_tag_resource_cache_file_access_cache ** std::_Checked_base<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **const &);
// void std::_Debug_range2<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<class c_tag_resource_cache_file_access_cache *>(class c_tag_resource_cache_file_access_cache **, wchar_t const *, unsigned int);

//private: static enum e_registered_threads c_tag_resource_thread_access::get_current_thread_index(void)
//{
//    mangled_ppc("?get_current_thread_index@c_tag_resource_thread_access@@CA?AW4e_registered_threads@@XZ");
//};

//private: class c_tag_resource_cache_file_access_cache * c_tag_resource_thread_access::get_current_thread_access_cache(void)
//{
//    mangled_ppc("?get_current_thread_access_cache@c_tag_resource_thread_access@@AAAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: bool c_tag_resource_thread_access::resource_available(long)
//{
//    mangled_ppc("?resource_available@c_tag_resource_thread_access@@QAA_NJ@Z");
//};

//public: bool c_tag_resource_thread_access::resource_test_access_state(long, enum e_tag_resource_access_state_bit)
//{
//    mangled_ppc("?resource_test_access_state@c_tag_resource_thread_access@@QAA_NJW4e_tag_resource_access_state_bit@@@Z");
//};

//public: void * c_tag_resource_thread_access::get_resource_data(long)
//{
//    mangled_ppc("?get_resource_data@c_tag_resource_thread_access@@QAAPAXJ@Z");
//};

//public: void * c_tag_resource_thread_access::try_to_get_resource_data(long)
//{
//    mangled_ppc("?try_to_get_resource_data@c_tag_resource_thread_access@@QAAPAXJ@Z");
//};

//public: unsigned __int64 c_tag_resource_thread_access::get_resource_snapshot(long)
//{
//    mangled_ppc("?get_resource_snapshot@c_tag_resource_thread_access@@QAA_KJ@Z");
//};

//public: bool c_tag_resource_thread_access::all_resource_snapshots_valid(class c_wrapped_array<unsigned __int64const>)
//{
//    mangled_ppc("?all_resource_snapshots_valid@c_tag_resource_thread_access@@QAA_NV?$c_wrapped_array@$$CB_K@@@Z");
//};

//public: void * c_thread_safeish_tag_resource_cache::get_resource_data(long)
//{
//    mangled_ppc("?get_resource_data@c_thread_safeish_tag_resource_cache@@QAAPAXJ@Z");
//};

//private: class c_tag_resource_cache_new * c_thread_safeish_tag_resource_cache::get_resource_cache(void)
//{
//    mangled_ppc("?get_resource_cache@c_thread_safeish_tag_resource_cache@@AAAPAVc_tag_resource_cache_new@@XZ");
//};

//private: class c_tag_resource_thread_access * c_thread_safeish_tag_resource_cache::get_thread_access(void)
//{
//    mangled_ppc("?get_thread_access@c_thread_safeish_tag_resource_cache@@AAAPAVc_tag_resource_thread_access@@XZ");
//};

//public: void c_tag_resource_thread_access::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_thread_access@@QAAXXZ");
//};

//public: static void c_tag_resource_thread_access::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_thread_access@@SAXXZ");
//};

//public: void c_tag_resource_thread_access::initialize_for_new_map(class c_tag_resource_cache_thread_lock_lock_freeish volatile *)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_thread_access@@QAAXPCVc_tag_resource_cache_thread_lock_lock_freeish@@@Z");
//};

//public: void c_tag_resource_thread_access::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_thread_access@@QAAXXZ");
//};

//public: bool c_tag_resource_thread_access::current_thread_has_access(void) const
//{
//    mangled_ppc("?current_thread_has_access@c_tag_resource_thread_access@@QBA_NXZ");
//};

//public: void c_tag_resource_thread_access::lock_for_current_thread(void)
//{
//    mangled_ppc("?lock_for_current_thread@c_tag_resource_thread_access@@QAAXXZ");
//};

//public: void c_tag_resource_thread_access::unlock_for_current_thread(void)
//{
//    mangled_ppc("?unlock_for_current_thread@c_tag_resource_thread_access@@QAAXXZ");
//};

//public: struct s_resource_access_cookie * c_tag_resource_thread_access::unlock_access_for_current_thread_dpc(void)
//{
//    mangled_ppc("?unlock_access_for_current_thread_dpc@c_tag_resource_thread_access@@QAAPAUs_resource_access_cookie@@XZ");
//};

//public: bool c_tag_resource_thread_access::locked_for_current_thread_UGLY(void)
//{
//    mangled_ppc("?locked_for_current_thread_UGLY@c_tag_resource_thread_access@@QAA_NXZ");
//};

//private: struct s_resource_access_cookie * c_tag_resource_thread_access::unlock_access_for_current_thread_internal(bool)
//{
//    mangled_ppc("?unlock_access_for_current_thread_internal@c_tag_resource_thread_access@@AAAPAUs_resource_access_cookie@@_N@Z");
//};

//public: void c_tag_resource_thread_access::unlock_usage_for_current_thread(struct s_resource_access_cookie *)
//{
//    mangled_ppc("?unlock_usage_for_current_thread@c_tag_resource_thread_access@@QAAXPAUs_resource_access_cookie@@@Z");
//};

//public: void c_thread_safeish_tag_resource_cache::initialize(void)
//{
//    mangled_ppc("?initialize@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//public: void c_thread_safeish_tag_resource_cache::dispose(void)
//{
//    mangled_ppc("?dispose@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//public: void c_thread_safeish_tag_resource_cache::load_required_data_only_blocking(class c_io_result *)
//{
//    mangled_ppc("?load_required_data_only_blocking@c_thread_safeish_tag_resource_cache@@QAAXPAVc_io_result@@@Z");
//};

//public: void c_thread_safeish_tag_resource_cache::load_pending_data_only_blocking(class c_io_result *)
//{
//    mangled_ppc("?load_pending_data_only_blocking@c_thread_safeish_tag_resource_cache@@QAAXPAVc_io_result@@@Z");
//};

//public: void c_thread_safeish_tag_resource_cache::update_required_data_assuming_incremental_changes(class c_io_result *)
//{
//    mangled_ppc("?update_required_data_assuming_incremental_changes@c_thread_safeish_tag_resource_cache@@QAAXPAVc_io_result@@@Z");
//};

//public: void c_thread_safeish_tag_resource_cache::unload_everything(void)
//{
//    mangled_ppc("?unload_everything@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//public: void c_thread_safeish_tag_resource_cache::fall_on_sword(void)
//{
//    mangled_ppc("?fall_on_sword@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//public: void c_thread_safeish_tag_resource_cache::allocate_storage(unsigned long, unsigned long, bool, class c_allocation_interface *)
//{
//    mangled_ppc("?allocate_storage@c_thread_safeish_tag_resource_cache@@QAAXKK_NPAVc_allocation_interface@@@Z");
//};

//public: bool c_thread_safeish_tag_resource_cache::initialize_for_new_map(unsigned long, unsigned long, bool, class c_tag_resource_runtime_listener *, class c_tag_resource_cache_file_reader *, class c_tag_resource_cache_file_datum_handler *, class c_tag_resource_cache_file_location_handler *, class c_tag_resource_runtime_active_set *, class c_tag_resource_cache_file_prefetch_set *, class c_allocation_interface *, class c_tag_resource_page_range_allocator *)
//{
//    mangled_ppc("?initialize_for_new_map@c_thread_safeish_tag_resource_cache@@QAA_NKK_NPAVc_tag_resource_runtime_listener@@PAVc_tag_resource_cache_file_reader@@PAVc_tag_resource_cache_file_datum_handler@@PAVc_tag_resource_cache_file_location_handler@@PAVc_tag_resource_runtime_active_set@@PAVc_tag_resource_cache_file_prefetch_set@@PAVc_allocation_interface@@PAVc_tag_resource_page_range_allocator@@@Z");
//};

//public: void c_thread_safeish_tag_resource_cache::prepare_for_disposal_from_old_map(void)
//{
//    mangled_ppc("?prepare_for_disposal_from_old_map@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//public: void c_thread_safeish_tag_resource_cache::free_storage(void)
//{
//    mangled_ppc("?free_storage@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//public: void c_thread_safeish_tag_resource_cache::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_thread_safeish_tag_resource_cache@@QAAXXZ");
//};

//private: void c_thread_safeish_tag_resource_cache::report_unavailable_resource(long)
//{
//    mangled_ppc("?report_unavailable_resource@c_thread_safeish_tag_resource_cache@@AAAXJ@Z");
//};

//public: long const & c_array_operator_interface<class c_wrapped_array_no_init<long>, long>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@J@@J@@QBAABJJ@Z");
//};

//public: class c_tag_resource_cache_file_access_cache *& c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@PAVc_tag_resource_cache_file_access_cache@@@@QAAAAPAVc_tag_resource_cache_file_access_cache@@J@Z");
//};

//public: void c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::set_all(class c_tag_resource_cache_file_access_cache *const &)
//{
//    mangled_ppc("?set_all@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@PAVc_tag_resource_cache_file_access_cache@@@@QAAXABQAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//public: c_status_value<bool, 0>::c_status_value<bool, 0>(bool const &)
//{
//    mangled_ppc("??0?$c_status_value@_N$0A@@@QAA@AB_N@Z");
//};

//public: bool & c_status_value<bool, 0>::operator=(bool const &)
//{
//    mangled_ppc("??4?$c_status_value@_N$0A@@@QAAAA_NAB_N@Z");
//};

//public: bool & c_status_value<bool, 0>::operator bool &(void)
//{
//    mangled_ppc("??B?$c_status_value@_N$0A@@@QAAAA_NXZ");
//};

//public: class c_tag_resource_cache_file_access_cache ** c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@QAAPAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: class c_tag_resource_cache_file_access_cache ** c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@PAVc_tag_resource_cache_file_access_cache@@@@QAAPAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: class c_tag_resource_cache_file_access_cache ** c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::end(void)
//{
//    mangled_ppc("?end@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@PAVc_tag_resource_cache_file_access_cache@@@@QAAPAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@PAVc_tag_resource_cache_file_access_cache@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@@@QAAPAV?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@XZ");
//};

//public: class c_tag_resource_cache_file_access_cache ** c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@QAAPAPAVc_tag_resource_cache_file_access_cache@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>, class c_tag_resource_cache_file_access_cache *>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@PAVc_tag_resource_cache_file_access_cache@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_tag_resource_cache_file_access_cache *> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@@@QBAPBV?$c_wrapped_array_no_init@PAVc_tag_resource_cache_file_access_cache@@@@XZ");
//};

//public: c_wrapped_array<long>::ctor<17>(long (&)[17])
//{
//    mangled_ppc("??$?0$0BB@@?$c_wrapped_array@J@@QAA@AAY0BB@J@Z");
//};

//public: c_wrapped_array<class c_tag_resource_cache_file_access_cache *>::ctor<17>(class c_tag_resource_cache_file_access_cache * (&)[17])
//{
//    mangled_ppc("??$?0$0BB@@?$c_wrapped_array@PAVc_tag_resource_cache_file_access_cache@@@@QAA@AAY0BB@PAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//void std::fill<class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *const &)
//{
//    mangled_ppc("??$fill@PAPAVc_tag_resource_cache_file_access_cache@@PAV1@@std@@YAXPAPAVc_tag_resource_cache_file_access_cache@@0ABQAV1@@Z");
//};

//class c_tag_resource_cache_file_access_cache ** std::_Checked_base<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **&)
//{
//    mangled_ppc("??$_Checked_base@PAPAVc_tag_resource_cache_file_access_cache@@@std@@YAPAPAVc_tag_resource_cache_file_access_cache@@AAPAPAV1@@Z");
//};

//void std::_Fill<class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache *const &)
//{
//    mangled_ppc("??$_Fill@PAPAVc_tag_resource_cache_file_access_cache@@PAV1@@std@@YAXPAPAVc_tag_resource_cache_file_access_cache@@0ABQAV1@@Z");
//};

//class c_tag_resource_cache_file_access_cache ** std::_Checked_base<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAPAVc_tag_resource_cache_file_access_cache@@@std@@YAPAPAVc_tag_resource_cache_file_access_cache@@AAPAPAV1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAPAVc_tag_resource_cache_file_access_cache@@@std@@YAXPAPAVc_tag_resource_cache_file_access_cache@@0PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **const &)
//{
//    mangled_ppc("??$_Iter_cat@PAPAVc_tag_resource_cache_file_access_cache@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAPAVc_tag_resource_cache_file_access_cache@@@Z");
//};

//void std::_Debug_range2<class c_tag_resource_cache_file_access_cache **>(class c_tag_resource_cache_file_access_cache **, class c_tag_resource_cache_file_access_cache **, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAPAVc_tag_resource_cache_file_access_cache@@@std@@YAXPAPAVc_tag_resource_cache_file_access_cache@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<class c_tag_resource_cache_file_access_cache *>(class c_tag_resource_cache_file_access_cache **, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@PAVc_tag_resource_cache_file_access_cache@@@std@@YAXPAPAVc_tag_resource_cache_file_access_cache@@PB_WI@Z");
//};

