/* ---------- headers */

#include "omaha\ai\sector.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_837D03F0; // "except_record_837D03F0"
// except_record_837D0528; // "except_record_837D0528"
// except_record_837D0FE8; // "except_record_837D0FE8"
// except_record_837D12E0; // "except_record_837D12E0"
// class c_sector_ref g_sector_none; // "?g_sector_none@@3Vc_sector_ref@@A"
// struct dynamic_array g_debug_link_mapping; // "?g_debug_link_mapping@@3Udynamic_array@@A"
// struct dynamic_array g_vertex_record_array; // "?g_vertex_record_array@@3Udynamic_array@@A"
// struct dynamic_array g_hint_array; // "?g_hint_array@@3Udynamic_array@@A"
// struct dynamic_array g_link_array; // "?g_link_array@@3Udynamic_array@@A"
// struct dynamic_array g_sector_array; // "?g_sector_array@@3Udynamic_array@@A"
// long global_num_hints; // "?global_num_hints@@3JA"
// long global_num_vertices; // "?global_num_vertices@@3JA"
// long global_num_links; // "?global_num_links@@3JA"
// long global_num_sectors; // "?global_num_sectors@@3JA"
// struct pathfinding_data *global_pathfinding_data; // "?global_pathfinding_data@@3PAUpathfinding_data@@A"
// struct pathfinding_hint_data *global_hints; // "?global_hints@@3PAUpathfinding_hint_data@@A"
// struct dynamic_array g_vertex_array; // "?g_vertex_array@@3Udynamic_array@@A"
// class c_collision_bsp_reference global_sector_bsp; // "?global_sector_bsp@@3Vc_collision_bsp_reference@@A"

