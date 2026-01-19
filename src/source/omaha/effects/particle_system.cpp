/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_effect_holdback_type const c_particle_system::x_holdback_type; // "?x_holdback_type@c_particle_system@@0W4e_effect_holdback_type@@B"
// bool g_particle_create; // "?g_particle_create@@3_NA"
// bool g_particle_frame_advance; // "?g_particle_frame_advance@@3_NA"
// bool g_particle_submit; // "?g_particle_submit@@3_NA"
// bool g_particle_cull; // "?g_particle_cull@@3_NA"
// struct s_particle_information_by_priority *g_particle_information_by_priority; // "?g_particle_information_by_priority@@3PAUs_particle_information_by_priority@@A"
// public: static float c_particle_system::x_distance_lod_scale; // "?x_distance_lod_scale@c_particle_system@@2MA"
// long volatile `void __cdecl data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_particle_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_particle_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_particle_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// struct s_particle_information g_particle_information; // "?g_particle_information@@3Us_particle_information@@A"
// bool g_particle_render_debug; // "?g_particle_render_debug@@3_NA"
// bool g_particle_collision_debug; // "?g_particle_collision_debug@@3_NA"
// bool g_particle_collision_debug_priority; // "?g_particle_collision_debug_priority@@3_NA"
// bool g_particle_render_debug_spheres; // "?g_particle_render_debug_spheres@@3_NA"
// bool g_particle_force_cpu; // "?g_particle_force_cpu@@3_NA"
// bool g_particle_force_gpu; // "?g_particle_force_gpu@@3_NA"
// bool g_particle_dump; // "?g_particle_dump@@3_NA"
// private: static struct s_observer_result const *const c_particle_system::x_observer_result; // "?x_observer_result@c_particle_system@@0PBUs_observer_result@@B"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_particle_system_data_array_allocator::*)(void *)> g_particle_system_data_array_allocator; // "?g_particle_system_data_array_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@A"
// public: static struct s_particle_heap c_particle_system::x_particle_collision_heap; // "?x_particle_collision_heap@c_particle_system@@2Us_particle_heap@@A"
// bool `void __cdecl data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_particle_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// public: static struct s_data_array *c_particle_system::x_data_array; // "?x_data_array@c_particle_system@@2PAUs_data_array@@A"

// void __tls_set_g_particle_system_data_array_allocator(void *);
// public: static void c_particle_system::initialize_for_game(void);
// public: static void c_particle_system::initialize_for_map(void);
// public: static void c_particle_system::dispose_from_map(void);
// public: static void c_particle_system::dispose_from_game(void);
// public: static void c_particle_system::initialize_for_new_structure_bsp(void);
// public: static void c_particle_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// public: static long c_particle_system::create(class c_particle_system_definition const *, long, class c_tag_index, unsigned long, unsigned short, unsigned short, unsigned long);
// public: bool c_particle_system_definition::get_allowed_to_create(void) const;
// public: bool c_particle_system_definition::get_freeze_when_offscreen(void) const;
// public: bool c_particle_system_definition::get_disabled_for_debugging(void) const;
// public: bool c_particle_system_definition::get_particle_system_die_when_orphaned(void) const;
// public: bool c_particle_system_definition::get_use_synchronized_random_seed(void) const;
// public: char const * c_particle_system_definition::get_particle_definition_name(void) const;
// public: long c_particle_system_definition::get_particle_definition_index(void) const;
// public: void c_particle_system::set_ever_frame_advanced(bool);
// public: void c_particle_system::set_should_pulse(bool);
// public: void c_particle_system::set_should_frame_advance(bool);
// public: void c_particle_system::set_should_render(bool);
// public: float c_particle_system::real_internal_random_range(float, float) const;
// public: static void c_particle_system::destroy(long);
// public: enum e_effect_pass c_particle_system::calculate_pass(enum e_output_user_index, bool &) const;
// public: bool c_particle_system_definition::get_render_when_zoomed(void) const;
// public: unsigned char c_particle_system::get_priority(void) const;
// public: bool c_particle_definition::get_particle_opaque(void) const;
// public: static void c_particle_system::begin_view(enum e_output_user_index);
// public: static void c_particle_system::submit_all(enum e_output_user_index, enum e_effect_pass);
// public: void c_particle_system::submit(enum e_output_user_index, bool, enum e_effect_pass);
// public: bool c_particle_system_definition::get_invisible(void) const;
// public: long c_particle_system::get_particle_count(void) const;
// public: bool c_particle_system::get_should_render(void) const;
// public: static void c_particle_system::handle_tag_changes(void);
// public: static void c_particle_system::frame_advance_all(float);
// public: long c_particle_system_definition::get_emitter_count(void) const;
// public: void c_particle_system::set_particle_count(long);
// public: bool c_particle_system::get_should_live(void) const;
// public: bool c_particle_system::get_should_frame_advance(void) const;
// public: void s_particle_heap::clear(void);
// public: static void c_particle_system::frame_advance_all_gpu(float);
// public: void c_particle_system::query_effect(void);
// public: bool c_particle_system::get_ever_frame_advanced(void) const;
// public: bool c_particle_system::get_die_when_orphaned(void) const;
// public: void c_particle_system::set_should_live(bool);
// public: long c_particle_system::frame_advance(float);
// public: long c_particle_system::add_particle_location(void);
// public: long c_particle_system::to_datum_index(void) const;
// public: void c_particle_system::remove_further_particle_locations(long);
// public: void c_particle_location::clear_next_location(void);
// public: struct s_location const * c_particle_system::get_location(void) const;
// public: void c_particle_system::set_location(struct s_location const *);
// public: class c_particle_system_definition const * c_particle_system::get_particle_system_definition(void) const;
// public: class c_particle_definition const * c_particle_system::get_particle_definition(void) const;
// public: long c_particle_system::get_particle_definition_index(void) const;
// public: float c_particle_system::get_exported_function(unsigned long) const;
// public: float c_particle_system::get_effect_scale_a(void) const;
// public: float c_particle_system::get_effect_scale_b(void) const;
// public: static bool c_particle_system::validate(void);
// public: void c_particle_system::restart(void);
// public: void c_particle_system::synchronize_random_seed_if_required(void);
// public: long c_particle_system::pulse(float, struct s_effect_information *);
// public: void c_particle_system::count_by_priority(void) const;
// public: static void c_particle_system::count_all_by_priority(void);
// public: void c_particle_system::check_particle_counts(long *, long *, long *) const;
// private: void c_particle_system::release_particles(void);
// public: void c_particle_system::initialize_particle(class c_particle_state_list const *, class c_particle *) const;
// public: void c_data_iterator<class c_particle_system>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_particle_system>::next(void);
// public: class c_particle_system * c_data_iterator<class c_particle_system>::get_datum(void) const;
// public: long c_data_iterator<class c_particle_system>::get_index(void) const;
// void data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: char const * c_particle_system::get_name(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::valid(void) const;
// public: s_particle_heap::s_particle_heap(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>(void);
// void g_particle_system_data_array_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_particle_system_data_array_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z");
//};

