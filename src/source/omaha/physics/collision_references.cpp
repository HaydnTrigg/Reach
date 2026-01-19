/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_collision_surface_reference::c_collision_surface_reference(void);
// public: c_collision_surface_reference::c_collision_surface_reference(class c_collision_bsp_reference, long);
// public: struct plane3d const * c_collision_surface_reference::get_plane(bool *) const;
// public: struct plane3d const * c_collision_surface_reference::get_plane(struct plane3d *) const;
// public: bool c_collision_surface_reference::is_plane_negated(void) const;
// public: long c_collision_surface_reference::get_plane_index(void) const;
// public: long c_collision_surface_reference::get_breakable_surface_index(void) const;
// public: long c_collision_surface_reference::get_breakable_surface_set_index(void) const;
// public: long c_collision_surface_reference::get_material_index(void) const;
// public: unsigned char c_collision_surface_reference::get_flags(void) const;
// public: unsigned char c_collision_surface_reference::get_best_plane_calculation_vertex_index(void) const;
// public: long c_collision_surface_reference::get_first_edge_index(void) const;
// public: long c_collision_surface_reference::get_surface_index(void) const;
// public: void c_collision_surface_reference::invalidate(void);
// public: bool c_collision_surface_reference::valid(void) const;
// public: void c_collision_surface_reference::set_best_plane_calculation_vertex_index(long);
// public: c_collision_vertex_reference::c_collision_vertex_reference(void);
// public: c_collision_vertex_reference::c_collision_vertex_reference(class c_collision_bsp_reference, long);
// public: union real_point3d const * c_collision_vertex_reference::get_position(void) const;
// public: long c_collision_vertex_reference::get_first_edge_index(void) const;
// public: short c_collision_vertex_reference::get_sink(void) const;
// public: long c_collision_vertex_reference::get_vertex_index(void) const;
// public: void c_collision_vertex_reference::invalidate(void);
// public: bool c_collision_vertex_reference::valid(void) const;
// public: c_collision_edge_reference::c_collision_edge_reference(void);
// public: c_collision_edge_reference::c_collision_edge_reference(class c_collision_bsp_reference, long);
// public: long c_collision_edge_reference::get_vertex_index(long) const;
// public: long c_collision_edge_reference::get_edge_index(long) const;
// public: long c_collision_edge_reference::get_surface_index(long) const;
// public: long c_collision_edge_reference::get_edge_index(void) const;
// public: void c_collision_edge_reference::invalidate(void);
// public: bool c_collision_edge_reference::valid(void) const;
// struct plane3d const * surface_get_plane<struct s_small_bsp_types>(struct collision_bsp const *, long, bool *, long *, struct plane3d *);
// struct plane3d const * surface_get_plane<struct s_large_bsp_types>(struct large_collision_bsp const *, long, bool *, long *, struct plane3d *);

//public: c_collision_surface_reference::c_collision_surface_reference(void)
//{
//    mangled_ppc("??0c_collision_surface_reference@@QAA@XZ");
//};

//public: c_collision_surface_reference::c_collision_surface_reference(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("??0c_collision_surface_reference@@QAA@Vc_collision_bsp_reference@@J@Z");
//};

//public: struct plane3d const * c_collision_surface_reference::get_plane(bool *) const
//{
//    mangled_ppc("?get_plane@c_collision_surface_reference@@QBAPBUplane3d@@PA_N@Z");
//};

//public: struct plane3d const * c_collision_surface_reference::get_plane(struct plane3d *) const
//{
//    mangled_ppc("?get_plane@c_collision_surface_reference@@QBAPBUplane3d@@PAU2@@Z");
//};

//public: bool c_collision_surface_reference::is_plane_negated(void) const
//{
//    mangled_ppc("?is_plane_negated@c_collision_surface_reference@@QBA_NXZ");
//};

//public: long c_collision_surface_reference::get_plane_index(void) const
//{
//    mangled_ppc("?get_plane_index@c_collision_surface_reference@@QBAJXZ");
//};

//public: long c_collision_surface_reference::get_breakable_surface_index(void) const
//{
//    mangled_ppc("?get_breakable_surface_index@c_collision_surface_reference@@QBAJXZ");
//};

//public: long c_collision_surface_reference::get_breakable_surface_set_index(void) const
//{
//    mangled_ppc("?get_breakable_surface_set_index@c_collision_surface_reference@@QBAJXZ");
//};

//public: long c_collision_surface_reference::get_material_index(void) const
//{
//    mangled_ppc("?get_material_index@c_collision_surface_reference@@QBAJXZ");
//};

