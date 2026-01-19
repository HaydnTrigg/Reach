/* ---------- headers */

#include "omaha\sky_atm\planar_fog.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_big_flags_typed_no_init@J$0IA@@@$07@@2JB"
// struct s_tag_block_definition planar_fog_parameters_block; // "?planar_fog_parameters_block@@3Us_tag_block_definition@@A"
// struct s_tag_group_legacy_vtable legacy_planar_fog_parameters_vtable; // "?legacy_planar_fog_parameters_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group planar_fog_parameters_group; // "?planar_fog_parameters_group@@3Us_tag_group@@A"
// struct s_tag_reference_definition global_planar_fog_reference; // "?global_planar_fog_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_struct_definition planar_fog_vertex_block_struct_definition; // "?planar_fog_vertex_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition planar_fog_vertex_block; // "?planar_fog_vertex_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition planar_fog_set_definition_struct; // "?planar_fog_set_definition_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition planar_fog_zone_set_visibility_definition_block; // "?planar_fog_zone_set_visibility_definition_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition planar_fog_zone_set_visibility_definition_block_struct_definition; // "?planar_fog_zone_set_visibility_definition_block_struct_definition@@3Us_tag_struct_definition@@A"
// class s_static_array<class c_big_flags_typed_no_init<long, 128>, 8> g_visible_fog_bit_vector; // "?g_visible_fog_bit_vector@@3V?$s_static_array@V?$c_big_flags_typed_no_init@J$0IA@@@$07@@A"
// struct s_tag_group_stream_definition legacy_planar_fog_parameters_stream_definition; // "?legacy_planar_fog_parameters_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_planar_fog_parameters_xsync_declaration; // "?legacy_planar_fog_parameters_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_planar_fog_parameters_vtable_shim; // "?legacy_planar_fog_parameters_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// public: static bool s_planar_fog_parameters::postprocess(long, bool);
// public: bool s_planar_fog_definition::render(struct s_patchy_effect_camera_parameters const *, class c_patchy_fog *, bool) const;
// public: long s_planer_fog_set_definition::check_position(union real_point3d const *, float, float *) const;
// public: hkVector4::hkVector4(void);
// public: hkSphere::hkSphere(class hkVector4const &, float);
// public: void hkVector4::operator=(class hkVector4const &);
// public: float & hkVector4::operator()(int);
// public: bool s_planar_fog_definition::need_patchy_effect(void) const;
// public: bool s_planar_fog_definition::submit_shader_constants(class c_patchy_fog *, struct s_patchy_effect_camera_parameters const *, bool, float *) const;
// D3DDevice_SetPixelShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// D3DDevice_SetPixelShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// D3DTag_Index;
// D3DTagCollection_Set;
// void planar_fog_build_zone_set_visibility(long, long);
// union int16_point3d planar_fog_iterations_calculate(struct s_planar_fog_definition const *, long);
// union real_rectangle3d planar_fog_bounds_calculate(struct s_planar_fog_definition const *, long);
// union real_point3d planar_fog_test_point_calculate(struct s_planar_fog_definition const *, long, union int16_point3d const *, union int16_point3d const *);
// class c_patchy_fog * local_get_patchy_effect_data(long, long, long, long);
// public: static bool c_planar_fog_render::build_visible_fog_list(void);
// public: static bool c_planar_fog_render::render(struct s_patchy_effect_camera_parameters const *, long);
// public: static bool c_planar_fog_render::check_object_against_visible_fogs(union real_point3d const *, float, bool, long *, long *);
// public: static class hkError & hkSingleton<class hkError>::getInstance(void);
// public: hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>(void);
// public: unsigned int & hkArrayBase<unsigned int>::operator[](int);
// public: int hkArrayBase<unsigned int>::getSize(void) const;
// public: hkArray<unsigned int, struct hkContainerHeapAllocator>::~hkArray<unsigned int, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>(int);
// public: bool c_big_flags_typed_no_init<long, 128>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 128>::set(long, bool);
// public: bool c_big_flags_typed_no_init<long, 128>::test_range(long, long) const;
// public: long c_big_flags_typed_no_init<long, 128>::get_lowest_bit_set(void) const;
// public: class c_big_flags_typed_no_init<long, 128> & s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::operator[]<short>(short);
// public: class c_big_flags_typed_no_init<long, 128> & s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::operator[]<long>(long);
// public: hkArray<unsigned int, struct hkContainerHeapAllocator>::hkArray<unsigned int, struct hkContainerHeapAllocator>(unsigned int *, int, int);
// public: void hkArray<unsigned int, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: class hkMemoryAllocator & hkContainerHeapAllocator::get(void *);
// public: class hkMemoryAllocator & hkMemoryRouter::heap(void);
// public: hkArrayBase<unsigned int>::hkArrayBase<unsigned int>(unsigned int *, int, int);
// public: virtual hkErrStream::~hkErrStream(void);
// public: hkArrayBase<unsigned int>::~hkArrayBase<unsigned int>(void);
// public: void hkArrayBase<unsigned int>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static bool c_big_flags_typed_no_init<long, 128>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 128>::valid(void) const;
// protected: static long c_big_flags_typed_no_init<long, 128>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 128>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_mask_of_first_slice_of_chunk_inclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_mask_of_second_slice_of_chunk_inclusive(long);
// public: static bool s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::valid<short>(short);
// public: static bool s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::valid<long>(long);
// public: int hkArrayBase<unsigned int>::getCapacity(void) const;
// public: void hkArrayBase<unsigned int>::clear(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_valid_mask_of_last_chunk(void);
// public: static void hkArrayUtil::destruct<unsigned int>(unsigned int *, int, struct hkTraitBool<1>);
// protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: s_patchy_effect_state::s_patchy_effect_state(void);

