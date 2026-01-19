/* ---------- headers */

#include "omaha\tag_files\tag_vertex_buffers.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_cache_file_tag_interop_vtable const g_d3d_vertex_buffer_interop_vtable; // "?g_d3d_vertex_buffer_interop_vtable@@3Us_cache_file_tag_interop_vtable@@B"
// struct s_cache_file_tag_interop_vtable const g_d3d_index_buffer_interop_vtable; // "?g_d3d_index_buffer_interop_vtable@@3Us_cache_file_tag_interop_vtable@@B"
// struct s_rasterizer_object_factory_interface g_in_memory_tag_rasterizer_object_factory; // "?g_in_memory_tag_rasterizer_object_factory@@3Us_rasterizer_object_factory_interface@@A"
// struct s_rasterizer_object_factory_interface g_cache_file_builder_rasterizer_object_factory; // "?g_cache_file_builder_rasterizer_object_factory@@3Us_rasterizer_object_factory_interface@@A"
// struct s_tag_interop_definition render_vertex_buffer_interop_definition; // "?render_vertex_buffer_interop_definition@@3Us_tag_interop_definition@@A"
// struct s_tag_interop_definition render_index_buffer_interop_definition; // "?render_index_buffer_interop_definition@@3Us_tag_interop_definition@@A"
// class c_tag_d3d_vertex_shader_definition g_d3d_vertex_shader_tag_definition; // "?g_d3d_vertex_shader_tag_definition@@3Vc_tag_d3d_vertex_shader_definition@@A"
// class c_tag_d3d_pixel_shader_definition g_d3d_pixel_shader_tag_definition; // "?g_d3d_pixel_shader_tag_definition@@3Vc_tag_d3d_pixel_shader_definition@@A"
// class c_tag_d3d_constant_table_definition g_d3d_constant_table_tag_definition; // "?g_d3d_constant_table_tag_definition@@3Vc_tag_d3d_constant_table_definition@@A"
// class c_tag_d3d_interop_vtable g_tag_d3d_interop_vtable; // "?g_tag_d3d_interop_vtable@@3Vc_tag_d3d_interop_vtable@@A"

