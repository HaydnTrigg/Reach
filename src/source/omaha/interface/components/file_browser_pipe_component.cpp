/* ---------- headers */

#include "omaha\interface\components\file_browser_pipe_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned int const c_online_file_catalog_summary_listing::k_max_entry_count; // "?k_max_entry_count@c_online_file_catalog_summary_listing@@2IB"
// private: static unsigned int const c_online_file_catalog_summary_listing::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_catalog_summary_listing@@0IB"
// public: static unsigned int const c_online_file_catalog_listing::k_max_entry_count; // "?k_max_entry_count@c_online_file_catalog_listing@@2IB"
// private: static unsigned int const c_online_file_catalog_listing::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_catalog_listing@@0IB"
// public: static unsigned int const c_online_file_details::k_max_screenshot_size; // "?k_max_screenshot_size@c_online_file_details@@2IB"
// public: static unsigned int const c_online_file_details::k_max_tag_count; // "?k_max_tag_count@c_online_file_details@@2IB"
// private: static unsigned int const c_online_file_details::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_details@@0IB"
// public: static unsigned long const c_verify_strings_task<7, 24>::k_max_string_count; // "?k_max_string_count@?$c_verify_strings_task@$06$0BI@@@2KB"
// public: static unsigned long const c_verify_strings_task<7, 24>::k_max_string_length; // "?k_max_string_length@?$c_verify_strings_task@$06$0BI@@@2KB"
// public: static long const s_static_array<class c_static_wchar_string<24>, 7>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_wchar_string@$0BI@@@$06@@2JB"
// public: static int const c_static_wchar_string<24>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$0BI@@@2HB"
// public: static long const s_static_array<struct _STRING_DATA, 7>::k_element_count; // "?k_element_count@?$s_static_array@U_STRING_DATA@@$06@@2JB"
// private: static long const c_file_browser_details_cache::k_request_start_time; // "?k_request_start_time@c_file_browser_details_cache@@0JB"
// private: static long const c_file_browser_details_cache::k_max_cached_tag_count; // "?k_max_cached_tag_count@c_file_browser_details_cache@@0JB"
// private: static long const c_file_browser_details_cache::k_max_cached_screenshot_count; // "?k_max_cached_screenshot_count@c_file_browser_details_cache@@0JB"
// private: static long const c_file_browser_details_cache::k_max_queued_requests_count; // "?k_max_queued_requests_count@c_file_browser_details_cache@@0JB"
// public: static unsigned int const c_online_files_predefined_search_queries::k_max_count; // "?k_max_count@c_online_files_predefined_search_queries@@2IB"
// private: static unsigned int const c_online_files_predefined_search_queries::k_response_buffer_size; // "?k_response_buffer_size@c_online_files_predefined_search_queries@@0IB"
// public: static unsigned int const c_online_file_search_listing::k_max_entry_count; // "?k_max_entry_count@c_online_file_search_listing@@2IB"
// private: static unsigned int const c_online_file_search_listing::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_search_listing@@0IB"
// private: static unsigned int const c_online_file_predefined_search_summary::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_predefined_search_summary@@0IB"
// public: static unsigned int const c_online_file_predefined_search_listing::k_max_entry_count; // "?k_max_entry_count@c_online_file_predefined_search_listing@@2IB"
// private: static unsigned int const c_online_file_predefined_search_listing::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_predefined_search_listing@@0IB"
// private: static unsigned int const c_online_file_recommendation_submit::k_max_xuid_count; // "?k_max_xuid_count@c_online_file_recommendation_submit@@0IB"
// private: static unsigned int const c_online_file_recommendation_submit::k_post_buffer_size; // "?k_post_buffer_size@c_online_file_recommendation_submit@@0IB"
// public: static unsigned int const c_online_file_recommendations_fetch::k_max_entry_count; // "?k_max_entry_count@c_online_file_recommendations_fetch@@2IB"
// private: static unsigned int const c_online_file_recommendations_fetch::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_recommendations_fetch@@0IB"
// private: static unsigned int const c_online_file_recommendations_fetch::k_max_xuid_count; // "?k_max_xuid_count@c_online_file_recommendations_fetch@@0IB"
// private: static unsigned int const c_online_file_recommendations_fetch::k_post_buffer_size; // "?k_post_buffer_size@c_online_file_recommendations_fetch@@0IB"
// public: static unsigned int const c_online_file_megalo_categories::k_max_count; // "?k_max_count@c_online_file_megalo_categories@@2IB"
// private: static unsigned int const c_online_file_megalo_categories::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_megalo_categories@@0IB"
// private: static unsigned int const c_online_file_search_summary::k_response_buffer_size; // "?k_response_buffer_size@c_online_file_search_summary@@0IB"
// public: static int const c_enum_no_init<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_file_browser_pipe::e_custom_search_defaults const c_enum_no_init<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@2W4e_custom_search_defaults@c_file_browser_pipe@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_file_browser_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_file_browser_pipe_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_file_browser_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_file_browser_pipe_component@@@@0Vc_cui_object_property_table@@A"

