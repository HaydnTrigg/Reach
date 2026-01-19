/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_critical_section_instance, 100>::k_element_count; // "?k_element_count@?$s_static_array@Vc_critical_section_instance@@$0GE@@@2JB"
// public: static long const s_static_array<class c_synchronization_handle, 4>::k_element_count; // "?k_element_count@?$s_static_array@Vc_synchronization_handle@@$03@@2JB"
// public: static long const s_static_array<class c_synchronization_handle, 10>::k_element_count; // "?k_element_count@?$s_static_array@Vc_synchronization_handle@@$09@@2JB"
// public: static long const s_static_array<class c_semaphore_instance, 13>::k_element_count; // "?k_element_count@?$s_static_array@Vc_semaphore_instance@@$0N@@@2JB"
// public: static long const s_static_array<class c_synchronization_object, 3>::k_element_count; // "?k_element_count@?$s_static_array@Vc_synchronization_object@@$02@@2JB"
// public: static long const s_static_array<class c_lock_tracker, 23>::k_element_count; // "?k_element_count@?$s_static_array@Vc_lock_tracker@@$0BH@@@2JB"
// char const *const k_hierarchy_dump_text_filename; // "?k_hierarchy_dump_text_filename@@3PBDB"
// char const *const k_hierarchy_dump_graphviz_filename; // "?k_hierarchy_dump_graphviz_filename@@3PBDB"
// struct s_synchronization_globals g_synchronization_globals; // "?g_synchronization_globals@@3Us_synchronization_globals@@A"
// class c_lock_tracker *g_synchronization_lock_tracker; // "?g_synchronization_lock_tracker@@3PAVc_lock_tracker@@A"

