/* ---------- headers */

#include "omaha\scenario\scenario_soft_ceilings.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool soft_ceilings_disable; // "?soft_ceilings_disable@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_scenario_soft_ceilings_allocator::*)(void *)> g_scenario_soft_ceilings_allocator; // "?g_scenario_soft_ceilings_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@A"
// class c_static_stack<struct s_soft_ceiling_debug_cache, 64> g_soft_ceiling_debug_cache; // "?g_soft_ceiling_debug_cache@@3V?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@A"
// struct s_scenario_soft_ceilings_globals *g_scenario_soft_ceilings_globals; // "?g_scenario_soft_ceilings_globals@@3PAUs_scenario_soft_ceilings_globals@@A"

// void __tls_set_g_scenario_soft_ceilings_allocator(void *);
// void scenario_soft_ceilings_initialize(void);
// void scenario_soft_ceilings_dispose(void);
// void scenario_soft_ceilings_initialize_for_new_map(void);
// void scenario_soft_ceilings_dispose_from_old_map(void);
// bool scenario_soft_ceilings_pin_camera_position(union real_point3d *, float, float);
// void scenario_soft_ceilings_get_features(struct collision_feature_list *, union real_point3d const *, float, float, float);
// void scenario_soft_ceiling_triangle_features_get(struct collision_feature_list *, struct s_structure_soft_ceiling_triangle const *, union real_point3d const *, float, float, float);
// bool scenario_soft_ceilings_object_is_on_kill_surface(long);
// bool scenario_soft_ceilings_update_object(long, union real_point3d *);
// bool scenario_soft_ceilings_update_object(long, union real_point3d *, union vector3d *);
// bool soft_ceiling_contact_normal_calculate(struct s_soft_ceiling_contact const *, union real_point3d const *, class c_static_stack<long, 3> *, union vector3d *, float *, float *, bool);
// bool soft_ceiling_triangles_adjacent(struct s_soft_ceiling_contact const *, long, long);
// float soft_ceiling_calculate_adjacent_damp_factor(bool, union vector3d const *);
// void scenario_soft_ceilings_update_object(struct s_soft_ceiling_contact &, unsigned long *, enum e_object_type, bool, float, union real_point3d const *, union real_point3d const *, bool, float);
// void scenario_soft_ceiling_enable(long, bool);
// void scenario_soft_ceiling_disable(bool);
// bool scenario_soft_ceiling_is_active(long);
// struct s_scenario_soft_ceiling * scenario_soft_ceiling_from_name(long);
// bool scenario_soft_ceiling_triangle_vs_sphere_fast_test(struct s_structure_design_physics const *, struct s_structure_soft_ceiling_triangle const *, union real_point3d const *, float, float *);
// void soft_ceiling_globals_initialize_to_default(struct s_game_globals_soft_ceiling *);
// void soft_ceiling_globals_validate(struct s_game_globals_soft_ceiling *);
// bool scenario_soft_ceilings_should_render_soft_ceiling(long, bool, bool, bool, bool);
// void scenario_soft_ceilings_render_debug(union real_point3d const *, bool, bool, bool, bool, bool, bool, bool, bool);
// void soft_ceiling_add_cache_entry(float, union real_point3d const *, union real_point3d const *, union vector3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *);
// public: bool c_static_stack<struct s_soft_ceiling_debug_cache, 64>::full(void) const;
// public: long c_static_stack<struct s_soft_ceiling_debug_cache, 64>::count(void) const;
// public: void c_static_stack<struct s_soft_ceiling_debug_cache, 64>::clear(void);
// public: void c_static_stack<struct s_soft_ceiling_debug_cache, 64>::resize(long);
// public: void c_static_stack<struct s_soft_ceiling_debug_cache, 64>::push_back(struct s_soft_ceiling_debug_cache const &);
// public: struct s_soft_ceiling_debug_cache & c_static_stack<struct s_soft_ceiling_debug_cache, 64>::operator[](long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>(void);
// public: long c_static_stack<long, 3>::count(void) const;
// public: void c_static_stack<long, 3>::push_back(long const &);
// public: long & c_static_stack<long, 3>::operator[](long);
// public: c_static_stack<long, 3>::c_static_stack<long, 3>(void);
// public: bool c_static_stack<struct s_soft_ceiling_debug_cache, 64>::valid(void) const;
// public: bool c_static_stack<struct s_soft_ceiling_debug_cache, 64>::valid(long) const;
// public: long c_static_stack<struct s_soft_ceiling_debug_cache, 64>::push(void);
// public: struct s_soft_ceiling_debug_cache * c_static_stack<struct s_soft_ceiling_debug_cache, 64>::get(long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::valid(void) const;
// public: bool c_static_stack<long, 3>::valid(long) const;
// public: long c_static_stack<long, 3>::push(void);
// public: long * c_static_stack<long, 3>::get(long);
// public: bool c_static_stack<long, 3>::valid(void) const;
// public: bool c_static_stack<long, 3>::full(void) const;
// public: hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>(int);
// public: c_static_stack<struct s_soft_ceiling_debug_cache, 64>::c_static_stack<struct s_soft_ceiling_debug_cache, 64>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>(void);
// void g_scenario_soft_ceilings_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_scenario_soft_ceilings_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z");
//};

