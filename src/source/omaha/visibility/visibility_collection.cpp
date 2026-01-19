/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<short, 255>::k_element_count; // "?k_element_count@?$s_static_array@F$0PP@@@2JB"
// bool visibility_enable_multithreading; // "?visibility_enable_multithreading@@3_NA"
// class c_job_signature visib_signature; // "?visib_signature@@3Vc_job_signature@@A"

// class c_visibility_collection * get_global_camera_collection(void);
// public: struct s_visibility_globals * c_visibility_globals_keeper::get(void);
// void visib_entrypoint(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, class c_job_handle, class c_jm_work_unit_handle);
// public: void c_visibility_collection::job_entry(void);
// public: hkMemoryRouter::~hkMemoryRouter(void);
// public: class c_visibility_collection * c_visibility_collection::compute(enum e_collection_type, long, struct visibility_projection const *, long, union real_point3d const *, float, struct s_cluster_reference, enum e_output_user_index, long, union real_point3d const *, float);
// public: bool c_visibility_collection::get_cluster_visible(long) const;
// long cluster_reference_packed_valid_bsp_index_get(long);
// long cluster_reference_packed_cluster_index_get(long);
// public: bool c_visibility_collection::get_bsp_visible(long) const;
// public: bool c_visibility_collection::get_bsp_portal_visible(long, long) const;
// public: short c_visibility_collection::get_region_cluster_index_from_cluster_index(struct s_cluster_reference const *) const;
// public: static void c_visibility_collection::initialize(void);
// public: void c_visibility_collection::set_input(struct s_visibility_input *);
// public: void c_visibility_globals_keeper::initialize(void);
// public: static void c_visibility_collection::dispose(void);
// private: enum e_collection_shape c_visibility_collection::prepare_collection_for_build(long, enum e_collection_type, struct visibility_projection const *, long, struct s_cluster_reference, union real_point3d const *, float, enum e_output_user_index, long);
// private: void c_visibility_collection::setup_projections_region(struct visibility_projection const *, long);
// private: void c_visibility_collection::setup_sphere_region(void);
// bool compare_region_cluster_indices(long, long, struct s_visibility_region const *);
// private: void c_visibility_collection::setup_pvs_region(struct visibility_projection const *, struct s_cluster_reference);
// private: void c_visibility_collection::region_collection_begin(void);
// private: static void c_visibility_collection::region_collection_end(void);
// private: bool c_visibility_collection::sphere_visible_through_portals(union real_point3d const *, float, short, bool *) const;
// public: static bool c_visibility_collection::object_visible_no_portals(long);
// public: static bool c_visibility_collection::sphere_visible_no_portals(union real_point3d const *, float, bool *);
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// public: static bool c_visibility_collection::camera_inside_instance_bounding_box(union real_point3d const *, float);
// public: float c_visibility_collection::bounding_sphere_compute_lod_distance(union real_point3d const *, float);
// public: static float c_visibility_collection::compute_alpha_fade_from_distance(float, float, float, float, float);
// public: static float c_visibility_collection::compute_alpha_fade_from_distance2(float, float, float, float, float);
// public: static float c_visibility_collection::compute_alpha_fade_from_two_distances(float, float, float, float);
// public: void s_static_bitarray<1024>::clear(void);
// public: bool s_static_bitarray<1024>::test(long) const;
// public: void s_static_array<char, 255>::set_all(char const &);
// public: short * s_static_array<short, 255>::get_elements(void);
// public: static long s_static_array<short, 255>::get_count(void);
// public: class s_static_bitarray<1024> & s_static_array<class s_static_bitarray<1024>, 16>::operator[]<long>(long);
// public: class s_static_array<char, 255> & s_static_array<class s_static_array<char, 255>, 16>::operator[]<char>(char);
// public: char & s_static_array<char, 255>::operator[]<unsigned char>(unsigned char);
// public: short & s_static_array<short, 255>::operator[]<long>(long);
// public: class s_static_array<char, 255> & s_static_array<class s_static_array<char, 255>, 16>::operator[]<long>(long);
// public: static bool s_static_array<class s_static_bitarray<1024>, 16>::valid<long>(long);
// public: static bool s_static_array<class s_static_array<char, 255>, 16>::valid<char>(char);
// public: static bool s_static_array<char, 255>::valid<unsigned char>(unsigned char);
// public: static bool s_static_array<short, 255>::valid<long>(long);
// public: static bool s_static_array<class s_static_array<char, 255>, 16>::valid<long>(long);
// void sphere_bounding_rectangle3d(union real_point3d const *, float, union real_rectangle3d *);
// public: hkStackMemory::~hkStackMemory(void);
// public: c_visibility_globals_keeper::c_visibility_globals_keeper(void);
// public: s_visibility_globals::s_visibility_globals(void);
// public: c_visibility_collection::c_visibility_collection(void);
// public: c_visibility_globals_keeper::~c_visibility_globals_keeper(void);
// public: s_visibility_globals::~s_visibility_globals(void);
// void g_visibility_globals_keeper::`dynamic atexit destructor'(void);
// void visib_signature::`dynamic atexit destructor'(void);

