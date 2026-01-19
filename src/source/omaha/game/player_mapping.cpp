/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<enum e_controller_index, 16>::k_element_count; // "?k_element_count@?$s_static_array@W4e_controller_index@@$0BA@@@2JB"
// public: static long const s_static_array<enum e_input_user_index, 16>::k_element_count; // "?k_element_count@?$s_static_array@W4e_input_user_index@@$0BA@@@2JB"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_player_mapping_globals_allocator::*)(void *)> g_player_mapping_globals_allocator; // "?g_player_mapping_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@A"
// struct s_player_mapping_globals *player_mapping_globals; // "?player_mapping_globals@@3PAUs_player_mapping_globals@@A"

// void __tls_set_g_player_mapping_globals_allocator(void *);
// void player_mapping_initialize(void);
// void player_mapping_dispose(void);
// void player_mapping_reset(void);
// void player_mapping_set_input_user(long, enum e_input_user_index);
// void player_mapping_set_input_controller(long, enum e_controller_index);
// long player_mapping_get_player_by_input_user(enum e_input_user_index);
// long player_mapping_get_unit_by_input_user(enum e_input_user_index);
// enum e_input_user_index player_mapping_get_input_user(long);
// enum e_input_user_index player_mapping_get_input_user_by_unit(long);
// long player_mapping_get_player_by_input_controller(enum e_controller_index);
// enum e_controller_index player_mapping_get_input_controller(long);
// bool player_mapping_input_user_is_active(enum e_input_user_index);
// long player_mapping_input_user_active_count(void);
// bool player_mapping_input_controller_is_active(enum e_controller_index);
// long player_mapping_input_controller_active_count(void);
// enum e_input_user_index player_mapping_first_active_input_user(void);
// enum e_input_user_index player_mapping_next_active_input_user(enum e_input_user_index);
// void player_mapping_set_player_unit(long, long, bool);
// void player_mapping_input_user_set_unit(enum e_input_user_index, long);
// void player_mapping_attach_output_user(enum e_output_user_index, long);
// void player_mapping_detach_output_users(long);
// enum e_input_user_index player_mapping_get_input_user_by_output_user(enum e_output_user_index);
// long player_mapping_get_player_by_output_user(enum e_output_user_index);
// long player_mapping_get_unit_by_output_user(enum e_output_user_index);
// enum e_output_user_index player_mapping_get_first_output_user(long);
// enum e_output_user_index player_mapping_get_next_output_user(long, enum e_output_user_index);
// bool player_mapping_output_user_is_active(enum e_output_user_index);
// long player_mapping_output_user_active_count(void);
// enum e_output_user_index player_mapping_first_active_output_user(void);
// enum e_output_user_index player_mapping_next_active_output_user(enum e_output_user_index);
// public: void c_player_output_user_iterator::begin_player(long);
// public: void c_player_output_user_iterator::begin_unit(long);
// public: bool c_player_output_user_iterator::next(void);
// public: enum e_output_user_index c_player_output_user_iterator::get_output_user_index(void);
// void player_mapping_output_user_set_unit(enum e_output_user_index, long, bool);
// public: void s_static_array<long, 4>::set_memory(long);
// public: void s_static_array<enum e_controller_index, 16>::set_memory(long);
// public: void s_static_array<enum e_input_user_index, 16>::set_memory(long);
// public: void s_static_array<unsigned char, 16>::set_memory(long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::valid(void) const;
// public: enum e_input_user_index & s_static_array<enum e_input_user_index, 16>::operator[]<long>(long);
// public: long & s_static_array<long, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index);
// public: enum e_controller_index & s_static_array<enum e_controller_index, 16>::operator[]<long>(long);
// public: long & s_static_array<long, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: long & s_static_array<long, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index);
// public: unsigned char & s_static_array<unsigned char, 16>::operator[]<long>(long);
// public: static bool s_static_array<enum e_input_user_index, 16>::valid<long>(long);
// public: static bool s_static_array<long, 4>::valid<enum e_input_user_index>(enum e_input_user_index);
// public: static bool s_static_array<enum e_controller_index, 16>::valid<long>(long);
// public: static bool s_static_array<long, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<long, 4>::valid<enum e_output_user_index>(enum e_output_user_index);
// public: static bool s_static_array<unsigned char, 16>::valid<long>(long);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>(void);
// void g_player_mapping_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_player_mapping_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z");
//};