// public: bool c_link_constructor::reversed(long) const;
// public: bool c_link_constructor::get_vector(union vector3d *, bool) const;
// public: bool c_link_constructor::get_vector(union vector3d *, long) const;
// public: bool c_link_constructor::get_direction(union vector3d *, bool) const;
// public: bool c_link_constructor::get_direction(union vector3d *, long) const;
// public: float c_link_constructor::get_length(void) const;
// public: void c_link_constructor::modified(void);
// public: long c_link_constructor::common_vertex(class c_link_constructor *) const;
// public: long c_link_constructor::opposite_sector(long) const;
// bool pathfinding_data_valid(long, short);
// bool pathfinding_data_generate_all(void);
// bool pathfinding_data_generate(unsigned long, bool);
// bool pathfinding_generation_allowed(void);
// bool pathfinding_data_generate_internal(short);
// bool create_pathfinding_data(struct scenario *, short, class c_static_stack<struct s_cluster_reference, 1024> *, bool);
// bool pathfinding_object_compare(short, short, void const *);
// short sector_characterize_normal(union vector3d *);
// bool characterize_sector_constructor(class c_sector_constructor *, union vector3d *);
// long create_link(long, class c_pathfinding_object *, unsigned long);
// void sector_add_child(class c_sector_constructor *, long);
// long create_sector(long, class c_pathfinding_object *, long);
// long create_vertex(long);
// long create_vertex_record(long);
// long create_tag_vertex(void);
// long create_hint(void);
// long create_tag_hint(struct pathfinding_data *);
// void sector_centroid(long, union real_point3d *);
// void sector_link_iterator_new(struct sector_link_iterator *, long, long);
// class c_link_constructor * sector_link_iterator_next(struct sector_link_iterator *);
// void vertex_link_iterator_new(struct vertex_link_iterator *, long, long);
// class c_link_constructor * vertex_link_iterator_next(struct vertex_link_iterator *);
// void verify_sector(long);
// long opposite_surface(class c_link_constructor *, class c_sector_constructor *);
// bool replace_sector_ref(class c_link_constructor *, class c_sector_constructor *, long);
// long get_ccw_vertex(long, class c_sector_constructor *);
// long get_cw_vertex(long, class c_sector_constructor *);
// void set_ccw_vertex(long, class c_sector_constructor *, long);
// void set_cw_vertex(long, class c_sector_constructor *, long);
// void set_ccw_link(long, class c_sector_constructor *, long);
// long get_ccw_link(long, long);
// long cw_link(long, long);
// void reverse_link_constructor(class c_link_constructor *);
// void get_sector_normal(class c_sector_constructor *, union vector3d *);
// bool sector_check_convex(long);
// bool sector_check_convex(long, bool);
// unsigned short runtime_ccw_link(struct pathfinding_data const *, long, long);
// unsigned short runtime_cw_link(struct pathfinding_data const *, long, long);
// void get_sector_flags_normal(long, union vector3d *);
// void get_sector_normal(struct sector const *, union vector3d *, bool);
// bool sector_broken(class c_sector_ref);
// bool sector_broken(short, struct pathfinding_data const *, struct sector const *);
// void runtime_link_iterator_new(struct runtime_link_iterator *, struct pathfinding_data const *, long, long);
// void runtime_link_iterator_new(struct runtime_link_iterator *, struct pathfinding_data const *, long);
// struct sector_link * runtime_link_iterator_next(struct runtime_link_iterator *);
// void sector_bsps_debug_spray_proc(struct collision_result *, void *);
// void sector_bsps_debug(void);
// void giant_sector_bsps_debug_spray_proc(struct collision_result *, void *);
// void giant_sector_bsps_debug(void);
// void sector_render_debug(class c_sector_ref);
// void sector_render_debug(class c_sector_ref, union argb_color const *);
// void sector_render_debug(struct pathfinding_data const *, unsigned short, union argb_color const *);
// void sector_render_debug(struct pathfinding_data const *, unsigned short, short, union argb_color const *);
// void sector_link_render_debug(long, struct pathfinding_data const *, union argb_color const *, bool);
// void sector_link_render_debug_full(long, struct pathfinding_data const *);
// float sector_render_get_collision_sphere_size(float);
// void sector_render_links(void);
// void sector_debug_object_pathfinding(long);
// struct sector * pathfinding_get_sector(struct pathfinding_data const *, unsigned short);
// struct sector * pathfinding_get_sector(class c_sector_ref);
// struct pathfinding_data * pathfinding_data_get_from_resources(short);
// struct pathfinding_data const * pathfinding_data_get(short);

//public: bool c_link_constructor::reversed(long) const
//{
//    mangled_ppc("?reversed@c_link_constructor@@QBA_NJ@Z");
//};

//public: bool c_link_constructor::get_vector(union vector3d *, bool) const
//{
//    mangled_ppc("?get_vector@c_link_constructor@@QBA_NPATvector3d@@_N@Z");
//};

//public: bool c_link_constructor::get_vector(union vector3d *, long) const
//{
//    mangled_ppc("?get_vector@c_link_constructor@@QBA_NPATvector3d@@J@Z");
//};

//public: bool c_link_constructor::get_direction(union vector3d *, bool) const
//{
//    mangled_ppc("?get_direction@c_link_constructor@@QBA_NPATvector3d@@_N@Z");
//};

//public: bool c_link_constructor::get_direction(union vector3d *, long) const
//{
//    mangled_ppc("?get_direction@c_link_constructor@@QBA_NPATvector3d@@J@Z");
//};

//public: float c_link_constructor::get_length(void) const
//{
//    mangled_ppc("?get_length@c_link_constructor@@QBAMXZ");
//};

//public: void c_link_constructor::modified(void)
//{
//    mangled_ppc("?modified@c_link_constructor@@QAAXXZ");
//};

//public: long c_link_constructor::common_vertex(class c_link_constructor *) const
//{
//    mangled_ppc("?common_vertex@c_link_constructor@@QBAJPAV1@@Z");
//};

