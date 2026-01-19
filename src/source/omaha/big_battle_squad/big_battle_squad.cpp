/* ---------- headers */

#include "omaha\big_battle_squad\big_battle_squad.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_bbsquad_allocator::*)(void *)> g_bbsquad_allocator; // "?g_bbsquad_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_bbsquad_unit_allocator::*)(void *)> g_bbsquad_unit_allocator; // "?g_bbsquad_unit_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@A"
// struct s_bbsquad *g_bbsquads; // "?g_bbsquads@@3PAUs_bbsquad@@A"
// struct s_bbsquad_unit *g_bbsquad_units; // "?g_bbsquad_units@@3PAUs_bbsquad_unit@@A"

// void __tls_set_g_bbsquad_allocator(void *);
// void __tls_set_g_bbsquad_unit_allocator(void *);
// public: static void c_bbsquad_manager::initialize(void);
// public: static void c_bbsquad_manager::dispose(void);
// public: static void c_bbsquad_manager::initialize_for_new_map(void);
// void big_battle_squad_reset_squad(short);
// public: static void c_bbsquad_manager::dispose_from_old_map(void);
// public: static void c_bbsquad_manager::game_update(void);
// public: static short c_bbsquad_manager::game_squad_add(long, long, short);
// public: static void c_bbsquad_manager::game_squad_set_bounding_sphere(short, float, union real_point3d const *);
// public: static void c_bbsquad_manager::game_squad_get_bounding_sphere(short, float *, union real_point3d *);
// public: static bool c_bbsquad_manager::get_squad_data(struct s_bbsquad const **, long &, struct s_bbsquad_unit const **, long &);
// public: static void c_bbsquad_manager::game_squad_mark_modified(short);
// bool big_battle_squad_is_valid(short);
// public: static void c_bbsquad_manager::game_squad_delete(short);
// public: static short c_bbsquad_manager::game_squad_unit_add(short);
// public: static void c_bbsquad_manager::game_squad_unit_delete(short, short);
// public: static void c_bbsquad_manager::game_squad_unit_delete_all(short);
// public: static struct s_bbsquad_unit * c_bbsquad_manager::game_squad_get_unit(short, short);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>(void);
// void g_bbsquad_allocator::`dynamic atexit destructor'(void);
// void g_bbsquad_unit_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_bbsquad_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_bbsquad_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_bbsquad_unit_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z");
//};

//public: static void c_bbsquad_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_bbsquad_manager@@SAXXZ");
//};

//public: static void c_bbsquad_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_bbsquad_manager@@SAXXZ");
//};

//public: static void c_bbsquad_manager::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_bbsquad_manager@@SAXXZ");
//};

//void big_battle_squad_reset_squad(short)
//{
//    mangled_ppc("?big_battle_squad_reset_squad@@YAXF@Z");
//};

//public: static void c_bbsquad_manager::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_bbsquad_manager@@SAXXZ");
//};

//public: static void c_bbsquad_manager::game_update(void)
//{
//    mangled_ppc("?game_update@c_bbsquad_manager@@SAXXZ");
//};

//public: static short c_bbsquad_manager::game_squad_add(long, long, short)
//{
//    mangled_ppc("?game_squad_add@c_bbsquad_manager@@SAFJJF@Z");
//};

//public: static void c_bbsquad_manager::game_squad_set_bounding_sphere(short, float, union real_point3d const *)
//{
//    mangled_ppc("?game_squad_set_bounding_sphere@c_bbsquad_manager@@SAXFMPBTreal_point3d@@@Z");
//};

//public: static void c_bbsquad_manager::game_squad_get_bounding_sphere(short, float *, union real_point3d *)
//{
//    mangled_ppc("?game_squad_get_bounding_sphere@c_bbsquad_manager@@SAXFPAMPATreal_point3d@@@Z");
//};

//public: static bool c_bbsquad_manager::get_squad_data(struct s_bbsquad const **, long &, struct s_bbsquad_unit const **, long &)
//{
//    mangled_ppc("?get_squad_data@c_bbsquad_manager@@SA_NPAPBUs_bbsquad@@AAJPAPBUs_bbsquad_unit@@1@Z");
//};

//public: static void c_bbsquad_manager::game_squad_mark_modified(short)
//{
//    mangled_ppc("?game_squad_mark_modified@c_bbsquad_manager@@SAXF@Z");
//};

//bool big_battle_squad_is_valid(short)
//{
//    mangled_ppc("?big_battle_squad_is_valid@@YA_NF@Z");
//};

//public: static void c_bbsquad_manager::game_squad_delete(short)
//{
//    mangled_ppc("?game_squad_delete@c_bbsquad_manager@@SAXF@Z");
//};

//public: static short c_bbsquad_manager::game_squad_unit_add(short)
//{
//    mangled_ppc("?game_squad_unit_add@c_bbsquad_manager@@SAFF@Z");
//};

//public: static void c_bbsquad_manager::game_squad_unit_delete(short, short)
//{
//    mangled_ppc("?game_squad_unit_delete@c_bbsquad_manager@@SAXFF@Z");
//};

//public: static void c_bbsquad_manager::game_squad_unit_delete_all(short)
//{
//    mangled_ppc("?game_squad_unit_delete_all@c_bbsquad_manager@@SAXF@Z");
//};

//public: static struct s_bbsquad_unit * c_bbsquad_manager::game_squad_get_unit(short, short)
//{
//    mangled_ppc("?game_squad_get_unit@c_bbsquad_manager@@SAPAUs_bbsquad_unit@@FF@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_bbsquad_unit_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_bbsquad_unit_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_bbsquad_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_bbsquad_allocator@@YAXXZ");
//};

//void g_bbsquad_unit_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_bbsquad_unit_allocator@@YAXXZ");
//};

