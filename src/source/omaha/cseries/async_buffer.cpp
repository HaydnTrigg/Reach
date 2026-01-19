/* ---------- headers */

#include "omaha\cseries\async_buffer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_async_buffer_set::c_async_buffer_set(long, long, long);
// protected: c_async_buffer_set_base::c_async_buffer_set_base(long);
// public: s_static_array<struct s_async_buffer, 3>::s_static_array<struct s_async_buffer, 3>(void);
// public: s_async_buffer::s_async_buffer(void);
// public: void c_async_buffer_set::initialize(void);
// public: bool c_async_buffer_set::allocate_storage(class c_allocation_interface *, long);
// protected: long c_async_buffer_set_base::get_buffer_count(void) const;
// protected: struct s_async_buffer * c_async_buffer_set_base::get_buffer(long);
// public: void c_async_buffer_set::use_external_storage(char **, long, long);
// public: void c_async_buffer_set::release_storage(class c_allocation_interface *);
// public: bool c_async_buffer_set::open_file(char const *, enum e_async_buffer_file_access, enum e_async_buffer_disposition);
// public: bool c_async_buffer_set::close_file(void);
// public: void c_async_buffer_set::write(void const *, long, long *, bool *);
// public: void c_async_buffer_set::read(void *, long, long *);
// public: bool c_async_buffer_set::at_end_of_file(void) const;
// private: long c_async_buffer_set::consume_bytes(void const *, long);
// private: long c_async_buffer_set::fill_bytes(void *, long);
// private: void c_async_buffer_set::complete_pending_async_buffer_activity(void);
// private: bool c_async_buffer_set::handle_state(enum e_async_buffer_state);
// private: void c_async_buffer_set::prime_buffers_for_reading(void);
// public: bool c_async_buffer_set::set_position(long);
// public: long c_async_buffer_set::get_position(void);
// public: bool c_async_buffer_set::ready_to_write(void);
// public: bool c_async_buffer_set::ready_to_read(void);
// public: bool c_async_buffer_set::flush(void);
// public: bool c_async_buffer_set::is_data_waiting(void);
// public: bool c_async_buffer_set::is_async_io_in_progress(void);
// public: void c_async_buffer_set::block_until_not_busy(void);
// public: bool c_async_buffer_set::set_state(enum e_async_buffer_state);
// private: void c_async_buffer_set::initialize_internal(void);
// private: void c_async_buffer_set::initialize_buffer(long);
// private: void c_async_buffer_set::async_write_buffer(long);
// private: void c_async_buffer_set::async_read_buffer(long);
// private: void c_async_buffer_set::swap_buffers(void);
// public: static long s_static_array<struct s_async_buffer, 3>::get_count(void);
// public: struct s_async_buffer & s_static_array<struct s_async_buffer, 3>::operator[]<long>(long);
// public: static bool s_static_array<struct s_async_buffer, 3>::valid<long>(long);

//public: c_async_buffer_set::c_async_buffer_set(long, long, long)
//{
//    mangled_ppc("??0c_async_buffer_set@@QAA@JJJ@Z");
//};

//protected: c_async_buffer_set_base::c_async_buffer_set_base(long)
//{
//    mangled_ppc("??0c_async_buffer_set_base@@IAA@J@Z");
//};

//public: s_static_array<struct s_async_buffer, 3>::s_static_array<struct s_async_buffer, 3>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_async_buffer@@$02@@QAA@XZ");
//};

//public: s_async_buffer::s_async_buffer(void)
//{
//    mangled_ppc("??0s_async_buffer@@QAA@XZ");
//};

//public: void c_async_buffer_set::initialize(void)
//{
//    mangled_ppc("?initialize@c_async_buffer_set@@QAAXXZ");
//};

//public: bool c_async_buffer_set::allocate_storage(class c_allocation_interface *, long)
//{
//    mangled_ppc("?allocate_storage@c_async_buffer_set@@QAA_NPAVc_allocation_interface@@J@Z");
//};

//protected: long c_async_buffer_set_base::get_buffer_count(void) const
//{
//    mangled_ppc("?get_buffer_count@c_async_buffer_set_base@@IBAJXZ");
//};

//protected: struct s_async_buffer * c_async_buffer_set_base::get_buffer(long)
//{
//    mangled_ppc("?get_buffer@c_async_buffer_set_base@@IAAPAUs_async_buffer@@J@Z");
//};

//public: void c_async_buffer_set::use_external_storage(char **, long, long)
//{
//    mangled_ppc("?use_external_storage@c_async_buffer_set@@QAAXPAPADJJ@Z");
//};

//public: void c_async_buffer_set::release_storage(class c_allocation_interface *)
//{
//    mangled_ppc("?release_storage@c_async_buffer_set@@QAAXPAVc_allocation_interface@@@Z");
//};