// void synchronization_manager_initialize(class c_allocation_interface *);
// void synchronization_manager_dispose(void);
// bool synchronization_manager_initialized(void);
// long synchronization_declare_object_group(void);
// void synchronization_create_object_group(long);
// void synchronization_destroy_object_group(long);
// bool synchronization_object_group_created(long);
// void synchronization_declare_threads_explicit(long const *, long);
// void synchronization_declare_threads(long, long *);
// void synchronization_register_thread(long);
// void synchronization_unregister_thread(long);
// bool synchronization_is_thread_registered(void);
// long synchronization_get_maximum_declared_threads(void);
// long synchronization_get_declared_threads(void);
// long synchronization_get_available_thread_declarations(void);
// void synchronization_release_objects_owned_by_thread(void);
// void synchronization_release_crash_required_objects_owned_by_thread(void);
// void synchronization_enable_lock_enforcement(bool);
// long synchronization_get_current_thread_index(void);
// class c_lock_hierarchy * synchronization_get_lock_hierarchy(void);
// public: bool c_lock_hierarchy::is_finalized(void) const;
// class c_lock_hierarchy const * synchronization_get_lock_hierarchy_const(void);
// unsigned long synchronization_declare_critical_section(long, struct s_critical_section_definition const *);
// unsigned long synchronization_declare_mutex(long, struct s_mutex_definition const *);
// unsigned long synchronization_declare_synchronization_event(long, struct s_synchronization_event_definition const *);
// unsigned long synchronization_declare_semaphore(long, struct s_semaphore_definition const *);
// unsigned long synchronization_declare_busy_wait(long, struct s_busy_wait_definition const *);
// unsigned long synchronization_declare_virtual_guard_block(long, struct s_virtual_guard_block_definition const *);
// char const * synchronization_object_get_name(unsigned long);
// long synchronization_object_get_lock_node_index(unsigned long);
// class c_synchronization_object * synchronization_get_object(unsigned long);
// class c_critical_section_instance * synchronization_get_critical_section(unsigned long);
// class c_synchronization_handle * synchronization_get_mutex(unsigned long);
// class c_synchronization_handle * synchronization_get_synchronization_event(unsigned long);
// class c_semaphore_instance * synchronization_get_semaphore(unsigned long);
// class c_synchronization_object * synchronization_get_virtual_guard_block(unsigned long);
// struct s_synchronization_event_definition const * synchronization_get_synchronization_event_definition(unsigned long);
// struct s_semaphore_definition const * synchronization_get_semaphore_definition(unsigned long);
// bool wait_for_single_object_internal(void *, long);
// public: c_synchronization_block_timer::c_synchronization_block_timer(unsigned long, long);
// public: c_synchronization_block_timer::~c_synchronization_block_timer(void);
// long create_lock_node_index(long, unsigned long, char const *);
// public: bool c_static_stack<struct s_critical_section_declaration, 100>::valid(long) const;
// public: bool c_static_stack<struct s_critical_section_declaration, 100>::full(void) const;
// public: long c_static_stack<struct s_critical_section_declaration, 100>::count(void) const;
// public: void c_static_stack<struct s_critical_section_declaration, 100>::clear(void);
// public: void c_static_stack<struct s_critical_section_declaration, 100>::resize(long);
// public: long c_static_stack<struct s_critical_section_declaration, 100>::push(void);
// public: struct s_critical_section_declaration & c_static_stack<struct s_critical_section_declaration, 100>::operator[](long);
// public: bool c_static_stack<struct s_mutex_declaration, 4>::valid(long) const;
// public: bool c_static_stack<struct s_mutex_declaration, 4>::full(void) const;
// public: long c_static_stack<struct s_mutex_declaration, 4>::count(void) const;
// public: void c_static_stack<struct s_mutex_declaration, 4>::clear(void);
// public: void c_static_stack<struct s_mutex_declaration, 4>::resize(long);
// public: long c_static_stack<struct s_mutex_declaration, 4>::push(void);
// public: struct s_mutex_declaration & c_static_stack<struct s_mutex_declaration, 4>::operator[](long);
// public: bool c_static_stack<struct s_event_declaration, 10>::valid(long) const;
// public: bool c_static_stack<struct s_event_declaration, 10>::full(void) const;
// public: long c_static_stack<struct s_event_declaration, 10>::count(void) const;
// public: void c_static_stack<struct s_event_declaration, 10>::clear(void);
// public: void c_static_stack<struct s_event_declaration, 10>::resize(long);
// public: long c_static_stack<struct s_event_declaration, 10>::push(void);
// public: struct s_event_declaration & c_static_stack<struct s_event_declaration, 10>::operator[](long);
// public: bool c_static_stack<struct s_semaphore_declaration, 13>::valid(long) const;
// public: bool c_static_stack<struct s_semaphore_declaration, 13>::full(void) const;
// public: long c_static_stack<struct s_semaphore_declaration, 13>::count(void) const;
// public: void c_static_stack<struct s_semaphore_declaration, 13>::clear(void);
// public: void c_static_stack<struct s_semaphore_declaration, 13>::resize(long);
// public: long c_static_stack<struct s_semaphore_declaration, 13>::push(void);
// public: struct s_semaphore_declaration & c_static_stack<struct s_semaphore_declaration, 13>::operator[](long);
// public: bool c_static_stack<struct s_busy_wait_declaration, 10>::valid(long) const;
// public: bool c_static_stack<struct s_busy_wait_declaration, 10>::full(void) const;
// public: long c_static_stack<struct s_busy_wait_declaration, 10>::count(void) const;
// public: void c_static_stack<struct s_busy_wait_declaration, 10>::clear(void);
// public: void c_static_stack<struct s_busy_wait_declaration, 10>::resize(long);
// public: long c_static_stack<struct s_busy_wait_declaration, 10>::push(void);
// public: struct s_busy_wait_declaration & c_static_stack<struct s_busy_wait_declaration, 10>::operator[](long);
// public: bool c_static_stack<struct s_virtual_guard_block_declaration, 3>::valid(long) const;
// public: bool c_static_stack<struct s_virtual_guard_block_declaration, 3>::full(void) const;
// public: long c_static_stack<struct s_virtual_guard_block_declaration, 3>::count(void) const;
// public: void c_static_stack<struct s_virtual_guard_block_declaration, 3>::clear(void);
// public: void c_static_stack<struct s_virtual_guard_block_declaration, 3>::resize(long);
// public: long c_static_stack<struct s_virtual_guard_block_declaration, 3>::push(void);
// public: struct s_virtual_guard_block_declaration & c_static_stack<struct s_virtual_guard_block_declaration, 3>::operator[](long);
// public: void c_synchronized_bitvector<23>::clear(void);
// public: bool c_synchronized_bitvector<23>::test_bit(long) const;
// public: void c_synchronized_bitvector<23>::set_bit(long, bool);
// public: bool c_static_stack<struct s_critical_section_declaration, 100>::valid(void) const;
// public: bool c_static_stack<struct s_mutex_declaration, 4>::valid(void) const;
// public: bool c_static_stack<struct s_event_declaration, 10>::valid(void) const;
// public: bool c_static_stack<struct s_semaphore_declaration, 13>::valid(void) const;
// public: bool c_static_stack<struct s_busy_wait_declaration, 10>::valid(void) const;
// public: bool c_static_stack<struct s_virtual_guard_block_declaration, 3>::valid(void) const;
// public: class c_synchronized_int32& c_synchronized_int32_array<1>::get_member(long);
// public: class c_synchronized_int32const & c_synchronized_int32_array<1>::get_member_const(long) const;
// public: void c_synchronized_int32_array<1>::set_array(long);
// public: class c_critical_section_instance & s_static_array<class c_critical_section_instance, 100>::operator[]<long>(long);
// public: class c_synchronization_handle & s_static_array<class c_synchronization_handle, 4>::operator[]<long>(long);
// public: class c_synchronization_handle & s_static_array<class c_synchronization_handle, 10>::operator[]<long>(long);
// public: class c_semaphore_instance & s_static_array<class c_semaphore_instance, 13>::operator[]<long>(long);
// public: class c_synchronization_object & s_static_array<class c_synchronization_object, 3>::operator[]<long>(long);
// public: class c_lock_tracker & s_static_array<class c_lock_tracker, 23>::operator[]<long>(long);
// public: static bool s_static_array<class c_critical_section_instance, 100>::valid<long>(long);
// public: static bool s_static_array<class c_synchronization_handle, 4>::valid<long>(long);
// public: static bool s_static_array<class c_synchronization_handle, 10>::valid<long>(long);
// public: static bool s_static_array<class c_semaphore_instance, 13>::valid<long>(long);
// public: static bool s_static_array<class c_synchronization_object, 3>::valid<long>(long);
// public: static bool s_static_array<class c_lock_tracker, 23>::valid<long>(long);
// public: s_synchronization_globals::s_synchronization_globals(void);
// public: c_lock_hierarchy::c_lock_hierarchy(void);
// public: s_static_array<class c_critical_section_instance, 100>::s_static_array<class c_critical_section_instance, 100>(void);
// public: c_critical_section_instance::c_critical_section_instance(void);
// public: c_synchronization_object::c_synchronization_object(void);
// public: s_static_array<class c_synchronization_handle, 4>::s_static_array<class c_synchronization_handle, 4>(void);
// public: c_synchronization_handle::c_synchronization_handle(void);
// public: s_static_array<class c_synchronization_handle, 10>::s_static_array<class c_synchronization_handle, 10>(void);
// public: s_static_array<class c_semaphore_instance, 13>::s_static_array<class c_semaphore_instance, 13>(void);
// public: c_semaphore_instance::c_semaphore_instance(void);
// public: s_static_array<class c_synchronization_object, 3>::s_static_array<class c_synchronization_object, 3>(void);
// public: s_static_array<class c_lock_tracker, 23>::s_static_array<class c_lock_tracker, 23>(void);
// public: c_lock_tracker::c_lock_tracker(void);
// public: c_static_stack<struct s_lock_tracker_entry, 32>::c_static_stack<struct s_lock_tracker_entry, 32>(void);
// public: c_static_stack<struct s_critical_section_declaration, 100>::c_static_stack<struct s_critical_section_declaration, 100>(void);
// public: c_static_stack<struct s_mutex_declaration, 4>::c_static_stack<struct s_mutex_declaration, 4>(void);
// public: c_static_stack<struct s_event_declaration, 10>::c_static_stack<struct s_event_declaration, 10>(void);
// public: c_static_stack<struct s_semaphore_declaration, 13>::c_static_stack<struct s_semaphore_declaration, 13>(void);
// public: c_static_stack<struct s_busy_wait_declaration, 10>::c_static_stack<struct s_busy_wait_declaration, 10>(void);
// public: c_static_stack<struct s_virtual_guard_block_declaration, 3>::c_static_stack<struct s_virtual_guard_block_declaration, 3>(void);
// public: c_synchronized_bitvector<23>::c_synchronized_bitvector<23>(void);
// public: c_synchronized_int32_array<1>::c_synchronized_int32_array<1>(void);
// public: s_synchronization_globals::~s_synchronization_globals(void);
// public: c_lock_hierarchy::~c_lock_hierarchy(void);
// public: s_static_array<class c_critical_section_instance, 100>::~s_static_array<class c_critical_section_instance, 100>(void);
// public: c_critical_section_instance::~c_critical_section_instance(void);
// public: c_synchronization_object::~c_synchronization_object(void);
// public: s_static_array<class c_synchronization_handle, 4>::~s_static_array<class c_synchronization_handle, 4>(void);
// public: c_synchronization_handle::~c_synchronization_handle(void);
// public: s_static_array<class c_synchronization_handle, 10>::~s_static_array<class c_synchronization_handle, 10>(void);
// public: s_static_array<class c_semaphore_instance, 13>::~s_static_array<class c_semaphore_instance, 13>(void);
// public: c_semaphore_instance::~c_semaphore_instance(void);
// public: s_static_array<class c_synchronization_object, 3>::~s_static_array<class c_synchronization_object, 3>(void);
// public: s_static_array<class c_lock_tracker, 23>::~s_static_array<class c_lock_tracker, 23>(void);
// public: c_lock_tracker::~c_lock_tracker(void);
// public: c_synchronized_bitvector<23>::~c_synchronized_bitvector<23>(void);
// public: c_synchronized_int32_array<1>::~c_synchronized_int32_array<1>(void);
// void g_synchronization_globals::`dynamic atexit destructor'(void);

