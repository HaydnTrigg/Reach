/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_game_engine *custom_engine; // "?custom_engine@@3PAVc_game_engine@@A"
// bool megalo_debug; // "?megalo_debug@@3_NA"
// bool megalo_debug_filter_lists; // "?megalo_debug_filter_lists@@3_NA"
// bool verify_multiplayer_object_type_latch; // "?verify_multiplayer_object_type_latch@@3_NA"
// class c_static_stack<struct c_status_line, 256> megalo_debug_status_lines; // "?megalo_debug_status_lines@@3V?$c_static_stack@Uc_status_line@@$0BAA@@@A"

// public: virtual bool c_custom_game_engine::initialize_for_new_map(void) const;
// void enable_persistent_respawn_equipment(bool);
// public: virtual void c_custom_game_engine::dispose_from_old_map(void) const;
// public: virtual void c_custom_game_engine::initialize_for_new_round(void) const;
// public: virtual void c_custom_game_engine::build_valid_team_mapping(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *) const;
// unsigned long player_filter_get_user_mask(enum e_multiplayer_team_designator, class c_player_filter const *);
// public: virtual void c_custom_game_engine::update(void) const;
// public: bool c_player_filter::is_no_one(void) const;
// void player_get_primary_change_color(long, union rgb_color *);
// public: s_multiplayer_object_properties::s_multiplayer_object_properties(void);
// protected: virtual void c_custom_game_engine::execute_triggers(void) const;
// public: bool c_trigger::is_normal_trigger(void) const;
// public: virtual void c_custom_game_engine::object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &) const;
// public: virtual void c_custom_game_engine::player_damaged_player(long, long, long, bool) const;
// public: virtual void c_custom_game_engine::handle_incident_begin(void) const;
// public: virtual void c_custom_game_engine::handle_incident_end(void) const;
// public: void s_custom_game_engine_globals::add_player_death_info(struct s_player_death_info const *);
// public: virtual void c_custom_game_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const;
// public: virtual void c_custom_game_engine::player_assisted_with_kill(long, long) const;
// public: virtual void c_custom_game_engine::player_changed_indices(long, long) const;
// public: virtual void c_custom_game_engine::player_added(long) const;
// public: virtual enum e_multiplayer_team_designator c_custom_game_engine::get_player_team_designator(long) const;
// public: virtual bool c_custom_game_engine::player_is_enemy(long, long) const;
// public: virtual bool c_custom_game_engine::team_is_enemy(enum e_multiplayer_team, enum e_multiplayer_team) const;
// public: virtual void c_custom_game_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const;
// public: class c_player_traits const * c_game_engine_custom_variant::get_player_traits(long) const;
// bool can_render_boundary_or_navpoint_on_object(long);
// void render_debug_megalo_status_lines(void);
// public: s_status_line_printer::s_status_line_printer(union rgb_color const *, bool);
// public: void s_status_line_printer::print_line(char const *, ...);
// bool should_debug_render_megalo_object(long);
// public: s_string_with_line_breaks<512>::s_string_with_line_breaks<512>(void);
// public: virtual void c_custom_game_engine::render_debug(long) const;
// public: virtual void c_custom_game_engine::submit_navpoints(enum e_output_user_index, long) const;
// void navpoint_apply_megalo_state(struct c_chud_navpoint *, struct s_megalogamengine_navpoint_state const *);
// bool test_navpoint_distance_requirements(enum e_output_user_index, long, unsigned char, unsigned char);
// public: virtual bool c_custom_game_engine::should_draw_navpoint(enum e_output_user_index, long) const;
// public: bool c_player_filter::is_default(void) const;
// public: virtual bool c_custom_game_engine::build_player_navpoint(enum e_output_user_index, long, long, bool, struct c_chud_navpoint *) const;
// public: virtual void c_custom_game_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const;
// public: bool c_dynamic_string::is_empty(void) const;
// public: long c_game_engine_custom_variant::get_engine_icon_index(void) const;
// public: virtual void c_custom_game_engine::submit_hud_widgets(void) const;
// public: virtual bool c_custom_game_engine::requires_scenario_object(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const;
// public: virtual bool c_custom_game_engine::requires_unplaced_object(struct s_object_placement_data const *) const;
// public: virtual void c_custom_game_engine::handle_new_multiplayer_object(long) const;
// public: virtual void c_custom_game_engine::handle_deleted_object(long) const;
// public: virtual void c_custom_game_engine::multiplayer_object_before_team_change(long, enum e_multiplayer_team_designator) const;
// public: virtual void c_custom_game_engine::multiplayer_object_after_team_change(long, enum e_multiplayer_team_designator) const;
// public: void c_custom_game_engine::refresh_object_attachment_to_filter_lists(long) const;
// public: virtual bool c_custom_game_engine::coop_spawning_enabled(long) const;
// public: virtual bool c_custom_game_engine::allow_weapon_pickup(long, long) const;
// public: c_player_filter::c_player_filter(void);
// public: virtual bool c_custom_game_engine::does_weapon_have_pickup_priority(long) const;
// public: virtual bool c_custom_game_engine::should_auto_pickup_weapon(long, long) const;
// public: virtual enum e_simulation_entity_type c_custom_game_engine::get_simulation_entity_type(void) const;
// public: virtual void c_custom_game_engine::build_simulation_baseline(long, void *) const;
// public: virtual void c_custom_game_engine::build_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const;
// public: virtual bool c_custom_game_engine::apply_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const;
// public: virtual void c_custom_game_engine::build_player_baseline(long, void *) const;
// public: virtual void c_custom_game_engine::build_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const;
// public: virtual bool c_custom_game_engine::apply_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const;
// public: virtual void c_custom_game_engine::build_snapshot_state(class c_bitstream *) const;
// public: s_variable_value_state_data<struct s_global_variable_traits>::s_variable_value_state_data<struct s_global_variable_traits>(void);
// public: s_megalogamengine_team_state_data::s_megalogamengine_team_state_data(void);
// public: s_megalogamengine_player_misc_state_data::s_megalogamengine_player_misc_state_data(void);
// public: s_megalogamengine_player_navpoint_and_boundary_state_data::s_megalogamengine_player_navpoint_and_boundary_state_data(void);
// public: s_variable_value_state_data<struct s_player_variable_traits>::s_variable_value_state_data<struct s_player_variable_traits>(void);
// public: s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>(void);
// public: s_static_array<struct s_game_engine_timer_state_data, 8>::s_static_array<struct s_game_engine_timer_state_data, 8>(void);
// public: s_variable_value_state_data<struct s_team_variable_traits>::s_variable_value_state_data<struct s_team_variable_traits>(void);
// public: s_megalogamengine_navpoint_state::s_megalogamengine_navpoint_state(void);
// public: s_megalo_object_boundary_state::s_megalo_object_boundary_state(void);
// public: s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 4>::s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 4>(void);
// public: s_static_array<struct s_game_engine_timer_state_data, 4>::s_static_array<struct s_game_engine_timer_state_data, 4>(void);
// public: s_game_engine_timer_state_data::s_game_engine_timer_state_data(void);
// protected: void c_custom_game_engine::restore_from_snapshot_state(class c_bitstream *, enum e_game_engine_restoration_type) const;
// public: virtual void c_custom_game_engine::detach_from_simulation(void) const;
// public: virtual void c_custom_game_engine::promote_to_simulation_authority(class c_bitstream *, enum e_game_engine_restoration_type) const;
// public: virtual void c_custom_game_engine::notify_authority_that_client_reset_game_engine_state(void) const;
// struct s_custom_game_engine_globals * get_custom_game_engine_globals(void);
// struct s_custom_game_engine_definition const * get_custom_game_engine_definition(void);
// class c_game_engine_custom_variant const * get_custom_game_engine_variant(void);
// float blink(float, float, float);
// void verify_multiplayer_object_type_bitvector(void);
// public: bool c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator==(enum e_trigger_type) const;
// public: c_enum<enum e_player_filter_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_player_filter_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: bool c_enum_no_init<enum e_player_filter_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_player_filter_type) const;
// public: c_enum<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>::c_enum<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>(void);
// public: enum e_chud_navpoint_icon_type c_enum_no_init<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>::operator enum e_chud_navpoint_icon_type(void) const;
// public: c_enum<enum e_navpoint_priority, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_navpoint_priority, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: enum e_navpoint_priority c_enum_no_init<enum e_navpoint_priority, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_navpoint_priority(void) const;
// public: bool c_enum_no_init<enum e_weapon_pickup_priority, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_weapon_pickup_priority) const;
// public: c_enum<enum e_requisition_palette_type, unsigned char, 0, 13, struct s_default_enum_string_resolver>::c_enum<enum e_requisition_palette_type, unsigned char, 0, 13, struct s_default_enum_string_resolver>(void);
// public: class c_trigger const & c_static_stack<class c_trigger, 320>::operator[](long) const;
// public: class c_object_filter const & c_static_stack<class c_object_filter, 16>::operator[](long) const;
// public: class c_object_filter const * c_static_stack<class c_object_filter, 16>::begin(void) const;
// public: class c_object_filter const * c_static_stack<class c_object_filter, 16>::end(void) const;
// public: long s_variable_values<struct s_player_variable_traits>::get_player_variable(long) const;
// public: c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_special_death_type);
// public: enum e_special_death_type c_enum_no_init<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_special_death_type(void) const;
// public: c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>(enum e_player_death_killer_type);
// public: enum e_player_death_killer_type c_enum_no_init<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>::operator enum e_player_death_killer_type(void) const;
// public: long c_static_stack<class c_megalogamengine_widget, 4>::count(void) const;
// public: class c_megalogamengine_widget const & c_static_stack<class c_megalogamengine_widget, 4>::operator[](long) const;
// public: class c_megalogamengine_widget & c_static_stack<class c_megalogamengine_widget, 4>::operator[](long);
// public: class c_megalogamengine_widget * c_static_stack<class c_megalogamengine_widget, 4>::get(long);
// public: void c_static_stack<struct s_player_death_info, 16>::push_back(struct s_player_death_info const &);
// public: struct s_player_trait_option const * c_static_stack<struct s_player_trait_option, 16>::get(long) const;
// public: long s_variable_values<struct s_object_variable_traits>::get_player_variable(long) const;
// public: c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: static long c_static_stack<struct c_status_line, 256>::maximum_count(void);
// public: void c_static_stack<struct c_status_line, 256>::clear(void);
// public: long c_static_stack<struct c_status_line, 256>::push(void);
// public: struct c_status_line * c_static_stack<struct c_status_line, 256>::get(long);
// public: struct c_status_line * c_static_stack<struct c_status_line, 256>::get_elements(void);
// public: bool c_static_stack<class c_trigger, 320>::valid(long) const;
// public: bool c_static_stack<class c_megalogamengine_widget, 4>::valid(long) const;
// public: long c_static_stack<struct s_player_death_info, 16>::push(void);
// public: struct s_player_death_info * c_static_stack<struct s_player_death_info, 16>::get(long);
// public: bool c_static_stack<struct s_player_trait_option, 16>::valid(long) const;
// public: bool c_static_stack<struct c_status_line, 256>::valid(long) const;
// public: bool c_static_stack<struct c_status_line, 256>::full(void) const;
// public: bool c_static_stack<class c_trigger, 320>::valid(void) const;
// public: bool c_static_stack<class c_megalogamengine_widget, 4>::valid(void) const;
// public: bool c_static_stack<struct s_player_death_info, 16>::valid(long) const;
// public: bool c_static_stack<struct s_player_death_info, 16>::full(void) const;
// public: bool c_static_stack<struct s_player_trait_option, 16>::valid(void) const;
// public: bool c_static_stack<struct c_status_line, 256>::valid(void) const;
// public: bool c_static_stack<struct s_player_death_info, 16>::valid(void) const;
// public: bool c_static_wchar_string<128>::is_empty(void) const;
// public: wchar_t const * c_static_wchar_string<128>::operator wchar_t const *(void) const;
// public: c_flags<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: char const * s_static_string<64>::append_print(char const *, ...);
// public: bool s_variable_values<struct s_player_variable_traits>::check_for_missing_objects(void);
// public: bool s_variable_values<struct s_team_variable_traits>::check_for_missing_objects(void);
// public: bool s_variable_values<struct s_team_variable_traits>::build_update(struct s_variable_value_state_data<struct s_team_variable_traits> *, struct s_variable_metadata<struct s_team_variable_traits> const *, enum e_megalo_variable_network_state) const;
// public: void s_variable_values<struct s_team_variable_traits>::apply_update(struct s_variable_value_state_data<struct s_team_variable_traits> const *, struct s_variable_metadata<struct s_team_variable_traits> const *, enum e_megalo_variable_network_state);
// public: void s_variable_values<struct s_global_variable_traits>::initialize(struct s_variable_metadata<struct s_global_variable_traits> const *);
// public: bool s_variable_values<struct s_global_variable_traits>::check_for_missing_objects(void);
// public: bool s_variable_values<struct s_global_variable_traits>::build_update(struct s_variable_value_state_data<struct s_global_variable_traits> *, struct s_variable_metadata<struct s_global_variable_traits> const *, enum e_megalo_variable_network_state) const;
// public: void s_variable_values<struct s_global_variable_traits>::apply_update(struct s_variable_value_state_data<struct s_global_variable_traits> const *, struct s_variable_metadata<struct s_global_variable_traits> const *, enum e_megalo_variable_network_state);
// public: c_flags<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::c_flags<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::c_flags<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>(void);
// public: char const * s_static_string<512>::operator char const *(void) const;
// long print_variables<struct s_object_variable_traits, struct s_string_with_line_breaks<512> >(struct s_string_with_line_breaks<512> *, struct s_variable_metadata<struct s_object_variable_traits> const *, struct s_variable_values<struct s_object_variable_traits> const *);
// void print_navpoint_state_to_string<512>(class c_static_string<512> *, struct s_megalogamengine_navpoint_state const *);
// long print_variables<struct s_player_variable_traits, struct s_string_with_line_breaks<512> >(struct s_string_with_line_breaks<512> *, struct s_variable_metadata<struct s_player_variable_traits> const *, struct s_variable_values<struct s_player_variable_traits> const *);
// long print_variables<struct s_team_variable_traits, struct s_status_line_printer>(struct s_status_line_printer *, struct s_variable_metadata<struct s_team_variable_traits> const *, struct s_variable_values<struct s_team_variable_traits> const *);
// public: void c_game_engine_timer::print_to<128>(class c_static_string<128> *) const;
// long print_variables<struct s_global_variable_traits, struct s_status_line_printer>(struct s_status_line_printer *, struct s_variable_metadata<struct s_global_variable_traits> const *, struct s_variable_values<struct s_global_variable_traits> const *);
// public: class c_game_engine_timer & s_static_array<class c_game_engine_timer, 4>::operator[]<char>(char);
// public: bool c_enum_no_init<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>::operator==(enum e_chud_navpoint_icon_type) const;
// public: long s_variable_values<struct s_team_variable_traits>::get_player_variable(long) const;
// public: long s_variable_values<struct s_global_variable_traits>::get_player_variable(long) const;
// public: void s_string_with_line_breaks<512>::print_line(char const *, ...);
// public: bool c_flags_no_init<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: long const & s_static_array<long, 6>::operator[]<long>(long) const;
// public: class c_game_engine_timer & s_static_array<class c_game_engine_timer, 8>::operator[]<long>(long);
// public: class c_game_engine_timer const & s_static_array<class c_game_engine_timer, 8>::operator[]<long>(long) const;
// public: bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: char const * s_static_string<512>::append_print_va(char const *, char *);
// void print_timer_seconds_to_string<128>(long, class c_static_string<128> *);
// public: static bool s_static_array<class c_game_engine_timer, 4>::valid<char>(char);
// public: static bool s_static_array<class c_game_engine_timer, 8>::valid<long>(long);
// public: c_static_stack<struct c_status_line, 256>::c_static_stack<struct c_status_line, 256>(void);