// public: c_file_browser_pipe::c_file_browser_pipe(void);
// public: c_online_file_search_query::c_online_file_search_query(void);
// merged_84A8C010;
// public: virtual c_file_browser_pipe::~c_file_browser_pipe(void);
// public: c_file_browser_remote_search_data::~c_file_browser_remote_search_data(void);
// public: c_file_browser_predefined_search_data::~c_file_browser_predefined_search_data(void);
// public: c_file_browser_recommendation_data::~c_file_browser_recommendation_data(void);
// public: c_file_browser_remote_search_data::s_request_data::~s_request_data(void);
// public: c_file_browser_predefined_search_data::s_request_data::~s_request_data(void);
// public: c_file_browser_recommendation_data::s_request_data::~s_request_data(void);
// public: c_file_browser_remote_search_data::s_request_data::s_search_summary_listing_downloader::~s_search_summary_listing_downloader(void);
// public: c_file_browser_remote_search_data::s_request_data::s_search_listing_downloader::~s_search_listing_downloader(void);
// public: c_file_browser_remote_search_data::s_request_data::s_megalo_categories_downloader::~s_megalo_categories_downloader(void);
// public: c_file_browser_predefined_search_data::s_request_data::s_predefined_search_summary_listing_downloader::~s_predefined_search_summary_listing_downloader(void);
// public: c_file_browser_predefined_search_data::s_request_data::s_predefined_search_listing_downloader::~s_predefined_search_listing_downloader(void);
// public: c_file_browser_predefined_search_data::s_request_data::s_predefined_search_queries_downloader::~s_predefined_search_queries_downloader(void);
// public: c_file_browser_recommendation_data::s_request_data::s_recommendation_listing_downloader::~s_recommendation_listing_downloader(void);
// public: c_file_browser_recommendation_data::s_request_data::s_recommendation_uploader::~s_recommendation_uploader(void);
// public: c_online_file_search_summary::~c_online_file_search_summary(void);
// public: c_online_file_summary_listing::~c_online_file_summary_listing(void);
// public: c_online_file_search_listing::~c_online_file_search_listing(void);
// public: c_online_file_listing::~c_online_file_listing(void);
// public: c_online_file_megalo_categories::~c_online_file_megalo_categories(void);
// public: c_online_file_predefined_search_summary::~c_online_file_predefined_search_summary(void);
// public: c_online_file_predefined_search_listing::~c_online_file_predefined_search_listing(void);
// public: c_online_files_predefined_search_queries::~c_online_files_predefined_search_queries(void);
// public: c_online_file_recommendations_fetch::~c_online_file_recommendations_fetch(void);
// public: c_online_file_recommendation_submit::~c_online_file_recommendation_submit(void);
// public: virtual c_http_stored_buffer_downloader<2189>::~c_http_stored_buffer_downloader<2189>(void);
// public: virtual c_http_stored_buffer_downloader<5961>::~c_http_stored_buffer_downloader<5961>(void);
// public: void c_file_browser_pipe::update(class c_cui_update_context *);
// public: void c_file_browser_pipe::set_custom_search_default(class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// protected: void c_file_browser_pipe::set_custom_search_default_values(enum c_file_browser_pipe::e_custom_search_defaults);
// public: void c_file_browser_pipe::set_custom_search_default_values(enum c_file_browser_pipe::e_custom_search_defaults, struct s_online_file_search_query *) const;
// public: c_file_browser_pipe_component::c_file_browser_pipe_component(void);
// merged_84A8CB40;
// public: virtual c_file_browser_pipe_component::~c_file_browser_pipe_component(void);
// private: virtual void c_file_browser_pipe_component::do_update(class c_cui_update_context *);
// public: class c_file_browser_pipe * c_file_browser_pipe_component::get_pipe(void) const;
// private: virtual class c_cui_screen_pipe * c_file_browser_pipe_component::do_create_pipe(void);
// public: void c_file_browser_pipe::set_category_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>);
// public: void c_file_browser_pipe::set_lock_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>);
// public: void c_file_browser_pipe::set_filter_content_item_category(enum e_content_item_category);
// public: void c_file_browser_pipe::set_filter_map_id(enum e_map_id);
// public: void c_file_browser_pipe::set_filter_game_engine_type(enum e_game_engine_type);
// public: void c_file_browser_pipe::set_filter_megalo_category_index(char);
// public: c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum c_file_browser_pipe::e_custom_search_defaults);
// public: enum c_file_browser_pipe::e_custom_search_defaults c_enum_no_init<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum c_file_browser_pipe::e_custom_search_defaults(void) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_file_browser_pipe_component>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_category_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_category_category(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_category_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_category_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_lock_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_lock_item_category(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_lock_item_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_lock_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@$1?get_custom_search_default@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_custom_search_default(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_custom_search_default::*)(class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_custom_search_default(class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_filter_content_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_filter_content_item_category(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_filter_content_item_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_filter_content_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_file_browser_pipe_component, long, long & (c_file_browser_pipe_component::get_filter_map_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_file_browser_pipe_component::get_filter_map_id(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, long, void & (c_file_browser_pipe_component::set_filter_map_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_filter_map_id(long);
// ??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_filter_game_engine_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_file_browser_pipe_component::get_filter_game_engine_type(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>, void & (c_file_browser_pipe_component::set_filter_game_engine_type::*)(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_filter_game_engine_type(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@D$1?get_filter_megalo_category_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: char c_file_browser_pipe_component::get_filter_megalo_category_index(void) const;
// bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, char, void & (c_file_browser_pipe_component::set_filter_megalo_category_index::*)(char)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_browser_pipe_component::set_filter_megalo_category_index(char);
// public: c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// void cui_property_value_set<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// class c_cui_component * cui_component_create<class c_file_browser_pipe_component>(void);
// class c_cui_component * cui_component_clone<class c_file_browser_pipe_component>(class c_cui_component const *);
// public: c_file_browser_pipe_component::c_file_browser_pipe_component(class c_file_browser_pipe_component const &);
// void g_custom_search_defaults_enum_table::`dynamic atexit destructor'(void);