//public: static void c_particle_system::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_particle_system@@SAXXZ");
//};

//public: static void c_particle_system::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_particle_system@@SAXXZ");
//};

//public: static void c_particle_system::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_particle_system@@SAXXZ");
//};

//public: static void c_particle_system::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_particle_system@@SAXXZ");
//};

//public: static void c_particle_system::initialize_for_new_structure_bsp(void)
//{
//    mangled_ppc("?initialize_for_new_structure_bsp@c_particle_system@@SAXXZ");
//};

//public: static void c_particle_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?prepare_for_non_bsp_zone_set_switch@c_particle_system@@SAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//public: static long c_particle_system::create(class c_particle_system_definition const *, long, class c_tag_index, unsigned long, unsigned short, unsigned short, unsigned long)
//{
//    mangled_ppc("?create@c_particle_system@@SAJPBVc_particle_system_definition@@JVc_tag_index@@KGGK@Z");
//};

//public: bool c_particle_system_definition::get_allowed_to_create(void) const
//{
//    mangled_ppc("?get_allowed_to_create@c_particle_system_definition@@QBA_NXZ");
//};

//public: bool c_particle_system_definition::get_freeze_when_offscreen(void) const
//{
//    mangled_ppc("?get_freeze_when_offscreen@c_particle_system_definition@@QBA_NXZ");
//};

//public: bool c_particle_system_definition::get_disabled_for_debugging(void) const
//{
//    mangled_ppc("?get_disabled_for_debugging@c_particle_system_definition@@QBA_NXZ");
//};

//public: bool c_particle_system_definition::get_particle_system_die_when_orphaned(void) const
//{
//    mangled_ppc("?get_particle_system_die_when_orphaned@c_particle_system_definition@@QBA_NXZ");
//};

//public: bool c_particle_system_definition::get_use_synchronized_random_seed(void) const
//{
//    mangled_ppc("?get_use_synchronized_random_seed@c_particle_system_definition@@QBA_NXZ");
//};

//public: char const * c_particle_system_definition::get_particle_definition_name(void) const
//{
//    mangled_ppc("?get_particle_definition_name@c_particle_system_definition@@QBAPBDXZ");
//};

//public: long c_particle_system_definition::get_particle_definition_index(void) const
//{
//    mangled_ppc("?get_particle_definition_index@c_particle_system_definition@@QBAJXZ");
//};

