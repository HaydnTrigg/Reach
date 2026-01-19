/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long compute_math_operation(long, long, enum e_math_operation);
// long unit_index_from_player_index(long);
// long get_device_index_from_object_reference(class c_object_reference const *);
// enum e_multiplayer_team_designator get_object_team_designator(long);
// enum e_disposition get_disposition_between_team_designators(enum e_multiplayer_team_designator, enum e_multiplayer_team_designator);
// bool disposition_matches_team_filter(enum e_disposition, enum e_team_filter);
// void set_team_for_object(long, enum e_multiplayer_team_designator);
// void set_team_for_player(long, enum e_multiplayer_team_designator);
// void get_team_designator_color(enum e_multiplayer_team_designator, union rgb_color *);
// void get_player_color(long, union rgb_color *);
// enum e_multiplayer_team_designator team_index_to_team_designator(enum e_multiplayer_team);
// public: s_respawn_data::s_respawn_data(void);
// public: void s_respawn_data::initialize(void);
// public: bool s_respawn_data::build_update(struct s_megalogamengine_respawn_state_data *) const;
// public: void s_respawn_data::apply_update(struct s_megalogamengine_respawn_state_data const *);
// public: bool s_respawn_data::handle_deleted_object(long);
// public: bool s_respawn_data::check_for_missing_objects(void);
// public: s_player_data::s_player_data(void);
// public: s_variable_values<struct s_player_variable_traits>::s_variable_values<struct s_player_variable_traits>(void);
// public: s_static_array<class c_game_engine_timer, 4>::s_static_array<class c_game_engine_timer, 4>(void);
// public: void s_player_data::initialize(struct s_custom_game_engine_definition const *);
// public: bool s_player_data::build_update_variables(struct s_variable_value_state_data<struct s_player_variable_traits> *, enum e_megalo_variable_network_state) const;
// public: void s_player_data::apply_update_variables(struct s_variable_value_state_data<struct s_player_variable_traits> const *, enum e_megalo_variable_network_state);
// public: bool s_player_data::build_update_nav_and_boundary(struct s_megalogamengine_player_navpoint_and_boundary_state_data *) const;
// public: void s_player_data::apply_update_nav_and_boundary(struct s_megalogamengine_player_navpoint_and_boundary_state_data const *);
// public: bool s_player_data::build_update_objective(struct s_megalogamengine_player_objective_state_data *) const;
// public: void s_player_data::apply_update_objective(struct s_megalogamengine_player_objective_state_data const *);
// public: bool s_player_data::build_update_misc(struct s_megalogamengine_player_misc_state_data *) const;
// public: void s_player_data::apply_update_misc(struct s_megalogamengine_player_misc_state_data const *);
// public: void s_team_data::initialize(struct s_custom_game_engine_definition const *);
// public: void s_team_data::initialize_for_new_round(struct s_custom_game_engine_definition const *);
// public: bool s_team_data::build_update(struct s_megalogamengine_team_state_data *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *) const;
// public: void s_team_data::apply_update(struct s_megalogamengine_team_state_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// public: s_custom_game_engine_globals::s_custom_game_engine_globals(void);
// public: s_player_death_info::s_player_death_info(void);
// public: s_variable_values<struct s_global_variable_traits>::s_variable_values<struct s_global_variable_traits>(void);
// public: s_static_array<struct s_player_data, 16>::s_static_array<struct s_player_data, 16>(void);
// public: s_static_array<struct s_team_data, 9>::s_static_array<struct s_team_data, 9>(void);
// public: s_static_array<class c_game_engine_timer, 8>::s_static_array<class c_game_engine_timer, 8>(void);
// public: s_team_data::s_team_data(void);
// public: s_variable_values<struct s_team_variable_traits>::s_variable_values<struct s_team_variable_traits>(void);
// public: void s_custom_game_engine_globals::initialize(void);
// public: bool s_custom_game_engine_globals::initialize_for_new_script(struct s_custom_game_engine_definition const *);
// public: void s_custom_game_engine_globals::initialize_for_new_round(struct s_custom_game_engine_definition const *);
// public: void s_custom_game_engine_globals::make_simulation_state_dirty_for_new_round(void);
// public: void s_custom_game_engine_globals::update_timers(void);
// public: void s_custom_game_engine_globals::handle_new_multiplayer_object(long);
// public: void s_custom_game_engine_globals::handle_deleted_object(long);
// public: void s_custom_game_engine_globals::multiplayer_object_before_team_change(long);
// public: bool c_object_filter::has_strict_team_parameter(void) const;
// public: void s_custom_game_engine_globals::multiplayer_object_after_team_change(long);
// public: void s_custom_game_engine_globals::refresh_object_attachment_to_filter_lists(long);
// private: bool s_custom_game_engine_globals::remove_multiplayer_object_from_filter_list(long, struct s_multiplayer_object_properties *, long);
// private: void s_custom_game_engine_globals::add_multiplayer_object_to_filter_list(long, struct s_multiplayer_object_properties *, long);
// public: void s_custom_game_engine_globals::player_changed_indices(long, long);
// public: void s_custom_game_engine_globals::player_added(long);
// public: struct s_player_data * s_custom_game_engine_globals::get_player_data(long);
// public: struct s_player_data const * s_custom_game_engine_globals::get_player_data(long) const;
// public: struct s_team_data * s_custom_game_engine_globals::get_team_data(enum e_multiplayer_team_designator);
// public: struct s_team_data const * s_custom_game_engine_globals::get_team_data(enum e_multiplayer_team_designator) const;
// public: enum e_multiplayer_team_designator s_custom_game_engine_globals::find_team_designator_by_simulation_object_glue_index(long) const;
// public: void s_custom_game_engine_globals::create_team_simulation_entities(void);
// public: void s_custom_game_engine_globals::detach_team_simulation_entities(void);
// public: long s_custom_game_engine_globals::get_first_filtered_object_index(long) const;
// private: struct s_player_death_info * s_custom_game_engine_globals::find_player_death_info(long);
// public: struct s_player_death_info const * s_custom_game_engine_globals::get_player_death_info(long) const;
// public: void s_custom_game_engine_globals::add_player_assist(long, long);
// public: void s_custom_game_engine_globals::add_player_special_death_type(long, enum e_special_death_type);
// public: void s_custom_game_engine_globals::update_after_engine(void);
// public: void s_custom_game_engine_globals::update_before_engine(void);
// public: void s_custom_game_engine_globals::promote_to_simulation_authority(void);
// bool megalogamengine_initialize_for_new_script(void);
// public: long c_object_filter::get_label_string_index(void) const;
// bool megalogamengine_initialize_for_new_script_internal(void);
// bool megalogamengine_verify_object_type_references(void);
// void execute_megalo_chud_message(struct s_simulation_event_megalo_chud_message_data const *);
// public: c_entity_update_throttler<15>::c_entity_update_throttler<15>(void);
// public: c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: bool c_enum_no_init<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_special_death_type) const;
// public: c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>(void);
// public: void c_static_stack<class c_megalogamengine_widget, 4>::clear(void);
// public: long c_static_stack<class c_megalogamengine_widget, 4>::push(void);
// public: class c_megalogamengine_widget * c_static_stack<class c_megalogamengine_widget, 4>::get_top(void);
// public: c_static_stack<class c_megalogamengine_widget, 4>::c_static_stack<class c_megalogamengine_widget, 4>(void);
// public: static long s_static_array<struct s_player_data, 16>::get_count(void);
// public: long c_static_stack<struct s_player_death_info, 16>::count(void) const;
// public: void c_static_stack<struct s_player_death_info, 16>::clear(void);
// public: struct s_player_death_info & c_static_stack<struct s_player_death_info, 16>::operator[](long);
// public: c_static_stack<struct s_player_death_info, 16>::c_static_stack<struct s_player_death_info, 16>(void);
// public: enum e_object_team_filter c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::operator enum e_object_team_filter(void) const;
// public: struct s_megalogamengine_widget_persistent_state const * c_static_stack<struct s_megalogamengine_widget_persistent_state, 4>::get(long) const;
// public: class c_object_filter const * c_static_stack<class c_object_filter, 16>::get(long) const;
// public: c_megalogamengine_widget::c_megalogamengine_widget(void);
// public: c_megalogamengine_hud_meter_input::c_megalogamengine_hud_meter_input(void);
// public: c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_static_stack<class c_megalogamengine_widget, 4>::full(void) const;
// public: long c_static_stack<class c_megalogamengine_widget, 4>::top(void) const;
// public: bool c_static_stack<class c_megalogamengine_widget, 4>::empty(void) const;
// public: bool c_flags_no_init<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver> const &) const;
// public: void s_variable_values<struct s_player_variable_traits>::initialize(struct s_variable_metadata<struct s_player_variable_traits> const *);
// public: bool s_variable_values<struct s_player_variable_traits>::update_timers(struct s_variable_metadata<struct s_player_variable_traits> const *);
// public: bool s_variable_values<struct s_player_variable_traits>::handle_deleted_object(long);
// public: bool s_variable_values<struct s_player_variable_traits>::build_update(struct s_variable_value_state_data<struct s_player_variable_traits> *, struct s_variable_metadata<struct s_player_variable_traits> const *, enum e_megalo_variable_network_state) const;
// public: void s_variable_values<struct s_player_variable_traits>::apply_update(struct s_variable_value_state_data<struct s_player_variable_traits> const *, struct s_variable_metadata<struct s_player_variable_traits> const *, enum e_megalo_variable_network_state);
// public: void s_variable_values<struct s_team_variable_traits>::initialize(struct s_variable_metadata<struct s_team_variable_traits> const *);
// public: bool s_variable_values<struct s_team_variable_traits>::update_timers(struct s_variable_metadata<struct s_team_variable_traits> const *);
// public: bool s_variable_values<struct s_team_variable_traits>::handle_deleted_object(long);
// public: bool s_variable_values<struct s_global_variable_traits>::update_timers(struct s_variable_metadata<struct s_global_variable_traits> const *);
// public: bool s_variable_values<struct s_global_variable_traits>::handle_deleted_object(long);
// public: bool c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_filter_parameters) const;
// public: bool s_variable_values<struct s_object_variable_traits>::update_timers(struct s_variable_metadata<struct s_object_variable_traits> const *);
// public: bool s_variable_values<struct s_object_variable_traits>::handle_deleted_object(long);
// public: bool s_variable_values<struct s_object_variable_traits>::check_for_missing_objects(void);
// long int_abs<long>(long const &);
// public: struct s_player_data & s_static_array<struct s_player_data, 16>::operator[]<long>(long);
// public: struct s_team_data & s_static_array<struct s_team_data, 9>::operator[]<long>(long);
// public: struct s_team_data & s_static_array<struct s_team_data, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: struct s_player_data const & s_static_array<struct s_player_data, 16>::operator[]<long>(long) const;
// public: struct s_team_data const & s_static_array<struct s_team_data, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator) const;
// public: void c_entity_update_throttler<15>::notify_update_forced(void);
// public: bool c_entity_update_throttler<15>::tick(void);
// public: static bool c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_filter_parameters);
// private: static unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_filter_parameters);
// public: static bool s_static_array<struct s_player_data, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_team_data, 9>::valid<long>(long);
// public: static bool s_static_array<struct s_team_data, 9>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);

