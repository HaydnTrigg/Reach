/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_big_flags_typed_no_init<long, 20000>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0EOCA@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 20000>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0EOCA@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 6136>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0BHPI@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 6136>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0BHPI@@@2JB"
// long volatile `private: enum e_game_resource_attachment_type __cdecl c_scenario_bsp_attachment_visitor::get_attachment_type(struct scenario *, struct s_scenario_object const *)'::`9'::x_event_category_index; // "?x_event_category_index@?8??get_attachment_type@c_scenario_bsp_attachment_visitor@@AAA?AW4e_game_resource_attachment_type@@PAUscenario@@PBUs_scenario_object@@@Z@4JC"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 6136>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0BHPI@@@QAAXXZ@4JC"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 32>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0CA@@@QAAXXZ@4JC"
// class s_static_array<long, 14> g_scenario_object_offsets; // "?g_scenario_object_offsets@@3V?$s_static_array@J$0O@@@A"
// bool g_skies_delete_on_zone_set_switch_enable; // "?g_skies_delete_on_zone_set_switch_enable@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_object_placement_globals_allocator::*)(void *)> g_object_placement_globals_allocator; // "?g_object_placement_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@A"
// struct s_object_placement_globals *object_placement_globals; // "?object_placement_globals@@3PAUs_object_placement_globals@@A"