//public: void c_particle_system::set_ever_frame_advanced(bool)
//{
//    mangled_ppc("?set_ever_frame_advanced@c_particle_system@@QAAX_N@Z");
//};

//public: void c_particle_system::set_should_pulse(bool)
//{
//    mangled_ppc("?set_should_pulse@c_particle_system@@QAAX_N@Z");
//};

//public: void c_particle_system::set_should_frame_advance(bool)
//{
//    mangled_ppc("?set_should_frame_advance@c_particle_system@@QAAX_N@Z");
//};

//public: void c_particle_system::set_should_render(bool)
//{
//    mangled_ppc("?set_should_render@c_particle_system@@QAAX_N@Z");
//};

//public: float c_particle_system::real_internal_random_range(float, float) const
//{
//    mangled_ppc("?real_internal_random_range@c_particle_system@@QBAMMM@Z");
//};

//public: static void c_particle_system::destroy(long)
//{
//    mangled_ppc("?destroy@c_particle_system@@SAXJ@Z");
//};

//public: enum e_effect_pass c_particle_system::calculate_pass(enum e_output_user_index, bool &) const
//{
//    mangled_ppc("?calculate_pass@c_particle_system@@QBA?AW4e_effect_pass@@W4e_output_user_index@@AA_N@Z");
//};

//public: bool c_particle_system_definition::get_render_when_zoomed(void) const
//{
//    mangled_ppc("?get_render_when_zoomed@c_particle_system_definition@@QBA_NXZ");
//};

//public: unsigned char c_particle_system::get_priority(void) const
//{
//    mangled_ppc("?get_priority@c_particle_system@@QBAEXZ");
//};

//public: bool c_particle_definition::get_particle_opaque(void) const
//{
//    mangled_ppc("?get_particle_opaque@c_particle_definition@@QBA_NXZ");
//};

//public: static void c_particle_system::begin_view(enum e_output_user_index)
//{
//    mangled_ppc("?begin_view@c_particle_system@@SAXW4e_output_user_index@@@Z");
//};

//public: static void c_particle_system::submit_all(enum e_output_user_index, enum e_effect_pass)
//{
//    mangled_ppc("?submit_all@c_particle_system@@SAXW4e_output_user_index@@W4e_effect_pass@@@Z");
//};

//public: void c_particle_system::submit(enum e_output_user_index, bool, enum e_effect_pass)
//{
//    mangled_ppc("?submit@c_particle_system@@QAAXW4e_output_user_index@@_NW4e_effect_pass@@@Z");
//};

//public: bool c_particle_system_definition::get_invisible(void) const
//{
//    mangled_ppc("?get_invisible@c_particle_system_definition@@QBA_NXZ");
//};

//public: long c_particle_system::get_particle_count(void) const
//{
//    mangled_ppc("?get_particle_count@c_particle_system@@QBAJXZ");
//};

//public: bool c_particle_system::get_should_render(void) const
//{
//    mangled_ppc("?get_should_render@c_particle_system@@QBA_NXZ");
//};

//public: static void c_particle_system::handle_tag_changes(void)
//{
//    mangled_ppc("?handle_tag_changes@c_particle_system@@SAXXZ");
//};

//public: static void c_particle_system::frame_advance_all(float)
//{
//    mangled_ppc("?frame_advance_all@c_particle_system@@SAXM@Z");
//};

//public: long c_particle_system_definition::get_emitter_count(void) const
//{
//    mangled_ppc("?get_emitter_count@c_particle_system_definition@@QBAJXZ");
//};

//public: void c_particle_system::set_particle_count(long)
//{
//    mangled_ppc("?set_particle_count@c_particle_system@@QAAXJ@Z");
//};

//public: bool c_particle_system::get_should_live(void) const
//{
//    mangled_ppc("?get_should_live@c_particle_system@@QBA_NXZ");
//};

//public: bool c_particle_system::get_should_frame_advance(void) const
//{
//    mangled_ppc("?get_should_frame_advance@c_particle_system@@QBA_NXZ");
//};

//public: void s_particle_heap::clear(void)
//{
//    mangled_ppc("?clear@s_particle_heap@@QAAXXZ");
//};

//public: static void c_particle_system::frame_advance_all_gpu(float)
//{
//    mangled_ppc("?frame_advance_all_gpu@c_particle_system@@SAXM@Z");
//};

//public: void c_particle_system::query_effect(void)
//{
//    mangled_ppc("?query_effect@c_particle_system@@QAAXXZ");
//};

//public: bool c_particle_system::get_ever_frame_advanced(void) const
//{
//    mangled_ppc("?get_ever_frame_advanced@c_particle_system@@QBA_NXZ");
//};

//public: bool c_particle_system::get_die_when_orphaned(void) const
//{
//    mangled_ppc("?get_die_when_orphaned@c_particle_system@@QBA_NXZ");
//};

