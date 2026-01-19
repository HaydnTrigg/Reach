/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_map_data_component::k_max_item_count; // "?k_max_item_count@c_map_data_component@@0IB"
// public: static int const c_enum_no_init<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_map_type const c_enum_no_init<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@2W4e_map_type@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_map_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_map_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_map_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_map_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_map_data_component::s_item::s_item(enum e_map_id, wchar_t const *, wchar_t const *);
// public: c_map_data_component::s_item::s_item(enum e_map_id, wchar_t const *, wchar_t const *, bool);
// public: c_map_data_component::s_item::s_item(enum e_map_id, wchar_t const *, wchar_t const *, unsigned __int64);
// public: c_map_data_component::c_map_data_component(void);
// merged_84AE1498;
// public: virtual c_map_data_component::~c_map_data_component(void);
// protected: virtual void c_map_data_component::do_update(class c_cui_update_context *);
// private: void c_map_data_component::update_campaign(enum e_campaign_id);
// private: void c_map_data_component::update_multiplayer(void);
// private: void c_map_data_component::update_firefight(void);
// private: static bool c_map_data_component::compare_campaign_items_sort(void const *, void const *, void const *);
// private: static bool c_map_data_component::compare_items_sort(void const *, void const *, void const *);
// public: unsigned int c_cui_static_vector<struct c_map_data_component::s_item, 64>::size(void) const;
// public: bool c_cui_static_vector<struct c_map_data_component::s_item, 64>::empty(void) const;
// public: struct c_map_data_component::s_item * c_cui_static_vector<struct c_map_data_component::s_item, 64>::begin(void);
// public: struct c_map_data_component::s_item & c_cui_static_vector<struct c_map_data_component::s_item, 64>::operator[](unsigned int);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_map_data_component>::get_instance(void);
// public: struct c_map_data_component::s_item * c_cui_static_vector<struct c_map_data_component::s_item, 64>::data(void);
// public: c_static_wchar_string<32>::c_static_wchar_string<32>(wchar_t const *);
// public: c_cui_static_vector<struct c_map_data_component::s_item, 64>::c_cui_static_vector<struct c_map_data_component::s_item, 64>(void);
// public: c_cui_static_vector<struct c_map_data_component::s_item, 64>::~c_cui_static_vector<struct c_map_data_component::s_item, 64>(void);
// public: void c_cui_static_vector<struct c_map_data_component::s_item, 64>::push_back(struct c_map_data_component::s_item const &);
// public: void c_cui_static_vector<struct c_map_data_component::s_item, 64>::clear(void);
// class c_cui_component * cui_component_create<class c_map_data_component>(void);
// class c_cui_component * cui_component_clone<class c_map_data_component>(class c_cui_component const *);
// bool cui_get_scalar_property_by_return_value<class c_map_data_component, long, long & (c_map_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_map_data_component::get_item_count(void) const;
// bool cui_get_scalar_property_by_return_value<class c_map_data_component, long, long & (c_map_data_component::get_current_map_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_map_data_component::get_current_map_index(void) const;
// long cui_object_component_get_property_element_count<class c_map_data_component, long & (c_map_data_component::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_map_data_component, bool, long & (c_map_data_component::get_item_count::*)(void), bool & (c_map_data_component::is_item_locked::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_map_data_component::is_item_locked(long) const;
// public: struct c_map_data_component::s_item const & c_cui_static_vector<struct c_map_data_component::s_item, 64>::operator[](unsigned int) const;
// public: struct c_map_data_component::s_item const * c_cui_static_vector<struct c_map_data_component::s_item, 64>::data(void) const;
// bool cui_get_array_property_element_by_return_value<class c_map_data_component, bool, long & (c_map_data_component::get_item_count::*)(void), bool & (c_map_data_component::is_item_dlc::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_map_data_component::is_item_dlc(long) const;
// bool cui_get_array_property_element_by_return_value<class c_map_data_component, unsigned __int64, long & (c_map_data_component::get_item_count::*)(void), unsigned __int64& (c_map_data_component::get_item_marketplace_offer_id::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_map_data_component::get_item_marketplace_offer_id(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_best_completion_difficulty_solo@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_map_data_component::get_item_best_completion_difficulty_solo(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_best_completion_difficulty_coop@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_map_data_component::get_item_best_completion_difficulty_coop(long) const;
// bool cui_get_array_property_element_by_return_value<class c_map_data_component, long, long & (c_map_data_component::get_item_count::*)(void), long & (c_map_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_map_data_component::get_item_map_id(long) const;
// bool cui_get_array_property_element_by_return_value<class c_map_data_component, wchar_t const *, long & (c_map_data_component::get_item_count::*)(void), wchar_t const *& (c_map_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_map_data_component::get_item_name(long) const;
// bool cui_get_array_property_element_by_return_value<class c_map_data_component, wchar_t const *, long & (c_map_data_component::get_item_count::*)(void), wchar_t const *& (c_map_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_map_data_component::get_item_description(long) const;
// ??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_map_data_component::get_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_map_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_map_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_map_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_map_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver> c_map_data_component::get_map_type(void) const;
// public: c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(enum e_map_type);
// bool cui_set_scalar_property_by_value<class c_map_data_component, class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>, void & (c_map_data_component::set_map_type::*)(class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_map_data_component::set_map_type(class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>);
// public: enum e_map_type c_enum_no_init<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_map_type(void) const;
// public: c_map_data_component::c_map_data_component(class c_map_data_component const &);
// public: bool c_cui_static_vector<struct c_map_data_component::s_item, 64>::full(void) const;
// private: struct c_map_data_component::s_item * c_cui_static_vector<struct c_map_data_component::s_item, 64>::get(unsigned int);
// public: c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: c_cui_static_vector<struct c_map_data_component::s_item, 64>::c_cui_static_vector<struct c_map_data_component::s_item, 64>(class c_cui_static_vector<struct c_map_data_component::s_item, 64> const &);
// public: void c_cui_static_vector<struct c_map_data_component::s_item, 64>::pop_back(void);
// void cui_property_value_set<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver> *);
// public: struct c_map_data_component::s_item const * c_cui_static_vector<struct c_map_data_component::s_item, 64>::begin(void) const;
// public: struct c_map_data_component::s_item const * c_cui_static_vector<struct c_map_data_component::s_item, 64>::end(void) const;
// public: bool c_enum_no_init<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// void g_map_type_enum_table::`dynamic atexit destructor'(void);