//void scenario_soft_ceilings_initialize(void)
//{
//    mangled_ppc("?scenario_soft_ceilings_initialize@@YAXXZ");
//};

//void scenario_soft_ceilings_dispose(void)
//{
//    mangled_ppc("?scenario_soft_ceilings_dispose@@YAXXZ");
//};

//void scenario_soft_ceilings_initialize_for_new_map(void)
//{
//    mangled_ppc("?scenario_soft_ceilings_initialize_for_new_map@@YAXXZ");
//};

//void scenario_soft_ceilings_dispose_from_old_map(void)
//{
//    mangled_ppc("?scenario_soft_ceilings_dispose_from_old_map@@YAXXZ");
//};

//bool scenario_soft_ceilings_pin_camera_position(union real_point3d *, float, float)
//{
//    mangled_ppc("?scenario_soft_ceilings_pin_camera_position@@YA_NPATreal_point3d@@MM@Z");
//};

//void scenario_soft_ceilings_get_features(struct collision_feature_list *, union real_point3d const *, float, float, float)
//{
//    mangled_ppc("?scenario_soft_ceilings_get_features@@YAXPAUcollision_feature_list@@PBTreal_point3d@@MMM@Z");
//};

//void scenario_soft_ceiling_triangle_features_get(struct collision_feature_list *, struct s_structure_soft_ceiling_triangle const *, union real_point3d const *, float, float, float)
//{
//    mangled_ppc("?scenario_soft_ceiling_triangle_features_get@@YAXPAUcollision_feature_list@@PBUs_structure_soft_ceiling_triangle@@PBTreal_point3d@@MMM@Z");
//};

//bool scenario_soft_ceilings_object_is_on_kill_surface(long)
//{
//    mangled_ppc("?scenario_soft_ceilings_object_is_on_kill_surface@@YA_NJ@Z");
//};

//bool scenario_soft_ceilings_update_object(long, union real_point3d *)
//{
//    mangled_ppc("?scenario_soft_ceilings_update_object@@YA_NJPATreal_point3d@@@Z");
//};

//bool scenario_soft_ceilings_update_object(long, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?scenario_soft_ceilings_update_object@@YA_NJPATreal_point3d@@PATvector3d@@@Z");
//};

//bool soft_ceiling_contact_normal_calculate(struct s_soft_ceiling_contact const *, union real_point3d const *, class c_static_stack<long, 3> *, union vector3d *, float *, float *, bool)
//{
//    mangled_ppc("?soft_ceiling_contact_normal_calculate@@YA_NPBUs_soft_ceiling_contact@@PBTreal_point3d@@PAV?$c_static_stack@J$02@@PATvector3d@@PAM4_N@Z");
//};

//bool soft_ceiling_triangles_adjacent(struct s_soft_ceiling_contact const *, long, long)
//{
//    mangled_ppc("?soft_ceiling_triangles_adjacent@@YA_NPBUs_soft_ceiling_contact@@JJ@Z");
//};

//float soft_ceiling_calculate_adjacent_damp_factor(bool, union vector3d const *)
//{
//    mangled_ppc("?soft_ceiling_calculate_adjacent_damp_factor@@YAM_NPBTvector3d@@@Z");
//};

//void scenario_soft_ceilings_update_object(struct s_soft_ceiling_contact &, unsigned long *, enum e_object_type, bool, float, union real_point3d const *, union real_point3d const *, bool, float)
//{
//    mangled_ppc("?scenario_soft_ceilings_update_object@@YAXAAUs_soft_ceiling_contact@@PAKW4e_object_type@@_NMPBTreal_point3d@@43M@Z");
//};

//void scenario_soft_ceiling_enable(long, bool)
//{
//    mangled_ppc("?scenario_soft_ceiling_enable@@YAXJ_N@Z");
//};

