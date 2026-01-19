/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_string<33>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0CB@@@2JB"
// public: static long const s_static_string<33>::k_element_count; // "?k_element_count@?$s_static_string@$0CB@@@2JB"
// public: static long const s_static_string<65>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0EB@@@2JB"
// public: static long const s_static_string<65>::k_element_count; // "?k_element_count@?$s_static_string@$0EB@@@2JB"
// char const *const k_session_description_title_string; // "?k_session_description_title_string@@3PBDB"
// char const *const k_session_description_build_string; // "?k_session_description_build_string@@3PBDB"
// char const *const k_session_description_system_string; // "?k_session_description_system_string@@3PBDB"
// char const *const k_netdebug_session_description_file_location; // "?k_netdebug_session_description_file_location@@3PBDB"
// char const *const k_sessionid_filename_pack_token; // "?k_sessionid_filename_pack_token@@3PBDB"
// char const *const k_debug_server_url; // "?k_debug_server_url@@3PBDB"
// struct s_netdebug_globals g_netdebug_globals; // "?g_netdebug_globals@@3Us_netdebug_globals@@A"
// class c_synchronized_int32g_net_debug_thread_has_exited; // "?g_net_debug_thread_has_exited@@3Vc_synchronized_int32@@A"

// bool netdebug_initialize(char const *, char const *, char const *, char const *, char const *, void (*)(char *, long));
// void netdebug_dispose(void);
// char const * netdebug_get_sessionid(void);
// void netdebug_set_sessionid(char const *);
// char const * netdebug_get_system(void);
// char const * netdebug_get_build(void);
// char const * netdebug_get_title(void);
// void netdebug_upload_file(char const *, char const *, void (*)(long, long), void (*)(bool, void *), void *);
// unsigned long netdebug_thread_function(void *);
// public: class c_synchronized_int32& c_synchronized_int32::operator=(bool);
// void sleep(unsigned long);
// void netdebug_process_next_task(void);
// void remove_current_task(bool);
// bool netdebug_process_file_upload(struct s_netdebug_upload_task *);
// void add_http_xbox_upload_info_headers(class c_http_post_stream *, struct s_netdebug_upload_task const *);
// public: wchar_t const * c_controller_interface::get_display_name(void) const;
// void get_system_ip_addresses(class c_static_string<16> *, class c_static_string<128> *);
// void set_system_and_xtl_version(void);
// bool upload_synchronous(class c_http_client *, class c_http_stream *, long, struct s_netdebug_upload_task const *);
// bool netdebug_queue_task(struct s_netdebug_upload_task const *);
// void netdebug_get_next_task(void);
// void compute_task_file_upload_signatures(struct s_netdebug_upload_task *);
// void create_sessionid(void);
// void build_sessionid_time_segment(void);
// void create_session_description(void);
// void fill_packed_sessionid_filename(char const *, class c_static_string<256> *);
// void refresh_system_name(void);
// public: void s_static_string<128>::set(char const *);
// public: char const * s_static_string<128>::append(char const *);
// public: bool s_static_string<128>::is_equal(char const *) const;
// public: char const * s_static_string<128>::get_string(void) const;
// public: void s_static_string<16>::set(char const *);
// public: char const * s_static_string<16>::print(char const *, ...);
// public: char const * s_static_string<16>::get_string(void) const;
// public: struct s_critical_section & s_static_array<struct s_critical_section, 84>::operator[]<enum e_critical_sections>(enum e_critical_sections);
// char * file_reference_get_filename<256>(struct s_file_reference const *, char (&)[256]);
// public: char const * s_static_string<33>::print(char const *, ...);
// public: char const * s_static_string<33>::get_string(void) const;
// public: char const * s_static_string<33>::operator char const *(void) const;
// public: c_static_string<33>::c_static_string<33>(void);
// public: void s_static_string<65>::set(char const *);
// public: void s_static_string<65>::set_wchar(wchar_t const *);
// public: char const * s_static_string<65>::append(char const *);
// public: bool s_static_string<65>::is_empty(void) const;
// public: long s_static_string<65>::length(void) const;
// public: char const * s_static_string<65>::get_string(void) const;
// public: c_static_string<65>::c_static_string<65>(void);
// public: char const * s_static_string<512>::append_print(char const *, ...);
// public: long s_static_string<512>::length(void) const;
// public: static bool s_static_array<struct s_critical_section, 84>::valid<enum e_critical_sections>(enum e_critical_sections);
// public: void s_static_string<33>::clear(void);
// public: void s_static_string<65>::clear(void);
// ctime;
// gmtime;
// time;
// char * file_reference_get_filename(struct s_file_reference const *, char *, long);
// public: c_synchronized_int32::c_synchronized_int32(long);
// void g_net_debug_thread_has_exited::`dynamic atexit destructor'(void);

