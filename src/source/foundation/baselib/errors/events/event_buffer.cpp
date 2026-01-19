/* ---------- headers */

#include "foundation\baselib\errors\events\event_buffer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_event_buffer::reset(void);
// public: void c_event_buffer::add_event(char const *);
// public: void c_event_buffer::verify(void) const;
// public: long c_event_buffer::get_event_history(struct s_event_buffer_entry const **) const;
// private: void c_event_buffer::get_empty_space(long, long, long *, long *) const;
// private: void c_event_buffer::make_entries(long);
// private: void c_event_buffer::make_space(long);
// private: void c_event_buffer::delete_entries(long);
// public: struct s_event_buffer_entry const * s_static_array<struct s_event_buffer_entry, 128>::get_elements(void) const;
// public: struct s_event_buffer_entry * s_static_array<struct s_event_buffer_entry, 128>::get_elements(void);
// public: static long s_static_array<struct s_event_buffer_entry, 128>::get_count(void);
// public: static unsigned int s_static_array<struct s_event_buffer_entry, 128>::get_element_size(void);
// public: unsigned int s_static_array<struct s_event_buffer_entry, 128>::get_total_element_size(void) const;
// public: char const * s_static_array<char, 65536>::get_elements(void) const;
// public: static long s_static_array<char, 65536>::get_count(void);
// public: struct s_event_buffer_entry & s_static_array<struct s_event_buffer_entry, 128>::operator[]<long>(long);
// public: char & s_static_array<char, 65536>::operator[]<long>(long);
// public: struct s_event_buffer_entry const & s_static_array<struct s_event_buffer_entry, 128>::operator[]<long>(long) const;
// public: char const & s_static_array<char, 65536>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_event_buffer_entry, 128>::valid<long>(long);
// public: static bool s_static_array<char, 65536>::valid<long>(long);

//public: void c_event_buffer::reset(void)
//{
//    mangled_ppc("?reset@c_event_buffer@@QAAXXZ");
//};

//public: void c_event_buffer::add_event(char const *)
//{
//    mangled_ppc("?add_event@c_event_buffer@@QAAXPBD@Z");
//};

//public: void c_event_buffer::verify(void) const
//{
//    mangled_ppc("?verify@c_event_buffer@@QBAXXZ");
//};

//public: long c_event_buffer::get_event_history(struct s_event_buffer_entry const **) const
//{
//    mangled_ppc("?get_event_history@c_event_buffer@@QBAJPAPBUs_event_buffer_entry@@@Z");
//};

//private: void c_event_buffer::get_empty_space(long, long, long *, long *) const
//{
//    mangled_ppc("?get_empty_space@c_event_buffer@@ABAXJJPAJ0@Z");
//};

//private: void c_event_buffer::make_entries(long)
//{
//    mangled_ppc("?make_entries@c_event_buffer@@AAAXJ@Z");
//};

//private: void c_event_buffer::make_space(long)
//{
//    mangled_ppc("?make_space@c_event_buffer@@AAAXJ@Z");
//};

//private: void c_event_buffer::delete_entries(long)
//{
//    mangled_ppc("?delete_entries@c_event_buffer@@AAAXJ@Z");
//};

//public: struct s_event_buffer_entry const * s_static_array<struct s_event_buffer_entry, 128>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_event_buffer_entry@@$0IA@@@QBAPBUs_event_buffer_entry@@XZ");
//};

//public: struct s_event_buffer_entry * s_static_array<struct s_event_buffer_entry, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_event_buffer_entry@@$0IA@@@QAAPAUs_event_buffer_entry@@XZ");
//};

//public: static long s_static_array<struct s_event_buffer_entry, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_event_buffer_entry@@$0IA@@@SAJXZ");
//};

//public: static unsigned int s_static_array<struct s_event_buffer_entry, 128>::get_element_size(void)
//{
//    mangled_ppc("?get_element_size@?$s_static_array@Us_event_buffer_entry@@$0IA@@@SAIXZ");
//};

//public: unsigned int s_static_array<struct s_event_buffer_entry, 128>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@Us_event_buffer_entry@@$0IA@@@QBAIXZ");
//};

//public: char const * s_static_array<char, 65536>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@D$0BAAAA@@@QBAPBDXZ");
//};

//public: static long s_static_array<char, 65536>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@D$0BAAAA@@@SAJXZ");
//};

//public: struct s_event_buffer_entry & s_static_array<struct s_event_buffer_entry, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_event_buffer_entry@@$0IA@@@QAAAAUs_event_buffer_entry@@J@Z");
//};

//public: char & s_static_array<char, 65536>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@D$0BAAAA@@@QAAAADJ@Z");
//};

//public: struct s_event_buffer_entry const & s_static_array<struct s_event_buffer_entry, 128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_event_buffer_entry@@$0IA@@@QBAABUs_event_buffer_entry@@J@Z");
//};

//public: char const & s_static_array<char, 65536>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@D$0BAAAA@@@QBAABDJ@Z");
//};

//public: static bool s_static_array<struct s_event_buffer_entry, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_event_buffer_entry@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<char, 65536>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@D$0BAAAA@@@SA_NJ@Z");
//};

