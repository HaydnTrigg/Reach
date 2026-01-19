/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_collision_geometry_shape::`vftable'{for `hkpShapeContainer'}; // "??_7c_collision_geometry_shape@@6BhkpShapeContainer@@@"
// const c_collision_geometry_shape::`vftable'{for `hkpShape'}; // "??_7c_collision_geometry_shape@@6BhkpShape@@@"
// const c_environment_surface_shape::`vftable'{for `hkpShapeContainer'}; // "??_7c_environment_surface_shape@@6BhkpShapeContainer@@@"
// const c_environment_surface_shape::`vftable'{for `hkpShape'}; // "??_7c_environment_surface_shape@@6BhkpShape@@@"
// const c_decomposed_poop_shape::`vftable'{for `hkpShapeContainer'}; // "??_7c_decomposed_poop_shape@@6BhkpShapeContainer@@@"
// const c_decomposed_poop_shape::`vftable'{for `hkpShape'}; // "??_7c_decomposed_poop_shape@@6BhkpShape@@@"
// __vmx@4100000040800000400000003f800000; // "__vmx@4100000040800000400000003f800000"
// __vmx@3f8000003f8000003f8000003f800000; // "__vmx@3f8000003f8000003f8000003f800000"
// bool havok_render_environment_queries; // "?havok_render_environment_queries@@3_NA"
// bool g_havok_find_initial_contact_points_optimizations; // "?g_havok_find_initial_contact_points_optimizations@@3_NA"
// class c_stop_watch g_havok_shape_useless_time_watch; // "?g_havok_shape_useless_time_watch@@3Vc_stop_watch@@A"
// class c_defualt_soft_surfaces_definition k_host_platform_soft_surfaces_definition; // "?k_host_platform_soft_surfaces_definition@@3Vc_defualt_soft_surfaces_definition@@A"

