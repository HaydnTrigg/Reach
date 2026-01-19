/* ---------- headers */

#include "omaha\physics\collision_bsp_definitions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_struct_definition global_collision_bsp_struct; // "?global_collision_bsp_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition global_collision_bsp_block_struct_definition; // "?global_collision_bsp_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition global_collision_bsp_block; // "?global_collision_bsp_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition global_large_collision_bsp_block_struct_definition; // "?global_large_collision_bsp_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition global_large_collision_bsp_block; // "?global_large_collision_bsp_block@@3Us_tag_block_definition@@A"
// class c_tag_struct_vtable<class c_bsp3d_node_tag_vtable> bsp3d_nodes_block_struct_struct_vtable; // "?bsp3d_nodes_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@A"
// class c_tag_struct_vtable<class c_collision_surface_vtable> surfaces_block_struct_struct_vtable; // "?surfaces_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@A"
// class c_tag_struct_vtable<class c_large_collision_surface_vtable> large_surfaces_block_struct_struct_vtable; // "?large_surfaces_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@A"

// public: static struct s_tag_struct_definition * c_collision_surface_vtable::get_fixup_source_definition_proc(void);
// public: static bool c_collision_surface_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static struct s_tag_struct_definition * c_large_collision_surface_vtable::get_fixup_source_definition_proc(void);
// public: static bool c_large_collision_surface_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// enum e_collision_bsp_size shrinkable_bsp3d(long, long, long);
// enum e_collision_bsp_size shrinkable_bsp2d(long, long, bool);
// enum e_collision_bsp_size shrinkable_geometry(long, long, long);
// bool shrink_bsp3d_nodes(long, struct bsp3d_node *, struct large_bsp3d_node const *);
// public: static long s_small_bsp3d_types::bsp3d_child_index(long, bool);
// bool shrink_collision_leaves(long, struct collision_leaf *, struct large_collision_leaf const *);
// bool shrink_bsp2d_references(long, struct bsp2d_reference *, struct large_bsp2d_reference const *);
// bool shrink_bsp2d_nodes(long, struct bsp2d_node *, struct large_bsp2d_node const *);
// bool shrink_bsp2d_nodes_offset(long, struct bsp2d_node *, struct large_bsp2d_node const *);
// public: static long s_small_bsp2d_types::bsp2d_child_index_from_node_index(long);
// public: static long s_small_bsp2d_types::bsp2d_child_index_from_leaf_index(long);
// bool shrink_collision_surfaces(long, struct collision_surface *, struct large_collision_surface const *);
// bool shrink_collision_edges(long, struct collision_edge *, struct large_collision_edge const *);
// bool shrink_collision_vertices(long, struct collision_vertex *, struct large_collision_vertex const *);
// bool shrink_bsp3d_nodes(long, struct large_bsp3d_node *, struct large_bsp3d_node const *);
// bool shrink_collision_leaves(long, struct large_collision_leaf *, struct large_collision_leaf const *);
// bool shrink_bsp2d_references(long, struct large_bsp2d_reference *, struct large_bsp2d_reference const *);
// bool shrink_bsp2d_nodes(long, struct large_bsp2d_node *, struct large_bsp2d_node const *);
// bool shrink_bsp2d_nodes_offset(long, struct large_bsp2d_node *, struct large_bsp2d_node const *);
// bool shrink_collision_surfaces(long, struct large_collision_surface *, struct large_collision_surface const *);
// bool shrink_collision_edges(long, struct large_collision_edge *, struct large_collision_edge const *);
// bool shrink_collision_vertices(long, struct large_collision_vertex *, struct large_collision_vertex const *);
// bool shrink_designator(short &, long);
// bool shrink_index_byte(unsigned char &, unsigned short);
// bool shrink_index_word(unsigned short &, long);
// bool shrink_index_short(short &, long);
// long collision_bsp_count_nonconvex_surfaces(class c_collision_bsp_reference);
// void collision_bsp_build_collision_surface_best_plane_vertex_indices(class c_collision_bsp_reference);
// public: static struct s_tag_struct_definition * c_bsp3d_node_tag_vtable::get_fixup_source_definition_proc(void);
// public: static bool c_bsp3d_node_tag_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// bool fixup_old_collision_leaf(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// long collision_geometry_size_calculate(class c_collision_bsp_reference, long *);
// long collision_bsp_size_calculate(class c_collision_bsp_reference, long *);
// public: struct collision_surface_v1* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct collision_surface_v1>(void);
// public: struct collision_surface * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct collision_surface>(void);
// public: struct large_collision_surface_v1* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct large_collision_surface_v1>(void);
// public: struct large_collision_surface * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct large_collision_surface>(void);
// public: struct bsp3d_node * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct bsp3d_node>(void);
// public: struct collision_leaf * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct collision_leaf>(void);
// public: struct collision_surface_v1* c_basic_buffer<void>::get_as_type<struct collision_surface_v1>(void);
// public: struct collision_surface * c_basic_buffer<void>::get_as_type<struct collision_surface>(void);
// public: struct large_collision_surface_v1* c_basic_buffer<void>::get_as_type<struct large_collision_surface_v1>(void);
// public: struct large_collision_surface * c_basic_buffer<void>::get_as_type<struct large_collision_surface>(void);
// public: struct bsp3d_node * c_basic_buffer<void>::get_as_type<struct bsp3d_node>(void);
// public: struct collision_leaf * c_basic_buffer<void>::get_as_type<struct collision_leaf>(void);
// public: struct collision_surface_v1* c_basic_buffer<void>::get_as_type_from_offset<struct collision_surface_v1>(unsigned long);
// public: struct collision_surface * c_basic_buffer<void>::get_as_type_from_offset<struct collision_surface>(unsigned long);
// public: struct large_collision_surface_v1* c_basic_buffer<void>::get_as_type_from_offset<struct large_collision_surface_v1>(unsigned long);
// public: struct large_collision_surface * c_basic_buffer<void>::get_as_type_from_offset<struct large_collision_surface>(unsigned long);
// public: struct bsp3d_node * c_basic_buffer<void>::get_as_type_from_offset<struct bsp3d_node>(unsigned long);
// public: struct collision_leaf * c_basic_buffer<void>::get_as_type_from_offset<struct collision_leaf>(unsigned long);
// public: c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_bsp3d_node_tag_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_bsp3d_node_tag_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_bsp3d_node_tag_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_bsp3d_node_tag_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_bsp3d_node_tag_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_bsp3d_node_tag_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_bsp3d_node_tag_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_bsp3d_node_tag_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_bsp3d_node_tag_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_bsp3d_node_tag_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_bsp3d_node_tag_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_struct_vtable<class c_collision_surface_vtable>::c_tag_struct_vtable<class c_collision_surface_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_collision_surface_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_collision_surface_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_collision_surface_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_collision_surface_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_collision_surface_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_collision_surface_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_collision_surface_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_collision_surface_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_collision_surface_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_collision_surface_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_collision_surface_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_collision_surface_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_collision_surface_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_collision_surface_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_collision_surface_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_collision_surface_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_struct_vtable<class c_large_collision_surface_vtable>::c_tag_struct_vtable<class c_large_collision_surface_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_large_collision_surface_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_large_collision_surface_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_large_collision_surface_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_large_collision_surface_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_large_collision_surface_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_large_collision_surface_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_large_collision_surface_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_large_collision_surface_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_large_collision_surface_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_large_collision_surface_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_large_collision_surface_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_large_collision_surface_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_large_collision_surface_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_large_collision_surface_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_large_collision_surface_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_large_collision_surface_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//public: static struct s_tag_struct_definition * c_collision_surface_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@c_collision_surface_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool c_collision_surface_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@c_collision_surface_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static struct s_tag_struct_definition * c_large_collision_surface_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@c_large_collision_surface_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool c_large_collision_surface_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@c_large_collision_surface_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//enum e_collision_bsp_size shrinkable_bsp3d(long, long, long)
//{
//    mangled_ppc("?shrinkable_bsp3d@@YA?AW4e_collision_bsp_size@@JJJ@Z");
//};

