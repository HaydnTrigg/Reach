/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum c_spinner_widget::e_event_flags const c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@2W4e_event_flags@c_spinner_widget@@B"
// public: static int const c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_spinner_widget::e_input_mode const c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_input_mode@c_spinner_widget@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_list_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_list_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_list_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_list_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_list_widget::c_list_widget(void);
// public: virtual bool c_list_widget::has_items_below_view(void) const;
// protected: virtual bool c_list_widget::is_scrolling_locked(void);
// merged_849ED698;
// public: c_list_widget::c_list_widget(struct s_cui_component_description const *, class c_cui_object_property_table *);
// public: c_list_widget::c_list_widget(struct s_cui_component_description const *, class c_cui_object_property_table *, unsigned long);
// public: c_list_widget::c_list_widget(class c_list_widget const &);
// public: virtual c_list_widget::~c_list_widget(void);
// public: bool c_list_widget::get_manual_mode(void) const;
// public: void c_list_widget::set_orientation(enum c_list_widget::e_orientation);
// protected: void c_list_widget::set_default_bounds(void);
// protected: virtual bool c_list_widget::do_initialize_mode(enum e_cui_component_mode);
// protected: virtual bool c_list_widget::do_is_focusable(void) const;
// protected: virtual bool c_list_widget::next(void);
// public: bool c_list_widget::get_wrap(void) const;
// protected: virtual bool c_list_widget::prev(void);
// protected: virtual bool c_list_widget::next_page(long);
// protected: virtual bool c_list_widget::prev_page(long);
// protected: bool c_list_widget::step(long, bool);
// protected: bool c_list_widget::press(class c_cui_update_context *, class c_cui_input_event *);
// public: class c_cui_string_id c_list_item_widget::get_item_name(void) const;
// protected: bool c_list_widget::focus_return(void);
// protected: bool c_list_widget::focus_left(void);
// protected: bool c_list_widget::focus_right(void);
// protected: bool c_list_widget::focus_up(void);
// protected: bool c_list_widget::focus_down(void);
// protected: bool c_list_widget::focus(class c_cui_widget *);
// protected: bool c_list_widget::should_fix_focus_between_lists(class c_cui_widget *, enum c_list_widget::e_move_direction);
// public: bool c_list_widget::is_horizontal(void) const;
// public: long c_list_widget::get_item_count(void) const;
// protected: bool c_list_widget::try_and_fix_focus_between_lists(class c_cui_widget *, enum c_list_widget::e_move_direction);
// public: long c_list_widget::get_selected_item_index(void) const;
// protected: virtual bool c_list_widget::is_input_next(enum e_event_type, enum e_controller_component);
// public: bool c_list_widget::is_vertical(void) const;
// public: class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_list_widget::get_alternate_input_mode(void) const;
// protected: virtual bool c_list_widget::is_input_prev(enum e_event_type, enum e_controller_component);
// protected: virtual bool c_list_widget::is_input_next_page(enum e_event_type, enum e_controller_component);
// protected: virtual bool c_list_widget::is_input_prev_page(enum e_event_type, enum e_controller_component);
// protected: bool c_list_widget::is_input_press(enum e_event_type, enum e_controller_component);
// protected: bool c_list_widget::is_input_return(enum e_event_type, enum e_controller_component);
// protected: bool c_list_widget::is_input_focus_left(enum e_event_type, enum e_controller_component);
// protected: bool c_list_widget::is_input_focus_right(enum e_event_type, enum e_controller_component);
// protected: bool c_list_widget::is_input_focus_up(enum e_event_type, enum e_controller_component);
// protected: bool c_list_widget::is_input_focus_down(enum e_event_type, enum e_controller_component);
// protected: virtual long c_list_widget::get_replicate_count(void);
// protected: virtual void c_list_widget::on_top_item_increase(void);
// protected: virtual void c_list_widget::on_top_item_decrease(void);
// protected: virtual void c_list_widget::on_selected_item_increase(void);
// protected: virtual void c_list_widget::on_selected_item_decrease(void);
// protected: virtual float c_list_widget::get_row_initial_position(void);
// protected: virtual float c_list_widget::get_column_initial_position(void);
// protected: virtual long c_list_widget::get_row_count(void);
// protected: virtual long c_list_widget::get_column_count(void);
// protected: virtual long c_list_widget::get_bound_index(long);
// protected: virtual bool c_list_widget::get_visible(class c_list_item_widget *, long);
// public: bool c_list_widget::get_enforce_bounds(void) const;
// protected: long c_list_widget::limit_bound_element(long);
// public: bool c_list_widget::get_loop(void) const;
// protected: virtual bool c_list_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *);
// protected: virtual bool c_list_widget::try_handle_input_item(class c_cui_update_context *, class c_cui_input_event *);
// public: void c_list_widget::test_activate_selected_item(class c_cui_update_context *, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// protected: virtual bool c_list_widget::try_handle_input_focus(class c_cui_update_context *, class c_cui_input_event *);
// public: short c_cui_input_event::get_input_value(void) const;
// public: class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_spinner_widget::get_alternate_input_mode(void) const;
// protected: virtual void c_list_widget::do_update(class c_cui_update_context *);
// public: bool c_input_event_component::is_consumed(void) const;
// protected: virtual bool c_list_widget::do_replicates_descendant(class c_cui_component const *) const;
// protected: virtual void c_list_widget::render_children(class c_cui_render_context *) const;
// protected: void c_list_widget::play_scroll_sound(class c_cui_update_context *) const;
// protected: void c_list_widget::play_list_item_activated_sound(class c_cui_update_context *) const;
// protected: bool c_list_widget::initialize_design_mode(void);
// protected: virtual bool c_list_widget::initialize_simulation_runtime_mode(enum e_cui_component_mode);
// protected: void c_list_widget::set_manual_mode(bool);
// protected: virtual long c_list_widget::get_child_list_item_count(void) const;
// protected: long c_list_widget::get_page_move_item_count(bool) const;
// protected: void c_list_widget::update_list_item_bounds(void);
// public: bool c_list_widget::get_resizes(void) const;
// protected: void c_list_widget::update_events(void);
// public: class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver> c_input_event_component::get_event_type(void) const;
// public: class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver> c_input_event_component::get_controller_component(void) const;
// public: void c_input_event_component::set_consumed(bool);
// protected: virtual void c_list_widget::update_top_item_index(void);
// protected: void c_list_widget::update_selection(void);
// public: bool c_list_widget::get_show_selection_when_unfocused(void) const;
// public: bool c_list_widget::get_show_selection_when_disabled(void) const;
// bool cui_component_set_bound_element(class c_cui_component *, long);
// public: void c_cui_binding_context::set_bound_element(long);
// protected: void c_list_widget::update_centered_parent_list(void);
// public: void c_list_widget::get_event_sound_scroll_reference(struct s_tag_reference *) const;
// public: bool c_list_widget::set_event_sound_scroll_reference(struct s_tag_reference const *);
// public: void c_list_widget::get_event_sound_press_reference(struct s_tag_reference *) const;
// public: bool c_list_widget::set_event_sound_press_reference(struct s_tag_reference const *);
// public: class c_cui_component * c_list_widget::get_centered_parent_list(void) const;
// public: void c_list_widget::set_centered_parent_list(class c_cui_component *);
// public: class c_cui_component * c_list_widget::get_list_item_selectable_list_data(void) const;
// public: void c_list_widget::set_list_item_selectable_list_data(class c_cui_component *);
// protected: bool c_list_widget::event_valid(class c_event_component *) const;
// public: class c_cui_string_id c_event_component::get_event_name(void) const;
// protected: bool c_list_widget::test_event(class c_event_component *, long) const;
// private: static bool c_list_widget::filter_enabled_widget(class c_cui_component const *);
// public: c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum c_list_widget::e_input_mode);
// public: enum c_list_widget::e_input_mode c_enum_no_init<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_list_widget::e_input_mode(void) const;
// public: c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(enum e_event_type);
// public: enum e_event_type c_enum_no_init<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::operator enum e_event_type(void) const;
// public: c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(enum e_controller_component);
// public: enum e_controller_component c_enum_no_init<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::operator enum e_controller_component(void) const;
// public: c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum c_spinner_widget::e_input_mode);
// public: bool c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum c_spinner_widget::e_input_mode) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_list_widget>::get_instance(void);
// public: void c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_list_widget::e_event_flags) const;
// public: void c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_list_widget::e_event_flags, bool);
// public: c_flags<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// class c_input_event_component * cui_dynamic_cast<class c_input_event_component *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_manual_mode::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::is_horizontal::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_horizontal::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_horizontal(bool);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_wrap::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_wrap::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_wrap(bool);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_loop::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_loop::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_loop(bool);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_show_selection_when_unfocused::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_show_selection_when_unfocused::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_show_selection_when_unfocused(bool);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_show_selection_when_disabled::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_show_selection_when_disabled::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_show_selection_when_disabled(bool);
// ??$cui_get_scalar_property_by_return_value@Vc_list_widget@@V?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@$1?get_alternate_input_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>, void & (c_list_widget::set_alternate_input_mode::*)(class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_alternate_input_mode(class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_resizes::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_resizes::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_resizes(bool);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_enforce_bounds::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_enforce_bounds::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_enforce_bounds(bool);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_item_count::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_item_count(long);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::has_preceding_items::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_list_widget::has_preceding_items(void) const;
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::has_following_items::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_list_widget::has_following_items(void) const;
// bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::has_items_above_view::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_list_widget::has_items_above_view(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1??_91@$BGA@AA@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_scroll_min_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_list_widget::get_scroll_min_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_scroll_min_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_scroll_min_item_index(long);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_scroll_max_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_list_widget::get_scroll_max_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_scroll_max_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_scroll_max_item_index(long);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_initial_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_list_widget::get_initial_selected_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_initial_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_initial_selected_item_index(long);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// ??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_selected_item_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_list_widget::get_selected_item_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_input_event_component *, class c_input_event_component *& (c_list_widget::get_selected_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_list_widget::get_selected_event(void) const;
// long cui_object_component_get_property_element_count<class c_list_widget, long & (c_list_widget::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_list_widget, bool, long & (c_list_widget::get_item_count::*)(void), bool & (c_list_widget::is_item_selected::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_list_widget::is_item_selected(long) const;
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_prev_list::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_prev_list(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_prev_list::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_prev_list(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_next_list::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_next_list(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_next_list::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_next_list(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_left_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_left_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_left_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_left_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_up_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_up_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_up_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_up_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_right_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_right_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_right_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_right_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_down_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_down_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_down_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_down_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_return_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_return_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_out_pointer<class c_list_widget, struct s_tag_reference, void & (c_list_widget::get_event_sound_scroll_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_set_scalar_property_by_const_pointer<class c_list_widget, struct s_tag_reference, bool & (c_list_widget::set_event_sound_scroll_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_out_pointer<class c_list_widget, struct s_tag_reference, void & (c_list_widget::get_event_sound_press_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_set_scalar_property_by_const_pointer<class c_list_widget, struct s_tag_reference, bool & (c_list_widget::set_event_sound_press_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_event_component *, class c_event_component *& (c_list_widget::get_prev_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// void cui_property_value_set(struct s_cui_property_value *, class c_event_component *);
// public: class c_event_component * c_list_widget::get_prev_event(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_event_component *, void & (c_list_widget::set_prev_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_event_component **);
// public: void c_list_widget::set_prev_event(class c_event_component *);
// class c_event_component * cui_dynamic_cast<class c_event_component *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_event_component *, class c_event_component *& (c_list_widget::get_next_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_event_component * c_list_widget::get_next_event(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_event_component *, void & (c_list_widget::set_next_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_next_event(class c_event_component *);
// ??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_test_prev_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_list_widget::get_test_prev_event_name(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_string_id, void & (c_list_widget::set_test_prev_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_test_prev_event_name(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_test_next_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_list_widget::get_test_next_event_name(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_string_id, void & (c_list_widget::set_test_next_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_test_next_event_name(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_prev_arrow_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_prev_arrow_component(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_prev_arrow_component::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_prev_arrow_component(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_next_arrow_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_list_widget::get_next_arrow_component(void) const;
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_next_arrow_component::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_list_widget::set_next_arrow_component(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_component *, class c_cui_component *& (c_list_widget::get_centered_parent_list::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_component *, void & (c_list_widget::set_centered_parent_list::*)(class c_cui_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_component *, class c_cui_component *& (c_list_widget::get_list_item_selectable_list_data::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_component *, void & (c_list_widget::set_list_item_selectable_list_data::*)(class c_cui_component *)>(void *, long, struct s_cui_property_value const *);
// class c_grid_list_widget * cui_dynamic_cast<class c_grid_list_widget *>(class c_cui_component *);
// public: class c_list_item_widget * c_cui_component::get_first_child_of_type<class c_list_item_widget>(void) const;
// class c_spinner_widget * cui_dynamic_cast<class c_spinner_widget *>(class c_cui_component *);
// public: class c_list_item_widget * c_cui_component::get_next_child_of_type<class c_list_item_widget>(class c_cui_component const *) const;
// class c_list_item_widget const * cui_dynamic_cast<class c_list_item_widget const *>(class c_cui_component const *);
// void ui_track_delete<class c_list_item_widget>(class c_list_item_widget *);
// class c_list_item_widget * cui_static_cast<class c_list_item_widget *>(class c_cui_component *);
// class c_list_item_selectable_list_data_base * cui_dynamic_cast<class c_list_item_selectable_list_data_base *>(class c_cui_component *);
// class c_cui_widget const * cui_static_cast<class c_cui_widget const *>(class c_cui_component const *);
// public: c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: static class c_event_component * s_cui_dynamic_cast<class c_event_component *>::cast(class c_cui_component *);
// public: bool c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_list_widget::e_event_flags);
// private: static unsigned char c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_list_widget::e_event_flags);
// public: static class c_input_event_component * s_cui_dynamic_cast<class c_input_event_component *>::cast(class c_cui_component *);
// void cui_property_value_set<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: static class c_grid_list_widget * s_cui_dynamic_cast<class c_grid_list_widget *>::cast(class c_cui_component *);
// public: static class c_spinner_widget * s_cui_dynamic_cast<class c_spinner_widget *>::cast(class c_cui_component *);
// public: static class c_list_item_widget const * s_cui_dynamic_cast<class c_list_item_widget const *>::cast(class c_cui_component const *);
// public: static class c_list_item_widget * s_cui_static_cast<class c_list_item_widget *>::cast(class c_cui_component *);
// public: static class c_list_item_selectable_list_data_base * s_cui_dynamic_cast<class c_list_item_selectable_list_data_base *>::cast(class c_cui_component *);
// public: static class c_cui_widget const * s_cui_static_cast<class c_cui_widget const *>::cast(class c_cui_component const *);
// public: bool c_enum_no_init<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_event_component>::get(void);
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_input_event_component>::get(void);
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_list_item_selectable_list_data_base>::get(void);
// private: static unsigned char c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_list_widget::e_event_flags);
// [thunk]: c_list_widget::`vcall'{96, {flat}};
// bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_component **);
// void cui_property_value_set(struct s_cui_property_value *, class c_cui_component *);
// class c_cui_component * cui_component_create<class c_list_widget>(void);
// class c_cui_component * cui_component_clone<class c_list_widget>(class c_cui_component const *);
// void g_input_mode_enum_table::`dynamic atexit destructor'(void);

//public: c_list_widget::c_list_widget(void)
//{
//    mangled_ppc("??0c_list_widget@@QAA@XZ");
//};

//public: virtual bool c_list_widget::has_items_below_view(void) const
//{
//    mangled_ppc("?has_items_below_view@c_list_widget@@UBA_NXZ");
//};

//protected: virtual bool c_list_widget::is_scrolling_locked(void)
//{
//    mangled_ppc("?is_scrolling_locked@c_list_widget@@MAA_NXZ");
//};

//merged_849ED698
//{
//    mangled_ppc("merged_849ED698");
//};

//public: c_list_widget::c_list_widget(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_list_widget@@QAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//public: c_list_widget::c_list_widget(struct s_cui_component_description const *, class c_cui_object_property_table *, unsigned long)
//{
//    mangled_ppc("??0c_list_widget@@QAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@K@Z");
//};

//public: c_list_widget::c_list_widget(class c_list_widget const &)
//{
//    mangled_ppc("??0c_list_widget@@QAA@ABV0@@Z");
//};

//public: virtual c_list_widget::~c_list_widget(void)
//{
//    mangled_ppc("??1c_list_widget@@UAA@XZ");
//};

//public: bool c_list_widget::get_manual_mode(void) const
//{
//    mangled_ppc("?get_manual_mode@c_list_widget@@QBA_NXZ");
//};

//public: void c_list_widget::set_orientation(enum c_list_widget::e_orientation)
//{
//    mangled_ppc("?set_orientation@c_list_widget@@QAAXW4e_orientation@1@@Z");
//};

//protected: void c_list_widget::set_default_bounds(void)
//{
//    mangled_ppc("?set_default_bounds@c_list_widget@@IAAXXZ");
//};

//protected: virtual bool c_list_widget::do_initialize_mode(enum e_cui_component_mode)
//{
//    mangled_ppc("?do_initialize_mode@c_list_widget@@MAA_NW4e_cui_component_mode@@@Z");
//};

//protected: virtual bool c_list_widget::do_is_focusable(void) const
//{
//    mangled_ppc("?do_is_focusable@c_list_widget@@MBA_NXZ");
//};

//protected: virtual bool c_list_widget::next(void)
//{
//    mangled_ppc("?next@c_list_widget@@MAA_NXZ");
//};

//public: bool c_list_widget::get_wrap(void) const
//{
//    mangled_ppc("?get_wrap@c_list_widget@@QBA_NXZ");
//};

//protected: virtual bool c_list_widget::prev(void)
//{
//    mangled_ppc("?prev@c_list_widget@@MAA_NXZ");
//};

//protected: virtual bool c_list_widget::next_page(long)
//{
//    mangled_ppc("?next_page@c_list_widget@@MAA_NJ@Z");
//};

//protected: virtual bool c_list_widget::prev_page(long)
//{
//    mangled_ppc("?prev_page@c_list_widget@@MAA_NJ@Z");
//};

//protected: bool c_list_widget::step(long, bool)
//{
//    mangled_ppc("?step@c_list_widget@@IAA_NJ_N@Z");
//};

//protected: bool c_list_widget::press(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?press@c_list_widget@@IAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: class c_cui_string_id c_list_item_widget::get_item_name(void) const
//{
//    mangled_ppc("?get_item_name@c_list_item_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//protected: bool c_list_widget::focus_return(void)
//{
//    mangled_ppc("?focus_return@c_list_widget@@IAA_NXZ");
//};

//protected: bool c_list_widget::focus_left(void)
//{
//    mangled_ppc("?focus_left@c_list_widget@@IAA_NXZ");
//};

//protected: bool c_list_widget::focus_right(void)
//{
//    mangled_ppc("?focus_right@c_list_widget@@IAA_NXZ");
//};

//protected: bool c_list_widget::focus_up(void)
//{
//    mangled_ppc("?focus_up@c_list_widget@@IAA_NXZ");
//};

//protected: bool c_list_widget::focus_down(void)
//{
//    mangled_ppc("?focus_down@c_list_widget@@IAA_NXZ");
//};

//protected: bool c_list_widget::focus(class c_cui_widget *)
//{
//    mangled_ppc("?focus@c_list_widget@@IAA_NPAVc_cui_widget@@@Z");
//};

//protected: bool c_list_widget::should_fix_focus_between_lists(class c_cui_widget *, enum c_list_widget::e_move_direction)
//{
//    mangled_ppc("?should_fix_focus_between_lists@c_list_widget@@IAA_NPAVc_cui_widget@@W4e_move_direction@1@@Z");
//};

//public: bool c_list_widget::is_horizontal(void) const
//{
//    mangled_ppc("?is_horizontal@c_list_widget@@QBA_NXZ");
//};

//public: long c_list_widget::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_list_widget@@QBAJXZ");
//};

//protected: bool c_list_widget::try_and_fix_focus_between_lists(class c_cui_widget *, enum c_list_widget::e_move_direction)
//{
//    mangled_ppc("?try_and_fix_focus_between_lists@c_list_widget@@IAA_NPAVc_cui_widget@@W4e_move_direction@1@@Z");
//};

//public: long c_list_widget::get_selected_item_index(void) const
//{
//    mangled_ppc("?get_selected_item_index@c_list_widget@@QBAJXZ");
//};

//protected: virtual bool c_list_widget::is_input_next(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_next@c_list_widget@@MAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//public: bool c_list_widget::is_vertical(void) const
//{
//    mangled_ppc("?is_vertical@c_list_widget@@QBA_NXZ");
//};

//public: class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_list_widget::get_alternate_input_mode(void) const
//{
//    mangled_ppc("?get_alternate_input_mode@c_list_widget@@QBA?AV?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//protected: virtual bool c_list_widget::is_input_prev(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_prev@c_list_widget@@MAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: virtual bool c_list_widget::is_input_next_page(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_next_page@c_list_widget@@MAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: virtual bool c_list_widget::is_input_prev_page(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_prev_page@c_list_widget@@MAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: bool c_list_widget::is_input_press(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_press@c_list_widget@@IAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: bool c_list_widget::is_input_return(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_return@c_list_widget@@IAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: bool c_list_widget::is_input_focus_left(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_focus_left@c_list_widget@@IAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: bool c_list_widget::is_input_focus_right(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_focus_right@c_list_widget@@IAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: bool c_list_widget::is_input_focus_up(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_focus_up@c_list_widget@@IAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: bool c_list_widget::is_input_focus_down(enum e_event_type, enum e_controller_component)
//{
//    mangled_ppc("?is_input_focus_down@c_list_widget@@IAA_NW4e_event_type@@W4e_controller_component@@@Z");
//};

//protected: virtual long c_list_widget::get_replicate_count(void)
//{
//    mangled_ppc("?get_replicate_count@c_list_widget@@MAAJXZ");
//};

//protected: virtual void c_list_widget::on_top_item_increase(void)
//{
//    mangled_ppc("?on_top_item_increase@c_list_widget@@MAAXXZ");
//};

//protected: virtual void c_list_widget::on_top_item_decrease(void)
//{
//    mangled_ppc("?on_top_item_decrease@c_list_widget@@MAAXXZ");
//};

//protected: virtual void c_list_widget::on_selected_item_increase(void)
//{
//    mangled_ppc("?on_selected_item_increase@c_list_widget@@MAAXXZ");
//};

//protected: virtual void c_list_widget::on_selected_item_decrease(void)
//{
//    mangled_ppc("?on_selected_item_decrease@c_list_widget@@MAAXXZ");
//};

//protected: virtual float c_list_widget::get_row_initial_position(void)
//{
//    mangled_ppc("?get_row_initial_position@c_list_widget@@MAAMXZ");
//};

//protected: virtual float c_list_widget::get_column_initial_position(void)
//{
//    mangled_ppc("?get_column_initial_position@c_list_widget@@MAAMXZ");
//};

//protected: virtual long c_list_widget::get_row_count(void)
//{
//    mangled_ppc("?get_row_count@c_list_widget@@MAAJXZ");
//};

//protected: virtual long c_list_widget::get_column_count(void)
//{
//    mangled_ppc("?get_column_count@c_list_widget@@MAAJXZ");
//};

//protected: virtual long c_list_widget::get_bound_index(long)
//{
//    mangled_ppc("?get_bound_index@c_list_widget@@MAAJJ@Z");
//};

//protected: virtual bool c_list_widget::get_visible(class c_list_item_widget *, long)
//{
//    mangled_ppc("?get_visible@c_list_widget@@MAA_NPAVc_list_item_widget@@J@Z");
//};

//public: bool c_list_widget::get_enforce_bounds(void) const
//{
//    mangled_ppc("?get_enforce_bounds@c_list_widget@@QBA_NXZ");
//};

//protected: long c_list_widget::limit_bound_element(long)
//{
//    mangled_ppc("?limit_bound_element@c_list_widget@@IAAJJ@Z");
//};

//public: bool c_list_widget::get_loop(void) const
//{
//    mangled_ppc("?get_loop@c_list_widget@@QBA_NXZ");
//};

//protected: virtual bool c_list_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_handle_input_event@c_list_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//protected: virtual bool c_list_widget::try_handle_input_item(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?try_handle_input_item@c_list_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: void c_list_widget::test_activate_selected_item(class c_cui_update_context *, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?test_activate_selected_item@c_list_widget@@QAAXPAVc_cui_update_context@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//protected: virtual bool c_list_widget::try_handle_input_focus(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?try_handle_input_focus@c_list_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: short c_cui_input_event::get_input_value(void) const
//{
//    mangled_ppc("?get_input_value@c_cui_input_event@@QBAFXZ");
//};

//public: class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_spinner_widget::get_alternate_input_mode(void) const
//{
//    mangled_ppc("?get_alternate_input_mode@c_spinner_widget@@QBA?AV?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@XZ");
//};

//protected: virtual void c_list_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_list_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_input_event_component::is_consumed(void) const
//{
//    mangled_ppc("?is_consumed@c_input_event_component@@QBA_NXZ");
//};

//protected: virtual bool c_list_widget::do_replicates_descendant(class c_cui_component const *) const
//{
//    mangled_ppc("?do_replicates_descendant@c_list_widget@@MBA_NPBVc_cui_component@@@Z");
//};

//protected: virtual void c_list_widget::render_children(class c_cui_render_context *) const
//{
//    mangled_ppc("?render_children@c_list_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//protected: void c_list_widget::play_scroll_sound(class c_cui_update_context *) const
//{
//    mangled_ppc("?play_scroll_sound@c_list_widget@@IBAXPAVc_cui_update_context@@@Z");
//};

//protected: void c_list_widget::play_list_item_activated_sound(class c_cui_update_context *) const
//{
//    mangled_ppc("?play_list_item_activated_sound@c_list_widget@@IBAXPAVc_cui_update_context@@@Z");
//};

//protected: bool c_list_widget::initialize_design_mode(void)
//{
//    mangled_ppc("?initialize_design_mode@c_list_widget@@IAA_NXZ");
//};

//protected: virtual bool c_list_widget::initialize_simulation_runtime_mode(enum e_cui_component_mode)
//{
//    mangled_ppc("?initialize_simulation_runtime_mode@c_list_widget@@MAA_NW4e_cui_component_mode@@@Z");
//};

//protected: void c_list_widget::set_manual_mode(bool)
//{
//    mangled_ppc("?set_manual_mode@c_list_widget@@IAAX_N@Z");
//};

//protected: virtual long c_list_widget::get_child_list_item_count(void) const
//{
//    mangled_ppc("?get_child_list_item_count@c_list_widget@@MBAJXZ");
//};

//protected: long c_list_widget::get_page_move_item_count(bool) const
//{
//    mangled_ppc("?get_page_move_item_count@c_list_widget@@IBAJ_N@Z");
//};

//protected: void c_list_widget::update_list_item_bounds(void)
//{
//    mangled_ppc("?update_list_item_bounds@c_list_widget@@IAAXXZ");
//};

//public: bool c_list_widget::get_resizes(void) const
//{
//    mangled_ppc("?get_resizes@c_list_widget@@QBA_NXZ");
//};

//protected: void c_list_widget::update_events(void)
//{
//    mangled_ppc("?update_events@c_list_widget@@IAAXXZ");
//};

//public: class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver> c_input_event_component::get_event_type(void) const
//{
//    mangled_ppc("?get_event_type@c_input_event_component@@QBA?AV?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver> c_input_event_component::get_controller_component(void) const
//{
//    mangled_ppc("?get_controller_component@c_input_event_component@@QBA?AV?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_input_event_component::set_consumed(bool)
//{
//    mangled_ppc("?set_consumed@c_input_event_component@@QAAX_N@Z");
//};

//protected: virtual void c_list_widget::update_top_item_index(void)
//{
//    mangled_ppc("?update_top_item_index@c_list_widget@@MAAXXZ");
//};

//protected: void c_list_widget::update_selection(void)
//{
//    mangled_ppc("?update_selection@c_list_widget@@IAAXXZ");
//};

//public: bool c_list_widget::get_show_selection_when_unfocused(void) const
//{
//    mangled_ppc("?get_show_selection_when_unfocused@c_list_widget@@QBA_NXZ");
//};

//public: bool c_list_widget::get_show_selection_when_disabled(void) const
//{
//    mangled_ppc("?get_show_selection_when_disabled@c_list_widget@@QBA_NXZ");
//};

//bool cui_component_set_bound_element(class c_cui_component *, long)
//{
//    mangled_ppc("?cui_component_set_bound_element@@YA_NPAVc_cui_component@@J@Z");
//};

//public: void c_cui_binding_context::set_bound_element(long)
//{
//    mangled_ppc("?set_bound_element@c_cui_binding_context@@QAAXJ@Z");
//};

//protected: void c_list_widget::update_centered_parent_list(void)
//{
//    mangled_ppc("?update_centered_parent_list@c_list_widget@@IAAXXZ");
//};

//public: void c_list_widget::get_event_sound_scroll_reference(struct s_tag_reference *) const
//{
//    mangled_ppc("?get_event_sound_scroll_reference@c_list_widget@@QBAXPAUs_tag_reference@@@Z");
//};

//public: bool c_list_widget::set_event_sound_scroll_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?set_event_sound_scroll_reference@c_list_widget@@QAA_NPBUs_tag_reference@@@Z");
//};

//public: void c_list_widget::get_event_sound_press_reference(struct s_tag_reference *) const
//{
//    mangled_ppc("?get_event_sound_press_reference@c_list_widget@@QBAXPAUs_tag_reference@@@Z");
//};

//public: bool c_list_widget::set_event_sound_press_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?set_event_sound_press_reference@c_list_widget@@QAA_NPBUs_tag_reference@@@Z");
//};

//public: class c_cui_component * c_list_widget::get_centered_parent_list(void) const
//{
//    mangled_ppc("?get_centered_parent_list@c_list_widget@@QBAPAVc_cui_component@@XZ");
//};

//public: void c_list_widget::set_centered_parent_list(class c_cui_component *)
//{
//    mangled_ppc("?set_centered_parent_list@c_list_widget@@QAAXPAVc_cui_component@@@Z");
//};

//public: class c_cui_component * c_list_widget::get_list_item_selectable_list_data(void) const
//{
//    mangled_ppc("?get_list_item_selectable_list_data@c_list_widget@@QBAPAVc_cui_component@@XZ");
//};

//public: void c_list_widget::set_list_item_selectable_list_data(class c_cui_component *)
//{
//    mangled_ppc("?set_list_item_selectable_list_data@c_list_widget@@QAAXPAVc_cui_component@@@Z");
//};

//protected: bool c_list_widget::event_valid(class c_event_component *) const
//{
//    mangled_ppc("?event_valid@c_list_widget@@IBA_NPAVc_event_component@@@Z");
//};

//public: class c_cui_string_id c_event_component::get_event_name(void) const
//{
//    mangled_ppc("?get_event_name@c_event_component@@QBA?AVc_cui_string_id@@XZ");
//};

//protected: bool c_list_widget::test_event(class c_event_component *, long) const
//{
//    mangled_ppc("?test_event@c_list_widget@@IBA_NPAVc_event_component@@J@Z");
//};

//private: static bool c_list_widget::filter_enabled_widget(class c_cui_component const *)
//{
//    mangled_ppc("?filter_enabled_widget@c_list_widget@@CA_NPBVc_cui_component@@@Z");
//};

//public: c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum c_list_widget::e_input_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_input_mode@c_list_widget@@@Z");
//};

//public: enum c_list_widget::e_input_mode c_enum_no_init<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_list_widget::e_input_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_input_mode@c_list_widget@@XZ");
//};

//public: c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(enum e_event_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@QAA@W4e_event_type@@@Z");
//};

//public: enum e_event_type c_enum_no_init<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::operator enum e_event_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@QBA?AW4e_event_type@@XZ");
//};

//public: c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(enum e_controller_component)
//{
//    mangled_ppc("??0?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@QAA@W4e_controller_component@@@Z");
//};

//public: enum e_controller_component c_enum_no_init<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::operator enum e_controller_component(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@QBA?AW4e_controller_component@@XZ");
//};

//public: c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum c_spinner_widget::e_input_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_input_mode@c_spinner_widget@@@Z");
//};

//public: bool c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum c_spinner_widget::e_input_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_input_mode@c_spinner_widget@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_list_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_list_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: void c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_list_widget::e_event_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_event_flags@c_list_widget@@@Z");
//};

//public: void c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_list_widget::e_event_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_event_flags@c_list_widget@@_N@Z");
//};

//public: c_flags<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//class c_input_event_component * cui_dynamic_cast<class c_input_event_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_input_event_component@@@@YAPAVc_input_event_component@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_manual_mode::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_manual_mode@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::is_horizontal::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?is_horizontal@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_horizontal::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_horizontal@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_horizontal(bool)
//{
//    mangled_ppc("?set_horizontal@c_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_wrap::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_wrap@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_wrap::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_wrap@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_wrap(bool)
//{
//    mangled_ppc("?set_wrap@c_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_loop::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_loop@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_loop::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_loop@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_loop(bool)
//{
//    mangled_ppc("?set_loop@c_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_show_selection_when_unfocused::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_show_selection_when_unfocused@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_show_selection_when_unfocused::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_show_selection_when_unfocused@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_show_selection_when_unfocused(bool)
//{
//    mangled_ppc("?set_show_selection_when_unfocused@c_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_show_selection_when_disabled::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_show_selection_when_disabled@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_show_selection_when_disabled::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_show_selection_when_disabled@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_show_selection_when_disabled(bool)
//{
//    mangled_ppc("?set_show_selection_when_disabled@c_list_widget@@QAAX_N@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_list_widget@@V?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@$1?get_alternate_input_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@V?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@$1?get_alternate_input_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>, void & (c_list_widget::set_alternate_input_mode::*)(class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@V?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@$1?set_alternate_input_mode@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_alternate_input_mode(class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_alternate_input_mode@c_list_widget@@QAAXV?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_resizes::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_resizes@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_resizes::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_resizes@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_resizes(bool)
//{
//    mangled_ppc("?set_resizes@c_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::get_enforce_bounds::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?get_enforce_bounds@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, bool, void & (c_list_widget::set_enforce_bounds::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@_N$1?set_enforce_bounds@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_enforce_bounds(bool)
//{
//    mangled_ppc("?set_enforce_bounds@c_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_item_count::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@J$1?set_item_count@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_item_count(long)
//{
//    mangled_ppc("?set_item_count@c_list_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::has_preceding_items::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?has_preceding_items@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_list_widget::has_preceding_items(void) const
//{
//    mangled_ppc("?has_preceding_items@c_list_widget@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::has_following_items::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?has_following_items@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_list_widget::has_following_items(void) const
//{
//    mangled_ppc("?has_following_items@c_list_widget@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, bool, bool & (c_list_widget::has_items_above_view::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1?has_items_above_view@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_list_widget::has_items_above_view(void) const
//{
//    mangled_ppc("?has_items_above_view@c_list_widget@@QBA_NXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1??_91@$BGA@AA@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@_N$1??_91@$BGA@AA@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_scroll_min_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@J$1?get_scroll_min_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_list_widget::get_scroll_min_item_index(void) const
//{
//    mangled_ppc("?get_scroll_min_item_index@c_list_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_scroll_min_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@J$1?set_scroll_min_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_scroll_min_item_index(long)
//{
//    mangled_ppc("?set_scroll_min_item_index@c_list_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_scroll_max_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@J$1?get_scroll_max_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_list_widget::get_scroll_max_item_index(void) const
//{
//    mangled_ppc("?get_scroll_max_item_index@c_list_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_scroll_max_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@J$1?set_scroll_max_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_scroll_max_item_index(long)
//{
//    mangled_ppc("?set_scroll_max_item_index@c_list_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_initial_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@J$1?get_initial_selected_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_list_widget::get_initial_selected_item_index(void) const
//{
//    mangled_ppc("?get_initial_selected_item_index@c_list_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_initial_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@J$1?set_initial_selected_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_initial_selected_item_index(long)
//{
//    mangled_ppc("?set_initial_selected_item_index@c_list_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, long, long & (c_list_widget::get_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@J$1?get_selected_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, long, void & (c_list_widget::set_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@J$1?set_selected_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_selected_item_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_selected_item_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_list_widget::get_selected_item_name(void) const
//{
//    mangled_ppc("?get_selected_item_name@c_list_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_input_event_component *, class c_input_event_component *& (c_list_widget::get_selected_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_input_event_component@@$1?get_selected_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_list_widget::get_selected_event(void) const
//{
//    mangled_ppc("?get_selected_event@c_list_widget@@QBAPAVc_input_event_component@@XZ");
//};

//long cui_object_component_get_property_element_count<class c_list_widget, long & (c_list_widget::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_list_widget@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_list_widget, bool, long & (c_list_widget::get_item_count::*)(void), bool & (c_list_widget::is_item_selected::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_list_widget@@_N$1?get_item_count@1@QBAJXZ$1?is_item_selected@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_list_widget::is_item_selected(long) const
//{
//    mangled_ppc("?is_item_selected@c_list_widget@@QBA_NJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_prev_list::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_prev_list@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_prev_list(void) const
//{
//    mangled_ppc("?get_prev_list@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_prev_list::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_prev_list@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_prev_list(class c_cui_widget *)
//{
//    mangled_ppc("?set_prev_list@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_next_list::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_next_list@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_next_list(void) const
//{
//    mangled_ppc("?get_next_list@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_next_list::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_next_list@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_next_list(class c_cui_widget *)
//{
//    mangled_ppc("?set_next_list@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_left_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_left_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_left_focus_to(void) const
//{
//    mangled_ppc("?get_left_focus_to@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_left_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_left_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_left_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_left_focus_to@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_up_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_up_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_up_focus_to(void) const
//{
//    mangled_ppc("?get_up_focus_to@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_up_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_up_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_up_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_up_focus_to@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_right_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_right_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_right_focus_to(void) const
//{
//    mangled_ppc("?get_right_focus_to@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_right_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_right_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_right_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_right_focus_to@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_down_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_down_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_down_focus_to(void) const
//{
//    mangled_ppc("?get_down_focus_to@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_down_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_down_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_down_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_down_focus_to@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_return_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_return_focus_to(void) const
//{
//    mangled_ppc("?get_return_focus_to@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_return_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_return_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_return_focus_to@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_list_widget, struct s_tag_reference, void & (c_list_widget::get_event_sound_scroll_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_list_widget@@Us_tag_reference@@$1?get_event_sound_scroll_reference@1@QBAXPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_set_scalar_property_by_const_pointer<class c_list_widget, struct s_tag_reference, bool & (c_list_widget::set_event_sound_scroll_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_const_pointer@Vc_list_widget@@Us_tag_reference@@$1?set_event_sound_scroll_reference@1@QAA_NPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_list_widget, struct s_tag_reference, void & (c_list_widget::get_event_sound_press_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_list_widget@@Us_tag_reference@@$1?get_event_sound_press_reference@1@QBAXPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_set_scalar_property_by_const_pointer<class c_list_widget, struct s_tag_reference, bool & (c_list_widget::set_event_sound_press_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_const_pointer@Vc_list_widget@@Us_tag_reference@@$1?set_event_sound_press_reference@1@QAA_NPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_event_component *, class c_event_component *& (c_list_widget::get_prev_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_event_component@@$1?get_prev_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_event_component *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_event_component@@@Z");
//};

//public: class c_event_component * c_list_widget::get_prev_event(void) const
//{
//    mangled_ppc("?get_prev_event@c_list_widget@@QBAPAVc_event_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_event_component *, void & (c_list_widget::set_prev_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_event_component@@$1?set_prev_event@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_event_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_event_component@@@Z");
//};

//public: void c_list_widget::set_prev_event(class c_event_component *)
//{
//    mangled_ppc("?set_prev_event@c_list_widget@@QAAXPAVc_event_component@@@Z");
//};

//class c_event_component * cui_dynamic_cast<class c_event_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_event_component@@@@YAPAVc_event_component@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_event_component *, class c_event_component *& (c_list_widget::get_next_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_event_component@@$1?get_next_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_event_component * c_list_widget::get_next_event(void) const
//{
//    mangled_ppc("?get_next_event@c_list_widget@@QBAPAVc_event_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_event_component *, void & (c_list_widget::set_next_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_event_component@@$1?set_next_event@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_next_event(class c_event_component *)
//{
//    mangled_ppc("?set_next_event@c_list_widget@@QAAXPAVc_event_component@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_test_prev_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_test_prev_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_list_widget::get_test_prev_event_name(void) const
//{
//    mangled_ppc("?get_test_prev_event_name@c_list_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_string_id, void & (c_list_widget::set_test_prev_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@Vc_cui_string_id@@$1?set_test_prev_event_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_test_prev_event_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_test_prev_event_name@c_list_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_test_next_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@Vc_cui_string_id@@$1?get_test_next_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_list_widget::get_test_next_event_name(void) const
//{
//    mangled_ppc("?get_test_next_event_name@c_list_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_string_id, void & (c_list_widget::set_test_next_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@Vc_cui_string_id@@$1?set_test_next_event_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_test_next_event_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_test_next_event_name@c_list_widget@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_prev_arrow_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_prev_arrow_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_prev_arrow_component(void) const
//{
//    mangled_ppc("?get_prev_arrow_component@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_prev_arrow_component::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_prev_arrow_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_prev_arrow_component(class c_cui_widget *)
//{
//    mangled_ppc("?set_prev_arrow_component@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_widget *, class c_cui_widget *& (c_list_widget::get_next_arrow_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_widget@@$1?get_next_arrow_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_list_widget::get_next_arrow_component(void) const
//{
//    mangled_ppc("?get_next_arrow_component@c_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_widget *, void & (c_list_widget::set_next_arrow_component::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_widget@@$1?set_next_arrow_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_list_widget::set_next_arrow_component(class c_cui_widget *)
//{
//    mangled_ppc("?set_next_arrow_component@c_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_component *, class c_cui_component *& (c_list_widget::get_centered_parent_list::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_component@@$1?get_centered_parent_list@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_component *, void & (c_list_widget::set_centered_parent_list::*)(class c_cui_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_component@@$1?set_centered_parent_list@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_list_widget, class c_cui_component *, class c_cui_component *& (c_list_widget::get_list_item_selectable_list_data::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_list_widget@@PAVc_cui_component@@$1?get_list_item_selectable_list_data@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_list_widget, class c_cui_component *, void & (c_list_widget::set_list_item_selectable_list_data::*)(class c_cui_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_list_widget@@PAVc_cui_component@@$1?set_list_item_selectable_list_data@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//class c_grid_list_widget * cui_dynamic_cast<class c_grid_list_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_grid_list_widget@@@@YAPAVc_grid_list_widget@@PAVc_cui_component@@@Z");
//};

//public: class c_list_item_widget * c_cui_component::get_first_child_of_type<class c_list_item_widget>(void) const
//{
//    mangled_ppc("??$get_first_child_of_type@Vc_list_item_widget@@@c_cui_component@@QBAPAVc_list_item_widget@@XZ");
//};

//class c_spinner_widget * cui_dynamic_cast<class c_spinner_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_spinner_widget@@@@YAPAVc_spinner_widget@@PAVc_cui_component@@@Z");
//};

//public: class c_list_item_widget * c_cui_component::get_next_child_of_type<class c_list_item_widget>(class c_cui_component const *) const
//{
//    mangled_ppc("??$get_next_child_of_type@Vc_list_item_widget@@@c_cui_component@@QBAPAVc_list_item_widget@@PBV0@@Z");
//};

//class c_list_item_widget const * cui_dynamic_cast<class c_list_item_widget const *>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PBVc_list_item_widget@@@@YAPBVc_list_item_widget@@PBVc_cui_component@@@Z");
//};

//void ui_track_delete<class c_list_item_widget>(class c_list_item_widget *)
//{
//    mangled_ppc("??$ui_track_delete@Vc_list_item_widget@@@@YAXPAVc_list_item_widget@@@Z");
//};

//class c_list_item_widget * cui_static_cast<class c_list_item_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_static_cast@PAVc_list_item_widget@@@@YAPAVc_list_item_widget@@PAVc_cui_component@@@Z");
//};

//class c_list_item_selectable_list_data_base * cui_dynamic_cast<class c_list_item_selectable_list_data_base *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_list_item_selectable_list_data_base@@@@YAPAVc_list_item_selectable_list_data_base@@PAVc_cui_component@@@Z");
//};

//class c_cui_widget const * cui_static_cast<class c_cui_widget const *>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_static_cast@PBVc_cui_widget@@@@YAPBVc_cui_widget@@PBVc_cui_component@@@Z");
//};

//public: c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static class c_event_component * s_cui_dynamic_cast<class c_event_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_event_component@@@@SAPAVc_event_component@@PAVc_cui_component@@@Z");
//};

//public: bool c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_list_widget::e_event_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_event_flags@c_list_widget@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_list_widget::e_event_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@CAEW4e_event_flags@c_list_widget@@@Z");
//};

//public: static class c_input_event_component * s_cui_dynamic_cast<class c_input_event_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_input_event_component@@@@SAPAVc_input_event_component@@PAVc_cui_component@@@Z");
//};

//void cui_property_value_set<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static class c_grid_list_widget * s_cui_dynamic_cast<class c_grid_list_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_grid_list_widget@@@@SAPAVc_grid_list_widget@@PAVc_cui_component@@@Z");
//};

//public: static class c_spinner_widget * s_cui_dynamic_cast<class c_spinner_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_spinner_widget@@@@SAPAVc_spinner_widget@@PAVc_cui_component@@@Z");
//};

//public: static class c_list_item_widget const * s_cui_dynamic_cast<class c_list_item_widget const *>::cast(class c_cui_component const *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PBVc_list_item_widget@@@@SAPBVc_list_item_widget@@PBVc_cui_component@@@Z");
//};

//public: static class c_list_item_widget * s_cui_static_cast<class c_list_item_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_static_cast@PAVc_list_item_widget@@@@SAPAVc_list_item_widget@@PAVc_cui_component@@@Z");
//};

//public: static class c_list_item_selectable_list_data_base * s_cui_dynamic_cast<class c_list_item_selectable_list_data_base *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_list_item_selectable_list_data_base@@@@SAPAVc_list_item_selectable_list_data_base@@PAVc_cui_component@@@Z");
//};

//public: static class c_cui_widget const * s_cui_static_cast<class c_cui_widget const *>::cast(class c_cui_component const *)
//{
//    mangled_ppc("?cast@?$s_cui_static_cast@PBVc_cui_widget@@@@SAPBVc_cui_widget@@PBVc_cui_component@@@Z");
//};

//public: bool c_enum_no_init<enum c_list_widget::e_input_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_input_mode@c_list_widget@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_event_component>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_event_component@@@@SAPBUs_cui_component_description@@XZ");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_input_event_component>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_input_event_component@@@@SAPBUs_cui_component_description@@XZ");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_list_item_selectable_list_data_base>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_list_item_selectable_list_data_base@@@@SAPBUs_cui_component_description@@XZ");
//};

//private: static unsigned char c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_list_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_list_widget::e_event_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_event_flags@c_list_widget@@E$02Us_default_enum_string_resolver@@@@CAEW4e_event_flags@c_list_widget@@@Z");
//};

//[thunk]: c_list_widget::`vcall'{96, {flat}}
//{
//    mangled_ppc("??_9c_list_widget@@$BGA@AA");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_cui_component@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_cui_component *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_cui_component@@@Z");
//};

//class c_cui_component * cui_component_create<class c_list_widget>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_list_widget@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_list_widget>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_list_widget@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//void g_input_mode_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_input_mode_enum_table@@YAXXZ");
//};