//bool netdebug_initialize(char const *, char const *, char const *, char const *, char const *, void (*)(char *, long))
//{
//    mangled_ppc("?netdebug_initialize@@YA_NPBD0000P6AXPADJ@Z@Z");
//};

//void netdebug_dispose(void)
//{
//    mangled_ppc("?netdebug_dispose@@YAXXZ");
//};

//char const * netdebug_get_sessionid(void)
//{
//    mangled_ppc("?netdebug_get_sessionid@@YAPBDXZ");
//};

//void netdebug_set_sessionid(char const *)
//{
//    mangled_ppc("?netdebug_set_sessionid@@YAXPBD@Z");
//};

//char const * netdebug_get_system(void)
//{
//    mangled_ppc("?netdebug_get_system@@YAPBDXZ");
//};

//char const * netdebug_get_build(void)
//{
//    mangled_ppc("?netdebug_get_build@@YAPBDXZ");
//};

//char const * netdebug_get_title(void)
//{
//    mangled_ppc("?netdebug_get_title@@YAPBDXZ");
//};

//void netdebug_upload_file(char const *, char const *, void (*)(long, long), void (*)(bool, void *), void *)
//{
//    mangled_ppc("?netdebug_upload_file@@YAXPBD0P6AXJJ@ZP6AX_NPAX@Z3@Z");
//};

//unsigned long netdebug_thread_function(void *)
//{
//    mangled_ppc("?netdebug_thread_function@@YAKPAX@Z");
//};

//public: class c_synchronized_int32& c_synchronized_int32::operator=(bool)
//{
//    mangled_ppc("??4c_synchronized_int32@@QAAAAV0@_N@Z");
//};

//void sleep(unsigned long)
//{
//    mangled_ppc("?sleep@@YAXK@Z");
//};

//void netdebug_process_next_task(void)
//{
//    mangled_ppc("?netdebug_process_next_task@@YAXXZ");
//};

//void remove_current_task(bool)
//{
//    mangled_ppc("?remove_current_task@@YAX_N@Z");
//};

//bool netdebug_process_file_upload(struct s_netdebug_upload_task *)
//{
//    mangled_ppc("?netdebug_process_file_upload@@YA_NPAUs_netdebug_upload_task@@@Z");
//};

//void add_http_xbox_upload_info_headers(class c_http_post_stream *, struct s_netdebug_upload_task const *)
//{
//    mangled_ppc("?add_http_xbox_upload_info_headers@@YAXPAVc_http_post_stream@@PBUs_netdebug_upload_task@@@Z");
//};

//public: wchar_t const * c_controller_interface::get_display_name(void) const
//{
//    mangled_ppc("?get_display_name@c_controller_interface@@QBAPB_WXZ");
//};

//void get_system_ip_addresses(class c_static_string<16> *, class c_static_string<128> *)
//{
//    mangled_ppc("?get_system_ip_addresses@@YAXPAV?$c_static_string@$0BA@@@PAV?$c_static_string@$0IA@@@@Z");
//};

//void set_system_and_xtl_version(void)
//{
//    mangled_ppc("?set_system_and_xtl_version@@YAXXZ");
//};

//bool upload_synchronous(class c_http_client *, class c_http_stream *, long, struct s_netdebug_upload_task const *)
//{
//    mangled_ppc("?upload_synchronous@@YA_NPAVc_http_client@@PAVc_http_stream@@JPBUs_netdebug_upload_task@@@Z");
//};

//bool netdebug_queue_task(struct s_netdebug_upload_task const *)
//{
//    mangled_ppc("?netdebug_queue_task@@YA_NPBUs_netdebug_upload_task@@@Z");
//};

//void netdebug_get_next_task(void)
//{
//    mangled_ppc("?netdebug_get_next_task@@YAXXZ");
//};

//void compute_task_file_upload_signatures(struct s_netdebug_upload_task *)
//{
//    mangled_ppc("?compute_task_file_upload_signatures@@YAXPAUs_netdebug_upload_task@@@Z");
//};

//void create_sessionid(void)
//{
//    mangled_ppc("?create_sessionid@@YAXXZ");
//};

