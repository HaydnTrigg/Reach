/* ---------- headers */

#include "omaha\physics\havok_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct c_havok_component::s_powered_chain_link_reference const k_invalid_powered_chain_link_reference; // "?k_invalid_powered_chain_link_reference@@3Us_powered_chain_link_reference@c_havok_component@@B"
// public: static long const c_big_flags_typed_no_init<long, 4096>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0BAAA@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 4096>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0BAAA@@@2JB"
// public: static long const s_static_array<class hkpShape const *, 1024>::k_element_count; // "?k_element_count@?$s_static_array@PBVhkpShape@@$0EAA@@@2JB"
// unsigned int const *const const `public: void __cdecl hkVector4::setNeg3(class hkVector4const &)'::`2'::negateMask; // "?negateMask@?1??setNeg3@hkVector4@@QAAXABV2@@Z@4QBIB"
// struct s_data_array *g_havok_contact_point_data; // "?g_havok_contact_point_data@@3PAUs_data_array@@A"

// void havok_components_initialize_global_allocations(void);
// public: struct s_data_array * c_havok_component_data::get(void);
// public: void c_havok_component_data::set(struct s_data_array *);
// void havok_components_dispose_global_allocations(void);
// void havok_components_initialize(void);
// void havok_components_dispose(void);
// void havok_components_initialize_for_new_map(void);
// void havok_components_dispose_from_old_map(void);
// private: void * c_havok_component::`scalar deleting destructor'(unsigned int);
// void havok_components_dispose_from_old_map_fast(void);
// struct s_data_array * havok_components_get_data_array(void);
// void DEBUG_validate_havok_components(bool);
// void havok_components_disconnect_from_havok_world(void);
// public: void c_havok_component::pre_simulation_update(long);
// private: void c_havok_component::update_rigid_body_pre_simulation_state(long);
// public: void c_havok_component::c_rigid_body::set_pre_simulation_state(union real_point3d const *, union vector3d const *, union vector3d const *);
// long havok_component_new(long);
// void havok_component_construct(long);
// void havok_component_delete(long);
// long havok_entity_get_havok_component_index(class hkpWorldObject const *);
// void havok_entity_set_havok_component_index(class hkpWorldObject *, long);
// enum e_havok_group havok_entity_get_default_group(class hkpWorldObject const *);
// void havok_entity_set_default_group(class hkpWorldObject *, enum e_havok_group);
// long havok_entity_get_structure_bsp_index(class hkpWorldObject const *);
// void havok_entity_set_structure_bsp_index(class hkpWorldObject *, long);
// long havok_entity_get_havok_component_rigid_body_index(class hkpWorldObject const *);
// void havok_entity_set_havok_component_rigid_body_index(class hkpWorldObject *, long);
// public: c_havok_contact_point::c_havok_contact_point(unsigned short, long, long, bool, unsigned int, long, class hkpRigidBody const *, class hkpRigidBody const *, long, unsigned char, float, float, class c_global_material_type, class c_global_material_type);
// public: float c_havok_contact_point::get_distance(void) const;
// public: union real_point3d const * c_havok_contact_point::get_position(void) const;
// public: union vector3d const * c_havok_contact_point::get_normal(void) const;
// public: void c_havok_contact_point::get_surface_normal(union vector3d *) const;
// public: bool c_havok_contact_point::get_life_cycle_flag_is_deleted(void) const;
// public: bool c_havok_contact_point::get_life_cycle_flag_is_new(void) const;
// public: void c_havok_contact_point::clear_life_cycle_flags(void);
// public: void c_havok_contact_point::notify_is_deleted(void);
// public: bool c_havok_contact_point::is_climbable_surface(void) const;
// public: bool c_havok_contact_point::is_slip_surface(void) const;
// public: bool c_havok_contact_point::is_physics_only_surface(void) const;
// public: bool c_havok_contact_point::get_supresses_impact_effects(void) const;
// public: bool c_havok_contact_point::is_breakable_surface(void) const;
// public: long c_havok_contact_point::get_contact_point_object_index(void) const;
// public: long c_havok_contact_point::get_contact_havok_component_index(void) const;
// public: long c_havok_contact_point::get_contact_surface_index(void) const;
// public: void c_havok_contact_point::update(bool, class hkVector4const *, class hkVector4const *, class hkpDynamicsContactMgr *, class hkpShape const *, bool, long, long);
// public: class c_global_material_type c_havok_contact_point::calculate_global_material_type_a(void) const;
// public: class c_global_material_type c_havok_contact_point::get_global_material_type_a(void) const;
// public: class c_global_material_type c_havok_contact_point::calculate_global_material_type_b(void) const;
// public: class c_global_material_type c_havok_contact_point::get_global_material_type_b(void) const;
// private: void c_havok_contact_point::update_contact_point_properties(class hkpContactPointProperties *, long);
// public: void hkContactPointMaterial::setFriction(float);
// public: void hkContactPointMaterial::setRestitution(float);
// private: c_havok_component::c_havok_component(long);
// private: c_havok_component::~c_havok_component(void);
// public: void * hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: class hkpRigidBody * c_havok_component::DEBUG_get_rigid_body(long);
// private: class hkpRigidBody * c_havok_component::get_rigid_body(long);
// public: void c_havok_component::DEBUG_validate(bool);
// public: class hkpRigidBody * c_havok_component::get_havok_rigid_body(long);
// public: long c_havok_component::list_rigid_body_entities(class hkpEntity const **, long);
// public: void c_havok_component::notify_matrices_clean(void);
// public: void c_havok_component::move_simple_shape_phantom(struct real_matrix4x3const *);
// public: void c_havok_component::move_aabb_phantom(union real_rectangle3d const *);
// public: long c_havok_component::calculate_rigid_body_index_from_node_index(long) const;
// private: long c_havok_component::find_rigid_body_index_from_physics_model_rigid_body_index(long) const;
// public: class hkpRigidBody * c_havok_component::construct_proxy_rigid_body(long);
// long havok_shape_count_convex_shapes_recursive(class hkpShape const *);
// public: void c_havok_component::render_debug(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool);
// public: class hkTransform const & hkpShapePhantom::getTransform(void) const;
// public: static int hkpGroupFilter::getLayerFromFilterInfo(unsigned int);
// public: void c_havok_component::c_constraint::render_debug(void);
// public: void c_havok_component::c_constraint::get_connected_rigid_bodies(class hkpRigidBody const **, class hkpRigidBody const **) const;
// public: void c_havok_component::c_constraint::get_pivots(union real_point3d *, union real_point3d *) const;
// public: class hkpConstraintInstance const * c_havok_component::c_constraint::get_constraint(void) const;
// private: void c_havok_component::add_rigid_body(class hkpRigidBody *, char const *, long, bool, enum e_havok_group);
// private: void c_havok_component::add_constraint(class hkpConstraintInstance *, enum e_physics_model_constraint_type, long, bool);
// public: c_havok_component::c_constraint::c_constraint(class hkpConstraintInstance *, enum e_physics_model_constraint_type, long, bool);
// public: c_havok_component::c_constraint::~c_constraint(void);
// public: void c_havok_component::clear_rigid_bodies(void);
// public: long c_havok_component::notify_contact_point_added(long, unsigned short, long, bool, unsigned int, long, long, unsigned char, class hkpRigidBody *, class hkpRigidBody *, float, float, class c_global_material_type, class c_global_material_type);
// public: void c_havok_contact_point::set_next_havok_contact_point_datum_index(long);
// public: bool c_havok_component::delete_all_contact_points(void);
// public: long c_havok_contact_point::get_havok_component_index(void) const;
// public: void c_havok_component::notify_contact_point_removed(struct hkpContactPointRemovedEvent const *, class hkpRigidBody const *, class hkpRigidBody const *);
// public: bool c_havok_contact_point::matches_contact_description(unsigned short, long, long, long, long) const;
// public: void c_havok_component::remove_contact_point_references(long);
// public: void c_havok_component::remove_contact_point(long, long);
// public: void c_havok_component::notify_contact_point_process(struct hkpContactProcessEvent *, long, long, long, long, long);
// public: int hkpProcessCollisionData::getNumContactPoints(void) const;
// public: float c_havok_component::get_system_total_mass(void) const;
// public: void c_havok_component::get_system_center_of_mass(union real_point3d *) const;
// public: void c_havok_component::get_rigid_body_position(long, union real_point3d *) const;
// private: class hkpRigidBody const * c_havok_component::get_rigid_body(long) const;
// public: class hkpRigidBody * c_havok_component::c_rigid_body::get_rigid_body(void) const;
// public: void c_havok_component::get_rigid_body_center_of_mass(long, union real_point3d *) const;
// public: void c_havok_component::get_rigid_body_transform(long, struct real_matrix4x3*) const;
// public: void c_havok_component::get_rigid_body_transform_direct(long, struct real_matrix4x3*) const;
// public: void c_havok_component::get_rigid_body_child_shape_relative_transform(long, long, struct real_matrix4x3*) const;
// public: void c_havok_component::get_rigid_body_orientation(long, struct real_orientation *) const;
// public: void c_havok_component::get_rigid_body_linear_velocity(long, union vector3d *) const;
// public: void c_havok_component::get_rigid_body_linear_velocity_at_point(long, union vector3d *, union real_point3d const *) const;
// public: void c_havok_component::get_rigid_body_pre_simulation_linear_velocity_at_point(long, union vector3d *, union real_point3d const *) const;
// public: void c_havok_component::get_rigid_body_angular_velocity(long, union vector3d *) const;
// public: void c_havok_component::get_rigid_body_inverse_inertia_tensor(long, struct matrix3x3*) const;
// public: void c_havok_component::get_rigid_body_inertia_tensor(long, struct matrix3x3*) const;
// public: float c_havok_component::get_rigid_body_mass(long) const;
// public: class c_global_material_type c_havok_component::get_rigid_body_material_type(long) const;
// public: union vector3d const * c_havok_component::get_rigid_body_pre_simulation_linear_velocity(long) const;
// public: union vector3d const * c_havok_component::c_rigid_body::get_pre_simulation_linear_velocity(void) const;
// public: union vector3d const * c_havok_component::get_rigid_body_pre_simulation_angular_velocity(long) const;
// public: union vector3d const * c_havok_component::c_rigid_body::get_pre_simulation_angular_velocity(void) const;
// public: union real_point3d const * c_havok_component::get_rigid_body_pre_simulation_position(long) const;
// public: union real_point3d const * c_havok_component::c_rigid_body::get_pre_simulation_position(void) const;
// public: class hkpCollidable const * c_havok_component::get_rigid_body_collidable(long) const;
// public: bool c_havok_component::get_rigid_body_has_infinite_inertia_tensor(long) const;
// public: bool c_havok_component::c_rigid_body::has_infinite_inertia_tensor(void) const;
// public: bool c_havok_component::has_rigid_body_with_infinite_inertia_tensor(void) const;
// public: bool c_havok_component::get_rigid_body_is_fixed(long) const;
// public: bool c_havok_component::get_rigid_body_is_keyframed(long) const;
// public: bool c_havok_component::get_rigid_body_is_dynamic(long) const;
// public: unsigned long c_havok_component::get_rigid_body_collision_filter_info(long) const;
// public: bool c_havok_component::get_rigid_body_is_in_simulation_island_with_active_rigid_bodies_of_other_objects(long, long) const;
// public: enum e_rigid_body_size c_havok_component::get_maximum_rigid_body_size(void) const;
// public: bool c_havok_component::rigid_body_is_shape_current_shape(long, class hkpShape const *);
// public: void c_havok_component::set_rigid_body_transform(long, struct real_matrix4x3const *);
// private: void c_havok_component::set_rigid_body_transform_internal(long, class hkTransform const *);
// public: void c_havok_component::set_rigid_body_linear_velocity(long, union vector3d const *);
// public: void c_havok_component::set_rigid_body_angular_velocity(long, union vector3d const *);
// public: void c_havok_component::set_rigid_body_gravity_factor(long, float);
// public: void c_havok_component::rigid_body_apply_hard_keyframe(long, struct real_matrix4x3const *);
// public: void c_havok_component::rigid_body_apply_soft_keyframe(long, struct real_matrix4x3const *, float);
// public: hkpKeyFrameUtility::KeyFrameInfo::KeyFrameInfo(void);
// public: void c_havok_component::rigid_body_apply_acceleration(long, union vector3d const *);
// public: void c_havok_component::rigid_body_apply_angular_acceleration(long, union vector3d const *);
// public: void c_havok_component::rigid_body_apply_acceleration_at_point(long, union real_point3d const *, union vector3d const *, float);
// public: float c_havok_component::rigid_body_calculate_radius(long) const;
// public: void c_havok_component::disconnect_from_havok_world(void);
// public: void c_havok_component::notify_physical_child_object_parent_disconnected_from_physics(void);
// public: void c_havok_component::connect_to_havok_world(void);
// public: bool c_havok_component::is_connected_to_world(void) const;
// public: void c_havok_component::save_rigid_body_state(struct s_havok_component_rigid_body_state *) const;
// public: void c_havok_component::restore_rigid_body_state(struct s_havok_component_rigid_body_state const *);
// public: bool c_havok_component::is_active(void) const;
// public: bool c_havok_component::is_active(long) const;
// public: void c_havok_component::force_activate(bool);
// public: void c_havok_component::find_initial_contact_points(void);
// public: bool c_havok_component::has_dynamic_rigid_bodies(void) const;
// public: bool c_havok_component::has_dynamic_object_position_controlling_rigid_body(void) const;
// public: bool const c_havok_component::is_collision_model_havok_component(void) const;
// public: void c_havok_component::notify_entity_entered_phantom_material(long, long, class hkpWorldObject const *, class hkpWorldObject const *, long);
// public: void c_havok_component::notify_entity_left_phantom_material(long, long, class hkpWorldObject const *, class hkpWorldObject const *, long);
// public: void c_havok_component::update_phantom_physics_version(void);
// public: void c_havok_component::wake_all_bodies_in_phantoms(void);
// public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void);
// public: `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::c_point_collector(struct `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::s_body_in_phantom_with_owner *, long, long *, long);
// public: virtual void `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::addCdPoint(struct hkpCdPoint const &);
// public: virtual void `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::add_phantom_callback_shape(class hkpCdBody const &);
// public: long c_phantom_shape::get_phantom_material_index(void) const;
// public: virtual `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::~c_point_collector(void);
// merged_83175278;
// public: void c_havok_component::update_phantoms(bool);
// public: static bool c_havok_component::update_phantom(long, bool, struct c_havok_component::s_body_in_phantom const &, bool, float &, bool &, bool &, bool &);
// bool entity_should_update_in_phantom(long, long, long, long);
// public: class hkpSimpleShapePhantom * c_havok_component::get_simple_shape_phantom(void);
// public: class hkpAabbPhantom * c_havok_component::get_aabb_phantom(void);
// public: void c_havok_component::scale_constraint_limit_tau(long, float);
// public: void hkpLimitedHingeConstraintData::setAngularLimitsTauFactor(float);
// public: void hkpRagdollConstraintData::setAngularLimitsTauFactor(float);
// public: void c_havok_component::scale_constraint_motor_power(long, float);
// public: class hkpConstraintMotor * hkpLimitedHingeConstraintData::getMotor(void) const;
// void scale_constraint_motor(struct s_physics_model_definition const *, struct s_physics_model_motor_reference, class hkpConstraintMotor *, float);
// public: void hkpLimitedForceConstraintMotor::setMaxForce(float);
// public: void hkpLimitedForceConstraintMotor::setMinMaxForces(float, float);
// public: long c_havok_component::find_constraint_connecting_nodes(long, long, long) const;
// public: struct c_havok_component::s_powered_chain_link_reference c_havok_component::find_powered_chain_reference_connecting_nodes(long, long) const;
// public: void c_havok_component::keyframe_ragdoll_constraint(long, struct matrix3x3const *, bool);
// public: void c_havok_component::keyframe_powered_chain_link(struct c_havok_component::s_powered_chain_link_reference, struct matrix3x3const *);
// public: void c_havok_component::keyframe_limited_hinge_constraint(long, float, bool);
// public: void hkpLimitedHingeConstraintData::disableLimits(void);
// public: void hkpLimitedHingeConstraintData::setMotorTargetAngle(float);
// public: void c_havok_component::disable_limited_hinge_constraint_limits(long);
// public: float c_havok_component::get_limited_hinge_constraint_angle(long) const;
// public: long c_havok_component::find_constraint(struct s_physics_model_constraint_reference) const;
// public: void c_havok_component::destroy_constraint(long);
// public: void * c_havok_component::c_constraint::`scalar deleting destructor'(unsigned int);
// public: void c_havok_component::create_constraint(struct s_physics_model_instance const *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const *, struct s_physics_model_node_constraint_edge_constraint const *, struct real_matrix4x3const *, bool);
// public: void hkpLimitedHingeConstraintData::setMaxAngularLimit(float);
// public: void hkpLimitedHingeConstraintData::setMinAngularLimit(float);
// public: void hkpLimitedHingeConstraintData::setMaxFrictionTorque(float);
// public: void hkpRagdollConstraintData::setTwistMinAngularLimit(float);
// public: void hkpRagdollConstraintData::setTwistMaxAngularLimit(float);
// public: void hkpRagdollConstraintData::setPlaneMinAngularLimit(float);
// public: void hkpRagdollConstraintData::setPlaneMaxAngularLimit(float);
// public: void hkpRagdollConstraintData::setConeAngularLimit(float);
// public: void hkpStiffSpringConstraintData::setInWorldSpace(class hkTransform const &, class hkTransform const &, class hkVector4const &, class hkVector4const &);
// public: void hkpStiffSpringConstraintData::setSpringLength(float);
// public: void hkpPrismaticConstraintData::setMaxLinearLimit(float);
// public: void hkpPrismaticConstraintData::setMinLinearLimit(float);
// public: void hkpPrismaticConstraintData::setMaxFrictionForce(float);
// class hkpConstraintMotor * build_motor_from_motor_reference(struct s_physics_model_instance const *, struct s_physics_model_motor_reference const *, float *);
// public: static void * hkpLimitedForceConstraintMotor::operator new(unsigned int);
// public: void c_havok_component::align_constraint_positions(void);
// private: void c_havok_component::align_constraint_positions_recursive(long, class c_big_flags_typed_no_init<long, 64> *);
// public: void c_havok_component::notify_has_physical_child_object(void);
// public: long c_havok_component::get_bodies_in_phantoms_count(void) const;
// public: void c_havok_component::get_bodies_in_phantom_info(long, long *, long *, long *) const;
// public: long c_havok_component::calculate_heap_memory_usage(long *, long *, long *, long *) const;
// public: void c_havok_component::calculate_rigid_body_correction_vectors(union vector3d *, long, class c_big_flags_typed_no_init<long, 64> *) const;
// public: void c_havok_component::body_slam_object_node_matrices(class c_big_flags_typed_no_init<long, 255> *, float);
// void compute_rigid_body_correction_tree_recursive(class c_havok_component const *, struct s_model_definition const *, long, class c_runtime_node_to_havok_component_rigid_body_index_mapping const *, class s_static_array<union vector3d, 64> *, class c_big_flags_typed_no_init<long, 64> *, long);
// private: void c_havok_component::body_slam_unsimulated_nodes_recursive(long, class c_big_flags_typed_no_init<long, 255> *, class c_big_flags_typed_no_init<long, 255> const *, struct real_orientation *, long);
// public: void c_havok_component::align_rigid_bodies_to_object_tranform(long, bool, bool);
// public: void c_havok_component::calculate_object_transform(struct real_matrix4x3*) const;
// public: void c_havok_component::calculate_object_transform(struct real_matrix4x3*, struct real_matrix4x3const *) const;
// public: bool c_havok_component::calculate_physics_bounding_sphere(union real_point3d *, float *) const;
// public: bool c_havok_component::calculate_physics_bounding_box(union real_rectangle3d *) const;
// public: class hkAabb & hkAabb::operator=(class hkAabb const &);
// public: bool c_havok_component::calculate_local_space_physics_bounding_box(long, union real_rectangle3d *) const;
// public: bool c_havok_component::rigid_body_calculate_fixed_position(long, enum e_havok_group, union real_point3d const *, union vector3d const *, union real_point3d *, struct s_location *, float, float, bool, union real_point3d const *, long);
// public: bool c_havok_component::rigid_body_calculate_fixed_position_along_z(long, enum e_havok_group, class hkpShape const *, float, long, long *);
// public: class hkTransform & hkTransform::operator=(class hkTransform const &);
// public: bool c_havok_component::fix_rigid_body_position_along_vector(long, enum e_havok_group, struct real_matrix4x3const *, union vector3d const *, long, long *, struct real_matrix4x3*) const;
// union real_point3d * real_point3d_from_hkVector4_in_place(class hkVector4*);
// public: bool c_havok_component::calculate_impulse(long, long, long, bool, float *, union real_point3d *, union vector3d *) const;
// public: long c_havok_component::find_impact_which_includes_contact(struct c_impact::s_contact_description const *, bool) const;
// public: long c_havok_component::get_constraint_impact_datum_index(long) const;
// public: long c_havok_component::c_constraint::get_constraint_impact_datum_index(void) const;
// public: bool c_havok_component::make_space_for_new_impact(float, long);
// public: void c_havok_component::disconnect_from_impacts(void);
// public: void c_havok_component::set_rigid_body_group(enum e_havok_group);
// public: bool c_havok_component::has_rigid_body_in_same_group(class c_havok_component const *) const;
// private: void c_havok_component::build_crate_component(void);
// private: void c_havok_component::build_scenery_component(void);
// private: void c_havok_component::build_control_component(void);
// private: void c_havok_component::build_terminal_component(void);
// private: void c_havok_component::build_vehicle_component(void);
// private: enum e_rigid_body_size c_havok_component::build_physics_model_component(bool, bool);
// private: long c_havok_component::build_rigid_body_construction_templates(bool, bool, struct s_physics_model_instance const *, struct c_havok_component::s_rigid_body_construction_template *, long, enum e_rigid_body_size *);
// private: void c_havok_component::build_physics_model_component_from_templates(struct c_havok_component::s_rigid_body_construction_template const *, long);
// private: bool c_havok_component::build_physics_model_rigid_body_for_node(struct s_physics_model_instance const *, long, enum e_rigid_body_size *, class c_big_flags_typed_no_init<long, 255> *, char const *, class c_runtime_node_to_physics_model_rigid_body_index_mapping const *, struct c_havok_component::s_rigid_body_construction_template *);
// float substitute_default_zero(float, float);
// bool havok_motion_type_is_simulated(enum hkpMotion::MotionType);
// private: class hkpShape const * c_havok_component::build_physics_model_rigid_body_shape(struct s_physics_model_instance const *, char const *, char *, long *, class c_runtime_node_to_physics_model_rigid_body_index_mapping const *, long, class c_big_flags_typed_no_init<long, 255> *, float *, class hkVector4*, class hkMatrix3*, bool *, enum e_rigid_body_size *, bool *, unsigned long *, bool *);
// public: hkpMassProperties::hkpMassProperties(void);
// void physics_model_rigid_body_shape_list_append_rigid_body(long, bool, struct s_physics_model_rigid_body const *, struct render_model_definition const *, class hkTransform &, class s_static_array<class hkpShape const *, 1024> &, long *);
// public: static void * hkpConvexTransformShape::operator new(unsigned int);
// public: static void * hkpConvexTranslateShape::operator new(unsigned int);
// public: hkpConvexTranslateShape::hkpConvexTranslateShape(class hkpConvexShape const *, class hkVector4const &, enum hkpShapeContainer::ReferencePolicy);
// merged_83185160;
// public: static void hkpConvexTranslateShape::operator delete(void *);
// public: virtual hkpConvexTranslateShape::~hkpConvexTranslateShape(void);
// private: void c_havok_component::generate_rigid_edges_bit_vector(struct s_physics_model_instance const *, class c_big_flags_typed_no_init<long, 4096> *);
// private: void c_havok_component::generate_rigidly_constrained_shape_list_recursive(struct s_physics_model_instance const *, char const *, class c_big_flags_typed_no_init<long, 4096> const *, class c_runtime_node_to_physics_model_rigid_body_index_mapping const *, long, long, long, char *, long *, long, class c_big_flags_typed_no_init<long, 255> *, bool *);
// long convert_rigid_body_index_to_alternate_no_phantom_version(struct s_physics_model_instance const *, bool, long, bool *, bool *);
// private: enum e_havok_group c_havok_component::calculate_physics_model_rigid_body_havok_component_group(struct s_physics_model_instance const *, enum e_rigid_body_size, enum hkpMotion::MotionType, long);
// private: void c_havok_component::postprocess_physics_model_havok_component(struct s_physics_model_instance *);
// private: void c_havok_component::build_biped_component(void);
// private: void c_havok_component::build_creature_component(void);
// private: void c_havok_component::build_character_component(struct s_character_physics_definition const *, class c_character_physics_component *, enum e_havok_group, enum e_havok_group, bool, bool, bool, float);
// private: void c_havok_component::build_giant_component(void);
// private: void c_havok_component::build_machine_component(void);
// private: void c_havok_component::build_item_component(void);
// private: void c_havok_component::build_projectile_component(void);
// private: class hkpRigidBody * c_havok_component::build_rigid_body(class hkpShape const *, float, float, bool, class hkVector4const *, float, float, class hkMatrix3const *, float, long, class hkTransform const *, long, float, float);
// void calculate_quality_type_and_maximum_penetration_depth(long, enum hkpCollidableQualityType *, float *, enum hkpMotion::MotionType, long, float);
// private: void c_havok_component::build_powered_chain_constraints(struct s_physics_model_instance *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const &);
// public: static void * hkpPoweredChainData::operator new(unsigned int);
// public: static void * hkpConstraintChainInstance::operator new(unsigned int);
// private: void c_havok_component::build_constraints(struct s_physics_model_instance const *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const &);
// private: bool c_havok_component::calculate_constraint_transforms(struct s_physics_model_instance const *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const *, class hkTransform *, class hkTransform *, class hkpRigidBody **, class hkpRigidBody **, struct s_physics_model_constraint_bodies const *, bool);
// private: void c_havok_component::calculate_transform_between_nodes_on_rigid_body(long, long, long, struct real_matrix4x3*);
// private: static long c_havok_component::rigid_body_motion_type_to_havok_motion_type(long);
// public: c_havok_component::c_rigid_body::c_rigid_body(bool, long, class hkpRigidBody *, char const *, long, bool);
// public: bool c_havok_component::c_rigid_body::is_fixed(void) const;
// public: bool c_havok_component::c_rigid_body::is_keyframed(void) const;
// bool entity_belongs_in_phantom(long, long, long, long);
// public: void hkEnum<enum hkpRigidBodyCinfo::SolverDeactivation, signed char>::operator=(enum hkpRigidBodyCinfo::SolverDeactivation);
// public: void hkEnum<enum hkpCollidableQualityType, signed char>::operator=(enum hkpCollidableQualityType);
// public: unsigned int hkPadSpu<unsigned int>::operator unsigned int(void) const;
// public: struct hkpProcessCdPoint * hkPadSpu<struct hkpProcessCdPoint *>::operator struct hkpProcessCdPoint *(void) const;
// public: c_flags<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>(unsigned char);
// public: hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::pushBack(class c_havok_component::c_constraint const &);
// public: static void * hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: void hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: class c_havok_component::c_rigid_body & hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct s_water_physics_model::s_sphere const * c_static_stack<struct s_water_physics_model::s_sphere, 16>::get(long) const;
// public: long c_data_iterator<class c_havok_component>::get_index(void) const;
// public: hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>(void);
// public: struct c_havok_component::s_body_in_phantom & hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::expandOne(void);
// public: static void * hkArrayBase<struct c_havok_component::s_body_in_phantom>::operator new(unsigned int);
// public: static void hkArrayBase<struct c_havok_component::s_body_in_phantom>::operator delete(void *);
// public: void c_data_iterator<class c_impact>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_impact>::next(void);
// public: class c_impact * c_data_iterator<class c_impact>::get_datum(void) const;
// public: long c_data_iterator<class c_impact>::get_index(void) const;
// public: long c_static_stack<class hkpEntity *, 64>::count(void) const;
// public: void c_static_stack<class hkpEntity *, 64>::push_back(class hkpEntity *const &);
// public: class hkpEntity ** c_static_stack<class hkpEntity *, 64>::get_elements(void);
// public: c_static_stack<class hkpEntity *, 64>::c_static_stack<class hkpEntity *, 64>(void);
// public: c_big_flags<255>::c_big_flags<255>(void);
// public: class hkpShape const ** s_static_array<class hkpShape const *, 1024>::get_elements(void);
// public: hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>(void);
// public: unsigned int hkPadSpu<unsigned int>::val(void) const;
// public: struct hkpProcessCdPoint * hkPadSpu<struct hkpProcessCdPoint *>::val(void) const;
// public: long c_static_stack<class hkpEntity *, 64>::push(void);
// public: class hkpEntity ** c_static_stack<class hkpEntity *, 64>::get(long);
// public: bool c_static_stack<class hkpEntity *, 64>::valid(long) const;
// public: bool c_static_stack<class hkpEntity *, 64>::full(void) const;
// public: bool c_static_stack<class hkpEntity *, 64>::valid(void) const;
// public: void c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum c_havok_contact_point::e_life_cycle_flag) const;
// public: void c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum c_havok_contact_point::e_life_cycle_flag, bool);
// public: void c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: hkInplaceArray<char, 4, struct hkContainerHeapAllocator>::hkInplaceArray<char, 4, struct hkContainerHeapAllocator>(int);
// public: hkArrayBase<class c_havok_component::c_constraint>::hkArrayBase<class c_havok_component::c_constraint>(void);
// public: int hkArrayBase<class c_havok_component::c_constraint>::getCapacity(void) const;
// public: void hkArrayBase<class c_havok_component::c_constraint>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class c_havok_component::c_constraint>::removeAt(int);
// public: void hkArrayBase<class c_havok_component::c_constraint>::_pushBack(class hkMemoryAllocator &, class c_havok_component::c_constraint const &);
// public: hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::~hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class c_havok_component::c_constraint>::~hkArrayBase<class c_havok_component::c_constraint>(void);
// public: int hkArrayBase<class c_havok_component::c_rigid_body>::getCapacity(void) const;
// public: void hkArrayBase<class c_havok_component::c_rigid_body>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class c_havok_component::c_rigid_body>::_reserveExactly(class hkMemoryAllocator &, int);
// public: class c_havok_component::c_rigid_body & hkArrayBase<class c_havok_component::c_rigid_body>::_expandOne(class hkMemoryAllocator &);
// public: hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator>::hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator>(int);
// public: c_havok_component::c_rigid_body::c_rigid_body(void);
// public: bool c_flags_no_init<enum e_physics_model_phantom_flags, unsigned long, 32, struct s_default_enum_string_resolver>::test(enum e_physics_model_phantom_flags) const;
// public: bool c_flags_no_init<enum s_physics_model_node::e_physics_model_node_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum s_physics_model_node::e_physics_model_node_flags) const;
// public: struct hkpPoweredChainData::ConstraintInfo & hkArrayBase<struct hkpPoweredChainData::ConstraintInfo>::operator[](int);
// public: hkArrayBase<struct c_havok_component::s_body_in_phantom>::hkArrayBase<struct c_havok_component::s_body_in_phantom>(void);
// public: struct c_havok_component::s_body_in_phantom & hkArrayBase<struct c_havok_component::s_body_in_phantom>::operator[](int);
// public: int hkArrayBase<struct c_havok_component::s_body_in_phantom>::getSize(void) const;
// public: int hkArrayBase<struct c_havok_component::s_body_in_phantom>::getCapacity(void) const;
// public: void hkArrayBase<struct c_havok_component::s_body_in_phantom>::clear(void);
// public: void hkArrayBase<struct c_havok_component::s_body_in_phantom>::removeAt(int);
// public: struct c_havok_component::s_body_in_phantom & hkArrayBase<struct c_havok_component::s_body_in_phantom>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::~hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct c_havok_component::s_body_in_phantom>::~hkArrayBase<struct c_havok_component::s_body_in_phantom>(void);
// public: bool c_big_flags_typed_no_init<long, 4096>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 4096>::set(long, bool);
// public: struct hkpMassElement & hkArrayBase<struct hkpMassElement>::operator[](int);
// public: hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::~hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>(int);
// public: hkpMassElement::hkpMassElement(void);
// public: class hkpShape const *& s_static_array<class hkpShape const *, 1024>::operator[]<long>(long);
// public: hkArray<char, struct hkContainerHeapAllocator>::hkArray<char, struct hkContainerHeapAllocator>(char *, int, int);
// public: hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>(class c_havok_component::c_rigid_body *, int, int);
// public: void hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>(struct hkpMassElement *, int, int);
// public: void hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: static bool c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_havok_contact_point::e_life_cycle_flag);
// public: bool c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_havok_contact_point::e_life_cycle_flag);
// public: void hkArrayBase<class c_havok_component::c_constraint>::clear(void);
// public: static void hkArrayUtil::destruct<class c_havok_component::c_constraint>(class c_havok_component::c_constraint *, int, struct hkTraitBool<0>);
// void hkMemUtil::memCpyOneAligned<12, 4>(void *, void const *);
// public: static void hkArrayUtil::constructWithCopy<class c_havok_component::c_constraint>(class c_havok_component::c_constraint *, int, class c_havok_component::c_constraint const &, struct hkTraitBool<0>);
// public: hkArrayBase<class c_havok_component::c_rigid_body>::hkArrayBase<class c_havok_component::c_rigid_body>(class c_havok_component::c_rigid_body *, int, int);
// public: void hkArrayBase<class c_havok_component::c_rigid_body>::clear(void);
// public: static void hkArrayUtil::construct<class c_havok_component::c_rigid_body>(class c_havok_component::c_rigid_body *, int, struct hkTraitBool<0>);
// public: static bool c_flags_no_init<enum e_physics_model_phantom_flags, unsigned long, 32, struct s_default_enum_string_resolver>::valid_bit(enum e_physics_model_phantom_flags);
// private: static unsigned long c_flags_no_init<enum e_physics_model_phantom_flags, unsigned long, 32, struct s_default_enum_string_resolver>::flag_size_type(enum e_physics_model_phantom_flags);
// public: static bool c_flags_no_init<enum s_physics_model_node::e_physics_model_node_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_physics_model_node::e_physics_model_node_flags);
// private: static unsigned short c_flags_no_init<enum s_physics_model_node::e_physics_model_node_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_physics_model_node::e_physics_model_node_flags);
// public: void hkArrayBase<struct c_havok_component::s_body_in_phantom>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct c_havok_component::s_body_in_phantom>(struct c_havok_component::s_body_in_phantom *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct c_havok_component::s_body_in_phantom>(struct c_havok_component::s_body_in_phantom *, int, struct hkTraitBool<0>);
// public: static bool c_big_flags_typed_no_init<long, 4096>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 4096>::valid(void) const;
// public: hkArrayBase<struct hkpMassElement>::hkArrayBase<struct hkpMassElement>(struct hkpMassElement *, int, int);
// public: hkArrayBase<struct hkpMassElement>::~hkArrayBase<struct hkpMassElement>(void);
// public: void hkArrayBase<struct hkpMassElement>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static bool s_static_array<class hkpShape const *, 1024>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static void hkArrayUtil::destruct<class c_havok_component::c_rigid_body>(class c_havok_component::c_rigid_body *, int, struct hkTraitBool<0>);
// protected: static unsigned long c_big_flags_typed_no_init<long, 4096>::get_mask_of_second_slice_of_chunk_inclusive(long);
// public: int hkArrayBase<struct hkpMassElement>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpMassElement>::clear(void);
// public: void * c_havok_component::c_rigid_body::`scalar deleting destructor'(unsigned int);
// public: c_havok_component::c_rigid_body::~c_rigid_body(void);
// public: hkInplaceArray<char, 4, struct hkContainerHeapAllocator>::~hkInplaceArray<char, 4, struct hkContainerHeapAllocator>(void);
// private: static unsigned char c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_havok_contact_point::e_life_cycle_flag);
// protected: static long c_big_flags_typed_no_init<long, 4096>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 4096>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 4096>::get_valid_mask_of_last_chunk(void);
// public: static void hkArrayUtil::destruct<struct hkpMassElement>(struct hkpMassElement *, int, struct hkTraitBool<0>);
// protected: static unsigned long c_big_flags_typed_no_init<long, 4096>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: class hkHalf & hkHalf::operator=(float const &);
// void * operator new(unsigned int, struct hkPlacementNewArg *);
// public: hkSimdReal::hkSimdReal(float const &);
// class hkSimdReal const operator-(class hkSimdReal);
// float hkMath::sqrt(float);
// int hkMath::hkToIntFast(float);
// public: hkQuaternion::hkQuaternion(void);
// public: void hkVector4::setAll(float);
// public: void hkVector4::mul4(class hkSimdReal const &);
// public: struct __vector4const & hkSimdReal::getQuad(void) const;
// public: void hkVector4::setCross(class hkVector4const &, class hkVector4const &);
// public: class hkSimdReal hkVector4::dot3(class hkVector4const &) const;
// public: void hkVector4::setXYZ0(class hkVector4const &);
// public: void hkMatrix3::setRows(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkMatrix3::setCols(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkMatrix3::operator=(class hkMatrix3const &);
// public: void hkQuaternion::operator=(class hkQuaternion const &);
// public: void hkQuaternion::normalize(void);
// public: void hkVector4::normalize4(void);
// public: class hkSimdReal hkVector4::lengthInverse4(void) const;
// public: void hkQuaternion::setMul(class hkQuaternion const &, class hkQuaternion const &);
// public: void hkVector4::setAll(class hkSimdReal const &);
// public: void hkVector4::sub4(class hkVector4const &);
// public: void hkVector4::addMul4(class hkSimdReal const &, class hkVector4const &);
// public: void hkVector4::setXYZW(class hkVector4const &, class hkVector4const &);
// public: class hkSimdReal hkVector4::getSimdAt(int) const;
// public: class hkVector4const & hkQuaternion::getImag(void) const;
// public: void hkQuaternion::setInverse(class hkQuaternion const &);
// public: void hkVector4::setNeg3(class hkVector4const &);
// public: class hkRotation & hkRotation::operator=(class hkRotation const &);
// public: hkRotation::hkRotation(class hkRotation const &);
// public: hkMatrix3::hkMatrix3(class hkMatrix3const &);
// public: hkpPropertyValue::hkpPropertyValue(void);
// public: hkpPropertyValue::hkpPropertyValue(int);
// public: void hkpPropertyValue::setInt(int);
// public: int hkpPropertyValue::getInt(void) const;
// public: class hkBool hkpWorldObject::isAddedToWorld(void) const;
// public: struct hkpPropertyValue hkpWorldObject::getProperty(unsigned int, enum hkpWorldObject::MtChecks) const;
// public: bool hkpWorldObject::hasProperty(unsigned int, enum hkpWorldObject::MtChecks) const;
// public: void hkpWorldObject::markForRead(void);
// public: void hkMultiThreadCheck::markForRead(enum hkMultiThreadCheck::ReadMode);
// public: class hkMultiThreadCheck & hkpWorldObject::getMultiThreadCheck(void);
// public: void hkpWorldObject::unmarkForRead(void);
// public: void hkMultiThreadCheck::unmarkForRead(void);
// public: static void * hkpConstraintData::operator new(unsigned int);
// public: static void * hkpConstraintInstance::operator new(unsigned int);
// public: class hkpEntity * hkpConstraintInstance::getEntityA(void) const;
// public: class hkpEntity * hkpConstraintInstance::getEntityB(void) const;
// public: class hkpRigidBody * hkpConstraintInstance::getRigidBodyA(void) const;
// public: class hkpRigidBody * hkpConstraintInstance::getRigidBodyB(void) const;
// public: class hkpConstraintData const * hkpConstraintInstance::getData(void) const;
// public: class hkpConstraintData * hkpConstraintInstance::getDataRw(void) const;
// public: void * hkpConstraintInstance::getRuntime(void) const;
// public: void hkpMotion::setWorldSelectFlagsNeg(int, int, int);
// public: class hkpMotion * hkpEntity::getMotion(void);
// public: class hkpSimulationIsland * hkpEntity::getSimulationIsland(void) const;
// public: void hkpEntity::setContactPointCallbackDelay(unsigned short);
// public: class hkBool hkpEntity::isFixed(void) const;
// public: class hkBool hkpEntity::isFixedOrKeyframed(void) const;
// public: float hkpRigidBody::getMassInv(void) const;
// public: class hkSimdReal hkpMotion::getMassInv(void) const;
// public: void hkpRigidBody::getInertiaLocal(class hkMatrix3&) const;
// public: void hkpRigidBody::getInertiaInvLocal(class hkMatrix3&) const;
// public: void hkpRigidBody::getInertiaInvWorld(class hkMatrix3&) const;
// public: class hkVector4const & hkpRigidBody::getCenterOfMassLocal(void) const;
// public: class hkVector4const & hkpMotion::getCenterOfMassLocal(void) const;
// public: class hkSweptTransform const & hkMotionState::getSweptTransform(void) const;
// public: class hkVector4const & hkpRigidBody::getCenterOfMassInWorld(void) const;
// public: class hkVector4const & hkpMotion::getCenterOfMassInWorld(void) const;
// public: class hkQuaternion const & hkpRigidBody::getRotation(void) const;
// public: class hkQuaternion const & hkpMotion::getRotation(void) const;
// public: class hkVector4const & hkpRigidBody::getLinearVelocity(void) const;
// public: class hkVector4const & hkpMotion::getLinearVelocity(void) const;
// public: class hkVector4const & hkpRigidBody::getAngularVelocity(void) const;
// public: class hkVector4const & hkpMotion::getAngularVelocity(void) const;
// public: void hkpRigidBody::getPointVelocity(class hkVector4const &, class hkVector4&) const;
// public: void hkpMotion::getPointVelocity(class hkVector4const &, class hkVector4&) const;
// public: float hkpRigidBody::getLinearDamping(void) const;
// public: float hkpMotion::getLinearDamping(void);
// public: float hkpRigidBody::getAngularDamping(void) const;
// public: float hkpMotion::getAngularDamping(void);
// public: enum hkpMotion::MotionType hkpRigidBody::getMotionType(void) const;
// public: enum hkpMotion::MotionType hkpMotion::getType(void) const;
// public: void hkpRigidBody::setLinearVelocity(class hkVector4const &);
// public: void hkpRigidBody::setAngularVelocity(class hkVector4const &);
// public: void hkpRigidBody::setCollisionFilterInfo(unsigned int);
// public: void hkpTypedBroadPhaseHandle::setCollisionFilterInfo(unsigned int);
// public: class hkpTypedBroadPhaseHandle * hkpCollidable::getBroadPhaseHandle(void);
// public: class hkpCollidable * hkpWorldObject::getCollidableRw(void);
// public: static void * hkpTransformShape::operator new(unsigned int);
// public: void hkArray<char, struct hkContainerHeapAllocator>::setSize(int);
// public: enum hkpMotion::MotionType hkEnum<enum hkpMotion::MotionType, unsigned char>::operator enum hkpMotion::MotionType(void) const;
// public: class hkBool hkEnum<enum hkpMotion::MotionType, unsigned char>::operator==(enum hkpMotion::MotionType) const;
// public: char & hkArrayBase<char>::operator[](int);
// public: void hkArrayBase<char>::_setSize(class hkMemoryAllocator &, int);
// public: void hkArrayBase<char>::_reserve(class hkMemoryAllocator &, int);
// public: int hkArrayBase<char>::getCapacity(void) const;
// public: hkArray<char, struct hkContainerHeapAllocator>::~hkArray<char, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<char>::~hkArrayBase<char>(void);
// public: class hkpProperty const & hkArrayBase<class hkpProperty>::operator[](int) const;
// public: int hkArrayBase<class hkpProperty>::getSize(void) const;
// public: struct hkpListShape::ChildInfo const & hkArrayBase<struct hkpListShape::ChildInfo>::operator[](int) const;
// public: int hkArrayBase<struct hkpListShape::ChildInfo>::getSize(void) const;
// public: void hkArray<char, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<char>::hkArrayBase<char>(char *, int, int);
// public: void hkArrayBase<char>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<char>(char *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<char>(char *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<char>::clear(void);
// public: c_havok_component_data::c_havok_component_data(void);

