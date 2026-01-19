/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_http_buffer_downloader::c_http_buffer_downloader(void);
// merged_82AA81F0;
// public: c_http_buffer_downloader::c_http_buffer_downloader(char *, long);
// public: virtual c_http_buffer_downloader::~c_http_buffer_downloader(void);
// public: void c_http_buffer_downloader::set_download_buffer(char *, long);
// public: bool c_http_buffer_downloader::set_url(class c_downloader_url const *);
// public: bool c_downloader_url::is_equal(class c_downloader_url const *) const;
// public: void c_http_buffer_downloader::set_hash(struct s_network_http_request_hash const *);
// private: static enum e_download_status c_http_buffer_downloader::get_download_status_from_internal_status(enum c_http_buffer_downloader::e_internal_status);
// public: enum e_download_status c_http_buffer_downloader::get_download_status(void) const;
// public: void c_http_buffer_downloader::reset(void);
// private: bool c_http_buffer_downloader::does_cache_entry_need_to_be_updated(struct s_network_storage_cache_key const *);
// public: enum c_downloader_url::e_cachable_type c_downloader_url::get_cachable(void) const;
// public: void c_http_buffer_downloader::update(void);
// public: enum e_download_status c_http_buffer_downloader::get_data(char const **, long *);
// private: void c_http_buffer_downloader::start_download(void);
// private: void c_http_buffer_downloader::stop_download(void);
// private: void c_http_buffer_downloader::update_download(void);
// public: void c_network_http_request_description::set_post_source(class c_http_post_source const *);
// public: void c_network_http_request_description::set_headers(char const *);
// private: void c_http_buffer_downloader::start_cache_retrieve(struct s_network_storage_cache_key const *, struct s_network_http_request_hash const *);
// private: void c_http_buffer_downloader::stop_cache_retrieve(void);
// private: void c_http_buffer_downloader::update_cache_retrieve(void);
// private: void c_http_buffer_downloader::start_cache_submit(struct s_network_storage_cache_key const *, struct s_network_http_request_hash const *);
// private: void c_http_buffer_downloader::stop_cache_submit(void);
// private: void c_http_buffer_downloader::update_cache_submit(void);
// public: c_http_game_api_parser::c_http_game_api_parser(char const *, long);
// private: bool c_http_game_api_parser::advance_to_next_line(void);
// public: bool c_http_game_api_parser::read_line(char const *);
// public: bool c_http_game_api_parser::read_long(char const *, long *);
// public: bool c_http_game_api_parser::read_dword(char const *, unsigned long *);
// public: bool c_http_game_api_parser::read_qword(char const *, unsigned __int64*);
// public: bool c_http_game_api_parser::read_string_utf8(char const *, wchar_t *, long);
// public: bool c_http_game_api_parser::read_string(char const *, char *, long);
// public: void s_static_string<1024>::set_bounded(char const *, long);
// public: void s_static_string<1024>::trim_end_space(void);
// public: bool s_static_string<1024>::starts_with(char const *) const;
// public: char * s_static_string<1024>::copy_to(char *, unsigned int) const;
// public: c_static_string<1024>::c_static_string<1024>(char const *);
// public: void c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_http_buffer_downloader::e_internal_flags) const;

//public: c_http_buffer_downloader::c_http_buffer_downloader(void)
//{
//    mangled_ppc("??0c_http_buffer_downloader@@QAA@XZ");
//};

//merged_82AA81F0
//{
//    mangled_ppc("merged_82AA81F0");
//};

//public: c_http_buffer_downloader::c_http_buffer_downloader(char *, long)
//{
//    mangled_ppc("??0c_http_buffer_downloader@@QAA@PADJ@Z");
//};

//public: virtual c_http_buffer_downloader::~c_http_buffer_downloader(void)
//{
//    mangled_ppc("??1c_http_buffer_downloader@@UAA@XZ");
//};

//public: void c_http_buffer_downloader::set_download_buffer(char *, long)
//{
//    mangled_ppc("?set_download_buffer@c_http_buffer_downloader@@QAAXPADJ@Z");
//};

//public: bool c_http_buffer_downloader::set_url(class c_downloader_url const *)
//{
//    mangled_ppc("?set_url@c_http_buffer_downloader@@QAA_NPBVc_downloader_url@@@Z");
//};

//public: bool c_downloader_url::is_equal(class c_downloader_url const *) const
//{
//    mangled_ppc("?is_equal@c_downloader_url@@QBA_NPBV1@@Z");
//};

//public: void c_http_buffer_downloader::set_hash(struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?set_hash@c_http_buffer_downloader@@QAAXPBUs_network_http_request_hash@@@Z");
//};

//private: static enum e_download_status c_http_buffer_downloader::get_download_status_from_internal_status(enum c_http_buffer_downloader::e_internal_status)
//{
//    mangled_ppc("?get_download_status_from_internal_status@c_http_buffer_downloader@@CA?AW4e_download_status@@W4e_internal_status@1@@Z");
//};

//public: enum e_download_status c_http_buffer_downloader::get_download_status(void) const
//{
//    mangled_ppc("?get_download_status@c_http_buffer_downloader@@QBA?AW4e_download_status@@XZ");
//};

//public: void c_http_buffer_downloader::reset(void)
//{
//    mangled_ppc("?reset@c_http_buffer_downloader@@QAAXXZ");
//};

//private: bool c_http_buffer_downloader::does_cache_entry_need_to_be_updated(struct s_network_storage_cache_key const *)
//{
//    mangled_ppc("?does_cache_entry_need_to_be_updated@c_http_buffer_downloader@@AAA_NPBUs_network_storage_cache_key@@@Z");
//};