//long compute_math_operation(long, long, enum e_math_operation)
//{
//    mangled_ppc("?compute_math_operation@@YAJJJW4e_math_operation@@@Z");
//};

//long unit_index_from_player_index(long)
//{
//    mangled_ppc("?unit_index_from_player_index@@YAJJ@Z");
//};

//long get_device_index_from_object_reference(class c_object_reference const *)
//{
//    mangled_ppc("?get_device_index_from_object_reference@@YAJPBVc_object_reference@@@Z");
//};

//enum e_multiplayer_team_designator get_object_team_designator(long)
//{
//    mangled_ppc("?get_object_team_designator@@YA?AW4e_multiplayer_team_designator@@J@Z");
//};

//enum e_disposition get_disposition_between_team_designators(enum e_multiplayer_team_designator, enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?get_disposition_between_team_designators@@YA?AW4e_disposition@@W4e_multiplayer_team_designator@@0@Z");
//};

//bool disposition_matches_team_filter(enum e_disposition, enum e_team_filter)
//{
//    mangled_ppc("?disposition_matches_team_filter@@YA_NW4e_disposition@@W4e_team_filter@@@Z");
//};

//void set_team_for_object(long, enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?set_team_for_object@@YAXJW4e_multiplayer_team_designator@@@Z");
//};

