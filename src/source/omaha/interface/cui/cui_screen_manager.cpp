/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned int const c_cui_render_surface_allocator::k_max_surface_count; // "?k_max_surface_count@c_cui_render_surface_allocator@@2IB"
// public: static unsigned int const c_cui_render_surface_allocator::k_max_texture_count; // "?k_max_texture_count@c_cui_render_surface_allocator@@2IB"
// private: static unsigned int const c_cui_render_command_renderer::k_projection_matrix_stack_size; // "?k_projection_matrix_stack_size@c_cui_render_command_renderer@@0IB"
// private: static unsigned int const c_cui_render_command_renderer::k_model_view_matrix_stack_size; // "?k_model_view_matrix_stack_size@c_cui_render_command_renderer@@0IB"
// public: static enum e_surface const c_cui_render_buffer_renderer::k_surface; // "?k_surface@c_cui_render_buffer_renderer@@2W4e_surface@@B"

// public: c_cui_screen_manager::s_window::s_window(void);
// public: c_cui_render_buffer::c_cui_render_buffer(void);
// public: c_cui_screen_collection::c_cui_screen_collection(void);
// public: c_cui_screen_manager::c_cui_screen_manager(void);
// public: bool c_cui_screen_manager::add(enum e_window_index, class c_cui_screen_widget *);
// private: struct c_cui_screen_manager::s_window * c_cui_screen_manager::get_window(long);
// public: long c_cui_screen_widget::get_tag_index(void) const;
// public: void c_cui_screen_widget::set_window_index(enum e_window_index);
// public: bool c_cui_screen_manager::insert(enum e_window_index, long, class c_cui_screen_widget *);
// public: bool c_cui_screen_manager::remove(enum e_window_index, class c_cui_screen_widget *);
// public: class c_cui_screen_widget * c_cui_screen_manager::load_and_add_by_name(enum e_window_index, long, long);
// public: bool c_cui_screen_collection::full(void) const;
// public: class c_cui_screen_widget * c_cui_screen_manager::load_and_add_by_tag_index(enum e_window_index, long, long);
// public: class c_cui_screen_widget * c_cui_screen_manager::load_and_insert_by_name(enum e_window_index, long, long, long);
// public: class c_cui_screen_widget * c_cui_screen_manager::get_bottommost(enum e_window_index) const;
// public: unsigned int c_cui_screen_collection::get_size(void) const;
// public: class c_cui_screen_widget * c_cui_screen_manager::get_topmost(enum e_window_index) const;
// public: class c_cui_screen_widget * c_cui_screen_manager::get_active(enum e_window_index) const;
// public: bool c_cui_widget::is_enabled(void) const;
// protected: bool c_cui_widget::test_flag(long) const;
// public: bool c_cui_screen_widget::is_closing(void) const;
// public: bool c_cui_screen_manager::destroy(enum e_window_index, class c_cui_screen_widget *);
// public: void c_cui_screen_manager::destroy_all(enum e_window_index);
// public: void c_cui_screen_manager::destroy_all(void);
// public: void c_cui_screen_manager::reload_all(void);
// public: void c_cui_screen_manager::reload(enum e_window_index);
// public: long c_cui_screen_widget::get_resolution_name(void) const;
// public: long c_cui_screen_widget::get_theme_name(void) const;
// public: class c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver> c_cui_screen_widget::get_input_controller_mask(void) const;
// public: void c_cui_screen_widget::set_input_controller_mask(class c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>);
// public: enum e_gui_location c_cui_screen_widget::get_gui_location(void) const;
// public: void c_cui_screen_widget::set_gui_location(enum e_gui_location);
// public: void c_cui_screen_manager::update(enum e_window_index);
// public: bool c_cui_screen_widget::get_always_on_top(void) const;
// public: bool c_cui_screen_widget::is_dead(void) const;
// public: bool c_cui_screen_widget::is_visible_in_screenshots(void) const;
// public: float c_cui_screen_widget::get_pushback_depth(void) const;
// public: void c_cui_screen_manager::update_all(void);
// public: bool c_cui_screen_manager::category_active(enum e_cui_screen_category) const;
// public: bool c_cui_screen_manager::category_closing(enum e_cui_screen_category) const;
// public: void c_cui_screen_manager::close_in_category(enum e_window_index, enum e_cui_screen_category);
// public: void c_cui_screen_manager::close_all_in_category(enum e_cui_screen_category);
// public: class c_cui_screen_widget const * c_cui_screen_manager::get_active_in_category(enum e_window_index, enum e_cui_screen_category) const;
// public: class c_cui_screen_widget * c_cui_screen_manager::get_active_in_category(enum e_window_index, enum e_cui_screen_category);
// public: void c_cui_screen_manager::render(enum e_surface, enum e_window_index, bool);
// void cui_screen_manager_initialize_for_new_map(void);
// void cui_screen_manager_dispose_from_old_map(void);
// class c_cui_screen_manager * cui_screen_manager_get(void);
// bool cui_screen_manager_available(void);
// long cui_get_window_resolution_name(enum e_window_index);
// void cui_screen_initialize(class c_cui_screen_manager *, class c_cui_screen_widget *, struct s_cui_screen_parameters const *);
// public: void c_cui_screen_widget::set_close_on_sign_out(bool);
// protected: void c_cui_widget::set_flag(long, bool);
// public: unsigned int c_cui_static_vector<class c_cui_component *, 16>::size(void) const;
// public: unsigned int c_cui_static_vector<class c_cui_component *, 16>::capacity(void) const;
// public: c_cui_list<class c_cui_component>::c_cui_list<class c_cui_component>(void);
// public: class c_cui_component * c_cui_list<class c_cui_component>::get_head(void) const;
// public: long c_cui_list<class c_cui_component>::get_size(void) const;
// public: c_cui_list<class c_cui_render_buffer_page>::c_cui_list<class c_cui_render_buffer_page>(void);
// public: c_static_sized_dynamic_array<struct s_cui_render_resource, 32>::c_static_sized_dynamic_array<struct s_cui_render_resource, 32>(void);
// public: c_synchronized_pointer<class c_cui_render_buffer>::c_synchronized_pointer<class c_cui_render_buffer>(class c_cui_render_buffer *);
// public: float c_cui_animated_value<float>::get_additive(void) const;
// public: c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>);
// public: bool c_enum_no_init<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>::operator==(enum e_cui_screen_category) const;
// public: class c_cui_screen_manager * c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::construct(void);
// public: void c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::destruct(void);
// public: class c_cui_screen_manager * c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::get(void);
// public: bool c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::alive(void) const;
// public: void * c_cui_screen_manager::`scalar deleting destructor'(unsigned int);
// public: c_cui_screen_manager::~c_cui_screen_manager(void);
// public: c_cui_screen_manager::s_window::~s_window(void);
// public: c_synchronized_pointer<class c_cui_render_buffer>::~c_synchronized_pointer<class c_cui_render_buffer>(void);
// public: c_cui_static_vector<class c_cui_component *, 16>::c_cui_static_vector<class c_cui_component *, 16>(void);
// public: void c_cui_list<class c_cui_component>::append(class c_cui_component *);
// public: void c_cui_list<class c_cui_component>::remove(class c_cui_component *);
// public: void c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::clear(void);
// public: class c_cui_render_buffer * c_synchronized_pointer<class c_cui_render_buffer>::set(class c_cui_render_buffer *) volatile;
// public: class c_cui_render_buffer * c_synchronized_pointer<class c_cui_render_buffer>::set_if_equal(class c_cui_render_buffer *, class c_cui_render_buffer *) volatile;
// public: unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: class c_cui_screen_manager * c_opaque_data<class c_cui_screen_manager, 4496, 4>::get(void);
// public: bool c_cui_list<class c_cui_component>::contains(class c_cui_component const *) const;
// public: bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const;
// public: long c_cui_component_context::get_resolution_name(void) const;
// public: long c_cui_component_context::get_theme_name(void) const;
// public: c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>(void);
// public: c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::~c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>(void);
// void g_cui_screen_manager::`dynamic atexit destructor'(void);

