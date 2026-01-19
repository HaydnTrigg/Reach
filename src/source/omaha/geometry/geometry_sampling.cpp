/* ---------- headers */

#include "omaha\geometry\geometry_sampling.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct s_geometry_sample c_geometry_sampler::m_default_lightprobe_sample; // "?m_default_lightprobe_sample@c_geometry_sampler@@2Us_geometry_sample@@A"
// bool g_manually_flush_cache; // "?g_manually_flush_cache@@3_NA"
// public: static struct s_geometry_sample c_geometry_sampler::m_invalid_lightprobe_sample; // "?m_invalid_lightprobe_sample@c_geometry_sampler@@2Us_geometry_sample@@A"
// public: static float c_geometry_sampler::g_bounce_light_scale; // "?g_bounce_light_scale@c_geometry_sampler@@2MA"
// long volatile `bool __cdecl instance_has_lighting_samples(long, long)'::`20'::x_event_category_index; // "?x_event_category_index@?BE@??instance_has_lighting_samples@@YA_NJJ@Z@4JC"
// private: static struct s_geometry_sample c_geometry_sampler::m_cached_sample; // "?m_cached_sample@c_geometry_sampler@@0Us_geometry_sample@@A"
// public: static bool c_geometry_sampler::g_bounce_light_only; // "?g_bounce_light_only@c_geometry_sampler@@2_NA"
// public: static bool c_geometry_sampler::debug_volume_sampling; // "?debug_volume_sampling@c_geometry_sampler@@2_NA"
// bool debug_structure_sampling; // "?debug_structure_sampling@@3_NA"

// private: static long c_geometry_sampler::find_render_method_index_from_collision(long, long, long, long, long *, long *);
// public: static enum e_geometry_test_vector_outcome c_geometry_sampler::geometry_test_vector(union real_point3d const &, union vector3d const &, long, bool, long, bool, bool, bool, struct s_geometry_test_result &);
// public: static bool c_geometry_sampler::geometry_test_collision_result(long, long, long, long, union real_point3d const *, bool, bool, bool &, struct s_geometry_test_result &);
// long mesh_get_vertex_buffer_index_safe(struct s_mesh const *, long);
// bool instance_has_lighting_samples(long, long);
// bool object_has_volume_samples(long);
// bool object_has_valid_lighting(long);
// void get_instance_triangle(void const *, enum e_vertex_type, struct s_compression_info const *, long, unsigned short const *, long, struct s_uncompressed_triangle *);
// void extract_rigid_vertex_data(struct rasterizer_vertex_rigid const *, struct s_compression_info const *, long, long, struct s_uncompressed_triangle *);
// void uncompress3d(struct s_compression_info const *, union real_point3d const *, union real_point3d *);
// void uncompress_texcoord2d(struct s_compression_info const *, union real_point2d const *, union real_point2d *);
// void extract_rigid_vertex_data_compressed(struct s_xenon_rasterizer_vertex_rigid_compressed const *, struct s_compression_info const *, long, long, struct s_uncompressed_triangle *);
// void get_structure_triangle(void const *, long, unsigned short const *, long, struct s_uncompressed_triangle *, long);
// void extract_world_vertex_data(struct rasterizer_vertex_world const *, long, long, struct s_uncompressed_triangle *);
// long pick_nearest_vertex(float, float);
// void decompress_per_vertex_data(struct s_dual_vmf_basis *, unsigned long *, bool, float);
// private: static void c_geometry_sampler::geometry_test_triangle(union real_point3d const *, struct s_uncompressed_triangle const *, float, float, long, void const *, unsigned long const *, long, long, float, long, struct real_matrix4x3const *, struct s_geometry_test_result &, long, struct s_scenario_lightmap_bsp_data const *);
// __lvx;
// __stvx;
// void find_dominant_light_direction(float const *, float const *, float const *, union vector3d *);
// void sample_per_vertex_lightprobes(struct s_scenario_lightmap_entity_data const *, union vector2d const *, float *, float *, float *);
// void calculate_dominant_light_from_lightprobe(float const *, float const *, float const *, union vector3d *, union rgb_color *, float *);
// public: static void c_geometry_sampler::show_all_air_probes(void);
// public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample_one_air_probe(union real_point3d const *, long, struct s_geometry_sample *);
// public: static void c_geometry_sampler::convert_half_dual_vmf_to_lighting_sample(struct half_dual_vmf_lightprobe const *, struct s_geometry_sample *);
// public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample_air_probes(union real_point3d const *, struct s_geometry_sample *, float, float *);
// private: static float c_geometry_sampler::interpolate_wetness_from_vertices(float, float, long const *, long, struct s_tag_reference const *);
// public: static float c_geometry_sampler::sample_wetness_deterministic(long, long, long, union real_point3d const *, class c_global_material_type);
// public: s_geometry_test_result::s_geometry_test_result(void);
// private: static float c_geometry_sampler::sample_wetness(struct s_geometry_test_result const *);
// public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample(union real_point3d const &, union vector3d const &, long, bool, long, bool, bool, float *, struct s_geometry_sample &);
// void sample_lightprobe_textures(long, struct s_scenario_lightmap_bsp_data const *, struct s_scenario_lightmap_entity_data const *, union vector2d const *, struct s_dual_vmf_basis *);
// void sample_diffuse_textures(struct s_scenario_lightmap_entity_data const *, struct s_geometry_test_result const *, union vector3d *);
// public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample_surface_or_air_probe(union real_point3d const &, union vector3d const &, bool, long, bool, bool, struct s_geometry_sample &);
// void debug_volume_samples(struct render_model_definition const *, struct real_matrix4x3const *, union real_point3d const *);
// bool get_volume_sample_at_location(struct render_model_definition const *, union real_point3d const *, struct real_matrix4x3const *, struct s_volume_sample *);
// void volume_sample_radiance_transfer(struct s_volume_sample const *, float const *, float const *, float const *, float *, float *, float *);
// void scenario_lightmap_point_sample(struct s_dual_vmf_basis *, long, long, float, union real_point2d const *);
// void scenario_lightmap_bsp_data_per_pixel_sample(struct s_dual_vmf_basis *, struct s_scenario_lightmap_bsp_data const *, union real_point2d const *, long);
// public: bool c_flags_no_init<enum e_global_material_bit, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_global_material_bit) const;
// public: static bool c_flags_no_init<enum e_global_material_bit, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_global_material_bit);
// private: static unsigned short c_flags_no_init<enum e_global_material_bit, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_global_material_bit);
// float shade_scalar(float, float, float, float, float);

