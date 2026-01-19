/* ---------- headers */

#include "omaha\animations\animation_graph.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<short, 4>::k_element_count; // "?k_element_count@?$s_static_array@F$03@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 1056>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0ECA@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 1056>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0ECA@@@2JB"

// public: float c_model_animation_graph::get_animation_total_translation(class c_animation_id) const;
// public: bool c_animation_data_sizes::contains_data(enum e_internal_data_type) const;
// public: class c_animation_data_sizes const * c_animation_data::get_data_sizes(void) const;
// public: void c_model_animation_graph::get_axis_offsets(class c_animation_id, short, float *, float *) const;
// public: static long c_model_animation_graph::create(char const *);
// public: static long c_model_animation_graph::load(char const *, long);
// public: static class c_animation_frame_event_list const * c_animation_frame_event_list::get(long);
// public: static class c_animation_frame_event_list * c_animation_frame_event_list::get_writable(long);
// public: static class c_model_animation_graph const * c_model_animation_graph::get(long);
// public: static class c_model_animation_graph * c_model_animation_graph::get_writable(long);
// public: static class c_model_animation_graph const * c_model_animation_graph::get_from_object_definition(long);
// public: bool c_model_animation_graph::uses_data_driven_mixing_board(void) const;
// public: class c_model_animation const * c_model_animation_graph::get_local_animation(long) const;
// public: class c_model_animation * c_model_animation_graph::get_local_writable_animation(long);
// public: class c_model_animation const * c_model_animation_graph::get_animation(class c_animation_id) const;
// public: class c_model_animation * c_model_animation_graph::get_writable_animation(class c_animation_id);
// public: class c_model_animation const * c_model_animation_graph::get_animation_interface(class c_animation_id) const;
// public: struct animation_aiming_screen_bounds const * c_model_animation_graph::get_local_blend_screen_bounds(long) const;
// public: struct animation_aiming_screen_bounds const * c_model_animation_graph::get_blend_screen_bounds(class c_animation_id) const;
// public: char c_model_animation::get_blend_screen_index(void) const;
// public: class c_animation_frame_event_list const * c_model_animation_graph::get_import_frame_event_list(void) const;
// public: class c_animation_frame_event_list * c_model_animation_graph::get_writable_import_frame_event_list(void) const;
// public: class c_model_animation_graph const * c_model_animation_graph::get_parent_graph(void) const;
// public: class c_model_animation_graph * c_model_animation_graph::get_writable_parent_graph(void) const;
// public: struct s_animation_graph_node * c_model_animation_graph::get_node(long) const;
// public: long c_model_animation_graph::get_inherited_graph_count(void) const;
// public: class c_model_animation_graph const * c_model_animation_graph::get_inherited_graph(long) const;
// public: bool c_model_animation_graph::is_inherited_from_graph(class c_model_animation_graph const *) const;
// public: class c_model_animation_graph * c_model_animation_graph::get_writable_inherited_graph(long);
// public: struct s_animation_inheritance const * c_model_animation_graph::get_node_remap_data_for_graph(long) const;
// public: struct s_animation_inheritance const * c_model_animation_graph::get_node_remap_data_for_animation(long, class c_animation_id) const;
// public: long c_model_animation::get_shared_animation_graph_index(void) const;
// public: bool c_model_animation_graph::is_node_list_hierarchy_compatible(class c_model_animation_graph const *) const;
// public: short c_model_animation_graph::get_node_count(void) const;
// public: short c_model_animation_graph::get_animation_count(void) const;
// public: class c_animation_id c_model_animation_graph::find_state_animation_in_mode(long, long, class c_animation_graph_search_cache *, long *, long *, long *) const;
// public: class c_animation_id c_animation_set::find_action_animation(long) const;
// public: struct s_animation_entry const * c_animation_set::find_action_animation_entry(long) const;
// public: class c_animation_id c_model_animation_graph::find_action(long, long, long, long, long, class c_animation_graph_search_cache *, long *, long *, long *, long *) const;
// public: c_animation_search_path_iterator::~c_animation_search_path_iterator(void);
// public: struct s_animation_ranged_action const * c_model_animation_graph::find_ranged_action(long, long, long, class c_animation_graph_search_cache *) const;
// public: struct s_animation_sync_action const * c_model_animation_graph::find_sync_action(long, long, long) const;
// public: struct s_animation_sync_action const * c_model_animation_graph::find_local_sync_action(long, long, long) const;
// public: static long c_model_animation_graph::find_hierarchical_property_index_and_graph(long, enum e_animation_graph_node_property, long, long, long, long, long, long, class c_animation_graph_search_cache *, long *);
// public: class c_animation_set const * c_weapon_type::find_set(long) const;
// public: struct s_animation_entry const * c_animation_set::find_overlay_animation_entry(long) const;
// public: class c_animation_id c_model_animation_graph::find_overlay_animation(long, long, long, long, long, class c_animation_graph_search_cache *, long *, long *, long *, long *) const;
// public: class c_animation_id c_animation_set::find_overlay_animation(long) const;
// public: class c_animation_id c_model_animation_graph::find_death_or_damage_animation_id(long, long, long, long, long, short, short, class c_animation_graph_search_cache *, long *, long *, long *, long *, short *, short *) const;
// short damage_part_get_parent(short);
// short damage_direction_get_alternate(short);
// public: class c_animation_id c_model_animation_graph::find_damage_animation(long, long, long, long, long, long, long, class c_animation_graph_search_cache *, long *, long *, long *, long *) const;
// public: class c_animation_id c_model_animation_graph::find_transition(long, long, long, long, long, long, long, class c_animation_graph_search_cache *, long *) const;
// public: short c_model_animation_graph::find_gait_group(long, long, long, long, class c_animation_graph_search_cache *, long *) const;
// public: bool c_model_animation_graph::find_velocity_boundaries(long, long, long, long, enum e_physics_animation_state, class c_animation_graph_search_cache *, long *, float *, float *) const;
// public: bool c_model_animation_graph::find_next_function_overlay(class function_overlay_iterator *) const;
// public: bool c_model_animation_graph::find_next_vehicle_suspension(class suspension_animation_iterator *) const;
// public: bool c_model_animation_graph::find_next_mode_ik_point(class ik_point_iterator *) const;
// public: bool c_model_animation_graph::find_next_weapon_ik_point(class ik_point_iterator *) const;
// public: long c_model_animation_graph::get_total_foot_tracking_members(void) const;
// public: struct s_foot_tracking_member const * c_model_animation_graph::get_foot_tracking_member(long) const;
// public: struct s_foot_tracking_member * c_model_animation_graph::get_writable_foot_tracking_member(long);
// public: enum e_foot_tracking_state c_model_animation_graph::find_foot_tracking_default_state(long, long) const;
// public: class c_animation_id c_model_animation_graph::find_animation(long) const;
// ?node_matrices_from_orientations@c_model_animation_graph@@QBAXPIAUreal_matrix4x3@@PIBUreal_orientation@@PIBTreal_point3d@@PIBTvector3d@@3@Z;
// private: void c_model_animation_graph::internal_node_matrices_from_orientations(long, long, unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&volatile) const;
// public: void c_model_animation_graph::node_matrices_from_orientations(unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&volatile) const;
// public: void c_model_animation_graph::node_matrices_from_orientations_with_gun_hand_swap(unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&volatile, long, long) const;
// public: long c_model_animation_graph::find_node_by_usage(enum e_animation_node_usage) const;
// public: long c_model_animation_graph::find_node_by_name(long) const;
// public: long c_model_animation_graph::find_node_with_flags(unsigned long) const;
// public: bool c_model_animation_graph::build_model_mapping_table(long, long *, long *, long) const;
// public: struct animation_graph_sound_reference const * c_model_animation_graph::get_sound_reference(long) const;
// public: struct animation_graph_effect_reference const * c_model_animation_graph::get_effect_reference(long) const;
// public: void c_model_animation_graph::alphabetize_animation_list(void);
// public: unsigned long c_model_animation::get_production_checksum(void) const;
// public: short c_model_animation::get_resource_index(void) const;
// public: short c_model_animation::get_resource_member_index(void) const;
// public: bool c_model_animation_graph::verify_animation_variants(long);
// public: void c_model_animation::set_runtime_parent_animation_index(short);
// public: void c_model_animation::set_next_animation_index(short);
// public: short c_model_animation::get_runtime_parent_animation_index(void) const;
// public: void c_model_animation_graph::link_animation_variants(void);
// public: void c_model_animation::set_weight(float);
// public: float c_model_animation::get_weight(void) const;
// public: void c_model_animation_graph::normalize_animation_variation_weights(void);
// public: void c_model_animation_graph::presort_all_animation_graph_blocks(void);
// void sort_named_block_entries(struct s_tag_block *);
// public: bool c_model_animation_graph::build_node_remap_data(long, long, struct s_animation_inheritance *, class c_model_animation_graph const *) const;
// public: void c_model_animation_graph::build_inheritence_list(long);
// public: void c_model_animation_graph::update_new_inheritance_list(long, struct s_tag_reference const *);
// private: void c_model_animation_graph::remove_incompatible_inherited_animations(void);
// public: class c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver> const c_model_animation::get_production_flags(void) const;
// public: void c_model_animation_graph::remove_all_non_local_animations(void);
// private: bool c_model_animation_graph::validate_animation_id(class c_animation_id);
// private: void c_model_animation_graph::validate_graph(void);
// public: void c_model_animation_graph::inherit_animations_from_parent_graph(void);
// public: void c_model_animation_graph::inherit_data_driven_graph_status(void);
// public: void c_model_animation_graph::inherit_ik_chains_from_parent_graph(long);
// public: struct s_tag_block & c_model_animation::get_writable_ik_chain_events(void);
// public: bool c_model_animation_graph::verify_animation_compression_levels(long, bool, bool);
// public: void c_model_animation::set_desired_compression_setting(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>);
// public: class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> c_model_animation::get_desired_compression_setting(void) const;
// public: void c_model_animation_graph::post_process_sync_actions(long);
// public: struct s_tag_block const & c_model_animation::get_effect_events(void) const;
// public: bool c_model_animation_graph::verify_sync_actions(long);
// public: std::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >::~map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >(void);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::~iterator(void);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator const &);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::~const_iterator(void);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &);
// public: std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::~_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>(void);
// public: struct std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &> & std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::operator=(struct std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>(void);
// public: struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base> & std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::operator=(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base> const &);
// public: void c_model_animation_graph::resolve_references(void);
// public: void c_model_animation_graph::post_process_imported_animation_events(long);
// public: struct s_tag_block & c_model_animation::get_writable_frame_events(void);
// public: struct s_tag_block & c_model_animation::get_writable_sound_events(void);
// public: struct s_tag_block & c_model_animation::get_writable_effect_events(void);
// public: struct s_tag_block & c_model_animation::get_writable_dialogue_events(void);
// public: void c_model_animation_graph::post_process_ik_chains(long);
// bool comparison_function_short(void const *, void const *, void const *);
// public: void c_model_animation_graph::calculate_range_actions_blend_triangulation(void);
// public: c_delaunay_triangulation::c_delaunay_triangulation(void);
// public: c_delaunay_triangulation::~c_delaunay_triangulation(void);
// bool calculate_range_actions_blend_triangulation_source(class c_model_animation_graph const *, class c_animation_id, class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_ranged_action_variable_source, short, 0, 7, struct s_default_enum_string_resolver>, float *);
// public: bool c_model_animation_graph::post_process_tag(long, bool, bool);
// public: void c_model_animation_graph::populate_frame_event_list_tag(long);
// public: void c_model_animation_graph::on_save(long);
// public: void c_model_animation_graph::for_each_animation_referenced_in_graph(void (*)(class c_model_animation_graph *, class c_model_animation *, class c_animation_id *, class c_enum<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>, long, long), long);
// public: void c_model_animation_graph::for_each_animation_entry_in_graph(long (*)(class c_model_animation_graph *, struct s_tag_block *, long, void *), void *);
// public: void c_model_animation_graph::for_each_overlay_group_reference_in_graph(void (*)(short *, void *), void *);
// public: void c_model_animation_graph::prepare_graph_for_use(long);
// public: void c_model_animation_graph::inherit_animations_from_animation_map(long, struct s_file_reference *, class std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > > &);
// public: struct s_tag_reference const * c_model_animation::get_shared_animation_reference(void) const;
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::~iterator(void);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator const &);
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::~const_iterator(void);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &);
// public: std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::~_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>(void);
// public: struct std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &> & std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::operator=(struct std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>(void);
// public: struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base> & std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::operator=(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base> const &);
// public: bool c_model_animation_graph::process_for_cache_file(long, struct s_file_reference *, class std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > > &, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *);
// public: bool c_model_animation_graph::process_for_tag_package(long, struct s_file_reference *, class std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > > &);
// public: void c_model_animation_graph::remove_animation(struct s_file_reference *, long);
// void decrement_animation_index(class c_model_animation_graph *, class c_model_animation *, class c_animation_id *, class c_enum<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>, long, long);
// public: void c_model_animation_graph::strip_unnecessary_animations(struct s_file_reference *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *);
// public: class c_flags_no_init<enum e_animation_internal_flags, unsigned short, 10, struct s_default_enum_string_resolver> & c_model_animation::get_writable_internal_flags(void);
// bool find_string_in_array(struct array_template<long> const *, long);
// void set_cull_flag_on_animation_and_variants(class c_model_animation_graph *, class c_animation_id, bool);
// void set_cull_flag_on_animations_in_overlay_group(class c_model_animation_graph *, long, bool);
// public: void c_model_animation_graph::strip_unnecessary_animation_data(void);
// public: void c_model_animation_graph::clear(void);
// public: long c_model_animation_graph::find_matching_blend_screen(struct animation_aiming_screen_bounds const *);
// public: long c_model_animation_graph::find_pose_overlay_by_name(long, long, long) const;
// public: void c_model_animation_graph::condense_blend_screen_block(void);
// public: void c_model_animation::set_blend_screen_index(char);
// public: void c_animation_set::sort_entries_by_name(void);
// public: void c_model_animation_graph_contents::sort_entries_by_name(void);
// long find_next_named_block_entry_index(struct s_tag_block const *, long, long);
// long find_named_block_entry_index(struct s_tag_block const *, long);
// void * unsorted_find_named_block_entry_with_size(struct s_tag_block const *, long, long);
// long unsorted_find_named_block_entry_index_with_size(struct s_tag_block const *, long, long);
// void * sorted_find_named_block_entry_with_size(struct s_tag_block const *, long, long);
// public: bool c_model_animation_graph::animation_is_part_of_a_variation_chain(class c_animation_id) const;
// public: class c_animation_id c_model_animation_graph::find_top_of_variation_chain(class c_animation_id) const;
// public: class c_animation_id c_model_animation_graph::choose_random_permutation(class c_animation_id, bool) const;
// public: long c_model_animation_graph::count_max_chain_length_below_node(long) const;
// public: long c_model_animation_graph::count_chain_length_above_node(long) const;
// public: bool c_model_animation_graph::tags_have_changed(void) const;
// public: void c_model_animation_graph::notify_all_production_flags(long);
// public: void c_model_animation_graph::sort_frame_events_by_frame_index(void);
// public: struct s_tag_block const & c_model_animation::get_frame_events(void) const;
// int frame_event_comparison_function(void const *, void const *);
// public: s_frame_event::s_frame_event(void);
// public: void c_model_animation_graph::validate_blend_screens(long);
// public: bool c_model_animation_graph::update_animation_graph(long);
// public: c_animation_data_sizes::c_animation_data_sizes(void);
// public: c_animation_data_sizes::~c_animation_data_sizes(void);
// public: void c_animation_data_sizes::set_data_size(enum e_internal_data_type, long);
// public: static long c_animation_data_sizes::get_old_static_node_flags_data_offset(void);
// public: long c_animation_data_sizes::get_old_animated_node_flags_data_offset(void) const;
// public: long c_animation_data_sizes::get_old_movement_data_offset(void) const;
// public: long c_animation_data_sizes::get_old_pill_offset_data_offset(void) const;
// public: long c_animation_data_sizes::get_old_default_data_offset(void) const;
// public: long c_animation_data_sizes::get_old_uncompressed_data_offset(void) const;
// public: long c_animation_data_sizes::get_old_compressed_data_offset(void) const;
// public: long c_animation_data_sizes::get_old_total_size(void) const;
// long align_animation_offset(long);
// public: void c_model_animation_graph::reset_to_default_compression_settings(void);
// public: void c_model_animation_graph::build_left_arm_node_flags(void);
// void set_left_arm_node_flags_recursive(class c_model_animation_graph *, long);
// private: void c_model_animation_graph::build_runtime_arm_node_bit_vectors(void);
// private: void c_model_animation_graph::build_user_node_masks(void);
// public: void c_model_animation_graph::validate_displacement_and_pivot_data(long);
// public: void c_model_animation::set_frame_info_type(class c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>);
// public: void c_model_animation_graph::extract_displacment_and_pivot_data(void);
// public: void c_model_animation::set_movement_heading(union vector3d *);
// public: void c_model_animation::set_average_translation_magnitude(float);
// public: void c_model_animation::set_total_angular_offset(float);
// public: void c_model_animation_graph::pin_loop_frame_indices(void);
// public: void c_model_animation::set_loop_frame_index(short);
// public: struct s_additional_node_data const * c_model_animation_graph::get_additional_node_data(long) const;
// public: bool c_model_animation_graph::prepare_animation_data_for_use(long, bool);
// public: void c_model_animation_graph::get_graph_and_animation(class c_animation_id, class c_model_animation_graph const **, class c_model_animation const **) const;
// public: class c_model_animation_graph const * c_model_animation::get_shared_animation_graph(void) const;
// public: void c_model_animation_graph::get_writable_graph_and_animation(class c_animation_id, class c_model_animation_graph **, class c_model_animation **);
// public: class c_model_animation_graph * c_model_animation::get_writable_shared_animation_graph(void) const;
// private: bool c_model_animation_graph::test_inheritance_list(void) const;
// public: bool c_model_animation_graph::get_animation_data(class c_animation_id, class c_animation_data *) const;
// public: unsigned char c_model_animation::get_node_count(void) const;
// public: bool c_model_animation_graph::get_local_animation_data(class c_model_animation const *, class c_animation_data *) const;
// private: bool c_model_animation_graph::are_local_animation_resources_available(void) const;
// private: bool c_model_animation_graph::is_local_member_of_resource_member_available(long, long) const;
// private: class c_model_animation_tag_refrence_counted_resource const * c_model_animation_graph::get_local_resource(long) const;
// private: class c_model_animation_tag_refrence_counted_resource * c_model_animation_graph::get_local_writable_resource(long);
// private: class c_model_animation_tag_resource_member const * c_model_animation_graph::get_local_member_of_resource(long, long) const;
// private: class c_model_animation_tag_resource_member * c_model_animation_graph::get_local_writable_member_of_resource(long, long);
// public: bool c_model_animation_graph::are_animation_resources_available(void) const;
// public: bool c_model_animation_graph::is_animation_resource_available(class c_animation_id) const;
// public: class c_model_animation_tag_resource_member const * c_model_animation_graph::get_resource_member(class c_animation_id) const;
// public: class c_model_animation_tag_resource_member * c_model_animation_graph::get_writable_resource_member(class c_animation_id);
// public: short c_model_animation_graph::find_animation_tag_resource_index_from_resource_handle(long) const;
// public: bool c_model_animation_graph::animation_contains_data(class c_animation_id, enum e_internal_data_type) const;
// public: bool c_model_animation_graph::animation_data_resize(class c_animation_id, struct dynamic_array const *, enum e_internal_data_type);
// public: void c_animation_data_sizes::clone_from(class c_animation_data_sizes const &);
// public: enum e_internal_data_type c_animation_data_sizes::get_first_available_data_type(void) const;
// void append_data_to_buffer(char *&, char const *, long);
// public: bool c_model_animation_graph::animation_insert_flags_data(class c_animation_id, enum e_internal_data_type, unsigned long *, unsigned long *, unsigned long *, long);
// public: bool c_model_animation_graph::animation_insert_data(class c_animation_id, enum e_internal_data_type, struct dynamic_array const *);
// public: void c_model_animation_graph::animation_strip_data(class c_animation_id, enum e_internal_data_type);
// public: bool c_model_animation_graph::animation_validate_old_uncompressed_data(class c_animation_id);
// public: bool c_animation_data::node_contains_animated_rotation_data(short) const;
// public: unsigned long const * c_animation_data::get_animated_rotation_flags(void) const;
// public: bool c_animation_data::node_contains_animated_scale_data(short) const;
// public: unsigned long const * c_animation_data::get_animated_scale_flags(void) const;
// public: bool c_model_animation_graph::animation_validate_old_static_data(class c_animation_id);
// public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id);
// public: void c_quantized_quaternion_8byte::decompress(struct real32_quaternion *) const;
// __stvx;
// struct __vector4 XMVectorFalseInt(void);
// public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id);
// public: long c_model_animation_graph::create_new_animation_resource(long);
// public: void c_model_animation_graph::move_animation_into_resource_from_graph_location(class c_animation_id, long, long);
// public: void c_model_animation::set_resource_index(short);
// public: void c_model_animation::set_resource_member_index(short);
// public: void c_model_animation_graph::move_animation_into_resource_from_list(class c_animation_id, long);
// public: void c_model_animation_graph::move_overlay_group_animations_into_resource(long, long, long);
// private: void c_model_animation_graph::sort_animations_into_resource_groups_by_graph_location(void);
// private: void c_model_animation_graph::sort_animations_into_resource_groups_by_sharing_status(void);
// public: long c_model_animation::get_shared_id(void) const;
// public: void c_model_animation_graph::sort_animations_into_resource_groups(void);
// public: void c_model_animation_graph::old_sort_animations_into_resource_groups(void);
// void animation_group_sorting_callback(class c_model_animation_graph *, class c_model_animation *, class c_animation_id *, class c_enum<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>, long, long);
// public: void c_model_animation_graph::remove_bad_fik_anchor_nodes(class c_animation_id);
// public: struct s_tag_block & c_model_animation::get_writable_fik_anchor_nodes(void);
// public: struct s_tag_block const & c_model_animation::get_fik_anchor_nodes(void) const;
// public: void c_model_animation_graph::compute_velocity_boundaries(long);
// public: bool c_model_animation_graph::should_recompress(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, bool) const;
// bool compression_setting_equals_forced(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>);
// public: class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> c_model_animation_graph::get_desired_compression(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, bool) const;
// class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> compression_settings_from_forced(class c_enum<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>);
// private: bool c_model_animation_graph::validate_resource_group_linkage(void);
// private: void c_model_animation_graph::update_resource_reference_counts(void);
// private: void c_model_animation_graph::purge_unused_resources(void);
// private: void c_model_animation_graph::purge_unused_references(void);
// public: bool c_enum_no_init<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_animation_compression_settings) const;
// public: enum e_animation_compression_force_settings c_enum_no_init<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_animation_compression_force_settings(void) const;
// public: bool c_enum_no_init<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_animation_compression_force_settings) const;
// public: array_template<unsigned char>::array_template<unsigned char>(void);
// public: unsigned char * array_template<unsigned char>::get_elements(void);
// public: void array_template<unsigned char>::resize(long);
// public: void array_template<unsigned char>::append(void const *, long);
// public: void array_template<unsigned char>::append(unsigned char const *, long);
// public: void array_template<unsigned char>::append(struct array_template<unsigned char> const *);
// public: c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>(void);
// public: bool c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::operator==(enum e_animation_frame_event_types) const;
// public: enum e_foot_tracking_defaults c_enum_no_init<enum e_foot_tracking_defaults, short, 0, 2, struct s_default_enum_string_resolver>::operator enum e_foot_tracking_defaults(void) const;
// public: enum e_animation_ik_chain_types c_enum_no_init<enum e_animation_ik_chain_types, short, 0, 1, struct s_default_enum_string_resolver>::operator enum e_animation_ik_chain_types(void) const;
// public: bool c_enum_no_init<enum e_animation_ik_chain_types, short, 0, 1, struct s_default_enum_string_resolver>::operator==(enum e_animation_ik_chain_types) const;
// public: enum e_animation_ranged_action_variable_source c_enum_no_init<enum e_animation_ranged_action_variable_source, short, 0, 7, struct s_default_enum_string_resolver>::operator enum e_animation_ranged_action_variable_source(void) const;
// public: c_enum<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>(enum e_animation_gait_directions);
// public: class c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver> c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::operator++(int);
// public: bool c_enum_no_init<enum e_animation_node_usage, short, 0, 22, struct s_default_enum_string_resolver>::operator==(enum e_animation_node_usage) const;
// public: c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>(enum e_animation_frame_info_types);
// public: bool c_enum_no_init<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_animation_frame_info_types) const;
// public: c_triangulation<256>::c_triangulation<256>(void);
// public: c_triangulation<256>::~c_triangulation<256>(void);
// public: array_template<union real_point2d>::array_template<union real_point2d>(void);
// public: array_template<union real_point2d>::~array_template<union real_point2d>(void);
// public: union real_point2d * array_template<union real_point2d>::get_elements(void);
// public: union real_point2d * array_template<union real_point2d>::get_element(long);
// public: void array_template<union real_point2d>::resize(long);
// public: unsigned int array_template<union real_point2d>::size(void) const;
// public: array_template<struct s_delaunay_triangle>::array_template<struct s_delaunay_triangle>(void);
// public: array_template<struct s_delaunay_triangle>::~array_template<struct s_delaunay_triangle>(void);
// public: struct s_delaunay_triangle * array_template<struct s_delaunay_triangle>::get_element(long);
// public: unsigned int array_template<struct s_delaunay_triangle>::size(void) const;
// public: std::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >(void);
// public: long & std::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >::operator[](long const &);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::end(void);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::find(long const &);
// public: long const * array_template<long>::get_element(long) const;
// public: long * array_template<long>::get_element(long);
// public: long array_template<long>::append(long const &);
// public: void array_template<long>::clear(void);
// public: void array_template<long>::copy_from(struct array_template<long> const *);
// public: void array_template<long>::append(struct array_template<long> const *);
// public: long array_template<long>::slow_brute_force_search(long *);
// public: long const * array_template<long>::begin(void) const;
// public: long const * array_template<long>::end(void) const;
// public: unsigned int array_template<long>::size(void) const;
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::iterator(void);
// public: struct std::pair<long const, long> * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator->(void) const;
// public: bool std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &) const;
// public: void s_static_array<short, 4>::set_memory(long);
// ?sort_range@?$s_static_array@F$03@@QAAXJQ6A_NPBX00@Z0@Z;
// public: struct s_graph_animation_and_uid & std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > >::operator[](long const &);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::end(void);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::find(long const &);
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::iterator(void);
// public: struct std::pair<long const, struct s_graph_animation_and_uid> * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator->(void) const;
// public: bool std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &) const;
// public: unsigned long & array_template<unsigned long>::operator[](long);
// public: void s_static_array<long, 64>::set_all(long const &);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &);
// public: std::_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator const &);
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator const &);
// public: std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>(struct std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &> const &);
// public: std::_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void);
// public: std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>(struct std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base> const &);
// public: std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base> const &);
// public: std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>::~_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>(void);
// public: unsigned char const * array_template<unsigned char>::get_elements(void) const;
// public: unsigned char * array_template<unsigned char>::get_element(long);
// public: void array_template<unsigned char>::resize_fill(long, long);
// public: long array_template<unsigned char>::grow(long);
// public: void array_template<union real_point2d>::resize_fill(long, long);
// public: void array_template<struct s_delaunay_triangle>::resize(long);
// protected: static long const & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> > const &);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::insert(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator, struct std::pair<long const, long> const &);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::lower_bound(long const &);
// protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tidy(void);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >(void);
// public: std::allocator<struct std::pair<long const, long> >::allocator<struct std::pair<long const, long> >(void);
// public: bool std::less<long>::operator()(long const &, long const &) const;
// public: long const * array_template<long>::get_elements(void) const;
// public: long array_template<long>::new_element_index(void);
// public: void array_template<long>::append(long const *, long);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> > const *);
// public: struct std::pair<long const, long> & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator*(void) const;
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::const_iterator(void);
// public: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::_Mynode(void) const;
// public: std::pair<long const, long>::pair<long const, long>(long const &, long const &);
// protected: static long const & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::insert(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator, struct std::pair<long const, struct s_graph_animation_and_uid> const &);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::lower_bound(long const &);
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> > const *);
// public: struct std::pair<long const, struct s_graph_animation_and_uid> & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator*(void) const;
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::const_iterator(void);
// public: bool std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::_Mynode(void) const;
// public: std::pair<long const, struct s_graph_animation_and_uid>::pair<long const, struct s_graph_animation_and_uid>(long const &, struct s_graph_animation_and_uid const &);
// public: unsigned long & array_template<unsigned long>::element(long);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>(void);
// public: std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>(void);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>(void);
// public: std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>(void);
// protected: void array_template<unsigned char>::signal_out_of_memory(void) const;
// public: long array_template<unsigned char>::grow_fill(long, long);
// protected: void array_template<union real_point2d>::signal_out_of_memory(void) const;
// public: void array_template<struct s_delaunay_triangle>::resize_fill(long, long);
// public: s_delaunay_triangle::s_delaunay_triangle(void);
// public: void s_delaunay_triangle::set(long, long, long);
// public: void s_delaunay_triangle::unlink(void);
// protected: static char & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: static struct std::pair<long const, long> & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::begin(void);
// public: unsigned int std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::size(void) const;
// public: struct std::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::insert(struct std::pair<long const, long> const &);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Init(void);
// protected: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::pair<long const, long> const &);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Lbound(long const &) const;
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Rmost(void) const;
// protected: std::_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> >);
// public: static long const & std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>::_Kfn(struct std::pair<long const, long> const &);
// public: std::allocator<struct std::pair<long const, long> >::allocator<struct std::pair<long const, long> >(class std::allocator<struct std::pair<long const, long> > const &);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **);
// public: long array_template<long>::grow(long);
// public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> > const *);
// public: struct std::pair<long const, long> const & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator++(void);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator--(void);
// protected: static char & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: static struct std::pair<long const, struct s_graph_animation_and_uid> & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::begin(void);
// public: unsigned int std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::size(void) const;
// public: struct std::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::insert(struct std::pair<long const, struct s_graph_animation_and_uid> const &);
// protected: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::pair<long const, struct s_graph_animation_and_uid> const &);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Lbound(long const &) const;
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Rmost(void) const;
// public: static long const & std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0>::_Kfn(struct std::pair<long const, struct s_graph_animation_and_uid> const &);
// public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> > const *);
// public: struct std::pair<long const, struct s_graph_animation_and_uid> const & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator++(void);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator--(void);
// protected: void array_template<struct s_delaunay_triangle>::signal_out_of_memory(void) const;
// protected: static char & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator) const;
// public: unsigned int std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::max_size(void) const;
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator);
// public: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Buynode(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::pair<long const, long> const &, char);
// public: std::_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> >);
// public: long array_template<long>::grow_fill(long, long);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator--(void);
// public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator++(int);
// public: bool std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &) const;
// public: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::_Dec(void);
// public: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::_Inc(void);
// protected: static char & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// public: unsigned int std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::max_size(void) const;
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, char);
// public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator--(void);
// public: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::_Dec(void);
// public: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::_Inc(void);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator const &, bool const &);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator const &, bool const &);
// protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *) const;
// protected: std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> >);
// public: unsigned int std::allocator<struct std::pair<long const, long> >::max_size(void) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::allocate(unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *const &);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// public: unsigned int std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >::max_size(void) const;
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, unsigned int);
// public: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node>::allocate(unsigned int);
// public: std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::pair<long const, long> const &, char);
// public: std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, char);
// public: std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>(struct std::less<long>, class std::allocator<struct std::pair<long const, long> >);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >(class std::allocator<struct std::pair<long const, long> >);
// public: bool c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_animation_production_flags) const;
// public: void c_flags_no_init<enum e_animation_internal_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_animation_internal_flags, bool);
// public: bool c_triangulation<256>::calculate(union real_point2d const *, long);
// public: short & s_static_array<short, 4>::operator[]<long>(long);
// public: long & s_static_array<long, 64>::operator[]<int>(int);
// bool std::_Debug_lt_pred<struct std::less<long>, long, long>(struct std::less<long>, long const &, long const &, wchar_t const *, unsigned int);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **);
// void std::swap<char>(char &, char &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>::ctor<struct std::pair<long const, long> >(class std::allocator<struct std::pair<long const, long> > const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::ctor<struct std::pair<long const, long> >(class std::allocator<struct std::pair<long const, long> > const &);
// struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *);
// void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *const &);
// struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *);
// public: static bool c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_production_flags);
// private: static unsigned short c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_production_flags);
// public: static bool s_static_array<short, 4>::valid<long>(long);
// public: static bool s_static_array<long, 64>::valid<int>(int);
// public: array_template<unsigned char>::~array_template<unsigned char>(void);
// void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::new_uncompressed_data::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::uncompressed_scale_arrays::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::uncompressed_translation_arrays::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::uncompressed_rotation_arrays::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::new_static_data::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::static_scale_arrays::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::static_translation_arrays::`dynamic atexit destructor'(void);
// void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::static_rotation_arrays::`dynamic atexit destructor'(void);

