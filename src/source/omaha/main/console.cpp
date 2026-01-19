/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static long const c_output_handler_registry::k_maximum_output_handlers; // "?k_maximum_output_handlers@c_output_handler_registry@@1JB"
// bool *console_status_render; // "?console_status_render@@3PA_NA"
// bool g_leave_bonobo_init_in_place; // "?g_leave_bonobo_init_in_place@@3_NA"
// bool console_dump_to_debug_display; // "?console_dump_to_debug_display@@3_NA"
// struct c_status_line *g_status_line_head; // "?g_status_line_head@@3PAUc_status_line@@A"
// struct c_status_line *g_status_line_tail; // "?g_status_line_tail@@3PAUc_status_line@@A"
// struct s_status_string *g_status_strings; // "?g_status_strings@@3PAUs_status_string@@A"

// public: char const * c_status_line::printf(char const *, ...);
// public: char const * c_status_line::appendf(char const *, ...);
// public: char const * c_status_line::printf_va(char const *, char *);
// public: char const * c_status_line::appendf_va(char const *, char *);
// public: void c_status_line::set_flag(enum e_status_line_flags, bool);
// public: void c_status_line::set_alpha(float);
// public: void c_status_line::set_color(union rgb_color const &);
// public: void c_status_line::set_in_use(bool);
// public: void c_status_line::clear_text(void);
// public: char const * c_status_line::get_identifier(void) const;
// public: union rgb_color const & c_status_line::get_color(void) const;
// public: float c_status_line::get_alpha(void) const;
// public: bool c_status_line::is_empty(void) const;
// public: char const * c_status_line::get_string(void) const;
// public: bool c_status_line::is_in_use_valid(void) const;
// public: bool c_status_line::is_in_use(void) const;
// public: bool c_status_line::test_flag(enum e_status_line_flags) const;
// public: void c_status_line::add_single(void);
// public: void c_status_line::remove_single(void);
// public: struct c_status_line * c_status_line::previous(void) const;
// public: struct c_status_line * c_status_line::next(void) const;
// public: void c_status_line::initialize_simple(bool *, char const *, long);
// void status_lines_initialize(struct c_status_line *, bool *, long);
// void status_lines_initialize_simple(struct c_status_line *, bool *, char const *, long);
// void status_line_add_single(struct c_status_line *);
// void status_lines_dispose(struct c_status_line *, long);
// void status_line_remove_single(struct c_status_line *);
// char const * status_line_printf(struct c_status_line *, char const *, ...);
// char const * status_line_appendf(struct c_status_line *, char const *, ...);
// void status_lines_clear_text(struct c_status_line *, long);
// void status_lines_set_flags(struct c_status_line *, enum e_status_line_flags, bool, long);
// void status_line_set_flag(struct c_status_line *, enum e_status_line_flags, bool);
// void status_line_set_alpha(struct c_status_line *, float);
// void status_line_set_color(struct c_status_line *, union rgb_color const &);
// void status_line_clear_text(struct c_status_line *);
// char const * status_line_get_string(struct c_status_line *);
// void status_printf(char const *, ...);
// void status_printf_va(char const *, char *);
// void status_string_internal(char const *, char const *);
// void status_strings(char const *, char const *);
// public: void c_status_line_string_cache::add_string(char const *, float, union rgb_color const &, enum e_text_justification);
// public: void c_status_line_string_cache::flush(void);
// private: void c_status_line_string_cache::add_string_internal(char const *, float, union rgb_color const &, enum e_text_justification);
// private: void c_status_line_string_cache::draw_string_internal(char const *, float, union rgb_color const &, enum e_text_justification);
// void status_line_draw(void);
// bool status_line_visible(struct c_status_line const *);
// public: c_status_line_string_cache::c_status_line_string_cache(void);
// public: c_status_line_string_cache::~c_status_line_string_cache(void);
// void status_line_dump(void);
// void status_lines_enable(char const *);
// void status_lines_disable(char const *);
// void console_initialize(void);
// void console_dispose(void);
// long console_get_init_file_count(void);
// char * console_get_init_file_name(enum e_shell_application_type, enum e_init_file_type);
// void console_execute_initial_commands(void);
// struct _iobuf * console_open_init(enum e_init_file_type);
// bool console_get_command_slow(char const *, class c_static_string<256> *);
// bool console_get_initial_commands_for_application_type(enum e_shell_application_type, enum e_init_file_type, class c_wrapped_array<char> *);
// void console_initialize_for_new_map(void);
// void console_open(void);
// void console_close(void);
// bool console_is_active(void);
// bool debugging_system_has_focus(void);
// bool console_is_empty(void);
// void console_update(float);
// void console_paste(char const *);
// void console_get_copy_string(char *, long);
// void console_printf_color(union argb_color const *, char const *, ...);
// void console_printf(char const *, ...);
// void console_clear(void);
// void console_warning(char const *, ...);
// bool console_process_command(char const *, bool);
// void console_complete(void);
// char * console_get_token(void);
// public: virtual void c_console_output_handler::handle_output_message(union argb_color const *, char const *, bool);
// public: virtual void c_console_output_handler::handle_output_message_block_begin(void);
// public: virtual void c_console_output_handler::handle_output_message_block_end(void);
// public: virtual void c_console_output_handler::handle_output_error(char const *);
// public: virtual void c_console_output_handler::handle_output_event(enum e_event_level, char const *, char const *, union rgb_color const *);
// void output_handler_initialize(void);
// void output_handler_dispose(void);
// public: void s_static_array<long, 3>::set_all(long const &);
// public: char & c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::operator[](long);
// public: char * c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::get_elements(void);
// public: char * c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::valid_index(long) const;
// public: class c_wrapped_array_no_init<char> * c_recursive_template_pattern<class c_wrapped_array_no_init<char> >::get_super_class(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::count(void) const;
// public: class c_wrapped_array_no_init<char> const * c_recursive_template_pattern<class c_wrapped_array_no_init<char> >::get_super_class(void) const;
// public: bool c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum e_status_line_flags) const;
// public: void c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::set(enum e_status_line_flags, bool);
// public: char const * s_static_string<256>::append_print_va(char const *, char *);
// public: long & s_static_array<long, 3>::operator[]<enum e_text_justification>(enum e_text_justification);
// public: char const * s_static_string<1024>::operator char const *(void) const;
// public: static bool c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_status_line_flags);
// private: static unsigned long c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_status_line_flags);
// public: static bool s_static_array<long, 3>::valid<enum e_text_justification>(enum e_text_justification);
// public: s_console_globals::s_console_globals(void);
// public: c_console_output_handler::c_console_output_handler(void);
// public: c_output_handler::c_output_handler(void);
// public: s_status_string::s_status_string(void);

