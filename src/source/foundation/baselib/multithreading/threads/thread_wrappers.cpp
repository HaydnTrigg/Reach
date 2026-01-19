/* ---------- headers */

#include "foundation\baselib\multithreading\threads\thread_wrappers.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_thread_base::c_thread_base(void);
// merged_84C3A3E8;
// public: virtual c_thread_base::~c_thread_base(void);
// public: void c_thread_base::start_with_parameters(struct s_thread_platform_parameters const *);
// public: void c_thread_base::start(void);
// public: void c_thread_base::resume(void);
// public: void c_thread_base::wait(void);
// public: bool c_thread_base::wait_timeout(long);
// public: void c_thread_base::stop(void);
// public: char const * c_thread_base::get_name(void) const;
// public: void c_thread_base::set_name(char const *);
// public: void c_thread_base::set_name_by_group(char const *, long, long);
// public: long c_thread_base::get_thread_index(void) const;
// public: void c_thread_base::set_thread_index(long);
// public: static void c_thread_base::allocate_thread_indices(long, long *);
// public: struct s_thread_id c_thread_base::get_thread_id(void) const;
// public: unsigned long c_thread_base::do_work_wrapper(void);
// public: unsigned long c_thread_base::get_exit_code(void) const;
// public: bool c_thread_base::has_been_started(void) const;
// public: bool c_thread_base::has_crashed(void) const;
// protected: void c_thread_base::validate_graceful_exit(void) const;
// public: void c_thread_base::on_crash(void);
// public: static unsigned long c_thread_base::entry_point(void *);
// public: c_thread_wrapper::c_thread_wrapper(void);
// merged_84C3AED0;
// ??0c_thread_wrapper@@QAA@Q6AKPAX@Z0@Z;
// ?setup@c_thread_wrapper@@QAAXQ6AKPAX@Z0@Z;
// ?setup_with_thread_index@c_thread_wrapper@@QAAXQ6AKPAX@Z0J@Z;
// protected: virtual unsigned long c_thread_wrapper::do_work(void);
// public: c_thread_crew::c_thread_crew(void);
// public: s_static_array<class c_thread_wrapper, 16>::s_static_array<class c_thread_wrapper, 16>(void);
// ?setup@c_thread_crew@@QAAXPBDJQ6AKPAX@ZPAPAX@Z;
// ?setup_array@c_thread_crew@@QAAXPBDJQ6AKPAX@Z1I@Z;
// public: void c_thread_crew::start(void);
// public: void c_thread_crew::start_with_parameters(struct s_thread_platform_parameters const *, long);
// public: void c_thread_crew::resume(void);
// public: void c_thread_crew::wait(void);
// public: class c_thread_wrapper * c_thread_crew::get_thread(long);
// unsigned long thread_exception_handler(class c_thread_base *, struct s_exception_pointers *, struct s_exception_information *);
// public: static long s_static_array<class c_thread_wrapper, 16>::get_count(void);
// public: void ** s_static_array<void *, 16>::get_elements(void);
// public: bool s_flags<enum e_thread_platform_flags, unsigned long, 1>::test(enum e_thread_platform_flags) const;
// public: class c_thread_wrapper & s_static_array<class c_thread_wrapper, 16>::operator[]<long>(long);
// public: static bool s_static_array<class c_thread_wrapper, 16>::valid<long>(long);

//public: c_thread_base::c_thread_base(void)
//{
//    mangled_ppc("??0c_thread_base@@QAA@XZ");
//};

//merged_84C3A3E8
//{
//    mangled_ppc("merged_84C3A3E8");
//};

//public: virtual c_thread_base::~c_thread_base(void)
//{
//    mangled_ppc("??1c_thread_base@@UAA@XZ");
//};

//public: void c_thread_base::start_with_parameters(struct s_thread_platform_parameters const *)
//{
//    mangled_ppc("?start_with_parameters@c_thread_base@@QAAXPBUs_thread_platform_parameters@@@Z");
//};

//public: void c_thread_base::start(void)
//{
//    mangled_ppc("?start@c_thread_base@@QAAXXZ");
//};

//public: void c_thread_base::resume(void)
//{
//    mangled_ppc("?resume@c_thread_base@@QAAXXZ");
//};

//public: void c_thread_base::wait(void)
//{
//    mangled_ppc("?wait@c_thread_base@@QAAXXZ");
//};

//public: bool c_thread_base::wait_timeout(long)
//{
//    mangled_ppc("?wait_timeout@c_thread_base@@QAA_NJ@Z");
//};

//public: void c_thread_base::stop(void)
//{
//    mangled_ppc("?stop@c_thread_base@@QAAXXZ");
//};

//public: char const * c_thread_base::get_name(void) const
//{
//    mangled_ppc("?get_name@c_thread_base@@QBAPBDXZ");
//};

//public: void c_thread_base::set_name(char const *)
//{
//    mangled_ppc("?set_name@c_thread_base@@QAAXPBD@Z");
//};

//public: void c_thread_base::set_name_by_group(char const *, long, long)
//{
//    mangled_ppc("?set_name_by_group@c_thread_base@@QAAXPBDJJ@Z");
//};

//public: long c_thread_base::get_thread_index(void) const
//{
//    mangled_ppc("?get_thread_index@c_thread_base@@QBAJXZ");
//};

//public: void c_thread_base::set_thread_index(long)
//{
//    mangled_ppc("?set_thread_index@c_thread_base@@QAAXJ@Z");
//};

