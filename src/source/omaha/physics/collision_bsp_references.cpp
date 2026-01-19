/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_collision_bsp_reference::c_collision_bsp_reference(void);
// public: c_collision_bsp_reference::c_collision_bsp_reference(struct structure_bsp const *);
// public: bool c_structure_bsp_resource_interface::are_resources_valid(void) const;
// public: c_collision_bsp_reference::c_collision_bsp_reference(struct structure_bsp const *, long, enum c_collision_bsp_reference::e_collision_bsp_reference_type);
// public: c_collision_bsp_reference::c_collision_bsp_reference(struct s_structure_bsp_resources const *);
// public: c_collision_bsp_reference::c_collision_bsp_reference(struct s_structure_bsp_resources const *, long, enum c_collision_bsp_reference::e_collision_bsp_reference_type);
// public: c_collision_bsp_reference::c_collision_bsp_reference(struct collision_model_bsp const *);
// public: long c_collision_bsp_reference::get_leaf_count(void) const;
// public: long c_collision_bsp_reference::get_bsp2d_reference_count(void) const;
// public: long c_collision_bsp_reference::get_bsp2d_node_count(void) const;
// public: class c_bsp3d_reference c_collision_bsp_reference::get_bsp3d_reference(void) const;
// public: long c_collision_bsp_reference::get_surface_count(void) const;
// public: long c_collision_bsp_reference::get_vertex_count(void) const;
// public: long c_collision_bsp_reference::get_edge_count(void) const;
// public: void c_collision_bsp_reference::invalidate(void);
// public: bool c_collision_bsp_reference::valid(void) const;
// public: struct collision_bsp const * c_collision_bsp_reference::get_small_bsp(void) const;
// public: struct large_collision_bsp const * c_collision_bsp_reference::get_large_bsp(void) const;
// public: bool c_collision_bsp_reference::is_small(void) const;
// private: void c_collision_bsp_reference::initialize(struct s_structure_bsp_resources const *);
// private: void c_collision_bsp_reference::initialize(struct s_structure_bsp_resources const *, long, enum c_collision_bsp_reference::e_collision_bsp_reference_type);
// public: c_bsp3d_reference::c_bsp3d_reference(void);
// public: c_bsp3d_reference::c_bsp3d_reference(struct bsp3d const *, struct large_bsp3d const *);
// public: long c_bsp3d_reference::get_plane_count(void) const;
// public: struct plane3d const * c_bsp3d_reference::get_plane(long) const;
// public: struct plane3d const * c_bsp3d_reference::get_plane_range(long, long) const;
// public: long c_bsp3d_reference::get_node_count(void) const;
// public: void c_bsp3d_reference::get_node(long, struct large_bsp3d_node *) const;
// public: long bsp3d_node::get_child_index(bool) const;
// public: static long s_large_bsp3d_types::bsp3d_child_index_from_node_index(long);
// public: static long s_large_bsp3d_types::bsp3d_child_index_from_leaf_index(long);
// public: static bool s_small_bsp3d_types::bsp3d_child_index_is_leaf(long);
// public: static long s_small_bsp3d_types::bsp3d_child_index_is_node(long);
// public: static long s_small_bsp3d_types::bsp3d_leaf_index_from_child_index(long);
// public: static long s_small_bsp3d_types::bsp3d_node_index_from_child_index(long);
// public: long c_bsp3d_reference::get_super_node_count(void) const;
// public: struct s_bsp3d_kd_super_node const * c_bsp3d_reference::get_super_node(long) const;
// public: static struct s_bsp3d_kd_super_node const * s_large_bsp3d_types::collision_bsp_get_bsp3d_super_node(struct large_bsp3d const *, long);
// public: static struct s_bsp3d_kd_super_node const * s_small_bsp3d_types::collision_bsp_get_bsp3d_super_node(struct bsp3d const *, long);
// public: void c_bsp3d_reference::invalidate(void);
// public: bool c_bsp3d_reference::valid(void) const;
// public: struct bsp3d const * c_bsp3d_reference::get_small_bsp(void) const;
// public: struct large_bsp3d const * c_bsp3d_reference::get_large_bsp(void) const;
// private: bool c_bsp3d_reference::is_small(void) const;

//public: c_collision_bsp_reference::c_collision_bsp_reference(void)
//{
//    mangled_ppc("??0c_collision_bsp_reference@@QAA@XZ");
//};

//public: c_collision_bsp_reference::c_collision_bsp_reference(struct structure_bsp const *)
//{
//    mangled_ppc("??0c_collision_bsp_reference@@QAA@PBUstructure_bsp@@@Z");
//};

