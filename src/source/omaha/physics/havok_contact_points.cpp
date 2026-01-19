/* ---------- headers */

#include "omaha\physics\havok_contact_points.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_havok_contact_point_reference const k_invalid_contact_point_reference; // "?k_invalid_contact_point_reference@@3Us_havok_contact_point_reference@@B"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_havok_contact_point_globals_allocator::*)(void *)> g_havok_contact_point_globals_allocator; // "?g_havok_contact_point_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@A"
// struct s_havok_contact_point_globals *g_havok_contact_point_globals; // "?g_havok_contact_point_globals@@3PAUs_havok_contact_point_globals@@A"

// void __tls_set_g_havok_contact_point_globals_allocator(void *);
// void havok_contact_points_initialize(void);
// void havok_contact_points_dispose(void);
// public: c_havok_contact_point_iterator::c_havok_contact_point_iterator(long, bool);
// public: void c_havok_contact_point_iterator::next(void);
// public: bool c_havok_contact_point_iterator::valid(void);
// public: void c_havok_contact_point_iterator::notify_point_deleted(void);
// public: long c_havok_contact_point_iterator::get_datum_index(void) const;
// public: class c_havok_contact_point * c_havok_contact_point_iterator::get_contact_point(void);
// bool havok_object_has_contact_points(long);
// unsigned long havok_entity_to_id_scenario(class hkpEntity const *);
// long scenario_find_object_by_index(enum e_object_type, long);
// class hkpEntity * id_to_havok_entity_scenario(unsigned long);
// unsigned long havok_entity_to_id_runtime(class hkpEntity const *);
// class hkpEntity * id_to_havok_entity_runtime(unsigned long);
// void havok_contact_points_serialize_gather_entities(class hkpEntity const **, long, long *);
// void havok_contact_points_serialize(class hkOstream *, class hkpEntity const **, long, bool, bool);
// long havok_contact_points_serialize_for_scenario_placement(long, void *, long);
// void havok_contact_points_deserialize(class hkIstream *, bool);
// void havok_contact_points_deserialize_from_scenario_placement(long, void const *, long);
// void havok_contact_points_serialize_for_active_objects(void);
// void havok_contact_points_deserialize_for_active_objects(void);
// long havok_object_contact_point_count(long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>(void);
// void g_havok_contact_point_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_havok_contact_point_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z");
//};

//void havok_contact_points_initialize(void)
//{
//    mangled_ppc("?havok_contact_points_initialize@@YAXXZ");
//};

//void havok_contact_points_dispose(void)
//{
//    mangled_ppc("?havok_contact_points_dispose@@YAXXZ");
//};

//public: c_havok_contact_point_iterator::c_havok_contact_point_iterator(long, bool)
//{
//    mangled_ppc("??0c_havok_contact_point_iterator@@QAA@J_N@Z");
//};

//public: void c_havok_contact_point_iterator::next(void)
//{
//    mangled_ppc("?next@c_havok_contact_point_iterator@@QAAXXZ");
//};

//public: bool c_havok_contact_point_iterator::valid(void)
//{
//    mangled_ppc("?valid@c_havok_contact_point_iterator@@QAA_NXZ");
//};

//public: void c_havok_contact_point_iterator::notify_point_deleted(void)
//{
//    mangled_ppc("?notify_point_deleted@c_havok_contact_point_iterator@@QAAXXZ");
//};

//public: long c_havok_contact_point_iterator::get_datum_index(void) const
//{
//    mangled_ppc("?get_datum_index@c_havok_contact_point_iterator@@QBAJXZ");
//};

//public: class c_havok_contact_point * c_havok_contact_point_iterator::get_contact_point(void)
//{
//    mangled_ppc("?get_contact_point@c_havok_contact_point_iterator@@QAAPAVc_havok_contact_point@@XZ");
//};

//bool havok_object_has_contact_points(long)
//{
//    mangled_ppc("?havok_object_has_contact_points@@YA_NJ@Z");
//};

//unsigned long havok_entity_to_id_scenario(class hkpEntity const *)
//{
//    mangled_ppc("?havok_entity_to_id_scenario@@YAKPBVhkpEntity@@@Z");
//};

//long scenario_find_object_by_index(enum e_object_type, long)
//{
//    mangled_ppc("?scenario_find_object_by_index@@YAJW4e_object_type@@J@Z");
//};

//class hkpEntity * id_to_havok_entity_scenario(unsigned long)
//{
//    mangled_ppc("?id_to_havok_entity_scenario@@YAPAVhkpEntity@@K@Z");
//};

//unsigned long havok_entity_to_id_runtime(class hkpEntity const *)
//{
//    mangled_ppc("?havok_entity_to_id_runtime@@YAKPBVhkpEntity@@@Z");
//};

//class hkpEntity * id_to_havok_entity_runtime(unsigned long)
//{
//    mangled_ppc("?id_to_havok_entity_runtime@@YAPAVhkpEntity@@K@Z");
//};

//void havok_contact_points_serialize_gather_entities(class hkpEntity const **, long, long *)
//{
//    mangled_ppc("?havok_contact_points_serialize_gather_entities@@YAXPAPBVhkpEntity@@JPAJ@Z");
//};

//void havok_contact_points_serialize(class hkOstream *, class hkpEntity const **, long, bool, bool)
//{
//    mangled_ppc("?havok_contact_points_serialize@@YAXPAVhkOstream@@PAPBVhkpEntity@@J_N2@Z");
//};

//long havok_contact_points_serialize_for_scenario_placement(long, void *, long)
//{
//    mangled_ppc("?havok_contact_points_serialize_for_scenario_placement@@YAJJPAXJ@Z");
//};

//void havok_contact_points_deserialize(class hkIstream *, bool)
//{
//    mangled_ppc("?havok_contact_points_deserialize@@YAXPAVhkIstream@@_N@Z");
//};

//void havok_contact_points_deserialize_from_scenario_placement(long, void const *, long)
//{
//    mangled_ppc("?havok_contact_points_deserialize_from_scenario_placement@@YAXJPBXJ@Z");
//};

//void havok_contact_points_serialize_for_active_objects(void)
//{
//    mangled_ppc("?havok_contact_points_serialize_for_active_objects@@YAXXZ");
//};

//void havok_contact_points_deserialize_for_active_objects(void)
//{
//    mangled_ppc("?havok_contact_points_deserialize_for_active_objects@@YAXXZ");
//};

//long havok_object_contact_point_count(long)
//{
//    mangled_ppc("?havok_object_contact_point_count@@YAJJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_contact_point_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_contact_point_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_havok_contact_point_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_havok_contact_point_globals_allocator@@YAXXZ");
//};