//public: virtual bool c_custom_game_engine::initialize_for_new_map(void) const
//{
//    mangled_ppc("?initialize_for_new_map@c_custom_game_engine@@UBA_NXZ");
//};

//void enable_persistent_respawn_equipment(bool)
//{
//    mangled_ppc("?enable_persistent_respawn_equipment@@YAX_N@Z");
//};

//public: virtual void c_custom_game_engine::dispose_from_old_map(void) const
//{
//    mangled_ppc("?dispose_from_old_map@c_custom_game_engine@@UBAXXZ");
//};

//public: virtual void c_custom_game_engine::initialize_for_new_round(void) const
//{
//    mangled_ppc("?initialize_for_new_round@c_custom_game_engine@@UBAXXZ");
//};

//public: virtual void c_custom_game_engine::build_valid_team_mapping(class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *, class s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8> *) const
//{
//    mangled_ppc("?build_valid_team_mapping@c_custom_game_engine@@UBAXPAV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@PAV?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@0PAV?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@@Z");
//};

//unsigned long player_filter_get_user_mask(enum e_multiplayer_team_designator, class c_player_filter const *)
//{
//    mangled_ppc("?player_filter_get_user_mask@@YAKW4e_multiplayer_team_designator@@PBVc_player_filter@@@Z");
//};

