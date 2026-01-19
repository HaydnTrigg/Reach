/* ---------- headers */

#include "omaha\rasterizer\rasterizer_geometry.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_rasterizer_vertex_buffer::set(enum e_vertex_buffer_declaration, long, long);
// public: static bool c_rasterizer_vertex_buffer_factory_interface::create(class c_rasterizer_vertex_buffer *, enum e_vertex_buffer_declaration, long, void const *, long);
// public: void c_rasterizer_vertex_buffer::set_d3d_buffer(struct D3DVertexBuffer *);
// public: static void const * c_rasterizer_vertex_buffer_factory_interface::read_lock(class c_rasterizer_vertex_buffer *, bool);
// public: unsigned char c_rasterizer_vertex_buffer::get_vertex_stride(void) const;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// public: static void * c_rasterizer_vertex_buffer_factory_interface::write_lock(class c_rasterizer_vertex_buffer *);
// public: static bool c_rasterizer_vertex_buffer_factory_interface::unlock(class c_rasterizer_vertex_buffer *);
// public: static void c_rasterizer_vertex_buffer_factory_interface::release(class c_rasterizer_vertex_buffer *);
// public: static void c_rasterizer_vertex_buffer::delete_proc(void *);
// public: static bool c_rasterizer_index_buffer_factory_interface::create(class c_rasterizer_index_buffer *, enum e_primitive_type, long, bool);
// public: void c_rasterizer_index_buffer::setup(unsigned char, long, bool);
// public: static unsigned short const * c_rasterizer_index_buffer_factory_interface::read_lock(class c_rasterizer_index_buffer *, bool);
// public: struct D3DIndexBuffer * c_rasterizer_index_buffer::get_d3d_buffer(void) const;
// public: static unsigned short * c_rasterizer_index_buffer_factory_interface::write_lock(class c_rasterizer_index_buffer *);
// public: static bool c_rasterizer_index_buffer_factory_interface::unlock(class c_rasterizer_index_buffer *);
// public: static void c_rasterizer_index_buffer_factory_interface::release(class c_rasterizer_index_buffer *);
// public: static void c_rasterizer_index_buffer::delete_proc(void *);
// public: static enum e_vertex_buffer_usage c_rasterizer_vertex_buffer::get_usage_from_declaration(enum e_vertex_buffer_declaration);
// public: static unsigned long c_rasterizer_shaders::get_stream_from_declaration(enum e_vertex_buffer_declaration);
// public: static unsigned long c_rasterizer_shaders::get_stream_from_usage(enum e_vertex_buffer_usage);
// public: static bool c_rasterizer_shaders::set_vertex_stream(class c_rasterizer_vertex_buffer const *);
// public: enum e_vertex_buffer_declaration c_rasterizer_vertex_buffer::get_declaration(void) const;
// public: static bool c_rasterizer_shaders::clear_vertex_stream(class c_rasterizer_vertex_buffer const *);
// public: static bool c_rasterizer_shaders::set_vertex_stream_with_offset(class c_rasterizer_vertex_buffer const *, unsigned long);
// public: bool c_rasterizer_vertex_buffer::create(enum e_vertex_buffer_declaration, long);
// public: bool c_rasterizer_vertex_buffer::create_in_place(enum e_vertex_buffer_declaration, long, struct D3DVertexBuffer *, void *);
// public: void c_rasterizer_vertex_buffer::release(void);
// public: void const * c_rasterizer_vertex_buffer::read_lock(bool);
// public: void * c_rasterizer_vertex_buffer::write_lock(void);
// public: bool c_rasterizer_vertex_buffer::unlock(void);
// public: bool c_rasterizer_index_buffer::create(enum e_primitive_type, long, bool);
// public: void c_rasterizer_index_buffer::release(void);
// public: unsigned short const * c_rasterizer_index_buffer::read_lock(bool);
// public: unsigned short * c_rasterizer_index_buffer::write_lock(void);
// public: bool c_rasterizer_index_buffer::unlock(void);
// D3DDevice_SetStreamSource_Inline;
// public: long D3DIndexBuffer::Lock(unsigned int, unsigned int, void **, unsigned long);
// public: long D3DIndexBuffer::Unlock(void);

//public: void c_rasterizer_vertex_buffer::set(enum e_vertex_buffer_declaration, long, long)
//{
//    mangled_ppc("?set@c_rasterizer_vertex_buffer@@QAAXW4e_vertex_buffer_declaration@@JJ@Z");
//};