//public: long c_link_constructor::opposite_sector(long) const
//{
//    mangled_ppc("?opposite_sector@c_link_constructor@@QBAJJ@Z");
//};

//bool pathfinding_data_valid(long, short)
//{
//    mangled_ppc("?pathfinding_data_valid@@YA_NJF@Z");
//};

//bool pathfinding_data_generate_all(void)
//{
//    mangled_ppc("?pathfinding_data_generate_all@@YA_NXZ");
//};

//bool pathfinding_data_generate(unsigned long, bool)
//{
//    mangled_ppc("?pathfinding_data_generate@@YA_NK_N@Z");
//};

//bool pathfinding_generation_allowed(void)
//{
//    mangled_ppc("?pathfinding_generation_allowed@@YA_NXZ");
//};

//bool pathfinding_data_generate_internal(short)
//{
//    mangled_ppc("?pathfinding_data_generate_internal@@YA_NF@Z");
//};

//bool create_pathfinding_data(struct scenario *, short, class c_static_stack<struct s_cluster_reference, 1024> *, bool)
//{
//    mangled_ppc("?create_pathfinding_data@@YA_NPAUscenario@@FPAV?$c_static_stack@Us_cluster_reference@@$0EAA@@@_N@Z");
//};

//bool pathfinding_object_compare(short, short, void const *)
//{
//    mangled_ppc("?pathfinding_object_compare@@YA_NFFPBX@Z");
//};

//short sector_characterize_normal(union vector3d *)
//{
//    mangled_ppc("?sector_characterize_normal@@YAFPATvector3d@@@Z");
//};

//bool characterize_sector_constructor(class c_sector_constructor *, union vector3d *)
//{
//    mangled_ppc("?characterize_sector_constructor@@YA_NPAVc_sector_constructor@@PATvector3d@@@Z");
//};

//long create_link(long, class c_pathfinding_object *, unsigned long)
//{
//    mangled_ppc("?create_link@@YAJJPAVc_pathfinding_object@@K@Z");
//};

//void sector_add_child(class c_sector_constructor *, long)
//{
//    mangled_ppc("?sector_add_child@@YAXPAVc_sector_constructor@@J@Z");
//};

//long create_sector(long, class c_pathfinding_object *, long)
//{
//    mangled_ppc("?create_sector@@YAJJPAVc_pathfinding_object@@J@Z");
//};

//long create_vertex(long)
//{
//    mangled_ppc("?create_vertex@@YAJJ@Z");
//};

//long create_vertex_record(long)
//{
//    mangled_ppc("?create_vertex_record@@YAJJ@Z");
//};

//long create_tag_vertex(void)
//{
//    mangled_ppc("?create_tag_vertex@@YAJXZ");
//};

//long create_hint(void)
//{
//    mangled_ppc("?create_hint@@YAJXZ");
//};

//long create_tag_hint(struct pathfinding_data *)
//{
//    mangled_ppc("?create_tag_hint@@YAJPAUpathfinding_data@@@Z");
//};

//void sector_centroid(long, union real_point3d *)
//{
//    mangled_ppc("?sector_centroid@@YAXJPATreal_point3d@@@Z");
//};

//void sector_link_iterator_new(struct sector_link_iterator *, long, long)
//{
//    mangled_ppc("?sector_link_iterator_new@@YAXPAUsector_link_iterator@@JJ@Z");
//};

//class c_link_constructor * sector_link_iterator_next(struct sector_link_iterator *)
//{
//    mangled_ppc("?sector_link_iterator_next@@YAPAVc_link_constructor@@PAUsector_link_iterator@@@Z");
//};

//void vertex_link_iterator_new(struct vertex_link_iterator *, long, long)
//{
//    mangled_ppc("?vertex_link_iterator_new@@YAXPAUvertex_link_iterator@@JJ@Z");
//};

//class c_link_constructor * vertex_link_iterator_next(struct vertex_link_iterator *)
//{
//    mangled_ppc("?vertex_link_iterator_next@@YAPAVc_link_constructor@@PAUvertex_link_iterator@@@Z");
//};