// class c_static_string<256> format_scenario_object_placement(long, struct s_scenario_object const *);
// void __tls_set_g_object_placement_globals_allocator(void *);
// void object_placement_initialize(void);
// void object_placement_dispose(void);
// void object_placement_initialize_for_new_map(void);
// void object_placement_dispose_from_old_map(void);
// void object_placement_initialize_for_new_structure_bsp(unsigned long);
// void object_placement_dispose_from_old_structure_bsp(unsigned long);
// void object_placement_prepare_for_new_zone_set(unsigned long, unsigned long);
// void object_placement_restore(long);
// void object_placement_mark_object_on_delete(long);
// void object_placement_mark_name_on_delete(short);
// void object_placement_mark_name_on_create(short);
// void object_placement_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// bool object_placement_is_unloaded(long);
// void object_placement_unload(long);
// void object_placement_reload(long);
// void object_placement_reset_from_teleport(long);
// bool object_placement_data_new_from_scenario_object(enum e_object_type, long, struct s_scenario_object const *, struct s_tag_block const *, bool, struct s_object_placement_data *);
// public: bool c_game_variant::is_custom_variant(void) const;
// public: long c_map_variant::find_megalo_label_string(char const *);
// long object_placement_remap_object_definition_for_game_engine(long);
// public: short c_game_engine_map_override_options::get_weapon_set_absolute_index(void) const;
// public: short c_game_engine_map_override_options::get_vehicle_set_absolute_index(void) const;
// public: class c_game_engine_map_override_options const * c_game_engine_base_variant::get_map_override_options(void) const;
// bool object_placement_allowed_by_game_engine(struct s_object_placement_data const *);
// struct s_scenario_object * find_scenario_object(enum e_object_type, long);
// void object_placement_update_object_scenario_mapping(enum e_object_type, long const *, long);
// void object_placement_update_object_scenario_names(long const *, long);
// void object_placement_synchronize_in_game(enum e_object_type, long);
// long object_placement_synchronize_in_editor(long, enum e_object_type, long, bool, bool);
// long object_placement_bsp_index_key_from_bsp_indices(long, long);
// void object_placement_deactivate_on_zone_set_switch(long);
// void object_placement_set_in_limbo(long, bool);
// bool object_can_exist_in_new_bsp_zone_set(long, struct s_scenario_object const *, unsigned long, unsigned long);
// bool object_placement_attached_to_valid_parent(struct s_scenario_object const *);
// bool object_placement_inside_structure_bsp(enum e_object_type, struct s_scenario_object const *);
// bool object_placement_inside_structure_bsp_mask(unsigned long, enum e_object_type, struct s_scenario_object const *);
// void object_placement_data_new(struct s_object_placement_data *, long, long, struct s_damage_owner const *);
// void object_placement_data_set_location(struct s_object_placement_data *, struct s_location const *);
// void object_placement_data_copy_change_colors(struct s_object_placement_data *, long);
// void object_placement_create_global_objects(enum e_game_mode, bool);
// void object_placement_create_active_zone_set_objects(enum e_object_placement_zone_set_create_mode);
// void object_placement_create_active_zone_set_skies(long, unsigned long);
// void scenario_object_update_can_place_flags_no_parent(long, unsigned long, enum e_object_type, long, struct s_scenario_object *, struct s_tag_block *);
// void scenario_object_update_can_place_flags_with_parent(struct scenario *, class c_scenario_object_placement_hierarchy *, struct s_scenario_object *);
// void scenario_object_update_can_place_flags(long, unsigned long, enum e_object_type, long, struct s_scenario_object *);
// void scenario_placement_update_bsp_attachment(long, unsigned long);
// public: c_scenario_object_placement_hierarchy::~c_scenario_object_placement_hierarchy(void);
// public: c_static_sized_dynamic_array<class c_object_identifier, 32>::~c_static_sized_dynamic_array<class c_object_identifier, 32>(void);
// public: s_static_array<class c_object_identifier, 32>::~s_static_array<class c_object_identifier, 32>(void);
// void scenario_placement_postprocess_object_names(struct scenario *, bool);
// struct s_tag_block * scenario_get_object_type_scenario_datums(struct scenario *, enum e_object_type, long *);
// struct s_tag_block const * scenario_get_object_type_scenario_datums(struct scenario const *, enum e_object_type, long *);
// struct s_tag_block * scenario_get_object_type_scenario_palette(struct scenario *, enum e_object_type);
// struct s_tag_block const * scenario_get_object_type_scenario_palette(struct scenario const *, enum e_object_type);
// struct scenario_object_palette_entry const * scenario_object_get_palette_entry(struct scenario const *, struct s_scenario_object const *);
// struct scenario_object_palette_entry * scenario_object_get_palette_entry(struct scenario *, struct s_scenario_object const *);
// long scenario_object_get_object_definition_tag_index(struct scenario const *, struct s_scenario_object const *);
// struct object_definition * scenario_object_get_object_definition(struct scenario *, struct s_scenario_object const *);
// struct s_scenario_object const * scenario_object_get(struct scenario const *, enum e_object_type, long);
// struct s_scenario_object const * scenario_object_try_and_get(struct scenario const *, enum e_object_type, long);
// bool scenario_object_can_place_once_for_active_bsps(unsigned long, struct scenario *, struct s_scenario_object const *, unsigned long);
// bool scenario_object_can_exist_in_active_bsp(enum e_object_type, struct s_scenario_object const *, unsigned long);
// public: short c_object_identifier::get_origin_bsp(void) const;
// bool object_definition_has_persistent_state(enum e_object_type, long);
// bool scenario_object_managed_by_script(struct scenario *, struct s_scenario_object const *);
// bool scenario_object_has_persistent_state(struct scenario *, struct s_scenario_object const *);
// bool object_datum_has_persistent_state(long);
// bool scenario_object_is_placed_globally(struct scenario *, struct s_scenario_object const *);
// enum e_object_bsp_placement_policy get_runtime_object_placement_policy(struct s_scenario_object const *);
// bool object_placement_find_initial_location(unsigned long, union real_point3d const *, float, struct s_location *);
// long lowest_bit_set(unsigned long);
// long lowest_bit_set_platform(unsigned long);
// bool valid_object_creation_position(unsigned long, long, union real_point3d const *, union vector3d const *, union vector3d const *, float);
// unsigned long calculate_object_creation_bsp_attachment(unsigned long, long, enum e_object_type, long, struct s_scenario_object const *, struct s_tag_block *);
// unsigned long object_placement_find_initial_location_bsp_mask(unsigned long, union real_point3d const *, float);
// void calculate_object_starting_bounding_sphere(long, union real_point3d const *, union vector3d const *, union vector3d const *, float, union real_point3d *, float *);
// float scenario_object_get_scale(struct s_scenario_object const *);
// bool object_definition_can_be_placed(long, long);
// bool object_name_can_be_placed_automatically(long);
// unsigned long scenario_object_get_manual_bsp_flags(struct s_scenario_object const *);
// void object_placement_handle_tag_changes(void);
// void object_placement_prepare_for_zone_set_reload(void);
// bool object_identifer_key_sort_proc(void const *, void const *, void const *);
// bool object_identifier_key_less_than_object_identifier(struct s_scenario_object_identifier_key const &, class c_object_identifier const &);
// void object_placement_synchronize_for_designer_zone_debugger(bool);
// public: c_scenario_object_to_object_datum_mapping::c_scenario_object_to_object_datum_mapping(long);
// public: void c_scenario_object_to_object_datum_mapping::synchronize_object_in_zone_debugger(bool);
// private: void c_scenario_object_to_object_datum_mapping::remove_dirty_objects(void);
// private: long c_scenario_object_to_object_datum_mapping::find_object_id_key(struct object_datum const *) const;
// public: s_scenario_object_identifier_key::~s_scenario_object_identifier_key(void);
// public: c_scenario_object_to_object_datum_mapping::~c_scenario_object_to_object_datum_mapping(void);
// public: c_static_stack<struct s_scenario_object_identifier_key, 6136>::~c_static_stack<struct s_scenario_object_identifier_key, 6136>(void);
// void object_placement_synchronize_scenario_indices(bool);
// public: void c_scenario_object_to_object_datum_mapping::recreate_global_objects(void);
// void object_placement_synchronize_structure_objects(void);
// long object_type_get_scenario_placement_offset(enum e_object_type);
// void scenario_objects_synchronize_parent_placement(class c_big_flags<6136> const *, struct scenario *);
// void object_placement_initialize_pvs_bound_objects(unsigned long);
// enum e_game_resource_attachment_type get_scenario_object_attachment(struct scenario *, struct s_scenario_object const *);
// void object_placement_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *);
// public: c_event_context::c_event_context(char const *, unsigned long, char const *, ...);
// public: c_event_context::~c_event_context(void);
// public: c_scenario_bsp_attachment_visitor::c_scenario_bsp_attachment_visitor(class c_scenario_object_placement_hierarchy *, class c_game_system_resource_registrar *);
// public: void c_scenario_bsp_attachment_visitor::visit_scenario_object(struct scenario *, struct s_scenario_object const *);
// public: void c_scenario_bsp_attachment_visitor::visit_sky(long);
// public: void c_scenario_bsp_attachment_visitor::visit_tag(enum e_game_resource_attachment_type, long);
// public: void c_scenario_bsp_attachment_visitor::register_tag_variant(enum e_game_resource_attachment_type, long, long);
// private: enum e_game_resource_attachment_type c_scenario_bsp_attachment_visitor::get_attachment_type(struct scenario *, struct s_scenario_object const *);
// private: void c_scenario_bsp_attachment_visitor::visit_parent_tag(enum e_game_resource_attachment_type, long);
// public: enum e_object_bsp_placement_policy c_enum_no_init<enum e_object_bsp_placement_policy, char, -1, 3, struct s_default_enum_string_resolver>::operator enum e_object_bsp_placement_policy(void) const;
// public: enum e_scenario_object_bsp_placement_policy c_enum_no_init<enum e_scenario_object_bsp_placement_policy, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_scenario_object_bsp_placement_policy(void) const;
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: c_wrapped_array<long const>::c_wrapped_array<long const>(long const *, long);
// public: long const & c_array_operator_interface<class c_wrapped_array_no_init<long const>, long const>::operator[](long);
// public: void s_static_array<long, 2048>::set_all(long const &);
// public: c_big_flags<6136>::c_big_flags<6136>(void);
// public: c_big_flags<32>::c_big_flags<32>(void);
// public: long c_static_stack<struct s_scenario_object_identifier_key, 6136>::count(void) const;
// public: void c_static_stack<struct s_scenario_object_identifier_key, 6136>::push_back(struct s_scenario_object_identifier_key const &);
// public: struct s_scenario_object_identifier_key & c_static_stack<struct s_scenario_object_identifier_key, 6136>::operator[](long);
// public: struct s_scenario_object_identifier_key * c_static_stack<struct s_scenario_object_identifier_key, 6136>::get(long);
// public: struct s_scenario_object_identifier_key * c_static_stack<struct s_scenario_object_identifier_key, 6136>::get_elements(void);
// public: struct s_scenario_object_identifier_key const * c_static_stack<struct s_scenario_object_identifier_key, 6136>::begin(void) const;
// public: struct s_scenario_object_identifier_key const * c_static_stack<struct s_scenario_object_identifier_key, 6136>::end(void) const;
// public: c_static_stack<struct s_scenario_object_identifier_key, 6136>::c_static_stack<struct s_scenario_object_identifier_key, 6136>(void);
// public: s_scenario_object_identifier_key::s_scenario_object_identifier_key(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::valid(void) const;
// public: void c_wrapped_array_no_init<long const>::set_elements(long const *, long);
// public: long const * c_wrapped_array_no_init<long const>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<long const>, long const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<long const> * c_recursive_template_pattern<class c_wrapped_array_no_init<long const> >::get_super_class(void);
// public: bool c_static_stack<struct s_scenario_object_identifier_key, 6136>::valid(long) const;
// public: long c_static_stack<struct s_scenario_object_identifier_key, 6136>::push(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<long const>, long const>::count(void) const;
// public: bool c_static_stack<struct s_scenario_object_identifier_key, 6136>::valid(void) const;
// public: bool c_static_stack<struct s_scenario_object_identifier_key, 6136>::full(void) const;
// public: long c_wrapped_array_no_init<long const>::count(void) const;
// public: class c_wrapped_array_no_init<long const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<long const> >::get_super_class(void) const;
// public: struct s_scenario_multiplayer_object_properties const * c_opaque_data<struct s_scenario_multiplayer_object_properties, 88, 4>::get_const(void) const;
// public: bool c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::test(unsigned short) const;
// public: unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::test(enum e_game_engine_type) const;
// public: bool c_flags_no_init<enum e_multiplayer_object_placement_spawn_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_multiplayer_object_placement_spawn_flags) const;
// public: long c_single_language_string_table<256, 4096>::find(struct utf8const *) const;
// public: long & s_static_array<long, 14>::operator[]<enum e_object_type>(enum e_object_type);
// public: long & s_static_array<long, 2048>::operator[]<short>(short);
// public: void c_big_flags_typed_no_init<long, 6136>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 6136>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 6136>::set(long, bool);
// public: c_big_flags_typed<long, 6136>::c_big_flags_typed<long, 6136>(void);
// public: bool c_big_flags_typed_no_init<long, 32>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 32>::set(long, bool);
// public: c_big_flags_typed<long, 32>::c_big_flags_typed<long, 32>(void);
// struct s_scenario_object_identifier_key const * std::lower_bound<struct s_scenario_object_identifier_key const *, class c_object_identifier, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier const &, class c_object_identifier_key_less_than_object_identifier);
// int std::distance<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *);
// public: struct utf8const * c_string_buffer<4096>::get(long) const;
// public: static bool c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(unsigned short);
// public: bool c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(unsigned short);
// public: static bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::valid_bit(enum e_game_engine_type);
// private: static unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::flag_size_type(enum e_game_engine_type);
// private: static unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool c_flags_no_init<enum e_multiplayer_object_placement_spawn_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_object_placement_spawn_flags);
// private: static unsigned char c_flags_no_init<enum e_multiplayer_object_placement_spawn_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_object_placement_spawn_flags);
// public: short const & s_static_array<short, 256>::operator[]<long>(long) const;
// public: static bool s_static_array<long, 14>::valid<enum e_object_type>(enum e_object_type);
// public: static bool s_static_array<long, 2048>::valid<short>(short);
// public: bool c_big_flags_typed_no_init<long, 6136>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 6136>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 6136>::valid(void) const;
// public: void c_big_flags_typed_no_init<long, 32>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 32>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 32>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 32>::valid(void) const;
// struct s_scenario_object_identifier_key const * std::_Checked_base<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *&);
// int * std::_Dist_type<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *);
// struct s_scenario_object_identifier_key const * std::_Lower_bound<struct s_scenario_object_identifier_key const *, class c_object_identifier, int, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier const &, class c_object_identifier_key_less_than_object_identifier, int *);
// void std::_Checked_assign_from_base<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *&, struct s_scenario_object_identifier_key const *const &);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *const &);
// void std::_Distance2<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, int &, struct std::random_access_iterator_tag);
// public: struct utf8const & s_static_array<struct utf8, 4096>::operator[]<long>(long) const;
// private: static unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::make_N_bit_mask_size_type(enum e_game_engine_type);
// public: static bool s_static_array<short, 256>::valid<long>(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 6136>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 32>::get_mask_of_second_slice_of_chunk_inclusive(long);
// struct s_scenario_object_identifier_key const * std::_Checked_base<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_pointer<class c_object_identifier_key_less_than_object_identifier>(class c_object_identifier_key_less_than_object_identifier &, wchar_t const *, unsigned int);
// void std::_Debug_order_single<struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier, bool, wchar_t const *, unsigned int);
// void std::_Distance<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, int &);
// void std::advance<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *&, int);
// bool std::_Debug_lt_pred<class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key, class c_object_identifier>(class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key const &, class c_object_identifier const &, wchar_t const *, unsigned int);
// public: bool c_object_identifier_key_less_than_object_identifier::operator()(struct s_scenario_object_identifier_key const &, class c_object_identifier const &) const;
// public: bool c_object_identifier_key_less_than_object_identifier::operator()(class c_object_identifier const &, struct s_scenario_object_identifier_key const &) const;
// void std::_Debug_pointer<struct s_scenario_object_identifier_key>(struct s_scenario_object_identifier_key const *, wchar_t const *, unsigned int);
// public: static bool s_static_array<struct utf8, 4096>::valid<long>(long);
// private: static unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned short);
// protected: static long c_big_flags_typed_no_init<long, 6136>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 6136>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 6136>::get_valid_mask_of_last_chunk(void);
// protected: static long c_big_flags_typed_no_init<long, 32>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 32>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 32>::get_valid_mask_of_last_chunk(void);
// void std::_Debug_order_single2<struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier, bool, wchar_t const *, unsigned int, struct std::forward_iterator_tag);
// void std::_Advance<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *&, int, struct std::random_access_iterator_tag);
// protected: static unsigned long c_big_flags_typed_no_init<long, 6136>::get_mask_of_first_slice_of_chunk_exclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 32>::get_mask_of_first_slice_of_chunk_exclusive(long);
// bool std::_Debug_lt_pred<class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key, struct s_scenario_object_identifier_key>(class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key const &, struct s_scenario_object_identifier_key const &, wchar_t const *, unsigned int);
// public: bool c_object_identifier_key_less_than_object_identifier::operator()(struct s_scenario_object_identifier_key const &, struct s_scenario_object_identifier_key const &) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>(void);
// void g_object_placement_globals_allocator::`dynamic atexit destructor'(void);