//enum e_collision_bsp_size shrinkable_bsp2d(long, long, bool)
//{
//    mangled_ppc("?shrinkable_bsp2d@@YA?AW4e_collision_bsp_size@@JJ_N@Z");
//};

//enum e_collision_bsp_size shrinkable_geometry(long, long, long)
//{
//    mangled_ppc("?shrinkable_geometry@@YA?AW4e_collision_bsp_size@@JJJ@Z");
//};

//bool shrink_bsp3d_nodes(long, struct bsp3d_node *, struct large_bsp3d_node const *)
//{
//    mangled_ppc("?shrink_bsp3d_nodes@@YA_NJPAUbsp3d_node@@PBUlarge_bsp3d_node@@@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_child_index(long, bool)
//{
//    mangled_ppc("?bsp3d_child_index@s_small_bsp3d_types@@SAJJ_N@Z");
//};

//bool shrink_collision_leaves(long, struct collision_leaf *, struct large_collision_leaf const *)
//{
//    mangled_ppc("?shrink_collision_leaves@@YA_NJPAUcollision_leaf@@PBUlarge_collision_leaf@@@Z");
//};

//bool shrink_bsp2d_references(long, struct bsp2d_reference *, struct large_bsp2d_reference const *)
//{
//    mangled_ppc("?shrink_bsp2d_references@@YA_NJPAUbsp2d_reference@@PBUlarge_bsp2d_reference@@@Z");
//};

