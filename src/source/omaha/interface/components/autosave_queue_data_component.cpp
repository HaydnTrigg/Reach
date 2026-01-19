/* ---------- headers */

#include "omaha\interface\components\autosave_queue_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_autosave_queue_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_autosave_queue_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_autosave_queue_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_autosave_queue_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_autosave_queue_data_component::c_autosave_queue_data_component(void);
// merged_84A4ED68;
// public: virtual c_autosave_queue_data_component::~c_autosave_queue_data_component(void);
// protected: virtual void c_autosave_queue_data_component::do_update(class c_cui_update_context *);
// public: c_autosave_queue_data_component::s_item_transfer_info::s_item_transfer_info(void);
// protected: virtual void c_autosave_queue_data_component::do_initialize(class c_cui_update_context *);
// private: bool c_autosave_queue_data_component::filter_excludes(struct s_autosave_queue_item const *) const;
// private: void c_autosave_queue_data_component::filter_items(void);
// public: c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_autosave_queue_data_component>::get_instance(void);
// public: c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>(void);
// public: c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::~c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>(void);
// public: void c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::push_back(struct c_autosave_queue_data_component::s_item_transfer_info const &);
// public: void c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::clear(void);
// class c_cui_component * cui_component_create<class c_autosave_queue_data_component>(void);
// ??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_autosave_queue_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_autosave_queue_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_filter_content_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_filter_content_item_category(void) const;
// bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_autosave_queue_data_component::set_filter_content_item_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_autosave_queue_data_component::set_filter_content_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_filter_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_filter_game_mode(void) const;
// public: c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(enum e_game_mode);
// bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>, void & (c_autosave_queue_data_component::set_filter_game_mode::*)(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_autosave_queue_data_component::set_filter_game_mode(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_filter_game_engine_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_autosave_queue_data_component::get_filter_game_engine_type(void) const;
// bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>, void & (c_autosave_queue_data_component::set_filter_game_engine_type::*)(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_autosave_queue_data_component::set_filter_game_engine_type(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_filter_map_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_autosave_queue_data_component::get_filter_map_id(void) const;
// bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, long, void & (c_autosave_queue_data_component::set_filter_map_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_autosave_queue_data_component::set_filter_map_id(long);
// ??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@D$1?get_filter_megalo_category_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: char c_autosave_queue_data_component::get_filter_megalo_category_index(void) const;
// bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, char, void & (c_autosave_queue_data_component::set_filter_megalo_category_index::*)(char)>(void *, long, struct s_cui_property_value const *);
// public: void c_autosave_queue_data_component::set_filter_megalo_category_index(char);
// bool cui_get_scalar_property_by_return_value<class c_autosave_queue_data_component, bool, bool & (c_autosave_queue_data_component::is_busy::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::is_busy(void) const;
// bool cui_get_scalar_property_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_autosave_queue_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_autosave_queue_data_component, long & (c_autosave_queue_data_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_item_category(long) const;
// enum e_content_item_category content_item_metadata_get_category(struct s_content_item_metadata const *);
// public: struct s_autosave_queue_item const * c_autosave_queue_data_component::get_item(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned long, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned long & (c_autosave_queue_data_component::get_item_file_size::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned long c_autosave_queue_data_component::get_item_file_size(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_autosave_queue_data_component::get_item_game_engine_type(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void), long & (c_autosave_queue_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_autosave_queue_data_component::get_item_map_id(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_creation_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_autosave_queue_data_component::get_item_creation_timestamp(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_creation_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_autosave_queue_data_component::get_item_creation_author_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, char const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), char const *& (c_autosave_queue_data_component::get_item_creation_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_autosave_queue_data_component::get_item_creation_author_gamertag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, bool, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_creation_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_creation_author_signed_into_live(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_modification_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_autosave_queue_data_component::get_item_modification_timestamp(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_modification_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_autosave_queue_data_component::get_item_modification_author_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, char const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), char const *& (c_autosave_queue_data_component::get_item_modification_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_autosave_queue_data_component::get_item_modification_author_gamertag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, bool, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_modification_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_modification_author_signed_into_live(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, wchar_t const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), wchar_t const *& (c_autosave_queue_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_autosave_queue_data_component::get_item_name(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, wchar_t const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), wchar_t const *& (c_autosave_queue_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_autosave_queue_data_component::get_item_description(long) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, unsigned long, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_film_seconds::*)(long, unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_film_seconds(long, unsigned long *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, char, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_game_engine_icon_index::*)(long, char *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_game_engine_icon_index(long, char *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_campaign_id::*)(long, long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_campaign_id(long, long *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_campaign_metagame_scoring::*)(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_campaign_metagame_scoring(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, short, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_campaign_insertion_point::*)(long, short *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_campaign_insertion_point(long, short *) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_difficulty_level::*)(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_autosave_queue_data_component::get_item_difficulty_level(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *) const;
// ??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_item_transfer_type(long) const;
// public: struct c_autosave_queue_data_component::s_item_transfer_info const & c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::operator[](unsigned int) const;
// public: struct c_autosave_queue_data_component::s_item_transfer_info const * c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::data(void) const;
// public: unsigned int c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::size(void) const;
// ??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_item_transfer_status(long) const;
// bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void), long & (c_autosave_queue_data_component::get_item_transfer_progress::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_autosave_queue_data_component::get_item_transfer_progress(long) const;
// public: bool c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::empty(void) const;
// public: bool c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::full(void) const;
// private: struct c_autosave_queue_data_component::s_item_transfer_info * c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::get(unsigned int);
// public: c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: struct c_autosave_queue_data_component::s_item_transfer_info * c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::data(void);
// public: void c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::pop_back(void);
// bool cui_property_value_get<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> *);
// public: bool c_enum_no_init<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>::in_range(void) const;
// bool cui_property_value_get(struct s_cui_property_value const *, char *);