//void havok_components_initialize_global_allocations(void)
//{
//    mangled_ppc("?havok_components_initialize_global_allocations@@YAXXZ");
//};

//public: struct s_data_array * c_havok_component_data::get(void)
//{
//    mangled_ppc("?get@c_havok_component_data@@QAAPAUs_data_array@@XZ");
//};

//public: void c_havok_component_data::set(struct s_data_array *)
//{
//    mangled_ppc("?set@c_havok_component_data@@QAAXPAUs_data_array@@@Z");
//};

//void havok_components_dispose_global_allocations(void)
//{
//    mangled_ppc("?havok_components_dispose_global_allocations@@YAXXZ");
//};

//void havok_components_initialize(void)
//{
//    mangled_ppc("?havok_components_initialize@@YAXXZ");
//};

//void havok_components_dispose(void)
//{
//    mangled_ppc("?havok_components_dispose@@YAXXZ");
//};

//void havok_components_initialize_for_new_map(void)
//{
//    mangled_ppc("?havok_components_initialize_for_new_map@@YAXXZ");
//};

//void havok_components_dispose_from_old_map(void)
//{
//    mangled_ppc("?havok_components_dispose_from_old_map@@YAXXZ");
//};

//private: void * c_havok_component::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_havok_component@@AAAPAXI@Z");
//};