//public: bool c_structure_bsp_resource_interface::are_resources_valid(void) const
//{
//    mangled_ppc("?are_resources_valid@c_structure_bsp_resource_interface@@QBA_NXZ");
//};

//public: c_collision_bsp_reference::c_collision_bsp_reference(struct structure_bsp const *, long, enum c_collision_bsp_reference::e_collision_bsp_reference_type)
//{
//    mangled_ppc("??0c_collision_bsp_reference@@QAA@PBUstructure_bsp@@JW4e_collision_bsp_reference_type@0@@Z");
//};

//public: c_collision_bsp_reference::c_collision_bsp_reference(struct s_structure_bsp_resources const *)
//{
//    mangled_ppc("??0c_collision_bsp_reference@@QAA@PBUs_structure_bsp_resources@@@Z");
//};

//public: c_collision_bsp_reference::c_collision_bsp_reference(struct s_structure_bsp_resources const *, long, enum c_collision_bsp_reference::e_collision_bsp_reference_type)
//{
//    mangled_ppc("??0c_collision_bsp_reference@@QAA@PBUs_structure_bsp_resources@@JW4e_collision_bsp_reference_type@0@@Z");
//};

//public: c_collision_bsp_reference::c_collision_bsp_reference(struct collision_model_bsp const *)
//{
//    mangled_ppc("??0c_collision_bsp_reference@@QAA@PBUcollision_model_bsp@@@Z");
//};

//public: long c_collision_bsp_reference::get_leaf_count(void) const
//{
//    mangled_ppc("?get_leaf_count@c_collision_bsp_reference@@QBAJXZ");
//};

//public: long c_collision_bsp_reference::get_bsp2d_reference_count(void) const
//{
//    mangled_ppc("?get_bsp2d_reference_count@c_collision_bsp_reference@@QBAJXZ");
//};

//public: long c_collision_bsp_reference::get_bsp2d_node_count(void) const
//{
//    mangled_ppc("?get_bsp2d_node_count@c_collision_bsp_reference@@QBAJXZ");
//};

//public: class c_bsp3d_reference c_collision_bsp_reference::get_bsp3d_reference(void) const
//{
//    mangled_ppc("?get_bsp3d_reference@c_collision_bsp_reference@@QBA?AVc_bsp3d_reference@@XZ");
//};

//public: long c_collision_bsp_reference::get_surface_count(void) const
//{
//    mangled_ppc("?get_surface_count@c_collision_bsp_reference@@QBAJXZ");
//};

//public: long c_collision_bsp_reference::get_vertex_count(void) const
//{
//    mangled_ppc("?get_vertex_count@c_collision_bsp_reference@@QBAJXZ");
//};

//public: long c_collision_bsp_reference::get_edge_count(void) const
//{
//    mangled_ppc("?get_edge_count@c_collision_bsp_reference@@QBAJXZ");
//};

//public: void c_collision_bsp_reference::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_collision_bsp_reference@@QAAXXZ");
//};

//public: bool c_collision_bsp_reference::valid(void) const
//{
//    mangled_ppc("?valid@c_collision_bsp_reference@@QBA_NXZ");
//};

//public: struct collision_bsp const * c_collision_bsp_reference::get_small_bsp(void) const
//{
//    mangled_ppc("?get_small_bsp@c_collision_bsp_reference@@QBAPBUcollision_bsp@@XZ");
//};

//public: struct large_collision_bsp const * c_collision_bsp_reference::get_large_bsp(void) const
//{
//    mangled_ppc("?get_large_bsp@c_collision_bsp_reference@@QBAPBUlarge_collision_bsp@@XZ");
//};

//public: bool c_collision_bsp_reference::is_small(void) const
//{
//    mangled_ppc("?is_small@c_collision_bsp_reference@@QBA_NXZ");
//};

//private: void c_collision_bsp_reference::initialize(struct s_structure_bsp_resources const *)
//{
//    mangled_ppc("?initialize@c_collision_bsp_reference@@AAAXPBUs_structure_bsp_resources@@@Z");
//};

//private: void c_collision_bsp_reference::initialize(struct s_structure_bsp_resources const *, long, enum c_collision_bsp_reference::e_collision_bsp_reference_type)
//{
//    mangled_ppc("?initialize@c_collision_bsp_reference@@AAAXPBUs_structure_bsp_resources@@JW4e_collision_bsp_reference_type@1@@Z");
//};

//public: c_bsp3d_reference::c_bsp3d_reference(void)
//{
//    mangled_ppc("??0c_bsp3d_reference@@QAA@XZ");
//};