//public: float c_model_animation_graph::get_animation_total_translation(class c_animation_id) const
//{
//    mangled_ppc("?get_animation_total_translation@c_model_animation_graph@@QBAMVc_animation_id@@@Z");
//};

//public: bool c_animation_data_sizes::contains_data(enum e_internal_data_type) const
//{
//    mangled_ppc("?contains_data@c_animation_data_sizes@@QBA_NW4e_internal_data_type@@@Z");
//};

//public: class c_animation_data_sizes const * c_animation_data::get_data_sizes(void) const
//{
//    mangled_ppc("?get_data_sizes@c_animation_data@@QBAPBVc_animation_data_sizes@@XZ");
//};

//public: void c_model_animation_graph::get_axis_offsets(class c_animation_id, short, float *, float *) const
//{
//    mangled_ppc("?get_axis_offsets@c_model_animation_graph@@QBAXVc_animation_id@@FPAM1@Z");
//};

//public: static long c_model_animation_graph::create(char const *)
//{
//    mangled_ppc("?create@c_model_animation_graph@@SAJPBD@Z");
//};

//public: static long c_model_animation_graph::load(char const *, long)
//{
//    mangled_ppc("?load@c_model_animation_graph@@SAJPBDJ@Z");
//};

//public: static class c_animation_frame_event_list const * c_animation_frame_event_list::get(long)
//{
//    mangled_ppc("?get@c_animation_frame_event_list@@SAPBV1@J@Z");
//};

