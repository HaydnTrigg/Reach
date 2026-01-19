/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_online_file_details_pipe::k_max_tag_count; // "?k_max_tag_count@c_online_file_details_pipe@@0IB"
// protected: static long const c_online_file_details_pipe_reader_component::k_max_spacer_string_length; // "?k_max_spacer_string_length@c_online_file_details_pipe_reader_component@@1JB"
// protected: static long const c_online_file_details_pipe_reader_component::k_max_more_tags_string_length; // "?k_max_more_tags_string_length@c_online_file_details_pipe_reader_component@@1JB"
// protected: static long const c_online_file_details_pipe_reader_component::k_max_short_tag_string_count; // "?k_max_short_tag_string_count@c_online_file_details_pipe_reader_component@@1JB"
// protected: static long const c_online_file_details_pipe_reader_component::k_max_short_tag_string_length; // "?k_max_short_tag_string_length@c_online_file_details_pipe_reader_component@@1JB"
// protected: static long const c_online_file_details_pipe_reader_component::k_max_long_tag_string_count; // "?k_max_long_tag_string_count@c_online_file_details_pipe_reader_component@@1JB"
// protected: static long const c_online_file_details_pipe_reader_component::k_max_long_tag_string_length; // "?k_max_long_tag_string_length@c_online_file_details_pipe_reader_component@@1JB"
// public: static long const s_static_string<76>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0EM@@@2JB"
// public: static long const s_static_string<76>::k_element_count; // "?k_element_count@?$s_static_string@$0EM@@@2JB"
// public: static long const s_static_string<176>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0LA@@@2JB"
// public: static long const s_static_string<176>::k_element_count; // "?k_element_count@?$s_static_string@$0LA@@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_online_file_details_pipe_reader_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_online_file_details_pipe_reader_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_online_file_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_online_file_details_pipe_writer_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_online_file_details_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_online_file_details_pipe_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_online_file_details_pipe_reader_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_online_file_details_pipe_reader_component@@@@0Vc_cui_object_property_table@@A"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_online_file_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_online_file_details_pipe_writer_component@@@@0Vc_cui_object_property_table@@A"