//public: c_map_data_component::s_item::s_item(enum e_map_id, wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("??0s_item@c_map_data_component@@QAA@W4e_map_id@@PB_W1@Z");
//};

//public: c_map_data_component::s_item::s_item(enum e_map_id, wchar_t const *, wchar_t const *, bool)
//{
//    mangled_ppc("??0s_item@c_map_data_component@@QAA@W4e_map_id@@PB_W1_N@Z");
//};

//public: c_map_data_component::s_item::s_item(enum e_map_id, wchar_t const *, wchar_t const *, unsigned __int64)
//{
//    mangled_ppc("??0s_item@c_map_data_component@@QAA@W4e_map_id@@PB_W1_K@Z");
//};

//public: c_map_data_component::c_map_data_component(void)
//{
//    mangled_ppc("??0c_map_data_component@@QAA@XZ");
//};

//merged_84AE1498
//{
//    mangled_ppc("merged_84AE1498");
//};

//public: virtual c_map_data_component::~c_map_data_component(void)
//{
//    mangled_ppc("??1c_map_data_component@@UAA@XZ");
//};

//protected: virtual void c_map_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_map_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_map_data_component::update_campaign(enum e_campaign_id)
//{
//    mangled_ppc("?update_campaign@c_map_data_component@@AAAXW4e_campaign_id@@@Z");
//};

//private: void c_map_data_component::update_multiplayer(void)
//{
//    mangled_ppc("?update_multiplayer@c_map_data_component@@AAAXXZ");
//};

//private: void c_map_data_component::update_firefight(void)
//{
//    mangled_ppc("?update_firefight@c_map_data_component@@AAAXXZ");
//};

//private: static bool c_map_data_component::compare_campaign_items_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_campaign_items_sort@c_map_data_component@@CA_NPBX00@Z");
//};

//private: static bool c_map_data_component::compare_items_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_items_sort@c_map_data_component@@CA_NPBX00@Z");
//};

//public: unsigned int c_cui_static_vector<struct c_map_data_component::s_item, 64>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBAIXZ");
//};

//public: bool c_cui_static_vector<struct c_map_data_component::s_item, 64>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBA_NXZ");
//};

//public: struct c_map_data_component::s_item * c_cui_static_vector<struct c_map_data_component::s_item, 64>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAAPAUs_item@c_map_data_component@@XZ");
//};

//public: struct c_map_data_component::s_item & c_cui_static_vector<struct c_map_data_component::s_item, 64>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAAAAUs_item@c_map_data_component@@I@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_map_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_map_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: struct c_map_data_component::s_item * c_cui_static_vector<struct c_map_data_component::s_item, 64>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAAPAUs_item@c_map_data_component@@XZ");
//};

//public: c_static_wchar_string<32>::c_static_wchar_string<32>(wchar_t const *)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0CA@@@QAA@PB_W@Z");
//};

//public: c_cui_static_vector<struct c_map_data_component::s_item, 64>::c_cui_static_vector<struct c_map_data_component::s_item, 64>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_map_data_component::s_item, 64>::~c_cui_static_vector<struct c_map_data_component::s_item, 64>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAA@XZ");
//};

//public: void c_cui_static_vector<struct c_map_data_component::s_item, 64>::push_back(struct c_map_data_component::s_item const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAAXABUs_item@c_map_data_component@@@Z");
//};

//public: void c_cui_static_vector<struct c_map_data_component::s_item, 64>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAAXXZ");
//};

