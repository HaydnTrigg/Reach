/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct c_editable_property_base::s_initializers const *const const c_particle_definition::default_initializers; // "?default_initializers@c_particle_definition@@2QBUs_initializers@c_editable_property_base@@B"
// public: static long const *const const c_particle_definition::allowed_states; // "?allowed_states@c_particle_definition@@2QBJB"
// public: static char const *const *const const c_particle_definition::property_names; // "?property_names@c_particle_definition@@2QBQBDB"
// union argb_color const ***k_particle_debug_colors; // "?k_particle_debug_colors@@3PAPAPBTargb_color@@A"
// struct s_tag_block_definition gpu_variants_block; // "?gpu_variants_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition gpu_variants_block_struct_definition; // "?gpu_variants_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_group_legacy_vtable legacy_particle_vtable; // "?legacy_particle_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_block_definition particle_block; // "?particle_block@@3Us_tag_block_definition@@A"
// struct s_tag_group particle_group; // "?particle_group@@3Us_tag_group@@A"
// struct s_tag_group_stream_definition legacy_particle_stream_definition; // "?legacy_particle_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_particle_xsync_declaration; // "?legacy_particle_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_particle_vtable_shim; // "?legacy_particle_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// public: static bool s_particle_attachment::new_proc(void *);
// public: void s_particle_attachment::initialize(void);
// public: void c_particle_definition::initialize_particle(class c_particle_state_list const *, class c_particle *, long) const;
// public: bool c_particle_definition::get_particle_tint_from_lightmap(void) const;
// public: bool c_particle_definition::get_particle_tint_from_diffuse_texture(void) const;
// public: void c_particle_definition::evaluate_animation_rate_if_not_constant_over_time(class c_particle_state_list const *, float *) const;
// public: float c_particle_definition::evaluate_animation_rate(class c_particle_state_list const *) const;
// public: class c_particle_model_definition const * c_particle_definition::get_particle_model_definition(void) const;
// public: static class c_particle_model_definition const * c_particle_model_definition::get(class c_tag_index);
// public: void c_particle_definition::apply_versioning(void);
// public: static bool c_particle_definition::postprocess(class c_tag_index, bool);
// public: enum e_particle_attachment_type s_particle_attachment::get_type(void) const;
// public: void c_particle_definition::set_particle_has_birth_attachment(bool);
// public: void c_particle_definition::set_particle_has_collision_attachment(bool);
// public: void c_particle_definition::set_particle_has_death_attachment(bool);
// public: void c_particle_definition::set_particle_has_first_collision_attachment(bool);
// public: void c_particle_definition::set_particle_fogged(bool);
// public: void c_particle_definition::set_particle_lightmap_lit(bool);
// public: void c_particle_definition::set_particle_depth_fade_active(bool);
// public: void c_particle_definition::set_particle_distortion_active(bool);
// public: void c_particle_definition::set_particle_ldr_only(bool);
// public: void c_particle_definition::set_particle_is_particle_model(bool);
// public: void c_particle_definition::set_particle_opaque(bool);
// public: void c_particle_definition::set_particle_uses_smoke_lighting(bool);
// public: unsigned long c_particle_definition::get_attachment_count(void) const;
// public: struct s_particle_attachment const * c_particle_definition::get_attachment(unsigned long) const;
// public: struct s_particle_attachment * c_particle_definition::get_attachment_modifiable(unsigned long) const;
// public: static struct c_editable_property_base::s_initializers const & c_particle_definition::get_default_initializers(enum c_particle_definition::e_property);
// public: void c_particle_definition::postprocess_frame_animation(void);
// public: bool c_editable_property_base::is_zero(void) const;
// public: static bool c_particle_definition::new_block_proc(void *);
// public: long c_particle_definition::get_vertex_shader_classfication(void) const;
// public: void c_editable_property<class c_particle_state_list>::allocate_random_seed(unsigned long *);
// public: void c_editable_property_base::allocate_random_seed<class c_particle_state_list>(unsigned long *);
// float clamp_to_unit_space(float);

//public: static bool s_particle_attachment::new_proc(void *)
//{
//    mangled_ppc("?new_proc@s_particle_attachment@@SA_NPAX@Z");
//};

//public: void s_particle_attachment::initialize(void)
//{
//    mangled_ppc("?initialize@s_particle_attachment@@QAAXXZ");
//};

//public: void c_particle_definition::initialize_particle(class c_particle_state_list const *, class c_particle *, long) const
//{
//    mangled_ppc("?initialize_particle@c_particle_definition@@QBAXPBVc_particle_state_list@@PAVc_particle@@J@Z");
//};

//public: bool c_particle_definition::get_particle_tint_from_lightmap(void) const
//{
//    mangled_ppc("?get_particle_tint_from_lightmap@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_tint_from_diffuse_texture(void) const
//{
//    mangled_ppc("?get_particle_tint_from_diffuse_texture@c_particle_definition@@QBA_NXZ");
//};

