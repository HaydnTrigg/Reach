/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_file_details_pipe_reader_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_file_details_pipe_reader_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_file_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_file_details_pipe_writer_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_file_details_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_file_details_pipe_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_file_details_pipe_reader_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_file_details_pipe_reader_component@@@@0Vc_cui_object_property_table@@A"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_file_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_file_details_pipe_writer_component@@@@0Vc_cui_object_property_table@@A"

// public: c_file_details_pipe::c_file_details_pipe(void);
// merged_84A8FE68;
// public: c_file_details_pipe::c_file_details_pipe(struct s_content_item_metadata const &);
// public: c_content_item_metadata::c_content_item_metadata(struct s_content_item_metadata const &);
// public: bool c_file_details_pipe::get_difficulty_level(enum e_campaign_difficulty_level *) const;
// public: c_file_details_pipe_component::c_file_details_pipe_component(void);
// protected: c_file_details_pipe_component::c_file_details_pipe_component(struct s_cui_component_description const *, class c_cui_object_property_table *);
// private: virtual class c_cui_screen_pipe * c_file_details_pipe_component::do_create_pipe(void);
// protected: c_file_details_pipe_client_component::c_file_details_pipe_client_component(struct s_cui_component_description const *, class c_cui_object_property_table *);
// public: c_file_details_pipe_writer_component::c_file_details_pipe_writer_component(void);
// protected: c_file_details_pipe_writer_component::c_file_details_pipe_writer_component(struct s_cui_component_description const *, class c_cui_object_property_table *);
// public: bool c_file_details_pipe_writer_component::set_input_event_component(class c_input_event_component *);
// public: class c_cui_input_event * c_file_details_pipe::get_input_event(void);
// public: void c_file_details_pipe::set_input_event(class c_cui_input_event const *);
// public: void c_file_details_pipe::set_event_name(long);
// public: bool c_file_details_pipe_writer_component::set_auxiliary_input_event_component(class c_input_event_component *);
// public: class c_cui_input_event * c_file_details_pipe::get_auxiliary_input_event(void);
// public: void c_file_details_pipe::set_auxiliary_input_event(class c_cui_input_event const *);
// public: void c_file_details_pipe::set_auxiliary_event_name(long);
// protected: virtual void c_file_details_pipe_writer_component::do_update(class c_cui_update_context *);
// public: bool c_file_details_pipe_client_component::set_share_quota_slot_count(unsigned long);
// public: void c_file_details_pipe::set_share_quota_slot_count(unsigned long);
// public: bool c_file_details_pipe_client_component::set_share_file_count(unsigned long);
// public: void c_file_details_pipe::set_share_file_count(unsigned long);
// public: bool c_file_details_pipe_client_component::set_share_quota_byte_count(unsigned long);
// public: void c_file_details_pipe::set_share_quota_byte_count(unsigned long);
// public: bool c_file_details_pipe_client_component::set_share_byte_count(unsigned long);
// public: void c_file_details_pipe::set_share_byte_count(unsigned long);
// public: class c_file_browser_catalog_data * c_file_browser_pipe::get_catalog_data(void);
// public: c_file_details_pipe_reader_component::c_file_details_pipe_reader_component(void);
// protected: c_file_details_pipe_reader_component::c_file_details_pipe_reader_component(struct s_cui_component_description const *, class c_cui_object_property_table *);
// protected: virtual void c_file_details_pipe_reader_component::do_update(class c_cui_update_context *);
// public: long c_file_details_pipe::get_event_name(void) const;
// public: long c_file_details_pipe::get_auxiliary_event_name(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_file_count::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_file_count(long *) const;
// public: long c_file_details_pipe::get_file_count(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::set_file_count::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: bool c_file_details_pipe_client_component::set_file_count(long);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_file_index::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_file_index(long *) const;
// public: long c_file_details_pipe::get_file_index(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::set_file_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: bool c_file_details_pipe_client_component::set_file_index(long);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::is_busy::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::is_busy(bool *) const;
// public: bool c_file_details_pipe::is_busy(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::set_busy::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: bool c_file_details_pipe_client_component::set_busy(bool);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::is_corrupt::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::is_corrupt(bool *) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::set_corrupt::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: bool c_file_details_pipe_client_component::set_corrupt(bool);
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_writer_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_writer_component::get_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_file_details_pipe_writer_component::get_input_event_component(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_input_event_component *, bool & (c_file_details_pipe_writer_component::set_input_event_component::*)(class c_input_event_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_writer_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_writer_component::get_auxiliary_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_file_details_pipe_writer_component::get_auxiliary_input_event_component(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_input_event_component *, bool & (c_file_details_pipe_writer_component::set_auxiliary_input_event_component::*)(class c_input_event_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_quota_slot_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_share_quota_slot_count(unsigned long *) const;
// public: unsigned long c_file_details_pipe::get_share_quota_slot_count(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_quota_slot_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_file_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_share_file_count(unsigned long *) const;
// public: unsigned long c_file_details_pipe::get_share_file_count(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_file_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_quota_byte_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_share_quota_byte_count(unsigned long *) const;
// public: unsigned long c_file_details_pipe::get_share_quota_byte_count(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_quota_byte_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_byte_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_share_byte_count(unsigned long *) const;
// public: unsigned long c_file_details_pipe::get_share_byte_count(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_byte_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *);
// ??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_file_details_pipe_writer_component::get_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_file_details_pipe_writer_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_details_pipe_writer_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_writer_component, class c_file_browser_pipe_component *, class c_file_browser_pipe_component *& (c_file_details_pipe_writer_component::get_file_browser_pipe_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_file_browser_pipe_component * c_file_details_pipe_writer_component::get_file_browser_pipe_component(void) const;
// void cui_property_value_set(struct s_cui_property_value *, class c_file_browser_pipe_component *);
// bool cui_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_file_browser_pipe_component *, void & (c_file_details_pipe_writer_component::set_file_browser_pipe_component::*)(class c_file_browser_pipe_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_file_details_pipe_writer_component::set_file_browser_pipe_component(class c_file_browser_pipe_component *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_file_browser_pipe_component **);
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::is_built_in::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::is_built_in(bool *) const;
// public: bool c_file_details_pipe::is_built_in(void) const;
// bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::set_built_in::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: bool c_file_details_pipe_client_component::set_built_in(bool);
// public: void c_file_details_pipe::set_built_in(bool);
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_reader_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_reader_component::get_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_file_details_pipe_reader_component::get_input_event_component(void) const;
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_reader_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_reader_component::get_auxiliary_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_file_details_pipe_reader_component::get_auxiliary_input_event_component(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_type::*)(class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_type(class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> *) const;
// public: enum e_content_item_type c_file_details_pipe::get_type(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> *) const;
// public: enum e_content_item_category c_file_details_pipe::get_category(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_file_size::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_file_size(unsigned long *) const;
// public: unsigned long c_file_details_pipe::get_file_size(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_activity::*)(class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_activity(class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> *) const;
// public: enum e_gui_game_mode c_file_details_pipe::get_activity(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_game_mode::*)(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_game_mode(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *) const;
// public: enum e_game_mode c_file_details_pipe::get_game_mode(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>, bool & (c_file_details_pipe_client_component::get_game_engine_type::*)(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_game_engine_type(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> *) const;
// public: enum e_game_engine_type c_file_details_pipe::get_game_engine_type(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_map_id::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_map_id(long *) const;
// public: enum e_map_id c_file_details_pipe::get_map_id(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_creation_timestamp::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_creation_timestamp(unsigned __int64*) const;
// public: unsigned __int64 c_file_details_pipe::get_creation_timestamp(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_creation_author_xuid::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_creation_author_xuid(unsigned __int64*) const;
// public: unsigned __int64 c_file_details_pipe::get_creation_author_xuid(void) const;
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, char const *, char const *& (c_file_details_pipe_client_component::get_creation_author_gamertag::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_file_details_pipe_client_component::get_creation_author_gamertag(void) const;
// public: char const * c_file_details_pipe::get_creation_author_gamertag(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::get_creation_author_signed_into_live::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_creation_author_signed_into_live(bool *) const;
// public: bool c_file_details_pipe::get_creation_author_signed_into_live(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_modification_timestamp::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_modification_timestamp(unsigned __int64*) const;
// public: unsigned __int64 c_file_details_pipe::get_modification_timestamp(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_modification_author_xuid::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_modification_author_xuid(unsigned __int64*) const;
// public: unsigned __int64 c_file_details_pipe::get_modification_author_xuid(void) const;
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, char const *, char const *& (c_file_details_pipe_client_component::get_modification_author_gamertag::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_file_details_pipe_client_component::get_modification_author_gamertag(void) const;
// public: char const * c_file_details_pipe::get_modification_author_gamertag(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::get_modification_author_signed_into_live::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_modification_author_signed_into_live(bool *) const;
// public: bool c_file_details_pipe::get_modification_author_signed_into_live(void) const;
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, wchar_t const *, wchar_t const *& (c_file_details_pipe_client_component::get_display_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_file_details_pipe_client_component::get_display_name(void) const;
// public: wchar_t const * c_file_details_pipe::get_display_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, wchar_t const *, wchar_t const *& (c_file_details_pipe_client_component::get_display_description::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_file_details_pipe_client_component::get_display_description(void) const;
// public: wchar_t const * c_file_details_pipe::get_display_description(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_film_seconds::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_film_seconds(unsigned long *) const;
// public: bool c_file_details_pipe::get_film_seconds(unsigned long *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, char, bool & (c_file_details_pipe_client_component::get_game_engine_icon_index::*)(char *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_game_engine_icon_index(char *) const;
// public: bool c_file_details_pipe::get_game_engine_icon_index(char *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_campaign_id::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_campaign_id(long *) const;
// public: bool c_file_details_pipe::get_campaign_id(enum e_campaign_id *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_campaign_metagame_scoring::*)(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_campaign_metagame_scoring(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *) const;
// public: bool c_file_details_pipe::get_campaign_metagame_scoring(enum e_campaign_metagame_scoring *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, short, bool & (c_file_details_pipe_client_component::get_campaign_insertion_point::*)(short *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_campaign_insertion_point(short *) const;
// public: bool c_file_details_pipe::get_campaign_insertion_point(short *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_difficulty_level::*)(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_file_details_pipe_client_component::get_difficulty_level(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *) const;
// bool cui_property_value_get(struct s_cui_property_value const *, unsigned long *);
// class c_cui_component * cui_component_create<class c_file_details_pipe_component>(void);
// class c_cui_component * cui_component_clone<class c_file_details_pipe_component>(class c_cui_component const *);
// class c_cui_component * cui_component_create<class c_file_details_pipe_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_file_details_pipe_writer_component>(class c_cui_component const *);
// class c_cui_component * cui_component_create<class c_file_details_pipe_reader_component>(void);
// class c_cui_component * cui_component_clone<class c_file_details_pipe_reader_component>(class c_cui_component const *);

//public: c_file_details_pipe::c_file_details_pipe(void)
//{
//    mangled_ppc("??0c_file_details_pipe@@QAA@XZ");
//};

//merged_84A8FE68
//{
//    mangled_ppc("merged_84A8FE68");
//};

//public: c_file_details_pipe::c_file_details_pipe(struct s_content_item_metadata const &)
//{
//    mangled_ppc("??0c_file_details_pipe@@QAA@ABUs_content_item_metadata@@@Z");
//};

//public: c_content_item_metadata::c_content_item_metadata(struct s_content_item_metadata const &)
//{
//    mangled_ppc("??0c_content_item_metadata@@QAA@ABUs_content_item_metadata@@@Z");
//};

//public: bool c_file_details_pipe::get_difficulty_level(enum e_campaign_difficulty_level *) const
//{
//    mangled_ppc("?get_difficulty_level@c_file_details_pipe@@QBA_NPAW4e_campaign_difficulty_level@@@Z");
//};

//public: c_file_details_pipe_component::c_file_details_pipe_component(void)
//{
//    mangled_ppc("??0c_file_details_pipe_component@@QAA@XZ");
//};

//protected: c_file_details_pipe_component::c_file_details_pipe_component(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_file_details_pipe_component@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//private: virtual class c_cui_screen_pipe * c_file_details_pipe_component::do_create_pipe(void)
//{
//    mangled_ppc("?do_create_pipe@c_file_details_pipe_component@@EAAPAVc_cui_screen_pipe@@XZ");
//};

//protected: c_file_details_pipe_client_component::c_file_details_pipe_client_component(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_file_details_pipe_client_component@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//public: c_file_details_pipe_writer_component::c_file_details_pipe_writer_component(void)
//{
//    mangled_ppc("??0c_file_details_pipe_writer_component@@QAA@XZ");
//};

//protected: c_file_details_pipe_writer_component::c_file_details_pipe_writer_component(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_file_details_pipe_writer_component@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//public: bool c_file_details_pipe_writer_component::set_input_event_component(class c_input_event_component *)
//{
//    mangled_ppc("?set_input_event_component@c_file_details_pipe_writer_component@@QAA_NPAVc_input_event_component@@@Z");
//};

//public: class c_cui_input_event * c_file_details_pipe::get_input_event(void)
//{
//    mangled_ppc("?get_input_event@c_file_details_pipe@@QAAPAVc_cui_input_event@@XZ");
//};

//public: void c_file_details_pipe::set_input_event(class c_cui_input_event const *)
//{
//    mangled_ppc("?set_input_event@c_file_details_pipe@@QAAXPBVc_cui_input_event@@@Z");
//};

//public: void c_file_details_pipe::set_event_name(long)
//{
//    mangled_ppc("?set_event_name@c_file_details_pipe@@QAAXJ@Z");
//};

//public: bool c_file_details_pipe_writer_component::set_auxiliary_input_event_component(class c_input_event_component *)
//{
//    mangled_ppc("?set_auxiliary_input_event_component@c_file_details_pipe_writer_component@@QAA_NPAVc_input_event_component@@@Z");
//};

//public: class c_cui_input_event * c_file_details_pipe::get_auxiliary_input_event(void)
//{
//    mangled_ppc("?get_auxiliary_input_event@c_file_details_pipe@@QAAPAVc_cui_input_event@@XZ");
//};

//public: void c_file_details_pipe::set_auxiliary_input_event(class c_cui_input_event const *)
//{
//    mangled_ppc("?set_auxiliary_input_event@c_file_details_pipe@@QAAXPBVc_cui_input_event@@@Z");
//};

//public: void c_file_details_pipe::set_auxiliary_event_name(long)
//{
//    mangled_ppc("?set_auxiliary_event_name@c_file_details_pipe@@QAAXJ@Z");
//};

//protected: virtual void c_file_details_pipe_writer_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_file_details_pipe_writer_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_file_details_pipe_client_component::set_share_quota_slot_count(unsigned long)
//{
//    mangled_ppc("?set_share_quota_slot_count@c_file_details_pipe_client_component@@QAA_NK@Z");
//};

//public: void c_file_details_pipe::set_share_quota_slot_count(unsigned long)
//{
//    mangled_ppc("?set_share_quota_slot_count@c_file_details_pipe@@QAAXK@Z");
//};

//public: bool c_file_details_pipe_client_component::set_share_file_count(unsigned long)
//{
//    mangled_ppc("?set_share_file_count@c_file_details_pipe_client_component@@QAA_NK@Z");
//};

//public: void c_file_details_pipe::set_share_file_count(unsigned long)
//{
//    mangled_ppc("?set_share_file_count@c_file_details_pipe@@QAAXK@Z");
//};

//public: bool c_file_details_pipe_client_component::set_share_quota_byte_count(unsigned long)
//{
//    mangled_ppc("?set_share_quota_byte_count@c_file_details_pipe_client_component@@QAA_NK@Z");
//};

//public: void c_file_details_pipe::set_share_quota_byte_count(unsigned long)
//{
//    mangled_ppc("?set_share_quota_byte_count@c_file_details_pipe@@QAAXK@Z");
//};

//public: bool c_file_details_pipe_client_component::set_share_byte_count(unsigned long)
//{
//    mangled_ppc("?set_share_byte_count@c_file_details_pipe_client_component@@QAA_NK@Z");
//};

//public: void c_file_details_pipe::set_share_byte_count(unsigned long)
//{
//    mangled_ppc("?set_share_byte_count@c_file_details_pipe@@QAAXK@Z");
//};

//public: class c_file_browser_catalog_data * c_file_browser_pipe::get_catalog_data(void)
//{
//    mangled_ppc("?get_catalog_data@c_file_browser_pipe@@QAAPAVc_file_browser_catalog_data@@XZ");
//};

//public: c_file_details_pipe_reader_component::c_file_details_pipe_reader_component(void)
//{
//    mangled_ppc("??0c_file_details_pipe_reader_component@@QAA@XZ");
//};

//protected: c_file_details_pipe_reader_component::c_file_details_pipe_reader_component(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_file_details_pipe_reader_component@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//protected: virtual void c_file_details_pipe_reader_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_file_details_pipe_reader_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: long c_file_details_pipe::get_event_name(void) const
//{
//    mangled_ppc("?get_event_name@c_file_details_pipe@@QBAJXZ");
//};

//public: long c_file_details_pipe::get_auxiliary_event_name(void) const
//{
//    mangled_ppc("?get_auxiliary_event_name@c_file_details_pipe@@QBAJXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_file_count::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@J$1?get_file_count@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_file_count(long *) const
//{
//    mangled_ppc("?get_file_count@c_file_details_pipe_client_component@@QBA_NPAJ@Z");
//};

//public: long c_file_details_pipe::get_file_count(void) const
//{
//    mangled_ppc("?get_file_count@c_file_details_pipe@@QBAJXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::set_file_count::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@J$1?set_file_count@1@QAA_NJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::set_file_count(long)
//{
//    mangled_ppc("?set_file_count@c_file_details_pipe_client_component@@QAA_NJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_file_index::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@J$1?get_file_index@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_file_index(long *) const
//{
//    mangled_ppc("?get_file_index@c_file_details_pipe_client_component@@QBA_NPAJ@Z");
//};

//public: long c_file_details_pipe::get_file_index(void) const
//{
//    mangled_ppc("?get_file_index@c_file_details_pipe@@QBAJXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::set_file_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@J$1?set_file_index@1@QAA_NJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::set_file_index(long)
//{
//    mangled_ppc("?set_file_index@c_file_details_pipe_client_component@@QAA_NJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::is_busy::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_N$1?is_busy@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::is_busy(bool *) const
//{
//    mangled_ppc("?is_busy@c_file_details_pipe_client_component@@QBA_NPA_N@Z");
//};

//public: bool c_file_details_pipe::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_file_details_pipe@@QBA_NXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::set_busy::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@_N$1?set_busy@1@QAA_N_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::set_busy(bool)
//{
//    mangled_ppc("?set_busy@c_file_details_pipe_client_component@@QAA_N_N@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::is_corrupt::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_N$1?is_corrupt@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::is_corrupt(bool *) const
//{
//    mangled_ppc("?is_corrupt@c_file_details_pipe_client_component@@QBA_NPA_N@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::set_corrupt::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@_N$1?set_corrupt@1@QAA_N_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::set_corrupt(bool)
//{
//    mangled_ppc("?set_corrupt@c_file_details_pipe_client_component@@QAA_N_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_writer_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_writer_component::get_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_writer_component@@PAVc_input_event_component@@$1?get_input_event_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_file_details_pipe_writer_component::get_input_event_component(void) const
//{
//    mangled_ppc("?get_input_event_component@c_file_details_pipe_writer_component@@QBAPAVc_input_event_component@@XZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_input_event_component *, bool & (c_file_details_pipe_writer_component::set_input_event_component::*)(class c_input_event_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_writer_component@@PAVc_input_event_component@@$1?set_input_event_component@1@QAA_NPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_writer_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_writer_component::get_auxiliary_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_writer_component@@PAVc_input_event_component@@$1?get_auxiliary_input_event_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_file_details_pipe_writer_component::get_auxiliary_input_event_component(void) const
//{
//    mangled_ppc("?get_auxiliary_input_event_component@c_file_details_pipe_writer_component@@QBAPAVc_input_event_component@@XZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_input_event_component *, bool & (c_file_details_pipe_writer_component::set_auxiliary_input_event_component::*)(class c_input_event_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_writer_component@@PAVc_input_event_component@@$1?set_auxiliary_input_event_component@1@QAA_NPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_quota_slot_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@K$1?get_share_quota_slot_count@1@QBA_NPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_share_quota_slot_count(unsigned long *) const
//{
//    mangled_ppc("?get_share_quota_slot_count@c_file_details_pipe_client_component@@QBA_NPAK@Z");
//};

//public: unsigned long c_file_details_pipe::get_share_quota_slot_count(void) const
//{
//    mangled_ppc("?get_share_quota_slot_count@c_file_details_pipe@@QBAKXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_quota_slot_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@K$1?set_share_quota_slot_count@1@QAA_NK@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_file_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@K$1?get_share_file_count@1@QBA_NPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_share_file_count(unsigned long *) const
//{
//    mangled_ppc("?get_share_file_count@c_file_details_pipe_client_component@@QBA_NPAK@Z");
//};

//public: unsigned long c_file_details_pipe::get_share_file_count(void) const
//{
//    mangled_ppc("?get_share_file_count@c_file_details_pipe@@QBAKXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_file_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@K$1?set_share_file_count@1@QAA_NK@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_quota_byte_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@K$1?get_share_quota_byte_count@1@QBA_NPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_share_quota_byte_count(unsigned long *) const
//{
//    mangled_ppc("?get_share_quota_byte_count@c_file_details_pipe_client_component@@QBA_NPAK@Z");
//};

//public: unsigned long c_file_details_pipe::get_share_quota_byte_count(void) const
//{
//    mangled_ppc("?get_share_quota_byte_count@c_file_details_pipe@@QBAKXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_quota_byte_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@K$1?set_share_quota_byte_count@1@QAA_NK@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_share_byte_count::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@K$1?get_share_byte_count@1@QBA_NPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_share_byte_count(unsigned long *) const
//{
//    mangled_ppc("?get_share_byte_count@c_file_details_pipe_client_component@@QBA_NPAK@Z");
//};

//public: unsigned long c_file_details_pipe::get_share_byte_count(void) const
//{
//    mangled_ppc("?get_share_byte_count@c_file_details_pipe@@QBAKXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::set_share_byte_count::*)(unsigned long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@K$1?set_share_byte_count@1@QAA_NK@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_file_details_pipe_writer_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_file_details_pipe_writer_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_file_details_pipe_writer_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_details_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_details_pipe_writer_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_index@c_file_details_pipe_writer_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_writer_component, class c_file_browser_pipe_component *, class c_file_browser_pipe_component *& (c_file_details_pipe_writer_component::get_file_browser_pipe_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_writer_component@@PAVc_file_browser_pipe_component@@$1?get_file_browser_pipe_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_file_browser_pipe_component * c_file_details_pipe_writer_component::get_file_browser_pipe_component(void) const
//{
//    mangled_ppc("?get_file_browser_pipe_component@c_file_details_pipe_writer_component@@QBAPAVc_file_browser_pipe_component@@XZ");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_file_browser_pipe_component *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_file_browser_pipe_component@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_file_details_pipe_writer_component, class c_file_browser_pipe_component *, void & (c_file_details_pipe_writer_component::set_file_browser_pipe_component::*)(class c_file_browser_pipe_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_file_details_pipe_writer_component@@PAVc_file_browser_pipe_component@@$1?set_file_browser_pipe_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_file_details_pipe_writer_component::set_file_browser_pipe_component(class c_file_browser_pipe_component *)
//{
//    mangled_ppc("?set_file_browser_pipe_component@c_file_details_pipe_writer_component@@QAAXPAVc_file_browser_pipe_component@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_file_browser_pipe_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_file_browser_pipe_component@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::is_built_in::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_N$1?is_built_in@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::is_built_in(bool *) const
//{
//    mangled_ppc("?is_built_in@c_file_details_pipe_client_component@@QBA_NPA_N@Z");
//};

//public: bool c_file_details_pipe::is_built_in(void) const
//{
//    mangled_ppc("?is_built_in@c_file_details_pipe@@QBA_NXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::set_built_in::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_file_details_pipe_client_component@@_N$1?set_built_in@1@QAA_N_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::set_built_in(bool)
//{
//    mangled_ppc("?set_built_in@c_file_details_pipe_client_component@@QAA_N_N@Z");
//};

//public: void c_file_details_pipe::set_built_in(bool)
//{
//    mangled_ppc("?set_built_in@c_file_details_pipe@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_reader_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_reader_component::get_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_reader_component@@PAVc_input_event_component@@$1?get_input_event_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_file_details_pipe_reader_component::get_input_event_component(void) const
//{
//    mangled_ppc("?get_input_event_component@c_file_details_pipe_reader_component@@QBAPAVc_input_event_component@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_reader_component, class c_input_event_component *, class c_input_event_component *& (c_file_details_pipe_reader_component::get_auxiliary_input_event_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_reader_component@@PAVc_input_event_component@@$1?get_auxiliary_input_event_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_file_details_pipe_reader_component::get_auxiliary_input_event_component(void) const
//{
//    mangled_ppc("?get_auxiliary_input_event_component@c_file_details_pipe_reader_component@@QBAPAVc_input_event_component@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_type::*)(class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@$1?get_type@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_type(class c_enum<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_type@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_content_item_type c_file_details_pipe::get_type(void) const
//{
//    mangled_ppc("?get_type@c_file_details_pipe@@QBA?AW4e_content_item_type@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_category::*)(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_category@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_category(class c_enum<enum e_content_item_category, char, -1, 5, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_category@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_content_item_category@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_content_item_category c_file_details_pipe::get_category(void) const
//{
//    mangled_ppc("?get_category@c_file_details_pipe@@QBA?AW4e_content_item_category@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_file_size::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@K$1?get_file_size@1@QBA_NPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_file_size(unsigned long *) const
//{
//    mangled_ppc("?get_file_size@c_file_details_pipe_client_component@@QBA_NPAK@Z");
//};

//public: unsigned long c_file_details_pipe::get_file_size(void) const
//{
//    mangled_ppc("?get_file_size@c_file_details_pipe@@QBAKXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_activity::*)(class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_activity(class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_activity@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_gui_game_mode c_file_details_pipe::get_activity(void) const
//{
//    mangled_ppc("?get_activity@c_file_details_pipe@@QBA?AW4e_gui_game_mode@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_game_mode::*)(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_game_mode(class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_game_mode@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_game_mode c_file_details_pipe::get_game_mode(void) const
//{
//    mangled_ppc("?get_game_mode@c_file_details_pipe@@QBA?AW4e_game_mode@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>, bool & (c_file_details_pipe_client_component::get_game_engine_type::*)(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_game_engine_type(class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> *) const
//{
//    mangled_ppc("?get_game_engine_type@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z");
//};

//public: enum e_game_engine_type c_file_details_pipe::get_game_engine_type(void) const
//{
//    mangled_ppc("?get_game_engine_type@c_file_details_pipe@@QBA?AW4e_game_engine_type@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_map_id::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@J$1?get_map_id@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_map_id(long *) const
//{
//    mangled_ppc("?get_map_id@c_file_details_pipe_client_component@@QBA_NPAJ@Z");
//};

//public: enum e_map_id c_file_details_pipe::get_map_id(void) const
//{
//    mangled_ppc("?get_map_id@c_file_details_pipe@@QBA?AW4e_map_id@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_creation_timestamp::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_K$1?get_creation_timestamp@1@QBA_NPA_K@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_creation_timestamp(unsigned __int64*) const
//{
//    mangled_ppc("?get_creation_timestamp@c_file_details_pipe_client_component@@QBA_NPA_K@Z");
//};

//public: unsigned __int64 c_file_details_pipe::get_creation_timestamp(void) const
//{
//    mangled_ppc("?get_creation_timestamp@c_file_details_pipe@@QBA_KXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_creation_author_xuid::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_K$1?get_creation_author_xuid@1@QBA_NPA_K@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_creation_author_xuid(unsigned __int64*) const
//{
//    mangled_ppc("?get_creation_author_xuid@c_file_details_pipe_client_component@@QBA_NPA_K@Z");
//};

//public: unsigned __int64 c_file_details_pipe::get_creation_author_xuid(void) const
//{
//    mangled_ppc("?get_creation_author_xuid@c_file_details_pipe@@QBA_KXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, char const *, char const *& (c_file_details_pipe_client_component::get_creation_author_gamertag::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_client_component@@PBD$1?get_creation_author_gamertag@1@QBAPBDXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_file_details_pipe_client_component::get_creation_author_gamertag(void) const
//{
//    mangled_ppc("?get_creation_author_gamertag@c_file_details_pipe_client_component@@QBAPBDXZ");
//};

//public: char const * c_file_details_pipe::get_creation_author_gamertag(void) const
//{
//    mangled_ppc("?get_creation_author_gamertag@c_file_details_pipe@@QBAPBDXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::get_creation_author_signed_into_live::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_N$1?get_creation_author_signed_into_live@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_creation_author_signed_into_live(bool *) const
//{
//    mangled_ppc("?get_creation_author_signed_into_live@c_file_details_pipe_client_component@@QBA_NPA_N@Z");
//};

//public: bool c_file_details_pipe::get_creation_author_signed_into_live(void) const
//{
//    mangled_ppc("?get_creation_author_signed_into_live@c_file_details_pipe@@QBA_NXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_modification_timestamp::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_K$1?get_modification_timestamp@1@QBA_NPA_K@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_modification_timestamp(unsigned __int64*) const
//{
//    mangled_ppc("?get_modification_timestamp@c_file_details_pipe_client_component@@QBA_NPA_K@Z");
//};

//public: unsigned __int64 c_file_details_pipe::get_modification_timestamp(void) const
//{
//    mangled_ppc("?get_modification_timestamp@c_file_details_pipe@@QBA_KXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned __int64, bool & (c_file_details_pipe_client_component::get_modification_author_xuid::*)(unsigned __int64*)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_K$1?get_modification_author_xuid@1@QBA_NPA_K@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_modification_author_xuid(unsigned __int64*) const
//{
//    mangled_ppc("?get_modification_author_xuid@c_file_details_pipe_client_component@@QBA_NPA_K@Z");
//};

//public: unsigned __int64 c_file_details_pipe::get_modification_author_xuid(void) const
//{
//    mangled_ppc("?get_modification_author_xuid@c_file_details_pipe@@QBA_KXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, char const *, char const *& (c_file_details_pipe_client_component::get_modification_author_gamertag::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_client_component@@PBD$1?get_modification_author_gamertag@1@QBAPBDXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_file_details_pipe_client_component::get_modification_author_gamertag(void) const
//{
//    mangled_ppc("?get_modification_author_gamertag@c_file_details_pipe_client_component@@QBAPBDXZ");
//};

//public: char const * c_file_details_pipe::get_modification_author_gamertag(void) const
//{
//    mangled_ppc("?get_modification_author_gamertag@c_file_details_pipe@@QBAPBDXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, bool, bool & (c_file_details_pipe_client_component::get_modification_author_signed_into_live::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@_N$1?get_modification_author_signed_into_live@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_modification_author_signed_into_live(bool *) const
//{
//    mangled_ppc("?get_modification_author_signed_into_live@c_file_details_pipe_client_component@@QBA_NPA_N@Z");
//};

//public: bool c_file_details_pipe::get_modification_author_signed_into_live(void) const
//{
//    mangled_ppc("?get_modification_author_signed_into_live@c_file_details_pipe@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, wchar_t const *, wchar_t const *& (c_file_details_pipe_client_component::get_display_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_client_component@@PB_W$1?get_display_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_file_details_pipe_client_component::get_display_name(void) const
//{
//    mangled_ppc("?get_display_name@c_file_details_pipe_client_component@@QBAPB_WXZ");
//};

//public: wchar_t const * c_file_details_pipe::get_display_name(void) const
//{
//    mangled_ppc("?get_display_name@c_file_details_pipe@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_file_details_pipe_client_component, wchar_t const *, wchar_t const *& (c_file_details_pipe_client_component::get_display_description::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_file_details_pipe_client_component@@PB_W$1?get_display_description@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_file_details_pipe_client_component::get_display_description(void) const
//{
//    mangled_ppc("?get_display_description@c_file_details_pipe_client_component@@QBAPB_WXZ");
//};

//public: wchar_t const * c_file_details_pipe::get_display_description(void) const
//{
//    mangled_ppc("?get_display_description@c_file_details_pipe@@QBAPB_WXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, unsigned long, bool & (c_file_details_pipe_client_component::get_film_seconds::*)(unsigned long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@K$1?get_film_seconds@1@QBA_NPAK@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_film_seconds(unsigned long *) const
//{
//    mangled_ppc("?get_film_seconds@c_file_details_pipe_client_component@@QBA_NPAK@Z");
//};

//public: bool c_file_details_pipe::get_film_seconds(unsigned long *) const
//{
//    mangled_ppc("?get_film_seconds@c_file_details_pipe@@QBA_NPAK@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, char, bool & (c_file_details_pipe_client_component::get_game_engine_icon_index::*)(char *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@D$1?get_game_engine_icon_index@1@QBA_NPAD@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_game_engine_icon_index(char *) const
//{
//    mangled_ppc("?get_game_engine_icon_index@c_file_details_pipe_client_component@@QBA_NPAD@Z");
//};

//public: bool c_file_details_pipe::get_game_engine_icon_index(char *) const
//{
//    mangled_ppc("?get_game_engine_icon_index@c_file_details_pipe@@QBA_NPAD@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, long, bool & (c_file_details_pipe_client_component::get_campaign_id::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@J$1?get_campaign_id@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_campaign_id(long *) const
//{
//    mangled_ppc("?get_campaign_id@c_file_details_pipe_client_component@@QBA_NPAJ@Z");
//};

//public: bool c_file_details_pipe::get_campaign_id(enum e_campaign_id *) const
//{
//    mangled_ppc("?get_campaign_id@c_file_details_pipe@@QBA_NPAW4e_campaign_id@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_campaign_metagame_scoring::*)(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_campaign_metagame_scoring@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_campaign_metagame_scoring(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_campaign_metagame_scoring@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_file_details_pipe::get_campaign_metagame_scoring(enum e_campaign_metagame_scoring *) const
//{
//    mangled_ppc("?get_campaign_metagame_scoring@c_file_details_pipe@@QBA_NPAW4e_campaign_metagame_scoring@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, short, bool & (c_file_details_pipe_client_component::get_campaign_insertion_point::*)(short *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@F$1?get_campaign_insertion_point@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_campaign_insertion_point(short *) const
//{
//    mangled_ppc("?get_campaign_insertion_point@c_file_details_pipe_client_component@@QBA_NPAF@Z");
//};

//public: bool c_file_details_pipe::get_campaign_insertion_point(short *) const
//{
//    mangled_ppc("?get_campaign_insertion_point@c_file_details_pipe@@QBA_NPAF@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_file_details_pipe_client_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, bool & (c_file_details_pipe_client_component::get_difficulty_level::*)(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_file_details_pipe_client_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_difficulty_level@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_file_details_pipe_client_component::get_difficulty_level(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_difficulty_level@c_file_details_pipe_client_component@@QBA_NPAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, unsigned long *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAK@Z");
//};

//class c_cui_component * cui_component_create<class c_file_details_pipe_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_file_details_pipe_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_file_details_pipe_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_file_details_pipe_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_file_details_pipe_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_file_details_pipe_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_file_details_pipe_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_file_details_pipe_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_file_details_pipe_reader_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_file_details_pipe_reader_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_file_details_pipe_reader_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_file_details_pipe_reader_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