//void synchronization_manager_initialize(class c_allocation_interface *)
//{
//    mangled_ppc("?synchronization_manager_initialize@@YAXPAVc_allocation_interface@@@Z");
//};

//void synchronization_manager_dispose(void)
//{
//    mangled_ppc("?synchronization_manager_dispose@@YAXXZ");
//};

//bool synchronization_manager_initialized(void)
//{
//    mangled_ppc("?synchronization_manager_initialized@@YA_NXZ");
//};

//long synchronization_declare_object_group(void)
//{
//    mangled_ppc("?synchronization_declare_object_group@@YAJXZ");
//};

//void synchronization_create_object_group(long)
//{
//    mangled_ppc("?synchronization_create_object_group@@YAXJ@Z");
//};

//void synchronization_destroy_object_group(long)
//{
//    mangled_ppc("?synchronization_destroy_object_group@@YAXJ@Z");
//};

//bool synchronization_object_group_created(long)
//{
//    mangled_ppc("?synchronization_object_group_created@@YA_NJ@Z");
//};

//void synchronization_declare_threads_explicit(long const *, long)
//{
//    mangled_ppc("?synchronization_declare_threads_explicit@@YAXPBJJ@Z");
//};

//void synchronization_declare_threads(long, long *)
//{
//    mangled_ppc("?synchronization_declare_threads@@YAXJPAJ@Z");
//};

