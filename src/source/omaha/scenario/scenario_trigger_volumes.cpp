/* ---------- headers */

#include "omaha\scenario\scenario_trigger_volumes.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_scenario_trigger_volumes_shape::`vftable'{for `hkpShapeContainer'}; // "??_7c_scenario_trigger_volumes_shape@@6BhkpShapeContainer@@@"
// const c_scenario_trigger_volumes_shape::`vftable'{for `hkpShape'}; // "??_7c_scenario_trigger_volumes_shape@@6BhkpShape@@@"
// bool debug_trigger_volume_triangulation; // "?debug_trigger_volume_triangulation@@3_NA"

// bool scenario_trigger_volume_get_matrix(long, struct real_matrix4x3*);
// bool trigger_volume_get_matrix(struct scenario_trigger_volume const &, struct real_matrix4x3*);
// bool scenario_trigger_volume_test_point(long, union real_point3d const *);
// bool scenario_trigger_volume_test_point(long, long, union real_point3d const *);
// bool scenario_trigger_volume_triangle_test_point(struct s_trigger_volume_triangle const *, union real_point3d const *);
// bool scenario_trigger_volume_get_closest_edge(struct scenario_trigger_volume const *, union real_point2d const *, union real_point2d *, union real_point2d *);
// bool scenario_trigger_volume_test_object(long, long);
// bool scenario_trigger_volume_test_object(long, long, long);
// void scenario_trigger_volume_object_test_position_calculate(long, union real_point3d *);
// bool scenario_trigger_volume_test_players(long);
// bool scenario_trigger_volume_test_players_all(long);
// bool trigger_volume_build_faces(struct scenario_trigger_volume const &, union real_point3d (&)[6][4]);
// bool trigger_volume_get_center(struct scenario_trigger_volume const &, union real_point3d *);
// float trigger_volume_get_radius(struct scenario_trigger_volume const &);
// struct s_sector_point_template<union real_point3d> * trigger_volume_get_sector_point(struct scenario_trigger_volume const &, long);
// struct s_trigger_volume_triangle const * trigger_volume_get_triangle(struct scenario_trigger_volume const &, long);
// long trigger_volume_face_index_to_axis(long);
// enum e_trigger_volume_side trigger_volume_face_index_to_side(long);
// public: c_trigger_volume_query::c_trigger_volume_query(struct scenario_trigger_volume const &);
// public: float c_trigger_volume_query::distance_to_face(long, union real_point3d const *) const;
// public: union real_point3d * c_trigger_volume_query::transform_to_trigger_space(union real_point3d const *, union real_point3d *) const;
// public: union vector3d * c_trigger_volume_query::transform_to_trigger_space(union vector3d const *, union vector3d *) const;
// public: void c_trigger_volume_query::get_local_bounds(union real_rectangle3d *) const;
// public: float c_trigger_volume_query::distance_to_face_local(long, union real_point3d const *) const;
// long scenario_trigger_volume_return_objects(long);
// long scenario_trigger_volume_return_objects_by_type(long, long);
// long scenario_trigger_volume_return_objects_by_campaign_metagame_type(long, long);
// void trigger_volume_get_transform_space(struct scenario_trigger_volume const &, struct real_matrix4x3*);
// void trigger_volume_get_position(struct scenario_trigger_volume const &, union real_point3d *);
// void trigger_volume_set_position(struct scenario_trigger_volume *, union real_point3d const *);
// void trigger_volume_triangulation_render_debug(struct scenario_trigger_volume const &, union argb_color const *, union argb_color const *);
// void trigger_volume_render_debug(struct scenario_trigger_volume const *);
// float trigger_volume_get_max_z(struct scenario_trigger_volume const &);
// float trigger_volume_get_min_z(struct scenario_trigger_volume const &);
// float trigger_volume_get_height(struct scenario_trigger_volume const &);
// float trigger_volume_get_sink(struct scenario_trigger_volume const &);
// void trigger_volume_set_height(struct scenario_trigger_volume *, float);
// void trigger_volume_set_sink(struct scenario_trigger_volume *, float);
// float trigger_volume_get_top(struct scenario_trigger_volume const &);
// void scenario_trigger_volume_postprocess(struct scenario_trigger_volume *);
// float trigger_volume_get_bottom(struct scenario_trigger_volume const &);
// void scenario_build_trigger_volumes_mopp(long);
// public: c_scenario_trigger_volumes_shape::c_scenario_trigger_volumes_shape(long);
// public: virtual int c_scenario_trigger_volumes_shape::getNumChildShapes(void) const;
// public: virtual unsigned int c_scenario_trigger_volumes_shape::getFirstKey(void) const;
// public: long s_static_trigger_volume_key::serialize(void) const;
// public: virtual unsigned int c_scenario_trigger_volumes_shape::getNextKey(unsigned int) const;
// public: virtual class hkpShape const * c_scenario_trigger_volumes_shape::getChildShape(unsigned int, char (&)[512]) const;
// public: c_scenario_trigger_volume_shape::c_scenario_trigger_volume_shape(long, long, long);
// public: virtual float c_scenario_trigger_volume_shape::getMaximumProjection(class hkVector4const &) const;
// union vector3d const * real_vector3d_from_hkVector4_in_place(class hkVector4const *);
// public: virtual void c_scenario_trigger_volume_shape::castRayWithCollectorImpl(struct hkpShapeRayCastInput const &, class hkpCdBody const &, class hkpRayHitCollector &) const;
// protected: virtual void c_scenario_trigger_volume_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// protected: virtual class hkBool c_scenario_trigger_volume_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// merged_832A89A0;
// public: virtual c_scenario_trigger_volume_shape::~c_scenario_trigger_volume_shape(void);
// protected: virtual class hkBool c_scenario_trigger_volumes_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// protected: virtual void c_scenario_trigger_volumes_shape::castRayWithCollectorImpl(struct hkpShapeRayCastInput const &, class hkpCdBody const &, class hkpRayHitCollector &) const;
// protected: virtual void c_scenario_trigger_volumes_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// protected: virtual float c_scenario_trigger_volumes_shape::getMaximumProjection(class hkVector4const &) const;
// merged_832A8BE0;
// public: virtual c_scenario_trigger_volumes_shape::~c_scenario_trigger_volumes_shape(void);
// long scenario_build_trigger_volumes_mopp_checksum(long);
// public: long c_static_stack<union real_point2d, 32>::push(void);
// public: void c_static_stack<union real_point2d, 32>::push_back(union real_point2d const &);
// public: union real_point2d & c_static_stack<union real_point2d, 32>::get_element(long);
// public: bool c_static_stack<union real_point2d, 32>::full(void) const;
// public: union real_point2d * c_static_stack<union real_point2d, 32>::get(long);
// [thunk]: public: virtual void * c_scenario_trigger_volumes_shape::`vector deleting destructor'(unsigned int);
// struct __vector4 XMVectorReplicateInt(unsigned int);
// struct __vector4 XMVectorLessOrEqual(struct __vector4, struct __vector4);
// public: virtual hkpShapeCollection::~hkpShapeCollection(void);

