/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float k_aim_vector_snap_tolerance; // "?k_aim_vector_snap_tolerance@@3MA"
// float k_pose_interpolation_large_yaw_rate; // "?k_pose_interpolation_large_yaw_rate@@3MA"
// float k_weight_interpolation_stop_delta; // "?k_weight_interpolation_stop_delta@@3MA"
// float k_weight_interpolation_start_delta; // "?k_weight_interpolation_start_delta@@3MA"
// bool debug_pose_overlay_force_interpolation_across_sphere; // "?debug_pose_overlay_force_interpolation_across_sphere@@3_NA"
// float k_pose_interpolation_stop_delta; // "?k_pose_interpolation_stop_delta@@3MA"
// float k_pose_interpolation_start_delta; // "?k_pose_interpolation_start_delta@@3MA"
// float k_through_sphere_interpolation_threshold; // "?k_through_sphere_interpolation_threshold@@3MA"
// float k_pose_interpolation_large_yaw_delta; // "?k_pose_interpolation_large_yaw_delta@@3MA"

// public: c_pose_blend_channel::c_pose_blend_channel(void);
// public: c_pose_blend_channel::~c_pose_blend_channel(void);
// public: void c_pose_blend_channel::initialize(void);
// public: void c_pose_blend_channel::reset(void);
// private: void c_pose_blend_channel::internal_compute_aim_target(union euler_angles2d const *, float, union vector3d *);
// public: void c_pose_blend_channel::append_debug_string(char const *, char const *, char *, int) const;
// public: bool c_pose_blend_channel::get_object_space_parent_orientation_is_valid(short);
// public: struct s_tag_block const & c_model_animation::get_object_space_nodes(void) const;
// public: void c_pose_blend_channel::get_object_space_parent_orientation(short, struct real_orientation *);
// public: void c_quantized_orientation::decompress(struct real_orientation *) const;
// __stvx;
// public: void c_pose_blend_channel::apply_node_orientations(long, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: bool c_pose_blend_channel::is_currently_interpolating(void) const;
// public: void c_pose_blend_channel::set_euler_angles(union euler_angles2d const &);
// public: void c_pose_blend_channel::set_weight(float);
// public: void c_pose_blend_channel::set_euler_angles_and_weight(union euler_angles2d const &, float);
// private: void c_pose_blend_channel::internal_set_target_yaw(float);
// private: void c_pose_blend_channel::internal_set_target_pitch(float);
// private: void c_pose_blend_channel::internal_set_target_weight(float);
// public: struct animation_aiming_screen_bounds const * c_pose_blend_channel::get_aiming_screen_bounds(void) const;
// public: void c_pose_blend_channel::get_channel_settings(class c_pose_blend_channel_settings *) const;
// public: void c_pose_blend_channel::set_bounds_override(union real_rectangle2d const *);
// private: bool c_pose_blend_channel::setup_channel(class c_pose_blend_channel_settings const *);
// public: bool c_pose_blend_channel::update(void);
// private: void c_pose_blend_channel::internal_compute_ultimate_parent_node_index(void);
// public: long c_animation_data::get_node_count(void) const;
// private: bool c_pose_blend_channel::internal_interpolate_across_sphere(void);
// private: bool c_pose_blend_channel::internal_interpolate_through_sphere(void);
// public: void c_big_flags_typed_no_init<long, 256>::set_bits_direct_destructive(long, unsigned long const *);
// public: void c_flags_no_init<enum e_pose_blend_channel_flags, char, 6, struct s_default_enum_string_resolver>::clear(void);

//public: c_pose_blend_channel::c_pose_blend_channel(void)
//{
//    mangled_ppc("??0c_pose_blend_channel@@QAA@XZ");
//};

//public: c_pose_blend_channel::~c_pose_blend_channel(void)
//{
//    mangled_ppc("??1c_pose_blend_channel@@QAA@XZ");
//};

//public: void c_pose_blend_channel::initialize(void)
//{
//    mangled_ppc("?initialize@c_pose_blend_channel@@QAAXXZ");
//};

//public: void c_pose_blend_channel::reset(void)
//{
//    mangled_ppc("?reset@c_pose_blend_channel@@QAAXXZ");
//};

//private: void c_pose_blend_channel::internal_compute_aim_target(union euler_angles2d const *, float, union vector3d *)
//{
//    mangled_ppc("?internal_compute_aim_target@c_pose_blend_channel@@AAAXPBTeuler_angles2d@@MPATvector3d@@@Z");
//};

//public: void c_pose_blend_channel::append_debug_string(char const *, char const *, char *, int) const
//{
//    mangled_ppc("?append_debug_string@c_pose_blend_channel@@QBAXPBD0PADH@Z");
//};