//public: enum c_downloader_url::e_cachable_type c_downloader_url::get_cachable(void) const
//{
//    mangled_ppc("?get_cachable@c_downloader_url@@QBA?AW4e_cachable_type@1@XZ");
//};

//public: void c_http_buffer_downloader::update(void)
//{
//    mangled_ppc("?update@c_http_buffer_downloader@@QAAXXZ");
//};

//public: enum e_download_status c_http_buffer_downloader::get_data(char const **, long *)
//{
//    mangled_ppc("?get_data@c_http_buffer_downloader@@QAA?AW4e_download_status@@PAPBDPAJ@Z");
//};

//private: void c_http_buffer_downloader::start_download(void)
//{
//    mangled_ppc("?start_download@c_http_buffer_downloader@@AAAXXZ");
//};

//private: void c_http_buffer_downloader::stop_download(void)
//{
//    mangled_ppc("?stop_download@c_http_buffer_downloader@@AAAXXZ");
//};

//private: void c_http_buffer_downloader::update_download(void)
//{
//    mangled_ppc("?update_download@c_http_buffer_downloader@@AAAXXZ");
//};

//public: void c_network_http_request_description::set_post_source(class c_http_post_source const *)
//{
//    mangled_ppc("?set_post_source@c_network_http_request_description@@QAAXPBVc_http_post_source@@@Z");
//};

//public: void c_network_http_request_description::set_headers(char const *)
//{
//    mangled_ppc("?set_headers@c_network_http_request_description@@QAAXPBD@Z");
//};

//private: void c_http_buffer_downloader::start_cache_retrieve(struct s_network_storage_cache_key const *, struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?start_cache_retrieve@c_http_buffer_downloader@@AAAXPBUs_network_storage_cache_key@@PBUs_network_http_request_hash@@@Z");
//};

//private: void c_http_buffer_downloader::stop_cache_retrieve(void)
//{
//    mangled_ppc("?stop_cache_retrieve@c_http_buffer_downloader@@AAAXXZ");
//};

//private: void c_http_buffer_downloader::update_cache_retrieve(void)
//{
//    mangled_ppc("?update_cache_retrieve@c_http_buffer_downloader@@AAAXXZ");
//};

//private: void c_http_buffer_downloader::start_cache_submit(struct s_network_storage_cache_key const *, struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?start_cache_submit@c_http_buffer_downloader@@AAAXPBUs_network_storage_cache_key@@PBUs_network_http_request_hash@@@Z");
//};

//private: void c_http_buffer_downloader::stop_cache_submit(void)
//{
//    mangled_ppc("?stop_cache_submit@c_http_buffer_downloader@@AAAXXZ");
//};

//private: void c_http_buffer_downloader::update_cache_submit(void)
//{
//    mangled_ppc("?update_cache_submit@c_http_buffer_downloader@@AAAXXZ");
//};

//public: c_http_game_api_parser::c_http_game_api_parser(char const *, long)
//{
//    mangled_ppc("??0c_http_game_api_parser@@QAA@PBDJ@Z");
//};

//private: bool c_http_game_api_parser::advance_to_next_line(void)
//{
//    mangled_ppc("?advance_to_next_line@c_http_game_api_parser@@AAA_NXZ");
//};

//public: bool c_http_game_api_parser::read_line(char const *)
//{
//    mangled_ppc("?read_line@c_http_game_api_parser@@QAA_NPBD@Z");
//};

//public: bool c_http_game_api_parser::read_long(char const *, long *)
//{
//    mangled_ppc("?read_long@c_http_game_api_parser@@QAA_NPBDPAJ@Z");
//};

//public: bool c_http_game_api_parser::read_dword(char const *, unsigned long *)
//{
//    mangled_ppc("?read_dword@c_http_game_api_parser@@QAA_NPBDPAK@Z");
//};

//public: bool c_http_game_api_parser::read_qword(char const *, unsigned __int64*)
//{
//    mangled_ppc("?read_qword@c_http_game_api_parser@@QAA_NPBDPA_K@Z");
//};

//public: bool c_http_game_api_parser::read_string_utf8(char const *, wchar_t *, long)
//{
//    mangled_ppc("?read_string_utf8@c_http_game_api_parser@@QAA_NPBDPA_WJ@Z");
//};

//public: bool c_http_game_api_parser::read_string(char const *, char *, long)
//{
//    mangled_ppc("?read_string@c_http_game_api_parser@@QAA_NPBDPADJ@Z");
//};

//public: void s_static_string<1024>::set_bounded(char const *, long)
//{
//    mangled_ppc("?set_bounded@?$s_static_string@$0EAA@@@QAAXPBDJ@Z");
//};

//public: void s_static_string<1024>::trim_end_space(void)
//{
//    mangled_ppc("?trim_end_space@?$s_static_string@$0EAA@@@QAAXXZ");
//};

//public: bool s_static_string<1024>::starts_with(char const *) const
//{
//    mangled_ppc("?starts_with@?$s_static_string@$0EAA@@@QBA_NPBD@Z");
//};

//public: char * s_static_string<1024>::copy_to(char *, unsigned int) const
//{
//    mangled_ppc("?copy_to@?$s_static_string@$0EAA@@@QBAPADPADI@Z");
//};

//public: c_static_string<1024>::c_static_string<1024>(char const *)
//{
//    mangled_ppc("??0?$c_static_string@$0EAA@@@QAA@PBD@Z");
//};

//public: void c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_internal_flags@c_http_buffer_downloader@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_http_buffer_downloader::e_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_http_buffer_downloader::e_internal_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_internal_flags@c_http_buffer_downloader@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_internal_flags@c_http_buffer_downloader@@@Z");
//};