//public: c_cui_screen_manager::s_window::s_window(void)
//{
//    mangled_ppc("??0s_window@c_cui_screen_manager@@QAA@XZ");
//};

//public: c_cui_render_buffer::c_cui_render_buffer(void)
//{
//    mangled_ppc("??0c_cui_render_buffer@@QAA@XZ");
//};

//public: c_cui_screen_collection::c_cui_screen_collection(void)
//{
//    mangled_ppc("??0c_cui_screen_collection@@QAA@XZ");
//};

//public: c_cui_screen_manager::c_cui_screen_manager(void)
//{
//    mangled_ppc("??0c_cui_screen_manager@@QAA@XZ");
//};

//public: bool c_cui_screen_manager::add(enum e_window_index, class c_cui_screen_widget *)
//{
//    mangled_ppc("?add@c_cui_screen_manager@@QAA_NW4e_window_index@@PAVc_cui_screen_widget@@@Z");
//};

//private: struct c_cui_screen_manager::s_window * c_cui_screen_manager::get_window(long)
//{
//    mangled_ppc("?get_window@c_cui_screen_manager@@AAAPAUs_window@1@J@Z");
//};

//public: long c_cui_screen_widget::get_tag_index(void) const
//{
//    mangled_ppc("?get_tag_index@c_cui_screen_widget@@QBAJXZ");
//};