//class c_static_string<256> format_scenario_object_placement(long, struct s_scenario_object const *)
//{
//    mangled_ppc("?format_scenario_object_placement@@YA?AV?$c_static_string@$0BAA@@@JPBUs_scenario_object@@@Z");
//};

//void __tls_set_g_object_placement_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z");
//};

//void object_placement_initialize(void)
//{
//    mangled_ppc("?object_placement_initialize@@YAXXZ");
//};

//void object_placement_dispose(void)
//{
//    mangled_ppc("?object_placement_dispose@@YAXXZ");
//};

//void object_placement_initialize_for_new_map(void)
//{
//    mangled_ppc("?object_placement_initialize_for_new_map@@YAXXZ");
//};

//void object_placement_dispose_from_old_map(void)
//{
//    mangled_ppc("?object_placement_dispose_from_old_map@@YAXXZ");
//};

//void object_placement_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?object_placement_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void object_placement_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?object_placement_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void object_placement_prepare_for_new_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?object_placement_prepare_for_new_zone_set@@YAXKK@Z");
//};

//void object_placement_restore(long)
//{
//    mangled_ppc("?object_placement_restore@@YAXJ@Z");
//};

//void object_placement_mark_object_on_delete(long)
//{
//    mangled_ppc("?object_placement_mark_object_on_delete@@YAXJ@Z");
//};

//void object_placement_mark_name_on_delete(short)
//{
//    mangled_ppc("?object_placement_mark_name_on_delete@@YAXF@Z");
//};

//void object_placement_mark_name_on_create(short)
//{
//    mangled_ppc("?object_placement_mark_name_on_create@@YAXF@Z");
//};

//void object_placement_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?object_placement_prepare_for_non_bsp_zone_set_switch@@YAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//bool object_placement_is_unloaded(long)
//{
//    mangled_ppc("?object_placement_is_unloaded@@YA_NJ@Z");
//};

//void object_placement_unload(long)
//{
//    mangled_ppc("?object_placement_unload@@YAXJ@Z");
//};

//void object_placement_reload(long)
//{
//    mangled_ppc("?object_placement_reload@@YAXJ@Z");
//};

//void object_placement_reset_from_teleport(long)
//{
//    mangled_ppc("?object_placement_reset_from_teleport@@YAXJ@Z");
//};

