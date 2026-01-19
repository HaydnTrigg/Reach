/* ---------- headers */

#include "omaha\objects\widgets\cloth.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<short, 1210>::k_element_count; // "?k_element_count@?$s_static_array@F$0ELK@@@2JB"
// public: static long const s_static_array<bool, 8>::k_element_count; // "?k_element_count@?$s_static_array@_N$07@@2JB"
// struct s_tag_reference_definition global_shader_reference; // "?global_shader_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_group_legacy_vtable legacy_cloth_vtable; // "?legacy_cloth_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_block_definition cloth_block; // "?cloth_block@@3Us_tag_block_definition@@A"
// struct s_tag_group cloth_group; // "?cloth_group@@3Us_tag_group@@A"
// bool render_debug_cloth; // "?render_debug_cloth@@3_NA"
// struct s_tag_group_stream_definition legacy_cloth_stream_definition; // "?legacy_cloth_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_cloth_xsync_declaration; // "?legacy_cloth_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cloth_data_allocator::*)(void *)> g_cloth_data_allocator; // "?g_cloth_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cloth_globals_allocator::*)(void *)> g_cloth_globals_allocator; // "?g_cloth_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_cloth_vtable_shim; // "?legacy_cloth_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_data_array *cloth_data; // "?cloth_data@@3PAUs_data_array@@A"
// struct s_cloth_vertex_array *cloth_vertex_globals; // "?cloth_vertex_globals@@3PAUs_cloth_vertex_array@@A"

// void __tls_set_g_cloth_data_allocator(void *);
// void __tls_set_g_cloth_globals_allocator(void *);
// void cloth_update(float);
// long cloth_new(long, long, struct real_matrix4x3*);
// void cloth_delete(long);
// void cloth_initialize(void);
// void cloth_initialize_for_new_map(void);
// void cloth_dispose_from_old_map(void);
// void cloth_dispose(void);
// void cloth_render_opaque(long, long);
// struct s_cloth_vertex_array & cloth_vertex_array_get(long);
// void cloth_render_debug(long, long);
// bool cloth_get_is_transparent(long);
// void cloth_render_transparent(void const *, long, short, short);
// void cloth_get_sorting_position(long, union real_point3d *, struct s_location *, long *);
// bool cloth_should_update(long);
// void cloth_check_for_delete(long);
// bool cloth_should_render(long);
// bool cloth_new_attachment(long, long);
// bool cloth_setup_attachments(long);
// void cloth_datum_update(long, float);
// void cloth_calculate_normals(long);
// void cloth_constrain_positions_relaxation(long);
// void cloth_collide(long);
// void cloth_enforce_attachments(long);
// bool real_vector3d_exclude_from_pole_by_angle(union vector3d const *, float, union vector3d *);
// void cloth_update_wind(union real_point3d const *, long, union vector3d *, bool);
// void cloth_update_positions_verlet(long);
// void cloth_reset_flag_to_default_positions(long);
// short test_for_link(long, short, short);
// long cloth_definition_create_link(long, long, long, union argb_color const *);
// void cloth_definition_create_link(long, long, long, float);
// short find_first_triangle_with_edge_other_point(long, short, short, short);
// void create_links_from_triangle_edge_jumps(long, short, short, float);
// void cloth_definition_create_links(long);
// void create_cloth_grid_data(long);
// bool cloth_postprocess(long, bool);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::valid(void) const;
// public: short & s_static_array<short, 1210>::operator[]<long>(long);
// public: bool & s_static_array<bool, 8>::operator[]<long>(long);
// public: short & s_static_array<short, 1210>::operator[]<short>(short);
// public: static bool s_static_array<short, 1210>::valid<long>(long);
// public: static bool s_static_array<bool, 8>::valid<long>(long);
// public: static bool s_static_array<short, 1210>::valid<short>(short);
// struct __vector4 XMVector4LengthEst(struct __vector4);
// struct __vector4 operator+(struct __vector4, struct __vector4);
// struct __vector4 operator-(struct __vector4, struct __vector4);
// struct __vector4 operator*(struct __vector4, struct __vector4);
// struct __vector4 XMVectorMultiply(struct __vector4, struct __vector4);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>(void);
// void g_cloth_data_allocator::`dynamic atexit destructor'(void);
// void g_cloth_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_cloth_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cloth_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_cloth_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z");
//};

//void cloth_update(float)
//{
//    mangled_ppc("?cloth_update@@YAXM@Z");
//};

//long cloth_new(long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?cloth_new@@YAJJJPAUreal_matrix4x3@@@Z");
//};

//void cloth_delete(long)
//{
//    mangled_ppc("?cloth_delete@@YAXJ@Z");
//};

//void cloth_initialize(void)
//{
//    mangled_ppc("?cloth_initialize@@YAXXZ");
//};

//void cloth_initialize_for_new_map(void)
//{
//    mangled_ppc("?cloth_initialize_for_new_map@@YAXXZ");
//};

//void cloth_dispose_from_old_map(void)
//{
//    mangled_ppc("?cloth_dispose_from_old_map@@YAXXZ");
//};

//void cloth_dispose(void)
//{
//    mangled_ppc("?cloth_dispose@@YAXXZ");
//};

//void cloth_render_opaque(long, long)
//{
//    mangled_ppc("?cloth_render_opaque@@YAXJJ@Z");
//};

//struct s_cloth_vertex_array & cloth_vertex_array_get(long)
//{
//    mangled_ppc("?cloth_vertex_array_get@@YAAAUs_cloth_vertex_array@@J@Z");
//};

