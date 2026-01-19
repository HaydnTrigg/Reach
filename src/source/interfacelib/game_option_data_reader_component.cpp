/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_game_option_component_base::k_max_name_length; // "?k_max_name_length@c_game_option_component_base@@0IB"
// private: static unsigned int const c_game_option_component_base::k_max_description_length; // "?k_max_description_length@c_game_option_component_base@@0IB"
// public: static int const c_static_wchar_string<80>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$0FA@@@2HB"
// public: static long const s_static_array<class c_static_wchar_string<80>, 8>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_wchar_string@$0FA@@@$07@@2JB"
// public: static long const s_static_array<class c_static_wchar_string<256>, 8>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_wchar_string@$0BAA@@@$07@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_game_option_data_reader_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_game_option_data_reader_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_game_option_data_reader_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_game_option_data_reader_component@@@@0Vc_cui_object_property_table@@A"

// public: c_game_option_data_reader_component::c_game_option_data_reader_component(void);
// protected: c_game_option_component_base::c_game_option_component_base(struct s_cui_component_description const *, class c_cui_object_property_table *);
// merged_84AB9BC8;
// public: virtual c_game_option_component_base::~c_game_option_component_base(void);
// merged_84AB9C38;
// public: virtual c_game_option_data_reader_component::~c_game_option_data_reader_component(void);
// public: c_static_sized_dynamic_array<class c_static_wchar_string<80>, 8>::c_static_sized_dynamic_array<class c_static_wchar_string<80>, 8>(void);
// public: c_static_sized_dynamic_array<class c_static_wchar_string<256>, 8>::c_static_sized_dynamic_array<class c_static_wchar_string<256>, 8>(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_game_option_data_reader_component>::get_instance(void);
// public: s_static_array<class c_static_wchar_string<80>, 8>::s_static_array<class c_static_wchar_string<80>, 8>(void);
// public: s_static_array<class c_static_wchar_string<256>, 8>::s_static_array<class c_static_wchar_string<256>, 8>(void);
// public: c_static_wchar_string<80>::c_static_wchar_string<80>(void);
// class c_cui_component * cui_component_create<class c_game_option_data_reader_component>(void);
// class c_cui_component * cui_component_clone<class c_game_option_data_reader_component>(class c_cui_component const *);
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, class c_screen_pipe_component *, class c_screen_pipe_component *& (c_game_option_component_base::get_pipe_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_screen_pipe_component * c_game_option_component_base::get_pipe_component(void) const;
// bool cui_set_scalar_property_by_value<class c_game_option_component_base, class c_screen_pipe_component *, void & (c_game_option_component_base::set_pipe_component::*)(class c_screen_pipe_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_game_option_component_base::set_pipe_component(class c_screen_pipe_component *);
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_option_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_game_option_component_base::get_option_id(void) const;
// bool cui_set_scalar_property_by_value<class c_game_option_component_base, long, void & (c_game_option_component_base::set_option_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_game_option_component_base::set_option_id(long);
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, bool, bool & (c_game_option_component_base::is_locked_option::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_game_option_component_base::is_locked_option(void) const;
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, bool, bool & (c_game_option_component_base::is_numeric_option::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_game_option_component_base::is_numeric_option(void) const;
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, wchar_t const *, wchar_t const *& (c_game_option_component_base::get_option_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_game_option_component_base::get_option_name(void) const;
// public: wchar_t const * c_static_wchar_string<80>::operator wchar_t const *(void) const;
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, wchar_t const *, wchar_t const *& (c_game_option_component_base::get_option_description::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_game_option_component_base::get_option_description(void) const;
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_option_current_value_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// long cui_object_component_get_property_element_count<class c_game_option_component_base, long & (c_game_option_component_base::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_game_option_component_base, wchar_t const *, long & (c_game_option_component_base::get_item_count::*)(void), wchar_t const *& (c_game_option_component_base::get_item_display_text::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_game_option_component_base, wchar_t const *, long & (c_game_option_component_base::get_item_count::*)(void), wchar_t const *& (c_game_option_component_base::get_value_description::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_item_count::*)(void), long & (c_game_option_component_base::get_item_display_value::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: c_game_option_data_reader_component::c_game_option_data_reader_component(class c_game_option_data_reader_component const &);
// public: c_game_option_component_base::c_game_option_component_base(class c_game_option_component_base const &);

//public: c_game_option_data_reader_component::c_game_option_data_reader_component(void)
//{
//    mangled_ppc("??0c_game_option_data_reader_component@@QAA@XZ");
//};

//protected: c_game_option_component_base::c_game_option_component_base(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_game_option_component_base@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//merged_84AB9BC8
//{
//    mangled_ppc("merged_84AB9BC8");
//};

//public: virtual c_game_option_component_base::~c_game_option_component_base(void)
//{
//    mangled_ppc("??1c_game_option_component_base@@UAA@XZ");
//};

//merged_84AB9C38
//{
//    mangled_ppc("merged_84AB9C38");
//};

//public: virtual c_game_option_data_reader_component::~c_game_option_data_reader_component(void)
//{
//    mangled_ppc("??1c_game_option_data_reader_component@@UAA@XZ");
//};

//public: c_static_sized_dynamic_array<class c_static_wchar_string<80>, 8>::c_static_sized_dynamic_array<class c_static_wchar_string<80>, 8>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@V?$c_static_wchar_string@$0FA@@@$07@@QAA@XZ");
//};

//public: c_static_sized_dynamic_array<class c_static_wchar_string<256>, 8>::c_static_sized_dynamic_array<class c_static_wchar_string<256>, 8>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@V?$c_static_wchar_string@$0BAA@@@$07@@QAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_game_option_data_reader_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_game_option_data_reader_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: s_static_array<class c_static_wchar_string<80>, 8>::s_static_array<class c_static_wchar_string<80>, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_wchar_string@$0FA@@@$07@@QAA@XZ");
//};

//public: s_static_array<class c_static_wchar_string<256>, 8>::s_static_array<class c_static_wchar_string<256>, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_wchar_string@$0BAA@@@$07@@QAA@XZ");
//};

//public: c_static_wchar_string<80>::c_static_wchar_string<80>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0FA@@@QAA@XZ");
//};

//class c_cui_component * cui_component_create<class c_game_option_data_reader_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_game_option_data_reader_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_game_option_data_reader_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_game_option_data_reader_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, class c_screen_pipe_component *, class c_screen_pipe_component *& (c_game_option_component_base::get_pipe_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@PAVc_screen_pipe_component@@$1?get_pipe_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_screen_pipe_component * c_game_option_component_base::get_pipe_component(void) const
//{
//    mangled_ppc("?get_pipe_component@c_game_option_component_base@@QBAPAVc_screen_pipe_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_game_option_component_base, class c_screen_pipe_component *, void & (c_game_option_component_base::set_pipe_component::*)(class c_screen_pipe_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_game_option_component_base@@PAVc_screen_pipe_component@@$1?set_pipe_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_game_option_component_base::set_pipe_component(class c_screen_pipe_component *)
//{
//    mangled_ppc("?set_pipe_component@c_game_option_component_base@@QAAXPAVc_screen_pipe_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_option_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@J$1?get_option_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_game_option_component_base::get_option_id(void) const
//{
//    mangled_ppc("?get_option_id@c_game_option_component_base@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_game_option_component_base, long, void & (c_game_option_component_base::set_option_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_game_option_component_base@@J$1?set_option_id@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_game_option_component_base::set_option_id(long)
//{
//    mangled_ppc("?set_option_id@c_game_option_component_base@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, bool, bool & (c_game_option_component_base::is_locked_option::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@_N$1?is_locked_option@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_game_option_component_base::is_locked_option(void) const
//{
//    mangled_ppc("?is_locked_option@c_game_option_component_base@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, bool, bool & (c_game_option_component_base::is_numeric_option::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@_N$1?is_numeric_option@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_game_option_component_base::is_numeric_option(void) const
//{
//    mangled_ppc("?is_numeric_option@c_game_option_component_base@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, wchar_t const *, wchar_t const *& (c_game_option_component_base::get_option_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@PB_W$1?get_option_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_game_option_component_base::get_option_name(void) const
//{
//    mangled_ppc("?get_option_name@c_game_option_component_base@@QBAPB_WXZ");
//};

//public: wchar_t const * c_static_wchar_string<80>::operator wchar_t const *(void) const
//{
//    mangled_ppc("??B?$c_static_wchar_string@$0FA@@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, wchar_t const *, wchar_t const *& (c_game_option_component_base::get_option_description::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@PB_W$1?get_option_description@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_game_option_component_base::get_option_description(void) const
//{
//    mangled_ppc("?get_option_description@c_game_option_component_base@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_option_current_value_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@J$1?get_option_current_value_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_game_option_component_base@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//long cui_object_component_get_property_element_count<class c_game_option_component_base, long & (c_game_option_component_base::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_game_option_component_base@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_game_option_component_base, wchar_t const *, long & (c_game_option_component_base::get_item_count::*)(void), wchar_t const *& (c_game_option_component_base::get_item_display_text::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_game_option_component_base@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_display_text@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_game_option_component_base, wchar_t const *, long & (c_game_option_component_base::get_item_count::*)(void), wchar_t const *& (c_game_option_component_base::get_value_description::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_game_option_component_base@@PB_W$1?get_item_count@1@QBAJXZ$1?get_value_description@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_game_option_component_base, long, long & (c_game_option_component_base::get_item_count::*)(void), long & (c_game_option_component_base::get_item_display_value::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_game_option_component_base@@J$1?get_item_count@1@QBAJXZ$1?get_item_display_value@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: c_game_option_data_reader_component::c_game_option_data_reader_component(class c_game_option_data_reader_component const &)
//{
//    mangled_ppc("??0c_game_option_data_reader_component@@QAA@ABV0@@Z");
//};

//public: c_game_option_component_base::c_game_option_component_base(class c_game_option_component_base const &)
//{
//    mangled_ppc("??0c_game_option_component_base@@QAA@ABV0@@Z");
//};

