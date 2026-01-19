/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_struct_definition ai_reference_frame_block_struct_definition; // "?ai_reference_frame_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition ai_reference_frame_block; // "?ai_reference_frame_block@@3Us_tag_block_definition@@A"

// public: void c_ai_point3d::set(union real_point3d const *, short, short);
// public: void c_ai_point3d::set(union real_point3d const *, short);
// public: void c_ai_point3d::set(union real_point3d const *);
// char * format_reference_frame_block(long, __int64, struct s_tag_block *, long, char *, long);
// short ai_reference_frame_create(long, short);
// bool object_is_mobile(long);
// bool object_refresh_reference_frames(long);
// void ai_refresh_reference_frames(void);
// short ai_reference_frame_get_by_node_index(long, short);
// short ai_reference_frame_get_by_identifier_and_node_index(class c_object_identifier const *, short);
// short ai_reference_frame_get_by_bsp_reference(long, unsigned long);
// void ai_reference_frame_handle_deleted_object(long);
// bool ai_point3d_new(union real_point3d const *, long, unsigned long, class c_ai_point3d *);
// bool ai_reference_frame_transform_point(struct scenario const *, short, union real_point3d const *, union real_point3d *);
// bool ai_reference_frame_transform_point(short, union real_point3d const *, union real_point3d *);
// bool ai_reference_frame_transform_vector(short, union vector3d const *, union vector3d *);
// bool ai_reference_frame_inverse_transform_point(short, union real_point3d const *, union real_point3d *);
// bool ai_reference_frame_inverse_transform_vector(short, union vector3d const *, union vector3d *);
// bool ai_reference_frame_transform_ai_point(short, class c_ai_point3d const *, class c_ai_point3d *);
// union real_point3d * ai_point_get_position(struct scenario *, class c_ai_point3d const *, union real_point3d *);
// union real_point3d * ai_point_get_position(class c_ai_point3d const *, union real_point3d *);
// bool ai_point_from_world_position(short, union real_point3d const *, class c_ai_point3d *);
// float ai_distance3d(class c_ai_point3d const *, class c_ai_point3d const *);
// float ai_distance_squared3d(class c_ai_point3d const *, class c_ai_point3d const *);
// float ai_distance3d(class c_ai_point3d const *, union real_point3d const *);
// float ai_distance_squared3d(class c_ai_point3d const *, union real_point3d const *);
// void ai_vector_from_points3d(class c_ai_point3d const *, class c_ai_point3d const *, union vector3d *);
// void ai_vector_from_points3d(union real_point3d const *, class c_ai_point3d const *, union vector3d *);
// bool ai_reference_frame_verify(short);
// bool ai_reference_frames_isolated(short, short);

//public: void c_ai_point3d::set(union real_point3d const *, short, short)
//{
//    mangled_ppc("?set@c_ai_point3d@@QAAXPBTreal_point3d@@FF@Z");
//};

//public: void c_ai_point3d::set(union real_point3d const *, short)
//{
//    mangled_ppc("?set@c_ai_point3d@@QAAXPBTreal_point3d@@F@Z");
//};

//public: void c_ai_point3d::set(union real_point3d const *)
//{
//    mangled_ppc("?set@c_ai_point3d@@QAAXPBTreal_point3d@@@Z");
//};

//char * format_reference_frame_block(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?format_reference_frame_block@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//short ai_reference_frame_create(long, short)
//{
//    mangled_ppc("?ai_reference_frame_create@@YAFJF@Z");
//};

//bool object_is_mobile(long)
//{
//    mangled_ppc("?object_is_mobile@@YA_NJ@Z");
//};

//bool object_refresh_reference_frames(long)
//{
//    mangled_ppc("?object_refresh_reference_frames@@YA_NJ@Z");
//};

//void ai_refresh_reference_frames(void)
//{
//    mangled_ppc("?ai_refresh_reference_frames@@YAXXZ");
//};

//short ai_reference_frame_get_by_node_index(long, short)
//{
//    mangled_ppc("?ai_reference_frame_get_by_node_index@@YAFJF@Z");
//};

//short ai_reference_frame_get_by_identifier_and_node_index(class c_object_identifier const *, short)
//{
//    mangled_ppc("?ai_reference_frame_get_by_identifier_and_node_index@@YAFPBVc_object_identifier@@F@Z");
//};