//public: bool c_pose_blend_channel::get_object_space_parent_orientation_is_valid(short)
//{
//    mangled_ppc("?get_object_space_parent_orientation_is_valid@c_pose_blend_channel@@QAA_NF@Z");
//};

//public: struct s_tag_block const & c_model_animation::get_object_space_nodes(void) const
//{
//    mangled_ppc("?get_object_space_nodes@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//public: void c_pose_blend_channel::get_object_space_parent_orientation(short, struct real_orientation *)
//{
//    mangled_ppc("?get_object_space_parent_orientation@c_pose_blend_channel@@QAAXFPAUreal_orientation@@@Z");
//};

//public: void c_quantized_orientation::decompress(struct real_orientation *) const
//{
//    mangled_ppc("?decompress@c_quantized_orientation@@QBAXPAUreal_orientation@@@Z");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//public: void c_pose_blend_channel::apply_node_orientations(long, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?apply_node_orientations@c_pose_blend_channel@@QAAXJPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPBUreal_orientation@@JPAU4@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: bool c_pose_blend_channel::is_currently_interpolating(void) const
//{
//    mangled_ppc("?is_currently_interpolating@c_pose_blend_channel@@QBA_NXZ");
//};

//public: void c_pose_blend_channel::set_euler_angles(union euler_angles2d const &)
//{
//    mangled_ppc("?set_euler_angles@c_pose_blend_channel@@QAAXABTeuler_angles2d@@@Z");
//};

//public: void c_pose_blend_channel::set_weight(float)
//{
//    mangled_ppc("?set_weight@c_pose_blend_channel@@QAAXM@Z");
//};

//public: void c_pose_blend_channel::set_euler_angles_and_weight(union euler_angles2d const &, float)
//{
//    mangled_ppc("?set_euler_angles_and_weight@c_pose_blend_channel@@QAAXABTeuler_angles2d@@M@Z");
//};

//private: void c_pose_blend_channel::internal_set_target_yaw(float)
//{
//    mangled_ppc("?internal_set_target_yaw@c_pose_blend_channel@@AAAXM@Z");
//};

//private: void c_pose_blend_channel::internal_set_target_pitch(float)
//{
//    mangled_ppc("?internal_set_target_pitch@c_pose_blend_channel@@AAAXM@Z");
//};

//private: void c_pose_blend_channel::internal_set_target_weight(float)
//{
//    mangled_ppc("?internal_set_target_weight@c_pose_blend_channel@@AAAXM@Z");
//};

//public: struct animation_aiming_screen_bounds const * c_pose_blend_channel::get_aiming_screen_bounds(void) const
//{
//    mangled_ppc("?get_aiming_screen_bounds@c_pose_blend_channel@@QBAPBUanimation_aiming_screen_bounds@@XZ");
//};

//public: void c_pose_blend_channel::get_channel_settings(class c_pose_blend_channel_settings *) const
//{
//    mangled_ppc("?get_channel_settings@c_pose_blend_channel@@QBAXPAVc_pose_blend_channel_settings@@@Z");
//};

//public: void c_pose_blend_channel::set_bounds_override(union real_rectangle2d const *)
//{
//    mangled_ppc("?set_bounds_override@c_pose_blend_channel@@QAAXPBTreal_rectangle2d@@@Z");
//};

//private: bool c_pose_blend_channel::setup_channel(class c_pose_blend_channel_settings const *)
//{
//    mangled_ppc("?setup_channel@c_pose_blend_channel@@AAA_NPBVc_pose_blend_channel_settings@@@Z");
//};

//public: bool c_pose_blend_channel::update(void)
//{
//    mangled_ppc("?update@c_pose_blend_channel@@QAA_NXZ");
//};

//private: void c_pose_blend_channel::internal_compute_ultimate_parent_node_index(void)
//{
//    mangled_ppc("?internal_compute_ultimate_parent_node_index@c_pose_blend_channel@@AAAXXZ");
//};

//public: long c_animation_data::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_animation_data@@QBAJXZ");
//};

//private: bool c_pose_blend_channel::internal_interpolate_across_sphere(void)
//{
//    mangled_ppc("?internal_interpolate_across_sphere@c_pose_blend_channel@@AAA_NXZ");
//};

//private: bool c_pose_blend_channel::internal_interpolate_through_sphere(void)
//{
//    mangled_ppc("?internal_interpolate_through_sphere@c_pose_blend_channel@@AAA_NXZ");
//};

//public: void c_big_flags_typed_no_init<long, 256>::set_bits_direct_destructive(long, unsigned long const *)
//{
//    mangled_ppc("?set_bits_direct_destructive@?$c_big_flags_typed_no_init@J$0BAA@@@QAAXJPBK@Z");
//};

//public: void c_flags_no_init<enum e_pose_blend_channel_flags, char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_pose_blend_channel_flags@@D$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