// void havok_shapes_initialize(void);
// void havok_shapes_dispose(void);
// void havok_shapes_initialize_for_new_map(void);
// void havok_shapes_dispose_from_old_map(void);
// void havok_shapes_initialize_for_new_bsp(void);
// void havok_shapes_dispose_from_old_bsp(void);
// enum e_soft_surface_sink_class havok_group_soft_surface_sink_class_get(enum e_havok_group);
// float havok_group_soft_surface_maximum_sink_get(enum e_havok_group);
// void havok_shapes_notify_scenery_placements_dirty(void);
// long havok_environment_surface_index_from_shape_key_index(unsigned int);
// public: static void c_collision_surface_shape::build_shape_display(class hkpShape const *, class hkTransform const &, class hkArray<class hkDisplayGeometry *, struct hkContainerHeapAllocator> &, class hkpShapeDisplayBuilder *);
// public: struct hkGeometry * hkDisplayGeometry::getGeometry(void);
// public: void hkGeometry::Triangle::set(int, int, int, int);
// public: c_collision_surface_shape::c_collision_surface_shape(unsigned int, long, class c_collision_bsp_reference, float, bool, bool, long, long, struct real_matrix4x3const *, float, enum e_soft_surface_sink_class, float);
// merged_8345A608;
// public: virtual c_collision_surface_shape::~c_collision_surface_shape(void);
// public: virtual void c_collision_surface_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: virtual int c_collision_surface_shape::getNumCollisionSpheresImpl(void) const;
// public: virtual class hkSphere const * c_collision_surface_shape::getCollisionSpheresImpl(class hkSphere *) const;
// public: virtual class hkBool c_collision_surface_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// public: virtual void c_collision_surface_shape::getFirstVertex(class hkVector4&) const;
// public: virtual void c_collision_surface_shape::getSupportingVertexImpl(class hkVector4const &, class hkpCdVertex &) const;
// __lvx;
// public: virtual void c_collision_surface_shape::convertVertexIdsToVerticesImpl(unsigned short const *, int, class hkpCdVertex *) const;
// public: bool c_collision_surface_shape::is_structure_bsp_surface(void) const;
// public: unsigned int c_collision_surface_shape::shape_key_get(void) const;
// public: long c_collision_surface_shape::get_surface_index(void) const;
// public: bool c_collision_surface_shape::is_dead(void) const;
// public: void c_collision_surface_shape::is_dead_set(bool);
// public: class c_global_material_type c_collision_surface_shape::get_global_material_type(void) const;
// public: unsigned char c_collision_surface_shape::get_collision_surface_flags(void) const;
// public: long c_collision_surface_shape::get_vertex_count(void) const;
// public: class hkVector4const * c_collision_surface_shape::get_vertex(long) const;
// public: float c_collision_surface_shape::get_scale(void) const;
// private: unsigned short c_collision_surface_shape::vertex_id_from_point_index(long) const;
// private: long c_collision_surface_shape::vertex_id_to_point_index(unsigned short) const;
// public: void c_collision_surface_shape::render_debug(union argb_color const *) const;
// public: c_collision_geometry_shape::c_collision_geometry_shape(enum c_collision_geometry_shape::e_collision_geometry_shape_type, class c_collision_bsp_reference, long, long, long, float, bool, class hkVector4const *, class hkVector4const *);
// merged_8345BF70;
// public: virtual c_collision_geometry_shape::~c_collision_geometry_shape(void);
// public: c_collision_geometry_shape::c_collision_geometry_shape(class hkFinishLoadedObjectFlag, class c_collision_bsp_reference);
// public: virtual void c_collision_geometry_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: virtual int c_collision_geometry_shape::getNumChildShapes(void) const;
// long get_bsp_surface_count(class c_collision_bsp_reference);
// public: virtual unsigned int c_collision_geometry_shape::getFirstKey(void) const;
// public: virtual unsigned int c_collision_geometry_shape::getNextKey(unsigned int) const;
// public: virtual class hkpShape const * c_collision_geometry_shape::getChildShape(unsigned int, char (&)[512]) const;
// unsigned int shape_key_from_values(long, long, long);
// public: class hkpShape const * c_collision_geometry_shape::get_child_shape(unsigned int, bool, class c_collision_surface_shape *, struct real_matrix4x3const *, long, float) const;
// public: c_environment_mopp_bv_tree_shape::c_environment_mopp_bv_tree_shape(class c_environment_surface_shape const *, class hkpMoppCode const *);
// merged_8345C7E0;
// public: virtual c_environment_mopp_bv_tree_shape::~c_environment_mopp_bv_tree_shape(void);
// public: virtual unsigned int c_environment_mopp_bv_tree_shape::queryAabbImpl(class hkAabb const &, unsigned int *, int) const;
// public: long c_environment_mopp_bv_tree_shape::get_structure_bsp_index(void) const;
// union argb_color const * get_debug_color(long);
// bool include_surface(class c_collision_surface_reference const *, struct real_matrix4x3*);
// void real_rectangle3d_transform(union real_rectangle3d const *, struct real_matrix4x3const *, union real_rectangle3d *);
// public: virtual void c_environment_mopp_bv_tree_shape::queryObb(class hkTransform const &, class hkVector4const &, float, class hkArray<unsigned int, struct hkContainerHeapAllocator> &) const;
// public: virtual void c_environment_mopp_bv_tree_shape::queryAabb(class hkAabb const &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &) const;
// public: class c_environment_surface_shape const * c_environment_mopp_bv_tree_shape::get_environment_surface_shape(void) const;
// public: c_environment_surface_shape::c_environment_surface_shape(long, long);
// merged_8345DD98;
// public: virtual c_environment_surface_shape::~c_environment_surface_shape(void);
// public: virtual void c_environment_surface_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: bool c_environment_surface_shape::is_key_alive(unsigned int) const;
// public: static bool c_environment_surface_shape::is_key_alive(long, long, bool, unsigned int);
// public: void c_environment_surface_shape::build_mopp_code_begin(void);
// public: void c_environment_surface_shape::build_mopp_code_end(void);
// public: void c_environment_surface_shape::verify(void);
// public: virtual int c_environment_surface_shape::getNumChildShapes(void) const;
// public: virtual unsigned int c_environment_surface_shape::getFirstKey(void) const;
// bool surface_has_sink(class c_collision_bsp_reference, long);
// bool instance_should_have_physics(enum c_environment_surface_shape::e_identifier_key *, struct structure_bsp const *, struct structure_instanced_geometry_instance const *, struct structure_instanced_geometry_definition const *);
// public: virtual unsigned int c_environment_surface_shape::getNextKey(unsigned int) const;
// public: virtual class hkpShape const * c_environment_surface_shape::getChildShape(unsigned int, char (&)[512]) const;
// bool havok_shape_cache_enabled(void);
// private: struct structure_bsp const * c_environment_surface_shape::global_structure_bsp_get(void) const;
// private: static struct structure_bsp const * c_environment_surface_shape::global_structure_bsp_get(long, long);
// private: struct structure_instanced_geometry_definition const * c_environment_surface_shape::global_instance_geometry_definition_get(long) const;
// private: static struct structure_instanced_geometry_definition const * c_environment_surface_shape::global_instance_geometry_definition_get(long, long, long);
// public: c_decomposed_poop_shape::c_decomposed_poop_shape(struct structure_instanced_geometry_definition const *, float);
// merged_8345FFD8;
// public: virtual c_decomposed_poop_shape::~c_decomposed_poop_shape(void);
// public: c_decomposed_poop_shape::c_decomposed_poop_shape(class hkFinishLoadedObjectFlag, struct structure_instanced_geometry_definition const *);
// public: virtual void c_decomposed_poop_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: virtual int c_decomposed_poop_shape::getNumChildShapes(void) const;
// public: virtual unsigned int c_decomposed_poop_shape::getFirstKey(void) const;
// public: virtual unsigned int c_decomposed_poop_shape::getNextKey(unsigned int) const;
// public: virtual bool c_decomposed_poop_shape::isValidKey(unsigned int) const;
// public: virtual class hkpShape const * c_decomposed_poop_shape::getChildShape(unsigned int, char (&)[512]) const;
// public: c_scaled_convex_vertices_shape::c_scaled_convex_vertices_shape(class hkpConvexVerticesShape const *, float);
// merged_83460378;
// public: virtual c_scaled_convex_vertices_shape::~c_scaled_convex_vertices_shape(void);
// public: virtual void c_scaled_convex_vertices_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: virtual int c_scaled_convex_vertices_shape::getNumCollisionSpheresImpl(void) const;
// public: virtual class hkSphere const * c_scaled_convex_vertices_shape::getCollisionSpheresImpl(class hkSphere *) const;
// public: virtual class hkBool c_scaled_convex_vertices_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// public: virtual void c_scaled_convex_vertices_shape::getFirstVertex(class hkVector4&) const;
// public: virtual void c_scaled_convex_vertices_shape::getSupportingVertexImpl(class hkVector4const &, class hkpCdVertex &) const;
// public: virtual void c_scaled_convex_vertices_shape::convertVertexIdsToVerticesImpl(unsigned short const *, int, class hkpCdVertex *) const;
// public: class hkVector4* hkArray<class hkVector4, struct hkContainerHeapAllocator>::expandBy(int);
// public: static class hkpUserShapeDisplayBuilder & hkSingleton<class hkpUserShapeDisplayBuilder>::getInstance(void);
// public: struct hkGeometry::Triangle * hkArray<struct hkGeometry::Triangle, struct hkContainerHeapAllocator>::expandBy(int);
// public: struct hkGeometry::Triangle & hkArrayBase<struct hkGeometry::Triangle>::operator[](int);
// public: int hkArrayBase<struct hkGeometry::Triangle>::getSize(void) const;
// public: struct hkGeometry::Triangle * hkArrayBase<struct hkGeometry::Triangle>::_expandBy(class hkMemoryAllocator &, int);
// public: class hkVector4* hkArrayBase<class hkVector4>::_expandBy(class hkMemoryAllocator &, int);
// private: void c_collision_surface_shape::construct<struct s_small_bsp_types>(struct collision_bsp const *, long, struct real_matrix4x3const *, float, enum e_soft_surface_sink_class);
// private: void c_collision_surface_shape::construct<struct s_large_bsp_types>(struct large_collision_bsp const *, long, struct real_matrix4x3const *, float, enum e_soft_surface_sink_class);
// public: void hkArrayBase<unsigned int>::removeAtAndCopy(int);
// public: void hkArrayBase<struct hkGeometry::Triangle>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<struct hkGeometry::Triangle>(struct hkGeometry::Triangle *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkVector4>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<class hkVector4>(class hkVector4*, int, struct hkTraitBool<1>);
// void hkMemUtil::memCpy<4>(void *, void const *, int);
// public: int hkArrayBase<struct hkGeometry::Triangle>::getCapacity(void) const;
// public: int hkArrayBase<class hkVector4>::getCapacity(void) const;
// [thunk]: public: virtual void * c_collision_geometry_shape::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_decomposed_poop_shape::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_environment_surface_shape::`vector deleting destructor'(unsigned int);
// int XMVector3GreaterOrEqual(struct __vector4, struct __vector4);
// unsigned int XMVector3GreaterOrEqualR(struct __vector4, struct __vector4);
// public: int hkVector4Comparison::getMask(void) const;
// public: void hkVector4::setInt24W(int);
// public: int hkVector4::getInt24W(void) const;
// public: class hkVector4Comparison hkVector4::compareEqual4(class hkVector4const &) const;
// public: void hkVector4::setW(class hkVector4const &);
// public: void hkVector4::operator=(struct __vector4const &);
// public: void hkAabb::includeAabb(class hkAabb const &);
// public: void hkAabb::setEmpty(void);
// public: class hkBool hkpShape::castRay(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// public: int hkpSphereRepShape::getNumCollisionSpheres(void) const;
// public: class hkSphere const * hkpSphereRepShape::getCollisionSpheres(class hkSphere *) const;
// public: void hkpConvexShape::getSupportingVertex(class hkVector4const &, class hkpCdVertex &) const;
// public: hkpShapeCollection::hkpShapeCollection(class hkFinishLoadedObjectFlag);
// merged_83461C10;
// public: void hkSphere::setRadius(float);
// public: class hkVector4& hkSphere::getPositionAndRadius(void);
// public: void hkSphere::setPosition(class hkVector4const &);
// public: void hkVector4::setXYZ(class hkVector4const &);
// public: static void * hkpTransformShape::operator new(unsigned int, void *);
// public: hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>::hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>(void);
// public: void hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>::operator=(enum hkpShapeCollection::CollectionType);
// [thunk]: public: virtual void * hkpShapeCollection::`vector deleting destructor'(unsigned int);
// public: c_defualt_soft_surfaces_definition::c_defualt_soft_surfaces_definition(void);
// void g_havok_shape_useless_time_watch::`dynamic atexit destructor'(void);

