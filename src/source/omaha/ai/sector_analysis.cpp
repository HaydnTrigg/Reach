/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83955F68; // "except_record_83955F68"

// void sector_constructor_preoptimization_analysis(class c_pathfinding_object *, short *, long);
// void sector_constructor_precompression_analysis(void);
// void sector_analysis(struct pathfinding_data *);
// void characterize_link(long);
// long characterize_link_get_wall_sector(long, long *);
// enum e_leanable_type test_leanable_wall(long, long, bool *, bool *);
// enum e_leanable_type test_wall_sample(long, union real_point3d const *);
// void mark_step_sectors(void);
// void mark_threshold_links(struct pathfinding_data *);
// long threshold_get_other_sector(class c_link_constructor *, long);
// void mark_corners(struct pathfinding_data *);
// bool mark_link_record(struct link_record *, long, long, long);
// void mark_breakable_sectors(struct pathfinding_data *);
// void floodfill_user_sectors(void);
// void recursive_floodfill_user_sectors(long, short);
// bool firing_position_valid_perch(struct s_firing_position_ref);
// short firing_position_cast_rays(class c_ai_point3d const *, class c_sector_ref, short, float, bool *, float *, short *);
// bool firing_position_attach(struct s_firing_position_ref);
// void characterize_firing_position(struct s_firing_position_ref, struct collision_result *);
// void structure_attach_sectors(short);
// void structure_clear_sector_indices(short);
// bool firing_position_get_normal(struct s_firing_position_ref, union vector3d *);
// bool firing_position_get_normal(struct s_firing_position_definition const *, union vector3d *);
// bool firing_position_get_forward(struct s_firing_position_definition const *, union vector3d *);
// bool runtime_wall_link_get_normal(struct pathfinding_data const *, long, union vector3d *);
// bool runtime_manual_bunkering_get_info(long, struct s_firing_position_ref, class c_ai_point3d *, union vector3d *, enum e_bunker_direction *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *);
// bool runtime_bunkering_get_info(struct pathfinding_data const *, long, class c_ai_point3d const *, class c_sector_ref, union vector3d const *, union real_point3d *, union vector3d *, enum e_bunker_direction *, enum e_bunker_height *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *);
// bool runtime_leanable_wall_alignment(struct pathfinding_data const *, long, union vector3d *);
// bool runtime_bunkering_get_entry(long, class c_ai_point3d const *, class c_sector_ref, class c_ai_point3d const *, union vector3d const *, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state, class c_ai_point3d *, class c_sector_ref *);
// bool runtime_bunkering_get_test_point(union real_point3d const *, union vector3d const *, class c_sector_ref, enum e_bunker_direction, union real_point3d *, class c_sector_ref *);
// public: bool c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_bunker_direction) const;
// public: class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const &);

//void sector_constructor_preoptimization_analysis(class c_pathfinding_object *, short *, long)
//{
//    mangled_ppc("?sector_constructor_preoptimization_analysis@@YAXPAVc_pathfinding_object@@PAFJ@Z");
//};

//void sector_constructor_precompression_analysis(void)
//{
//    mangled_ppc("?sector_constructor_precompression_analysis@@YAXXZ");
//};

//void sector_analysis(struct pathfinding_data *)
//{
//    mangled_ppc("?sector_analysis@@YAXPAUpathfinding_data@@@Z");
//};

//void characterize_link(long)
//{
//    mangled_ppc("?characterize_link@@YAXJ@Z");
//};

//long characterize_link_get_wall_sector(long, long *)
//{
//    mangled_ppc("?characterize_link_get_wall_sector@@YAJJPAJ@Z");
//};

//enum e_leanable_type test_leanable_wall(long, long, bool *, bool *)
//{
//    mangled_ppc("?test_leanable_wall@@YA?AW4e_leanable_type@@JJPA_N0@Z");
//};

//enum e_leanable_type test_wall_sample(long, union real_point3d const *)
//{
//    mangled_ppc("?test_wall_sample@@YA?AW4e_leanable_type@@JPBTreal_point3d@@@Z");
//};

//void mark_step_sectors(void)
//{
//    mangled_ppc("?mark_step_sectors@@YAXXZ");
//};

//void mark_threshold_links(struct pathfinding_data *)
//{
//    mangled_ppc("?mark_threshold_links@@YAXPAUpathfinding_data@@@Z");
//};

//long threshold_get_other_sector(class c_link_constructor *, long)
//{
//    mangled_ppc("?threshold_get_other_sector@@YAJPAVc_link_constructor@@J@Z");
//};

//void mark_corners(struct pathfinding_data *)
//{
//    mangled_ppc("?mark_corners@@YAXPAUpathfinding_data@@@Z");
//};

//bool mark_link_record(struct link_record *, long, long, long)
//{
//    mangled_ppc("?mark_link_record@@YA_NPAUlink_record@@JJJ@Z");
//};