// public: c_online_file_details_pipe::c_online_file_details_pipe(struct s_content_item_metadata const &);
// merged_84B15270;
// public: virtual c_online_file_details_pipe::~c_online_file_details_pipe(void);
// public: c_online_file_details_pipe_component::c_online_file_details_pipe_component(void);
// merged_84B15348;
// public: virtual c_online_file_details_pipe_component::~c_online_file_details_pipe_component(void);
// private: virtual class c_cui_screen_pipe * c_online_file_details_pipe_component::do_create_pipe(void);
// public: c_online_file_details_pipe::c_online_file_details_pipe(void);
// public: c_online_file_details_pipe_writer_component::c_online_file_details_pipe_writer_component(void);
// merged_84B154D8;
// public: virtual c_online_file_details_pipe_writer_component::~c_online_file_details_pipe_writer_component(void);
// public: class c_cui_component * c_online_file_details_pipe_writer_component::get_file_manager_component(void) const;
// public: void c_online_file_details_pipe_writer_component::set_file_manager_component(class c_cui_component *);
// protected: virtual void c_online_file_details_pipe_writer_component::do_update(class c_cui_update_context *);
// public: void c_online_file_details_pipe::set_xuid(unsigned __int64);
// public: void c_online_file_details_pipe::set_share_id(unsigned __int64);
// public: void c_online_file_details_pipe::set_file_id(unsigned __int64);
// public: void c_online_file_details_pipe::clear_tags(void);
// public: void c_online_file_details_pipe::add_tag(struct s_online_file_tag const *);
// public: c_online_file_tag::c_online_file_tag(struct s_online_file_tag const &);
// public: class c_online_file_details_pipe * c_online_file_details_pipe_writer_component::get_pipe(void) const;
// public: class c_online_file_details_pipe * c_online_file_details_pipe_component::get_pipe(void) const;
// public: c_online_file_details_pipe_reader_component::c_online_file_details_pipe_reader_component(void);
// merged_84B15AC0;
// public: virtual c_online_file_details_pipe_reader_component::~c_online_file_details_pipe_reader_component(void);
// protected: virtual void c_online_file_details_pipe_reader_component::do_update(class c_cui_update_context *);
// public: long c_online_file_details_pipe::get_tag_count(void) const;
// public: struct s_online_file_tag const * c_online_file_details_pipe::get_tag(long) const;
// public: class c_online_file_details_pipe * c_online_file_details_pipe_reader_component::get_pipe(void) const;
// protected: class c_static_string<256> c_online_file_details_pipe_reader_component::build_append_string(struct s_online_file_tag const *, class c_cui_update_context *, long, long);
// public: unsigned int c_cui_static_vector<class c_online_file_tag, 7>::size(void) const;
// public: class c_online_file_tag const & c_cui_static_vector<class c_online_file_tag, 7>::operator[](unsigned int) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_online_file_details_pipe_writer_component>::get_instance(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_online_file_details_pipe_reader_component>::get_instance(void);
// public: class c_online_file_tag const * c_cui_static_vector<class c_online_file_tag, 7>::data(void) const;
// public: c_cui_static_vector<class c_online_file_tag, 7>::c_cui_static_vector<class c_online_file_tag, 7>(void);
// public: c_cui_static_vector<class c_online_file_tag, 7>::~c_cui_static_vector<class c_online_file_tag, 7>(void);
// public: void c_cui_static_vector<class c_online_file_tag, 7>::push_back(class c_online_file_tag const &);
// public: void c_cui_static_vector<class c_online_file_tag, 7>::clear(void);
// class c_online_file_details_pipe_component * cui_dynamic_cast<class c_online_file_details_pipe_component *>(class c_cui_component *);
// public: void s_static_string<76>::clear(void);
// public: char const * s_static_string<76>::append(char const *);
// public: c_static_string<76>::c_static_string<76>(void);
// public: void s_static_string<176>::clear(void);
// public: char const * s_static_string<176>::append(char const *);
// public: c_static_string<176>::c_static_string<176>(void);
// bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_writer_component, class c_cui_component *, class c_cui_component *& (c_online_file_details_pipe_writer_component::get_file_manager_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_online_file_details_pipe_writer_component, class c_cui_component *, void & (c_online_file_details_pipe_writer_component::set_file_manager_component::*)(class c_cui_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_writer_component, long, long & (c_online_file_details_pipe_writer_component::get_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_online_file_details_pipe_writer_component::get_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_online_file_details_pipe_writer_component, long, void & (c_online_file_details_pipe_writer_component::set_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_online_file_details_pipe_writer_component::set_item_index(long);
// bool cui_try_get_scalar_property_by_out_pointer<class c_online_file_details_pipe_writer_component, bool, bool & (c_online_file_details_pipe_writer_component::is_my_file_share::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_online_file_details_pipe_writer_component::is_my_file_share(bool *) const;
// public: bool c_online_file_details_pipe::is_my_file_share(void) const;
// bool cui_try_set_scalar_property_by_value<class c_online_file_details_pipe_writer_component, bool, bool & (c_online_file_details_pipe_writer_component::set_is_my_file_share::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: bool c_online_file_details_pipe_writer_component::set_is_my_file_share(bool);
// public: void c_online_file_details_pipe::set_is_my_file_share(bool);
// bool cui_try_get_scalar_property_by_out_pointer<class c_online_file_details_pipe_reader_component, long, bool & (c_online_file_details_pipe_reader_component::get_tag_count::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_online_file_details_pipe_reader_component::get_tag_count(long *) const;
// long cui_object_component_get_property_element_count<class c_online_file_details_pipe_reader_component, long & (c_online_file_details_pipe_reader_component::get_tag_count::*)(void)>(void const *);
// public: long c_online_file_details_pipe_reader_component::get_tag_count(void) const;
// bool cui_get_array_property_element_by_return_value<class c_online_file_details_pipe_reader_component, char const *, long & (c_online_file_details_pipe_reader_component::get_tag_count::*)(void), char const *& (c_online_file_details_pipe_reader_component::get_tag_string::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_online_file_details_pipe_reader_component::get_tag_string(long) const;
// bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_reader_component, char const *, char const *& (c_online_file_details_pipe_reader_component::get_tag_short_string::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_online_file_details_pipe_reader_component::get_tag_short_string(void) const;
// public: char const * s_static_string<76>::get_string(void) const;
// bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_reader_component, char const *, char const *& (c_online_file_details_pipe_reader_component::get_tag_long_string::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_online_file_details_pipe_reader_component::get_tag_long_string(void) const;
// public: char const * s_static_string<176>::get_string(void) const;
// bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_reader_component, bool, bool & (c_online_file_details_pipe_reader_component::is_my_file_share::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_online_file_details_pipe_reader_component::is_my_file_share(void) const;
// public: c_static_wchar_string<48>::c_static_wchar_string<48>(void);
// public: wchar_t const * c_static_wchar_string<48>::get_string(void) const;
// public: wchar_t (& c_static_wchar_string<48>::get_buffer(void))[48];
// public: bool c_cui_static_vector<class c_online_file_tag, 7>::empty(void) const;
// public: bool c_cui_static_vector<class c_online_file_tag, 7>::full(void) const;
// private: class c_online_file_tag * c_cui_static_vector<class c_online_file_tag, 7>::get(unsigned int);
// public: class c_online_file_tag * c_cui_static_vector<class c_online_file_tag, 7>::data(void);
// public: void c_cui_static_vector<class c_online_file_tag, 7>::pop_back(void);
// public: static class c_online_file_details_pipe_component * s_cui_dynamic_cast<class c_online_file_details_pipe_component *>::cast(class c_cui_component *);
// class c_cui_component * cui_component_create<class c_online_file_details_pipe_component>(void);
// class c_cui_component * cui_component_clone<class c_online_file_details_pipe_component>(class c_cui_component const *);
// public: c_online_file_details_pipe_component::c_online_file_details_pipe_component(class c_online_file_details_pipe_component const &);
// class c_cui_component * cui_component_create<class c_online_file_details_pipe_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_online_file_details_pipe_writer_component>(class c_cui_component const *);
// public: c_online_file_details_pipe_writer_component::c_online_file_details_pipe_writer_component(class c_online_file_details_pipe_writer_component const &);
// class c_cui_component * cui_component_create<class c_online_file_details_pipe_reader_component>(void);
// class c_cui_component * cui_component_clone<class c_online_file_details_pipe_reader_component>(class c_cui_component const *);
// public: c_online_file_details_pipe_reader_component::c_online_file_details_pipe_reader_component(class c_online_file_details_pipe_reader_component const &);

