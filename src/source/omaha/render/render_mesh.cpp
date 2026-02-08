/* ---------- headers */

#include "omaha\render\render_mesh.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<long, 4>::k_element_count; // "?k_element_count@?$s_static_array@J$03@@2JB"
// public: static long const s_static_array<class c_global_material_type, 4>::k_element_count; // "?k_element_count@?$s_static_array@Vc_global_material_type@@$03@@2JB"
// public: static long const s_static_array<long, 8>::k_element_count; // "?k_element_count@?$s_static_array@J$07@@2JB"
// public: static long const s_static_array<class c_global_material_type, 8>::k_element_count; // "?k_element_count@?$s_static_array@Vc_global_material_type@@$07@@2JB"
// public: static enum e_new_damage_section_flag const c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_new_damage_section_flag@@K$0M@Us_default_enum_string_resolver@@@@2W4e_new_damage_section_flag@@B"
// public: static enum e_model_target_lock_on_flags const c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_model_target_lock_on_flags@@E$03Us_default_enum_string_resolver@@@@2W4e_model_target_lock_on_flags@@B"
// public: static enum e_model_target_flags const c_flags_no_init<enum e_model_target_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_model_target_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_model_target_flags@@B"
// bool render_tessellated_mesh_enabled; // "?render_tessellated_mesh_enabled@@3_NA"
// bool g_use_single_pass_rendering; // "?g_use_single_pass_rendering@@3_NA"
// bool g_render_debug_foliage_enable; // "?g_render_debug_foliage_enable@@3_NA"
// bool g_imposter_cache_build; // "?g_imposter_cache_build@@3_NA"
// bool g_imposter_capturing; // "?g_imposter_capturing@@3_NA"
// bool render_tessellated_wireframe_enabled; // "?render_tessellated_wireframe_enabled@@3_NA"
// bool g_force_single_pass_rendering; // "?g_force_single_pass_rendering@@3_NA"
// bool g_disable_prt; // "?g_disable_prt@@3_NA"
// bool g_force_render_lightmap_mesh; // "?g_force_render_lightmap_mesh@@3_NA"
// bool g_render_mesh_part_only; // "?g_render_mesh_part_only@@3_NA"
// bool g_render_state_cache_should_be_invalidated; // "?g_render_state_cache_should_be_invalidated@@3_NA"
// bool g_disable_render_state_cache_optimization; // "?g_disable_render_state_cache_optimization@@3_NA"
// class c_gpu_scratch_buffer g_gpu_scratch_buffer; // "?g_gpu_scratch_buffer@@3Vc_gpu_scratch_buffer@@A"