//public: virtual void c_custom_game_engine::update(void) const
//{
//    mangled_ppc("?update@c_custom_game_engine@@UBAXXZ");
//};

//public: bool c_player_filter::is_no_one(void) const
//{
//    mangled_ppc("?is_no_one@c_player_filter@@QBA_NXZ");
//};

//void player_get_primary_change_color(long, union rgb_color *)
//{
//    mangled_ppc("?player_get_primary_change_color@@YAXJPATrgb_color@@@Z");
//};

//public: s_multiplayer_object_properties::s_multiplayer_object_properties(void)
//{
//    mangled_ppc("??0s_multiplayer_object_properties@@QAA@XZ");
//};

//protected: virtual void c_custom_game_engine::execute_triggers(void) const
//{
//    mangled_ppc("?execute_triggers@c_custom_game_engine@@MBAXXZ");
//};

//public: bool c_trigger::is_normal_trigger(void) const
//{
//    mangled_ppc("?is_normal_trigger@c_trigger@@QBA_NXZ");
//};

//public: virtual void c_custom_game_engine::object_killed(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?object_killed@c_custom_game_engine@@UBAXJJJABVc_game_team@@ABUs_damage_reporting_info@@@Z");
//};

//public: virtual void c_custom_game_engine::player_damaged_player(long, long, long, bool) const
//{
//    mangled_ppc("?player_damaged_player@c_custom_game_engine@@UBAXJJJ_N@Z");
//};

