/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_campaign_flags const c_flags_no_init<enum e_campaign_flags, unsigned long, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_campaign_flags@@K$01Us_default_enum_string_resolver@@@@2W4e_campaign_flags@@B"
// public: static enum e_level_flags const c_flags_no_init<enum e_level_flags, unsigned long, 12, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_level_flags@@K$0M@Us_default_enum_string_resolver@@@@2W4e_level_flags@@B"
// enum e_map_id const _map_id_first; // "?_map_id_first@@3W4e_map_id@@B"
// enum e_map_id const k_main_menu_map_id; // "?k_main_menu_map_id@@3W4e_map_id@@B"

// public: void s_blf_chunk_campaign::initialize(void);
// public: void s_blf_chunk_scenario::initialize(void);
// void levels_initialize(void);
// void levels_dispose(void);
// public: bool s_level_globals::enumeration_in_progress(void) const;
// void levels_initialize_for_new_map(void);
// void levels_dispose_from_old_map(void);
// void levels_update(void);
// bool levels_enumeration_in_progress(void);
// bool levels_get_campaign_data(enum e_campaign_id, struct s_campaign_datum *);
// void levels_get_campaign_ids(enum e_campaign_id *, long *);
// void levels_get_campaign_map_ids(enum e_campaign_id, enum e_map_id *, long *);
// bool levels_try_and_get_main_menu_map(struct s_level_datum *);
// bool levels_try_and_get_campaign_map(enum e_map_id, struct s_level_datum *);
// bool levels_try_and_get_campaign_insertion(enum e_map_id, struct s_level_insertion_datum *);
// bool levels_try_and_get_multiplayer_map(enum e_map_id, struct s_level_datum *);
// enum e_map_id levels_get_campaign_first_map_id(enum e_campaign_id);
// enum e_map_id levels_get_campaign_next_map_id(enum e_campaign_id, enum e_map_id);
// enum e_map_id levels_get_campaign_map_by_display_name(wchar_t *);
// enum e_campaign_id levels_get_campaign_id_from_path(char const *);
// long levels_get_campaign_level_index(enum e_campaign_id, enum e_map_id);
// enum e_map_id levels_get_campaign_map_id_from_index(enum e_campaign_id, short);
// bool levels_try_and_get_campaign_map_by_index(enum e_campaign_id, short, struct s_level_datum *);
// long levels_get_campaign_level_count(enum e_campaign_id);
// enum e_map_id levels_get_default_multiplayer_map_id(void);
// enum e_map_id levels_get_multiplayer_map_by_display_name(wchar_t *);
// bool levels_get_multiplayer_map_is_allowed(enum e_map_id);
// void levels_get_multiplayer_map_ids(enum e_map_id *, long *);
// unsigned __int64 levels_get_available_map_mask(void);
// bool levels_map_is_available(enum e_map_id);
// long levels_get_map_index(enum e_map_id);
// enum e_language levels_get_disk_language(void);
// enum e_map_id levels_get_default_firefight_map_id(void);
// void levels_get_firefight_map_ids(enum e_map_id *, long *);
// bool levels_try_and_get_firefight_map(enum e_map_id, struct s_level_datum *);
// char * levels_get_path(enum e_campaign_id, enum e_map_id, char *, long);
// bool levels_path_is_on_dvd(char const *);
// bool levels_path_is_dlc(char const *);
// void levels_open_dlc(char const *, bool);
// void levels_close_all_dlc(bool);
// bool levels_is_dlc_ready(void);
// wchar_t * levels_get_map_name(enum e_campaign_id, enum e_map_id, wchar_t *, unsigned int);
// wchar_t * levels_get_active_session_map_name(wchar_t *, long);
// bool levels_map_id_is_fake(enum e_map_id);
// void levels_add_map_from_scripting(enum e_map_type, long, char const *);
// void levels_add_campaign_map_from_scripting(long, char const *);
// void levels_add_fake_campaign_map_from_scripting(char const *);
// void levels_add_fake_multiplayer_map_from_scripting(char const *);
// bool levels_begin_dvd_enumeration(void);
// enum e_async_completion levels_dvd_enumeration_callback(void *);
// enum e_dvd_find_files_stage operator++(enum e_dvd_find_files_stage &, int);
// public: s_cache_file_header::s_cache_file_header(void);
// bool level_has_gameplay(struct s_game_options const *);
// void levels_remove_campaign_dlc(class c_enum<enum e_campaign_id, char, -1, 4, struct s_campaign_id_string_resolver>);
// void levels_remove_scenario_dlc(class s_static_string<256> const *);
// void cache_files_revoke_and_forbid_map(long, char const *);
// void levels_register_dlc_cache_files(void);
// void cache_files_register_dlc_map(long, char const *);
// bool levels_try_and_get_by_map_id(struct s_data_array *, enum e_map_id, struct s_level_datum *);
// bool levels_find_path(struct s_data_array *, enum e_map_id, char *, long);
// bool levels_find_map_name(struct s_data_array *, enum e_map_id, wchar_t *, long);
// void levels_process_level_configuration_file(struct s_file_reference *, char const *, bool);
// void levels_process_campaign_configuration_file(struct s_file_reference *, char const *, bool);
// void levels_add_campaign(struct s_blf_chunk_campaign const *, bool, char const *, bool);
// struct s_level_datum const * levels_add_level(struct s_blf_chunk_scenario const *, bool, char const *, bool);
// enum e_level_device_location levels_get_media_relative_device_location(void);
// enum e_level_device_location levels_get_device_location(char const *);
// public: void c_data_iterator<struct s_campaign_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_campaign_datum>::next(void);
// public: struct s_campaign_datum * c_data_iterator<struct s_campaign_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_campaign_datum>::get_index(void) const;
// public: void c_data_iterator<struct s_level_insertion_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_level_insertion_datum>::next(void);
// public: struct s_level_insertion_datum * c_data_iterator<struct s_level_insertion_datum>::get_datum(void) const;
// public: void c_data_iterator<struct s_level_datum const>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_level_datum const>::next(void);
// public: struct s_level_datum const * c_data_iterator<struct s_level_datum const>::get_datum(void) const;
// public: void c_data_iterator<struct s_campaign_datum const>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_campaign_datum const>::next(void);
// public: struct s_campaign_datum const * c_data_iterator<struct s_campaign_datum const>::get_datum(void) const;
// public: void c_data_iterator<struct s_level_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_level_datum>::next(void);
// public: struct s_level_datum * c_data_iterator<struct s_level_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_level_datum>::get_index(void) const;
// public: void c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_campaign_flags) const;
// public: void c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_campaign_flags, bool);
// public: void c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::set(enum e_level_flags, bool);
// public: void s_static_string<256>::set_bounded(char const *, long);
// public: void c_flags_no_init<enum e_campaign_flags, unsigned long, 2, struct s_default_enum_string_resolver>::clear(void);
// public: unsigned long c_flags_no_init<enum e_campaign_flags, unsigned long, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_level_flags, unsigned long, 12, struct s_default_enum_string_resolver>::clear(void);
// public: unsigned long c_flags_no_init<enum e_level_flags, unsigned long, 12, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// struct s_async_task_id async_task_add<struct s_configuration_enumeration_task>(long, struct s_configuration_enumeration_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static bool c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_campaign_flags);
// private: static unsigned short c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_campaign_flags);
// struct s_async_task_id async_task_add_ex<struct s_configuration_enumeration_task>(long, struct s_configuration_enumeration_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: s_level_globals::~s_level_globals(void);
// void g_level_globals::`dynamic atexit destructor'(void);