//public: static bool s_planar_fog_parameters::postprocess(long, bool)
//{
//    mangled_ppc("?postprocess@s_planar_fog_parameters@@SA_NJ_N@Z");
//};

//public: bool s_planar_fog_definition::render(struct s_patchy_effect_camera_parameters const *, class c_patchy_fog *, bool) const
//{
//    mangled_ppc("?render@s_planar_fog_definition@@QBA_NPBUs_patchy_effect_camera_parameters@@PAVc_patchy_fog@@_N@Z");
//};

//public: long s_planer_fog_set_definition::check_position(union real_point3d const *, float, float *) const
//{
//    mangled_ppc("?check_position@s_planer_fog_set_definition@@QBAJPBTreal_point3d@@MPAM@Z");
//};

//public: hkVector4::hkVector4(void)
//{
//    mangled_ppc("??0hkVector4@@QAA@XZ");
//};

//public: hkSphere::hkSphere(class hkVector4const &, float)
//{
//    mangled_ppc("??0hkSphere@@QAA@ABVhkVector4@@M@Z");
//};

//public: void hkVector4::operator=(class hkVector4const &)
//{
//    mangled_ppc("??4hkVector4@@QAAXABV0@@Z");
//};

//public: float & hkVector4::operator()(int)
//{
//    mangled_ppc("??RhkVector4@@QAAAAMH@Z");
//};

//public: bool s_planar_fog_definition::need_patchy_effect(void) const
//{
//    mangled_ppc("?need_patchy_effect@s_planar_fog_definition@@QBA_NXZ");
//};

//public: bool s_planar_fog_definition::submit_shader_constants(class c_patchy_fog *, struct s_patchy_effect_camera_parameters const *, bool, float *) const
//{
//    mangled_ppc("?submit_shader_constants@s_planar_fog_definition@@QBA_NPAVc_patchy_fog@@PBUs_patchy_effect_camera_parameters@@_NPAM@Z");
//};

//D3DDevice_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DDevice_SetPixelShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF1");
//};

//D3DVECTOR4_SetX
//{
//    mangled_ppc("D3DVECTOR4_SetX");
//};

//D3DVECTOR4_SetY
//{
//    mangled_ppc("D3DVECTOR4_SetY");
//};

//D3DVECTOR4_SetZ
//{
//    mangled_ppc("D3DVECTOR4_SetZ");
//};

//D3DVECTOR4_SetW
//{
//    mangled_ppc("D3DVECTOR4_SetW");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//void planar_fog_build_zone_set_visibility(long, long)
//{
//    mangled_ppc("?planar_fog_build_zone_set_visibility@@YAXJJ@Z");
//};

//union int16_point3d planar_fog_iterations_calculate(struct s_planar_fog_definition const *, long)
//{
//    mangled_ppc("?planar_fog_iterations_calculate@@YA?ATint16_point3d@@PBUs_planar_fog_definition@@J@Z");
//};

//union real_rectangle3d planar_fog_bounds_calculate(struct s_planar_fog_definition const *, long)
//{
//    mangled_ppc("?planar_fog_bounds_calculate@@YA?ATreal_rectangle3d@@PBUs_planar_fog_definition@@J@Z");
//};

//union real_point3d planar_fog_test_point_calculate(struct s_planar_fog_definition const *, long, union int16_point3d const *, union int16_point3d const *)
//{
//    mangled_ppc("?planar_fog_test_point_calculate@@YA?ATreal_point3d@@PBUs_planar_fog_definition@@JPBTint16_point3d@@1@Z");
//};

//class c_patchy_fog * local_get_patchy_effect_data(long, long, long, long)
//{
//    mangled_ppc("?local_get_patchy_effect_data@@YAPAVc_patchy_fog@@JJJJ@Z");
//};

