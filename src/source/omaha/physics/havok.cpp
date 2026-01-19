/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const const HK_ANIMATION_KEYCODE; // "?HK_ANIMATION_KEYCODE@@3QBDB"
// char const *const const HK_BEHAVIOR_KEYCODE; // "?HK_BEHAVIOR_KEYCODE@@3QBDB"
// char const *const const HK_CLOTH_KEYCODE; // "?HK_CLOTH_KEYCODE@@3QBDB"
// char const *const const HK_DESTRUCTION_KEYCODE; // "?HK_DESTRUCTION_KEYCODE@@3QBDB"
// public: static class hkTypeInfo const *const *const const hkBuiltinTypeRegistry::StaticLinkedTypeInfos; // "?StaticLinkedTypeInfos@hkBuiltinTypeRegistry@@2QBQBVhkTypeInfo@@B"
// char const *const const HK_AI_KEYCODE; // "?HK_AI_KEYCODE@@3QBDB"
// public: static class hkClass const *const *const const hkBuiltinTypeRegistry::StaticLinkedClasses; // "?StaticLinkedClasses@hkBuiltinTypeRegistry@@2QBQBVhkClass@@B"
// char const *const const HK_PHYSICS_KEYCODE; // "?HK_PHYSICS_KEYCODE@@3QBDB"
// public: static long const s_static_array<class hkpRigidBody *, 16>::k_element_count; // "?k_element_count@?$s_static_array@PAVhkpRigidBody@@$0BA@@@2JB"
// public: static long const s_static_array<struct c_status_line, 4>::k_element_count; // "?k_element_count@?$s_static_array@Uc_status_line@@$03@@2JB"
// public: static long const s_static_array<class hkpEntity *, 512>::k_element_count; // "?k_element_count@?$s_static_array@PAVhkpEntity@@$0CAA@@@2JB"
// public: static class hkStaticClassNameRegistry const **hkVersionRegistry::StaticLinkedClassRegistries; // "?StaticLinkedClassRegistries@hkVersionRegistry@@2PAPBVhkStaticClassNameRegistry@@A"
// bool havok_pause_time_on_find_initial_contact_points; // "?havok_pause_time_on_find_initial_contact_points@@3_NA"
// struct s_physics_profile_counters g_physics_profile_counters; // "?g_physics_profile_counters@@3Us_physics_profile_counters@@A"
// public: static struct hkVersionRegistry::Updater const **hkVersionRegistry::StaticLinkedUpdaters; // "?StaticLinkedUpdaters@hkVersionRegistry@@2PAPBUUpdater@1@A"
// class hkpWorld *g_havok_world; // "?g_havok_world@@3PAVhkpWorld@@A"
// long g_desired_havok_debug_mode; // "?g_desired_havok_debug_mode@@3JA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_havok_game_state_allocator::*)(void *)> g_havok_game_state_allocator; // "?g_havok_game_state_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@A"
// struct s_havok_constants g_havok_constants; // "?g_havok_constants@@3Us_havok_constants@@A"
// class s_static_array<struct c_status_line, 4> g_physics_debug_status_lines; // "?g_physics_debug_status_lines@@3V?$s_static_array@Uc_status_line@@$03@@A"
// struct s_havok_gamestate *g_havok_game_state; // "?g_havok_game_state@@3PAUs_havok_gamestate@@A"