//public: static class c_animation_frame_event_list * c_animation_frame_event_list::get_writable(long)
//{
//    mangled_ppc("?get_writable@c_animation_frame_event_list@@SAPAV1@J@Z");
//};

//public: static class c_model_animation_graph const * c_model_animation_graph::get(long)
//{
//    mangled_ppc("?get@c_model_animation_graph@@SAPBV1@J@Z");
//};

//public: static class c_model_animation_graph * c_model_animation_graph::get_writable(long)
//{
//    mangled_ppc("?get_writable@c_model_animation_graph@@SAPAV1@J@Z");
//};

//public: static class c_model_animation_graph const * c_model_animation_graph::get_from_object_definition(long)
//{
//    mangled_ppc("?get_from_object_definition@c_model_animation_graph@@SAPBV1@J@Z");
//};

//public: bool c_model_animation_graph::uses_data_driven_mixing_board(void) const
//{
//    mangled_ppc("?uses_data_driven_mixing_board@c_model_animation_graph@@QBA_NXZ");
//};

//public: class c_model_animation const * c_model_animation_graph::get_local_animation(long) const
//{
//    mangled_ppc("?get_local_animation@c_model_animation_graph@@QBAPBVc_model_animation@@J@Z");
//};

//public: class c_model_animation * c_model_animation_graph::get_local_writable_animation(long)
//{
//    mangled_ppc("?get_local_writable_animation@c_model_animation_graph@@QAAPAVc_model_animation@@J@Z");
//};

//public: class c_model_animation const * c_model_animation_graph::get_animation(class c_animation_id) const
//{
//    mangled_ppc("?get_animation@c_model_animation_graph@@QBAPBVc_model_animation@@Vc_animation_id@@@Z");
//};

//public: class c_model_animation * c_model_animation_graph::get_writable_animation(class c_animation_id)
//{
//    mangled_ppc("?get_writable_animation@c_model_animation_graph@@QAAPAVc_model_animation@@Vc_animation_id@@@Z");
//};

//public: class c_model_animation const * c_model_animation_graph::get_animation_interface(class c_animation_id) const
//{
//    mangled_ppc("?get_animation_interface@c_model_animation_graph@@QBAPBVc_model_animation@@Vc_animation_id@@@Z");
//};

//public: struct animation_aiming_screen_bounds const * c_model_animation_graph::get_local_blend_screen_bounds(long) const
//{
//    mangled_ppc("?get_local_blend_screen_bounds@c_model_animation_graph@@QBAPBUanimation_aiming_screen_bounds@@J@Z");
//};

//public: struct animation_aiming_screen_bounds const * c_model_animation_graph::get_blend_screen_bounds(class c_animation_id) const
//{
//    mangled_ppc("?get_blend_screen_bounds@c_model_animation_graph@@QBAPBUanimation_aiming_screen_bounds@@Vc_animation_id@@@Z");
//};

//public: char c_model_animation::get_blend_screen_index(void) const
//{
//    mangled_ppc("?get_blend_screen_index@c_model_animation@@QBADXZ");
//};

//public: class c_animation_frame_event_list const * c_model_animation_graph::get_import_frame_event_list(void) const
//{
//    mangled_ppc("?get_import_frame_event_list@c_model_animation_graph@@QBAPBVc_animation_frame_event_list@@XZ");
//};

//public: class c_animation_frame_event_list * c_model_animation_graph::get_writable_import_frame_event_list(void) const
//{
//    mangled_ppc("?get_writable_import_frame_event_list@c_model_animation_graph@@QBAPAVc_animation_frame_event_list@@XZ");
//};

//public: class c_model_animation_graph const * c_model_animation_graph::get_parent_graph(void) const
//{
//    mangled_ppc("?get_parent_graph@c_model_animation_graph@@QBAPBV1@XZ");
//};

//public: class c_model_animation_graph * c_model_animation_graph::get_writable_parent_graph(void) const
//{
//    mangled_ppc("?get_writable_parent_graph@c_model_animation_graph@@QBAPAV1@XZ");
//};

//public: struct s_animation_graph_node * c_model_animation_graph::get_node(long) const
//{
//    mangled_ppc("?get_node@c_model_animation_graph@@QBAPAUs_animation_graph_node@@J@Z");
//};

//public: long c_model_animation_graph::get_inherited_graph_count(void) const
//{
//    mangled_ppc("?get_inherited_graph_count@c_model_animation_graph@@QBAJXZ");
//};

//public: class c_model_animation_graph const * c_model_animation_graph::get_inherited_graph(long) const
//{
//    mangled_ppc("?get_inherited_graph@c_model_animation_graph@@QBAPBV1@J@Z");
//};

//public: bool c_model_animation_graph::is_inherited_from_graph(class c_model_animation_graph const *) const
//{
//    mangled_ppc("?is_inherited_from_graph@c_model_animation_graph@@QBA_NPBV1@@Z");
//};

//public: class c_model_animation_graph * c_model_animation_graph::get_writable_inherited_graph(long)
//{
//    mangled_ppc("?get_writable_inherited_graph@c_model_animation_graph@@QAAPAV1@J@Z");
//};

//public: struct s_animation_inheritance const * c_model_animation_graph::get_node_remap_data_for_graph(long) const
//{
//    mangled_ppc("?get_node_remap_data_for_graph@c_model_animation_graph@@QBAPBUs_animation_inheritance@@J@Z");
//};

//public: struct s_animation_inheritance const * c_model_animation_graph::get_node_remap_data_for_animation(long, class c_animation_id) const
//{
//    mangled_ppc("?get_node_remap_data_for_animation@c_model_animation_graph@@QBAPBUs_animation_inheritance@@JVc_animation_id@@@Z");
//};

