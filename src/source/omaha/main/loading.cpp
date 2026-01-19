/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool disable_progress_screen; // "?disable_progress_screen@@3_NA"

// void main_loading_initialize(void);
// void main_loading_enable_spinner(bool);
// void main_loading_idle(void);
// bool main_loading_is_idle(void);
// bool cache_files_copy_in_progress(void);
// void main_loading_dispose(void);
// bool main_load_map_with_insertion_point(short, char const *, enum e_map_load_type);
// bool main_load_map(char const *, enum e_map_load_type);
// enum e_map_load_status main_load_map_status_with_insertion_point(short, char const *);
// enum e_map_load_status main_load_map_status(char const *);
// bool main_load_next_map_loading(void);
// char * get_next_scenario_path(char *, long);
// bool main_blocking_load_in_progress(float *);
// float main_load_map_loading_progress(enum e_scenario_type, short, char const *);
// void main_tag_load_begin(enum e_game_mode, long, char const *);
// void main_tag_load_end(void);
// void main_tag_load_progress(unsigned long, char const *);
// void main_loading_progress_new(char const *, void *);
// void main_loading_progress_update(char const *, char const *, long, void *);
// void main_loading_progress_done(char const *, void *);
// bool loading_will_use_ship_loading_screen(void);
// void main_tag_sync_begin(void);
// void main_tag_sync_end(void);
// enum e_main_pregame_frame main_loading_get_loading_status(class c_static_wchar_string<12288> *);
// bool main_loading_actually_using_shipping_loading_screen(void);
// void loading_basic_progress_enable(char const *, long);
// void loading_basic_progress_update_phase_sizes(void);
// bool cache_files_get_file_progress_sizes(char const *, long, unsigned long *, unsigned long *, unsigned long *);
// void loading_basic_progress_phase_begin(enum e_basic_loading_phase, unsigned long);
// void loading_basic_progress_update_size(unsigned long);
// void loading_basic_progress_update_fraction(float);
// void loading_basic_progress_phase_end(void);
// void loading_basic_progress_complete(void);
// void loading_basic_progress_disable(void);
// bool loading_basic_progress_enabled(void);
// bool loading_basic_progress_keep_pumping(void);
// void loading_basic_progress_force_cleanup(void);
// float loading_basic_progress_get(void);
// bool operator!=<enum e_map_id>(enum e_map_id const &, enum e_none_sentinel const &);
// public: wchar_t const * c_static_wchar_string<12288>::append_print(wchar_t const *, ...);
// public: static long s_static_string<2048>::max_length(void);
// public: char const * s_static_string<2048>::get_string(void) const;
// public: char (& s_static_string<2048>::get_buffer(void))[2048];
// bool operator==<enum e_map_id>(enum e_map_id const &, enum e_none_sentinel const &);
// public: long c_static_wchar_string<12288>::length(void) const;
// public: loading_globals_definition::loading_globals_definition(void);

//void main_loading_initialize(void)
//{
//    mangled_ppc("?main_loading_initialize@@YAXXZ");
//};

//void main_loading_enable_spinner(bool)
//{
//    mangled_ppc("?main_loading_enable_spinner@@YAX_N@Z");
//};

//void main_loading_idle(void)
//{
//    mangled_ppc("?main_loading_idle@@YAXXZ");
//};

//bool main_loading_is_idle(void)
//{
//    mangled_ppc("?main_loading_is_idle@@YA_NXZ");
//};

//bool cache_files_copy_in_progress(void)
//{
//    mangled_ppc("?cache_files_copy_in_progress@@YA_NXZ");
//};

//void main_loading_dispose(void)
//{
//    mangled_ppc("?main_loading_dispose@@YAXXZ");
//};

//bool main_load_map_with_insertion_point(short, char const *, enum e_map_load_type)
//{
//    mangled_ppc("?main_load_map_with_insertion_point@@YA_NFPBDW4e_map_load_type@@@Z");
//};

//bool main_load_map(char const *, enum e_map_load_type)
//{
//    mangled_ppc("?main_load_map@@YA_NPBDW4e_map_load_type@@@Z");
//};

//enum e_map_load_status main_load_map_status_with_insertion_point(short, char const *)
//{
//    mangled_ppc("?main_load_map_status_with_insertion_point@@YA?AW4e_map_load_status@@FPBD@Z");
//};

//enum e_map_load_status main_load_map_status(char const *)
//{
//    mangled_ppc("?main_load_map_status@@YA?AW4e_map_load_status@@PBD@Z");
//};

//bool main_load_next_map_loading(void)
//{
//    mangled_ppc("?main_load_next_map_loading@@YA_NXZ");
//};

//char * get_next_scenario_path(char *, long)
//{
//    mangled_ppc("?get_next_scenario_path@@YAPADPADJ@Z");
//};

//bool main_blocking_load_in_progress(float *)
//{
//    mangled_ppc("?main_blocking_load_in_progress@@YA_NPAM@Z");
//};

//float main_load_map_loading_progress(enum e_scenario_type, short, char const *)
//{
//    mangled_ppc("?main_load_map_loading_progress@@YAMW4e_scenario_type@@FPBD@Z");
//};

