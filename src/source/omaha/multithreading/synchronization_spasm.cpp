/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_critical_section g_omaha_invalid_critical_section; // "?g_omaha_invalid_critical_section@@3Us_critical_section@@A"
// class s_static_array<struct s_virtual_guard_block, 3> g_omaha_virtual_guard_blocks; // "?g_omaha_virtual_guard_blocks@@3V?$s_static_array@Us_virtual_guard_block@@$02@@A"
// class s_static_array<struct s_busy_wait, 8> g_omaha_busy_waits; // "?g_omaha_busy_waits@@3V?$s_static_array@Us_busy_wait@@$07@@A"
// class s_static_array<struct s_mutex, 1> g_omaha_mutexes; // "?g_omaha_mutexes@@3V?$s_static_array@Us_mutex@@$00@@A"
// class s_static_array<struct s_critical_section, 84> g_omaha_critical_sections; // "?g_omaha_critical_sections@@3V?$s_static_array@Us_critical_section@@$0FE@@@A"
// class s_static_array<struct s_semaphore, 11> g_omaha_semaphores; // "?g_omaha_semaphores@@3V?$s_static_array@Us_semaphore@@$0L@@@A"
// class s_static_array<struct s_synchronization_event, 8> g_omaha_events; // "?g_omaha_events@@3V?$s_static_array@Us_synchronization_event@@$07@@A"
// bool g_display_synchronization_stats; // "?g_display_synchronization_stats@@3_NA"

// void initialize_synchronization_objects(void);
// void create_synchronization_objects(void);
// bool synchronization_objects_initialized(void);
// bool synchronization_objects_ready_for_use(void);
// void destroy_synchronization_objects(void);
// void synchronization_update_stats(unsigned long);
// void render_synchronization_stats(void);
// void release_all_locks_owned_by_thread(void);
// void release_locks_safe_for_crash_release(void);
// void register_event_system_synchronization_objects(struct s_event_synchronization_objects const *);
// char const * get_sync_primitive_name(long, long);
// public: struct s_mutex & s_static_array<struct s_mutex, 1>::operator[]<long>(long);
// public: struct s_synchronization_event & s_static_array<struct s_synchronization_event, 8>::operator[]<long>(long);
// public: struct s_busy_wait & s_static_array<struct s_busy_wait, 8>::operator[]<long>(long);
// public: struct s_critical_section const & s_static_array<struct s_critical_section, 2>::operator[]<long>(long) const;
// public: struct s_semaphore const & s_static_array<struct s_semaphore, 2>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_mutex, 1>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronization_event, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_busy_wait, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_critical_section, 2>::valid<long>(long);
// public: static bool s_static_array<struct s_semaphore, 2>::valid<long>(long);

//void initialize_synchronization_objects(void)
//{
//    mangled_ppc("?initialize_synchronization_objects@@YAXXZ");
//};

//void create_synchronization_objects(void)
//{
//    mangled_ppc("?create_synchronization_objects@@YAXXZ");
//};

//bool synchronization_objects_initialized(void)
//{
//    mangled_ppc("?synchronization_objects_initialized@@YA_NXZ");
//};

//bool synchronization_objects_ready_for_use(void)
//{
//    mangled_ppc("?synchronization_objects_ready_for_use@@YA_NXZ");
//};

//void destroy_synchronization_objects(void)
//{
//    mangled_ppc("?destroy_synchronization_objects@@YAXXZ");
//};

//void synchronization_update_stats(unsigned long)
//{
//    mangled_ppc("?synchronization_update_stats@@YAXK@Z");
//};

//void render_synchronization_stats(void)
//{
//    mangled_ppc("?render_synchronization_stats@@YAXXZ");
//};

//void release_all_locks_owned_by_thread(void)
//{
//    mangled_ppc("?release_all_locks_owned_by_thread@@YAXXZ");
//};

//void release_locks_safe_for_crash_release(void)
//{
//    mangled_ppc("?release_locks_safe_for_crash_release@@YAXXZ");
//};

//void register_event_system_synchronization_objects(struct s_event_synchronization_objects const *)
//{
//    mangled_ppc("?register_event_system_synchronization_objects@@YAXPBUs_event_synchronization_objects@@@Z");
//};

//char const * get_sync_primitive_name(long, long)
//{
//    mangled_ppc("?get_sync_primitive_name@@YAPBDJJ@Z");
//};

//public: struct s_mutex & s_static_array<struct s_mutex, 1>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_mutex@@$00@@QAAAAUs_mutex@@J@Z");
//};

//public: struct s_synchronization_event & s_static_array<struct s_synchronization_event, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_synchronization_event@@$07@@QAAAAUs_synchronization_event@@J@Z");
//};

//public: struct s_busy_wait & s_static_array<struct s_busy_wait, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_busy_wait@@$07@@QAAAAUs_busy_wait@@J@Z");
//};

//public: struct s_critical_section const & s_static_array<struct s_critical_section, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_critical_section@@$01@@QBAABUs_critical_section@@J@Z");
//};

//public: struct s_semaphore const & s_static_array<struct s_semaphore, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_semaphore@@$01@@QBAABUs_semaphore@@J@Z");
//};

//public: static bool s_static_array<struct s_mutex, 1>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_mutex@@$00@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronization_event, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_synchronization_event@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_busy_wait, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_busy_wait@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_critical_section, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_critical_section@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_semaphore, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_semaphore@@$01@@SA_NJ@Z");
//};