//void havok_components_dispose_from_old_map_fast(void)
//{
//    mangled_ppc("?havok_components_dispose_from_old_map_fast@@YAXXZ");
//};

//struct s_data_array * havok_components_get_data_array(void)
//{
//    mangled_ppc("?havok_components_get_data_array@@YAPAUs_data_array@@XZ");
//};

//void DEBUG_validate_havok_components(bool)
//{
//    mangled_ppc("?DEBUG_validate_havok_components@@YAX_N@Z");
//};

//void havok_components_disconnect_from_havok_world(void)
//{
//    mangled_ppc("?havok_components_disconnect_from_havok_world@@YAXXZ");
//};

//public: void c_havok_component::pre_simulation_update(long)
//{
//    mangled_ppc("?pre_simulation_update@c_havok_component@@QAAXJ@Z");
//};

//private: void c_havok_component::update_rigid_body_pre_simulation_state(long)
//{
//    mangled_ppc("?update_rigid_body_pre_simulation_state@c_havok_component@@AAAXJ@Z");
//};

//public: void c_havok_component::c_rigid_body::set_pre_simulation_state(union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?set_pre_simulation_state@c_rigid_body@c_havok_component@@QAAXPBTreal_point3d@@PBTvector3d@@1@Z");
//};

//long havok_component_new(long)
//{
//    mangled_ppc("?havok_component_new@@YAJJ@Z");
//};

//void havok_component_construct(long)
//{
//    mangled_ppc("?havok_component_construct@@YAXJ@Z");
//};

//void havok_component_delete(long)
//{
//    mangled_ppc("?havok_component_delete@@YAXJ@Z");
//};

//long havok_entity_get_havok_component_index(class hkpWorldObject const *)
//{
//    mangled_ppc("?havok_entity_get_havok_component_index@@YAJPBVhkpWorldObject@@@Z");
//};

//void havok_entity_set_havok_component_index(class hkpWorldObject *, long)
//{
//    mangled_ppc("?havok_entity_set_havok_component_index@@YAXPAVhkpWorldObject@@J@Z");
//};

//enum e_havok_group havok_entity_get_default_group(class hkpWorldObject const *)
//{
//    mangled_ppc("?havok_entity_get_default_group@@YA?AW4e_havok_group@@PBVhkpWorldObject@@@Z");
//};

//void havok_entity_set_default_group(class hkpWorldObject *, enum e_havok_group)
//{
//    mangled_ppc("?havok_entity_set_default_group@@YAXPAVhkpWorldObject@@W4e_havok_group@@@Z");
//};

//long havok_entity_get_structure_bsp_index(class hkpWorldObject const *)
//{
//    mangled_ppc("?havok_entity_get_structure_bsp_index@@YAJPBVhkpWorldObject@@@Z");
//};

//void havok_entity_set_structure_bsp_index(class hkpWorldObject *, long)
//{
//    mangled_ppc("?havok_entity_set_structure_bsp_index@@YAXPAVhkpWorldObject@@J@Z");
//};

//long havok_entity_get_havok_component_rigid_body_index(class hkpWorldObject const *)
//{
//    mangled_ppc("?havok_entity_get_havok_component_rigid_body_index@@YAJPBVhkpWorldObject@@@Z");
//};

//void havok_entity_set_havok_component_rigid_body_index(class hkpWorldObject *, long)
//{
//    mangled_ppc("?havok_entity_set_havok_component_rigid_body_index@@YAXPAVhkpWorldObject@@J@Z");
//};

//public: c_havok_contact_point::c_havok_contact_point(unsigned short, long, long, bool, unsigned int, long, class hkpRigidBody const *, class hkpRigidBody const *, long, unsigned char, float, float, class c_global_material_type, class c_global_material_type)
//{
//    mangled_ppc("??0c_havok_contact_point@@QAA@GJJ_NIJPBVhkpRigidBody@@1JEMMVc_global_material_type@@2@Z");
//};

//public: float c_havok_contact_point::get_distance(void) const
//{
//    mangled_ppc("?get_distance@c_havok_contact_point@@QBAMXZ");
//};

//public: union real_point3d const * c_havok_contact_point::get_position(void) const
//{
//    mangled_ppc("?get_position@c_havok_contact_point@@QBAPBTreal_point3d@@XZ");
//};

//public: union vector3d const * c_havok_contact_point::get_normal(void) const
//{
//    mangled_ppc("?get_normal@c_havok_contact_point@@QBAPBTvector3d@@XZ");
//};

//public: void c_havok_contact_point::get_surface_normal(union vector3d *) const
//{
//    mangled_ppc("?get_surface_normal@c_havok_contact_point@@QBAXPATvector3d@@@Z");
//};

//public: bool c_havok_contact_point::get_life_cycle_flag_is_deleted(void) const
//{
//    mangled_ppc("?get_life_cycle_flag_is_deleted@c_havok_contact_point@@QBA_NXZ");
//};

//public: bool c_havok_contact_point::get_life_cycle_flag_is_new(void) const
//{
//    mangled_ppc("?get_life_cycle_flag_is_new@c_havok_contact_point@@QBA_NXZ");
//};

//public: void c_havok_contact_point::clear_life_cycle_flags(void)
//{
//    mangled_ppc("?clear_life_cycle_flags@c_havok_contact_point@@QAAXXZ");
//};

//public: void c_havok_contact_point::notify_is_deleted(void)
//{
//    mangled_ppc("?notify_is_deleted@c_havok_contact_point@@QAAXXZ");
//};

//public: bool c_havok_contact_point::is_climbable_surface(void) const
//{
//    mangled_ppc("?is_climbable_surface@c_havok_contact_point@@QBA_NXZ");
//};

//public: bool c_havok_contact_point::is_slip_surface(void) const
//{
//    mangled_ppc("?is_slip_surface@c_havok_contact_point@@QBA_NXZ");
//};

//public: bool c_havok_contact_point::is_physics_only_surface(void) const
//{
//    mangled_ppc("?is_physics_only_surface@c_havok_contact_point@@QBA_NXZ");
//};

//public: bool c_havok_contact_point::get_supresses_impact_effects(void) const
//{
//    mangled_ppc("?get_supresses_impact_effects@c_havok_contact_point@@QBA_NXZ");
//};

//public: bool c_havok_contact_point::is_breakable_surface(void) const
//{
//    mangled_ppc("?is_breakable_surface@c_havok_contact_point@@QBA_NXZ");
//};

//public: long c_havok_contact_point::get_contact_point_object_index(void) const
//{
//    mangled_ppc("?get_contact_point_object_index@c_havok_contact_point@@QBAJXZ");
//};

//public: long c_havok_contact_point::get_contact_havok_component_index(void) const
//{
//    mangled_ppc("?get_contact_havok_component_index@c_havok_contact_point@@QBAJXZ");
//};

//public: long c_havok_contact_point::get_contact_surface_index(void) const
//{
//    mangled_ppc("?get_contact_surface_index@c_havok_contact_point@@QBAJXZ");
//};

//public: void c_havok_contact_point::update(bool, class hkVector4const *, class hkVector4const *, class hkpDynamicsContactMgr *, class hkpShape const *, bool, long, long)
//{
//    mangled_ppc("?update@c_havok_contact_point@@QAAX_NPBVhkVector4@@1PAVhkpDynamicsContactMgr@@PBVhkpShape@@0JJ@Z");
//};