// enum e_platform tag_rasterizer_platform_get(void);
// bool tag_vertex_buffer_new(class c_rasterizer_vertex_buffer *, enum e_vertex_buffer_declaration, long, void const *, long);
// bool tag_vertex_buffer_allocate(long, long, struct s_tag_vertex_buffer **);
// bool tag_vertex_buffer_write_vertices(class c_rasterizer_vertex_buffer *, long, void const *, long);
// void tag_vertex_buffer_delete(class c_rasterizer_vertex_buffer *);
// void tag_vertex_buffer_deallocate(void *);
// void * tag_vertex_buffer_lock(class c_rasterizer_vertex_buffer *);
// bool tag_vertex_buffer_unlock(class c_rasterizer_vertex_buffer *);
// bool tag_index_buffer_new_proc(class c_rasterizer_index_buffer *, enum e_primitive_type, long, bool);
// public: void c_rasterizer_index_buffer::set_d3d_buffer(struct D3DIndexBuffer *);
// void tag_index_buffer_delete_proc(class c_rasterizer_index_buffer *);
// unsigned short * tag_index_buffer_lock_proc(class c_rasterizer_index_buffer *);
// bool tag_index_buffer_unlock_proc(class c_rasterizer_index_buffer *);
// void * tag_any_shader_new_proc(unsigned long const *);
// void tag_any_shader_delete_proc(void *);
// void * tag_constant_table_new_proc(unsigned long const *);
// void tag_constant_table_delete_proc(void *);
// public: c_xenon_shader_optimizer::c_xenon_shader_optimizer(unsigned long const *, unsigned long);
// public: c_xenon_shader_optimizer::~c_xenon_shader_optimizer(void);
// private: void c_xenon_shader_optimizer::generate_shader_descriptor(struct s_render_shader_descriptor *);
// public: void c_xenon_shader_optimizer::generate_vertex_shader_descriptor(struct s_render_shader_descriptor *);
// public: void c_xenon_shader_optimizer::generate_pixel_shader_descriptor(struct s_render_shader_descriptor *);
// void render_vertex_shader_build_descriptor(unsigned long const *, unsigned long, struct s_render_shader_descriptor *);
// void render_pixel_shader_build_descriptor(unsigned long const *, unsigned long, struct s_render_shader_descriptor *);
// public: virtual void c_tag_d3d_vertex_shader_definition::write_to_cache_file(long, void *, void **, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *);
// public: virtual void c_tag_d3d_pixel_shader_definition::write_to_cache_file(long, void *, void **, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *);
// public: virtual void c_tag_d3d_constant_table_definition::write_to_cache_file(long, void *, void **, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *);
// bool cache_file_builder_vertex_buffer_new(class c_rasterizer_vertex_buffer *, enum e_vertex_buffer_declaration, long, void const *, long);
// void cache_file_builder_vertex_buffer_delete(class c_rasterizer_vertex_buffer *);
// void * cache_file_builder_vertex_buffer_lock(class c_rasterizer_vertex_buffer *);
// bool cache_file_builder_vertex_buffer_unlock(class c_rasterizer_vertex_buffer *);
// bool cache_file_builder_index_buffer_new_proc(class c_rasterizer_index_buffer *, enum e_primitive_type, long, bool);
// void cache_file_builder_index_buffer_delete_proc(class c_rasterizer_index_buffer *);
// unsigned short * cache_file_builder_index_buffer_lock_proc(class c_rasterizer_index_buffer *);
// bool cache_file_builder_index_buffer_unlock_proc(class c_rasterizer_index_buffer *);
// void byte_swap_geometry_vertex_data(void *, void *, long, bool);
// void byte_swap_geometry_index_data(void *, void *, long, bool);
// public: c_tag_vertex_buffer_editor::c_tag_vertex_buffer_editor(class c_tag_geometry_editor *, long);
// public: c_tag_index_buffer_editor::c_tag_index_buffer_editor(class c_tag_geometry_editor *, long);
// public: c_tag_geometry_editor::c_tag_geometry_editor(struct s_render_geometry *);
// protected: struct s_render_geometry_api_resource * c_tag_geometry_editor::get_render_geometry_buffers(void);
// private: void * c_tag_vertex_buffer_editor::write_lock_pc(void);
// private: bool c_tag_vertex_buffer_editor::unlock_pc(void);
// private: unsigned short * c_tag_index_buffer_editor::write_lock_pc(void);
// private: bool c_tag_index_buffer_editor::unlock_pc(void);
// private: long c_tag_geometry_editor::add_vertex_buffer_pc(long, long);
// private: long c_tag_geometry_editor::add_index_buffer_pc(long, long, bool);
// private: struct s_tag_block * c_tag_geometry_editor::get_vertex_buffer_block_pc(void);
// private: struct s_tag_block * c_tag_geometry_editor::get_index_buffer_block_pc(void);
// private: long c_tag_geometry_editor::add_vertex_buffer_xenon(long, long);
// private: long c_tag_geometry_editor::add_index_buffer_xenon(long, long, bool);
// private: struct s_tag_block * c_tag_geometry_editor::get_vertex_buffer_block_xenon(void);
// private: struct s_tag_block * c_tag_geometry_editor::get_index_buffer_block_xenon(void);
// private: void * c_tag_vertex_buffer_editor::write_lock_xenon(void);
// private: bool c_tag_vertex_buffer_editor::unlock_xenon(void);
// private: unsigned short * c_tag_index_buffer_editor::write_lock_xenon(void);
// private: bool c_tag_index_buffer_editor::unlock_xenon(void);
// public: void * c_tag_vertex_buffer_editor::write_lock(void);
// public: bool c_tag_vertex_buffer_editor::unlock(void);
// public: void * c_tag_index_buffer_editor::write_lock(void);
// public: bool c_tag_index_buffer_editor::unlock(void);
// public: long c_tag_geometry_editor::add_vertex_buffer(long, long);
// public: long c_tag_geometry_editor::add_index_buffer(long, long, bool);
// public: void c_tag_geometry_editor::delete_all_index_buffers(void);
// public: void c_tag_geometry_editor::delete_all_vertex_buffers(void);
// bool render_geometry_fixup(struct s_render_geometry *);
// void render_geometry_teardown(struct s_render_geometry *);
// class c_rasterizer_vertex_buffer * render_geometry_buffers_get_vertex_buffer_pc(struct s_render_geometry_api_resource const *, long);
// bool render_geometry_buffers_get_vertex_buffer_info_pc(struct s_render_geometry_api_resource const *, long, struct s_vertex_buffer_info *);
// class c_rasterizer_index_buffer * render_geometry_buffers_get_index_buffer_pc(struct s_render_geometry_api_resource const *, long);
// bool render_geometry_buffers_get_index_buffer_info_pc(struct s_render_geometry_api_resource const *, long, struct s_index_buffer_info *);
// bool render_geometry_buffers_get_vertex_buffer_info_xenon(struct s_render_geometry_api_resource const *, long, struct s_vertex_buffer_info *);
// long render_geometry_buffers_get_index_buffer_count_xenon(struct s_render_geometry_api_resource const *);
// bool render_geometry_buffers_get_index_buffer_info_xenon(struct s_render_geometry_api_resource const *, long, struct s_index_buffer_info *);
// long render_geometry_buffers_get_vertex_buffer_count(struct s_render_geometry_api_resource const *);
// long render_geometry_buffers_get_vertex_buffer_count_pc(struct s_render_geometry_api_resource const *);
// long render_geometry_buffers_get_vertex_buffer_count_xenon(struct s_render_geometry_api_resource const *);
// class c_rasterizer_vertex_buffer * render_geometry_buffers_get_vertex_buffer(struct s_render_geometry_api_resource const *, long);
// class c_rasterizer_vertex_buffer * render_geometry_buffers_get_vertex_buffer_xenon(struct s_render_geometry_api_resource const *, long);
// void render_geometry_buffers_get_vertex_buffer_info(struct s_render_geometry_api_resource const *, long, struct s_vertex_buffer_info *);
// long render_geometry_buffers_get_index_buffer_count(struct s_render_geometry_api_resource const *);
// long render_geometry_buffers_get_index_buffer_count_pc(struct s_render_geometry_api_resource const *);
// class c_rasterizer_index_buffer * render_geometry_buffers_get_index_buffer(struct s_render_geometry_api_resource const *, long);
// class c_rasterizer_index_buffer * render_geometry_buffers_get_index_buffer_xenon(struct s_render_geometry_api_resource const *, long);
// void render_geometry_buffers_get_index_buffer_info(struct s_render_geometry_api_resource const *, long, struct s_index_buffer_info *);
// bool tag_d3d_vertex_buffer_fixup(struct s_tag_interop *, class c_tag_interop_verifier *);
// public: void c_rasterizer_vertex_buffer::rebuild(enum e_vertex_buffer_declaration, long, long, struct D3DVertexBuffer *);
// bool tag_d3d_vertex_buffer_teardown(struct s_tag_interop *);
// bool tag_d3d_vertex_buffer_is_locked(struct s_tag_interop *);
// bool tag_d3d_index_buffer_fixup(struct s_tag_interop *, class c_tag_interop_verifier *);
// public: void c_rasterizer_index_buffer::rebuild(enum e_primitive_type, long, struct D3DIndexBuffer *);
// bool tag_d3d_index_buffer_teardown(struct s_tag_interop *);
// bool tag_d3d_index_buffer_is_locked(struct s_tag_interop *);
// struct s_tag_block * render_geometry_buffers_get_vertex_buffer_block_pc(struct s_render_geometry_api_resource *);
// struct s_tag_block const * render_geometry_buffers_get_vertex_buffer_block_pc(struct s_render_geometry_api_resource const *);
// struct s_tag_block * render_geometry_buffers_get_index_buffer_block_pc(struct s_render_geometry_api_resource *);
// struct s_tag_block const * render_geometry_buffers_get_index_buffer_block_pc(struct s_render_geometry_api_resource const *);
// struct s_tag_block * render_geometry_buffers_get_vertex_buffer_block_xenon(struct s_render_geometry_api_resource *);
// struct s_tag_block const * render_geometry_buffers_get_vertex_buffer_block_xenon(struct s_render_geometry_api_resource const *);
// struct s_tag_block * render_geometry_buffers_get_index_buffer_block_xenon(struct s_render_geometry_api_resource *);
// struct s_tag_block const * render_geometry_buffers_get_index_buffer_block_xenon(struct s_render_geometry_api_resource const *);
// public: struct s_tag_d3d_vertex_buffer * c_typed_tag_interop<struct s_render_vertex_buffer_descriptor, struct s_tag_d3d_vertex_buffer>::get(void);
// public: struct s_render_vertex_buffer_descriptor * c_typed_tag_interop<struct s_render_vertex_buffer_descriptor, struct s_tag_d3d_vertex_buffer>::get_descriptor(void);
// public: struct s_tag_d3d_index_buffer * c_typed_tag_interop<struct s_render_index_buffer_descriptor, struct s_tag_d3d_index_buffer>::get(void);
// public: struct s_render_index_buffer_descriptor * c_typed_tag_interop<struct s_render_index_buffer_descriptor, struct s_tag_d3d_index_buffer>::get_descriptor(void);
// void *& lossless_cast<void *&, unsigned long>(unsigned long &);
// void byte_swap_type<unsigned long>(unsigned long *, long);
// unsigned long * byte_swap_type_from_be<unsigned long>(unsigned long *, long);
// void byte_swap_type<unsigned short>(unsigned short *, long);
// public: long D3DVertexBuffer::GetDesc(struct _D3DVERTEXBUFFER_DESC *);
// public: c_tag_d3d_vertex_shader_definition::c_tag_d3d_vertex_shader_definition(void);
// public: c_tag_runtime_object_definition::c_tag_runtime_object_definition(void);
// public: c_tag_d3d_pixel_shader_definition::c_tag_d3d_pixel_shader_definition(void);
// public: c_tag_d3d_constant_table_definition::c_tag_d3d_constant_table_definition(void);
// public: c_tag_d3d_interop_vtable::c_tag_d3d_interop_vtable(void);