//void set_team_for_player(long, enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?set_team_for_player@@YAXJW4e_multiplayer_team_designator@@@Z");
//};

//void get_team_designator_color(enum e_multiplayer_team_designator, union rgb_color *)
//{
//    mangled_ppc("?get_team_designator_color@@YAXW4e_multiplayer_team_designator@@PATrgb_color@@@Z");
//};

//void get_player_color(long, union rgb_color *)
//{
//    mangled_ppc("?get_player_color@@YAXJPATrgb_color@@@Z");
//};

//enum e_multiplayer_team_designator team_index_to_team_designator(enum e_multiplayer_team)
//{
//    mangled_ppc("?team_index_to_team_designator@@YA?AW4e_multiplayer_team_designator@@W4e_multiplayer_team@@@Z");
//};

//public: s_respawn_data::s_respawn_data(void)
//{
//    mangled_ppc("??0s_respawn_data@@QAA@XZ");
//};

//public: void s_respawn_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_respawn_data@@QAAXXZ");
//};

//public: bool s_respawn_data::build_update(struct s_megalogamengine_respawn_state_data *) const
//{
//    mangled_ppc("?build_update@s_respawn_data@@QBA_NPAUs_megalogamengine_respawn_state_data@@@Z");
//};

//public: void s_respawn_data::apply_update(struct s_megalogamengine_respawn_state_data const *)
//{
//    mangled_ppc("?apply_update@s_respawn_data@@QAAXPBUs_megalogamengine_respawn_state_data@@@Z");
//};

