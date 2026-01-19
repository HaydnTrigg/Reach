/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<union real_point3d, 512>::k_element_count; // "?k_element_count@?$s_static_array@Treal_point3d@@$0CAA@@@2JB"
// public: static long const s_static_array<struct build_leaf_map_face, 129>::k_element_count; // "?k_element_count@?$s_static_array@Ubuild_leaf_map_face@@$0IB@@@2JB"
// public: static long const s_static_array<long, 128>::k_element_count; // "?k_element_count@?$s_static_array@J$0IA@@@2JB"
// public: static long const s_static_array<struct build_leaf_map_face_set *, 128>::k_element_count; // "?k_element_count@?$s_static_array@PAUbuild_leaf_map_face_set@@$0IA@@@2JB"
// struct s_tag_block_definition global_map_leaf_block; // "?global_map_leaf_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition global_map_leaf_block_struct_definition; // "?global_map_leaf_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition global_leaf_connection_block; // "?global_leaf_connection_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition global_leaf_connection_block_struct_definition; // "?global_leaf_connection_block_struct_definition@@3Us_tag_struct_definition@@A"

// void leaf_map_initialize(struct leaf_map *);
// bool leaf_map_new(struct leaf_map *, struct leaf_map_input_data const *, float);
// void leaf_map_update_indices(struct leaf_map *, long, long const *, long, long const *, long, long const *);
// public: static long s_large_bsp3d_types::bsp3d_plane_designator(long, bool);
// public: static long s_large_bsp3d_types::bsp3d_plane_index(long);
// public: static bool s_large_bsp3d_types::bsp3d_plane_is_negated(long);
// bool build_leaf_map(struct leaf_map *, struct leaf_map_input_data const *, float);
// public: build_leaf_map_data::build_leaf_map_data(void);
// public: bool build_leaf_map_data::init(void);
// public: void * build_leaf_map_data::`scalar deleting destructor'(unsigned int);
// public: build_leaf_map_data::~build_leaf_map_data(void);
// bool build_leaf_map_recursive(struct build_leaf_map_data *, long);
// struct large_bsp3d_node const * get_bsp_node(struct leaf_map_input_data const *, long);
// void build_leaf_map_clip_face(struct build_leaf_map_data const *, long, bool, long *, class s_static_array<union real_point3d, 512> &, long);
// long leaf_map_clip_polygon(struct leaf_map_input_data const *, float, bool, long, long, union real_point3d const *, long, class s_static_array<union real_point3d, 512> &);
// struct plane3d const * get_bsp_plane(struct leaf_map_input_data const *, long);
// void build_leaf_map_node_face(struct build_leaf_map_data const *, long, bool, long *, class s_static_array<union real_point3d, 512> &);
// long build_infinite_polygon_on_plane(struct plane3d const *, union real_rectangle3d const *, class s_static_array<union real_point3d, 512> &);
// bool bsp3d_build_back_and_front_connections(struct build_leaf_map_data const *, long, long, union real_point3d const *);
// bool bsp3d_build_front_connections(struct bsp3d_clip_connection_data const *, long, long, union real_point3d const *);
// bool bsp3d_build_single_connection(struct bsp3d_clip_connection_data const *, long, long, union real_point3d const *);
// bool bsp3d_clip_connection_recursive(struct bsp3d_clip_connection_data const *, long, short, union real_point3d const *);
// bool build_leaf_map_leaf_faces(struct build_leaf_map_data *, long);
// bool remove_sliver_connections(struct leaf_map *, struct leaf_map_input_data const *);
// bool leaf_map_detect_sliver_connection(struct leaf_map const *, float, long, union real_point3d const *);
// bool build_leaf_connection_designators(struct leaf_map *);
// void leaf_map_delete(struct leaf_map *);
// void leaf_map_get_leaf_bounds(struct leaf_map const *, long, union real_point3d *, float *, bool);
// void leaf_map_close_connection(struct leaf_map *, long);
// bool leaf_map_closure(struct leaf_map const *, unsigned long const *, unsigned long *);
// void leaf_map_family_mark(struct leaf_map const *, unsigned long *, long);
// void render_debug_leaf(struct leaf_map const *, long, bool, bool, bool, bool);
// void render_debug_leaf_connection(struct leaf_map const *, long, bool, bool);
// void render_debug_leaf_path(struct leaf_map const *, long, long);
// long leaf_map_find_path(struct leaf_map const *, long, long, long, struct visited_leaf_storage *, long, long *, long *, union real_point3d *, union real_point3d *);
// public: union real_point3d const * s_static_array<union real_point3d, 512>::get_elements(void) const;
// public: union real_point3d * s_static_array<union real_point3d, 512>::get_elements(void);
// public: static long s_static_array<union real_point3d, 512>::get_count(void);
// public: static long s_static_array<struct build_leaf_map_face_set *, 128>::get_count(void);
// public: void array_template<unsigned long>::bit_vector_new(long);
// public: struct build_leaf_map_face_set *& s_static_array<struct build_leaf_map_face_set *, 128>::operator[]<long>(long);
// public: struct build_leaf_map_face_set *& s_static_array<struct build_leaf_map_face_set *, 128>::operator[]<int>(int);
// public: struct build_leaf_map_face & s_static_array<struct build_leaf_map_face, 129>::operator[]<long>(long);
// public: struct build_leaf_map_face const & s_static_array<struct build_leaf_map_face, 129>::operator[]<long>(long) const;
// public: long & s_static_array<long, 128>::operator[]<long>(long);
// public: long const & s_static_array<long, 128>::operator[]<short>(short) const;
// long other_index<long>(long const *, long);
// public: static bool s_static_array<struct build_leaf_map_face_set *, 128>::valid<long>(long);
// public: static bool s_static_array<struct build_leaf_map_face_set *, 128>::valid<int>(int);
// public: static bool s_static_array<struct build_leaf_map_face, 129>::valid<long>(long);
// public: static bool s_static_array<long, 128>::valid<long>(long);
// public: static bool s_static_array<long, 128>::valid<short>(short);