//public: char const * c_status_line::printf(char const *, ...)
//{
//    mangled_ppc("?printf@c_status_line@@QAAPBDPBDZZ");
//};

//public: char const * c_status_line::appendf(char const *, ...)
//{
//    mangled_ppc("?appendf@c_status_line@@QAAPBDPBDZZ");
//};

//public: char const * c_status_line::printf_va(char const *, char *)
//{
//    mangled_ppc("?printf_va@c_status_line@@QAAPBDPBDPAD@Z");
//};

//public: char const * c_status_line::appendf_va(char const *, char *)
//{
//    mangled_ppc("?appendf_va@c_status_line@@QAAPBDPBDPAD@Z");
//};

//public: void c_status_line::set_flag(enum e_status_line_flags, bool)
//{
//    mangled_ppc("?set_flag@c_status_line@@QAAXW4e_status_line_flags@@_N@Z");
//};

//public: void c_status_line::set_alpha(float)
//{
//    mangled_ppc("?set_alpha@c_status_line@@QAAXM@Z");
//};

//public: void c_status_line::set_color(union rgb_color const &)
//{
//    mangled_ppc("?set_color@c_status_line@@QAAXABTrgb_color@@@Z");
//};

//public: void c_status_line::set_in_use(bool)
//{
//    mangled_ppc("?set_in_use@c_status_line@@QAAX_N@Z");
//};

//public: void c_status_line::clear_text(void)
//{
//    mangled_ppc("?clear_text@c_status_line@@QAAXXZ");
//};

//public: char const * c_status_line::get_identifier(void) const
//{
//    mangled_ppc("?get_identifier@c_status_line@@QBAPBDXZ");
//};

//public: union rgb_color const & c_status_line::get_color(void) const
//{
//    mangled_ppc("?get_color@c_status_line@@QBAABTrgb_color@@XZ");
//};

//public: float c_status_line::get_alpha(void) const
//{
//    mangled_ppc("?get_alpha@c_status_line@@QBAMXZ");
//};

//public: bool c_status_line::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_status_line@@QBA_NXZ");
//};

//public: char const * c_status_line::get_string(void) const
//{
//    mangled_ppc("?get_string@c_status_line@@QBAPBDXZ");
//};

//public: bool c_status_line::is_in_use_valid(void) const
//{
//    mangled_ppc("?is_in_use_valid@c_status_line@@QBA_NXZ");
//};