//public: bool s_respawn_data::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@s_respawn_data@@QAA_NJ@Z");
//};

//public: bool s_respawn_data::check_for_missing_objects(void)
//{
//    mangled_ppc("?check_for_missing_objects@s_respawn_data@@QAA_NXZ");
//};

//public: s_player_data::s_player_data(void)
//{
//    mangled_ppc("??0s_player_data@@QAA@XZ");
//};

//public: s_variable_values<struct s_player_variable_traits>::s_variable_values<struct s_player_variable_traits>(void)
//{
//    mangled_ppc("??0?$s_variable_values@Us_player_variable_traits@@@@QAA@XZ");
//};

//public: s_static_array<class c_game_engine_timer, 4>::s_static_array<class c_game_engine_timer, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_game_engine_timer@@$03@@QAA@XZ");
//};

//public: void s_player_data::initialize(struct s_custom_game_engine_definition const *)
//{
//    mangled_ppc("?initialize@s_player_data@@QAAXPBUs_custom_game_engine_definition@@@Z");
//};

//public: bool s_player_data::build_update_variables(struct s_variable_value_state_data<struct s_player_variable_traits> *, enum e_megalo_variable_network_state) const
//{
//    mangled_ppc("?build_update_variables@s_player_data@@QBA_NPAU?$s_variable_value_state_data@Us_player_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: void s_player_data::apply_update_variables(struct s_variable_value_state_data<struct s_player_variable_traits> const *, enum e_megalo_variable_network_state)
//{
//    mangled_ppc("?apply_update_variables@s_player_data@@QAAXPBU?$s_variable_value_state_data@Us_player_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: bool s_player_data::build_update_nav_and_boundary(struct s_megalogamengine_player_navpoint_and_boundary_state_data *) const
//{
//    mangled_ppc("?build_update_nav_and_boundary@s_player_data@@QBA_NPAUs_megalogamengine_player_navpoint_and_boundary_state_data@@@Z");
//};

//public: void s_player_data::apply_update_nav_and_boundary(struct s_megalogamengine_player_navpoint_and_boundary_state_data const *)
//{
//    mangled_ppc("?apply_update_nav_and_boundary@s_player_data@@QAAXPBUs_megalogamengine_player_navpoint_and_boundary_state_data@@@Z");
//};

//public: bool s_player_data::build_update_objective(struct s_megalogamengine_player_objective_state_data *) const
//{
//    mangled_ppc("?build_update_objective@s_player_data@@QBA_NPAUs_megalogamengine_player_objective_state_data@@@Z");
//};

//public: void s_player_data::apply_update_objective(struct s_megalogamengine_player_objective_state_data const *)
//{
//    mangled_ppc("?apply_update_objective@s_player_data@@QAAXPBUs_megalogamengine_player_objective_state_data@@@Z");
//};

//public: bool s_player_data::build_update_misc(struct s_megalogamengine_player_misc_state_data *) const
//{
//    mangled_ppc("?build_update_misc@s_player_data@@QBA_NPAUs_megalogamengine_player_misc_state_data@@@Z");
//};

//public: void s_player_data::apply_update_misc(struct s_megalogamengine_player_misc_state_data const *)
//{
//    mangled_ppc("?apply_update_misc@s_player_data@@QAAXPBUs_megalogamengine_player_misc_state_data@@@Z");
//};

//public: void s_team_data::initialize(struct s_custom_game_engine_definition const *)
//{
//    mangled_ppc("?initialize@s_team_data@@QAAXPBUs_custom_game_engine_definition@@@Z");
//};

