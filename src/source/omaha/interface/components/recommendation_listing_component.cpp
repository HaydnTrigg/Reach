/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_recommendation_listing_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_recommendation_listing_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_recommendation_listing_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_recommendation_listing_component@@@@0Vc_cui_object_property_table@@A"

// public: c_recommendation_listing_component::c_recommendation_listing_component(void);
// public: virtual unsigned __int64 c_recommendation_listing_component::get_owner_id(void) const;
// public: virtual unsigned __int64 c_recommendation_listing_component::get_share_id(void) const;
// public: virtual bool c_recommendation_listing_component::file_share_is_owned_by_current_user(void) const;
// public: virtual long c_recommendation_listing_component::get_page_item_count(void) const;
// public: virtual long c_recommendation_listing_component::get_page_count(void) const;
// merged_84B5A7B8;
// public: virtual c_recommendation_listing_component::~c_recommendation_listing_component(void);
// public: c_recommendation_listing_component::c_recommendation_listing_component(class c_recommendation_listing_component const &);
// protected: virtual void c_recommendation_listing_component::do_update(class c_cui_update_context *);
// protected: void c_recommendation_listing_component::initialize_internal(void);
// protected: void c_recommendation_listing_component::update_internal(void);
// protected: void c_recommendation_listing_component::update_user(void);
// protected: void c_recommendation_listing_component::update_enumeration(void);
// protected: void c_recommendation_listing_component::update_transfers(void);
// public: virtual class c_enum<enum c_file_manager_listing_component::e_enumeration_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_enumeration_state(void) const;
// public: virtual long c_recommendation_listing_component::get_item_count(void) const;
// public: virtual bool c_recommendation_listing_component::get_item_is_new(long) const;
// public: virtual struct s_online_file_metadata const * c_recommendation_listing_component::get_item_metadata(long) const;
// public: virtual class c_enum<enum c_file_manager_listing_component::e_transfer_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_item_slot_type(long) const;
// public: virtual enum e_content_item_type c_recommendation_listing_component::get_item_type(long) const;
// public: virtual enum e_content_item_category c_recommendation_listing_component::get_item_file_category(long) const;
// public: virtual wchar_t const * c_recommendation_listing_component::get_item_name(long) const;
// public: virtual wchar_t const * c_recommendation_listing_component::get_item_description(long) const;
// public: virtual char const * c_recommendation_listing_component::get_item_authored_by(long) const;
// public: virtual char const * c_recommendation_listing_component::get_item_modified_by(long) const;
// public: virtual char const * c_recommendation_listing_component::get_item_recommended_by(long) const;
// public: virtual bool c_recommendation_listing_component::is_item_tag_busy(long) const;
// public: virtual long c_recommendation_listing_component::get_item_tag_count(long) const;
// public: virtual struct s_online_file_tag const * c_recommendation_listing_component::get_item_tag(long, long) const;
// public: virtual class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_item_transfer_type(long) const;
// public: virtual class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_item_transfer_status(long) const;
// public: virtual float c_recommendation_listing_component::get_item_transfer_progress(long) const;
// public: virtual long c_recommendation_listing_component::get_item_bungie_rating(long) const;
// public: virtual long c_recommendation_listing_component::get_item_downloads(long) const;
// public: virtual long c_recommendation_listing_component::get_item_size(long) const;
// public: virtual long c_recommendation_listing_component::get_item_date(long) const;
// public: virtual long c_recommendation_listing_component::get_item_length(long) const;
// public: virtual long c_recommendation_listing_component::get_item_map_id(long) const;
// protected: struct s_online_file_summary_listing_entry const * c_recommendation_listing_component::get_recommendation_summary_listing(void) const;
// protected: struct s_online_file_recommendations_listing const * c_recommendation_listing_component::get_recommendation_listing(void) const;
// protected: struct s_online_file_recommendations_listing const * c_recommendation_listing_component::get_recommendation_listing(long) const;
// protected: enum e_file_browser_result c_recommendation_listing_component::fetch_recommendation_summary_listing(unsigned __int64, struct s_online_file_summary_listing_entry const **);
// protected: enum e_file_browser_result c_recommendation_listing_component::fetch_recommendation_listing(unsigned __int64, struct s_online_file_recommendations_listing const **);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_recommendation_listing_component>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_recommendation_listing_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_recommendation_listing_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_recommendation_listing_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_recommendation_listing_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_recommendation_listing_component, class c_screen_pipe_component *, class c_screen_pipe_component *& (c_recommendation_listing_component::get_pipe_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_screen_pipe_component * c_recommendation_listing_component::get_pipe_component(void) const;
// bool cui_set_scalar_property_by_value<class c_recommendation_listing_component, class c_screen_pipe_component *, void & (c_recommendation_listing_component::set_pipe_component::*)(class c_screen_pipe_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_recommendation_listing_component::set_pipe_component(class c_screen_pipe_component *);
// bool cui_get_scalar_property_by_return_value<class c_recommendation_listing_component, bool, bool & (c_recommendation_listing_component::get_always_refresh::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_recommendation_listing_component::get_always_refresh(void) const;
// bool cui_set_scalar_property_by_value<class c_recommendation_listing_component, bool, void & (c_recommendation_listing_component::set_always_refresh::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_recommendation_listing_component::set_always_refresh(bool);
// public: struct c_file_manager_listing_component::s_file_share_transfer_status & s_static_array<struct c_file_manager_listing_component::s_file_share_transfer_status, 100>::operator[]<long>(long);
// public: struct c_file_manager_listing_component::s_file_share_transfer_status const & s_static_array<struct c_file_manager_listing_component::s_file_share_transfer_status, 100>::operator[]<long>(long) const;
// public: static bool s_static_array<struct c_file_manager_listing_component::s_file_share_transfer_status, 100>::valid<long>(long);
// class c_cui_component * cui_component_create<class c_recommendation_listing_component>(void);
// class c_cui_component * cui_component_clone<class c_recommendation_listing_component>(class c_cui_component const *);

