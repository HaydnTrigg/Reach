/* ---------- headers */

#include "omaha\interface\components\content_item_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_content_item_data_component::k_max_content_item_count; // "?k_max_content_item_count@c_content_item_data_component@@0IB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_content_item_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_content_item_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_content_item_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_content_item_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_content_item_data_component::s_enumerate_function::s_enumerate_function(class c_content_item_data_component *);
// public: bool c_content_item_data_component::s_enumerate_function::operator()(struct s_content_enumeration_result const *);
// public: virtual void c_content_item_data_component::c_change_listener::handle_addition(enum e_controller_index, struct s_content_enumeration_result const &);
// public: virtual void c_content_item_data_component::c_change_listener::handle_deletion(enum e_controller_index, struct s_content_enumeration_result const &);
// public: c_content_item_data_component::c_content_item_data_component(void);
// public: c_content_item_data_component::c_change_listener::c_change_listener(void);
// public: void c_content_item_data_component::c_change_listener::set_data(class c_content_item_data_component *);
// merged_84A65A28;
// public: virtual c_content_item_data_component::c_change_listener::~c_change_listener(void);
// merged_84A65A98;
// public: virtual c_content_item_data_component::~c_content_item_data_component(void);
// public: virtual class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_content_item_data_component::get_controller_index(void) const;
// public: virtual bool c_content_item_data_component::is_busy(void) const;
// public: virtual long c_content_item_data_component::get_item_count(void) const;
// public: virtual bool c_content_item_data_component::get_content_enumeration_result(long, struct s_content_enumeration_result *) const;
// protected: virtual void c_content_item_data_component::do_update(class c_cui_update_context *);
// private: static bool c_content_item_data_component::compare_items_sort(void const *, void const *, void const *);
// private: static void c_content_item_data_component::sort_items(struct s_content_enumeration_result *, struct s_content_enumeration_result *);
// private: void c_content_item_data_component::restart_enumeration(void);
// private: bool c_content_item_data_component::on_enumerate_content(struct s_content_enumeration_result const &);
// private: void c_content_item_data_component::handle_content_addition(enum e_controller_index, struct s_content_enumeration_result const &);
// private: void c_content_item_data_component::handle_content_deletion(enum e_controller_index, struct s_content_enumeration_result const &);
// public: unsigned int c_cui_static_vector<struct s_content_enumeration_result, 100>::size(void) const;
// public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::begin(void);
// public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::end(void);
// public: struct s_content_enumeration_result const & c_cui_static_vector<struct s_content_enumeration_result, 100>::operator[](unsigned int) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_content_item_data_component>::get_instance(void);
// public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::data(void);
// public: struct s_content_enumeration_result const * c_cui_static_vector<struct s_content_enumeration_result, 100>::data(void) const;
// public: c_cui_static_vector<struct s_content_enumeration_result, 100>::c_cui_static_vector<struct s_content_enumeration_result, 100>(void);
// public: c_cui_static_vector<struct s_content_enumeration_result, 100>::~c_cui_static_vector<struct s_content_enumeration_result, 100>(void);
// public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::erase(struct s_content_enumeration_result const *);
// public: void c_cui_static_vector<struct s_content_enumeration_result, 100>::clear(void);
// ??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1??_P_91@$BEM@AA@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_content_item_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_content_item_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_content_item_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_controller_state@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_controller_content_state@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_controller_state, char, 0, 3, struct s_default_enum_string_resolver> c_content_item_data_component::get_controller_content_state(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@_N$1??_91@$BFA@AA@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@J$1??_91@$BFE@AA@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_object_component_get_property_element_count@Vc_content_item_data_component@@$1??_91@$BFE@AA@@YAJPBX@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> c_content_item_data_component::get_item_type(long) const;
// public: struct s_content_enumeration_result const * c_content_item_data_component::get_item(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_content_item_data_component::get_item_category(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_content_item_data_component::get_item_game_engine_type(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@J$1??_91@$BFE@AA$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: long c_content_item_data_component::get_item_map_id(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@D$1??_91@$BFE@AA$1?get_item_game_engine_icon_index@1@QBADJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: char c_content_item_data_component::get_item_game_engine_icon_index(long) const;
// char content_item_mini_metadata_get_game_engine_icon_index(struct s_content_item_mini_metadata const *);
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@PBD$1??_91@$BFE@AA$1?get_item_modification_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: char const * c_content_item_data_component::get_item_modification_author_gamertag(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@PB_W$1??_91@$BFE@AA$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: wchar_t const * c_content_item_data_component::get_item_name(long) const;
// public: bool c_ui_content_enumerator::update<struct c_content_item_data_component::s_enumerate_function>(struct c_content_item_data_component::s_enumerate_function);
// bool cui_static_vector_push_back<struct s_content_enumeration_result, 100>(class c_cui_static_vector<struct s_content_enumeration_result, 100> &, struct s_content_enumeration_result const &);
// public: bool c_cui_static_vector<struct s_content_enumeration_result, 100>::empty(void) const;
// public: bool c_cui_static_vector<struct s_content_enumeration_result, 100>::full(void) const;
// private: bool c_cui_static_vector<struct s_content_enumeration_result, 100>::position_valid(struct s_content_enumeration_result const *) const;
// public: struct s_content_enumeration_result const * c_cui_static_vector<struct s_content_enumeration_result, 100>::begin(void) const;
// public: struct s_content_enumeration_result const * c_cui_static_vector<struct s_content_enumeration_result, 100>::end(void) const;
// public: void c_cui_static_vector<struct s_content_enumeration_result, 100>::push_back(struct s_content_enumeration_result const &);
// public: void c_cui_static_vector<struct s_content_enumeration_result, 100>::pop_back(void);
// private: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::collapse(struct s_content_enumeration_result const *, struct s_content_enumeration_result const *);
// private: bool c_ui_content_enumerator::process_results<struct s_content_enumeration_result const *, struct c_content_item_data_component::s_enumerate_function>(struct s_content_enumeration_result const *, struct s_content_enumeration_result const *, struct c_content_item_data_component::s_enumerate_function) const;
// private: bool c_ui_content_enumerator::process_results<struct s_content_enumeration_result *, struct c_content_item_data_component::s_enumerate_function>(struct s_content_enumeration_result *, struct s_content_enumeration_result *, struct c_content_item_data_component::s_enumerate_function) const;
// private: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::get(unsigned int);
// private: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::get_mutable_iterator(struct s_content_enumeration_result const *);
// [thunk]: c_content_item_data_component::`vcall'{80, {flat}};
// ??_P_9c_content_item_data_component@@$BEM@AA;
// [thunk]: c_content_item_data_component::`vcall'{84, {flat}};
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_content_item_data_component_base>::get(void);
// class c_cui_component * cui_component_create<class c_content_item_data_component>(void);

//public: c_content_item_data_component::s_enumerate_function::s_enumerate_function(class c_content_item_data_component *)
//{
//    mangled_ppc("??0s_enumerate_function@c_content_item_data_component@@QAA@PAV1@@Z");
//};

//public: bool c_content_item_data_component::s_enumerate_function::operator()(struct s_content_enumeration_result const *)
//{
//    mangled_ppc("??Rs_enumerate_function@c_content_item_data_component@@QAA_NPBUs_content_enumeration_result@@@Z");
//};

//public: virtual void c_content_item_data_component::c_change_listener::handle_addition(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?handle_addition@c_change_listener@c_content_item_data_component@@UAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: virtual void c_content_item_data_component::c_change_listener::handle_deletion(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?handle_deletion@c_change_listener@c_content_item_data_component@@UAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: c_content_item_data_component::c_content_item_data_component(void)
//{
//    mangled_ppc("??0c_content_item_data_component@@QAA@XZ");
//};

//public: c_content_item_data_component::c_change_listener::c_change_listener(void)
//{
//    mangled_ppc("??0c_change_listener@c_content_item_data_component@@QAA@XZ");
//};

//public: void c_content_item_data_component::c_change_listener::set_data(class c_content_item_data_component *)
//{
//    mangled_ppc("?set_data@c_change_listener@c_content_item_data_component@@QAAXPAV2@@Z");
//};

//merged_84A65A28
//{
//    mangled_ppc("merged_84A65A28");
//};

//public: virtual c_content_item_data_component::c_change_listener::~c_change_listener(void)
//{
//    mangled_ppc("??1c_change_listener@c_content_item_data_component@@UAA@XZ");
//};

//merged_84A65A98
//{
//    mangled_ppc("merged_84A65A98");
//};

//public: virtual c_content_item_data_component::~c_content_item_data_component(void)
//{
//    mangled_ppc("??1c_content_item_data_component@@UAA@XZ");
//};

//public: virtual class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_content_item_data_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_content_item_data_component@@UBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_content_item_data_component::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_content_item_data_component@@UBA_NXZ");
//};

//public: virtual long c_content_item_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_content_item_data_component@@UBAJXZ");
//};

//public: virtual bool c_content_item_data_component::get_content_enumeration_result(long, struct s_content_enumeration_result *) const
//{
//    mangled_ppc("?get_content_enumeration_result@c_content_item_data_component@@UBA_NJPAUs_content_enumeration_result@@@Z");
//};

//protected: virtual void c_content_item_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_content_item_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: static bool c_content_item_data_component::compare_items_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_items_sort@c_content_item_data_component@@CA_NPBX00@Z");
//};

//private: static void c_content_item_data_component::sort_items(struct s_content_enumeration_result *, struct s_content_enumeration_result *)
//{
//    mangled_ppc("?sort_items@c_content_item_data_component@@CAXPAUs_content_enumeration_result@@0@Z");
//};

//private: void c_content_item_data_component::restart_enumeration(void)
//{
//    mangled_ppc("?restart_enumeration@c_content_item_data_component@@AAAXXZ");
//};

//private: bool c_content_item_data_component::on_enumerate_content(struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?on_enumerate_content@c_content_item_data_component@@AAA_NABUs_content_enumeration_result@@@Z");
//};

//private: void c_content_item_data_component::handle_content_addition(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?handle_content_addition@c_content_item_data_component@@AAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//private: void c_content_item_data_component::handle_content_deletion(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?handle_content_deletion@c_content_item_data_component@@AAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: unsigned int c_cui_static_vector<struct s_content_enumeration_result, 100>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBAIXZ");
//};

//public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAPAUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAPAUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result const & c_cui_static_vector<struct s_content_enumeration_result, 100>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBAABUs_content_enumeration_result@@I@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_content_item_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_content_item_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAPAUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result const * c_cui_static_vector<struct s_content_enumeration_result, 100>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBAPBUs_content_enumeration_result@@XZ");
//};

//public: c_cui_static_vector<struct s_content_enumeration_result, 100>::c_cui_static_vector<struct s_content_enumeration_result, 100>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct s_content_enumeration_result, 100>::~c_cui_static_vector<struct s_content_enumeration_result, 100>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAA@XZ");
//};

//public: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::erase(struct s_content_enumeration_result const *)
//{
//    mangled_ppc("?erase@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAPAUs_content_enumeration_result@@PBU2@@Z");
//};

//public: void c_cui_static_vector<struct s_content_enumeration_result, 100>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAXXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1??_P_91@$BEM@AA@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1??_P_91@$BEM@AA@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_content_item_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_content_item_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_content_item_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_content_item_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_index@c_content_item_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_controller_state@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_controller_content_state@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_controller_state@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_controller_content_state@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_controller_state, char, 0, 3, struct s_default_enum_string_resolver> c_content_item_data_component::get_controller_content_state(void) const
//{
//    mangled_ppc("?get_controller_content_state@c_content_item_data_component@@QBA?AV?$c_enum@W4e_content_controller_state@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@_N$1??_91@$BFA@AA@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@_N$1??_91@$BFA@AA@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@J$1??_91@$BFE@AA@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_content_item_data_component@@J$1??_91@$BFE@AA@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_object_component_get_property_element_count@Vc_content_item_data_component@@$1??_91@$BFE@AA@@YAJPBX@Z
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_content_item_data_component@@$1??_91@$BFE@AA@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> c_content_item_data_component::get_item_type(long) const
//{
//    mangled_ppc("?get_item_type@c_content_item_data_component@@QBA?AV?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@J@Z");
//};

//public: struct s_content_enumeration_result const * c_content_item_data_component::get_item(long) const
//{
//    mangled_ppc("?get_item@c_content_item_data_component@@QBAPBUs_content_enumeration_result@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_content_item_data_component::get_item_category(long) const
//{
//    mangled_ppc("?get_item_category@c_content_item_data_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1??_91@$BFE@AA$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_content_item_data_component::get_item_game_engine_type(long) const
//{
//    mangled_ppc("?get_item_game_engine_type@c_content_item_data_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@J$1??_91@$BFE@AA$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@J$1??_91@$BFE@AA$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_content_item_data_component::get_item_map_id(long) const
//{
//    mangled_ppc("?get_item_map_id@c_content_item_data_component@@QBAJJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@D$1??_91@$BFE@AA$1?get_item_game_engine_icon_index@1@QBADJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@D$1??_91@$BFE@AA$1?get_item_game_engine_icon_index@1@QBADJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char c_content_item_data_component::get_item_game_engine_icon_index(long) const
//{
//    mangled_ppc("?get_item_game_engine_icon_index@c_content_item_data_component@@QBADJ@Z");
//};

//char content_item_mini_metadata_get_game_engine_icon_index(struct s_content_item_mini_metadata const *)
//{
//    mangled_ppc("?content_item_mini_metadata_get_game_engine_icon_index@@YADPBUs_content_item_mini_metadata@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@PBD$1??_91@$BFE@AA$1?get_item_modification_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@PBD$1??_91@$BFE@AA$1?get_item_modification_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_content_item_data_component::get_item_modification_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_modification_author_gamertag@c_content_item_data_component@@QBAPBDJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@PB_W$1??_91@$BFE@AA$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_content_item_data_component@@PB_W$1??_91@$BFE@AA$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_content_item_data_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_content_item_data_component@@QBAPB_WJ@Z");
//};

//public: bool c_ui_content_enumerator::update<struct c_content_item_data_component::s_enumerate_function>(struct c_content_item_data_component::s_enumerate_function)
//{
//    mangled_ppc("??$update@Us_enumerate_function@c_content_item_data_component@@@c_ui_content_enumerator@@QAA_NUs_enumerate_function@c_content_item_data_component@@@Z");
//};

//bool cui_static_vector_push_back<struct s_content_enumeration_result, 100>(class c_cui_static_vector<struct s_content_enumeration_result, 100> &, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("??$cui_static_vector_push_back@Us_content_enumeration_result@@$0GE@@@YA_NAAV?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@ABUs_content_enumeration_result@@@Z");
//};

//public: bool c_cui_static_vector<struct s_content_enumeration_result, 100>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBA_NXZ");
//};

//public: bool c_cui_static_vector<struct s_content_enumeration_result, 100>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBA_NXZ");
//};

//private: bool c_cui_static_vector<struct s_content_enumeration_result, 100>::position_valid(struct s_content_enumeration_result const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@ABA_NPBUs_content_enumeration_result@@@Z");
//};

//public: struct s_content_enumeration_result const * c_cui_static_vector<struct s_content_enumeration_result, 100>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBAPBUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result const * c_cui_static_vector<struct s_content_enumeration_result, 100>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QBAPBUs_content_enumeration_result@@XZ");
//};

//public: void c_cui_static_vector<struct s_content_enumeration_result, 100>::push_back(struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAXABUs_content_enumeration_result@@@Z");
//};

//public: void c_cui_static_vector<struct s_content_enumeration_result, 100>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@QAAXXZ");
//};

//private: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::collapse(struct s_content_enumeration_result const *, struct s_content_enumeration_result const *)
//{
//    mangled_ppc("?collapse@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@AAAPAUs_content_enumeration_result@@PBU2@0@Z");
//};

//private: bool c_ui_content_enumerator::process_results<struct s_content_enumeration_result const *, struct c_content_item_data_component::s_enumerate_function>(struct s_content_enumeration_result const *, struct s_content_enumeration_result const *, struct c_content_item_data_component::s_enumerate_function) const
//{
//    mangled_ppc("??$process_results@PBUs_content_enumeration_result@@Us_enumerate_function@c_content_item_data_component@@@c_ui_content_enumerator@@ABA_NPBUs_content_enumeration_result@@0Us_enumerate_function@c_content_item_data_component@@@Z");
//};

//private: bool c_ui_content_enumerator::process_results<struct s_content_enumeration_result *, struct c_content_item_data_component::s_enumerate_function>(struct s_content_enumeration_result *, struct s_content_enumeration_result *, struct c_content_item_data_component::s_enumerate_function) const
//{
//    mangled_ppc("??$process_results@PAUs_content_enumeration_result@@Us_enumerate_function@c_content_item_data_component@@@c_ui_content_enumerator@@ABA_NPAUs_content_enumeration_result@@0Us_enumerate_function@c_content_item_data_component@@@Z");
//};

//private: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@AAAPAUs_content_enumeration_result@@I@Z");
//};

//private: struct s_content_enumeration_result * c_cui_static_vector<struct s_content_enumeration_result, 100>::get_mutable_iterator(struct s_content_enumeration_result const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_static_vector@Us_content_enumeration_result@@$0GE@@@AAAPAUs_content_enumeration_result@@PBU2@@Z");
//};

//[thunk]: c_content_item_data_component::`vcall'{80, {flat}}
//{
//    mangled_ppc("??_9c_content_item_data_component@@$BFA@AA");
//};

//??_P_9c_content_item_data_component@@$BEM@AA
//{
//    mangled_ppc("??_P_9c_content_item_data_component@@$BEM@AA");
//};

//[thunk]: c_content_item_data_component::`vcall'{84, {flat}}
//{
//    mangled_ppc("??_9c_content_item_data_component@@$BFE@AA");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_content_item_data_component_base>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_content_item_data_component_base@@@@SAPBUs_cui_component_description@@XZ");
//};

//class c_cui_component * cui_component_create<class c_content_item_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_content_item_data_component@@@@YAPAVc_cui_component@@XZ");
//};