//public: c_online_file_details_pipe::c_online_file_details_pipe(struct s_content_item_metadata const &)
//{
//    mangled_ppc("??0c_online_file_details_pipe@@QAA@ABUs_content_item_metadata@@@Z");
//};

//merged_84B15270
//{
//    mangled_ppc("merged_84B15270");
//};

//public: virtual c_online_file_details_pipe::~c_online_file_details_pipe(void)
//{
//    mangled_ppc("??1c_online_file_details_pipe@@UAA@XZ");
//};

//public: c_online_file_details_pipe_component::c_online_file_details_pipe_component(void)
//{
//    mangled_ppc("??0c_online_file_details_pipe_component@@QAA@XZ");
//};

//merged_84B15348
//{
//    mangled_ppc("merged_84B15348");
//};

//public: virtual c_online_file_details_pipe_component::~c_online_file_details_pipe_component(void)
//{
//    mangled_ppc("??1c_online_file_details_pipe_component@@UAA@XZ");
//};

//private: virtual class c_cui_screen_pipe * c_online_file_details_pipe_component::do_create_pipe(void)
//{
//    mangled_ppc("?do_create_pipe@c_online_file_details_pipe_component@@EAAPAVc_cui_screen_pipe@@XZ");
//};

//public: c_online_file_details_pipe::c_online_file_details_pipe(void)
//{
//    mangled_ppc("??0c_online_file_details_pipe@@QAA@XZ");
//};

//public: c_online_file_details_pipe_writer_component::c_online_file_details_pipe_writer_component(void)
//{
//    mangled_ppc("??0c_online_file_details_pipe_writer_component@@QAA@XZ");
//};

//merged_84B154D8
//{
//    mangled_ppc("merged_84B154D8");
//};

//public: virtual c_online_file_details_pipe_writer_component::~c_online_file_details_pipe_writer_component(void)
//{
//    mangled_ppc("??1c_online_file_details_pipe_writer_component@@UAA@XZ");
//};

//public: class c_cui_component * c_online_file_details_pipe_writer_component::get_file_manager_component(void) const
//{
//    mangled_ppc("?get_file_manager_component@c_online_file_details_pipe_writer_component@@QBAPAVc_cui_component@@XZ");
//};

//public: void c_online_file_details_pipe_writer_component::set_file_manager_component(class c_cui_component *)
//{
//    mangled_ppc("?set_file_manager_component@c_online_file_details_pipe_writer_component@@QAAXPAVc_cui_component@@@Z");
//};

