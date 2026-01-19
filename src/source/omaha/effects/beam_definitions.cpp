/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static char const *const *const const c_beam_definition::x_property_names; // "?x_property_names@c_beam_definition@@2QBQBDB"
// public: static struct c_editable_property_base::s_initializers const *const const c_beam_definition::x_default_initializers; // "?x_default_initializers@c_beam_definition@@2QBUs_initializers@c_editable_property_base@@B"
// public: static long const *const const c_beam_definition::x_allowed_states; // "?x_allowed_states@c_beam_definition@@2QBJB"
// struct s_tag_group_legacy_vtable legacy_beam_system_vtable; // "?legacy_beam_system_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_block_definition beam_system_block; // "?beam_system_block@@3Us_tag_block_definition@@A"
// struct s_tag_group beam_system_group; // "?beam_system_group@@3Us_tag_group@@A"
// struct s_tag_group_stream_definition legacy_beam_system_stream_definition; // "?legacy_beam_system_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_beam_system_xsync_declaration; // "?legacy_beam_system_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_beam_system_vtable_shim; // "?legacy_beam_system_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// public: static bool c_beam_definition::new_block_proc(void *);
// public: static struct c_editable_property_base::s_initializers const & c_beam_definition::get_default_initializers(enum c_beam_definition::e_property);
// public: static bool c_beam_definition::postprocess_block_proc(long, void *, bool);
// public: void c_beam_definition::set_origin_faded(bool);
// public: void c_beam_definition::set_edge_faded(bool);
// public: void c_beam_definition::set_angle_faded(bool);
// public: void c_beam_definition::set_fogged(bool);
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_length(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_density(void) const;
// public: bool c_beam_definition::populate_gpu_data(void);
// public: class c_editable_property_type<class c_beam_states, union real_point2d> const * c_beam_definition::get_profile_offset(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_rotation(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_thickness(void) const;
// public: class c_editable_property_real_rgb_color<class c_beam_states> const * c_beam_definition::get_profile_color(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_alpha(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_black_point(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_palette(void) const;
// public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_intensity(void) const;
// public: static bool c_beam_system_definition::postprocess_proc(class c_tag_index, bool);
// public: long c_beam_definition::get_name(void) const;
// public: void c_beam_definition::set_name(long);
// public: class c_beam_definition * c_beam_system_definition::get_beam_definition_modifiable(long);
// public: void c_editable_property<class c_beam_states>::allocate_random_seed(unsigned long *);
// public: static bool c_editable_property<class c_beam_states>::postprocess(long, void *, bool);
// public: void c_editable_property_type<class c_beam_states, union real_point2d>::allocate_random_seed(unsigned long *);
// public: static bool c_editable_property_type<class c_beam_states, union real_point2d>::postprocess(long, void *, bool);
// public: void c_editable_property_base::allocate_random_seed<class c_beam_states>(unsigned long *);
// public: static bool c_editable_property_base::postprocess<class c_beam_states>(long, void *, bool);
// public: static bool c_beam_states::is_constant_over_time(long);
// public: static bool c_beam_states::is_constant_per_instance(long);

//public: static bool c_beam_definition::new_block_proc(void *)
//{
//    mangled_ppc("?new_block_proc@c_beam_definition@@SA_NPAX@Z");
//};

//public: static struct c_editable_property_base::s_initializers const & c_beam_definition::get_default_initializers(enum c_beam_definition::e_property)
//{
//    mangled_ppc("?get_default_initializers@c_beam_definition@@SAABUs_initializers@c_editable_property_base@@W4e_property@1@@Z");
//};

//public: static bool c_beam_definition::postprocess_block_proc(long, void *, bool)
//{
//    mangled_ppc("?postprocess_block_proc@c_beam_definition@@SA_NJPAX_N@Z");
//};

//public: void c_beam_definition::set_origin_faded(bool)
//{
//    mangled_ppc("?set_origin_faded@c_beam_definition@@QAAX_N@Z");
//};

//public: void c_beam_definition::set_edge_faded(bool)
//{
//    mangled_ppc("?set_edge_faded@c_beam_definition@@QAAX_N@Z");
//};

//public: void c_beam_definition::set_angle_faded(bool)
//{
//    mangled_ppc("?set_angle_faded@c_beam_definition@@QAAX_N@Z");
//};

//public: void c_beam_definition::set_fogged(bool)
//{
//    mangled_ppc("?set_fogged@c_beam_definition@@QAAX_N@Z");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_length(void) const
//{
//    mangled_ppc("?get_length@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_density(void) const
//{
//    mangled_ppc("?get_profile_density@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: bool c_beam_definition::populate_gpu_data(void)
//{
//    mangled_ppc("?populate_gpu_data@c_beam_definition@@QAA_NXZ");
//};

//public: class c_editable_property_type<class c_beam_states, union real_point2d> const * c_beam_definition::get_profile_offset(void) const
//{
//    mangled_ppc("?get_profile_offset@c_beam_definition@@QBAPBV?$c_editable_property_type@Vc_beam_states@@Treal_point2d@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_rotation(void) const
//{
//    mangled_ppc("?get_profile_rotation@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_thickness(void) const
//{
//    mangled_ppc("?get_profile_thickness@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property_real_rgb_color<class c_beam_states> const * c_beam_definition::get_profile_color(void) const
//{
//    mangled_ppc("?get_profile_color@c_beam_definition@@QBAPBV?$c_editable_property_real_rgb_color@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_alpha(void) const
//{
//    mangled_ppc("?get_profile_alpha@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_black_point(void) const
//{
//    mangled_ppc("?get_profile_black_point@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_palette(void) const
//{
//    mangled_ppc("?get_profile_palette@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: class c_editable_property<class c_beam_states> const * c_beam_definition::get_profile_intensity(void) const
//{
//    mangled_ppc("?get_profile_intensity@c_beam_definition@@QBAPBV?$c_editable_property@Vc_beam_states@@@@XZ");
//};

//public: static bool c_beam_system_definition::postprocess_proc(class c_tag_index, bool)
//{
//    mangled_ppc("?postprocess_proc@c_beam_system_definition@@SA_NVc_tag_index@@_N@Z");
//};

//public: long c_beam_definition::get_name(void) const
//{
//    mangled_ppc("?get_name@c_beam_definition@@QBAJXZ");
//};

//public: void c_beam_definition::set_name(long)
//{
//    mangled_ppc("?set_name@c_beam_definition@@QAAXJ@Z");
//};

//public: class c_beam_definition * c_beam_system_definition::get_beam_definition_modifiable(long)
//{
//    mangled_ppc("?get_beam_definition_modifiable@c_beam_system_definition@@QAAPAVc_beam_definition@@J@Z");
//};

//public: void c_editable_property<class c_beam_states>::allocate_random_seed(unsigned long *)
//{
//    mangled_ppc("?allocate_random_seed@?$c_editable_property@Vc_beam_states@@@@QAAXPAK@Z");
//};

//public: static bool c_editable_property<class c_beam_states>::postprocess(long, void *, bool)
//{
//    mangled_ppc("?postprocess@?$c_editable_property@Vc_beam_states@@@@SA_NJPAX_N@Z");
//};

//public: void c_editable_property_type<class c_beam_states, union real_point2d>::allocate_random_seed(unsigned long *)
//{
//    mangled_ppc("?allocate_random_seed@?$c_editable_property_type@Vc_beam_states@@Treal_point2d@@@@QAAXPAK@Z");
//};

//public: static bool c_editable_property_type<class c_beam_states, union real_point2d>::postprocess(long, void *, bool)
//{
//    mangled_ppc("?postprocess@?$c_editable_property_type@Vc_beam_states@@Treal_point2d@@@@SA_NJPAX_N@Z");
//};

//public: void c_editable_property_base::allocate_random_seed<class c_beam_states>(unsigned long *)
//{
//    mangled_ppc("??$allocate_random_seed@Vc_beam_states@@@c_editable_property_base@@QAAXPAK@Z");
//};

//public: static bool c_editable_property_base::postprocess<class c_beam_states>(long, void *, bool)
//{
//    mangled_ppc("??$postprocess@Vc_beam_states@@@c_editable_property_base@@SA_NJPAX_N@Z");
//};

//public: static bool c_beam_states::is_constant_over_time(long)
//{
//    mangled_ppc("?is_constant_over_time@c_beam_states@@SA_NJ@Z");
//};

//public: static bool c_beam_states::is_constant_per_instance(long)
//{
//    mangled_ppc("?is_constant_per_instance@c_beam_states@@SA_NJ@Z");
//};