//void synchronization_register_thread(long)
//{
//    mangled_ppc("?synchronization_register_thread@@YAXJ@Z");
//};

//void synchronization_unregister_thread(long)
//{
//    mangled_ppc("?synchronization_unregister_thread@@YAXJ@Z");
//};

//bool synchronization_is_thread_registered(void)
//{
//    mangled_ppc("?synchronization_is_thread_registered@@YA_NXZ");
//};

//long synchronization_get_maximum_declared_threads(void)
//{
//    mangled_ppc("?synchronization_get_maximum_declared_threads@@YAJXZ");
//};

//long synchronization_get_declared_threads(void)
//{
//    mangled_ppc("?synchronization_get_declared_threads@@YAJXZ");
//};

//long synchronization_get_available_thread_declarations(void)
//{
//    mangled_ppc("?synchronization_get_available_thread_declarations@@YAJXZ");
//};

//void synchronization_release_objects_owned_by_thread(void)
//{
//    mangled_ppc("?synchronization_release_objects_owned_by_thread@@YAXXZ");
//};

//void synchronization_release_crash_required_objects_owned_by_thread(void)
//{
//    mangled_ppc("?synchronization_release_crash_required_objects_owned_by_thread@@YAXXZ");
//};

//void synchronization_enable_lock_enforcement(bool)
//{
//    mangled_ppc("?synchronization_enable_lock_enforcement@@YAX_N@Z");
//};

//long synchronization_get_current_thread_index(void)
//{
//    mangled_ppc("?synchronization_get_current_thread_index@@YAJXZ");
//};

//class c_lock_hierarchy * synchronization_get_lock_hierarchy(void)
//{
//    mangled_ppc("?synchronization_get_lock_hierarchy@@YAPAVc_lock_hierarchy@@XZ");
//};

//public: bool c_lock_hierarchy::is_finalized(void) const
//{
//    mangled_ppc("?is_finalized@c_lock_hierarchy@@QBA_NXZ");
//};

//class c_lock_hierarchy const * synchronization_get_lock_hierarchy_const(void)
//{
//    mangled_ppc("?synchronization_get_lock_hierarchy_const@@YAPBVc_lock_hierarchy@@XZ");
//};

//unsigned long synchronization_declare_critical_section(long, struct s_critical_section_definition const *)
//{
//    mangled_ppc("?synchronization_declare_critical_section@@YAKJPBUs_critical_section_definition@@@Z");
//};

//unsigned long synchronization_declare_mutex(long, struct s_mutex_definition const *)
//{
//    mangled_ppc("?synchronization_declare_mutex@@YAKJPBUs_mutex_definition@@@Z");
//};

