/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_static_wchar_string<512>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$0CAA@@@2HB"
// struct s_datamine_globals g_datamine_globals; // "?g_datamine_globals@@3Us_datamine_globals@@A"

// public: c_datamine::c_datamine(long, char const *, long, ...);
// public: c_datamine::~c_datamine(void);
// public: void c_datamine::additional_category(char const *);
// public: void c_datamine::add_long(char const *, long);
// public: void c_datamine::add_int64(char const *, __int64);
// public: void c_datamine::add_float(char const *, float);
// public: void c_datamine::add_double(char const *, double);
// public: void c_datamine::add_string(char const *, char const *);
// public: void c_datamine::add_utf8_string(char const *, struct utf8const *);
// public: void c_datamine::add_wchar_string(char const *, wchar_t const *);
// public: void c_datamine::add_point(char const *, union real_point3d const *);
// public: void c_datamine::add_vector(char const *, union vector3d const *);
// public: void c_datamine::add_args(char const *, char *);
// public: void c_datamine::add_camera(void);
// public: void c_datamine::commit(void);
// public: void c_datamine::cancel_insert(void);
// public: void c_datamine_game_info::create_from_game_globals(void);
// private: struct s_datamine_parameter * c_datamine::fill_and_get_parameter(char const *, enum e_datamine_parameter_type, long);
// private: void c_datamine::fill_out_header(struct s_datamine_event_header *);
// public: class c_datamine_game_info & c_datamine_game_info::operator=(class c_datamine_game_info const &);
// public: void c_datamine::add_external_game_info(class c_datamine_game_info *);
// bool datamine_allowed_for_current_thread(void);
// char * take_buffer(void);
// void release_buffer(char const *);
// public: char const * s_static_string<512>::append(char const *);
// public: bool s_static_string<512>::starts_with(char const *) const;
// public: bool s_static_string<512>::ends_with(char const *) const;
// public: char * s_static_string<512>::copy_to(char *, unsigned int) const;
// public: c_static_string<512>::c_static_string<512>(wchar_t const *);
// public: char * s_static_string<32>::copy_to(char *, unsigned int) const;
// public: c_static_wchar_string<512>::c_static_wchar_string<512>(void);
// public: void c_static_wchar_string<512>::set(wchar_t const *);
// public: void c_static_wchar_string<512>::set_utf8(struct utf8const *);
// public: wchar_t const * c_static_wchar_string<512>::get_string(void) const;
// public: void s_static_string<512>::set_wchar(wchar_t const *);
// public: s_datamine_globals::s_datamine_globals(void);
// public: s_datamine_globals::~s_datamine_globals(void);
// void g_datamine_globals::`dynamic atexit destructor'(void);

//public: c_datamine::c_datamine(long, char const *, long, ...)
//{
//    mangled_ppc("??0c_datamine@@QAA@JPBDJZZ");
//};

//public: c_datamine::~c_datamine(void)
//{
//    mangled_ppc("??1c_datamine@@QAA@XZ");
//};

//public: void c_datamine::additional_category(char const *)
//{
//    mangled_ppc("?additional_category@c_datamine@@QAAXPBD@Z");
//};

//public: void c_datamine::add_long(char const *, long)
//{
//    mangled_ppc("?add_long@c_datamine@@QAAXPBDJ@Z");
//};

//public: void c_datamine::add_int64(char const *, __int64)
//{
//    mangled_ppc("?add_int64@c_datamine@@QAAXPBD_J@Z");
//};

//public: void c_datamine::add_float(char const *, float)
//{
//    mangled_ppc("?add_float@c_datamine@@QAAXPBDM@Z");
//};

//public: void c_datamine::add_double(char const *, double)
//{
//    mangled_ppc("?add_double@c_datamine@@QAAXPBDN@Z");
//};

//public: void c_datamine::add_string(char const *, char const *)
//{
//    mangled_ppc("?add_string@c_datamine@@QAAXPBD0@Z");
//};

//public: void c_datamine::add_utf8_string(char const *, struct utf8const *)
//{
//    mangled_ppc("?add_utf8_string@c_datamine@@QAAXPBDPBUutf8@@@Z");
//};

//public: void c_datamine::add_wchar_string(char const *, wchar_t const *)
//{
//    mangled_ppc("?add_wchar_string@c_datamine@@QAAXPBDPB_W@Z");
//};

//public: void c_datamine::add_point(char const *, union real_point3d const *)
//{
//    mangled_ppc("?add_point@c_datamine@@QAAXPBDPBTreal_point3d@@@Z");
//};

