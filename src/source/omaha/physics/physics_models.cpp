/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool debug_objects_physics_models_render_polyhedron_points; // "?debug_objects_physics_models_render_polyhedron_points@@3_NA"

// bool physics_model_instance_new(struct s_physics_model_instance *, long);
// public: char s_physics_model_instance::get_region_permutation_index(long) const;
// public: void s_physics_model_instance::get_node_matrix(long, struct real_matrix4x3*) const;
// void render_debug_physics_model(struct s_physics_model_instance const *, union argb_color const *);
// void render_debug_physics_shape(class hkpShape const *, struct real_matrix4x3const *, union argb_color const *);
// void render_debug_convex_vertices_shape(class hkpConvexVerticesShape const *, struct real_matrix4x3const *, union argb_color const *, bool);
// public: class hkVector4const & hkArrayBase<class hkVector4>::operator[](int) const;
// public: struct hkpConvexVerticesShape::FourVectors const & hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::operator[](int) const;
// public: float hkSimdReal::operator float(void) const;
// public: void hkVector4::setSub4(class hkVector4const &, class hkVector4const &);
// public: class hkSimdReal hkVector4::length3(void) const;
// public: hkSimdReal::hkSimdReal(void);
// public: struct __vector4& hkSimdReal::getQuad(void);
// public: class hkSimdReal hkVector4::lengthInverse3(void) const;
// struct __vector4 hkMath::quadReciprocalSquareRootTwoIter(struct __vector4);
// public: float const & hkVector4::operator()(int) const;
// public: static class hkTransform const & hkTransform::getIdentity(void);
// public: class hkVector4const & hkpBoxShape::getHalfExtents(void) const;
// public: class hkpShape const * hkpBvShape::getBoundingVolumeShape(void) const;
// public: class hkVector4const & hkpTriangleShape::getVertex(int) const;
// public: class hkVector4const * hkpMultiSphereShape::getSpheres(void) const;
// public: int hkpMultiSphereShape::getNumSpheres(void) const;

//bool physics_model_instance_new(struct s_physics_model_instance *, long)
//{
//    mangled_ppc("?physics_model_instance_new@@YA_NPAUs_physics_model_instance@@J@Z");
//};

//public: char s_physics_model_instance::get_region_permutation_index(long) const
//{
//    mangled_ppc("?get_region_permutation_index@s_physics_model_instance@@QBADJ@Z");
//};

//public: void s_physics_model_instance::get_node_matrix(long, struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_node_matrix@s_physics_model_instance@@QBAXJPAUreal_matrix4x3@@@Z");
//};

//void render_debug_physics_model(struct s_physics_model_instance const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_physics_model@@YAXPBUs_physics_model_instance@@PBTargb_color@@@Z");
//};

//void render_debug_physics_shape(class hkpShape const *, struct real_matrix4x3const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_physics_shape@@YAXPBVhkpShape@@PBUreal_matrix4x3@@PBTargb_color@@@Z");
//};

//void render_debug_convex_vertices_shape(class hkpConvexVerticesShape const *, struct real_matrix4x3const *, union argb_color const *, bool)
//{
//    mangled_ppc("?render_debug_convex_vertices_shape@@YAXPBVhkpConvexVerticesShape@@PBUreal_matrix4x3@@PBTargb_color@@_N@Z");
//};

//public: class hkVector4const & hkArrayBase<class hkVector4>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@VhkVector4@@@@QBAABVhkVector4@@H@Z");
//};

//public: struct hkpConvexVerticesShape::FourVectors const & hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QBAABUFourVectors@hkpConvexVerticesShape@@H@Z");
//};

//public: float hkSimdReal::operator float(void) const
//{
//    mangled_ppc("??BhkSimdReal@@QBAMXZ");
//};

//public: void hkVector4::setSub4(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setSub4@hkVector4@@QAAXABV1@0@Z");
//};

//public: class hkSimdReal hkVector4::length3(void) const
//{
//    mangled_ppc("?length3@hkVector4@@QBA?AVhkSimdReal@@XZ");
//};

//public: hkSimdReal::hkSimdReal(void)
//{
//    mangled_ppc("??0hkSimdReal@@QAA@XZ");
//};

//public: struct __vector4& hkSimdReal::getQuad(void)
//{
//    mangled_ppc("?getQuad@hkSimdReal@@QAAAAU__vector4@@XZ");
//};

//public: class hkSimdReal hkVector4::lengthInverse3(void) const
//{
//    mangled_ppc("?lengthInverse3@hkVector4@@QBA?AVhkSimdReal@@XZ");
//};

//struct __vector4 hkMath::quadReciprocalSquareRootTwoIter(struct __vector4)
//{
//    mangled_ppc("?quadReciprocalSquareRootTwoIter@hkMath@@YA?AU__vector4@@U2@@Z");
//};

//public: float const & hkVector4::operator()(int) const
//{
//    mangled_ppc("??RhkVector4@@QBAABMH@Z");
//};

//public: static class hkTransform const & hkTransform::getIdentity(void)
//{
//    mangled_ppc("?getIdentity@hkTransform@@SAABV1@XZ");
//};

//public: class hkVector4const & hkpBoxShape::getHalfExtents(void) const
//{
//    mangled_ppc("?getHalfExtents@hkpBoxShape@@QBAABVhkVector4@@XZ");
//};

//public: class hkpShape const * hkpBvShape::getBoundingVolumeShape(void) const
//{
//    mangled_ppc("?getBoundingVolumeShape@hkpBvShape@@QBAPBVhkpShape@@XZ");
//};

//public: class hkVector4const & hkpTriangleShape::getVertex(int) const
//{
//    mangled_ppc("?getVertex@hkpTriangleShape@@QBAABVhkVector4@@H@Z");
//};

//public: class hkVector4const * hkpMultiSphereShape::getSpheres(void) const
//{
//    mangled_ppc("?getSpheres@hkpMultiSphereShape@@QBAPBVhkVector4@@XZ");
//};

//public: int hkpMultiSphereShape::getNumSpheres(void) const
//{
//    mangled_ppc("?getNumSpheres@hkpMultiSphereShape@@QBAHXZ");
//};