//public: void c_particle_definition::evaluate_animation_rate_if_not_constant_over_time(class c_particle_state_list const *, float *) const
//{
//    mangled_ppc("?evaluate_animation_rate_if_not_constant_over_time@c_particle_definition@@QBAXPBVc_particle_state_list@@PAM@Z");
//};

//public: float c_particle_definition::evaluate_animation_rate(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_animation_rate@c_particle_definition@@QBAMPBVc_particle_state_list@@@Z");
//};

//public: class c_particle_model_definition const * c_particle_definition::get_particle_model_definition(void) const
//{
//    mangled_ppc("?get_particle_model_definition@c_particle_definition@@QBAPBVc_particle_model_definition@@XZ");
//};

//public: static class c_particle_model_definition const * c_particle_model_definition::get(class c_tag_index)
//{
//    mangled_ppc("?get@c_particle_model_definition@@SAPBV1@Vc_tag_index@@@Z");
//};

//public: void c_particle_definition::apply_versioning(void)
//{
//    mangled_ppc("?apply_versioning@c_particle_definition@@QAAXXZ");
//};

//public: static bool c_particle_definition::postprocess(class c_tag_index, bool)
//{
//    mangled_ppc("?postprocess@c_particle_definition@@SA_NVc_tag_index@@_N@Z");
//};

//public: enum e_particle_attachment_type s_particle_attachment::get_type(void) const
//{
//    mangled_ppc("?get_type@s_particle_attachment@@QBA?AW4e_particle_attachment_type@@XZ");
//};

//public: void c_particle_definition::set_particle_has_birth_attachment(bool)
//{
//    mangled_ppc("?set_particle_has_birth_attachment@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_has_collision_attachment(bool)
//{
//    mangled_ppc("?set_particle_has_collision_attachment@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_has_death_attachment(bool)
//{
//    mangled_ppc("?set_particle_has_death_attachment@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_has_first_collision_attachment(bool)
//{
//    mangled_ppc("?set_particle_has_first_collision_attachment@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_fogged(bool)
//{
//    mangled_ppc("?set_particle_fogged@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_lightmap_lit(bool)
//{
//    mangled_ppc("?set_particle_lightmap_lit@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_depth_fade_active(bool)
//{
//    mangled_ppc("?set_particle_depth_fade_active@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_distortion_active(bool)
//{
//    mangled_ppc("?set_particle_distortion_active@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_ldr_only(bool)
//{
//    mangled_ppc("?set_particle_ldr_only@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_is_particle_model(bool)
//{
//    mangled_ppc("?set_particle_is_particle_model@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_opaque(bool)
//{
//    mangled_ppc("?set_particle_opaque@c_particle_definition@@QAAX_N@Z");
//};

//public: void c_particle_definition::set_particle_uses_smoke_lighting(bool)
//{
//    mangled_ppc("?set_particle_uses_smoke_lighting@c_particle_definition@@QAAX_N@Z");
//};

//public: unsigned long c_particle_definition::get_attachment_count(void) const
//{
//    mangled_ppc("?get_attachment_count@c_particle_definition@@QBAKXZ");
//};

//public: struct s_particle_attachment const * c_particle_definition::get_attachment(unsigned long) const
//{
//    mangled_ppc("?get_attachment@c_particle_definition@@QBAPBUs_particle_attachment@@K@Z");
//};

//public: struct s_particle_attachment * c_particle_definition::get_attachment_modifiable(unsigned long) const
//{
//    mangled_ppc("?get_attachment_modifiable@c_particle_definition@@QBAPAUs_particle_attachment@@K@Z");
//};

//public: static struct c_editable_property_base::s_initializers const & c_particle_definition::get_default_initializers(enum c_particle_definition::e_property)
//{
//    mangled_ppc("?get_default_initializers@c_particle_definition@@SAABUs_initializers@c_editable_property_base@@W4e_property@1@@Z");
//};

//public: void c_particle_definition::postprocess_frame_animation(void)
//{
//    mangled_ppc("?postprocess_frame_animation@c_particle_definition@@QAAXXZ");
//};

//public: bool c_editable_property_base::is_zero(void) const
//{
//    mangled_ppc("?is_zero@c_editable_property_base@@QBA_NXZ");
//};

//public: static bool c_particle_definition::new_block_proc(void *)
//{
//    mangled_ppc("?new_block_proc@c_particle_definition@@SA_NPAX@Z");
//};

//public: long c_particle_definition::get_vertex_shader_classfication(void) const
//{
//    mangled_ppc("?get_vertex_shader_classfication@c_particle_definition@@QBAJXZ");
//};

//public: void c_editable_property<class c_particle_state_list>::allocate_random_seed(unsigned long *)
//{
//    mangled_ppc("?allocate_random_seed@?$c_editable_property@Vc_particle_state_list@@@@QAAXPAK@Z");
//};

//public: void c_editable_property_base::allocate_random_seed<class c_particle_state_list>(unsigned long *)
//{
//    mangled_ppc("??$allocate_random_seed@Vc_particle_state_list@@@c_editable_property_base@@QAAXPAK@Z");
//};

//float clamp_to_unit_space(float)
//{
//    mangled_ppc("?clamp_to_unit_space@@YAMM@Z");
//};