//public: c_autosave_queue_data_component::c_autosave_queue_data_component(void)
//{
//    mangled_ppc("??0c_autosave_queue_data_component@@QAA@XZ");
//};

//merged_84A4ED68
//{
//    mangled_ppc("merged_84A4ED68");
//};

//public: virtual c_autosave_queue_data_component::~c_autosave_queue_data_component(void)
//{
//    mangled_ppc("??1c_autosave_queue_data_component@@UAA@XZ");
//};

//protected: virtual void c_autosave_queue_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_autosave_queue_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: c_autosave_queue_data_component::s_item_transfer_info::s_item_transfer_info(void)
//{
//    mangled_ppc("??0s_item_transfer_info@c_autosave_queue_data_component@@QAA@XZ");
//};

//protected: virtual void c_autosave_queue_data_component::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_autosave_queue_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: bool c_autosave_queue_data_component::filter_excludes(struct s_autosave_queue_item const *) const
//{
//    mangled_ppc("?filter_excludes@c_autosave_queue_data_component@@ABA_NPBUs_autosave_queue_item@@@Z");
//};

//private: void c_autosave_queue_data_component::filter_items(void)
//{
//    mangled_ppc("?filter_items@c_autosave_queue_data_component@@AAAXXZ");
//};

//public: c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_autosave_queue_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_autosave_queue_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::~c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QAA@XZ");
//};

//public: void c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::push_back(struct c_autosave_queue_data_component::s_item_transfer_info const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QAAXABUs_item_transfer_info@c_autosave_queue_data_component@@@Z");
//};

//public: void c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QAAXXZ");
//};

//class c_cui_component * cui_component_create<class c_autosave_queue_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_autosave_queue_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_autosave_queue_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_autosave_queue_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_index@c_autosave_queue_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_filter_content_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_filter_content_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_filter_content_item_category(void) const
//{
//    mangled_ppc("?get_filter_content_item_category@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_autosave_queue_data_component::set_filter_content_item_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?set_filter_content_item_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_autosave_queue_data_component::set_filter_content_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_filter_content_item_category@c_autosave_queue_data_component@@QAAXV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_filter_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_filter_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_filter_game_mode(void) const
//{
//    mangled_ppc("?get_filter_game_mode@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(enum e_game_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_game_mode@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>, void & (c_autosave_queue_data_component::set_filter_game_mode::*)(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?set_filter_game_mode@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_autosave_queue_data_component::set_filter_game_mode(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_filter_game_mode@c_autosave_queue_data_component@@QAAXV?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_filter_game_engine_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_filter_game_engine_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_autosave_queue_data_component::get_filter_game_engine_type(void) const
//{
//    mangled_ppc("?get_filter_game_engine_type@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>, void & (c_autosave_queue_data_component::set_filter_game_engine_type::*)(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?set_filter_game_engine_type@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_autosave_queue_data_component::set_filter_game_engine_type(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>)
//{
//    mangled_ppc("?set_filter_game_engine_type@c_autosave_queue_data_component@@QAAXV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_filter_map_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@J$1?get_filter_map_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_autosave_queue_data_component::get_filter_map_id(void) const
//{
//    mangled_ppc("?get_filter_map_id@c_autosave_queue_data_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, long, void & (c_autosave_queue_data_component::set_filter_map_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_autosave_queue_data_component@@J$1?set_filter_map_id@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_autosave_queue_data_component::set_filter_map_id(long)
//{
//    mangled_ppc("?set_filter_map_id@c_autosave_queue_data_component@@QAAXJ@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@D$1?get_filter_megalo_category_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@D$1?get_filter_megalo_category_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char c_autosave_queue_data_component::get_filter_megalo_category_index(void) const
//{
//    mangled_ppc("?get_filter_megalo_category_index@c_autosave_queue_data_component@@QBADXZ");
//};