//void havok_shapes_initialize(void)
//{
//    mangled_ppc("?havok_shapes_initialize@@YAXXZ");
//};

//void havok_shapes_dispose(void)
//{
//    mangled_ppc("?havok_shapes_dispose@@YAXXZ");
//};

//void havok_shapes_initialize_for_new_map(void)
//{
//    mangled_ppc("?havok_shapes_initialize_for_new_map@@YAXXZ");
//};

//void havok_shapes_dispose_from_old_map(void)
//{
//    mangled_ppc("?havok_shapes_dispose_from_old_map@@YAXXZ");
//};

//void havok_shapes_initialize_for_new_bsp(void)
//{
//    mangled_ppc("?havok_shapes_initialize_for_new_bsp@@YAXXZ");
//};

//void havok_shapes_dispose_from_old_bsp(void)
//{
//    mangled_ppc("?havok_shapes_dispose_from_old_bsp@@YAXXZ");
//};

//enum e_soft_surface_sink_class havok_group_soft_surface_sink_class_get(enum e_havok_group)
//{
//    mangled_ppc("?havok_group_soft_surface_sink_class_get@@YA?AW4e_soft_surface_sink_class@@W4e_havok_group@@@Z");
//};

//float havok_group_soft_surface_maximum_sink_get(enum e_havok_group)
//{
//    mangled_ppc("?havok_group_soft_surface_maximum_sink_get@@YAMW4e_havok_group@@@Z");
//};