//public: void s_team_data::initialize_for_new_round(struct s_custom_game_engine_definition const *)
//{
//    mangled_ppc("?initialize_for_new_round@s_team_data@@QAAXPBUs_custom_game_engine_definition@@@Z");
//};

//public: bool s_team_data::build_update(struct s_megalogamengine_team_state_data *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?build_update@s_team_data@@QBA_NPAUs_megalogamengine_team_state_data@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void s_team_data::apply_update(struct s_megalogamengine_team_state_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?apply_update@s_team_data@@QAAXPBUs_megalogamengine_team_state_data@@V?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: s_custom_game_engine_globals::s_custom_game_engine_globals(void)
//{
//    mangled_ppc("??0s_custom_game_engine_globals@@QAA@XZ");
//};

//public: s_player_death_info::s_player_death_info(void)
//{
//    mangled_ppc("??0s_player_death_info@@QAA@XZ");
//};

//public: s_variable_values<struct s_global_variable_traits>::s_variable_values<struct s_global_variable_traits>(void)
//{
//    mangled_ppc("??0?$s_variable_values@Us_global_variable_traits@@@@QAA@XZ");
//};

//public: s_static_array<struct s_player_data, 16>::s_static_array<struct s_player_data, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_player_data@@$0BA@@@QAA@XZ");
//};

//public: s_static_array<struct s_team_data, 9>::s_static_array<struct s_team_data, 9>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_team_data@@$08@@QAA@XZ");
//};

//public: s_static_array<class c_game_engine_timer, 8>::s_static_array<class c_game_engine_timer, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_game_engine_timer@@$07@@QAA@XZ");
//};

//public: s_team_data::s_team_data(void)
//{
//    mangled_ppc("??0s_team_data@@QAA@XZ");
//};

//public: s_variable_values<struct s_team_variable_traits>::s_variable_values<struct s_team_variable_traits>(void)
//{
//    mangled_ppc("??0?$s_variable_values@Us_team_variable_traits@@@@QAA@XZ");
//};

//public: void s_custom_game_engine_globals::initialize(void)
//{
//    mangled_ppc("?initialize@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: bool s_custom_game_engine_globals::initialize_for_new_script(struct s_custom_game_engine_definition const *)
//{
//    mangled_ppc("?initialize_for_new_script@s_custom_game_engine_globals@@QAA_NPBUs_custom_game_engine_definition@@@Z");
//};

//public: void s_custom_game_engine_globals::initialize_for_new_round(struct s_custom_game_engine_definition const *)
//{
//    mangled_ppc("?initialize_for_new_round@s_custom_game_engine_globals@@QAAXPBUs_custom_game_engine_definition@@@Z");
//};

//public: void s_custom_game_engine_globals::make_simulation_state_dirty_for_new_round(void)
//{
//    mangled_ppc("?make_simulation_state_dirty_for_new_round@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: void s_custom_game_engine_globals::update_timers(void)
//{
//    mangled_ppc("?update_timers@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: void s_custom_game_engine_globals::handle_new_multiplayer_object(long)
//{
//    mangled_ppc("?handle_new_multiplayer_object@s_custom_game_engine_globals@@QAAXJ@Z");
//};

//public: void s_custom_game_engine_globals::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@s_custom_game_engine_globals@@QAAXJ@Z");
//};

//public: void s_custom_game_engine_globals::multiplayer_object_before_team_change(long)
//{
//    mangled_ppc("?multiplayer_object_before_team_change@s_custom_game_engine_globals@@QAAXJ@Z");
//};

//public: bool c_object_filter::has_strict_team_parameter(void) const
//{
//    mangled_ppc("?has_strict_team_parameter@c_object_filter@@QBA_NXZ");
//};

//public: void s_custom_game_engine_globals::multiplayer_object_after_team_change(long)
//{
//    mangled_ppc("?multiplayer_object_after_team_change@s_custom_game_engine_globals@@QAAXJ@Z");
//};

//public: void s_custom_game_engine_globals::refresh_object_attachment_to_filter_lists(long)
//{
//    mangled_ppc("?refresh_object_attachment_to_filter_lists@s_custom_game_engine_globals@@QAAXJ@Z");
//};