//public: long c_model_animation::get_shared_animation_graph_index(void) const
//{
//    mangled_ppc("?get_shared_animation_graph_index@c_model_animation@@QBAJXZ");
//};

//public: bool c_model_animation_graph::is_node_list_hierarchy_compatible(class c_model_animation_graph const *) const
//{
//    mangled_ppc("?is_node_list_hierarchy_compatible@c_model_animation_graph@@QBA_NPBV1@@Z");
//};

//public: short c_model_animation_graph::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_model_animation_graph@@QBAFXZ");
//};

//public: short c_model_animation_graph::get_animation_count(void) const
//{
//    mangled_ppc("?get_animation_count@c_model_animation_graph@@QBAFXZ");
//};

//public: class c_animation_id c_model_animation_graph::find_state_animation_in_mode(long, long, class c_animation_graph_search_cache *, long *, long *, long *) const
//{
//    mangled_ppc("?find_state_animation_in_mode@c_model_animation_graph@@QBA?AVc_animation_id@@JJPAVc_animation_graph_search_cache@@PAJ11@Z");
//};

//public: class c_animation_id c_animation_set::find_action_animation(long) const
//{
//    mangled_ppc("?find_action_animation@c_animation_set@@QBA?AVc_animation_id@@J@Z");
//};

//public: struct s_animation_entry const * c_animation_set::find_action_animation_entry(long) const
//{
//    mangled_ppc("?find_action_animation_entry@c_animation_set@@QBAPBUs_animation_entry@@J@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_action(long, long, long, long, long, class c_animation_graph_search_cache *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?find_action@c_model_animation_graph@@QBA?AVc_animation_id@@JJJJJPAVc_animation_graph_search_cache@@PAJ111@Z");
//};

//public: c_animation_search_path_iterator::~c_animation_search_path_iterator(void)
//{
//    mangled_ppc("??1c_animation_search_path_iterator@@QAA@XZ");
//};

//public: struct s_animation_ranged_action const * c_model_animation_graph::find_ranged_action(long, long, long, class c_animation_graph_search_cache *) const
//{
//    mangled_ppc("?find_ranged_action@c_model_animation_graph@@QBAPBUs_animation_ranged_action@@JJJPAVc_animation_graph_search_cache@@@Z");
//};

//public: struct s_animation_sync_action const * c_model_animation_graph::find_sync_action(long, long, long) const
//{
//    mangled_ppc("?find_sync_action@c_model_animation_graph@@QBAPBUs_animation_sync_action@@JJJ@Z");
//};

//public: struct s_animation_sync_action const * c_model_animation_graph::find_local_sync_action(long, long, long) const
//{
//    mangled_ppc("?find_local_sync_action@c_model_animation_graph@@QBAPBUs_animation_sync_action@@JJJ@Z");
//};

//public: static long c_model_animation_graph::find_hierarchical_property_index_and_graph(long, enum e_animation_graph_node_property, long, long, long, long, long, long, class c_animation_graph_search_cache *, long *)
//{
//    mangled_ppc("?find_hierarchical_property_index_and_graph@c_model_animation_graph@@SAJJW4e_animation_graph_node_property@@JJJJJJPAVc_animation_graph_search_cache@@PAJ@Z");
//};

//public: class c_animation_set const * c_weapon_type::find_set(long) const
//{
//    mangled_ppc("?find_set@c_weapon_type@@QBAPBVc_animation_set@@J@Z");
//};

//public: struct s_animation_entry const * c_animation_set::find_overlay_animation_entry(long) const
//{
//    mangled_ppc("?find_overlay_animation_entry@c_animation_set@@QBAPBUs_animation_entry@@J@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_overlay_animation(long, long, long, long, long, class c_animation_graph_search_cache *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?find_overlay_animation@c_model_animation_graph@@QBA?AVc_animation_id@@JJJJJPAVc_animation_graph_search_cache@@PAJ111@Z");
//};

//public: class c_animation_id c_animation_set::find_overlay_animation(long) const
//{
//    mangled_ppc("?find_overlay_animation@c_animation_set@@QBA?AVc_animation_id@@J@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_death_or_damage_animation_id(long, long, long, long, long, short, short, class c_animation_graph_search_cache *, long *, long *, long *, long *, short *, short *) const
//{
//    mangled_ppc("?find_death_or_damage_animation_id@c_model_animation_graph@@QBA?AVc_animation_id@@JJJJJFFPAVc_animation_graph_search_cache@@PAJ111PAF2@Z");
//};

//short damage_part_get_parent(short)
//{
//    mangled_ppc("?damage_part_get_parent@@YAFF@Z");
//};

//short damage_direction_get_alternate(short)
//{
//    mangled_ppc("?damage_direction_get_alternate@@YAFF@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_damage_animation(long, long, long, long, long, long, long, class c_animation_graph_search_cache *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?find_damage_animation@c_model_animation_graph@@QBA?AVc_animation_id@@JJJJJJJPAVc_animation_graph_search_cache@@PAJ111@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_transition(long, long, long, long, long, long, long, class c_animation_graph_search_cache *, long *) const
//{
//    mangled_ppc("?find_transition@c_model_animation_graph@@QBA?AVc_animation_id@@JJJJJJJPAVc_animation_graph_search_cache@@PAJ@Z");
//};

//public: short c_model_animation_graph::find_gait_group(long, long, long, long, class c_animation_graph_search_cache *, long *) const
//{
//    mangled_ppc("?find_gait_group@c_model_animation_graph@@QBAFJJJJPAVc_animation_graph_search_cache@@PAJ@Z");
//};

//public: bool c_model_animation_graph::find_velocity_boundaries(long, long, long, long, enum e_physics_animation_state, class c_animation_graph_search_cache *, long *, float *, float *) const
//{
//    mangled_ppc("?find_velocity_boundaries@c_model_animation_graph@@QBA_NJJJJW4e_physics_animation_state@@PAVc_animation_graph_search_cache@@PAJPAM3@Z");
//};

//public: bool c_model_animation_graph::find_next_function_overlay(class function_overlay_iterator *) const
//{
//    mangled_ppc("?find_next_function_overlay@c_model_animation_graph@@QBA_NPAVfunction_overlay_iterator@@@Z");
//};

//public: bool c_model_animation_graph::find_next_vehicle_suspension(class suspension_animation_iterator *) const
//{
//    mangled_ppc("?find_next_vehicle_suspension@c_model_animation_graph@@QBA_NPAVsuspension_animation_iterator@@@Z");
//};

//public: bool c_model_animation_graph::find_next_mode_ik_point(class ik_point_iterator *) const
//{
//    mangled_ppc("?find_next_mode_ik_point@c_model_animation_graph@@QBA_NPAVik_point_iterator@@@Z");
//};

//public: bool c_model_animation_graph::find_next_weapon_ik_point(class ik_point_iterator *) const
//{
//    mangled_ppc("?find_next_weapon_ik_point@c_model_animation_graph@@QBA_NPAVik_point_iterator@@@Z");
//};

//public: long c_model_animation_graph::get_total_foot_tracking_members(void) const
//{
//    mangled_ppc("?get_total_foot_tracking_members@c_model_animation_graph@@QBAJXZ");
//};

//public: struct s_foot_tracking_member const * c_model_animation_graph::get_foot_tracking_member(long) const
//{
//    mangled_ppc("?get_foot_tracking_member@c_model_animation_graph@@QBAPBUs_foot_tracking_member@@J@Z");
//};

//public: struct s_foot_tracking_member * c_model_animation_graph::get_writable_foot_tracking_member(long)
//{
//    mangled_ppc("?get_writable_foot_tracking_member@c_model_animation_graph@@QAAPAUs_foot_tracking_member@@J@Z");
//};

//public: enum e_foot_tracking_state c_model_animation_graph::find_foot_tracking_default_state(long, long) const
//{
//    mangled_ppc("?find_foot_tracking_default_state@c_model_animation_graph@@QBA?AW4e_foot_tracking_state@@JJ@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_animation(long) const
//{
//    mangled_ppc("?find_animation@c_model_animation_graph@@QBA?AVc_animation_id@@J@Z");
//};

//?node_matrices_from_orientations@c_model_animation_graph@@QBAXPIAUreal_matrix4x3@@PIBUreal_orientation@@PIBTreal_point3d@@PIBTvector3d@@3@Z
//{
//    mangled_ppc("?node_matrices_from_orientations@c_model_animation_graph@@QBAXPIAUreal_matrix4x3@@PIBUreal_orientation@@PIBTreal_point3d@@PIBTvector3d@@3@Z");
//};

//private: void c_model_animation_graph::internal_node_matrices_from_orientations(long, long, unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&volatile) const
//{
//    mangled_ppc("?internal_node_matrices_from_orientations@c_model_animation_graph@@ABAXJJPIAUreal_matrix4x3@@PIBUreal_orientation@@PIBU2@@Z");
//};

//public: void c_model_animation_graph::node_matrices_from_orientations(unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&volatile) const
//{
//    mangled_ppc("?node_matrices_from_orientations@c_model_animation_graph@@QBAXPIAUreal_matrix4x3@@PIBUreal_orientation@@PIBU2@@Z");
//};

//public: void c_model_animation_graph::node_matrices_from_orientations_with_gun_hand_swap(unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&volatile, long, long) const
//{
//    mangled_ppc("?node_matrices_from_orientations_with_gun_hand_swap@c_model_animation_graph@@QBAXPIAUreal_matrix4x3@@PIBUreal_orientation@@PIBU2@JJ@Z");
//};

//public: long c_model_animation_graph::find_node_by_usage(enum e_animation_node_usage) const
//{
//    mangled_ppc("?find_node_by_usage@c_model_animation_graph@@QBAJW4e_animation_node_usage@@@Z");
//};

//public: long c_model_animation_graph::find_node_by_name(long) const
//{
//    mangled_ppc("?find_node_by_name@c_model_animation_graph@@QBAJJ@Z");
//};

//public: long c_model_animation_graph::find_node_with_flags(unsigned long) const
//{
//    mangled_ppc("?find_node_with_flags@c_model_animation_graph@@QBAJK@Z");
//};

//public: bool c_model_animation_graph::build_model_mapping_table(long, long *, long *, long) const
//{
//    mangled_ppc("?build_model_mapping_table@c_model_animation_graph@@QBA_NJPAJ0J@Z");
//};

//public: struct animation_graph_sound_reference const * c_model_animation_graph::get_sound_reference(long) const
//{
//    mangled_ppc("?get_sound_reference@c_model_animation_graph@@QBAPBUanimation_graph_sound_reference@@J@Z");
//};

//public: struct animation_graph_effect_reference const * c_model_animation_graph::get_effect_reference(long) const
//{
//    mangled_ppc("?get_effect_reference@c_model_animation_graph@@QBAPBUanimation_graph_effect_reference@@J@Z");
//};

//public: void c_model_animation_graph::alphabetize_animation_list(void)
//{
//    mangled_ppc("?alphabetize_animation_list@c_model_animation_graph@@QAAXXZ");
//};

//public: unsigned long c_model_animation::get_production_checksum(void) const
//{
//    mangled_ppc("?get_production_checksum@c_model_animation@@QBAKXZ");
//};

//public: short c_model_animation::get_resource_index(void) const
//{
//    mangled_ppc("?get_resource_index@c_model_animation@@QBAFXZ");
//};

//public: short c_model_animation::get_resource_member_index(void) const
//{
//    mangled_ppc("?get_resource_member_index@c_model_animation@@QBAFXZ");
//};

//public: bool c_model_animation_graph::verify_animation_variants(long)
//{
//    mangled_ppc("?verify_animation_variants@c_model_animation_graph@@QAA_NJ@Z");
//};

//public: void c_model_animation::set_runtime_parent_animation_index(short)
//{
//    mangled_ppc("?set_runtime_parent_animation_index@c_model_animation@@QAAXF@Z");
//};

//public: void c_model_animation::set_next_animation_index(short)
//{
//    mangled_ppc("?set_next_animation_index@c_model_animation@@QAAXF@Z");
//};

//public: short c_model_animation::get_runtime_parent_animation_index(void) const
//{
//    mangled_ppc("?get_runtime_parent_animation_index@c_model_animation@@QBAFXZ");
//};

//public: void c_model_animation_graph::link_animation_variants(void)
//{
//    mangled_ppc("?link_animation_variants@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation::set_weight(float)
//{
//    mangled_ppc("?set_weight@c_model_animation@@QAAXM@Z");
//};

//public: float c_model_animation::get_weight(void) const
//{
//    mangled_ppc("?get_weight@c_model_animation@@QBAMXZ");
//};

//public: void c_model_animation_graph::normalize_animation_variation_weights(void)
//{
//    mangled_ppc("?normalize_animation_variation_weights@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::presort_all_animation_graph_blocks(void)
//{
//    mangled_ppc("?presort_all_animation_graph_blocks@c_model_animation_graph@@QAAXXZ");
//};

//void sort_named_block_entries(struct s_tag_block *)
//{
//    mangled_ppc("?sort_named_block_entries@@YAXPAUs_tag_block@@@Z");
//};

//public: bool c_model_animation_graph::build_node_remap_data(long, long, struct s_animation_inheritance *, class c_model_animation_graph const *) const
//{
//    mangled_ppc("?build_node_remap_data@c_model_animation_graph@@QBA_NJJPAUs_animation_inheritance@@PBV1@@Z");
//};

//public: void c_model_animation_graph::build_inheritence_list(long)
//{
//    mangled_ppc("?build_inheritence_list@c_model_animation_graph@@QAAXJ@Z");
//};