//void havok_shapes_notify_scenery_placements_dirty(void)
//{
//    mangled_ppc("?havok_shapes_notify_scenery_placements_dirty@@YAXXZ");
//};

//long havok_environment_surface_index_from_shape_key_index(unsigned int)
//{
//    mangled_ppc("?havok_environment_surface_index_from_shape_key_index@@YAJI@Z");
//};

//public: static void c_collision_surface_shape::build_shape_display(class hkpShape const *, class hkTransform const &, class hkArray<class hkDisplayGeometry *, struct hkContainerHeapAllocator> &, class hkpShapeDisplayBuilder *)
//{
//    mangled_ppc("?build_shape_display@c_collision_surface_shape@@SAXPBVhkpShape@@ABVhkTransform@@AAV?$hkArray@PAVhkDisplayGeometry@@UhkContainerHeapAllocator@@@@PAVhkpShapeDisplayBuilder@@@Z");
//};

//public: struct hkGeometry * hkDisplayGeometry::getGeometry(void)
//{
//    mangled_ppc("?getGeometry@hkDisplayGeometry@@QAAPAUhkGeometry@@XZ");
//};

//public: void hkGeometry::Triangle::set(int, int, int, int)
//{
//    mangled_ppc("?set@Triangle@hkGeometry@@QAAXHHHH@Z");
//};

//public: c_collision_surface_shape::c_collision_surface_shape(unsigned int, long, class c_collision_bsp_reference, float, bool, bool, long, long, struct real_matrix4x3const *, float, enum e_soft_surface_sink_class, float)
//{
//    mangled_ppc("??0c_collision_surface_shape@@QAA@IJVc_collision_bsp_reference@@M_N1JJPBUreal_matrix4x3@@MW4e_soft_surface_sink_class@@M@Z");
//};

//merged_8345A608
//{
//    mangled_ppc("merged_8345A608");
//};

//public: virtual c_collision_surface_shape::~c_collision_surface_shape(void)
//{
//    mangled_ppc("??1c_collision_surface_shape@@UAA@XZ");
//};

//public: virtual void c_collision_surface_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_collision_surface_shape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual int c_collision_surface_shape::getNumCollisionSpheresImpl(void) const
//{
//    mangled_ppc("?getNumCollisionSpheresImpl@c_collision_surface_shape@@UBAHXZ");
//};

//public: virtual class hkSphere const * c_collision_surface_shape::getCollisionSpheresImpl(class hkSphere *) const
//{
//    mangled_ppc("?getCollisionSpheresImpl@c_collision_surface_shape@@UBAPBVhkSphere@@PAV2@@Z");
//};

//public: virtual class hkBool c_collision_surface_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRayImpl@c_collision_surface_shape@@UBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//public: virtual void c_collision_surface_shape::getFirstVertex(class hkVector4&) const
//{
//    mangled_ppc("?getFirstVertex@c_collision_surface_shape@@UBAXAAVhkVector4@@@Z");
//};

//public: virtual void c_collision_surface_shape::getSupportingVertexImpl(class hkVector4const &, class hkpCdVertex &) const
//{
//    mangled_ppc("?getSupportingVertexImpl@c_collision_surface_shape@@UBAXABVhkVector4@@AAVhkpCdVertex@@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//public: virtual void c_collision_surface_shape::convertVertexIdsToVerticesImpl(unsigned short const *, int, class hkpCdVertex *) const
//{
//    mangled_ppc("?convertVertexIdsToVerticesImpl@c_collision_surface_shape@@UBAXPBGHPAVhkpCdVertex@@@Z");
//};

//public: bool c_collision_surface_shape::is_structure_bsp_surface(void) const
//{
//    mangled_ppc("?is_structure_bsp_surface@c_collision_surface_shape@@QBA_NXZ");
//};

//public: unsigned int c_collision_surface_shape::shape_key_get(void) const
//{
//    mangled_ppc("?shape_key_get@c_collision_surface_shape@@QBAIXZ");
//};

//public: long c_collision_surface_shape::get_surface_index(void) const
//{
//    mangled_ppc("?get_surface_index@c_collision_surface_shape@@QBAJXZ");
//};

//public: bool c_collision_surface_shape::is_dead(void) const
//{
//    mangled_ppc("?is_dead@c_collision_surface_shape@@QBA_NXZ");
//};

//public: void c_collision_surface_shape::is_dead_set(bool)
//{
//    mangled_ppc("?is_dead_set@c_collision_surface_shape@@QAAX_N@Z");
//};

//public: class c_global_material_type c_collision_surface_shape::get_global_material_type(void) const
//{
//    mangled_ppc("?get_global_material_type@c_collision_surface_shape@@QBA?AVc_global_material_type@@XZ");
//};

//public: unsigned char c_collision_surface_shape::get_collision_surface_flags(void) const
//{
//    mangled_ppc("?get_collision_surface_flags@c_collision_surface_shape@@QBAEXZ");
//};

//public: long c_collision_surface_shape::get_vertex_count(void) const
//{
//    mangled_ppc("?get_vertex_count@c_collision_surface_shape@@QBAJXZ");
//};

//public: class hkVector4const * c_collision_surface_shape::get_vertex(long) const
//{
//    mangled_ppc("?get_vertex@c_collision_surface_shape@@QBAPBVhkVector4@@J@Z");
//};

//public: float c_collision_surface_shape::get_scale(void) const
//{
//    mangled_ppc("?get_scale@c_collision_surface_shape@@QBAMXZ");
//};