//public: virtual void c_custom_game_engine::handle_incident_begin(void) const
//{
//    mangled_ppc("?handle_incident_begin@c_custom_game_engine@@UBAXXZ");
//};

//public: virtual void c_custom_game_engine::handle_incident_end(void) const
//{
//    mangled_ppc("?handle_incident_end@c_custom_game_engine@@UBAXXZ");
//};

//public: void s_custom_game_engine_globals::add_player_death_info(struct s_player_death_info const *)
//{
//    mangled_ppc("?add_player_death_info@s_custom_game_engine_globals@@QAAXPBUs_player_death_info@@@Z");
//};

//public: virtual void c_custom_game_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?handle_incident@c_custom_game_engine@@UBAXJJJABUs_damage_reporting_info@@@Z");
//};

//public: virtual void c_custom_game_engine::player_assisted_with_kill(long, long) const
//{
//    mangled_ppc("?player_assisted_with_kill@c_custom_game_engine@@UBAXJJ@Z");
//};

//public: virtual void c_custom_game_engine::player_changed_indices(long, long) const
//{
//    mangled_ppc("?player_changed_indices@c_custom_game_engine@@UBAXJJ@Z");
//};

//public: virtual void c_custom_game_engine::player_added(long) const
//{
//    mangled_ppc("?player_added@c_custom_game_engine@@UBAXJ@Z");
//};

//public: virtual enum e_multiplayer_team_designator c_custom_game_engine::get_player_team_designator(long) const
//{
//    mangled_ppc("?get_player_team_designator@c_custom_game_engine@@UBA?AW4e_multiplayer_team_designator@@J@Z");
//};

//public: virtual bool c_custom_game_engine::player_is_enemy(long, long) const
//{
//    mangled_ppc("?player_is_enemy@c_custom_game_engine@@UBA_NJJ@Z");
//};

//public: virtual bool c_custom_game_engine::team_is_enemy(enum e_multiplayer_team, enum e_multiplayer_team) const
//{
//    mangled_ppc("?team_is_enemy@c_custom_game_engine@@UBA_NW4e_multiplayer_team@@0@Z");
//};

//public: virtual void c_custom_game_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const
//{
//    mangled_ppc("?apply_game_engine_traits_for_player@c_custom_game_engine@@UBAXJPAVc_player_traits@@@Z");
//};

//public: class c_player_traits const * c_game_engine_custom_variant::get_player_traits(long) const
//{
//    mangled_ppc("?get_player_traits@c_game_engine_custom_variant@@QBAPBVc_player_traits@@J@Z");
//};

//bool can_render_boundary_or_navpoint_on_object(long)
//{
//    mangled_ppc("?can_render_boundary_or_navpoint_on_object@@YA_NJ@Z");
//};

//void render_debug_megalo_status_lines(void)
//{
//    mangled_ppc("?render_debug_megalo_status_lines@@YAXXZ");
//};

//public: s_status_line_printer::s_status_line_printer(union rgb_color const *, bool)
//{
//    mangled_ppc("??0s_status_line_printer@@QAA@PBTrgb_color@@_N@Z");
//};

//public: void s_status_line_printer::print_line(char const *, ...)
//{
//    mangled_ppc("?print_line@s_status_line_printer@@QAAXPBDZZ");
//};

//bool should_debug_render_megalo_object(long)
//{
//    mangled_ppc("?should_debug_render_megalo_object@@YA_NJ@Z");
//};

//public: s_string_with_line_breaks<512>::s_string_with_line_breaks<512>(void)
//{
//    mangled_ppc("??0?$s_string_with_line_breaks@$0CAA@@@QAA@XZ");
//};

//public: virtual void c_custom_game_engine::render_debug(long) const
//{
//    mangled_ppc("?render_debug@c_custom_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_custom_game_engine::submit_navpoints(enum e_output_user_index, long) const
//{
//    mangled_ppc("?submit_navpoints@c_custom_game_engine@@UBAXW4e_output_user_index@@J@Z");
//};

//void navpoint_apply_megalo_state(struct c_chud_navpoint *, struct s_megalogamengine_navpoint_state const *)
//{
//    mangled_ppc("?navpoint_apply_megalo_state@@YAXPAUc_chud_navpoint@@PBUs_megalogamengine_navpoint_state@@@Z");
//};

//bool test_navpoint_distance_requirements(enum e_output_user_index, long, unsigned char, unsigned char)
//{
//    mangled_ppc("?test_navpoint_distance_requirements@@YA_NW4e_output_user_index@@JEE@Z");
//};

//public: virtual bool c_custom_game_engine::should_draw_navpoint(enum e_output_user_index, long) const
//{
//    mangled_ppc("?should_draw_navpoint@c_custom_game_engine@@UBA_NW4e_output_user_index@@J@Z");
//};

//public: bool c_player_filter::is_default(void) const
//{
//    mangled_ppc("?is_default@c_player_filter@@QBA_NXZ");
//};

//public: virtual bool c_custom_game_engine::build_player_navpoint(enum e_output_user_index, long, long, bool, struct c_chud_navpoint *) const
//{
//    mangled_ppc("?build_player_navpoint@c_custom_game_engine@@UBA_NW4e_output_user_index@@JJ_NPAUc_chud_navpoint@@@Z");
//};

//public: virtual void c_custom_game_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const
//{
//    mangled_ppc("?get_hud_interface_state@c_custom_game_engine@@UBAXJPAUgame_engine_interface_state@@@Z");
//};

//public: bool c_dynamic_string::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_dynamic_string@@QBA_NXZ");
//};

//public: long c_game_engine_custom_variant::get_engine_icon_index(void) const
//{
//    mangled_ppc("?get_engine_icon_index@c_game_engine_custom_variant@@QBAJXZ");
//};

//public: virtual void c_custom_game_engine::submit_hud_widgets(void) const
//{
//    mangled_ppc("?submit_hud_widgets@c_custom_game_engine@@UBAXXZ");
//};