//private: bool s_custom_game_engine_globals::remove_multiplayer_object_from_filter_list(long, struct s_multiplayer_object_properties *, long)
//{
//    mangled_ppc("?remove_multiplayer_object_from_filter_list@s_custom_game_engine_globals@@AAA_NJPAUs_multiplayer_object_properties@@J@Z");
//};

//private: void s_custom_game_engine_globals::add_multiplayer_object_to_filter_list(long, struct s_multiplayer_object_properties *, long)
//{
//    mangled_ppc("?add_multiplayer_object_to_filter_list@s_custom_game_engine_globals@@AAAXJPAUs_multiplayer_object_properties@@J@Z");
//};

//public: void s_custom_game_engine_globals::player_changed_indices(long, long)
//{
//    mangled_ppc("?player_changed_indices@s_custom_game_engine_globals@@QAAXJJ@Z");
//};

//public: void s_custom_game_engine_globals::player_added(long)
//{
//    mangled_ppc("?player_added@s_custom_game_engine_globals@@QAAXJ@Z");
//};

//public: struct s_player_data * s_custom_game_engine_globals::get_player_data(long)
//{
//    mangled_ppc("?get_player_data@s_custom_game_engine_globals@@QAAPAUs_player_data@@J@Z");
//};

//public: struct s_player_data const * s_custom_game_engine_globals::get_player_data(long) const
//{
//    mangled_ppc("?get_player_data@s_custom_game_engine_globals@@QBAPBUs_player_data@@J@Z");
//};

//public: struct s_team_data * s_custom_game_engine_globals::get_team_data(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?get_team_data@s_custom_game_engine_globals@@QAAPAUs_team_data@@W4e_multiplayer_team_designator@@@Z");
//};

//public: struct s_team_data const * s_custom_game_engine_globals::get_team_data(enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?get_team_data@s_custom_game_engine_globals@@QBAPBUs_team_data@@W4e_multiplayer_team_designator@@@Z");
//};

//public: enum e_multiplayer_team_designator s_custom_game_engine_globals::find_team_designator_by_simulation_object_glue_index(long) const
//{
//    mangled_ppc("?find_team_designator_by_simulation_object_glue_index@s_custom_game_engine_globals@@QBA?AW4e_multiplayer_team_designator@@J@Z");
//};

//public: void s_custom_game_engine_globals::create_team_simulation_entities(void)
//{
//    mangled_ppc("?create_team_simulation_entities@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: void s_custom_game_engine_globals::detach_team_simulation_entities(void)
//{
//    mangled_ppc("?detach_team_simulation_entities@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: long s_custom_game_engine_globals::get_first_filtered_object_index(long) const
//{
//    mangled_ppc("?get_first_filtered_object_index@s_custom_game_engine_globals@@QBAJJ@Z");
//};

//private: struct s_player_death_info * s_custom_game_engine_globals::find_player_death_info(long)
//{
//    mangled_ppc("?find_player_death_info@s_custom_game_engine_globals@@AAAPAUs_player_death_info@@J@Z");
//};

//public: struct s_player_death_info const * s_custom_game_engine_globals::get_player_death_info(long) const
//{
//    mangled_ppc("?get_player_death_info@s_custom_game_engine_globals@@QBAPBUs_player_death_info@@J@Z");
//};

//public: void s_custom_game_engine_globals::add_player_assist(long, long)
//{
//    mangled_ppc("?add_player_assist@s_custom_game_engine_globals@@QAAXJJ@Z");
//};

//public: void s_custom_game_engine_globals::add_player_special_death_type(long, enum e_special_death_type)
//{
//    mangled_ppc("?add_player_special_death_type@s_custom_game_engine_globals@@QAAXJW4e_special_death_type@@@Z");
//};

//public: void s_custom_game_engine_globals::update_after_engine(void)
//{
//    mangled_ppc("?update_after_engine@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: void s_custom_game_engine_globals::update_before_engine(void)
//{
//    mangled_ppc("?update_before_engine@s_custom_game_engine_globals@@QAAXXZ");
//};

//public: void s_custom_game_engine_globals::promote_to_simulation_authority(void)
//{
//    mangled_ppc("?promote_to_simulation_authority@s_custom_game_engine_globals@@QAAXXZ");
//};

//bool megalogamengine_initialize_for_new_script(void)
//{
//    mangled_ppc("?megalogamengine_initialize_for_new_script@@YA_NXZ");
//};

//public: long c_object_filter::get_label_string_index(void) const
//{
//    mangled_ppc("?get_label_string_index@c_object_filter@@QBAJXZ");
//};