//public: c_recommendation_listing_component::c_recommendation_listing_component(void)
//{
//    mangled_ppc("??0c_recommendation_listing_component@@QAA@XZ");
//};

//public: virtual unsigned __int64 c_recommendation_listing_component::get_owner_id(void) const
//{
//    mangled_ppc("?get_owner_id@c_recommendation_listing_component@@UBA_KXZ");
//};

//public: virtual unsigned __int64 c_recommendation_listing_component::get_share_id(void) const
//{
//    mangled_ppc("?get_share_id@c_recommendation_listing_component@@UBA_KXZ");
//};

//public: virtual bool c_recommendation_listing_component::file_share_is_owned_by_current_user(void) const
//{
//    mangled_ppc("?file_share_is_owned_by_current_user@c_recommendation_listing_component@@UBA_NXZ");
//};

//public: virtual long c_recommendation_listing_component::get_page_item_count(void) const
//{
//    mangled_ppc("?get_page_item_count@c_recommendation_listing_component@@UBAJXZ");
//};

//public: virtual long c_recommendation_listing_component::get_page_count(void) const
//{
//    mangled_ppc("?get_page_count@c_recommendation_listing_component@@UBAJXZ");
//};

//merged_84B5A7B8
//{
//    mangled_ppc("merged_84B5A7B8");
//};

//public: virtual c_recommendation_listing_component::~c_recommendation_listing_component(void)
//{
//    mangled_ppc("??1c_recommendation_listing_component@@UAA@XZ");
//};

//public: c_recommendation_listing_component::c_recommendation_listing_component(class c_recommendation_listing_component const &)
//{
//    mangled_ppc("??0c_recommendation_listing_component@@QAA@ABV0@@Z");
//};

//protected: virtual void c_recommendation_listing_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_recommendation_listing_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: void c_recommendation_listing_component::initialize_internal(void)
//{
//    mangled_ppc("?initialize_internal@c_recommendation_listing_component@@IAAXXZ");
//};

//protected: void c_recommendation_listing_component::update_internal(void)
//{
//    mangled_ppc("?update_internal@c_recommendation_listing_component@@IAAXXZ");
//};

//protected: void c_recommendation_listing_component::update_user(void)
//{
//    mangled_ppc("?update_user@c_recommendation_listing_component@@IAAXXZ");
//};

//protected: void c_recommendation_listing_component::update_enumeration(void)
//{
//    mangled_ppc("?update_enumeration@c_recommendation_listing_component@@IAAXXZ");
//};

//protected: void c_recommendation_listing_component::update_transfers(void)
//{
//    mangled_ppc("?update_transfers@c_recommendation_listing_component@@IAAXXZ");
//};

//public: virtual class c_enum<enum c_file_manager_listing_component::e_enumeration_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_enumeration_state(void) const
//{
//    mangled_ppc("?get_enumeration_state@c_recommendation_listing_component@@UBA?AV?$c_enum@W4e_enumeration_state@c_file_manager_listing_component@@E$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual long c_recommendation_listing_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_recommendation_listing_component@@UBAJXZ");
//};

