/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_banner_string; // "?k_banner_string@@3PBDB"

// public: void c_event_log_manager::initialize(class c_event_log_folder_manager *);
// public: void c_event_log_manager::dispose(void);
// public: enum e_event_log_index c_event_log_manager::create_log(char const *, class s_flags<enum e_event_log_flags, unsigned long, 5>);
// public: bool c_event_log_manager::log_is_valid(enum e_event_log_index) const;
// public: void c_event_log_manager::begin_writing(enum e_event_log_index);
// public: void c_event_log_manager::write_to_log(enum e_event_log_index, enum c_event_log_manager::e_write_buffer_mode, char const *);
// public: void c_event_log_manager::flush_all_open_logs(void);
// public: bool c_event_log_manager::get_retain_open_files(void) const;
// public: void c_event_log_manager::touch_all_logs(void);
// public: void c_event_log_manager::close_all_logs(void);
// public: void c_event_log_manager::reset_all_logs_for_redirect(void);
// public: long c_event_log_manager::get_log_paths(long, class c_file_path *);
// private: static bool c_event_log_manager::can_write_to_event_log(struct c_event_log_manager::s_event_log const *, bool);
// private: bool c_event_log_manager::log_file_open(enum e_event_log_index);
// private: void c_event_log_manager::log_file_write_internal(enum e_event_log_index, enum c_event_log_manager::e_write_buffer_mode, char const *);
// private: void c_event_log_manager::log_file_close(enum e_event_log_index);
// private: enum e_event_log_index c_event_log_manager::find_existing_event_log(char const *, class s_flags<enum e_event_log_flags, unsigned long, 5>);
// public: bool c_static_stack<struct c_event_log_manager::s_event_log, 32>::valid(long) const;
// public: bool c_static_stack<struct c_event_log_manager::s_event_log, 32>::full(void) const;
// public: long c_static_stack<struct c_event_log_manager::s_event_log, 32>::count(void) const;
// public: void c_static_stack<struct c_event_log_manager::s_event_log, 32>::clear(void);
// public: long c_static_stack<struct c_event_log_manager::s_event_log, 32>::push(void);
// public: struct c_event_log_manager::s_event_log * c_static_stack<struct c_event_log_manager::s_event_log, 32>::get(long);
// public: unsigned char * s_static_array<unsigned char, 65536>::get_elements(void);
// public: unsigned int s_static_array<unsigned char, 65536>::get_total_element_size(void) const;
// public: bool c_static_stack<struct c_event_log_manager::s_event_log, 32>::valid(void) const;
// public: bool s_flags<enum e_event_log_flags, unsigned long, 5>::test(enum e_event_log_flags) const;
// public: bool s_flags<enum e_event_log_flags, unsigned long, 5>::operator==(class s_flags<enum e_event_log_flags, unsigned long, 5> const &) const;
// public: char * c_file_path::get_full_path<256>(char (&)[256]) const;

//public: void c_event_log_manager::initialize(class c_event_log_folder_manager *)
//{
//    mangled_ppc("?initialize@c_event_log_manager@@QAAXPAVc_event_log_folder_manager@@@Z");
//};

//public: void c_event_log_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_event_log_manager@@QAAXXZ");
//};

//public: enum e_event_log_index c_event_log_manager::create_log(char const *, class s_flags<enum e_event_log_flags, unsigned long, 5>)
//{
//    mangled_ppc("?create_log@c_event_log_manager@@QAA?AW4e_event_log_index@@PBDV?$s_flags@W4e_event_log_flags@@K$04@@@Z");
//};

//public: bool c_event_log_manager::log_is_valid(enum e_event_log_index) const
//{
//    mangled_ppc("?log_is_valid@c_event_log_manager@@QBA_NW4e_event_log_index@@@Z");
//};

//public: void c_event_log_manager::begin_writing(enum e_event_log_index)
//{
//    mangled_ppc("?begin_writing@c_event_log_manager@@QAAXW4e_event_log_index@@@Z");
//};

//public: void c_event_log_manager::write_to_log(enum e_event_log_index, enum c_event_log_manager::e_write_buffer_mode, char const *)
//{
//    mangled_ppc("?write_to_log@c_event_log_manager@@QAAXW4e_event_log_index@@W4e_write_buffer_mode@1@PBD@Z");
//};