//enum e_platform tag_rasterizer_platform_get(void)
//{
//    mangled_ppc("?tag_rasterizer_platform_get@@YA?AW4e_platform@@XZ");
//};

//bool tag_vertex_buffer_new(class c_rasterizer_vertex_buffer *, enum e_vertex_buffer_declaration, long, void const *, long)
//{
//    mangled_ppc("?tag_vertex_buffer_new@@YA_NPAVc_rasterizer_vertex_buffer@@W4e_vertex_buffer_declaration@@JPBXJ@Z");
//};

//bool tag_vertex_buffer_allocate(long, long, struct s_tag_vertex_buffer **)
//{
//    mangled_ppc("?tag_vertex_buffer_allocate@@YA_NJJPAPAUs_tag_vertex_buffer@@@Z");
//};

//bool tag_vertex_buffer_write_vertices(class c_rasterizer_vertex_buffer *, long, void const *, long)
//{
//    mangled_ppc("?tag_vertex_buffer_write_vertices@@YA_NPAVc_rasterizer_vertex_buffer@@JPBXJ@Z");
//};

//void tag_vertex_buffer_delete(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?tag_vertex_buffer_delete@@YAXPAVc_rasterizer_vertex_buffer@@@Z");
//};

//void tag_vertex_buffer_deallocate(void *)
//{
//    mangled_ppc("?tag_vertex_buffer_deallocate@@YAXPAX@Z");
//};