//public: static bool c_rasterizer_vertex_buffer_factory_interface::create(class c_rasterizer_vertex_buffer *, enum e_vertex_buffer_declaration, long, void const *, long)
//{
//    mangled_ppc("?create@c_rasterizer_vertex_buffer_factory_interface@@SA_NPAVc_rasterizer_vertex_buffer@@W4e_vertex_buffer_declaration@@JPBXJ@Z");
//};

//public: void c_rasterizer_vertex_buffer::set_d3d_buffer(struct D3DVertexBuffer *)
//{
//    mangled_ppc("?set_d3d_buffer@c_rasterizer_vertex_buffer@@QAAXPAUD3DVertexBuffer@@@Z");
//};

//public: static void const * c_rasterizer_vertex_buffer_factory_interface::read_lock(class c_rasterizer_vertex_buffer *, bool)
//{
//    mangled_ppc("?read_lock@c_rasterizer_vertex_buffer_factory_interface@@SAPBXPAVc_rasterizer_vertex_buffer@@_N@Z");
//};

//public: unsigned char c_rasterizer_vertex_buffer::get_vertex_stride(void) const
//{
//    mangled_ppc("?get_vertex_stride@c_rasterizer_vertex_buffer@@QBAEXZ");
//};

//GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//public: static void * c_rasterizer_vertex_buffer_factory_interface::write_lock(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?write_lock@c_rasterizer_vertex_buffer_factory_interface@@SAPAXPAVc_rasterizer_vertex_buffer@@@Z");
//};

//public: static bool c_rasterizer_vertex_buffer_factory_interface::unlock(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?unlock@c_rasterizer_vertex_buffer_factory_interface@@SA_NPAVc_rasterizer_vertex_buffer@@@Z");
//};

//public: static void c_rasterizer_vertex_buffer_factory_interface::release(class c_rasterizer_vertex_buffer *)
//{
//    mangled_ppc("?release@c_rasterizer_vertex_buffer_factory_interface@@SAXPAVc_rasterizer_vertex_buffer@@@Z");
//};

//public: static void c_rasterizer_vertex_buffer::delete_proc(void *)
//{
//    mangled_ppc("?delete_proc@c_rasterizer_vertex_buffer@@SAXPAX@Z");
//};

//public: static bool c_rasterizer_index_buffer_factory_interface::create(class c_rasterizer_index_buffer *, enum e_primitive_type, long, bool)
//{
//    mangled_ppc("?create@c_rasterizer_index_buffer_factory_interface@@SA_NPAVc_rasterizer_index_buffer@@W4e_primitive_type@@J_N@Z");
//};

//public: void c_rasterizer_index_buffer::setup(unsigned char, long, bool)
//{
//    mangled_ppc("?setup@c_rasterizer_index_buffer@@QAAXEJ_N@Z");
//};

//public: static unsigned short const * c_rasterizer_index_buffer_factory_interface::read_lock(class c_rasterizer_index_buffer *, bool)
//{
//    mangled_ppc("?read_lock@c_rasterizer_index_buffer_factory_interface@@SAPBGPAVc_rasterizer_index_buffer@@_N@Z");
//};

//public: struct D3DIndexBuffer * c_rasterizer_index_buffer::get_d3d_buffer(void) const
//{
//    mangled_ppc("?get_d3d_buffer@c_rasterizer_index_buffer@@QBAPAUD3DIndexBuffer@@XZ");
//};

//public: static unsigned short * c_rasterizer_index_buffer_factory_interface::write_lock(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?write_lock@c_rasterizer_index_buffer_factory_interface@@SAPAGPAVc_rasterizer_index_buffer@@@Z");
//};

//public: static bool c_rasterizer_index_buffer_factory_interface::unlock(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?unlock@c_rasterizer_index_buffer_factory_interface@@SA_NPAVc_rasterizer_index_buffer@@@Z");
//};

//public: static void c_rasterizer_index_buffer_factory_interface::release(class c_rasterizer_index_buffer *)
//{
//    mangled_ppc("?release@c_rasterizer_index_buffer_factory_interface@@SAXPAVc_rasterizer_index_buffer@@@Z");
//};

//public: static void c_rasterizer_index_buffer::delete_proc(void *)
//{
//    mangled_ppc("?delete_proc@c_rasterizer_index_buffer@@SAXPAX@Z");
//};

//public: static enum e_vertex_buffer_usage c_rasterizer_vertex_buffer::get_usage_from_declaration(enum e_vertex_buffer_declaration)
//{
//    mangled_ppc("?get_usage_from_declaration@c_rasterizer_vertex_buffer@@SA?AW4e_vertex_buffer_usage@@W4e_vertex_buffer_declaration@@@Z");
//};