//public: bool c_status_line::is_in_use(void) const
//{
//    mangled_ppc("?is_in_use@c_status_line@@QBA_NXZ");
//};

//public: bool c_status_line::test_flag(enum e_status_line_flags) const
//{
//    mangled_ppc("?test_flag@c_status_line@@QBA_NW4e_status_line_flags@@@Z");
//};

//public: void c_status_line::add_single(void)
//{
//    mangled_ppc("?add_single@c_status_line@@QAAXXZ");
//};

//public: void c_status_line::remove_single(void)
//{
//    mangled_ppc("?remove_single@c_status_line@@QAAXXZ");
//};

//public: struct c_status_line * c_status_line::previous(void) const
//{
//    mangled_ppc("?previous@c_status_line@@QBAPAU1@XZ");
//};

//public: struct c_status_line * c_status_line::next(void) const
//{
//    mangled_ppc("?next@c_status_line@@QBAPAU1@XZ");
//};

//public: void c_status_line::initialize_simple(bool *, char const *, long)
//{
//    mangled_ppc("?initialize_simple@c_status_line@@QAAXPA_NPBDJ@Z");
//};

//void status_lines_initialize(struct c_status_line *, bool *, long)
//{
//    mangled_ppc("?status_lines_initialize@@YAXPAUc_status_line@@PA_NJ@Z");
//};

//void status_lines_initialize_simple(struct c_status_line *, bool *, char const *, long)
//{
//    mangled_ppc("?status_lines_initialize_simple@@YAXPAUc_status_line@@PA_NPBDJ@Z");
//};

//void status_line_add_single(struct c_status_line *)
//{
//    mangled_ppc("?status_line_add_single@@YAXPAUc_status_line@@@Z");
//};

//void status_lines_dispose(struct c_status_line *, long)
//{
//    mangled_ppc("?status_lines_dispose@@YAXPAUc_status_line@@J@Z");
//};

//void status_line_remove_single(struct c_status_line *)
//{
//    mangled_ppc("?status_line_remove_single@@YAXPAUc_status_line@@@Z");
//};

//char const * status_line_printf(struct c_status_line *, char const *, ...)
//{
//    mangled_ppc("?status_line_printf@@YAPBDPAUc_status_line@@PBDZZ");
//};

//char const * status_line_appendf(struct c_status_line *, char const *, ...)
//{
//    mangled_ppc("?status_line_appendf@@YAPBDPAUc_status_line@@PBDZZ");
//};

//void status_lines_clear_text(struct c_status_line *, long)
//{
//    mangled_ppc("?status_lines_clear_text@@YAXPAUc_status_line@@J@Z");
//};

//void status_lines_set_flags(struct c_status_line *, enum e_status_line_flags, bool, long)
//{
//    mangled_ppc("?status_lines_set_flags@@YAXPAUc_status_line@@W4e_status_line_flags@@_NJ@Z");
//};

//void status_line_set_flag(struct c_status_line *, enum e_status_line_flags, bool)
//{
//    mangled_ppc("?status_line_set_flag@@YAXPAUc_status_line@@W4e_status_line_flags@@_N@Z");
//};

//void status_line_set_alpha(struct c_status_line *, float)
//{
//    mangled_ppc("?status_line_set_alpha@@YAXPAUc_status_line@@M@Z");
//};

//void status_line_set_color(struct c_status_line *, union rgb_color const &)
//{
//    mangled_ppc("?status_line_set_color@@YAXPAUc_status_line@@ABTrgb_color@@@Z");
//};

//void status_line_clear_text(struct c_status_line *)
//{
//    mangled_ppc("?status_line_clear_text@@YAXPAUc_status_line@@@Z");
//};

//char const * status_line_get_string(struct c_status_line *)
//{
//    mangled_ppc("?status_line_get_string@@YAPBDPAUc_status_line@@@Z");
//};

//void status_printf(char const *, ...)
//{
//    mangled_ppc("?status_printf@@YAXPBDZZ");
//};

//void status_printf_va(char const *, char *)
//{
//    mangled_ppc("?status_printf_va@@YAXPBDPAD@Z");
//};

//void status_string_internal(char const *, char const *)
//{
//    mangled_ppc("?status_string_internal@@YAXPBD0@Z");
//};

//void status_strings(char const *, char const *)
//{
//    mangled_ppc("?status_strings@@YAXPBD0@Z");
//};

//public: void c_status_line_string_cache::add_string(char const *, float, union rgb_color const &, enum e_text_justification)
//{
//    mangled_ppc("?add_string@c_status_line_string_cache@@QAAXPBDMABTrgb_color@@W4e_text_justification@@@Z");
//};