//public: virtual bool c_custom_game_engine::requires_scenario_object(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const
//{
//    mangled_ppc("?requires_scenario_object@c_custom_game_engine@@UBA_NJW4e_object_type@@JPBUs_scenario_object@@PBUs_scenario_multiplayer_object_properties@@@Z");
//};

//public: virtual bool c_custom_game_engine::requires_unplaced_object(struct s_object_placement_data const *) const
//{
//    mangled_ppc("?requires_unplaced_object@c_custom_game_engine@@UBA_NPBUs_object_placement_data@@@Z");
//};

//public: virtual void c_custom_game_engine::handle_new_multiplayer_object(long) const
//{
//    mangled_ppc("?handle_new_multiplayer_object@c_custom_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_custom_game_engine::handle_deleted_object(long) const
//{
//    mangled_ppc("?handle_deleted_object@c_custom_game_engine@@UBAXJ@Z");
//};

//public: virtual void c_custom_game_engine::multiplayer_object_before_team_change(long, enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?multiplayer_object_before_team_change@c_custom_game_engine@@UBAXJW4e_multiplayer_team_designator@@@Z");
//};

//public: virtual void c_custom_game_engine::multiplayer_object_after_team_change(long, enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?multiplayer_object_after_team_change@c_custom_game_engine@@UBAXJW4e_multiplayer_team_designator@@@Z");
//};

//public: void c_custom_game_engine::refresh_object_attachment_to_filter_lists(long) const
//{
//    mangled_ppc("?refresh_object_attachment_to_filter_lists@c_custom_game_engine@@QBAXJ@Z");
//};

//public: virtual bool c_custom_game_engine::coop_spawning_enabled(long) const
//{
//    mangled_ppc("?coop_spawning_enabled@c_custom_game_engine@@UBA_NJ@Z");
//};

//public: virtual bool c_custom_game_engine::allow_weapon_pickup(long, long) const
//{
//    mangled_ppc("?allow_weapon_pickup@c_custom_game_engine@@UBA_NJJ@Z");
//};

//public: c_player_filter::c_player_filter(void)
//{
//    mangled_ppc("??0c_player_filter@@QAA@XZ");
//};

//public: virtual bool c_custom_game_engine::does_weapon_have_pickup_priority(long) const
//{
//    mangled_ppc("?does_weapon_have_pickup_priority@c_custom_game_engine@@UBA_NJ@Z");
//};

//public: virtual bool c_custom_game_engine::should_auto_pickup_weapon(long, long) const
//{
//    mangled_ppc("?should_auto_pickup_weapon@c_custom_game_engine@@UBA_NJJ@Z");
//};

//public: virtual enum e_simulation_entity_type c_custom_game_engine::get_simulation_entity_type(void) const
//{
//    mangled_ppc("?get_simulation_entity_type@c_custom_game_engine@@UBA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual void c_custom_game_engine::build_simulation_baseline(long, void *) const
//{
//    mangled_ppc("?build_simulation_baseline@c_custom_game_engine@@UBAXJPAX@Z");
//};

//public: virtual void c_custom_game_engine::build_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const
//{
//    mangled_ppc("?build_simulation_update@c_custom_game_engine@@UBAXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_custom_game_engine::apply_simulation_update(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const
//{
//    mangled_ppc("?apply_simulation_update@c_custom_game_engine@@UBA_NV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual void c_custom_game_engine::build_player_baseline(long, void *) const
//{
//    mangled_ppc("?build_player_baseline@c_custom_game_engine@@UBAXJPAX@Z");
//};

//public: virtual void c_custom_game_engine::build_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *) const
//{
//    mangled_ppc("?build_player_update@c_custom_game_engine@@UBAXFPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_custom_game_engine::apply_player_update(short, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *) const
//{
//    mangled_ppc("?apply_player_update@c_custom_game_engine@@UBA_NFV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual void c_custom_game_engine::build_snapshot_state(class c_bitstream *) const
//{
//    mangled_ppc("?build_snapshot_state@c_custom_game_engine@@UBAXPAVc_bitstream@@@Z");
//};

//public: s_variable_value_state_data<struct s_global_variable_traits>::s_variable_value_state_data<struct s_global_variable_traits>(void)
//{
//    mangled_ppc("??0?$s_variable_value_state_data@Us_global_variable_traits@@@@QAA@XZ");
//};

//public: s_megalogamengine_team_state_data::s_megalogamengine_team_state_data(void)
//{
//    mangled_ppc("??0s_megalogamengine_team_state_data@@QAA@XZ");
//};

//public: s_megalogamengine_player_misc_state_data::s_megalogamengine_player_misc_state_data(void)
//{
//    mangled_ppc("??0s_megalogamengine_player_misc_state_data@@QAA@XZ");
//};

//public: s_megalogamengine_player_navpoint_and_boundary_state_data::s_megalogamengine_player_navpoint_and_boundary_state_data(void)
//{
//    mangled_ppc("??0s_megalogamengine_player_navpoint_and_boundary_state_data@@QAA@XZ");
//};

//public: s_variable_value_state_data<struct s_player_variable_traits>::s_variable_value_state_data<struct s_player_variable_traits>(void)
//{
//    mangled_ppc("??0?$s_variable_value_state_data@Us_player_variable_traits@@@@QAA@XZ");
//};

//public: s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QAA@XZ");
//};

//public: s_static_array<struct s_game_engine_timer_state_data, 8>::s_static_array<struct s_game_engine_timer_state_data, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_game_engine_timer_state_data@@$07@@QAA@XZ");
//};

//public: s_variable_value_state_data<struct s_team_variable_traits>::s_variable_value_state_data<struct s_team_variable_traits>(void)
//{
//    mangled_ppc("??0?$s_variable_value_state_data@Us_team_variable_traits@@@@QAA@XZ");
//};

//public: s_megalogamengine_navpoint_state::s_megalogamengine_navpoint_state(void)
//{
//    mangled_ppc("??0s_megalogamengine_navpoint_state@@QAA@XZ");
//};

//public: s_megalo_object_boundary_state::s_megalo_object_boundary_state(void)
//{
//    mangled_ppc("??0s_megalo_object_boundary_state@@QAA@XZ");
//};

//public: s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 4>::s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$03@@QAA@XZ");
//};