//public: void s_blf_chunk_campaign::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_campaign@@QAAXXZ");
//};

//public: void s_blf_chunk_scenario::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_scenario@@QAAXXZ");
//};

//void levels_initialize(void)
//{
//    mangled_ppc("?levels_initialize@@YAXXZ");
//};

//void levels_dispose(void)
//{
//    mangled_ppc("?levels_dispose@@YAXXZ");
//};

//public: bool s_level_globals::enumeration_in_progress(void) const
//{
//    mangled_ppc("?enumeration_in_progress@s_level_globals@@QBA_NXZ");
//};

//void levels_initialize_for_new_map(void)
//{
//    mangled_ppc("?levels_initialize_for_new_map@@YAXXZ");
//};

//void levels_dispose_from_old_map(void)
//{
//    mangled_ppc("?levels_dispose_from_old_map@@YAXXZ");
//};

//void levels_update(void)
//{
//    mangled_ppc("?levels_update@@YAXXZ");
//};

//bool levels_enumeration_in_progress(void)
//{
//    mangled_ppc("?levels_enumeration_in_progress@@YA_NXZ");
//};

//bool levels_get_campaign_data(enum e_campaign_id, struct s_campaign_datum *)
//{
//    mangled_ppc("?levels_get_campaign_data@@YA_NW4e_campaign_id@@PAUs_campaign_datum@@@Z");
//};