// public: c_gpu_scratch_buffer::c_gpu_scratch_buffer(void);
// public: bool c_gpu_scratch_buffer::initialize(void);
// public: bool c_gpu_scratch_buffer::is_initialized(void) const;
// public: void * c_gpu_scratch_buffer::get_buffer_address(void);
// public: class c_rasterizer_vertex_buffer * c_gpu_scratch_buffer::get_vertex_buffer(void);
// void real_matrix4x3_to_s_model_skinning_matrix(struct s_model_skinning_matrix *, struct real_matrix4x3const *);
// void s_model_skinning_matrix_to_real_matrix4x3(struct real_matrix4x3*, struct s_model_skinning_matrix const *);
// void render_mesh_submit_compression(struct s_compression_info const *);
// public: c_fast_constant_setter::c_fast_constant_setter(long, long, bool);
// D3DTag_Index;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// public: void c_fast_constant_setter::mark_dirty(struct D3DDevice *);
// D3DTagCollection_Set;
// public: void c_fast_constant_setter::set_single_vertex_shader_constant_without_dirty(struct D3DDevice *, long, float, float, float, float);
// void render_mesh_submit_compression_instance_optimized(struct s_compression_optimized_info const *);
// public: void c_fast_constant_setter::set_single_vertex_shader_constant_vector_without_dirty(struct D3DDevice *, long, union vector4d const *);
// void render_mesh_submit_compression_with_constant_scale(struct s_compression_info const *, float);
// void render_mesh_submit_rigid_matrix(struct real_matrix4x3const *);
// public: static bool c_render_globals::get_skinning_constants_owned(void);
// public: static void c_rasterizer_shaders::begin_vertex_shader_constant(long, long, union vector4d **);
// public: static void c_rasterizer_shaders::end_vertex_shader_constant(void);
// public: long D3DDevice::GpuBeginVertexShaderConstantF4(unsigned int, struct __vector4**, unsigned long);
// public: void D3DDevice::GpuEndVertexShaderConstantF4(void);
// D3DDevice_GpuEndShaderConstantF4;
// bool part_is_renderable(struct s_part const *, struct geometry_material const *, long);
// bool part_is_renderable_inline(struct s_part const *);
// void render_mesh_submit_matrices(struct real_matrix4x3const *, long);
// void render_mesh_submit_skinning(struct s_model_skinning_matrix const *, long);
// void render_dynamic_mesh(void const *, long, long, long, long, struct s_shader_extern_info const *, bool);
// public: static class c_render_method const * c_render_method::get(long);
// void render_mesh_part_default(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, enum e_entry_point, enum e_pass, unsigned long const *, struct s_tag_reference const *, long);
// public: unsigned long c_rasterizer_vertex_buffer::get_vertex_count(void) const;
// public: bool c_render_method_shader_decal::get_specular_modulate(void) const;
// bool is_tessellateable_mesh_part(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, struct geometry_material const *);
// public: long c_rasterizer_index_buffer::get_tessellated_primitive_type(void) const;
// void render_mesh_tessellated_region(struct s_render_geometry const *, struct s_mesh const *, struct s_part const **const, short, enum e_entry_point, struct geometry_material const *, float);
// public: struct D3DVertexBuffer * c_rasterizer_vertex_buffer::get_d3d_buffer(void) const;
// public: long c_rasterizer_index_buffer::calc_primitive_number(long) const;
// public: struct s_render_method_postprocess_definition const * c_render_method::get_postprocess_definition(void) const;
// public: long D3DDevice::BeginExport(unsigned long, struct D3DResource *, unsigned long);
// public: long D3DDevice::EndExport(unsigned long, struct D3DResource *, unsigned long);
// enum e_entry_point select_mesh_entry_point_for_pass(struct s_mesh const *, enum e_pass, enum e_lightmap_availability_setting, enum e_lighting_policy_modifier);
// enum e_entry_point select_entry_point_for_pass(enum e_pass, enum e_lighting_policy_modifier);
// void render_mesh_part(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, enum e_pass, unsigned long const *, struct s_tag_reference const *, enum e_lightmap_availability_setting, enum e_lighting_policy_modifier, bool, bool, long);
// void render_mesh_part_imposter(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, bool);
// void render_mesh_part_instance_imposter(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *);
// void render_mesh_subpart_instance_imposter(struct s_render_geometry const *, struct s_mesh const *, struct s_subpart const *);
// void render_mesh_part_no_material(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, unsigned long const *);
// void begin_render_mesh_part_only(void);
// void end_render_mesh_part_only(void);
// public: char const * s_static_string<256>::operator char const *(void) const;
// bool operator==<long>(enum e_none_sentinel const &, long const &);
// bool operator!=<long>(enum e_none_sentinel const &, long const &);
// bool operator!=<enum e_cull_mode>(enum e_none_sentinel const &, enum e_cull_mode const &);
// bool operator!=<unsigned short>(unsigned short const &, enum e_none_sentinel const &);
// bool operator==<enum e_cull_mode>(enum e_none_sentinel const &, enum e_cull_mode const &);
// bool operator==<unsigned short>(unsigned short const &, enum e_none_sentinel const &);
// bool valid_real(float const &);
// public: c_string_builder::c_string_builder(char const *, ...);
// public: c_string_builder::~c_string_builder(void);
// float square_root(float);
// float sqrt(float);
// sqrtf;
// float dot_product3d(union vector3d const *, union vector3d const *);
// bool valid_realcmp(float, float);
// float fabs(float);
// fabsf;
// bool valid_real_point3d(union real_point3d const *);
// bool valid_real_normal3d(union vector3d const *);
// float magnitude_squared3d(union vector3d const *);
// bool valid_real_matrix4x3(struct real_matrix4x3const *);
// bool valid_real_vector3d_axes3(union vector3d const *, union vector3d const *, union vector3d const *);
// bool operator!=<short>(short const &, enum e_none_sentinel const &);
// public: void s_static_string<256>::print_va(char const *, char *);
// bool operator==<short>(short const &, enum e_none_sentinel const &);

//public: c_gpu_scratch_buffer::c_gpu_scratch_buffer(void)
//{
//    mangled_ppc("??0c_gpu_scratch_buffer@@QAA@XZ");
//};

//public: bool c_gpu_scratch_buffer::initialize(void)
//{
//    mangled_ppc("?initialize@c_gpu_scratch_buffer@@QAA_NXZ");
//};

//public: bool c_gpu_scratch_buffer::is_initialized(void) const
//{
//    mangled_ppc("?is_initialized@c_gpu_scratch_buffer@@QBA_NXZ");
//};