//public: virtual bool c_recommendation_listing_component::get_item_is_new(long) const
//{
//    mangled_ppc("?get_item_is_new@c_recommendation_listing_component@@UBA_NJ@Z");
//};

//public: virtual struct s_online_file_metadata const * c_recommendation_listing_component::get_item_metadata(long) const
//{
//    mangled_ppc("?get_item_metadata@c_recommendation_listing_component@@UBAPBUs_online_file_metadata@@J@Z");
//};

//public: virtual class c_enum<enum c_file_manager_listing_component::e_transfer_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_item_slot_type(long) const
//{
//    mangled_ppc("?get_item_slot_type@c_recommendation_listing_component@@UBA?AV?$c_enum@W4e_transfer_state@c_file_manager_listing_component@@E$0A@$02Us_default_enum_string_resolver@@@@J@Z");
//};

//public: virtual enum e_content_item_type c_recommendation_listing_component::get_item_type(long) const
//{
//    mangled_ppc("?get_item_type@c_recommendation_listing_component@@UBA?AW4e_content_item_type@@J@Z");
//};

//public: virtual enum e_content_item_category c_recommendation_listing_component::get_item_file_category(long) const
//{
//    mangled_ppc("?get_item_file_category@c_recommendation_listing_component@@UBA?AW4e_content_item_category@@J@Z");
//};

//public: virtual wchar_t const * c_recommendation_listing_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_recommendation_listing_component@@UBAPB_WJ@Z");
//};

//public: virtual wchar_t const * c_recommendation_listing_component::get_item_description(long) const
//{
//    mangled_ppc("?get_item_description@c_recommendation_listing_component@@UBAPB_WJ@Z");
//};

//public: virtual char const * c_recommendation_listing_component::get_item_authored_by(long) const
//{
//    mangled_ppc("?get_item_authored_by@c_recommendation_listing_component@@UBAPBDJ@Z");
//};

//public: virtual char const * c_recommendation_listing_component::get_item_modified_by(long) const
//{
//    mangled_ppc("?get_item_modified_by@c_recommendation_listing_component@@UBAPBDJ@Z");
//};

//public: virtual char const * c_recommendation_listing_component::get_item_recommended_by(long) const
//{
//    mangled_ppc("?get_item_recommended_by@c_recommendation_listing_component@@UBAPBDJ@Z");
//};

//public: virtual bool c_recommendation_listing_component::is_item_tag_busy(long) const
//{
//    mangled_ppc("?is_item_tag_busy@c_recommendation_listing_component@@UBA_NJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_tag_count(long) const
//{
//    mangled_ppc("?get_item_tag_count@c_recommendation_listing_component@@UBAJJ@Z");
//};

//public: virtual struct s_online_file_tag const * c_recommendation_listing_component::get_item_tag(long, long) const
//{
//    mangled_ppc("?get_item_tag@c_recommendation_listing_component@@UBAPBUs_online_file_tag@@JJ@Z");
//};

//public: virtual class c_enum<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_item_transfer_type(long) const
//{
//    mangled_ppc("?get_item_transfer_type@c_recommendation_listing_component@@UBA?AV?$c_enum@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: virtual class c_enum<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_item_transfer_status(long) const
//{
//    mangled_ppc("?get_item_transfer_status@c_recommendation_listing_component@@UBA?AV?$c_enum@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@J@Z");
//};

//public: virtual float c_recommendation_listing_component::get_item_transfer_progress(long) const
//{
//    mangled_ppc("?get_item_transfer_progress@c_recommendation_listing_component@@UBAMJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_bungie_rating(long) const
//{
//    mangled_ppc("?get_item_bungie_rating@c_recommendation_listing_component@@UBAJJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_downloads(long) const
//{
//    mangled_ppc("?get_item_downloads@c_recommendation_listing_component@@UBAJJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_size(long) const
//{
//    mangled_ppc("?get_item_size@c_recommendation_listing_component@@UBAJJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_date(long) const
//{
//    mangled_ppc("?get_item_date@c_recommendation_listing_component@@UBAJJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_length(long) const
//{
//    mangled_ppc("?get_item_length@c_recommendation_listing_component@@UBAJJ@Z");
//};

//public: virtual long c_recommendation_listing_component::get_item_map_id(long) const
//{
//    mangled_ppc("?get_item_map_id@c_recommendation_listing_component@@UBAJJ@Z");
//};