//public: void c_model_animation_graph::update_new_inheritance_list(long, struct s_tag_reference const *)
//{
//    mangled_ppc("?update_new_inheritance_list@c_model_animation_graph@@QAAXJPBUs_tag_reference@@@Z");
//};

//private: void c_model_animation_graph::remove_incompatible_inherited_animations(void)
//{
//    mangled_ppc("?remove_incompatible_inherited_animations@c_model_animation_graph@@AAAXXZ");
//};

//public: class c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver> const c_model_animation::get_production_flags(void) const
//{
//    mangled_ppc("?get_production_flags@c_model_animation@@QBA?BV?$c_flags_no_init@W4e_animation_production_flags@@G$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_model_animation_graph::remove_all_non_local_animations(void)
//{
//    mangled_ppc("?remove_all_non_local_animations@c_model_animation_graph@@QAAXXZ");
//};

//private: bool c_model_animation_graph::validate_animation_id(class c_animation_id)
//{
//    mangled_ppc("?validate_animation_id@c_model_animation_graph@@AAA_NVc_animation_id@@@Z");
//};

//private: void c_model_animation_graph::validate_graph(void)
//{
//    mangled_ppc("?validate_graph@c_model_animation_graph@@AAAXXZ");
//};

//public: void c_model_animation_graph::inherit_animations_from_parent_graph(void)
//{
//    mangled_ppc("?inherit_animations_from_parent_graph@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::inherit_data_driven_graph_status(void)
//{
//    mangled_ppc("?inherit_data_driven_graph_status@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::inherit_ik_chains_from_parent_graph(long)
//{
//    mangled_ppc("?inherit_ik_chains_from_parent_graph@c_model_animation_graph@@QAAXJ@Z");
//};

//public: struct s_tag_block & c_model_animation::get_writable_ik_chain_events(void)
//{
//    mangled_ppc("?get_writable_ik_chain_events@c_model_animation@@QAAAAUs_tag_block@@XZ");
//};

//public: bool c_model_animation_graph::verify_animation_compression_levels(long, bool, bool)
//{
//    mangled_ppc("?verify_animation_compression_levels@c_model_animation_graph@@QAA_NJ_N0@Z");
//};

//public: void c_model_animation::set_desired_compression_setting(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_desired_compression_setting@c_model_animation@@QAAXV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> c_model_animation::get_desired_compression_setting(void) const
//{
//    mangled_ppc("?get_desired_compression_setting@c_model_animation@@QBA?AV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_model_animation_graph::post_process_sync_actions(long)
//{
//    mangled_ppc("?post_process_sync_actions@c_model_animation_graph@@QAAXJ@Z");
//};

//public: struct s_tag_block const & c_model_animation::get_effect_events(void) const
//{
//    mangled_ppc("?get_effect_events@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//public: bool c_model_animation_graph::verify_sync_actions(long)
//{
//    mangled_ppc("?verify_sync_actions@c_model_animation_graph@@QAA_NJ@Z");
//};

//public: std::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >::~map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >(void)
//{
//    mangled_ppc("??1?$map@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator const &)
//{
//    mangled_ppc("??4iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAAAV012@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??4const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAAAV012@ABV012@@Z");
//};

//public: std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::~_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@$$CBJJ@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: struct std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &> & std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::operator=(struct std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &> const &)
//{
//    mangled_ppc("??4?$_Bidit@U?$pair@$$CBJJ@std@@HPBU12@ABU12@@std@@QAAAAU01@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base> & std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::operator=(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??4?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAAAAU01@ABU01@@Z");
//};

//public: void c_model_animation_graph::resolve_references(void)
//{
//    mangled_ppc("?resolve_references@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::post_process_imported_animation_events(long)
//{
//    mangled_ppc("?post_process_imported_animation_events@c_model_animation_graph@@QAAXJ@Z");
//};

//public: struct s_tag_block & c_model_animation::get_writable_frame_events(void)
//{
//    mangled_ppc("?get_writable_frame_events@c_model_animation@@QAAAAUs_tag_block@@XZ");
//};

//public: struct s_tag_block & c_model_animation::get_writable_sound_events(void)
//{
//    mangled_ppc("?get_writable_sound_events@c_model_animation@@QAAAAUs_tag_block@@XZ");
//};

//public: struct s_tag_block & c_model_animation::get_writable_effect_events(void)
//{
//    mangled_ppc("?get_writable_effect_events@c_model_animation@@QAAAAUs_tag_block@@XZ");
//};

//public: struct s_tag_block & c_model_animation::get_writable_dialogue_events(void)
//{
//    mangled_ppc("?get_writable_dialogue_events@c_model_animation@@QAAAAUs_tag_block@@XZ");
//};

//public: void c_model_animation_graph::post_process_ik_chains(long)
//{
//    mangled_ppc("?post_process_ik_chains@c_model_animation_graph@@QAAXJ@Z");
//};

//bool comparison_function_short(void const *, void const *, void const *)
//{
//    mangled_ppc("?comparison_function_short@@YA_NPBX00@Z");
//};

//public: void c_model_animation_graph::calculate_range_actions_blend_triangulation(void)
//{
//    mangled_ppc("?calculate_range_actions_blend_triangulation@c_model_animation_graph@@QAAXXZ");
//};

//public: c_delaunay_triangulation::c_delaunay_triangulation(void)
//{
//    mangled_ppc("??0c_delaunay_triangulation@@QAA@XZ");
//};

//public: c_delaunay_triangulation::~c_delaunay_triangulation(void)
//{
//    mangled_ppc("??1c_delaunay_triangulation@@QAA@XZ");
//};

//bool calculate_range_actions_blend_triangulation_source(class c_model_animation_graph const *, class c_animation_id, class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_ranged_action_variable_source, short, 0, 7, struct s_default_enum_string_resolver>, float *)
//{
//    mangled_ppc("?calculate_range_actions_blend_triangulation_source@@YA_NPBVc_model_animation_graph@@Vc_animation_id@@V?$c_enum@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@2V?$c_enum@W4e_animation_ranged_action_variable_source@@F$0A@$06Us_default_enum_string_resolver@@@@PAM@Z");
//};

//public: bool c_model_animation_graph::post_process_tag(long, bool, bool)
//{
//    mangled_ppc("?post_process_tag@c_model_animation_graph@@QAA_NJ_N0@Z");
//};

//public: void c_model_animation_graph::populate_frame_event_list_tag(long)
//{
//    mangled_ppc("?populate_frame_event_list_tag@c_model_animation_graph@@QAAXJ@Z");
//};

//public: void c_model_animation_graph::on_save(long)
//{
//    mangled_ppc("?on_save@c_model_animation_graph@@QAAXJ@Z");
//};

//public: void c_model_animation_graph::for_each_animation_referenced_in_graph(void (*)(class c_model_animation_graph *, class c_model_animation *, class c_animation_id *, class c_enum<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>, long, long), long)
//{
//    mangled_ppc("?for_each_animation_referenced_in_graph@c_model_animation_graph@@QAAXP6AXPAV1@PAVc_model_animation@@PAVc_animation_id@@V?$c_enum@W4e_animation_graph_location@@D$0A@$08Us_default_enum_string_resolver@@@@JJ@ZJ@Z");
//};

//public: void c_model_animation_graph::for_each_animation_entry_in_graph(long (*)(class c_model_animation_graph *, struct s_tag_block *, long, void *), void *)
//{
//    mangled_ppc("?for_each_animation_entry_in_graph@c_model_animation_graph@@QAAXP6AJPAV1@PAUs_tag_block@@JPAX@Z2@Z");
//};

//public: void c_model_animation_graph::for_each_overlay_group_reference_in_graph(void (*)(short *, void *), void *)
//{
//    mangled_ppc("?for_each_overlay_group_reference_in_graph@c_model_animation_graph@@QAAXP6AXPAFPAX@Z1@Z");
//};

//public: void c_model_animation_graph::prepare_graph_for_use(long)
//{
//    mangled_ppc("?prepare_graph_for_use@c_model_animation_graph@@QAAXJ@Z");
//};

//public: void c_model_animation_graph::inherit_animations_from_animation_map(long, struct s_file_reference *, class std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > > &)
//{
//    mangled_ppc("?inherit_animations_from_animation_map@c_model_animation_graph@@QAAXJPAUs_file_reference@@AAV?$map@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@@std@@@Z");
//};

//public: struct s_tag_reference const * c_model_animation::get_shared_animation_reference(void) const
//{
//    mangled_ppc("?get_shared_animation_reference@c_model_animation@@QBAPBUs_tag_reference@@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator const &)
//{
//    mangled_ppc("??4iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAAAV012@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator=(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??4const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAAAV012@ABV012@@Z");
//};

//public: std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::~_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: struct std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &> & std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::operator=(struct std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &> const &)
//{
//    mangled_ppc("??4?$_Bidit@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@HPBU12@ABU12@@std@@QAAAAU01@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJUs_graph_animation_and_uid@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base> & std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::operator=(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??4?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJUs_graph_animation_and_uid@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAAAAU01@ABU01@@Z");
//};

//public: bool c_model_animation_graph::process_for_cache_file(long, struct s_file_reference *, class std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > > &, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *)
//{
//    mangled_ppc("?process_for_cache_file@c_model_animation_graph@@QAA_NJPAUs_file_reference@@AAV?$map@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@@std@@PBU?$array_template@J@@2222@Z");
//};

//public: bool c_model_animation_graph::process_for_tag_package(long, struct s_file_reference *, class std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > > &)
//{
//    mangled_ppc("?process_for_tag_package@c_model_animation_graph@@QAA_NJPAUs_file_reference@@AAV?$map@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@@std@@@Z");
//};

//public: void c_model_animation_graph::remove_animation(struct s_file_reference *, long)
//{
//    mangled_ppc("?remove_animation@c_model_animation_graph@@QAAXPAUs_file_reference@@J@Z");
//};

//void decrement_animation_index(class c_model_animation_graph *, class c_model_animation *, class c_animation_id *, class c_enum<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>, long, long)
//{
//    mangled_ppc("?decrement_animation_index@@YAXPAVc_model_animation_graph@@PAVc_model_animation@@PAVc_animation_id@@V?$c_enum@W4e_animation_graph_location@@D$0A@$08Us_default_enum_string_resolver@@@@JJ@Z");
//};

//public: void c_model_animation_graph::strip_unnecessary_animations(struct s_file_reference *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *, struct array_template<long> const *)
//{
//    mangled_ppc("?strip_unnecessary_animations@c_model_animation_graph@@QAAXPAUs_file_reference@@PBU?$array_template@J@@1111@Z");
//};

//public: class c_flags_no_init<enum e_animation_internal_flags, unsigned short, 10, struct s_default_enum_string_resolver> & c_model_animation::get_writable_internal_flags(void)
//{
//    mangled_ppc("?get_writable_internal_flags@c_model_animation@@QAAAAV?$c_flags_no_init@W4e_animation_internal_flags@@G$09Us_default_enum_string_resolver@@@@XZ");
//};

//bool find_string_in_array(struct array_template<long> const *, long)
//{
//    mangled_ppc("?find_string_in_array@@YA_NPBU?$array_template@J@@J@Z");
//};

//void set_cull_flag_on_animation_and_variants(class c_model_animation_graph *, class c_animation_id, bool)
//{
//    mangled_ppc("?set_cull_flag_on_animation_and_variants@@YAXPAVc_model_animation_graph@@Vc_animation_id@@_N@Z");
//};

//void set_cull_flag_on_animations_in_overlay_group(class c_model_animation_graph *, long, bool)
//{
//    mangled_ppc("?set_cull_flag_on_animations_in_overlay_group@@YAXPAVc_model_animation_graph@@J_N@Z");
//};

//public: void c_model_animation_graph::strip_unnecessary_animation_data(void)
//{
//    mangled_ppc("?strip_unnecessary_animation_data@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::clear(void)
//{
//    mangled_ppc("?clear@c_model_animation_graph@@QAAXXZ");
//};

//public: long c_model_animation_graph::find_matching_blend_screen(struct animation_aiming_screen_bounds const *)
//{
//    mangled_ppc("?find_matching_blend_screen@c_model_animation_graph@@QAAJPBUanimation_aiming_screen_bounds@@@Z");
//};

//public: long c_model_animation_graph::find_pose_overlay_by_name(long, long, long) const
//{
//    mangled_ppc("?find_pose_overlay_by_name@c_model_animation_graph@@QBAJJJJ@Z");
//};

//public: void c_model_animation_graph::condense_blend_screen_block(void)
//{
//    mangled_ppc("?condense_blend_screen_block@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation::set_blend_screen_index(char)
//{
//    mangled_ppc("?set_blend_screen_index@c_model_animation@@QAAXD@Z");
//};

//public: void c_animation_set::sort_entries_by_name(void)
//{
//    mangled_ppc("?sort_entries_by_name@c_animation_set@@QAAXXZ");
//};

//public: void c_model_animation_graph_contents::sort_entries_by_name(void)
//{
//    mangled_ppc("?sort_entries_by_name@c_model_animation_graph_contents@@QAAXXZ");
//};

//long find_next_named_block_entry_index(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("?find_next_named_block_entry_index@@YAJPBUs_tag_block@@JJ@Z");
//};

//long find_named_block_entry_index(struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_named_block_entry_index@@YAJPBUs_tag_block@@J@Z");
//};

//void * unsorted_find_named_block_entry_with_size(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("?unsorted_find_named_block_entry_with_size@@YAPAXPBUs_tag_block@@JJ@Z");
//};

//long unsorted_find_named_block_entry_index_with_size(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("?unsorted_find_named_block_entry_index_with_size@@YAJPBUs_tag_block@@JJ@Z");
//};