//bool scenario_trigger_volume_get_matrix(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?scenario_trigger_volume_get_matrix@@YA_NJPAUreal_matrix4x3@@@Z");
//};

//bool trigger_volume_get_matrix(struct scenario_trigger_volume const &, struct real_matrix4x3*)
//{
//    mangled_ppc("?trigger_volume_get_matrix@@YA_NABUscenario_trigger_volume@@PAUreal_matrix4x3@@@Z");
//};

//bool scenario_trigger_volume_test_point(long, union real_point3d const *)
//{
//    mangled_ppc("?scenario_trigger_volume_test_point@@YA_NJPBTreal_point3d@@@Z");
//};

//bool scenario_trigger_volume_test_point(long, long, union real_point3d const *)
//{
//    mangled_ppc("?scenario_trigger_volume_test_point@@YA_NJJPBTreal_point3d@@@Z");
//};

//bool scenario_trigger_volume_triangle_test_point(struct s_trigger_volume_triangle const *, union real_point3d const *)
//{
//    mangled_ppc("?scenario_trigger_volume_triangle_test_point@@YA_NPBUs_trigger_volume_triangle@@PBTreal_point3d@@@Z");
//};

//bool scenario_trigger_volume_get_closest_edge(struct scenario_trigger_volume const *, union real_point2d const *, union real_point2d *, union real_point2d *)
//{
//    mangled_ppc("?scenario_trigger_volume_get_closest_edge@@YA_NPBUscenario_trigger_volume@@PBTreal_point2d@@PAT2@2@Z");
//};

//bool scenario_trigger_volume_test_object(long, long)
//{
//    mangled_ppc("?scenario_trigger_volume_test_object@@YA_NJJ@Z");
//};