//void * tag_vertex_buffer_lock(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?tag_vertex_buffer_lock@@YAPAXPAVc_rasterizer_vertex_buffer@@@Z");
//};

//bool tag_vertex_buffer_unlock(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?tag_vertex_buffer_unlock@@YA_NPAVc_rasterizer_vertex_buffer@@@Z");
//};

//bool tag_index_buffer_new_proc(class c_rasterizer_index_buffer *, enum e_primitive_type, long, bool)
//{
//    mangled_ppc("?tag_index_buffer_new_proc@@YA_NPAVc_rasterizer_index_buffer@@W4e_primitive_type@@J_N@Z");
//};

//public: void c_rasterizer_index_buffer::set_d3d_buffer(struct D3DIndexBuffer *)
//{
//    mangled_ppc("?set_d3d_buffer@c_rasterizer_index_buffer@@QAAXPAUD3DIndexBuffer@@@Z");
//};

//void tag_index_buffer_delete_proc(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?tag_index_buffer_delete_proc@@YAXPAVc_rasterizer_index_buffer@@@Z");
//};

//unsigned short * tag_index_buffer_lock_proc(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?tag_index_buffer_lock_proc@@YAPAGPAVc_rasterizer_index_buffer@@@Z");
//};

//bool tag_index_buffer_unlock_proc(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?tag_index_buffer_unlock_proc@@YA_NPAVc_rasterizer_index_buffer@@@Z");
//};

//void * tag_any_shader_new_proc(unsigned long const *)
//{
//    mangled_ppc("?tag_any_shader_new_proc@@YAPAXPBK@Z");
//};

//void tag_any_shader_delete_proc(void *)
//{
//    mangled_ppc("?tag_any_shader_delete_proc@@YAXPAX@Z");
//};

//void * tag_constant_table_new_proc(unsigned long const *)
//{
//    mangled_ppc("?tag_constant_table_new_proc@@YAPAXPBK@Z");
//};

//void tag_constant_table_delete_proc(void *)
//{
//    mangled_ppc("?tag_constant_table_delete_proc@@YAXPAX@Z");
//};

//public: c_xenon_shader_optimizer::c_xenon_shader_optimizer(unsigned long const *, unsigned long)
//{
//    mangled_ppc("??0c_xenon_shader_optimizer@@QAA@PBKK@Z");
//};

//public: c_xenon_shader_optimizer::~c_xenon_shader_optimizer(void)
//{
//    mangled_ppc("??1c_xenon_shader_optimizer@@QAA@XZ");
//};

//private: void c_xenon_shader_optimizer::generate_shader_descriptor(struct s_render_shader_descriptor *)
//{
//    mangled_ppc("?generate_shader_descriptor@c_xenon_shader_optimizer@@AAAXPAUs_render_shader_descriptor@@@Z");
//};

//public: void c_xenon_shader_optimizer::generate_vertex_shader_descriptor(struct s_render_shader_descriptor *)
//{
//    mangled_ppc("?generate_vertex_shader_descriptor@c_xenon_shader_optimizer@@QAAXPAUs_render_shader_descriptor@@@Z");
//};

//public: void c_xenon_shader_optimizer::generate_pixel_shader_descriptor(struct s_render_shader_descriptor *)
//{
//    mangled_ppc("?generate_pixel_shader_descriptor@c_xenon_shader_optimizer@@QAAXPAUs_render_shader_descriptor@@@Z");
//};

//void render_vertex_shader_build_descriptor(unsigned long const *, unsigned long, struct s_render_shader_descriptor *)
//{
//    mangled_ppc("?render_vertex_shader_build_descriptor@@YAXPBKKPAUs_render_shader_descriptor@@@Z");
//};

//void render_pixel_shader_build_descriptor(unsigned long const *, unsigned long, struct s_render_shader_descriptor *)
//{
//    mangled_ppc("?render_pixel_shader_build_descriptor@@YAXPBKKPAUs_render_shader_descriptor@@@Z");
//};

//public: virtual void c_tag_d3d_vertex_shader_definition::write_to_cache_file(long, void *, void **, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *)
//{
//    mangled_ppc("?write_to_cache_file@c_tag_d3d_vertex_shader_definition@@UAAXJPAXPAPAXPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@@Z");
//};

//public: virtual void c_tag_d3d_pixel_shader_definition::write_to_cache_file(long, void *, void **, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *)
//{
//    mangled_ppc("?write_to_cache_file@c_tag_d3d_pixel_shader_definition@@UAAXJPAXPAPAXPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@@Z");
//};