//void * sorted_find_named_block_entry_with_size(struct s_tag_block const *, long, long)
//{
//    mangled_ppc("?sorted_find_named_block_entry_with_size@@YAPAXPBUs_tag_block@@JJ@Z");
//};

//public: bool c_model_animation_graph::animation_is_part_of_a_variation_chain(class c_animation_id) const
//{
//    mangled_ppc("?animation_is_part_of_a_variation_chain@c_model_animation_graph@@QBA_NVc_animation_id@@@Z");
//};

//public: class c_animation_id c_model_animation_graph::find_top_of_variation_chain(class c_animation_id) const
//{
//    mangled_ppc("?find_top_of_variation_chain@c_model_animation_graph@@QBA?AVc_animation_id@@V2@@Z");
//};

//public: class c_animation_id c_model_animation_graph::choose_random_permutation(class c_animation_id, bool) const
//{
//    mangled_ppc("?choose_random_permutation@c_model_animation_graph@@QBA?AVc_animation_id@@V2@_N@Z");
//};

//public: long c_model_animation_graph::count_max_chain_length_below_node(long) const
//{
//    mangled_ppc("?count_max_chain_length_below_node@c_model_animation_graph@@QBAJJ@Z");
//};

//public: long c_model_animation_graph::count_chain_length_above_node(long) const
//{
//    mangled_ppc("?count_chain_length_above_node@c_model_animation_graph@@QBAJJ@Z");
//};

//public: bool c_model_animation_graph::tags_have_changed(void) const
//{
//    mangled_ppc("?tags_have_changed@c_model_animation_graph@@QBA_NXZ");
//};

//public: void c_model_animation_graph::notify_all_production_flags(long)
//{
//    mangled_ppc("?notify_all_production_flags@c_model_animation_graph@@QAAXJ@Z");
//};

//public: void c_model_animation_graph::sort_frame_events_by_frame_index(void)
//{
//    mangled_ppc("?sort_frame_events_by_frame_index@c_model_animation_graph@@QAAXXZ");
//};

//public: struct s_tag_block const & c_model_animation::get_frame_events(void) const
//{
//    mangled_ppc("?get_frame_events@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//int frame_event_comparison_function(void const *, void const *)
//{
//    mangled_ppc("?frame_event_comparison_function@@YAHPBX0@Z");
//};

//public: s_frame_event::s_frame_event(void)
//{
//    mangled_ppc("??0s_frame_event@@QAA@XZ");
//};

//public: void c_model_animation_graph::validate_blend_screens(long)
//{
//    mangled_ppc("?validate_blend_screens@c_model_animation_graph@@QAAXJ@Z");
//};

//public: bool c_model_animation_graph::update_animation_graph(long)
//{
//    mangled_ppc("?update_animation_graph@c_model_animation_graph@@QAA_NJ@Z");
//};

//public: c_animation_data_sizes::c_animation_data_sizes(void)
//{
//    mangled_ppc("??0c_animation_data_sizes@@QAA@XZ");
//};

//public: c_animation_data_sizes::~c_animation_data_sizes(void)
//{
//    mangled_ppc("??1c_animation_data_sizes@@QAA@XZ");
//};

//public: void c_animation_data_sizes::set_data_size(enum e_internal_data_type, long)
//{
//    mangled_ppc("?set_data_size@c_animation_data_sizes@@QAAXW4e_internal_data_type@@J@Z");
//};

//public: static long c_animation_data_sizes::get_old_static_node_flags_data_offset(void)
//{
//    mangled_ppc("?get_old_static_node_flags_data_offset@c_animation_data_sizes@@SAJXZ");
//};

//public: long c_animation_data_sizes::get_old_animated_node_flags_data_offset(void) const
//{
//    mangled_ppc("?get_old_animated_node_flags_data_offset@c_animation_data_sizes@@QBAJXZ");
//};

//public: long c_animation_data_sizes::get_old_movement_data_offset(void) const
//{
//    mangled_ppc("?get_old_movement_data_offset@c_animation_data_sizes@@QBAJXZ");
//};

//public: long c_animation_data_sizes::get_old_pill_offset_data_offset(void) const
//{
//    mangled_ppc("?get_old_pill_offset_data_offset@c_animation_data_sizes@@QBAJXZ");
//};

//public: long c_animation_data_sizes::get_old_default_data_offset(void) const
//{
//    mangled_ppc("?get_old_default_data_offset@c_animation_data_sizes@@QBAJXZ");
//};

//public: long c_animation_data_sizes::get_old_uncompressed_data_offset(void) const
//{
//    mangled_ppc("?get_old_uncompressed_data_offset@c_animation_data_sizes@@QBAJXZ");
//};

//public: long c_animation_data_sizes::get_old_compressed_data_offset(void) const
//{
//    mangled_ppc("?get_old_compressed_data_offset@c_animation_data_sizes@@QBAJXZ");
//};

//public: long c_animation_data_sizes::get_old_total_size(void) const
//{
//    mangled_ppc("?get_old_total_size@c_animation_data_sizes@@QBAJXZ");
//};

//long align_animation_offset(long)
//{
//    mangled_ppc("?align_animation_offset@@YAJJ@Z");
//};

//public: void c_model_animation_graph::reset_to_default_compression_settings(void)
//{
//    mangled_ppc("?reset_to_default_compression_settings@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::build_left_arm_node_flags(void)
//{
//    mangled_ppc("?build_left_arm_node_flags@c_model_animation_graph@@QAAXXZ");
//};

//void set_left_arm_node_flags_recursive(class c_model_animation_graph *, long)
//{
//    mangled_ppc("?set_left_arm_node_flags_recursive@@YAXPAVc_model_animation_graph@@J@Z");
//};

//private: void c_model_animation_graph::build_runtime_arm_node_bit_vectors(void)
//{
//    mangled_ppc("?build_runtime_arm_node_bit_vectors@c_model_animation_graph@@AAAXXZ");
//};

//private: void c_model_animation_graph::build_user_node_masks(void)
//{
//    mangled_ppc("?build_user_node_masks@c_model_animation_graph@@AAAXXZ");
//};

//public: void c_model_animation_graph::validate_displacement_and_pivot_data(long)
//{
//    mangled_ppc("?validate_displacement_and_pivot_data@c_model_animation_graph@@QAAXJ@Z");
//};

//public: void c_model_animation::set_frame_info_type(class c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_frame_info_type@c_model_animation@@QAAXV?$c_enum@W4e_animation_frame_info_types@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_model_animation_graph::extract_displacment_and_pivot_data(void)
//{
//    mangled_ppc("?extract_displacment_and_pivot_data@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation::set_movement_heading(union vector3d *)
//{
//    mangled_ppc("?set_movement_heading@c_model_animation@@QAAXPATvector3d@@@Z");
//};

//public: void c_model_animation::set_average_translation_magnitude(float)
//{
//    mangled_ppc("?set_average_translation_magnitude@c_model_animation@@QAAXM@Z");
//};

//public: void c_model_animation::set_total_angular_offset(float)
//{
//    mangled_ppc("?set_total_angular_offset@c_model_animation@@QAAXM@Z");
//};

//public: void c_model_animation_graph::pin_loop_frame_indices(void)
//{
//    mangled_ppc("?pin_loop_frame_indices@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation::set_loop_frame_index(short)
//{
//    mangled_ppc("?set_loop_frame_index@c_model_animation@@QAAXF@Z");
//};

//public: struct s_additional_node_data const * c_model_animation_graph::get_additional_node_data(long) const
//{
//    mangled_ppc("?get_additional_node_data@c_model_animation_graph@@QBAPBUs_additional_node_data@@J@Z");
//};

//public: bool c_model_animation_graph::prepare_animation_data_for_use(long, bool)
//{
//    mangled_ppc("?prepare_animation_data_for_use@c_model_animation_graph@@QAA_NJ_N@Z");
//};

//public: void c_model_animation_graph::get_graph_and_animation(class c_animation_id, class c_model_animation_graph const **, class c_model_animation const **) const
//{
//    mangled_ppc("?get_graph_and_animation@c_model_animation_graph@@QBAXVc_animation_id@@PAPBV1@PAPBVc_model_animation@@@Z");
//};

//public: class c_model_animation_graph const * c_model_animation::get_shared_animation_graph(void) const
//{
//    mangled_ppc("?get_shared_animation_graph@c_model_animation@@QBAPBVc_model_animation_graph@@XZ");
//};

//public: void c_model_animation_graph::get_writable_graph_and_animation(class c_animation_id, class c_model_animation_graph **, class c_model_animation **)
//{
//    mangled_ppc("?get_writable_graph_and_animation@c_model_animation_graph@@QAAXVc_animation_id@@PAPAV1@PAPAVc_model_animation@@@Z");
//};

//public: class c_model_animation_graph * c_model_animation::get_writable_shared_animation_graph(void) const
//{
//    mangled_ppc("?get_writable_shared_animation_graph@c_model_animation@@QBAPAVc_model_animation_graph@@XZ");
//};

//private: bool c_model_animation_graph::test_inheritance_list(void) const
//{
//    mangled_ppc("?test_inheritance_list@c_model_animation_graph@@ABA_NXZ");
//};

//public: bool c_model_animation_graph::get_animation_data(class c_animation_id, class c_animation_data *) const
//{
//    mangled_ppc("?get_animation_data@c_model_animation_graph@@QBA_NVc_animation_id@@PAVc_animation_data@@@Z");
//};

//public: unsigned char c_model_animation::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_model_animation@@QBAEXZ");
//};

//public: bool c_model_animation_graph::get_local_animation_data(class c_model_animation const *, class c_animation_data *) const
//{
//    mangled_ppc("?get_local_animation_data@c_model_animation_graph@@QBA_NPBVc_model_animation@@PAVc_animation_data@@@Z");
//};

//private: bool c_model_animation_graph::are_local_animation_resources_available(void) const
//{
//    mangled_ppc("?are_local_animation_resources_available@c_model_animation_graph@@ABA_NXZ");
//};

//private: bool c_model_animation_graph::is_local_member_of_resource_member_available(long, long) const
//{
//    mangled_ppc("?is_local_member_of_resource_member_available@c_model_animation_graph@@ABA_NJJ@Z");
//};

//private: class c_model_animation_tag_refrence_counted_resource const * c_model_animation_graph::get_local_resource(long) const
//{
//    mangled_ppc("?get_local_resource@c_model_animation_graph@@ABAPBVc_model_animation_tag_refrence_counted_resource@@J@Z");
//};

//private: class c_model_animation_tag_refrence_counted_resource * c_model_animation_graph::get_local_writable_resource(long)
//{
//    mangled_ppc("?get_local_writable_resource@c_model_animation_graph@@AAAPAVc_model_animation_tag_refrence_counted_resource@@J@Z");
//};

//private: class c_model_animation_tag_resource_member const * c_model_animation_graph::get_local_member_of_resource(long, long) const
//{
//    mangled_ppc("?get_local_member_of_resource@c_model_animation_graph@@ABAPBVc_model_animation_tag_resource_member@@JJ@Z");
//};

//private: class c_model_animation_tag_resource_member * c_model_animation_graph::get_local_writable_member_of_resource(long, long)
//{
//    mangled_ppc("?get_local_writable_member_of_resource@c_model_animation_graph@@AAAPAVc_model_animation_tag_resource_member@@JJ@Z");
//};

//public: bool c_model_animation_graph::are_animation_resources_available(void) const
//{
//    mangled_ppc("?are_animation_resources_available@c_model_animation_graph@@QBA_NXZ");
//};

//public: bool c_model_animation_graph::is_animation_resource_available(class c_animation_id) const
//{
//    mangled_ppc("?is_animation_resource_available@c_model_animation_graph@@QBA_NVc_animation_id@@@Z");
//};

//public: class c_model_animation_tag_resource_member const * c_model_animation_graph::get_resource_member(class c_animation_id) const
//{
//    mangled_ppc("?get_resource_member@c_model_animation_graph@@QBAPBVc_model_animation_tag_resource_member@@Vc_animation_id@@@Z");
//};

//public: class c_model_animation_tag_resource_member * c_model_animation_graph::get_writable_resource_member(class c_animation_id)
//{
//    mangled_ppc("?get_writable_resource_member@c_model_animation_graph@@QAAPAVc_model_animation_tag_resource_member@@Vc_animation_id@@@Z");
//};

//public: short c_model_animation_graph::find_animation_tag_resource_index_from_resource_handle(long) const
//{
//    mangled_ppc("?find_animation_tag_resource_index_from_resource_handle@c_model_animation_graph@@QBAFJ@Z");
//};

//public: bool c_model_animation_graph::animation_contains_data(class c_animation_id, enum e_internal_data_type) const
//{
//    mangled_ppc("?animation_contains_data@c_model_animation_graph@@QBA_NVc_animation_id@@W4e_internal_data_type@@@Z");
//};

//public: bool c_model_animation_graph::animation_data_resize(class c_animation_id, struct dynamic_array const *, enum e_internal_data_type)
//{
//    mangled_ppc("?animation_data_resize@c_model_animation_graph@@QAA_NVc_animation_id@@PBUdynamic_array@@W4e_internal_data_type@@@Z");
//};

//public: void c_animation_data_sizes::clone_from(class c_animation_data_sizes const &)
//{
//    mangled_ppc("?clone_from@c_animation_data_sizes@@QAAXABV1@@Z");
//};

//public: enum e_internal_data_type c_animation_data_sizes::get_first_available_data_type(void) const
//{
//    mangled_ppc("?get_first_available_data_type@c_animation_data_sizes@@QBA?AW4e_internal_data_type@@XZ");
//};