//unsigned long synchronization_declare_synchronization_event(long, struct s_synchronization_event_definition const *)
//{
//    mangled_ppc("?synchronization_declare_synchronization_event@@YAKJPBUs_synchronization_event_definition@@@Z");
//};

//unsigned long synchronization_declare_semaphore(long, struct s_semaphore_definition const *)
//{
//    mangled_ppc("?synchronization_declare_semaphore@@YAKJPBUs_semaphore_definition@@@Z");
//};

//unsigned long synchronization_declare_busy_wait(long, struct s_busy_wait_definition const *)
//{
//    mangled_ppc("?synchronization_declare_busy_wait@@YAKJPBUs_busy_wait_definition@@@Z");
//};

//unsigned long synchronization_declare_virtual_guard_block(long, struct s_virtual_guard_block_definition const *)
//{
//    mangled_ppc("?synchronization_declare_virtual_guard_block@@YAKJPBUs_virtual_guard_block_definition@@@Z");
//};

//char const * synchronization_object_get_name(unsigned long)
//{
//    mangled_ppc("?synchronization_object_get_name@@YAPBDK@Z");
//};

//long synchronization_object_get_lock_node_index(unsigned long)
//{
//    mangled_ppc("?synchronization_object_get_lock_node_index@@YAJK@Z");
//};

//class c_synchronization_object * synchronization_get_object(unsigned long)
//{
//    mangled_ppc("?synchronization_get_object@@YAPAVc_synchronization_object@@K@Z");
//};

//class c_critical_section_instance * synchronization_get_critical_section(unsigned long)
//{
//    mangled_ppc("?synchronization_get_critical_section@@YAPAVc_critical_section_instance@@K@Z");
//};

//class c_synchronization_handle * synchronization_get_mutex(unsigned long)
//{
//    mangled_ppc("?synchronization_get_mutex@@YAPAVc_synchronization_handle@@K@Z");
//};

//class c_synchronization_handle * synchronization_get_synchronization_event(unsigned long)
//{
//    mangled_ppc("?synchronization_get_synchronization_event@@YAPAVc_synchronization_handle@@K@Z");
//};

//class c_semaphore_instance * synchronization_get_semaphore(unsigned long)
//{
//    mangled_ppc("?synchronization_get_semaphore@@YAPAVc_semaphore_instance@@K@Z");
//};

//class c_synchronization_object * synchronization_get_virtual_guard_block(unsigned long)
//{
//    mangled_ppc("?synchronization_get_virtual_guard_block@@YAPAVc_synchronization_object@@K@Z");
//};

//struct s_synchronization_event_definition const * synchronization_get_synchronization_event_definition(unsigned long)
//{
//    mangled_ppc("?synchronization_get_synchronization_event_definition@@YAPBUs_synchronization_event_definition@@K@Z");
//};

//struct s_semaphore_definition const * synchronization_get_semaphore_definition(unsigned long)
//{
//    mangled_ppc("?synchronization_get_semaphore_definition@@YAPBUs_semaphore_definition@@K@Z");
//};

//bool wait_for_single_object_internal(void *, long)
//{
//    mangled_ppc("?wait_for_single_object_internal@@YA_NPAXJ@Z");
//};

//public: c_synchronization_block_timer::c_synchronization_block_timer(unsigned long, long)
//{
//    mangled_ppc("??0c_synchronization_block_timer@@QAA@KJ@Z");
//};

//public: c_synchronization_block_timer::~c_synchronization_block_timer(void)
//{
//    mangled_ppc("??1c_synchronization_block_timer@@QAA@XZ");
//};

//long create_lock_node_index(long, unsigned long, char const *)
//{
//    mangled_ppc("?create_lock_node_index@@YAJJKPBD@Z");
//};

//public: bool c_static_stack<struct s_critical_section_declaration, 100>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_critical_section_declaration, 100>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_critical_section_declaration, 100>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_critical_section_declaration, 100>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QAAXXZ");
//};

//public: void c_static_stack<struct s_critical_section_declaration, 100>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QAAXJ@Z");
//};

//public: long c_static_stack<struct s_critical_section_declaration, 100>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QAAJXZ");
//};

//public: struct s_critical_section_declaration & c_static_stack<struct s_critical_section_declaration, 100>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QAAAAUs_critical_section_declaration@@J@Z");
//};

//public: bool c_static_stack<struct s_mutex_declaration, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_mutex_declaration@@$03@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_mutex_declaration, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_mutex_declaration@@$03@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_mutex_declaration, 4>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_mutex_declaration@@$03@@QBAJXZ");
//};