//public: s_static_array<struct s_game_engine_timer_state_data, 4>::s_static_array<struct s_game_engine_timer_state_data, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_game_engine_timer_state_data@@$03@@QAA@XZ");
//};

//public: s_game_engine_timer_state_data::s_game_engine_timer_state_data(void)
//{
//    mangled_ppc("??0s_game_engine_timer_state_data@@QAA@XZ");
//};

//protected: void c_custom_game_engine::restore_from_snapshot_state(class c_bitstream *, enum e_game_engine_restoration_type) const
//{
//    mangled_ppc("?restore_from_snapshot_state@c_custom_game_engine@@IBAXPAVc_bitstream@@W4e_game_engine_restoration_type@@@Z");
//};

//public: virtual void c_custom_game_engine::detach_from_simulation(void) const
//{
//    mangled_ppc("?detach_from_simulation@c_custom_game_engine@@UBAXXZ");
//};

//public: virtual void c_custom_game_engine::promote_to_simulation_authority(class c_bitstream *, enum e_game_engine_restoration_type) const
//{
//    mangled_ppc("?promote_to_simulation_authority@c_custom_game_engine@@UBAXPAVc_bitstream@@W4e_game_engine_restoration_type@@@Z");
//};

//public: virtual void c_custom_game_engine::notify_authority_that_client_reset_game_engine_state(void) const
//{
//    mangled_ppc("?notify_authority_that_client_reset_game_engine_state@c_custom_game_engine@@UBAXXZ");
//};

//struct s_custom_game_engine_globals * get_custom_game_engine_globals(void)
//{
//    mangled_ppc("?get_custom_game_engine_globals@@YAPAUs_custom_game_engine_globals@@XZ");
//};

//struct s_custom_game_engine_definition const * get_custom_game_engine_definition(void)
//{
//    mangled_ppc("?get_custom_game_engine_definition@@YAPBUs_custom_game_engine_definition@@XZ");
//};

//class c_game_engine_custom_variant const * get_custom_game_engine_variant(void)
//{
//    mangled_ppc("?get_custom_game_engine_variant@@YAPBVc_game_engine_custom_variant@@XZ");
//};

//float blink(float, float, float)
//{
//    mangled_ppc("?blink@@YAMMMM@Z");
//};

//void verify_multiplayer_object_type_bitvector(void)
//{
//    mangled_ppc("?verify_multiplayer_object_type_bitvector@@YAXXZ");
//};

//public: bool c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator==(enum e_trigger_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@QBA_NW4e_trigger_type@@@Z");
//};

//public: c_enum<enum e_player_filter_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_player_filter_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_player_filter_type@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_enum_no_init<enum e_player_filter_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_player_filter_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_player_filter_type@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_player_filter_type@@@Z");
//};

//public: c_enum<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>::c_enum<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_chud_navpoint_icon_type@@D$0?0$0BM@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: enum e_chud_navpoint_icon_type c_enum_no_init<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>::operator enum e_chud_navpoint_icon_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_chud_navpoint_icon_type@@D$0?0$0BM@Us_default_enum_string_resolver@@@@QBA?AW4e_chud_navpoint_icon_type@@XZ");
//};

//public: c_enum<enum e_navpoint_priority, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_navpoint_priority, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_navpoint_priority@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: enum e_navpoint_priority c_enum_no_init<enum e_navpoint_priority, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_navpoint_priority(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_navpoint_priority@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_navpoint_priority@@XZ");
//};

//public: bool c_enum_no_init<enum e_weapon_pickup_priority, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_weapon_pickup_priority) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_weapon_pickup_priority@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_weapon_pickup_priority@@@Z");
//};

//public: c_enum<enum e_requisition_palette_type, unsigned char, 0, 13, struct s_default_enum_string_resolver>::c_enum<enum e_requisition_palette_type, unsigned char, 0, 13, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_requisition_palette_type@@E$0A@$0N@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class c_trigger const & c_static_stack<class c_trigger, 320>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Vc_trigger@@$0BEA@@@QBAABVc_trigger@@J@Z");
//};

//public: class c_object_filter const & c_static_stack<class c_object_filter, 16>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Vc_object_filter@@$0BA@@@QBAABVc_object_filter@@J@Z");
//};

//public: class c_object_filter const * c_static_stack<class c_object_filter, 16>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_stack@Vc_object_filter@@$0BA@@@QBAPBVc_object_filter@@XZ");
//};

//public: class c_object_filter const * c_static_stack<class c_object_filter, 16>::end(void) const
//{
//    mangled_ppc("?end@?$c_static_stack@Vc_object_filter@@$0BA@@@QBAPBVc_object_filter@@XZ");
//};

//public: long s_variable_values<struct s_player_variable_traits>::get_player_variable(long) const
//{
//    mangled_ppc("?get_player_variable@?$s_variable_values@Us_player_variable_traits@@@@QBAJJ@Z");
//};

//public: c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_special_death_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_special_death_type@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_special_death_type@@@Z");
//};

//public: enum e_special_death_type c_enum_no_init<enum e_special_death_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_special_death_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_special_death_type@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_special_death_type@@XZ");
//};

//public: c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>(enum e_player_death_killer_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_player_death_killer_type@@D$0?0$04Us_default_enum_string_resolver@@@@QAA@W4e_player_death_killer_type@@@Z");
//};

//public: enum e_player_death_killer_type c_enum_no_init<enum e_player_death_killer_type, char, -1, 5, struct s_default_enum_string_resolver>::operator enum e_player_death_killer_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_player_death_killer_type@@D$0?0$04Us_default_enum_string_resolver@@@@QBA?AW4e_player_death_killer_type@@XZ");
//};

//public: long c_static_stack<class c_megalogamengine_widget, 4>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBAJXZ");
//};

//public: class c_megalogamengine_widget const & c_static_stack<class c_megalogamengine_widget, 4>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBAABVc_megalogamengine_widget@@J@Z");
//};

//public: class c_megalogamengine_widget & c_static_stack<class c_megalogamengine_widget, 4>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Vc_megalogamengine_widget@@$03@@QAAAAVc_megalogamengine_widget@@J@Z");
//};