//void player_mapping_initialize(void)
//{
//    mangled_ppc("?player_mapping_initialize@@YAXXZ");
//};

//void player_mapping_dispose(void)
//{
//    mangled_ppc("?player_mapping_dispose@@YAXXZ");
//};

//void player_mapping_reset(void)
//{
//    mangled_ppc("?player_mapping_reset@@YAXXZ");
//};

//void player_mapping_set_input_user(long, enum e_input_user_index)
//{
//    mangled_ppc("?player_mapping_set_input_user@@YAXJW4e_input_user_index@@@Z");
//};

//void player_mapping_set_input_controller(long, enum e_controller_index)
//{
//    mangled_ppc("?player_mapping_set_input_controller@@YAXJW4e_controller_index@@@Z");
//};

//long player_mapping_get_player_by_input_user(enum e_input_user_index)
//{
//    mangled_ppc("?player_mapping_get_player_by_input_user@@YAJW4e_input_user_index@@@Z");
//};

//long player_mapping_get_unit_by_input_user(enum e_input_user_index)
//{
//    mangled_ppc("?player_mapping_get_unit_by_input_user@@YAJW4e_input_user_index@@@Z");
//};

//enum e_input_user_index player_mapping_get_input_user(long)
//{
//    mangled_ppc("?player_mapping_get_input_user@@YA?AW4e_input_user_index@@J@Z");
//};

//enum e_input_user_index player_mapping_get_input_user_by_unit(long)
//{
//    mangled_ppc("?player_mapping_get_input_user_by_unit@@YA?AW4e_input_user_index@@J@Z");
//};

//long player_mapping_get_player_by_input_controller(enum e_controller_index)
//{
//    mangled_ppc("?player_mapping_get_player_by_input_controller@@YAJW4e_controller_index@@@Z");
//};

//enum e_controller_index player_mapping_get_input_controller(long)
//{
//    mangled_ppc("?player_mapping_get_input_controller@@YA?AW4e_controller_index@@J@Z");
//};

//bool player_mapping_input_user_is_active(enum e_input_user_index)
//{
//    mangled_ppc("?player_mapping_input_user_is_active@@YA_NW4e_input_user_index@@@Z");
//};

//long player_mapping_input_user_active_count(void)
//{
//    mangled_ppc("?player_mapping_input_user_active_count@@YAJXZ");
//};

//bool player_mapping_input_controller_is_active(enum e_controller_index)
//{
//    mangled_ppc("?player_mapping_input_controller_is_active@@YA_NW4e_controller_index@@@Z");
//};

//long player_mapping_input_controller_active_count(void)
//{
//    mangled_ppc("?player_mapping_input_controller_active_count@@YAJXZ");
//};

//enum e_input_user_index player_mapping_first_active_input_user(void)
//{
//    mangled_ppc("?player_mapping_first_active_input_user@@YA?AW4e_input_user_index@@XZ");
//};

//enum e_input_user_index player_mapping_next_active_input_user(enum e_input_user_index)
//{
//    mangled_ppc("?player_mapping_next_active_input_user@@YA?AW4e_input_user_index@@W41@@Z");
//};

//void player_mapping_set_player_unit(long, long, bool)
//{
//    mangled_ppc("?player_mapping_set_player_unit@@YAXJJ_N@Z");
//};

//void player_mapping_input_user_set_unit(enum e_input_user_index, long)
//{
//    mangled_ppc("?player_mapping_input_user_set_unit@@YAXW4e_input_user_index@@J@Z");
//};

//void player_mapping_attach_output_user(enum e_output_user_index, long)
//{
//    mangled_ppc("?player_mapping_attach_output_user@@YAXW4e_output_user_index@@J@Z");
//};

//void player_mapping_detach_output_users(long)
//{
//    mangled_ppc("?player_mapping_detach_output_users@@YAXJ@Z");
//};

//enum e_input_user_index player_mapping_get_input_user_by_output_user(enum e_output_user_index)
//{
//    mangled_ppc("?player_mapping_get_input_user_by_output_user@@YA?AW4e_input_user_index@@W4e_output_user_index@@@Z");
//};

//long player_mapping_get_player_by_output_user(enum e_output_user_index)
//{
//    mangled_ppc("?player_mapping_get_player_by_output_user@@YAJW4e_output_user_index@@@Z");
//};