//bool object_placement_data_new_from_scenario_object(enum e_object_type, long, struct s_scenario_object const *, struct s_tag_block const *, bool, struct s_object_placement_data *)
//{
//    mangled_ppc("?object_placement_data_new_from_scenario_object@@YA_NW4e_object_type@@JPBUs_scenario_object@@PBUs_tag_block@@_NPAUs_object_placement_data@@@Z");
//};

//public: bool c_game_variant::is_custom_variant(void) const
//{
//    mangled_ppc("?is_custom_variant@c_game_variant@@QBA_NXZ");
//};

//public: long c_map_variant::find_megalo_label_string(char const *)
//{
//    mangled_ppc("?find_megalo_label_string@c_map_variant@@QAAJPBD@Z");
//};

//long object_placement_remap_object_definition_for_game_engine(long)
//{
//    mangled_ppc("?object_placement_remap_object_definition_for_game_engine@@YAJJ@Z");
//};

//public: short c_game_engine_map_override_options::get_weapon_set_absolute_index(void) const
//{
//    mangled_ppc("?get_weapon_set_absolute_index@c_game_engine_map_override_options@@QBAFXZ");
//};

//public: short c_game_engine_map_override_options::get_vehicle_set_absolute_index(void) const
//{
//    mangled_ppc("?get_vehicle_set_absolute_index@c_game_engine_map_override_options@@QBAFXZ");
//};

//public: class c_game_engine_map_override_options const * c_game_engine_base_variant::get_map_override_options(void) const
//{
//    mangled_ppc("?get_map_override_options@c_game_engine_base_variant@@QBAPBVc_game_engine_map_override_options@@XZ");
//};

//bool object_placement_allowed_by_game_engine(struct s_object_placement_data const *)
//{
//    mangled_ppc("?object_placement_allowed_by_game_engine@@YA_NPBUs_object_placement_data@@@Z");
//};

//struct s_scenario_object * find_scenario_object(enum e_object_type, long)
//{
//    mangled_ppc("?find_scenario_object@@YAPAUs_scenario_object@@W4e_object_type@@J@Z");
//};

//void object_placement_update_object_scenario_mapping(enum e_object_type, long const *, long)
//{
//    mangled_ppc("?object_placement_update_object_scenario_mapping@@YAXW4e_object_type@@PBJJ@Z");
//};

//void object_placement_update_object_scenario_names(long const *, long)
//{
//    mangled_ppc("?object_placement_update_object_scenario_names@@YAXPBJJ@Z");
//};

//void object_placement_synchronize_in_game(enum e_object_type, long)
//{
//    mangled_ppc("?object_placement_synchronize_in_game@@YAXW4e_object_type@@J@Z");
//};

//long object_placement_synchronize_in_editor(long, enum e_object_type, long, bool, bool)
//{
//    mangled_ppc("?object_placement_synchronize_in_editor@@YAJJW4e_object_type@@J_N1@Z");
//};

//long object_placement_bsp_index_key_from_bsp_indices(long, long)
//{
//    mangled_ppc("?object_placement_bsp_index_key_from_bsp_indices@@YAJJJ@Z");
//};

//void object_placement_deactivate_on_zone_set_switch(long)
//{
//    mangled_ppc("?object_placement_deactivate_on_zone_set_switch@@YAXJ@Z");
//};

//void object_placement_set_in_limbo(long, bool)
//{
//    mangled_ppc("?object_placement_set_in_limbo@@YAXJ_N@Z");
//};

//bool object_can_exist_in_new_bsp_zone_set(long, struct s_scenario_object const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?object_can_exist_in_new_bsp_zone_set@@YA_NJPBUs_scenario_object@@KK@Z");
//};

//bool object_placement_attached_to_valid_parent(struct s_scenario_object const *)
//{
//    mangled_ppc("?object_placement_attached_to_valid_parent@@YA_NPBUs_scenario_object@@@Z");
//};

//bool object_placement_inside_structure_bsp(enum e_object_type, struct s_scenario_object const *)
//{
//    mangled_ppc("?object_placement_inside_structure_bsp@@YA_NW4e_object_type@@PBUs_scenario_object@@@Z");
//};

//bool object_placement_inside_structure_bsp_mask(unsigned long, enum e_object_type, struct s_scenario_object const *)
//{
//    mangled_ppc("?object_placement_inside_structure_bsp_mask@@YA_NKW4e_object_type@@PBUs_scenario_object@@@Z");
//};

//void object_placement_data_new(struct s_object_placement_data *, long, long, struct s_damage_owner const *)
//{
//    mangled_ppc("?object_placement_data_new@@YAXPAUs_object_placement_data@@JJPBUs_damage_owner@@@Z");
//};

//void object_placement_data_set_location(struct s_object_placement_data *, struct s_location const *)
//{
//    mangled_ppc("?object_placement_data_set_location@@YAXPAUs_object_placement_data@@PBUs_location@@@Z");
//};

//void object_placement_data_copy_change_colors(struct s_object_placement_data *, long)
//{
//    mangled_ppc("?object_placement_data_copy_change_colors@@YAXPAUs_object_placement_data@@J@Z");
//};

//void object_placement_create_global_objects(enum e_game_mode, bool)
//{
//    mangled_ppc("?object_placement_create_global_objects@@YAXW4e_game_mode@@_N@Z");
//};

//void object_placement_create_active_zone_set_objects(enum e_object_placement_zone_set_create_mode)
//{
//    mangled_ppc("?object_placement_create_active_zone_set_objects@@YAXW4e_object_placement_zone_set_create_mode@@@Z");
//};

//void object_placement_create_active_zone_set_skies(long, unsigned long)
//{
//    mangled_ppc("?object_placement_create_active_zone_set_skies@@YAXJK@Z");
//};

//void scenario_object_update_can_place_flags_no_parent(long, unsigned long, enum e_object_type, long, struct s_scenario_object *, struct s_tag_block *)
//{
//    mangled_ppc("?scenario_object_update_can_place_flags_no_parent@@YAXJKW4e_object_type@@JPAUs_scenario_object@@PAUs_tag_block@@@Z");
//};

//void scenario_object_update_can_place_flags_with_parent(struct scenario *, class c_scenario_object_placement_hierarchy *, struct s_scenario_object *)
//{
//    mangled_ppc("?scenario_object_update_can_place_flags_with_parent@@YAXPAUscenario@@PAVc_scenario_object_placement_hierarchy@@PAUs_scenario_object@@@Z");
//};

//void scenario_object_update_can_place_flags(long, unsigned long, enum e_object_type, long, struct s_scenario_object *)
//{
//    mangled_ppc("?scenario_object_update_can_place_flags@@YAXJKW4e_object_type@@JPAUs_scenario_object@@@Z");
//};

//void scenario_placement_update_bsp_attachment(long, unsigned long)
//{
//    mangled_ppc("?scenario_placement_update_bsp_attachment@@YAXJK@Z");
//};

//public: c_scenario_object_placement_hierarchy::~c_scenario_object_placement_hierarchy(void)
//{
//    mangled_ppc("??1c_scenario_object_placement_hierarchy@@QAA@XZ");
//};

