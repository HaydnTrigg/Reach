/* ---------- headers */

#include "omaha\networking\logic\network_lsp_presence.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_network_lsp_presence_flags const c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_network_lsp_presence_flags@@B"

// bool network_lsp_presence_initialize(void);
// void network_lsp_presence_update(void);
// void network_lsp_presence_dispose(void);
// bool network_lsp_presence_hearteat_in_progress(void);
// bool network_lsp_presence_last_hearteat_failed(void);
// void network_lsp_presence_write_blfs_to_file(bool);
// public: c_network_lsp_presence_query::c_network_lsp_presence_query(void);
// public: s_lsp_presence_query_blf_chunk::s_lsp_presence_query_blf_chunk(void);
// public: enum e_download_status c_network_lsp_presence_query::update(void);
// public: bool c_network_lsp_presence_query::query_players(long, unsigned __int64const *);
// public: void c_network_lsp_presence_query::reset_query(void);
// public: bool c_network_lsp_presence_query::is_busy(void) const;
// public: bool c_network_lsp_presence_query::get_results_players(struct s_lsp_presence_player_query_response_data *);
// void network_lsp_presence_build_desired_heartbeat(void);
// public: s_lsp_presence_heartbeat_blf_chunk::s_lsp_presence_heartbeat_blf_chunk(void);
// public: s_network_lsp_heartbeat_data::s_network_lsp_heartbeat_data(void);
// public: s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::s_static_array<struct s_network_lsp_heartbeat_player_data, 4>(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// bool network_lsp_presence_build_desired_heartbeat_from_session(class c_network_session const *, struct s_network_lsp_heartbeat_data *);
// void network_lsp_presence_build_heartbeat_session_player(struct s_player_configuration const *, struct s_network_lsp_heartbeat_session_player_data *);
// void network_lsp_presence_build_heartbeat_player(struct s_player_configuration const *, struct s_network_lsp_heartbeat_player_data *);
// bool network_lsp_presence_can_build_heartbeat(class c_network_session const *);
// bool network_lsp_presence_build_desired_heartbeat_no_session(struct s_network_lsp_heartbeat_data *);
// void network_lsp_presence_update_request(void);
// public: s_lsp_presence_heartbeat_blffile::s_lsp_presence_heartbeat_blffile(void);
// void network_lsp_presence_write_to_disk(char const *, void const *, long);
// void network_lsp_presence_handle_response(struct s_lsp_presence_heartbeat_blf_chunk const *, struct s_lsp_presence_heartbeat_response_blf_chunk const *);
// public: s_lsp_presence_heartbeat_response_blffile::s_lsp_presence_heartbeat_response_blffile(void);
// public: s_lsp_presence_heartbeat_response_blf_chunk::s_lsp_presence_heartbeat_response_blf_chunk(void);
// public: s_network_lsp_heartbeat_response_data::s_network_lsp_heartbeat_response_data(void);
// void network_lsp_presence_update_file_debugging(void);
// public: unsigned char * s_static_array<unsigned char, 40>::get_elements(void);
// public: c_http_stored_buffer_downloader<4244>::c_http_stored_buffer_downloader<4244>(void);
// merged_828AF2A0;
// public: virtual c_http_stored_buffer_downloader<4244>::~c_http_stored_buffer_downloader<4244>(void);
// public: bool c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::test(long) const;
// public: c_flags<long, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<long, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_network_lsp_presence_query::e_presence_query_flags) const;
// public: void c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum c_network_lsp_presence_query::e_presence_query_flags, bool);
// public: c_flags<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_lsp_presence_flags) const;
// public: void c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_lsp_presence_flags, bool);
// public: struct s_network_lsp_heartbeat_player_data & s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::operator[]<unsigned char>(unsigned char);
// public: struct s_network_lsp_heartbeat_session_player_data & s_static_array<struct s_network_lsp_heartbeat_session_player_data, 16>::operator[]<unsigned char>(unsigned char);
// public: struct s_network_lsp_heartbeat_player_data const & s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::operator[]<long>(long) const;
// public: void c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: bool c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum c_network_lsp_presence_query::e_presence_query_flags);
// private: static unsigned char c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum c_network_lsp_presence_query::e_presence_query_flags);
// public: static bool c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_lsp_presence_flags);
// private: static unsigned char c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_lsp_presence_flags);
// public: static bool s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::valid<unsigned char>(unsigned char);
// public: static bool s_static_array<struct s_network_lsp_heartbeat_session_player_data, 16>::valid<unsigned char>(unsigned char);
// public: static bool s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::valid<long>(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// private: static unsigned char c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_network_lsp_presence_query::e_presence_query_flags);
// public: s_network_lsp_presence_globals::s_network_lsp_presence_globals(void);
// public: c_http_stored_buffer_downloader<1024>::c_http_stored_buffer_downloader<1024>(void);
// merged_828AFDD0;
// public: virtual c_http_stored_buffer_downloader<1024>::~c_http_stored_buffer_downloader<1024>(void);
// public: c_flags<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_lsp_presence_flags);
// public: s_network_lsp_presence_globals::~s_network_lsp_presence_globals(void);
// void network_lsp_presence_globals::`dynamic atexit destructor'(void);