//void leaf_map_initialize(struct leaf_map *)
//{
//    mangled_ppc("?leaf_map_initialize@@YAXPAUleaf_map@@@Z");
//};

//bool leaf_map_new(struct leaf_map *, struct leaf_map_input_data const *, float)
//{
//    mangled_ppc("?leaf_map_new@@YA_NPAUleaf_map@@PBUleaf_map_input_data@@M@Z");
//};

//void leaf_map_update_indices(struct leaf_map *, long, long const *, long, long const *, long, long const *)
//{
//    mangled_ppc("?leaf_map_update_indices@@YAXPAUleaf_map@@JPBJJ1J1@Z");
//};

//public: static long s_large_bsp3d_types::bsp3d_plane_designator(long, bool)
//{
//    mangled_ppc("?bsp3d_plane_designator@s_large_bsp3d_types@@SAJJ_N@Z");
//};

//public: static long s_large_bsp3d_types::bsp3d_plane_index(long)
//{
//    mangled_ppc("?bsp3d_plane_index@s_large_bsp3d_types@@SAJJ@Z");
//};

//public: static bool s_large_bsp3d_types::bsp3d_plane_is_negated(long)
//{
//    mangled_ppc("?bsp3d_plane_is_negated@s_large_bsp3d_types@@SA_NJ@Z");
//};

//bool build_leaf_map(struct leaf_map *, struct leaf_map_input_data const *, float)
//{
//    mangled_ppc("?build_leaf_map@@YA_NPAUleaf_map@@PBUleaf_map_input_data@@M@Z");
//};

//public: build_leaf_map_data::build_leaf_map_data(void)
//{
//    mangled_ppc("??0build_leaf_map_data@@QAA@XZ");
//};

//public: bool build_leaf_map_data::init(void)
//{
//    mangled_ppc("?init@build_leaf_map_data@@QAA_NXZ");
//};

//public: void * build_leaf_map_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gbuild_leaf_map_data@@QAAPAXI@Z");
//};

//public: build_leaf_map_data::~build_leaf_map_data(void)
//{
//    mangled_ppc("??1build_leaf_map_data@@QAA@XZ");
//};

//bool build_leaf_map_recursive(struct build_leaf_map_data *, long)
//{
//    mangled_ppc("?build_leaf_map_recursive@@YA_NPAUbuild_leaf_map_data@@J@Z");
//};