//void scenario_soft_ceiling_disable(bool)
//{
//    mangled_ppc("?scenario_soft_ceiling_disable@@YAX_N@Z");
//};

//bool scenario_soft_ceiling_is_active(long)
//{
//    mangled_ppc("?scenario_soft_ceiling_is_active@@YA_NJ@Z");
//};

//struct s_scenario_soft_ceiling * scenario_soft_ceiling_from_name(long)
//{
//    mangled_ppc("?scenario_soft_ceiling_from_name@@YAPAUs_scenario_soft_ceiling@@J@Z");
//};

//bool scenario_soft_ceiling_triangle_vs_sphere_fast_test(struct s_structure_design_physics const *, struct s_structure_soft_ceiling_triangle const *, union real_point3d const *, float, float *)
//{
//    mangled_ppc("?scenario_soft_ceiling_triangle_vs_sphere_fast_test@@YA_NPBUs_structure_design_physics@@PBUs_structure_soft_ceiling_triangle@@PBTreal_point3d@@MPAM@Z");
//};

//void soft_ceiling_globals_initialize_to_default(struct s_game_globals_soft_ceiling *)
//{
//    mangled_ppc("?soft_ceiling_globals_initialize_to_default@@YAXPAUs_game_globals_soft_ceiling@@@Z");
//};

//void soft_ceiling_globals_validate(struct s_game_globals_soft_ceiling *)
//{
//    mangled_ppc("?soft_ceiling_globals_validate@@YAXPAUs_game_globals_soft_ceiling@@@Z");
//};

//bool scenario_soft_ceilings_should_render_soft_ceiling(long, bool, bool, bool, bool)
//{
//    mangled_ppc("?scenario_soft_ceilings_should_render_soft_ceiling@@YA_NJ_N000@Z");
//};

//void scenario_soft_ceilings_render_debug(union real_point3d const *, bool, bool, bool, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?scenario_soft_ceilings_render_debug@@YAXPBTreal_point3d@@_N1111111@Z");
//};

//void soft_ceiling_add_cache_entry(float, union real_point3d const *, union real_point3d const *, union vector3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?soft_ceiling_add_cache_entry@@YAXMPBTreal_point3d@@0PBTvector3d@@000@Z");
//};

//public: bool c_static_stack<struct s_soft_ceiling_debug_cache, 64>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_soft_ceiling_debug_cache, 64>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_soft_ceiling_debug_cache, 64>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAAXXZ");
//};

//public: void c_static_stack<struct s_soft_ceiling_debug_cache, 64>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAAXJ@Z");
//};

//public: void c_static_stack<struct s_soft_ceiling_debug_cache, 64>::push_back(struct s_soft_ceiling_debug_cache const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAAXABUs_soft_ceiling_debug_cache@@@Z");
//};

//public: struct s_soft_ceiling_debug_cache & c_static_stack<struct s_soft_ceiling_debug_cache, 64>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAAAAUs_soft_ceiling_debug_cache@@J@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@I$0CAAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: long c_static_stack<long, 3>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$02@@QBAJXZ");
//};

//public: void c_static_stack<long, 3>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@J$02@@QAAXABJ@Z");
//};

//public: long & c_static_stack<long, 3>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@J$02@@QAAAAJJ@Z");
//};

//public: c_static_stack<long, 3>::c_static_stack<long, 3>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$02@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_soft_ceiling_debug_cache, 64>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_soft_ceiling_debug_cache, 64>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_soft_ceiling_debug_cache, 64>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAAJXZ");
//};

//public: struct s_soft_ceiling_debug_cache * c_static_stack<struct s_soft_ceiling_debug_cache, 64>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAAPAUs_soft_ceiling_debug_cache@@J@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 3>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$02@@QBA_NJ@Z");
//};

//public: long c_static_stack<long, 3>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$02@@QAAJXZ");
//};

//public: long * c_static_stack<long, 3>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$02@@QAAPAJJ@Z");
//};

//public: bool c_static_stack<long, 3>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$02@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 3>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$02@@QBA_NXZ");
//};

//public: hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 8192, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@I$0CAAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: c_static_stack<struct s_soft_ceiling_debug_cache, 64>::c_static_stack<struct s_soft_ceiling_debug_cache, 64>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_soft_ceiling_debug_cache@@$0EA@@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_scenario_soft_ceilings_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_scenario_soft_ceilings_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_scenario_soft_ceilings_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_scenario_soft_ceilings_allocator@@YAXXZ");
//};