//class c_visibility_collection * get_global_camera_collection(void)
//{
//    mangled_ppc("?get_global_camera_collection@@YAPAVc_visibility_collection@@XZ");
//};

//public: struct s_visibility_globals * c_visibility_globals_keeper::get(void)
//{
//    mangled_ppc("?get@c_visibility_globals_keeper@@QAAPAUs_visibility_globals@@XZ");
//};

//void visib_entrypoint(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, class c_job_handle, class c_jm_work_unit_handle)
//{
//    mangled_ppc("?visib_entrypoint@@YAXKKKKKVc_job_handle@@Vc_jm_work_unit_handle@@@Z");
//};

//public: void c_visibility_collection::job_entry(void)
//{
//    mangled_ppc("?job_entry@c_visibility_collection@@QAAXXZ");
//};

//public: hkMemoryRouter::~hkMemoryRouter(void)
//{
//    mangled_ppc("??1hkMemoryRouter@@QAA@XZ");
//};

//public: class c_visibility_collection * c_visibility_collection::compute(enum e_collection_type, long, struct visibility_projection const *, long, union real_point3d const *, float, struct s_cluster_reference, enum e_output_user_index, long, union real_point3d const *, float)
//{
//    mangled_ppc("?compute@c_visibility_collection@@QAAPAV1@W4e_collection_type@@JPBUvisibility_projection@@JPBTreal_point3d@@MUs_cluster_reference@@W4e_output_user_index@@J2M@Z");
//};

//public: bool c_visibility_collection::get_cluster_visible(long) const
//{
//    mangled_ppc("?get_cluster_visible@c_visibility_collection@@QBA_NJ@Z");
//};

//long cluster_reference_packed_valid_bsp_index_get(long)
//{
//    mangled_ppc("?cluster_reference_packed_valid_bsp_index_get@@YAJJ@Z");
//};

//long cluster_reference_packed_cluster_index_get(long)
//{
//    mangled_ppc("?cluster_reference_packed_cluster_index_get@@YAJJ@Z");
//};

//public: bool c_visibility_collection::get_bsp_visible(long) const
//{
//    mangled_ppc("?get_bsp_visible@c_visibility_collection@@QBA_NJ@Z");
//};

//public: bool c_visibility_collection::get_bsp_portal_visible(long, long) const
//{
//    mangled_ppc("?get_bsp_portal_visible@c_visibility_collection@@QBA_NJJ@Z");
//};

//public: short c_visibility_collection::get_region_cluster_index_from_cluster_index(struct s_cluster_reference const *) const
//{
//    mangled_ppc("?get_region_cluster_index_from_cluster_index@c_visibility_collection@@QBAFPBUs_cluster_reference@@@Z");
//};

//public: static void c_visibility_collection::initialize(void)
//{
//    mangled_ppc("?initialize@c_visibility_collection@@SAXXZ");
//};