//void levels_get_campaign_ids(enum e_campaign_id *, long *)
//{
//    mangled_ppc("?levels_get_campaign_ids@@YAXPAW4e_campaign_id@@PAJ@Z");
//};

//void levels_get_campaign_map_ids(enum e_campaign_id, enum e_map_id *, long *)
//{
//    mangled_ppc("?levels_get_campaign_map_ids@@YAXW4e_campaign_id@@PAW4e_map_id@@PAJ@Z");
//};

//bool levels_try_and_get_main_menu_map(struct s_level_datum *)
//{
//    mangled_ppc("?levels_try_and_get_main_menu_map@@YA_NPAUs_level_datum@@@Z");
//};

//bool levels_try_and_get_campaign_map(enum e_map_id, struct s_level_datum *)
//{
//    mangled_ppc("?levels_try_and_get_campaign_map@@YA_NW4e_map_id@@PAUs_level_datum@@@Z");
//};

//bool levels_try_and_get_campaign_insertion(enum e_map_id, struct s_level_insertion_datum *)
//{
//    mangled_ppc("?levels_try_and_get_campaign_insertion@@YA_NW4e_map_id@@PAUs_level_insertion_datum@@@Z");
//};

//bool levels_try_and_get_multiplayer_map(enum e_map_id, struct s_level_datum *)
//{
//    mangled_ppc("?levels_try_and_get_multiplayer_map@@YA_NW4e_map_id@@PAUs_level_datum@@@Z");
//};

//enum e_map_id levels_get_campaign_first_map_id(enum e_campaign_id)
//{
//    mangled_ppc("?levels_get_campaign_first_map_id@@YA?AW4e_map_id@@W4e_campaign_id@@@Z");
//};

//enum e_map_id levels_get_campaign_next_map_id(enum e_campaign_id, enum e_map_id)
//{
//    mangled_ppc("?levels_get_campaign_next_map_id@@YA?AW4e_map_id@@W4e_campaign_id@@W41@@Z");
//};

//enum e_map_id levels_get_campaign_map_by_display_name(wchar_t *)
//{
//    mangled_ppc("?levels_get_campaign_map_by_display_name@@YA?AW4e_map_id@@PA_W@Z");
//};

//enum e_campaign_id levels_get_campaign_id_from_path(char const *)
//{
//    mangled_ppc("?levels_get_campaign_id_from_path@@YA?AW4e_campaign_id@@PBD@Z");
//};

//long levels_get_campaign_level_index(enum e_campaign_id, enum e_map_id)
//{
//    mangled_ppc("?levels_get_campaign_level_index@@YAJW4e_campaign_id@@W4e_map_id@@@Z");
//};

//enum e_map_id levels_get_campaign_map_id_from_index(enum e_campaign_id, short)
//{
//    mangled_ppc("?levels_get_campaign_map_id_from_index@@YA?AW4e_map_id@@W4e_campaign_id@@F@Z");
//};

//bool levels_try_and_get_campaign_map_by_index(enum e_campaign_id, short, struct s_level_datum *)
//{
//    mangled_ppc("?levels_try_and_get_campaign_map_by_index@@YA_NW4e_campaign_id@@FPAUs_level_datum@@@Z");
//};

//long levels_get_campaign_level_count(enum e_campaign_id)
//{
//    mangled_ppc("?levels_get_campaign_level_count@@YAJW4e_campaign_id@@@Z");
//};