//void cloth_render_debug(long, long)
//{
//    mangled_ppc("?cloth_render_debug@@YAXJJ@Z");
//};

//bool cloth_get_is_transparent(long)
//{
//    mangled_ppc("?cloth_get_is_transparent@@YA_NJ@Z");
//};

//void cloth_render_transparent(void const *, long, short, short)
//{
//    mangled_ppc("?cloth_render_transparent@@YAXPBXJFF@Z");
//};

//void cloth_get_sorting_position(long, union real_point3d *, struct s_location *, long *)
//{
//    mangled_ppc("?cloth_get_sorting_position@@YAXJPATreal_point3d@@PAUs_location@@PAJ@Z");
//};

//bool cloth_should_update(long)
//{
//    mangled_ppc("?cloth_should_update@@YA_NJ@Z");
//};

//void cloth_check_for_delete(long)
//{
//    mangled_ppc("?cloth_check_for_delete@@YAXJ@Z");
//};

//bool cloth_should_render(long)
//{
//    mangled_ppc("?cloth_should_render@@YA_NJ@Z");
//};

//bool cloth_new_attachment(long, long)
//{
//    mangled_ppc("?cloth_new_attachment@@YA_NJJ@Z");
//};

//bool cloth_setup_attachments(long)
//{
//    mangled_ppc("?cloth_setup_attachments@@YA_NJ@Z");
//};

//void cloth_datum_update(long, float)
//{
//    mangled_ppc("?cloth_datum_update@@YAXJM@Z");
//};

//void cloth_calculate_normals(long)
//{
//    mangled_ppc("?cloth_calculate_normals@@YAXJ@Z");
//};

//void cloth_constrain_positions_relaxation(long)
//{
//    mangled_ppc("?cloth_constrain_positions_relaxation@@YAXJ@Z");
//};

//void cloth_collide(long)
//{
//    mangled_ppc("?cloth_collide@@YAXJ@Z");
//};

//void cloth_enforce_attachments(long)
//{
//    mangled_ppc("?cloth_enforce_attachments@@YAXJ@Z");
//};

//bool real_vector3d_exclude_from_pole_by_angle(union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?real_vector3d_exclude_from_pole_by_angle@@YA_NPBTvector3d@@MPAT1@@Z");
//};

//void cloth_update_wind(union real_point3d const *, long, union vector3d *, bool)
//{
//    mangled_ppc("?cloth_update_wind@@YAXPBTreal_point3d@@JPATvector3d@@_N@Z");
//};

//void cloth_update_positions_verlet(long)
//{
//    mangled_ppc("?cloth_update_positions_verlet@@YAXJ@Z");
//};

//void cloth_reset_flag_to_default_positions(long)
//{
//    mangled_ppc("?cloth_reset_flag_to_default_positions@@YAXJ@Z");
//};

//short test_for_link(long, short, short)
//{
//    mangled_ppc("?test_for_link@@YAFJFF@Z");
//};

//long cloth_definition_create_link(long, long, long, union argb_color const *)
//{
//    mangled_ppc("?cloth_definition_create_link@@YAJJJJPBTargb_color@@@Z");
//};

//void cloth_definition_create_link(long, long, long, float)
//{
//    mangled_ppc("?cloth_definition_create_link@@YAXJJJM@Z");
//};

//short find_first_triangle_with_edge_other_point(long, short, short, short)
//{
//    mangled_ppc("?find_first_triangle_with_edge_other_point@@YAFJFFF@Z");
//};

//void create_links_from_triangle_edge_jumps(long, short, short, float)
//{
//    mangled_ppc("?create_links_from_triangle_edge_jumps@@YAXJFFM@Z");
//};

//void cloth_definition_create_links(long)
//{
//    mangled_ppc("?cloth_definition_create_links@@YAXJ@Z");
//};

//void create_cloth_grid_data(long)
//{
//    mangled_ppc("?create_cloth_grid_data@@YAXJ@Z");
//};

//bool cloth_postprocess(long, bool)
//{
//    mangled_ppc("?cloth_postprocess@@YA_NJ_N@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: short & s_static_array<short, 1210>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$0ELK@@@QAAAAFJ@Z");
//};

//public: bool & s_static_array<bool, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@_N$07@@QAAAA_NJ@Z");
//};

//public: short & s_static_array<short, 1210>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@F$0ELK@@@QAAAAFF@Z");
//};

//public: static bool s_static_array<short, 1210>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$0ELK@@@SA_NJ@Z");
//};

//public: static bool s_static_array<bool, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@_N$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<short, 1210>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@F$0ELK@@@SA_NF@Z");
//};

//struct __vector4 XMVector4LengthEst(struct __vector4)
//{
//    mangled_ppc("?XMVector4LengthEst@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 operator+(struct __vector4, struct __vector4)
//{
//    mangled_ppc("??H@YA?AU__vector4@@U0@0@Z");
//};

//struct __vector4 operator-(struct __vector4, struct __vector4)
//{
//    mangled_ppc("??G@YA?AU__vector4@@U0@0@Z");
//};

//struct __vector4 operator*(struct __vector4, struct __vector4)
//{
//    mangled_ppc("??D@YA?AU__vector4@@U0@0@Z");
//};

//struct __vector4 XMVectorMultiply(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorMultiply@@YA?AU__vector4@@U1@0@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cloth_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cloth_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_cloth_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cloth_data_allocator@@YAXXZ");
//};

//void g_cloth_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cloth_globals_allocator@@YAXXZ");
//};