//bool shrink_bsp2d_nodes(long, struct bsp2d_node *, struct large_bsp2d_node const *)
//{
//    mangled_ppc("?shrink_bsp2d_nodes@@YA_NJPAUbsp2d_node@@PBUlarge_bsp2d_node@@@Z");
//};

//bool shrink_bsp2d_nodes_offset(long, struct bsp2d_node *, struct large_bsp2d_node const *)
//{
//    mangled_ppc("?shrink_bsp2d_nodes_offset@@YA_NJPAUbsp2d_node@@PBUlarge_bsp2d_node@@@Z");
//};

//public: static long s_small_bsp2d_types::bsp2d_child_index_from_node_index(long)
//{
//    mangled_ppc("?bsp2d_child_index_from_node_index@s_small_bsp2d_types@@SAJJ@Z");
//};

//public: static long s_small_bsp2d_types::bsp2d_child_index_from_leaf_index(long)
//{
//    mangled_ppc("?bsp2d_child_index_from_leaf_index@s_small_bsp2d_types@@SAJJ@Z");
//};

//bool shrink_collision_surfaces(long, struct collision_surface *, struct large_collision_surface const *)
//{
//    mangled_ppc("?shrink_collision_surfaces@@YA_NJPAUcollision_surface@@PBUlarge_collision_surface@@@Z");
//};

//bool shrink_collision_edges(long, struct collision_edge *, struct large_collision_edge const *)
//{
//    mangled_ppc("?shrink_collision_edges@@YA_NJPAUcollision_edge@@PBUlarge_collision_edge@@@Z");
//};

//bool shrink_collision_vertices(long, struct collision_vertex *, struct large_collision_vertex const *)
//{
//    mangled_ppc("?shrink_collision_vertices@@YA_NJPAUcollision_vertex@@PBUlarge_collision_vertex@@@Z");
//};

//bool shrink_bsp3d_nodes(long, struct large_bsp3d_node *, struct large_bsp3d_node const *)
//{
//    mangled_ppc("?shrink_bsp3d_nodes@@YA_NJPAUlarge_bsp3d_node@@PBU1@@Z");
//};

//bool shrink_collision_leaves(long, struct large_collision_leaf *, struct large_collision_leaf const *)
//{
//    mangled_ppc("?shrink_collision_leaves@@YA_NJPAUlarge_collision_leaf@@PBU1@@Z");
//};

//bool shrink_bsp2d_references(long, struct large_bsp2d_reference *, struct large_bsp2d_reference const *)
//{
//    mangled_ppc("?shrink_bsp2d_references@@YA_NJPAUlarge_bsp2d_reference@@PBU1@@Z");
//};

//bool shrink_bsp2d_nodes(long, struct large_bsp2d_node *, struct large_bsp2d_node const *)
//{
//    mangled_ppc("?shrink_bsp2d_nodes@@YA_NJPAUlarge_bsp2d_node@@PBU1@@Z");
//};

//bool shrink_bsp2d_nodes_offset(long, struct large_bsp2d_node *, struct large_bsp2d_node const *)
//{
//    mangled_ppc("?shrink_bsp2d_nodes_offset@@YA_NJPAUlarge_bsp2d_node@@PBU1@@Z");
//};

//bool shrink_collision_surfaces(long, struct large_collision_surface *, struct large_collision_surface const *)
//{
//    mangled_ppc("?shrink_collision_surfaces@@YA_NJPAUlarge_collision_surface@@PBU1@@Z");
//};

//bool shrink_collision_edges(long, struct large_collision_edge *, struct large_collision_edge const *)
//{
//    mangled_ppc("?shrink_collision_edges@@YA_NJPAUlarge_collision_edge@@PBU1@@Z");
//};