//enum e_map_id levels_get_default_multiplayer_map_id(void)
//{
//    mangled_ppc("?levels_get_default_multiplayer_map_id@@YA?AW4e_map_id@@XZ");
//};

//enum e_map_id levels_get_multiplayer_map_by_display_name(wchar_t *)
//{
//    mangled_ppc("?levels_get_multiplayer_map_by_display_name@@YA?AW4e_map_id@@PA_W@Z");
//};

//bool levels_get_multiplayer_map_is_allowed(enum e_map_id)
//{
//    mangled_ppc("?levels_get_multiplayer_map_is_allowed@@YA_NW4e_map_id@@@Z");
//};

//void levels_get_multiplayer_map_ids(enum e_map_id *, long *)
//{
//    mangled_ppc("?levels_get_multiplayer_map_ids@@YAXPAW4e_map_id@@PAJ@Z");
//};

//unsigned __int64 levels_get_available_map_mask(void)
//{
//    mangled_ppc("?levels_get_available_map_mask@@YA_KXZ");
//};

//bool levels_map_is_available(enum e_map_id)
//{
//    mangled_ppc("?levels_map_is_available@@YA_NW4e_map_id@@@Z");
//};

//long levels_get_map_index(enum e_map_id)
//{
//    mangled_ppc("?levels_get_map_index@@YAJW4e_map_id@@@Z");
//};

//enum e_language levels_get_disk_language(void)
//{
//    mangled_ppc("?levels_get_disk_language@@YA?AW4e_language@@XZ");
//};

//enum e_map_id levels_get_default_firefight_map_id(void)
//{
//    mangled_ppc("?levels_get_default_firefight_map_id@@YA?AW4e_map_id@@XZ");
//};

//void levels_get_firefight_map_ids(enum e_map_id *, long *)
//{
//    mangled_ppc("?levels_get_firefight_map_ids@@YAXPAW4e_map_id@@PAJ@Z");
//};

//bool levels_try_and_get_firefight_map(enum e_map_id, struct s_level_datum *)
//{
//    mangled_ppc("?levels_try_and_get_firefight_map@@YA_NW4e_map_id@@PAUs_level_datum@@@Z");
//};

//char * levels_get_path(enum e_campaign_id, enum e_map_id, char *, long)
//{
//    mangled_ppc("?levels_get_path@@YAPADW4e_campaign_id@@W4e_map_id@@PADJ@Z");
//};

//bool levels_path_is_on_dvd(char const *)
//{
//    mangled_ppc("?levels_path_is_on_dvd@@YA_NPBD@Z");
//};

//bool levels_path_is_dlc(char const *)
//{
//    mangled_ppc("?levels_path_is_dlc@@YA_NPBD@Z");
//};

//void levels_open_dlc(char const *, bool)
//{
//    mangled_ppc("?levels_open_dlc@@YAXPBD_N@Z");
//};

//void levels_close_all_dlc(bool)
//{
//    mangled_ppc("?levels_close_all_dlc@@YAX_N@Z");
//};

//bool levels_is_dlc_ready(void)
//{
//    mangled_ppc("?levels_is_dlc_ready@@YA_NXZ");
//};

//wchar_t * levels_get_map_name(enum e_campaign_id, enum e_map_id, wchar_t *, unsigned int)
//{
//    mangled_ppc("?levels_get_map_name@@YAPA_WW4e_campaign_id@@W4e_map_id@@PA_WI@Z");
//};

//wchar_t * levels_get_active_session_map_name(wchar_t *, long)
//{
//    mangled_ppc("?levels_get_active_session_map_name@@YAPA_WPA_WJ@Z");
//};

//bool levels_map_id_is_fake(enum e_map_id)
//{
//    mangled_ppc("?levels_map_id_is_fake@@YA_NW4e_map_id@@@Z");
//};

//void levels_add_map_from_scripting(enum e_map_type, long, char const *)
//{
//    mangled_ppc("?levels_add_map_from_scripting@@YAXW4e_map_type@@JPBD@Z");
//};

