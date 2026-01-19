/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool (__cdecl **hs_type_primitive_parsers)(long); // "?hs_type_primitive_parsers@@3PAP6A_NJ@ZA"

// void hs_dummy_function(void);
// bool hs_parse_begin(short, long);
// bool hs_parse_if(short, long);
// bool hs_parse_cond(short, long);
// long hs_parse_cond_recursive(long, long);
// bool hs_parse_set(short, long);
// bool hs_parse_logical(short, long);
// bool hs_parse_arithmetic(short, long);
// bool hs_parse_equality(short, long);
// bool hs_get_parameter_indices(char const *, short, long *const, long);
// bool hs_parse_inequality(short, long);
// bool hs_parse_sleep_forever(short, long);
// bool hs_parse_sleep(short, long);
// bool hs_parse_sleep_until(short, long);
// bool hs_parse_wake(short, long);
// bool hs_parse_inspect(short, long);
// bool hs_parse_object_cast_up(short, long);
// bool hs_parse_debug_string(short, long);
// bool hs_parse_branch(short, long);
// void hs_compile_initialize(bool);
// void hs_compile_dispose(void);
// long hs_compile_expression(long, char const *, char const **, char const **);
// public: c_hs_tokenizer::c_hs_tokenizer(long, char *, char const *, long);
// public: bool c_hs_tokenizer::done(void) const;
// bool hs_compile_source(bool, bool);
// void hs_compile_state_initialize(struct scenario *, struct s_hs_compile_state *);
// void hs_compile_strip_failed_special_forms(struct s_hs_compile_state const *, bool);
// void fail_special_form_recursive(long *, long *, long, enum e_reference_type);
// void fail_syntax_node_recursive(long);
// struct hs_source_file * source_offset_get_source_file(long, long *);
// char * hs_compile_add_source(long, char const *);
// void hs_compile_first_pass(struct s_hs_compile_state *, long, char const *, char const **, long *);
// bool hs_compile_second_pass(struct s_hs_compile_state *, bool);
// void hs_compile_finish(void);
// bool hs_verify_source_offset(long);
// bool hs_compile_postprocess_and_verify(char const **, char const **, bool);
// void hs_concatenate_expression(long);
// long hs_concatenate_string_constant(char const *);
// long hs_find_string_constant(char const *);
// long hs_get_current_compiling_script_index(void);
// bool hs_add_script_internal(long, long, long, long, long, short, short, long *);
// bool hs_script_add_parameter(long, long);
// public: void c_hs_tokenizer::advance_cursor(void);
// long hs_tokenize(class c_hs_tokenizer *);
// public: char c_hs_tokenizer::get_cursor_character(void) const;
// public: bool c_hs_tokenizer::has_source_file_data(void) const;
// public: long c_hs_tokenizer::get_cursor_offset(void) const;
// public: long c_hs_tokenizer::get_cursor_global_source_offset(void) const;
// public: char const * c_hs_tokenizer::get_source_file_data(long) const;
// public: long c_hs_tokenizer::get_cursor_line_number(void) const;
// public: long c_hs_tokenizer::get_source_file_local_offset(long) const;
// long hs_source_pointer_get_line_number(char const *, char const *);
// void hs_tokenize_primitive(class c_hs_tokenizer *, long);
// void hs_token_primitive_until_delimiter(class c_hs_tokenizer *, long, int, char const *);
// public: void c_hs_tokenizer::null_terminate_token(void);
// void hs_tokenize_nonprimitive(class c_hs_tokenizer *, long);
// public: void c_hs_tokenizer::skip_whitespace_and_null_terminate_token_if_possible(void);
// public: void c_hs_tokenizer::skip_whitespace(void);
// bool character_in_list(char, short, char const *);
// bool hs_parse_special_form(long);
// bool hs_add_global(long);
// bool hs_add_script(long);
// bool hs_parse(long, short);
// bool hs_parse_primitive(long);
// bool hs_parse_variable(long);
// short hs_count_children(long);
// void hs_compile_add_reference(long, enum e_reference_type, long);
// bool hs_parse_nonprimitive(long);
// void hs_parse_call_predicate(long, bool *, bool *);
// bool hs_parse_boolean(long);
// bool hs_parse_real(long);
// bool hs_parse_integer(long);
// bool hs_parse_string(long);
// bool hs_parse_script(long);
// bool hs_parse_string_id(long);
// bool hs_parse_unit_seat_mapping(long);
// bool hs_unit_seat_mappings_match(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &);
// bool hs_parse_budget_reference(long);
// bool hs_parse_tag_reference_not_resolving(long);
// bool hs_compile_get_tag_by_name(char const *, unsigned long *);
// bool hs_parse_tag_reference(long);
// bool hs_tag_load_with_tag_list(unsigned long const *, char const *, long *, unsigned long *);
// bool hs_tag_load_leaf_tag(unsigned long, char const *, long *, unsigned long *);
// bool hs_parse_sound_tag_reference(long);
// bool hs_parse_enum(long);
// bool hs_parse_trigger_volume(long);
// bool hs_parse_tag_block_element_string_id(long, long const *, long, struct s_tag_block *, long);
// bool hs_parse_cutscene_flag(long);
// bool hs_parse_cutscene_camera_point(long);
// bool hs_parse_tag_block_element(long, char const *, long, struct s_tag_block *, long);
// bool hs_parse_cutscene_title(long);
// bool hs_parse_cutscene_recording(long);
// bool hs_parse_device_group(long);
// bool hs_parse_ai(long);
// bool hs_parse_ai_command_list(long);
// bool hs_parse_ai_command_script(long);
// bool hs_parse_ai_behavior(long);
// bool hs_parse_ai_orders(long);
// bool hs_parse_ai_line(long);
// bool hs_parse_starting_profile(long);
// bool hs_parse_conversation(long);
// bool hs_parse_player(long);
// bool hs_parse_zone_set(long);
// bool hs_parse_designer_zone(long);
// bool hs_parse_cinematic_lightprobe(long);
// bool hs_parse_object_name(long);
// bool hs_parse_object_and_object_name_internal(long, enum e_hs_type);
// bool hs_parse_object(long);
// bool hs_parse_point_ref(long);
// bool hs_parse_style(long);
// bool hs_parse_object_list(long);
// bool hs_parse_folder(long);
// bool hs_macro_function_parse(short, long);
// short string_list_find(char const *, short, char const **const);
// public: bool c_static_stack<struct s_hs_unit_seat_mapping, 256>::full(void) const;
// public: long c_static_stack<struct s_hs_unit_seat_mapping, 256>::count(void) const;
// public: void c_static_stack<struct s_hs_unit_seat_mapping, 256>::push_back(struct s_hs_unit_seat_mapping const &);
// public: struct s_hs_unit_seat_mapping * c_static_stack<struct s_hs_unit_seat_mapping, 256>::get_elements(void);
// public: c_static_stack<struct s_hs_unit_seat_mapping, 256>::c_static_stack<struct s_hs_unit_seat_mapping, 256>(void);
// public: bool c_static_stack<struct s_hs_unit_seat_mapping, 256>::valid(void) const;
// public: long c_static_stack<struct s_hs_unit_seat_mapping, 256>::push(void);
// public: struct s_hs_unit_seat_mapping * c_static_stack<struct s_hs_unit_seat_mapping, 256>::get(long);
// public: bool c_static_stack<struct s_hs_unit_seat_mapping, 256>::valid(long) const;
// int sprintf_s<1024>(char (&)[1024], char const *, ...);
// struct s_hs_unit_seat_mapping const * std::search<struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const *)>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &));
// bool hs_check_block_index_type_and_return<short, bool>(bool);
// struct s_hs_unit_seat_mapping const * std::_Checked_base<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *&);
// int * std::_Dist_type<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *);
// struct s_hs_unit_seat_mapping const * std::_Search<struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, int, int, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const *)>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &), int *, int *);
// void std::_Checked_assign_from_base<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *&, struct s_hs_unit_seat_mapping const *const &);
// struct s_hs_unit_seat_mapping const * std::_Checked_base<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<bool (struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &)>(bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &), wchar_t const *, unsigned int);
// void std::_Distance<struct s_hs_unit_seat_mapping const *, int>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, int &);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *const &);
// void std::_Debug_range2<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Distance2<struct s_hs_unit_seat_mapping const *, int>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, int &, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_hs_unit_seat_mapping>(struct s_hs_unit_seat_mapping const *, wchar_t const *, unsigned int);