//public: void c_event_log_manager::flush_all_open_logs(void)
//{
//    mangled_ppc("?flush_all_open_logs@c_event_log_manager@@QAAXXZ");
//};

//public: bool c_event_log_manager::get_retain_open_files(void) const
//{
//    mangled_ppc("?get_retain_open_files@c_event_log_manager@@QBA_NXZ");
//};

//public: void c_event_log_manager::touch_all_logs(void)
//{
//    mangled_ppc("?touch_all_logs@c_event_log_manager@@QAAXXZ");
//};

//public: void c_event_log_manager::close_all_logs(void)
//{
//    mangled_ppc("?close_all_logs@c_event_log_manager@@QAAXXZ");
//};

//public: void c_event_log_manager::reset_all_logs_for_redirect(void)
//{
//    mangled_ppc("?reset_all_logs_for_redirect@c_event_log_manager@@QAAXXZ");
//};

//public: long c_event_log_manager::get_log_paths(long, class c_file_path *)
//{
//    mangled_ppc("?get_log_paths@c_event_log_manager@@QAAJJPAVc_file_path@@@Z");
//};

//private: static bool c_event_log_manager::can_write_to_event_log(struct c_event_log_manager::s_event_log const *, bool)
//{
//    mangled_ppc("?can_write_to_event_log@c_event_log_manager@@CA_NPBUs_event_log@1@_N@Z");
//};

//private: bool c_event_log_manager::log_file_open(enum e_event_log_index)
//{
//    mangled_ppc("?log_file_open@c_event_log_manager@@AAA_NW4e_event_log_index@@@Z");
//};

//private: void c_event_log_manager::log_file_write_internal(enum e_event_log_index, enum c_event_log_manager::e_write_buffer_mode, char const *)
//{
//    mangled_ppc("?log_file_write_internal@c_event_log_manager@@AAAXW4e_event_log_index@@W4e_write_buffer_mode@1@PBD@Z");
//};

//private: void c_event_log_manager::log_file_close(enum e_event_log_index)
//{
//    mangled_ppc("?log_file_close@c_event_log_manager@@AAAXW4e_event_log_index@@@Z");
//};

//private: enum e_event_log_index c_event_log_manager::find_existing_event_log(char const *, class s_flags<enum e_event_log_flags, unsigned long, 5>)
//{
//    mangled_ppc("?find_existing_event_log@c_event_log_manager@@AAA?AW4e_event_log_index@@PBDV?$s_flags@W4e_event_log_flags@@K$04@@@Z");
//};

//public: bool c_static_stack<struct c_event_log_manager::s_event_log, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_event_log_manager::s_event_log, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_event_log_manager::s_event_log, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QBAJXZ");
//};

//public: void c_static_stack<struct c_event_log_manager::s_event_log, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QAAXXZ");
//};

//public: long c_static_stack<struct c_event_log_manager::s_event_log, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QAAJXZ");
//};

//public: struct c_event_log_manager::s_event_log * c_static_stack<struct c_event_log_manager::s_event_log, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QAAPAUs_event_log@c_event_log_manager@@J@Z");
//};

//public: unsigned char * s_static_array<unsigned char, 65536>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@E$0BAAAA@@@QAAPAEXZ");
//};

//public: unsigned int s_static_array<unsigned char, 65536>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@E$0BAAAA@@@QBAIXZ");
//};

//public: bool c_static_stack<struct c_event_log_manager::s_event_log, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_event_log@c_event_log_manager@@$0CA@@@QBA_NXZ");
//};

//public: bool s_flags<enum e_event_log_flags, unsigned long, 5>::test(enum e_event_log_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_event_log_flags@@K$04@@QBA_NW4e_event_log_flags@@@Z");
//};

//public: bool s_flags<enum e_event_log_flags, unsigned long, 5>::operator==(class s_flags<enum e_event_log_flags, unsigned long, 5> const &) const
//{
//    mangled_ppc("??8?$s_flags@W4e_event_log_flags@@K$04@@QBA_NABV0@@Z");
//};

//public: char * c_file_path::get_full_path<256>(char (&)[256]) const
//{
//    mangled_ppc("??$get_full_path@$0BAA@@c_file_path@@QBAPADAAY0BAA@D@Z");
//};