//bool network_lsp_presence_initialize(void)
//{
//    mangled_ppc("?network_lsp_presence_initialize@@YA_NXZ");
//};

//void network_lsp_presence_update(void)
//{
//    mangled_ppc("?network_lsp_presence_update@@YAXXZ");
//};

//void network_lsp_presence_dispose(void)
//{
//    mangled_ppc("?network_lsp_presence_dispose@@YAXXZ");
//};

//bool network_lsp_presence_hearteat_in_progress(void)
//{
//    mangled_ppc("?network_lsp_presence_hearteat_in_progress@@YA_NXZ");
//};

//bool network_lsp_presence_last_hearteat_failed(void)
//{
//    mangled_ppc("?network_lsp_presence_last_hearteat_failed@@YA_NXZ");
//};

//void network_lsp_presence_write_blfs_to_file(bool)
//{
//    mangled_ppc("?network_lsp_presence_write_blfs_to_file@@YAX_N@Z");
//};

//public: c_network_lsp_presence_query::c_network_lsp_presence_query(void)
//{
//    mangled_ppc("??0c_network_lsp_presence_query@@QAA@XZ");
//};

//public: s_lsp_presence_query_blf_chunk::s_lsp_presence_query_blf_chunk(void)
//{
//    mangled_ppc("??0s_lsp_presence_query_blf_chunk@@QAA@XZ");
//};

//public: enum e_download_status c_network_lsp_presence_query::update(void)
//{
//    mangled_ppc("?update@c_network_lsp_presence_query@@QAA?AW4e_download_status@@XZ");
//};

//public: bool c_network_lsp_presence_query::query_players(long, unsigned __int64const *)
//{
//    mangled_ppc("?query_players@c_network_lsp_presence_query@@QAA_NJPB_K@Z");
//};

//public: void c_network_lsp_presence_query::reset_query(void)
//{
//    mangled_ppc("?reset_query@c_network_lsp_presence_query@@QAAXXZ");
//};

//public: bool c_network_lsp_presence_query::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_network_lsp_presence_query@@QBA_NXZ");
//};

//public: bool c_network_lsp_presence_query::get_results_players(struct s_lsp_presence_player_query_response_data *)
//{
//    mangled_ppc("?get_results_players@c_network_lsp_presence_query@@QAA_NPAUs_lsp_presence_player_query_response_data@@@Z");
//};

//void network_lsp_presence_build_desired_heartbeat(void)
//{
//    mangled_ppc("?network_lsp_presence_build_desired_heartbeat@@YAXXZ");
//};