//public: void c_datamine::add_vector(char const *, union vector3d const *)
//{
//    mangled_ppc("?add_vector@c_datamine@@QAAXPBDPBTvector3d@@@Z");
//};

//public: void c_datamine::add_args(char const *, char *)
//{
//    mangled_ppc("?add_args@c_datamine@@QAAXPBDPAD@Z");
//};

//public: void c_datamine::add_camera(void)
//{
//    mangled_ppc("?add_camera@c_datamine@@QAAXXZ");
//};

//public: void c_datamine::commit(void)
//{
//    mangled_ppc("?commit@c_datamine@@QAAXXZ");
//};

//public: void c_datamine::cancel_insert(void)
//{
//    mangled_ppc("?cancel_insert@c_datamine@@QAAXXZ");
//};

//public: void c_datamine_game_info::create_from_game_globals(void)
//{
//    mangled_ppc("?create_from_game_globals@c_datamine_game_info@@QAAXXZ");
//};

//private: struct s_datamine_parameter * c_datamine::fill_and_get_parameter(char const *, enum e_datamine_parameter_type, long)
//{
//    mangled_ppc("?fill_and_get_parameter@c_datamine@@AAAPAUs_datamine_parameter@@PBDW4e_datamine_parameter_type@@J@Z");
//};

//private: void c_datamine::fill_out_header(struct s_datamine_event_header *)
//{
//    mangled_ppc("?fill_out_header@c_datamine@@AAAXPAUs_datamine_event_header@@@Z");
//};

//public: class c_datamine_game_info & c_datamine_game_info::operator=(class c_datamine_game_info const &)
//{
//    mangled_ppc("??4c_datamine_game_info@@QAAAAV0@ABV0@@Z");
//};

//public: void c_datamine::add_external_game_info(class c_datamine_game_info *)
//{
//    mangled_ppc("?add_external_game_info@c_datamine@@QAAXPAVc_datamine_game_info@@@Z");
//};

//bool datamine_allowed_for_current_thread(void)
//{
//    mangled_ppc("?datamine_allowed_for_current_thread@@YA_NXZ");
//};

//char * take_buffer(void)
//{
//    mangled_ppc("?take_buffer@@YAPADXZ");
//};

//void release_buffer(char const *)
//{
//    mangled_ppc("?release_buffer@@YAXPBD@Z");
//};

//public: char const * s_static_string<512>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0CAA@@@QAAPBDPBD@Z");
//};

//public: bool s_static_string<512>::starts_with(char const *) const
//{
//    mangled_ppc("?starts_with@?$s_static_string@$0CAA@@@QBA_NPBD@Z");
//};

//public: bool s_static_string<512>::ends_with(char const *) const
//{
//    mangled_ppc("?ends_with@?$s_static_string@$0CAA@@@QBA_NPBD@Z");
//};

//public: char * s_static_string<512>::copy_to(char *, unsigned int) const
//{
//    mangled_ppc("?copy_to@?$s_static_string@$0CAA@@@QBAPADPADI@Z");
//};

//public: c_static_string<512>::c_static_string<512>(wchar_t const *)
//{
//    mangled_ppc("??0?$c_static_string@$0CAA@@@QAA@PB_W@Z");
//};

//public: char * s_static_string<32>::copy_to(char *, unsigned int) const
//{
//    mangled_ppc("?copy_to@?$s_static_string@$0CA@@@QBAPADPADI@Z");
//};

//public: c_static_wchar_string<512>::c_static_wchar_string<512>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0CAA@@@QAA@XZ");
//};

//public: void c_static_wchar_string<512>::set(wchar_t const *)
//{
//    mangled_ppc("?set@?$c_static_wchar_string@$0CAA@@@QAAXPB_W@Z");
//};

//public: void c_static_wchar_string<512>::set_utf8(struct utf8const *)
//{
//    mangled_ppc("?set_utf8@?$c_static_wchar_string@$0CAA@@@QAAXPBUutf8@@@Z");
//};

//public: wchar_t const * c_static_wchar_string<512>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0CAA@@@QBAPB_WXZ");
//};

//public: void s_static_string<512>::set_wchar(wchar_t const *)
//{
//    mangled_ppc("?set_wchar@?$s_static_string@$0CAA@@@QAAXPB_W@Z");
//};

//public: s_datamine_globals::s_datamine_globals(void)
//{
//    mangled_ppc("??0s_datamine_globals@@QAA@XZ");
//};

//public: s_datamine_globals::~s_datamine_globals(void)
//{
//    mangled_ppc("??1s_datamine_globals@@QAA@XZ");
//};

//void g_datamine_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_datamine_globals@@YAXXZ");
//};