//protected: virtual void c_online_file_details_pipe_writer_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_online_file_details_pipe_writer_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_online_file_details_pipe::set_xuid(unsigned __int64)
//{
//    mangled_ppc("?set_xuid@c_online_file_details_pipe@@QAAX_K@Z");
//};

//public: void c_online_file_details_pipe::set_share_id(unsigned __int64)
//{
//    mangled_ppc("?set_share_id@c_online_file_details_pipe@@QAAX_K@Z");
//};

//public: void c_online_file_details_pipe::set_file_id(unsigned __int64)
//{
//    mangled_ppc("?set_file_id@c_online_file_details_pipe@@QAAX_K@Z");
//};

//public: void c_online_file_details_pipe::clear_tags(void)
//{
//    mangled_ppc("?clear_tags@c_online_file_details_pipe@@QAAXXZ");
//};

//public: void c_online_file_details_pipe::add_tag(struct s_online_file_tag const *)
//{
//    mangled_ppc("?add_tag@c_online_file_details_pipe@@QAAXPBUs_online_file_tag@@@Z");
//};

//public: c_online_file_tag::c_online_file_tag(struct s_online_file_tag const &)
//{
//    mangled_ppc("??0c_online_file_tag@@QAA@ABUs_online_file_tag@@@Z");
//};

//public: class c_online_file_details_pipe * c_online_file_details_pipe_writer_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_online_file_details_pipe_writer_component@@QBAPAVc_online_file_details_pipe@@XZ");
//};

//public: class c_online_file_details_pipe * c_online_file_details_pipe_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_online_file_details_pipe_component@@QBAPAVc_online_file_details_pipe@@XZ");
//};

//public: c_online_file_details_pipe_reader_component::c_online_file_details_pipe_reader_component(void)
//{
//    mangled_ppc("??0c_online_file_details_pipe_reader_component@@QAA@XZ");
//};

//merged_84B15AC0
//{
//    mangled_ppc("merged_84B15AC0");
//};

//public: virtual c_online_file_details_pipe_reader_component::~c_online_file_details_pipe_reader_component(void)
//{
//    mangled_ppc("??1c_online_file_details_pipe_reader_component@@UAA@XZ");
//};

//protected: virtual void c_online_file_details_pipe_reader_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_online_file_details_pipe_reader_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: long c_online_file_details_pipe::get_tag_count(void) const
//{
//    mangled_ppc("?get_tag_count@c_online_file_details_pipe@@QBAJXZ");
//};

//public: struct s_online_file_tag const * c_online_file_details_pipe::get_tag(long) const
//{
//    mangled_ppc("?get_tag@c_online_file_details_pipe@@QBAPBUs_online_file_tag@@J@Z");
//};

//public: class c_online_file_details_pipe * c_online_file_details_pipe_reader_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_online_file_details_pipe_reader_component@@QBAPAVc_online_file_details_pipe@@XZ");
//};

//protected: class c_static_string<256> c_online_file_details_pipe_reader_component::build_append_string(struct s_online_file_tag const *, class c_cui_update_context *, long, long)
//{
//    mangled_ppc("?build_append_string@c_online_file_details_pipe_reader_component@@IAA?AV?$c_static_string@$0BAA@@@PBUs_online_file_tag@@PAVc_cui_update_context@@JJ@Z");
//};

//public: unsigned int c_cui_static_vector<class c_online_file_tag, 7>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QBAIXZ");
//};

//public: class c_online_file_tag const & c_cui_static_vector<class c_online_file_tag, 7>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$c_cui_static_vector@Vc_online_file_tag@@$06@@QBAABVc_online_file_tag@@I@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_online_file_details_pipe_writer_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_online_file_details_pipe_writer_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_online_file_details_pipe_reader_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_online_file_details_pipe_reader_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: class c_online_file_tag const * c_cui_static_vector<class c_online_file_tag, 7>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QBAPBVc_online_file_tag@@XZ");
//};

//public: c_cui_static_vector<class c_online_file_tag, 7>::c_cui_static_vector<class c_online_file_tag, 7>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Vc_online_file_tag@@$06@@QAA@XZ");
//};

//public: c_cui_static_vector<class c_online_file_tag, 7>::~c_cui_static_vector<class c_online_file_tag, 7>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Vc_online_file_tag@@$06@@QAA@XZ");
//};