//public: void c_visibility_collection::set_input(struct s_visibility_input *)
//{
//    mangled_ppc("?set_input@c_visibility_collection@@QAAXPAUs_visibility_input@@@Z");
//};

//public: void c_visibility_globals_keeper::initialize(void)
//{
//    mangled_ppc("?initialize@c_visibility_globals_keeper@@QAAXXZ");
//};

//public: static void c_visibility_collection::dispose(void)
//{
//    mangled_ppc("?dispose@c_visibility_collection@@SAXXZ");
//};

//private: enum e_collection_shape c_visibility_collection::prepare_collection_for_build(long, enum e_collection_type, struct visibility_projection const *, long, struct s_cluster_reference, union real_point3d const *, float, enum e_output_user_index, long)
//{
//    mangled_ppc("?prepare_collection_for_build@c_visibility_collection@@AAA?AW4e_collection_shape@@JW4e_collection_type@@PBUvisibility_projection@@JUs_cluster_reference@@PBTreal_point3d@@MW4e_output_user_index@@J@Z");
//};

//private: void c_visibility_collection::setup_projections_region(struct visibility_projection const *, long)
//{
//    mangled_ppc("?setup_projections_region@c_visibility_collection@@AAAXPBUvisibility_projection@@J@Z");
//};

//private: void c_visibility_collection::setup_sphere_region(void)
//{
//    mangled_ppc("?setup_sphere_region@c_visibility_collection@@AAAXXZ");
//};

//bool compare_region_cluster_indices(long, long, struct s_visibility_region const *)
//{
//    mangled_ppc("?compare_region_cluster_indices@@YA_NJJPBUs_visibility_region@@@Z");
//};

//private: void c_visibility_collection::setup_pvs_region(struct visibility_projection const *, struct s_cluster_reference)
//{
//    mangled_ppc("?setup_pvs_region@c_visibility_collection@@AAAXPBUvisibility_projection@@Us_cluster_reference@@@Z");
//};

//private: void c_visibility_collection::region_collection_begin(void)
//{
//    mangled_ppc("?region_collection_begin@c_visibility_collection@@AAAXXZ");
//};

//private: static void c_visibility_collection::region_collection_end(void)
//{
//    mangled_ppc("?region_collection_end@c_visibility_collection@@CAXXZ");
//};

//private: bool c_visibility_collection::sphere_visible_through_portals(union real_point3d const *, float, short, bool *) const
//{
//    mangled_ppc("?sphere_visible_through_portals@c_visibility_collection@@ABA_NPBTreal_point3d@@MFPA_N@Z");
//};

//public: static bool c_visibility_collection::object_visible_no_portals(long)
//{
//    mangled_ppc("?object_visible_no_portals@c_visibility_collection@@SA_NJ@Z");
//};

//public: static bool c_visibility_collection::sphere_visible_no_portals(union real_point3d const *, float, bool *)
//{
//    mangled_ppc("?sphere_visible_no_portals@c_visibility_collection@@SA_NPBTreal_point3d@@MPA_N@Z");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//public: static bool c_visibility_collection::camera_inside_instance_bounding_box(union real_point3d const *, float)
//{
//    mangled_ppc("?camera_inside_instance_bounding_box@c_visibility_collection@@SA_NPBTreal_point3d@@M@Z");
//};

//public: float c_visibility_collection::bounding_sphere_compute_lod_distance(union real_point3d const *, float)
//{
//    mangled_ppc("?bounding_sphere_compute_lod_distance@c_visibility_collection@@QAAMPBTreal_point3d@@M@Z");
//};

//public: static float c_visibility_collection::compute_alpha_fade_from_distance(float, float, float, float, float)
//{
//    mangled_ppc("?compute_alpha_fade_from_distance@c_visibility_collection@@SAMMMMMM@Z");
//};

//public: static float c_visibility_collection::compute_alpha_fade_from_distance2(float, float, float, float, float)
//{
//    mangled_ppc("?compute_alpha_fade_from_distance2@c_visibility_collection@@SAMMMMMM@Z");
//};