//public: virtual void c_tag_d3d_constant_table_definition::write_to_cache_file(long, void *, void **, class c_cache_file_scratch_allocator *, class c_cache_file_resource_library *, class c_cache_file_tracer *)
//{
//    mangled_ppc("?write_to_cache_file@c_tag_d3d_constant_table_definition@@UAAXJPAXPAPAXPAVc_cache_file_scratch_allocator@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@@Z");
//};

//bool cache_file_builder_vertex_buffer_new(class c_rasterizer_vertex_buffer *, enum e_vertex_buffer_declaration, long, void const *, long)
//{
//    mangled_ppc("?cache_file_builder_vertex_buffer_new@@YA_NPAVc_rasterizer_vertex_buffer@@W4e_vertex_buffer_declaration@@JPBXJ@Z");
//};

//void cache_file_builder_vertex_buffer_delete(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?cache_file_builder_vertex_buffer_delete@@YAXPAVc_rasterizer_vertex_buffer@@@Z");
//};

//void * cache_file_builder_vertex_buffer_lock(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?cache_file_builder_vertex_buffer_lock@@YAPAXPAVc_rasterizer_vertex_buffer@@@Z");
//};

//bool cache_file_builder_vertex_buffer_unlock(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?cache_file_builder_vertex_buffer_unlock@@YA_NPAVc_rasterizer_vertex_buffer@@@Z");
//};

//bool cache_file_builder_index_buffer_new_proc(class c_rasterizer_index_buffer *, enum e_primitive_type, long, bool)
//{
//    mangled_ppc("?cache_file_builder_index_buffer_new_proc@@YA_NPAVc_rasterizer_index_buffer@@W4e_primitive_type@@J_N@Z");
//};

//void cache_file_builder_index_buffer_delete_proc(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?cache_file_builder_index_buffer_delete_proc@@YAXPAVc_rasterizer_index_buffer@@@Z");
//};

//unsigned short * cache_file_builder_index_buffer_lock_proc(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?cache_file_builder_index_buffer_lock_proc@@YAPAGPAVc_rasterizer_index_buffer@@@Z");
//};

//bool cache_file_builder_index_buffer_unlock_proc(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?cache_file_builder_index_buffer_unlock_proc@@YA_NPAVc_rasterizer_index_buffer@@@Z");
//};

//void byte_swap_geometry_vertex_data(void *, void *, long, bool)
//{
//    mangled_ppc("?byte_swap_geometry_vertex_data@@YAXPAX0J_N@Z");
//};

//void byte_swap_geometry_index_data(void *, void *, long, bool)
//{
//    mangled_ppc("?byte_swap_geometry_index_data@@YAXPAX0J_N@Z");
//};

//public: c_tag_vertex_buffer_editor::c_tag_vertex_buffer_editor(class c_tag_geometry_editor *, long)
//{
//    mangled_ppc("??0c_tag_vertex_buffer_editor@@QAA@PAVc_tag_geometry_editor@@J@Z");
//};

//public: c_tag_index_buffer_editor::c_tag_index_buffer_editor(class c_tag_geometry_editor *, long)
//{
//    mangled_ppc("??0c_tag_index_buffer_editor@@QAA@PAVc_tag_geometry_editor@@J@Z");
//};

//public: c_tag_geometry_editor::c_tag_geometry_editor(struct s_render_geometry *)
//{
//    mangled_ppc("??0c_tag_geometry_editor@@QAA@PAUs_render_geometry@@@Z");
//};

//protected: struct s_render_geometry_api_resource * c_tag_geometry_editor::get_render_geometry_buffers(void)
//{
//    mangled_ppc("?get_render_geometry_buffers@c_tag_geometry_editor@@IAAPAUs_render_geometry_api_resource@@XZ");
//};

//private: void * c_tag_vertex_buffer_editor::write_lock_pc(void)
//{
//    mangled_ppc("?write_lock_pc@c_tag_vertex_buffer_editor@@AAAPAXXZ");
//};

//private: bool c_tag_vertex_buffer_editor::unlock_pc(void)
//{
//    mangled_ppc("?unlock_pc@c_tag_vertex_buffer_editor@@AAA_NXZ");
//};

//private: unsigned short * c_tag_index_buffer_editor::write_lock_pc(void)
//{
//    mangled_ppc("?write_lock_pc@c_tag_index_buffer_editor@@AAAPAGXZ");
//};

//private: bool c_tag_index_buffer_editor::unlock_pc(void)
//{
//    mangled_ppc("?unlock_pc@c_tag_index_buffer_editor@@AAA_NXZ");
//};

//private: long c_tag_geometry_editor::add_vertex_buffer_pc(long, long)
//{
//    mangled_ppc("?add_vertex_buffer_pc@c_tag_geometry_editor@@AAAJJJ@Z");
//};

//private: long c_tag_geometry_editor::add_index_buffer_pc(long, long, bool)
//{
//    mangled_ppc("?add_index_buffer_pc@c_tag_geometry_editor@@AAAJJJ_N@Z");
//};