//long player_mapping_get_unit_by_output_user(enum e_output_user_index)
//{
//    mangled_ppc("?player_mapping_get_unit_by_output_user@@YAJW4e_output_user_index@@@Z");
//};

//enum e_output_user_index player_mapping_get_first_output_user(long)
//{
//    mangled_ppc("?player_mapping_get_first_output_user@@YA?AW4e_output_user_index@@J@Z");
//};

//enum e_output_user_index player_mapping_get_next_output_user(long, enum e_output_user_index)
//{
//    mangled_ppc("?player_mapping_get_next_output_user@@YA?AW4e_output_user_index@@JW41@@Z");
//};

//bool player_mapping_output_user_is_active(enum e_output_user_index)
//{
//    mangled_ppc("?player_mapping_output_user_is_active@@YA_NW4e_output_user_index@@@Z");
//};

//long player_mapping_output_user_active_count(void)
//{
//    mangled_ppc("?player_mapping_output_user_active_count@@YAJXZ");
//};

//enum e_output_user_index player_mapping_first_active_output_user(void)
//{
//    mangled_ppc("?player_mapping_first_active_output_user@@YA?AW4e_output_user_index@@XZ");
//};

//enum e_output_user_index player_mapping_next_active_output_user(enum e_output_user_index)
//{
//    mangled_ppc("?player_mapping_next_active_output_user@@YA?AW4e_output_user_index@@W41@@Z");
//};

//public: void c_player_output_user_iterator::begin_player(long)
//{
//    mangled_ppc("?begin_player@c_player_output_user_iterator@@QAAXJ@Z");
//};

//public: void c_player_output_user_iterator::begin_unit(long)
//{
//    mangled_ppc("?begin_unit@c_player_output_user_iterator@@QAAXJ@Z");
//};

//public: bool c_player_output_user_iterator::next(void)
//{
//    mangled_ppc("?next@c_player_output_user_iterator@@QAA_NXZ");
//};

//public: enum e_output_user_index c_player_output_user_iterator::get_output_user_index(void)
//{
//    mangled_ppc("?get_output_user_index@c_player_output_user_iterator@@QAA?AW4e_output_user_index@@XZ");
//};

//void player_mapping_output_user_set_unit(enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?player_mapping_output_user_set_unit@@YAXW4e_output_user_index@@J_N@Z");
//};

//public: void s_static_array<long, 4>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@J$03@@QAAXJ@Z");
//};

//public: void s_static_array<enum e_controller_index, 16>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@W4e_controller_index@@$0BA@@@QAAXJ@Z");
//};

//public: void s_static_array<enum e_input_user_index, 16>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@W4e_input_user_index@@$0BA@@@QAAXJ@Z");
//};

//public: void s_static_array<unsigned char, 16>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@E$0BA@@@QAAXJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: enum e_input_user_index & s_static_array<enum e_input_user_index, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_input_user_index@@$0BA@@@QAAAAW4e_input_user_index@@J@Z");
//};

//public: long & s_static_array<long, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$?AW4e_input_user_index@@@?$s_static_array@J$03@@QAAAAJW4e_input_user_index@@@Z");
//};

//public: enum e_controller_index & s_static_array<enum e_controller_index, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_controller_index@@$0BA@@@QAAAAW4e_controller_index@@J@Z");
//};

//public: long & s_static_array<long, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@J$03@@QAAAAJW4e_controller_index@@@Z");
//};

//public: long & s_static_array<long, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$?AW4e_output_user_index@@@?$s_static_array@J$03@@QAAAAJW4e_output_user_index@@@Z");
//};

//public: unsigned char & s_static_array<unsigned char, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@E$0BA@@@QAAAAEJ@Z");
//};

//public: static bool s_static_array<enum e_input_user_index, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_input_user_index@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 4>::valid<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$valid@W4e_input_user_index@@@?$s_static_array@J$03@@SA_NW4e_input_user_index@@@Z");
//};

//public: static bool s_static_array<enum e_controller_index, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_controller_index@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@J$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<long, 4>::valid<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$valid@W4e_output_user_index@@@?$s_static_array@J$03@@SA_NW4e_output_user_index@@@Z");
//};

//public: static bool s_static_array<unsigned char, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@E$0BA@@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_mapping_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_mapping_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_player_mapping_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_mapping_globals_allocator@@YAXXZ");
//};