//public: class c_global_material_type c_havok_contact_point::calculate_global_material_type_a(void) const
//{
//    mangled_ppc("?calculate_global_material_type_a@c_havok_contact_point@@QBA?AVc_global_material_type@@XZ");
//};

//public: class c_global_material_type c_havok_contact_point::get_global_material_type_a(void) const
//{
//    mangled_ppc("?get_global_material_type_a@c_havok_contact_point@@QBA?AVc_global_material_type@@XZ");
//};

//public: class c_global_material_type c_havok_contact_point::calculate_global_material_type_b(void) const
//{
//    mangled_ppc("?calculate_global_material_type_b@c_havok_contact_point@@QBA?AVc_global_material_type@@XZ");
//};

//public: class c_global_material_type c_havok_contact_point::get_global_material_type_b(void) const
//{
//    mangled_ppc("?get_global_material_type_b@c_havok_contact_point@@QBA?AVc_global_material_type@@XZ");
//};

//private: void c_havok_contact_point::update_contact_point_properties(class hkpContactPointProperties *, long)
//{
//    mangled_ppc("?update_contact_point_properties@c_havok_contact_point@@AAAXPAVhkpContactPointProperties@@J@Z");
//};

//public: void hkContactPointMaterial::setFriction(float)
//{
//    mangled_ppc("?setFriction@hkContactPointMaterial@@QAAXM@Z");
//};

//public: void hkContactPointMaterial::setRestitution(float)
//{
//    mangled_ppc("?setRestitution@hkContactPointMaterial@@QAAXM@Z");
//};

//private: c_havok_component::c_havok_component(long)
//{
//    mangled_ppc("??0c_havok_component@@AAA@J@Z");
//};

//private: c_havok_component::~c_havok_component(void)
//{
//    mangled_ppc("??1c_havok_component@@AAA@XZ");
//};

//public: void * hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@Us_body_in_phantom@c_havok_component@@UhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: class hkpRigidBody * c_havok_component::DEBUG_get_rigid_body(long)
//{
//    mangled_ppc("?DEBUG_get_rigid_body@c_havok_component@@QAAPAVhkpRigidBody@@J@Z");
//};

//private: class hkpRigidBody * c_havok_component::get_rigid_body(long)
//{
//    mangled_ppc("?get_rigid_body@c_havok_component@@AAAPAVhkpRigidBody@@J@Z");
//};

//public: void c_havok_component::DEBUG_validate(bool)
//{
//    mangled_ppc("?DEBUG_validate@c_havok_component@@QAAX_N@Z");
//};

//public: class hkpRigidBody * c_havok_component::get_havok_rigid_body(long)
//{
//    mangled_ppc("?get_havok_rigid_body@c_havok_component@@QAAPAVhkpRigidBody@@J@Z");
//};

//public: long c_havok_component::list_rigid_body_entities(class hkpEntity const **, long)
//{
//    mangled_ppc("?list_rigid_body_entities@c_havok_component@@QAAJPAPBVhkpEntity@@J@Z");
//};

//public: void c_havok_component::notify_matrices_clean(void)
//{
//    mangled_ppc("?notify_matrices_clean@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::move_simple_shape_phantom(struct real_matrix4x3const *)
//{
//    mangled_ppc("?move_simple_shape_phantom@c_havok_component@@QAAXPBUreal_matrix4x3@@@Z");
//};

//public: void c_havok_component::move_aabb_phantom(union real_rectangle3d const *)
//{
//    mangled_ppc("?move_aabb_phantom@c_havok_component@@QAAXPBTreal_rectangle3d@@@Z");
//};

//public: long c_havok_component::calculate_rigid_body_index_from_node_index(long) const
//{
//    mangled_ppc("?calculate_rigid_body_index_from_node_index@c_havok_component@@QBAJJ@Z");
//};

//private: long c_havok_component::find_rigid_body_index_from_physics_model_rigid_body_index(long) const
//{
//    mangled_ppc("?find_rigid_body_index_from_physics_model_rigid_body_index@c_havok_component@@ABAJJ@Z");
//};

//public: class hkpRigidBody * c_havok_component::construct_proxy_rigid_body(long)
//{
//    mangled_ppc("?construct_proxy_rigid_body@c_havok_component@@QAAPAVhkpRigidBody@@J@Z");
//};

//long havok_shape_count_convex_shapes_recursive(class hkpShape const *)
//{
//    mangled_ppc("?havok_shape_count_convex_shapes_recursive@@YAJPBVhkpShape@@@Z");
//};

//public: void c_havok_component::render_debug(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?render_debug@c_havok_component@@QAAX_N000000000@Z");
//};

//public: class hkTransform const & hkpShapePhantom::getTransform(void) const
//{
//    mangled_ppc("?getTransform@hkpShapePhantom@@QBAABVhkTransform@@XZ");
//};

//public: static int hkpGroupFilter::getLayerFromFilterInfo(unsigned int)
//{
//    mangled_ppc("?getLayerFromFilterInfo@hkpGroupFilter@@SAHI@Z");
//};

//public: void c_havok_component::c_constraint::render_debug(void)
//{
//    mangled_ppc("?render_debug@c_constraint@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::c_constraint::get_connected_rigid_bodies(class hkpRigidBody const **, class hkpRigidBody const **) const
//{
//    mangled_ppc("?get_connected_rigid_bodies@c_constraint@c_havok_component@@QBAXPAPBVhkpRigidBody@@0@Z");
//};

//public: void c_havok_component::c_constraint::get_pivots(union real_point3d *, union real_point3d *) const
//{
//    mangled_ppc("?get_pivots@c_constraint@c_havok_component@@QBAXPATreal_point3d@@0@Z");
//};

//public: class hkpConstraintInstance const * c_havok_component::c_constraint::get_constraint(void) const
//{
//    mangled_ppc("?get_constraint@c_constraint@c_havok_component@@QBAPBVhkpConstraintInstance@@XZ");
//};

//private: void c_havok_component::add_rigid_body(class hkpRigidBody *, char const *, long, bool, enum e_havok_group)
//{
//    mangled_ppc("?add_rigid_body@c_havok_component@@AAAXPAVhkpRigidBody@@PBDJ_NW4e_havok_group@@@Z");
//};

//private: void c_havok_component::add_constraint(class hkpConstraintInstance *, enum e_physics_model_constraint_type, long, bool)
//{
//    mangled_ppc("?add_constraint@c_havok_component@@AAAXPAVhkpConstraintInstance@@W4e_physics_model_constraint_type@@J_N@Z");
//};

//public: c_havok_component::c_constraint::c_constraint(class hkpConstraintInstance *, enum e_physics_model_constraint_type, long, bool)
//{
//    mangled_ppc("??0c_constraint@c_havok_component@@QAA@PAVhkpConstraintInstance@@W4e_physics_model_constraint_type@@J_N@Z");
//};

//public: c_havok_component::c_constraint::~c_constraint(void)
//{
//    mangled_ppc("??1c_constraint@c_havok_component@@QAA@XZ");
//};

//public: void c_havok_component::clear_rigid_bodies(void)
//{
//    mangled_ppc("?clear_rigid_bodies@c_havok_component@@QAAXXZ");
//};

//public: long c_havok_component::notify_contact_point_added(long, unsigned short, long, bool, unsigned int, long, long, unsigned char, class hkpRigidBody *, class hkpRigidBody *, float, float, class c_global_material_type, class c_global_material_type)
//{
//    mangled_ppc("?notify_contact_point_added@c_havok_component@@QAAJJGJ_NIJJEPAVhkpRigidBody@@1MMVc_global_material_type@@2@Z");
//};

//public: void c_havok_contact_point::set_next_havok_contact_point_datum_index(long)
//{
//    mangled_ppc("?set_next_havok_contact_point_datum_index@c_havok_contact_point@@QAAXJ@Z");
//};

//public: bool c_havok_component::delete_all_contact_points(void)
//{
//    mangled_ppc("?delete_all_contact_points@c_havok_component@@QAA_NXZ");
//};

//public: long c_havok_contact_point::get_havok_component_index(void) const
//{
//    mangled_ppc("?get_havok_component_index@c_havok_contact_point@@QBAJXZ");
//};

//public: void c_havok_component::notify_contact_point_removed(struct hkpContactPointRemovedEvent const *, class hkpRigidBody const *, class hkpRigidBody const *)
//{
//    mangled_ppc("?notify_contact_point_removed@c_havok_component@@QAAXPBUhkpContactPointRemovedEvent@@PBVhkpRigidBody@@1@Z");
//};

//public: bool c_havok_contact_point::matches_contact_description(unsigned short, long, long, long, long) const
//{
//    mangled_ppc("?matches_contact_description@c_havok_contact_point@@QBA_NGJJJJ@Z");
//};

//public: void c_havok_component::remove_contact_point_references(long)
//{
//    mangled_ppc("?remove_contact_point_references@c_havok_component@@QAAXJ@Z");
//};

//public: void c_havok_component::remove_contact_point(long, long)
//{
//    mangled_ppc("?remove_contact_point@c_havok_component@@QAAXJJ@Z");
//};

//public: void c_havok_component::notify_contact_point_process(struct hkpContactProcessEvent *, long, long, long, long, long)
//{
//    mangled_ppc("?notify_contact_point_process@c_havok_component@@QAAXPAUhkpContactProcessEvent@@JJJJJ@Z");
//};

//public: int hkpProcessCollisionData::getNumContactPoints(void) const
//{
//    mangled_ppc("?getNumContactPoints@hkpProcessCollisionData@@QBAHXZ");
//};

//public: float c_havok_component::get_system_total_mass(void) const
//{
//    mangled_ppc("?get_system_total_mass@c_havok_component@@QBAMXZ");
//};

//public: void c_havok_component::get_system_center_of_mass(union real_point3d *) const
//{
//    mangled_ppc("?get_system_center_of_mass@c_havok_component@@QBAXPATreal_point3d@@@Z");
//};

//public: void c_havok_component::get_rigid_body_position(long, union real_point3d *) const
//{
//    mangled_ppc("?get_rigid_body_position@c_havok_component@@QBAXJPATreal_point3d@@@Z");
//};

//private: class hkpRigidBody const * c_havok_component::get_rigid_body(long) const
//{
//    mangled_ppc("?get_rigid_body@c_havok_component@@ABAPBVhkpRigidBody@@J@Z");
//};

//public: class hkpRigidBody * c_havok_component::c_rigid_body::get_rigid_body(void) const
//{
//    mangled_ppc("?get_rigid_body@c_rigid_body@c_havok_component@@QBAPAVhkpRigidBody@@XZ");
//};

//public: void c_havok_component::get_rigid_body_center_of_mass(long, union real_point3d *) const
//{
//    mangled_ppc("?get_rigid_body_center_of_mass@c_havok_component@@QBAXJPATreal_point3d@@@Z");
//};

//public: void c_havok_component::get_rigid_body_transform(long, struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_rigid_body_transform@c_havok_component@@QBAXJPAUreal_matrix4x3@@@Z");
//};

//public: void c_havok_component::get_rigid_body_transform_direct(long, struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_rigid_body_transform_direct@c_havok_component@@QBAXJPAUreal_matrix4x3@@@Z");
//};

//public: void c_havok_component::get_rigid_body_child_shape_relative_transform(long, long, struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_rigid_body_child_shape_relative_transform@c_havok_component@@QBAXJJPAUreal_matrix4x3@@@Z");
//};

//public: void c_havok_component::get_rigid_body_orientation(long, struct real_orientation *) const
//{
//    mangled_ppc("?get_rigid_body_orientation@c_havok_component@@QBAXJPAUreal_orientation@@@Z");
//};

//public: void c_havok_component::get_rigid_body_linear_velocity(long, union vector3d *) const
//{
//    mangled_ppc("?get_rigid_body_linear_velocity@c_havok_component@@QBAXJPATvector3d@@@Z");
//};

//public: void c_havok_component::get_rigid_body_linear_velocity_at_point(long, union vector3d *, union real_point3d const *) const
//{
//    mangled_ppc("?get_rigid_body_linear_velocity_at_point@c_havok_component@@QBAXJPATvector3d@@PBTreal_point3d@@@Z");
//};

//public: void c_havok_component::get_rigid_body_pre_simulation_linear_velocity_at_point(long, union vector3d *, union real_point3d const *) const
//{
//    mangled_ppc("?get_rigid_body_pre_simulation_linear_velocity_at_point@c_havok_component@@QBAXJPATvector3d@@PBTreal_point3d@@@Z");
//};

//public: void c_havok_component::get_rigid_body_angular_velocity(long, union vector3d *) const
//{
//    mangled_ppc("?get_rigid_body_angular_velocity@c_havok_component@@QBAXJPATvector3d@@@Z");
//};

//public: void c_havok_component::get_rigid_body_inverse_inertia_tensor(long, struct matrix3x3*) const
//{
//    mangled_ppc("?get_rigid_body_inverse_inertia_tensor@c_havok_component@@QBAXJPAUmatrix3x3@@@Z");
//};

//public: void c_havok_component::get_rigid_body_inertia_tensor(long, struct matrix3x3*) const
//{
//    mangled_ppc("?get_rigid_body_inertia_tensor@c_havok_component@@QBAXJPAUmatrix3x3@@@Z");
//};

//public: float c_havok_component::get_rigid_body_mass(long) const
//{
//    mangled_ppc("?get_rigid_body_mass@c_havok_component@@QBAMJ@Z");
//};

//public: class c_global_material_type c_havok_component::get_rigid_body_material_type(long) const
//{
//    mangled_ppc("?get_rigid_body_material_type@c_havok_component@@QBA?AVc_global_material_type@@J@Z");
//};

//public: union vector3d const * c_havok_component::get_rigid_body_pre_simulation_linear_velocity(long) const
//{
//    mangled_ppc("?get_rigid_body_pre_simulation_linear_velocity@c_havok_component@@QBAPBTvector3d@@J@Z");
//};

//public: union vector3d const * c_havok_component::c_rigid_body::get_pre_simulation_linear_velocity(void) const
//{
//    mangled_ppc("?get_pre_simulation_linear_velocity@c_rigid_body@c_havok_component@@QBAPBTvector3d@@XZ");
//};

//public: union vector3d const * c_havok_component::get_rigid_body_pre_simulation_angular_velocity(long) const
//{
//    mangled_ppc("?get_rigid_body_pre_simulation_angular_velocity@c_havok_component@@QBAPBTvector3d@@J@Z");
//};

//public: union vector3d const * c_havok_component::c_rigid_body::get_pre_simulation_angular_velocity(void) const
//{
//    mangled_ppc("?get_pre_simulation_angular_velocity@c_rigid_body@c_havok_component@@QBAPBTvector3d@@XZ");
//};

//public: union real_point3d const * c_havok_component::get_rigid_body_pre_simulation_position(long) const
//{
//    mangled_ppc("?get_rigid_body_pre_simulation_position@c_havok_component@@QBAPBTreal_point3d@@J@Z");
//};

//public: union real_point3d const * c_havok_component::c_rigid_body::get_pre_simulation_position(void) const
//{
//    mangled_ppc("?get_pre_simulation_position@c_rigid_body@c_havok_component@@QBAPBTreal_point3d@@XZ");
//};

//public: class hkpCollidable const * c_havok_component::get_rigid_body_collidable(long) const
//{
//    mangled_ppc("?get_rigid_body_collidable@c_havok_component@@QBAPBVhkpCollidable@@J@Z");
//};

//public: bool c_havok_component::get_rigid_body_has_infinite_inertia_tensor(long) const
//{
//    mangled_ppc("?get_rigid_body_has_infinite_inertia_tensor@c_havok_component@@QBA_NJ@Z");
//};

//public: bool c_havok_component::c_rigid_body::has_infinite_inertia_tensor(void) const
//{
//    mangled_ppc("?has_infinite_inertia_tensor@c_rigid_body@c_havok_component@@QBA_NXZ");
//};

//public: bool c_havok_component::has_rigid_body_with_infinite_inertia_tensor(void) const
//{
//    mangled_ppc("?has_rigid_body_with_infinite_inertia_tensor@c_havok_component@@QBA_NXZ");
//};

//public: bool c_havok_component::get_rigid_body_is_fixed(long) const
//{
//    mangled_ppc("?get_rigid_body_is_fixed@c_havok_component@@QBA_NJ@Z");
//};

//public: bool c_havok_component::get_rigid_body_is_keyframed(long) const
//{
//    mangled_ppc("?get_rigid_body_is_keyframed@c_havok_component@@QBA_NJ@Z");
//};

//public: bool c_havok_component::get_rigid_body_is_dynamic(long) const
//{
//    mangled_ppc("?get_rigid_body_is_dynamic@c_havok_component@@QBA_NJ@Z");
//};

//public: unsigned long c_havok_component::get_rigid_body_collision_filter_info(long) const
//{
//    mangled_ppc("?get_rigid_body_collision_filter_info@c_havok_component@@QBAKJ@Z");
//};

//public: bool c_havok_component::get_rigid_body_is_in_simulation_island_with_active_rigid_bodies_of_other_objects(long, long) const
//{
//    mangled_ppc("?get_rigid_body_is_in_simulation_island_with_active_rigid_bodies_of_other_objects@c_havok_component@@QBA_NJJ@Z");
//};

//public: enum e_rigid_body_size c_havok_component::get_maximum_rigid_body_size(void) const
//{
//    mangled_ppc("?get_maximum_rigid_body_size@c_havok_component@@QBA?AW4e_rigid_body_size@@XZ");
//};

//public: bool c_havok_component::rigid_body_is_shape_current_shape(long, class hkpShape const *)
//{
//    mangled_ppc("?rigid_body_is_shape_current_shape@c_havok_component@@QAA_NJPBVhkpShape@@@Z");
//};