//public: void * c_gpu_scratch_buffer::get_buffer_address(void)
//{
//    mangled_ppc("?get_buffer_address@c_gpu_scratch_buffer@@QAAPAXXZ");
//};

//public: class c_rasterizer_vertex_buffer * c_gpu_scratch_buffer::get_vertex_buffer(void)
//{
//    mangled_ppc("?get_vertex_buffer@c_gpu_scratch_buffer@@QAAPAVc_rasterizer_vertex_buffer@@XZ");
//};

//void real_matrix4x3_to_s_model_skinning_matrix(struct s_model_skinning_matrix *, struct real_matrix4x3const *)
//{
//    mangled_ppc("?real_matrix4x3_to_s_model_skinning_matrix@@YAXPAUs_model_skinning_matrix@@PBUreal_matrix4x3@@@Z");
//};

//void s_model_skinning_matrix_to_real_matrix4x3(struct real_matrix4x3*, struct s_model_skinning_matrix const *)
//{
//    mangled_ppc("?s_model_skinning_matrix_to_real_matrix4x3@@YAXPAUreal_matrix4x3@@PBUs_model_skinning_matrix@@@Z");
//};

//void render_mesh_submit_compression(struct s_compression_info const *)
//{
//    mangled_ppc("?render_mesh_submit_compression@@YAXPBUs_compression_info@@@Z");
//};

//public: c_fast_constant_setter::c_fast_constant_setter(long, long, bool)
//{
//    mangled_ppc("??0c_fast_constant_setter@@QAA@JJ_N@Z");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//public: void c_fast_constant_setter::mark_dirty(struct D3DDevice *)
//{
//    mangled_ppc("?mark_dirty@c_fast_constant_setter@@QAAXPAUD3DDevice@@@Z");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//public: void c_fast_constant_setter::set_single_vertex_shader_constant_without_dirty(struct D3DDevice *, long, float, float, float, float)
//{
//    mangled_ppc("?set_single_vertex_shader_constant_without_dirty@c_fast_constant_setter@@QAAXPAUD3DDevice@@JMMMM@Z");
//};

//void render_mesh_submit_compression_instance_optimized(struct s_compression_optimized_info const *)
//{
//    mangled_ppc("?render_mesh_submit_compression_instance_optimized@@YAXPBUs_compression_optimized_info@@@Z");
//};

//public: void c_fast_constant_setter::set_single_vertex_shader_constant_vector_without_dirty(struct D3DDevice *, long, union vector4d const *)
//{
//    mangled_ppc("?set_single_vertex_shader_constant_vector_without_dirty@c_fast_constant_setter@@QAAXPAUD3DDevice@@JPBTvector4d@@@Z");
//};

//void render_mesh_submit_compression_with_constant_scale(struct s_compression_info const *, float)
//{
//    mangled_ppc("?render_mesh_submit_compression_with_constant_scale@@YAXPBUs_compression_info@@M@Z");
//};

//void render_mesh_submit_rigid_matrix(struct real_matrix4x3const *)
//{
//    mangled_ppc("?render_mesh_submit_rigid_matrix@@YAXPBUreal_matrix4x3@@@Z");
//};

//public: static bool c_render_globals::get_skinning_constants_owned(void)
//{
//    mangled_ppc("?get_skinning_constants_owned@c_render_globals@@SA_NXZ");
//};

//public: static void c_rasterizer_shaders::begin_vertex_shader_constant(long, long, union vector4d **)
//{
//    mangled_ppc("?begin_vertex_shader_constant@c_rasterizer_shaders@@SAXJJPAPATvector4d@@@Z");
//};

//public: static void c_rasterizer_shaders::end_vertex_shader_constant(void)
//{
//    mangled_ppc("?end_vertex_shader_constant@c_rasterizer_shaders@@SAXXZ");
//};

//public: long D3DDevice::GpuBeginVertexShaderConstantF4(unsigned int, struct __vector4**, unsigned long)
//{
//    mangled_ppc("?GpuBeginVertexShaderConstantF4@D3DDevice@@QAAJIPAPAU__vector4@@K@Z");
//};

//public: void D3DDevice::GpuEndVertexShaderConstantF4(void)
//{
//    mangled_ppc("?GpuEndVertexShaderConstantF4@D3DDevice@@QAAXXZ");
//};

//D3DDevice_GpuEndShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuEndShaderConstantF4");
//};

//bool part_is_renderable(struct s_part const *, struct geometry_material const *, long)
//{
//    mangled_ppc("?part_is_renderable@@YA_NPBUs_part@@PBUgeometry_material@@J@Z");
//};

