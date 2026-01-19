/* ---------- headers */

#include "foundation\threadlib\jobmanager\job_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_jm_work_unit_handle g_default_work_unit; // "?g_default_work_unit@@3Vc_jm_work_unit_handle@@A"
// struct s_job_manager_internal g_jm_internal_data; // "?g_jm_internal_data@@3Us_job_manager_internal@@A"

// class c_job_manager & get_job_manager(void);
// void job_manager_initialize(struct s_critical_section const &, struct s_critical_section const &, struct s_critical_section const &, struct s_semaphore const &, struct s_semaphore const &);
// void job_manager_dispose(void);
// void job_manager_set_default_work_unit(class c_jm_work_unit_handle const &);
// class c_jm_work_unit_handle & job_manager_get_default_work_unit(void);
// struct s_job_manager_internal * get_internal_data(void);
// public: bool c_job_manager::initialize(struct s_critical_section const &, struct s_critical_section const &, struct s_critical_section const &, struct s_semaphore const &, struct s_semaphore const &);
// public: void c_job_manager::dispose(void);
// public: static class c_jm_work_unit_handle c_job_manager::create_work_unit(struct s_work_unit_params const &);
// public: unsigned long s_job_manager_internal::acquire_handle(void);
// public: bool c_work_unit::is_used(void);
// public: void c_work_unit::set_used(void);
// public: void c_work_unit::set_flag(unsigned long);
// public: class c_work_unit * s_job_manager_internal::get_work_unit(unsigned long);
// public: static void c_job_manager::destroy_work_unit(class c_jm_work_unit_handle &);
// public: void s_job_manager_internal::release_handle(unsigned long);
// public: void c_work_unit::unset_flag(unsigned long);
// public: void c_job_manager::register_block_callback(void (*)(void));
// public: void c_job_manager::invoke_block_callback(void);
// public: c_job_manager::c_job_manager(void);
// public: s_job_manager_internal::s_job_manager_internal(void);
// public: c_work_unit::c_work_unit(void);
// public: c_scheduler_fifo::c_scheduler_fifo(void);
// public: c_job_list::c_job_list(void);
// public: c_job_handle_internal::c_job_handle_internal(void);
// public: c_indexed_pool<struct s_il_node, 4096>::c_indexed_pool<struct s_il_node, 4096>(void);
// public: c_job_manager::~c_job_manager(void);
// public: s_job_manager_internal::~s_job_manager_internal(void);
// public: c_work_unit::~c_work_unit(void);
// public: c_scheduler_fifo::~c_scheduler_fifo(void);
// public: c_job_list::~c_job_list(void);
// public: c_job_handle_internal::~c_job_handle_internal(void);
// public: c_indexed_pool<struct s_il_node, 4096>::~c_indexed_pool<struct s_il_node, 4096>(void);
// void g_job_manager::`dynamic atexit destructor'(void);
// void g_default_work_unit::`dynamic atexit destructor'(void);
// void g_jm_internal_data::`dynamic atexit destructor'(void);

//class c_job_manager & get_job_manager(void)
//{
//    mangled_ppc("?get_job_manager@@YAAAVc_job_manager@@XZ");
//};

//void job_manager_initialize(struct s_critical_section const &, struct s_critical_section const &, struct s_critical_section const &, struct s_semaphore const &, struct s_semaphore const &)
//{
//    mangled_ppc("?job_manager_initialize@@YAXABUs_critical_section@@00ABUs_semaphore@@1@Z");
//};

//void job_manager_dispose(void)
//{
//    mangled_ppc("?job_manager_dispose@@YAXXZ");
//};

//void job_manager_set_default_work_unit(class c_jm_work_unit_handle const &)
//{
//    mangled_ppc("?job_manager_set_default_work_unit@@YAXABVc_jm_work_unit_handle@@@Z");
//};

//class c_jm_work_unit_handle & job_manager_get_default_work_unit(void)
//{
//    mangled_ppc("?job_manager_get_default_work_unit@@YAAAVc_jm_work_unit_handle@@XZ");
//};

//struct s_job_manager_internal * get_internal_data(void)
//{
//    mangled_ppc("?get_internal_data@@YAPAUs_job_manager_internal@@XZ");
//};

//public: bool c_job_manager::initialize(struct s_critical_section const &, struct s_critical_section const &, struct s_critical_section const &, struct s_semaphore const &, struct s_semaphore const &)
//{
//    mangled_ppc("?initialize@c_job_manager@@QAA_NABUs_critical_section@@00ABUs_semaphore@@1@Z");
//};