//private: unsigned short c_collision_surface_shape::vertex_id_from_point_index(long) const
//{
//    mangled_ppc("?vertex_id_from_point_index@c_collision_surface_shape@@ABAGJ@Z");
//};

//private: long c_collision_surface_shape::vertex_id_to_point_index(unsigned short) const
//{
//    mangled_ppc("?vertex_id_to_point_index@c_collision_surface_shape@@ABAJG@Z");
//};

//public: void c_collision_surface_shape::render_debug(union argb_color const *) const
//{
//    mangled_ppc("?render_debug@c_collision_surface_shape@@QBAXPBTargb_color@@@Z");
//};

//public: c_collision_geometry_shape::c_collision_geometry_shape(enum c_collision_geometry_shape::e_collision_geometry_shape_type, class c_collision_bsp_reference, long, long, long, float, bool, class hkVector4const *, class hkVector4const *)
//{
//    mangled_ppc("??0c_collision_geometry_shape@@QAA@W4e_collision_geometry_shape_type@0@Vc_collision_bsp_reference@@JJJM_NPBVhkVector4@@3@Z");
//};

//merged_8345BF70
//{
//    mangled_ppc("merged_8345BF70");
//};

//public: virtual c_collision_geometry_shape::~c_collision_geometry_shape(void)
//{
//    mangled_ppc("??1c_collision_geometry_shape@@UAA@XZ");
//};

//public: c_collision_geometry_shape::c_collision_geometry_shape(class hkFinishLoadedObjectFlag, class c_collision_bsp_reference)
//{
//    mangled_ppc("??0c_collision_geometry_shape@@QAA@VhkFinishLoadedObjectFlag@@Vc_collision_bsp_reference@@@Z");
//};

//public: virtual void c_collision_geometry_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_collision_geometry_shape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual int c_collision_geometry_shape::getNumChildShapes(void) const
//{
//    mangled_ppc("?getNumChildShapes@c_collision_geometry_shape@@UBAHXZ");
//};

//long get_bsp_surface_count(class c_collision_bsp_reference)
//{
//    mangled_ppc("?get_bsp_surface_count@@YAJVc_collision_bsp_reference@@@Z");
//};

//public: virtual unsigned int c_collision_geometry_shape::getFirstKey(void) const
//{
//    mangled_ppc("?getFirstKey@c_collision_geometry_shape@@UBAIXZ");
//};

//public: virtual unsigned int c_collision_geometry_shape::getNextKey(unsigned int) const
//{
//    mangled_ppc("?getNextKey@c_collision_geometry_shape@@UBAII@Z");
//};

//public: virtual class hkpShape const * c_collision_geometry_shape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@c_collision_geometry_shape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//unsigned int shape_key_from_values(long, long, long)
//{
//    mangled_ppc("?shape_key_from_values@@YAIJJJ@Z");
//};

//public: class hkpShape const * c_collision_geometry_shape::get_child_shape(unsigned int, bool, class c_collision_surface_shape *, struct real_matrix4x3const *, long, float) const
//{
//    mangled_ppc("?get_child_shape@c_collision_geometry_shape@@QBAPBVhkpShape@@I_NPAVc_collision_surface_shape@@PBUreal_matrix4x3@@JM@Z");
//};

//public: c_environment_mopp_bv_tree_shape::c_environment_mopp_bv_tree_shape(class c_environment_surface_shape const *, class hkpMoppCode const *)
//{
//    mangled_ppc("??0c_environment_mopp_bv_tree_shape@@QAA@PBVc_environment_surface_shape@@PBVhkpMoppCode@@@Z");
//};

//merged_8345C7E0
//{
//    mangled_ppc("merged_8345C7E0");
//};

//public: virtual c_environment_mopp_bv_tree_shape::~c_environment_mopp_bv_tree_shape(void)
//{
//    mangled_ppc("??1c_environment_mopp_bv_tree_shape@@UAA@XZ");
//};

//public: virtual unsigned int c_environment_mopp_bv_tree_shape::queryAabbImpl(class hkAabb const &, unsigned int *, int) const
//{
//    mangled_ppc("?queryAabbImpl@c_environment_mopp_bv_tree_shape@@UBAIABVhkAabb@@PAIH@Z");
//};

//public: long c_environment_mopp_bv_tree_shape::get_structure_bsp_index(void) const
//{
//    mangled_ppc("?get_structure_bsp_index@c_environment_mopp_bv_tree_shape@@QBAJXZ");
//};

//union argb_color const * get_debug_color(long)
//{
//    mangled_ppc("?get_debug_color@@YAPBTargb_color@@J@Z");
//};

//bool include_surface(class c_collision_surface_reference const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?include_surface@@YA_NPBVc_collision_surface_reference@@PAUreal_matrix4x3@@@Z");
//};

//void real_rectangle3d_transform(union real_rectangle3d const *, struct real_matrix4x3const *, union real_rectangle3d *)
//{
//    mangled_ppc("?real_rectangle3d_transform@@YAXPBTreal_rectangle3d@@PBUreal_matrix4x3@@PAT1@@Z");
//};

//public: virtual void c_environment_mopp_bv_tree_shape::queryObb(class hkTransform const &, class hkVector4const &, float, class hkArray<unsigned int, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?queryObb@c_environment_mopp_bv_tree_shape@@UBAXABVhkTransform@@ABVhkVector4@@MAAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void c_environment_mopp_bv_tree_shape::queryAabb(class hkAabb const &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?queryAabb@c_environment_mopp_bv_tree_shape@@UBAXABVhkAabb@@AAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z");
//};