//public: static bool c_planar_fog_render::build_visible_fog_list(void)
//{
//    mangled_ppc("?build_visible_fog_list@c_planar_fog_render@@SA_NXZ");
//};

//public: static bool c_planar_fog_render::render(struct s_patchy_effect_camera_parameters const *, long)
//{
//    mangled_ppc("?render@c_planar_fog_render@@SA_NPBUs_patchy_effect_camera_parameters@@J@Z");
//};

//public: static bool c_planar_fog_render::check_object_against_visible_fogs(union real_point3d const *, float, bool, long *, long *)
//{
//    mangled_ppc("?check_object_against_visible_fogs@c_planar_fog_render@@SA_NPBTreal_point3d@@M_NPAJ2@Z");
//};

//public: static class hkError & hkSingleton<class hkError>::getInstance(void)
//{
//    mangled_ppc("?getInstance@?$hkSingleton@VhkError@@@@SAAAVhkError@@XZ");
//};

//public: hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@I$0BAAAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: unsigned int & hkArrayBase<unsigned int>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@I@@QAAAAIH@Z");
//};

//public: int hkArrayBase<unsigned int>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@I@@QBAHXZ");
//};

//public: hkArray<unsigned int, struct hkContainerHeapAllocator>::~hkArray<unsigned int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@IUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 65536, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@I$0BAAAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 128>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0IA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 128>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0IA@@@QAAXJ_N@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 128>::test_range(long, long) const
//{
//    mangled_ppc("?test_range@?$c_big_flags_typed_no_init@J$0IA@@@QBA_NJJ@Z");
//};

//public: long c_big_flags_typed_no_init<long, 128>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_big_flags_typed_no_init@J$0IA@@@QBAJXZ");
//};

//public: class c_big_flags_typed_no_init<long, 128> & s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@V?$c_big_flags_typed_no_init@J$0IA@@@$07@@QAAAAV?$c_big_flags_typed_no_init@J$0IA@@@F@Z");
//};

//public: class c_big_flags_typed_no_init<long, 128> & s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_big_flags_typed_no_init@J$0IA@@@$07@@QAAAAV?$c_big_flags_typed_no_init@J$0IA@@@J@Z");
//};

//public: hkArray<unsigned int, struct hkContainerHeapAllocator>::hkArray<unsigned int, struct hkContainerHeapAllocator>(unsigned int *, int, int)
//{
//    mangled_ppc("??0?$hkArray@IUhkContainerHeapAllocator@@@@QAA@PAIHH@Z");
//};

//public: void hkArray<unsigned int, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@IUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: class hkMemoryAllocator & hkContainerHeapAllocator::get(void *)
//{
//    mangled_ppc("?get@hkContainerHeapAllocator@@QAAAAVhkMemoryAllocator@@PAX@Z");
//};

//public: class hkMemoryAllocator & hkMemoryRouter::heap(void)
//{
//    mangled_ppc("?heap@hkMemoryRouter@@QAAAAVhkMemoryAllocator@@XZ");
//};

//public: hkArrayBase<unsigned int>::hkArrayBase<unsigned int>(unsigned int *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@I@@QAA@PAIHH@Z");
//};

//public: virtual hkErrStream::~hkErrStream(void)
//{
//    mangled_ppc("??1hkErrStream@@UAA@XZ");
//};

//public: hkArrayBase<unsigned int>::~hkArrayBase<unsigned int>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@I@@QAA@XZ");
//};

//public: void hkArrayBase<unsigned int>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@I@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static bool c_big_flags_typed_no_init<long, 128>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0IA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 128>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0IA@@@QBA_NXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 128>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0IA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 128>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0IA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_mask_of_first_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0IA@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0IA@@@KAKJ@Z");
//};

//public: static bool s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@V?$c_big_flags_typed_no_init@J$0IA@@@$07@@SA_NF@Z");
//};

//public: static bool s_static_array<class c_big_flags_typed_no_init<long, 128>, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_big_flags_typed_no_init@J$0IA@@@$07@@SA_NJ@Z");
//};

//public: int hkArrayBase<unsigned int>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@I@@QBAHXZ");
//};

//public: void hkArrayBase<unsigned int>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@I@@QAAXXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0IA@@@KAKXZ");
//};

//public: static void hkArrayUtil::destruct<unsigned int>(unsigned int *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@I@hkArrayUtil@@SAXPAIHU?$hkTraitBool@$00@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 128>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0IA@@@KAKJ@Z");
//};

//public: s_patchy_effect_state::s_patchy_effect_state(void)
//{
//    mangled_ppc("??0s_patchy_effect_state@@QAA@XZ");
//};