//public: bool c_async_buffer_set::open_file(char const *, enum e_async_buffer_file_access, enum e_async_buffer_disposition)
//{
//    mangled_ppc("?open_file@c_async_buffer_set@@QAA_NPBDW4e_async_buffer_file_access@@W4e_async_buffer_disposition@@@Z");
//};

//public: bool c_async_buffer_set::close_file(void)
//{
//    mangled_ppc("?close_file@c_async_buffer_set@@QAA_NXZ");
//};

//public: void c_async_buffer_set::write(void const *, long, long *, bool *)
//{
//    mangled_ppc("?write@c_async_buffer_set@@QAAXPBXJPAJPA_N@Z");
//};

//public: void c_async_buffer_set::read(void *, long, long *)
//{
//    mangled_ppc("?read@c_async_buffer_set@@QAAXPAXJPAJ@Z");
//};

//public: bool c_async_buffer_set::at_end_of_file(void) const
//{
//    mangled_ppc("?at_end_of_file@c_async_buffer_set@@QBA_NXZ");
//};

//private: long c_async_buffer_set::consume_bytes(void const *, long)
//{
//    mangled_ppc("?consume_bytes@c_async_buffer_set@@AAAJPBXJ@Z");
//};

//private: long c_async_buffer_set::fill_bytes(void *, long)
//{
//    mangled_ppc("?fill_bytes@c_async_buffer_set@@AAAJPAXJ@Z");
//};

//private: void c_async_buffer_set::complete_pending_async_buffer_activity(void)
//{
//    mangled_ppc("?complete_pending_async_buffer_activity@c_async_buffer_set@@AAAXXZ");
//};

//private: bool c_async_buffer_set::handle_state(enum e_async_buffer_state)
//{
//    mangled_ppc("?handle_state@c_async_buffer_set@@AAA_NW4e_async_buffer_state@@@Z");
//};

//private: void c_async_buffer_set::prime_buffers_for_reading(void)
//{
//    mangled_ppc("?prime_buffers_for_reading@c_async_buffer_set@@AAAXXZ");
//};

//public: bool c_async_buffer_set::set_position(long)
//{
//    mangled_ppc("?set_position@c_async_buffer_set@@QAA_NJ@Z");
//};

//public: long c_async_buffer_set::get_position(void)
//{
//    mangled_ppc("?get_position@c_async_buffer_set@@QAAJXZ");
//};

//public: bool c_async_buffer_set::ready_to_write(void)
//{
//    mangled_ppc("?ready_to_write@c_async_buffer_set@@QAA_NXZ");
//};

//public: bool c_async_buffer_set::ready_to_read(void)
//{
//    mangled_ppc("?ready_to_read@c_async_buffer_set@@QAA_NXZ");
//};

//public: bool c_async_buffer_set::flush(void)
//{
//    mangled_ppc("?flush@c_async_buffer_set@@QAA_NXZ");
//};

//public: bool c_async_buffer_set::is_data_waiting(void)
//{
//    mangled_ppc("?is_data_waiting@c_async_buffer_set@@QAA_NXZ");
//};

//public: bool c_async_buffer_set::is_async_io_in_progress(void)
//{
//    mangled_ppc("?is_async_io_in_progress@c_async_buffer_set@@QAA_NXZ");
//};

//public: void c_async_buffer_set::block_until_not_busy(void)
//{
//    mangled_ppc("?block_until_not_busy@c_async_buffer_set@@QAAXXZ");
//};

//public: bool c_async_buffer_set::set_state(enum e_async_buffer_state)
//{
//    mangled_ppc("?set_state@c_async_buffer_set@@QAA_NW4e_async_buffer_state@@@Z");
//};

//private: void c_async_buffer_set::initialize_internal(void)
//{
//    mangled_ppc("?initialize_internal@c_async_buffer_set@@AAAXXZ");
//};

//private: void c_async_buffer_set::initialize_buffer(long)
//{
//    mangled_ppc("?initialize_buffer@c_async_buffer_set@@AAAXJ@Z");
//};

//private: void c_async_buffer_set::async_write_buffer(long)
//{
//    mangled_ppc("?async_write_buffer@c_async_buffer_set@@AAAXJ@Z");
//};

//private: void c_async_buffer_set::async_read_buffer(long)
//{
//    mangled_ppc("?async_read_buffer@c_async_buffer_set@@AAAXJ@Z");
//};

//private: void c_async_buffer_set::swap_buffers(void)
//{
//    mangled_ppc("?swap_buffers@c_async_buffer_set@@AAAXXZ");
//};

//public: static long s_static_array<struct s_async_buffer, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_async_buffer@@$02@@SAJXZ");
//};

//public: struct s_async_buffer & s_static_array<struct s_async_buffer, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_async_buffer@@$02@@QAAAAUs_async_buffer@@J@Z");
//};

//public: static bool s_static_array<struct s_async_buffer, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_async_buffer@@$02@@SA_NJ@Z");
//};