//public: void c_static_stack<struct s_mutex_declaration, 4>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_mutex_declaration@@$03@@QAAXXZ");
//};

//public: void c_static_stack<struct s_mutex_declaration, 4>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_mutex_declaration@@$03@@QAAXJ@Z");
//};

//public: long c_static_stack<struct s_mutex_declaration, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_mutex_declaration@@$03@@QAAJXZ");
//};

//public: struct s_mutex_declaration & c_static_stack<struct s_mutex_declaration, 4>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_mutex_declaration@@$03@@QAAAAUs_mutex_declaration@@J@Z");
//};

//public: bool c_static_stack<struct s_event_declaration, 10>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_event_declaration@@$09@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_event_declaration, 10>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_event_declaration@@$09@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_event_declaration, 10>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_event_declaration@@$09@@QBAJXZ");
//};

//public: void c_static_stack<struct s_event_declaration, 10>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_event_declaration@@$09@@QAAXXZ");
//};

//public: void c_static_stack<struct s_event_declaration, 10>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_event_declaration@@$09@@QAAXJ@Z");
//};

//public: long c_static_stack<struct s_event_declaration, 10>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_event_declaration@@$09@@QAAJXZ");
//};

//public: struct s_event_declaration & c_static_stack<struct s_event_declaration, 10>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_event_declaration@@$09@@QAAAAUs_event_declaration@@J@Z");
//};

//public: bool c_static_stack<struct s_semaphore_declaration, 13>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_semaphore_declaration, 13>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_semaphore_declaration, 13>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_semaphore_declaration, 13>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QAAXXZ");
//};

//public: void c_static_stack<struct s_semaphore_declaration, 13>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QAAXJ@Z");
//};

//public: long c_static_stack<struct s_semaphore_declaration, 13>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QAAJXZ");
//};

//public: struct s_semaphore_declaration & c_static_stack<struct s_semaphore_declaration, 13>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_semaphore_declaration@@$0N@@@QAAAAUs_semaphore_declaration@@J@Z");
//};

//public: bool c_static_stack<struct s_busy_wait_declaration, 10>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_busy_wait_declaration@@$09@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_busy_wait_declaration, 10>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_busy_wait_declaration@@$09@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_busy_wait_declaration, 10>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_busy_wait_declaration@@$09@@QBAJXZ");
//};

//public: void c_static_stack<struct s_busy_wait_declaration, 10>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_busy_wait_declaration@@$09@@QAAXXZ");
//};

//public: void c_static_stack<struct s_busy_wait_declaration, 10>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_busy_wait_declaration@@$09@@QAAXJ@Z");
//};

//public: long c_static_stack<struct s_busy_wait_declaration, 10>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_busy_wait_declaration@@$09@@QAAJXZ");
//};

//public: struct s_busy_wait_declaration & c_static_stack<struct s_busy_wait_declaration, 10>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_busy_wait_declaration@@$09@@QAAAAUs_busy_wait_declaration@@J@Z");
//};

//public: bool c_static_stack<struct s_virtual_guard_block_declaration, 3>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_virtual_guard_block_declaration, 3>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_virtual_guard_block_declaration, 3>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QBAJXZ");
//};

//public: void c_static_stack<struct s_virtual_guard_block_declaration, 3>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QAAXXZ");
//};

//public: void c_static_stack<struct s_virtual_guard_block_declaration, 3>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QAAXJ@Z");
//};

//public: long c_static_stack<struct s_virtual_guard_block_declaration, 3>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QAAJXZ");
//};

//public: struct s_virtual_guard_block_declaration & c_static_stack<struct s_virtual_guard_block_declaration, 3>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QAAAAUs_virtual_guard_block_declaration@@J@Z");
//};

//public: void c_synchronized_bitvector<23>::clear(void)
//{
//    mangled_ppc("?clear@?$c_synchronized_bitvector@$0BH@@@QAAXXZ");
//};

//public: bool c_synchronized_bitvector<23>::test_bit(long) const
//{
//    mangled_ppc("?test_bit@?$c_synchronized_bitvector@$0BH@@@QBA_NJ@Z");
//};

//public: void c_synchronized_bitvector<23>::set_bit(long, bool)
//{
//    mangled_ppc("?set_bit@?$c_synchronized_bitvector@$0BH@@@QAAXJ_N@Z");
//};

