/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_upload_user_image_component::k_max_image_data_size; // "?k_max_image_data_size@c_upload_user_image_component@@0IB"
// public: static long const c_upload_user_image_component::c_write_file_async::k_async_priority; // "?k_async_priority@c_write_file_async@c_upload_user_image_component@@2JB"
// public: static long const c_upload_user_image_component::c_write_file_async::k_async_category; // "?k_async_category@c_write_file_async@c_upload_user_image_component@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_upload_user_image_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_upload_user_image_component@@@@0Us_cui_component_description@@B"
// public: static long const s_user_image_chunk::k_chunk_type; // "?k_chunk_type@s_user_image_chunk@@2JB"
// public: static long const s_user_image_chunk::k_version_major; // "?k_version_major@s_user_image_chunk@@2JB"
// public: static long const s_user_image_chunk::k_version_minor; // "?k_version_minor@s_user_image_chunk@@2JB"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_upload_user_image_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_upload_user_image_component@@@@0Vc_cui_object_property_table@@A"

// public: static bool c_upload_user_image_component::c_write_file_async::submit(class c_upload_user_image_component::c_write_file_async *, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: enum e_async_pending_bool c_upload_user_image_component::c_write_file_async::update(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*);
// private: void c_upload_user_image_component::c_write_file_async::switch_state(enum c_upload_user_image_component::c_write_file_async::e_state);
// private: enum e_async_pending_bool c_upload_user_image_component::c_write_file_async::create_or_open(struct s_file_reference *);
// private: void c_upload_user_image_component::c_write_file_async::write_start(class c_custom_bitmap_ptr const *);
// public: s_user_image_chunk::s_user_image_chunk(unsigned short, unsigned short, unsigned short);
// private: void c_upload_user_image_component::c_write_file_async::write_block(class c_custom_bitmap_ptr const *);
// public: long s_jpeg_argb_image::get_size_in_bytes(void);
// unsigned long abgr_to_argb(unsigned long);
// unsigned long argb_to_rgba(unsigned long);
// private: void c_upload_user_image_component::c_write_file_async::write_end(void);
// private: void c_upload_user_image_component::c_write_file_async::close_and_delete(struct s_file_reference *);
// private: void c_upload_user_image_component::c_write_file_async::flush_and_close(struct s_file_reference *);
// public: c_upload_user_image_component::c_upload_user_image_component(void);
// public: c_upload_user_image_component::c_write_file_async::c_write_file_async(void);
// merged_84BA4808;
// public: c_upload_user_image_component::c_upload_user_image_component(class c_upload_user_image_component const &);
// public: virtual c_upload_user_image_component::~c_upload_user_image_component(void);
// protected: virtual void c_upload_user_image_component::do_update(class c_cui_update_context *);
// public: void c_custom_bitmap_ptr::reset(void);
// public: void c_user_image_widget::release_image(void);
// public: void c_online_file_transfer::set_delete_upload_source_file(bool);
// protected: virtual void c_upload_user_image_component::do_handle_event(class c_cui_update_context *, class c_event_component *);
// public: class c_custom_bitmap_ptr const & c_user_image_widget::get_image(void) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_upload_user_image_component>::get_instance(void);
// public: void c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum s_online_file_transfer_types::e_flag, bool);
// class c_cui_component * cui_component_create<class c_upload_user_image_component>(void);
// class c_cui_component * cui_component_clone<class c_upload_user_image_component>(class c_cui_component const *);
// bool cui_get_scalar_property_by_return_value<class c_upload_user_image_component, class c_user_image_widget *, class c_user_image_widget *& (c_upload_user_image_component::get_user_image_widget::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_user_image_widget * c_upload_user_image_component::get_user_image_widget(void) const;
// void cui_property_value_set(struct s_cui_property_value *, class c_user_image_widget *);
// bool cui_set_scalar_property_by_value<class c_upload_user_image_component, class c_user_image_widget *, void & (c_upload_user_image_component::set_user_image_widget::*)(class c_user_image_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_upload_user_image_component::set_user_image_widget(class c_user_image_widget *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_user_image_widget **);
// class c_user_image_widget * cui_dynamic_cast<class c_user_image_widget *>(class c_cui_component *);
// bool cui_try_get_scalar_property_by_out_pointer<class c_upload_user_image_component, class c_input_event_component *, bool & (c_upload_user_image_component::get_result_event_component::*)(class c_input_event_component **)>(void const *, long, struct s_cui_property_value *);
// public: bool c_upload_user_image_component::get_result_event_component(class c_input_event_component **) const;
// class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> async_function_make<enum e_async_pending_bool, class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>(enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async *, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >(class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static class c_user_image_widget * s_cui_dynamic_cast<class c_user_image_widget *>::cast(class c_cui_component *);
// public: c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>::c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>(enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async *, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >(class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);