//struct large_bsp3d_node const * get_bsp_node(struct leaf_map_input_data const *, long)
//{
//    mangled_ppc("?get_bsp_node@@YAPBUlarge_bsp3d_node@@PBUleaf_map_input_data@@J@Z");
//};

//void build_leaf_map_clip_face(struct build_leaf_map_data const *, long, bool, long *, class s_static_array<union real_point3d, 512> &, long)
//{
//    mangled_ppc("?build_leaf_map_clip_face@@YAXPBUbuild_leaf_map_data@@J_NPAJAAV?$s_static_array@Treal_point3d@@$0CAA@@@J@Z");
//};

//long leaf_map_clip_polygon(struct leaf_map_input_data const *, float, bool, long, long, union real_point3d const *, long, class s_static_array<union real_point3d, 512> &)
//{
//    mangled_ppc("?leaf_map_clip_polygon@@YAJPBUleaf_map_input_data@@M_NJJPBTreal_point3d@@JAAV?$s_static_array@Treal_point3d@@$0CAA@@@@Z");
//};

//struct plane3d const * get_bsp_plane(struct leaf_map_input_data const *, long)
//{
//    mangled_ppc("?get_bsp_plane@@YAPBUplane3d@@PBUleaf_map_input_data@@J@Z");
//};

//void build_leaf_map_node_face(struct build_leaf_map_data const *, long, bool, long *, class s_static_array<union real_point3d, 512> &)
//{
//    mangled_ppc("?build_leaf_map_node_face@@YAXPBUbuild_leaf_map_data@@J_NPAJAAV?$s_static_array@Treal_point3d@@$0CAA@@@@Z");
//};

//long build_infinite_polygon_on_plane(struct plane3d const *, union real_rectangle3d const *, class s_static_array<union real_point3d, 512> &)
//{
//    mangled_ppc("?build_infinite_polygon_on_plane@@YAJPBUplane3d@@PBTreal_rectangle3d@@AAV?$s_static_array@Treal_point3d@@$0CAA@@@@Z");
//};

//bool bsp3d_build_back_and_front_connections(struct build_leaf_map_data const *, long, long, union real_point3d const *)
//{
//    mangled_ppc("?bsp3d_build_back_and_front_connections@@YA_NPBUbuild_leaf_map_data@@JJPBTreal_point3d@@@Z");
//};

//bool bsp3d_build_front_connections(struct bsp3d_clip_connection_data const *, long, long, union real_point3d const *)
//{
//    mangled_ppc("?bsp3d_build_front_connections@@YA_NPBUbsp3d_clip_connection_data@@JJPBTreal_point3d@@@Z");
//};

//bool bsp3d_build_single_connection(struct bsp3d_clip_connection_data const *, long, long, union real_point3d const *)
//{
//    mangled_ppc("?bsp3d_build_single_connection@@YA_NPBUbsp3d_clip_connection_data@@JJPBTreal_point3d@@@Z");
//};

//bool bsp3d_clip_connection_recursive(struct bsp3d_clip_connection_data const *, long, short, union real_point3d const *)
//{
//    mangled_ppc("?bsp3d_clip_connection_recursive@@YA_NPBUbsp3d_clip_connection_data@@JFPBTreal_point3d@@@Z");
//};

//bool build_leaf_map_leaf_faces(struct build_leaf_map_data *, long)
//{
//    mangled_ppc("?build_leaf_map_leaf_faces@@YA_NPAUbuild_leaf_map_data@@J@Z");
//};

//bool remove_sliver_connections(struct leaf_map *, struct leaf_map_input_data const *)
//{
//    mangled_ppc("?remove_sliver_connections@@YA_NPAUleaf_map@@PBUleaf_map_input_data@@@Z");
//};

//bool leaf_map_detect_sliver_connection(struct leaf_map const *, float, long, union real_point3d const *)
//{
//    mangled_ppc("?leaf_map_detect_sliver_connection@@YA_NPBUleaf_map@@MJPBTreal_point3d@@@Z");
//};

//bool build_leaf_connection_designators(struct leaf_map *)
//{
//    mangled_ppc("?build_leaf_connection_designators@@YA_NPAUleaf_map@@@Z");
//};

//void leaf_map_delete(struct leaf_map *)
//{
//    mangled_ppc("?leaf_map_delete@@YAXPAUleaf_map@@@Z");
//};

