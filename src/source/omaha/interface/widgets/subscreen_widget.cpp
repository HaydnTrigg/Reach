/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_subscreen_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_subscreen_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_subscreen_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_subscreen_widget@@@@0Vc_cui_object_property_table@@A"

// protected: c_subscreen_widget::c_subscreen_widget(struct s_cui_component_description const *, class c_cui_object_property_table *);
// protected: void c_subscreen_widget::get_subscreen_parameters(class c_cui_update_context *, long, struct s_cui_screen_parameters *) const;
// protected: class c_cui_screen_widget * c_subscreen_widget::load_subscreen(class c_cui_update_context *, long, struct s_cui_screen_parameters const *) const;
// public: void c_cui_screen_widget::set_subscreen(bool);
// public: void c_subscreen_widget::close_subscreen(long);
// public: void c_subscreen_widget::close_subscreen(void);
// protected: virtual void c_subscreen_widget::do_set_subscreen(class c_cui_screen_widget *);
// protected: virtual bool c_subscreen_widget::do_load_subscreen(class c_cui_update_context *, struct s_tag_reference const *, long, class c_screen_pipe_component *);
// public: bool c_screen_pipe_component::is_open(void) const;
// protected: virtual bool c_subscreen_widget::do_is_focusable(void) const;
// protected: virtual bool c_subscreen_widget::do_dispatch_input_event(class c_cui_update_context *, class c_cui_input_event *);
// protected: virtual void c_subscreen_widget::do_render(class c_cui_render_context *) const;
// public: class c_cui_screen_widget * c_cui_render_context::get_screen(void) const;
// public: void c_cui_render_context::set_screen(class c_cui_screen_widget *);
// public: class c_cui_screen_widget * c_subscreen_widget::get_subscreen(void) const;
// public: class c_cui_screen_widget * c_subscreen_widget::get_active_subscreen(void) const;
// protected: void c_subscreen_widget::update_subscreens(class c_cui_update_context *);
// protected: void c_subscreen_widget::update_focus(class c_cui_update_context *);
// bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, class c_screen_pipe_component *, class c_screen_pipe_component *& (c_subscreen_widget::get_screen_pipe::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_subscreen_widget, class c_screen_pipe_component *, void & (c_subscreen_widget::set_screen_pipe::*)(class c_screen_pipe_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_subscreen_widget::set_screen_pipe(class c_screen_pipe_component *);
// bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, long, long & (c_subscreen_widget::get_max_subscreen_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_subscreen_widget::get_max_subscreen_count(void) const;
// bool cui_set_scalar_property_by_value<class c_subscreen_widget, long, void & (c_subscreen_widget::set_max_subscreen_count::*)(long)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, class c_cui_widget *, class c_cui_widget *& (c_subscreen_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_subscreen_widget::get_return_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_subscreen_widget, class c_cui_widget *, void & (c_subscreen_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_subscreen_widget::set_return_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, class c_cui_screen_widget *, class c_cui_screen_widget *& (c_subscreen_widget::get_subscreen::*)(void)>(void const *, long, struct s_cui_property_value *);
// void cui_property_value_set(struct s_cui_property_value *, class c_cui_screen_widget *);
// ??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@Vc_cui_string_id@@$1?get_transition_out_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_subscreen_widget, class c_cui_string_id, void & (c_subscreen_widget::set_transition_out_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_subscreen_widget::set_transition_out_animation_name(class c_cui_string_id);
// void ui_track_delete<class c_cui_screen_widget>(class c_cui_screen_widget *);

//protected: c_subscreen_widget::c_subscreen_widget(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_subscreen_widget@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//protected: void c_subscreen_widget::get_subscreen_parameters(class c_cui_update_context *, long, struct s_cui_screen_parameters *) const
//{
//    mangled_ppc("?get_subscreen_parameters@c_subscreen_widget@@IBAXPAVc_cui_update_context@@JPAUs_cui_screen_parameters@@@Z");
//};

//protected: class c_cui_screen_widget * c_subscreen_widget::load_subscreen(class c_cui_update_context *, long, struct s_cui_screen_parameters const *) const
//{
//    mangled_ppc("?load_subscreen@c_subscreen_widget@@IBAPAVc_cui_screen_widget@@PAVc_cui_update_context@@JPBUs_cui_screen_parameters@@@Z");
//};

//public: void c_cui_screen_widget::set_subscreen(bool)
//{
//    mangled_ppc("?set_subscreen@c_cui_screen_widget@@QAAX_N@Z");
//};

//public: void c_subscreen_widget::close_subscreen(long)
//{
//    mangled_ppc("?close_subscreen@c_subscreen_widget@@QAAXJ@Z");
//};

//public: void c_subscreen_widget::close_subscreen(void)
//{
//    mangled_ppc("?close_subscreen@c_subscreen_widget@@QAAXXZ");
//};

//protected: virtual void c_subscreen_widget::do_set_subscreen(class c_cui_screen_widget *)
//{
//    mangled_ppc("?do_set_subscreen@c_subscreen_widget@@MAAXPAVc_cui_screen_widget@@@Z");
//};

