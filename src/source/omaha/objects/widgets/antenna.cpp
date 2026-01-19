/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool render_debug_antennas; // "?render_debug_antennas@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_antenna_data_allocator::*)(void *)> g_antenna_data_allocator; // "?g_antenna_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *antenna_data; // "?antenna_data@@3PAUs_data_array@@A"

// void __tls_set_g_antenna_data_allocator(void *);
// void antennas_initialize(void);
// void antennas_initialize_for_new_map(void);
// void antennas_dispose_from_old_map(void);
// void antennas_dispose(void);
// long antenna_new(long, long, struct real_matrix4x3*);
// void antenna_delete(long);
// void antenna_render_transparent(void const *, long, short, short);
// void antenna_get_sorting_position(long, union real_point3d *, struct s_location *, long *);
// void antennas_update(float);
// void antenna_update(struct antenna_datum *, struct antenna_definition const *, float);
// void antenna_update_attachment(struct antenna_datum *, struct antenna_definition const *, struct s_location *, union real_point3d *, union vector3d *);
// void get_vertex_scale_by_distance(struct antenna_definition const *, long, float, union vector2d *);
// void antenna_render_proper(struct antenna_datum *, struct antenna_definition const *);
// public: c_hermite::c_hermite(union real_point3d &, union real_point3d &, union vector3d &, union vector3d &);
// public: void c_hermite::evaluate(float, union real_point3d *);
// void antenna_get_hermite_vectors(struct antenna_datum *, union real_point3d *, union real_point3d *, union vector3d *, union vector3d *);
// void antenna_render_debug(long, long);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>(void);
// void g_antenna_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_antenna_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_antenna_data_allocator@@YAXPAX@Z");
//};

//void antennas_initialize(void)
//{
//    mangled_ppc("?antennas_initialize@@YAXXZ");
//};

//void antennas_initialize_for_new_map(void)
//{
//    mangled_ppc("?antennas_initialize_for_new_map@@YAXXZ");
//};

//void antennas_dispose_from_old_map(void)
//{
//    mangled_ppc("?antennas_dispose_from_old_map@@YAXXZ");
//};

//void antennas_dispose(void)
//{
//    mangled_ppc("?antennas_dispose@@YAXXZ");
//};

//long antenna_new(long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?antenna_new@@YAJJJPAUreal_matrix4x3@@@Z");
//};

//void antenna_delete(long)
//{
//    mangled_ppc("?antenna_delete@@YAXJ@Z");
//};

//void antenna_render_transparent(void const *, long, short, short)
//{
//    mangled_ppc("?antenna_render_transparent@@YAXPBXJFF@Z");
//};

//void antenna_get_sorting_position(long, union real_point3d *, struct s_location *, long *)
//{
//    mangled_ppc("?antenna_get_sorting_position@@YAXJPATreal_point3d@@PAUs_location@@PAJ@Z");
//};

//void antennas_update(float)
//{
//    mangled_ppc("?antennas_update@@YAXM@Z");
//};

//void antenna_update(struct antenna_datum *, struct antenna_definition const *, float)
//{
//    mangled_ppc("?antenna_update@@YAXPAUantenna_datum@@PBUantenna_definition@@M@Z");
//};

//void antenna_update_attachment(struct antenna_datum *, struct antenna_definition const *, struct s_location *, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?antenna_update_attachment@@YAXPAUantenna_datum@@PBUantenna_definition@@PAUs_location@@PATreal_point3d@@PATvector3d@@@Z");
//};

//void get_vertex_scale_by_distance(struct antenna_definition const *, long, float, union vector2d *)
//{
//    mangled_ppc("?get_vertex_scale_by_distance@@YAXPBUantenna_definition@@JMPATvector2d@@@Z");
//};

//void antenna_render_proper(struct antenna_datum *, struct antenna_definition const *)
//{
//    mangled_ppc("?antenna_render_proper@@YAXPAUantenna_datum@@PBUantenna_definition@@@Z");
//};

//public: c_hermite::c_hermite(union real_point3d &, union real_point3d &, union vector3d &, union vector3d &)
//{
//    mangled_ppc("??0c_hermite@@QAA@AATreal_point3d@@0AATvector3d@@1@Z");
//};

//public: void c_hermite::evaluate(float, union real_point3d *)
//{
//    mangled_ppc("?evaluate@c_hermite@@QAAXMPATreal_point3d@@@Z");
//};

//void antenna_get_hermite_vectors(struct antenna_datum *, union real_point3d *, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?antenna_get_hermite_vectors@@YAXPAUantenna_datum@@PATreal_point3d@@1PATvector3d@@2@Z");
//};

//void antenna_render_debug(long, long)
//{
//    mangled_ppc("?antenna_render_debug@@YAXJJ@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_antenna_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_antenna_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_antenna_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_antenna_data_allocator@@YAXXZ");
//};