//public: class c_environment_surface_shape const * c_environment_mopp_bv_tree_shape::get_environment_surface_shape(void) const
//{
//    mangled_ppc("?get_environment_surface_shape@c_environment_mopp_bv_tree_shape@@QBAPBVc_environment_surface_shape@@XZ");
//};

//public: c_environment_surface_shape::c_environment_surface_shape(long, long)
//{
//    mangled_ppc("??0c_environment_surface_shape@@QAA@JJ@Z");
//};

//merged_8345DD98
//{
//    mangled_ppc("merged_8345DD98");
//};

//public: virtual c_environment_surface_shape::~c_environment_surface_shape(void)
//{
//    mangled_ppc("??1c_environment_surface_shape@@UAA@XZ");
//};

//public: virtual void c_environment_surface_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_environment_surface_shape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: bool c_environment_surface_shape::is_key_alive(unsigned int) const
//{
//    mangled_ppc("?is_key_alive@c_environment_surface_shape@@QBA_NI@Z");
//};

//public: static bool c_environment_surface_shape::is_key_alive(long, long, bool, unsigned int)
//{
//    mangled_ppc("?is_key_alive@c_environment_surface_shape@@SA_NJJ_NI@Z");
//};

//public: void c_environment_surface_shape::build_mopp_code_begin(void)
//{
//    mangled_ppc("?build_mopp_code_begin@c_environment_surface_shape@@QAAXXZ");
//};

//public: void c_environment_surface_shape::build_mopp_code_end(void)
//{
//    mangled_ppc("?build_mopp_code_end@c_environment_surface_shape@@QAAXXZ");
//};

//public: void c_environment_surface_shape::verify(void)
//{
//    mangled_ppc("?verify@c_environment_surface_shape@@QAAXXZ");
//};

//public: virtual int c_environment_surface_shape::getNumChildShapes(void) const
//{
//    mangled_ppc("?getNumChildShapes@c_environment_surface_shape@@UBAHXZ");
//};

//public: virtual unsigned int c_environment_surface_shape::getFirstKey(void) const
//{
//    mangled_ppc("?getFirstKey@c_environment_surface_shape@@UBAIXZ");
//};

//bool surface_has_sink(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?surface_has_sink@@YA_NVc_collision_bsp_reference@@J@Z");
//};

//bool instance_should_have_physics(enum c_environment_surface_shape::e_identifier_key *, struct structure_bsp const *, struct structure_instanced_geometry_instance const *, struct structure_instanced_geometry_definition const *)
//{
//    mangled_ppc("?instance_should_have_physics@@YA_NPAW4e_identifier_key@c_environment_surface_shape@@PBUstructure_bsp@@PBUstructure_instanced_geometry_instance@@PBUstructure_instanced_geometry_definition@@@Z");
//};

//public: virtual unsigned int c_environment_surface_shape::getNextKey(unsigned int) const
//{
//    mangled_ppc("?getNextKey@c_environment_surface_shape@@UBAII@Z");
//};

//public: virtual class hkpShape const * c_environment_surface_shape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@c_environment_surface_shape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//bool havok_shape_cache_enabled(void)
//{
//    mangled_ppc("?havok_shape_cache_enabled@@YA_NXZ");
//};

//private: struct structure_bsp const * c_environment_surface_shape::global_structure_bsp_get(void) const
//{
//    mangled_ppc("?global_structure_bsp_get@c_environment_surface_shape@@ABAPBUstructure_bsp@@XZ");
//};

//private: static struct structure_bsp const * c_environment_surface_shape::global_structure_bsp_get(long, long)
//{
//    mangled_ppc("?global_structure_bsp_get@c_environment_surface_shape@@CAPBUstructure_bsp@@JJ@Z");
//};

//private: struct structure_instanced_geometry_definition const * c_environment_surface_shape::global_instance_geometry_definition_get(long) const
//{
//    mangled_ppc("?global_instance_geometry_definition_get@c_environment_surface_shape@@ABAPBUstructure_instanced_geometry_definition@@J@Z");
//};

//private: static struct structure_instanced_geometry_definition const * c_environment_surface_shape::global_instance_geometry_definition_get(long, long, long)
//{
//    mangled_ppc("?global_instance_geometry_definition_get@c_environment_surface_shape@@CAPBUstructure_instanced_geometry_definition@@JJJ@Z");
//};

//public: c_decomposed_poop_shape::c_decomposed_poop_shape(struct structure_instanced_geometry_definition const *, float)
//{
//    mangled_ppc("??0c_decomposed_poop_shape@@QAA@PBUstructure_instanced_geometry_definition@@M@Z");
//};

//merged_8345FFD8
//{
//    mangled_ppc("merged_8345FFD8");
//};

//public: virtual c_decomposed_poop_shape::~c_decomposed_poop_shape(void)
//{
//    mangled_ppc("??1c_decomposed_poop_shape@@UAA@XZ");
//};

//public: c_decomposed_poop_shape::c_decomposed_poop_shape(class hkFinishLoadedObjectFlag, struct structure_instanced_geometry_definition const *)
//{
//    mangled_ppc("??0c_decomposed_poop_shape@@QAA@VhkFinishLoadedObjectFlag@@PBUstructure_instanced_geometry_definition@@@Z");
//};