//public: class c_megalogamengine_widget * c_static_stack<class c_megalogamengine_widget, 4>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QAAPAVc_megalogamengine_widget@@J@Z");
//};

//public: void c_static_stack<struct s_player_death_info, 16>::push_back(struct s_player_death_info const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_player_death_info@@$0BA@@@QAAXABUs_player_death_info@@@Z");
//};

//public: struct s_player_trait_option const * c_static_stack<struct s_player_trait_option, 16>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_player_trait_option@@$0BA@@@QBAPBUs_player_trait_option@@J@Z");
//};

//public: long s_variable_values<struct s_object_variable_traits>::get_player_variable(long) const
//{
//    mangled_ppc("?get_player_variable@?$s_variable_values@Us_object_variable_traits@@@@QBAJJ@Z");
//};

//public: c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_spawn_timer_type, char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_spawn_timer_type@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_multiplayer_object_remapping_policy, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_object_remapping_policy@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_symmetric_placement, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_symmetric_placement@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static long c_static_stack<struct c_status_line, 256>::maximum_count(void)
//{
//    mangled_ppc("?maximum_count@?$c_static_stack@Uc_status_line@@$0BAA@@@SAJXZ");
//};

//public: void c_static_stack<struct c_status_line, 256>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Uc_status_line@@$0BAA@@@QAAXXZ");
//};

//public: long c_static_stack<struct c_status_line, 256>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Uc_status_line@@$0BAA@@@QAAJXZ");
//};

//public: struct c_status_line * c_static_stack<struct c_status_line, 256>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Uc_status_line@@$0BAA@@@QAAPAUc_status_line@@J@Z");
//};

//public: struct c_status_line * c_static_stack<struct c_status_line, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Uc_status_line@@$0BAA@@@QAAPAUc_status_line@@XZ");
//};

//public: bool c_static_stack<class c_trigger, 320>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_trigger@@$0BEA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class c_megalogamengine_widget, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_player_death_info, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_player_death_info@@$0BA@@@QAAJXZ");
//};

//public: struct s_player_death_info * c_static_stack<struct s_player_death_info, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_player_death_info@@$0BA@@@QAAPAUs_player_death_info@@J@Z");
//};

//public: bool c_static_stack<struct s_player_trait_option, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_player_trait_option@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_status_line, 256>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uc_status_line@@$0BAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_status_line, 256>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Uc_status_line@@$0BAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_trigger, 320>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_trigger@@$0BEA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_megalogamengine_widget, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_megalogamengine_widget@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_player_death_info, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_player_death_info@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_player_death_info, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_player_death_info@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_player_trait_option, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_player_trait_option@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_status_line, 256>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uc_status_line@@$0BAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_player_death_info, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_player_death_info@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_wchar_string<128>::is_empty(void) const
//{
//    mangled_ppc("?is_empty@?$c_static_wchar_string@$0IA@@@QBA_NXZ");
//};

//public: wchar_t const * c_static_wchar_string<128>::operator wchar_t const *(void) const
//{
//    mangled_ppc("??B?$c_static_wchar_string@$0IA@@@QBAPB_WXZ");
//};

//public: c_flags<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_player_purchase_mode@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: char const * s_static_string<64>::append_print(char const *, ...)
//{
//    mangled_ppc("?append_print@?$s_static_string@$0EA@@@QAAPBDPBDZZ");
//};

//public: bool s_variable_values<struct s_player_variable_traits>::check_for_missing_objects(void)
//{
//    mangled_ppc("?check_for_missing_objects@?$s_variable_values@Us_player_variable_traits@@@@QAA_NXZ");
//};

//public: bool s_variable_values<struct s_team_variable_traits>::check_for_missing_objects(void)
//{
//    mangled_ppc("?check_for_missing_objects@?$s_variable_values@Us_team_variable_traits@@@@QAA_NXZ");
//};

//public: bool s_variable_values<struct s_team_variable_traits>::build_update(struct s_variable_value_state_data<struct s_team_variable_traits> *, struct s_variable_metadata<struct s_team_variable_traits> const *, enum e_megalo_variable_network_state) const
//{
//    mangled_ppc("?build_update@?$s_variable_values@Us_team_variable_traits@@@@QBA_NPAU?$s_variable_value_state_data@Us_team_variable_traits@@@@PBU?$s_variable_metadata@Us_team_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: void s_variable_values<struct s_team_variable_traits>::apply_update(struct s_variable_value_state_data<struct s_team_variable_traits> const *, struct s_variable_metadata<struct s_team_variable_traits> const *, enum e_megalo_variable_network_state)
//{
//    mangled_ppc("?apply_update@?$s_variable_values@Us_team_variable_traits@@@@QAAXPBU?$s_variable_value_state_data@Us_team_variable_traits@@@@PBU?$s_variable_metadata@Us_team_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: void s_variable_values<struct s_global_variable_traits>::initialize(struct s_variable_metadata<struct s_global_variable_traits> const *)
//{
//    mangled_ppc("?initialize@?$s_variable_values@Us_global_variable_traits@@@@QAAXPBU?$s_variable_metadata@Us_global_variable_traits@@@@@Z");
//};

//public: bool s_variable_values<struct s_global_variable_traits>::check_for_missing_objects(void)
//{
//    mangled_ppc("?check_for_missing_objects@?$s_variable_values@Us_global_variable_traits@@@@QAA_NXZ");
//};

//public: bool s_variable_values<struct s_global_variable_traits>::build_update(struct s_variable_value_state_data<struct s_global_variable_traits> *, struct s_variable_metadata<struct s_global_variable_traits> const *, enum e_megalo_variable_network_state) const
//{
//    mangled_ppc("?build_update@?$s_variable_values@Us_global_variable_traits@@@@QBA_NPAU?$s_variable_value_state_data@Us_global_variable_traits@@@@PBU?$s_variable_metadata@Us_global_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: void s_variable_values<struct s_global_variable_traits>::apply_update(struct s_variable_value_state_data<struct s_global_variable_traits> const *, struct s_variable_metadata<struct s_global_variable_traits> const *, enum e_megalo_variable_network_state)
//{
//    mangled_ppc("?apply_update@?$s_variable_values@Us_global_variable_traits@@@@QAAXPBU?$s_variable_value_state_data@Us_global_variable_traits@@@@PBU?$s_variable_metadata@Us_global_variable_traits@@@@W4e_megalo_variable_network_state@@@Z");
//};