//void build_sessionid_time_segment(void)
//{
//    mangled_ppc("?build_sessionid_time_segment@@YAXXZ");
//};

//void create_session_description(void)
//{
//    mangled_ppc("?create_session_description@@YAXXZ");
//};

//void fill_packed_sessionid_filename(char const *, class c_static_string<256> *)
//{
//    mangled_ppc("?fill_packed_sessionid_filename@@YAXPBDPAV?$c_static_string@$0BAA@@@@Z");
//};

//void refresh_system_name(void)
//{
//    mangled_ppc("?refresh_system_name@@YAXXZ");
//};

//public: void s_static_string<128>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0IA@@@QAAXPBD@Z");
//};

//public: char const * s_static_string<128>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0IA@@@QAAPBDPBD@Z");
//};

//public: bool s_static_string<128>::is_equal(char const *) const
//{
//    mangled_ppc("?is_equal@?$s_static_string@$0IA@@@QBA_NPBD@Z");
//};

//public: char const * s_static_string<128>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0IA@@@QBAPBDXZ");
//};

//public: void s_static_string<16>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0BA@@@QAAXPBD@Z");
//};

//public: char const * s_static_string<16>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0BA@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<16>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0BA@@@QBAPBDXZ");
//};

//public: struct s_critical_section & s_static_array<struct s_critical_section, 84>::operator[]<enum e_critical_sections>(enum e_critical_sections)
//{
//    mangled_ppc("??$?AW4e_critical_sections@@@?$s_static_array@Us_critical_section@@$0FE@@@QAAAAUs_critical_section@@W4e_critical_sections@@@Z");
//};

//char * file_reference_get_filename<256>(struct s_file_reference const *, char (&)[256])
//{
//    mangled_ppc("??$file_reference_get_filename@$0BAA@@@YAPADPBUs_file_reference@@AAY0BAA@D@Z");
//};

//public: char const * s_static_string<33>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0CB@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<33>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0CB@@@QBAPBDXZ");
//};

//public: char const * s_static_string<33>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0CB@@@QBAPBDXZ");
//};

//public: c_static_string<33>::c_static_string<33>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0CB@@@QAA@XZ");
//};

//public: void s_static_string<65>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0EB@@@QAAXPBD@Z");
//};

//public: void s_static_string<65>::set_wchar(wchar_t const *)
//{
//    mangled_ppc("?set_wchar@?$s_static_string@$0EB@@@QAAXPB_W@Z");
//};

//public: char const * s_static_string<65>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0EB@@@QAAPBDPBD@Z");
//};

//public: bool s_static_string<65>::is_empty(void) const
//{
//    mangled_ppc("?is_empty@?$s_static_string@$0EB@@@QBA_NXZ");
//};

//public: long s_static_string<65>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0EB@@@QBAJXZ");
//};

//public: char const * s_static_string<65>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0EB@@@QBAPBDXZ");
//};

//public: c_static_string<65>::c_static_string<65>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0EB@@@QAA@XZ");
//};

//public: char const * s_static_string<512>::append_print(char const *, ...)
//{
//    mangled_ppc("?append_print@?$s_static_string@$0CAA@@@QAAPBDPBDZZ");
//};

//public: long s_static_string<512>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0CAA@@@QBAJXZ");
//};

//public: static bool s_static_array<struct s_critical_section, 84>::valid<enum e_critical_sections>(enum e_critical_sections)
//{
//    mangled_ppc("??$valid@W4e_critical_sections@@@?$s_static_array@Us_critical_section@@$0FE@@@SA_NW4e_critical_sections@@@Z");
//};

//public: void s_static_string<33>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0CB@@@QAAXXZ");
//};

//public: void s_static_string<65>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0EB@@@QAAXXZ");
//};

//ctime
//{
//    mangled_ppc("ctime");
//};

//gmtime
//{
//    mangled_ppc("gmtime");
//};

//time
//{
//    mangled_ppc("time");
//};

//char * file_reference_get_filename(struct s_file_reference const *, char *, long)
//{
//    mangled_ppc("?file_reference_get_filename@@YAPADPBUs_file_reference@@PADJ@Z");
//};

//public: c_synchronized_int32::c_synchronized_int32(long)
//{
//    mangled_ppc("??0c_synchronized_int32@@QAA@J@Z");
//};

//void g_net_debug_thread_has_exited::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_net_debug_thread_has_exited@@YAXXZ");
//};