// void __tls_set_g_havok_game_state_allocator(void *);
// struct s_havok_constants const * get_havok_constants(void);
// public: s_havok_constants::s_havok_constants(void);
// bool havok_must_rebuild_environment_when_tag_of_this_group_changes(long);
// void havok_initialize(void);
// void havok_dispose(void);
// void havok_initialize_for_new_map(void);
// void havok_dispose_from_old_map(void);
// void havok_initialize_for_new_structure_bsp(unsigned long);
// void havok_initialize_for_new_structure_bsp_internal(unsigned long);
// void havok_dispose_from_old_structure_bsp(unsigned long);
// void havok_dispose_from_old_structure_bsp_internal(unsigned long);
// void havok_world_dispose_fast(void);
// public: void * hkCriticalSection::`scalar deleting destructor'(unsigned int);
// void havok_base_system_init(void);
// void havok_error_stub(char const *, void *);
// void havok_base_system_quit(void);
// void havok_initialize_environment_rigid_bodies(void);
// void havok_add_environment_rigid_bodies_to_world(void);
// void havok_initialize_object_rigid_bodies(void);
// void havok_initialize_havok_world(void);
// public: static void * hkpBroadPhaseBorder::operator new(unsigned int);
// public: `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::c_axis_sweep(class hkVector4const &, class hkVector4const &, int);
// public: virtual void hkp3AxisSweep::getOffsetLowHigh32bit(class hkVector4&, class hkVector4&) const;
// public: class hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator> & `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::getNodes(void);
// public: class hkp3AxisSweep::hkpBpAxis & `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::getAxis(long);
// merged_82FB46A8;
// public: static void hkpBroadPhase::operator delete(void *);
// public: virtual `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::~c_axis_sweep(void);
// void havok_save_to_game_state(long);
// void havok_after_save_to_game_state(long);
// void havok_prepare_for_game_state_load(long);
// void havok_load_from_game_state(long);
// void havok_prepare_for_tag_reload(void);
// void havok_recover_from_tag_reload(bool);
// void havok_object_new_recursive(long);
// void havok_object_new_recursive(long, long);
// void havok_object_new(long);
// void havok_component_construct_postprocess(long, bool);
// public: bool const c_havok_component::has_phantom_shape_in_at_least_one_rigid_body(void) const;
// public: bool const c_havok_component::using_rigid_body_no_phantom_power_version(void) const;
// bool object_should_have_havok_component(long, long);
// void havok_object_rebuild(long);
// bool objects_move_in_progress(void);
// void havok_object_rebuild_immediate(long);
// void havok_object_rebuild_immediate(long, long);
// public: bool const c_havok_component::has_physical_child_object(void) const;
// void havok_object_delete(long);
// void havok_object_delete_internal(long);
// void havok_component_force_acquire(long);
// void havok_component_acquire(long);
// void havok_component_acquire(long, bool, bool);
// void havok_component_release(long);
// void havok_component_release(long, bool);
// void havok_object_delete_recursive(long);
// void havok_object_delete_recursive(long, long);
// void havok_object_activate(long);
// public: bool const c_havok_component::was_constructed_active(void) const;
// void havok_object_deactivate(long);
// bool havok_can_allocate_space_for_instance_of_object_definition(long);
// void havok_world_add_entity(class hkpEntity *, bool);
// void havok_world_remove_entity(class hkpEntity *);
// void havok_batch_add_entities(void);
// private: class hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator> & c_havok_component::get_havok_rigid_bodies(void);
// private: class c_havok_component::c_constraint * c_havok_component::get_constraint(long);
// public: class hkpRigidBody * c_havok_component::c_rigid_body::get_rigid_body(void);
// public: class hkpConstraintInstance * c_havok_component::c_constraint::get_constraint(void);
// void havok_world_add_phantom(class hkpPhantom *);
// void havok_world_remove_phantom(class hkpPhantom *);
// void havok_world_add_constraint(class hkpConstraintInstance *);
// void havok_world_remove_constraint(class hkpConstraintInstance *);
// void havok_register_all_agents(class hkpCollisionDispatcher *);
// void havok_build_environment_surface_mopp(long);
// public: static unsigned int hkpGroupFilter::calcFilterInfo(int, int, int, int);
// class c_environment_mopp_bv_tree_shape * havok_build_mopp(class c_environment_surface_shape *);
// public: long c_environment_surface_shape::get_structure_bsp_index(void) const;
// void havok_update(void);
// void havok_pre_process_simulating_entities(void);
// void havok_post_process_simulating_entities(void);
// void havok_entity_post_update(class hkpEntity const *);
// public: long c_impact::get_object_index_a(void) const;
// public: long c_impact::get_object_index_b(void) const;
// public: long c_havok_contact_point::get_next_havok_contact_point_datum_index(void) const;
// public: long c_havok_component::get_first_contact_point_datum_index(void) const;
// public: long c_havok_contact_point::get_impact_datum_index(void) const;
// public: void c_havok_contact_point::set_impact_datum_index(long);
// public: void c_havok_component::set_rigid_body_exceeded_broadbase(long, bool);
// public: bool c_havok_component::get_rigid_body_exceeded_broadbase(long) const;
// public: bool const c_havok_component::records_contact_points(void) const;
// public: void c_havok_component::add_impact(long);
// public: long c_havok_contact_point::get_rigid_body_index_a(void) const;
// public: long c_havok_contact_point::get_rigid_body_index_b(void) const;
// public: c_impact::s_contact_description::s_contact_description(void);
// void havok_notify_thread_frame_started(long);
// void havok_notify_thread_frame_finished(long);
// void havok_debug_render(void);
// public: hkpWorldRayCastInput::hkpWorldRayCastInput(void);
// public: hkpWorldRayCastOutput::hkpWorldRayCastOutput(void);
// public: hkpShapeRayCastOutput::hkpShapeRayCastOutput(void);
// public: hkpShapeRayCastCollectorOutput::hkpShapeRayCastCollectorOutput(void);
// public: void hkpShapeRayCastCollectorOutput::reset(void);
// private: void hkpShapeRayCastOutput::_reset(void);
// public: class hkBool hkpWorldRayCastOutput::hasHit(void) const;
// void havok_display_stats(bool);
// public: struct hkpAgentNnEntry * hkpAgentNnSector::getBegin(void);
// public: struct hkpAgentNnEntry * hkpAgentNnSector::getEnd(void);
// public: class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const & hkpSimulationIsland::getEntities(void) const;
// void havok_display_stats_printf(bool, union argb_color const *, char const *, ...);
// void havok_object_set_position(long, bool, bool, bool);
// public: bool const c_havok_component::is_keyframed(void) const;
// void havok_object_set_velocities(long, union vector3d const *, union vector3d const *, bool);
// bool havok_object_apply_acceleration(long, long, union real_point3d const *, union vector3d const *, union vector3d const *, long *, union vector3d *, union vector3d *);
// void havok_set_initial_simulation_island_activity(void);
// void havok_make_space_for_connected_rigid_bodies(long);
// bool havok_environment_bodies_initialized(void);
// class c_environment_surface_shape const * havok_get_environment_surface_shape(long);
// class c_environment_mopp_bv_tree_shape const * havok_get_environment_mopp_shape(long);
// bool havok_world_shape_collides(class hkpShape const *, long, struct real_matrix4x3const *, enum e_havok_group);
// public: c_penetration_collector::c_penetration_collector(long);
// public: virtual void hkpCdBodyPairCollector::reset(void);
// public: hkpCdBodyPairCollector::hkpCdBodyPairCollector(void);
// merged_82FBB718;
// public: static void hkpCdBodyPairCollector::operator delete(void *);
// public: virtual hkpCdBodyPairCollector::~hkpCdBodyPairCollector(void);
// public: bool c_penetration_collector::found_collision(void) const;
// merged_82FBB7E0;
// public: virtual c_penetration_collector::~c_penetration_collector(void);
// public: static void * hkpPhantom::operator new(unsigned int);
// void havok_prepare_fpu_for_update(void);
// void havok_restore_fpu_from_update(void);
// void havok_notify_static_geometry_modfied(long, long, long, long, long);
// void havok_notify_mopp_object_deleted(long, long);
// void havok_notify_mopp_object_created(long, long);
// void havok_notify_object_changed_region_permutation(long, long, char const *);
// long havok_last_state_reset_time_get(void);
// long havok_last_garbage_collection_state_reset_time_get(void);
// void havok_last_garbage_collection_state_reset_time_set(void);
// bool is_havok_environment_rigid_body(class hkpRigidBody const *);
// class hkpRigidBody const * get_havok_world_fixed_rigid_body(void);
// class hkpRigidBody * get_havok_world_environment_rigid_body(long);
// unsigned int havok_get_environment_shape_key_from_cd_body(class hkpCdBody const *);
// bool havok_garbage_collection_locked(void);
// void havok_garbage_collection_lock(bool);
// bool havok_rigid_bodies_are_active(void);
// long havok_debug_mode_get(void);
// void havok_can_modify_state_allow(void);
// void havok_can_modify_state_disallow(void);
// bool havok_can_modify_state(void);
// bool havok_state_is_accessible(void);
// bool havok_inside_simulation_step(void);
// void havok_update_jumping_beans(void);
// void havok_update_initial_contact_point_generation(void);
// void havok_find_initial_contact_points_on_object(long);
// long find_best_initial_contact_point_candidate_near_players(float);
// bool contact_point_generation_should_use_player(long);
// long find_best_initial_contact_point_candidate_near_object(long, float, float *);
// public: bool c_havok_component::has_found_initial_contact_points(void) const;
// void havok_verify_tag_data_reference_counts(void);
// bool havok_multithreading_enabled(void);
// void havok_reset_allocated_state(void);
// bool havok_resetting_allocated_state(void);
// void havok_dispose_all_allocated_state(void);
// void havok_initialize_all_allocated_state(bool);
// bool havok_collision_damage_is_disabled(void);
// void physics_budget_spike_callback(struct s_spike_report_data &);
// void physics_budget_format_callback(struct s_spike_report_data const &, char const **, char *, long);
// struct s_physics_profile_counters * physics_profile_counters_get(void);
// public: static void hkSingleton<class hkError>::replaceInstance(class hkError *);
// public: void hkEnum<enum hkpWorldCinfo::BroadPhaseBorderBehaviour, signed char>::operator=(enum hkpWorldCinfo::BroadPhaseBorderBehaviour);
// public: void hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::operator=(enum hkpWorldCinfo::ContactPointGeneration);
// public: void hkEnum<enum hkpWorldCinfo::SimulationType, signed char>::operator=(enum hkpWorldCinfo::SimulationType);
// public: void hkEnum<enum hkpMotion::MotionType, signed char>::operator=(enum hkpMotion::MotionType);
// public: class hkBool hkEnum<enum hkpCollidableQualityType, signed char>::operator==(enum hkpCollidableQualityType) const;
// public: hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::hkArray<class hkpEntity *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::pushBack(class hkpEntity *const &);
// public: void hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpCollisionDispatcher::ShapeInheritance, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::reserve(int);
// public: static long s_static_array<class hkpRigidBody *, 16>::get_count(void);
// public: void s_static_array<class hkpRigidBody *, 16>::set_all(class hkpRigidBody *const &);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: struct c_status_line * s_static_array<struct c_status_line, 4>::get_elements(void);
// public: static long s_static_array<struct c_status_line, 4>::get_count(void);
// public: class hkpEntity ** s_static_array<class hkpEntity *, 512>::get_elements(void);
// public: static long s_static_array<class hkpEntity *, 512>::get_count(void);
// public: void c_data_iterator<class c_havok_component>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_havok_component>::next(void);
// public: class c_havok_component * c_data_iterator<class c_havok_component>::get_datum(void) const;
// public: hkLocalArray<unsigned short>::hkLocalArray<unsigned short>(int);
// public: hkLocalArray<unsigned short>::~hkLocalArray<unsigned short>(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::valid(void) const;
// public: class hkBool hkLocalArray<unsigned short>::wasReallocated(void) const;
// public: class c_havok_component::c_rigid_body & hkArrayBase<class c_havok_component::c_rigid_body>::operator[](int);
// public: struct hkpAgentNnSector *& hkArrayBase<struct hkpAgentNnSector *>::operator[](int);
// public: int hkArrayBase<struct hkpAgentNnSector *>::getSize(void) const;
// public: hkArrayBase<class hkpEntity *>::hkArrayBase<class hkpEntity *>(void);
// public: class hkpEntity *const & hkArrayBase<class hkpEntity *>::operator[](int) const;
// public: class hkpEntity *& hkArrayBase<class hkpEntity *>::operator[](int);
// public: int hkArrayBase<class hkpEntity *>::getSize(void) const;
// public: void hkArrayBase<class hkpEntity *>::_pushBack(class hkMemoryAllocator &, class hkpEntity *const &);
// public: hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::~hkArray<class hkpEntity *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpEntity *>::~hkArrayBase<class hkpEntity *>(void);
// public: class hkpSimulationIsland *const & hkArrayBase<class hkpSimulationIsland *>::operator[](int) const;
// public: class hkpSimulationIsland *& hkArrayBase<class hkpSimulationIsland *>::operator[](int);
// public: int hkArrayBase<class hkpSimulationIsland *>::getSize(void) const;
// public: void hkArrayBase<struct hkWorldOperation::BiggestOperation>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkWorldOperation::BiggestOperation>::clear(void);
// public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpBodyOperationEntry>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpCollisionDispatcher::ShapeInheritance>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: unsigned short & hkArrayBase<unsigned short>::operator[](int);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::_reserve(class hkMemoryAllocator &, int);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_reserve(class hkMemoryAllocator &, int);
// public: class hkpRigidBody *& s_static_array<class hkpRigidBody *, 16>::element<long>(long);
// public: class hkpEntity *& s_static_array<class hkpEntity *, 512>::operator[]<long>(long);
// public: class hkpRigidBody *& s_static_array<class hkpRigidBody *, 16>::operator[]<long>(long);
// public: struct c_status_line & s_static_array<struct c_status_line, 4>::operator[]<long>(long);
// public: struct c_status_line & s_static_array<struct c_status_line, 4>::operator[]<int>(int);
// struct hkpAgentNnEntry * hkAddByteOffset<struct hkpAgentNnEntry>(struct hkpAgentNnEntry *, long);
// unsigned short * hkAllocateStack<unsigned short>(int, char const *);
// void hkDeallocateStack<unsigned short>(unsigned short *);
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<class hkpEntity *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpEntity *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpEntity *>(class hkpEntity **, int, class hkpEntity *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkWorldOperation::BiggestOperation>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<struct hkWorldOperation::BiggestOperation>(struct hkWorldOperation::BiggestOperation *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkWorldOperation::MergeIslands>::getCapacity(void) const;
// public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::clear(void);
// public: int hkArrayBase<struct hkpBodyOperationEntry>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpBodyOperationEntry>::clear(void);
// public: int hkArrayBase<struct hkpCollisionDispatcher::ShapeInheritance>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpCollisionDispatcher::ShapeInheritance>::clear(void);
// public: int hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::getCapacity(void) const;
// public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode>::getCapacity(void) const;
// public: static bool s_static_array<class hkpRigidBody *, 16>::valid<long>(long);
// public: static bool s_static_array<class hkpEntity *, 512>::valid<long>(long);
// public: static bool s_static_array<struct c_status_line, 4>::valid<long>(long);
// public: static bool s_static_array<struct c_status_line, 4>::valid<int>(int);
// public: void hkArrayBase<class hkpEntity *>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkWorldOperation::MergeIslands>(struct hkWorldOperation::MergeIslands *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkpBodyOperationEntry>(struct hkpBodyOperationEntry *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkpCollisionDispatcher::ShapeInheritance>(struct hkpCollisionDispatcher::ShapeInheritance *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<class hkpEntity *>(class hkpEntity **, int, struct hkTraitBool<1>);
// public: hkBool::hkBool(void);
// public: hkBool::hkBool(bool);
// public: bool hkBool::operator bool(void) const;
// public: class hkBool & hkBool::operator=(bool);
// public: void * hkStackMemory::allocateStack(int, char const *);
// long hkGetByteOffset(void const *, void const *);
// public: int hkStackMemory::getFreeStackSize(void);
// public: void hkStackMemory::deallocateStack(void *);
// public: struct hkStackMemory & hkMemoryRouter::stack(void);
// public: static void hkCriticalSection::operator delete(void *);
// public: hkCriticalSection::~hkCriticalSection(void);
// public: class hkVector4& hkContactPoint::getPosition(void);
// public: static void * hkpShape::operator new(unsigned int);
// public: unsigned long hkpShape::getUserData(void) const;
// public: void hkpShape::setUserData(unsigned long);
// public: void hkpShape::getAabb(class hkTransform const &, float, class hkAabb &) const;
// public: virtual hkpWorldCinfo::~hkpWorldCinfo(void);
// merged_82FBF8A8;
// public: static void * hkpWorld::operator new(unsigned int);
// public: class hkpBroadPhase * hkpWorld::getBroadPhase(void);
// public: class hkpCollisionDispatcher * hkpWorld::getCollisionDispatcher(void) const;
// public: class hkpRigidBody * hkpWorld::getFixedRigidBody(void);
// public: class hkpSimulationIsland const * hkpWorld::getFixedIsland(void) const;
// public: class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> const & hkpWorld::getInactiveSimulationIslands(void) const;
// public: class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> const & hkpWorld::getActiveSimulationIslands(void) const;
// public: int hkpWorld::areCriticalOperationsLocked(void) const;
// public: class hkTransform const & hkpCdBody::getTransform(void) const;
// public: class hkpShape const * hkpCdBody::getShape(void) const;
// public: class hkpCdBody const * hkpCdBody::getParent(void) const;
// public: unsigned int hkpCdBody::getShapeKey(void) const;
// public: class hkpShape const * hkpCollidable::getShape(void) const;
// public: class hkpCollidable const * hkpWorldObject::getCollidable(void) const;
// public: class hkpConstraintOwner * hkpConstraintInstance::getOwner(void) const;
// public: static void * hkpEntity::operator new(unsigned int);
// class hkpRigidBody * hkGetRigidBody(class hkpCollidable const *);
// public: int hkpCollidable::getType(void) const;
// public: int hkpTypedBroadPhaseHandle::getType(void) const;
// class hkpWorldObject * hkGetWorldObject(class hkpCollidable const *);
// public: void * hkpCollidable::getOwner(void) const;
// public: void hkPadSpu<void *>::operator=(void *);
// public: void * hkPadSpu<void *>::operator void *(void) const;
// public: void * hkPadSpu<void *>::val(void) const;
// public: hkArray<unsigned short, struct hkContainerHeapAllocator>::hkArray<unsigned short, struct hkContainerHeapAllocator>(void);
// void * hkAddByteOffset<void>(void *, long);
// public: hkRefPtr<class hkpCollisionFilter>::~hkRefPtr<class hkpCollisionFilter>(void);
// public: hkRefPtr<class hkpConvexListFilter>::~hkRefPtr<class hkpConvexListFilter>(void);
// public: hkRefPtr<class hkWorldMemoryAvailableWatchDog>::~hkRefPtr<class hkWorldMemoryAvailableWatchDog>(void);
// public: hkArrayBase<unsigned short>::hkArrayBase<unsigned short>(void);
// public: hkArray<unsigned short, struct hkContainerHeapAllocator>::~hkArray<unsigned short, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<unsigned short>::~hkArrayBase<unsigned short>(void);
// public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<unsigned short>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkArrayBase<unsigned short>::getSize(void) const;
// public: int hkArrayBase<unsigned short>::getCapacity(void) const;
// public: void hkArrayBase<unsigned short>::clear(void);
// public: static void hkArrayUtil::destruct<unsigned short>(unsigned short *, int, struct hkTraitBool<1>);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::free_memory(void);
// public: s_havok_globals::s_havok_globals(void);
// public: s_static_array<struct c_status_line, 4>::s_static_array<struct c_status_line, 4>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>(void);
// void g_watches::`dynamic atexit destructor'(void);
// void g_havok_game_state_allocator::`dynamic atexit destructor'(void);
// void total_initial_contact_point_stopwatch::`dynamic atexit destructor'(void);
// void havok_initial_contact_point_stopwatch::`dynamic atexit destructor'(void);

//void __tls_set_g_havok_game_state_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z");
//};

//struct s_havok_constants const * get_havok_constants(void)
//{
//    mangled_ppc("?get_havok_constants@@YAPBUs_havok_constants@@XZ");
//};

//public: s_havok_constants::s_havok_constants(void)
//{
//    mangled_ppc("??0s_havok_constants@@QAA@XZ");
//};

//bool havok_must_rebuild_environment_when_tag_of_this_group_changes(long)
//{
//    mangled_ppc("?havok_must_rebuild_environment_when_tag_of_this_group_changes@@YA_NJ@Z");
//};

//void havok_initialize(void)
//{
//    mangled_ppc("?havok_initialize@@YAXXZ");
//};

//void havok_dispose(void)
//{
//    mangled_ppc("?havok_dispose@@YAXXZ");
//};

//void havok_initialize_for_new_map(void)
//{
//    mangled_ppc("?havok_initialize_for_new_map@@YAXXZ");
//};

//void havok_dispose_from_old_map(void)
//{
//    mangled_ppc("?havok_dispose_from_old_map@@YAXXZ");
//};

//void havok_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?havok_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void havok_initialize_for_new_structure_bsp_internal(unsigned long)
//{
//    mangled_ppc("?havok_initialize_for_new_structure_bsp_internal@@YAXK@Z");
//};

//void havok_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?havok_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void havok_dispose_from_old_structure_bsp_internal(unsigned long)
//{
//    mangled_ppc("?havok_dispose_from_old_structure_bsp_internal@@YAXK@Z");
//};

//void havok_world_dispose_fast(void)
//{
//    mangled_ppc("?havok_world_dispose_fast@@YAXXZ");
//};

//public: void * hkCriticalSection::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkCriticalSection@@QAAPAXI@Z");
//};

//void havok_base_system_init(void)
//{
//    mangled_ppc("?havok_base_system_init@@YAXXZ");
//};

//void havok_error_stub(char const *, void *)
//{
//    mangled_ppc("?havok_error_stub@@YAXPBDPAX@Z");
//};

//void havok_base_system_quit(void)
//{
//    mangled_ppc("?havok_base_system_quit@@YAXXZ");
//};

//void havok_initialize_environment_rigid_bodies(void)
//{
//    mangled_ppc("?havok_initialize_environment_rigid_bodies@@YAXXZ");
//};

//void havok_add_environment_rigid_bodies_to_world(void)
//{
//    mangled_ppc("?havok_add_environment_rigid_bodies_to_world@@YAXXZ");
//};

//void havok_initialize_object_rigid_bodies(void)
//{
//    mangled_ppc("?havok_initialize_object_rigid_bodies@@YAXXZ");
//};

//void havok_initialize_havok_world(void)
//{
//    mangled_ppc("?havok_initialize_havok_world@@YAXXZ");
//};

//public: static void * hkpBroadPhaseBorder::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpBroadPhaseBorder@@SAPAXI@Z");
//};

//public: `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::c_axis_sweep(class hkVector4const &, class hkVector4const &, int)
//{
//    mangled_ppc("??0c_axis_sweep@?DJ@??havok_initialize_havok_world@@YAXXZ@QAA@ABVhkVector4@@0H@Z");
//};

//public: virtual void hkp3AxisSweep::getOffsetLowHigh32bit(class hkVector4&, class hkVector4&) const
//{
//    mangled_ppc("?getOffsetLowHigh32bit@hkp3AxisSweep@@UBAXAAVhkVector4@@0@Z");
//};

//public: class hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator> & `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::getNodes(void)
//{
//    mangled_ppc("?getNodes@c_axis_sweep@?DJ@??havok_initialize_havok_world@@YAXXZ@QAAAAV?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpAxis & `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::getAxis(long)
//{
//    mangled_ppc("?getAxis@c_axis_sweep@?DJ@??havok_initialize_havok_world@@YAXXZ@QAAAAVhkpBpAxis@hkp3AxisSweep@@J@Z");
//};

//merged_82FB46A8
//{
//    mangled_ppc("merged_82FB46A8");
//};

//public: static void hkpBroadPhase::operator delete(void *)
//{
//    mangled_ppc("??3hkpBroadPhase@@SAXPAX@Z");
//};

//public: virtual `void havok_initialize_havok_world(void)'::`57'::c_axis_sweep::~c_axis_sweep(void)
//{
//    mangled_ppc("??1c_axis_sweep@?DJ@??havok_initialize_havok_world@@YAXXZ@UAA@XZ");
//};

//void havok_save_to_game_state(long)
//{
//    mangled_ppc("?havok_save_to_game_state@@YAXJ@Z");
//};

//void havok_after_save_to_game_state(long)
//{
//    mangled_ppc("?havok_after_save_to_game_state@@YAXJ@Z");
//};

//void havok_prepare_for_game_state_load(long)
//{
//    mangled_ppc("?havok_prepare_for_game_state_load@@YAXJ@Z");
//};

//void havok_load_from_game_state(long)
//{
//    mangled_ppc("?havok_load_from_game_state@@YAXJ@Z");
//};

//void havok_prepare_for_tag_reload(void)
//{
//    mangled_ppc("?havok_prepare_for_tag_reload@@YAXXZ");
//};

//void havok_recover_from_tag_reload(bool)
//{
//    mangled_ppc("?havok_recover_from_tag_reload@@YAX_N@Z");
//};

//void havok_object_new_recursive(long)
//{
//    mangled_ppc("?havok_object_new_recursive@@YAXJ@Z");
//};

//void havok_object_new_recursive(long, long)
//{
//    mangled_ppc("?havok_object_new_recursive@@YAXJJ@Z");
//};

//void havok_object_new(long)
//{
//    mangled_ppc("?havok_object_new@@YAXJ@Z");
//};

//void havok_component_construct_postprocess(long, bool)
//{
//    mangled_ppc("?havok_component_construct_postprocess@@YAXJ_N@Z");
//};

//public: bool const c_havok_component::has_phantom_shape_in_at_least_one_rigid_body(void) const
//{
//    mangled_ppc("?has_phantom_shape_in_at_least_one_rigid_body@c_havok_component@@QBA?B_NXZ");
//};

//public: bool const c_havok_component::using_rigid_body_no_phantom_power_version(void) const
//{
//    mangled_ppc("?using_rigid_body_no_phantom_power_version@c_havok_component@@QBA?B_NXZ");
//};

//bool object_should_have_havok_component(long, long)
//{
//    mangled_ppc("?object_should_have_havok_component@@YA_NJJ@Z");
//};

//void havok_object_rebuild(long)
//{
//    mangled_ppc("?havok_object_rebuild@@YAXJ@Z");
//};

//bool objects_move_in_progress(void)
//{
//    mangled_ppc("?objects_move_in_progress@@YA_NXZ");
//};

//void havok_object_rebuild_immediate(long)
//{
//    mangled_ppc("?havok_object_rebuild_immediate@@YAXJ@Z");
//};

//void havok_object_rebuild_immediate(long, long)
//{
//    mangled_ppc("?havok_object_rebuild_immediate@@YAXJJ@Z");
//};

//public: bool const c_havok_component::has_physical_child_object(void) const
//{
//    mangled_ppc("?has_physical_child_object@c_havok_component@@QBA?B_NXZ");
//};

//void havok_object_delete(long)
//{
//    mangled_ppc("?havok_object_delete@@YAXJ@Z");
//};

//void havok_object_delete_internal(long)
//{
//    mangled_ppc("?havok_object_delete_internal@@YAXJ@Z");
//};

//void havok_component_force_acquire(long)
//{
//    mangled_ppc("?havok_component_force_acquire@@YAXJ@Z");
//};

//void havok_component_acquire(long)
//{
//    mangled_ppc("?havok_component_acquire@@YAXJ@Z");
//};

//void havok_component_acquire(long, bool, bool)
//{
//    mangled_ppc("?havok_component_acquire@@YAXJ_N0@Z");
//};

//void havok_component_release(long)
//{
//    mangled_ppc("?havok_component_release@@YAXJ@Z");
//};

//void havok_component_release(long, bool)
//{
//    mangled_ppc("?havok_component_release@@YAXJ_N@Z");
//};

//void havok_object_delete_recursive(long)
//{
//    mangled_ppc("?havok_object_delete_recursive@@YAXJ@Z");
//};

//void havok_object_delete_recursive(long, long)
//{
//    mangled_ppc("?havok_object_delete_recursive@@YAXJJ@Z");
//};

//void havok_object_activate(long)
//{
//    mangled_ppc("?havok_object_activate@@YAXJ@Z");
//};

//public: bool const c_havok_component::was_constructed_active(void) const
//{
//    mangled_ppc("?was_constructed_active@c_havok_component@@QBA?B_NXZ");
//};

//void havok_object_deactivate(long)
//{
//    mangled_ppc("?havok_object_deactivate@@YAXJ@Z");
//};

//bool havok_can_allocate_space_for_instance_of_object_definition(long)
//{
//    mangled_ppc("?havok_can_allocate_space_for_instance_of_object_definition@@YA_NJ@Z");
//};

//void havok_world_add_entity(class hkpEntity *, bool)
//{
//    mangled_ppc("?havok_world_add_entity@@YAXPAVhkpEntity@@_N@Z");
//};

//void havok_world_remove_entity(class hkpEntity *)
//{
//    mangled_ppc("?havok_world_remove_entity@@YAXPAVhkpEntity@@@Z");
//};

//void havok_batch_add_entities(void)
//{
//    mangled_ppc("?havok_batch_add_entities@@YAXXZ");
//};

//private: class hkInplaceArray<class c_havok_component::c_rigid_body, 1, struct hkContainerHeapAllocator> & c_havok_component::get_havok_rigid_bodies(void)
//{
//    mangled_ppc("?get_havok_rigid_bodies@c_havok_component@@AAAAAV?$hkInplaceArray@Vc_rigid_body@c_havok_component@@$00UhkContainerHeapAllocator@@@@XZ");
//};

//private: class c_havok_component::c_constraint * c_havok_component::get_constraint(long)
//{
//    mangled_ppc("?get_constraint@c_havok_component@@AAAPAVc_constraint@1@J@Z");
//};

//public: class hkpRigidBody * c_havok_component::c_rigid_body::get_rigid_body(void)
//{
//    mangled_ppc("?get_rigid_body@c_rigid_body@c_havok_component@@QAAPAVhkpRigidBody@@XZ");
//};

//public: class hkpConstraintInstance * c_havok_component::c_constraint::get_constraint(void)
//{
//    mangled_ppc("?get_constraint@c_constraint@c_havok_component@@QAAPAVhkpConstraintInstance@@XZ");
//};

//void havok_world_add_phantom(class hkpPhantom *)
//{
//    mangled_ppc("?havok_world_add_phantom@@YAXPAVhkpPhantom@@@Z");
//};

//void havok_world_remove_phantom(class hkpPhantom *)
//{
//    mangled_ppc("?havok_world_remove_phantom@@YAXPAVhkpPhantom@@@Z");
//};

//void havok_world_add_constraint(class hkpConstraintInstance *)
//{
//    mangled_ppc("?havok_world_add_constraint@@YAXPAVhkpConstraintInstance@@@Z");
//};

//void havok_world_remove_constraint(class hkpConstraintInstance *)
//{
//    mangled_ppc("?havok_world_remove_constraint@@YAXPAVhkpConstraintInstance@@@Z");
//};

//void havok_register_all_agents(class hkpCollisionDispatcher *)
//{
//    mangled_ppc("?havok_register_all_agents@@YAXPAVhkpCollisionDispatcher@@@Z");
//};

//void havok_build_environment_surface_mopp(long)
//{
//    mangled_ppc("?havok_build_environment_surface_mopp@@YAXJ@Z");
//};

//public: static unsigned int hkpGroupFilter::calcFilterInfo(int, int, int, int)
//{
//    mangled_ppc("?calcFilterInfo@hkpGroupFilter@@SAIHHHH@Z");
//};

//class c_environment_mopp_bv_tree_shape * havok_build_mopp(class c_environment_surface_shape *)
//{
//    mangled_ppc("?havok_build_mopp@@YAPAVc_environment_mopp_bv_tree_shape@@PAVc_environment_surface_shape@@@Z");
//};

//public: long c_environment_surface_shape::get_structure_bsp_index(void) const
//{
//    mangled_ppc("?get_structure_bsp_index@c_environment_surface_shape@@QBAJXZ");
//};

//void havok_update(void)
//{
//    mangled_ppc("?havok_update@@YAXXZ");
//};

//void havok_pre_process_simulating_entities(void)
//{
//    mangled_ppc("?havok_pre_process_simulating_entities@@YAXXZ");
//};

//void havok_post_process_simulating_entities(void)
//{
//    mangled_ppc("?havok_post_process_simulating_entities@@YAXXZ");
//};

//void havok_entity_post_update(class hkpEntity const *)
//{
//    mangled_ppc("?havok_entity_post_update@@YAXPBVhkpEntity@@@Z");
//};

//public: long c_impact::get_object_index_a(void) const
//{
//    mangled_ppc("?get_object_index_a@c_impact@@QBAJXZ");
//};

//public: long c_impact::get_object_index_b(void) const
//{
//    mangled_ppc("?get_object_index_b@c_impact@@QBAJXZ");
//};

//public: long c_havok_contact_point::get_next_havok_contact_point_datum_index(void) const
//{
//    mangled_ppc("?get_next_havok_contact_point_datum_index@c_havok_contact_point@@QBAJXZ");
//};

//public: long c_havok_component::get_first_contact_point_datum_index(void) const
//{
//    mangled_ppc("?get_first_contact_point_datum_index@c_havok_component@@QBAJXZ");
//};

//public: long c_havok_contact_point::get_impact_datum_index(void) const
//{
//    mangled_ppc("?get_impact_datum_index@c_havok_contact_point@@QBAJXZ");
//};

//public: void c_havok_contact_point::set_impact_datum_index(long)
//{
//    mangled_ppc("?set_impact_datum_index@c_havok_contact_point@@QAAXJ@Z");
//};

//public: void c_havok_component::set_rigid_body_exceeded_broadbase(long, bool)
//{
//    mangled_ppc("?set_rigid_body_exceeded_broadbase@c_havok_component@@QAAXJ_N@Z");
//};

//public: bool c_havok_component::get_rigid_body_exceeded_broadbase(long) const
//{
//    mangled_ppc("?get_rigid_body_exceeded_broadbase@c_havok_component@@QBA_NJ@Z");
//};

//public: bool const c_havok_component::records_contact_points(void) const
//{
//    mangled_ppc("?records_contact_points@c_havok_component@@QBA?B_NXZ");
//};

//public: void c_havok_component::add_impact(long)
//{
//    mangled_ppc("?add_impact@c_havok_component@@QAAXJ@Z");
//};

//public: long c_havok_contact_point::get_rigid_body_index_a(void) const
//{
//    mangled_ppc("?get_rigid_body_index_a@c_havok_contact_point@@QBAJXZ");
//};

//public: long c_havok_contact_point::get_rigid_body_index_b(void) const
//{
//    mangled_ppc("?get_rigid_body_index_b@c_havok_contact_point@@QBAJXZ");
//};

//public: c_impact::s_contact_description::s_contact_description(void)
//{
//    mangled_ppc("??0s_contact_description@c_impact@@QAA@XZ");
//};

//void havok_notify_thread_frame_started(long)
//{
//    mangled_ppc("?havok_notify_thread_frame_started@@YAXJ@Z");
//};

//void havok_notify_thread_frame_finished(long)
//{
//    mangled_ppc("?havok_notify_thread_frame_finished@@YAXJ@Z");
//};

//void havok_debug_render(void)
//{
//    mangled_ppc("?havok_debug_render@@YAXXZ");
//};

//public: hkpWorldRayCastInput::hkpWorldRayCastInput(void)
//{
//    mangled_ppc("??0hkpWorldRayCastInput@@QAA@XZ");
//};

//public: hkpWorldRayCastOutput::hkpWorldRayCastOutput(void)
//{
//    mangled_ppc("??0hkpWorldRayCastOutput@@QAA@XZ");
//};

//public: hkpShapeRayCastOutput::hkpShapeRayCastOutput(void)
//{
//    mangled_ppc("??0hkpShapeRayCastOutput@@QAA@XZ");
//};

//public: hkpShapeRayCastCollectorOutput::hkpShapeRayCastCollectorOutput(void)
//{
//    mangled_ppc("??0hkpShapeRayCastCollectorOutput@@QAA@XZ");
//};

//public: void hkpShapeRayCastCollectorOutput::reset(void)
//{
//    mangled_ppc("?reset@hkpShapeRayCastCollectorOutput@@QAAXXZ");
//};

//private: void hkpShapeRayCastOutput::_reset(void)
//{
//    mangled_ppc("?_reset@hkpShapeRayCastOutput@@AAAXXZ");
//};

//public: class hkBool hkpWorldRayCastOutput::hasHit(void) const
//{
//    mangled_ppc("?hasHit@hkpWorldRayCastOutput@@QBA?AVhkBool@@XZ");
//};

//void havok_display_stats(bool)
//{
//    mangled_ppc("?havok_display_stats@@YAX_N@Z");
//};

//public: struct hkpAgentNnEntry * hkpAgentNnSector::getBegin(void)
//{
//    mangled_ppc("?getBegin@hkpAgentNnSector@@QAAPAUhkpAgentNnEntry@@XZ");
//};

//public: struct hkpAgentNnEntry * hkpAgentNnSector::getEnd(void)
//{
//    mangled_ppc("?getEnd@hkpAgentNnSector@@QAAPAUhkpAgentNnEntry@@XZ");
//};

//public: class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const & hkpSimulationIsland::getEntities(void) const
//{
//    mangled_ppc("?getEntities@hkpSimulationIsland@@QBAABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@XZ");
//};

//void havok_display_stats_printf(bool, union argb_color const *, char const *, ...)
//{
//    mangled_ppc("?havok_display_stats_printf@@YAX_NPBTargb_color@@PBDZZ");
//};

//void havok_object_set_position(long, bool, bool, bool)
//{
//    mangled_ppc("?havok_object_set_position@@YAXJ_N00@Z");
//};

//public: bool const c_havok_component::is_keyframed(void) const
//{
//    mangled_ppc("?is_keyframed@c_havok_component@@QBA?B_NXZ");
//};

//void havok_object_set_velocities(long, union vector3d const *, union vector3d const *, bool)
//{
//    mangled_ppc("?havok_object_set_velocities@@YAXJPBTvector3d@@0_N@Z");
//};

//bool havok_object_apply_acceleration(long, long, union real_point3d const *, union vector3d const *, union vector3d const *, long *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?havok_object_apply_acceleration@@YA_NJJPBTreal_point3d@@PBTvector3d@@1PAJPAT2@3@Z");
//};

//void havok_set_initial_simulation_island_activity(void)
//{
//    mangled_ppc("?havok_set_initial_simulation_island_activity@@YAXXZ");
//};

//void havok_make_space_for_connected_rigid_bodies(long)
//{
//    mangled_ppc("?havok_make_space_for_connected_rigid_bodies@@YAXJ@Z");
//};

//bool havok_environment_bodies_initialized(void)
//{
//    mangled_ppc("?havok_environment_bodies_initialized@@YA_NXZ");
//};

//class c_environment_surface_shape const * havok_get_environment_surface_shape(long)
//{
//    mangled_ppc("?havok_get_environment_surface_shape@@YAPBVc_environment_surface_shape@@J@Z");
//};

//class c_environment_mopp_bv_tree_shape const * havok_get_environment_mopp_shape(long)
//{
//    mangled_ppc("?havok_get_environment_mopp_shape@@YAPBVc_environment_mopp_bv_tree_shape@@J@Z");
//};

//bool havok_world_shape_collides(class hkpShape const *, long, struct real_matrix4x3const *, enum e_havok_group)
//{
//    mangled_ppc("?havok_world_shape_collides@@YA_NPBVhkpShape@@JPBUreal_matrix4x3@@W4e_havok_group@@@Z");
//};

//public: c_penetration_collector::c_penetration_collector(long)
//{
//    mangled_ppc("??0c_penetration_collector@@QAA@J@Z");
//};

//public: virtual void hkpCdBodyPairCollector::reset(void)
//{
//    mangled_ppc("?reset@hkpCdBodyPairCollector@@UAAXXZ");
//};

//public: hkpCdBodyPairCollector::hkpCdBodyPairCollector(void)
//{
//    mangled_ppc("??0hkpCdBodyPairCollector@@QAA@XZ");
//};

//merged_82FBB718
//{
//    mangled_ppc("merged_82FBB718");
//};

//public: static void hkpCdBodyPairCollector::operator delete(void *)
//{
//    mangled_ppc("??3hkpCdBodyPairCollector@@SAXPAX@Z");
//};

//public: virtual hkpCdBodyPairCollector::~hkpCdBodyPairCollector(void)
//{
//    mangled_ppc("??1hkpCdBodyPairCollector@@UAA@XZ");
//};

//public: bool c_penetration_collector::found_collision(void) const
//{
//    mangled_ppc("?found_collision@c_penetration_collector@@QBA_NXZ");
//};

//merged_82FBB7E0
//{
//    mangled_ppc("merged_82FBB7E0");
//};

//public: virtual c_penetration_collector::~c_penetration_collector(void)
//{
//    mangled_ppc("??1c_penetration_collector@@UAA@XZ");
//};

//public: static void * hkpPhantom::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpPhantom@@SAPAXI@Z");
//};

//void havok_prepare_fpu_for_update(void)
//{
//    mangled_ppc("?havok_prepare_fpu_for_update@@YAXXZ");
//};

//void havok_restore_fpu_from_update(void)
//{
//    mangled_ppc("?havok_restore_fpu_from_update@@YAXXZ");
//};

//void havok_notify_static_geometry_modfied(long, long, long, long, long)
//{
//    mangled_ppc("?havok_notify_static_geometry_modfied@@YAXJJJJJ@Z");
//};

//void havok_notify_mopp_object_deleted(long, long)
//{
//    mangled_ppc("?havok_notify_mopp_object_deleted@@YAXJJ@Z");
//};

//void havok_notify_mopp_object_created(long, long)
//{
//    mangled_ppc("?havok_notify_mopp_object_created@@YAXJJ@Z");
//};

//void havok_notify_object_changed_region_permutation(long, long, char const *)
//{
//    mangled_ppc("?havok_notify_object_changed_region_permutation@@YAXJJPBD@Z");
//};

//long havok_last_state_reset_time_get(void)
//{
//    mangled_ppc("?havok_last_state_reset_time_get@@YAJXZ");
//};

//long havok_last_garbage_collection_state_reset_time_get(void)
//{
//    mangled_ppc("?havok_last_garbage_collection_state_reset_time_get@@YAJXZ");
//};

//void havok_last_garbage_collection_state_reset_time_set(void)
//{
//    mangled_ppc("?havok_last_garbage_collection_state_reset_time_set@@YAXXZ");
//};

//bool is_havok_environment_rigid_body(class hkpRigidBody const *)
//{
//    mangled_ppc("?is_havok_environment_rigid_body@@YA_NPBVhkpRigidBody@@@Z");
//};

//class hkpRigidBody const * get_havok_world_fixed_rigid_body(void)
//{
//    mangled_ppc("?get_havok_world_fixed_rigid_body@@YAPBVhkpRigidBody@@XZ");
//};

//class hkpRigidBody * get_havok_world_environment_rigid_body(long)
//{
//    mangled_ppc("?get_havok_world_environment_rigid_body@@YAPAVhkpRigidBody@@J@Z");
//};

//unsigned int havok_get_environment_shape_key_from_cd_body(class hkpCdBody const *)
//{
//    mangled_ppc("?havok_get_environment_shape_key_from_cd_body@@YAIPBVhkpCdBody@@@Z");
//};

//bool havok_garbage_collection_locked(void)
//{
//    mangled_ppc("?havok_garbage_collection_locked@@YA_NXZ");
//};

//void havok_garbage_collection_lock(bool)
//{
//    mangled_ppc("?havok_garbage_collection_lock@@YAX_N@Z");
//};

//bool havok_rigid_bodies_are_active(void)
//{
//    mangled_ppc("?havok_rigid_bodies_are_active@@YA_NXZ");
//};

//long havok_debug_mode_get(void)
//{
//    mangled_ppc("?havok_debug_mode_get@@YAJXZ");
//};

//void havok_can_modify_state_allow(void)
//{
//    mangled_ppc("?havok_can_modify_state_allow@@YAXXZ");
//};

//void havok_can_modify_state_disallow(void)
//{
//    mangled_ppc("?havok_can_modify_state_disallow@@YAXXZ");
//};

//bool havok_can_modify_state(void)
//{
//    mangled_ppc("?havok_can_modify_state@@YA_NXZ");
//};

//bool havok_state_is_accessible(void)
//{
//    mangled_ppc("?havok_state_is_accessible@@YA_NXZ");
//};

//bool havok_inside_simulation_step(void)
//{
//    mangled_ppc("?havok_inside_simulation_step@@YA_NXZ");
//};

//void havok_update_jumping_beans(void)
//{
//    mangled_ppc("?havok_update_jumping_beans@@YAXXZ");
//};

//void havok_update_initial_contact_point_generation(void)
//{
//    mangled_ppc("?havok_update_initial_contact_point_generation@@YAXXZ");
//};

//void havok_find_initial_contact_points_on_object(long)
//{
//    mangled_ppc("?havok_find_initial_contact_points_on_object@@YAXJ@Z");
//};

//long find_best_initial_contact_point_candidate_near_players(float)
//{
//    mangled_ppc("?find_best_initial_contact_point_candidate_near_players@@YAJM@Z");
//};

//bool contact_point_generation_should_use_player(long)
//{
//    mangled_ppc("?contact_point_generation_should_use_player@@YA_NJ@Z");
//};

//long find_best_initial_contact_point_candidate_near_object(long, float, float *)
//{
//    mangled_ppc("?find_best_initial_contact_point_candidate_near_object@@YAJJMPAM@Z");
//};

//public: bool c_havok_component::has_found_initial_contact_points(void) const
//{
//    mangled_ppc("?has_found_initial_contact_points@c_havok_component@@QBA_NXZ");
//};

//void havok_verify_tag_data_reference_counts(void)
//{
//    mangled_ppc("?havok_verify_tag_data_reference_counts@@YAXXZ");
//};

//bool havok_multithreading_enabled(void)
//{
//    mangled_ppc("?havok_multithreading_enabled@@YA_NXZ");
//};

//void havok_reset_allocated_state(void)
//{
//    mangled_ppc("?havok_reset_allocated_state@@YAXXZ");
//};

//bool havok_resetting_allocated_state(void)
//{
//    mangled_ppc("?havok_resetting_allocated_state@@YA_NXZ");
//};

//void havok_dispose_all_allocated_state(void)
//{
//    mangled_ppc("?havok_dispose_all_allocated_state@@YAXXZ");
//};

//void havok_initialize_all_allocated_state(bool)
//{
//    mangled_ppc("?havok_initialize_all_allocated_state@@YAX_N@Z");
//};

//bool havok_collision_damage_is_disabled(void)
//{
//    mangled_ppc("?havok_collision_damage_is_disabled@@YA_NXZ");
//};

//void physics_budget_spike_callback(struct s_spike_report_data &)
//{
//    mangled_ppc("?physics_budget_spike_callback@@YAXAAUs_spike_report_data@@@Z");
//};

//void physics_budget_format_callback(struct s_spike_report_data const &, char const **, char *, long)
//{
//    mangled_ppc("?physics_budget_format_callback@@YAXABUs_spike_report_data@@PAPBDPADJ@Z");
//};

//struct s_physics_profile_counters * physics_profile_counters_get(void)
//{
//    mangled_ppc("?physics_profile_counters_get@@YAPAUs_physics_profile_counters@@XZ");
//};

//public: static void hkSingleton<class hkError>::replaceInstance(class hkError *)
//{
//    mangled_ppc("?replaceInstance@?$hkSingleton@VhkError@@@@SAXPAVhkError@@@Z");
//};

//public: void hkEnum<enum hkpWorldCinfo::BroadPhaseBorderBehaviour, signed char>::operator=(enum hkpWorldCinfo::BroadPhaseBorderBehaviour)
//{
//    mangled_ppc("??4?$hkEnum@W4BroadPhaseBorderBehaviour@hkpWorldCinfo@@C@@QAAXW4BroadPhaseBorderBehaviour@hkpWorldCinfo@@@Z");
//};

//public: void hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::operator=(enum hkpWorldCinfo::ContactPointGeneration)
//{
//    mangled_ppc("??4?$hkEnum@W4ContactPointGeneration@hkpWorldCinfo@@C@@QAAXW4ContactPointGeneration@hkpWorldCinfo@@@Z");
//};

//public: void hkEnum<enum hkpWorldCinfo::SimulationType, signed char>::operator=(enum hkpWorldCinfo::SimulationType)
//{
//    mangled_ppc("??4?$hkEnum@W4SimulationType@hkpWorldCinfo@@C@@QAAXW4SimulationType@hkpWorldCinfo@@@Z");
//};

//public: void hkEnum<enum hkpMotion::MotionType, signed char>::operator=(enum hkpMotion::MotionType)
//{
//    mangled_ppc("??4?$hkEnum@W4MotionType@hkpMotion@@C@@QAAXW4MotionType@hkpMotion@@@Z");
//};

//public: class hkBool hkEnum<enum hkpCollidableQualityType, signed char>::operator==(enum hkpCollidableQualityType) const
//{
//    mangled_ppc("??8?$hkEnum@W4hkpCollidableQualityType@@C@@QBA?AVhkBool@@W4hkpCollidableQualityType@@@Z");
//};

//public: hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::hkArray<class hkpEntity *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::pushBack(class hkpEntity *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpEntity@@@Z");
//};

//public: void hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UMergeIslands@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpCollisionDispatcher::ShapeInheritance, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UShapeInheritance@hkpCollisionDispatcher@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: static long s_static_array<class hkpRigidBody *, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAVhkpRigidBody@@$0BA@@@SAJXZ");
//};

//public: void s_static_array<class hkpRigidBody *, 16>::set_all(class hkpRigidBody *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PAVhkpRigidBody@@$0BA@@@QAAXABQAVhkpRigidBody@@@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: struct c_status_line * s_static_array<struct c_status_line, 4>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Uc_status_line@@$03@@QAAPAUc_status_line@@XZ");
//};

//public: static long s_static_array<struct c_status_line, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Uc_status_line@@$03@@SAJXZ");
//};

//public: class hkpEntity ** s_static_array<class hkpEntity *, 512>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAVhkpEntity@@$0CAA@@@QAAPAPAVhkpEntity@@XZ");
//};

//public: static long s_static_array<class hkpEntity *, 512>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAVhkpEntity@@$0CAA@@@SAJXZ");
//};

//public: void c_data_iterator<class c_havok_component>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_havok_component@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_havok_component>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_havok_component@@@@QAA_NXZ");
//};

//public: class c_havok_component * c_data_iterator<class c_havok_component>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_havok_component@@@@QBAPAVc_havok_component@@XZ");
//};

//public: hkLocalArray<unsigned short>::hkLocalArray<unsigned short>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@G@@QAA@H@Z");
//};

//public: hkLocalArray<unsigned short>::~hkLocalArray<unsigned short>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@G@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: class hkBool hkLocalArray<unsigned short>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@G@@QBA?AVhkBool@@XZ");
//};

//public: class c_havok_component::c_rigid_body & hkArrayBase<class c_havok_component::c_rigid_body>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@Vc_rigid_body@c_havok_component@@@@QAAAAVc_rigid_body@c_havok_component@@H@Z");
//};

//public: struct hkpAgentNnSector *& hkArrayBase<struct hkpAgentNnSector *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAAAPAUhkpAgentNnSector@@H@Z");
//};

//public: int hkArrayBase<struct hkpAgentNnSector *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkpAgentNnSector@@@@QBAHXZ");
//};

//public: hkArrayBase<class hkpEntity *>::hkArrayBase<class hkpEntity *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpEntity@@@@QAA@XZ");
//};

//public: class hkpEntity *const & hkArrayBase<class hkpEntity *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpEntity@@@@QBAABQAVhkpEntity@@H@Z");
//};

//public: class hkpEntity *& hkArrayBase<class hkpEntity *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpEntity@@@@QAAAAPAVhkpEntity@@H@Z");
//};

//public: int hkArrayBase<class hkpEntity *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpEntity@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpEntity *>::_pushBack(class hkMemoryAllocator &, class hkpEntity *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpEntity@@@Z");
//};

//public: hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::~hkArray<class hkpEntity *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpEntity *>::~hkArrayBase<class hkpEntity *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpEntity@@@@QAA@XZ");
//};

//public: class hkpSimulationIsland *const & hkArrayBase<class hkpSimulationIsland *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpSimulationIsland@@@@QBAABQAVhkpSimulationIsland@@H@Z");
//};

//public: class hkpSimulationIsland *& hkArrayBase<class hkpSimulationIsland *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpSimulationIsland@@@@QAAAAPAVhkpSimulationIsland@@H@Z");
//};

//public: int hkArrayBase<class hkpSimulationIsland *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpSimulationIsland@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkWorldOperation::BiggestOperation>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkWorldOperation::BiggestOperation>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpBodyOperationEntry>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpBodyOperationEntry@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpCollisionDispatcher::ShapeInheritance>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UShapeInheritance@hkpCollisionDispatcher@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: unsigned short & hkArrayBase<unsigned short>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@G@@QAAAAGH@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkpRigidBody *& s_static_array<class hkpRigidBody *, 16>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@PAVhkpRigidBody@@$0BA@@@QAAAAPAVhkpRigidBody@@J@Z");
//};

//public: class hkpEntity *& s_static_array<class hkpEntity *, 512>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVhkpEntity@@$0CAA@@@QAAAAPAVhkpEntity@@J@Z");
//};

//public: class hkpRigidBody *& s_static_array<class hkpRigidBody *, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVhkpRigidBody@@$0BA@@@QAAAAPAVhkpRigidBody@@J@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uc_status_line@@$03@@QAAAAUc_status_line@@J@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 4>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Uc_status_line@@$03@@QAAAAUc_status_line@@H@Z");
//};

//struct hkpAgentNnEntry * hkAddByteOffset<struct hkpAgentNnEntry>(struct hkpAgentNnEntry *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@UhkpAgentNnEntry@@@@YAPAUhkpAgentNnEntry@@PAU0@J@Z");
//};

//unsigned short * hkAllocateStack<unsigned short>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@G@@YAPAGHPBD@Z");
//};

//void hkDeallocateStack<unsigned short>(unsigned short *)
//{
//    mangled_ppc("??$hkDeallocateStack@G@@YAXPAG@Z");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkpEntity *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpEntity@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpEntity *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpEntity *>(class hkpEntity **, int, class hkpEntity *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpEntity@@@hkArrayUtil@@SAXPAPAVhkpEntity@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkWorldOperation::BiggestOperation>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkWorldOperation::BiggestOperation>(struct hkWorldOperation::BiggestOperation *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UBiggestOperation@hkWorldOperation@@@hkArrayUtil@@SAXPAUBiggestOperation@hkWorldOperation@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkWorldOperation::MergeIslands>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkpBodyOperationEntry>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpBodyOperationEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpBodyOperationEntry>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpBodyOperationEntry@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkpCollisionDispatcher::ShapeInheritance>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UShapeInheritance@hkpCollisionDispatcher@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpCollisionDispatcher::ShapeInheritance>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UShapeInheritance@hkpCollisionDispatcher@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QBAHXZ");
//};

//public: static bool s_static_array<class hkpRigidBody *, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVhkpRigidBody@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class hkpEntity *, 512>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVhkpEntity@@$0CAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_status_line, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uc_status_line@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_status_line, 4>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Uc_status_line@@$03@@SA_NH@Z");
//};

//public: void hkArrayBase<class hkpEntity *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpEntity@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkWorldOperation::MergeIslands>(struct hkWorldOperation::MergeIslands *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UMergeIslands@hkWorldOperation@@@hkArrayUtil@@SAXPAUMergeIslands@hkWorldOperation@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpBodyOperationEntry>(struct hkpBodyOperationEntry *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpBodyOperationEntry@@@hkArrayUtil@@SAXPAUhkpBodyOperationEntry@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpCollisionDispatcher::ShapeInheritance>(struct hkpCollisionDispatcher::ShapeInheritance *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UShapeInheritance@hkpCollisionDispatcher@@@hkArrayUtil@@SAXPAUShapeInheritance@hkpCollisionDispatcher@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpEntity *>(class hkpEntity **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpEntity@@@hkArrayUtil@@SAXPAPAVhkpEntity@@HU?$hkTraitBool@$00@@@Z");
//};

//public: hkBool::hkBool(void)
//{
//    mangled_ppc("??0hkBool@@QAA@XZ");
//};

//public: hkBool::hkBool(bool)
//{
//    mangled_ppc("??0hkBool@@QAA@_N@Z");
//};

//public: bool hkBool::operator bool(void) const
//{
//    mangled_ppc("??BhkBool@@QBA_NXZ");
//};

//public: class hkBool & hkBool::operator=(bool)
//{
//    mangled_ppc("??4hkBool@@QAAAAV0@_N@Z");
//};

//public: void * hkStackMemory::allocateStack(int, char const *)
//{
//    mangled_ppc("?allocateStack@hkStackMemory@@QAAPAXHPBD@Z");
//};

//long hkGetByteOffset(void const *, void const *)
//{
//    mangled_ppc("?hkGetByteOffset@@YAJPBX0@Z");
//};

//public: int hkStackMemory::getFreeStackSize(void)
//{
//    mangled_ppc("?getFreeStackSize@hkStackMemory@@QAAHXZ");
//};

//public: void hkStackMemory::deallocateStack(void *)
//{
//    mangled_ppc("?deallocateStack@hkStackMemory@@QAAXPAX@Z");
//};

//public: struct hkStackMemory & hkMemoryRouter::stack(void)
//{
//    mangled_ppc("?stack@hkMemoryRouter@@QAAAAUhkStackMemory@@XZ");
//};

//public: static void hkCriticalSection::operator delete(void *)
//{
//    mangled_ppc("??3hkCriticalSection@@SAXPAX@Z");
//};

//public: hkCriticalSection::~hkCriticalSection(void)
//{
//    mangled_ppc("??1hkCriticalSection@@QAA@XZ");
//};

//public: class hkVector4& hkContactPoint::getPosition(void)
//{
//    mangled_ppc("?getPosition@hkContactPoint@@QAAAAVhkVector4@@XZ");
//};

//public: static void * hkpShape::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpShape@@SAPAXI@Z");
//};

//public: unsigned long hkpShape::getUserData(void) const
//{
//    mangled_ppc("?getUserData@hkpShape@@QBAKXZ");
//};

//public: void hkpShape::setUserData(unsigned long)
//{
//    mangled_ppc("?setUserData@hkpShape@@QAAXK@Z");
//};

//public: void hkpShape::getAabb(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabb@hkpShape@@QBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual hkpWorldCinfo::~hkpWorldCinfo(void)
//{
//    mangled_ppc("??1hkpWorldCinfo@@UAA@XZ");
//};

//merged_82FBF8A8
//{
//    mangled_ppc("merged_82FBF8A8");
//};

//public: static void * hkpWorld::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpWorld@@SAPAXI@Z");
//};

//public: class hkpBroadPhase * hkpWorld::getBroadPhase(void)
//{
//    mangled_ppc("?getBroadPhase@hkpWorld@@QAAPAVhkpBroadPhase@@XZ");
//};

//public: class hkpCollisionDispatcher * hkpWorld::getCollisionDispatcher(void) const
//{
//    mangled_ppc("?getCollisionDispatcher@hkpWorld@@QBAPAVhkpCollisionDispatcher@@XZ");
//};

//public: class hkpRigidBody * hkpWorld::getFixedRigidBody(void)
//{
//    mangled_ppc("?getFixedRigidBody@hkpWorld@@QAAPAVhkpRigidBody@@XZ");
//};

//public: class hkpSimulationIsland const * hkpWorld::getFixedIsland(void) const
//{
//    mangled_ppc("?getFixedIsland@hkpWorld@@QBAPBVhkpSimulationIsland@@XZ");
//};

//public: class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> const & hkpWorld::getInactiveSimulationIslands(void) const
//{
//    mangled_ppc("?getInactiveSimulationIslands@hkpWorld@@QBAABV?$hkArray@PAVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> const & hkpWorld::getActiveSimulationIslands(void) const
//{
//    mangled_ppc("?getActiveSimulationIslands@hkpWorld@@QBAABV?$hkArray@PAVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: int hkpWorld::areCriticalOperationsLocked(void) const
//{
//    mangled_ppc("?areCriticalOperationsLocked@hkpWorld@@QBAHXZ");
//};

//public: class hkTransform const & hkpCdBody::getTransform(void) const
//{
//    mangled_ppc("?getTransform@hkpCdBody@@QBAABVhkTransform@@XZ");
//};

//public: class hkpShape const * hkpCdBody::getShape(void) const
//{
//    mangled_ppc("?getShape@hkpCdBody@@QBAPBVhkpShape@@XZ");
//};

//public: class hkpCdBody const * hkpCdBody::getParent(void) const
//{
//    mangled_ppc("?getParent@hkpCdBody@@QBAPBV1@XZ");
//};

//public: unsigned int hkpCdBody::getShapeKey(void) const
//{
//    mangled_ppc("?getShapeKey@hkpCdBody@@QBAIXZ");
//};

//public: class hkpShape const * hkpCollidable::getShape(void) const
//{
//    mangled_ppc("?getShape@hkpCollidable@@QBAPBVhkpShape@@XZ");
//};

//public: class hkpCollidable const * hkpWorldObject::getCollidable(void) const
//{
//    mangled_ppc("?getCollidable@hkpWorldObject@@QBAPBVhkpCollidable@@XZ");
//};

//public: class hkpConstraintOwner * hkpConstraintInstance::getOwner(void) const
//{
//    mangled_ppc("?getOwner@hkpConstraintInstance@@QBAPAVhkpConstraintOwner@@XZ");
//};

//public: static void * hkpEntity::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpEntity@@SAPAXI@Z");
//};

//class hkpRigidBody * hkGetRigidBody(class hkpCollidable const *)
//{
//    mangled_ppc("?hkGetRigidBody@@YAPAVhkpRigidBody@@PBVhkpCollidable@@@Z");
//};

//public: int hkpCollidable::getType(void) const
//{
//    mangled_ppc("?getType@hkpCollidable@@QBAHXZ");
//};

//public: int hkpTypedBroadPhaseHandle::getType(void) const
//{
//    mangled_ppc("?getType@hkpTypedBroadPhaseHandle@@QBAHXZ");
//};

//class hkpWorldObject * hkGetWorldObject(class hkpCollidable const *)
//{
//    mangled_ppc("?hkGetWorldObject@@YAPAVhkpWorldObject@@PBVhkpCollidable@@@Z");
//};

//public: void * hkpCollidable::getOwner(void) const
//{
//    mangled_ppc("?getOwner@hkpCollidable@@QBAPAXXZ");
//};

//public: void hkPadSpu<void *>::operator=(void *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAX@@QAAXPAX@Z");
//};

//public: void * hkPadSpu<void *>::operator void *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAX@@QBAPAXXZ");
//};

//public: void * hkPadSpu<void *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAX@@QBAPAXXZ");
//};

//public: hkArray<unsigned short, struct hkContainerHeapAllocator>::hkArray<unsigned short, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@GUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//void * hkAddByteOffset<void>(void *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@X@@YAPAXPAXJ@Z");
//};

//public: hkRefPtr<class hkpCollisionFilter>::~hkRefPtr<class hkpCollisionFilter>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkpCollisionFilter@@@@QAA@XZ");
//};

//public: hkRefPtr<class hkpConvexListFilter>::~hkRefPtr<class hkpConvexListFilter>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkpConvexListFilter@@@@QAA@XZ");
//};

//public: hkRefPtr<class hkWorldMemoryAvailableWatchDog>::~hkRefPtr<class hkWorldMemoryAvailableWatchDog>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkWorldMemoryAvailableWatchDog@@@@QAA@XZ");
//};

//public: hkArrayBase<unsigned short>::hkArrayBase<unsigned short>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@G@@QAA@XZ");
//};

//public: hkArray<unsigned short, struct hkContainerHeapAllocator>::~hkArray<unsigned short, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@GUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<unsigned short>::~hkArrayBase<unsigned short>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@G@@QAA@XZ");
//};

//public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@GUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<unsigned short>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@G@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<unsigned short>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@G@@QBAHXZ");
//};

//public: int hkArrayBase<unsigned short>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@G@@QBAHXZ");
//};

//public: void hkArrayBase<unsigned short>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@G@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<unsigned short>(unsigned short *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@G@hkArrayUtil@@SAXPAGHU?$hkTraitBool@$00@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: s_havok_globals::s_havok_globals(void)
//{
//    mangled_ppc("??0s_havok_globals@@QAA@XZ");
//};

//public: s_static_array<struct c_status_line, 4>::s_static_array<struct c_status_line, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Uc_status_line@@$03@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_game_state_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_game_state_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_watches::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_watches@@YAXXZ");
//};

//void g_havok_game_state_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_havok_game_state_allocator@@YAXXZ");
//};

//void total_initial_contact_point_stopwatch::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Ftotal_initial_contact_point_stopwatch@@YAXXZ");
//};

//void havok_initial_contact_point_stopwatch::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fhavok_initial_contact_point_stopwatch@@YAXXZ");
//};