//public: c_static_sized_dynamic_array<class c_object_identifier, 32>::~c_static_sized_dynamic_array<class c_object_identifier, 32>(void)
//{
//    mangled_ppc("??1?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@QAA@XZ");
//};

//public: s_static_array<class c_object_identifier, 32>::~s_static_array<class c_object_identifier, 32>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_object_identifier@@$0CA@@@QAA@XZ");
//};

//void scenario_placement_postprocess_object_names(struct scenario *, bool)
//{
//    mangled_ppc("?scenario_placement_postprocess_object_names@@YAXPAUscenario@@_N@Z");
//};

//struct s_tag_block * scenario_get_object_type_scenario_datums(struct scenario *, enum e_object_type, long *)
//{
//    mangled_ppc("?scenario_get_object_type_scenario_datums@@YAPAUs_tag_block@@PAUscenario@@W4e_object_type@@PAJ@Z");
//};

//struct s_tag_block const * scenario_get_object_type_scenario_datums(struct scenario const *, enum e_object_type, long *)
//{
//    mangled_ppc("?scenario_get_object_type_scenario_datums@@YAPBUs_tag_block@@PBUscenario@@W4e_object_type@@PAJ@Z");
//};

//struct s_tag_block * scenario_get_object_type_scenario_palette(struct scenario *, enum e_object_type)
//{
//    mangled_ppc("?scenario_get_object_type_scenario_palette@@YAPAUs_tag_block@@PAUscenario@@W4e_object_type@@@Z");
//};

//struct s_tag_block const * scenario_get_object_type_scenario_palette(struct scenario const *, enum e_object_type)
//{
//    mangled_ppc("?scenario_get_object_type_scenario_palette@@YAPBUs_tag_block@@PBUscenario@@W4e_object_type@@@Z");
//};

//struct scenario_object_palette_entry const * scenario_object_get_palette_entry(struct scenario const *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_get_palette_entry@@YAPBUscenario_object_palette_entry@@PBUscenario@@PBUs_scenario_object@@@Z");
//};

//struct scenario_object_palette_entry * scenario_object_get_palette_entry(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_get_palette_entry@@YAPAUscenario_object_palette_entry@@PAUscenario@@PBUs_scenario_object@@@Z");
//};

//long scenario_object_get_object_definition_tag_index(struct scenario const *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_get_object_definition_tag_index@@YAJPBUscenario@@PBUs_scenario_object@@@Z");
//};

//struct object_definition * scenario_object_get_object_definition(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_get_object_definition@@YAPAUobject_definition@@PAUscenario@@PBUs_scenario_object@@@Z");
//};

//struct s_scenario_object const * scenario_object_get(struct scenario const *, enum e_object_type, long)
//{
//    mangled_ppc("?scenario_object_get@@YAPBUs_scenario_object@@PBUscenario@@W4e_object_type@@J@Z");
//};

//struct s_scenario_object const * scenario_object_try_and_get(struct scenario const *, enum e_object_type, long)
//{
//    mangled_ppc("?scenario_object_try_and_get@@YAPBUs_scenario_object@@PBUscenario@@W4e_object_type@@J@Z");
//};

//bool scenario_object_can_place_once_for_active_bsps(unsigned long, struct scenario *, struct s_scenario_object const *, unsigned long)
//{
//    mangled_ppc("?scenario_object_can_place_once_for_active_bsps@@YA_NKPAUscenario@@PBUs_scenario_object@@K@Z");
//};

//bool scenario_object_can_exist_in_active_bsp(enum e_object_type, struct s_scenario_object const *, unsigned long)
//{
//    mangled_ppc("?scenario_object_can_exist_in_active_bsp@@YA_NW4e_object_type@@PBUs_scenario_object@@K@Z");
//};

//public: short c_object_identifier::get_origin_bsp(void) const
//{
//    mangled_ppc("?get_origin_bsp@c_object_identifier@@QBAFXZ");
//};

//bool object_definition_has_persistent_state(enum e_object_type, long)
//{
//    mangled_ppc("?object_definition_has_persistent_state@@YA_NW4e_object_type@@J@Z");
//};

//bool scenario_object_managed_by_script(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_managed_by_script@@YA_NPAUscenario@@PBUs_scenario_object@@@Z");
//};

//bool scenario_object_has_persistent_state(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_has_persistent_state@@YA_NPAUscenario@@PBUs_scenario_object@@@Z");
//};

//bool object_datum_has_persistent_state(long)
//{
//    mangled_ppc("?object_datum_has_persistent_state@@YA_NJ@Z");
//};

//bool scenario_object_is_placed_globally(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_is_placed_globally@@YA_NPAUscenario@@PBUs_scenario_object@@@Z");
//};

//enum e_object_bsp_placement_policy get_runtime_object_placement_policy(struct s_scenario_object const *)
//{
//    mangled_ppc("?get_runtime_object_placement_policy@@YA?AW4e_object_bsp_placement_policy@@PBUs_scenario_object@@@Z");
//};

//bool object_placement_find_initial_location(unsigned long, union real_point3d const *, float, struct s_location *)
//{
//    mangled_ppc("?object_placement_find_initial_location@@YA_NKPBTreal_point3d@@MPAUs_location@@@Z");
//};

//long lowest_bit_set(unsigned long)
//{
//    mangled_ppc("?lowest_bit_set@@YAJK@Z");
//};

//long lowest_bit_set_platform(unsigned long)
//{
//    mangled_ppc("?lowest_bit_set_platform@@YAJK@Z");
//};

//bool valid_object_creation_position(unsigned long, long, union real_point3d const *, union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?valid_object_creation_position@@YA_NKJPBTreal_point3d@@PBTvector3d@@1M@Z");
//};

//unsigned long calculate_object_creation_bsp_attachment(unsigned long, long, enum e_object_type, long, struct s_scenario_object const *, struct s_tag_block *)
//{
//    mangled_ppc("?calculate_object_creation_bsp_attachment@@YAKKJW4e_object_type@@JPBUs_scenario_object@@PAUs_tag_block@@@Z");
//};

//unsigned long object_placement_find_initial_location_bsp_mask(unsigned long, union real_point3d const *, float)
//{
//    mangled_ppc("?object_placement_find_initial_location_bsp_mask@@YAKKPBTreal_point3d@@M@Z");
//};

//void calculate_object_starting_bounding_sphere(long, union real_point3d const *, union vector3d const *, union vector3d const *, float, union real_point3d *, float *)
//{
//    mangled_ppc("?calculate_object_starting_bounding_sphere@@YAXJPBTreal_point3d@@PBTvector3d@@1MPAT1@PAM@Z");
//};

//float scenario_object_get_scale(struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_get_scale@@YAMPBUs_scenario_object@@@Z");
//};

//bool object_definition_can_be_placed(long, long)
//{
//    mangled_ppc("?object_definition_can_be_placed@@YA_NJJ@Z");
//};

//bool object_name_can_be_placed_automatically(long)
//{
//    mangled_ppc("?object_name_can_be_placed_automatically@@YA_NJ@Z");
//};

//unsigned long scenario_object_get_manual_bsp_flags(struct s_scenario_object const *)
//{
//    mangled_ppc("?scenario_object_get_manual_bsp_flags@@YAKPBUs_scenario_object@@@Z");
//};