//bool part_is_renderable_inline(struct s_part const *)
//{
//    mangled_ppc("?part_is_renderable_inline@@YA_NPBUs_part@@@Z");
//};

//void render_mesh_submit_matrices(struct real_matrix4x3const *, long)
//{
//    mangled_ppc("?render_mesh_submit_matrices@@YAXPBUreal_matrix4x3@@J@Z");
//};

//void render_mesh_submit_skinning(struct s_model_skinning_matrix const *, long)
//{
//    mangled_ppc("?render_mesh_submit_skinning@@YAXPBUs_model_skinning_matrix@@J@Z");
//};

//void render_dynamic_mesh(void const *, long, long, long, long, struct s_shader_extern_info const *, bool)
//{
//    mangled_ppc("?render_dynamic_mesh@@YAXPBXJJJJPBUs_shader_extern_info@@_N@Z");
//};

//public: static class c_render_method const * c_render_method::get(long)
//{
//    mangled_ppc("?get@c_render_method@@SAPBV1@J@Z");
//};

//void render_mesh_part_default(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, enum e_entry_point, enum e_pass, unsigned long const *, struct s_tag_reference const *, long)
//{
//    mangled_ppc("?render_mesh_part_default@@YAXPBUs_render_geometry@@PBUs_mesh@@PBUs_part@@W4e_entry_point@@W4e_pass@@PBKPBUs_tag_reference@@J@Z");
//};

//public: unsigned long c_rasterizer_vertex_buffer::get_vertex_count(void) const
//{
//    mangled_ppc("?get_vertex_count@c_rasterizer_vertex_buffer@@QBAKXZ");
//};

//public: bool c_render_method_shader_decal::get_specular_modulate(void) const
//{
//    mangled_ppc("?get_specular_modulate@c_render_method_shader_decal@@QBA_NXZ");
//};

//bool is_tessellateable_mesh_part(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, struct geometry_material const *)
//{
//    mangled_ppc("?is_tessellateable_mesh_part@@YA_NPBUs_render_geometry@@PBUs_mesh@@PBUs_part@@PBUgeometry_material@@@Z");
//};

//public: long c_rasterizer_index_buffer::get_tessellated_primitive_type(void) const
//{
//    mangled_ppc("?get_tessellated_primitive_type@c_rasterizer_index_buffer@@QBAJXZ");
//};

//void render_mesh_tessellated_region(struct s_render_geometry const *, struct s_mesh const *, struct s_part const **const, short, enum e_entry_point, struct geometry_material const *, float)
//{
//    mangled_ppc("?render_mesh_tessellated_region@@YAXPBUs_render_geometry@@PBUs_mesh@@QAPBUs_part@@FW4e_entry_point@@PBUgeometry_material@@M@Z");
//};

//public: struct D3DVertexBuffer * c_rasterizer_vertex_buffer::get_d3d_buffer(void) const
//{
//    mangled_ppc("?get_d3d_buffer@c_rasterizer_vertex_buffer@@QBAPAUD3DVertexBuffer@@XZ");
//};

//public: long c_rasterizer_index_buffer::calc_primitive_number(long) const
//{
//    mangled_ppc("?calc_primitive_number@c_rasterizer_index_buffer@@QBAJJ@Z");
//};

//public: struct s_render_method_postprocess_definition const * c_render_method::get_postprocess_definition(void) const
//{
//    mangled_ppc("?get_postprocess_definition@c_render_method@@QBAPBUs_render_method_postprocess_definition@@XZ");
//};

//public: long D3DDevice::BeginExport(unsigned long, struct D3DResource *, unsigned long)
//{
//    mangled_ppc("?BeginExport@D3DDevice@@QAAJKPAUD3DResource@@K@Z");
//};

//public: long D3DDevice::EndExport(unsigned long, struct D3DResource *, unsigned long)
//{
//    mangled_ppc("?EndExport@D3DDevice@@QAAJKPAUD3DResource@@K@Z");
//};

//enum e_entry_point select_mesh_entry_point_for_pass(struct s_mesh const *, enum e_pass, enum e_lightmap_availability_setting, enum e_lighting_policy_modifier)
//{
//    mangled_ppc("?select_mesh_entry_point_for_pass@@YA?AW4e_entry_point@@PBUs_mesh@@W4e_pass@@W4e_lightmap_availability_setting@@W4e_lighting_policy_modifier@@@Z");
//};