//public: c_file_browser_pipe::c_file_browser_pipe(void)
//{
//    mangled_ppc("??0c_file_browser_pipe@@QAA@XZ");
//};

//public: c_online_file_search_query::c_online_file_search_query(void)
//{
//    mangled_ppc("??0c_online_file_search_query@@QAA@XZ");
//};

//merged_84A8C010
//{
//    mangled_ppc("merged_84A8C010");
//};

//public: virtual c_file_browser_pipe::~c_file_browser_pipe(void)
//{
//    mangled_ppc("??1c_file_browser_pipe@@UAA@XZ");
//};

//public: c_file_browser_remote_search_data::~c_file_browser_remote_search_data(void)
//{
//    mangled_ppc("??1c_file_browser_remote_search_data@@QAA@XZ");
//};

//public: c_file_browser_predefined_search_data::~c_file_browser_predefined_search_data(void)
//{
//    mangled_ppc("??1c_file_browser_predefined_search_data@@QAA@XZ");
//};

//public: c_file_browser_recommendation_data::~c_file_browser_recommendation_data(void)
//{
//    mangled_ppc("??1c_file_browser_recommendation_data@@QAA@XZ");
//};

//public: c_file_browser_remote_search_data::s_request_data::~s_request_data(void)
//{
//    mangled_ppc("??1s_request_data@c_file_browser_remote_search_data@@QAA@XZ");
//};

