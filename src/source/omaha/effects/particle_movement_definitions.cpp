/* ---------- headers */

#include "omaha\effects\particle_movement_definitions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **particle_movement_flags_strings; // "?particle_movement_flags_strings@@3PAPBDA"
// struct s_string_list_definition particle_movement_flags; // "?particle_movement_flags@@3Us_string_list_definition@@A"
// char const **particle_movement_type_strings; // "?particle_movement_type_strings@@3PAPBDA"
// struct s_string_list_definition particle_movement_type; // "?particle_movement_type@@3Us_string_list_definition@@A"
// char const **particle_controller_flags_strings; // "?particle_controller_flags_strings@@3PAPBDA"
// struct s_string_list_definition particle_controller_flags; // "?particle_controller_flags@@3Us_string_list_definition@@A"
// struct s_tag_block_definition particle_controller; // "?particle_controller@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition particle_controller_struct_definition; // "?particle_controller_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_reference_definition particle_movement_definition; // "?particle_movement_definition@@3Us_tag_reference_definition@@A"
// struct s_tag_struct_definition particle_physics_struct; // "?particle_physics_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_group_legacy_vtable legacy_particle_physics_vtable; // "?legacy_particle_physics_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_block_definition particle_physics_block; // "?particle_physics_block@@3Us_tag_block_definition@@A"
// struct s_tag_group particle_physics_group; // "?particle_physics_group@@3Us_tag_group@@A"
// float `float __cdecl get_particle_priority(class c_particle *, float *const, float, float)'::`20'::no_collision_priority_reduction; // "?no_collision_priority_reduction@?BE@??get_particle_priority@@YAMPAVc_particle@@QAMMM@Z@4MA"
// float `float __cdecl get_particle_priority(class c_particle *, float *const, float, float)'::`13'::collision_priority_increase; // "?collision_priority_increase@?N@??get_particle_priority@@YAMPAVc_particle@@QAMMM@Z@4MA"
// float `float __cdecl get_particle_priority(class c_particle *, float *const, float, float)'::`11'::no_collision_priority_reduction; // "?no_collision_priority_reduction@?L@??get_particle_priority@@YAMPAVc_particle@@QAMMM@Z@4MA"
// struct s_tag_group_stream_definition legacy_particle_physics_stream_definition; // "?legacy_particle_physics_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_particle_physics_xsync_declaration; // "?legacy_particle_physics_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_particle_physics_vtable_shim; // "?legacy_particle_physics_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// private: class c_particle_controller_parameter const * c_particle_controller::get_parameter_list(void) const;
// private: void c_particle_controller::update_particles_physics(class c_particle_system const *, class c_particle_location const *, long, float) const;
// public: class c_editable_property<class c_particle_state_list> const & c_particle_controller_parameter::get_property(void) const;
// public: void c_particle_movement_definition::collide_particle(class c_particle *, float, float) const;
// public: bool c_particle_definition::get_particle_dies_on_structure_collision(void) const;
// public: bool c_particle_definition::get_particle_dies_on_water_collision(void) const;
// public: bool c_particle_definition::get_particle_dies_on_air_collision(void) const;
// public: bool c_particle_definition::get_particle_has_collision_attachment(void) const;
// public: bool c_particle_definition::get_particle_has_first_collision_attachment(void) const;
// private: void c_particle_controller::update_particles_collider(class c_particle_system const *, class c_particle_location const *, class c_particle_movement_definition const *, long, float, unsigned long) const;
// public: void s_particle_heap::insert(float, long);
// public: void s_particle_heap::heap_up(long, float, long);
// public: void s_particle_heap::heap_down_full_heap(long, float, long);
// float get_particle_priority(class c_particle *, float *const, float, float);
// private: void c_particle_controller::update_particles_flocking(class c_particle_system const *, class c_particle_location const *, long, float) const;
// class c_particle const * calculate_closest_neighbor(class c_particle const *, long, class c_particle_system const *);
// void accumulate_separation_force(class c_particle const *, class c_particle const *, float, float, union vector3d *);
// void accumulate_cohesion_force(class c_particle const *, union real_point3d const *, float, float, union vector3d *);
// void accumulate_alignment_force(class c_particle const *, class c_particle const *, float, union vector3d *);
// void accumulate_avoidance_force(class c_particle const *, float, union vector3d *);
// private: void c_particle_controller::update_particles_wind(class c_particle_system const *, class c_particle_location const *, long, float) const;
// private: void c_particle_controller::update_particles_turbulence(class c_particle_system const *, class c_particle_location const *, long, float) const;
// private: static void c_particle_controller::update_particles_debris(class c_particle_system const *, class c_particle_location const *, long, float);
// public: void c_particle_movement_definition::update_particles(class c_particle_system const *, class c_particle_location const *, long, float) const;
// public: void c_particle_controller::update_particles(class c_particle_system const *, class c_particle_location const *, class c_particle_movement_definition const *, long, float, unsigned long) const;
// public: unsigned short c_particle_controller::get_type(void) const;
// public: class c_particle_controller const * c_particle_movement_definition::get_controller_by_index(long) const;
// public: class c_particle_controller const * c_particle_movement_definition::get_controller_by_type(long) const;
// public: class c_editable_property<class c_particle_state_list> const * c_particle_movement_definition::get_property_by_id(long, long) const;
// public: class c_particle_controller_parameter const * c_particle_controller::get_parameter_by_id_indexed(long) const;
// public: class c_particle_controller const * c_particle_movement_definition::get_collider_controller(void) const;
// public: class c_particle_controller const * c_particle_movement_definition::get_turbulence_controller(void) const;
// public: class c_particle_controller_parameter * c_particle_controller::find_parameter_by_id(long);
// public: long c_particle_controller_parameter::get_parameter_id(void) const;
// public: class c_particle_controller_parameter * c_particle_controller::get_parameter(long);
// public: class c_particle_controller_parameter const * c_particle_controller::find_parameter_by_id(long) const;
// public: class c_particle_controller_parameter const * c_particle_controller::get_parameter(long) const;
// public: class c_particle_controller_parameter * c_particle_controller::create_parameter(long);
// public: void c_particle_controller_parameter::set_parameter_id(long);
// public: void c_particle_controller::delete_parameter(long);
// public: static bool c_particle_controller::compare_parameters(void const *, void const *, void const *);
// public: void c_particle_controller::fully_index_parameters_and_postprocess(class c_particle_movement_definition *);
// public: float * c_editable_property_base::get_forced_constant_reference(void);
// public: void c_editable_property_base::set_forced_constant(float);
// public: class c_editable_property<class c_particle_state_list> & c_particle_controller_parameter::get_property(void);
// public: class c_particle_controller_parameter * c_particle_controller::get_parameter_by_id_indexed(long);
// public: long c_particle_movement_definition::get_controller_index_by_type(long) const;
// public: class c_particle_controller * c_particle_movement_definition::get_controller_by_type(long);
// public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::get_property(long, long);
// public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::get_default_property(long, long);
// public: static class c_particle_movement_definition * c_particle_movement_definition::get_modifiable(long);
// public: float const * c_particle_movement_definition::get_default_value(long, long);
// public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::create_property(long, long);
// public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::create_property(long, long, class c_editable_property<class c_particle_state_list> const *);
// public: void c_editable_property_base::clone(class c_editable_property_base const &);
// public: void c_particle_controller::set_type(long);
// public: void c_particle_movement_definition::delete_property(long, long);
// public: void c_particle_movement_definition::sort_controllers(void);
// bool compare_controllers(void const *, void const *, void const *);
// public: static bool c_particle_movement_definition::postprocess_block_proc(long, void *, bool);
// public: static bool c_particle_movement_definition::postprocess_tag_proc(long, bool);
// public: static void c_particle_movement_definition::missing_tag_proc(unsigned long, char const *, unsigned long, unsigned long, char const *, long *);
// public: bool c_particle_movement_definition::type_enabled(long);
// public: bool c_particle_movement_definition::postprocess_internal(bool);
// public: static class c_particle_movement_definition const * c_particle_movement_definition::get(long);
// public: unsigned short * c_particle_movement_definition::get_flags_reference(void);
// public: unsigned long c_particle_movement_definition::get_used_particle_states(void) const;
// public: unsigned long c_particle_controller::get_used_particle_states(void) const;
// public: bool c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::test(enum e_collision_test_objects_flag) const;