//public: void c_cui_screen_widget::set_window_index(enum e_window_index)
//{
//    mangled_ppc("?set_window_index@c_cui_screen_widget@@QAAXW4e_window_index@@@Z");
//};

//public: bool c_cui_screen_manager::insert(enum e_window_index, long, class c_cui_screen_widget *)
//{
//    mangled_ppc("?insert@c_cui_screen_manager@@QAA_NW4e_window_index@@JPAVc_cui_screen_widget@@@Z");
//};

//public: bool c_cui_screen_manager::remove(enum e_window_index, class c_cui_screen_widget *)
//{
//    mangled_ppc("?remove@c_cui_screen_manager@@QAA_NW4e_window_index@@PAVc_cui_screen_widget@@@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::load_and_add_by_name(enum e_window_index, long, long)
//{
//    mangled_ppc("?load_and_add_by_name@c_cui_screen_manager@@QAAPAVc_cui_screen_widget@@W4e_window_index@@JJ@Z");
//};

//public: bool c_cui_screen_collection::full(void) const
//{
//    mangled_ppc("?full@c_cui_screen_collection@@QBA_NXZ");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::load_and_add_by_tag_index(enum e_window_index, long, long)
//{
//    mangled_ppc("?load_and_add_by_tag_index@c_cui_screen_manager@@QAAPAVc_cui_screen_widget@@W4e_window_index@@JJ@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::load_and_insert_by_name(enum e_window_index, long, long, long)
//{
//    mangled_ppc("?load_and_insert_by_name@c_cui_screen_manager@@QAAPAVc_cui_screen_widget@@W4e_window_index@@JJJ@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::get_bottommost(enum e_window_index) const
//{
//    mangled_ppc("?get_bottommost@c_cui_screen_manager@@QBAPAVc_cui_screen_widget@@W4e_window_index@@@Z");
//};

//public: unsigned int c_cui_screen_collection::get_size(void) const
//{
//    mangled_ppc("?get_size@c_cui_screen_collection@@QBAIXZ");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::get_topmost(enum e_window_index) const
//{
//    mangled_ppc("?get_topmost@c_cui_screen_manager@@QBAPAVc_cui_screen_widget@@W4e_window_index@@@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::get_active(enum e_window_index) const
//{
//    mangled_ppc("?get_active@c_cui_screen_manager@@QBAPAVc_cui_screen_widget@@W4e_window_index@@@Z");
//};

//public: bool c_cui_widget::is_enabled(void) const
//{
//    mangled_ppc("?is_enabled@c_cui_widget@@QBA_NXZ");
//};

//protected: bool c_cui_widget::test_flag(long) const
//{
//    mangled_ppc("?test_flag@c_cui_widget@@IBA_NJ@Z");
//};

//public: bool c_cui_screen_widget::is_closing(void) const
//{
//    mangled_ppc("?is_closing@c_cui_screen_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_manager::destroy(enum e_window_index, class c_cui_screen_widget *)
//{
//    mangled_ppc("?destroy@c_cui_screen_manager@@QAA_NW4e_window_index@@PAVc_cui_screen_widget@@@Z");
//};

