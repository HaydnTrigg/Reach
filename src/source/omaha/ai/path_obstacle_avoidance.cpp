/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_8378ACD8; // "except_record_8378ACD8"
// except_record_8378CA80; // "except_record_8378CA80"
// except_record_8378D708; // "except_record_8378D708"
// except_record_8378DDB0; // "except_record_8378DDB0"
// except_record_8378F930; // "except_record_8378F930"
// bool debug_obstacle_final_step; // "?debug_obstacle_final_step@@3_NA"
// bool debug_ignore_broken_surfaces; // "?debug_ignore_broken_surfaces@@3_NA"
// bool debug_obstacle_path_finishing; // "?debug_obstacle_path_finishing@@3_NA"
// bool debug_obstacle_path_projection_sign; // "?debug_obstacle_path_projection_sign@@3_NA"
// float debug_obstacle_path_radius; // "?debug_obstacle_path_radius@@3MA"
// short debug_obstacle_path_projection_axis; // "?debug_obstacle_path_projection_axis@@3FA"
// class c_sector_ref debug_obstacle_path_goal_sector_ref; // "?debug_obstacle_path_goal_sector_ref@@3Vc_sector_ref@@A"
// union real_point3d debug_obstacle_path_goal_point; // "?debug_obstacle_path_goal_point@@3Treal_point3d@@A"
// class c_sector_ref debug_obstacle_path_start_sector_ref; // "?debug_obstacle_path_start_sector_ref@@3Vc_sector_ref@@A"
// union real_point3d debug_obstacle_path_start_point; // "?debug_obstacle_path_start_point@@3Treal_point3d@@A"
// bool debug_obstacle_path_on_failure; // "?debug_obstacle_path_on_failure@@3_NA"
// bool debug_obstacle_path; // "?debug_obstacle_path@@3_NA"
// bool debug_damage_effect_obstacles; // "?debug_damage_effect_obstacles@@3_NA"

// bool path_avoid_obstacles(long, struct path_state *, short, struct path_step const *, bool, short *, struct path_step *, bool *, long *, class c_flags<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver> *, bool *);
// struct step * path_get_step(struct obstacle_path *, short);
// bool path_find(struct path_state const *, struct obstacle_path *, bool, struct obstacles const *, float, union real_point3d const *, class c_sector_ref, union real_point3d const *, class c_sector_ref, short, bool, bool, bool);
// short path_add_step(struct obstacle_path *, union real_point3d const *, class c_sector_ref, short, bool, bool, short, float, short);
// bool heap_insert(struct obstacle_path *, short);
// bool heap_verify(struct obstacle_path *, char const *);
// short heap_parent_index(short);
// float heap_cost(struct obstacle_path *, short);
// short path_get_step_index(struct obstacle_path const *, short);
// void heap_up(struct obstacle_path *, short);
// bool path_new(struct obstacle_path *, struct obstacles const *, bool, float, union real_point3d const *, class c_sector_ref, union real_point3d const *, class c_sector_ref, short, bool, bool, bool);
// bool path_iterate(struct obstacle_path *, bool);
// short heap_remove(struct obstacle_path *);
// void heap_down(struct obstacle_path *, short);
// short heap_left_index(short);
// short heap_right_index(short);
// short path_add_turning_point_step(struct obstacle_path *, short, union real_point3d const *, short, unsigned short, bool, bool);
// short path_add_steps(struct obstacle_path *, short, short);
// void step_failed(struct obstacle_path *, short, short);
// bool actor_test_ignorable_obstacles(long, struct obstacles const *, short, bool, union real_point3d const *, class c_sector_ref, union vector3d const *, float, float, long *, class c_flags<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver> *);
// void render_debug_obstacle_path(void);
// void render_debug_path(struct obstacle_path const *);
// public: void c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_obstacle_flags, bool);
// public: static bool c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_obstacle_flags);
// private: static unsigned short c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_obstacle_flags);
// union real_point3d * project_point3d(union real_point3d const *, short, bool, union real_point3d *);
// union real_point3d * inverse_project_point3d(union real_point3d const *, short, bool, union real_point3d *);
// union vector3d * inverse_project_vector3d(union vector3d const *, short, bool, union vector3d *);
// public: bool c_sector_ref::operator==(class c_sector_ref const &) const;
// struct disc const * obstacles_get_disc(struct obstacles const *, short);
// short obstacle_from_disc(struct obstacles const *, short);

//bool path_avoid_obstacles(long, struct path_state *, short, struct path_step const *, bool, short *, struct path_step *, bool *, long *, class c_flags<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver> *, bool *)
//{
//    mangled_ppc("?path_avoid_obstacles@@YA_NJPAUpath_state@@FPBUpath_step@@_NPAFPAU2@PA_NPAJPAV?$c_flags@W4e_obstacle_flags@@G$08Us_default_enum_string_resolver@@@@5@Z");
//};

//struct step * path_get_step(struct obstacle_path *, short)
//{
//    mangled_ppc("?path_get_step@@YAPAUstep@@PAUobstacle_path@@F@Z");
//};

//bool path_find(struct path_state const *, struct obstacle_path *, bool, struct obstacles const *, float, union real_point3d const *, class c_sector_ref, union real_point3d const *, class c_sector_ref, short, bool, bool, bool)
//{
//    mangled_ppc("?path_find@@YA_NPBUpath_state@@PAUobstacle_path@@_NPBUobstacles@@MPBTreal_point3d@@Vc_sector_ref@@45F222@Z");
//};