//void hs_dummy_function(void)
//{
//    mangled_ppc("?hs_dummy_function@@YAXXZ");
//};

//bool hs_parse_begin(short, long)
//{
//    mangled_ppc("?hs_parse_begin@@YA_NFJ@Z");
//};

//bool hs_parse_if(short, long)
//{
//    mangled_ppc("?hs_parse_if@@YA_NFJ@Z");
//};

//bool hs_parse_cond(short, long)
//{
//    mangled_ppc("?hs_parse_cond@@YA_NFJ@Z");
//};

//long hs_parse_cond_recursive(long, long)
//{
//    mangled_ppc("?hs_parse_cond_recursive@@YAJJJ@Z");
//};

//bool hs_parse_set(short, long)
//{
//    mangled_ppc("?hs_parse_set@@YA_NFJ@Z");
//};

//bool hs_parse_logical(short, long)
//{
//    mangled_ppc("?hs_parse_logical@@YA_NFJ@Z");
//};

//bool hs_parse_arithmetic(short, long)
//{
//    mangled_ppc("?hs_parse_arithmetic@@YA_NFJ@Z");
//};

//bool hs_parse_equality(short, long)
//{
//    mangled_ppc("?hs_parse_equality@@YA_NFJ@Z");
//};

//bool hs_get_parameter_indices(char const *, short, long *const, long)
//{
//    mangled_ppc("?hs_get_parameter_indices@@YA_NPBDFQAJJ@Z");
//};