//void append_data_to_buffer(char *&, char const *, long)
//{
//    mangled_ppc("?append_data_to_buffer@@YAXAAPADPBDJ@Z");
//};

//public: bool c_model_animation_graph::animation_insert_flags_data(class c_animation_id, enum e_internal_data_type, unsigned long *, unsigned long *, unsigned long *, long)
//{
//    mangled_ppc("?animation_insert_flags_data@c_model_animation_graph@@QAA_NVc_animation_id@@W4e_internal_data_type@@PAK22J@Z");
//};

//public: bool c_model_animation_graph::animation_insert_data(class c_animation_id, enum e_internal_data_type, struct dynamic_array const *)
//{
//    mangled_ppc("?animation_insert_data@c_model_animation_graph@@QAA_NVc_animation_id@@W4e_internal_data_type@@PBUdynamic_array@@@Z");
//};

//public: void c_model_animation_graph::animation_strip_data(class c_animation_id, enum e_internal_data_type)
//{
//    mangled_ppc("?animation_strip_data@c_model_animation_graph@@QAAXVc_animation_id@@W4e_internal_data_type@@@Z");
//};

//public: bool c_model_animation_graph::animation_validate_old_uncompressed_data(class c_animation_id)
//{
//    mangled_ppc("?animation_validate_old_uncompressed_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z");
//};

//public: bool c_animation_data::node_contains_animated_rotation_data(short) const
//{
//    mangled_ppc("?node_contains_animated_rotation_data@c_animation_data@@QBA_NF@Z");
//};

//public: unsigned long const * c_animation_data::get_animated_rotation_flags(void) const
//{
//    mangled_ppc("?get_animated_rotation_flags@c_animation_data@@QBAPBKXZ");
//};

//public: bool c_animation_data::node_contains_animated_scale_data(short) const
//{
//    mangled_ppc("?node_contains_animated_scale_data@c_animation_data@@QBA_NF@Z");
//};

//public: unsigned long const * c_animation_data::get_animated_scale_flags(void) const
//{
//    mangled_ppc("?get_animated_scale_flags@c_animation_data@@QBAPBKXZ");
//};

//public: bool c_model_animation_graph::animation_validate_old_static_data(class c_animation_id)
//{
//    mangled_ppc("?animation_validate_old_static_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z");
//};

//public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)
//{
//    mangled_ppc("?animation_convert_uncompressed_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z");
//};

//public: void c_quantized_quaternion_8byte::decompress(struct real32_quaternion *) const
//{
//    mangled_ppc("?decompress@c_quantized_quaternion_8byte@@QBAXPAUreal32_quaternion@@@Z");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//struct __vector4 XMVectorFalseInt(void)
//{
//    mangled_ppc("?XMVectorFalseInt@@YA?AU__vector4@@XZ");
//};

//public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)
//{
//    mangled_ppc("?animation_convert_static_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z");
//};

//public: long c_model_animation_graph::create_new_animation_resource(long)
//{
//    mangled_ppc("?create_new_animation_resource@c_model_animation_graph@@QAAJJ@Z");
//};

//public: void c_model_animation_graph::move_animation_into_resource_from_graph_location(class c_animation_id, long, long)
//{
//    mangled_ppc("?move_animation_into_resource_from_graph_location@c_model_animation_graph@@QAAXVc_animation_id@@JJ@Z");
//};

//public: void c_model_animation::set_resource_index(short)
//{
//    mangled_ppc("?set_resource_index@c_model_animation@@QAAXF@Z");
//};

//public: void c_model_animation::set_resource_member_index(short)
//{
//    mangled_ppc("?set_resource_member_index@c_model_animation@@QAAXF@Z");
//};

//public: void c_model_animation_graph::move_animation_into_resource_from_list(class c_animation_id, long)
//{
//    mangled_ppc("?move_animation_into_resource_from_list@c_model_animation_graph@@QAAXVc_animation_id@@J@Z");
//};

//public: void c_model_animation_graph::move_overlay_group_animations_into_resource(long, long, long)
//{
//    mangled_ppc("?move_overlay_group_animations_into_resource@c_model_animation_graph@@QAAXJJJ@Z");
//};

//private: void c_model_animation_graph::sort_animations_into_resource_groups_by_graph_location(void)
//{
//    mangled_ppc("?sort_animations_into_resource_groups_by_graph_location@c_model_animation_graph@@AAAXXZ");
//};

//private: void c_model_animation_graph::sort_animations_into_resource_groups_by_sharing_status(void)
//{
//    mangled_ppc("?sort_animations_into_resource_groups_by_sharing_status@c_model_animation_graph@@AAAXXZ");
//};

//public: long c_model_animation::get_shared_id(void) const
//{
//    mangled_ppc("?get_shared_id@c_model_animation@@QBAJXZ");
//};

//public: void c_model_animation_graph::sort_animations_into_resource_groups(void)
//{
//    mangled_ppc("?sort_animations_into_resource_groups@c_model_animation_graph@@QAAXXZ");
//};

//public: void c_model_animation_graph::old_sort_animations_into_resource_groups(void)
//{
//    mangled_ppc("?old_sort_animations_into_resource_groups@c_model_animation_graph@@QAAXXZ");
//};

//void animation_group_sorting_callback(class c_model_animation_graph *, class c_model_animation *, class c_animation_id *, class c_enum<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>, long, long)
//{
//    mangled_ppc("?animation_group_sorting_callback@@YAXPAVc_model_animation_graph@@PAVc_model_animation@@PAVc_animation_id@@V?$c_enum@W4e_animation_graph_location@@D$0A@$08Us_default_enum_string_resolver@@@@JJ@Z");
//};

//public: void c_model_animation_graph::remove_bad_fik_anchor_nodes(class c_animation_id)
//{
//    mangled_ppc("?remove_bad_fik_anchor_nodes@c_model_animation_graph@@QAAXVc_animation_id@@@Z");
//};

//public: struct s_tag_block & c_model_animation::get_writable_fik_anchor_nodes(void)
//{
//    mangled_ppc("?get_writable_fik_anchor_nodes@c_model_animation@@QAAAAUs_tag_block@@XZ");
//};

//public: struct s_tag_block const & c_model_animation::get_fik_anchor_nodes(void) const
//{
//    mangled_ppc("?get_fik_anchor_nodes@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//public: void c_model_animation_graph::compute_velocity_boundaries(long)
//{
//    mangled_ppc("?compute_velocity_boundaries@c_model_animation_graph@@QAAXJ@Z");
//};

//public: bool c_model_animation_graph::should_recompress(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, bool) const
//{
//    mangled_ppc("?should_recompress@c_model_animation_graph@@QBA_NV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@0_N@Z");
//};

//bool compression_setting_equals_forced(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, class c_enum<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?compression_setting_equals_forced@@YA_NV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@V?$c_enum@W4e_animation_compression_force_settings@@F$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> c_model_animation_graph::get_desired_compression(class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>, bool) const
//{
//    mangled_ppc("?get_desired_compression@c_model_animation_graph@@QBA?AV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@V2@_N@Z");
//};

//class c_enum<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver> compression_settings_from_forced(class c_enum<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?compression_settings_from_forced@@YA?AV?$c_enum@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@V?$c_enum@W4e_animation_compression_force_settings@@F$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//private: bool c_model_animation_graph::validate_resource_group_linkage(void)
//{
//    mangled_ppc("?validate_resource_group_linkage@c_model_animation_graph@@AAA_NXZ");
//};

//private: void c_model_animation_graph::update_resource_reference_counts(void)
//{
//    mangled_ppc("?update_resource_reference_counts@c_model_animation_graph@@AAAXXZ");
//};

//private: void c_model_animation_graph::purge_unused_resources(void)
//{
//    mangled_ppc("?purge_unused_resources@c_model_animation_graph@@AAAXXZ");
//};

//private: void c_model_animation_graph::purge_unused_references(void)
//{
//    mangled_ppc("?purge_unused_references@c_model_animation_graph@@AAAXXZ");
//};

//public: bool c_enum_no_init<enum e_animation_compression_settings, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_animation_compression_settings) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_compression_settings@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_animation_compression_settings@@@Z");
//};

//public: enum e_animation_compression_force_settings c_enum_no_init<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_animation_compression_force_settings(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_compression_force_settings@@F$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_animation_compression_force_settings@@XZ");
//};

//public: bool c_enum_no_init<enum e_animation_compression_force_settings, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_animation_compression_force_settings) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_compression_force_settings@@F$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_animation_compression_force_settings@@@Z");
//};

//public: array_template<unsigned char>::array_template<unsigned char>(void)
//{
//    mangled_ppc("??0?$array_template@E@@QAA@XZ");
//};

//public: unsigned char * array_template<unsigned char>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@E@@QAAPAEXZ");
//};

//public: void array_template<unsigned char>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@E@@QAAXJ@Z");
//};

//public: void array_template<unsigned char>::append(void const *, long)
//{
//    mangled_ppc("?append@?$array_template@E@@QAAXPBXJ@Z");
//};

//public: void array_template<unsigned char>::append(unsigned char const *, long)
//{
//    mangled_ppc("?append@?$array_template@E@@QAAXPBEJ@Z");
//};

//public: void array_template<unsigned char>::append(struct array_template<unsigned char> const *)
//{
//    mangled_ppc("?append@?$array_template@E@@QAAXPBU1@@Z");
//};

//public: c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::c_enum<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::operator==(enum e_animation_frame_event_types) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@QBA_NW4e_animation_frame_event_types@@@Z");
//};

//public: enum e_foot_tracking_defaults c_enum_no_init<enum e_foot_tracking_defaults, short, 0, 2, struct s_default_enum_string_resolver>::operator enum e_foot_tracking_defaults(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_foot_tracking_defaults@@F$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_foot_tracking_defaults@@XZ");
//};

//public: enum e_animation_ik_chain_types c_enum_no_init<enum e_animation_ik_chain_types, short, 0, 1, struct s_default_enum_string_resolver>::operator enum e_animation_ik_chain_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_ik_chain_types@@F$0A@$00Us_default_enum_string_resolver@@@@QBA?AW4e_animation_ik_chain_types@@XZ");
//};

//public: bool c_enum_no_init<enum e_animation_ik_chain_types, short, 0, 1, struct s_default_enum_string_resolver>::operator==(enum e_animation_ik_chain_types) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_ik_chain_types@@F$0A@$00Us_default_enum_string_resolver@@@@QBA_NW4e_animation_ik_chain_types@@@Z");
//};

//public: enum e_animation_ranged_action_variable_source c_enum_no_init<enum e_animation_ranged_action_variable_source, short, 0, 7, struct s_default_enum_string_resolver>::operator enum e_animation_ranged_action_variable_source(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_ranged_action_variable_source@@F$0A@$06Us_default_enum_string_resolver@@@@QBA?AW4e_animation_ranged_action_variable_source@@XZ");
//};

//public: c_enum<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>(enum e_animation_gait_directions)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_gait_directions@@F$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_animation_gait_directions@@@Z");
//};

//public: class c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver> c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::operator++(int)
//{
//    mangled_ppc("??E?$c_enum_no_init@W4e_animation_gait_directions@@F$0A@$05Us_default_enum_string_resolver@@@@QAA?AV0@H@Z");
//};

//public: bool c_enum_no_init<enum e_animation_node_usage, short, 0, 22, struct s_default_enum_string_resolver>::operator==(enum e_animation_node_usage) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_node_usage@@F$0A@$0BG@Us_default_enum_string_resolver@@@@QBA_NW4e_animation_node_usage@@@Z");
//};

//public: c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>(enum e_animation_frame_info_types)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_frame_info_types@@D$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_animation_frame_info_types@@@Z");
//};

//public: bool c_enum_no_init<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_animation_frame_info_types) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_frame_info_types@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_animation_frame_info_types@@@Z");
//};

//public: c_triangulation<256>::c_triangulation<256>(void)
//{
//    mangled_ppc("??0?$c_triangulation@$0BAA@@@QAA@XZ");
//};

//public: c_triangulation<256>::~c_triangulation<256>(void)
//{
//    mangled_ppc("??1?$c_triangulation@$0BAA@@@QAA@XZ");
//};

//public: array_template<union real_point2d>::array_template<union real_point2d>(void)
//{
//    mangled_ppc("??0?$array_template@Treal_point2d@@@@QAA@XZ");
//};

//public: array_template<union real_point2d>::~array_template<union real_point2d>(void)
//{
//    mangled_ppc("??1?$array_template@Treal_point2d@@@@QAA@XZ");
//};

//public: union real_point2d * array_template<union real_point2d>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Treal_point2d@@@@QAAPATreal_point2d@@XZ");
//};

//public: union real_point2d * array_template<union real_point2d>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Treal_point2d@@@@QAAPATreal_point2d@@J@Z");
//};

//public: void array_template<union real_point2d>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Treal_point2d@@@@QAAXJ@Z");
//};

//public: unsigned int array_template<union real_point2d>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Treal_point2d@@@@QBAIXZ");
//};

//public: array_template<struct s_delaunay_triangle>::array_template<struct s_delaunay_triangle>(void)
//{
//    mangled_ppc("??0?$array_template@Us_delaunay_triangle@@@@QAA@XZ");
//};

//public: array_template<struct s_delaunay_triangle>::~array_template<struct s_delaunay_triangle>(void)
//{
//    mangled_ppc("??1?$array_template@Us_delaunay_triangle@@@@QAA@XZ");
//};

//public: struct s_delaunay_triangle * array_template<struct s_delaunay_triangle>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_delaunay_triangle@@@@QAAPAUs_delaunay_triangle@@J@Z");
//};