//public: void c_particle_system::set_should_live(bool)
//{
//    mangled_ppc("?set_should_live@c_particle_system@@QAAX_N@Z");
//};

//public: long c_particle_system::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_particle_system@@QAAJM@Z");
//};

//public: long c_particle_system::add_particle_location(void)
//{
//    mangled_ppc("?add_particle_location@c_particle_system@@QAAJXZ");
//};

//public: long c_particle_system::to_datum_index(void) const
//{
//    mangled_ppc("?to_datum_index@c_particle_system@@QBAJXZ");
//};

//public: void c_particle_system::remove_further_particle_locations(long)
//{
//    mangled_ppc("?remove_further_particle_locations@c_particle_system@@QAAXJ@Z");
//};

//public: void c_particle_location::clear_next_location(void)
//{
//    mangled_ppc("?clear_next_location@c_particle_location@@QAAXXZ");
//};

//public: struct s_location const * c_particle_system::get_location(void) const
//{
//    mangled_ppc("?get_location@c_particle_system@@QBAPBUs_location@@XZ");
//};

//public: void c_particle_system::set_location(struct s_location const *)
//{
//    mangled_ppc("?set_location@c_particle_system@@QAAXPBUs_location@@@Z");
//};

//public: class c_particle_system_definition const * c_particle_system::get_particle_system_definition(void) const
//{
//    mangled_ppc("?get_particle_system_definition@c_particle_system@@QBAPBVc_particle_system_definition@@XZ");
//};

//public: class c_particle_definition const * c_particle_system::get_particle_definition(void) const
//{
//    mangled_ppc("?get_particle_definition@c_particle_system@@QBAPBVc_particle_definition@@XZ");
//};

//public: long c_particle_system::get_particle_definition_index(void) const
//{
//    mangled_ppc("?get_particle_definition_index@c_particle_system@@QBAJXZ");
//};

//public: float c_particle_system::get_exported_function(unsigned long) const
//{
//    mangled_ppc("?get_exported_function@c_particle_system@@QBAMK@Z");
//};

//public: float c_particle_system::get_effect_scale_a(void) const
//{
//    mangled_ppc("?get_effect_scale_a@c_particle_system@@QBAMXZ");
//};

//public: float c_particle_system::get_effect_scale_b(void) const
//{
//    mangled_ppc("?get_effect_scale_b@c_particle_system@@QBAMXZ");
//};

//public: static bool c_particle_system::validate(void)
//{
//    mangled_ppc("?validate@c_particle_system@@SA_NXZ");
//};

//public: void c_particle_system::restart(void)
//{
//    mangled_ppc("?restart@c_particle_system@@QAAXXZ");
//};

//public: void c_particle_system::synchronize_random_seed_if_required(void)
//{
//    mangled_ppc("?synchronize_random_seed_if_required@c_particle_system@@QAAXXZ");
//};

//public: long c_particle_system::pulse(float, struct s_effect_information *)
//{
//    mangled_ppc("?pulse@c_particle_system@@QAAJMPAUs_effect_information@@@Z");
//};

//public: void c_particle_system::count_by_priority(void) const
//{
//    mangled_ppc("?count_by_priority@c_particle_system@@QBAXXZ");
//};

//public: static void c_particle_system::count_all_by_priority(void)
//{
//    mangled_ppc("?count_all_by_priority@c_particle_system@@SAXXZ");
//};

//public: void c_particle_system::check_particle_counts(long *, long *, long *) const
//{
//    mangled_ppc("?check_particle_counts@c_particle_system@@QBAXPAJ00@Z");
//};

//private: void c_particle_system::release_particles(void)
//{
//    mangled_ppc("?release_particles@c_particle_system@@AAAXXZ");
//};

//public: void c_particle_system::initialize_particle(class c_particle_state_list const *, class c_particle *) const
//{
//    mangled_ppc("?initialize_particle@c_particle_system@@QBAXPBVc_particle_state_list@@PAVc_particle@@@Z");
//};

//public: void c_data_iterator<class c_particle_system>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_particle_system@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_particle_system>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_particle_system@@@@QAA_NXZ");
//};

//public: class c_particle_system * c_data_iterator<class c_particle_system>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_particle_system@@@@QBAPAVc_particle_system@@XZ");
//};

//public: long c_data_iterator<class c_particle_system>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Vc_particle_system@@@@QBAJXZ");
//};

//void data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_particle_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_particle_system>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_particle_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: char const * c_particle_system::get_name(void) const
//{
//    mangled_ppc("?get_name@c_particle_system@@QBAPBDXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: s_particle_heap::s_particle_heap(void)
//{
//    mangled_ppc("??0s_particle_heap@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_system_data_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_system_data_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_particle_system_data_array_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_particle_system_data_array_allocator@@YAXXZ");
//};