//private: static long c_geometry_sampler::find_render_method_index_from_collision(long, long, long, long, long *, long *)
//{
//    mangled_ppc("?find_render_method_index_from_collision@c_geometry_sampler@@CAJJJJJPAJ0@Z");
//};

//public: static enum e_geometry_test_vector_outcome c_geometry_sampler::geometry_test_vector(union real_point3d const &, union vector3d const &, long, bool, long, bool, bool, bool, struct s_geometry_test_result &)
//{
//    mangled_ppc("?geometry_test_vector@c_geometry_sampler@@SA?AW4e_geometry_test_vector_outcome@@ABTreal_point3d@@ABTvector3d@@J_NJ222AAUs_geometry_test_result@@@Z");
//};

//public: static bool c_geometry_sampler::geometry_test_collision_result(long, long, long, long, union real_point3d const *, bool, bool, bool &, struct s_geometry_test_result &)
//{
//    mangled_ppc("?geometry_test_collision_result@c_geometry_sampler@@SA_NJJJJPBTreal_point3d@@_N1AA_NAAUs_geometry_test_result@@@Z");
//};

//long mesh_get_vertex_buffer_index_safe(struct s_mesh const *, long)
//{
//    mangled_ppc("?mesh_get_vertex_buffer_index_safe@@YAJPBUs_mesh@@J@Z");
//};

//bool instance_has_lighting_samples(long, long)
//{
//    mangled_ppc("?instance_has_lighting_samples@@YA_NJJ@Z");
//};

//bool object_has_volume_samples(long)
//{
//    mangled_ppc("?object_has_volume_samples@@YA_NJ@Z");
//};

//bool object_has_valid_lighting(long)
//{
//    mangled_ppc("?object_has_valid_lighting@@YA_NJ@Z");
//};

//void get_instance_triangle(void const *, enum e_vertex_type, struct s_compression_info const *, long, unsigned short const *, long, struct s_uncompressed_triangle *)
//{
//    mangled_ppc("?get_instance_triangle@@YAXPBXW4e_vertex_type@@PBUs_compression_info@@JPBGJPAUs_uncompressed_triangle@@@Z");
//};

//void extract_rigid_vertex_data(struct rasterizer_vertex_rigid const *, struct s_compression_info const *, long, long, struct s_uncompressed_triangle *)
//{
//    mangled_ppc("?extract_rigid_vertex_data@@YAXPBUrasterizer_vertex_rigid@@PBUs_compression_info@@JJPAUs_uncompressed_triangle@@@Z");
//};

//void uncompress3d(struct s_compression_info const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?uncompress3d@@YAXPBUs_compression_info@@PBTreal_point3d@@PAT2@@Z");
//};