//bool cui_set_scalar_property_by_value<class c_autosave_queue_data_component, char, void & (c_autosave_queue_data_component::set_filter_megalo_category_index::*)(char)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_autosave_queue_data_component@@D$1?set_filter_megalo_category_index@1@QAAXD@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_autosave_queue_data_component::set_filter_megalo_category_index(char)
//{
//    mangled_ppc("?set_filter_megalo_category_index@c_autosave_queue_data_component@@QAAXD@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_autosave_queue_data_component, bool, bool & (c_autosave_queue_data_component::is_busy::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@_N$1?is_busy@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_autosave_queue_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_autosave_queue_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_autosave_queue_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_autosave_queue_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_autosave_queue_data_component, long & (c_autosave_queue_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_autosave_queue_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_item_category(long) const
//{
//    mangled_ppc("?get_item_category@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@J@Z");
//};

//enum e_content_item_category content_item_metadata_get_category(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?content_item_metadata_get_category@@YA?AW4e_content_item_category@@PBUs_content_item_metadata@@@Z");
//};

//public: struct s_autosave_queue_item const * c_autosave_queue_data_component::get_item(long) const
//{
//    mangled_ppc("?get_item@c_autosave_queue_data_component@@QBAPBUs_autosave_queue_item@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned long, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned long & (c_autosave_queue_data_component::get_item_file_size::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@K$1?get_item_count@1@QBAJXZ$1?get_item_file_size@1@QBAKJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned long c_autosave_queue_data_component::get_item_file_size(long) const
//{
//    mangled_ppc("?get_item_file_size@c_autosave_queue_data_component@@QBAKJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_autosave_queue_data_component::get_item_game_engine_type(long) const
//{
//    mangled_ppc("?get_item_game_engine_type@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void), long & (c_autosave_queue_data_component::get_item_map_id::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_map_id@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_autosave_queue_data_component::get_item_map_id(long) const
//{
//    mangled_ppc("?get_item_map_id@c_autosave_queue_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_creation_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_creation_timestamp@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_autosave_queue_data_component::get_item_creation_timestamp(long) const
//{
//    mangled_ppc("?get_item_creation_timestamp@c_autosave_queue_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_creation_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_autosave_queue_data_component::get_item_creation_author_xuid(long) const
//{
//    mangled_ppc("?get_item_creation_author_xuid@c_autosave_queue_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, char const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), char const *& (c_autosave_queue_data_component::get_item_creation_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@PBD$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_autosave_queue_data_component::get_item_creation_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_creation_author_gamertag@c_autosave_queue_data_component@@QBAPBDJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, bool, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_creation_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_creation_author_signed_into_live@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_creation_author_signed_into_live(long) const
//{
//    mangled_ppc("?get_item_creation_author_signed_into_live@c_autosave_queue_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_modification_timestamp::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_modification_timestamp@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_autosave_queue_data_component::get_item_modification_timestamp(long) const
//{
//    mangled_ppc("?get_item_modification_timestamp@c_autosave_queue_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, unsigned __int64, long & (c_autosave_queue_data_component::get_item_count::*)(void), unsigned __int64& (c_autosave_queue_data_component::get_item_modification_author_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_autosave_queue_data_component::get_item_modification_author_xuid(long) const
//{
//    mangled_ppc("?get_item_modification_author_xuid@c_autosave_queue_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, char const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), char const *& (c_autosave_queue_data_component::get_item_modification_author_gamertag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@PBD$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_gamertag@1@QBAPBDJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_autosave_queue_data_component::get_item_modification_author_gamertag(long) const
//{
//    mangled_ppc("?get_item_modification_author_gamertag@c_autosave_queue_data_component@@QBAPBDJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, bool, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_modification_author_signed_into_live::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_modification_author_signed_into_live@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_modification_author_signed_into_live(long) const
//{
//    mangled_ppc("?get_item_modification_author_signed_into_live@c_autosave_queue_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, wchar_t const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), wchar_t const *& (c_autosave_queue_data_component::get_item_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_autosave_queue_data_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_autosave_queue_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, wchar_t const *, long & (c_autosave_queue_data_component::get_item_count::*)(void), wchar_t const *& (c_autosave_queue_data_component::get_item_description::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_autosave_queue_data_component::get_item_description(long) const
//{
//    mangled_ppc("?get_item_description@c_autosave_queue_data_component@@QBAPB_WJ@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, unsigned long, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_film_seconds::*)(long, unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_autosave_queue_data_component@@K$1?get_item_count@1@QBAJXZ$1?get_item_film_seconds@1@QBA_NJPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_film_seconds(long, unsigned long *) const
//{
//    mangled_ppc("?get_item_film_seconds@c_autosave_queue_data_component@@QBA_NJPAK@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, char, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_game_engine_icon_index::*)(long, char *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_autosave_queue_data_component@@D$1?get_item_count@1@QBAJXZ$1?get_item_game_engine_icon_index@1@QBA_NJPAD@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_game_engine_icon_index(long, char *) const
//{
//    mangled_ppc("?get_item_game_engine_icon_index@c_autosave_queue_data_component@@QBA_NJPAD@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_campaign_id::*)(long, long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_autosave_queue_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_campaign_id@1@QBA_NJPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_campaign_id(long, long *) const
//{
//    mangled_ppc("?get_item_campaign_id@c_autosave_queue_data_component@@QBA_NJPAJ@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_campaign_metagame_scoring::*)(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_autosave_queue_data_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_campaign_metagame_scoring@1@QBA_NJPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_campaign_metagame_scoring(long, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_item_campaign_metagame_scoring@c_autosave_queue_data_component@@QBA_NJPAV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, short, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_campaign_insertion_point::*)(long, short *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_autosave_queue_data_component@@F$1?get_item_count@1@QBAJXZ$1?get_item_campaign_insertion_point@1@QBA_NJPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_campaign_insertion_point(long, short *) const
//{
//    mangled_ppc("?get_item_campaign_insertion_point@c_autosave_queue_data_component@@QBA_NJPAF@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_autosave_queue_data_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, long & (c_autosave_queue_data_component::get_item_count::*)(void), bool & (c_autosave_queue_data_component::get_item_difficulty_level::*)(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_autosave_queue_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_difficulty_level@1@QBA_NJPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_autosave_queue_data_component::get_item_difficulty_level(long, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_item_difficulty_level@c_autosave_queue_data_component@@QBA_NJPAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_item_transfer_type(long) const
//{
//    mangled_ppc("?get_item_transfer_type@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: struct c_autosave_queue_data_component::s_item_transfer_info const & c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QBAABUs_item_transfer_info@c_autosave_queue_data_component@@I@Z");
//};