//public: void c_cui_static_vector<class c_online_file_tag, 7>::push_back(class c_online_file_tag const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QAAXABVc_online_file_tag@@@Z");
//};

//public: void c_cui_static_vector<class c_online_file_tag, 7>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QAAXXZ");
//};

//class c_online_file_details_pipe_component * cui_dynamic_cast<class c_online_file_details_pipe_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_online_file_details_pipe_component@@@@YAPAVc_online_file_details_pipe_component@@PAVc_cui_component@@@Z");
//};

//public: void s_static_string<76>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0EM@@@QAAXXZ");
//};

//public: char const * s_static_string<76>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0EM@@@QAAPBDPBD@Z");
//};

//public: c_static_string<76>::c_static_string<76>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0EM@@@QAA@XZ");
//};

//public: void s_static_string<176>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0LA@@@QAAXXZ");
//};

//public: char const * s_static_string<176>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0LA@@@QAAPBDPBD@Z");
//};

//public: c_static_string<176>::c_static_string<176>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0LA@@@QAA@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_writer_component, class c_cui_component *, class c_cui_component *& (c_online_file_details_pipe_writer_component::get_file_manager_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_online_file_details_pipe_writer_component@@PAVc_cui_component@@$1?get_file_manager_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_online_file_details_pipe_writer_component, class c_cui_component *, void & (c_online_file_details_pipe_writer_component::set_file_manager_component::*)(class c_cui_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_online_file_details_pipe_writer_component@@PAVc_cui_component@@$1?set_file_manager_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_writer_component, long, long & (c_online_file_details_pipe_writer_component::get_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_online_file_details_pipe_writer_component@@J$1?get_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_online_file_details_pipe_writer_component::get_item_index(void) const
//{
//    mangled_ppc("?get_item_index@c_online_file_details_pipe_writer_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_online_file_details_pipe_writer_component, long, void & (c_online_file_details_pipe_writer_component::set_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_online_file_details_pipe_writer_component@@J$1?set_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_online_file_details_pipe_writer_component::set_item_index(long)
//{
//    mangled_ppc("?set_item_index@c_online_file_details_pipe_writer_component@@QAAXJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_online_file_details_pipe_writer_component, bool, bool & (c_online_file_details_pipe_writer_component::is_my_file_share::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_online_file_details_pipe_writer_component@@_N$1?is_my_file_share@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_online_file_details_pipe_writer_component::is_my_file_share(bool *) const
//{
//    mangled_ppc("?is_my_file_share@c_online_file_details_pipe_writer_component@@QBA_NPA_N@Z");
//};

//public: bool c_online_file_details_pipe::is_my_file_share(void) const
//{
//    mangled_ppc("?is_my_file_share@c_online_file_details_pipe@@QBA_NXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_online_file_details_pipe_writer_component, bool, bool & (c_online_file_details_pipe_writer_component::set_is_my_file_share::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_online_file_details_pipe_writer_component@@_N$1?set_is_my_file_share@1@QAA_N_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_online_file_details_pipe_writer_component::set_is_my_file_share(bool)
//{
//    mangled_ppc("?set_is_my_file_share@c_online_file_details_pipe_writer_component@@QAA_N_N@Z");
//};

//public: void c_online_file_details_pipe::set_is_my_file_share(bool)
//{
//    mangled_ppc("?set_is_my_file_share@c_online_file_details_pipe@@QAAX_N@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_online_file_details_pipe_reader_component, long, bool & (c_online_file_details_pipe_reader_component::get_tag_count::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_online_file_details_pipe_reader_component@@J$1?get_tag_count@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_online_file_details_pipe_reader_component::get_tag_count(long *) const
//{
//    mangled_ppc("?get_tag_count@c_online_file_details_pipe_reader_component@@QBA_NPAJ@Z");
//};

//long cui_object_component_get_property_element_count<class c_online_file_details_pipe_reader_component, long & (c_online_file_details_pipe_reader_component::get_tag_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_online_file_details_pipe_reader_component@@$1?get_tag_count@1@QBAJXZ@@YAJPBX@Z");
//};

//public: long c_online_file_details_pipe_reader_component::get_tag_count(void) const
//{
//    mangled_ppc("?get_tag_count@c_online_file_details_pipe_reader_component@@QBAJXZ");
//};