//bool hs_parse_inequality(short, long)
//{
//    mangled_ppc("?hs_parse_inequality@@YA_NFJ@Z");
//};

//bool hs_parse_sleep_forever(short, long)
//{
//    mangled_ppc("?hs_parse_sleep_forever@@YA_NFJ@Z");
//};

//bool hs_parse_sleep(short, long)
//{
//    mangled_ppc("?hs_parse_sleep@@YA_NFJ@Z");
//};

//bool hs_parse_sleep_until(short, long)
//{
//    mangled_ppc("?hs_parse_sleep_until@@YA_NFJ@Z");
//};

//bool hs_parse_wake(short, long)
//{
//    mangled_ppc("?hs_parse_wake@@YA_NFJ@Z");
//};

//bool hs_parse_inspect(short, long)
//{
//    mangled_ppc("?hs_parse_inspect@@YA_NFJ@Z");
//};

//bool hs_parse_object_cast_up(short, long)
//{
//    mangled_ppc("?hs_parse_object_cast_up@@YA_NFJ@Z");
//};

//bool hs_parse_debug_string(short, long)
//{
//    mangled_ppc("?hs_parse_debug_string@@YA_NFJ@Z");
//};

//bool hs_parse_branch(short, long)
//{
//    mangled_ppc("?hs_parse_branch@@YA_NFJ@Z");
//};

//void hs_compile_initialize(bool)
//{
//    mangled_ppc("?hs_compile_initialize@@YAX_N@Z");
//};

//void hs_compile_dispose(void)
//{
//    mangled_ppc("?hs_compile_dispose@@YAXXZ");
//};

//long hs_compile_expression(long, char const *, char const **, char const **)
//{
//    mangled_ppc("?hs_compile_expression@@YAJJPBDPAPBD1@Z");
//};