//public: static void c_thread_base::allocate_thread_indices(long, long *)
//{
//    mangled_ppc("?allocate_thread_indices@c_thread_base@@SAXJPAJ@Z");
//};

//public: struct s_thread_id c_thread_base::get_thread_id(void) const
//{
//    mangled_ppc("?get_thread_id@c_thread_base@@QBA?AUs_thread_id@@XZ");
//};

//public: unsigned long c_thread_base::do_work_wrapper(void)
//{
//    mangled_ppc("?do_work_wrapper@c_thread_base@@QAAKXZ");
//};

//public: unsigned long c_thread_base::get_exit_code(void) const
//{
//    mangled_ppc("?get_exit_code@c_thread_base@@QBAKXZ");
//};

//public: bool c_thread_base::has_been_started(void) const
//{
//    mangled_ppc("?has_been_started@c_thread_base@@QBA_NXZ");
//};

//public: bool c_thread_base::has_crashed(void) const
//{
//    mangled_ppc("?has_crashed@c_thread_base@@QBA_NXZ");
//};

//protected: void c_thread_base::validate_graceful_exit(void) const
//{
//    mangled_ppc("?validate_graceful_exit@c_thread_base@@IBAXXZ");
//};

//public: void c_thread_base::on_crash(void)
//{
//    mangled_ppc("?on_crash@c_thread_base@@QAAXXZ");
//};

//public: static unsigned long c_thread_base::entry_point(void *)
//{
//    mangled_ppc("?entry_point@c_thread_base@@SAKPAX@Z");
//};

//public: c_thread_wrapper::c_thread_wrapper(void)
//{
//    mangled_ppc("??0c_thread_wrapper@@QAA@XZ");
//};

//merged_84C3AED0
//{
//    mangled_ppc("merged_84C3AED0");
//};

//??0c_thread_wrapper@@QAA@Q6AKPAX@Z0@Z
//{
//    mangled_ppc("??0c_thread_wrapper@@QAA@Q6AKPAX@Z0@Z");
//};

//?setup@c_thread_wrapper@@QAAXQ6AKPAX@Z0@Z
//{
//    mangled_ppc("?setup@c_thread_wrapper@@QAAXQ6AKPAX@Z0@Z");
//};

//?setup_with_thread_index@c_thread_wrapper@@QAAXQ6AKPAX@Z0J@Z
//{
//    mangled_ppc("?setup_with_thread_index@c_thread_wrapper@@QAAXQ6AKPAX@Z0J@Z");
//};

//protected: virtual unsigned long c_thread_wrapper::do_work(void)
//{
//    mangled_ppc("?do_work@c_thread_wrapper@@MAAKXZ");
//};

//public: c_thread_crew::c_thread_crew(void)
//{
//    mangled_ppc("??0c_thread_crew@@QAA@XZ");
//};

//public: s_static_array<class c_thread_wrapper, 16>::s_static_array<class c_thread_wrapper, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_thread_wrapper@@$0BA@@@QAA@XZ");
//};

//?setup@c_thread_crew@@QAAXPBDJQ6AKPAX@ZPAPAX@Z
//{
//    mangled_ppc("?setup@c_thread_crew@@QAAXPBDJQ6AKPAX@ZPAPAX@Z");
//};

//?setup_array@c_thread_crew@@QAAXPBDJQ6AKPAX@Z1I@Z
//{
//    mangled_ppc("?setup_array@c_thread_crew@@QAAXPBDJQ6AKPAX@Z1I@Z");
//};

//public: void c_thread_crew::start(void)
//{
//    mangled_ppc("?start@c_thread_crew@@QAAXXZ");
//};

//public: void c_thread_crew::start_with_parameters(struct s_thread_platform_parameters const *, long)
//{
//    mangled_ppc("?start_with_parameters@c_thread_crew@@QAAXPBUs_thread_platform_parameters@@J@Z");
//};

//public: void c_thread_crew::resume(void)
//{
//    mangled_ppc("?resume@c_thread_crew@@QAAXXZ");
//};

//public: void c_thread_crew::wait(void)
//{
//    mangled_ppc("?wait@c_thread_crew@@QAAXXZ");
//};

//public: class c_thread_wrapper * c_thread_crew::get_thread(long)
//{
//    mangled_ppc("?get_thread@c_thread_crew@@QAAPAVc_thread_wrapper@@J@Z");
//};

//unsigned long thread_exception_handler(class c_thread_base *, struct s_exception_pointers *, struct s_exception_information *)
//{
//    mangled_ppc("?thread_exception_handler@@YAKPAVc_thread_base@@PAUs_exception_pointers@@PAUs_exception_information@@@Z");
//};

//public: static long s_static_array<class c_thread_wrapper, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_thread_wrapper@@$0BA@@@SAJXZ");
//};

//public: void ** s_static_array<void *, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAX$0BA@@@QAAPAPAXXZ");
//};

//public: bool s_flags<enum e_thread_platform_flags, unsigned long, 1>::test(enum e_thread_platform_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_thread_platform_flags@@K$00@@QBA_NW4e_thread_platform_flags@@@Z");
//};

//public: class c_thread_wrapper & s_static_array<class c_thread_wrapper, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_thread_wrapper@@$0BA@@@QAAAAVc_thread_wrapper@@J@Z");
//};

//public: static bool s_static_array<class c_thread_wrapper, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_thread_wrapper@@$0BA@@@SA_NJ@Z");
//};