//void mark_breakable_sectors(struct pathfinding_data *)
//{
//    mangled_ppc("?mark_breakable_sectors@@YAXPAUpathfinding_data@@@Z");
//};

//void floodfill_user_sectors(void)
//{
//    mangled_ppc("?floodfill_user_sectors@@YAXXZ");
//};

//void recursive_floodfill_user_sectors(long, short)
//{
//    mangled_ppc("?recursive_floodfill_user_sectors@@YAXJF@Z");
//};

//bool firing_position_valid_perch(struct s_firing_position_ref)
//{
//    mangled_ppc("?firing_position_valid_perch@@YA_NUs_firing_position_ref@@@Z");
//};

//short firing_position_cast_rays(class c_ai_point3d const *, class c_sector_ref, short, float, bool *, float *, short *)
//{
//    mangled_ppc("?firing_position_cast_rays@@YAFPBVc_ai_point3d@@Vc_sector_ref@@FMPA_NPAMPAF@Z");
//};

//bool firing_position_attach(struct s_firing_position_ref)
//{
//    mangled_ppc("?firing_position_attach@@YA_NUs_firing_position_ref@@@Z");
//};

//void characterize_firing_position(struct s_firing_position_ref, struct collision_result *)
//{
//    mangled_ppc("?characterize_firing_position@@YAXUs_firing_position_ref@@PAUcollision_result@@@Z");
//};

//void structure_attach_sectors(short)
//{
//    mangled_ppc("?structure_attach_sectors@@YAXF@Z");
//};

//void structure_clear_sector_indices(short)
//{
//    mangled_ppc("?structure_clear_sector_indices@@YAXF@Z");
//};

//bool firing_position_get_normal(struct s_firing_position_ref, union vector3d *)
//{
//    mangled_ppc("?firing_position_get_normal@@YA_NUs_firing_position_ref@@PATvector3d@@@Z");
//};

//bool firing_position_get_normal(struct s_firing_position_definition const *, union vector3d *)
//{
//    mangled_ppc("?firing_position_get_normal@@YA_NPBUs_firing_position_definition@@PATvector3d@@@Z");
//};

//bool firing_position_get_forward(struct s_firing_position_definition const *, union vector3d *)
//{
//    mangled_ppc("?firing_position_get_forward@@YA_NPBUs_firing_position_definition@@PATvector3d@@@Z");
//};

//bool runtime_wall_link_get_normal(struct pathfinding_data const *, long, union vector3d *)
//{
//    mangled_ppc("?runtime_wall_link_get_normal@@YA_NPBUpathfinding_data@@JPATvector3d@@@Z");
//};

//bool runtime_manual_bunkering_get_info(long, struct s_firing_position_ref, class c_ai_point3d *, union vector3d *, enum e_bunker_direction *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *)
//{
//    mangled_ppc("?runtime_manual_bunkering_get_info@@YA_NJUs_firing_position_ref@@PAVc_ai_point3d@@PATvector3d@@PAW4e_bunker_direction@@PBV?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@4@Z");
//};

//bool runtime_bunkering_get_info(struct pathfinding_data const *, long, class c_ai_point3d const *, class c_sector_ref, union vector3d const *, union real_point3d *, union vector3d *, enum e_bunker_direction *, enum e_bunker_height *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *, class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const *)
//{
//    mangled_ppc("?runtime_bunkering_get_info@@YA_NPBUpathfinding_data@@JPBVc_ai_point3d@@Vc_sector_ref@@PBTvector3d@@PATreal_point3d@@PAT4@PAW4e_bunker_direction@@PAW4e_bunker_height@@PBV?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@8@Z");
//};

//bool runtime_leanable_wall_alignment(struct pathfinding_data const *, long, union vector3d *)
//{
//    mangled_ppc("?runtime_leanable_wall_alignment@@YA_NPBUpathfinding_data@@JPATvector3d@@@Z");
//};

//bool runtime_bunkering_get_entry(long, class c_ai_point3d const *, class c_sector_ref, class c_ai_point3d const *, union vector3d const *, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state, class c_ai_point3d *, class c_sector_ref *)
//{
//    mangled_ppc("?runtime_bunkering_get_entry@@YA_NJPBVc_ai_point3d@@Vc_sector_ref@@0PBTvector3d@@W4e_bunker_direction@@W4e_bunker_height@@W4e_bunker_state@@PAV1@PAV2@@Z");
//};

//bool runtime_bunkering_get_test_point(union real_point3d const *, union vector3d const *, class c_sector_ref, enum e_bunker_direction, union real_point3d *, class c_sector_ref *)
//{
//    mangled_ppc("?runtime_bunkering_get_test_point@@YA_NPBTreal_point3d@@PBTvector3d@@Vc_sector_ref@@W4e_bunker_direction@@PAT1@PAV3@@Z");
//};

//public: bool c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::test(enum e_bunker_direction) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@QBA_NW4e_bunker_direction@@@Z");
//};

//public: class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_bunker_direction, unsigned short, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_bunker_direction@@G$03Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