//public: c_hs_tokenizer::c_hs_tokenizer(long, char *, char const *, long)
//{
//    mangled_ppc("??0c_hs_tokenizer@@QAA@JPADPBDJ@Z");
//};

//public: bool c_hs_tokenizer::done(void) const
//{
//    mangled_ppc("?done@c_hs_tokenizer@@QBA_NXZ");
//};

//bool hs_compile_source(bool, bool)
//{
//    mangled_ppc("?hs_compile_source@@YA_N_N0@Z");
//};

//void hs_compile_state_initialize(struct scenario *, struct s_hs_compile_state *)
//{
//    mangled_ppc("?hs_compile_state_initialize@@YAXPAUscenario@@PAUs_hs_compile_state@@@Z");
//};

//void hs_compile_strip_failed_special_forms(struct s_hs_compile_state const *, bool)
//{
//    mangled_ppc("?hs_compile_strip_failed_special_forms@@YAXPBUs_hs_compile_state@@_N@Z");
//};

//void fail_special_form_recursive(long *, long *, long, enum e_reference_type)
//{
//    mangled_ppc("?fail_special_form_recursive@@YAXPAJ0JW4e_reference_type@@@Z");
//};

//void fail_syntax_node_recursive(long)
//{
//    mangled_ppc("?fail_syntax_node_recursive@@YAXJ@Z");
//};

//struct hs_source_file * source_offset_get_source_file(long, long *)
//{
//    mangled_ppc("?source_offset_get_source_file@@YAPAUhs_source_file@@JPAJ@Z");
//};

//char * hs_compile_add_source(long, char const *)
//{
//    mangled_ppc("?hs_compile_add_source@@YAPADJPBD@Z");
//};

//void hs_compile_first_pass(struct s_hs_compile_state *, long, char const *, char const **, long *)
//{
//    mangled_ppc("?hs_compile_first_pass@@YAXPAUs_hs_compile_state@@JPBDPAPBDPAJ@Z");
//};

//bool hs_compile_second_pass(struct s_hs_compile_state *, bool)
//{
//    mangled_ppc("?hs_compile_second_pass@@YA_NPAUs_hs_compile_state@@_N@Z");
//};

//void hs_compile_finish(void)
//{
//    mangled_ppc("?hs_compile_finish@@YAXXZ");
//};

//bool hs_verify_source_offset(long)
//{
//    mangled_ppc("?hs_verify_source_offset@@YA_NJ@Z");
//};

//bool hs_compile_postprocess_and_verify(char const **, char const **, bool)
//{
//    mangled_ppc("?hs_compile_postprocess_and_verify@@YA_NPAPBD0_N@Z");
//};

//void hs_concatenate_expression(long)
//{
//    mangled_ppc("?hs_concatenate_expression@@YAXJ@Z");
//};

//long hs_concatenate_string_constant(char const *)
//{
//    mangled_ppc("?hs_concatenate_string_constant@@YAJPBD@Z");
//};

//long hs_find_string_constant(char const *)
//{
//    mangled_ppc("?hs_find_string_constant@@YAJPBD@Z");
//};

//long hs_get_current_compiling_script_index(void)
//{
//    mangled_ppc("?hs_get_current_compiling_script_index@@YAJXZ");
//};

//bool hs_add_script_internal(long, long, long, long, long, short, short, long *)
//{
//    mangled_ppc("?hs_add_script_internal@@YA_NJJJJJFFPAJ@Z");
//};

//bool hs_script_add_parameter(long, long)
//{
//    mangled_ppc("?hs_script_add_parameter@@YA_NJJ@Z");
//};

//public: void c_hs_tokenizer::advance_cursor(void)
//{
//    mangled_ppc("?advance_cursor@c_hs_tokenizer@@QAAXXZ");
//};

//long hs_tokenize(class c_hs_tokenizer *)
//{
//    mangled_ppc("?hs_tokenize@@YAJPAVc_hs_tokenizer@@@Z");
//};

//public: char c_hs_tokenizer::get_cursor_character(void) const
//{
//    mangled_ppc("?get_cursor_character@c_hs_tokenizer@@QBADXZ");
//};