//bool scenario_trigger_volume_test_object(long, long, long)
//{
//    mangled_ppc("?scenario_trigger_volume_test_object@@YA_NJJJ@Z");
//};

//void scenario_trigger_volume_object_test_position_calculate(long, union real_point3d *)
//{
//    mangled_ppc("?scenario_trigger_volume_object_test_position_calculate@@YAXJPATreal_point3d@@@Z");
//};

//bool scenario_trigger_volume_test_players(long)
//{
//    mangled_ppc("?scenario_trigger_volume_test_players@@YA_NJ@Z");
//};

//bool scenario_trigger_volume_test_players_all(long)
//{
//    mangled_ppc("?scenario_trigger_volume_test_players_all@@YA_NJ@Z");
//};

//bool trigger_volume_build_faces(struct scenario_trigger_volume const &, union real_point3d (&)[6][4])
//{
//    mangled_ppc("?trigger_volume_build_faces@@YA_NABUscenario_trigger_volume@@AAY153Treal_point3d@@@Z");
//};

//bool trigger_volume_get_center(struct scenario_trigger_volume const &, union real_point3d *)
//{
//    mangled_ppc("?trigger_volume_get_center@@YA_NABUscenario_trigger_volume@@PATreal_point3d@@@Z");
//};

//float trigger_volume_get_radius(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_radius@@YAMABUscenario_trigger_volume@@@Z");
//};

//struct s_sector_point_template<union real_point3d> * trigger_volume_get_sector_point(struct scenario_trigger_volume const &, long)
//{
//    mangled_ppc("?trigger_volume_get_sector_point@@YAPAU?$s_sector_point_template@Treal_point3d@@@@ABUscenario_trigger_volume@@J@Z");
//};

//struct s_trigger_volume_triangle const * trigger_volume_get_triangle(struct scenario_trigger_volume const &, long)
//{
//    mangled_ppc("?trigger_volume_get_triangle@@YAPBUs_trigger_volume_triangle@@ABUscenario_trigger_volume@@J@Z");
//};

//long trigger_volume_face_index_to_axis(long)
//{
//    mangled_ppc("?trigger_volume_face_index_to_axis@@YAJJ@Z");
//};

//enum e_trigger_volume_side trigger_volume_face_index_to_side(long)
//{
//    mangled_ppc("?trigger_volume_face_index_to_side@@YA?AW4e_trigger_volume_side@@J@Z");
//};

//public: c_trigger_volume_query::c_trigger_volume_query(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("??0c_trigger_volume_query@@QAA@ABUscenario_trigger_volume@@@Z");
//};

//public: float c_trigger_volume_query::distance_to_face(long, union real_point3d const *) const
//{
//    mangled_ppc("?distance_to_face@c_trigger_volume_query@@QBAMJPBTreal_point3d@@@Z");
//};

//public: union real_point3d * c_trigger_volume_query::transform_to_trigger_space(union real_point3d const *, union real_point3d *) const
//{
//    mangled_ppc("?transform_to_trigger_space@c_trigger_volume_query@@QBAPATreal_point3d@@PBT2@PAT2@@Z");
//};

//public: union vector3d * c_trigger_volume_query::transform_to_trigger_space(union vector3d const *, union vector3d *) const
//{
//    mangled_ppc("?transform_to_trigger_space@c_trigger_volume_query@@QBAPATvector3d@@PBT2@PAT2@@Z");
//};

//public: void c_trigger_volume_query::get_local_bounds(union real_rectangle3d *) const
//{
//    mangled_ppc("?get_local_bounds@c_trigger_volume_query@@QBAXPATreal_rectangle3d@@@Z");
//};

//public: float c_trigger_volume_query::distance_to_face_local(long, union real_point3d const *) const
//{
//    mangled_ppc("?distance_to_face_local@c_trigger_volume_query@@QBAMJPBTreal_point3d@@@Z");
//};

//long scenario_trigger_volume_return_objects(long)
//{
//    mangled_ppc("?scenario_trigger_volume_return_objects@@YAJJ@Z");
//};

//long scenario_trigger_volume_return_objects_by_type(long, long)
//{
//    mangled_ppc("?scenario_trigger_volume_return_objects_by_type@@YAJJJ@Z");
//};

//long scenario_trigger_volume_return_objects_by_campaign_metagame_type(long, long)
//{
//    mangled_ppc("?scenario_trigger_volume_return_objects_by_campaign_metagame_type@@YAJJJ@Z");
//};