//void object_placement_handle_tag_changes(void)
//{
//    mangled_ppc("?object_placement_handle_tag_changes@@YAXXZ");
//};

//void object_placement_prepare_for_zone_set_reload(void)
//{
//    mangled_ppc("?object_placement_prepare_for_zone_set_reload@@YAXXZ");
//};

//bool object_identifer_key_sort_proc(void const *, void const *, void const *)
//{
//    mangled_ppc("?object_identifer_key_sort_proc@@YA_NPBX00@Z");
//};

//bool object_identifier_key_less_than_object_identifier(struct s_scenario_object_identifier_key const &, class c_object_identifier const &)
//{
//    mangled_ppc("?object_identifier_key_less_than_object_identifier@@YA_NABUs_scenario_object_identifier_key@@ABVc_object_identifier@@@Z");
//};

//void object_placement_synchronize_for_designer_zone_debugger(bool)
//{
//    mangled_ppc("?object_placement_synchronize_for_designer_zone_debugger@@YAX_N@Z");
//};

//public: c_scenario_object_to_object_datum_mapping::c_scenario_object_to_object_datum_mapping(long)
//{
//    mangled_ppc("??0c_scenario_object_to_object_datum_mapping@@QAA@J@Z");
//};

//public: void c_scenario_object_to_object_datum_mapping::synchronize_object_in_zone_debugger(bool)
//{
//    mangled_ppc("?synchronize_object_in_zone_debugger@c_scenario_object_to_object_datum_mapping@@QAAX_N@Z");
//};

//private: void c_scenario_object_to_object_datum_mapping::remove_dirty_objects(void)
//{
//    mangled_ppc("?remove_dirty_objects@c_scenario_object_to_object_datum_mapping@@AAAXXZ");
//};

//private: long c_scenario_object_to_object_datum_mapping::find_object_id_key(struct object_datum const *) const
//{
//    mangled_ppc("?find_object_id_key@c_scenario_object_to_object_datum_mapping@@ABAJPBUobject_datum@@@Z");
//};

//public: s_scenario_object_identifier_key::~s_scenario_object_identifier_key(void)
//{
//    mangled_ppc("??1s_scenario_object_identifier_key@@QAA@XZ");
//};

//public: c_scenario_object_to_object_datum_mapping::~c_scenario_object_to_object_datum_mapping(void)
//{
//    mangled_ppc("??1c_scenario_object_to_object_datum_mapping@@QAA@XZ");
//};

//public: c_static_stack<struct s_scenario_object_identifier_key, 6136>::~c_static_stack<struct s_scenario_object_identifier_key, 6136>(void)
//{
//    mangled_ppc("??1?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAA@XZ");
//};

//void object_placement_synchronize_scenario_indices(bool)
//{
//    mangled_ppc("?object_placement_synchronize_scenario_indices@@YAX_N@Z");
//};

//public: void c_scenario_object_to_object_datum_mapping::recreate_global_objects(void)
//{
//    mangled_ppc("?recreate_global_objects@c_scenario_object_to_object_datum_mapping@@QAAXXZ");
//};

//void object_placement_synchronize_structure_objects(void)
//{
//    mangled_ppc("?object_placement_synchronize_structure_objects@@YAXXZ");
//};

//long object_type_get_scenario_placement_offset(enum e_object_type)
//{
//    mangled_ppc("?object_type_get_scenario_placement_offset@@YAJW4e_object_type@@@Z");
//};

//void scenario_objects_synchronize_parent_placement(class c_big_flags<6136> const *, struct scenario *)
//{
//    mangled_ppc("?scenario_objects_synchronize_parent_placement@@YAXPBV?$c_big_flags@$0BHPI@@@PAUscenario@@@Z");
//};

//void object_placement_initialize_pvs_bound_objects(unsigned long)
//{
//    mangled_ppc("?object_placement_initialize_pvs_bound_objects@@YAXK@Z");
//};

//enum e_game_resource_attachment_type get_scenario_object_attachment(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?get_scenario_object_attachment@@YA?AW4e_game_resource_attachment_type@@PAUscenario@@PBUs_scenario_object@@@Z");
//};

//void object_placement_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *)
//{
//    mangled_ppc("?object_placement_attach_resources_to_bsp_zone@@YAXJJPAVc_game_system_resource_registrar@@@Z");
//};

//public: c_event_context::c_event_context(char const *, unsigned long, char const *, ...)
//{
//    mangled_ppc("??0c_event_context@@QAA@PBDK0ZZ");
//};

//public: c_event_context::~c_event_context(void)
//{
//    mangled_ppc("??1c_event_context@@QAA@XZ");
//};

//public: c_scenario_bsp_attachment_visitor::c_scenario_bsp_attachment_visitor(class c_scenario_object_placement_hierarchy *, class c_game_system_resource_registrar *)
//{
//    mangled_ppc("??0c_scenario_bsp_attachment_visitor@@QAA@PAVc_scenario_object_placement_hierarchy@@PAVc_game_system_resource_registrar@@@Z");
//};

//public: void c_scenario_bsp_attachment_visitor::visit_scenario_object(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?visit_scenario_object@c_scenario_bsp_attachment_visitor@@QAAXPAUscenario@@PBUs_scenario_object@@@Z");
//};

//public: void c_scenario_bsp_attachment_visitor::visit_sky(long)
//{
//    mangled_ppc("?visit_sky@c_scenario_bsp_attachment_visitor@@QAAXJ@Z");
//};

//public: void c_scenario_bsp_attachment_visitor::visit_tag(enum e_game_resource_attachment_type, long)
//{
//    mangled_ppc("?visit_tag@c_scenario_bsp_attachment_visitor@@QAAXW4e_game_resource_attachment_type@@J@Z");
//};

//public: void c_scenario_bsp_attachment_visitor::register_tag_variant(enum e_game_resource_attachment_type, long, long)
//{
//    mangled_ppc("?register_tag_variant@c_scenario_bsp_attachment_visitor@@QAAXW4e_game_resource_attachment_type@@JJ@Z");
//};

//private: enum e_game_resource_attachment_type c_scenario_bsp_attachment_visitor::get_attachment_type(struct scenario *, struct s_scenario_object const *)
//{
//    mangled_ppc("?get_attachment_type@c_scenario_bsp_attachment_visitor@@AAA?AW4e_game_resource_attachment_type@@PAUscenario@@PBUs_scenario_object@@@Z");
//};

//private: void c_scenario_bsp_attachment_visitor::visit_parent_tag(enum e_game_resource_attachment_type, long)
//{
//    mangled_ppc("?visit_parent_tag@c_scenario_bsp_attachment_visitor@@AAAXW4e_game_resource_attachment_type@@J@Z");
//};

//public: enum e_object_bsp_placement_policy c_enum_no_init<enum e_object_bsp_placement_policy, char, -1, 3, struct s_default_enum_string_resolver>::operator enum e_object_bsp_placement_policy(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_object_bsp_placement_policy@@D$0?0$02Us_default_enum_string_resolver@@@@QBA?AW4e_object_bsp_placement_policy@@XZ");
//};