//public: bool c_hs_tokenizer::has_source_file_data(void) const
//{
//    mangled_ppc("?has_source_file_data@c_hs_tokenizer@@QBA_NXZ");
//};

//public: long c_hs_tokenizer::get_cursor_offset(void) const
//{
//    mangled_ppc("?get_cursor_offset@c_hs_tokenizer@@QBAJXZ");
//};

//public: long c_hs_tokenizer::get_cursor_global_source_offset(void) const
//{
//    mangled_ppc("?get_cursor_global_source_offset@c_hs_tokenizer@@QBAJXZ");
//};

//public: char const * c_hs_tokenizer::get_source_file_data(long) const
//{
//    mangled_ppc("?get_source_file_data@c_hs_tokenizer@@QBAPBDJ@Z");
//};

//public: long c_hs_tokenizer::get_cursor_line_number(void) const
//{
//    mangled_ppc("?get_cursor_line_number@c_hs_tokenizer@@QBAJXZ");
//};

//public: long c_hs_tokenizer::get_source_file_local_offset(long) const
//{
//    mangled_ppc("?get_source_file_local_offset@c_hs_tokenizer@@QBAJJ@Z");
//};

//long hs_source_pointer_get_line_number(char const *, char const *)
//{
//    mangled_ppc("?hs_source_pointer_get_line_number@@YAJPBD0@Z");
//};

//void hs_tokenize_primitive(class c_hs_tokenizer *, long)
//{
//    mangled_ppc("?hs_tokenize_primitive@@YAXPAVc_hs_tokenizer@@J@Z");
//};

//void hs_token_primitive_until_delimiter(class c_hs_tokenizer *, long, int, char const *)
//{
//    mangled_ppc("?hs_token_primitive_until_delimiter@@YAXPAVc_hs_tokenizer@@JHPBD@Z");
//};

//public: void c_hs_tokenizer::null_terminate_token(void)
//{
//    mangled_ppc("?null_terminate_token@c_hs_tokenizer@@QAAXXZ");
//};

//void hs_tokenize_nonprimitive(class c_hs_tokenizer *, long)
//{
//    mangled_ppc("?hs_tokenize_nonprimitive@@YAXPAVc_hs_tokenizer@@J@Z");
//};

//public: void c_hs_tokenizer::skip_whitespace_and_null_terminate_token_if_possible(void)
//{
//    mangled_ppc("?skip_whitespace_and_null_terminate_token_if_possible@c_hs_tokenizer@@QAAXXZ");
//};

//public: void c_hs_tokenizer::skip_whitespace(void)
//{
//    mangled_ppc("?skip_whitespace@c_hs_tokenizer@@QAAXXZ");
//};

//bool character_in_list(char, short, char const *)
//{
//    mangled_ppc("?character_in_list@@YA_NDFPBD@Z");
//};

//bool hs_parse_special_form(long)
//{
//    mangled_ppc("?hs_parse_special_form@@YA_NJ@Z");
//};

//bool hs_add_global(long)
//{
//    mangled_ppc("?hs_add_global@@YA_NJ@Z");
//};

//bool hs_add_script(long)
//{
//    mangled_ppc("?hs_add_script@@YA_NJ@Z");
//};

//bool hs_parse(long, short)
//{
//    mangled_ppc("?hs_parse@@YA_NJF@Z");
//};

//bool hs_parse_primitive(long)
//{
//    mangled_ppc("?hs_parse_primitive@@YA_NJ@Z");
//};

//bool hs_parse_variable(long)
//{
//    mangled_ppc("?hs_parse_variable@@YA_NJ@Z");
//};

//short hs_count_children(long)
//{
//    mangled_ppc("?hs_count_children@@YAFJ@Z");
//};

//void hs_compile_add_reference(long, enum e_reference_type, long)
//{
//    mangled_ppc("?hs_compile_add_reference@@YAXJW4e_reference_type@@J@Z");
//};