//void trigger_volume_get_transform_space(struct scenario_trigger_volume const &, struct real_matrix4x3*)
//{
//    mangled_ppc("?trigger_volume_get_transform_space@@YAXABUscenario_trigger_volume@@PAUreal_matrix4x3@@@Z");
//};

//void trigger_volume_get_position(struct scenario_trigger_volume const &, union real_point3d *)
//{
//    mangled_ppc("?trigger_volume_get_position@@YAXABUscenario_trigger_volume@@PATreal_point3d@@@Z");
//};

//void trigger_volume_set_position(struct scenario_trigger_volume *, union real_point3d const *)
//{
//    mangled_ppc("?trigger_volume_set_position@@YAXPAUscenario_trigger_volume@@PBTreal_point3d@@@Z");
//};

//void trigger_volume_triangulation_render_debug(struct scenario_trigger_volume const &, union argb_color const *, union argb_color const *)
//{
//    mangled_ppc("?trigger_volume_triangulation_render_debug@@YAXABUscenario_trigger_volume@@PBTargb_color@@1@Z");
//};

//void trigger_volume_render_debug(struct scenario_trigger_volume const *)
//{
//    mangled_ppc("?trigger_volume_render_debug@@YAXPBUscenario_trigger_volume@@@Z");
//};

//float trigger_volume_get_max_z(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_max_z@@YAMABUscenario_trigger_volume@@@Z");
//};

//float trigger_volume_get_min_z(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_min_z@@YAMABUscenario_trigger_volume@@@Z");
//};

//float trigger_volume_get_height(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_height@@YAMABUscenario_trigger_volume@@@Z");
//};

//float trigger_volume_get_sink(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_sink@@YAMABUscenario_trigger_volume@@@Z");
//};

//void trigger_volume_set_height(struct scenario_trigger_volume *, float)
//{
//    mangled_ppc("?trigger_volume_set_height@@YAXPAUscenario_trigger_volume@@M@Z");
//};

//void trigger_volume_set_sink(struct scenario_trigger_volume *, float)
//{
//    mangled_ppc("?trigger_volume_set_sink@@YAXPAUscenario_trigger_volume@@M@Z");
//};

//float trigger_volume_get_top(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_top@@YAMABUscenario_trigger_volume@@@Z");
//};

//void scenario_trigger_volume_postprocess(struct scenario_trigger_volume *)
//{
//    mangled_ppc("?scenario_trigger_volume_postprocess@@YAXPAUscenario_trigger_volume@@@Z");
//};

//float trigger_volume_get_bottom(struct scenario_trigger_volume const &)
//{
//    mangled_ppc("?trigger_volume_get_bottom@@YAMABUscenario_trigger_volume@@@Z");
//};

//void scenario_build_trigger_volumes_mopp(long)
//{
//    mangled_ppc("?scenario_build_trigger_volumes_mopp@@YAXJ@Z");
//};

//public: c_scenario_trigger_volumes_shape::c_scenario_trigger_volumes_shape(long)
//{
//    mangled_ppc("??0c_scenario_trigger_volumes_shape@@QAA@J@Z");
//};

//public: virtual int c_scenario_trigger_volumes_shape::getNumChildShapes(void) const
//{
//    mangled_ppc("?getNumChildShapes@c_scenario_trigger_volumes_shape@@UBAHXZ");
//};

//public: virtual unsigned int c_scenario_trigger_volumes_shape::getFirstKey(void) const
//{
//    mangled_ppc("?getFirstKey@c_scenario_trigger_volumes_shape@@UBAIXZ");
//};

//public: long s_static_trigger_volume_key::serialize(void) const
//{
//    mangled_ppc("?serialize@s_static_trigger_volume_key@@QBAJXZ");
//};

//public: virtual unsigned int c_scenario_trigger_volumes_shape::getNextKey(unsigned int) const
//{
//    mangled_ppc("?getNextKey@c_scenario_trigger_volumes_shape@@UBAII@Z");
//};

//public: virtual class hkpShape const * c_scenario_trigger_volumes_shape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@c_scenario_trigger_volumes_shape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//public: c_scenario_trigger_volume_shape::c_scenario_trigger_volume_shape(long, long, long)
//{
//    mangled_ppc("??0c_scenario_trigger_volume_shape@@QAA@JJJ@Z");
//};