//public: enum e_scenario_object_bsp_placement_policy c_enum_no_init<enum e_scenario_object_bsp_placement_policy, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_scenario_object_bsp_placement_policy(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_scenario_object_bsp_placement_policy@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_scenario_object_bsp_placement_policy@@XZ");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: c_wrapped_array<long const>::c_wrapped_array<long const>(long const *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBJ@@QAA@PBJJ@Z");
//};

//public: long const & c_array_operator_interface<class c_wrapped_array_no_init<long const>, long const>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBJ@@$$CBJ@@QAAABJJ@Z");
//};

//public: void s_static_array<long, 2048>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0IAA@@@QAAXABJ@Z");
//};

//public: c_big_flags<6136>::c_big_flags<6136>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0BHPI@@@QAA@XZ");
//};

//public: c_big_flags<32>::c_big_flags<32>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0CA@@@QAA@XZ");
//};

//public: long c_static_stack<struct s_scenario_object_identifier_key, 6136>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_scenario_object_identifier_key, 6136>::push_back(struct s_scenario_object_identifier_key const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAAXABUs_scenario_object_identifier_key@@@Z");
//};

//public: struct s_scenario_object_identifier_key & c_static_stack<struct s_scenario_object_identifier_key, 6136>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAAAAUs_scenario_object_identifier_key@@J@Z");
//};

//public: struct s_scenario_object_identifier_key * c_static_stack<struct s_scenario_object_identifier_key, 6136>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAAPAUs_scenario_object_identifier_key@@J@Z");
//};

//public: struct s_scenario_object_identifier_key * c_static_stack<struct s_scenario_object_identifier_key, 6136>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAAPAUs_scenario_object_identifier_key@@XZ");
//};

//public: struct s_scenario_object_identifier_key const * c_static_stack<struct s_scenario_object_identifier_key, 6136>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QBAPBUs_scenario_object_identifier_key@@XZ");
//};

//public: struct s_scenario_object_identifier_key const * c_static_stack<struct s_scenario_object_identifier_key, 6136>::end(void) const
//{
//    mangled_ppc("?end@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QBAPBUs_scenario_object_identifier_key@@XZ");
//};

//public: c_static_stack<struct s_scenario_object_identifier_key, 6136>::c_static_stack<struct s_scenario_object_identifier_key, 6136>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAA@XZ");
//};

//public: s_scenario_object_identifier_key::s_scenario_object_identifier_key(void)
//{
//    mangled_ppc("??0s_scenario_object_identifier_key@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: void c_wrapped_array_no_init<long const>::set_elements(long const *, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@$$CBJ@@QAAXPBJJ@Z");
//};

//public: long const * c_wrapped_array_no_init<long const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBJ@@QAAPBJXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<long const>, long const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBJ@@$$CBJ@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<long const> * c_recursive_template_pattern<class c_wrapped_array_no_init<long const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBJ@@@@QAAPAV?$c_wrapped_array_no_init@$$CBJ@@XZ");
//};

//public: bool c_static_stack<struct s_scenario_object_identifier_key, 6136>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_scenario_object_identifier_key, 6136>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QAAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<long const>, long const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBJ@@$$CBJ@@QBAJXZ");
//};

//public: bool c_static_stack<struct s_scenario_object_identifier_key, 6136>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_scenario_object_identifier_key, 6136>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_scenario_object_identifier_key@@$0BHPI@@@QBA_NXZ");
//};

//public: long c_wrapped_array_no_init<long const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBJ@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<long const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<long const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBJ@@@@QBAPBV?$c_wrapped_array_no_init@$$CBJ@@XZ");
//};

//public: struct s_scenario_multiplayer_object_properties const * c_opaque_data<struct s_scenario_multiplayer_object_properties, 88, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_opaque_data@Us_scenario_multiplayer_object_properties@@$0FI@$03@@QBAPBUs_scenario_multiplayer_object_properties@@XZ");
//};

//public: bool c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::test(unsigned short) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@QBA_NG@Z");
//};

//public: unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::test(enum e_game_engine_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QBA_NW4e_game_engine_type@@@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_object_placement_spawn_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_multiplayer_object_placement_spawn_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_multiplayer_object_placement_spawn_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_multiplayer_object_placement_spawn_flags@@@Z");
//};

//public: long c_single_language_string_table<256, 4096>::find(struct utf8const *) const
//{
//    mangled_ppc("?find@?$c_single_language_string_table@$0BAA@$0BAAA@@@QBAJPBUutf8@@@Z");
//};

//public: long & s_static_array<long, 14>::operator[]<enum e_object_type>(enum e_object_type)
//{
//    mangled_ppc("??$?AW4e_object_type@@@?$s_static_array@J$0O@@@QAAAAJW4e_object_type@@@Z");
//};

//public: long & s_static_array<long, 2048>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@J$0IAA@@@QAAAAJF@Z");
//};

//public: void c_big_flags_typed_no_init<long, 6136>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0BHPI@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 6136>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0BHPI@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 6136>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0BHPI@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 6136>::c_big_flags_typed<long, 6136>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0BHPI@@@QAA@XZ");
//};

//public: bool c_big_flags_typed_no_init<long, 32>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0CA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 32>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0CA@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 32>::c_big_flags_typed<long, 32>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0CA@@@QAA@XZ");
//};

//struct s_scenario_object_identifier_key const * std::lower_bound<struct s_scenario_object_identifier_key const *, class c_object_identifier, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier const &, class c_object_identifier_key_less_than_object_identifier)
//{
//    mangled_ppc("??$lower_bound@PBUs_scenario_object_identifier_key@@Vc_object_identifier@@Vc_object_identifier_key_less_than_object_identifier@@@std@@YAPBUs_scenario_object_identifier_key@@PBU1@0ABVc_object_identifier@@Vc_object_identifier_key_less_than_object_identifier@@@Z");
//};

//int std::distance<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *)
//{
//    mangled_ppc("??$distance@PBUs_scenario_object_identifier_key@@@std@@YAHPBUs_scenario_object_identifier_key@@0@Z");
//};

//public: struct utf8const * c_string_buffer<4096>::get(long) const
//{
//    mangled_ppc("?get@?$c_string_buffer@$0BAAA@@@QBAPBUutf8@@J@Z");
//};

//public: static bool c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(unsigned short)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@SA_NG@Z");
//};

//public: bool c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(unsigned short)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@CAGG@Z");
//};

//public: static bool c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::valid_bit(enum e_game_engine_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@SA_NW4e_game_engine_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::flag_size_type(enum e_game_engine_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@CAEW4e_game_engine_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@CAEXZ");
//};

//public: static bool c_flags_no_init<enum e_multiplayer_object_placement_spawn_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_object_placement_spawn_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_multiplayer_object_placement_spawn_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_multiplayer_object_placement_spawn_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_multiplayer_object_placement_spawn_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_object_placement_spawn_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_multiplayer_object_placement_spawn_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_multiplayer_object_placement_spawn_flags@@@Z");
//};

//public: short const & s_static_array<short, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$0BAA@@@QBAABFJ@Z");
//};

//public: static bool s_static_array<long, 14>::valid<enum e_object_type>(enum e_object_type)
//{
//    mangled_ppc("??$valid@W4e_object_type@@@?$s_static_array@J$0O@@@SA_NW4e_object_type@@@Z");
//};