//void verify_sector(long)
//{
//    mangled_ppc("?verify_sector@@YAXJ@Z");
//};

//long opposite_surface(class c_link_constructor *, class c_sector_constructor *)
//{
//    mangled_ppc("?opposite_surface@@YAJPAVc_link_constructor@@PAVc_sector_constructor@@@Z");
//};

//bool replace_sector_ref(class c_link_constructor *, class c_sector_constructor *, long)
//{
//    mangled_ppc("?replace_sector_ref@@YA_NPAVc_link_constructor@@PAVc_sector_constructor@@J@Z");
//};

//long get_ccw_vertex(long, class c_sector_constructor *)
//{
//    mangled_ppc("?get_ccw_vertex@@YAJJPAVc_sector_constructor@@@Z");
//};

//long get_cw_vertex(long, class c_sector_constructor *)
//{
//    mangled_ppc("?get_cw_vertex@@YAJJPAVc_sector_constructor@@@Z");
//};

//void set_ccw_vertex(long, class c_sector_constructor *, long)
//{
//    mangled_ppc("?set_ccw_vertex@@YAXJPAVc_sector_constructor@@J@Z");
//};

//void set_cw_vertex(long, class c_sector_constructor *, long)
//{
//    mangled_ppc("?set_cw_vertex@@YAXJPAVc_sector_constructor@@J@Z");
//};

//void set_ccw_link(long, class c_sector_constructor *, long)
//{
//    mangled_ppc("?set_ccw_link@@YAXJPAVc_sector_constructor@@J@Z");
//};

//long get_ccw_link(long, long)
//{
//    mangled_ppc("?get_ccw_link@@YAJJJ@Z");
//};

//long cw_link(long, long)
//{
//    mangled_ppc("?cw_link@@YAJJJ@Z");
//};

//void reverse_link_constructor(class c_link_constructor *)
//{
//    mangled_ppc("?reverse_link_constructor@@YAXPAVc_link_constructor@@@Z");
//};

//void get_sector_normal(class c_sector_constructor *, union vector3d *)
//{
//    mangled_ppc("?get_sector_normal@@YAXPAVc_sector_constructor@@PATvector3d@@@Z");
//};

//bool sector_check_convex(long)
//{
//    mangled_ppc("?sector_check_convex@@YA_NJ@Z");
//};

//bool sector_check_convex(long, bool)
//{
//    mangled_ppc("?sector_check_convex@@YA_NJ_N@Z");
//};

//unsigned short runtime_ccw_link(struct pathfinding_data const *, long, long)
//{
//    mangled_ppc("?runtime_ccw_link@@YAGPBUpathfinding_data@@JJ@Z");
//};

//unsigned short runtime_cw_link(struct pathfinding_data const *, long, long)
//{
//    mangled_ppc("?runtime_cw_link@@YAGPBUpathfinding_data@@JJ@Z");
//};

//void get_sector_flags_normal(long, union vector3d *)
//{
//    mangled_ppc("?get_sector_flags_normal@@YAXJPATvector3d@@@Z");
//};

//void get_sector_normal(struct sector const *, union vector3d *, bool)
//{
//    mangled_ppc("?get_sector_normal@@YAXPBUsector@@PATvector3d@@_N@Z");
//};

//bool sector_broken(class c_sector_ref)
//{
//    mangled_ppc("?sector_broken@@YA_NVc_sector_ref@@@Z");
//};

//bool sector_broken(short, struct pathfinding_data const *, struct sector const *)
//{
//    mangled_ppc("?sector_broken@@YA_NFPBUpathfinding_data@@PBUsector@@@Z");
//};

//void runtime_link_iterator_new(struct runtime_link_iterator *, struct pathfinding_data const *, long, long)
//{
//    mangled_ppc("?runtime_link_iterator_new@@YAXPAUruntime_link_iterator@@PBUpathfinding_data@@JJ@Z");
//};

