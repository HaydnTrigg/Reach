/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_dummy_file_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_dummy_file_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_dummy_file_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_dummy_file_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_dummy_file_data_component::c_dummy_file_data_component(void);
// merged_84A7E530;
// public: virtual c_dummy_file_data_component::~c_dummy_file_data_component(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_dummy_file_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_dummy_file_data_component>(void);
// class c_cui_component * cui_component_clone<class c_dummy_file_data_component>(class c_cui_component const *);
// bool cui_get_scalar_property_by_return_value<class c_dummy_file_data_component, bool, bool & (c_dummy_file_data_component::is_busy::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::is_busy(void) const;
// bool cui_get_scalar_property_by_return_value<class c_dummy_file_data_component, long, long & (c_dummy_file_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_dummy_file_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_dummy_file_data_component, long & (c_dummy_file_data_component::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_built_in::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::is_item_built_in(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_dlc::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::is_item_dlc(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_metadata_valid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::is_item_metadata_valid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_corrupt::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::is_item_corrupt(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_type(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_category(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned long, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned long & (c_dummy_file_data_component::get_item_file_size::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned long c_dummy_file_data_component::get_item_file_size(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_dummy_file_data_component::get_item_game_engine_type(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, long, long & (c_dummy_file_data_component::get_item_count::*)(void), long & (c_dummy_file_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_dummy_file_data_component::get_item_map_id(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_creation_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_dummy_file_data_component::get_item_creation_timestamp(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_creation_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_dummy_file_data_component::get_item_creation_author_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, char const *, long & (c_dummy_file_data_component::get_item_count::*)(void), char const *& (c_dummy_file_data_component::get_item_creation_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_dummy_file_data_component::get_item_creation_author_gamertag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::get_item_creation_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::get_item_creation_author_signed_into_live(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_modification_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_dummy_file_data_component::get_item_modification_timestamp(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_modification_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_dummy_file_data_component::get_item_modification_author_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, char const *, long & (c_dummy_file_data_component::get_item_count::*)(void), char const *& (c_dummy_file_data_component::get_item_modification_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_dummy_file_data_component::get_item_modification_author_gamertag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::get_item_modification_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_dummy_file_data_component::get_item_modification_author_signed_into_live(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, wchar_t const *, long & (c_dummy_file_data_component::get_item_count::*)(void), wchar_t const *& (c_dummy_file_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_dummy_file_data_component::get_item_name(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, wchar_t const *, long & (c_dummy_file_data_component::get_item_count::*)(void), wchar_t const *& (c_dummy_file_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_dummy_file_data_component::get_item_description(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, char, long & (c_dummy_file_data_component::get_item_count::*)(void), long const volatile & (c_dummy_file_data_component::get_item_game_engine_icon_index::*)()>(void const *, long, struct s_cui_property_value *);
// public: char c_dummy_file_data_component::get_item_game_engine_icon_index(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned long, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned long & (c_dummy_file_data_component::get_item_film_seconds::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned long c_dummy_file_data_component::get_item_film_seconds(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, long, long & (c_dummy_file_data_component::get_item_count::*)(void), long & (c_dummy_file_data_component::get_item_campaign_id::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_dummy_file_data_component::get_item_campaign_id(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_campaign_metagame_scoring@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_campaign_metagame_scoring(long) const;
// bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, short, long & (c_dummy_file_data_component::get_item_count::*)(void), long const & (c_dummy_file_data_component::get_item_campaign_insertion_point::*)()>(void const *, long, struct s_cui_property_value *);
// public: short c_dummy_file_data_component::get_item_campaign_insertion_point(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_difficulty_level@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_difficulty_level(long) const;
// public: c_dummy_file_data_component::c_dummy_file_data_component(class c_dummy_file_data_component const &);

//public: c_dummy_file_data_component::c_dummy_file_data_component(void)
//{
//    mangled_ppc("??0c_dummy_file_data_component@@QAA@XZ");
//};

//merged_84A7E530
//{
//    mangled_ppc("merged_84A7E530");
//};

