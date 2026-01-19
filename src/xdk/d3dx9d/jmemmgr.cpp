/* ---------- headers */

#include "xdk\d3dx9d\jmemmgr.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void D3DX::out_of_memory(struct D3DX::jpeg_common_struct *, int);
// void * D3DX::alloc_small(struct D3DX::jpeg_common_struct *, int, unsigned int);
// void * D3DX::alloc_large(struct D3DX::jpeg_common_struct *, int, unsigned int);
// unsigned char ** D3DX::alloc_sarray(struct D3DX::jpeg_common_struct *, int, unsigned int, unsigned int);
// short (** D3DX::alloc_barray(struct D3DX::jpeg_common_struct *, int, unsigned int, unsigned int))[64];
// struct D3DX::jvirt_sarray_control * D3DX::request_virt_sarray(struct D3DX::jpeg_common_struct *, int, int, unsigned int, unsigned int, unsigned int);
// struct D3DX::jvirt_barray_control * D3DX::request_virt_barray(struct D3DX::jpeg_common_struct *, int, int, unsigned int, unsigned int, unsigned int);
// void D3DX::realize_virt_arrays(struct D3DX::jpeg_common_struct *);
// void D3DX::do_sarray_io(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_sarray_control *, int);
// void D3DX::do_barray_io(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_barray_control *, int);
// unsigned char ** D3DX::access_virt_sarray(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_sarray_control *, unsigned int, unsigned int, int);
// short (** D3DX::access_virt_barray(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_barray_control *, unsigned int, unsigned int, int))[64];
// void D3DX::free_pool(struct D3DX::jpeg_common_struct *, int);
// void D3DX::self_destruct(struct D3DX::jpeg_common_struct *);
// void D3DX::jinit_memory_mgr(struct D3DX::jpeg_common_struct *);

//void D3DX::out_of_memory(struct D3DX::jpeg_common_struct *, int)
//{
//    mangled_ppc("?out_of_memory@D3DX@@YAXPAUjpeg_common_struct@1@H@Z");
//};

//void * D3DX::alloc_small(struct D3DX::jpeg_common_struct *, int, unsigned int)
//{
//    mangled_ppc("?alloc_small@D3DX@@YAPAXPAUjpeg_common_struct@1@HI@Z");
//};

//void * D3DX::alloc_large(struct D3DX::jpeg_common_struct *, int, unsigned int)
//{
//    mangled_ppc("?alloc_large@D3DX@@YAPAXPAUjpeg_common_struct@1@HI@Z");
//};

//unsigned char ** D3DX::alloc_sarray(struct D3DX::jpeg_common_struct *, int, unsigned int, unsigned int)
//{
//    mangled_ppc("?alloc_sarray@D3DX@@YAPAPAEPAUjpeg_common_struct@1@HII@Z");
//};

//short (** D3DX::alloc_barray(struct D3DX::jpeg_common_struct *, int, unsigned int, unsigned int))[64]
//{
//    mangled_ppc("?alloc_barray@D3DX@@YAPAPAY0EA@FPAUjpeg_common_struct@1@HII@Z");
//};

//struct D3DX::jvirt_sarray_control * D3DX::request_virt_sarray(struct D3DX::jpeg_common_struct *, int, int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?request_virt_sarray@D3DX@@YAPAUjvirt_sarray_control@1@PAUjpeg_common_struct@1@HHIII@Z");
//};

//struct D3DX::jvirt_barray_control * D3DX::request_virt_barray(struct D3DX::jpeg_common_struct *, int, int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?request_virt_barray@D3DX@@YAPAUjvirt_barray_control@1@PAUjpeg_common_struct@1@HHIII@Z");
//};

//void D3DX::realize_virt_arrays(struct D3DX::jpeg_common_struct *)
//{
//    mangled_ppc("?realize_virt_arrays@D3DX@@YAXPAUjpeg_common_struct@1@@Z");
//};

//void D3DX::do_sarray_io(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_sarray_control *, int)
//{
//    mangled_ppc("?do_sarray_io@D3DX@@YAXPAUjpeg_common_struct@1@PAUjvirt_sarray_control@1@H@Z");
//};

//void D3DX::do_barray_io(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_barray_control *, int)
//{
//    mangled_ppc("?do_barray_io@D3DX@@YAXPAUjpeg_common_struct@1@PAUjvirt_barray_control@1@H@Z");
//};

//unsigned char ** D3DX::access_virt_sarray(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_sarray_control *, unsigned int, unsigned int, int)
//{
//    mangled_ppc("?access_virt_sarray@D3DX@@YAPAPAEPAUjpeg_common_struct@1@PAUjvirt_sarray_control@1@IIH@Z");
//};

//short (** D3DX::access_virt_barray(struct D3DX::jpeg_common_struct *, struct D3DX::jvirt_barray_control *, unsigned int, unsigned int, int))[64]
//{
//    mangled_ppc("?access_virt_barray@D3DX@@YAPAPAY0EA@FPAUjpeg_common_struct@1@PAUjvirt_barray_control@1@IIH@Z");
//};

//void D3DX::free_pool(struct D3DX::jpeg_common_struct *, int)
//{
//    mangled_ppc("?free_pool@D3DX@@YAXPAUjpeg_common_struct@1@H@Z");
//};

//void D3DX::self_destruct(struct D3DX::jpeg_common_struct *)
//{
//    mangled_ppc("?self_destruct@D3DX@@YAXPAUjpeg_common_struct@1@@Z");
//};

//void D3DX::jinit_memory_mgr(struct D3DX::jpeg_common_struct *)
//{
//    mangled_ppc("?jinit_memory_mgr@D3DX@@YAXPAUjpeg_common_struct@1@@Z");
//};