//public: c_file_browser_predefined_search_data::s_request_data::~s_request_data(void)
//{
//    mangled_ppc("??1s_request_data@c_file_browser_predefined_search_data@@QAA@XZ");
//};

//public: c_file_browser_recommendation_data::s_request_data::~s_request_data(void)
//{
//    mangled_ppc("??1s_request_data@c_file_browser_recommendation_data@@QAA@XZ");
//};

//public: c_file_browser_remote_search_data::s_request_data::s_search_summary_listing_downloader::~s_search_summary_listing_downloader(void)
//{
//    mangled_ppc("??1s_search_summary_listing_downloader@s_request_data@c_file_browser_remote_search_data@@QAA@XZ");
//};

//public: c_file_browser_remote_search_data::s_request_data::s_search_listing_downloader::~s_search_listing_downloader(void)
//{
//    mangled_ppc("??1s_search_listing_downloader@s_request_data@c_file_browser_remote_search_data@@QAA@XZ");
//};

//public: c_file_browser_remote_search_data::s_request_data::s_megalo_categories_downloader::~s_megalo_categories_downloader(void)
//{
//    mangled_ppc("??1s_megalo_categories_downloader@s_request_data@c_file_browser_remote_search_data@@QAA@XZ");
//};

//public: c_file_browser_predefined_search_data::s_request_data::s_predefined_search_summary_listing_downloader::~s_predefined_search_summary_listing_downloader(void)
//{
//    mangled_ppc("??1s_predefined_search_summary_listing_downloader@s_request_data@c_file_browser_predefined_search_data@@QAA@XZ");
//};

//public: c_file_browser_predefined_search_data::s_request_data::s_predefined_search_listing_downloader::~s_predefined_search_listing_downloader(void)
//{
//    mangled_ppc("??1s_predefined_search_listing_downloader@s_request_data@c_file_browser_predefined_search_data@@QAA@XZ");
//};

//public: c_file_browser_predefined_search_data::s_request_data::s_predefined_search_queries_downloader::~s_predefined_search_queries_downloader(void)
//{
//    mangled_ppc("??1s_predefined_search_queries_downloader@s_request_data@c_file_browser_predefined_search_data@@QAA@XZ");
//};

//public: c_file_browser_recommendation_data::s_request_data::s_recommendation_listing_downloader::~s_recommendation_listing_downloader(void)
//{
//    mangled_ppc("??1s_recommendation_listing_downloader@s_request_data@c_file_browser_recommendation_data@@QAA@XZ");
//};

//public: c_file_browser_recommendation_data::s_request_data::s_recommendation_uploader::~s_recommendation_uploader(void)
//{
//    mangled_ppc("??1s_recommendation_uploader@s_request_data@c_file_browser_recommendation_data@@QAA@XZ");
//};

//public: c_online_file_search_summary::~c_online_file_search_summary(void)
//{
//    mangled_ppc("??1c_online_file_search_summary@@QAA@XZ");
//};

//public: c_online_file_summary_listing::~c_online_file_summary_listing(void)
//{
//    mangled_ppc("??1c_online_file_summary_listing@@QAA@XZ");
//};

//public: c_online_file_search_listing::~c_online_file_search_listing(void)
//{
//    mangled_ppc("??1c_online_file_search_listing@@QAA@XZ");
//};

//public: c_online_file_listing::~c_online_file_listing(void)
//{
//    mangled_ppc("??1c_online_file_listing@@QAA@XZ");
//};

//public: c_online_file_megalo_categories::~c_online_file_megalo_categories(void)
//{
//    mangled_ppc("??1c_online_file_megalo_categories@@QAA@XZ");
//};

//public: c_online_file_predefined_search_summary::~c_online_file_predefined_search_summary(void)
//{
//    mangled_ppc("??1c_online_file_predefined_search_summary@@QAA@XZ");
//};

