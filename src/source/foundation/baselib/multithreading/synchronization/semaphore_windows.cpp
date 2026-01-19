/* ---------- headers */

#include "foundation\baselib\multithreading\synchronization\semaphore_windows.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<long, 23>::k_element_count; // "?k_element_count@?$s_static_array@J$0BH@@@2JB"
// struct s_semaphore const k_semaphore_invalid; // "?k_semaphore_invalid@@3Us_semaphore@@B"

// struct s_semaphore semaphore_declare(long, struct s_semaphore_definition const *);
// void semaphore_create(class c_semaphore_instance *, unsigned long, long, struct s_semaphore_definition const *);
// public: void c_synchronization_handle::set_handle(void *);
// void semaphore_destroy(class c_semaphore_instance *);
// public: void * c_synchronization_handle::get_handle(void) const;
// long semaphore_release_internal(struct s_semaphore, bool *);
// public: bool c_semaphore_instance::is_universal(void) const;
// void semaphore_take_internal(struct s_semaphore);
// bool semaphore_try_and_take_internal(struct s_semaphore);
// bool semaphore_is_valid(struct s_semaphore);
// long semaphore_get_initial_count(struct s_semaphore);
// long semaphore_get_maximum_count(struct s_semaphore);
// long semaphore_get_current_thread_reference_count(struct s_semaphore);
// public: void c_semaphore_instance::reset_reference_counts(bool);
// public: void c_semaphore_instance::force_release_if_owned_by_thread(long);
// public: unsigned long c_synchronization_object::get_object_id(void) const;
// public: long c_semaphore_instance::get_reference_count(void) const;
// public: void c_semaphore_instance::add_reference(void);
// public: void c_semaphore_instance::remove_reference(void);
// public: void s_static_array<long, 23>::set_all(long const &);
// public: long const & s_static_array<long, 23>::operator[]<long>(long) const;
// public: long & s_static_array<long, 23>::operator[]<long>(long);
// public: static bool s_static_array<long, 23>::valid<long>(long);

//struct s_semaphore semaphore_declare(long, struct s_semaphore_definition const *)
//{
//    mangled_ppc("?semaphore_declare@@YA?AUs_semaphore@@JPBUs_semaphore_definition@@@Z");
//};

//void semaphore_create(class c_semaphore_instance *, unsigned long, long, struct s_semaphore_definition const *)
//{
//    mangled_ppc("?semaphore_create@@YAXPAVc_semaphore_instance@@KJPBUs_semaphore_definition@@@Z");
//};

//public: void c_synchronization_handle::set_handle(void *)
//{
//    mangled_ppc("?set_handle@c_synchronization_handle@@QAAXPAX@Z");
//};

//void semaphore_destroy(class c_semaphore_instance *)
//{
//    mangled_ppc("?semaphore_destroy@@YAXPAVc_semaphore_instance@@@Z");
//};

//public: void * c_synchronization_handle::get_handle(void) const
//{
//    mangled_ppc("?get_handle@c_synchronization_handle@@QBAPAXXZ");
//};

//long semaphore_release_internal(struct s_semaphore, bool *)
//{
//    mangled_ppc("?semaphore_release_internal@@YAJUs_semaphore@@PA_N@Z");
//};

//public: bool c_semaphore_instance::is_universal(void) const
//{
//    mangled_ppc("?is_universal@c_semaphore_instance@@QBA_NXZ");
//};

//void semaphore_take_internal(struct s_semaphore)
//{
//    mangled_ppc("?semaphore_take_internal@@YAXUs_semaphore@@@Z");
//};

//bool semaphore_try_and_take_internal(struct s_semaphore)
//{
//    mangled_ppc("?semaphore_try_and_take_internal@@YA_NUs_semaphore@@@Z");
//};

//bool semaphore_is_valid(struct s_semaphore)
//{
//    mangled_ppc("?semaphore_is_valid@@YA_NUs_semaphore@@@Z");
//};

//long semaphore_get_initial_count(struct s_semaphore)
//{
//    mangled_ppc("?semaphore_get_initial_count@@YAJUs_semaphore@@@Z");
//};

//long semaphore_get_maximum_count(struct s_semaphore)
//{
//    mangled_ppc("?semaphore_get_maximum_count@@YAJUs_semaphore@@@Z");
//};

//long semaphore_get_current_thread_reference_count(struct s_semaphore)
//{
//    mangled_ppc("?semaphore_get_current_thread_reference_count@@YAJUs_semaphore@@@Z");
//};

//public: void c_semaphore_instance::reset_reference_counts(bool)
//{
//    mangled_ppc("?reset_reference_counts@c_semaphore_instance@@QAAX_N@Z");
//};

//public: void c_semaphore_instance::force_release_if_owned_by_thread(long)
//{
//    mangled_ppc("?force_release_if_owned_by_thread@c_semaphore_instance@@QAAXJ@Z");
//};

//public: unsigned long c_synchronization_object::get_object_id(void) const
//{
//    mangled_ppc("?get_object_id@c_synchronization_object@@QBAKXZ");
//};

//public: long c_semaphore_instance::get_reference_count(void) const
//{
//    mangled_ppc("?get_reference_count@c_semaphore_instance@@QBAJXZ");
//};

//public: void c_semaphore_instance::add_reference(void)
//{
//    mangled_ppc("?add_reference@c_semaphore_instance@@QAAXXZ");
//};

//public: void c_semaphore_instance::remove_reference(void)
//{
//    mangled_ppc("?remove_reference@c_semaphore_instance@@QAAXXZ");
//};

//public: void s_static_array<long, 23>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0BH@@@QAAXABJ@Z");
//};

//public: long const & s_static_array<long, 23>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BH@@@QBAABJJ@Z");
//};

//public: long & s_static_array<long, 23>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BH@@@QAAAAJJ@Z");
//};

//public: static bool s_static_array<long, 23>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0BH@@@SA_NJ@Z");
//};