//public: void c_cui_screen_manager::destroy_all(enum e_window_index)
//{
//    mangled_ppc("?destroy_all@c_cui_screen_manager@@QAAXW4e_window_index@@@Z");
//};

//public: void c_cui_screen_manager::destroy_all(void)
//{
//    mangled_ppc("?destroy_all@c_cui_screen_manager@@QAAXXZ");
//};

//public: void c_cui_screen_manager::reload_all(void)
//{
//    mangled_ppc("?reload_all@c_cui_screen_manager@@QAAXXZ");
//};

//public: void c_cui_screen_manager::reload(enum e_window_index)
//{
//    mangled_ppc("?reload@c_cui_screen_manager@@QAAXW4e_window_index@@@Z");
//};

//public: long c_cui_screen_widget::get_resolution_name(void) const
//{
//    mangled_ppc("?get_resolution_name@c_cui_screen_widget@@QBAJXZ");
//};

//public: long c_cui_screen_widget::get_theme_name(void) const
//{
//    mangled_ppc("?get_theme_name@c_cui_screen_widget@@QBAJXZ");
//};

//public: class c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver> c_cui_screen_widget::get_input_controller_mask(void) const
//{
//    mangled_ppc("?get_input_controller_mask@c_cui_screen_widget@@QBA?AV?$c_flags@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_cui_screen_widget::set_input_controller_mask(class c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_input_controller_mask@c_cui_screen_widget@@QAAXV?$c_flags@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_gui_location c_cui_screen_widget::get_gui_location(void) const
//{
//    mangled_ppc("?get_gui_location@c_cui_screen_widget@@QBA?AW4e_gui_location@@XZ");
//};

//public: void c_cui_screen_widget::set_gui_location(enum e_gui_location)
//{
//    mangled_ppc("?set_gui_location@c_cui_screen_widget@@QAAXW4e_gui_location@@@Z");
//};

//public: void c_cui_screen_manager::update(enum e_window_index)
//{
//    mangled_ppc("?update@c_cui_screen_manager@@QAAXW4e_window_index@@@Z");
//};

//public: bool c_cui_screen_widget::get_always_on_top(void) const
//{
//    mangled_ppc("?get_always_on_top@c_cui_screen_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_widget::is_dead(void) const
//{
//    mangled_ppc("?is_dead@c_cui_screen_widget@@QBA_NXZ");
//};

//public: bool c_cui_screen_widget::is_visible_in_screenshots(void) const
//{
//    mangled_ppc("?is_visible_in_screenshots@c_cui_screen_widget@@QBA_NXZ");
//};

//public: float c_cui_screen_widget::get_pushback_depth(void) const
//{
//    mangled_ppc("?get_pushback_depth@c_cui_screen_widget@@QBAMXZ");
//};

//public: void c_cui_screen_manager::update_all(void)
//{
//    mangled_ppc("?update_all@c_cui_screen_manager@@QAAXXZ");
//};

//public: bool c_cui_screen_manager::category_active(enum e_cui_screen_category) const
//{
//    mangled_ppc("?category_active@c_cui_screen_manager@@QBA_NW4e_cui_screen_category@@@Z");
//};

//public: bool c_cui_screen_manager::category_closing(enum e_cui_screen_category) const
//{
//    mangled_ppc("?category_closing@c_cui_screen_manager@@QBA_NW4e_cui_screen_category@@@Z");
//};

//public: void c_cui_screen_manager::close_in_category(enum e_window_index, enum e_cui_screen_category)
//{
//    mangled_ppc("?close_in_category@c_cui_screen_manager@@QAAXW4e_window_index@@W4e_cui_screen_category@@@Z");
//};

//public: void c_cui_screen_manager::close_all_in_category(enum e_cui_screen_category)
//{
//    mangled_ppc("?close_all_in_category@c_cui_screen_manager@@QAAXW4e_cui_screen_category@@@Z");
//};