//private: class c_particle_controller_parameter const * c_particle_controller::get_parameter_list(void) const
//{
//    mangled_ppc("?get_parameter_list@c_particle_controller@@ABAPBVc_particle_controller_parameter@@XZ");
//};

//private: void c_particle_controller::update_particles_physics(class c_particle_system const *, class c_particle_location const *, long, float) const
//{
//    mangled_ppc("?update_particles_physics@c_particle_controller@@ABAXPBVc_particle_system@@PBVc_particle_location@@JM@Z");
//};

//public: class c_editable_property<class c_particle_state_list> const & c_particle_controller_parameter::get_property(void) const
//{
//    mangled_ppc("?get_property@c_particle_controller_parameter@@QBAABV?$c_editable_property@Vc_particle_state_list@@@@XZ");
//};

//public: void c_particle_movement_definition::collide_particle(class c_particle *, float, float) const
//{
//    mangled_ppc("?collide_particle@c_particle_movement_definition@@QBAXPAVc_particle@@MM@Z");
//};

//public: bool c_particle_definition::get_particle_dies_on_structure_collision(void) const
//{
//    mangled_ppc("?get_particle_dies_on_structure_collision@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_dies_on_water_collision(void) const
//{
//    mangled_ppc("?get_particle_dies_on_water_collision@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_dies_on_air_collision(void) const
//{
//    mangled_ppc("?get_particle_dies_on_air_collision@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_has_collision_attachment(void) const
//{
//    mangled_ppc("?get_particle_has_collision_attachment@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_has_first_collision_attachment(void) const
//{
//    mangled_ppc("?get_particle_has_first_collision_attachment@c_particle_definition@@QBA_NXZ");
//};

