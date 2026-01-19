/* ---------- headers */

#include "omaha\networking\online\files\online_file_transfer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool operator==(struct s_online_file_transfer_id const &, struct s_online_file_transfer_id const &);
// public: c_online_file_transfer::c_online_file_transfer(void);
// public: c_online_file_transfer::c_online_file_transfer(char const *, struct s_content_item_metadata const *, unsigned __int64);
// public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, char const *);
// public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, char const *, struct s_content_item_metadata const *, unsigned __int64);
// public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, struct s_content_item_platform_handle const *, struct s_content_item_metadata const *, unsigned __int64);
// public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, struct s_content_item_platform_handle const *, struct s_content_item_metadata const *);
// public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, unsigned __int64, struct s_online_file_metadata const *, char const *);
// public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, unsigned __int64, struct s_online_file_metadata const *);
// public: bool c_online_file_transfer::is_valid(void) const;
// public: bool c_online_file_transfer::is_upload(void) const;
// public: void c_online_file_transfer::get_upload_source_filename(class s_static_string<256> *) const;
// public: bool c_online_file_transfer::is_upload_source_file(void) const;
// public: void c_online_file_transfer::get_upload_source_file_reference(struct s_file_reference *) const;
// public: void c_online_file_transfer::get_upload_source_content_item_container_name(class s_static_string<43> *) const;
// public: bool c_online_file_transfer::is_upload_source_content_item(void) const;
// public: void c_online_file_transfer::get_upload_source_content_item_container_name(class c_static_string<43> *) const;
// public: void c_online_file_transfer::get_download_target_file_reference(struct s_file_reference *) const;
// public: bool c_online_file_transfer::is_download_target_file(void) const;
// public: void c_online_file_transfer::get_metadata(struct s_content_item_metadata *) const;
// public: enum e_content_item_type c_online_file_transfer::get_metadata_type(void) const;
// public: unsigned long c_online_file_transfer::get_metadata_file_size(void) const;
// public: enum e_gui_game_mode c_online_file_transfer::get_metadata_activity(void) const;
// public: enum e_game_mode c_online_file_transfer::get_metadata_game_mode(void) const;
// public: enum e_game_engine_type c_online_file_transfer::get_metadata_game_engine_type(void) const;
// public: enum e_map_id c_online_file_transfer::get_metadata_map_id(void) const;
// public: struct s_content_item_history const * c_online_file_transfer::get_creation_history_metadata(void) const;
// public: struct s_content_item_history const * c_online_file_transfer::get_modification_history_metadata(void) const;
// public: struct s_content_item_display_metadata const * c_online_file_transfer::get_display_metadata(void) const;
// public: struct s_content_item_film_metadata const * c_online_file_transfer::get_film_metadata(void) const;
// public: struct s_content_item_matchmaking_metadata const * c_online_file_transfer::get_matchmaking_metadata(void) const;
// public: struct s_content_item_forge_metadata const * c_online_file_transfer::get_forge_metadata(void) const;
// public: struct s_content_item_campaign_metadata const * c_online_file_transfer::get_campaign_metadata(void) const;
// public: struct s_content_item_firefight_metadata const * c_online_file_transfer::get_firefight_metadata(void) const;
// public: struct s_content_item_multiplayer_metadata const * c_online_file_transfer::get_multiplayer_metadata(void) const;
// public: void c_online_file_transfer::get_record_file_reference(struct s_file_reference *) const;
// public: void c_online_file_transfer::get_temp_file_reference(struct s_file_reference *) const;
// private: void c_online_file_transfer::initialize_state(void);
// private: void c_online_file_transfer::add_file_reference_directories_and_name(struct s_file_reference *) const;
// public: s_content_item_mini_metadata::s_content_item_mini_metadata(void);
// public: s_content_item_mini_metadata_input::s_content_item_mini_metadata_input(void);
// bool operator<(class c_online_file_transfer const &, class c_online_file_transfer const &);
// void online_file_transfer_get_root_directory_reference(struct s_file_reference *);
// void online_file_transfer_get_records_directory_reference(struct s_file_reference *);
// void online_file_transfer_get_temp_directory_reference(struct s_file_reference *);
// public: enum e_game_mode c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_game_mode(void) const;
// public: class c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_upload_source);
// public: enum s_online_file_transfer_types::e_upload_source c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_upload_source(void) const;
// public: bool c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_upload_source) const;
// public: class c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_upload_target);
// public: enum s_online_file_transfer_types::e_upload_target c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_upload_target(void) const;
// public: bool c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_upload_target) const;
// public: class c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_download_target);
// public: enum s_online_file_transfer_types::e_download_target c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_download_target(void) const;
// public: bool c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_download_target) const;
// public: class c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_type);
// public: enum s_online_file_transfer_types::e_type c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_type(void) const;
// public: class c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_owner);
// public: enum s_online_file_transfer_types::e_owner c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_owner(void) const;
// public: bool c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_owner) const;
// public: class c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_status);
// public: enum s_online_file_transfer_types::e_status c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_status(void) const;
// public: struct _XCONTENT_DATA const * c_opaque_data<struct _XCONTENT_DATA, 308, 4>::get_const(void) const;
// public: void s_static_string<43>::set(char const *);
// public: void s_static_string<43>::set_bounded(char const *, long);
// public: bool s_static_string<43>::is_equal(char const *) const;
// public: char const * s_static_string<43>::get_string(void) const;
// public: void c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver> const &) const;
// public: void c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum s_online_file_transfer_types::e_flag) const;
// public: bool s_static_string<256>::is_equal_case_insensitive(char const *) const;
// public: c_static_string<43>::c_static_string<43>(void);
// void add_file_reference_content_directory_and_name<class s_static_string<43> >(struct s_file_reference *, class s_static_string<43> const &);
// void add_file_reference_content_directory_and_name<class c_static_string<43> >(struct s_file_reference *, class c_static_string<43> const &);
// public: void s_static_string<43>::clear(void);
// public: long s_static_string<43>::length(void) const;
// public: static bool c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_online_file_transfer_types::e_flag);
// private: static unsigned char c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_online_file_transfer_types::e_flag);

