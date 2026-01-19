/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void stack_walk_initialize(void);
// void stack_walk_dispose(void);
// void stack_walk_disregard_symbol_names(bool);
// void stack_walk(short);
// void stack_walk_to_tty(short);
// void stack_walk_to_file(struct s_file_reference *, short);
// void stack_walk_to_buffer(short, long, unsigned long *);
// void stack_walk_with_context(struct s_file_reference *, short, struct _CONTEXT *);
// void stack_walk_with_context_tty(short, struct _CONTEXT *, void *);
// void stack_walk_with_context_common(struct s_file_reference *, short, struct _CONTEXT *, void *);
// void stack_walk_with_context_internal(struct s_file_reference const *, short, struct _CONTEXT *, void *, long, unsigned long *, long *);
// void stack_output(long, struct s_file_reference *, unsigned long const *, long, bool);
// void stack_walk_print_internal(struct s_file_reference *, struct _CONTEXT *, long, unsigned long const *, bool);
// void stack_walk_print(struct s_file_reference *, struct _CONTEXT *, long, unsigned long const *);
// void stack_walk_print_tty(struct _CONTEXT *, long, unsigned long const *);
// void try_and_load_symbol_file(char const *, char const *, struct debug_symbol_table *);
// public: bool c_simple_file_persist_stream::is_open(void) const;
// bool load_symbol_table(char const *, struct debug_symbol_table *);
// UnDecSymbol;
// int symbol_sort_proc(void const *, void const *);
// void free_symbol_table(struct debug_symbol_table *);
// char const * symbol_name_from_address(unsigned long, struct debug_symbol_table const *, long *);
// unsigned long base_address_from_symbol_name(char const *, struct debug_symbol_table const *);
// bool initialize_section_table(void);
// void dispose_section_table(void);
// void initialize_stack_walk_no_context(void);
// void initialize_stack_walk_with_context(struct _CONTEXT *);
// void walk_stack(unsigned long *, unsigned long, unsigned long, void *, unsigned long *);
// long find_symbol_by_name(struct debug_symbol_table const *, char const *);
// long find_symbol_offset(void *);
// unsigned long offset_from_section(unsigned long);

//void stack_walk_initialize(void)
//{
//    mangled_ppc("?stack_walk_initialize@@YAXXZ");
//};

//void stack_walk_dispose(void)
//{
//    mangled_ppc("?stack_walk_dispose@@YAXXZ");
//};

//void stack_walk_disregard_symbol_names(bool)
//{
//    mangled_ppc("?stack_walk_disregard_symbol_names@@YAX_N@Z");
//};

//void stack_walk(short)
//{
//    mangled_ppc("?stack_walk@@YAXF@Z");
//};

//void stack_walk_to_tty(short)
//{
//    mangled_ppc("?stack_walk_to_tty@@YAXF@Z");
//};

//void stack_walk_to_file(struct s_file_reference *, short)
//{
//    mangled_ppc("?stack_walk_to_file@@YAXPAUs_file_reference@@F@Z");
//};

//void stack_walk_to_buffer(short, long, unsigned long *)
//{
//    mangled_ppc("?stack_walk_to_buffer@@YAXFJPAK@Z");
//};

//void stack_walk_with_context(struct s_file_reference *, short, struct _CONTEXT *)
//{
//    mangled_ppc("?stack_walk_with_context@@YAXPAUs_file_reference@@FPAU_CONTEXT@@@Z");
//};

//void stack_walk_with_context_tty(short, struct _CONTEXT *, void *)
//{
//    mangled_ppc("?stack_walk_with_context_tty@@YAXFPAU_CONTEXT@@PAX@Z");
//};

//void stack_walk_with_context_common(struct s_file_reference *, short, struct _CONTEXT *, void *)
//{
//    mangled_ppc("?stack_walk_with_context_common@@YAXPAUs_file_reference@@FPAU_CONTEXT@@PAX@Z");
//};