//private: void c_particle_controller::update_particles_collider(class c_particle_system const *, class c_particle_location const *, class c_particle_movement_definition const *, long, float, unsigned long) const
//{
//    mangled_ppc("?update_particles_collider@c_particle_controller@@ABAXPBVc_particle_system@@PBVc_particle_location@@PBVc_particle_movement_definition@@JMK@Z");
//};

//public: void s_particle_heap::insert(float, long)
//{
//    mangled_ppc("?insert@s_particle_heap@@QAAXMJ@Z");
//};

//public: void s_particle_heap::heap_up(long, float, long)
//{
//    mangled_ppc("?heap_up@s_particle_heap@@QAAXJMJ@Z");
//};

//public: void s_particle_heap::heap_down_full_heap(long, float, long)
//{
//    mangled_ppc("?heap_down_full_heap@s_particle_heap@@QAAXJMJ@Z");
//};

//float get_particle_priority(class c_particle *, float *const, float, float)
//{
//    mangled_ppc("?get_particle_priority@@YAMPAVc_particle@@QAMMM@Z");
//};

//private: void c_particle_controller::update_particles_flocking(class c_particle_system const *, class c_particle_location const *, long, float) const
//{
//    mangled_ppc("?update_particles_flocking@c_particle_controller@@ABAXPBVc_particle_system@@PBVc_particle_location@@JM@Z");
//};

//class c_particle const * calculate_closest_neighbor(class c_particle const *, long, class c_particle_system const *)
//{
//    mangled_ppc("?calculate_closest_neighbor@@YAPBVc_particle@@PBV1@JPBVc_particle_system@@@Z");
//};