//void uncompress_texcoord2d(struct s_compression_info const *, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?uncompress_texcoord2d@@YAXPBUs_compression_info@@PBTreal_point2d@@PAT2@@Z");
//};

//void extract_rigid_vertex_data_compressed(struct s_xenon_rasterizer_vertex_rigid_compressed const *, struct s_compression_info const *, long, long, struct s_uncompressed_triangle *)
//{
//    mangled_ppc("?extract_rigid_vertex_data_compressed@@YAXPBUs_xenon_rasterizer_vertex_rigid_compressed@@PBUs_compression_info@@JJPAUs_uncompressed_triangle@@@Z");
//};

//void get_structure_triangle(void const *, long, unsigned short const *, long, struct s_uncompressed_triangle *, long)
//{
//    mangled_ppc("?get_structure_triangle@@YAXPBXJPBGJPAUs_uncompressed_triangle@@J@Z");
//};

//void extract_world_vertex_data(struct rasterizer_vertex_world const *, long, long, struct s_uncompressed_triangle *)
//{
//    mangled_ppc("?extract_world_vertex_data@@YAXPBUrasterizer_vertex_world@@JJPAUs_uncompressed_triangle@@@Z");
//};

//long pick_nearest_vertex(float, float)
//{
//    mangled_ppc("?pick_nearest_vertex@@YAJMM@Z");
//};

//void decompress_per_vertex_data(struct s_dual_vmf_basis *, unsigned long *, bool, float)
//{
//    mangled_ppc("?decompress_per_vertex_data@@YAXPAUs_dual_vmf_basis@@PAK_NM@Z");
//};

//private: static void c_geometry_sampler::geometry_test_triangle(union real_point3d const *, struct s_uncompressed_triangle const *, float, float, long, void const *, unsigned long const *, long, long, float, long, struct real_matrix4x3const *, struct s_geometry_test_result &, long, struct s_scenario_lightmap_bsp_data const *)
//{
//    mangled_ppc("?geometry_test_triangle@c_geometry_sampler@@CAXPBTreal_point3d@@PBUs_uncompressed_triangle@@MMJPBXPBKJJMJPBUreal_matrix4x3@@AAUs_geometry_test_result@@JPBUs_scenario_lightmap_bsp_data@@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//void find_dominant_light_direction(float const *, float const *, float const *, union vector3d *)
//{
//    mangled_ppc("?find_dominant_light_direction@@YAXPBM00PATvector3d@@@Z");
//};

//void sample_per_vertex_lightprobes(struct s_scenario_lightmap_entity_data const *, union vector2d const *, float *, float *, float *)
//{
//    mangled_ppc("?sample_per_vertex_lightprobes@@YAXPBUs_scenario_lightmap_entity_data@@PBTvector2d@@PAM22@Z");
//};

//void calculate_dominant_light_from_lightprobe(float const *, float const *, float const *, union vector3d *, union rgb_color *, float *)
//{
//    mangled_ppc("?calculate_dominant_light_from_lightprobe@@YAXPBM00PATvector3d@@PATrgb_color@@PAM@Z");
//};

//public: static void c_geometry_sampler::show_all_air_probes(void)
//{
//    mangled_ppc("?show_all_air_probes@c_geometry_sampler@@SAXXZ");
//};

//public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample_one_air_probe(union real_point3d const *, long, struct s_geometry_sample *)
//{
//    mangled_ppc("?sample_one_air_probe@c_geometry_sampler@@SA?AW4e_geometry_sampler_outcome@@PBTreal_point3d@@JPAUs_geometry_sample@@@Z");
//};

//public: static void c_geometry_sampler::convert_half_dual_vmf_to_lighting_sample(struct half_dual_vmf_lightprobe const *, struct s_geometry_sample *)
//{
//    mangled_ppc("?convert_half_dual_vmf_to_lighting_sample@c_geometry_sampler@@SAXPBUhalf_dual_vmf_lightprobe@@PAUs_geometry_sample@@@Z");
//};

//public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample_air_probes(union real_point3d const *, struct s_geometry_sample *, float, float *)
//{
//    mangled_ppc("?sample_air_probes@c_geometry_sampler@@SA?AW4e_geometry_sampler_outcome@@PBTreal_point3d@@PAUs_geometry_sample@@MPAM@Z");
//};

//private: static float c_geometry_sampler::interpolate_wetness_from_vertices(float, float, long const *, long, struct s_tag_reference const *)
//{
//    mangled_ppc("?interpolate_wetness_from_vertices@c_geometry_sampler@@CAMMMPBJJPBUs_tag_reference@@@Z");
//};

