/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct dynamic_array bsp2d_node_array; // "?bsp2d_node_array@@3Udynamic_array@@A"
// unsigned long *sector_valid_flags; // "?sector_valid_flags@@3PAKA"
// unsigned long *building_sector_flags; // "?building_sector_flags@@3PAKA"

// bool sector_generate_bsp2ds(struct scenario const *, short, class c_pathfinding_object *, short, long *, bool);
// bool collision_bsp_generate_bsp2ds(short, class c_pathfinding_object *, unsigned long, class c_collision_bsp_reference, struct s_tag_block *, struct real_matrix4x3const *, long, long *, bool);
// void create_edge_refs(struct pathfinding_data *, class c_pathfinding_object *, struct edge_vertex_ref *, struct edge_vertex_ref **, unsigned long, class c_collision_bsp_reference, struct s_tag_block *, long, long, struct real_matrix4x3const *, long *);
// void edge_ref_create_sector_vertex_edge_mapping(struct pathfinding_data *, class c_pathfinding_object *, unsigned long, class c_collision_bsp_reference, long *);
// void user_link_find_surface_mapping(long, class c_collision_bsp_reference, union vector3d const *, long *);
// bool find_link_normal(struct pathfinding_data *, long, union vector3d *, bool);
// void local_centroid(struct pathfinding_data *, long, long, union real_point3d *);
// void local_get_sector_normal(struct pathfinding_data *, long, short, union vector3d *, bool);
// void recursive_create_edge_refs(struct pathfinding_data *, struct edge_vertex_ref *, struct edge_vertex_ref **, short, class c_collision_bsp_reference, struct s_tag_block *, struct real_matrix4x3const *, struct sector_link *, union vector3d *, union real_point3d *, union vector3d *, union vector3d *, long, long, long, union real_point3d, int, long *, long *, long *, bool);
// bool find_edge_split(struct s_tag_block *, struct sector_link *, long, long, long, union vector3d *, struct real_matrix4x3const *, struct edge_vertex_ref **, long *, class c_collision_bsp_reference);
// public: ev_iterator::ev_iterator(void);
// public: collision_surface_edge_iterator::collision_surface_edge_iterator(void);
// void bsp2d_node_split_environment_surface(class c_collision_bsp_reference, struct s_tag_block *, union real_point3d *, union real_point3d *, long, long, long);
// void bsp2d_node_split_surface(union real_point3d *, union real_point3d *, long, long, long, struct plane3d *, struct bsp2d_ref *);
// void bsp2d_node_split_edge(struct s_tag_block *, struct sector_link *, class c_collision_edge_reference, bool);
// void create_2dbsps(struct pathfinding_data *, class c_collision_bsp_reference, struct s_tag_block *);
// void create_surface_2dbsp(struct bsp2d_ref *);
// long create_surface_bsp2d_node(long);
// bool plane_above(union vector2d *, float, struct bsp2d_node_constructor *);
// bool plane_below(union vector2d *, float, struct bsp2d_node_constructor *);
// short estimate_cost(struct bsp2d_node_constructor *, long);
// void flood_fill_untouched_surfaces(short, class c_pathfinding_object *, unsigned long, class c_collision_bsp_reference, struct s_tag_block *, bool);
// long flood_fill_untouched_surface(short, class c_pathfinding_object *, long, unsigned long, class c_collision_bsp_reference, struct s_tag_block *);
// void inverse_transform_sector_point(struct pathfinding_data *, union real_point3d const *, short, struct real_matrix4x3const *, union real_point3d *);
// void inverse_transform_sector_vector(struct pathfinding_data *, union vector3d const *, short, struct real_matrix4x3const *, union vector3d *);
// void ev_iterator_new(struct ev_iterator *, struct edge_vertex_ref **, class c_collision_bsp_reference, long);
// bool ev_iterator_next(struct ev_iterator *, class c_collision_edge_reference *);
// void collision_surface_edge_iterator_new(struct collision_surface_edge_iterator *, class c_collision_bsp_reference, long);
// bool collision_surface_edge_iterator_next(struct collision_surface_edge_iterator *, class c_collision_edge_reference *);
// long sector_bsp2d_traverse(struct pathfinding_data const *, class c_collision_bsp_reference, long, struct s_tag_block const *, union real_point3d const *, struct real_matrix4x3const *);
// long recursive_traverse_sector_bsp2d_node(struct pathfinding_data const *, long, union real_point2d const *);

//bool sector_generate_bsp2ds(struct scenario const *, short, class c_pathfinding_object *, short, long *, bool)
//{
//    mangled_ppc("?sector_generate_bsp2ds@@YA_NPBUscenario@@FPAVc_pathfinding_object@@FPAJ_N@Z");
//};