//void accumulate_separation_force(class c_particle const *, class c_particle const *, float, float, union vector3d *)
//{
//    mangled_ppc("?accumulate_separation_force@@YAXPBVc_particle@@0MMPATvector3d@@@Z");
//};

//void accumulate_cohesion_force(class c_particle const *, union real_point3d const *, float, float, union vector3d *)
//{
//    mangled_ppc("?accumulate_cohesion_force@@YAXPBVc_particle@@PBTreal_point3d@@MMPATvector3d@@@Z");
//};

//void accumulate_alignment_force(class c_particle const *, class c_particle const *, float, union vector3d *)
//{
//    mangled_ppc("?accumulate_alignment_force@@YAXPBVc_particle@@0MPATvector3d@@@Z");
//};

//void accumulate_avoidance_force(class c_particle const *, float, union vector3d *)
//{
//    mangled_ppc("?accumulate_avoidance_force@@YAXPBVc_particle@@MPATvector3d@@@Z");
//};

//private: void c_particle_controller::update_particles_wind(class c_particle_system const *, class c_particle_location const *, long, float) const
//{
//    mangled_ppc("?update_particles_wind@c_particle_controller@@ABAXPBVc_particle_system@@PBVc_particle_location@@JM@Z");
//};

//private: void c_particle_controller::update_particles_turbulence(class c_particle_system const *, class c_particle_location const *, long, float) const
//{
//    mangled_ppc("?update_particles_turbulence@c_particle_controller@@ABAXPBVc_particle_system@@PBVc_particle_location@@JM@Z");
//};

//private: static void c_particle_controller::update_particles_debris(class c_particle_system const *, class c_particle_location const *, long, float)
//{
//    mangled_ppc("?update_particles_debris@c_particle_controller@@CAXPBVc_particle_system@@PBVc_particle_location@@JM@Z");
//};

//public: void c_particle_movement_definition::update_particles(class c_particle_system const *, class c_particle_location const *, long, float) const
//{
//    mangled_ppc("?update_particles@c_particle_movement_definition@@QBAXPBVc_particle_system@@PBVc_particle_location@@JM@Z");
//};

//public: void c_particle_controller::update_particles(class c_particle_system const *, class c_particle_location const *, class c_particle_movement_definition const *, long, float, unsigned long) const
//{
//    mangled_ppc("?update_particles@c_particle_controller@@QBAXPBVc_particle_system@@PBVc_particle_location@@PBVc_particle_movement_definition@@JMK@Z");
//};

//public: unsigned short c_particle_controller::get_type(void) const
//{
//    mangled_ppc("?get_type@c_particle_controller@@QBAGXZ");
//};

//public: class c_particle_controller const * c_particle_movement_definition::get_controller_by_index(long) const
//{
//    mangled_ppc("?get_controller_by_index@c_particle_movement_definition@@QBAPBVc_particle_controller@@J@Z");
//};

//public: class c_particle_controller const * c_particle_movement_definition::get_controller_by_type(long) const
//{
//    mangled_ppc("?get_controller_by_type@c_particle_movement_definition@@QBAPBVc_particle_controller@@J@Z");
//};

//public: class c_editable_property<class c_particle_state_list> const * c_particle_movement_definition::get_property_by_id(long, long) const
//{
//    mangled_ppc("?get_property_by_id@c_particle_movement_definition@@QBAPBV?$c_editable_property@Vc_particle_state_list@@@@JJ@Z");
//};

//public: class c_particle_controller_parameter const * c_particle_controller::get_parameter_by_id_indexed(long) const
//{
//    mangled_ppc("?get_parameter_by_id_indexed@c_particle_controller@@QBAPBVc_particle_controller_parameter@@J@Z");
//};

//public: class c_particle_controller const * c_particle_movement_definition::get_collider_controller(void) const
//{
//    mangled_ppc("?get_collider_controller@c_particle_movement_definition@@QBAPBVc_particle_controller@@XZ");
//};