//public: bool c_static_stack<struct s_critical_section_declaration, 100>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_mutex_declaration, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_mutex_declaration@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_event_declaration, 10>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_event_declaration@@$09@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_semaphore_declaration, 13>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_semaphore_declaration@@$0N@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_busy_wait_declaration, 10>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_busy_wait_declaration@@$09@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_virtual_guard_block_declaration, 3>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QBA_NXZ");
//};

//public: class c_synchronized_int32& c_synchronized_int32_array<1>::get_member(long)
//{
//    mangled_ppc("?get_member@?$c_synchronized_int32_array@$00@@QAAAAVc_synchronized_int32@@J@Z");
//};

//public: class c_synchronized_int32const & c_synchronized_int32_array<1>::get_member_const(long) const
//{
//    mangled_ppc("?get_member_const@?$c_synchronized_int32_array@$00@@QBAABVc_synchronized_int32@@J@Z");
//};

//public: void c_synchronized_int32_array<1>::set_array(long)
//{
//    mangled_ppc("?set_array@?$c_synchronized_int32_array@$00@@QAAXJ@Z");
//};

//public: class c_critical_section_instance & s_static_array<class c_critical_section_instance, 100>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_critical_section_instance@@$0GE@@@QAAAAVc_critical_section_instance@@J@Z");
//};

//public: class c_synchronization_handle & s_static_array<class c_synchronization_handle, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_synchronization_handle@@$03@@QAAAAVc_synchronization_handle@@J@Z");
//};

//public: class c_synchronization_handle & s_static_array<class c_synchronization_handle, 10>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_synchronization_handle@@$09@@QAAAAVc_synchronization_handle@@J@Z");
//};

//public: class c_semaphore_instance & s_static_array<class c_semaphore_instance, 13>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_semaphore_instance@@$0N@@@QAAAAVc_semaphore_instance@@J@Z");
//};

//public: class c_synchronization_object & s_static_array<class c_synchronization_object, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_synchronization_object@@$02@@QAAAAVc_synchronization_object@@J@Z");
//};

//public: class c_lock_tracker & s_static_array<class c_lock_tracker, 23>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_lock_tracker@@$0BH@@@QAAAAVc_lock_tracker@@J@Z");
//};

//public: static bool s_static_array<class c_critical_section_instance, 100>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_critical_section_instance@@$0GE@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_synchronization_handle, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_synchronization_handle@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_synchronization_handle, 10>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_synchronization_handle@@$09@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_semaphore_instance, 13>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_semaphore_instance@@$0N@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_synchronization_object, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_synchronization_object@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_lock_tracker, 23>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_lock_tracker@@$0BH@@@SA_NJ@Z");
//};

//public: s_synchronization_globals::s_synchronization_globals(void)
//{
//    mangled_ppc("??0s_synchronization_globals@@QAA@XZ");
//};

//public: c_lock_hierarchy::c_lock_hierarchy(void)
//{
//    mangled_ppc("??0c_lock_hierarchy@@QAA@XZ");
//};

//public: s_static_array<class c_critical_section_instance, 100>::s_static_array<class c_critical_section_instance, 100>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_critical_section_instance@@$0GE@@@QAA@XZ");
//};

//public: c_critical_section_instance::c_critical_section_instance(void)
//{
//    mangled_ppc("??0c_critical_section_instance@@QAA@XZ");
//};

//public: c_synchronization_object::c_synchronization_object(void)
//{
//    mangled_ppc("??0c_synchronization_object@@QAA@XZ");
//};

//public: s_static_array<class c_synchronization_handle, 4>::s_static_array<class c_synchronization_handle, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_synchronization_handle@@$03@@QAA@XZ");
//};

//public: c_synchronization_handle::c_synchronization_handle(void)
//{
//    mangled_ppc("??0c_synchronization_handle@@QAA@XZ");
//};

//public: s_static_array<class c_synchronization_handle, 10>::s_static_array<class c_synchronization_handle, 10>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_synchronization_handle@@$09@@QAA@XZ");
//};

//public: s_static_array<class c_semaphore_instance, 13>::s_static_array<class c_semaphore_instance, 13>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_semaphore_instance@@$0N@@@QAA@XZ");
//};

//public: c_semaphore_instance::c_semaphore_instance(void)
//{
//    mangled_ppc("??0c_semaphore_instance@@QAA@XZ");
//};

//public: s_static_array<class c_synchronization_object, 3>::s_static_array<class c_synchronization_object, 3>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_synchronization_object@@$02@@QAA@XZ");
//};

//public: s_static_array<class c_lock_tracker, 23>::s_static_array<class c_lock_tracker, 23>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_lock_tracker@@$0BH@@@QAA@XZ");
//};