//public: static bool s_static_array<long, 2048>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@J$0IAA@@@SA_NF@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 6136>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0BHPI@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 6136>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0BHPI@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 6136>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0BHPI@@@QBA_NXZ");
//};

//public: void c_big_flags_typed_no_init<long, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0CA@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 32>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0CA@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 32>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0CA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0CA@@@QBA_NXZ");
//};

//struct s_scenario_object_identifier_key const * std::_Checked_base<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_scenario_object_identifier_key@@@std@@YAPBUs_scenario_object_identifier_key@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_scenario_object_identifier_key@@@std@@YAPAHPBUs_scenario_object_identifier_key@@@Z");
//};

//struct s_scenario_object_identifier_key const * std::_Lower_bound<struct s_scenario_object_identifier_key const *, class c_object_identifier, int, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier const &, class c_object_identifier_key_less_than_object_identifier, int *)
//{
//    mangled_ppc("??$_Lower_bound@PBUs_scenario_object_identifier_key@@Vc_object_identifier@@HVc_object_identifier_key_less_than_object_identifier@@@std@@YAPBUs_scenario_object_identifier_key@@PBU1@0ABVc_object_identifier@@Vc_object_identifier_key_less_than_object_identifier@@PAH@Z");
//};

//void std::_Checked_assign_from_base<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *&, struct s_scenario_object_identifier_key const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_scenario_object_identifier_key@@@std@@YAXAAPBUs_scenario_object_identifier_key@@ABQBU1@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_scenario_object_identifier_key@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_scenario_object_identifier_key@@@Z");
//};

//void std::_Distance2<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_scenario_object_identifier_key@@H@std@@YAXPBUs_scenario_object_identifier_key@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//public: struct utf8const & s_static_array<struct utf8, 4096>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uutf8@@$0BAAA@@@QBAABUutf8@@J@Z");
//};

//private: static unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::make_N_bit_mask_size_type(enum e_game_engine_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@CAEW4e_game_engine_type@@@Z");
//};

//public: static bool s_static_array<short, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$0BAA@@@SA_NJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 6136>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0BHPI@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 32>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0CA@@@KAKJ@Z");
//};

//struct s_scenario_object_identifier_key const * std::_Checked_base<struct s_scenario_object_identifier_key const *>(struct s_scenario_object_identifier_key const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_scenario_object_identifier_key@@@std@@YAPBUs_scenario_object_identifier_key@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_pointer<class c_object_identifier_key_less_than_object_identifier>(class c_object_identifier_key_less_than_object_identifier &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_object_identifier_key_less_than_object_identifier@@@std@@YAXAAVc_object_identifier_key_less_than_object_identifier@@PB_WI@Z");
//};

//void std::_Debug_order_single<struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier, bool, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_order_single@PBUs_scenario_object_identifier_key@@Vc_object_identifier_key_less_than_object_identifier@@@std@@YAXPBUs_scenario_object_identifier_key@@0Vc_object_identifier_key_less_than_object_identifier@@_NPB_WI@Z");
//};

//void std::_Distance<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_scenario_object_identifier_key@@H@std@@YAXPBUs_scenario_object_identifier_key@@0AAH@Z");
//};

//void std::advance<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *&, int)
//{
//    mangled_ppc("??$advance@PBUs_scenario_object_identifier_key@@H@std@@YAXAAPBUs_scenario_object_identifier_key@@H@Z");
//};

//bool std::_Debug_lt_pred<class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key, class c_object_identifier>(class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key const &, class c_object_identifier const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_object_identifier_key_less_than_object_identifier@@Us_scenario_object_identifier_key@@Vc_object_identifier@@@std@@YA_NVc_object_identifier_key_less_than_object_identifier@@ABUs_scenario_object_identifier_key@@ABVc_object_identifier@@PB_WI@Z");
//};

//public: bool c_object_identifier_key_less_than_object_identifier::operator()(struct s_scenario_object_identifier_key const &, class c_object_identifier const &) const
//{
//    mangled_ppc("??Rc_object_identifier_key_less_than_object_identifier@@QBA_NABUs_scenario_object_identifier_key@@ABVc_object_identifier@@@Z");
//};

//public: bool c_object_identifier_key_less_than_object_identifier::operator()(class c_object_identifier const &, struct s_scenario_object_identifier_key const &) const
//{
//    mangled_ppc("??Rc_object_identifier_key_less_than_object_identifier@@QBA_NABVc_object_identifier@@ABUs_scenario_object_identifier_key@@@Z");
//};

//void std::_Debug_pointer<struct s_scenario_object_identifier_key>(struct s_scenario_object_identifier_key const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_scenario_object_identifier_key@@@std@@YAXPBUs_scenario_object_identifier_key@@PB_WI@Z");
//};

//public: static bool s_static_array<struct utf8, 4096>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uutf8@@$0BAAA@@@SA_NJ@Z");
//};

//private: static unsigned short c_flags_no_init<unsigned short, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned short)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@GG$0BA@Us_default_enum_string_resolver@@@@CAGG@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 6136>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0BHPI@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 6136>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0BHPI@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 6136>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0BHPI@@@KAKXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 32>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0CA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 32>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0CA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 32>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0CA@@@KAKXZ");
//};

//void std::_Debug_order_single2<struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier>(struct s_scenario_object_identifier_key const *, struct s_scenario_object_identifier_key const *, class c_object_identifier_key_less_than_object_identifier, bool, wchar_t const *, unsigned int, struct std::forward_iterator_tag)
//{
//    mangled_ppc("??$_Debug_order_single2@PBUs_scenario_object_identifier_key@@Vc_object_identifier_key_less_than_object_identifier@@@std@@YAXPBUs_scenario_object_identifier_key@@0Vc_object_identifier_key_less_than_object_identifier@@_NPB_WIUforward_iterator_tag@0@@Z");
//};

//void std::_Advance<struct s_scenario_object_identifier_key const *, int>(struct s_scenario_object_identifier_key const *&, int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Advance@PBUs_scenario_object_identifier_key@@H@std@@YAXAAPBUs_scenario_object_identifier_key@@HUrandom_access_iterator_tag@0@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 6136>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0BHPI@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 32>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0CA@@@KAKJ@Z");
//};

//bool std::_Debug_lt_pred<class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key, struct s_scenario_object_identifier_key>(class c_object_identifier_key_less_than_object_identifier, struct s_scenario_object_identifier_key const &, struct s_scenario_object_identifier_key const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@Vc_object_identifier_key_less_than_object_identifier@@Us_scenario_object_identifier_key@@U2@@std@@YA_NVc_object_identifier_key_less_than_object_identifier@@ABUs_scenario_object_identifier_key@@1PB_WI@Z");
//};

//public: bool c_object_identifier_key_less_than_object_identifier::operator()(struct s_scenario_object_identifier_key const &, struct s_scenario_object_identifier_key const &) const
//{
//    mangled_ppc("??Rc_object_identifier_key_less_than_object_identifier@@QBA_NABUs_scenario_object_identifier_key@@0@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_object_placement_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_object_placement_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_object_placement_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_object_placement_globals_allocator@@YAXXZ");
//};