//public: unsigned int array_template<struct s_delaunay_triangle>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_delaunay_triangle@@@@QBAIXZ");
//};

//public: std::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >(void)
//{
//    mangled_ppc("??0?$map@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@@std@@QAA@XZ");
//};

//public: long & std::map<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> > >::operator[](long const &)
//{
//    mangled_ppc("??A?$map@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@@std@@QAAAAJABJ@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::find(long const &)
//{
//    mangled_ppc("?find@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@ABJ@Z");
//};

//public: long const * array_template<long>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$array_template@J@@QBAPBJJ@Z");
//};

//public: long * array_template<long>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@J@@QAAPAJJ@Z");
//};

//public: long array_template<long>::append(long const &)
//{
//    mangled_ppc("?append@?$array_template@J@@QAAJABJ@Z");
//};

//public: void array_template<long>::clear(void)
//{
//    mangled_ppc("?clear@?$array_template@J@@QAAXXZ");
//};

//public: void array_template<long>::copy_from(struct array_template<long> const *)
//{
//    mangled_ppc("?copy_from@?$array_template@J@@QAAXPBU1@@Z");
//};

//public: void array_template<long>::append(struct array_template<long> const *)
//{
//    mangled_ppc("?append@?$array_template@J@@QAAXPBU1@@Z");
//};

//public: long array_template<long>::slow_brute_force_search(long *)
//{
//    mangled_ppc("?slow_brute_force_search@?$array_template@J@@QAAJPAJ@Z");
//};

//public: long const * array_template<long>::begin(void) const
//{
//    mangled_ppc("?begin@?$array_template@J@@QBAPBJXZ");
//};

//public: long const * array_template<long>::end(void) const
//{
//    mangled_ppc("?end@?$array_template@J@@QBAPBJXZ");
//};

//public: unsigned int array_template<long>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@J@@QBAIXZ");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::iterator(void)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::pair<long const, long> * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBAPAU?$pair@$$CBJJ@2@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: void s_static_array<short, 4>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@F$03@@QAAXJ@Z");
//};

//?sort_range@?$s_static_array@F$03@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@F$03@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: struct s_graph_animation_and_uid & std::map<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> > >::operator[](long const &)
//{
//    mangled_ppc("??A?$map@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@@std@@QAAAAUs_graph_animation_and_uid@@ABJ@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::find(long const &)
//{
//    mangled_ppc("?find@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@ABJ@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::iterator(void)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::pair<long const, struct s_graph_animation_and_uid> * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBAPAU?$pair@$$CBJUs_graph_animation_and_uid@@@2@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: unsigned long & array_template<unsigned long>::operator[](long)
//{
//    mangled_ppc("??A?$array_template@K@@QAAAAKJ@Z");
//};

//public: void s_static_array<long, 64>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0EA@@@QAAXABJ@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>(struct std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@$$CBJJ@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>(struct std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::~_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJUs_graph_animation_and_uid@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>::~_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>(void)
//{
//    mangled_ppc("??1?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@QAA@XZ");
//};

//public: unsigned char const * array_template<unsigned char>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$array_template@E@@QBAPBEXZ");
//};

//public: unsigned char * array_template<unsigned char>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@E@@QAAPAEJ@Z");
//};

//public: void array_template<unsigned char>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@E@@QAAXJJ@Z");
//};

//public: long array_template<unsigned char>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@E@@QAAJJ@Z");
//};

//public: void array_template<union real_point2d>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Treal_point2d@@@@QAAXJJ@Z");
//};

//public: void array_template<struct s_delaunay_triangle>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_delaunay_triangle@@@@QAAXJ@Z");
//};

//protected: static long const & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAABJPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@ABU?$less@J@1@ABV?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::insert(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator, struct std::pair<long const, long> const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBJJ@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::lower_bound(long const &)
//{
//    mangled_ppc("?lower_bound@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@ABJ@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAXXZ");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@$$CBJJ@std@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct std::pair<long const, long> >::allocator<struct std::pair<long const, long> >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@$$CBJJ@std@@@std@@QAA@XZ");
//};

//public: bool std::less<long>::operator()(long const &, long const &) const
//{
//    mangled_ppc("??R?$less@J@std@@QBA_NABJ0@Z");
//};

//public: long const * array_template<long>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$array_template@J@@QBAPBJXZ");
//};

//public: long array_template<long>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@J@@QAAJXZ");
//};

//public: void array_template<long>::append(long const *, long)
//{
//    mangled_ppc("?append@?$array_template@J@@QAAXPBJJ@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<long const, long> & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBAAAU?$pair@$$CBJJ@2@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::const_iterator(void)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@3@XZ");
//};

//public: std::pair<long const, long>::pair<long const, long>(long const &, long const &)
//{
//    mangled_ppc("??0?$pair@$$CBJJ@std@@QAA@ABJ0@Z");
//};

//protected: static long const & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAABJPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::insert(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator, struct std::pair<long const, struct s_graph_animation_and_uid> const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::lower_bound(long const &)
//{
//    mangled_ppc("?lower_bound@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@ABJ@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<long const, struct s_graph_animation_and_uid> & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBAAAU?$pair@$$CBJUs_graph_animation_and_uid@@@2@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::const_iterator(void)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@3@XZ");
//};

//public: std::pair<long const, struct s_graph_animation_and_uid>::pair<long const, struct s_graph_animation_and_uid>(long const &, struct s_graph_animation_and_uid const &)
//{
//    mangled_ppc("??0?$pair@$$CBJUs_graph_animation_and_uid@@@std@@QAA@ABJABUs_graph_animation_and_uid@@@Z");
//};

//public: unsigned long & array_template<unsigned long>::element(long)
//{
//    mangled_ppc("?element@?$array_template@K@@QAAAAKJ@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>::_Bidit<struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@$$CBJJ@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>::_Bidit<struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, long>, int, struct std::pair<long const, long> const *, struct std::pair<long const, long> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long const, struct s_graph_animation_and_uid>, int, struct std::pair<long const, struct s_graph_animation_and_uid> const *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@$$CBJUs_graph_animation_and_uid@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//protected: void array_template<unsigned char>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@E@@IBAXXZ");
//};

//public: long array_template<unsigned char>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@E@@QAAJJJ@Z");
//};

//protected: void array_template<union real_point2d>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Treal_point2d@@@@IBAXXZ");
//};

//public: void array_template<struct s_delaunay_triangle>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_delaunay_triangle@@@@QAAXJJ@Z");
//};

//public: s_delaunay_triangle::s_delaunay_triangle(void)
//{
//    mangled_ppc("??0s_delaunay_triangle@@QAA@XZ");
//};

//public: void s_delaunay_triangle::set(long, long, long)
//{
//    mangled_ppc("?set@s_delaunay_triangle@@QAAXJJJ@Z");
//};

//public: void s_delaunay_triangle::unlink(void)
//{
//    mangled_ppc("?unlink@s_delaunay_triangle@@QAAXXZ");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::pair<long const, long> & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAAAU?$pair@$$CBJJ@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::size(void) const
//{
//    mangled_ppc("?size@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBAIXZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::insert(struct std::pair<long const, long> const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBJJ@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAXXZ");
//};

//protected: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::pair<long const, long> const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBJJ@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Lbound(long const &) const
//{
//    mangled_ppc("?_Lbound@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@ABJ@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: std::_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree_val<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAA@ABU?$less@J@1@V?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//public: static long const & std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>::_Kfn(struct std::pair<long const, long> const &)
//{
//    mangled_ppc("?_Kfn@?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@SAABJABU?$pair@$$CBJJ@2@@Z");
//};

//public: std::allocator<struct std::pair<long const, long> >::allocator<struct std::pair<long const, long> >(class std::allocator<struct std::pair<long const, long> > const &)
//{
//    mangled_ppc("??0?$allocator@U?$pair@$$CBJJ@std@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//public: long array_template<long>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@J@@QAAJJ@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<long const, long> const & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBAABU?$pair@$$CBJJ@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::pair<long const, struct s_graph_animation_and_uid> & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAAAU?$pair@$$CBJUs_graph_animation_and_uid@@@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::size(void) const
//{
//    mangled_ppc("?size@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBAIXZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::insert(struct std::pair<long const, struct s_graph_animation_and_uid> const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@@Z");
//};

//protected: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::pair<long const, struct s_graph_animation_and_uid> const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Lbound(long const &) const
//{
//    mangled_ppc("?_Lbound@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@ABJ@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@XZ");
//};

//public: static long const & std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0>::_Kfn(struct std::pair<long const, struct s_graph_animation_and_uid> const &)
//{
//    mangled_ppc("?_Kfn@?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@SAABJABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<long const, struct s_graph_animation_and_uid> const & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBAABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//protected: void array_template<struct s_delaunay_triangle>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_delaunay_triangle@@@@IBAXXZ");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::pair<long const, long> const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBJJ@2@D@Z");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree_ptr<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@ABU?$less@J@1@V?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//public: long array_template<long>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@J@@QAAJJJ@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: bool std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QBAIXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@D@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAXXZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAAXXZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@1@AB_N@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@1@AB_N@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >(struct std::less<long> const &, class std::allocator<struct std::pair<long const, long> >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@IAA@ABU?$less@J@1@V?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//public: unsigned int std::allocator<struct std::pair<long const, long> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@$$CBJJ@std@@@std@@QBAIXZ");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@2@ABQAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//public: unsigned int std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@std@@QBAIXZ");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@I@Z");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@2@I@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::pair<long const, long> const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@$$CBJJ@2@D@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *, struct std::pair<long const, struct s_graph_animation_and_uid> const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@$$CBJUs_graph_animation_and_uid@@@2@D@Z");
//};

//public: std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0>(struct std::less<long>, class std::allocator<struct std::pair<long const, long> >)
//{
//    mangled_ppc("??0?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@QAA@U?$less@J@1@V?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<long const, long> > >(class std::allocator<struct std::pair<long const, long> >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@$$CBJJ@std@@@std@@@std@@IAA@V?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_animation_production_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_production_flags@@G$02Us_default_enum_string_resolver@@@@QBA_NW4e_animation_production_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_animation_internal_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_animation_internal_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_internal_flags@@G$09Us_default_enum_string_resolver@@@@QAAXW4e_animation_internal_flags@@_N@Z");
//};

//public: bool c_triangulation<256>::calculate(union real_point2d const *, long)
//{
//    mangled_ppc("?calculate@?$c_triangulation@$0BAA@@@QAA_NPBTreal_point2d@@J@Z");
//};

//public: short & s_static_array<short, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$03@@QAAAAFJ@Z");
//};

//public: long & s_static_array<long, 64>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@J$0EA@@@QAAAAJH@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<long>, long, long>(struct std::less<long>, long const &, long const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@J@std@@JJ@std@@YA_NU?$less@J@0@ABJ1PB_WI@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@0@@Z");
//};

//void std::swap<char>(char &, char &)
//{
//    mangled_ppc("??$swap@D@std@@YAXAAD0@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>::ctor<struct std::pair<long const, long> >(class std::allocator<struct std::pair<long const, long> > const &)
//{
//    mangled_ppc("??$?0U?$pair@$$CBJJ@std@@@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>::ctor<struct std::pair<long const, long> >(class std::allocator<struct std::pair<long const, long> > const &)
//{
//    mangled_ppc("??$?0U?$pair@$$CBJJ@std@@@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@$$CBJJ@std@@@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@0@IPAU120@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@0@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<long, long, struct std::less<long>, class std::allocator<struct std::pair<long const, long> >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JJU?$less@J@std@@V?$allocator@U?$pair@$$CBJJ@std@@@2@$0A@@std@@@0@ABQAU120@@Z");
//};

//struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<long, struct s_graph_animation_and_uid, struct std::less<long>, class std::allocator<struct std::pair<long const, struct s_graph_animation_and_uid> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@JUs_graph_animation_and_uid@@U?$less@J@std@@V?$allocator@U?$pair@$$CBJUs_graph_animation_and_uid@@@std@@@3@$0A@@std@@@0@IPAU120@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_production_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_production_flags@@G$02Us_default_enum_string_resolver@@@@SA_NW4e_animation_production_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_animation_production_flags, unsigned short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_production_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_production_flags@@G$02Us_default_enum_string_resolver@@@@CAGW4e_animation_production_flags@@@Z");
//};

//public: static bool s_static_array<short, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 64>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@J$0EA@@@SA_NH@Z");
//};

//public: array_template<unsigned char>::~array_template<unsigned char>(void)
//{
//    mangled_ppc("??1?$array_template@E@@QAA@XZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::new_uncompressed_data::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fnew_uncompressed_data@?BE@??animation_convert_uncompressed_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::uncompressed_scale_arrays::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Funcompressed_scale_arrays@?BE@??animation_convert_uncompressed_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::uncompressed_translation_arrays::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Funcompressed_translation_arrays@?BE@??animation_convert_uncompressed_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_uncompressed_data(class c_animation_id)'::`20'::uncompressed_rotation_arrays::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Funcompressed_rotation_arrays@?BE@??animation_convert_uncompressed_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::new_static_data::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fnew_static_data@?BE@??animation_convert_static_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::static_scale_arrays::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fstatic_scale_arrays@?BE@??animation_convert_static_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::static_translation_arrays::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fstatic_translation_arrays@?BE@??animation_convert_static_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

//void `public: bool c_model_animation_graph::animation_convert_static_data(class c_animation_id)'::`20'::static_rotation_arrays::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fstatic_rotation_arrays@?BE@??animation_convert_static_data@c_model_animation_graph@@QAA_NVc_animation_id@@@Z@YAXXZ");
//};