//private: struct s_tag_block * c_tag_geometry_editor::get_vertex_buffer_block_pc(void)
//{
//    mangled_ppc("?get_vertex_buffer_block_pc@c_tag_geometry_editor@@AAAPAUs_tag_block@@XZ");
//};

//private: struct s_tag_block * c_tag_geometry_editor::get_index_buffer_block_pc(void)
//{
//    mangled_ppc("?get_index_buffer_block_pc@c_tag_geometry_editor@@AAAPAUs_tag_block@@XZ");
//};

//private: long c_tag_geometry_editor::add_vertex_buffer_xenon(long, long)
//{
//    mangled_ppc("?add_vertex_buffer_xenon@c_tag_geometry_editor@@AAAJJJ@Z");
//};

//private: long c_tag_geometry_editor::add_index_buffer_xenon(long, long, bool)
//{
//    mangled_ppc("?add_index_buffer_xenon@c_tag_geometry_editor@@AAAJJJ_N@Z");
//};

//private: struct s_tag_block * c_tag_geometry_editor::get_vertex_buffer_block_xenon(void)
//{
//    mangled_ppc("?get_vertex_buffer_block_xenon@c_tag_geometry_editor@@AAAPAUs_tag_block@@XZ");
//};

//private: struct s_tag_block * c_tag_geometry_editor::get_index_buffer_block_xenon(void)
//{
//    mangled_ppc("?get_index_buffer_block_xenon@c_tag_geometry_editor@@AAAPAUs_tag_block@@XZ");
//};

//private: void * c_tag_vertex_buffer_editor::write_lock_xenon(void)
//{
//    mangled_ppc("?write_lock_xenon@c_tag_vertex_buffer_editor@@AAAPAXXZ");
//};

//private: bool c_tag_vertex_buffer_editor::unlock_xenon(void)
//{
//    mangled_ppc("?unlock_xenon@c_tag_vertex_buffer_editor@@AAA_NXZ");
//};

//private: unsigned short * c_tag_index_buffer_editor::write_lock_xenon(void)
//{
//    mangled_ppc("?write_lock_xenon@c_tag_index_buffer_editor@@AAAPAGXZ");
//};

//private: bool c_tag_index_buffer_editor::unlock_xenon(void)
//{
//    mangled_ppc("?unlock_xenon@c_tag_index_buffer_editor@@AAA_NXZ");
//};

//public: void * c_tag_vertex_buffer_editor::write_lock(void)
//{
//    mangled_ppc("?write_lock@c_tag_vertex_buffer_editor@@QAAPAXXZ");
//};

//public: bool c_tag_vertex_buffer_editor::unlock(void)
//{
//    mangled_ppc("?unlock@c_tag_vertex_buffer_editor@@QAA_NXZ");
//};

//public: void * c_tag_index_buffer_editor::write_lock(void)
//{
//    mangled_ppc("?write_lock@c_tag_index_buffer_editor@@QAAPAXXZ");
//};

//public: bool c_tag_index_buffer_editor::unlock(void)
//{
//    mangled_ppc("?unlock@c_tag_index_buffer_editor@@QAA_NXZ");
//};

//public: long c_tag_geometry_editor::add_vertex_buffer(long, long)
//{
//    mangled_ppc("?add_vertex_buffer@c_tag_geometry_editor@@QAAJJJ@Z");
//};

//public: long c_tag_geometry_editor::add_index_buffer(long, long, bool)
//{
//    mangled_ppc("?add_index_buffer@c_tag_geometry_editor@@QAAJJJ_N@Z");
//};

//public: void c_tag_geometry_editor::delete_all_index_buffers(void)
//{
//    mangled_ppc("?delete_all_index_buffers@c_tag_geometry_editor@@QAAXXZ");
//};

//public: void c_tag_geometry_editor::delete_all_vertex_buffers(void)
//{
//    mangled_ppc("?delete_all_vertex_buffers@c_tag_geometry_editor@@QAAXXZ");
//};

//bool render_geometry_fixup(struct s_render_geometry *)
//{
//    mangled_ppc("?render_geometry_fixup@@YA_NPAUs_render_geometry@@@Z");
//};

//void render_geometry_teardown(struct s_render_geometry *)
//{
//    mangled_ppc("?render_geometry_teardown@@YAXPAUs_render_geometry@@@Z");
//};

//class c_rasterizer_vertex_buffer * render_geometry_buffers_get_vertex_buffer_pc(struct s_render_geometry_api_resource const *, long)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_pc@@YAPAVc_rasterizer_vertex_buffer@@PBUs_render_geometry_api_resource@@J@Z");
//};

//bool render_geometry_buffers_get_vertex_buffer_info_pc(struct s_render_geometry_api_resource const *, long, struct s_vertex_buffer_info *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_info_pc@@YA_NPBUs_render_geometry_api_resource@@JPAUs_vertex_buffer_info@@@Z");
//};

//class c_rasterizer_index_buffer * render_geometry_buffers_get_index_buffer_pc(struct s_render_geometry_api_resource const *, long)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_pc@@YAPAVc_rasterizer_index_buffer@@PBUs_render_geometry_api_resource@@J@Z");
//};