//bool shrink_collision_vertices(long, struct large_collision_vertex *, struct large_collision_vertex const *)
//{
//    mangled_ppc("?shrink_collision_vertices@@YA_NJPAUlarge_collision_vertex@@PBU1@@Z");
//};

//bool shrink_designator(short &, long)
//{
//    mangled_ppc("?shrink_designator@@YA_NAAFJ@Z");
//};

//bool shrink_index_byte(unsigned char &, unsigned short)
//{
//    mangled_ppc("?shrink_index_byte@@YA_NAAEG@Z");
//};

//bool shrink_index_word(unsigned short &, long)
//{
//    mangled_ppc("?shrink_index_word@@YA_NAAGJ@Z");
//};

//bool shrink_index_short(short &, long)
//{
//    mangled_ppc("?shrink_index_short@@YA_NAAFJ@Z");
//};

//long collision_bsp_count_nonconvex_surfaces(class c_collision_bsp_reference)
//{
//    mangled_ppc("?collision_bsp_count_nonconvex_surfaces@@YAJVc_collision_bsp_reference@@@Z");
//};

//void collision_bsp_build_collision_surface_best_plane_vertex_indices(class c_collision_bsp_reference)
//{
//    mangled_ppc("?collision_bsp_build_collision_surface_best_plane_vertex_indices@@YAXVc_collision_bsp_reference@@@Z");
//};

//public: static struct s_tag_struct_definition * c_bsp3d_node_tag_vtable::get_fixup_source_definition_proc(void)
//{
//    mangled_ppc("?get_fixup_source_definition_proc@c_bsp3d_node_tag_vtable@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool c_bsp3d_node_tag_vtable::fixup_old_struct_proc(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_struct_proc@c_bsp3d_node_tag_vtable@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//bool fixup_old_collision_leaf(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?fixup_old_collision_leaf@@YA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//long collision_geometry_size_calculate(class c_collision_bsp_reference, long *)
//{
//    mangled_ppc("?collision_geometry_size_calculate@@YAJVc_collision_bsp_reference@@PAJ@Z");
//};

//long collision_bsp_size_calculate(class c_collision_bsp_reference, long *)
//{
//    mangled_ppc("?collision_bsp_size_calculate@@YAJVc_collision_bsp_reference@@PAJ@Z");
//};

//public: struct collision_surface_v1* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct collision_surface_v1>(void)
//{
//    mangled_ppc("??$?BUcollision_surface_v1@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUcollision_surface_v1@@XZ");
//};

//public: struct collision_surface * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct collision_surface>(void)
//{
//    mangled_ppc("??$?BUcollision_surface@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUcollision_surface@@XZ");
//};

//public: struct large_collision_surface_v1* c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct large_collision_surface_v1>(void)
//{
//    mangled_ppc("??$?BUlarge_collision_surface_v1@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUlarge_collision_surface_v1@@XZ");
//};

//public: struct large_collision_surface * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct large_collision_surface>(void)
//{
//    mangled_ppc("??$?BUlarge_collision_surface@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUlarge_collision_surface@@XZ");
//};

//public: struct bsp3d_node * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct bsp3d_node>(void)
//{
//    mangled_ppc("??$?BUbsp3d_node@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUbsp3d_node@@XZ");
//};

//public: struct collision_leaf * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct collision_leaf>(void)
//{
//    mangled_ppc("??$?BUcollision_leaf@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUcollision_leaf@@XZ");
//};

//public: struct collision_surface_v1* c_basic_buffer<void>::get_as_type<struct collision_surface_v1>(void)
//{
//    mangled_ppc("??$get_as_type@Ucollision_surface_v1@@@?$c_basic_buffer@X@@QAAPAUcollision_surface_v1@@XZ");
//};

//public: struct collision_surface * c_basic_buffer<void>::get_as_type<struct collision_surface>(void)
//{
//    mangled_ppc("??$get_as_type@Ucollision_surface@@@?$c_basic_buffer@X@@QAAPAUcollision_surface@@XZ");
//};

//public: struct large_collision_surface_v1* c_basic_buffer<void>::get_as_type<struct large_collision_surface_v1>(void)
//{
//    mangled_ppc("??$get_as_type@Ularge_collision_surface_v1@@@?$c_basic_buffer@X@@QAAPAUlarge_collision_surface_v1@@XZ");
//};

//public: struct large_collision_surface * c_basic_buffer<void>::get_as_type<struct large_collision_surface>(void)
//{
//    mangled_ppc("??$get_as_type@Ularge_collision_surface@@@?$c_basic_buffer@X@@QAAPAUlarge_collision_surface@@XZ");
//};