//public: s_lsp_presence_heartbeat_blf_chunk::s_lsp_presence_heartbeat_blf_chunk(void)
//{
//    mangled_ppc("??0s_lsp_presence_heartbeat_blf_chunk@@QAA@XZ");
//};

//public: s_network_lsp_heartbeat_data::s_network_lsp_heartbeat_data(void)
//{
//    mangled_ppc("??0s_network_lsp_heartbeat_data@@QAA@XZ");
//};

//public: s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::s_static_array<struct s_network_lsp_heartbeat_player_data, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_lsp_heartbeat_player_data@@$03@@QAA@XZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//bool network_lsp_presence_build_desired_heartbeat_from_session(class c_network_session const *, struct s_network_lsp_heartbeat_data *)
//{
//    mangled_ppc("?network_lsp_presence_build_desired_heartbeat_from_session@@YA_NPBVc_network_session@@PAUs_network_lsp_heartbeat_data@@@Z");
//};

//void network_lsp_presence_build_heartbeat_session_player(struct s_player_configuration const *, struct s_network_lsp_heartbeat_session_player_data *)
//{
//    mangled_ppc("?network_lsp_presence_build_heartbeat_session_player@@YAXPBUs_player_configuration@@PAUs_network_lsp_heartbeat_session_player_data@@@Z");
//};

//void network_lsp_presence_build_heartbeat_player(struct s_player_configuration const *, struct s_network_lsp_heartbeat_player_data *)
//{
//    mangled_ppc("?network_lsp_presence_build_heartbeat_player@@YAXPBUs_player_configuration@@PAUs_network_lsp_heartbeat_player_data@@@Z");
//};

//bool network_lsp_presence_can_build_heartbeat(class c_network_session const *)
//{
//    mangled_ppc("?network_lsp_presence_can_build_heartbeat@@YA_NPBVc_network_session@@@Z");
//};

//bool network_lsp_presence_build_desired_heartbeat_no_session(struct s_network_lsp_heartbeat_data *)
//{
//    mangled_ppc("?network_lsp_presence_build_desired_heartbeat_no_session@@YA_NPAUs_network_lsp_heartbeat_data@@@Z");
//};

//void network_lsp_presence_update_request(void)
//{
//    mangled_ppc("?network_lsp_presence_update_request@@YAXXZ");
//};

//public: s_lsp_presence_heartbeat_blffile::s_lsp_presence_heartbeat_blffile(void)
//{
//    mangled_ppc("??0s_lsp_presence_heartbeat_blffile@@QAA@XZ");
//};

//void network_lsp_presence_write_to_disk(char const *, void const *, long)
//{
//    mangled_ppc("?network_lsp_presence_write_to_disk@@YAXPBDPBXJ@Z");
//};

//void network_lsp_presence_handle_response(struct s_lsp_presence_heartbeat_blf_chunk const *, struct s_lsp_presence_heartbeat_response_blf_chunk const *)
//{
//    mangled_ppc("?network_lsp_presence_handle_response@@YAXPBUs_lsp_presence_heartbeat_blf_chunk@@PBUs_lsp_presence_heartbeat_response_blf_chunk@@@Z");
//};

//public: s_lsp_presence_heartbeat_response_blffile::s_lsp_presence_heartbeat_response_blffile(void)
//{
//    mangled_ppc("??0s_lsp_presence_heartbeat_response_blffile@@QAA@XZ");
//};

//public: s_lsp_presence_heartbeat_response_blf_chunk::s_lsp_presence_heartbeat_response_blf_chunk(void)
//{
//    mangled_ppc("??0s_lsp_presence_heartbeat_response_blf_chunk@@QAA@XZ");
//};

//public: s_network_lsp_heartbeat_response_data::s_network_lsp_heartbeat_response_data(void)
//{
//    mangled_ppc("??0s_network_lsp_heartbeat_response_data@@QAA@XZ");
//};