//public: void c_havok_component::set_rigid_body_transform(long, struct real_matrix4x3const *)
//{
//    mangled_ppc("?set_rigid_body_transform@c_havok_component@@QAAXJPBUreal_matrix4x3@@@Z");
//};

//private: void c_havok_component::set_rigid_body_transform_internal(long, class hkTransform const *)
//{
//    mangled_ppc("?set_rigid_body_transform_internal@c_havok_component@@AAAXJPBVhkTransform@@@Z");
//};

//public: void c_havok_component::set_rigid_body_linear_velocity(long, union vector3d const *)
//{
//    mangled_ppc("?set_rigid_body_linear_velocity@c_havok_component@@QAAXJPBTvector3d@@@Z");
//};

//public: void c_havok_component::set_rigid_body_angular_velocity(long, union vector3d const *)
//{
//    mangled_ppc("?set_rigid_body_angular_velocity@c_havok_component@@QAAXJPBTvector3d@@@Z");
//};

//public: void c_havok_component::set_rigid_body_gravity_factor(long, float)
//{
//    mangled_ppc("?set_rigid_body_gravity_factor@c_havok_component@@QAAXJM@Z");
//};

//public: void c_havok_component::rigid_body_apply_hard_keyframe(long, struct real_matrix4x3const *)
//{
//    mangled_ppc("?rigid_body_apply_hard_keyframe@c_havok_component@@QAAXJPBUreal_matrix4x3@@@Z");
//};

//public: void c_havok_component::rigid_body_apply_soft_keyframe(long, struct real_matrix4x3const *, float)
//{
//    mangled_ppc("?rigid_body_apply_soft_keyframe@c_havok_component@@QAAXJPBUreal_matrix4x3@@M@Z");
//};

//public: hkpKeyFrameUtility::KeyFrameInfo::KeyFrameInfo(void)
//{
//    mangled_ppc("??0KeyFrameInfo@hkpKeyFrameUtility@@QAA@XZ");
//};

//public: void c_havok_component::rigid_body_apply_acceleration(long, union vector3d const *)
//{
//    mangled_ppc("?rigid_body_apply_acceleration@c_havok_component@@QAAXJPBTvector3d@@@Z");
//};

//public: void c_havok_component::rigid_body_apply_angular_acceleration(long, union vector3d const *)
//{
//    mangled_ppc("?rigid_body_apply_angular_acceleration@c_havok_component@@QAAXJPBTvector3d@@@Z");
//};

//public: void c_havok_component::rigid_body_apply_acceleration_at_point(long, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?rigid_body_apply_acceleration_at_point@c_havok_component@@QAAXJPBTreal_point3d@@PBTvector3d@@M@Z");
//};

//public: float c_havok_component::rigid_body_calculate_radius(long) const
//{
//    mangled_ppc("?rigid_body_calculate_radius@c_havok_component@@QBAMJ@Z");
//};

//public: void c_havok_component::disconnect_from_havok_world(void)
//{
//    mangled_ppc("?disconnect_from_havok_world@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::notify_physical_child_object_parent_disconnected_from_physics(void)
//{
//    mangled_ppc("?notify_physical_child_object_parent_disconnected_from_physics@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::connect_to_havok_world(void)
//{
//    mangled_ppc("?connect_to_havok_world@c_havok_component@@QAAXXZ");
//};

//public: bool c_havok_component::is_connected_to_world(void) const
//{
//    mangled_ppc("?is_connected_to_world@c_havok_component@@QBA_NXZ");
//};

//public: void c_havok_component::save_rigid_body_state(struct s_havok_component_rigid_body_state *) const
//{
//    mangled_ppc("?save_rigid_body_state@c_havok_component@@QBAXPAUs_havok_component_rigid_body_state@@@Z");
//};

//public: void c_havok_component::restore_rigid_body_state(struct s_havok_component_rigid_body_state const *)
//{
//    mangled_ppc("?restore_rigid_body_state@c_havok_component@@QAAXPBUs_havok_component_rigid_body_state@@@Z");
//};

//public: bool c_havok_component::is_active(void) const
//{
//    mangled_ppc("?is_active@c_havok_component@@QBA_NXZ");
//};

//public: bool c_havok_component::is_active(long) const
//{
//    mangled_ppc("?is_active@c_havok_component@@QBA_NJ@Z");
//};

//public: void c_havok_component::force_activate(bool)
//{
//    mangled_ppc("?force_activate@c_havok_component@@QAAX_N@Z");
//};

//public: void c_havok_component::find_initial_contact_points(void)
//{
//    mangled_ppc("?find_initial_contact_points@c_havok_component@@QAAXXZ");
//};

//public: bool c_havok_component::has_dynamic_rigid_bodies(void) const
//{
//    mangled_ppc("?has_dynamic_rigid_bodies@c_havok_component@@QBA_NXZ");
//};

//public: bool c_havok_component::has_dynamic_object_position_controlling_rigid_body(void) const
//{
//    mangled_ppc("?has_dynamic_object_position_controlling_rigid_body@c_havok_component@@QBA_NXZ");
//};

//public: bool const c_havok_component::is_collision_model_havok_component(void) const
//{
//    mangled_ppc("?is_collision_model_havok_component@c_havok_component@@QBA?B_NXZ");
//};

//public: void c_havok_component::notify_entity_entered_phantom_material(long, long, class hkpWorldObject const *, class hkpWorldObject const *, long)
//{
//    mangled_ppc("?notify_entity_entered_phantom_material@c_havok_component@@QAAXJJPBVhkpWorldObject@@0J@Z");
//};

//public: void c_havok_component::notify_entity_left_phantom_material(long, long, class hkpWorldObject const *, class hkpWorldObject const *, long)
//{
//    mangled_ppc("?notify_entity_left_phantom_material@c_havok_component@@QAAXJJPBVhkpWorldObject@@0J@Z");
//};

//public: void c_havok_component::update_phantom_physics_version(void)
//{
//    mangled_ppc("?update_phantom_physics_version@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::wake_all_bodies_in_phantoms(void)
//{
//    mangled_ppc("?wake_all_bodies_in_phantoms@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)
//{
//    mangled_ppc("?update_phantoms_which_intersect_shape_phantom@c_havok_component@@QAAXXZ");
//};

//public: `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::c_point_collector(struct `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::s_body_in_phantom_with_owner *, long, long *, long)
//{
//    mangled_ppc("??0c_point_collector@?1??update_phantoms_which_intersect_shape_phantom@c_havok_component@@QAAXXZ@QAA@PAUs_body_in_phantom_with_owner@?1??12@QAAXXZ@JPAJJ@Z");
//};

//public: virtual void `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::addCdPoint(struct hkpCdPoint const &)
//{
//    mangled_ppc("?addCdPoint@c_point_collector@?1??update_phantoms_which_intersect_shape_phantom@c_havok_component@@QAAXXZ@UAAXABUhkpCdPoint@@@Z");
//};

//public: virtual void `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::add_phantom_callback_shape(class hkpCdBody const &)
//{
//    mangled_ppc("?add_phantom_callback_shape@c_point_collector@?1??update_phantoms_which_intersect_shape_phantom@c_havok_component@@QAAXXZ@UAAXABVhkpCdBody@@@Z");
//};

//public: long c_phantom_shape::get_phantom_material_index(void) const
//{
//    mangled_ppc("?get_phantom_material_index@c_phantom_shape@@QBAJXZ");
//};

//public: virtual `public: void c_havok_component::update_phantoms_which_intersect_shape_phantom(void)'::`2'::c_point_collector::~c_point_collector(void)
//{
//    mangled_ppc("??1c_point_collector@?1??update_phantoms_which_intersect_shape_phantom@c_havok_component@@QAAXXZ@UAA@XZ");
//};

//merged_83175278
//{
//    mangled_ppc("merged_83175278");
//};

//public: void c_havok_component::update_phantoms(bool)
//{
//    mangled_ppc("?update_phantoms@c_havok_component@@QAAX_N@Z");
//};

//public: static bool c_havok_component::update_phantom(long, bool, struct c_havok_component::s_body_in_phantom const &, bool, float &, bool &, bool &, bool &)
//{
//    mangled_ppc("?update_phantom@c_havok_component@@SA_NJ_NABUs_body_in_phantom@1@0AAMAA_N33@Z");
//};

//bool entity_should_update_in_phantom(long, long, long, long)
//{
//    mangled_ppc("?entity_should_update_in_phantom@@YA_NJJJJ@Z");
//};

//public: class hkpSimpleShapePhantom * c_havok_component::get_simple_shape_phantom(void)
//{
//    mangled_ppc("?get_simple_shape_phantom@c_havok_component@@QAAPAVhkpSimpleShapePhantom@@XZ");
//};

//public: class hkpAabbPhantom * c_havok_component::get_aabb_phantom(void)
//{
//    mangled_ppc("?get_aabb_phantom@c_havok_component@@QAAPAVhkpAabbPhantom@@XZ");
//};

//public: void c_havok_component::scale_constraint_limit_tau(long, float)
//{
//    mangled_ppc("?scale_constraint_limit_tau@c_havok_component@@QAAXJM@Z");
//};

//public: void hkpLimitedHingeConstraintData::setAngularLimitsTauFactor(float)
//{
//    mangled_ppc("?setAngularLimitsTauFactor@hkpLimitedHingeConstraintData@@QAAXM@Z");
//};

//public: void hkpRagdollConstraintData::setAngularLimitsTauFactor(float)
//{
//    mangled_ppc("?setAngularLimitsTauFactor@hkpRagdollConstraintData@@QAAXM@Z");
//};

//public: void c_havok_component::scale_constraint_motor_power(long, float)
//{
//    mangled_ppc("?scale_constraint_motor_power@c_havok_component@@QAAXJM@Z");
//};

//public: class hkpConstraintMotor * hkpLimitedHingeConstraintData::getMotor(void) const
//{
//    mangled_ppc("?getMotor@hkpLimitedHingeConstraintData@@QBAPAVhkpConstraintMotor@@XZ");
//};

//void scale_constraint_motor(struct s_physics_model_definition const *, struct s_physics_model_motor_reference, class hkpConstraintMotor *, float)
//{
//    mangled_ppc("?scale_constraint_motor@@YAXPBUs_physics_model_definition@@Us_physics_model_motor_reference@@PAVhkpConstraintMotor@@M@Z");
//};

//public: void hkpLimitedForceConstraintMotor::setMaxForce(float)
//{
//    mangled_ppc("?setMaxForce@hkpLimitedForceConstraintMotor@@QAAXM@Z");
//};

//public: void hkpLimitedForceConstraintMotor::setMinMaxForces(float, float)
//{
//    mangled_ppc("?setMinMaxForces@hkpLimitedForceConstraintMotor@@QAAXMM@Z");
//};

//public: long c_havok_component::find_constraint_connecting_nodes(long, long, long) const
//{
//    mangled_ppc("?find_constraint_connecting_nodes@c_havok_component@@QBAJJJJ@Z");
//};

//public: struct c_havok_component::s_powered_chain_link_reference c_havok_component::find_powered_chain_reference_connecting_nodes(long, long) const
//{
//    mangled_ppc("?find_powered_chain_reference_connecting_nodes@c_havok_component@@QBA?AUs_powered_chain_link_reference@1@JJ@Z");
//};

//public: void c_havok_component::keyframe_ragdoll_constraint(long, struct matrix3x3const *, bool)
//{
//    mangled_ppc("?keyframe_ragdoll_constraint@c_havok_component@@QAAXJPBUmatrix3x3@@_N@Z");
//};

//public: void c_havok_component::keyframe_powered_chain_link(struct c_havok_component::s_powered_chain_link_reference, struct matrix3x3const *)
//{
//    mangled_ppc("?keyframe_powered_chain_link@c_havok_component@@QAAXUs_powered_chain_link_reference@1@PBUmatrix3x3@@@Z");
//};

//public: void c_havok_component::keyframe_limited_hinge_constraint(long, float, bool)
//{
//    mangled_ppc("?keyframe_limited_hinge_constraint@c_havok_component@@QAAXJM_N@Z");
//};

//public: void hkpLimitedHingeConstraintData::disableLimits(void)
//{
//    mangled_ppc("?disableLimits@hkpLimitedHingeConstraintData@@QAAXXZ");
//};

//public: void hkpLimitedHingeConstraintData::setMotorTargetAngle(float)
//{
//    mangled_ppc("?setMotorTargetAngle@hkpLimitedHingeConstraintData@@QAAXM@Z");
//};

//public: void c_havok_component::disable_limited_hinge_constraint_limits(long)
//{
//    mangled_ppc("?disable_limited_hinge_constraint_limits@c_havok_component@@QAAXJ@Z");
//};

//public: float c_havok_component::get_limited_hinge_constraint_angle(long) const
//{
//    mangled_ppc("?get_limited_hinge_constraint_angle@c_havok_component@@QBAMJ@Z");
//};

//public: long c_havok_component::find_constraint(struct s_physics_model_constraint_reference) const
//{
//    mangled_ppc("?find_constraint@c_havok_component@@QBAJUs_physics_model_constraint_reference@@@Z");
//};

//public: void c_havok_component::destroy_constraint(long)
//{
//    mangled_ppc("?destroy_constraint@c_havok_component@@QAAXJ@Z");
//};

//public: void * c_havok_component::c_constraint::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_constraint@c_havok_component@@QAAPAXI@Z");
//};

//public: void c_havok_component::create_constraint(struct s_physics_model_instance const *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const *, struct s_physics_model_node_constraint_edge_constraint const *, struct real_matrix4x3const *, bool)
//{
//    mangled_ppc("?create_constraint@c_havok_component@@QAAXPBUs_physics_model_instance@@PBVc_runtime_node_to_havok_component_rigid_body_index_mapping@@PBUs_physics_model_node_constraint_edge_constraint@@PBUreal_matrix4x3@@_N@Z");
//};

//public: void hkpLimitedHingeConstraintData::setMaxAngularLimit(float)
//{
//    mangled_ppc("?setMaxAngularLimit@hkpLimitedHingeConstraintData@@QAAXM@Z");
//};

//public: void hkpLimitedHingeConstraintData::setMinAngularLimit(float)
//{
//    mangled_ppc("?setMinAngularLimit@hkpLimitedHingeConstraintData@@QAAXM@Z");
//};

//public: void hkpLimitedHingeConstraintData::setMaxFrictionTorque(float)
//{
//    mangled_ppc("?setMaxFrictionTorque@hkpLimitedHingeConstraintData@@QAAXM@Z");
//};

//public: void hkpRagdollConstraintData::setTwistMinAngularLimit(float)
//{
//    mangled_ppc("?setTwistMinAngularLimit@hkpRagdollConstraintData@@QAAXM@Z");
//};

//public: void hkpRagdollConstraintData::setTwistMaxAngularLimit(float)
//{
//    mangled_ppc("?setTwistMaxAngularLimit@hkpRagdollConstraintData@@QAAXM@Z");
//};

//public: void hkpRagdollConstraintData::setPlaneMinAngularLimit(float)
//{
//    mangled_ppc("?setPlaneMinAngularLimit@hkpRagdollConstraintData@@QAAXM@Z");
//};

//public: void hkpRagdollConstraintData::setPlaneMaxAngularLimit(float)
//{
//    mangled_ppc("?setPlaneMaxAngularLimit@hkpRagdollConstraintData@@QAAXM@Z");
//};

//public: void hkpRagdollConstraintData::setConeAngularLimit(float)
//{
//    mangled_ppc("?setConeAngularLimit@hkpRagdollConstraintData@@QAAXM@Z");
//};

//public: void hkpStiffSpringConstraintData::setInWorldSpace(class hkTransform const &, class hkTransform const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setInWorldSpace@hkpStiffSpringConstraintData@@QAAXABVhkTransform@@0ABVhkVector4@@1@Z");
//};

//public: void hkpStiffSpringConstraintData::setSpringLength(float)
//{
//    mangled_ppc("?setSpringLength@hkpStiffSpringConstraintData@@QAAXM@Z");
//};

//public: void hkpPrismaticConstraintData::setMaxLinearLimit(float)
//{
//    mangled_ppc("?setMaxLinearLimit@hkpPrismaticConstraintData@@QAAXM@Z");
//};

//public: void hkpPrismaticConstraintData::setMinLinearLimit(float)
//{
//    mangled_ppc("?setMinLinearLimit@hkpPrismaticConstraintData@@QAAXM@Z");
//};

//public: void hkpPrismaticConstraintData::setMaxFrictionForce(float)
//{
//    mangled_ppc("?setMaxFrictionForce@hkpPrismaticConstraintData@@QAAXM@Z");
//};

//class hkpConstraintMotor * build_motor_from_motor_reference(struct s_physics_model_instance const *, struct s_physics_model_motor_reference const *, float *)
//{
//    mangled_ppc("?build_motor_from_motor_reference@@YAPAVhkpConstraintMotor@@PBUs_physics_model_instance@@PBUs_physics_model_motor_reference@@PAM@Z");
//};

//public: static void * hkpLimitedForceConstraintMotor::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpLimitedForceConstraintMotor@@SAPAXI@Z");
//};

//public: void c_havok_component::align_constraint_positions(void)
//{
//    mangled_ppc("?align_constraint_positions@c_havok_component@@QAAXXZ");
//};

//private: void c_havok_component::align_constraint_positions_recursive(long, class c_big_flags_typed_no_init<long, 64> *)
//{
//    mangled_ppc("?align_constraint_positions_recursive@c_havok_component@@AAAXJPAV?$c_big_flags_typed_no_init@J$0EA@@@@Z");
//};

//public: void c_havok_component::notify_has_physical_child_object(void)
//{
//    mangled_ppc("?notify_has_physical_child_object@c_havok_component@@QAAXXZ");
//};