//bool render_geometry_buffers_get_index_buffer_info_pc(struct s_render_geometry_api_resource const *, long, struct s_index_buffer_info *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_info_pc@@YA_NPBUs_render_geometry_api_resource@@JPAUs_index_buffer_info@@@Z");
//};

//bool render_geometry_buffers_get_vertex_buffer_info_xenon(struct s_render_geometry_api_resource const *, long, struct s_vertex_buffer_info *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_info_xenon@@YA_NPBUs_render_geometry_api_resource@@JPAUs_vertex_buffer_info@@@Z");
//};

//long render_geometry_buffers_get_index_buffer_count_xenon(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_count_xenon@@YAJPBUs_render_geometry_api_resource@@@Z");
//};

//bool render_geometry_buffers_get_index_buffer_info_xenon(struct s_render_geometry_api_resource const *, long, struct s_index_buffer_info *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_info_xenon@@YA_NPBUs_render_geometry_api_resource@@JPAUs_index_buffer_info@@@Z");
//};

//long render_geometry_buffers_get_vertex_buffer_count(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_count@@YAJPBUs_render_geometry_api_resource@@@Z");
//};

//long render_geometry_buffers_get_vertex_buffer_count_pc(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_count_pc@@YAJPBUs_render_geometry_api_resource@@@Z");
//};

//long render_geometry_buffers_get_vertex_buffer_count_xenon(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_count_xenon@@YAJPBUs_render_geometry_api_resource@@@Z");
//};

//class c_rasterizer_vertex_buffer * render_geometry_buffers_get_vertex_buffer(struct s_render_geometry_api_resource const *, long)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer@@YAPAVc_rasterizer_vertex_buffer@@PBUs_render_geometry_api_resource@@J@Z");
//};

//class c_rasterizer_vertex_buffer * render_geometry_buffers_get_vertex_buffer_xenon(struct s_render_geometry_api_resource const *, long)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_xenon@@YAPAVc_rasterizer_vertex_buffer@@PBUs_render_geometry_api_resource@@J@Z");
//};

//void render_geometry_buffers_get_vertex_buffer_info(struct s_render_geometry_api_resource const *, long, struct s_vertex_buffer_info *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_info@@YAXPBUs_render_geometry_api_resource@@JPAUs_vertex_buffer_info@@@Z");
//};

//long render_geometry_buffers_get_index_buffer_count(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_count@@YAJPBUs_render_geometry_api_resource@@@Z");
//};

//long render_geometry_buffers_get_index_buffer_count_pc(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_count_pc@@YAJPBUs_render_geometry_api_resource@@@Z");
//};

//class c_rasterizer_index_buffer * render_geometry_buffers_get_index_buffer(struct s_render_geometry_api_resource const *, long)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer@@YAPAVc_rasterizer_index_buffer@@PBUs_render_geometry_api_resource@@J@Z");
//};

//class c_rasterizer_index_buffer * render_geometry_buffers_get_index_buffer_xenon(struct s_render_geometry_api_resource const *, long)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_xenon@@YAPAVc_rasterizer_index_buffer@@PBUs_render_geometry_api_resource@@J@Z");
//};

//void render_geometry_buffers_get_index_buffer_info(struct s_render_geometry_api_resource const *, long, struct s_index_buffer_info *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_info@@YAXPBUs_render_geometry_api_resource@@JPAUs_index_buffer_info@@@Z");
//};

//bool tag_d3d_vertex_buffer_fixup(struct s_tag_interop *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_d3d_vertex_buffer_fixup@@YA_NPAUs_tag_interop@@PAVc_tag_interop_verifier@@@Z");
//};

//public: void c_rasterizer_vertex_buffer::rebuild(enum e_vertex_buffer_declaration, long, long, struct D3DVertexBuffer *)
//{
//    mangled_ppc("?rebuild@c_rasterizer_vertex_buffer@@QAAXW4e_vertex_buffer_declaration@@JJPAUD3DVertexBuffer@@@Z");
//};

//bool tag_d3d_vertex_buffer_teardown(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_vertex_buffer_teardown@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_d3d_vertex_buffer_is_locked(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_vertex_buffer_is_locked@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_d3d_index_buffer_fixup(struct s_tag_interop *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_d3d_index_buffer_fixup@@YA_NPAUs_tag_interop@@PAVc_tag_interop_verifier@@@Z");
//};

//public: void c_rasterizer_index_buffer::rebuild(enum e_primitive_type, long, struct D3DIndexBuffer *)
//{
//    mangled_ppc("?rebuild@c_rasterizer_index_buffer@@QAAXW4e_primitive_type@@JPAUD3DIndexBuffer@@@Z");
//};

//bool tag_d3d_index_buffer_teardown(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_index_buffer_teardown@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_d3d_index_buffer_is_locked(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_d3d_index_buffer_is_locked@@YA_NPAUs_tag_interop@@@Z");
//};