//void network_lsp_presence_update_file_debugging(void)
//{
//    mangled_ppc("?network_lsp_presence_update_file_debugging@@YAXXZ");
//};

//public: unsigned char * s_static_array<unsigned char, 40>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@E$0CI@@@QAAPAEXZ");
//};

//public: c_http_stored_buffer_downloader<4244>::c_http_stored_buffer_downloader<4244>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0BAJE@@@QAA@XZ");
//};

//merged_828AF2A0
//{
//    mangled_ppc("merged_828AF2A0");
//};

//public: virtual c_http_stored_buffer_downloader<4244>::~c_http_stored_buffer_downloader<4244>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0BAJE@@@UAA@XZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: c_flags<long, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<long, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JE$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_network_lsp_presence_query::e_presence_query_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_presence_query_flags@c_network_lsp_presence_query@@@Z");
//};

//public: void c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum c_network_lsp_presence_query::e_presence_query_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_presence_query_flags@c_network_lsp_presence_query@@_N@Z");
//};

//public: c_flags<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_lsp_presence_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_lsp_presence_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_lsp_presence_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_lsp_presence_flags@@_N@Z");
//};

//public: struct s_network_lsp_heartbeat_player_data & s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::operator[]<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$?AE@?$s_static_array@Us_network_lsp_heartbeat_player_data@@$03@@QAAAAUs_network_lsp_heartbeat_player_data@@E@Z");
//};

//public: struct s_network_lsp_heartbeat_session_player_data & s_static_array<struct s_network_lsp_heartbeat_session_player_data, 16>::operator[]<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$?AE@?$s_static_array@Us_network_lsp_heartbeat_session_player_data@@$0BA@@@QAAAAUs_network_lsp_heartbeat_session_player_data@@E@Z");
//};

//public: struct s_network_lsp_heartbeat_player_data const & s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_heartbeat_player_data@@$03@@QBAABUs_network_lsp_heartbeat_player_data@@J@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//public: bool c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum c_network_lsp_presence_query::e_presence_query_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_presence_query_flags@c_network_lsp_presence_query@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum c_network_lsp_presence_query::e_presence_query_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@CAEW4e_presence_query_flags@c_network_lsp_presence_query@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_lsp_presence_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_lsp_presence_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_lsp_presence_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_lsp_presence_flags@@@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::valid<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$valid@E@?$s_static_array@Us_network_lsp_heartbeat_player_data@@$03@@SA_NE@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_heartbeat_session_player_data, 16>::valid<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$valid@E@?$s_static_array@Us_network_lsp_heartbeat_session_player_data@@$0BA@@@SA_NE@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_heartbeat_player_data, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_lsp_heartbeat_player_data@@$03@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JE$03Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_network_lsp_presence_query::e_presence_query_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_network_lsp_presence_query::e_presence_query_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_presence_query_flags@c_network_lsp_presence_query@@E$00Us_default_enum_string_resolver@@@@CAEW4e_presence_query_flags@c_network_lsp_presence_query@@@Z");
//};

//public: s_network_lsp_presence_globals::s_network_lsp_presence_globals(void)
//{
//    mangled_ppc("??0s_network_lsp_presence_globals@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<1024>::c_http_stored_buffer_downloader<1024>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0EAA@@@QAA@XZ");
//};

//merged_828AFDD0
//{
//    mangled_ppc("merged_828AFDD0");
//};

//public: virtual c_http_stored_buffer_downloader<1024>::~c_http_stored_buffer_downloader<1024>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0EAA@@@UAA@XZ");
//};

//public: c_flags<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_lsp_presence_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_lsp_presence_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_lsp_presence_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_lsp_presence_flags@@@Z");
//};

//public: s_network_lsp_presence_globals::~s_network_lsp_presence_globals(void)
//{
//    mangled_ppc("??1s_network_lsp_presence_globals@@QAA@XZ");
//};

//void network_lsp_presence_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fnetwork_lsp_presence_globals@@YAXXZ");
//};