//void levels_add_campaign_map_from_scripting(long, char const *)
//{
//    mangled_ppc("?levels_add_campaign_map_from_scripting@@YAXJPBD@Z");
//};

//void levels_add_fake_campaign_map_from_scripting(char const *)
//{
//    mangled_ppc("?levels_add_fake_campaign_map_from_scripting@@YAXPBD@Z");
//};

//void levels_add_fake_multiplayer_map_from_scripting(char const *)
//{
//    mangled_ppc("?levels_add_fake_multiplayer_map_from_scripting@@YAXPBD@Z");
//};

//bool levels_begin_dvd_enumeration(void)
//{
//    mangled_ppc("?levels_begin_dvd_enumeration@@YA_NXZ");
//};

//enum e_async_completion levels_dvd_enumeration_callback(void *)
//{
//    mangled_ppc("?levels_dvd_enumeration_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_dvd_find_files_stage operator++(enum e_dvd_find_files_stage &, int)
//{
//    mangled_ppc("??E@YA?AW4e_dvd_find_files_stage@@AAW40@H@Z");
//};

//public: s_cache_file_header::s_cache_file_header(void)
//{
//    mangled_ppc("??0s_cache_file_header@@QAA@XZ");
//};

//bool level_has_gameplay(struct s_game_options const *)
//{
//    mangled_ppc("?level_has_gameplay@@YA_NPBUs_game_options@@@Z");
//};

//void levels_remove_campaign_dlc(class c_enum<enum e_campaign_id, char, -1, 4, struct s_campaign_id_string_resolver>)
//{
//    mangled_ppc("?levels_remove_campaign_dlc@@YAXV?$c_enum@W4e_campaign_id@@D$0?0$03Us_campaign_id_string_resolver@@@@@Z");
//};

//void levels_remove_scenario_dlc(class s_static_string<256> const *)
//{
//    mangled_ppc("?levels_remove_scenario_dlc@@YAXPBV?$s_static_string@$0BAA@@@@Z");
//};

//void cache_files_revoke_and_forbid_map(long, char const *)
//{
//    mangled_ppc("?cache_files_revoke_and_forbid_map@@YAXJPBD@Z");
//};

//void levels_register_dlc_cache_files(void)
//{
//    mangled_ppc("?levels_register_dlc_cache_files@@YAXXZ");
//};

//void cache_files_register_dlc_map(long, char const *)
//{
//    mangled_ppc("?cache_files_register_dlc_map@@YAXJPBD@Z");
//};

//bool levels_try_and_get_by_map_id(struct s_data_array *, enum e_map_id, struct s_level_datum *)
//{
//    mangled_ppc("?levels_try_and_get_by_map_id@@YA_NPAUs_data_array@@W4e_map_id@@PAUs_level_datum@@@Z");
//};

//bool levels_find_path(struct s_data_array *, enum e_map_id, char *, long)
//{
//    mangled_ppc("?levels_find_path@@YA_NPAUs_data_array@@W4e_map_id@@PADJ@Z");
//};

//bool levels_find_map_name(struct s_data_array *, enum e_map_id, wchar_t *, long)
//{
//    mangled_ppc("?levels_find_map_name@@YA_NPAUs_data_array@@W4e_map_id@@PA_WJ@Z");
//};

//void levels_process_level_configuration_file(struct s_file_reference *, char const *, bool)
//{
//    mangled_ppc("?levels_process_level_configuration_file@@YAXPAUs_file_reference@@PBD_N@Z");
//};

//void levels_process_campaign_configuration_file(struct s_file_reference *, char const *, bool)
//{
//    mangled_ppc("?levels_process_campaign_configuration_file@@YAXPAUs_file_reference@@PBD_N@Z");
//};

//void levels_add_campaign(struct s_blf_chunk_campaign const *, bool, char const *, bool)
//{
//    mangled_ppc("?levels_add_campaign@@YAXPBUs_blf_chunk_campaign@@_NPBD1@Z");
//};

//struct s_level_datum const * levels_add_level(struct s_blf_chunk_scenario const *, bool, char const *, bool)
//{
//    mangled_ppc("?levels_add_level@@YAPBUs_level_datum@@PBUs_blf_chunk_scenario@@_NPBD1@Z");
//};

