/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_ui_transfer_enumerator::c_enumerate_async::k_async_priority; // "?k_async_priority@c_enumerate_async@c_ui_transfer_enumerator@@2JB"
// public: static long const c_ui_transfer_enumerator::c_enumerate_async::k_async_category; // "?k_async_category@c_enumerate_async@c_ui_transfer_enumerator@@2JB"
// public: static int const c_enum_no_init<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_content_item_category const c_enum_no_init<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@2W4e_content_item_category@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_active_transfer_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_active_transfer_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_active_transfer_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_active_transfer_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_active_transfer_data_component::c_active_transfer_data_component(void);
// merged_84A47C58;
// public: virtual c_active_transfer_data_component::~c_active_transfer_data_component(void);
// protected: virtual void c_active_transfer_data_component::do_update(class c_cui_update_context *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_active_transfer_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_active_transfer_data_component>(void);
// class c_cui_component * cui_component_clone<class c_active_transfer_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_controller_index(void) const;
// public: enum e_controller_index c_ui_transfer_enumerator::get_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_active_transfer_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_active_transfer_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_transfer_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_active_transfer_data_component, bool, bool & (c_active_transfer_data_component::is_busy::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::is_busy(void) const;
// public: bool c_ui_transfer_enumerator::is_busy(void) const;
// bool cui_get_scalar_property_by_return_value<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_active_transfer_data_component::get_item_count(void) const;
// public: class c_cui_static_vector<class c_online_file_transfer, 16> const & c_ui_transfer_enumerator::get_transfers(void) const;
// public: unsigned int c_cui_static_vector<class c_online_file_transfer, 16>::size(void) const;
// long cui_object_component_get_property_element_count<class c_active_transfer_data_component, long & (c_active_transfer_data_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_type(long) const;
// public: class c_online_file_transfer const & c_cui_static_vector<class c_online_file_transfer, 16>::operator[](unsigned int) const;
// public: class c_online_file_transfer const * c_cui_static_vector<class c_online_file_transfer, 16>::data(void) const;
// ??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_category(long) const;
// public: c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(enum e_content_item_category);
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned long, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned long & (c_active_transfer_data_component::get_item_file_size::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned long c_active_transfer_data_component::get_item_file_size(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_active_transfer_data_component::get_item_game_engine_type(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void), long & (c_active_transfer_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_active_transfer_data_component::get_item_map_id(long) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, char, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_game_engine_icon_index::*)(long, char *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_game_engine_icon_index(long, char *) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_creation_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_active_transfer_data_component::get_item_creation_timestamp(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_creation_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_active_transfer_data_component::get_item_creation_author_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, char const *, long & (c_active_transfer_data_component::get_item_count::*)(void), char const *& (c_active_transfer_data_component::get_item_creation_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_active_transfer_data_component::get_item_creation_author_gamertag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, bool, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_creation_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_creation_author_signed_into_live(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_modification_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_active_transfer_data_component::get_item_modification_timestamp(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_modification_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_active_transfer_data_component::get_item_modification_author_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, char const *, long & (c_active_transfer_data_component::get_item_count::*)(void), char const *& (c_active_transfer_data_component::get_item_modification_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_active_transfer_data_component::get_item_modification_author_gamertag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, bool, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_modification_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_modification_author_signed_into_live(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, wchar_t const *, long & (c_active_transfer_data_component::get_item_count::*)(void), wchar_t const *& (c_active_transfer_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_active_transfer_data_component::get_item_name(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, wchar_t const *, long & (c_active_transfer_data_component::get_item_count::*)(void), wchar_t const *& (c_active_transfer_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_active_transfer_data_component::get_item_description(long) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, unsigned long, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_film_seconds::*)(long, unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_film_seconds(long, unsigned long *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_campaign_id::*)(long, long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_campaign_id(long, long *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_campaign_metagame_scoring::*)(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_campaign_metagame_scoring(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *) const;
// public: c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(enum e_campaign_metagame_scoring);
// bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, short, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_campaign_insertion_point::*)(long, short *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_campaign_insertion_point(long, short *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_difficulty_level::*)(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_transfer_data_component::get_item_difficulty_level(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *) const;
// ??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_transfer_type(long) const;
// public: enum s_online_file_transfer_types::e_type c_online_file_transfer::get_type(void) const;
// public: c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>(enum s_online_file_transfer_types::e_type);
// ??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_transfer_status(long) const;
// public: enum s_online_file_transfer_types::e_status c_online_file_transfer::get_status(void) const;
// public: c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>(enum s_online_file_transfer_types::e_status);
// bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void), long & (c_active_transfer_data_component::get_item_transfer_progress::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_active_transfer_data_component::get_item_transfer_progress(long) const;
// public: float c_online_file_transfer::get_progress(void) const;
// public: c_active_transfer_data_component::c_active_transfer_data_component(class c_active_transfer_data_component const &);
// public: c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(void);
// void cui_property_value_set<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> const &);
// public: enum e_content_item_category c_enum_no_init<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::operator enum e_content_item_category(void) const;
// void cui_property_value_set(struct s_cui_property_value *, char);

//public: c_active_transfer_data_component::c_active_transfer_data_component(void)
//{
//    mangled_ppc("??0c_active_transfer_data_component@@QAA@XZ");
//};

//merged_84A47C58
//{
//    mangled_ppc("merged_84A47C58");
//};

//public: virtual c_active_transfer_data_component::~c_active_transfer_data_component(void)
//{
//    mangled_ppc("??1c_active_transfer_data_component@@UAA@XZ");
//};

//protected: virtual void c_active_transfer_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_active_transfer_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_active_transfer_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_active_transfer_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_active_transfer_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_active_transfer_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_active_transfer_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_active_transfer_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_active_transfer_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//public: enum e_controller_index c_ui_transfer_enumerator::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_ui_transfer_enumerator@@QBA?AW4e_controller_index@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_transfer_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_active_transfer_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_transfer_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_index@c_active_transfer_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_transfer_data_component, bool, bool & (c_active_transfer_data_component::is_busy::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_transfer_data_component@@_N$1?is_busy@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_active_transfer_data_component@@QBA_NXZ");
//};

//public: bool c_ui_transfer_enumerator::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_ui_transfer_enumerator@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_transfer_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_active_transfer_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_active_transfer_data_component@@QBAJXZ");
//};

//public: class c_cui_static_vector<class c_online_file_transfer, 16> const & c_ui_transfer_enumerator::get_transfers(void) const
//{
//    mangled_ppc("?get_transfers@c_ui_transfer_enumerator@@QBAABV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@XZ");
//};

//public: unsigned int c_cui_static_vector<class c_online_file_transfer, 16>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBAIXZ");
//};

//long cui_object_component_get_property_element_count<class c_active_transfer_data_component, long & (c_active_transfer_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_active_transfer_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_type(long) const
//{
//    mangled_ppc("?get_item_type@c_active_transfer_data_component@@QBA?AV?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class c_online_file_transfer const & c_cui_static_vector<class c_online_file_transfer, 16>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBAABVc_online_file_transfer@@I@Z");
//};

//public: class c_online_file_transfer const * c_cui_static_vector<class c_online_file_transfer, 16>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBAPBVc_online_file_transfer@@XZ");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_category(long) const
//{
//    mangled_ppc("?get_item_category@c_active_transfer_data_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@J@Z");
//};

//public: c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(enum e_content_item_category)
//{
//    mangled_ppc("??0?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@QAA@W4e_content_item_category@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned long, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned long & (c_active_transfer_data_component::get_item_file_size::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@K$1?get_item_count@1@QBAJXZ$1?get_item_file_size@1@QBAKJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned long c_active_transfer_data_component::get_item_file_size(long) const
//{
//    mangled_ppc("?get_item_file_size@c_active_transfer_data_component@@QBAKJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_active_transfer_data_component::get_item_game_engine_type(long) const
//{
//    mangled_ppc("?get_item_game_engine_type@c_active_transfer_data_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void), long & (c_active_transfer_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_active_transfer_data_component::get_item_map_id(long) const
//{
//    mangled_ppc("?get_item_map_id@c_active_transfer_data_component@@QBAJJ@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, char, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_game_engine_icon_index::*)(long, char *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_active_transfer_data_component@@D$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_icon_index@1@QBA_NJPAD@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_game_engine_icon_index(long, char *) const
//{
//    mangled_ppc("?get_item_game_engine_icon_index@c_active_transfer_data_component@@QBA_NJPAD@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_creation_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_creation_timestamp@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_active_transfer_data_component::get_item_creation_timestamp(long) const
//{
//    mangled_ppc("?get_item_creation_timestamp@c_active_transfer_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_creation_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_active_transfer_data_component::get_item_creation_author_xuid(long) const
//{
//    mangled_ppc("?get_item_creation_author_xuid@c_active_transfer_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, char const *, long & (c_active_transfer_data_component::get_item_count::*)(void), char const *& (c_active_transfer_data_component::get_item_creation_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@PBD$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_active_transfer_data_component::get_item_creation_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_creation_author_gamertag@c_active_transfer_data_component@@QBAPBDJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, bool, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_creation_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_signed_into_live@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_creation_author_signed_into_live(long) const
//{
//    mangled_ppc("?get_item_creation_author_signed_into_live@c_active_transfer_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_modification_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_modification_timestamp@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_active_transfer_data_component::get_item_modification_timestamp(long) const
//{
//    mangled_ppc("?get_item_modification_timestamp@c_active_transfer_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, unsigned __int64, long & (c_active_transfer_data_component::get_item_count::*)(void), unsigned __int64& (c_active_transfer_data_component::get_item_modification_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_active_transfer_data_component::get_item_modification_author_xuid(long) const
//{
//    mangled_ppc("?get_item_modification_author_xuid@c_active_transfer_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, char const *, long & (c_active_transfer_data_component::get_item_count::*)(void), char const *& (c_active_transfer_data_component::get_item_modification_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@PBD$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_active_transfer_data_component::get_item_modification_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_modification_author_gamertag@c_active_transfer_data_component@@QBAPBDJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, bool, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_modification_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_signed_into_live@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_modification_author_signed_into_live(long) const
//{
//    mangled_ppc("?get_item_modification_author_signed_into_live@c_active_transfer_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, wchar_t const *, long & (c_active_transfer_data_component::get_item_count::*)(void), wchar_t const *& (c_active_transfer_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_active_transfer_data_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_active_transfer_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, wchar_t const *, long & (c_active_transfer_data_component::get_item_count::*)(void), wchar_t const *& (c_active_transfer_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_active_transfer_data_component::get_item_description(long) const
//{
//    mangled_ppc("?get_item_description@c_active_transfer_data_component@@QBAPB_WJ@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, unsigned long, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_film_seconds::*)(long, unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_active_transfer_data_component@@K$1?get_item_count@1@QBAJXZ$1?get_item_film_seconds@1@QBA_NJPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_film_seconds(long, unsigned long *) const
//{
//    mangled_ppc("?get_item_film_seconds@c_active_transfer_data_component@@QBA_NJPAK@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_campaign_id::*)(long, long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_active_transfer_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_campaign_id@1@QBA_NJPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_campaign_id(long, long *) const
//{
//    mangled_ppc("?get_item_campaign_id@c_active_transfer_data_component@@QBA_NJPAJ@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_campaign_metagame_scoring::*)(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_active_transfer_data_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_campaign_metagame_scoring@1@QBA_NJPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_campaign_metagame_scoring(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_item_campaign_metagame_scoring@c_active_transfer_data_component@@QBA_NJPAV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(enum e_campaign_metagame_scoring)
//{
//    mangled_ppc("??0?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_campaign_metagame_scoring@@@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, short, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_campaign_insertion_point::*)(long, short *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_active_transfer_data_component@@F$1?get_item_count@1@QBAJXZ$1?get_item_campaign_insertion_point@1@QBA_NJPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_campaign_insertion_point(long, short *) const
//{
//    mangled_ppc("?get_item_campaign_insertion_point@c_active_transfer_data_component@@QBA_NJPAF@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_active_transfer_data_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, long & (c_active_transfer_data_component::get_item_count::*)(void), bool & (c_active_transfer_data_component::get_item_difficulty_level::*)(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_active_transfer_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_difficulty_level@1@QBA_NJPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_transfer_data_component::get_item_difficulty_level(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_item_difficulty_level@c_active_transfer_data_component@@QBA_NJPAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_transfer_type(long) const
//{
//    mangled_ppc("?get_item_transfer_type@c_active_transfer_data_component@@QBA?AV?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: enum s_online_file_transfer_types::e_type c_online_file_transfer::get_type(void) const
//{
//    mangled_ppc("?get_type@c_online_file_transfer@@QBA?AW4e_type@s_online_file_transfer_types@@XZ");
//};

//public: c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>(enum s_online_file_transfer_types::e_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QAA@W4e_type@s_online_file_transfer_types@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@V?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> c_active_transfer_data_component::get_item_transfer_status(long) const
//{
//    mangled_ppc("?get_item_transfer_status@c_active_transfer_data_component@@QBA?AV?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@J@Z");
//};

//public: enum s_online_file_transfer_types::e_status c_online_file_transfer::get_status(void) const
//{
//    mangled_ppc("?get_status@c_online_file_transfer@@QBA?AW4e_status@s_online_file_transfer_types@@XZ");
//};

//public: c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>(enum s_online_file_transfer_types::e_status)
//{
//    mangled_ppc("??0?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@QAA@W4e_status@s_online_file_transfer_types@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_transfer_data_component, long, long & (c_active_transfer_data_component::get_item_count::*)(void), long & (c_active_transfer_data_component::get_item_transfer_progress::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_transfer_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_transfer_progress@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_active_transfer_data_component::get_item_transfer_progress(long) const
//{
//    mangled_ppc("?get_item_transfer_progress@c_active_transfer_data_component@@QBAJJ@Z");
//};

//public: float c_online_file_transfer::get_progress(void) const
//{
//    mangled_ppc("?get_progress@c_online_file_transfer@@QBAMXZ");
//};

//public: c_active_transfer_data_component::c_active_transfer_data_component(class c_active_transfer_data_component const &)
//{
//    mangled_ppc("??0c_active_transfer_data_component@@QAA@ABV0@@Z");
//};

//public: c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void cui_property_value_set<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_content_item_category c_enum_no_init<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::operator enum e_content_item_category(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@QBA?AW4e_content_item_category@@XZ");
//};

//void cui_property_value_set(struct s_cui_property_value *, char)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@D@Z");
//};