//public: class c_particle_controller const * c_particle_movement_definition::get_turbulence_controller(void) const
//{
//    mangled_ppc("?get_turbulence_controller@c_particle_movement_definition@@QBAPBVc_particle_controller@@XZ");
//};

//public: class c_particle_controller_parameter * c_particle_controller::find_parameter_by_id(long)
//{
//    mangled_ppc("?find_parameter_by_id@c_particle_controller@@QAAPAVc_particle_controller_parameter@@J@Z");
//};

//public: long c_particle_controller_parameter::get_parameter_id(void) const
//{
//    mangled_ppc("?get_parameter_id@c_particle_controller_parameter@@QBAJXZ");
//};

//public: class c_particle_controller_parameter * c_particle_controller::get_parameter(long)
//{
//    mangled_ppc("?get_parameter@c_particle_controller@@QAAPAVc_particle_controller_parameter@@J@Z");
//};

//public: class c_particle_controller_parameter const * c_particle_controller::find_parameter_by_id(long) const
//{
//    mangled_ppc("?find_parameter_by_id@c_particle_controller@@QBAPBVc_particle_controller_parameter@@J@Z");
//};

//public: class c_particle_controller_parameter const * c_particle_controller::get_parameter(long) const
//{
//    mangled_ppc("?get_parameter@c_particle_controller@@QBAPBVc_particle_controller_parameter@@J@Z");
//};

//public: class c_particle_controller_parameter * c_particle_controller::create_parameter(long)
//{
//    mangled_ppc("?create_parameter@c_particle_controller@@QAAPAVc_particle_controller_parameter@@J@Z");
//};

//public: void c_particle_controller_parameter::set_parameter_id(long)
//{
//    mangled_ppc("?set_parameter_id@c_particle_controller_parameter@@QAAXJ@Z");
//};

//public: void c_particle_controller::delete_parameter(long)
//{
//    mangled_ppc("?delete_parameter@c_particle_controller@@QAAXJ@Z");
//};

//public: static bool c_particle_controller::compare_parameters(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_parameters@c_particle_controller@@SA_NPBX00@Z");
//};

//public: void c_particle_controller::fully_index_parameters_and_postprocess(class c_particle_movement_definition *)
//{
//    mangled_ppc("?fully_index_parameters_and_postprocess@c_particle_controller@@QAAXPAVc_particle_movement_definition@@@Z");
//};

//public: float * c_editable_property_base::get_forced_constant_reference(void)
//{
//    mangled_ppc("?get_forced_constant_reference@c_editable_property_base@@QAAPAMXZ");
//};

//public: void c_editable_property_base::set_forced_constant(float)
//{
//    mangled_ppc("?set_forced_constant@c_editable_property_base@@QAAXM@Z");
//};

//public: class c_editable_property<class c_particle_state_list> & c_particle_controller_parameter::get_property(void)
//{
//    mangled_ppc("?get_property@c_particle_controller_parameter@@QAAAAV?$c_editable_property@Vc_particle_state_list@@@@XZ");
//};

//public: class c_particle_controller_parameter * c_particle_controller::get_parameter_by_id_indexed(long)
//{
//    mangled_ppc("?get_parameter_by_id_indexed@c_particle_controller@@QAAPAVc_particle_controller_parameter@@J@Z");
//};

//public: long c_particle_movement_definition::get_controller_index_by_type(long) const
//{
//    mangled_ppc("?get_controller_index_by_type@c_particle_movement_definition@@QBAJJ@Z");
//};

//public: class c_particle_controller * c_particle_movement_definition::get_controller_by_type(long)
//{
//    mangled_ppc("?get_controller_by_type@c_particle_movement_definition@@QAAPAVc_particle_controller@@J@Z");
//};

//public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::get_property(long, long)
//{
//    mangled_ppc("?get_property@c_particle_movement_definition@@QAAPAV?$c_editable_property@Vc_particle_state_list@@@@JJ@Z");
//};