//bool operator==(struct s_online_file_transfer_id const &, struct s_online_file_transfer_id const &)
//{
//    mangled_ppc("??8@YA_NABUs_online_file_transfer_id@@0@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(void)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@XZ");
//};

//public: c_online_file_transfer::c_online_file_transfer(char const *, struct s_content_item_metadata const *, unsigned __int64)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@PBDPBUs_content_item_metadata@@_K@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, char const *)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@_KPBD@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, char const *, struct s_content_item_metadata const *, unsigned __int64)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@_KPBDPBUs_content_item_metadata@@0@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, struct s_content_item_platform_handle const *, struct s_content_item_metadata const *, unsigned __int64)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@_KPBUs_content_item_platform_handle@@PBUs_content_item_metadata@@0@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, struct s_content_item_platform_handle const *, struct s_content_item_metadata const *)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@_KPBUs_content_item_platform_handle@@PBUs_content_item_metadata@@@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, unsigned __int64, struct s_online_file_metadata const *, char const *)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@_K0PBUs_online_file_metadata@@PBD@Z");
//};

//public: c_online_file_transfer::c_online_file_transfer(unsigned __int64, unsigned __int64, struct s_online_file_metadata const *)
//{
//    mangled_ppc("??0c_online_file_transfer@@QAA@_K0PBUs_online_file_metadata@@@Z");
//};

//public: bool c_online_file_transfer::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_online_file_transfer@@QBA_NXZ");
//};

//public: bool c_online_file_transfer::is_upload(void) const
//{
//    mangled_ppc("?is_upload@c_online_file_transfer@@QBA_NXZ");
//};

//public: void c_online_file_transfer::get_upload_source_filename(class s_static_string<256> *) const
//{
//    mangled_ppc("?get_upload_source_filename@c_online_file_transfer@@QBAXPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: bool c_online_file_transfer::is_upload_source_file(void) const
//{
//    mangled_ppc("?is_upload_source_file@c_online_file_transfer@@QBA_NXZ");
//};