//public: unsigned char c_collision_surface_reference::get_flags(void) const
//{
//    mangled_ppc("?get_flags@c_collision_surface_reference@@QBAEXZ");
//};

//public: unsigned char c_collision_surface_reference::get_best_plane_calculation_vertex_index(void) const
//{
//    mangled_ppc("?get_best_plane_calculation_vertex_index@c_collision_surface_reference@@QBAEXZ");
//};

//public: long c_collision_surface_reference::get_first_edge_index(void) const
//{
//    mangled_ppc("?get_first_edge_index@c_collision_surface_reference@@QBAJXZ");
//};

//public: long c_collision_surface_reference::get_surface_index(void) const
//{
//    mangled_ppc("?get_surface_index@c_collision_surface_reference@@QBAJXZ");
//};

//public: void c_collision_surface_reference::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_collision_surface_reference@@QAAXXZ");
//};

//public: bool c_collision_surface_reference::valid(void) const
//{
//    mangled_ppc("?valid@c_collision_surface_reference@@QBA_NXZ");
//};

//public: void c_collision_surface_reference::set_best_plane_calculation_vertex_index(long)
//{
//    mangled_ppc("?set_best_plane_calculation_vertex_index@c_collision_surface_reference@@QAAXJ@Z");
//};

//public: c_collision_vertex_reference::c_collision_vertex_reference(void)
//{
//    mangled_ppc("??0c_collision_vertex_reference@@QAA@XZ");
//};

//public: c_collision_vertex_reference::c_collision_vertex_reference(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("??0c_collision_vertex_reference@@QAA@Vc_collision_bsp_reference@@J@Z");
//};

//public: union real_point3d const * c_collision_vertex_reference::get_position(void) const
//{
//    mangled_ppc("?get_position@c_collision_vertex_reference@@QBAPBTreal_point3d@@XZ");
//};

//public: long c_collision_vertex_reference::get_first_edge_index(void) const
//{
//    mangled_ppc("?get_first_edge_index@c_collision_vertex_reference@@QBAJXZ");
//};

//public: short c_collision_vertex_reference::get_sink(void) const
//{
//    mangled_ppc("?get_sink@c_collision_vertex_reference@@QBAFXZ");
//};

//public: long c_collision_vertex_reference::get_vertex_index(void) const
//{
//    mangled_ppc("?get_vertex_index@c_collision_vertex_reference@@QBAJXZ");
//};

//public: void c_collision_vertex_reference::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_collision_vertex_reference@@QAAXXZ");
//};

//public: bool c_collision_vertex_reference::valid(void) const
//{
//    mangled_ppc("?valid@c_collision_vertex_reference@@QBA_NXZ");
//};

//public: c_collision_edge_reference::c_collision_edge_reference(void)
//{
//    mangled_ppc("??0c_collision_edge_reference@@QAA@XZ");
//};

//public: c_collision_edge_reference::c_collision_edge_reference(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("??0c_collision_edge_reference@@QAA@Vc_collision_bsp_reference@@J@Z");
//};

//public: long c_collision_edge_reference::get_vertex_index(long) const
//{
//    mangled_ppc("?get_vertex_index@c_collision_edge_reference@@QBAJJ@Z");
//};

//public: long c_collision_edge_reference::get_edge_index(long) const
//{
//    mangled_ppc("?get_edge_index@c_collision_edge_reference@@QBAJJ@Z");
//};

//public: long c_collision_edge_reference::get_surface_index(long) const
//{
//    mangled_ppc("?get_surface_index@c_collision_edge_reference@@QBAJJ@Z");
//};

//public: long c_collision_edge_reference::get_edge_index(void) const
//{
//    mangled_ppc("?get_edge_index@c_collision_edge_reference@@QBAJXZ");
//};

//public: void c_collision_edge_reference::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_collision_edge_reference@@QAAXXZ");
//};

//public: bool c_collision_edge_reference::valid(void) const
//{
//    mangled_ppc("?valid@c_collision_edge_reference@@QBA_NXZ");
//};

//struct plane3d const * surface_get_plane<struct s_small_bsp_types>(struct collision_bsp const *, long, bool *, long *, struct plane3d *)
//{
//    mangled_ppc("??$surface_get_plane@Us_small_bsp_types@@@@YAPBUplane3d@@PBUcollision_bsp@@JPA_NPAJPAU0@@Z");
//};

//struct plane3d const * surface_get_plane<struct s_large_bsp_types>(struct large_collision_bsp const *, long, bool *, long *, struct plane3d *)
//{
//    mangled_ppc("??$surface_get_plane@Us_large_bsp_types@@@@YAPBUplane3d@@PBUlarge_collision_bsp@@JPA_NPAJPAU0@@Z");
//};