//public: static float c_geometry_sampler::sample_wetness_deterministic(long, long, long, union real_point3d const *, class c_global_material_type)
//{
//    mangled_ppc("?sample_wetness_deterministic@c_geometry_sampler@@SAMJJJPBTreal_point3d@@Vc_global_material_type@@@Z");
//};

//public: s_geometry_test_result::s_geometry_test_result(void)
//{
//    mangled_ppc("??0s_geometry_test_result@@QAA@XZ");
//};

//private: static float c_geometry_sampler::sample_wetness(struct s_geometry_test_result const *)
//{
//    mangled_ppc("?sample_wetness@c_geometry_sampler@@CAMPBUs_geometry_test_result@@@Z");
//};

//public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample(union real_point3d const &, union vector3d const &, long, bool, long, bool, bool, float *, struct s_geometry_sample &)
//{
//    mangled_ppc("?sample@c_geometry_sampler@@SA?AW4e_geometry_sampler_outcome@@ABTreal_point3d@@ABTvector3d@@J_NJ22PAMAAUs_geometry_sample@@@Z");
//};

//void sample_lightprobe_textures(long, struct s_scenario_lightmap_bsp_data const *, struct s_scenario_lightmap_entity_data const *, union vector2d const *, struct s_dual_vmf_basis *)
//{
//    mangled_ppc("?sample_lightprobe_textures@@YAXJPBUs_scenario_lightmap_bsp_data@@PBUs_scenario_lightmap_entity_data@@PBTvector2d@@PAUs_dual_vmf_basis@@@Z");
//};

//void sample_diffuse_textures(struct s_scenario_lightmap_entity_data const *, struct s_geometry_test_result const *, union vector3d *)
//{
//    mangled_ppc("?sample_diffuse_textures@@YAXPBUs_scenario_lightmap_entity_data@@PBUs_geometry_test_result@@PATvector3d@@@Z");
//};

//public: static enum e_geometry_sampler_outcome c_geometry_sampler::sample_surface_or_air_probe(union real_point3d const &, union vector3d const &, bool, long, bool, bool, struct s_geometry_sample &)
//{
//    mangled_ppc("?sample_surface_or_air_probe@c_geometry_sampler@@SA?AW4e_geometry_sampler_outcome@@ABTreal_point3d@@ABTvector3d@@_NJ22AAUs_geometry_sample@@@Z");
//};

//void debug_volume_samples(struct render_model_definition const *, struct real_matrix4x3const *, union real_point3d const *)
//{
//    mangled_ppc("?debug_volume_samples@@YAXPBUrender_model_definition@@PBUreal_matrix4x3@@PBTreal_point3d@@@Z");
//};

//bool get_volume_sample_at_location(struct render_model_definition const *, union real_point3d const *, struct real_matrix4x3const *, struct s_volume_sample *)
//{
//    mangled_ppc("?get_volume_sample_at_location@@YA_NPBUrender_model_definition@@PBTreal_point3d@@PBUreal_matrix4x3@@PAUs_volume_sample@@@Z");
//};

//void volume_sample_radiance_transfer(struct s_volume_sample const *, float const *, float const *, float const *, float *, float *, float *)
//{
//    mangled_ppc("?volume_sample_radiance_transfer@@YAXPBUs_volume_sample@@PBM11PAM22@Z");
//};

//void scenario_lightmap_point_sample(struct s_dual_vmf_basis *, long, long, float, union real_point2d const *)
//{
//    mangled_ppc("?scenario_lightmap_point_sample@@YAXPAUs_dual_vmf_basis@@JJMPBTreal_point2d@@@Z");
//};

//void scenario_lightmap_bsp_data_per_pixel_sample(struct s_dual_vmf_basis *, struct s_scenario_lightmap_bsp_data const *, union real_point2d const *, long)
//{
//    mangled_ppc("?scenario_lightmap_bsp_data_per_pixel_sample@@YAXPAUs_dual_vmf_basis@@PBUs_scenario_lightmap_bsp_data@@PBTreal_point2d@@J@Z");
//};

//public: bool c_flags_no_init<enum e_global_material_bit, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_global_material_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_global_material_bit@@G$04Us_default_enum_string_resolver@@@@QBA_NW4e_global_material_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_global_material_bit, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_global_material_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_global_material_bit@@G$04Us_default_enum_string_resolver@@@@SA_NW4e_global_material_bit@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_global_material_bit, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_global_material_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_global_material_bit@@G$04Us_default_enum_string_resolver@@@@CAGW4e_global_material_bit@@@Z");
//};

//float shade_scalar(float, float, float, float, float)
//{
//    mangled_ppc("?shade_scalar@@YAMMMMMM@Z");
//};