//public: c_online_file_predefined_search_listing::~c_online_file_predefined_search_listing(void)
//{
//    mangled_ppc("??1c_online_file_predefined_search_listing@@QAA@XZ");
//};

//public: c_online_files_predefined_search_queries::~c_online_files_predefined_search_queries(void)
//{
//    mangled_ppc("??1c_online_files_predefined_search_queries@@QAA@XZ");
//};

//public: c_online_file_recommendations_fetch::~c_online_file_recommendations_fetch(void)
//{
//    mangled_ppc("??1c_online_file_recommendations_fetch@@QAA@XZ");
//};

//public: c_online_file_recommendation_submit::~c_online_file_recommendation_submit(void)
//{
//    mangled_ppc("??1c_online_file_recommendation_submit@@QAA@XZ");
//};

//public: virtual c_http_stored_buffer_downloader<2189>::~c_http_stored_buffer_downloader<2189>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0IIN@@@UAA@XZ");
//};

//public: virtual c_http_stored_buffer_downloader<5961>::~c_http_stored_buffer_downloader<5961>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0BHEJ@@@UAA@XZ");
//};

//public: void c_file_browser_pipe::update(class c_cui_update_context *)
//{
//    mangled_ppc("?update@c_file_browser_pipe@@QAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_file_browser_pipe::set_custom_search_default(class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_search_default@c_file_browser_pipe@@QAAXV?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//protected: void c_file_browser_pipe::set_custom_search_default_values(enum c_file_browser_pipe::e_custom_search_defaults)
//{
//    mangled_ppc("?set_custom_search_default_values@c_file_browser_pipe@@IAAXW4e_custom_search_defaults@1@@Z");
//};

//public: void c_file_browser_pipe::set_custom_search_default_values(enum c_file_browser_pipe::e_custom_search_defaults, struct s_online_file_search_query *) const
//{
//    mangled_ppc("?set_custom_search_default_values@c_file_browser_pipe@@QBAXW4e_custom_search_defaults@1@PAUs_online_file_search_query@@@Z");
//};

//public: c_file_browser_pipe_component::c_file_browser_pipe_component(void)
//{
//    mangled_ppc("??0c_file_browser_pipe_component@@QAA@XZ");
//};

//merged_84A8CB40
//{
//    mangled_ppc("merged_84A8CB40");
//};

//public: virtual c_file_browser_pipe_component::~c_file_browser_pipe_component(void)
//{
//    mangled_ppc("??1c_file_browser_pipe_component@@UAA@XZ");
//};

//private: virtual void c_file_browser_pipe_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_file_browser_pipe_component@@EAAXPAVc_cui_update_context@@@Z");
//};

//public: class c_file_browser_pipe * c_file_browser_pipe_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_file_browser_pipe_component@@QBAPAVc_file_browser_pipe@@XZ");
//};

//private: virtual class c_cui_screen_pipe * c_file_browser_pipe_component::do_create_pipe(void)
//{
//    mangled_ppc("?do_create_pipe@c_file_browser_pipe_component@@EAAPAVc_cui_screen_pipe@@XZ");
//};

//public: void c_file_browser_pipe::set_category_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_category_category@c_file_browser_pipe@@QAAXV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_file_browser_pipe::set_lock_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_lock_item_category@c_file_browser_pipe@@QAAXV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_file_browser_pipe::set_filter_content_item_category(enum e_content_item_category)
//{
//    mangled_ppc("?set_filter_content_item_category@c_file_browser_pipe@@QAAXW4e_content_item_category@@@Z");
//};

//public: void c_file_browser_pipe::set_filter_map_id(enum e_map_id)
//{
//    mangled_ppc("?set_filter_map_id@c_file_browser_pipe@@QAAXW4e_map_id@@@Z");
//};

//public: void c_file_browser_pipe::set_filter_game_engine_type(enum e_game_engine_type)
//{
//    mangled_ppc("?set_filter_game_engine_type@c_file_browser_pipe@@QAAXW4e_game_engine_type@@@Z");
//};

//public: void c_file_browser_pipe::set_filter_megalo_category_index(char)
//{
//    mangled_ppc("?set_filter_megalo_category_index@c_file_browser_pipe@@QAAXD@Z");
//};