//public: virtual void c_decomposed_poop_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_decomposed_poop_shape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual int c_decomposed_poop_shape::getNumChildShapes(void) const
//{
//    mangled_ppc("?getNumChildShapes@c_decomposed_poop_shape@@UBAHXZ");
//};

//public: virtual unsigned int c_decomposed_poop_shape::getFirstKey(void) const
//{
//    mangled_ppc("?getFirstKey@c_decomposed_poop_shape@@UBAIXZ");
//};

//public: virtual unsigned int c_decomposed_poop_shape::getNextKey(unsigned int) const
//{
//    mangled_ppc("?getNextKey@c_decomposed_poop_shape@@UBAII@Z");
//};

//public: virtual bool c_decomposed_poop_shape::isValidKey(unsigned int) const
//{
//    mangled_ppc("?isValidKey@c_decomposed_poop_shape@@UBA_NI@Z");
//};

//public: virtual class hkpShape const * c_decomposed_poop_shape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@c_decomposed_poop_shape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//public: c_scaled_convex_vertices_shape::c_scaled_convex_vertices_shape(class hkpConvexVerticesShape const *, float)
//{
//    mangled_ppc("??0c_scaled_convex_vertices_shape@@QAA@PBVhkpConvexVerticesShape@@M@Z");
//};

//merged_83460378
//{
//    mangled_ppc("merged_83460378");
//};

//public: virtual c_scaled_convex_vertices_shape::~c_scaled_convex_vertices_shape(void)
//{
//    mangled_ppc("??1c_scaled_convex_vertices_shape@@UAA@XZ");
//};

//public: virtual void c_scaled_convex_vertices_shape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@c_scaled_convex_vertices_shape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual int c_scaled_convex_vertices_shape::getNumCollisionSpheresImpl(void) const
//{
//    mangled_ppc("?getNumCollisionSpheresImpl@c_scaled_convex_vertices_shape@@UBAHXZ");
//};

//public: virtual class hkSphere const * c_scaled_convex_vertices_shape::getCollisionSpheresImpl(class hkSphere *) const
//{
//    mangled_ppc("?getCollisionSpheresImpl@c_scaled_convex_vertices_shape@@UBAPBVhkSphere@@PAV2@@Z");
//};

//public: virtual class hkBool c_scaled_convex_vertices_shape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRayImpl@c_scaled_convex_vertices_shape@@UBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//public: virtual void c_scaled_convex_vertices_shape::getFirstVertex(class hkVector4&) const
//{
//    mangled_ppc("?getFirstVertex@c_scaled_convex_vertices_shape@@UBAXAAVhkVector4@@@Z");
//};

//public: virtual void c_scaled_convex_vertices_shape::getSupportingVertexImpl(class hkVector4const &, class hkpCdVertex &) const
//{
//    mangled_ppc("?getSupportingVertexImpl@c_scaled_convex_vertices_shape@@UBAXABVhkVector4@@AAVhkpCdVertex@@@Z");
//};

//public: virtual void c_scaled_convex_vertices_shape::convertVertexIdsToVerticesImpl(unsigned short const *, int, class hkpCdVertex *) const
//{
//    mangled_ppc("?convertVertexIdsToVerticesImpl@c_scaled_convex_vertices_shape@@UBAXPBGHPAVhkpCdVertex@@@Z");
//};

//public: class hkVector4* hkArray<class hkVector4, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAPAVhkVector4@@H@Z");
//};

//public: static class hkpUserShapeDisplayBuilder & hkSingleton<class hkpUserShapeDisplayBuilder>::getInstance(void)
//{
//    mangled_ppc("?getInstance@?$hkSingleton@VhkpUserShapeDisplayBuilder@@@@SAAAVhkpUserShapeDisplayBuilder@@XZ");
//};

//public: struct hkGeometry::Triangle * hkArray<struct hkGeometry::Triangle, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@UTriangle@hkGeometry@@UhkContainerHeapAllocator@@@@QAAPAUTriangle@hkGeometry@@H@Z");
//};

//public: struct hkGeometry::Triangle & hkArrayBase<struct hkGeometry::Triangle>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UTriangle@hkGeometry@@@@QAAAAUTriangle@hkGeometry@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometry::Triangle>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UTriangle@hkGeometry@@@@QBAHXZ");
//};

//public: struct hkGeometry::Triangle * hkArrayBase<struct hkGeometry::Triangle>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@UTriangle@hkGeometry@@@@QAAPAUTriangle@hkGeometry@@AAVhkMemoryAllocator@@H@Z");
//};

//public: class hkVector4* hkArrayBase<class hkVector4>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@VhkVector4@@@@QAAPAVhkVector4@@AAVhkMemoryAllocator@@H@Z");
//};

//private: void c_collision_surface_shape::construct<struct s_small_bsp_types>(struct collision_bsp const *, long, struct real_matrix4x3const *, float, enum e_soft_surface_sink_class)
//{
//    mangled_ppc("??$construct@Us_small_bsp_types@@@c_collision_surface_shape@@AAAXPBUcollision_bsp@@JPBUreal_matrix4x3@@MW4e_soft_surface_sink_class@@@Z");
//};

//private: void c_collision_surface_shape::construct<struct s_large_bsp_types>(struct large_collision_bsp const *, long, struct real_matrix4x3const *, float, enum e_soft_surface_sink_class)
//{
//    mangled_ppc("??$construct@Us_large_bsp_types@@@c_collision_surface_shape@@AAAXPBUlarge_collision_bsp@@JPBUreal_matrix4x3@@MW4e_soft_surface_sink_class@@@Z");
//};