//bool megalogamengine_initialize_for_new_script_internal(void)
//{
//    mangled_ppc("?megalogamengine_initialize_for_new_script_internal@@YA_NXZ");
//};

//bool megalogamengine_verify_object_type_references(void)
//{
//    mangled_ppc("?megalogamengine_verify_object_type_references@@YA_NXZ");
//};

//void execute_megalo_chud_message(struct s_simulation_event_megalo_chud_message_data const *)
//{
//    mangled_ppc("?execute_megalo_chud_message@@YAXPBUs_simulation_event_megalo_chud_message_data@@@Z");
//};

//public: c_entity_update_throttler<15>::c_entity_update_throttler<15>(void)
//{
//    mangled_ppc("??0?$c_entity_update_throttler@$0P@@@QAA@XZ");
//};

//public: c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_special_death_type@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_enum_no_init<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_special_death_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_special_death_type@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_special_death_type@@@Z");
//};

//public: c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_player_death_killer_type@@D$0?0$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_static_stack<class c_megalogamengine_widget, 4>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QAAXXZ");
//};

//public: long c_static_stack<class c_megalogamengine_widget, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QAAJXZ");
//};

//public: class c_megalogamengine_widget * c_static_stack<class c_megalogamengine_widget, 4>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QAAPAVc_megalogamengine_widget@@XZ");
//};

//public: c_static_stack<class c_megalogamengine_widget, 4>::c_static_stack<class c_megalogamengine_widget, 4>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Vc_megalogamengine_widget@@$03@@QAA@XZ");
//};

//public: static long s_static_array<struct s_player_data, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_player_data@@$0BA@@@SAJXZ");
//};

//public: long c_static_stack<struct s_player_death_info, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_player_death_info@@$0BA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_player_death_info, 16>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_player_death_info@@$0BA@@@QAAXXZ");
//};

//public: struct s_player_death_info & c_static_stack<struct s_player_death_info, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_player_death_info@@$0BA@@@QAAAAUs_player_death_info@@J@Z");
//};

//public: c_static_stack<struct s_player_death_info, 16>::c_static_stack<struct s_player_death_info, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_player_death_info@@$0BA@@@QAA@XZ");
//};

//public: enum e_object_team_filter c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::operator enum e_object_team_filter(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@QBA?AW4e_object_team_filter@@XZ");
//};

//public: struct s_megalogamengine_widget_persistent_state const * c_static_stack<struct s_megalogamengine_widget_persistent_state, 4>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_megalogamengine_widget_persistent_state@@$03@@QBAPBUs_megalogamengine_widget_persistent_state@@J@Z");
//};

//public: class c_object_filter const * c_static_stack<class c_object_filter, 16>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Vc_object_filter@@$0BA@@@QBAPBVc_object_filter@@J@Z");
//};

//public: c_megalogamengine_widget::c_megalogamengine_widget(void)
//{
//    mangled_ppc("??0c_megalogamengine_widget@@QAA@XZ");
//};

//public: c_megalogamengine_hud_meter_input::c_megalogamengine_hud_meter_input(void)
//{
//    mangled_ppc("??0c_megalogamengine_hud_meter_input@@QAA@XZ");
//};

//public: c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_static_stack<class c_megalogamengine_widget, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBA_NXZ");
//};

//public: long c_static_stack<class c_megalogamengine_widget, 4>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBAJXZ");
//};

//public: bool c_static_stack<class c_megalogamengine_widget, 4>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_player_purchase_mode@@E$04Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: void s_variable_values<struct s_player_variable_traits>::initialize(struct s_variable_metadata<struct s_player_variable_traits> const *)
//{
//    mangled_ppc("?initialize@?$s_variable_values@Us_player_variable_traits@@@@QAAXPBU?$s_variable_metadata@Us_player_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_player_variable_traits>::update_timers(struct s_variable_metadata<struct s_player_variable_traits> const *)
//{
//    mangled_ppc("?update_timers@?$s_variable_values@Us_player_variable_traits@@@@QAA_NPBU?$s_variable_metadata@Us_player_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_player_variable_traits>::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@?$s_variable_values@Us_player_variable_traits@@@@QAA_NJ@Z");
//};