//public: class c_cui_screen_widget const * c_cui_screen_manager::get_active_in_category(enum e_window_index, enum e_cui_screen_category) const
//{
//    mangled_ppc("?get_active_in_category@c_cui_screen_manager@@QBAPBVc_cui_screen_widget@@W4e_window_index@@W4e_cui_screen_category@@@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_manager::get_active_in_category(enum e_window_index, enum e_cui_screen_category)
//{
//    mangled_ppc("?get_active_in_category@c_cui_screen_manager@@QAAPAVc_cui_screen_widget@@W4e_window_index@@W4e_cui_screen_category@@@Z");
//};

//public: void c_cui_screen_manager::render(enum e_surface, enum e_window_index, bool)
//{
//    mangled_ppc("?render@c_cui_screen_manager@@QAAXW4e_surface@@W4e_window_index@@_N@Z");
//};

//void cui_screen_manager_initialize_for_new_map(void)
//{
//    mangled_ppc("?cui_screen_manager_initialize_for_new_map@@YAXXZ");
//};

//void cui_screen_manager_dispose_from_old_map(void)
//{
//    mangled_ppc("?cui_screen_manager_dispose_from_old_map@@YAXXZ");
//};

//class c_cui_screen_manager * cui_screen_manager_get(void)
//{
//    mangled_ppc("?cui_screen_manager_get@@YAPAVc_cui_screen_manager@@XZ");
//};

//bool cui_screen_manager_available(void)
//{
//    mangled_ppc("?cui_screen_manager_available@@YA_NXZ");
//};

//long cui_get_window_resolution_name(enum e_window_index)
//{
//    mangled_ppc("?cui_get_window_resolution_name@@YAJW4e_window_index@@@Z");
//};

//void cui_screen_initialize(class c_cui_screen_manager *, class c_cui_screen_widget *, struct s_cui_screen_parameters const *)
//{
//    mangled_ppc("?cui_screen_initialize@@YAXPAVc_cui_screen_manager@@PAVc_cui_screen_widget@@PBUs_cui_screen_parameters@@@Z");
//};

//public: void c_cui_screen_widget::set_close_on_sign_out(bool)
//{
//    mangled_ppc("?set_close_on_sign_out@c_cui_screen_widget@@QAAX_N@Z");
//};

//protected: void c_cui_widget::set_flag(long, bool)
//{
//    mangled_ppc("?set_flag@c_cui_widget@@IAAXJ_N@Z");
//};

//public: unsigned int c_cui_static_vector<class c_cui_component *, 16>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@PAVc_cui_component@@$0BA@@@QBAIXZ");
//};

//public: unsigned int c_cui_static_vector<class c_cui_component *, 16>::capacity(void) const
//{
//    mangled_ppc("?capacity@?$c_cui_static_vector@PAVc_cui_component@@$0BA@@@QBAIXZ");
//};

//public: c_cui_list<class c_cui_component>::c_cui_list<class c_cui_component>(void)
//{
//    mangled_ppc("??0?$c_cui_list@Vc_cui_component@@@@QAA@XZ");
//};

//public: class c_cui_component * c_cui_list<class c_cui_component>::get_head(void) const
//{
//    mangled_ppc("?get_head@?$c_cui_list@Vc_cui_component@@@@QBAPAVc_cui_component@@XZ");
//};

//public: long c_cui_list<class c_cui_component>::get_size(void) const
//{
//    mangled_ppc("?get_size@?$c_cui_list@Vc_cui_component@@@@QBAJXZ");
//};

//public: c_cui_list<class c_cui_render_buffer_page>::c_cui_list<class c_cui_render_buffer_page>(void)
//{
//    mangled_ppc("??0?$c_cui_list@Vc_cui_render_buffer_page@@@@QAA@XZ");
//};

//public: c_static_sized_dynamic_array<struct s_cui_render_resource, 32>::c_static_sized_dynamic_array<struct s_cui_render_resource, 32>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Us_cui_render_resource@@$0CA@@@QAA@XZ");
//};

//public: c_synchronized_pointer<class c_cui_render_buffer>::c_synchronized_pointer<class c_cui_render_buffer>(class c_cui_render_buffer *)
//{
//    mangled_ppc("??0?$c_synchronized_pointer@Vc_cui_render_buffer@@@@QAA@PAVc_cui_render_buffer@@@Z");
//};