//protected: struct s_online_file_summary_listing_entry const * c_recommendation_listing_component::get_recommendation_summary_listing(void) const
//{
//    mangled_ppc("?get_recommendation_summary_listing@c_recommendation_listing_component@@IBAPBUs_online_file_summary_listing_entry@@XZ");
//};

//protected: struct s_online_file_recommendations_listing const * c_recommendation_listing_component::get_recommendation_listing(void) const
//{
//    mangled_ppc("?get_recommendation_listing@c_recommendation_listing_component@@IBAPBUs_online_file_recommendations_listing@@XZ");
//};

//protected: struct s_online_file_recommendations_listing const * c_recommendation_listing_component::get_recommendation_listing(long) const
//{
//    mangled_ppc("?get_recommendation_listing@c_recommendation_listing_component@@IBAPBUs_online_file_recommendations_listing@@J@Z");
//};

//protected: enum e_file_browser_result c_recommendation_listing_component::fetch_recommendation_summary_listing(unsigned __int64, struct s_online_file_summary_listing_entry const **)
//{
//    mangled_ppc("?fetch_recommendation_summary_listing@c_recommendation_listing_component@@IAA?AW4e_file_browser_result@@_KPAPBUs_online_file_summary_listing_entry@@@Z");
//};

//protected: enum e_file_browser_result c_recommendation_listing_component::fetch_recommendation_listing(unsigned __int64, struct s_online_file_recommendations_listing const **)
//{
//    mangled_ppc("?fetch_recommendation_listing@c_recommendation_listing_component@@IAA?AW4e_file_browser_result@@_KPAPBUs_online_file_recommendations_listing@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_recommendation_listing_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_recommendation_listing_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_recommendation_listing_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_recommendation_listing_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_recommendation_listing_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_recommendation_listing_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_recommendation_listing_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_recommendation_listing_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_recommendation_listing_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_recommendation_listing_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_recommendation_listing_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_recommendation_listing_component, class c_screen_pipe_component *, class c_screen_pipe_component *& (c_recommendation_listing_component::get_pipe_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_recommendation_listing_component@@PAVc_screen_pipe_component@@$1?get_pipe_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_screen_pipe_component * c_recommendation_listing_component::get_pipe_component(void) const
//{
//    mangled_ppc("?get_pipe_component@c_recommendation_listing_component@@QBAPAVc_screen_pipe_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_recommendation_listing_component, class c_screen_pipe_component *, void & (c_recommendation_listing_component::set_pipe_component::*)(class c_screen_pipe_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_recommendation_listing_component@@PAVc_screen_pipe_component@@$1?set_pipe_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_recommendation_listing_component::set_pipe_component(class c_screen_pipe_component *)
//{
//    mangled_ppc("?set_pipe_component@c_recommendation_listing_component@@QAAXPAVc_screen_pipe_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_recommendation_listing_component, bool, bool & (c_recommendation_listing_component::get_always_refresh::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_recommendation_listing_component@@_N$1?get_always_refresh@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_recommendation_listing_component::get_always_refresh(void) const
//{
//    mangled_ppc("?get_always_refresh@c_recommendation_listing_component@@QBA_NXZ");
//};

//bool cui_set_scalar_property_by_value<class c_recommendation_listing_component, bool, void & (c_recommendation_listing_component::set_always_refresh::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_recommendation_listing_component@@_N$1?set_always_refresh@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_recommendation_listing_component::set_always_refresh(bool)
//{
//    mangled_ppc("?set_always_refresh@c_recommendation_listing_component@@QAAX_N@Z");
//};

//public: struct c_file_manager_listing_component::s_file_share_transfer_status & s_static_array<struct c_file_manager_listing_component::s_file_share_transfer_status, 100>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_file_share_transfer_status@c_file_manager_listing_component@@$0GE@@@QAAAAUs_file_share_transfer_status@c_file_manager_listing_component@@J@Z");
//};

//public: struct c_file_manager_listing_component::s_file_share_transfer_status const & s_static_array<struct c_file_manager_listing_component::s_file_share_transfer_status, 100>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_file_share_transfer_status@c_file_manager_listing_component@@$0GE@@@QBAABUs_file_share_transfer_status@c_file_manager_listing_component@@J@Z");
//};

//public: static bool s_static_array<struct c_file_manager_listing_component::s_file_share_transfer_status, 100>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_file_share_transfer_status@c_file_manager_listing_component@@$0GE@@@SA_NJ@Z");
//};

//class c_cui_component * cui_component_create<class c_recommendation_listing_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_recommendation_listing_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_recommendation_listing_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_recommendation_listing_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