//short ai_reference_frame_get_by_bsp_reference(long, unsigned long)
//{
//    mangled_ppc("?ai_reference_frame_get_by_bsp_reference@@YAFJK@Z");
//};

//void ai_reference_frame_handle_deleted_object(long)
//{
//    mangled_ppc("?ai_reference_frame_handle_deleted_object@@YAXJ@Z");
//};

//bool ai_point3d_new(union real_point3d const *, long, unsigned long, class c_ai_point3d *)
//{
//    mangled_ppc("?ai_point3d_new@@YA_NPBTreal_point3d@@JKPAVc_ai_point3d@@@Z");
//};

//bool ai_reference_frame_transform_point(struct scenario const *, short, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?ai_reference_frame_transform_point@@YA_NPBUscenario@@FPBTreal_point3d@@PAT2@@Z");
//};

//bool ai_reference_frame_transform_point(short, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?ai_reference_frame_transform_point@@YA_NFPBTreal_point3d@@PAT1@@Z");
//};

//bool ai_reference_frame_transform_vector(short, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?ai_reference_frame_transform_vector@@YA_NFPBTvector3d@@PAT1@@Z");
//};

//bool ai_reference_frame_inverse_transform_point(short, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?ai_reference_frame_inverse_transform_point@@YA_NFPBTreal_point3d@@PAT1@@Z");
//};

//bool ai_reference_frame_inverse_transform_vector(short, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?ai_reference_frame_inverse_transform_vector@@YA_NFPBTvector3d@@PAT1@@Z");
//};

//bool ai_reference_frame_transform_ai_point(short, class c_ai_point3d const *, class c_ai_point3d *)
//{
//    mangled_ppc("?ai_reference_frame_transform_ai_point@@YA_NFPBVc_ai_point3d@@PAV1@@Z");
//};

//union real_point3d * ai_point_get_position(struct scenario *, class c_ai_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?ai_point_get_position@@YAPATreal_point3d@@PAUscenario@@PBVc_ai_point3d@@PAT1@@Z");
//};

//union real_point3d * ai_point_get_position(class c_ai_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?ai_point_get_position@@YAPATreal_point3d@@PBVc_ai_point3d@@PAT1@@Z");
//};

//bool ai_point_from_world_position(short, union real_point3d const *, class c_ai_point3d *)
//{
//    mangled_ppc("?ai_point_from_world_position@@YA_NFPBTreal_point3d@@PAVc_ai_point3d@@@Z");
//};

//float ai_distance3d(class c_ai_point3d const *, class c_ai_point3d const *)
//{
//    mangled_ppc("?ai_distance3d@@YAMPBVc_ai_point3d@@0@Z");
//};

//float ai_distance_squared3d(class c_ai_point3d const *, class c_ai_point3d const *)
//{
//    mangled_ppc("?ai_distance_squared3d@@YAMPBVc_ai_point3d@@0@Z");
//};

//float ai_distance3d(class c_ai_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?ai_distance3d@@YAMPBVc_ai_point3d@@PBTreal_point3d@@@Z");
//};

//float ai_distance_squared3d(class c_ai_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?ai_distance_squared3d@@YAMPBVc_ai_point3d@@PBTreal_point3d@@@Z");
//};

//void ai_vector_from_points3d(class c_ai_point3d const *, class c_ai_point3d const *, union vector3d *)
//{
//    mangled_ppc("?ai_vector_from_points3d@@YAXPBVc_ai_point3d@@0PATvector3d@@@Z");
//};

//void ai_vector_from_points3d(union real_point3d const *, class c_ai_point3d const *, union vector3d *)
//{
//    mangled_ppc("?ai_vector_from_points3d@@YAXPBTreal_point3d@@PBVc_ai_point3d@@PATvector3d@@@Z");
//};

//bool ai_reference_frame_verify(short)
//{
//    mangled_ppc("?ai_reference_frame_verify@@YA_NF@Z");
//};

//bool ai_reference_frames_isolated(short, short)
//{
//    mangled_ppc("?ai_reference_frames_isolated@@YA_NFF@Z");
//};