//bool collision_bsp_generate_bsp2ds(short, class c_pathfinding_object *, unsigned long, class c_collision_bsp_reference, struct s_tag_block *, struct real_matrix4x3const *, long, long *, bool)
//{
//    mangled_ppc("?collision_bsp_generate_bsp2ds@@YA_NFPAVc_pathfinding_object@@KVc_collision_bsp_reference@@PAUs_tag_block@@PBUreal_matrix4x3@@JPAJ_N@Z");
//};

//void create_edge_refs(struct pathfinding_data *, class c_pathfinding_object *, struct edge_vertex_ref *, struct edge_vertex_ref **, unsigned long, class c_collision_bsp_reference, struct s_tag_block *, long, long, struct real_matrix4x3const *, long *)
//{
//    mangled_ppc("?create_edge_refs@@YAXPAUpathfinding_data@@PAVc_pathfinding_object@@PAUedge_vertex_ref@@PAPAU3@KVc_collision_bsp_reference@@PAUs_tag_block@@JJPBUreal_matrix4x3@@PAJ@Z");
//};

//void edge_ref_create_sector_vertex_edge_mapping(struct pathfinding_data *, class c_pathfinding_object *, unsigned long, class c_collision_bsp_reference, long *)
//{
//    mangled_ppc("?edge_ref_create_sector_vertex_edge_mapping@@YAXPAUpathfinding_data@@PAVc_pathfinding_object@@KVc_collision_bsp_reference@@PAJ@Z");
//};

//void user_link_find_surface_mapping(long, class c_collision_bsp_reference, union vector3d const *, long *)
//{
//    mangled_ppc("?user_link_find_surface_mapping@@YAXJVc_collision_bsp_reference@@PBTvector3d@@PAJ@Z");
//};

//bool find_link_normal(struct pathfinding_data *, long, union vector3d *, bool)
//{
//    mangled_ppc("?find_link_normal@@YA_NPAUpathfinding_data@@JPATvector3d@@_N@Z");
//};

//void local_centroid(struct pathfinding_data *, long, long, union real_point3d *)
//{
//    mangled_ppc("?local_centroid@@YAXPAUpathfinding_data@@JJPATreal_point3d@@@Z");
//};

//void local_get_sector_normal(struct pathfinding_data *, long, short, union vector3d *, bool)
//{
//    mangled_ppc("?local_get_sector_normal@@YAXPAUpathfinding_data@@JFPATvector3d@@_N@Z");
//};

//void recursive_create_edge_refs(struct pathfinding_data *, struct edge_vertex_ref *, struct edge_vertex_ref **, short, class c_collision_bsp_reference, struct s_tag_block *, struct real_matrix4x3const *, struct sector_link *, union vector3d *, union real_point3d *, union vector3d *, union vector3d *, long, long, long, union real_point3d, int, long *, long *, long *, bool)
//{
//    mangled_ppc("?recursive_create_edge_refs@@YAXPAUpathfinding_data@@PAUedge_vertex_ref@@PAPAU2@FVc_collision_bsp_reference@@PAUs_tag_block@@PBUreal_matrix4x3@@PAUsector_link@@PATvector3d@@PATreal_point3d@@77JJJT8@HPAJPAJPAJ_N@Z");
//};

//bool find_edge_split(struct s_tag_block *, struct sector_link *, long, long, long, union vector3d *, struct real_matrix4x3const *, struct edge_vertex_ref **, long *, class c_collision_bsp_reference)
//{
//    mangled_ppc("?find_edge_split@@YA_NPAUs_tag_block@@PAUsector_link@@JJJPATvector3d@@PBUreal_matrix4x3@@PAPAUedge_vertex_ref@@PAJVc_collision_bsp_reference@@@Z");
//};

//public: ev_iterator::ev_iterator(void)
//{
//    mangled_ppc("??0ev_iterator@@QAA@XZ");
//};

//public: collision_surface_edge_iterator::collision_surface_edge_iterator(void)
//{
//    mangled_ppc("??0collision_surface_edge_iterator@@QAA@XZ");
//};

//void bsp2d_node_split_environment_surface(class c_collision_bsp_reference, struct s_tag_block *, union real_point3d *, union real_point3d *, long, long, long)
//{
//    mangled_ppc("?bsp2d_node_split_environment_surface@@YAXVc_collision_bsp_reference@@PAUs_tag_block@@PATreal_point3d@@2JJJ@Z");
//};

//void bsp2d_node_split_surface(union real_point3d *, union real_point3d *, long, long, long, struct plane3d *, struct bsp2d_ref *)
//{
//    mangled_ppc("?bsp2d_node_split_surface@@YAXPATreal_point3d@@0JJJPAUplane3d@@PAUbsp2d_ref@@@Z");
//};