//public: static unsigned long c_rasterizer_shaders::get_stream_from_declaration(enum e_vertex_buffer_declaration)
//{
//    mangled_ppc("?get_stream_from_declaration@c_rasterizer_shaders@@SAKW4e_vertex_buffer_declaration@@@Z");
//};

//public: static unsigned long c_rasterizer_shaders::get_stream_from_usage(enum e_vertex_buffer_usage)
//{
//    mangled_ppc("?get_stream_from_usage@c_rasterizer_shaders@@SAKW4e_vertex_buffer_usage@@@Z");
//};

//public: static bool c_rasterizer_shaders::set_vertex_stream(class c_rasterizer_vertex_buffer const *)
//{
//    mangled_ppc("?set_vertex_stream@c_rasterizer_shaders@@SA_NPBVc_rasterizer_vertex_buffer@@@Z");
//};

//public: enum e_vertex_buffer_declaration c_rasterizer_vertex_buffer::get_declaration(void) const
//{
//    mangled_ppc("?get_declaration@c_rasterizer_vertex_buffer@@QBA?AW4e_vertex_buffer_declaration@@XZ");
//};

//public: static bool c_rasterizer_shaders::clear_vertex_stream(class c_rasterizer_vertex_buffer const *)
//{
//    mangled_ppc("?clear_vertex_stream@c_rasterizer_shaders@@SA_NPBVc_rasterizer_vertex_buffer@@@Z");
//};

//public: static bool c_rasterizer_shaders::set_vertex_stream_with_offset(class c_rasterizer_vertex_buffer const *, unsigned long)
//{
//    mangled_ppc("?set_vertex_stream_with_offset@c_rasterizer_shaders@@SA_NPBVc_rasterizer_vertex_buffer@@K@Z");
//};

//public: bool c_rasterizer_vertex_buffer::create(enum e_vertex_buffer_declaration, long)
//{
//    mangled_ppc("?create@c_rasterizer_vertex_buffer@@QAA_NW4e_vertex_buffer_declaration@@J@Z");
//};

//public: bool c_rasterizer_vertex_buffer::create_in_place(enum e_vertex_buffer_declaration, long, struct D3DVertexBuffer *, void *)
//{
//    mangled_ppc("?create_in_place@c_rasterizer_vertex_buffer@@QAA_NW4e_vertex_buffer_declaration@@JPAUD3DVertexBuffer@@PAX@Z");
//};

//public: void c_rasterizer_vertex_buffer::release(void)
//{
//    mangled_ppc("?release@c_rasterizer_vertex_buffer@@QAAXXZ");
//};

//public: void const * c_rasterizer_vertex_buffer::read_lock(bool)
//{
//    mangled_ppc("?read_lock@c_rasterizer_vertex_buffer@@QAAPBX_N@Z");
//};

//public: void * c_rasterizer_vertex_buffer::write_lock(void)
//{
//    mangled_ppc("?write_lock@c_rasterizer_vertex_buffer@@QAAPAXXZ");
//};

//public: bool c_rasterizer_vertex_buffer::unlock(void)
//{
//    mangled_ppc("?unlock@c_rasterizer_vertex_buffer@@QAA_NXZ");
//};

//public: bool c_rasterizer_index_buffer::create(enum e_primitive_type, long, bool)
//{
//    mangled_ppc("?create@c_rasterizer_index_buffer@@QAA_NW4e_primitive_type@@J_N@Z");
//};

//public: void c_rasterizer_index_buffer::release(void)
//{
//    mangled_ppc("?release@c_rasterizer_index_buffer@@QAAXXZ");
//};

//public: unsigned short const * c_rasterizer_index_buffer::read_lock(bool)
//{
//    mangled_ppc("?read_lock@c_rasterizer_index_buffer@@QAAPBG_N@Z");
//};

//public: unsigned short * c_rasterizer_index_buffer::write_lock(void)
//{
//    mangled_ppc("?write_lock@c_rasterizer_index_buffer@@QAAPAGXZ");
//};

//public: bool c_rasterizer_index_buffer::unlock(void)
//{
//    mangled_ppc("?unlock@c_rasterizer_index_buffer@@QAA_NXZ");
//};

//D3DDevice_SetStreamSource_Inline
//{
//    mangled_ppc("D3DDevice_SetStreamSource_Inline");
//};

//public: long D3DIndexBuffer::Lock(unsigned int, unsigned int, void **, unsigned long)
//{
//    mangled_ppc("?Lock@D3DIndexBuffer@@QAAJIIPAPAXK@Z");
//};

//public: long D3DIndexBuffer::Unlock(void)
//{
//    mangled_ppc("?Unlock@D3DIndexBuffer@@QAAJXZ");
//};