//public: bool s_variable_values<struct s_player_variable_traits>::build_update(struct s_variable_value_state_data<struct s_player_variable_traits> *, struct s_variable_metadata<struct s_player_variable_traits> const *, enum e_megalo_variable_network_state) const
//{
//    mangled_ppc("?build_update@?$s_variable_values@Us_player_variable_traits@@@@QBA_NPAU?$s_variable_value_state_data@Us_player_variable_traits@@@@PBU?$s_variable_metadata@Us_player_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: void s_variable_values<struct s_player_variable_traits>::apply_update(struct s_variable_value_state_data<struct s_player_variable_traits> const *, struct s_variable_metadata<struct s_player_variable_traits> const *, enum e_megalo_variable_network_state)
//{
//    mangled_ppc("?apply_update@?$s_variable_values@Us_player_variable_traits@@@@QAAXPBU?$s_variable_value_state_data@Us_player_variable_traits@@@@PBU?$s_variable_metadata@Us_player_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: void s_variable_values<struct s_team_variable_traits>::initialize(struct s_variable_metadata<struct s_team_variable_traits> const *)
//{
//    mangled_ppc("?initialize@?$s_variable_values@Us_team_variable_traits@@@@QAAXPBU?$s_variable_metadata@Us_team_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_team_variable_traits>::update_timers(struct s_variable_metadata<struct s_team_variable_traits> const *)
//{
//    mangled_ppc("?update_timers@?$s_variable_values@Us_team_variable_traits@@@@QAA_NPBU?$s_variable_metadata@Us_team_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_team_variable_traits>::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@?$s_variable_values@Us_team_variable_traits@@@@QAA_NJ@Z");
//};

//public: bool s_variable_values<struct s_global_variable_traits>::update_timers(struct s_variable_metadata<struct s_global_variable_traits> const *)
//{
//    mangled_ppc("?update_timers@?$s_variable_values@Us_global_variable_traits@@@@QAA_NPBU?$s_variable_metadata@Us_global_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_global_variable_traits>::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@?$s_variable_values@Us_global_variable_traits@@@@QAA_NJ@Z");
//};

//public: bool c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_filter_parameters) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_filter_parameters@@@Z");
//};

//public: bool s_variable_values<struct s_object_variable_traits>::update_timers(struct s_variable_metadata<struct s_object_variable_traits> const *)
//{
//    mangled_ppc("?update_timers@?$s_variable_values@Us_object_variable_traits@@@@QAA_NPBU?$s_variable_metadata@Us_object_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_object_variable_traits>::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@?$s_variable_values@Us_object_variable_traits@@@@QAA_NJ@Z");
//};

//public: bool s_variable_values<struct s_object_variable_traits>::check_for_missing_objects(void)
//{
//    mangled_ppc("?check_for_missing_objects@?$s_variable_values@Us_object_variable_traits@@@@QAA_NXZ");
//};

//long int_abs<long>(long const &)
//{
//    mangled_ppc("??$int_abs@J@@YAJABJ@Z");
//};

//public: struct s_player_data & s_static_array<struct s_player_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_data@@$0BA@@@QAAAAUs_player_data@@J@Z");
//};

//public: struct s_team_data & s_static_array<struct s_team_data, 9>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_team_data@@$08@@QAAAAUs_team_data@@J@Z");
//};

//public: struct s_team_data & s_static_array<struct s_team_data, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team_designator@@@?$s_static_array@Us_team_data@@$08@@QAAAAUs_team_data@@W4e_multiplayer_team_designator@@@Z");
//};

//public: struct s_player_data const & s_static_array<struct s_player_data, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_data@@$0BA@@@QBAABUs_player_data@@J@Z");
//};

//public: struct s_team_data const & s_static_array<struct s_team_data, 9>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("??$?AW4e_multiplayer_team_designator@@@?$s_static_array@Us_team_data@@$08@@QBAABUs_team_data@@W4e_multiplayer_team_designator@@@Z");
//};

//public: void c_entity_update_throttler<15>::notify_update_forced(void)
//{
//    mangled_ppc("?notify_update_forced@?$c_entity_update_throttler@$0P@@@QAAXXZ");
//};

//public: bool c_entity_update_throttler<15>::tick(void)
//{
//    mangled_ppc("?tick@?$c_entity_update_throttler@$0P@@@QAA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_filter_parameters)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_filter_parameters@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_filter_parameters)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@CAEW4e_filter_parameters@@@Z");
//};

//public: static bool s_static_array<struct s_player_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_player_data@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_team_data, 9>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_team_data@@$08@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_team_data, 9>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team_designator@@@?$s_static_array@Us_team_data@@$08@@SA_NW4e_multiplayer_team_designator@@@Z");
//};