//void bsp2d_node_split_edge(struct s_tag_block *, struct sector_link *, class c_collision_edge_reference, bool)
//{
//    mangled_ppc("?bsp2d_node_split_edge@@YAXPAUs_tag_block@@PAUsector_link@@Vc_collision_edge_reference@@_N@Z");
//};

//void create_2dbsps(struct pathfinding_data *, class c_collision_bsp_reference, struct s_tag_block *)
//{
//    mangled_ppc("?create_2dbsps@@YAXPAUpathfinding_data@@Vc_collision_bsp_reference@@PAUs_tag_block@@@Z");
//};

//void create_surface_2dbsp(struct bsp2d_ref *)
//{
//    mangled_ppc("?create_surface_2dbsp@@YAXPAUbsp2d_ref@@@Z");
//};

//long create_surface_bsp2d_node(long)
//{
//    mangled_ppc("?create_surface_bsp2d_node@@YAJJ@Z");
//};

//bool plane_above(union vector2d *, float, struct bsp2d_node_constructor *)
//{
//    mangled_ppc("?plane_above@@YA_NPATvector2d@@MPAUbsp2d_node_constructor@@@Z");
//};

//bool plane_below(union vector2d *, float, struct bsp2d_node_constructor *)
//{
//    mangled_ppc("?plane_below@@YA_NPATvector2d@@MPAUbsp2d_node_constructor@@@Z");
//};

//short estimate_cost(struct bsp2d_node_constructor *, long)
//{
//    mangled_ppc("?estimate_cost@@YAFPAUbsp2d_node_constructor@@J@Z");
//};

//void flood_fill_untouched_surfaces(short, class c_pathfinding_object *, unsigned long, class c_collision_bsp_reference, struct s_tag_block *, bool)
//{
//    mangled_ppc("?flood_fill_untouched_surfaces@@YAXFPAVc_pathfinding_object@@KVc_collision_bsp_reference@@PAUs_tag_block@@_N@Z");
//};

//long flood_fill_untouched_surface(short, class c_pathfinding_object *, long, unsigned long, class c_collision_bsp_reference, struct s_tag_block *)
//{
//    mangled_ppc("?flood_fill_untouched_surface@@YAJFPAVc_pathfinding_object@@JKVc_collision_bsp_reference@@PAUs_tag_block@@@Z");
//};

//void inverse_transform_sector_point(struct pathfinding_data *, union real_point3d const *, short, struct real_matrix4x3const *, union real_point3d *)
//{
//    mangled_ppc("?inverse_transform_sector_point@@YAXPAUpathfinding_data@@PBTreal_point3d@@FPBUreal_matrix4x3@@PAT2@@Z");
//};

//void inverse_transform_sector_vector(struct pathfinding_data *, union vector3d const *, short, struct real_matrix4x3const *, union vector3d *)
//{
//    mangled_ppc("?inverse_transform_sector_vector@@YAXPAUpathfinding_data@@PBTvector3d@@FPBUreal_matrix4x3@@PAT2@@Z");
//};

//void ev_iterator_new(struct ev_iterator *, struct edge_vertex_ref **, class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?ev_iterator_new@@YAXPAUev_iterator@@PAPAUedge_vertex_ref@@Vc_collision_bsp_reference@@J@Z");
//};

//bool ev_iterator_next(struct ev_iterator *, class c_collision_edge_reference *)
//{
//    mangled_ppc("?ev_iterator_next@@YA_NPAUev_iterator@@PAVc_collision_edge_reference@@@Z");
//};

//void collision_surface_edge_iterator_new(struct collision_surface_edge_iterator *, class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?collision_surface_edge_iterator_new@@YAXPAUcollision_surface_edge_iterator@@Vc_collision_bsp_reference@@J@Z");
//};

//bool collision_surface_edge_iterator_next(struct collision_surface_edge_iterator *, class c_collision_edge_reference *)
//{
//    mangled_ppc("?collision_surface_edge_iterator_next@@YA_NPAUcollision_surface_edge_iterator@@PAVc_collision_edge_reference@@@Z");
//};

//long sector_bsp2d_traverse(struct pathfinding_data const *, class c_collision_bsp_reference, long, struct s_tag_block const *, union real_point3d const *, struct real_matrix4x3const *)
//{
//    mangled_ppc("?sector_bsp2d_traverse@@YAJPBUpathfinding_data@@Vc_collision_bsp_reference@@JPBUs_tag_block@@PBTreal_point3d@@PBUreal_matrix4x3@@@Z");
//};

//long recursive_traverse_sector_bsp2d_node(struct pathfinding_data const *, long, union real_point2d const *)
//{
//    mangled_ppc("?recursive_traverse_sector_bsp2d_node@@YAJPBUpathfinding_data@@JPBTreal_point2d@@@Z");
//};

