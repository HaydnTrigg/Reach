/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_cui_property_absolute_composition_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_cui_property_absolute_composition_type@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_cui_property_absolute_composition_type const c_enum_no_init<enum e_cui_property_absolute_composition_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_cui_property_absolute_composition_type@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_cui_property_absolute_composition_type@@B"
// public: static int const c_enum_no_init<enum e_cui_property_relative_composition_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_cui_property_relative_composition_type@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_cui_property_relative_composition_type const c_enum_no_init<enum e_cui_property_relative_composition_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_cui_property_relative_composition_type@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_cui_property_relative_composition_type@@B"
// public: static enum c_cui_property_animator::e_flags const c_flags_no_init<enum c_cui_property_animator::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@c_cui_property_animator@@E$00Us_default_enum_string_resolver@@@@2W4e_flags@c_cui_property_animator@@B"
// public: static long const s_static_array<struct s_cui_render_explicit_shader_constant, 14>::k_element_count; // "?k_element_count@?$s_static_array@Us_cui_render_explicit_shader_constant@@$0O@@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_cui_screen_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_cui_screen_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_cui_screen_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_cui_screen_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_cui_screen_widget::c_cui_screen_widget(long, long, long);
// merged_849ABD10;
// public: virtual c_cui_screen_widget::~c_cui_screen_widget(void);
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_cui_screen_widget::get_controller_index(void) const;
// public: void c_cui_screen_widget::set_controller_index_input(enum e_controller_index, bool);
// private: void c_cui_screen_widget::set_default_bounds(void);
// public: void c_cui_widget::set_width(float);
// public: void c_cui_widget::set_height(float);
// public: void c_cui_screen_widget::set_focused_widget(class c_cui_widget *);
// public: bool c_cui_screen_widget::transfer_focus(class c_cui_widget *);
// public: class c_cui_widget * c_cui_screen_widget::get_focused_widget(void) const;
// public: void c_cui_screen_widget::transition_in(void);
// public: void c_cui_screen_widget::transition_in(long);
// public: bool c_cui_widget::animation_enabled(void) const;
// public: bool c_cui_screen_widget::is_subscreen(void) const;
// void cui_component_start_animation(class c_cui_widget *, long, bool, bool, bool);
// public: void c_cui_screen_widget::transition_out(void);
// public: void c_cui_screen_widget::transition_out(long);
// protected: void c_cui_screen_widget::set_dead(bool);
// public: bool c_cui_screen_widget::on_load_complete(void);
// class c_cui_widget * cui_widget_get_first_descendant_of_type(class c_cui_widget *, long);
// protected: virtual bool c_cui_screen_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *);
// public: bool c_cui_screen_widget::get_default_close(void) const;
// public: enum e_event_type c_cui_input_event::get_event_type(void) const;
// public: enum e_controller_component c_cui_input_event::get_controller_component(void) const;
// protected: virtual bool c_cui_screen_widget::do_dispatch_input_event(class c_cui_update_context *, class c_cui_input_event *);
// public: bool c_cui_screen_widget::get_dispatch_all_input_events(void) const;
// public: bool c_cui_screen_widget::get_eat_all_input_events(void) const;
// public: enum e_controller_index c_cui_input_event::get_controller_index(void) const;
// public: unsigned long c_cui_update_context::get_milliseconds(void) const;
// public: void c_cui_screen_widget::set_overlaid(bool);
// public: bool c_cui_screen_widget::is_overlaid(void) const;
// public: void c_cui_screen_widget::close(void);
// private: void c_cui_screen_widget::set_closing(bool);
// public: void c_cui_screen_widget::close(long);
// public: struct s_user_interface_shared_globals const * c_cui_screen_widget::get_ui_shared_globals(void) const;
// protected: virtual void c_cui_screen_widget::do_initialize(class c_cui_update_context *);
// public: bool c_cui_screen_widget::get_restart_script(void) const;
// public: bool c_cui_screen_widget::get_use_campaign_state_script(void) const;
// protected: virtual void c_cui_screen_widget::do_pre_update(class c_cui_update_context *);
// protected: virtual void c_cui_screen_widget::do_update(class c_cui_update_context *);
// public: bool c_cui_animation_manager::any_active(void) const;
// public: unsigned int c_cui_active_animation_collection::get_size(void) const;
// public: class c_cui_animation_manager * c_cui_widget::get_animation_manager(void);
// public: bool c_cui_screen_widget::get_close_on_sign_out(void) const;
// public: bool c_cui_screen_widget::get_close_on_leadership_loss(void) const;
// public: void c_cui_property_animator::get(class c_cui_animated_value<float> *) const;
// public: float c_cui_property_animator::get_absolute_real(void) const;
// public: float c_cui_property_animator::get_relative_real(void) const;
// protected: virtual void c_cui_screen_widget::do_render(class c_cui_render_context *) const;
// public: float c_cui_widget::get_width(void) const;
// public: float c_cui_widget::get_height(void) const;
// public: class c_shader_base_component * c_cui_widget::get_shader(void) const;
// public: bool c_cui_screen_widget::get_resolve_texture(void) const;
// public: float c_cui_screen_widget::get_depth(void) const;
// public: bool c_cui_screen_widget::evaluate_string(class c_cui_component const *, long, wchar_t *, unsigned int);
// private: bool c_cui_screen_widget::fetch_string(class c_cui_component const *, long, wchar_t *, unsigned int);
// private: bool c_cui_screen_widget::evaluate_component_property_string(class c_static_stack<long, 4> *, class c_cui_component const *, long, long, wchar_t *, unsigned int);
// public: long c_cui_binding_context::get_bound_element(void) const;
// class c_cui_binding_context * cui_component_get_binding_context(class c_cui_component const *);
// private: bool c_cui_screen_widget::evaluate_string(class c_static_stack<long, 4> *, class c_cui_component const *, long, wchar_t *, unsigned int);
// public: bool c_cui_screen_widget::set_sound_override_reference(struct s_tag_reference const *);
// public: bool c_cui_screen_widget::set_music_override_reference(struct s_tag_reference const *);
// void set_component_contexts(class c_cui_component *, class c_cui_component_context *);
// unsigned long get_screen_animation_total_milliseconds(class c_cui_screen_widget const *, long);
// struct s_campaign_state_screen_script const * get_screen_script_for_map_id(struct s_user_interface_tag_globals const *, enum e_map_id);
// public: c_cui_animated_value<float>::c_cui_animated_value<float>(void);
// public: float c_cui_animated_value<float>::get_absolute(void) const;
// public: void c_cui_animated_value<float>::set(float);
// public: void c_cui_animated_value<float>::set(float, float);
// public: c_cui_unique_ptr<struct s_cui_debug_state>::c_cui_unique_ptr<struct s_cui_debug_state>(void);
// public: c_cui_unique_ptr<struct s_cui_debug_state>::~c_cui_unique_ptr<struct s_cui_debug_state>(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_cui_screen_widget>::get_instance(void);
// public: c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>(void);
// public: void c_static_stack<long, 4>::pop(void);
// class c_cui_widget * cui_static_cast<class c_cui_widget *>(class c_cui_component *);
// class c_cui_widget * cui_dynamic_cast<class c_cui_widget *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, class c_cui_container_widget *, class c_cui_container_widget *& (c_cui_screen_widget::get_root_container::*)(void)>(void const *, long, struct s_cui_property_value *);
// void cui_property_value_set(struct s_cui_property_value *, class c_cui_container_widget *);
// public: class c_cui_container_widget * c_cui_screen_widget::get_root_container(void) const;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_container_widget *, void & (c_cui_screen_widget::set_root_container::*)(class c_cui_container_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_container_widget **);
// public: void c_cui_screen_widget::set_root_container(class c_cui_container_widget *);
// class c_cui_container_widget * cui_dynamic_cast<class c_cui_container_widget *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, class c_cui_widget *, class c_cui_widget *& (c_cui_screen_widget::get_initial_focused_widget::*)(void)>(void const *, long, struct s_cui_property_value *);
// void cui_property_value_set(struct s_cui_property_value *, class c_cui_widget *);
// public: class c_cui_widget * c_cui_screen_widget::get_initial_focused_widget(void) const;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_widget *, void & (c_cui_screen_widget::set_initial_focused_widget::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_widget **);
// public: void c_cui_screen_widget::set_initial_focused_widget(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_default_close::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_default_close::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_default_close(bool);
// ??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?get_script_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_cui_screen_widget::get_script_name(void) const;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_string_id, void & (c_cui_screen_widget::set_script_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_script_name(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_use_campaign_state_script::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_use_campaign_state_script::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_use_campaign_state_script(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_restart_script::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_restart_script::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_restart_script(bool);
// ??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?get_default_close_transition_out_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_cui_screen_widget::get_default_close_transition_out_animation_name(void) const;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_string_id, void & (c_cui_screen_widget::set_default_close_transition_out_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_default_close_transition_out_animation_name(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_close_on_sign_out::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_close_on_sign_out::*)(bool)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_close_on_location_change::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_cui_screen_widget::get_close_on_location_change(void) const;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_close_on_location_change::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_close_on_location_change(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_close_on_leadership_loss::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_close_on_leadership_loss::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_close_on_leadership_loss(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_resolve_texture::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_resolve_texture::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_resolve_texture(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::is_visible_in_screenshots::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_visible_in_screenshots::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_visible_in_screenshots(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, float, float & (c_cui_screen_widget::get_depth::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, float, void & (c_cui_screen_widget::set_depth::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_depth(float);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, float, float & (c_cui_screen_widget::get_pushback_depth::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, float, void & (c_cui_screen_widget::set_pushback_depth::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_pushback_depth(float);
// ??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@V?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@$1?get_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>, void & (c_cui_screen_widget::set_category::*)(class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_category(class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, struct s_tag_reference const *, struct s_tag_reference const *& (c_cui_screen_widget::get_sound_override_reference::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: struct s_tag_reference const * c_cui_screen_widget::get_sound_override_reference(void) const;
// bool cui_try_set_scalar_property_by_const_pointer<class c_cui_screen_widget, struct s_tag_reference, bool & (c_cui_screen_widget::set_sound_override_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, struct s_tag_reference const &, struct s_tag_reference &volatile & (c_cui_screen_widget::get_music_override_reference::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: struct s_tag_reference const & c_cui_screen_widget::get_music_override_reference(void) const;
// bool cui_try_set_scalar_property_by_const_pointer<class c_cui_screen_widget, struct s_tag_reference, bool & (c_cui_screen_widget::set_music_override_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_always_play_music::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_cui_screen_widget::get_always_play_music(void) const;
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_always_play_music::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_always_play_music(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_dispatch_all_input_events::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_dispatch_all_input_events::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_dispatch_all_input_events(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_eat_all_input_events::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_eat_all_input_events::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_eat_all_input_events(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_always_on_top::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_always_on_top::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_always_on_top(bool);
// bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_recognize_unsigned_in_input::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_recognize_unsigned_in_input::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_cui_screen_widget::set_recognize_unsigned_in_input(bool);
// void ui_track_delete<struct s_cui_debug_state>(struct s_cui_debug_state *);
// public: void * s_cui_debug_state::`scalar deleting destructor'(unsigned int);
// public: s_cui_debug_state::~s_cui_debug_state(void);
// public: c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>::c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>(void);
// public: static class c_cui_widget * s_cui_static_cast<class c_cui_widget *>::cast(class c_cui_component *);
// public: static class c_cui_widget * s_cui_dynamic_cast<class c_cui_widget *>::cast(class c_cui_component *);
// public: static class c_cui_container_widget * s_cui_dynamic_cast<class c_cui_container_widget *>::cast(class c_cui_component *);
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_cui_container_widget>::get(void);
// void cui_property_value_set<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver> *);
// public: c_cui_static_vector<struct s_cui_debug_path, 16>::~c_cui_static_vector<struct s_cui_debug_path, 16>(void);
// public: bool c_enum_no_init<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>::in_range(void) const;
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_cui_widget>::get(void);
// public: void c_cui_static_vector<struct s_cui_debug_path, 16>::clear(void);
// public: bool c_cui_static_vector<struct s_cui_debug_path, 16>::empty(void) const;
// public: unsigned int c_cui_static_vector<struct s_cui_debug_path, 16>::size(void) const;
// public: void c_cui_static_vector<struct s_cui_debug_path, 16>::pop_back(void);
// public: void * s_cui_debug_path::`scalar deleting destructor'(unsigned int);
// public: s_cui_debug_path::~s_cui_debug_path(void);
// public: c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::~c_cui_static_vector<struct s_cui_debug_path::s_element, 8>(void);
// public: void c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::clear(void);
// public: bool c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::empty(void) const;
// public: unsigned int c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::size(void) const;
// public: void c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::pop_back(void);
// private: struct s_cui_debug_path::s_element * c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::get(unsigned int);
// public: struct s_cui_debug_path::s_element * c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::data(void);
// private: struct s_cui_debug_path * c_cui_static_vector<struct s_cui_debug_path, 16>::get(unsigned int);
// public: struct s_cui_debug_path * c_cui_static_vector<struct s_cui_debug_path, 16>::data(void);
// public: void c_cui_component_context::set_milliseconds(unsigned long);
// public: c_cui_component_context::c_cui_component_context(long, long);
// public: class c_cui_component * c_cui_binding_scope::get_root(void) const;
// public: class c_cui_binding_context * c_cui_binding_scope::get_binding_context(void) const;
// public: struct s_cui_component_screen_definition const * c_cui_component::get_screen_definition(void) const;
// public: void c_cui_component::set_name(long);
// public: void c_cui_component::set_context(class c_cui_component_context *);
// public: unsigned long c_cui_component::get_milliseconds(void) const;
// public: unsigned long c_cui_component_context::get_milliseconds(void) const;
// public: enum e_cui_component_mode c_cui_component::get_mode(void) const;
// public: class c_cui_component * c_cui_component::get_parent(void) const;
// public: class c_cui_binding_scope const * c_cui_component::get_binding_scope(void) const;
// public: class c_cui_binding_scope * c_cui_component::get_binding_scope(void);
// bool cui_property_value_get(struct s_cui_property_value const *, bool *);
// void cui_property_value_set(struct s_cui_property_value *, bool);
// public: bool c_cui_long_property_enum_table::get_name(long, long *) const;
// public: unsigned int c_cui_property_enum_table::get_entry_count(void) const;
// bool cui_property_value_get(struct s_cui_property_value const *, float *);
// void cui_property_value_set(struct s_cui_property_value *, float);
// float cui_property_value_get_real(struct s_cui_property_value const *);
// void cui_tag_reference_initialize(struct s_tag_reference *);
// bool cui_property_value_get(struct s_cui_property_value const *, struct s_tag_reference *);
// void cui_property_value_set(struct s_cui_property_value *, struct s_tag_reference const &);
// void cui_property_value_set(struct s_cui_property_value *, struct s_tag_reference const *);
// public: c_cui_string_id::c_cui_string_id(void);
// public: c_cui_string_id::c_cui_string_id(long);
// public: long c_cui_string_id::operator long(void) const;
// bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_string_id *);
// public: class c_cui_string_id & c_cui_string_id::operator=(long);
// void cui_property_value_set(struct s_cui_property_value *, class c_cui_string_id);
// public: enum e_cui_component_mode c_enum_no_init<enum e_cui_component_mode, char, -1, 3, struct s_default_enum_string_resolver>::operator enum e_cui_component_mode(void) const;
// void cui_component_destroy(class c_cui_component *);
// void ui_track_delete<class c_cui_component>(class c_cui_component *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_cui_container_widget>::get_instance(void);
// public: virtual c_cui_long_property_enum_table::~c_cui_long_property_enum_table(void);
// public: virtual c_cui_property_enum_table::~c_cui_property_enum_table(void);
// merged_849B1340;
// void g_screen_category_enum_table::`dynamic atexit destructor'(void);

//public: c_cui_screen_widget::c_cui_screen_widget(long, long, long)
//{
//    mangled_ppc("??0c_cui_screen_widget@@QAA@JJJ@Z");
//};

//merged_849ABD10
//{
//    mangled_ppc("merged_849ABD10");
//};

//public: virtual c_cui_screen_widget::~c_cui_screen_widget(void)
//{
//    mangled_ppc("??1c_cui_screen_widget@@UAA@XZ");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_cui_screen_widget::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_cui_screen_widget@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_cui_screen_widget::set_controller_index_input(enum e_controller_index, bool)
//{
//    mangled_ppc("?set_controller_index_input@c_cui_screen_widget@@QAAXW4e_controller_index@@_N@Z");
//};

//private: void c_cui_screen_widget::set_default_bounds(void)
//{
//    mangled_ppc("?set_default_bounds@c_cui_screen_widget@@AAAXXZ");
//};

//public: void c_cui_widget::set_width(float)
//{
//    mangled_ppc("?set_width@c_cui_widget@@QAAXM@Z");
//};

//public: void c_cui_widget::set_height(float)
//{
//    mangled_ppc("?set_height@c_cui_widget@@QAAXM@Z");
//};

//public: void c_cui_screen_widget::set_focused_widget(class c_cui_widget *)
//{
//    mangled_ppc("?set_focused_widget@c_cui_screen_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//public: bool c_cui_screen_widget::transfer_focus(class c_cui_widget *)
//{
//    mangled_ppc("?transfer_focus@c_cui_screen_widget@@QAA_NPAVc_cui_widget@@@Z");
//};

//public: class c_cui_widget * c_cui_screen_widget::get_focused_widget(void) const
//{
//    mangled_ppc("?get_focused_widget@c_cui_screen_widget@@QBAPAVc_cui_widget@@XZ");
//};

//public: void c_cui_screen_widget::transition_in(void)
//{
//    mangled_ppc("?transition_in@c_cui_screen_widget@@QAAXXZ");
//};

//public: void c_cui_screen_widget::transition_in(long)
//{
//    mangled_ppc("?transition_in@c_cui_screen_widget@@QAAXJ@Z");
//};

//public: bool c_cui_widget::animation_enabled(void) const
//{
//    mangled_ppc("?animation_enabled@c_cui_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_widget::is_subscreen(void) const
//{
//    mangled_ppc("?is_subscreen@c_cui_screen_widget@@QBA_NXZ");
//};

//void cui_component_start_animation(class c_cui_widget *, long, bool, bool, bool)
//{
//    mangled_ppc("?cui_component_start_animation@@YAXPAVc_cui_widget@@J_N11@Z");
//};

//public: void c_cui_screen_widget::transition_out(void)
//{
//    mangled_ppc("?transition_out@c_cui_screen_widget@@QAAXXZ");
//};

//public: void c_cui_screen_widget::transition_out(long)
//{
//    mangled_ppc("?transition_out@c_cui_screen_widget@@QAAXJ@Z");
//};

//protected: void c_cui_screen_widget::set_dead(bool)
//{
//    mangled_ppc("?set_dead@c_cui_screen_widget@@IAAX_N@Z");
//};

//public: bool c_cui_screen_widget::on_load_complete(void)
//{
//    mangled_ppc("?on_load_complete@c_cui_screen_widget@@QAA_NXZ");
//};

//class c_cui_widget * cui_widget_get_first_descendant_of_type(class c_cui_widget *, long)
//{
//    mangled_ppc("?cui_widget_get_first_descendant_of_type@@YAPAVc_cui_widget@@PAV1@J@Z");
//};

//protected: virtual bool c_cui_screen_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_handle_input_event@c_cui_screen_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: bool c_cui_screen_widget::get_default_close(void) const
//{
//    mangled_ppc("?get_default_close@c_cui_screen_widget@@QBA_NXZ");
//};

//public: enum e_event_type c_cui_input_event::get_event_type(void) const
//{
//    mangled_ppc("?get_event_type@c_cui_input_event@@QBA?AW4e_event_type@@XZ");
//};

//public: enum e_controller_component c_cui_input_event::get_controller_component(void) const
//{
//    mangled_ppc("?get_controller_component@c_cui_input_event@@QBA?AW4e_controller_component@@XZ");
//};

//protected: virtual bool c_cui_screen_widget::do_dispatch_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_dispatch_input_event@c_cui_screen_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: bool c_cui_screen_widget::get_dispatch_all_input_events(void) const
//{
//    mangled_ppc("?get_dispatch_all_input_events@c_cui_screen_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_widget::get_eat_all_input_events(void) const
//{
//    mangled_ppc("?get_eat_all_input_events@c_cui_screen_widget@@QBA_NXZ");
//};

//public: enum e_controller_index c_cui_input_event::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_cui_input_event@@QBA?AW4e_controller_index@@XZ");
//};

//public: unsigned long c_cui_update_context::get_milliseconds(void) const
//{
//    mangled_ppc("?get_milliseconds@c_cui_update_context@@QBAKXZ");
//};

//public: void c_cui_screen_widget::set_overlaid(bool)
//{
//    mangled_ppc("?set_overlaid@c_cui_screen_widget@@QAAX_N@Z");
//};

//public: bool c_cui_screen_widget::is_overlaid(void) const
//{
//    mangled_ppc("?is_overlaid@c_cui_screen_widget@@QBA_NXZ");
//};

//public: void c_cui_screen_widget::close(void)
//{
//    mangled_ppc("?close@c_cui_screen_widget@@QAAXXZ");
//};

//private: void c_cui_screen_widget::set_closing(bool)
//{
//    mangled_ppc("?set_closing@c_cui_screen_widget@@AAAX_N@Z");
//};

//public: void c_cui_screen_widget::close(long)
//{
//    mangled_ppc("?close@c_cui_screen_widget@@QAAXJ@Z");
//};

//public: struct s_user_interface_shared_globals const * c_cui_screen_widget::get_ui_shared_globals(void) const
//{
//    mangled_ppc("?get_ui_shared_globals@c_cui_screen_widget@@QBAPBUs_user_interface_shared_globals@@XZ");
//};

//protected: virtual void c_cui_screen_widget::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_cui_screen_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_cui_screen_widget::get_restart_script(void) const
//{
//    mangled_ppc("?get_restart_script@c_cui_screen_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_widget::get_use_campaign_state_script(void) const
//{
//    mangled_ppc("?get_use_campaign_state_script@c_cui_screen_widget@@QBA_NXZ");
//};

//protected: virtual void c_cui_screen_widget::do_pre_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_pre_update@c_cui_screen_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_cui_screen_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_cui_screen_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_cui_animation_manager::any_active(void) const
//{
//    mangled_ppc("?any_active@c_cui_animation_manager@@QBA_NXZ");
//};

//public: unsigned int c_cui_active_animation_collection::get_size(void) const
//{
//    mangled_ppc("?get_size@c_cui_active_animation_collection@@QBAIXZ");
//};

//public: class c_cui_animation_manager * c_cui_widget::get_animation_manager(void)
//{
//    mangled_ppc("?get_animation_manager@c_cui_widget@@QAAPAVc_cui_animation_manager@@XZ");
//};

//public: bool c_cui_screen_widget::get_close_on_sign_out(void) const
//{
//    mangled_ppc("?get_close_on_sign_out@c_cui_screen_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_widget::get_close_on_leadership_loss(void) const
//{
//    mangled_ppc("?get_close_on_leadership_loss@c_cui_screen_widget@@QBA_NXZ");
//};

//public: void c_cui_property_animator::get(class c_cui_animated_value<float> *) const
//{
//    mangled_ppc("?get@c_cui_property_animator@@QBAXPAV?$c_cui_animated_value@M@@@Z");
//};

//public: float c_cui_property_animator::get_absolute_real(void) const
//{
//    mangled_ppc("?get_absolute_real@c_cui_property_animator@@QBAMXZ");
//};

//public: float c_cui_property_animator::get_relative_real(void) const
//{
//    mangled_ppc("?get_relative_real@c_cui_property_animator@@QBAMXZ");
//};

//protected: virtual void c_cui_screen_widget::do_render(class c_cui_render_context *) const
//{
//    mangled_ppc("?do_render@c_cui_screen_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//public: float c_cui_widget::get_width(void) const
//{
//    mangled_ppc("?get_width@c_cui_widget@@QBAMXZ");
//};

//public: float c_cui_widget::get_height(void) const
//{
//    mangled_ppc("?get_height@c_cui_widget@@QBAMXZ");
//};

//public: class c_shader_base_component * c_cui_widget::get_shader(void) const
//{
//    mangled_ppc("?get_shader@c_cui_widget@@QBAPAVc_shader_base_component@@XZ");
//};

//public: bool c_cui_screen_widget::get_resolve_texture(void) const
//{
//    mangled_ppc("?get_resolve_texture@c_cui_screen_widget@@QBA_NXZ");
//};

//public: float c_cui_screen_widget::get_depth(void) const
//{
//    mangled_ppc("?get_depth@c_cui_screen_widget@@QBAMXZ");
//};

//public: bool c_cui_screen_widget::evaluate_string(class c_cui_component const *, long, wchar_t *, unsigned int)
//{
//    mangled_ppc("?evaluate_string@c_cui_screen_widget@@QAA_NPBVc_cui_component@@JPA_WI@Z");
//};

//private: bool c_cui_screen_widget::fetch_string(class c_cui_component const *, long, wchar_t *, unsigned int)
//{
//    mangled_ppc("?fetch_string@c_cui_screen_widget@@AAA_NPBVc_cui_component@@JPA_WI@Z");
//};

//private: bool c_cui_screen_widget::evaluate_component_property_string(class c_static_stack<long, 4> *, class c_cui_component const *, long, long, wchar_t *, unsigned int)
//{
//    mangled_ppc("?evaluate_component_property_string@c_cui_screen_widget@@AAA_NPAV?$c_static_stack@J$03@@PBVc_cui_component@@JJPA_WI@Z");
//};

//public: long c_cui_binding_context::get_bound_element(void) const
//{
//    mangled_ppc("?get_bound_element@c_cui_binding_context@@QBAJXZ");
//};

//class c_cui_binding_context * cui_component_get_binding_context(class c_cui_component const *)
//{
//    mangled_ppc("?cui_component_get_binding_context@@YAPAVc_cui_binding_context@@PBVc_cui_component@@@Z");
//};

//private: bool c_cui_screen_widget::evaluate_string(class c_static_stack<long, 4> *, class c_cui_component const *, long, wchar_t *, unsigned int)
//{
//    mangled_ppc("?evaluate_string@c_cui_screen_widget@@AAA_NPAV?$c_static_stack@J$03@@PBVc_cui_component@@JPA_WI@Z");
//};

//public: bool c_cui_screen_widget::set_sound_override_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?set_sound_override_reference@c_cui_screen_widget@@QAA_NPBUs_tag_reference@@@Z");
//};

//public: bool c_cui_screen_widget::set_music_override_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?set_music_override_reference@c_cui_screen_widget@@QAA_NPBUs_tag_reference@@@Z");
//};

//void set_component_contexts(class c_cui_component *, class c_cui_component_context *)
//{
//    mangled_ppc("?set_component_contexts@@YAXPAVc_cui_component@@PAVc_cui_component_context@@@Z");
//};

//unsigned long get_screen_animation_total_milliseconds(class c_cui_screen_widget const *, long)
//{
//    mangled_ppc("?get_screen_animation_total_milliseconds@@YAKPBVc_cui_screen_widget@@J@Z");
//};

//struct s_campaign_state_screen_script const * get_screen_script_for_map_id(struct s_user_interface_tag_globals const *, enum e_map_id)
//{
//    mangled_ppc("?get_screen_script_for_map_id@@YAPBUs_campaign_state_screen_script@@PBUs_user_interface_tag_globals@@W4e_map_id@@@Z");
//};

//public: c_cui_animated_value<float>::c_cui_animated_value<float>(void)
//{
//    mangled_ppc("??0?$c_cui_animated_value@M@@QAA@XZ");
//};

//public: float c_cui_animated_value<float>::get_absolute(void) const
//{
//    mangled_ppc("?get_absolute@?$c_cui_animated_value@M@@QBAMXZ");
//};

//public: void c_cui_animated_value<float>::set(float)
//{
//    mangled_ppc("?set@?$c_cui_animated_value@M@@QAAXM@Z");
//};

//public: void c_cui_animated_value<float>::set(float, float)
//{
//    mangled_ppc("?set@?$c_cui_animated_value@M@@QAAXMM@Z");
//};

//public: c_cui_unique_ptr<struct s_cui_debug_state>::c_cui_unique_ptr<struct s_cui_debug_state>(void)
//{
//    mangled_ppc("??0?$c_cui_unique_ptr@Us_cui_debug_state@@@@QAA@XZ");
//};

//public: c_cui_unique_ptr<struct s_cui_debug_state>::~c_cui_unique_ptr<struct s_cui_debug_state>(void)
//{
//    mangled_ppc("??1?$c_cui_unique_ptr@Us_cui_debug_state@@@@QAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_cui_screen_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_cui_screen_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@QAA@XZ");
//};

//public: void c_static_stack<long, 4>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@J$03@@QAAXXZ");
//};

//class c_cui_widget * cui_static_cast<class c_cui_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_static_cast@PAVc_cui_widget@@@@YAPAVc_cui_widget@@PAVc_cui_component@@@Z");
//};

//class c_cui_widget * cui_dynamic_cast<class c_cui_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_cui_widget@@@@YAPAVc_cui_widget@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, class c_cui_container_widget *, class c_cui_container_widget *& (c_cui_screen_widget::get_root_container::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@PAVc_cui_container_widget@@$1?get_root_container@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_cui_container_widget *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_cui_container_widget@@@Z");
//};

//public: class c_cui_container_widget * c_cui_screen_widget::get_root_container(void) const
//{
//    mangled_ppc("?get_root_container@c_cui_screen_widget@@QBAPAVc_cui_container_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_container_widget *, void & (c_cui_screen_widget::set_root_container::*)(class c_cui_container_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@PAVc_cui_container_widget@@$1?set_root_container@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_container_widget **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_cui_container_widget@@@Z");
//};

//public: void c_cui_screen_widget::set_root_container(class c_cui_container_widget *)
//{
//    mangled_ppc("?set_root_container@c_cui_screen_widget@@QAAXPAVc_cui_container_widget@@@Z");
//};

//class c_cui_container_widget * cui_dynamic_cast<class c_cui_container_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_cui_container_widget@@@@YAPAVc_cui_container_widget@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, class c_cui_widget *, class c_cui_widget *& (c_cui_screen_widget::get_initial_focused_widget::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@PAVc_cui_widget@@$1?get_initial_focused_widget@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_cui_widget *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_cui_widget@@@Z");
//};

//public: class c_cui_widget * c_cui_screen_widget::get_initial_focused_widget(void) const
//{
//    mangled_ppc("?get_initial_focused_widget@c_cui_screen_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_widget *, void & (c_cui_screen_widget::set_initial_focused_widget::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@PAVc_cui_widget@@$1?set_initial_focused_widget@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_widget **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_cui_widget@@@Z");
//};

//public: void c_cui_screen_widget::set_initial_focused_widget(class c_cui_widget *)
//{
//    mangled_ppc("?set_initial_focused_widget@c_cui_screen_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_default_close::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_default_close@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_default_close::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_default_close@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_default_close(bool)
//{
//    mangled_ppc("?set_default_close@c_cui_screen_widget@@QAAX_N@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?get_script_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?get_script_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_cui_screen_widget::get_script_name(void) const
//{
//    mangled_ppc("?get_script_name@c_cui_screen_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_string_id, void & (c_cui_screen_widget::set_script_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?set_script_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_script_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_script_name@c_cui_screen_widget@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_use_campaign_state_script::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_use_campaign_state_script@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_use_campaign_state_script::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_use_campaign_state_script@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_use_campaign_state_script(bool)
//{
//    mangled_ppc("?set_use_campaign_state_script@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_restart_script::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_restart_script@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_restart_script::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_restart_script@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_restart_script(bool)
//{
//    mangled_ppc("?set_restart_script@c_cui_screen_widget@@QAAX_N@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?get_default_close_transition_out_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?get_default_close_transition_out_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_cui_screen_widget::get_default_close_transition_out_animation_name(void) const
//{
//    mangled_ppc("?get_default_close_transition_out_animation_name@c_cui_screen_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_cui_string_id, void & (c_cui_screen_widget::set_default_close_transition_out_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@Vc_cui_string_id@@$1?set_default_close_transition_out_animation_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_default_close_transition_out_animation_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_default_close_transition_out_animation_name@c_cui_screen_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_close_on_sign_out::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_close_on_sign_out@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_close_on_sign_out::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_close_on_sign_out@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_close_on_location_change::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_close_on_location_change@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_cui_screen_widget::get_close_on_location_change(void) const
//{
//    mangled_ppc("?get_close_on_location_change@c_cui_screen_widget@@QBA_NXZ");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_close_on_location_change::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_close_on_location_change@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_close_on_location_change(bool)
//{
//    mangled_ppc("?set_close_on_location_change@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_close_on_leadership_loss::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_close_on_leadership_loss@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_close_on_leadership_loss::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_close_on_leadership_loss@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_close_on_leadership_loss(bool)
//{
//    mangled_ppc("?set_close_on_leadership_loss@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_resolve_texture::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_resolve_texture@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_resolve_texture::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_resolve_texture@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_resolve_texture(bool)
//{
//    mangled_ppc("?set_resolve_texture@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::is_visible_in_screenshots::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?is_visible_in_screenshots@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_visible_in_screenshots::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_visible_in_screenshots@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_visible_in_screenshots(bool)
//{
//    mangled_ppc("?set_visible_in_screenshots@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, float, float & (c_cui_screen_widget::get_depth::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@M$1?get_depth@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, float, void & (c_cui_screen_widget::set_depth::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@M$1?set_depth@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_depth(float)
//{
//    mangled_ppc("?set_depth@c_cui_screen_widget@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, float, float & (c_cui_screen_widget::get_pushback_depth::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@M$1?get_pushback_depth@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, float, void & (c_cui_screen_widget::set_pushback_depth::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@M$1?set_pushback_depth@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_pushback_depth(float)
//{
//    mangled_ppc("?set_pushback_depth@c_cui_screen_widget@@QAAXM@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@V?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@$1?get_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@V?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@$1?get_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>, void & (c_cui_screen_widget::set_category::*)(class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@V?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@$1?set_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_category(class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_category@c_cui_screen_widget@@QAAXV?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, struct s_tag_reference const *, struct s_tag_reference const *& (c_cui_screen_widget::get_sound_override_reference::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@PBUs_tag_reference@@$1?get_sound_override_reference@1@QBAPBU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_tag_reference const * c_cui_screen_widget::get_sound_override_reference(void) const
//{
//    mangled_ppc("?get_sound_override_reference@c_cui_screen_widget@@QBAPBUs_tag_reference@@XZ");
//};

//bool cui_try_set_scalar_property_by_const_pointer<class c_cui_screen_widget, struct s_tag_reference, bool & (c_cui_screen_widget::set_sound_override_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_const_pointer@Vc_cui_screen_widget@@Us_tag_reference@@$1?set_sound_override_reference@1@QAA_NPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, struct s_tag_reference const &, struct s_tag_reference &volatile & (c_cui_screen_widget::get_music_override_reference::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@ABUs_tag_reference@@$1?get_music_override_reference@1@QBAABU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_tag_reference const & c_cui_screen_widget::get_music_override_reference(void) const
//{
//    mangled_ppc("?get_music_override_reference@c_cui_screen_widget@@QBAABUs_tag_reference@@XZ");
//};

//bool cui_try_set_scalar_property_by_const_pointer<class c_cui_screen_widget, struct s_tag_reference, bool & (c_cui_screen_widget::set_music_override_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_const_pointer@Vc_cui_screen_widget@@Us_tag_reference@@$1?set_music_override_reference@1@QAA_NPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_always_play_music::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_always_play_music@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_cui_screen_widget::get_always_play_music(void) const
//{
//    mangled_ppc("?get_always_play_music@c_cui_screen_widget@@QBA_NXZ");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_always_play_music::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_always_play_music@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_always_play_music(bool)
//{
//    mangled_ppc("?set_always_play_music@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_dispatch_all_input_events::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_dispatch_all_input_events@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_dispatch_all_input_events::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_dispatch_all_input_events@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_dispatch_all_input_events(bool)
//{
//    mangled_ppc("?set_dispatch_all_input_events@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_eat_all_input_events::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_eat_all_input_events@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_eat_all_input_events::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_eat_all_input_events@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_eat_all_input_events(bool)
//{
//    mangled_ppc("?set_eat_all_input_events@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_always_on_top::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_always_on_top@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_always_on_top::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_always_on_top@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_always_on_top(bool)
//{
//    mangled_ppc("?set_always_on_top@c_cui_screen_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_cui_screen_widget, bool, bool & (c_cui_screen_widget::get_recognize_unsigned_in_input::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_cui_screen_widget@@_N$1?get_recognize_unsigned_in_input@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_cui_screen_widget, bool, void & (c_cui_screen_widget::set_recognize_unsigned_in_input::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_cui_screen_widget@@_N$1?set_recognize_unsigned_in_input@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_cui_screen_widget::set_recognize_unsigned_in_input(bool)
//{
//    mangled_ppc("?set_recognize_unsigned_in_input@c_cui_screen_widget@@QAAX_N@Z");
//};

//void ui_track_delete<struct s_cui_debug_state>(struct s_cui_debug_state *)
//{
//    mangled_ppc("??$ui_track_delete@Us_cui_debug_state@@@@YAXPAUs_cui_debug_state@@@Z");
//};

//public: void * s_cui_debug_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_cui_debug_state@@QAAPAXI@Z");
//};

//public: s_cui_debug_state::~s_cui_debug_state(void)
//{
//    mangled_ppc("??1s_cui_debug_state@@QAA@XZ");
//};

//public: c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>::c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static class c_cui_widget * s_cui_static_cast<class c_cui_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_static_cast@PAVc_cui_widget@@@@SAPAVc_cui_widget@@PAVc_cui_component@@@Z");
//};

//public: static class c_cui_widget * s_cui_dynamic_cast<class c_cui_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_cui_widget@@@@SAPAVc_cui_widget@@PAVc_cui_component@@@Z");
//};

//public: static class c_cui_container_widget * s_cui_dynamic_cast<class c_cui_container_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_cui_container_widget@@@@SAPAVc_cui_container_widget@@PAVc_cui_component@@@Z");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_cui_container_widget>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_cui_container_widget@@@@SAPBUs_cui_component_description@@XZ");
//};

//void cui_property_value_set<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_cui_static_vector<struct s_cui_debug_path, 16>::~c_cui_static_vector<struct s_cui_debug_path, 16>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@QAA@XZ");
//};

//public: bool c_enum_no_init<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_cui_widget>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_cui_widget@@@@SAPBUs_cui_component_description@@XZ");
//};

//public: void c_cui_static_vector<struct s_cui_debug_path, 16>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@QAAXXZ");
//};

//public: bool c_cui_static_vector<struct s_cui_debug_path, 16>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@QBA_NXZ");
//};

//public: unsigned int c_cui_static_vector<struct s_cui_debug_path, 16>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@QBAIXZ");
//};

//public: void c_cui_static_vector<struct s_cui_debug_path, 16>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@QAAXXZ");
//};

//public: void * s_cui_debug_path::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_cui_debug_path@@QAAPAXI@Z");
//};

//public: s_cui_debug_path::~s_cui_debug_path(void)
//{
//    mangled_ppc("??1s_cui_debug_path@@QAA@XZ");
//};

//public: c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::~c_cui_static_vector<struct s_cui_debug_path::s_element, 8>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@QAA@XZ");
//};

//public: void c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@QAAXXZ");
//};

//public: bool c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@QBA_NXZ");
//};

//public: unsigned int c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@QBAIXZ");
//};

//public: void c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@QAAXXZ");
//};

//private: struct s_cui_debug_path::s_element * c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@AAAPAUs_element@s_cui_debug_path@@I@Z");
//};

//public: struct s_cui_debug_path::s_element * c_cui_static_vector<struct s_cui_debug_path::s_element, 8>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@QAAPAUs_element@s_cui_debug_path@@XZ");
//};

//private: struct s_cui_debug_path * c_cui_static_vector<struct s_cui_debug_path, 16>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@AAAPAUs_cui_debug_path@@I@Z");
//};

//public: struct s_cui_debug_path * c_cui_static_vector<struct s_cui_debug_path, 16>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_cui_debug_path@@$0BA@@@QAAPAUs_cui_debug_path@@XZ");
//};

//public: void c_cui_component_context::set_milliseconds(unsigned long)
//{
//    mangled_ppc("?set_milliseconds@c_cui_component_context@@QAAXK@Z");
//};

//public: c_cui_component_context::c_cui_component_context(long, long)
//{
//    mangled_ppc("??0c_cui_component_context@@QAA@JJ@Z");
//};

//public: class c_cui_component * c_cui_binding_scope::get_root(void) const
//{
//    mangled_ppc("?get_root@c_cui_binding_scope@@QBAPAVc_cui_component@@XZ");
//};

//public: class c_cui_binding_context * c_cui_binding_scope::get_binding_context(void) const
//{
//    mangled_ppc("?get_binding_context@c_cui_binding_scope@@QBAPAVc_cui_binding_context@@XZ");
//};

//public: struct s_cui_component_screen_definition const * c_cui_component::get_screen_definition(void) const
//{
//    mangled_ppc("?get_screen_definition@c_cui_component@@QBAPBUs_cui_component_screen_definition@@XZ");
//};

//public: void c_cui_component::set_name(long)
//{
//    mangled_ppc("?set_name@c_cui_component@@QAAXJ@Z");
//};

//public: void c_cui_component::set_context(class c_cui_component_context *)
//{
//    mangled_ppc("?set_context@c_cui_component@@QAAXPAVc_cui_component_context@@@Z");
//};

//public: unsigned long c_cui_component::get_milliseconds(void) const
//{
//    mangled_ppc("?get_milliseconds@c_cui_component@@QBAKXZ");
//};

//public: unsigned long c_cui_component_context::get_milliseconds(void) const
//{
//    mangled_ppc("?get_milliseconds@c_cui_component_context@@QBAKXZ");
//};

//public: enum e_cui_component_mode c_cui_component::get_mode(void) const
//{
//    mangled_ppc("?get_mode@c_cui_component@@QBA?AW4e_cui_component_mode@@XZ");
//};

//public: class c_cui_component * c_cui_component::get_parent(void) const
//{
//    mangled_ppc("?get_parent@c_cui_component@@QBAPAV1@XZ");
//};

//public: class c_cui_binding_scope const * c_cui_component::get_binding_scope(void) const
//{
//    mangled_ppc("?get_binding_scope@c_cui_component@@QBAPBVc_cui_binding_scope@@XZ");
//};

//public: class c_cui_binding_scope * c_cui_component::get_binding_scope(void)
//{
//    mangled_ppc("?get_binding_scope@c_cui_component@@QAAPAVc_cui_binding_scope@@XZ");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, bool *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PA_N@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, bool)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@_N@Z");
//};

//public: bool c_cui_long_property_enum_table::get_name(long, long *) const
//{
//    mangled_ppc("?get_name@c_cui_long_property_enum_table@@QBA_NJPAJ@Z");
//};

//public: unsigned int c_cui_property_enum_table::get_entry_count(void) const
//{
//    mangled_ppc("?get_entry_count@c_cui_property_enum_table@@QBAIXZ");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, float *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAM@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, float)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@M@Z");
//};

//float cui_property_value_get_real(struct s_cui_property_value const *)
//{
//    mangled_ppc("?cui_property_value_get_real@@YAMPBUs_cui_property_value@@@Z");
//};

//void cui_tag_reference_initialize(struct s_tag_reference *)
//{
//    mangled_ppc("?cui_tag_reference_initialize@@YAXPAUs_tag_reference@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, struct s_tag_reference *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAUs_tag_reference@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, struct s_tag_reference const &)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@ABUs_tag_reference@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, struct s_tag_reference const *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PBUs_tag_reference@@@Z");
//};

//public: c_cui_string_id::c_cui_string_id(void)
//{
//    mangled_ppc("??0c_cui_string_id@@QAA@XZ");
//};

//public: c_cui_string_id::c_cui_string_id(long)
//{
//    mangled_ppc("??0c_cui_string_id@@QAA@J@Z");
//};

//public: long c_cui_string_id::operator long(void) const
//{
//    mangled_ppc("??Bc_cui_string_id@@QBAJXZ");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_cui_string_id *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAVc_cui_string_id@@@Z");
//};

//public: class c_cui_string_id & c_cui_string_id::operator=(long)
//{
//    mangled_ppc("??4c_cui_string_id@@QAAAAV0@J@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_cui_string_id)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@Vc_cui_string_id@@@Z");
//};

//public: enum e_cui_component_mode c_enum_no_init<enum e_cui_component_mode, char, -1, 3, struct s_default_enum_string_resolver>::operator enum e_cui_component_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_cui_component_mode@@D$0?0$02Us_default_enum_string_resolver@@@@QBA?AW4e_cui_component_mode@@XZ");
//};

//void cui_component_destroy(class c_cui_component *)
//{
//    mangled_ppc("?cui_component_destroy@@YAXPAVc_cui_component@@@Z");
//};

//void ui_track_delete<class c_cui_component>(class c_cui_component *)
//{
//    mangled_ppc("??$ui_track_delete@Vc_cui_component@@@@YAXPAVc_cui_component@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_cui_container_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_cui_container_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: virtual c_cui_long_property_enum_table::~c_cui_long_property_enum_table(void)
//{
//    mangled_ppc("??1c_cui_long_property_enum_table@@UAA@XZ");
//};

//public: virtual c_cui_property_enum_table::~c_cui_property_enum_table(void)
//{
//    mangled_ppc("??1c_cui_property_enum_table@@UAA@XZ");
//};

//merged_849B1340
//{
//    mangled_ppc("merged_849B1340");
//};

//void g_screen_category_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_screen_category_enum_table@@YAXXZ");
//};