//public: struct bsp3d_node * c_basic_buffer<void>::get_as_type<struct bsp3d_node>(void)
//{
//    mangled_ppc("??$get_as_type@Ubsp3d_node@@@?$c_basic_buffer@X@@QAAPAUbsp3d_node@@XZ");
//};

//public: struct collision_leaf * c_basic_buffer<void>::get_as_type<struct collision_leaf>(void)
//{
//    mangled_ppc("??$get_as_type@Ucollision_leaf@@@?$c_basic_buffer@X@@QAAPAUcollision_leaf@@XZ");
//};

//public: struct collision_surface_v1* c_basic_buffer<void>::get_as_type_from_offset<struct collision_surface_v1>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ucollision_surface_v1@@@?$c_basic_buffer@X@@QAAPAUcollision_surface_v1@@K@Z");
//};

//public: struct collision_surface * c_basic_buffer<void>::get_as_type_from_offset<struct collision_surface>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ucollision_surface@@@?$c_basic_buffer@X@@QAAPAUcollision_surface@@K@Z");
//};

//public: struct large_collision_surface_v1* c_basic_buffer<void>::get_as_type_from_offset<struct large_collision_surface_v1>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ularge_collision_surface_v1@@@?$c_basic_buffer@X@@QAAPAUlarge_collision_surface_v1@@K@Z");
//};

//public: struct large_collision_surface * c_basic_buffer<void>::get_as_type_from_offset<struct large_collision_surface>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ularge_collision_surface@@@?$c_basic_buffer@X@@QAAPAUlarge_collision_surface@@K@Z");
//};

//public: struct bsp3d_node * c_basic_buffer<void>::get_as_type_from_offset<struct bsp3d_node>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ubsp3d_node@@@?$c_basic_buffer@X@@QAAPAUbsp3d_node@@K@Z");
//};

//public: struct collision_leaf * c_basic_buffer<void>::get_as_type_from_offset<struct collision_leaf>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Ucollision_leaf@@@?$c_basic_buffer@X@@QAAPAUcollision_leaf@@K@Z");
//};

//public: c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_bsp3d_node_tag_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_bsp3d_node_tag_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_bsp3d_node_tag_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_bsp3d_node_tag_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_bsp3d_node_tag_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_bsp3d_node_tag_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_bsp3d_node_tag_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_bsp3d_node_tag_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_bsp3d_node_tag_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_bsp3d_node_tag_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_bsp3d_node_tag_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_bsp3d_node_tag_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_bsp3d_node_tag_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_bsp3d_node_tag_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_bsp3d_node_tag_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_bsp3d_node_tag_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_bsp3d_node_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_bsp3d_node_tag_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_bsp3d_node_tag_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_bsp3d_node_tag_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_bsp3d_node_tag_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_bsp3d_node_tag_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_bsp3d_node_tag_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_bsp3d_node_tag_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_struct_vtable<class c_collision_surface_vtable>::c_tag_struct_vtable<class c_collision_surface_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_collision_surface_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_collision_surface_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_collision_surface_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_collision_surface_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_collision_surface_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_collision_surface_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_collision_surface_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_collision_surface_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_collision_surface_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_collision_surface_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_collision_surface_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_collision_surface_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_collision_surface_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_collision_surface_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_collision_surface_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_collision_surface_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_collision_surface_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_collision_surface_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_collision_surface_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_collision_surface_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_collision_surface_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_collision_surface_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_collision_surface_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_collision_surface_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_collision_surface_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_collision_surface_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_collision_surface_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_collision_surface_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_collision_surface_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_struct_vtable<class c_large_collision_surface_vtable>::c_tag_struct_vtable<class c_large_collision_surface_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_large_collision_surface_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_large_collision_surface_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_large_collision_surface_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_large_collision_surface_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_large_collision_surface_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_large_collision_surface_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_large_collision_surface_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_large_collision_surface_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_large_collision_surface_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_large_collision_surface_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_large_collision_surface_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_large_collision_surface_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_large_collision_surface_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_large_collision_surface_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_large_collision_surface_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_large_collision_surface_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_large_collision_surface_vtable@@@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_large_collision_surface_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_large_collision_surface_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_large_collision_surface_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_large_collision_surface_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_large_collision_surface_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_large_collision_surface_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_large_collision_surface_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_large_collision_surface_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_large_collision_surface_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_large_collision_surface_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_large_collision_surface_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_large_collision_surface_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

