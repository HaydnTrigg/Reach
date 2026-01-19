/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_leaf, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_leaf@@$0CA@@@2JB"
// struct s_tag_block_definition leaf_system_block; // "?leaf_system_block@@3Us_tag_block_definition@@A"
// struct s_tag_group leaf_system_group; // "?leaf_system_group@@3Us_tag_group@@A"
// bool render_debug_leaf_systems; // "?render_debug_leaf_systems@@3_NA"
// struct s_tag_group_legacy_vtable legacy_leaf_system_vtable; // "?legacy_leaf_system_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_leaf_system_stream_definition; // "?legacy_leaf_system_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_leaf_system_xsync_declaration; // "?legacy_leaf_system_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_leaf_system_data_allocator::*)(void *)> g_leaf_system_data_allocator; // "?g_leaf_system_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_leaf_system_vtable_shim; // "?legacy_leaf_system_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_data_array *leaf_system_data; // "?leaf_system_data@@3PAUs_data_array@@A"

// void __tls_set_g_leaf_system_data_allocator(void *);
// void leaf_system_update(float);
// long leaf_system_new(long, long, struct real_matrix4x3*);
// void leaf_system_delete(long);
// void leaf_system_initialize(void);
// void leaf_system_initialize_for_new_map(void);
// void leaf_system_dispose_from_old_map(void);
// void leaf_system_dispose(void);
// bool leaf_system_visible(long);
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// void leaf_system_render_debug(long, long);
// void leaf_system_render_opaque(long, long);
// bool leaf_system_get_is_transparent(long);
// void leaf_system_get_location(long, union real_point3d *, struct s_location *, long *);
// void leaf_system_unattached_visible_render(long);
// void leaf_system_emit(long, float);
// void leaf_system_cleanup(long, float);
// public: float s_leaf::get_age_in_seconds(void);
// void leaf_system_update_physics(long, float);
// public: void s_leaf::get_velocity(union vector3d *);
// public: void s_leaf::set_velocity(union vector3d const *);
// void leaf_system_sample_lighting(long);
// bool leaf_system_setup_shader(long);
// bool leaf_system_new_proc(void *);
// bool leaf_type_new_proc(void *);
// public: struct s_leaf * s_static_array<struct s_leaf, 32>::get_elements(void);
// public: struct s_leaf & s_static_array<struct s_leaf, 32>::operator[]<long>(long);
// public: static bool s_static_array<struct s_leaf, 32>::valid<long>(long);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>(void);
// void g_leaf_system_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_leaf_system_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z");
//};

//void leaf_system_update(float)
//{
//    mangled_ppc("?leaf_system_update@@YAXM@Z");
//};

//long leaf_system_new(long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?leaf_system_new@@YAJJJPAUreal_matrix4x3@@@Z");
//};

//void leaf_system_delete(long)
//{
//    mangled_ppc("?leaf_system_delete@@YAXJ@Z");
//};

//void leaf_system_initialize(void)
//{
//    mangled_ppc("?leaf_system_initialize@@YAXXZ");
//};

//void leaf_system_initialize_for_new_map(void)
//{
//    mangled_ppc("?leaf_system_initialize_for_new_map@@YAXXZ");
//};

//void leaf_system_dispose_from_old_map(void)
//{
//    mangled_ppc("?leaf_system_dispose_from_old_map@@YAXXZ");
//};

//void leaf_system_dispose(void)
//{
//    mangled_ppc("?leaf_system_dispose@@YAXXZ");
//};

//bool leaf_system_visible(long)
//{
//    mangled_ppc("?leaf_system_visible@@YA_NJ@Z");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//void leaf_system_render_debug(long, long)
//{
//    mangled_ppc("?leaf_system_render_debug@@YAXJJ@Z");
//};

//void leaf_system_render_opaque(long, long)
//{
//    mangled_ppc("?leaf_system_render_opaque@@YAXJJ@Z");
//};

//bool leaf_system_get_is_transparent(long)
//{
//    mangled_ppc("?leaf_system_get_is_transparent@@YA_NJ@Z");
//};

//void leaf_system_get_location(long, union real_point3d *, struct s_location *, long *)
//{
//    mangled_ppc("?leaf_system_get_location@@YAXJPATreal_point3d@@PAUs_location@@PAJ@Z");
//};

//void leaf_system_unattached_visible_render(long)
//{
//    mangled_ppc("?leaf_system_unattached_visible_render@@YAXJ@Z");
//};

//void leaf_system_emit(long, float)
//{
//    mangled_ppc("?leaf_system_emit@@YAXJM@Z");
//};

//void leaf_system_cleanup(long, float)
//{
//    mangled_ppc("?leaf_system_cleanup@@YAXJM@Z");
//};

//public: float s_leaf::get_age_in_seconds(void)
//{
//    mangled_ppc("?get_age_in_seconds@s_leaf@@QAAMXZ");
//};

//void leaf_system_update_physics(long, float)
//{
//    mangled_ppc("?leaf_system_update_physics@@YAXJM@Z");
//};

//public: void s_leaf::get_velocity(union vector3d *)
//{
//    mangled_ppc("?get_velocity@s_leaf@@QAAXPATvector3d@@@Z");
//};

//public: void s_leaf::set_velocity(union vector3d const *)
//{
//    mangled_ppc("?set_velocity@s_leaf@@QAAXPBTvector3d@@@Z");
//};

//void leaf_system_sample_lighting(long)
//{
//    mangled_ppc("?leaf_system_sample_lighting@@YAXJ@Z");
//};

//bool leaf_system_setup_shader(long)
//{
//    mangled_ppc("?leaf_system_setup_shader@@YA_NJ@Z");
//};

//bool leaf_system_new_proc(void *)
//{
//    mangled_ppc("?leaf_system_new_proc@@YA_NPAX@Z");
//};

//bool leaf_type_new_proc(void *)
//{
//    mangled_ppc("?leaf_type_new_proc@@YA_NPAX@Z");
//};

//public: struct s_leaf * s_static_array<struct s_leaf, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_leaf@@$0CA@@@QAAPAUs_leaf@@XZ");
//};

//public: struct s_leaf & s_static_array<struct s_leaf, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_leaf@@$0CA@@@QAAAAUs_leaf@@J@Z");
//};

//public: static bool s_static_array<struct s_leaf, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_leaf@@$0CA@@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_leaf_system_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_leaf_system_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_leaf_system_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_leaf_system_data_allocator@@YAXXZ");
//};