//public: void c_online_file_transfer::get_upload_source_file_reference(struct s_file_reference *) const
//{
//    mangled_ppc("?get_upload_source_file_reference@c_online_file_transfer@@QBAXPAUs_file_reference@@@Z");
//};

//public: void c_online_file_transfer::get_upload_source_content_item_container_name(class s_static_string<43> *) const
//{
//    mangled_ppc("?get_upload_source_content_item_container_name@c_online_file_transfer@@QBAXPAV?$s_static_string@$0CL@@@@Z");
//};

//public: bool c_online_file_transfer::is_upload_source_content_item(void) const
//{
//    mangled_ppc("?is_upload_source_content_item@c_online_file_transfer@@QBA_NXZ");
//};

//public: void c_online_file_transfer::get_upload_source_content_item_container_name(class c_static_string<43> *) const
//{
//    mangled_ppc("?get_upload_source_content_item_container_name@c_online_file_transfer@@QBAXPAV?$c_static_string@$0CL@@@@Z");
//};

//public: void c_online_file_transfer::get_download_target_file_reference(struct s_file_reference *) const
//{
//    mangled_ppc("?get_download_target_file_reference@c_online_file_transfer@@QBAXPAUs_file_reference@@@Z");
//};

//public: bool c_online_file_transfer::is_download_target_file(void) const
//{
//    mangled_ppc("?is_download_target_file@c_online_file_transfer@@QBA_NXZ");
//};

//public: void c_online_file_transfer::get_metadata(struct s_content_item_metadata *) const
//{
//    mangled_ppc("?get_metadata@c_online_file_transfer@@QBAXPAUs_content_item_metadata@@@Z");
//};

//public: enum e_content_item_type c_online_file_transfer::get_metadata_type(void) const
//{
//    mangled_ppc("?get_metadata_type@c_online_file_transfer@@QBA?AW4e_content_item_type@@XZ");
//};

//public: unsigned long c_online_file_transfer::get_metadata_file_size(void) const
//{
//    mangled_ppc("?get_metadata_file_size@c_online_file_transfer@@QBAKXZ");
//};

//public: enum e_gui_game_mode c_online_file_transfer::get_metadata_activity(void) const
//{
//    mangled_ppc("?get_metadata_activity@c_online_file_transfer@@QBA?AW4e_gui_game_mode@@XZ");
//};

//public: enum e_game_mode c_online_file_transfer::get_metadata_game_mode(void) const
//{
//    mangled_ppc("?get_metadata_game_mode@c_online_file_transfer@@QBA?AW4e_game_mode@@XZ");
//};

//public: enum e_game_engine_type c_online_file_transfer::get_metadata_game_engine_type(void) const
//{
//    mangled_ppc("?get_metadata_game_engine_type@c_online_file_transfer@@QBA?AW4e_game_engine_type@@XZ");
//};

//public: enum e_map_id c_online_file_transfer::get_metadata_map_id(void) const
//{
//    mangled_ppc("?get_metadata_map_id@c_online_file_transfer@@QBA?AW4e_map_id@@XZ");
//};

//public: struct s_content_item_history const * c_online_file_transfer::get_creation_history_metadata(void) const
//{
//    mangled_ppc("?get_creation_history_metadata@c_online_file_transfer@@QBAPBUs_content_item_history@@XZ");
//};

//public: struct s_content_item_history const * c_online_file_transfer::get_modification_history_metadata(void) const
//{
//    mangled_ppc("?get_modification_history_metadata@c_online_file_transfer@@QBAPBUs_content_item_history@@XZ");
//};

//public: struct s_content_item_display_metadata const * c_online_file_transfer::get_display_metadata(void) const
//{
//    mangled_ppc("?get_display_metadata@c_online_file_transfer@@QBAPBUs_content_item_display_metadata@@XZ");
//};

//public: struct s_content_item_film_metadata const * c_online_file_transfer::get_film_metadata(void) const
//{
//    mangled_ppc("?get_film_metadata@c_online_file_transfer@@QBAPBUs_content_item_film_metadata@@XZ");
//};