//public: static float c_visibility_collection::compute_alpha_fade_from_two_distances(float, float, float, float)
//{
//    mangled_ppc("?compute_alpha_fade_from_two_distances@c_visibility_collection@@SAMMMMM@Z");
//};

//public: void s_static_bitarray<1024>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_bitarray@$0EAA@@@QAAXXZ");
//};

//public: bool s_static_bitarray<1024>::test(long) const
//{
//    mangled_ppc("?test@?$s_static_bitarray@$0EAA@@@QBA_NJ@Z");
//};

//public: void s_static_array<char, 255>::set_all(char const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@D$0PP@@@QAAXABD@Z");
//};

//public: short * s_static_array<short, 255>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0PP@@@QAAPAFXZ");
//};

//public: static long s_static_array<short, 255>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@F$0PP@@@SAJXZ");
//};

//public: class s_static_bitarray<1024> & s_static_array<class s_static_bitarray<1024>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_bitarray@$0EAA@@@$0BA@@@QAAAAV?$s_static_bitarray@$0EAA@@@J@Z");
//};

//public: class s_static_array<char, 255> & s_static_array<class s_static_array<char, 255>, 16>::operator[]<char>(char)
//{
//    mangled_ppc("??$?AD@?$s_static_array@V?$s_static_array@D$0PP@@@$0BA@@@QAAAAV?$s_static_array@D$0PP@@@D@Z");
//};

//public: char & s_static_array<char, 255>::operator[]<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$?AE@?$s_static_array@D$0PP@@@QAAAADE@Z");
//};

//public: short & s_static_array<short, 255>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$0PP@@@QAAAAFJ@Z");
//};

//public: class s_static_array<char, 255> & s_static_array<class s_static_array<char, 255>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@D$0PP@@@$0BA@@@QAAAAV?$s_static_array@D$0PP@@@J@Z");
//};

//public: static bool s_static_array<class s_static_bitarray<1024>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$s_static_bitarray@$0EAA@@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class s_static_array<char, 255>, 16>::valid<char>(char)
//{
//    mangled_ppc("??$valid@D@?$s_static_array@V?$s_static_array@D$0PP@@@$0BA@@@SA_ND@Z");
//};

//public: static bool s_static_array<char, 255>::valid<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$valid@E@?$s_static_array@D$0PP@@@SA_NE@Z");
//};

//public: static bool s_static_array<short, 255>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$0PP@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class s_static_array<char, 255>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$s_static_array@D$0PP@@@$0BA@@@SA_NJ@Z");
//};

//void sphere_bounding_rectangle3d(union real_point3d const *, float, union real_rectangle3d *)
//{
//    mangled_ppc("?sphere_bounding_rectangle3d@@YAXPBTreal_point3d@@MPATreal_rectangle3d@@@Z");
//};

//public: hkStackMemory::~hkStackMemory(void)
//{
//    mangled_ppc("??1hkStackMemory@@QAA@XZ");
//};

//public: c_visibility_globals_keeper::c_visibility_globals_keeper(void)
//{
//    mangled_ppc("??0c_visibility_globals_keeper@@QAA@XZ");
//};

//public: s_visibility_globals::s_visibility_globals(void)
//{
//    mangled_ppc("??0s_visibility_globals@@QAA@XZ");
//};

//public: c_visibility_collection::c_visibility_collection(void)
//{
//    mangled_ppc("??0c_visibility_collection@@QAA@XZ");
//};

//public: c_visibility_globals_keeper::~c_visibility_globals_keeper(void)
//{
//    mangled_ppc("??1c_visibility_globals_keeper@@QAA@XZ");
//};

//public: s_visibility_globals::~s_visibility_globals(void)
//{
//    mangled_ppc("??1s_visibility_globals@@QAA@XZ");
//};

//void g_visibility_globals_keeper::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_visibility_globals_keeper@@YAXXZ");
//};

//void visib_signature::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fvisib_signature@@YAXXZ");
//};