//bool hs_parse_nonprimitive(long)
//{
//    mangled_ppc("?hs_parse_nonprimitive@@YA_NJ@Z");
//};

//void hs_parse_call_predicate(long, bool *, bool *)
//{
//    mangled_ppc("?hs_parse_call_predicate@@YAXJPA_N0@Z");
//};

//bool hs_parse_boolean(long)
//{
//    mangled_ppc("?hs_parse_boolean@@YA_NJ@Z");
//};

//bool hs_parse_real(long)
//{
//    mangled_ppc("?hs_parse_real@@YA_NJ@Z");
//};

//bool hs_parse_integer(long)
//{
//    mangled_ppc("?hs_parse_integer@@YA_NJ@Z");
//};

//bool hs_parse_string(long)
//{
//    mangled_ppc("?hs_parse_string@@YA_NJ@Z");
//};

//bool hs_parse_script(long)
//{
//    mangled_ppc("?hs_parse_script@@YA_NJ@Z");
//};

//bool hs_parse_string_id(long)
//{
//    mangled_ppc("?hs_parse_string_id@@YA_NJ@Z");
//};

//bool hs_parse_unit_seat_mapping(long)
//{
//    mangled_ppc("?hs_parse_unit_seat_mapping@@YA_NJ@Z");
//};

//bool hs_unit_seat_mappings_match(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &)
//{
//    mangled_ppc("?hs_unit_seat_mappings_match@@YA_NABUs_hs_unit_seat_mapping@@0@Z");
//};

//bool hs_parse_budget_reference(long)
//{
//    mangled_ppc("?hs_parse_budget_reference@@YA_NJ@Z");
//};

//bool hs_parse_tag_reference_not_resolving(long)
//{
//    mangled_ppc("?hs_parse_tag_reference_not_resolving@@YA_NJ@Z");
//};

//bool hs_compile_get_tag_by_name(char const *, unsigned long *)
//{
//    mangled_ppc("?hs_compile_get_tag_by_name@@YA_NPBDPAK@Z");
//};

//bool hs_parse_tag_reference(long)
//{
//    mangled_ppc("?hs_parse_tag_reference@@YA_NJ@Z");
//};

//bool hs_tag_load_with_tag_list(unsigned long const *, char const *, long *, unsigned long *)
//{
//    mangled_ppc("?hs_tag_load_with_tag_list@@YA_NPBKPBDPAJPAK@Z");
//};

//bool hs_tag_load_leaf_tag(unsigned long, char const *, long *, unsigned long *)
//{
//    mangled_ppc("?hs_tag_load_leaf_tag@@YA_NKPBDPAJPAK@Z");
//};

//bool hs_parse_sound_tag_reference(long)
//{
//    mangled_ppc("?hs_parse_sound_tag_reference@@YA_NJ@Z");
//};

//bool hs_parse_enum(long)
//{
//    mangled_ppc("?hs_parse_enum@@YA_NJ@Z");
//};

//bool hs_parse_trigger_volume(long)
//{
//    mangled_ppc("?hs_parse_trigger_volume@@YA_NJ@Z");
//};

//bool hs_parse_tag_block_element_string_id(long, long const *, long, struct s_tag_block *, long)
//{
//    mangled_ppc("?hs_parse_tag_block_element_string_id@@YA_NJPBJJPAUs_tag_block@@J@Z");
//};

//bool hs_parse_cutscene_flag(long)
//{
//    mangled_ppc("?hs_parse_cutscene_flag@@YA_NJ@Z");
//};

//bool hs_parse_cutscene_camera_point(long)
//{
//    mangled_ppc("?hs_parse_cutscene_camera_point@@YA_NJ@Z");
//};

//bool hs_parse_tag_block_element(long, char const *, long, struct s_tag_block *, long)
//{
//    mangled_ppc("?hs_parse_tag_block_element@@YA_NJPBDJPAUs_tag_block@@J@Z");
//};