//public: static bool c_upload_user_image_component::c_write_file_async::submit(class c_upload_user_image_component::c_write_file_async *, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_write_file_async@c_upload_user_image_component@@SA_NPAV12@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: enum e_async_pending_bool c_upload_user_image_component::c_write_file_async::update(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*)
//{
//    mangled_ppc("?update@c_write_file_async@c_upload_user_image_component@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_upload_user_image_component::c_write_file_async::switch_state(enum c_upload_user_image_component::c_write_file_async::e_state)
//{
//    mangled_ppc("?switch_state@c_write_file_async@c_upload_user_image_component@@AAAXW4e_state@12@@Z");
//};

//private: enum e_async_pending_bool c_upload_user_image_component::c_write_file_async::create_or_open(struct s_file_reference *)
//{
//    mangled_ppc("?create_or_open@c_write_file_async@c_upload_user_image_component@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_upload_user_image_component::c_write_file_async::write_start(class c_custom_bitmap_ptr const *)
//{
//    mangled_ppc("?write_start@c_write_file_async@c_upload_user_image_component@@AAAXPBVc_custom_bitmap_ptr@@@Z");
//};

//public: s_user_image_chunk::s_user_image_chunk(unsigned short, unsigned short, unsigned short)
//{
//    mangled_ppc("??0s_user_image_chunk@@QAA@GGG@Z");
//};

//private: void c_upload_user_image_component::c_write_file_async::write_block(class c_custom_bitmap_ptr const *)
//{
//    mangled_ppc("?write_block@c_write_file_async@c_upload_user_image_component@@AAAXPBVc_custom_bitmap_ptr@@@Z");
//};

//public: long s_jpeg_argb_image::get_size_in_bytes(void)
//{
//    mangled_ppc("?get_size_in_bytes@s_jpeg_argb_image@@QAAJXZ");
//};

//unsigned long abgr_to_argb(unsigned long)
//{
//    mangled_ppc("?abgr_to_argb@@YAKK@Z");
//};

//unsigned long argb_to_rgba(unsigned long)
//{
//    mangled_ppc("?argb_to_rgba@@YAKK@Z");
//};

//private: void c_upload_user_image_component::c_write_file_async::write_end(void)
//{
//    mangled_ppc("?write_end@c_write_file_async@c_upload_user_image_component@@AAAXXZ");
//};

//private: void c_upload_user_image_component::c_write_file_async::close_and_delete(struct s_file_reference *)
//{
//    mangled_ppc("?close_and_delete@c_write_file_async@c_upload_user_image_component@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_upload_user_image_component::c_write_file_async::flush_and_close(struct s_file_reference *)
//{
//    mangled_ppc("?flush_and_close@c_write_file_async@c_upload_user_image_component@@AAAXPAUs_file_reference@@@Z");
//};

//public: c_upload_user_image_component::c_upload_user_image_component(void)
//{
//    mangled_ppc("??0c_upload_user_image_component@@QAA@XZ");
//};

//public: c_upload_user_image_component::c_write_file_async::c_write_file_async(void)
//{
//    mangled_ppc("??0c_write_file_async@c_upload_user_image_component@@QAA@XZ");
//};

//merged_84BA4808
//{
//    mangled_ppc("merged_84BA4808");
//};

//public: c_upload_user_image_component::c_upload_user_image_component(class c_upload_user_image_component const &)
//{
//    mangled_ppc("??0c_upload_user_image_component@@QAA@ABV0@@Z");
//};

//public: virtual c_upload_user_image_component::~c_upload_user_image_component(void)
//{
//    mangled_ppc("??1c_upload_user_image_component@@UAA@XZ");
//};