//public: long c_havok_component::get_bodies_in_phantoms_count(void) const
//{
//    mangled_ppc("?get_bodies_in_phantoms_count@c_havok_component@@QBAJXZ");
//};

//public: void c_havok_component::get_bodies_in_phantom_info(long, long *, long *, long *) const
//{
//    mangled_ppc("?get_bodies_in_phantom_info@c_havok_component@@QBAXJPAJ00@Z");
//};

//public: long c_havok_component::calculate_heap_memory_usage(long *, long *, long *, long *) const
//{
//    mangled_ppc("?calculate_heap_memory_usage@c_havok_component@@QBAJPAJ000@Z");
//};

//public: void c_havok_component::calculate_rigid_body_correction_vectors(union vector3d *, long, class c_big_flags_typed_no_init<long, 64> *) const
//{
//    mangled_ppc("?calculate_rigid_body_correction_vectors@c_havok_component@@QBAXPATvector3d@@JPAV?$c_big_flags_typed_no_init@J$0EA@@@@Z");
//};

//public: void c_havok_component::body_slam_object_node_matrices(class c_big_flags_typed_no_init<long, 255> *, float)
//{
//    mangled_ppc("?body_slam_object_node_matrices@c_havok_component@@QAAXPAV?$c_big_flags_typed_no_init@J$0PP@@@M@Z");
//};

//void compute_rigid_body_correction_tree_recursive(class c_havok_component const *, struct s_model_definition const *, long, class c_runtime_node_to_havok_component_rigid_body_index_mapping const *, class s_static_array<union vector3d, 64> *, class c_big_flags_typed_no_init<long, 64> *, long)
//{
//    mangled_ppc("?compute_rigid_body_correction_tree_recursive@@YAXPBVc_havok_component@@PBUs_model_definition@@JPBVc_runtime_node_to_havok_component_rigid_body_index_mapping@@PAV?$s_static_array@Tvector3d@@$0EA@@@PAV?$c_big_flags_typed_no_init@J$0EA@@@J@Z");
//};

//private: void c_havok_component::body_slam_unsimulated_nodes_recursive(long, class c_big_flags_typed_no_init<long, 255> *, class c_big_flags_typed_no_init<long, 255> const *, struct real_orientation *, long)
//{
//    mangled_ppc("?body_slam_unsimulated_nodes_recursive@c_havok_component@@AAAXJPAV?$c_big_flags_typed_no_init@J$0PP@@@PBV2@PAUreal_orientation@@J@Z");
//};

//public: void c_havok_component::align_rigid_bodies_to_object_tranform(long, bool, bool)
//{
//    mangled_ppc("?align_rigid_bodies_to_object_tranform@c_havok_component@@QAAXJ_N0@Z");
//};

//public: void c_havok_component::calculate_object_transform(struct real_matrix4x3*) const
//{
//    mangled_ppc("?calculate_object_transform@c_havok_component@@QBAXPAUreal_matrix4x3@@@Z");
//};

//public: void c_havok_component::calculate_object_transform(struct real_matrix4x3*, struct real_matrix4x3const *) const
//{
//    mangled_ppc("?calculate_object_transform@c_havok_component@@QBAXPAUreal_matrix4x3@@PBU2@@Z");
//};

//public: bool c_havok_component::calculate_physics_bounding_sphere(union real_point3d *, float *) const
//{
//    mangled_ppc("?calculate_physics_bounding_sphere@c_havok_component@@QBA_NPATreal_point3d@@PAM@Z");
//};

//public: bool c_havok_component::calculate_physics_bounding_box(union real_rectangle3d *) const
//{
//    mangled_ppc("?calculate_physics_bounding_box@c_havok_component@@QBA_NPATreal_rectangle3d@@@Z");
//};

//public: class hkAabb & hkAabb::operator=(class hkAabb const &)
//{
//    mangled_ppc("??4hkAabb@@QAAAAV0@ABV0@@Z");
//};

//public: bool c_havok_component::calculate_local_space_physics_bounding_box(long, union real_rectangle3d *) const
//{
//    mangled_ppc("?calculate_local_space_physics_bounding_box@c_havok_component@@QBA_NJPATreal_rectangle3d@@@Z");
//};

//public: bool c_havok_component::rigid_body_calculate_fixed_position(long, enum e_havok_group, union real_point3d const *, union vector3d const *, union real_point3d *, struct s_location *, float, float, bool, union real_point3d const *, long)
//{
//    mangled_ppc("?rigid_body_calculate_fixed_position@c_havok_component@@QAA_NJW4e_havok_group@@PBTreal_point3d@@PBTvector3d@@PAT3@PAUs_location@@MM_N1J@Z");
//};

//public: bool c_havok_component::rigid_body_calculate_fixed_position_along_z(long, enum e_havok_group, class hkpShape const *, float, long, long *)
//{
//    mangled_ppc("?rigid_body_calculate_fixed_position_along_z@c_havok_component@@QAA_NJW4e_havok_group@@PBVhkpShape@@MJPAJ@Z");
//};

//public: class hkTransform & hkTransform::operator=(class hkTransform const &)
//{
//    mangled_ppc("??4hkTransform@@QAAAAV0@ABV0@@Z");
//};

//public: bool c_havok_component::fix_rigid_body_position_along_vector(long, enum e_havok_group, struct real_matrix4x3const *, union vector3d const *, long, long *, struct real_matrix4x3*) const
//{
//    mangled_ppc("?fix_rigid_body_position_along_vector@c_havok_component@@QBA_NJW4e_havok_group@@PBUreal_matrix4x3@@PBTvector3d@@JPAJPAU3@@Z");
//};

//union real_point3d * real_point3d_from_hkVector4_in_place(class hkVector4*)
//{
//    mangled_ppc("?real_point3d_from_hkVector4_in_place@@YAPATreal_point3d@@PAVhkVector4@@@Z");
//};

//public: bool c_havok_component::calculate_impulse(long, long, long, bool, float *, union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?calculate_impulse@c_havok_component@@QBA_NJJJ_NPAMPATreal_point3d@@PATvector3d@@@Z");
//};

//public: long c_havok_component::find_impact_which_includes_contact(struct c_impact::s_contact_description const *, bool) const
//{
//    mangled_ppc("?find_impact_which_includes_contact@c_havok_component@@QBAJPBUs_contact_description@c_impact@@_N@Z");
//};

//public: long c_havok_component::get_constraint_impact_datum_index(long) const
//{
//    mangled_ppc("?get_constraint_impact_datum_index@c_havok_component@@QBAJJ@Z");
//};

//public: long c_havok_component::c_constraint::get_constraint_impact_datum_index(void) const
//{
//    mangled_ppc("?get_constraint_impact_datum_index@c_constraint@c_havok_component@@QBAJXZ");
//};

//public: bool c_havok_component::make_space_for_new_impact(float, long)
//{
//    mangled_ppc("?make_space_for_new_impact@c_havok_component@@QAA_NMJ@Z");
//};

//public: void c_havok_component::disconnect_from_impacts(void)
//{
//    mangled_ppc("?disconnect_from_impacts@c_havok_component@@QAAXXZ");
//};

//public: void c_havok_component::set_rigid_body_group(enum e_havok_group)
//{
//    mangled_ppc("?set_rigid_body_group@c_havok_component@@QAAXW4e_havok_group@@@Z");
//};

//public: bool c_havok_component::has_rigid_body_in_same_group(class c_havok_component const *) const
//{
//    mangled_ppc("?has_rigid_body_in_same_group@c_havok_component@@QBA_NPBV1@@Z");
//};

//private: void c_havok_component::build_crate_component(void)
//{
//    mangled_ppc("?build_crate_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_scenery_component(void)
//{
//    mangled_ppc("?build_scenery_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_control_component(void)
//{
//    mangled_ppc("?build_control_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_terminal_component(void)
//{
//    mangled_ppc("?build_terminal_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_vehicle_component(void)
//{
//    mangled_ppc("?build_vehicle_component@c_havok_component@@AAAXXZ");
//};

//private: enum e_rigid_body_size c_havok_component::build_physics_model_component(bool, bool)
//{
//    mangled_ppc("?build_physics_model_component@c_havok_component@@AAA?AW4e_rigid_body_size@@_N0@Z");
//};

//private: long c_havok_component::build_rigid_body_construction_templates(bool, bool, struct s_physics_model_instance const *, struct c_havok_component::s_rigid_body_construction_template *, long, enum e_rigid_body_size *)
//{
//    mangled_ppc("?build_rigid_body_construction_templates@c_havok_component@@AAAJ_N0PBUs_physics_model_instance@@PAUs_rigid_body_construction_template@1@JPAW4e_rigid_body_size@@@Z");
//};

//private: void c_havok_component::build_physics_model_component_from_templates(struct c_havok_component::s_rigid_body_construction_template const *, long)
//{
//    mangled_ppc("?build_physics_model_component_from_templates@c_havok_component@@AAAXPBUs_rigid_body_construction_template@1@J@Z");
//};

//private: bool c_havok_component::build_physics_model_rigid_body_for_node(struct s_physics_model_instance const *, long, enum e_rigid_body_size *, class c_big_flags_typed_no_init<long, 255> *, char const *, class c_runtime_node_to_physics_model_rigid_body_index_mapping const *, struct c_havok_component::s_rigid_body_construction_template *)
//{
//    mangled_ppc("?build_physics_model_rigid_body_for_node@c_havok_component@@AAA_NPBUs_physics_model_instance@@JPAW4e_rigid_body_size@@PAV?$c_big_flags_typed_no_init@J$0PP@@@PBDPBVc_runtime_node_to_physics_model_rigid_body_index_mapping@@PAUs_rigid_body_construction_template@1@@Z");
//};

//float substitute_default_zero(float, float)
//{
//    mangled_ppc("?substitute_default_zero@@YAMMM@Z");
//};

//bool havok_motion_type_is_simulated(enum hkpMotion::MotionType)
//{
//    mangled_ppc("?havok_motion_type_is_simulated@@YA_NW4MotionType@hkpMotion@@@Z");
//};

//private: class hkpShape const * c_havok_component::build_physics_model_rigid_body_shape(struct s_physics_model_instance const *, char const *, char *, long *, class c_runtime_node_to_physics_model_rigid_body_index_mapping const *, long, class c_big_flags_typed_no_init<long, 255> *, float *, class hkVector4*, class hkMatrix3*, bool *, enum e_rigid_body_size *, bool *, unsigned long *, bool *)
//{
//    mangled_ppc("?build_physics_model_rigid_body_shape@c_havok_component@@AAAPBVhkpShape@@PBUs_physics_model_instance@@PBDPADPAJPBVc_runtime_node_to_physics_model_rigid_body_index_mapping@@JPAV?$c_big_flags_typed_no_init@J$0PP@@@PAMPAVhkVector4@@PAVhkMatrix3@@PA_NPAW4e_rigid_body_size@@9PAK9@Z");
//};

//public: hkpMassProperties::hkpMassProperties(void)
//{
//    mangled_ppc("??0hkpMassProperties@@QAA@XZ");
//};

//void physics_model_rigid_body_shape_list_append_rigid_body(long, bool, struct s_physics_model_rigid_body const *, struct render_model_definition const *, class hkTransform &, class s_static_array<class hkpShape const *, 1024> &, long *)
//{
//    mangled_ppc("?physics_model_rigid_body_shape_list_append_rigid_body@@YAXJ_NPBUs_physics_model_rigid_body@@PBUrender_model_definition@@AAVhkTransform@@AAV?$s_static_array@PBVhkpShape@@$0EAA@@@PAJ@Z");
//};

//public: static void * hkpConvexTransformShape::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpConvexTransformShape@@SAPAXI@Z");
//};

//public: static void * hkpConvexTranslateShape::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpConvexTranslateShape@@SAPAXI@Z");
//};

//public: hkpConvexTranslateShape::hkpConvexTranslateShape(class hkpConvexShape const *, class hkVector4const &, enum hkpShapeContainer::ReferencePolicy)
//{
//    mangled_ppc("??0hkpConvexTranslateShape@@QAA@PBVhkpConvexShape@@ABVhkVector4@@W4ReferencePolicy@hkpShapeContainer@@@Z");
//};

//merged_83185160
//{
//    mangled_ppc("merged_83185160");
//};

//public: static void hkpConvexTranslateShape::operator delete(void *)
//{
//    mangled_ppc("??3hkpConvexTranslateShape@@SAXPAX@Z");
//};

//public: virtual hkpConvexTranslateShape::~hkpConvexTranslateShape(void)
//{
//    mangled_ppc("??1hkpConvexTranslateShape@@UAA@XZ");
//};

//private: void c_havok_component::generate_rigid_edges_bit_vector(struct s_physics_model_instance const *, class c_big_flags_typed_no_init<long, 4096> *)
//{
//    mangled_ppc("?generate_rigid_edges_bit_vector@c_havok_component@@AAAXPBUs_physics_model_instance@@PAV?$c_big_flags_typed_no_init@J$0BAAA@@@@Z");
//};

//private: void c_havok_component::generate_rigidly_constrained_shape_list_recursive(struct s_physics_model_instance const *, char const *, class c_big_flags_typed_no_init<long, 4096> const *, class c_runtime_node_to_physics_model_rigid_body_index_mapping const *, long, long, long, char *, long *, long, class c_big_flags_typed_no_init<long, 255> *, bool *)
//{
//    mangled_ppc("?generate_rigidly_constrained_shape_list_recursive@c_havok_component@@AAAXPBUs_physics_model_instance@@PBDPBV?$c_big_flags_typed_no_init@J$0BAAA@@@PBVc_runtime_node_to_physics_model_rigid_body_index_mapping@@JJJPADPAJJPAV?$c_big_flags_typed_no_init@J$0PP@@@PA_N@Z");
//};

//long convert_rigid_body_index_to_alternate_no_phantom_version(struct s_physics_model_instance const *, bool, long, bool *, bool *)
//{
//    mangled_ppc("?convert_rigid_body_index_to_alternate_no_phantom_version@@YAJPBUs_physics_model_instance@@_NJPA_N2@Z");
//};

//private: enum e_havok_group c_havok_component::calculate_physics_model_rigid_body_havok_component_group(struct s_physics_model_instance const *, enum e_rigid_body_size, enum hkpMotion::MotionType, long)
//{
//    mangled_ppc("?calculate_physics_model_rigid_body_havok_component_group@c_havok_component@@AAA?AW4e_havok_group@@PBUs_physics_model_instance@@W4e_rigid_body_size@@W4MotionType@hkpMotion@@J@Z");
//};

//private: void c_havok_component::postprocess_physics_model_havok_component(struct s_physics_model_instance *)
//{
//    mangled_ppc("?postprocess_physics_model_havok_component@c_havok_component@@AAAXPAUs_physics_model_instance@@@Z");
//};

//private: void c_havok_component::build_biped_component(void)
//{
//    mangled_ppc("?build_biped_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_creature_component(void)
//{
//    mangled_ppc("?build_creature_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_character_component(struct s_character_physics_definition const *, class c_character_physics_component *, enum e_havok_group, enum e_havok_group, bool, bool, bool, float)
//{
//    mangled_ppc("?build_character_component@c_havok_component@@AAAXPBUs_character_physics_definition@@PAVc_character_physics_component@@W4e_havok_group@@2_N33M@Z");
//};

//private: void c_havok_component::build_giant_component(void)
//{
//    mangled_ppc("?build_giant_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_machine_component(void)
//{
//    mangled_ppc("?build_machine_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_item_component(void)
//{
//    mangled_ppc("?build_item_component@c_havok_component@@AAAXXZ");
//};

//private: void c_havok_component::build_projectile_component(void)
//{
//    mangled_ppc("?build_projectile_component@c_havok_component@@AAAXXZ");
//};

//private: class hkpRigidBody * c_havok_component::build_rigid_body(class hkpShape const *, float, float, bool, class hkVector4const *, float, float, class hkMatrix3const *, float, long, class hkTransform const *, long, float, float)
//{
//    mangled_ppc("?build_rigid_body@c_havok_component@@AAAPAVhkpRigidBody@@PBVhkpShape@@MM_NPBVhkVector4@@MMPBVhkMatrix3@@MJPBVhkTransform@@JMM@Z");
//};

//void calculate_quality_type_and_maximum_penetration_depth(long, enum hkpCollidableQualityType *, float *, enum hkpMotion::MotionType, long, float)
//{
//    mangled_ppc("?calculate_quality_type_and_maximum_penetration_depth@@YAXJPAW4hkpCollidableQualityType@@PAMW4MotionType@hkpMotion@@JM@Z");
//};

//private: void c_havok_component::build_powered_chain_constraints(struct s_physics_model_instance *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const &)
//{
//    mangled_ppc("?build_powered_chain_constraints@c_havok_component@@AAAXPAUs_physics_model_instance@@ABVc_runtime_node_to_havok_component_rigid_body_index_mapping@@@Z");
//};

//public: static void * hkpPoweredChainData::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpPoweredChainData@@SAPAXI@Z");
//};

//public: static void * hkpConstraintChainInstance::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpConstraintChainInstance@@SAPAXI@Z");
//};

//private: void c_havok_component::build_constraints(struct s_physics_model_instance const *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const &)
//{
//    mangled_ppc("?build_constraints@c_havok_component@@AAAXPBUs_physics_model_instance@@ABVc_runtime_node_to_havok_component_rigid_body_index_mapping@@@Z");
//};

//private: bool c_havok_component::calculate_constraint_transforms(struct s_physics_model_instance const *, class c_runtime_node_to_havok_component_rigid_body_index_mapping const *, class hkTransform *, class hkTransform *, class hkpRigidBody **, class hkpRigidBody **, struct s_physics_model_constraint_bodies const *, bool)
//{
//    mangled_ppc("?calculate_constraint_transforms@c_havok_component@@AAA_NPBUs_physics_model_instance@@PBVc_runtime_node_to_havok_component_rigid_body_index_mapping@@PAVhkTransform@@2PAPAVhkpRigidBody@@3PBUs_physics_model_constraint_bodies@@_N@Z");
//};