//public: virtual c_dummy_file_data_component::~c_dummy_file_data_component(void)
//{
//    mangled_ppc("??1c_dummy_file_data_component@@UAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_dummy_file_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_dummy_file_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_dummy_file_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_dummy_file_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_dummy_file_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_dummy_file_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_dummy_file_data_component, bool, bool & (c_dummy_file_data_component::is_busy::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_dummy_file_data_component@@_N$1?is_busy@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_dummy_file_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_dummy_file_data_component, long, long & (c_dummy_file_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_dummy_file_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_dummy_file_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_dummy_file_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_dummy_file_data_component, long & (c_dummy_file_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_dummy_file_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_built_in::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_built_in@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::is_item_built_in(long) const
//{
//    mangled_ppc("?is_item_built_in@c_dummy_file_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_dlc::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_dlc@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::is_item_dlc(long) const
//{
//    mangled_ppc("?is_item_dlc@c_dummy_file_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_metadata_valid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_metadata_valid@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::is_item_metadata_valid(long) const
//{
//    mangled_ppc("?is_item_metadata_valid@c_dummy_file_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::is_item_corrupt::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_corrupt@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::is_item_corrupt(long) const
//{
//    mangled_ppc("?is_item_corrupt@c_dummy_file_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_type(long) const
//{
//    mangled_ppc("?get_item_type@c_dummy_file_data_component@@QBA?AV?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_category(long) const
//{
//    mangled_ppc("?get_item_category@c_dummy_file_data_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned long, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned long & (c_dummy_file_data_component::get_item_file_size::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@K$1?get_item_count@1@QBAJXZ$1?get_item_file_size@1@QBAKJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned long c_dummy_file_data_component::get_item_file_size(long) const
//{
//    mangled_ppc("?get_item_file_size@c_dummy_file_data_component@@QBAKJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_dummy_file_data_component::get_item_game_engine_type(long) const
//{
//    mangled_ppc("?get_item_game_engine_type@c_dummy_file_data_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, long, long & (c_dummy_file_data_component::get_item_count::*)(void), long & (c_dummy_file_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_dummy_file_data_component::get_item_map_id(long) const
//{
//    mangled_ppc("?get_item_map_id@c_dummy_file_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_creation_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_creation_timestamp@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_dummy_file_data_component::get_item_creation_timestamp(long) const
//{
//    mangled_ppc("?get_item_creation_timestamp@c_dummy_file_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_creation_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_dummy_file_data_component::get_item_creation_author_xuid(long) const
//{
//    mangled_ppc("?get_item_creation_author_xuid@c_dummy_file_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, char const *, long & (c_dummy_file_data_component::get_item_count::*)(void), char const *& (c_dummy_file_data_component::get_item_creation_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@PBD$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_dummy_file_data_component::get_item_creation_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_creation_author_gamertag@c_dummy_file_data_component@@QBAPBDJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::get_item_creation_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_signed_into_live@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::get_item_creation_author_signed_into_live(long) const
//{
//    mangled_ppc("?get_item_creation_author_signed_into_live@c_dummy_file_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_modification_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_modification_timestamp@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_dummy_file_data_component::get_item_modification_timestamp(long) const
//{
//    mangled_ppc("?get_item_modification_timestamp@c_dummy_file_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned __int64, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned __int64& (c_dummy_file_data_component::get_item_modification_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_dummy_file_data_component::get_item_modification_author_xuid(long) const
//{
//    mangled_ppc("?get_item_modification_author_xuid@c_dummy_file_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, char const *, long & (c_dummy_file_data_component::get_item_count::*)(void), char const *& (c_dummy_file_data_component::get_item_modification_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@PBD$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_dummy_file_data_component::get_item_modification_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_modification_author_gamertag@c_dummy_file_data_component@@QBAPBDJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, bool, long & (c_dummy_file_data_component::get_item_count::*)(void), bool & (c_dummy_file_data_component::get_item_modification_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_signed_into_live@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_dummy_file_data_component::get_item_modification_author_signed_into_live(long) const
//{
//    mangled_ppc("?get_item_modification_author_signed_into_live@c_dummy_file_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, wchar_t const *, long & (c_dummy_file_data_component::get_item_count::*)(void), wchar_t const *& (c_dummy_file_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_dummy_file_data_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_dummy_file_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, wchar_t const *, long & (c_dummy_file_data_component::get_item_count::*)(void), wchar_t const *& (c_dummy_file_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_dummy_file_data_component::get_item_description(long) const
//{
//    mangled_ppc("?get_item_description@c_dummy_file_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, char, long & (c_dummy_file_data_component::get_item_count::*)(void), long const volatile & (c_dummy_file_data_component::get_item_game_engine_icon_index::*)()>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@D$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_icon_index@1@QBADJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char c_dummy_file_data_component::get_item_game_engine_icon_index(long) const
//{
//    mangled_ppc("?get_item_game_engine_icon_index@c_dummy_file_data_component@@QBADJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, unsigned long, long & (c_dummy_file_data_component::get_item_count::*)(void), unsigned long & (c_dummy_file_data_component::get_item_film_seconds::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@K$1?get_item_count@1@QBAJXZ$1?get_item_film_seconds@1@QBAKJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned long c_dummy_file_data_component::get_item_film_seconds(long) const
//{
//    mangled_ppc("?get_item_film_seconds@c_dummy_file_data_component@@QBAKJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, long, long & (c_dummy_file_data_component::get_item_count::*)(void), long & (c_dummy_file_data_component::get_item_campaign_id::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_campaign_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_dummy_file_data_component::get_item_campaign_id(long) const
//{
//    mangled_ppc("?get_item_campaign_id@c_dummy_file_data_component@@QBAJJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_campaign_metagame_scoring@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_campaign_metagame_scoring@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_campaign_metagame_scoring(long) const
//{
//    mangled_ppc("?get_item_campaign_metagame_scoring@c_dummy_file_data_component@@QBA?AV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_dummy_file_data_component, short, long & (c_dummy_file_data_component::get_item_count::*)(void), long const & (c_dummy_file_data_component::get_item_campaign_insertion_point::*)()>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@F$1?get_item_count@1@QBAJXZ$1?get_item_campaign_insertion_point@1@QBAFJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: short c_dummy_file_data_component::get_item_campaign_insertion_point(long) const
//{
//    mangled_ppc("?get_item_campaign_insertion_point@c_dummy_file_data_component@@QBAFJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_difficulty_level@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_dummy_file_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_difficulty_level@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_dummy_file_data_component::get_item_difficulty_level(long) const
//{
//    mangled_ppc("?get_item_difficulty_level@c_dummy_file_data_component@@QBA?AV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@J@Z");
//};

//public: c_dummy_file_data_component::c_dummy_file_data_component(class c_dummy_file_data_component const &)
//{
//    mangled_ppc("??0c_dummy_file_data_component@@QAA@ABV0@@Z");
//};