//enum e_entry_point select_entry_point_for_pass(enum e_pass, enum e_lighting_policy_modifier)
//{
//    mangled_ppc("?select_entry_point_for_pass@@YA?AW4e_entry_point@@W4e_pass@@W4e_lighting_policy_modifier@@@Z");
//};

//void render_mesh_part(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, enum e_pass, unsigned long const *, struct s_tag_reference const *, enum e_lightmap_availability_setting, enum e_lighting_policy_modifier, bool, bool, long)
//{
//    mangled_ppc("?render_mesh_part@@YAXPBUs_render_geometry@@PBUs_mesh@@PBUs_part@@W4e_pass@@PBKPBUs_tag_reference@@W4e_lightmap_availability_setting@@W4e_lighting_policy_modifier@@_N_NJ@Z");
//};

//void render_mesh_part_imposter(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, bool)
//{
//    mangled_ppc("?render_mesh_part_imposter@@YAXPBUs_render_geometry@@PBUs_mesh@@PBUs_part@@_N@Z");
//};

//void render_mesh_part_instance_imposter(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *)
//{
//    mangled_ppc("?render_mesh_part_instance_imposter@@YAXPBUs_render_geometry@@PBUs_mesh@@PBUs_part@@@Z");
//};

//void render_mesh_subpart_instance_imposter(struct s_render_geometry const *, struct s_mesh const *, struct s_subpart const *)
//{
//    mangled_ppc("?render_mesh_subpart_instance_imposter@@YAXPBUs_render_geometry@@PBUs_mesh@@PBUs_subpart@@@Z");
//};

//void render_mesh_part_no_material(struct s_render_geometry const *, struct s_mesh const *, struct s_part const *, unsigned long const *)
//{
//    mangled_ppc("?render_mesh_part_no_material@@YAXPBUs_render_geometry@@PBUs_mesh@@PBUs_part@@PBK@Z");
//};

//void begin_render_mesh_part_only(void)
//{
//    mangled_ppc("?begin_render_mesh_part_only@@YAXXZ");
//};

//void end_render_mesh_part_only(void)
//{
//    mangled_ppc("?end_render_mesh_part_only@@YAXXZ");
//};

//public: char const * s_static_string<256>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0BAA@@@QBAPBDXZ");
//};

//bool operator==<long>(enum e_none_sentinel const &, long const &)
//{
//    mangled_ppc("??$?8J@@YA_NABW4e_none_sentinel@@ABJ@Z");
//};

//bool operator!=<long>(enum e_none_sentinel const &, long const &)
//{
//    mangled_ppc("??$?9J@@YA_NABW4e_none_sentinel@@ABJ@Z");
//};

//bool operator!=<enum e_cull_mode>(enum e_none_sentinel const &, enum e_cull_mode const &)
//{
//    mangled_ppc("??$?9W4e_cull_mode@@@@YA_NABW4e_none_sentinel@@ABW4e_cull_mode@@@Z");
//};

//bool operator!=<unsigned short>(unsigned short const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9G@@YA_NABGABW4e_none_sentinel@@@Z");
//};

//bool operator==<enum e_cull_mode>(enum e_none_sentinel const &, enum e_cull_mode const &)
//{
//    mangled_ppc("??$?8W4e_cull_mode@@@@YA_NABW4e_none_sentinel@@ABW4e_cull_mode@@@Z");
//};

//bool operator==<unsigned short>(unsigned short const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8G@@YA_NABGABW4e_none_sentinel@@@Z");
//};

//bool valid_real(float const &)
//{
//    mangled_ppc("?valid_real@@YA_NABM@Z");
//};

//public: c_string_builder::c_string_builder(char const *, ...)
//{
//    mangled_ppc("??0c_string_builder@@QAA@PBDZZ");
//};

//public: c_string_builder::~c_string_builder(void)
//{
//    mangled_ppc("??1c_string_builder@@QAA@XZ");
//};

//float sqrt(float)
//{
//    mangled_ppc("?sqrt@@YAMM@Z");
//};

//sqrtf
//{
//    mangled_ppc("sqrtf");
//};

//float fabs(float)
//{
//    mangled_ppc("?fabs@@YAMM@Z");
//};

//fabsf
//{
//    mangled_ppc("fabsf");
//};

//bool operator!=<short>(short const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9F@@YA_NABFABW4e_none_sentinel@@@Z");
//};

//public: void s_static_string<256>::print_va(char const *, char *)
//{
//    mangled_ppc("?print_va@?$s_static_string@$0BAA@@@QAAXPBDPAD@Z");
//};

//bool operator==<short>(short const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8F@@YA_NABFABW4e_none_sentinel@@@Z");
//};