//void runtime_link_iterator_new(struct runtime_link_iterator *, struct pathfinding_data const *, long)
//{
//    mangled_ppc("?runtime_link_iterator_new@@YAXPAUruntime_link_iterator@@PBUpathfinding_data@@J@Z");
//};

//struct sector_link * runtime_link_iterator_next(struct runtime_link_iterator *)
//{
//    mangled_ppc("?runtime_link_iterator_next@@YAPAUsector_link@@PAUruntime_link_iterator@@@Z");
//};

//void sector_bsps_debug_spray_proc(struct collision_result *, void *)
//{
//    mangled_ppc("?sector_bsps_debug_spray_proc@@YAXPAUcollision_result@@PAX@Z");
//};

//void sector_bsps_debug(void)
//{
//    mangled_ppc("?sector_bsps_debug@@YAXXZ");
//};

//void giant_sector_bsps_debug_spray_proc(struct collision_result *, void *)
//{
//    mangled_ppc("?giant_sector_bsps_debug_spray_proc@@YAXPAUcollision_result@@PAX@Z");
//};

//void giant_sector_bsps_debug(void)
//{
//    mangled_ppc("?giant_sector_bsps_debug@@YAXXZ");
//};

//void sector_render_debug(class c_sector_ref)
//{
//    mangled_ppc("?sector_render_debug@@YAXVc_sector_ref@@@Z");
//};

//void sector_render_debug(class c_sector_ref, union argb_color const *)
//{
//    mangled_ppc("?sector_render_debug@@YAXVc_sector_ref@@PBTargb_color@@@Z");
//};

//void sector_render_debug(struct pathfinding_data const *, unsigned short, union argb_color const *)
//{
//    mangled_ppc("?sector_render_debug@@YAXPBUpathfinding_data@@GPBTargb_color@@@Z");
//};

//void sector_render_debug(struct pathfinding_data const *, unsigned short, short, union argb_color const *)
//{
//    mangled_ppc("?sector_render_debug@@YAXPBUpathfinding_data@@GFPBTargb_color@@@Z");
//};

//void sector_link_render_debug(long, struct pathfinding_data const *, union argb_color const *, bool)
//{
//    mangled_ppc("?sector_link_render_debug@@YAXJPBUpathfinding_data@@PBTargb_color@@_N@Z");
//};

//void sector_link_render_debug_full(long, struct pathfinding_data const *)
//{
//    mangled_ppc("?sector_link_render_debug_full@@YAXJPBUpathfinding_data@@@Z");
//};

//float sector_render_get_collision_sphere_size(float)
//{
//    mangled_ppc("?sector_render_get_collision_sphere_size@@YAMM@Z");
//};

//void sector_render_links(void)
//{
//    mangled_ppc("?sector_render_links@@YAXXZ");
//};

//void sector_debug_object_pathfinding(long)
//{
//    mangled_ppc("?sector_debug_object_pathfinding@@YAXJ@Z");
//};

//struct sector * pathfinding_get_sector(struct pathfinding_data const *, unsigned short)
//{
//    mangled_ppc("?pathfinding_get_sector@@YAPAUsector@@PBUpathfinding_data@@G@Z");
//};

//struct sector * pathfinding_get_sector(class c_sector_ref)
//{
//    mangled_ppc("?pathfinding_get_sector@@YAPAUsector@@Vc_sector_ref@@@Z");
//};

//struct pathfinding_data * pathfinding_data_get_from_resources(short)
//{
//    mangled_ppc("?pathfinding_data_get_from_resources@@YAPAUpathfinding_data@@F@Z");
//};

//struct pathfinding_data const * pathfinding_data_get(short)
//{
//    mangled_ppc("?pathfinding_data_get@@YAPBUpathfinding_data@@F@Z");
//};