//public: struct c_autosave_queue_data_component::s_item_transfer_info const * c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QBAPBUs_item_transfer_info@c_autosave_queue_data_component@@XZ");
//};

//public: unsigned int c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QBAIXZ");
//};

//??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@V?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_transfer_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> c_autosave_queue_data_component::get_item_transfer_status(long) const
//{
//    mangled_ppc("?get_item_transfer_status@c_autosave_queue_data_component@@QBA?AV?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_autosave_queue_data_component, long, long & (c_autosave_queue_data_component::get_item_count::*)(void), long & (c_autosave_queue_data_component::get_item_transfer_progress::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_autosave_queue_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_transfer_progress@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_autosave_queue_data_component::get_item_transfer_progress(long) const
//{
//    mangled_ppc("?get_item_transfer_progress@c_autosave_queue_data_component@@QBAJJ@Z");
//};

//public: bool c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QBA_NXZ");
//};

//public: bool c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QBA_NXZ");
//};

//private: struct c_autosave_queue_data_component::s_item_transfer_info * c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@AAAPAUs_item_transfer_info@c_autosave_queue_data_component@@I@Z");
//};

//public: c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct c_autosave_queue_data_component::s_item_transfer_info * c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QAAPAUs_item_transfer_info@c_autosave_queue_data_component@@XZ");
//};

//public: void c_cui_static_vector<struct c_autosave_queue_data_component::s_item_transfer_info, 25>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_item_transfer_info@c_autosave_queue_data_component@@$0BJ@@@QAAXXZ");
//};

//bool cui_property_value_get<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@QBA_NXZ");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, char *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAD@Z");
//};