//bool hs_parse_cutscene_title(long)
//{
//    mangled_ppc("?hs_parse_cutscene_title@@YA_NJ@Z");
//};

//bool hs_parse_cutscene_recording(long)
//{
//    mangled_ppc("?hs_parse_cutscene_recording@@YA_NJ@Z");
//};

//bool hs_parse_device_group(long)
//{
//    mangled_ppc("?hs_parse_device_group@@YA_NJ@Z");
//};

//bool hs_parse_ai(long)
//{
//    mangled_ppc("?hs_parse_ai@@YA_NJ@Z");
//};

//bool hs_parse_ai_command_list(long)
//{
//    mangled_ppc("?hs_parse_ai_command_list@@YA_NJ@Z");
//};

//bool hs_parse_ai_command_script(long)
//{
//    mangled_ppc("?hs_parse_ai_command_script@@YA_NJ@Z");
//};

//bool hs_parse_ai_behavior(long)
//{
//    mangled_ppc("?hs_parse_ai_behavior@@YA_NJ@Z");
//};

//bool hs_parse_ai_orders(long)
//{
//    mangled_ppc("?hs_parse_ai_orders@@YA_NJ@Z");
//};

//bool hs_parse_ai_line(long)
//{
//    mangled_ppc("?hs_parse_ai_line@@YA_NJ@Z");
//};

//bool hs_parse_starting_profile(long)
//{
//    mangled_ppc("?hs_parse_starting_profile@@YA_NJ@Z");
//};

//bool hs_parse_conversation(long)
//{
//    mangled_ppc("?hs_parse_conversation@@YA_NJ@Z");
//};

//bool hs_parse_player(long)
//{
//    mangled_ppc("?hs_parse_player@@YA_NJ@Z");
//};

//bool hs_parse_zone_set(long)
//{
//    mangled_ppc("?hs_parse_zone_set@@YA_NJ@Z");
//};

//bool hs_parse_designer_zone(long)
//{
//    mangled_ppc("?hs_parse_designer_zone@@YA_NJ@Z");
//};

//bool hs_parse_cinematic_lightprobe(long)
//{
//    mangled_ppc("?hs_parse_cinematic_lightprobe@@YA_NJ@Z");
//};

//bool hs_parse_object_name(long)
//{
//    mangled_ppc("?hs_parse_object_name@@YA_NJ@Z");
//};

//bool hs_parse_object_and_object_name_internal(long, enum e_hs_type)
//{
//    mangled_ppc("?hs_parse_object_and_object_name_internal@@YA_NJW4e_hs_type@@@Z");
//};

//bool hs_parse_object(long)
//{
//    mangled_ppc("?hs_parse_object@@YA_NJ@Z");
//};

//bool hs_parse_point_ref(long)
//{
//    mangled_ppc("?hs_parse_point_ref@@YA_NJ@Z");
//};

//bool hs_parse_style(long)
//{
//    mangled_ppc("?hs_parse_style@@YA_NJ@Z");
//};

//bool hs_parse_object_list(long)
//{
//    mangled_ppc("?hs_parse_object_list@@YA_NJ@Z");
//};

//bool hs_parse_folder(long)
//{
//    mangled_ppc("?hs_parse_folder@@YA_NJ@Z");
//};

//bool hs_macro_function_parse(short, long)
//{
//    mangled_ppc("?hs_macro_function_parse@@YA_NFJ@Z");
//};

//short string_list_find(char const *, short, char const **const)
//{
//    mangled_ppc("?string_list_find@@YAFPBDFQAPBD@Z");
//};

//public: bool c_static_stack<struct s_hs_unit_seat_mapping, 256>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_hs_unit_seat_mapping, 256>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_hs_unit_seat_mapping, 256>::push_back(struct s_hs_unit_seat_mapping const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QAAXABUs_hs_unit_seat_mapping@@@Z");
//};

//public: struct s_hs_unit_seat_mapping * c_static_stack<struct s_hs_unit_seat_mapping, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QAAPAUs_hs_unit_seat_mapping@@XZ");
//};