//bool cui_get_array_property_element_by_return_value<class c_online_file_details_pipe_reader_component, char const *, long & (c_online_file_details_pipe_reader_component::get_tag_count::*)(void), char const *& (c_online_file_details_pipe_reader_component::get_tag_string::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_online_file_details_pipe_reader_component@@PBD$1?get_tag_count@1@QBAJXZ$1?get_tag_string@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_online_file_details_pipe_reader_component::get_tag_string(long) const
//{
//    mangled_ppc("?get_tag_string@c_online_file_details_pipe_reader_component@@QBAPBDJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_reader_component, char const *, char const *& (c_online_file_details_pipe_reader_component::get_tag_short_string::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_online_file_details_pipe_reader_component@@PBD$1?get_tag_short_string@1@QBAPBDXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_online_file_details_pipe_reader_component::get_tag_short_string(void) const
//{
//    mangled_ppc("?get_tag_short_string@c_online_file_details_pipe_reader_component@@QBAPBDXZ");
//};

//public: char const * s_static_string<76>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0EM@@@QBAPBDXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_reader_component, char const *, char const *& (c_online_file_details_pipe_reader_component::get_tag_long_string::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_online_file_details_pipe_reader_component@@PBD$1?get_tag_long_string@1@QBAPBDXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_online_file_details_pipe_reader_component::get_tag_long_string(void) const
//{
//    mangled_ppc("?get_tag_long_string@c_online_file_details_pipe_reader_component@@QBAPBDXZ");
//};

//public: char const * s_static_string<176>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0LA@@@QBAPBDXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_online_file_details_pipe_reader_component, bool, bool & (c_online_file_details_pipe_reader_component::is_my_file_share::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_online_file_details_pipe_reader_component@@_N$1?is_my_file_share@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_online_file_details_pipe_reader_component::is_my_file_share(void) const
//{
//    mangled_ppc("?is_my_file_share@c_online_file_details_pipe_reader_component@@QBA_NXZ");
//};

//public: c_static_wchar_string<48>::c_static_wchar_string<48>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0DA@@@QAA@XZ");
//};

//public: wchar_t const * c_static_wchar_string<48>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0DA@@@QBAPB_WXZ");
//};

//public: wchar_t (& c_static_wchar_string<48>::get_buffer(void))[48]
//{
//    mangled_ppc("?get_buffer@?$c_static_wchar_string@$0DA@@@QAAAAY0DA@_WXZ");
//};

//public: bool c_cui_static_vector<class c_online_file_tag, 7>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QBA_NXZ");
//};

//public: bool c_cui_static_vector<class c_online_file_tag, 7>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QBA_NXZ");
//};

//private: class c_online_file_tag * c_cui_static_vector<class c_online_file_tag, 7>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Vc_online_file_tag@@$06@@AAAPAVc_online_file_tag@@I@Z");
//};

//public: class c_online_file_tag * c_cui_static_vector<class c_online_file_tag, 7>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QAAPAVc_online_file_tag@@XZ");
//};

//public: void c_cui_static_vector<class c_online_file_tag, 7>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Vc_online_file_tag@@$06@@QAAXXZ");
//};

//public: static class c_online_file_details_pipe_component * s_cui_dynamic_cast<class c_online_file_details_pipe_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_online_file_details_pipe_component@@@@SAPAVc_online_file_details_pipe_component@@PAVc_cui_component@@@Z");
//};

//class c_cui_component * cui_component_create<class c_online_file_details_pipe_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_online_file_details_pipe_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_online_file_details_pipe_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_online_file_details_pipe_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_online_file_details_pipe_component::c_online_file_details_pipe_component(class c_online_file_details_pipe_component const &)
//{
//    mangled_ppc("??0c_online_file_details_pipe_component@@QAA@ABV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_online_file_details_pipe_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_online_file_details_pipe_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_online_file_details_pipe_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_online_file_details_pipe_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_online_file_details_pipe_writer_component::c_online_file_details_pipe_writer_component(class c_online_file_details_pipe_writer_component const &)
//{
//    mangled_ppc("??0c_online_file_details_pipe_writer_component@@QAA@ABV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_online_file_details_pipe_reader_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_online_file_details_pipe_reader_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_online_file_details_pipe_reader_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_online_file_details_pipe_reader_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_online_file_details_pipe_reader_component::c_online_file_details_pipe_reader_component(class c_online_file_details_pipe_reader_component const &)
//{
//    mangled_ppc("??0c_online_file_details_pipe_reader_component@@QAA@ABV0@@Z");
//};