//void leaf_map_get_leaf_bounds(struct leaf_map const *, long, union real_point3d *, float *, bool)
//{
//    mangled_ppc("?leaf_map_get_leaf_bounds@@YAXPBUleaf_map@@JPATreal_point3d@@PAM_N@Z");
//};

//void leaf_map_close_connection(struct leaf_map *, long)
//{
//    mangled_ppc("?leaf_map_close_connection@@YAXPAUleaf_map@@J@Z");
//};

//bool leaf_map_closure(struct leaf_map const *, unsigned long const *, unsigned long *)
//{
//    mangled_ppc("?leaf_map_closure@@YA_NPBUleaf_map@@PBKPAK@Z");
//};

//void leaf_map_family_mark(struct leaf_map const *, unsigned long *, long)
//{
//    mangled_ppc("?leaf_map_family_mark@@YAXPBUleaf_map@@PAKJ@Z");
//};

//void render_debug_leaf(struct leaf_map const *, long, bool, bool, bool, bool)
//{
//    mangled_ppc("?render_debug_leaf@@YAXPBUleaf_map@@J_N111@Z");
//};

//void render_debug_leaf_connection(struct leaf_map const *, long, bool, bool)
//{
//    mangled_ppc("?render_debug_leaf_connection@@YAXPBUleaf_map@@J_N1@Z");
//};

//void render_debug_leaf_path(struct leaf_map const *, long, long)
//{
//    mangled_ppc("?render_debug_leaf_path@@YAXPBUleaf_map@@JJ@Z");
//};

//long leaf_map_find_path(struct leaf_map const *, long, long, long, struct visited_leaf_storage *, long, long *, long *, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?leaf_map_find_path@@YAJPBUleaf_map@@JJJPAUvisited_leaf_storage@@JPAJ2PATreal_point3d@@3@Z");
//};

//public: union real_point3d const * s_static_array<union real_point3d, 512>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@Treal_point3d@@$0CAA@@@QBAPBTreal_point3d@@XZ");
//};

//public: union real_point3d * s_static_array<union real_point3d, 512>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Treal_point3d@@$0CAA@@@QAAPATreal_point3d@@XZ");
//};

//public: static long s_static_array<union real_point3d, 512>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Treal_point3d@@$0CAA@@@SAJXZ");
//};

//public: static long s_static_array<struct build_leaf_map_face_set *, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAUbuild_leaf_map_face_set@@$0IA@@@SAJXZ");
//};

//public: void array_template<unsigned long>::bit_vector_new(long)
//{
//    mangled_ppc("?bit_vector_new@?$array_template@K@@QAAXJ@Z");
//};

//public: struct build_leaf_map_face_set *& s_static_array<struct build_leaf_map_face_set *, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUbuild_leaf_map_face_set@@$0IA@@@QAAAAPAUbuild_leaf_map_face_set@@J@Z");
//};

//public: struct build_leaf_map_face_set *& s_static_array<struct build_leaf_map_face_set *, 128>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@PAUbuild_leaf_map_face_set@@$0IA@@@QAAAAPAUbuild_leaf_map_face_set@@H@Z");
//};

//public: struct build_leaf_map_face & s_static_array<struct build_leaf_map_face, 129>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ubuild_leaf_map_face@@$0IB@@@QAAAAUbuild_leaf_map_face@@J@Z");
//};

//public: struct build_leaf_map_face const & s_static_array<struct build_leaf_map_face, 129>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ubuild_leaf_map_face@@$0IB@@@QBAABUbuild_leaf_map_face@@J@Z");
//};

//public: long & s_static_array<long, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0IA@@@QAAAAJJ@Z");
//};

//public: long const & s_static_array<long, 128>::operator[]<short>(short) const
//{
//    mangled_ppc("??$?AF@?$s_static_array@J$0IA@@@QBAABJF@Z");
//};

//long other_index<long>(long const *, long)
//{
//    mangled_ppc("??$other_index@J@@YAJPBJJ@Z");
//};

//public: static bool s_static_array<struct build_leaf_map_face_set *, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUbuild_leaf_map_face_set@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct build_leaf_map_face_set *, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@PAUbuild_leaf_map_face_set@@$0IA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct build_leaf_map_face, 129>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ubuild_leaf_map_face@@$0IB@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 128>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@J$0IA@@@SA_NF@Z");
//};