//public: void c_job_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_job_manager@@QAAXXZ");
//};

//public: static class c_jm_work_unit_handle c_job_manager::create_work_unit(struct s_work_unit_params const &)
//{
//    mangled_ppc("?create_work_unit@c_job_manager@@SA?AVc_jm_work_unit_handle@@ABUs_work_unit_params@@@Z");
//};

//public: unsigned long s_job_manager_internal::acquire_handle(void)
//{
//    mangled_ppc("?acquire_handle@s_job_manager_internal@@QAAKXZ");
//};

//public: bool c_work_unit::is_used(void)
//{
//    mangled_ppc("?is_used@c_work_unit@@QAA_NXZ");
//};

//public: void c_work_unit::set_used(void)
//{
//    mangled_ppc("?set_used@c_work_unit@@QAAXXZ");
//};

//public: void c_work_unit::set_flag(unsigned long)
//{
//    mangled_ppc("?set_flag@c_work_unit@@QAAXK@Z");
//};

//public: class c_work_unit * s_job_manager_internal::get_work_unit(unsigned long)
//{
//    mangled_ppc("?get_work_unit@s_job_manager_internal@@QAAPAVc_work_unit@@K@Z");
//};

//public: static void c_job_manager::destroy_work_unit(class c_jm_work_unit_handle &)
//{
//    mangled_ppc("?destroy_work_unit@c_job_manager@@SAXAAVc_jm_work_unit_handle@@@Z");
//};

//public: void s_job_manager_internal::release_handle(unsigned long)
//{
//    mangled_ppc("?release_handle@s_job_manager_internal@@QAAXK@Z");
//};

//public: void c_work_unit::unset_flag(unsigned long)
//{
//    mangled_ppc("?unset_flag@c_work_unit@@QAAXK@Z");
//};

//public: void c_job_manager::register_block_callback(void (*)(void))
//{
//    mangled_ppc("?register_block_callback@c_job_manager@@QAAXP6AXXZ@Z");
//};

//public: void c_job_manager::invoke_block_callback(void)
//{
//    mangled_ppc("?invoke_block_callback@c_job_manager@@QAAXXZ");
//};

//public: c_job_manager::c_job_manager(void)
//{
//    mangled_ppc("??0c_job_manager@@QAA@XZ");
//};

//public: s_job_manager_internal::s_job_manager_internal(void)
//{
//    mangled_ppc("??0s_job_manager_internal@@QAA@XZ");
//};

//public: c_work_unit::c_work_unit(void)
//{
//    mangled_ppc("??0c_work_unit@@QAA@XZ");
//};

//public: c_scheduler_fifo::c_scheduler_fifo(void)
//{
//    mangled_ppc("??0c_scheduler_fifo@@QAA@XZ");
//};

//public: c_job_list::c_job_list(void)
//{
//    mangled_ppc("??0c_job_list@@QAA@XZ");
//};

//public: c_job_handle_internal::c_job_handle_internal(void)
//{
//    mangled_ppc("??0c_job_handle_internal@@QAA@XZ");
//};

//public: c_indexed_pool<struct s_il_node, 4096>::c_indexed_pool<struct s_il_node, 4096>(void)
//{
//    mangled_ppc("??0?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAA@XZ");
//};

//public: c_job_manager::~c_job_manager(void)
//{
//    mangled_ppc("??1c_job_manager@@QAA@XZ");
//};

//public: s_job_manager_internal::~s_job_manager_internal(void)
//{
//    mangled_ppc("??1s_job_manager_internal@@QAA@XZ");
//};

//public: c_work_unit::~c_work_unit(void)
//{
//    mangled_ppc("??1c_work_unit@@QAA@XZ");
//};

//public: c_scheduler_fifo::~c_scheduler_fifo(void)
//{
//    mangled_ppc("??1c_scheduler_fifo@@QAA@XZ");
//};

//public: c_job_list::~c_job_list(void)
//{
//    mangled_ppc("??1c_job_list@@QAA@XZ");
//};

//public: c_job_handle_internal::~c_job_handle_internal(void)
//{
//    mangled_ppc("??1c_job_handle_internal@@QAA@XZ");
//};

//public: c_indexed_pool<struct s_il_node, 4096>::~c_indexed_pool<struct s_il_node, 4096>(void)
//{
//    mangled_ppc("??1?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAA@XZ");
//};

//void g_job_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_job_manager@@YAXXZ");
//};

//void g_default_work_unit::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_default_work_unit@@YAXXZ");
//};

//void g_jm_internal_data::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_jm_internal_data@@YAXXZ");
//};