//public: float c_cui_animated_value<float>::get_additive(void) const
//{
//    mangled_ppc("?get_additive@?$c_cui_animated_value@M@@QBAMXZ");
//};

//public: c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_flags@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QAA@V?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_cui_screen_category, long, -1, 18, struct s_default_enum_string_resolver>::operator==(enum e_cui_screen_category) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_cui_screen_category@@J$0?0$0BC@Us_default_enum_string_resolver@@@@QBA_NW4e_cui_screen_category@@@Z");
//};

//public: class c_cui_screen_manager * c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QAAPAVc_cui_screen_manager@@XZ");
//};

//public: void c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QAAXXZ");
//};

//public: class c_cui_screen_manager * c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QAAPAVc_cui_screen_manager@@XZ");
//};

//public: bool c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QBA_NXZ");
//};

//public: void * c_cui_screen_manager::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_screen_manager@@QAAPAXI@Z");
//};

//public: c_cui_screen_manager::~c_cui_screen_manager(void)
//{
//    mangled_ppc("??1c_cui_screen_manager@@QAA@XZ");
//};

//public: c_cui_screen_manager::s_window::~s_window(void)
//{
//    mangled_ppc("??1s_window@c_cui_screen_manager@@QAA@XZ");
//};

//public: c_synchronized_pointer<class c_cui_render_buffer>::~c_synchronized_pointer<class c_cui_render_buffer>(void)
//{
//    mangled_ppc("??1?$c_synchronized_pointer@Vc_cui_render_buffer@@@@QAA@XZ");
//};

//public: c_cui_static_vector<class c_cui_component *, 16>::c_cui_static_vector<class c_cui_component *, 16>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@PAVc_cui_component@@$0BA@@@QAA@XZ");
//};

//public: void c_cui_list<class c_cui_component>::append(class c_cui_component *)
//{
//    mangled_ppc("?append@?$c_cui_list@Vc_cui_component@@@@QAAXPAVc_cui_component@@@Z");
//};

//public: void c_cui_list<class c_cui_component>::remove(class c_cui_component *)
//{
//    mangled_ppc("?remove@?$c_cui_list@Vc_cui_component@@@@QAAXPAVc_cui_component@@@Z");
//};

//public: void c_flags_no_init<enum e_cui_screen_category, unsigned long, 18, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_cui_screen_category@@K$0BC@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: class c_cui_render_buffer * c_synchronized_pointer<class c_cui_render_buffer>::set(class c_cui_render_buffer *) volatile
//{
//    mangled_ppc("?set@?$c_synchronized_pointer@Vc_cui_render_buffer@@@@QCAPAVc_cui_render_buffer@@PAV2@@Z");
//};

//public: class c_cui_render_buffer * c_synchronized_pointer<class c_cui_render_buffer>::set_if_equal(class c_cui_render_buffer *, class c_cui_render_buffer *) volatile
//{
//    mangled_ppc("?set_if_equal@?$c_synchronized_pointer@Vc_cui_render_buffer@@@@QCAPAVc_cui_render_buffer@@PAV2@0@Z");
//};

//public: unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: class c_cui_screen_manager * c_opaque_data<class c_cui_screen_manager, 4496, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QAAPAVc_cui_screen_manager@@XZ");
//};

//public: bool c_cui_list<class c_cui_component>::contains(class c_cui_component const *) const
//{
//    mangled_ppc("?contains@?$c_cui_list@Vc_cui_component@@@@QBA_NPBVc_cui_component@@@Z");
//};

//public: bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: long c_cui_component_context::get_resolution_name(void) const
//{
//    mangled_ppc("?get_resolution_name@c_cui_component_context@@QBAJXZ");
//};

//public: long c_cui_component_context::get_theme_name(void) const
//{
//    mangled_ppc("?get_theme_name@c_cui_component_context@@QBAJXZ");
//};

//public: c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>::~c_typed_opaque_data<class c_cui_screen_manager, 4496, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_cui_screen_manager@@$0BBJA@$03@@QAA@XZ");
//};

//void g_cui_screen_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cui_screen_manager@@YAXXZ");
//};

