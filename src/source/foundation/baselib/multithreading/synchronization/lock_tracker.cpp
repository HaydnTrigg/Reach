/* ---------- headers */

#include "foundation\baselib\multithreading\synchronization\lock_tracker.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<unsigned long, 128>::k_element_count; // "?k_element_count@?$s_static_array@K$0IA@@@2JB"

// public: void c_lock_tracker::initialize(class c_lock_hierarchy const *);
// public: void c_lock_tracker::dispose(void);
// public: void c_lock_tracker::set_enforcement_enabled(bool);
// public: void c_lock_tracker::check_empty(void) const;
// public: bool c_synchronization_object::get_non_stack_ordering(void) const;
// public: void c_lock_tracker::verify_push(class c_synchronization_object const *);
// public: long c_synchronization_object::get_lock_node_index(void) const;
// public: void c_lock_tracker::push(class c_synchronization_object const *);
// public: void c_lock_tracker::pop(class c_synchronization_object const *);
// public: bool c_static_stack<struct s_lock_tracker_entry, 32>::valid(long) const;
// public: long c_static_stack<struct s_lock_tracker_entry, 32>::top(void) const;
// public: long c_static_stack<struct s_lock_tracker_entry, 32>::count(void) const;
// public: void c_static_stack<struct s_lock_tracker_entry, 32>::clear(void);
// public: void c_static_stack<struct s_lock_tracker_entry, 32>::push_back(struct s_lock_tracker_entry const &);
// public: void c_static_stack<struct s_lock_tracker_entry, 32>::pop(void);
// public: struct s_lock_tracker_entry & c_static_stack<struct s_lock_tracker_entry, 32>::operator[](long);
// public: struct s_lock_tracker_entry const * c_static_stack<struct s_lock_tracker_entry, 32>::get(long) const;
// public: struct s_lock_tracker_entry * c_static_stack<struct s_lock_tracker_entry, 32>::get(long);
// public: void s_static_bitarray<128>::clear(void);
// public: bool s_static_bitarray<128>::test(long) const;
// public: void s_static_bitarray<128>::set(long, bool);
// public: long * s_static_array<long, 128>::get_elements(void);
// public: static long s_static_array<long, 128>::get_count(void);
// public: unsigned long * s_static_array<unsigned long, 128>::get_elements(void);
// public: bool c_static_stack<struct s_lock_tracker_entry, 32>::valid(void) const;
// public: bool c_static_stack<struct s_lock_tracker_entry, 32>::empty(void) const;
// public: long c_static_stack<struct s_lock_tracker_entry, 32>::push(void);
// public: bool c_static_stack<struct s_lock_tracker_entry, 32>::full(void) const;
// public: bool s_flags<enum e_synchronization_object_flags, unsigned long, 1>::test(enum e_synchronization_object_flags) const;

//public: void c_lock_tracker::initialize(class c_lock_hierarchy const *)
//{
//    mangled_ppc("?initialize@c_lock_tracker@@QAAXPBVc_lock_hierarchy@@@Z");
//};

//public: void c_lock_tracker::dispose(void)
//{
//    mangled_ppc("?dispose@c_lock_tracker@@QAAXXZ");
//};

//public: void c_lock_tracker::set_enforcement_enabled(bool)
//{
//    mangled_ppc("?set_enforcement_enabled@c_lock_tracker@@QAAX_N@Z");
//};

//public: void c_lock_tracker::check_empty(void) const
//{
//    mangled_ppc("?check_empty@c_lock_tracker@@QBAXXZ");
//};

//public: bool c_synchronization_object::get_non_stack_ordering(void) const
//{
//    mangled_ppc("?get_non_stack_ordering@c_synchronization_object@@QBA_NXZ");
//};

//public: void c_lock_tracker::verify_push(class c_synchronization_object const *)
//{
//    mangled_ppc("?verify_push@c_lock_tracker@@QAAXPBVc_synchronization_object@@@Z");
//};

//public: long c_synchronization_object::get_lock_node_index(void) const
//{
//    mangled_ppc("?get_lock_node_index@c_synchronization_object@@QBAJXZ");
//};

//public: void c_lock_tracker::push(class c_synchronization_object const *)
//{
//    mangled_ppc("?push@c_lock_tracker@@QAAXPBVc_synchronization_object@@@Z");
//};

//public: void c_lock_tracker::pop(class c_synchronization_object const *)
//{
//    mangled_ppc("?pop@c_lock_tracker@@QAAXPBVc_synchronization_object@@@Z");
//};

//public: bool c_static_stack<struct s_lock_tracker_entry, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_lock_tracker_entry, 32>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBAJXZ");
//};

//public: long c_static_stack<struct s_lock_tracker_entry, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_lock_tracker_entry, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAAXXZ");
//};

//public: void c_static_stack<struct s_lock_tracker_entry, 32>::push_back(struct s_lock_tracker_entry const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAAXABUs_lock_tracker_entry@@@Z");
//};

//public: void c_static_stack<struct s_lock_tracker_entry, 32>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAAXXZ");
//};

//public: struct s_lock_tracker_entry & c_static_stack<struct s_lock_tracker_entry, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAAAAUs_lock_tracker_entry@@J@Z");
//};

//public: struct s_lock_tracker_entry const * c_static_stack<struct s_lock_tracker_entry, 32>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBAPBUs_lock_tracker_entry@@J@Z");
//};

//public: struct s_lock_tracker_entry * c_static_stack<struct s_lock_tracker_entry, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAAPAUs_lock_tracker_entry@@J@Z");
//};

//public: void s_static_bitarray<128>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_bitarray@$0IA@@@QAAXXZ");
//};

//public: bool s_static_bitarray<128>::test(long) const
//{
//    mangled_ppc("?test@?$s_static_bitarray@$0IA@@@QBA_NJ@Z");
//};

//public: void s_static_bitarray<128>::set(long, bool)
//{
//    mangled_ppc("?set@?$s_static_bitarray@$0IA@@@QAAXJ_N@Z");
//};

//public: long * s_static_array<long, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@J$0IA@@@QAAPAJXZ");
//};

//public: static long s_static_array<long, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$0IA@@@SAJXZ");
//};

//public: unsigned long * s_static_array<unsigned long, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@K$0IA@@@QAAPAKXZ");
//};

//public: bool c_static_stack<struct s_lock_tracker_entry, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_lock_tracker_entry, 32>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_lock_tracker_entry, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QAAJXZ");
//};

//public: bool c_static_stack<struct s_lock_tracker_entry, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_lock_tracker_entry@@$0CA@@@QBA_NXZ");
//};

//public: bool s_flags<enum e_synchronization_object_flags, unsigned long, 1>::test(enum e_synchronization_object_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_synchronization_object_flags@@K$00@@QBA_NW4e_synchronization_object_flags@@@Z");
//};