//class c_cui_component * cui_component_create<class c_map_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_map_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_map_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_map_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_map_data_component, long, long & (c_map_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_map_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_map_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_map_data_component, long, long & (c_map_data_component::get_current_map_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@J$1?get_current_map_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_map_data_component::get_current_map_index(void) const
//{
//    mangled_ppc("?get_current_map_index@c_map_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_map_data_component, long & (c_map_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_map_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_map_data_component, bool, long & (c_map_data_component::get_item_count::*)(void), bool & (c_map_data_component::is_item_locked::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_locked@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_map_data_component::is_item_locked(long) const
//{
//    mangled_ppc("?is_item_locked@c_map_data_component@@QBA_NJ@Z");
//};

//public: struct c_map_data_component::s_item const & c_cui_static_vector<struct c_map_data_component::s_item, 64>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBAABUs_item@c_map_data_component@@I@Z");
//};

//public: struct c_map_data_component::s_item const * c_cui_static_vector<struct c_map_data_component::s_item, 64>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBAPBUs_item@c_map_data_component@@XZ");
//};

//bool cui_get_array_property_element_by_return_value<class c_map_data_component, bool, long & (c_map_data_component::get_item_count::*)(void), bool & (c_map_data_component::is_item_dlc::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_dlc@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_map_data_component::is_item_dlc(long) const
//{
//    mangled_ppc("?is_item_dlc@c_map_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_map_data_component, unsigned __int64, long & (c_map_data_component::get_item_count::*)(void), unsigned __int64& (c_map_data_component::get_item_marketplace_offer_id::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_marketplace_offer_id@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_map_data_component::get_item_marketplace_offer_id(long) const
//{
//    mangled_ppc("?get_item_marketplace_offer_id@c_map_data_component@@QBA_KJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_best_completion_difficulty_solo@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_best_completion_difficulty_solo@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_map_data_component::get_item_best_completion_difficulty_solo(long) const
//{
//    mangled_ppc("?get_item_best_completion_difficulty_solo@c_map_data_component@@QBA?AV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_best_completion_difficulty_coop@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_best_completion_difficulty_coop@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_map_data_component::get_item_best_completion_difficulty_coop(long) const
//{
//    mangled_ppc("?get_item_best_completion_difficulty_coop@c_map_data_component@@QBA?AV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_map_data_component, long, long & (c_map_data_component::get_item_count::*)(void), long & (c_map_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_map_data_component::get_item_map_id(long) const
//{
//    mangled_ppc("?get_item_map_id@c_map_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_map_data_component, wchar_t const *, long & (c_map_data_component::get_item_count::*)(void), wchar_t const *& (c_map_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_map_data_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_map_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_map_data_component, wchar_t const *, long & (c_map_data_component::get_item_count::*)(void), wchar_t const *& (c_map_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_map_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_map_data_component::get_item_description(long) const
//{
//    mangled_ppc("?get_item_description@c_map_data_component@@QBAPB_WJ@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_map_data_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_map_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_map_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_map_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_map_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_map_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_index@c_map_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_map_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_map_data_component@@V?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_map_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver> c_map_data_component::get_map_type(void) const
//{
//    mangled_ppc("?get_map_type@c_map_data_component@@QBA?AV?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(enum e_map_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_map_type@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_map_data_component, class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>, void & (c_map_data_component::set_map_type::*)(class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_map_data_component@@V?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@$1?set_map_type@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_map_data_component::set_map_type(class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_map_type@c_map_data_component@@QAAXV?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_map_type c_enum_no_init<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_map_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_map_type@@XZ");
//};

//public: c_map_data_component::c_map_data_component(class c_map_data_component const &)
//{
//    mangled_ppc("??0c_map_data_component@@QAA@ABV0@@Z");
//};

//public: bool c_cui_static_vector<struct c_map_data_component::s_item, 64>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBA_NXZ");
//};

//private: struct c_map_data_component::s_item * c_cui_static_vector<struct c_map_data_component::s_item, 64>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@AAAPAUs_item@c_map_data_component@@I@Z");
//};

//public: c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_map_data_component::s_item, 64>::c_cui_static_vector<struct c_map_data_component::s_item, 64>(class c_cui_static_vector<struct c_map_data_component::s_item, 64> const &)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAA@ABV0@@Z");
//};

//public: void c_cui_static_vector<struct c_map_data_component::s_item, 64>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QAAXXZ");
//};

//void cui_property_value_set<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct c_map_data_component::s_item const * c_cui_static_vector<struct c_map_data_component::s_item, 64>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBAPBUs_item@c_map_data_component@@XZ");
//};

//public: struct c_map_data_component::s_item const * c_cui_static_vector<struct c_map_data_component::s_item, 64>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_item@c_map_data_component@@$0EA@@@QBAPBUs_item@c_map_data_component@@XZ");
//};

//public: bool c_enum_no_init<enum e_map_type, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_map_type@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//void g_map_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_map_type_enum_table@@YAXXZ");
//};