//public: c_lock_tracker::c_lock_tracker(void)
//{
//    mangled_ppc("??0c_lock_tracker@@QAA@XZ");
//};

//public: c_static_stack<struct s_lock_tracker_entry, 32>::c_static_stack<struct s_lock_tracker_entry, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAA@XZ");
//};

//public: c_static_stack<struct s_critical_section_declaration, 100>::c_static_stack<struct s_critical_section_declaration, 100>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_critical_section_declaration@@$0GE@@@QAA@XZ");
//};

//public: c_static_stack<struct s_mutex_declaration, 4>::c_static_stack<struct s_mutex_declaration, 4>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_mutex_declaration@@$03@@QAA@XZ");
//};

//public: c_static_stack<struct s_event_declaration, 10>::c_static_stack<struct s_event_declaration, 10>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_event_declaration@@$09@@QAA@XZ");
//};

//public: c_static_stack<struct s_semaphore_declaration, 13>::c_static_stack<struct s_semaphore_declaration, 13>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_semaphore_declaration@@$0N@@@QAA@XZ");
//};

//public: c_static_stack<struct s_busy_wait_declaration, 10>::c_static_stack<struct s_busy_wait_declaration, 10>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_busy_wait_declaration@@$09@@QAA@XZ");
//};

//public: c_static_stack<struct s_virtual_guard_block_declaration, 3>::c_static_stack<struct s_virtual_guard_block_declaration, 3>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_virtual_guard_block_declaration@@$02@@QAA@XZ");
//};

//public: c_synchronized_bitvector<23>::c_synchronized_bitvector<23>(void)
//{
//    mangled_ppc("??0?$c_synchronized_bitvector@$0BH@@@QAA@XZ");
//};

//public: c_synchronized_int32_array<1>::c_synchronized_int32_array<1>(void)
//{
//    mangled_ppc("??0?$c_synchronized_int32_array@$00@@QAA@XZ");
//};

//public: s_synchronization_globals::~s_synchronization_globals(void)
//{
//    mangled_ppc("??1s_synchronization_globals@@QAA@XZ");
//};

//public: c_lock_hierarchy::~c_lock_hierarchy(void)
//{
//    mangled_ppc("??1c_lock_hierarchy@@QAA@XZ");
//};

//public: s_static_array<class c_critical_section_instance, 100>::~s_static_array<class c_critical_section_instance, 100>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_critical_section_instance@@$0GE@@@QAA@XZ");
//};

//public: c_critical_section_instance::~c_critical_section_instance(void)
//{
//    mangled_ppc("??1c_critical_section_instance@@QAA@XZ");
//};

//public: c_synchronization_object::~c_synchronization_object(void)
//{
//    mangled_ppc("??1c_synchronization_object@@QAA@XZ");
//};

//public: s_static_array<class c_synchronization_handle, 4>::~s_static_array<class c_synchronization_handle, 4>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_synchronization_handle@@$03@@QAA@XZ");
//};

//public: c_synchronization_handle::~c_synchronization_handle(void)
//{
//    mangled_ppc("??1c_synchronization_handle@@QAA@XZ");
//};

//public: s_static_array<class c_synchronization_handle, 10>::~s_static_array<class c_synchronization_handle, 10>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_synchronization_handle@@$09@@QAA@XZ");
//};

//public: s_static_array<class c_semaphore_instance, 13>::~s_static_array<class c_semaphore_instance, 13>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_semaphore_instance@@$0N@@@QAA@XZ");
//};

//public: c_semaphore_instance::~c_semaphore_instance(void)
//{
//    mangled_ppc("??1c_semaphore_instance@@QAA@XZ");
//};

//public: s_static_array<class c_synchronization_object, 3>::~s_static_array<class c_synchronization_object, 3>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_synchronization_object@@$02@@QAA@XZ");
//};

//public: s_static_array<class c_lock_tracker, 23>::~s_static_array<class c_lock_tracker, 23>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_lock_tracker@@$0BH@@@QAA@XZ");
//};

//public: c_lock_tracker::~c_lock_tracker(void)
//{
//    mangled_ppc("??1c_lock_tracker@@QAA@XZ");
//};

//public: c_synchronized_bitvector<23>::~c_synchronized_bitvector<23>(void)
//{
//    mangled_ppc("??1?$c_synchronized_bitvector@$0BH@@@QAA@XZ");
//};

//public: c_synchronized_int32_array<1>::~c_synchronized_int32_array<1>(void)
//{
//    mangled_ppc("??1?$c_synchronized_int32_array@$00@@QAA@XZ");
//};

//void g_synchronization_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_synchronization_globals@@YAXXZ");
//};

