/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool volatile g_signal_active_job_threads; // "?g_signal_active_job_threads@@3_NC"

// unsigned long job_main_thread(void *);
// void job_manager_omaha_initialize(void);
// public: struct s_critical_section const & c_job_manager::get_cs(unsigned long) const;
// public: struct s_semaphore const & c_job_manager::get_semaphore(unsigned long) const;
// enum e_registered_threads operator++(enum e_registered_threads &, int);
// void job_manager_omaha_dispose(void);
// public: c_jm_work_unit_handle::c_jm_work_unit_handle(void);
// void job_manager_block_callback(void);
// bool job_manager_has_any_job_thread_crashed(void);
// public: struct s_semaphore & s_static_array<struct s_semaphore, 11>::operator[]<enum e_synchronization_semaphore>(enum e_synchronization_semaphore);
// public: static bool s_static_array<struct s_semaphore, 11>::valid<enum e_synchronization_semaphore>(enum e_synchronization_semaphore);
// void g_work_unit_handle::`dynamic atexit destructor'(void);

//unsigned long job_main_thread(void *)
//{
//    mangled_ppc("?job_main_thread@@YAKPAX@Z");
//};

//void job_manager_omaha_initialize(void)
//{
//    mangled_ppc("?job_manager_omaha_initialize@@YAXXZ");
//};

//public: struct s_critical_section const & c_job_manager::get_cs(unsigned long) const
//{
//    mangled_ppc("?get_cs@c_job_manager@@QBAABUs_critical_section@@K@Z");
//};

//public: struct s_semaphore const & c_job_manager::get_semaphore(unsigned long) const
//{
//    mangled_ppc("?get_semaphore@c_job_manager@@QBAABUs_semaphore@@K@Z");
//};

//enum e_registered_threads operator++(enum e_registered_threads &, int)
//{
//    mangled_ppc("??E@YA?AW4e_registered_threads@@AAW40@H@Z");
//};

//void job_manager_omaha_dispose(void)
//{
//    mangled_ppc("?job_manager_omaha_dispose@@YAXXZ");
//};

//public: c_jm_work_unit_handle::c_jm_work_unit_handle(void)
//{
//    mangled_ppc("??0c_jm_work_unit_handle@@QAA@XZ");
//};

//void job_manager_block_callback(void)
//{
//    mangled_ppc("?job_manager_block_callback@@YAXXZ");
//};

//bool job_manager_has_any_job_thread_crashed(void)
//{
//    mangled_ppc("?job_manager_has_any_job_thread_crashed@@YA_NXZ");
//};

//public: struct s_semaphore & s_static_array<struct s_semaphore, 11>::operator[]<enum e_synchronization_semaphore>(enum e_synchronization_semaphore)
//{
//    mangled_ppc("??$?AW4e_synchronization_semaphore@@@?$s_static_array@Us_semaphore@@$0L@@@QAAAAUs_semaphore@@W4e_synchronization_semaphore@@@Z");
//};

//public: static bool s_static_array<struct s_semaphore, 11>::valid<enum e_synchronization_semaphore>(enum e_synchronization_semaphore)
//{
//    mangled_ppc("??$valid@W4e_synchronization_semaphore@@@?$s_static_array@Us_semaphore@@$0L@@@SA_NW4e_synchronization_semaphore@@@Z");
//};

//void g_work_unit_handle::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_work_unit_handle@@YAXXZ");
//};