//protected: virtual bool c_subscreen_widget::do_load_subscreen(class c_cui_update_context *, struct s_tag_reference const *, long, class c_screen_pipe_component *)
//{
//    mangled_ppc("?do_load_subscreen@c_subscreen_widget@@MAA_NPAVc_cui_update_context@@PBUs_tag_reference@@JPAVc_screen_pipe_component@@@Z");
//};

//public: bool c_screen_pipe_component::is_open(void) const
//{
//    mangled_ppc("?is_open@c_screen_pipe_component@@QBA_NXZ");
//};

//protected: virtual bool c_subscreen_widget::do_is_focusable(void) const
//{
//    mangled_ppc("?do_is_focusable@c_subscreen_widget@@MBA_NXZ");
//};

//protected: virtual bool c_subscreen_widget::do_dispatch_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_dispatch_input_event@c_subscreen_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//protected: virtual void c_subscreen_widget::do_render(class c_cui_render_context *) const
//{
//    mangled_ppc("?do_render@c_subscreen_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//public: class c_cui_screen_widget * c_cui_render_context::get_screen(void) const
//{
//    mangled_ppc("?get_screen@c_cui_render_context@@QBAPAVc_cui_screen_widget@@XZ");
//};

//public: void c_cui_render_context::set_screen(class c_cui_screen_widget *)
//{
//    mangled_ppc("?set_screen@c_cui_render_context@@QAAXPAVc_cui_screen_widget@@@Z");
//};

//public: class c_cui_screen_widget * c_subscreen_widget::get_subscreen(void) const
//{
//    mangled_ppc("?get_subscreen@c_subscreen_widget@@QBAPAVc_cui_screen_widget@@XZ");
//};

//public: class c_cui_screen_widget * c_subscreen_widget::get_active_subscreen(void) const
//{
//    mangled_ppc("?get_active_subscreen@c_subscreen_widget@@QBAPAVc_cui_screen_widget@@XZ");
//};

//protected: void c_subscreen_widget::update_subscreens(class c_cui_update_context *)
//{
//    mangled_ppc("?update_subscreens@c_subscreen_widget@@IAAXPAVc_cui_update_context@@@Z");
//};

//protected: void c_subscreen_widget::update_focus(class c_cui_update_context *)
//{
//    mangled_ppc("?update_focus@c_subscreen_widget@@IAAXPAVc_cui_update_context@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, class c_screen_pipe_component *, class c_screen_pipe_component *& (c_subscreen_widget::get_screen_pipe::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@PAVc_screen_pipe_component@@$1?get_screen_pipe@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_subscreen_widget, class c_screen_pipe_component *, void & (c_subscreen_widget::set_screen_pipe::*)(class c_screen_pipe_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_subscreen_widget@@PAVc_screen_pipe_component@@$1?set_screen_pipe@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_subscreen_widget::set_screen_pipe(class c_screen_pipe_component *)
//{
//    mangled_ppc("?set_screen_pipe@c_subscreen_widget@@QAAXPAVc_screen_pipe_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, long, long & (c_subscreen_widget::get_max_subscreen_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@J$1?get_max_subscreen_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_subscreen_widget::get_max_subscreen_count(void) const
//{
//    mangled_ppc("?get_max_subscreen_count@c_subscreen_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_subscreen_widget, long, void & (c_subscreen_widget::set_max_subscreen_count::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_subscreen_widget@@J$1?set_max_subscreen_count@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, class c_cui_widget *, class c_cui_widget *& (c_subscreen_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@PAVc_cui_widget@@$1?get_return_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_subscreen_widget::get_return_focus_to(void) const
//{
//    mangled_ppc("?get_return_focus_to@c_subscreen_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_subscreen_widget, class c_cui_widget *, void & (c_subscreen_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_subscreen_widget@@PAVc_cui_widget@@$1?set_return_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_subscreen_widget::set_return_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_return_focus_to@c_subscreen_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_subscreen_widget, class c_cui_screen_widget *, class c_cui_screen_widget *& (c_subscreen_widget::get_subscreen::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@PAVc_cui_screen_widget@@$1?get_subscreen@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_cui_screen_widget *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_cui_screen_widget@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@Vc_cui_string_id@@$1?get_transition_out_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_subscreen_widget@@Vc_cui_string_id@@$1?get_transition_out_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_subscreen_widget, class c_cui_string_id, void & (c_subscreen_widget::set_transition_out_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_subscreen_widget@@Vc_cui_string_id@@$1?set_transition_out_animation_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_subscreen_widget::set_transition_out_animation_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_transition_out_animation_name@c_subscreen_widget@@QAAXVc_cui_string_id@@@Z");
//};

//void ui_track_delete<class c_cui_screen_widget>(class c_cui_screen_widget *)
//{
//    mangled_ppc("??$ui_track_delete@Vc_cui_screen_widget@@@@YAXPAVc_cui_screen_widget@@@Z");
//};