//enum e_level_device_location levels_get_media_relative_device_location(void)
//{
//    mangled_ppc("?levels_get_media_relative_device_location@@YA?AW4e_level_device_location@@XZ");
//};

//enum e_level_device_location levels_get_device_location(char const *)
//{
//    mangled_ppc("?levels_get_device_location@@YA?AW4e_level_device_location@@PBD@Z");
//};

//public: void c_data_iterator<struct s_campaign_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_campaign_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_campaign_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_campaign_datum@@@@QAA_NXZ");
//};

//public: struct s_campaign_datum * c_data_iterator<struct s_campaign_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_campaign_datum@@@@QBAPAUs_campaign_datum@@XZ");
//};

//public: long c_data_iterator<struct s_campaign_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_campaign_datum@@@@QBAJXZ");
//};

//public: void c_data_iterator<struct s_level_insertion_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_level_insertion_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_level_insertion_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_level_insertion_datum@@@@QAA_NXZ");
//};

//public: struct s_level_insertion_datum * c_data_iterator<struct s_level_insertion_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_level_insertion_datum@@@@QBAPAUs_level_insertion_datum@@XZ");
//};

//public: void c_data_iterator<struct s_level_datum const>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@$$CBUs_level_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_level_datum const>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@$$CBUs_level_datum@@@@QAA_NXZ");
//};

//public: struct s_level_datum const * c_data_iterator<struct s_level_datum const>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@$$CBUs_level_datum@@@@QBAPBUs_level_datum@@XZ");
//};

//public: void c_data_iterator<struct s_campaign_datum const>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@$$CBUs_campaign_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_campaign_datum const>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@$$CBUs_campaign_datum@@@@QAA_NXZ");
//};

//public: struct s_campaign_datum const * c_data_iterator<struct s_campaign_datum const>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@$$CBUs_campaign_datum@@@@QBAPBUs_campaign_datum@@XZ");
//};

//public: void c_data_iterator<struct s_level_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_level_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_level_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_level_datum@@@@QAA_NXZ");
//};

//public: struct s_level_datum * c_data_iterator<struct s_level_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_level_datum@@@@QBAPAUs_level_datum@@XZ");
//};

//public: long c_data_iterator<struct s_level_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_level_datum@@@@QBAJXZ");
//};

//public: void c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_campaign_flags@@G$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_campaign_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_campaign_flags@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_campaign_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_campaign_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_campaign_flags@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_campaign_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_level_flags@@G$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::set(enum e_level_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_level_flags@@G$0M@Us_default_enum_string_resolver@@@@QAAXW4e_level_flags@@_N@Z");
//};

//public: void s_static_string<256>::set_bounded(char const *, long)
//{
//    mangled_ppc("?set_bounded@?$s_static_string@$0BAA@@@QAAXPBDJ@Z");
//};

//public: void c_flags_no_init<enum e_campaign_flags, unsigned long, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_campaign_flags@@K$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: unsigned long c_flags_no_init<enum e_campaign_flags, unsigned long, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_campaign_flags@@K$01Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_level_flags, unsigned long, 12, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_level_flags@@K$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: unsigned long c_flags_no_init<enum e_level_flags, unsigned long, 12, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_level_flags@@K$0M@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//struct s_async_task_id async_task_add<struct s_configuration_enumeration_task>(long, struct s_configuration_enumeration_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_configuration_enumeration_task@@@@YA?AUs_async_task_id@@JPBUs_configuration_enumeration_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_campaign_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_campaign_flags@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_campaign_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_campaign_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_campaign_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_campaign_flags@@G$01Us_default_enum_string_resolver@@@@CAGW4e_campaign_flags@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_configuration_enumeration_task>(long, struct s_configuration_enumeration_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_configuration_enumeration_task@@@@YA?AUs_async_task_id@@JPBUs_configuration_enumeration_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: s_level_globals::~s_level_globals(void)
//{
//    mangled_ppc("??1s_level_globals@@QAA@XZ");
//};

//void g_level_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_level_globals@@YAXXZ");
//};