//private: void c_havok_component::calculate_transform_between_nodes_on_rigid_body(long, long, long, struct real_matrix4x3*)
//{
//    mangled_ppc("?calculate_transform_between_nodes_on_rigid_body@c_havok_component@@AAAXJJJPAUreal_matrix4x3@@@Z");
//};

//private: static long c_havok_component::rigid_body_motion_type_to_havok_motion_type(long)
//{
//    mangled_ppc("?rigid_body_motion_type_to_havok_motion_type@c_havok_component@@CAJJ@Z");
//};

//public: c_havok_component::c_rigid_body::c_rigid_body(bool, long, class hkpRigidBody *, char const *, long, bool)
//{
//    mangled_ppc("??0c_rigid_body@c_havok_component@@QAA@_NJPAVhkpRigidBody@@PBDJ0@Z");
//};

//public: bool c_havok_component::c_rigid_body::is_fixed(void) const
//{
//    mangled_ppc("?is_fixed@c_rigid_body@c_havok_component@@QBA_NXZ");
//};

//public: bool c_havok_component::c_rigid_body::is_keyframed(void) const
//{
//    mangled_ppc("?is_keyframed@c_rigid_body@c_havok_component@@QBA_NXZ");
//};

//bool entity_belongs_in_phantom(long, long, long, long)
//{
//    mangled_ppc("?entity_belongs_in_phantom@@YA_NJJJJ@Z");
//};

//public: void hkEnum<enum hkpRigidBodyCinfo::SolverDeactivation, signed char>::operator=(enum hkpRigidBodyCinfo::SolverDeactivation)
//{
//    mangled_ppc("??4?$hkEnum@W4SolverDeactivation@hkpRigidBodyCinfo@@C@@QAAXW4SolverDeactivation@hkpRigidBodyCinfo@@@Z");
//};

//public: void hkEnum<enum hkpCollidableQualityType, signed char>::operator=(enum hkpCollidableQualityType)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpCollidableQualityType@@C@@QAAXW4hkpCollidableQualityType@@@Z");
//};

//public: unsigned int hkPadSpu<unsigned int>::operator unsigned int(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@I@@QBAIXZ");
//};

//public: struct hkpProcessCdPoint * hkPadSpu<struct hkpProcessCdPoint *>::operator struct hkpProcessCdPoint *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUhkpProcessCdPoint@@@@QBAPAUhkpProcessCdPoint@@XZ");
//};

//public: c_flags<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>(unsigned char)
//{
//    mangled_ppc("??0?$c_flags@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@QAA@E@Z");
//};

//public: hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@Vc_constraint@c_havok_component@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@Vc_constraint@c_havok_component@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::pushBack(class c_havok_component::c_constraint const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@Vc_constraint@c_havok_component@@UhkContainerHeapAllocator@@@@QAAXABVc_constraint@c_havok_component@@@Z");
//};

//public: static void * hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkInplaceArray@Vc_rigid_body@c_havok_component@@$00UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: void hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@Vc_rigid_body@c_havok_component@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@Vc_rigid_body@c_havok_component@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: class c_havok_component::c_rigid_body & hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@Vc_rigid_body@c_havok_component@@UhkContainerHeapAllocator@@@@QAAAAVc_rigid_body@c_havok_component@@XZ");
//};

//public: struct s_water_physics_model::s_sphere const * c_static_stack<struct s_water_physics_model::s_sphere, 16>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QBAPBUs_sphere@s_water_physics_model@@J@Z");
//};

//public: long c_data_iterator<class c_havok_component>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Vc_havok_component@@@@QBAJXZ");
//};

//public: hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@Us_body_in_phantom@c_havok_component@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct c_havok_component::s_body_in_phantom & hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@Us_body_in_phantom@c_havok_component@@UhkContainerHeapAllocator@@@@QAAAAUs_body_in_phantom@c_havok_component@@XZ");
//};

//public: static void * hkArrayBase<struct c_havok_component::s_body_in_phantom>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@SAPAXI@Z");
//};

//public: static void hkArrayBase<struct c_havok_component::s_body_in_phantom>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@SAXPAX@Z");
//};

//public: void c_data_iterator<class c_impact>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_impact@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_impact>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_impact@@@@QAA_NXZ");
//};

//public: class c_impact * c_data_iterator<class c_impact>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_impact@@@@QBAPAVc_impact@@XZ");
//};

//public: long c_data_iterator<class c_impact>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Vc_impact@@@@QBAJXZ");
//};

//public: long c_static_stack<class hkpEntity *, 64>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@PAVhkpEntity@@$0EA@@@QBAJXZ");
//};

//public: void c_static_stack<class hkpEntity *, 64>::push_back(class hkpEntity *const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@PAVhkpEntity@@$0EA@@@QAAXABQAVhkpEntity@@@Z");
//};

//public: class hkpEntity ** c_static_stack<class hkpEntity *, 64>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@PAVhkpEntity@@$0EA@@@QAAPAPAVhkpEntity@@XZ");
//};

//public: c_static_stack<class hkpEntity *, 64>::c_static_stack<class hkpEntity *, 64>(void)
//{
//    mangled_ppc("??0?$c_static_stack@PAVhkpEntity@@$0EA@@@QAA@XZ");
//};

//public: c_big_flags<255>::c_big_flags<255>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0PP@@@QAA@XZ");
//};

//public: class hkpShape const ** s_static_array<class hkpShape const *, 1024>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PBVhkpShape@@$0EAA@@@QAAPAPBVhkpShape@@XZ");
//};

//public: hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UhkpMassElement@@$0EA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: unsigned int hkPadSpu<unsigned int>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@I@@QBAIXZ");
//};

//public: struct hkpProcessCdPoint * hkPadSpu<struct hkpProcessCdPoint *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUhkpProcessCdPoint@@@@QBAPAUhkpProcessCdPoint@@XZ");
//};

//public: long c_static_stack<class hkpEntity *, 64>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@PAVhkpEntity@@$0EA@@@QAAJXZ");
//};

//public: class hkpEntity ** c_static_stack<class hkpEntity *, 64>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@PAVhkpEntity@@$0EA@@@QAAPAPAVhkpEntity@@J@Z");
//};

//public: bool c_static_stack<class hkpEntity *, 64>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PAVhkpEntity@@$0EA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class hkpEntity *, 64>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@PAVhkpEntity@@$0EA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class hkpEntity *, 64>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PAVhkpEntity@@$0EA@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum c_havok_contact_point::e_life_cycle_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_life_cycle_flag@c_havok_contact_point@@@Z");
//};

//public: void c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum c_havok_contact_point::e_life_cycle_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_life_cycle_flag@c_havok_contact_point@@_N@Z");
//};

//public: void c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: hkInplaceArray<char, 4, struct hkContainerHeapAllocator>::hkInplaceArray<char, 4, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@D$03UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArrayBase<class c_havok_component::c_constraint>::hkArrayBase<class c_havok_component::c_constraint>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@Vc_constraint@c_havok_component@@@@QAA@XZ");
//};

//public: int hkArrayBase<class c_havok_component::c_constraint>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@Vc_constraint@c_havok_component@@@@QBAHXZ");
//};

//public: void hkArrayBase<class c_havok_component::c_constraint>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@Vc_constraint@c_havok_component@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class c_havok_component::c_constraint>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@Vc_constraint@c_havok_component@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class c_havok_component::c_constraint>::_pushBack(class hkMemoryAllocator &, class c_havok_component::c_constraint const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@Vc_constraint@c_havok_component@@@@QAAXAAVhkMemoryAllocator@@ABVc_constraint@c_havok_component@@@Z");
//};

//public: hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>::~hkArray<class c_havok_component::c_constraint, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@Vc_constraint@c_havok_component@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class c_havok_component::c_constraint>::~hkArrayBase<class c_havok_component::c_constraint>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@Vc_constraint@c_havok_component@@@@QAA@XZ");
//};

//public: int hkArrayBase<class c_havok_component::c_rigid_body>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QBAHXZ");
//};

//public: void hkArrayBase<class c_havok_component::c_rigid_body>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class c_havok_component::c_rigid_body>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class c_havok_component::c_rigid_body & hkArrayBase<class c_havok_component::c_rigid_body>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QAAAAVc_rigid_body@c_havok_component@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator>::hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@Vc_rigid_body@c_havok_component@@$00UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: c_havok_component::c_rigid_body::c_rigid_body(void)
//{
//    mangled_ppc("??0c_rigid_body@c_havok_component@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_physics_model_phantom_flags, unsigned long, 32, struct s_default_enum_string_resolver>::test(enum e_physics_model_phantom_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_physics_model_phantom_flags@@K$0CA@Us_default_enum_string_resolver@@@@QBA_NW4e_physics_model_phantom_flags@@@Z");
//};

//public: bool c_flags_no_init<enum s_physics_model_node::e_physics_model_node_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum s_physics_model_node::e_physics_model_node_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_physics_model_node_flags@s_physics_model_node@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_physics_model_node_flags@s_physics_model_node@@@Z");
//};

//public: struct hkpPoweredChainData::ConstraintInfo & hkArrayBase<struct hkpPoweredChainData::ConstraintInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UConstraintInfo@hkpPoweredChainData@@@@QAAAAUConstraintInfo@hkpPoweredChainData@@H@Z");
//};

//public: hkArrayBase<struct c_havok_component::s_body_in_phantom>::hkArrayBase<struct c_havok_component::s_body_in_phantom>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAA@XZ");
//};

//public: struct c_havok_component::s_body_in_phantom & hkArrayBase<struct c_havok_component::s_body_in_phantom>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAAAAUs_body_in_phantom@c_havok_component@@H@Z");
//};

//public: int hkArrayBase<struct c_havok_component::s_body_in_phantom>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct c_havok_component::s_body_in_phantom>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct c_havok_component::s_body_in_phantom>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct c_havok_component::s_body_in_phantom>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAAXH@Z");
//};

//public: struct c_havok_component::s_body_in_phantom & hkArrayBase<struct c_havok_component::s_body_in_phantom>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAAAAUs_body_in_phantom@c_havok_component@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::~hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@Us_body_in_phantom@c_havok_component@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct c_havok_component::s_body_in_phantom>::~hkArrayBase<struct c_havok_component::s_body_in_phantom>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAA@XZ");
//};

//public: bool c_big_flags_typed_no_init<long, 4096>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0BAAA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 4096>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0BAAA@@@QAAXJ_N@Z");
//};

//public: struct hkpMassElement & hkArrayBase<struct hkpMassElement>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpMassElement@@@@QAAAAUhkpMassElement@@H@Z");
//};

//public: hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::~hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpMassElement@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpMassElement, 64, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UhkpMassElement@@$0EA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkpMassElement::hkpMassElement(void)
//{
//    mangled_ppc("??0hkpMassElement@@QAA@XZ");
//};

//public: class hkpShape const *& s_static_array<class hkpShape const *, 1024>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBVhkpShape@@$0EAA@@@QAAAAPBVhkpShape@@J@Z");
//};

//public: hkArray<char, struct hkContainerHeapAllocator>::hkArray<char, struct hkContainerHeapAllocator>(char *, int, int)
//{
//    mangled_ppc("??0?$hkArray@DUhkContainerHeapAllocator@@@@QAA@PADHH@Z");
//};

//public: hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>::hkArray<class c_havok_component::c_rigid_body, struct hkContainerHeapAllocator>(class c_havok_component::c_rigid_body *, int, int)
//{
//    mangled_ppc("??0?$hkArray@Vc_rigid_body@c_havok_component@@UhkContainerHeapAllocator@@@@QAA@PAVc_rigid_body@c_havok_component@@HH@Z");
//};

//public: void hkArray<struct c_havok_component::s_body_in_phantom, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@Us_body_in_phantom@c_havok_component@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>(struct hkpMassElement *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UhkpMassElement@@UhkContainerHeapAllocator@@@@QAA@PAUhkpMassElement@@HH@Z");
//};

//public: void hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpMassElement@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: static bool c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_havok_contact_point::e_life_cycle_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_life_cycle_flag@c_havok_contact_point@@@Z");
//};

//public: bool c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_havok_contact_point::e_life_cycle_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_flag@c_havok_contact_point@@@Z");
//};

//public: void hkArrayBase<class c_havok_component::c_constraint>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@Vc_constraint@c_havok_component@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class c_havok_component::c_constraint>(class c_havok_component::c_constraint *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@Vc_constraint@c_havok_component@@@hkArrayUtil@@SAXPAVc_constraint@c_havok_component@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkMemUtil::memCpyOneAligned<12, 4>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$0M@$03@hkMemUtil@@YAXPAXPBX@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class c_havok_component::c_constraint>(class c_havok_component::c_constraint *, int, class c_havok_component::c_constraint const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@Vc_constraint@c_havok_component@@@hkArrayUtil@@SAXPAVc_constraint@c_havok_component@@HABV12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<class c_havok_component::c_rigid_body>::hkArrayBase<class c_havok_component::c_rigid_body>(class c_havok_component::c_rigid_body *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QAA@PAVc_rigid_body@c_havok_component@@HH@Z");
//};

//public: void hkArrayBase<class c_havok_component::c_rigid_body>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::construct<class c_havok_component::c_rigid_body>(class c_havok_component::c_rigid_body *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@Vc_rigid_body@c_havok_component@@@hkArrayUtil@@SAXPAVc_rigid_body@c_havok_component@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static bool c_flags_no_init<enum e_physics_model_phantom_flags, unsigned long, 32, struct s_default_enum_string_resolver>::valid_bit(enum e_physics_model_phantom_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_physics_model_phantom_flags@@K$0CA@Us_default_enum_string_resolver@@@@SA_NW4e_physics_model_phantom_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_physics_model_phantom_flags, unsigned long, 32, struct s_default_enum_string_resolver>::flag_size_type(enum e_physics_model_phantom_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_physics_model_phantom_flags@@K$0CA@Us_default_enum_string_resolver@@@@CAKW4e_physics_model_phantom_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum s_physics_model_node::e_physics_model_node_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_physics_model_node::e_physics_model_node_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_physics_model_node_flags@s_physics_model_node@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_physics_model_node_flags@s_physics_model_node@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_physics_model_node::e_physics_model_node_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_physics_model_node::e_physics_model_node_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_physics_model_node_flags@s_physics_model_node@@G$00Us_default_enum_string_resolver@@@@CAGW4e_physics_model_node_flags@s_physics_model_node@@@Z");
//};

//public: void hkArrayBase<struct c_havok_component::s_body_in_phantom>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@Us_body_in_phantom@c_havok_component@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct c_havok_component::s_body_in_phantom>(struct c_havok_component::s_body_in_phantom *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@Us_body_in_phantom@c_havok_component@@@hkArrayUtil@@SAXPAUs_body_in_phantom@c_havok_component@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct c_havok_component::s_body_in_phantom>(struct c_havok_component::s_body_in_phantom *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@Us_body_in_phantom@c_havok_component@@@hkArrayUtil@@SAXPAUs_body_in_phantom@c_havok_component@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static bool c_big_flags_typed_no_init<long, 4096>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0BAAA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 4096>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0BAAA@@@QBA_NXZ");
//};

//public: hkArrayBase<struct hkpMassElement>::hkArrayBase<struct hkpMassElement>(struct hkpMassElement *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpMassElement@@@@QAA@PAUhkpMassElement@@HH@Z");
//};

//public: hkArrayBase<struct hkpMassElement>::~hkArrayBase<struct hkpMassElement>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpMassElement@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpMassElement>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpMassElement@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static bool s_static_array<class hkpShape const *, 1024>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PBVhkpShape@@$0EAA@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: static void hkArrayUtil::destruct<class c_havok_component::c_rigid_body>(class c_havok_component::c_rigid_body *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@Vc_rigid_body@c_havok_component@@@hkArrayUtil@@SAXPAVc_rigid_body@c_havok_component@@HU?$hkTraitBool@$0A@@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 4096>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0BAAA@@@KAKJ@Z");
//};

//public: int hkArrayBase<struct hkpMassElement>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpMassElement@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpMassElement>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpMassElement@@@@QAAXXZ");
//};

//public: void * c_havok_component::c_rigid_body::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_rigid_body@c_havok_component@@QAAPAXI@Z");
//};

//public: c_havok_component::c_rigid_body::~c_rigid_body(void)
//{
//    mangled_ppc("??1c_rigid_body@c_havok_component@@QAA@XZ");
//};

//public: hkInplaceArray<char, 4, struct hkContainerHeapAllocator>::~hkInplaceArray<char, 4, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@D$03UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//private: static unsigned char c_flags_no_init<enum c_havok_contact_point::e_life_cycle_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_havok_contact_point::e_life_cycle_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_life_cycle_flag@c_havok_contact_point@@E$01Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_flag@c_havok_contact_point@@@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 4096>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0BAAA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 4096>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0BAAA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 4096>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0BAAA@@@KAKXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpMassElement>(struct hkpMassElement *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpMassElement@@@hkArrayUtil@@SAXPAUhkpMassElement@@HU?$hkTraitBool@$0A@@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 4096>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0BAAA@@@KAKJ@Z");
//};

//public: class hkHalf & hkHalf::operator=(float const &)
//{
//    mangled_ppc("??4hkHalf@@QAAAAV0@ABM@Z");
//};

//void * operator new(unsigned int, struct hkPlacementNewArg *)
//{
//    mangled_ppc("??2@YAPAXIPAUhkPlacementNewArg@@@Z");
//};