//short path_add_step(struct obstacle_path *, union real_point3d const *, class c_sector_ref, short, bool, bool, short, float, short)
//{
//    mangled_ppc("?path_add_step@@YAFPAUobstacle_path@@PBTreal_point3d@@Vc_sector_ref@@F_N3FMF@Z");
//};

//bool heap_insert(struct obstacle_path *, short)
//{
//    mangled_ppc("?heap_insert@@YA_NPAUobstacle_path@@F@Z");
//};

//bool heap_verify(struct obstacle_path *, char const *)
//{
//    mangled_ppc("?heap_verify@@YA_NPAUobstacle_path@@PBD@Z");
//};

//short heap_parent_index(short)
//{
//    mangled_ppc("?heap_parent_index@@YAFF@Z");
//};

//float heap_cost(struct obstacle_path *, short)
//{
//    mangled_ppc("?heap_cost@@YAMPAUobstacle_path@@F@Z");
//};

//short path_get_step_index(struct obstacle_path const *, short)
//{
//    mangled_ppc("?path_get_step_index@@YAFPBUobstacle_path@@F@Z");
//};

//void heap_up(struct obstacle_path *, short)
//{
//    mangled_ppc("?heap_up@@YAXPAUobstacle_path@@F@Z");
//};

//bool path_new(struct obstacle_path *, struct obstacles const *, bool, float, union real_point3d const *, class c_sector_ref, union real_point3d const *, class c_sector_ref, short, bool, bool, bool)
//{
//    mangled_ppc("?path_new@@YA_NPAUobstacle_path@@PBUobstacles@@_NMPBTreal_point3d@@Vc_sector_ref@@34F222@Z");
//};

//bool path_iterate(struct obstacle_path *, bool)
//{
//    mangled_ppc("?path_iterate@@YA_NPAUobstacle_path@@_N@Z");
//};

//short heap_remove(struct obstacle_path *)
//{
//    mangled_ppc("?heap_remove@@YAFPAUobstacle_path@@@Z");
//};

//void heap_down(struct obstacle_path *, short)
//{
//    mangled_ppc("?heap_down@@YAXPAUobstacle_path@@F@Z");
//};

//short heap_left_index(short)
//{
//    mangled_ppc("?heap_left_index@@YAFF@Z");
//};

//short heap_right_index(short)
//{
//    mangled_ppc("?heap_right_index@@YAFF@Z");
//};

//short path_add_turning_point_step(struct obstacle_path *, short, union real_point3d const *, short, unsigned short, bool, bool)
//{
//    mangled_ppc("?path_add_turning_point_step@@YAFPAUobstacle_path@@FPBTreal_point3d@@FG_N2@Z");
//};

//short path_add_steps(struct obstacle_path *, short, short)
//{
//    mangled_ppc("?path_add_steps@@YAFPAUobstacle_path@@FF@Z");
//};

//void step_failed(struct obstacle_path *, short, short)
//{
//    mangled_ppc("?step_failed@@YAXPAUobstacle_path@@FF@Z");
//};

//bool actor_test_ignorable_obstacles(long, struct obstacles const *, short, bool, union real_point3d const *, class c_sector_ref, union vector3d const *, float, float, long *, class c_flags<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?actor_test_ignorable_obstacles@@YA_NJPBUobstacles@@F_NPBTreal_point3d@@Vc_sector_ref@@PBTvector3d@@MMPAJPAV?$c_flags@W4e_obstacle_flags@@G$08Us_default_enum_string_resolver@@@@@Z");
//};

//void render_debug_obstacle_path(void)
//{
//    mangled_ppc("?render_debug_obstacle_path@@YAXXZ");
//};

//void render_debug_path(struct obstacle_path const *)
//{
//    mangled_ppc("?render_debug_path@@YAXPBUobstacle_path@@@Z");
//};

//public: void c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_obstacle_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_obstacle_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_obstacle_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_obstacle_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_obstacle_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_obstacle_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_obstacle_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_obstacle_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_obstacle_flags@@@Z");
//};

//union real_point3d * project_point3d(union real_point3d const *, short, bool, union real_point3d *)
//{
//    mangled_ppc("?project_point3d@@YAPATreal_point3d@@PBT1@F_NPAT1@@Z");
//};

//union real_point3d * inverse_project_point3d(union real_point3d const *, short, bool, union real_point3d *)
//{
//    mangled_ppc("?inverse_project_point3d@@YAPATreal_point3d@@PBT1@F_NPAT1@@Z");
//};

//union vector3d * inverse_project_vector3d(union vector3d const *, short, bool, union vector3d *)
//{
//    mangled_ppc("?inverse_project_vector3d@@YAPATvector3d@@PBT1@F_NPAT1@@Z");
//};

//public: bool c_sector_ref::operator==(class c_sector_ref const &) const
//{
//    mangled_ppc("??8c_sector_ref@@QBA_NABV0@@Z");
//};

//struct disc const * obstacles_get_disc(struct obstacles const *, short)
//{
//    mangled_ppc("?obstacles_get_disc@@YAPBUdisc@@PBUobstacles@@F@Z");
//};

//short obstacle_from_disc(struct obstacles const *, short)
//{
//    mangled_ppc("?obstacle_from_disc@@YAFPBUobstacles@@F@Z");
//};