//public: c_bsp3d_reference::c_bsp3d_reference(struct bsp3d const *, struct large_bsp3d const *)
//{
//    mangled_ppc("??0c_bsp3d_reference@@QAA@PBUbsp3d@@PBUlarge_bsp3d@@@Z");
//};

//public: long c_bsp3d_reference::get_plane_count(void) const
//{
//    mangled_ppc("?get_plane_count@c_bsp3d_reference@@QBAJXZ");
//};

//public: struct plane3d const * c_bsp3d_reference::get_plane(long) const
//{
//    mangled_ppc("?get_plane@c_bsp3d_reference@@QBAPBUplane3d@@J@Z");
//};

//public: struct plane3d const * c_bsp3d_reference::get_plane_range(long, long) const
//{
//    mangled_ppc("?get_plane_range@c_bsp3d_reference@@QBAPBUplane3d@@JJ@Z");
//};

//public: long c_bsp3d_reference::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_bsp3d_reference@@QBAJXZ");
//};

//public: void c_bsp3d_reference::get_node(long, struct large_bsp3d_node *) const
//{
//    mangled_ppc("?get_node@c_bsp3d_reference@@QBAXJPAUlarge_bsp3d_node@@@Z");
//};

//public: long bsp3d_node::get_child_index(bool) const
//{
//    mangled_ppc("?get_child_index@bsp3d_node@@QBAJ_N@Z");
//};

//public: static long s_large_bsp3d_types::bsp3d_child_index_from_node_index(long)
//{
//    mangled_ppc("?bsp3d_child_index_from_node_index@s_large_bsp3d_types@@SAJJ@Z");
//};

//public: static long s_large_bsp3d_types::bsp3d_child_index_from_leaf_index(long)
//{
//    mangled_ppc("?bsp3d_child_index_from_leaf_index@s_large_bsp3d_types@@SAJJ@Z");
//};

//public: static bool s_small_bsp3d_types::bsp3d_child_index_is_leaf(long)
//{
//    mangled_ppc("?bsp3d_child_index_is_leaf@s_small_bsp3d_types@@SA_NJ@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_child_index_is_node(long)
//{
//    mangled_ppc("?bsp3d_child_index_is_node@s_small_bsp3d_types@@SAJJ@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_leaf_index_from_child_index(long)
//{
//    mangled_ppc("?bsp3d_leaf_index_from_child_index@s_small_bsp3d_types@@SAJJ@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_node_index_from_child_index(long)
//{
//    mangled_ppc("?bsp3d_node_index_from_child_index@s_small_bsp3d_types@@SAJJ@Z");
//};

//public: long c_bsp3d_reference::get_super_node_count(void) const
//{
//    mangled_ppc("?get_super_node_count@c_bsp3d_reference@@QBAJXZ");
//};

//public: struct s_bsp3d_kd_super_node const * c_bsp3d_reference::get_super_node(long) const
//{
//    mangled_ppc("?get_super_node@c_bsp3d_reference@@QBAPBUs_bsp3d_kd_super_node@@J@Z");
//};

//public: static struct s_bsp3d_kd_super_node const * s_large_bsp3d_types::collision_bsp_get_bsp3d_super_node(struct large_bsp3d const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp3d_super_node@s_large_bsp3d_types@@SAPBUs_bsp3d_kd_super_node@@PBUlarge_bsp3d@@J@Z");
//};

//public: static struct s_bsp3d_kd_super_node const * s_small_bsp3d_types::collision_bsp_get_bsp3d_super_node(struct bsp3d const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp3d_super_node@s_small_bsp3d_types@@SAPBUs_bsp3d_kd_super_node@@PBUbsp3d@@J@Z");
//};

//public: void c_bsp3d_reference::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_bsp3d_reference@@QAAXXZ");
//};

//public: bool c_bsp3d_reference::valid(void) const
//{
//    mangled_ppc("?valid@c_bsp3d_reference@@QBA_NXZ");
//};

//public: struct bsp3d const * c_bsp3d_reference::get_small_bsp(void) const
//{
//    mangled_ppc("?get_small_bsp@c_bsp3d_reference@@QBAPBUbsp3d@@XZ");
//};

//public: struct large_bsp3d const * c_bsp3d_reference::get_large_bsp(void) const
//{
//    mangled_ppc("?get_large_bsp@c_bsp3d_reference@@QBAPBUlarge_bsp3d@@XZ");
//};

//private: bool c_bsp3d_reference::is_small(void) const
//{
//    mangled_ppc("?is_small@c_bsp3d_reference@@ABA_NXZ");
//};