//public: void hkArrayBase<unsigned int>::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@I@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkGeometry::Triangle>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UTriangle@hkGeometry@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<struct hkGeometry::Triangle>(struct hkGeometry::Triangle *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UTriangle@hkGeometry@@@hkArrayUtil@@SAXPAUTriangle@hkGeometry@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkVector4>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<class hkVector4>(class hkVector4*, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@VhkVector4@@@hkArrayUtil@@SAXPAVhkVector4@@HU?$hkTraitBool@$00@@@Z");
//};

//void hkMemUtil::memCpy<4>(void *, void const *, int)
//{
//    mangled_ppc("??$memCpy@$03@hkMemUtil@@YAXPAXPBXH@Z");
//};

//public: int hkArrayBase<struct hkGeometry::Triangle>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UTriangle@hkGeometry@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkVector4>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkVector4@@@@QBAHXZ");
//};

//[thunk]: public: virtual void * c_collision_geometry_shape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_collision_geometry_shape@@WBA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_decomposed_poop_shape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_decomposed_poop_shape@@WBA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_environment_surface_shape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_environment_surface_shape@@WBA@AAPAXI@Z");
//};

//int XMVector3GreaterOrEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3GreaterOrEqual@@YAHU__vector4@@0@Z");
//};

//unsigned int XMVector3GreaterOrEqualR(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3GreaterOrEqualR@@YAIU__vector4@@0@Z");
//};

//public: int hkVector4Comparison::getMask(void) const
//{
//    mangled_ppc("?getMask@hkVector4Comparison@@QBAHXZ");
//};

//public: void hkVector4::setInt24W(int)
//{
//    mangled_ppc("?setInt24W@hkVector4@@QAAXH@Z");
//};

//public: int hkVector4::getInt24W(void) const
//{
//    mangled_ppc("?getInt24W@hkVector4@@QBAHXZ");
//};

//public: class hkVector4Comparison hkVector4::compareEqual4(class hkVector4const &) const
//{
//    mangled_ppc("?compareEqual4@hkVector4@@QBA?AVhkVector4Comparison@@ABV1@@Z");
//};

//public: void hkVector4::setW(class hkVector4const &)
//{
//    mangled_ppc("?setW@hkVector4@@QAAXABV1@@Z");
//};

//public: void hkVector4::operator=(struct __vector4const &)
//{
//    mangled_ppc("??4hkVector4@@QAAXABU__vector4@@@Z");
//};

//public: void hkAabb::includeAabb(class hkAabb const &)
//{
//    mangled_ppc("?includeAabb@hkAabb@@QAAXABV1@@Z");
//};

//public: void hkAabb::setEmpty(void)
//{
//    mangled_ppc("?setEmpty@hkAabb@@QAAXXZ");
//};

//public: class hkBool hkpShape::castRay(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRay@hkpShape@@QBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//public: int hkpSphereRepShape::getNumCollisionSpheres(void) const
//{
//    mangled_ppc("?getNumCollisionSpheres@hkpSphereRepShape@@QBAHXZ");
//};

//public: class hkSphere const * hkpSphereRepShape::getCollisionSpheres(class hkSphere *) const
//{
//    mangled_ppc("?getCollisionSpheres@hkpSphereRepShape@@QBAPBVhkSphere@@PAV2@@Z");
//};

//public: void hkpConvexShape::getSupportingVertex(class hkVector4const &, class hkpCdVertex &) const
//{
//    mangled_ppc("?getSupportingVertex@hkpConvexShape@@QBAXABVhkVector4@@AAVhkpCdVertex@@@Z");
//};

//public: hkpShapeCollection::hkpShapeCollection(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpShapeCollection@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//merged_83461C10
//{
//    mangled_ppc("merged_83461C10");
//};

//public: void hkSphere::setRadius(float)
//{
//    mangled_ppc("?setRadius@hkSphere@@QAAXM@Z");
//};

//public: class hkVector4& hkSphere::getPositionAndRadius(void)
//{
//    mangled_ppc("?getPositionAndRadius@hkSphere@@QAAAAVhkVector4@@XZ");
//};

//public: void hkSphere::setPosition(class hkVector4const &)
//{
//    mangled_ppc("?setPosition@hkSphere@@QAAXABVhkVector4@@@Z");
//};

//public: void hkVector4::setXYZ(class hkVector4const &)
//{
//    mangled_ppc("?setXYZ@hkVector4@@QAAXABV1@@Z");
//};

//public: static void * hkpTransformShape::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpTransformShape@@SAPAXIPAX@Z");
//};

//public: hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>::hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4CollectionType@hkpShapeCollection@@E@@QAA@XZ");
//};

//public: void hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>::operator=(enum hkpShapeCollection::CollectionType)
//{
//    mangled_ppc("??4?$hkEnum@W4CollectionType@hkpShapeCollection@@E@@QAAXW4CollectionType@hkpShapeCollection@@@Z");
//};

//[thunk]: public: virtual void * hkpShapeCollection::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpShapeCollection@@WBA@AAPAXI@Z");
//};

//public: c_defualt_soft_surfaces_definition::c_defualt_soft_surfaces_definition(void)
//{
//    mangled_ppc("??0c_defualt_soft_surfaces_definition@@QAA@XZ");
//};

//void g_havok_shape_useless_time_watch::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_havok_shape_useless_time_watch@@YAXXZ");
//};