//struct s_tag_block * render_geometry_buffers_get_vertex_buffer_block_pc(struct s_render_geometry_api_resource *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_block_pc@@YAPAUs_tag_block@@PAUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block const * render_geometry_buffers_get_vertex_buffer_block_pc(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_block_pc@@YAPBUs_tag_block@@PBUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block * render_geometry_buffers_get_index_buffer_block_pc(struct s_render_geometry_api_resource *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_block_pc@@YAPAUs_tag_block@@PAUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block const * render_geometry_buffers_get_index_buffer_block_pc(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_block_pc@@YAPBUs_tag_block@@PBUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block * render_geometry_buffers_get_vertex_buffer_block_xenon(struct s_render_geometry_api_resource *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_block_xenon@@YAPAUs_tag_block@@PAUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block const * render_geometry_buffers_get_vertex_buffer_block_xenon(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_vertex_buffer_block_xenon@@YAPBUs_tag_block@@PBUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block * render_geometry_buffers_get_index_buffer_block_xenon(struct s_render_geometry_api_resource *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_block_xenon@@YAPAUs_tag_block@@PAUs_render_geometry_api_resource@@@Z");
//};

//struct s_tag_block const * render_geometry_buffers_get_index_buffer_block_xenon(struct s_render_geometry_api_resource const *)
//{
//    mangled_ppc("?render_geometry_buffers_get_index_buffer_block_xenon@@YAPBUs_tag_block@@PBUs_render_geometry_api_resource@@@Z");
//};

//public: struct s_tag_d3d_vertex_buffer * c_typed_tag_interop<struct s_render_vertex_buffer_descriptor, struct s_tag_d3d_vertex_buffer>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_tag_interop@Us_render_vertex_buffer_descriptor@@Us_tag_d3d_vertex_buffer@@@@QAAPAUs_tag_d3d_vertex_buffer@@XZ");
//};

//public: struct s_render_vertex_buffer_descriptor * c_typed_tag_interop<struct s_render_vertex_buffer_descriptor, struct s_tag_d3d_vertex_buffer>::get_descriptor(void)
//{
//    mangled_ppc("?get_descriptor@?$c_typed_tag_interop@Us_render_vertex_buffer_descriptor@@Us_tag_d3d_vertex_buffer@@@@QAAPAUs_render_vertex_buffer_descriptor@@XZ");
//};

//public: struct s_tag_d3d_index_buffer * c_typed_tag_interop<struct s_render_index_buffer_descriptor, struct s_tag_d3d_index_buffer>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_tag_interop@Us_render_index_buffer_descriptor@@Us_tag_d3d_index_buffer@@@@QAAPAUs_tag_d3d_index_buffer@@XZ");
//};

//public: struct s_render_index_buffer_descriptor * c_typed_tag_interop<struct s_render_index_buffer_descriptor, struct s_tag_d3d_index_buffer>::get_descriptor(void)
//{
//    mangled_ppc("?get_descriptor@?$c_typed_tag_interop@Us_render_index_buffer_descriptor@@Us_tag_d3d_index_buffer@@@@QAAPAUs_render_index_buffer_descriptor@@XZ");
//};

//void *& lossless_cast<void *&, unsigned long>(unsigned long &)
//{
//    mangled_ppc("??$lossless_cast@AAPAXK@@YAAAPAXAAK@Z");
//};

//void byte_swap_type<unsigned long>(unsigned long *, long)
//{
//    mangled_ppc("??$byte_swap_type@K@@YAXPAKJ@Z");
//};

//unsigned long * byte_swap_type_from_be<unsigned long>(unsigned long *, long)
//{
//    mangled_ppc("??$byte_swap_type_from_be@K@@YAPAKPAKJ@Z");
//};

//void byte_swap_type<unsigned short>(unsigned short *, long)
//{
//    mangled_ppc("??$byte_swap_type@G@@YAXPAGJ@Z");
//};

//public: long D3DVertexBuffer::GetDesc(struct _D3DVERTEXBUFFER_DESC *)
//{
//    mangled_ppc("?GetDesc@D3DVertexBuffer@@QAAJPAU_D3DVERTEXBUFFER_DESC@@@Z");
//};

//public: c_tag_d3d_vertex_shader_definition::c_tag_d3d_vertex_shader_definition(void)
//{
//    mangled_ppc("??0c_tag_d3d_vertex_shader_definition@@QAA@XZ");
//};

//public: c_tag_runtime_object_definition::c_tag_runtime_object_definition(void)
//{
//    mangled_ppc("??0c_tag_runtime_object_definition@@QAA@XZ");
//};

//public: c_tag_d3d_pixel_shader_definition::c_tag_d3d_pixel_shader_definition(void)
//{
//    mangled_ppc("??0c_tag_d3d_pixel_shader_definition@@QAA@XZ");
//};

//public: c_tag_d3d_constant_table_definition::c_tag_d3d_constant_table_definition(void)
//{
//    mangled_ppc("??0c_tag_d3d_constant_table_definition@@QAA@XZ");
//};

//public: c_tag_d3d_interop_vtable::c_tag_d3d_interop_vtable(void)
//{
//    mangled_ppc("??0c_tag_d3d_interop_vtable@@QAA@XZ");
//};