//public: virtual float c_scenario_trigger_volume_shape::getMaximumProjection(class hkVector4const &) const
//{
//    mangled_ppc("?getMaximumProjection@c_scenario_trigger_volume_shape@@UBAMABVhkVector4@@@Z");
//};

//union vector3d const * real_vector3d_from_hkVector4_in_place(class hkVector4const *)
//{
//    mangled_ppc("?real_vector3d_from_hkVector4_in_place@@YAPBTvector3d@@PBVhkVector4@@@Z");
//};

//public: virtual void c_scenario_trigger_volume_shape::castRayWithCollectorImpl(struct hkpShapeRayCastInput const &, class hkpCdBody const &, class hkpRayHitCollector &) const
//{
//    mangled_ppc("?castRayWithCollectorImpl@c_scenario_trigger_volume_shape@@UBAXABUhkpShapeRayCastInput@@ABVhkpCdBody@@AAVhkpRayHitCollector@@@Z");
//};

//protected: virtual void c_scenario_trigger_volume_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_scenario_trigger_volume_shape@@MBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//protected: virtual class hkBool c_scenario_trigger_volume_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRayImpl@c_scenario_trigger_volume_shape@@MBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//merged_832A89A0
//{
//    mangled_ppc("merged_832A89A0");
//};

//public: virtual c_scenario_trigger_volume_shape::~c_scenario_trigger_volume_shape(void)
//{
//    mangled_ppc("??1c_scenario_trigger_volume_shape@@UAA@XZ");
//};

//protected: virtual class hkBool c_scenario_trigger_volumes_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRayImpl@c_scenario_trigger_volumes_shape@@MBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//protected: virtual void c_scenario_trigger_volumes_shape::castRayWithCollectorImpl(struct hkpShapeRayCastInput const &, class hkpCdBody const &, class hkpRayHitCollector &) const
//{
//    mangled_ppc("?castRayWithCollectorImpl@c_scenario_trigger_volumes_shape@@MBAXABUhkpShapeRayCastInput@@ABVhkpCdBody@@AAVhkpRayHitCollector@@@Z");
//};

//protected: virtual void c_scenario_trigger_volumes_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_scenario_trigger_volumes_shape@@MBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//protected: virtual float c_scenario_trigger_volumes_shape::getMaximumProjection(class hkVector4const &) const
//{
//    mangled_ppc("?getMaximumProjection@c_scenario_trigger_volumes_shape@@MBAMABVhkVector4@@@Z");
//};

//merged_832A8BE0
//{
//    mangled_ppc("merged_832A8BE0");
//};

//public: virtual c_scenario_trigger_volumes_shape::~c_scenario_trigger_volumes_shape(void)
//{
//    mangled_ppc("??1c_scenario_trigger_volumes_shape@@UAA@XZ");
//};

//long scenario_build_trigger_volumes_mopp_checksum(long)
//{
//    mangled_ppc("?scenario_build_trigger_volumes_mopp_checksum@@YAJJ@Z");
//};

//public: long c_static_stack<union real_point2d, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Treal_point2d@@$0CA@@@QAAJXZ");
//};

//public: void c_static_stack<union real_point2d, 32>::push_back(union real_point2d const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Treal_point2d@@$0CA@@@QAAXABTreal_point2d@@@Z");
//};

//public: union real_point2d & c_static_stack<union real_point2d, 32>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_stack@Treal_point2d@@$0CA@@@QAAAATreal_point2d@@J@Z");
//};

//public: bool c_static_stack<union real_point2d, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Treal_point2d@@$0CA@@@QBA_NXZ");
//};

//public: union real_point2d * c_static_stack<union real_point2d, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Treal_point2d@@$0CA@@@QAAPATreal_point2d@@J@Z");
//};

//[thunk]: public: virtual void * c_scenario_trigger_volumes_shape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_scenario_trigger_volumes_shape@@WBA@AAPAXI@Z");
//};

//struct __vector4 XMVectorReplicateInt(unsigned int)
//{
//    mangled_ppc("?XMVectorReplicateInt@@YA?AU__vector4@@I@Z");
//};

//struct __vector4 XMVectorLessOrEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorLessOrEqual@@YA?AU__vector4@@U1@0@Z");
//};

//public: virtual hkpShapeCollection::~hkpShapeCollection(void)
//{
//    mangled_ppc("??1hkpShapeCollection@@UAA@XZ");
//};