//void stack_walk_with_context_internal(struct s_file_reference const *, short, struct _CONTEXT *, void *, long, unsigned long *, long *)
//{
//    mangled_ppc("?stack_walk_with_context_internal@@YAXPBUs_file_reference@@FPAU_CONTEXT@@PAXJPAKPAJ@Z");
//};

//void stack_output(long, struct s_file_reference *, unsigned long const *, long, bool)
//{
//    mangled_ppc("?stack_output@@YAXJPAUs_file_reference@@PBKJ_N@Z");
//};

//void stack_walk_print_internal(struct s_file_reference *, struct _CONTEXT *, long, unsigned long const *, bool)
//{
//    mangled_ppc("?stack_walk_print_internal@@YAXPAUs_file_reference@@PAU_CONTEXT@@JPBK_N@Z");
//};

//void stack_walk_print(struct s_file_reference *, struct _CONTEXT *, long, unsigned long const *)
//{
//    mangled_ppc("?stack_walk_print@@YAXPAUs_file_reference@@PAU_CONTEXT@@JPBK@Z");
//};

//void stack_walk_print_tty(struct _CONTEXT *, long, unsigned long const *)
//{
//    mangled_ppc("?stack_walk_print_tty@@YAXPAU_CONTEXT@@JPBK@Z");
//};

//void try_and_load_symbol_file(char const *, char const *, struct debug_symbol_table *)
//{
//    mangled_ppc("?try_and_load_symbol_file@@YAXPBD0PAUdebug_symbol_table@@@Z");
//};

//public: bool c_simple_file_persist_stream::is_open(void) const
//{
//    mangled_ppc("?is_open@c_simple_file_persist_stream@@QBA_NXZ");
//};

//bool load_symbol_table(char const *, struct debug_symbol_table *)
//{
//    mangled_ppc("?load_symbol_table@@YA_NPBDPAUdebug_symbol_table@@@Z");
//};

//UnDecSymbol
//{
//    mangled_ppc("UnDecSymbol");
//};

//int symbol_sort_proc(void const *, void const *)
//{
//    mangled_ppc("?symbol_sort_proc@@YAHPBX0@Z");
//};

//void free_symbol_table(struct debug_symbol_table *)
//{
//    mangled_ppc("?free_symbol_table@@YAXPAUdebug_symbol_table@@@Z");
//};

//char const * symbol_name_from_address(unsigned long, struct debug_symbol_table const *, long *)
//{
//    mangled_ppc("?symbol_name_from_address@@YAPBDKPBUdebug_symbol_table@@PAJ@Z");
//};

//unsigned long base_address_from_symbol_name(char const *, struct debug_symbol_table const *)
//{
//    mangled_ppc("?base_address_from_symbol_name@@YAKPBDPBUdebug_symbol_table@@@Z");
//};

//bool initialize_section_table(void)
//{
//    mangled_ppc("?initialize_section_table@@YA_NXZ");
//};

//void dispose_section_table(void)
//{
//    mangled_ppc("?dispose_section_table@@YAXXZ");
//};

//void initialize_stack_walk_no_context(void)
//{
//    mangled_ppc("?initialize_stack_walk_no_context@@YAXXZ");
//};

//void initialize_stack_walk_with_context(struct _CONTEXT *)
//{
//    mangled_ppc("?initialize_stack_walk_with_context@@YAXPAU_CONTEXT@@@Z");
//};

//void walk_stack(unsigned long *, unsigned long, unsigned long, void *, unsigned long *)
//{
//    mangled_ppc("?walk_stack@@YAXPAKKKPAX0@Z");
//};

//long find_symbol_by_name(struct debug_symbol_table const *, char const *)
//{
//    mangled_ppc("?find_symbol_by_name@@YAJPBUdebug_symbol_table@@PBD@Z");
//};

//long find_symbol_offset(void *)
//{
//    mangled_ppc("?find_symbol_offset@@YAJPAX@Z");
//};

//unsigned long offset_from_section(unsigned long)
//{
//    mangled_ppc("?offset_from_section@@YAKK@Z");
//};