//public: struct s_content_item_matchmaking_metadata const * c_online_file_transfer::get_matchmaking_metadata(void) const
//{
//    mangled_ppc("?get_matchmaking_metadata@c_online_file_transfer@@QBAPBUs_content_item_matchmaking_metadata@@XZ");
//};

//public: struct s_content_item_forge_metadata const * c_online_file_transfer::get_forge_metadata(void) const
//{
//    mangled_ppc("?get_forge_metadata@c_online_file_transfer@@QBAPBUs_content_item_forge_metadata@@XZ");
//};

//public: struct s_content_item_campaign_metadata const * c_online_file_transfer::get_campaign_metadata(void) const
//{
//    mangled_ppc("?get_campaign_metadata@c_online_file_transfer@@QBAPBUs_content_item_campaign_metadata@@XZ");
//};

//public: struct s_content_item_firefight_metadata const * c_online_file_transfer::get_firefight_metadata(void) const
//{
//    mangled_ppc("?get_firefight_metadata@c_online_file_transfer@@QBAPBUs_content_item_firefight_metadata@@XZ");
//};

//public: struct s_content_item_multiplayer_metadata const * c_online_file_transfer::get_multiplayer_metadata(void) const
//{
//    mangled_ppc("?get_multiplayer_metadata@c_online_file_transfer@@QBAPBUs_content_item_multiplayer_metadata@@XZ");
//};

//public: void c_online_file_transfer::get_record_file_reference(struct s_file_reference *) const
//{
//    mangled_ppc("?get_record_file_reference@c_online_file_transfer@@QBAXPAUs_file_reference@@@Z");
//};

//public: void c_online_file_transfer::get_temp_file_reference(struct s_file_reference *) const
//{
//    mangled_ppc("?get_temp_file_reference@c_online_file_transfer@@QBAXPAUs_file_reference@@@Z");
//};

//private: void c_online_file_transfer::initialize_state(void)
//{
//    mangled_ppc("?initialize_state@c_online_file_transfer@@AAAXXZ");
//};

//private: void c_online_file_transfer::add_file_reference_directories_and_name(struct s_file_reference *) const
//{
//    mangled_ppc("?add_file_reference_directories_and_name@c_online_file_transfer@@ABAXPAUs_file_reference@@@Z");
//};

//public: s_content_item_mini_metadata::s_content_item_mini_metadata(void)
//{
//    mangled_ppc("??0s_content_item_mini_metadata@@QAA@XZ");
//};

//public: s_content_item_mini_metadata_input::s_content_item_mini_metadata_input(void)
//{
//    mangled_ppc("??0s_content_item_mini_metadata_input@@QAA@XZ");
//};

//bool operator<(class c_online_file_transfer const &, class c_online_file_transfer const &)
//{
//    mangled_ppc("??M@YA_NABVc_online_file_transfer@@0@Z");
//};

//void online_file_transfer_get_root_directory_reference(struct s_file_reference *)
//{
//    mangled_ppc("?online_file_transfer_get_root_directory_reference@@YAXPAUs_file_reference@@@Z");
//};

//void online_file_transfer_get_records_directory_reference(struct s_file_reference *)
//{
//    mangled_ppc("?online_file_transfer_get_records_directory_reference@@YAXPAUs_file_reference@@@Z");
//};

//void online_file_transfer_get_temp_directory_reference(struct s_file_reference *)
//{
//    mangled_ppc("?online_file_transfer_get_temp_directory_reference@@YAXPAUs_file_reference@@@Z");
//};

//public: enum e_game_mode c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_game_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_game_mode@@XZ");
//};

//public: class c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_upload_source)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_upload_source@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@QAAAAV0@W4e_upload_source@s_online_file_transfer_types@@@Z");
//};

//public: enum s_online_file_transfer_types::e_upload_source c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_upload_source(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_upload_source@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_upload_source@s_online_file_transfer_types@@XZ");
//};

//public: bool c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_upload_source) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_upload_source@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_upload_source@s_online_file_transfer_types@@@Z");
//};

//public: class c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_upload_target)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_upload_target@s_online_file_transfer_types@@D$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_upload_target@s_online_file_transfer_types@@@Z");
//};