//public: c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum c_file_browser_pipe::e_custom_search_defaults)
//{
//    mangled_ppc("??0?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_custom_search_defaults@c_file_browser_pipe@@@Z");
//};

//public: enum c_file_browser_pipe::e_custom_search_defaults c_enum_no_init<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum c_file_browser_pipe::e_custom_search_defaults(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_custom_search_defaults@c_file_browser_pipe@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_file_browser_pipe_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_file_browser_pipe_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_category_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_category_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_category_category(void) const
//{
//    mangled_ppc("?get_category_category@c_file_browser_pipe_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_category_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?set_category_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_category_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_category_category@c_file_browser_pipe_component@@QAAXV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_lock_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_lock_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_lock_item_category(void) const
//{
//    mangled_ppc("?get_lock_item_category@c_file_browser_pipe_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_lock_item_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?set_lock_item_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_lock_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_lock_item_category@c_file_browser_pipe_component@@QAAXV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@$1?get_custom_search_default@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@$1?get_custom_search_default@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_custom_search_default(void) const
//{
//    mangled_ppc("?get_custom_search_default@c_file_browser_pipe_component@@QBA?AV?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_custom_search_default::*)(class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@$1?set_custom_search_default@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_custom_search_default(class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_search_default@c_file_browser_pipe_component@@QAAXV?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_filter_content_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_filter_content_item_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> c_file_browser_pipe_component::get_filter_content_item_category(void) const
//{
//    mangled_ppc("?get_filter_content_item_category@c_file_browser_pipe_component@@QBA?AV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, void & (c_file_browser_pipe_component::set_filter_content_item_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?set_filter_content_item_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_filter_content_item_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_filter_content_item_category@c_file_browser_pipe_component@@QAAXV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_browser_pipe_component, long, long & (c_file_browser_pipe_component::get_filter_map_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@J$1?get_filter_map_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_file_browser_pipe_component::get_filter_map_id(void) const
//{
//    mangled_ppc("?get_filter_map_id@c_file_browser_pipe_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, long, void & (c_file_browser_pipe_component::set_filter_map_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@J$1?set_filter_map_id@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_filter_map_id(long)
//{
//    mangled_ppc("?set_filter_map_id@c_file_browser_pipe_component@@QAAXJ@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_filter_game_engine_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_filter_game_engine_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_file_browser_pipe_component::get_filter_game_engine_type(void) const
//{
//    mangled_ppc("?get_filter_game_engine_type@c_file_browser_pipe_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>, void & (c_file_browser_pipe_component::set_filter_game_engine_type::*)(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?set_filter_game_engine_type@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_filter_game_engine_type(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>)
//{
//    mangled_ppc("?set_filter_game_engine_type@c_file_browser_pipe_component@@QAAXV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@D$1?get_filter_megalo_category_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_browser_pipe_component@@D$1?get_filter_megalo_category_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char c_file_browser_pipe_component::get_filter_megalo_category_index(void) const
//{
//    mangled_ppc("?get_filter_megalo_category_index@c_file_browser_pipe_component@@QBADXZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_browser_pipe_component, char, void & (c_file_browser_pipe_component::set_filter_megalo_category_index::*)(char)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_browser_pipe_component@@D$1?set_filter_megalo_category_index@1@QAAXD@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_browser_pipe_component::set_filter_megalo_category_index(char)
//{
//    mangled_ppc("?set_filter_megalo_category_index@c_file_browser_pipe_component@@QAAXD@Z");
//};

//public: c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void cui_property_value_set<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum c_file_browser_pipe::e_custom_search_defaults, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_custom_search_defaults@c_file_browser_pipe@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//class c_cui_component * cui_component_create<class c_file_browser_pipe_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_file_browser_pipe_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_file_browser_pipe_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_file_browser_pipe_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_file_browser_pipe_component::c_file_browser_pipe_component(class c_file_browser_pipe_component const &)
//{
//    mangled_ppc("??0c_file_browser_pipe_component@@QAA@ABV0@@Z");
//};

//void g_custom_search_defaults_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_custom_search_defaults_enum_table@@YAXXZ");
//};