//public: c_static_stack<struct s_hs_unit_seat_mapping, 256>::c_static_stack<struct s_hs_unit_seat_mapping, 256>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_hs_unit_seat_mapping, 256>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_hs_unit_seat_mapping, 256>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QAAJXZ");
//};

//public: struct s_hs_unit_seat_mapping * c_static_stack<struct s_hs_unit_seat_mapping, 256>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QAAPAUs_hs_unit_seat_mapping@@J@Z");
//};

//public: bool c_static_stack<struct s_hs_unit_seat_mapping, 256>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_hs_unit_seat_mapping@@$0BAA@@@QBA_NJ@Z");
//};

//int sprintf_s<1024>(char (&)[1024], char const *, ...)
//{
//    mangled_ppc("??$sprintf_s@$0EAA@@@YAHAAY0EAA@DPBDZZ");
//};

//struct s_hs_unit_seat_mapping const * std::search<struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const *)>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &))
//{
//    mangled_ppc("??$search@PBUs_hs_unit_seat_mapping@@PBU1@P6A_NABU1@0@Z@std@@YAPBUs_hs_unit_seat_mapping@@PBU1@000P6A_NABU1@1@Z@Z");
//};

//bool hs_check_block_index_type_and_return<short, bool>(bool)
//{
//    mangled_ppc("??$hs_check_block_index_type_and_return@F_N@@YA_N_N@Z");
//};

//struct s_hs_unit_seat_mapping const * std::_Checked_base<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_hs_unit_seat_mapping@@@std@@YAPBUs_hs_unit_seat_mapping@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_hs_unit_seat_mapping@@@std@@YAPAHPBUs_hs_unit_seat_mapping@@@Z");
//};

//struct s_hs_unit_seat_mapping const * std::_Search<struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, int, int, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const *)>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &), int *, int *)
//{
//    mangled_ppc("??$_Search@PBUs_hs_unit_seat_mapping@@PBU1@HHP6A_NABU1@0@Z@std@@YAPBUs_hs_unit_seat_mapping@@PBU1@000P6A_NABU1@1@ZPAH3@Z");
//};

//void std::_Checked_assign_from_base<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *&, struct s_hs_unit_seat_mapping const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_hs_unit_seat_mapping@@@std@@YAXAAPBUs_hs_unit_seat_mapping@@ABQBU1@@Z");
//};

//struct s_hs_unit_seat_mapping const * std::_Checked_base<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_hs_unit_seat_mapping@@@std@@YAPBUs_hs_unit_seat_mapping@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_hs_unit_seat_mapping@@@std@@YAXPBUs_hs_unit_seat_mapping@@0PB_WI@Z");
//};

//void std::_Debug_pointer<bool (struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &)>(bool (*)(struct s_hs_unit_seat_mapping const &, struct s_hs_unit_seat_mapping const &), wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@$$A6A_NABUs_hs_unit_seat_mapping@@0@Z@std@@YAXP6A_NABUs_hs_unit_seat_mapping@@0@ZPB_WI@Z");
//};

//void std::_Distance<struct s_hs_unit_seat_mapping const *, int>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_hs_unit_seat_mapping@@H@std@@YAXPBUs_hs_unit_seat_mapping@@0AAH@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_hs_unit_seat_mapping@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_hs_unit_seat_mapping@@@Z");
//};

//void std::_Debug_range2<struct s_hs_unit_seat_mapping const *>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_hs_unit_seat_mapping@@@std@@YAXPBUs_hs_unit_seat_mapping@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_hs_unit_seat_mapping const *, int>(struct s_hs_unit_seat_mapping const *, struct s_hs_unit_seat_mapping const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_hs_unit_seat_mapping@@H@std@@YAXPBUs_hs_unit_seat_mapping@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_hs_unit_seat_mapping>(struct s_hs_unit_seat_mapping const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_hs_unit_seat_mapping@@@std@@YAXPBUs_hs_unit_seat_mapping@@PB_WI@Z");
//};