//public: enum s_online_file_transfer_types::e_upload_target c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_upload_target(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_upload_target@s_online_file_transfer_types@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_upload_target@s_online_file_transfer_types@@XZ");
//};

//public: bool c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_upload_target) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_upload_target@s_online_file_transfer_types@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_upload_target@s_online_file_transfer_types@@@Z");
//};

//public: class c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_download_target)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_download_target@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@QAAAAV0@W4e_download_target@s_online_file_transfer_types@@@Z");
//};

//public: enum s_online_file_transfer_types::e_download_target c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_download_target(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_download_target@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_download_target@s_online_file_transfer_types@@XZ");
//};

//public: bool c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_download_target) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_download_target@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_download_target@s_online_file_transfer_types@@@Z");
//};

//public: class c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QAAAAV0@W4e_type@s_online_file_transfer_types@@@Z");
//};

//public: enum s_online_file_transfer_types::e_type c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QBA?AW4e_type@s_online_file_transfer_types@@XZ");
//};

//public: class c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_owner)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_owner@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QAAAAV0@W4e_owner@s_online_file_transfer_types@@@Z");
//};

//public: enum s_online_file_transfer_types::e_owner c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_owner(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_owner@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QBA?AW4e_owner@s_online_file_transfer_types@@XZ");
//};

//public: bool c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_owner) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_owner@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QBA_NW4e_owner@s_online_file_transfer_types@@@Z");
//};

//public: class c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver> & c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::operator=(enum s_online_file_transfer_types::e_status)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@QAAAAV0@W4e_status@s_online_file_transfer_types@@@Z");
//};

//public: enum s_online_file_transfer_types::e_status c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::operator enum s_online_file_transfer_types::e_status(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@QBA?AW4e_status@s_online_file_transfer_types@@XZ");
//};

//public: struct _XCONTENT_DATA const * c_opaque_data<struct _XCONTENT_DATA, 308, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_opaque_data@U_XCONTENT_DATA@@$0BDE@$03@@QBAPBU_XCONTENT_DATA@@XZ");
//};

//public: void s_static_string<43>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0CL@@@QAAXPBD@Z");
//};

//public: void s_static_string<43>::set_bounded(char const *, long)
//{
//    mangled_ppc("?set_bounded@?$s_static_string@$0CL@@@QAAXPBDJ@Z");
//};

//public: bool s_static_string<43>::is_equal(char const *) const
//{
//    mangled_ppc("?is_equal@?$s_static_string@$0CL@@@QBA_NPBD@Z");
//};

//public: char const * s_static_string<43>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0CL@@@QBAPBDXZ");
//};

//public: void c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_download_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_download_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: void c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum s_online_file_transfer_types::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_online_file_transfer_types@@@Z");
//};

//public: bool s_static_string<256>::is_equal_case_insensitive(char const *) const
//{
//    mangled_ppc("?is_equal_case_insensitive@?$s_static_string@$0BAA@@@QBA_NPBD@Z");
//};

//public: c_static_string<43>::c_static_string<43>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0CL@@@QAA@XZ");
//};

//void add_file_reference_content_directory_and_name<class s_static_string<43> >(struct s_file_reference *, class s_static_string<43> const &)
//{
//    mangled_ppc("??$add_file_reference_content_directory_and_name@V?$s_static_string@$0CL@@@@@YAXPAUs_file_reference@@ABV?$s_static_string@$0CL@@@@Z");
//};

//void add_file_reference_content_directory_and_name<class c_static_string<43> >(struct s_file_reference *, class c_static_string<43> const &)
//{
//    mangled_ppc("??$add_file_reference_content_directory_and_name@V?$c_static_string@$0CL@@@@@YAXPAUs_file_reference@@ABV?$c_static_string@$0CL@@@@Z");
//};

//public: void s_static_string<43>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0CL@@@QAAXXZ");
//};

//public: long s_static_string<43>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0CL@@@QBAJXZ");
//};

//public: static bool c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_online_file_transfer_types::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_online_file_transfer_types@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_online_file_transfer_types::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flag@s_online_file_transfer_types@@@Z");
//};