//public: void c_status_line_string_cache::flush(void)
//{
//    mangled_ppc("?flush@c_status_line_string_cache@@QAAXXZ");
//};

//private: void c_status_line_string_cache::add_string_internal(char const *, float, union rgb_color const &, enum e_text_justification)
//{
//    mangled_ppc("?add_string_internal@c_status_line_string_cache@@AAAXPBDMABTrgb_color@@W4e_text_justification@@@Z");
//};

//private: void c_status_line_string_cache::draw_string_internal(char const *, float, union rgb_color const &, enum e_text_justification)
//{
//    mangled_ppc("?draw_string_internal@c_status_line_string_cache@@AAAXPBDMABTrgb_color@@W4e_text_justification@@@Z");
//};

//void status_line_draw(void)
//{
//    mangled_ppc("?status_line_draw@@YAXXZ");
//};

//bool status_line_visible(struct c_status_line const *)
//{
//    mangled_ppc("?status_line_visible@@YA_NPBUc_status_line@@@Z");
//};

//public: c_status_line_string_cache::c_status_line_string_cache(void)
//{
//    mangled_ppc("??0c_status_line_string_cache@@QAA@XZ");
//};

//public: c_status_line_string_cache::~c_status_line_string_cache(void)
//{
//    mangled_ppc("??1c_status_line_string_cache@@QAA@XZ");
//};

//void status_line_dump(void)
//{
//    mangled_ppc("?status_line_dump@@YAXXZ");
//};

//void status_lines_enable(char const *)
//{
//    mangled_ppc("?status_lines_enable@@YAXPBD@Z");
//};

//void status_lines_disable(char const *)
//{
//    mangled_ppc("?status_lines_disable@@YAXPBD@Z");
//};

//void console_initialize(void)
//{
//    mangled_ppc("?console_initialize@@YAXXZ");
//};

//void console_dispose(void)
//{
//    mangled_ppc("?console_dispose@@YAXXZ");
//};

//long console_get_init_file_count(void)
//{
//    mangled_ppc("?console_get_init_file_count@@YAJXZ");
//};

//char * console_get_init_file_name(enum e_shell_application_type, enum e_init_file_type)
//{
//    mangled_ppc("?console_get_init_file_name@@YAPADW4e_shell_application_type@@W4e_init_file_type@@@Z");
//};

//void console_execute_initial_commands(void)
//{
//    mangled_ppc("?console_execute_initial_commands@@YAXXZ");
//};

//struct _iobuf * console_open_init(enum e_init_file_type)
//{
//    mangled_ppc("?console_open_init@@YAPAU_iobuf@@W4e_init_file_type@@@Z");
//};

//bool console_get_command_slow(char const *, class c_static_string<256> *)
//{
//    mangled_ppc("?console_get_command_slow@@YA_NPBDPAV?$c_static_string@$0BAA@@@@Z");
//};

//bool console_get_initial_commands_for_application_type(enum e_shell_application_type, enum e_init_file_type, class c_wrapped_array<char> *)
//{
//    mangled_ppc("?console_get_initial_commands_for_application_type@@YA_NW4e_shell_application_type@@W4e_init_file_type@@PAV?$c_wrapped_array@D@@@Z");
//};

//void console_initialize_for_new_map(void)
//{
//    mangled_ppc("?console_initialize_for_new_map@@YAXXZ");
//};

//void console_open(void)
//{
//    mangled_ppc("?console_open@@YAXXZ");
//};

//void console_close(void)
//{
//    mangled_ppc("?console_close@@YAXXZ");
//};

//bool console_is_active(void)
//{
//    mangled_ppc("?console_is_active@@YA_NXZ");
//};

//bool debugging_system_has_focus(void)
//{
//    mangled_ppc("?debugging_system_has_focus@@YA_NXZ");
//};

//bool console_is_empty(void)
//{
//    mangled_ppc("?console_is_empty@@YA_NXZ");
//};

//void console_update(float)
//{
//    mangled_ppc("?console_update@@YAXM@Z");
//};

//void console_paste(char const *)
//{
//    mangled_ppc("?console_paste@@YAXPBD@Z");
//};

//void console_get_copy_string(char *, long)
//{
//    mangled_ppc("?console_get_copy_string@@YAXPADJ@Z");
//};

//void console_printf_color(union argb_color const *, char const *, ...)
//{
//    mangled_ppc("?console_printf_color@@YAXPBTargb_color@@PBDZZ");
//};

//void console_printf(char const *, ...)
//{
//    mangled_ppc("?console_printf@@YAXPBDZZ");
//};