//public: c_flags<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::c_flags<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>::c_flags<enum e_game_engine_type, unsigned char, 5, struct s_game_engine_type_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_engine_type@@E$04Us_game_engine_type_string_resolver@@@@QAA@XZ");
//};

//public: char const * s_static_string<512>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0CAA@@@QBAPBDXZ");
//};

//long print_variables<struct s_object_variable_traits, struct s_string_with_line_breaks<512> >(struct s_string_with_line_breaks<512> *, struct s_variable_metadata<struct s_object_variable_traits> const *, struct s_variable_values<struct s_object_variable_traits> const *)
//{
//    mangled_ppc("??$print_variables@Us_object_variable_traits@@U?$s_string_with_line_breaks@$0CAA@@@@@YAJPAU?$s_string_with_line_breaks@$0CAA@@@PBU?$s_variable_metadata@Us_object_variable_traits@@@@PBU?$s_variable_values@Us_object_variable_traits@@@@@Z");
//};

//void print_navpoint_state_to_string<512>(class c_static_string<512> *, struct s_megalogamengine_navpoint_state const *)
//{
//    mangled_ppc("??$print_navpoint_state_to_string@$0CAA@@@YAXPAV?$c_static_string@$0CAA@@@PBUs_megalogamengine_navpoint_state@@@Z");
//};

//long print_variables<struct s_player_variable_traits, struct s_string_with_line_breaks<512> >(struct s_string_with_line_breaks<512> *, struct s_variable_metadata<struct s_player_variable_traits> const *, struct s_variable_values<struct s_player_variable_traits> const *)
//{
//    mangled_ppc("??$print_variables@Us_player_variable_traits@@U?$s_string_with_line_breaks@$0CAA@@@@@YAJPAU?$s_string_with_line_breaks@$0CAA@@@PBU?$s_variable_metadata@Us_player_variable_traits@@@@PBU?$s_variable_values@Us_player_variable_traits@@@@@Z");
//};

//long print_variables<struct s_team_variable_traits, struct s_status_line_printer>(struct s_status_line_printer *, struct s_variable_metadata<struct s_team_variable_traits> const *, struct s_variable_values<struct s_team_variable_traits> const *)
//{
//    mangled_ppc("??$print_variables@Us_team_variable_traits@@Us_status_line_printer@@@@YAJPAUs_status_line_printer@@PBU?$s_variable_metadata@Us_team_variable_traits@@@@PBU?$s_variable_values@Us_team_variable_traits@@@@@Z");
//};

//public: void c_game_engine_timer::print_to<128>(class c_static_string<128> *) const
//{
//    mangled_ppc("??$print_to@$0IA@@c_game_engine_timer@@QBAXPAV?$c_static_string@$0IA@@@@Z");
//};

//long print_variables<struct s_global_variable_traits, struct s_status_line_printer>(struct s_status_line_printer *, struct s_variable_metadata<struct s_global_variable_traits> const *, struct s_variable_values<struct s_global_variable_traits> const *)
//{
//    mangled_ppc("??$print_variables@Us_global_variable_traits@@Us_status_line_printer@@@@YAJPAUs_status_line_printer@@PBU?$s_variable_metadata@Us_global_variable_traits@@@@PBU?$s_variable_values@Us_global_variable_traits@@@@@Z");
//};

//public: class c_game_engine_timer & s_static_array<class c_game_engine_timer, 4>::operator[]<char>(char)
//{
//    mangled_ppc("??$?AD@?$s_static_array@Vc_game_engine_timer@@$03@@QAAAAVc_game_engine_timer@@D@Z");
//};

//public: bool c_enum_no_init<enum e_chud_navpoint_icon_type, char, -1, 28, struct s_default_enum_string_resolver>::operator==(enum e_chud_navpoint_icon_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_chud_navpoint_icon_type@@D$0?0$0BM@Us_default_enum_string_resolver@@@@QBA_NW4e_chud_navpoint_icon_type@@@Z");
//};

//public: long s_variable_values<struct s_team_variable_traits>::get_player_variable(long) const
//{
//    mangled_ppc("?get_player_variable@?$s_variable_values@Us_team_variable_traits@@@@QBAJJ@Z");
//};

//public: long s_variable_values<struct s_global_variable_traits>::get_player_variable(long) const
//{
//    mangled_ppc("?get_player_variable@?$s_variable_values@Us_global_variable_traits@@@@QBAJJ@Z");
//};

//public: void s_string_with_line_breaks<512>::print_line(char const *, ...)
//{
//    mangled_ppc("?print_line@?$s_string_with_line_breaks@$0CAA@@@QAAXPBDZZ");
//};

//public: bool c_flags_no_init<enum e_player_purchase_mode, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_player_purchase_mode@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: long const & s_static_array<long, 6>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$05@@QBAABJJ@Z");
//};

//public: class c_game_engine_timer & s_static_array<class c_game_engine_timer, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_game_engine_timer@@$07@@QAAAAVc_game_engine_timer@@J@Z");
//};

//public: class c_game_engine_timer const & s_static_array<class c_game_engine_timer, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_game_engine_timer@@$07@@QBAABVc_game_engine_timer@@J@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: char const * s_static_string<512>::append_print_va(char const *, char *)
//{
//    mangled_ppc("?append_print_va@?$s_static_string@$0CAA@@@QAAPBDPBDPAD@Z");
//};

//void print_timer_seconds_to_string<128>(long, class c_static_string<128> *)
//{
//    mangled_ppc("??$print_timer_seconds_to_string@$0IA@@@YAXJPAV?$c_static_string@$0IA@@@@Z");
//};

//public: static bool s_static_array<class c_game_engine_timer, 4>::valid<char>(char)
//{
//    mangled_ppc("??$valid@D@?$s_static_array@Vc_game_engine_timer@@$03@@SA_ND@Z");
//};

//public: static bool s_static_array<class c_game_engine_timer, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_game_engine_timer@@$07@@SA_NJ@Z");
//};

//public: c_static_stack<struct c_status_line, 256>::c_static_stack<struct c_status_line, 256>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Uc_status_line@@$0BAA@@@QAA@XZ");
//};