//void main_tag_load_begin(enum e_game_mode, long, char const *)
//{
//    mangled_ppc("?main_tag_load_begin@@YAXW4e_game_mode@@JPBD@Z");
//};

//void main_tag_load_end(void)
//{
//    mangled_ppc("?main_tag_load_end@@YAXXZ");
//};

//void main_tag_load_progress(unsigned long, char const *)
//{
//    mangled_ppc("?main_tag_load_progress@@YAXKPBD@Z");
//};

//void main_loading_progress_new(char const *, void *)
//{
//    mangled_ppc("?main_loading_progress_new@@YAXPBDPAX@Z");
//};

//void main_loading_progress_update(char const *, char const *, long, void *)
//{
//    mangled_ppc("?main_loading_progress_update@@YAXPBD0JPAX@Z");
//};

//void main_loading_progress_done(char const *, void *)
//{
//    mangled_ppc("?main_loading_progress_done@@YAXPBDPAX@Z");
//};

//bool loading_will_use_ship_loading_screen(void)
//{
//    mangled_ppc("?loading_will_use_ship_loading_screen@@YA_NXZ");
//};

//void main_tag_sync_begin(void)
//{
//    mangled_ppc("?main_tag_sync_begin@@YAXXZ");
//};

//void main_tag_sync_end(void)
//{
//    mangled_ppc("?main_tag_sync_end@@YAXXZ");
//};

//enum e_main_pregame_frame main_loading_get_loading_status(class c_static_wchar_string<12288> *)
//{
//    mangled_ppc("?main_loading_get_loading_status@@YA?AW4e_main_pregame_frame@@PAV?$c_static_wchar_string@$0DAAA@@@@Z");
//};

//bool main_loading_actually_using_shipping_loading_screen(void)
//{
//    mangled_ppc("?main_loading_actually_using_shipping_loading_screen@@YA_NXZ");
//};

//void loading_basic_progress_enable(char const *, long)
//{
//    mangled_ppc("?loading_basic_progress_enable@@YAXPBDJ@Z");
//};

//void loading_basic_progress_update_phase_sizes(void)
//{
//    mangled_ppc("?loading_basic_progress_update_phase_sizes@@YAXXZ");
//};

//bool cache_files_get_file_progress_sizes(char const *, long, unsigned long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?cache_files_get_file_progress_sizes@@YA_NPBDJPAK11@Z");
//};

//void loading_basic_progress_phase_begin(enum e_basic_loading_phase, unsigned long)
//{
//    mangled_ppc("?loading_basic_progress_phase_begin@@YAXW4e_basic_loading_phase@@K@Z");
//};

//void loading_basic_progress_update_size(unsigned long)
//{
//    mangled_ppc("?loading_basic_progress_update_size@@YAXK@Z");
//};

//void loading_basic_progress_update_fraction(float)
//{
//    mangled_ppc("?loading_basic_progress_update_fraction@@YAXM@Z");
//};

//void loading_basic_progress_phase_end(void)
//{
//    mangled_ppc("?loading_basic_progress_phase_end@@YAXXZ");
//};

//void loading_basic_progress_complete(void)
//{
//    mangled_ppc("?loading_basic_progress_complete@@YAXXZ");
//};

//void loading_basic_progress_disable(void)
//{
//    mangled_ppc("?loading_basic_progress_disable@@YAXXZ");
//};

//bool loading_basic_progress_enabled(void)
//{
//    mangled_ppc("?loading_basic_progress_enabled@@YA_NXZ");
//};

//bool loading_basic_progress_keep_pumping(void)
//{
//    mangled_ppc("?loading_basic_progress_keep_pumping@@YA_NXZ");
//};

//void loading_basic_progress_force_cleanup(void)
//{
//    mangled_ppc("?loading_basic_progress_force_cleanup@@YAXXZ");
//};

//float loading_basic_progress_get(void)
//{
//    mangled_ppc("?loading_basic_progress_get@@YAMXZ");
//};

//bool operator!=<enum e_map_id>(enum e_map_id const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_map_id@@@@YA_NABW4e_map_id@@ABW4e_none_sentinel@@@Z");
//};

//public: wchar_t const * c_static_wchar_string<12288>::append_print(wchar_t const *, ...)
//{
//    mangled_ppc("?append_print@?$c_static_wchar_string@$0DAAA@@@QAAPB_WPB_WZZ");
//};

//public: static long s_static_string<2048>::max_length(void)
//{
//    mangled_ppc("?max_length@?$s_static_string@$0IAA@@@SAJXZ");
//};

//public: char const * s_static_string<2048>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0IAA@@@QBAPBDXZ");
//};

//public: char (& s_static_string<2048>::get_buffer(void))[2048]
//{
//    mangled_ppc("?get_buffer@?$s_static_string@$0IAA@@@QAAAAY0IAA@DXZ");
//};

//bool operator==<enum e_map_id>(enum e_map_id const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_map_id@@@@YA_NABW4e_map_id@@ABW4e_none_sentinel@@@Z");
//};

//public: long c_static_wchar_string<12288>::length(void) const
//{
//    mangled_ppc("?length@?$c_static_wchar_string@$0DAAA@@@QBAJXZ");
//};

//public: loading_globals_definition::loading_globals_definition(void)
//{
//    mangled_ppc("??0loading_globals_definition@@QAA@XZ");
//};