//void console_clear(void)
//{
//    mangled_ppc("?console_clear@@YAXXZ");
//};

//void console_warning(char const *, ...)
//{
//    mangled_ppc("?console_warning@@YAXPBDZZ");
//};

//bool console_process_command(char const *, bool)
//{
//    mangled_ppc("?console_process_command@@YA_NPBD_N@Z");
//};

//void console_complete(void)
//{
//    mangled_ppc("?console_complete@@YAXXZ");
//};

//char * console_get_token(void)
//{
//    mangled_ppc("?console_get_token@@YAPADXZ");
//};

//public: virtual void c_console_output_handler::handle_output_message(union argb_color const *, char const *, bool)
//{
//    mangled_ppc("?handle_output_message@c_console_output_handler@@UAAXPBTargb_color@@PBD_N@Z");
//};

//public: virtual void c_console_output_handler::handle_output_message_block_begin(void)
//{
//    mangled_ppc("?handle_output_message_block_begin@c_console_output_handler@@UAAXXZ");
//};

//public: virtual void c_console_output_handler::handle_output_message_block_end(void)
//{
//    mangled_ppc("?handle_output_message_block_end@c_console_output_handler@@UAAXXZ");
//};

//public: virtual void c_console_output_handler::handle_output_error(char const *)
//{
//    mangled_ppc("?handle_output_error@c_console_output_handler@@UAAXPBD@Z");
//};

//public: virtual void c_console_output_handler::handle_output_event(enum e_event_level, char const *, char const *, union rgb_color const *)
//{
//    mangled_ppc("?handle_output_event@c_console_output_handler@@UAAXW4e_event_level@@PBD1PBTrgb_color@@@Z");
//};

//void output_handler_initialize(void)
//{
//    mangled_ppc("?output_handler_initialize@@YAXXZ");
//};

//void output_handler_dispose(void)
//{
//    mangled_ppc("?output_handler_dispose@@YAXXZ");
//};

//public: void s_static_array<long, 3>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$02@@QAAXABJ@Z");
//};

//public: char & c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@D@@D@@QAAAADJ@Z");
//};

//public: char * c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@D@@D@@QAAPADXZ");
//};

//public: char * c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@D@@D@@QAAPADXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@D@@D@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<char> * c_recursive_template_pattern<class c_wrapped_array_no_init<char> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@D@@@@QAAPAV?$c_wrapped_array_no_init@D@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<char>, char>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@D@@D@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<char> const * c_recursive_template_pattern<class c_wrapped_array_no_init<char> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@D@@@@QBAPBV?$c_wrapped_array_no_init@D@@XZ");
//};

//public: bool c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum e_status_line_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_status_line_flags@@K$03Us_default_enum_string_resolver@@@@QBA_NW4e_status_line_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::set(enum e_status_line_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_status_line_flags@@K$03Us_default_enum_string_resolver@@@@QAAXW4e_status_line_flags@@_N@Z");
//};

//public: char const * s_static_string<256>::append_print_va(char const *, char *)
//{
//    mangled_ppc("?append_print_va@?$s_static_string@$0BAA@@@QAAPBDPBDPAD@Z");
//};

//public: long & s_static_array<long, 3>::operator[]<enum e_text_justification>(enum e_text_justification)
//{
//    mangled_ppc("??$?AW4e_text_justification@@@?$s_static_array@J$02@@QAAAAJW4e_text_justification@@@Z");
//};

//public: char const * s_static_string<1024>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0EAA@@@QBAPBDXZ");
//};

//public: static bool c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_status_line_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_status_line_flags@@K$03Us_default_enum_string_resolver@@@@SA_NW4e_status_line_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_status_line_flags, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_status_line_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_status_line_flags@@K$03Us_default_enum_string_resolver@@@@CAKW4e_status_line_flags@@@Z");
//};

//public: static bool s_static_array<long, 3>::valid<enum e_text_justification>(enum e_text_justification)
//{
//    mangled_ppc("??$valid@W4e_text_justification@@@?$s_static_array@J$02@@SA_NW4e_text_justification@@@Z");
//};

//public: s_console_globals::s_console_globals(void)
//{
//    mangled_ppc("??0s_console_globals@@QAA@XZ");
//};

//public: c_console_output_handler::c_console_output_handler(void)
//{
//    mangled_ppc("??0c_console_output_handler@@QAA@XZ");
//};

//public: c_output_handler::c_output_handler(void)
//{
//    mangled_ppc("??0c_output_handler@@QAA@XZ");
//};

//public: s_status_string::s_status_string(void)
//{
//    mangled_ppc("??0s_status_string@@QAA@XZ");
//};