//protected: virtual void c_upload_user_image_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_upload_user_image_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_custom_bitmap_ptr::reset(void)
//{
//    mangled_ppc("?reset@c_custom_bitmap_ptr@@QAAXXZ");
//};

//public: void c_user_image_widget::release_image(void)
//{
//    mangled_ppc("?release_image@c_user_image_widget@@QAAXXZ");
//};

//public: void c_online_file_transfer::set_delete_upload_source_file(bool)
//{
//    mangled_ppc("?set_delete_upload_source_file@c_online_file_transfer@@QAAX_N@Z");
//};

//protected: virtual void c_upload_user_image_component::do_handle_event(class c_cui_update_context *, class c_event_component *)
//{
//    mangled_ppc("?do_handle_event@c_upload_user_image_component@@MAAXPAVc_cui_update_context@@PAVc_event_component@@@Z");
//};

//public: class c_custom_bitmap_ptr const & c_user_image_widget::get_image(void) const
//{
//    mangled_ppc("?get_image@c_user_image_widget@@QBAABVc_custom_bitmap_ptr@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_upload_user_image_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_upload_user_image_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: void c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum s_online_file_transfer_types::e_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_flag@s_online_file_transfer_types@@_N@Z");
//};

//class c_cui_component * cui_component_create<class c_upload_user_image_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_upload_user_image_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_upload_user_image_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_upload_user_image_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_upload_user_image_component, class c_user_image_widget *, class c_user_image_widget *& (c_upload_user_image_component::get_user_image_widget::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_upload_user_image_component@@PAVc_user_image_widget@@$1?get_user_image_widget@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_user_image_widget * c_upload_user_image_component::get_user_image_widget(void) const
//{
//    mangled_ppc("?get_user_image_widget@c_upload_user_image_component@@QBAPAVc_user_image_widget@@XZ");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_user_image_widget *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_user_image_widget@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_upload_user_image_component, class c_user_image_widget *, void & (c_upload_user_image_component::set_user_image_widget::*)(class c_user_image_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_upload_user_image_component@@PAVc_user_image_widget@@$1?set_user_image_widget@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_upload_user_image_component::set_user_image_widget(class c_user_image_widget *)
//{
//    mangled_ppc("?set_user_image_widget@c_upload_user_image_component@@QAAXPAVc_user_image_widget@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_user_image_widget **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_user_image_widget@@@Z");
//};

//class c_user_image_widget * cui_dynamic_cast<class c_user_image_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_user_image_widget@@@@YAPAVc_user_image_widget@@PAVc_cui_component@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_upload_user_image_component, class c_input_event_component *, bool & (c_upload_user_image_component::get_result_event_component::*)(class c_input_event_component **)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_upload_user_image_component@@PAVc_input_event_component@@$1?get_result_event_component@1@QBA_NPAPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_upload_user_image_component::get_result_event_component(class c_input_event_component **) const
//{
//    mangled_ppc("?get_result_event_component@c_upload_user_image_component@@QBA_NPAPAVc_input_event_component@@@Z");
//};

//class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> async_function_make<enum e_async_pending_bool, class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>(enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async *, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@W4e_async_pending_bool@@Vc_write_file_async@c_upload_user_image_component@@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@PAU4@PBV5@PAV6@@@YA?AV?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@P8c_write_file_async@c_upload_user_image_component@@AA?AW4e_async_pending_bool@@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZPAV12@012@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >(class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@YA_NABV?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static class c_user_image_widget * s_cui_dynamic_cast<class c_user_image_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_user_image_widget@@@@SAPAVc_user_image_widget@@PAVc_cui_component@@@Z");
//};

//public: c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>::c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>(enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async *, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@QAA@P8c_write_file_async@c_upload_user_image_component@@AA?AW4e_async_pending_bool@@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZPAV12@012@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >(class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@s_async_task_functions@@SA_NABV?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function3<enum e_async_pending_bool, enum e_async_pending_bool (c_upload_user_image_component::c_write_file_async::*)(struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*), class c_upload_user_image_component::c_write_file_async, struct s_file_reference *, class c_custom_bitmap_ptr const *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function3@W4e_async_pending_bool@@P8c_write_file_async@c_upload_user_image_component@@AA?AW41@PAUs_file_reference@@PBVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@ZV23@PAU4@PBV5@PAV6@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