//public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::get_default_property(long, long)
//{
//    mangled_ppc("?get_default_property@c_particle_movement_definition@@QAAPAV?$c_editable_property@Vc_particle_state_list@@@@JJ@Z");
//};

//public: static class c_particle_movement_definition * c_particle_movement_definition::get_modifiable(long)
//{
//    mangled_ppc("?get_modifiable@c_particle_movement_definition@@SAPAV1@J@Z");
//};

//public: float const * c_particle_movement_definition::get_default_value(long, long)
//{
//    mangled_ppc("?get_default_value@c_particle_movement_definition@@QAAPBMJJ@Z");
//};

//public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::create_property(long, long)
//{
//    mangled_ppc("?create_property@c_particle_movement_definition@@QAAPAV?$c_editable_property@Vc_particle_state_list@@@@JJ@Z");
//};

//public: class c_editable_property<class c_particle_state_list> * c_particle_movement_definition::create_property(long, long, class c_editable_property<class c_particle_state_list> const *)
//{
//    mangled_ppc("?create_property@c_particle_movement_definition@@QAAPAV?$c_editable_property@Vc_particle_state_list@@@@JJPBV2@@Z");
//};

//public: void c_editable_property_base::clone(class c_editable_property_base const &)
//{
//    mangled_ppc("?clone@c_editable_property_base@@QAAXABV1@@Z");
//};

//public: void c_particle_controller::set_type(long)
//{
//    mangled_ppc("?set_type@c_particle_controller@@QAAXJ@Z");
//};

//public: void c_particle_movement_definition::delete_property(long, long)
//{
//    mangled_ppc("?delete_property@c_particle_movement_definition@@QAAXJJ@Z");
//};

//public: void c_particle_movement_definition::sort_controllers(void)
//{
//    mangled_ppc("?sort_controllers@c_particle_movement_definition@@QAAXXZ");
//};

//bool compare_controllers(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_controllers@@YA_NPBX00@Z");
//};

//public: static bool c_particle_movement_definition::postprocess_block_proc(long, void *, bool)
//{
//    mangled_ppc("?postprocess_block_proc@c_particle_movement_definition@@SA_NJPAX_N@Z");
//};

//public: static bool c_particle_movement_definition::postprocess_tag_proc(long, bool)
//{
//    mangled_ppc("?postprocess_tag_proc@c_particle_movement_definition@@SA_NJ_N@Z");
//};

//public: static void c_particle_movement_definition::missing_tag_proc(unsigned long, char const *, unsigned long, unsigned long, char const *, long *)
//{
//    mangled_ppc("?missing_tag_proc@c_particle_movement_definition@@SAXKPBDKK0PAJ@Z");
//};

//public: bool c_particle_movement_definition::type_enabled(long)
//{
//    mangled_ppc("?type_enabled@c_particle_movement_definition@@QAA_NJ@Z");
//};

//public: bool c_particle_movement_definition::postprocess_internal(bool)
//{
//    mangled_ppc("?postprocess_internal@c_particle_movement_definition@@QAA_N_N@Z");
//};

//public: static class c_particle_movement_definition const * c_particle_movement_definition::get(long)
//{
//    mangled_ppc("?get@c_particle_movement_definition@@SAPBV1@J@Z");
//};

//public: unsigned short * c_particle_movement_definition::get_flags_reference(void)
//{
//    mangled_ppc("?get_flags_reference@c_particle_movement_definition@@QAAPAGXZ");
//};

//public: unsigned long c_particle_movement_definition::get_used_particle_states(void) const
//{
//    mangled_ppc("?get_used_particle_states@c_particle_movement_definition@@QBAKXZ");
//};

//public: unsigned long c_particle_controller::get_used_particle_states(void) const
//{
//    mangled_ppc("?get_used_particle_states@c_particle_controller@@QBAKXZ");
//};

//public: bool c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::test(enum e_collision_test_objects_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@QBA_NW4e_collision_test_objects_flag@@@Z");
//};