//public: hkSimdReal::hkSimdReal(float const &)
//{
//    mangled_ppc("??0hkSimdReal@@QAA@ABM@Z");
//};

//class hkSimdReal const operator-(class hkSimdReal)
//{
//    mangled_ppc("??G@YA?BVhkSimdReal@@V0@@Z");
//};

//float hkMath::sqrt(float)
//{
//    mangled_ppc("?sqrt@hkMath@@YAMM@Z");
//};

//int hkMath::hkToIntFast(float)
//{
//    mangled_ppc("?hkToIntFast@hkMath@@YAHM@Z");
//};

//public: hkQuaternion::hkQuaternion(void)
//{
//    mangled_ppc("??0hkQuaternion@@QAA@XZ");
//};

//public: void hkVector4::setAll(float)
//{
//    mangled_ppc("?setAll@hkVector4@@QAAXM@Z");
//};

//public: void hkVector4::mul4(class hkSimdReal const &)
//{
//    mangled_ppc("?mul4@hkVector4@@QAAXABVhkSimdReal@@@Z");
//};

//public: struct __vector4const & hkSimdReal::getQuad(void) const
//{
//    mangled_ppc("?getQuad@hkSimdReal@@QBAABU__vector4@@XZ");
//};

//public: void hkVector4::setCross(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setCross@hkVector4@@QAAXABV1@0@Z");
//};

//public: class hkSimdReal hkVector4::dot3(class hkVector4const &) const
//{
//    mangled_ppc("?dot3@hkVector4@@QBA?AVhkSimdReal@@ABV1@@Z");
//};

//public: void hkVector4::setXYZ0(class hkVector4const &)
//{
//    mangled_ppc("?setXYZ0@hkVector4@@QAAXABV1@@Z");
//};

//public: void hkMatrix3::setRows(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setRows@hkMatrix3@@QAAXABVhkVector4@@00@Z");
//};

//public: void hkMatrix3::setCols(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setCols@hkMatrix3@@QAAXABVhkVector4@@00@Z");
//};

//public: void hkMatrix3::operator=(class hkMatrix3const &)
//{
//    mangled_ppc("??4hkMatrix3@@QAAXABV0@@Z");
//};

//public: void hkQuaternion::operator=(class hkQuaternion const &)
//{
//    mangled_ppc("??4hkQuaternion@@QAAXABV0@@Z");
//};

//public: void hkQuaternion::normalize(void)
//{
//    mangled_ppc("?normalize@hkQuaternion@@QAAXXZ");
//};

//public: void hkVector4::normalize4(void)
//{
//    mangled_ppc("?normalize4@hkVector4@@QAAXXZ");
//};

//public: class hkSimdReal hkVector4::lengthInverse4(void) const
//{
//    mangled_ppc("?lengthInverse4@hkVector4@@QBA?AVhkSimdReal@@XZ");
//};

//public: void hkQuaternion::setMul(class hkQuaternion const &, class hkQuaternion const &)
//{
//    mangled_ppc("?setMul@hkQuaternion@@QAAXABV1@0@Z");
//};

//public: void hkVector4::setAll(class hkSimdReal const &)
//{
//    mangled_ppc("?setAll@hkVector4@@QAAXABVhkSimdReal@@@Z");
//};

//public: void hkVector4::sub4(class hkVector4const &)
//{
//    mangled_ppc("?sub4@hkVector4@@QAAXABV1@@Z");
//};

//public: void hkVector4::addMul4(class hkSimdReal const &, class hkVector4const &)
//{
//    mangled_ppc("?addMul4@hkVector4@@QAAXABVhkSimdReal@@ABV1@@Z");
//};

//public: void hkVector4::setXYZW(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setXYZW@hkVector4@@QAAXABV1@0@Z");
//};

//public: class hkSimdReal hkVector4::getSimdAt(int) const
//{
//    mangled_ppc("?getSimdAt@hkVector4@@QBA?AVhkSimdReal@@H@Z");
//};

//public: class hkVector4const & hkQuaternion::getImag(void) const
//{
//    mangled_ppc("?getImag@hkQuaternion@@QBAABVhkVector4@@XZ");
//};

//public: void hkQuaternion::setInverse(class hkQuaternion const &)
//{
//    mangled_ppc("?setInverse@hkQuaternion@@QAAXABV1@@Z");
//};

//public: void hkVector4::setNeg3(class hkVector4const &)
//{
//    mangled_ppc("?setNeg3@hkVector4@@QAAXABV1@@Z");
//};

//public: class hkRotation & hkRotation::operator=(class hkRotation const &)
//{
//    mangled_ppc("??4hkRotation@@QAAAAV0@ABV0@@Z");
//};

//public: hkRotation::hkRotation(class hkRotation const &)
//{
//    mangled_ppc("??0hkRotation@@QAA@ABV0@@Z");
//};

//public: hkMatrix3::hkMatrix3(class hkMatrix3const &)
//{
//    mangled_ppc("??0hkMatrix3@@QAA@ABV0@@Z");
//};

//public: hkpPropertyValue::hkpPropertyValue(void)
//{
//    mangled_ppc("??0hkpPropertyValue@@QAA@XZ");
//};

//public: hkpPropertyValue::hkpPropertyValue(int)
//{
//    mangled_ppc("??0hkpPropertyValue@@QAA@H@Z");
//};

//public: void hkpPropertyValue::setInt(int)
//{
//    mangled_ppc("?setInt@hkpPropertyValue@@QAAXH@Z");
//};

//public: int hkpPropertyValue::getInt(void) const
//{
//    mangled_ppc("?getInt@hkpPropertyValue@@QBAHXZ");
//};

//public: class hkBool hkpWorldObject::isAddedToWorld(void) const
//{
//    mangled_ppc("?isAddedToWorld@hkpWorldObject@@QBA?AVhkBool@@XZ");
//};

//public: struct hkpPropertyValue hkpWorldObject::getProperty(unsigned int, enum hkpWorldObject::MtChecks) const
//{
//    mangled_ppc("?getProperty@hkpWorldObject@@QBA?AUhkpPropertyValue@@IW4MtChecks@1@@Z");
//};

//public: bool hkpWorldObject::hasProperty(unsigned int, enum hkpWorldObject::MtChecks) const
//{
//    mangled_ppc("?hasProperty@hkpWorldObject@@QBA_NIW4MtChecks@1@@Z");
//};

//public: void hkpWorldObject::markForRead(void)
//{
//    mangled_ppc("?markForRead@hkpWorldObject@@QAAXXZ");
//};

//public: void hkMultiThreadCheck::markForRead(enum hkMultiThreadCheck::ReadMode)
//{
//    mangled_ppc("?markForRead@hkMultiThreadCheck@@QAAXW4ReadMode@1@@Z");
//};

//public: class hkMultiThreadCheck & hkpWorldObject::getMultiThreadCheck(void)
//{
//    mangled_ppc("?getMultiThreadCheck@hkpWorldObject@@QAAAAVhkMultiThreadCheck@@XZ");
//};

//public: void hkpWorldObject::unmarkForRead(void)
//{
//    mangled_ppc("?unmarkForRead@hkpWorldObject@@QAAXXZ");
//};

//public: void hkMultiThreadCheck::unmarkForRead(void)
//{
//    mangled_ppc("?unmarkForRead@hkMultiThreadCheck@@QAAXXZ");
//};

//public: static void * hkpConstraintData::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpConstraintData@@SAPAXI@Z");
//};

//public: static void * hkpConstraintInstance::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpConstraintInstance@@SAPAXI@Z");
//};

//public: class hkpEntity * hkpConstraintInstance::getEntityA(void) const
//{
//    mangled_ppc("?getEntityA@hkpConstraintInstance@@QBAPAVhkpEntity@@XZ");
//};

//public: class hkpEntity * hkpConstraintInstance::getEntityB(void) const
//{
//    mangled_ppc("?getEntityB@hkpConstraintInstance@@QBAPAVhkpEntity@@XZ");
//};

//public: class hkpRigidBody * hkpConstraintInstance::getRigidBodyA(void) const
//{
//    mangled_ppc("?getRigidBodyA@hkpConstraintInstance@@QBAPAVhkpRigidBody@@XZ");
//};

//public: class hkpRigidBody * hkpConstraintInstance::getRigidBodyB(void) const
//{
//    mangled_ppc("?getRigidBodyB@hkpConstraintInstance@@QBAPAVhkpRigidBody@@XZ");
//};

//public: class hkpConstraintData const * hkpConstraintInstance::getData(void) const
//{
//    mangled_ppc("?getData@hkpConstraintInstance@@QBAPBVhkpConstraintData@@XZ");
//};

//public: class hkpConstraintData * hkpConstraintInstance::getDataRw(void) const
//{
//    mangled_ppc("?getDataRw@hkpConstraintInstance@@QBAPAVhkpConstraintData@@XZ");
//};

//public: void * hkpConstraintInstance::getRuntime(void) const
//{
//    mangled_ppc("?getRuntime@hkpConstraintInstance@@QBAPAXXZ");
//};

//public: void hkpMotion::setWorldSelectFlagsNeg(int, int, int)
//{
//    mangled_ppc("?setWorldSelectFlagsNeg@hkpMotion@@QAAXHHH@Z");
//};

//public: class hkpMotion * hkpEntity::getMotion(void)
//{
//    mangled_ppc("?getMotion@hkpEntity@@QAAPAVhkpMotion@@XZ");
//};

//public: class hkpSimulationIsland * hkpEntity::getSimulationIsland(void) const
//{
//    mangled_ppc("?getSimulationIsland@hkpEntity@@QBAPAVhkpSimulationIsland@@XZ");
//};

//public: void hkpEntity::setContactPointCallbackDelay(unsigned short)
//{
//    mangled_ppc("?setContactPointCallbackDelay@hkpEntity@@QAAXG@Z");
//};

//public: class hkBool hkpEntity::isFixed(void) const
//{
//    mangled_ppc("?isFixed@hkpEntity@@QBA?AVhkBool@@XZ");
//};

//public: class hkBool hkpEntity::isFixedOrKeyframed(void) const
//{
//    mangled_ppc("?isFixedOrKeyframed@hkpEntity@@QBA?AVhkBool@@XZ");
//};

//public: float hkpRigidBody::getMassInv(void) const
//{
//    mangled_ppc("?getMassInv@hkpRigidBody@@QBAMXZ");
//};

//public: class hkSimdReal hkpMotion::getMassInv(void) const
//{
//    mangled_ppc("?getMassInv@hkpMotion@@QBA?AVhkSimdReal@@XZ");
//};

//public: void hkpRigidBody::getInertiaLocal(class hkMatrix3&) const
//{
//    mangled_ppc("?getInertiaLocal@hkpRigidBody@@QBAXAAVhkMatrix3@@@Z");
//};

//public: void hkpRigidBody::getInertiaInvLocal(class hkMatrix3&) const
//{
//    mangled_ppc("?getInertiaInvLocal@hkpRigidBody@@QBAXAAVhkMatrix3@@@Z");
//};

//public: void hkpRigidBody::getInertiaInvWorld(class hkMatrix3&) const
//{
//    mangled_ppc("?getInertiaInvWorld@hkpRigidBody@@QBAXAAVhkMatrix3@@@Z");
//};

//public: class hkVector4const & hkpRigidBody::getCenterOfMassLocal(void) const
//{
//    mangled_ppc("?getCenterOfMassLocal@hkpRigidBody@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4const & hkpMotion::getCenterOfMassLocal(void) const
//{
//    mangled_ppc("?getCenterOfMassLocal@hkpMotion@@QBAABVhkVector4@@XZ");
//};

//public: class hkSweptTransform const & hkMotionState::getSweptTransform(void) const
//{
//    mangled_ppc("?getSweptTransform@hkMotionState@@QBAABVhkSweptTransform@@XZ");
//};

//public: class hkVector4const & hkpRigidBody::getCenterOfMassInWorld(void) const
//{
//    mangled_ppc("?getCenterOfMassInWorld@hkpRigidBody@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4const & hkpMotion::getCenterOfMassInWorld(void) const
//{
//    mangled_ppc("?getCenterOfMassInWorld@hkpMotion@@QBAABVhkVector4@@XZ");
//};

//public: class hkQuaternion const & hkpRigidBody::getRotation(void) const
//{
//    mangled_ppc("?getRotation@hkpRigidBody@@QBAABVhkQuaternion@@XZ");
//};

//public: class hkQuaternion const & hkpMotion::getRotation(void) const
//{
//    mangled_ppc("?getRotation@hkpMotion@@QBAABVhkQuaternion@@XZ");
//};

//public: class hkVector4const & hkpRigidBody::getLinearVelocity(void) const
//{
//    mangled_ppc("?getLinearVelocity@hkpRigidBody@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4const & hkpMotion::getLinearVelocity(void) const
//{
//    mangled_ppc("?getLinearVelocity@hkpMotion@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4const & hkpRigidBody::getAngularVelocity(void) const
//{
//    mangled_ppc("?getAngularVelocity@hkpRigidBody@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4const & hkpMotion::getAngularVelocity(void) const
//{
//    mangled_ppc("?getAngularVelocity@hkpMotion@@QBAABVhkVector4@@XZ");
//};

//public: void hkpRigidBody::getPointVelocity(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getPointVelocity@hkpRigidBody@@QBAXABVhkVector4@@AAV2@@Z");
//};

//public: void hkpMotion::getPointVelocity(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getPointVelocity@hkpMotion@@QBAXABVhkVector4@@AAV2@@Z");
//};

//public: float hkpRigidBody::getLinearDamping(void) const
//{
//    mangled_ppc("?getLinearDamping@hkpRigidBody@@QBAMXZ");
//};

//public: float hkpMotion::getLinearDamping(void)
//{
//    mangled_ppc("?getLinearDamping@hkpMotion@@QAAMXZ");
//};

//public: float hkpRigidBody::getAngularDamping(void) const
//{
//    mangled_ppc("?getAngularDamping@hkpRigidBody@@QBAMXZ");
//};

//public: float hkpMotion::getAngularDamping(void)
//{
//    mangled_ppc("?getAngularDamping@hkpMotion@@QAAMXZ");
//};

//public: enum hkpMotion::MotionType hkpRigidBody::getMotionType(void) const
//{
//    mangled_ppc("?getMotionType@hkpRigidBody@@QBA?AW4MotionType@hkpMotion@@XZ");
//};

//public: enum hkpMotion::MotionType hkpMotion::getType(void) const
//{
//    mangled_ppc("?getType@hkpMotion@@QBA?AW4MotionType@1@XZ");
//};

//public: void hkpRigidBody::setLinearVelocity(class hkVector4const &)
//{
//    mangled_ppc("?setLinearVelocity@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::setAngularVelocity(class hkVector4const &)
//{
//    mangled_ppc("?setAngularVelocity@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::setCollisionFilterInfo(unsigned int)
//{
//    mangled_ppc("?setCollisionFilterInfo@hkpRigidBody@@QAAXI@Z");
//};

//public: void hkpTypedBroadPhaseHandle::setCollisionFilterInfo(unsigned int)
//{
//    mangled_ppc("?setCollisionFilterInfo@hkpTypedBroadPhaseHandle@@QAAXI@Z");
//};

//public: class hkpTypedBroadPhaseHandle * hkpCollidable::getBroadPhaseHandle(void)
//{
//    mangled_ppc("?getBroadPhaseHandle@hkpCollidable@@QAAPAVhkpTypedBroadPhaseHandle@@XZ");
//};

//public: class hkpCollidable * hkpWorldObject::getCollidableRw(void)
//{
//    mangled_ppc("?getCollidableRw@hkpWorldObject@@QAAPAVhkpCollidable@@XZ");
//};

//public: static void * hkpTransformShape::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpTransformShape@@SAPAXI@Z");
//};

//public: void hkArray<char, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@DUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: enum hkpMotion::MotionType hkEnum<enum hkpMotion::MotionType, unsigned char>::operator enum hkpMotion::MotionType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4MotionType@hkpMotion@@E@@QBA?AW4MotionType@hkpMotion@@XZ");
//};

//public: class hkBool hkEnum<enum hkpMotion::MotionType, unsigned char>::operator==(enum hkpMotion::MotionType) const
//{
//    mangled_ppc("??8?$hkEnum@W4MotionType@hkpMotion@@E@@QBA?AVhkBool@@W4MotionType@hkpMotion@@@Z");
//};

//public: char & hkArrayBase<char>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@D@@QAAAADH@Z");
//};

//public: void hkArrayBase<char>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<char>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: int hkArrayBase<char>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@D@@QBAHXZ");
//};

//public: hkArray<char, struct hkContainerHeapAllocator>::~hkArray<char, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@DUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<char>::~hkArrayBase<char>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@D@@QAA@XZ");
//};

//public: class hkpProperty const & hkArrayBase<class hkpProperty>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpProperty@@@@QBAABVhkpProperty@@H@Z");
//};

//public: int hkArrayBase<class hkpProperty>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkpProperty@@@@QBAHXZ");
//};

//public: struct hkpListShape::ChildInfo const & hkArrayBase<struct hkpListShape::ChildInfo>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UChildInfo@hkpListShape@@@@QBAABUChildInfo@hkpListShape@@H@Z");
//};

//public: int hkArrayBase<struct hkpListShape::ChildInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UChildInfo@hkpListShape@@@@QBAHXZ");
//};

//public: void hkArray<char, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@DUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<char>::hkArrayBase<char>(char *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@D@@QAA@PADHH@Z");
//};

//public: void hkArrayBase<char>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<char>(char *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@D@hkArrayUtil@@SAXPADHU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<char>(char *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@D@hkArrayUtil@@SAXPADHU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<char>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@D@@QAAXXZ");
//};

//public: c_havok_component_data::c_havok_component_data(void)
//{
//    mangled_ppc("??0c_havok_component_data@@QAA@XZ");
//};

