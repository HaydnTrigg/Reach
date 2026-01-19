/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long g_maximum_string_id_count; // "?g_maximum_string_id_count@@3JA"
// struct s_string_id_globals g_string_id_globals; // "?g_string_id_globals@@3Us_string_id_globals@@A"

// void string_id_initialize(class c_allocation_interface *);
// void string_id_dispose(void);
// void string_id_reset(void);
// char * string_id_get_string(long, char *, long);
// char * string_id_get_string(long, char (&)[128]);
// char const * string_id_get_string_const(long);
// char const * string_id_get(long);
// long string_id_new(char const *);
// void dump_strings_to_csv_file(char const *);
// long string_id_add_to_string_id_table(char const *);
// void dump_strings(void);
// bool string_id_is_string(long, char const *);
// unsigned int string_id_length(long);
// public: void c_old_string_id::set_string(char const *);
// bool load_hash_tables(void);
// public: bool c_old_string_id::is_string(char const *) const;
// public: char const * c_old_string_id::get_string(void) const;
// long string_id_retrieve(char const *);
// void string_id_convert_string(char *, unsigned int);
// void string_id_convert_static_string(class c_static_string<128> *);
// void initialize_hash_tables(class c_allocation_interface *);
// unsigned long long_hash_table_hash_function(void const *);
// public: unsigned long c_hash::get_hash(void) const;
// public: c_hash::c_hash(void);
// public: c_hash::~c_hash(void);
// bool long_hash_table_compare_function(void const *, void const *);
// void reset_hash_tables(void);
// long add_string_to_hashtables(char const *, long, long);
// void string_id_print_name(long);
// public: bool c_hash_table<long, long>::is_created(void) const;
// ?create@?$c_hash_table@JJ@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z;
// public: void c_hash_table<long, long>::dispose(char const *, long);
// public: void c_hash_table<long, long>::reset(void);
// public: bool c_hash_table<long, long>::add(long const *, long const *);
// public: long const * c_hash_table<long, long>::find(long const *, long *) const;
// public: char (& s_static_string<128>::get_buffer(void))[128];
// public: c_static_string<128>::c_static_string<128>(char const *);
// public: s_string_id_globals::s_string_id_globals(void);
// public: c_hash_table<long, long>::c_hash_table<long, long>(void);
// public: s_string_id_globals::~s_string_id_globals(void);
// public: c_hash_table<long, long>::~c_hash_table<long, long>(void);
// void g_string_id_globals::`dynamic atexit destructor'(void);

//void string_id_initialize(class c_allocation_interface *)
//{
//    mangled_ppc("?string_id_initialize@@YAXPAVc_allocation_interface@@@Z");
//};

//void string_id_dispose(void)
//{
//    mangled_ppc("?string_id_dispose@@YAXXZ");
//};

//void string_id_reset(void)
//{
//    mangled_ppc("?string_id_reset@@YAXXZ");
//};

//char * string_id_get_string(long, char *, long)
//{
//    mangled_ppc("?string_id_get_string@@YAPADJPADJ@Z");
//};

//char * string_id_get_string(long, char (&)[128])
//{
//    mangled_ppc("?string_id_get_string@@YAPADJAAY0IA@D@Z");
//};

//char const * string_id_get_string_const(long)
//{
//    mangled_ppc("?string_id_get_string_const@@YAPBDJ@Z");
//};

//char const * string_id_get(long)
//{
//    mangled_ppc("?string_id_get@@YAPBDJ@Z");
//};

//long string_id_new(char const *)
//{
//    mangled_ppc("?string_id_new@@YAJPBD@Z");
//};

//void dump_strings_to_csv_file(char const *)
//{
//    mangled_ppc("?dump_strings_to_csv_file@@YAXPBD@Z");
//};

//long string_id_add_to_string_id_table(char const *)
//{
//    mangled_ppc("?string_id_add_to_string_id_table@@YAJPBD@Z");
//};

//void dump_strings(void)
//{
//    mangled_ppc("?dump_strings@@YAXXZ");
//};

//bool string_id_is_string(long, char const *)
//{
//    mangled_ppc("?string_id_is_string@@YA_NJPBD@Z");
//};

//unsigned int string_id_length(long)
//{
//    mangled_ppc("?string_id_length@@YAIJ@Z");
//};

//public: void c_old_string_id::set_string(char const *)
//{
//    mangled_ppc("?set_string@c_old_string_id@@QAAXPBD@Z");
//};

//bool load_hash_tables(void)
//{
//    mangled_ppc("?load_hash_tables@@YA_NXZ");
//};

//public: bool c_old_string_id::is_string(char const *) const
//{
//    mangled_ppc("?is_string@c_old_string_id@@QBA_NPBD@Z");
//};

//public: char const * c_old_string_id::get_string(void) const
//{
//    mangled_ppc("?get_string@c_old_string_id@@QBAPBDXZ");
//};

//long string_id_retrieve(char const *)
//{
//    mangled_ppc("?string_id_retrieve@@YAJPBD@Z");
//};

//void string_id_convert_string(char *, unsigned int)
//{
//    mangled_ppc("?string_id_convert_string@@YAXPADI@Z");
//};

//void string_id_convert_static_string(class c_static_string<128> *)
//{
//    mangled_ppc("?string_id_convert_static_string@@YAXPAV?$c_static_string@$0IA@@@@Z");
//};

//void initialize_hash_tables(class c_allocation_interface *)
//{
//    mangled_ppc("?initialize_hash_tables@@YAXPAVc_allocation_interface@@@Z");
//};

//unsigned long long_hash_table_hash_function(void const *)
//{
//    mangled_ppc("?long_hash_table_hash_function@@YAKPBX@Z");
//};

//public: unsigned long c_hash::get_hash(void) const
//{
//    mangled_ppc("?get_hash@c_hash@@QBAKXZ");
//};

//public: c_hash::c_hash(void)
//{
//    mangled_ppc("??0c_hash@@QAA@XZ");
//};

//public: c_hash::~c_hash(void)
//{
//    mangled_ppc("??1c_hash@@QAA@XZ");
//};

//bool long_hash_table_compare_function(void const *, void const *)
//{
//    mangled_ppc("?long_hash_table_compare_function@@YA_NPBX0@Z");
//};

//void reset_hash_tables(void)
//{
//    mangled_ppc("?reset_hash_tables@@YAXXZ");
//};

//long add_string_to_hashtables(char const *, long, long)
//{
//    mangled_ppc("?add_string_to_hashtables@@YAJPBDJJ@Z");
//};

//void string_id_print_name(long)
//{
//    mangled_ppc("?string_id_print_name@@YAXJ@Z");
//};

//public: bool c_hash_table<long, long>::is_created(void) const
//{
//    mangled_ppc("?is_created@?$c_hash_table@JJ@@QBA_NXZ");
//};

//?create@?$c_hash_table@JJ@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z
//{
//    mangled_ppc("?create@?$c_hash_table@JJ@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z");
//};

//public: void c_hash_table<long, long>::dispose(char const *, long)
//{
//    mangled_ppc("?dispose@?$c_hash_table@JJ@@QAAXPBDJ@Z");
//};

//public: void c_hash_table<long, long>::reset(void)
//{
//    mangled_ppc("?reset@?$c_hash_table@JJ@@QAAXXZ");
//};

//public: bool c_hash_table<long, long>::add(long const *, long const *)
//{
//    mangled_ppc("?add@?$c_hash_table@JJ@@QAA_NPBJ0@Z");
//};

//public: long const * c_hash_table<long, long>::find(long const *, long *) const
//{
//    mangled_ppc("?find@?$c_hash_table@JJ@@QBAPBJPBJPAJ@Z");
//};

//public: char (& s_static_string<128>::get_buffer(void))[128]
//{
//    mangled_ppc("?get_buffer@?$s_static_string@$0IA@@@QAAAAY0IA@DXZ");
//};

//public: c_static_string<128>::c_static_string<128>(char const *)
//{
//    mangled_ppc("??0?$c_static_string@$0IA@@@QAA@PBD@Z");
//};

//public: s_string_id_globals::s_string_id_globals(void)
//{
//    mangled_ppc("??0s_string_id_globals@@QAA@XZ");
//};

//public: c_hash_table<long, long>::c_hash_table<long, long>(void)
//{
//    mangled_ppc("??0?$c_hash_table@JJ@@QAA@XZ");
//};

//public: s_string_id_globals::~s_string_id_globals(void)
//{
//    mangled_ppc("??1s_string_id_globals@@QAA@XZ");
//};

//public: c_hash_table<long, long>::~c_hash_table<long, long>(void)
//{
//    mangled_ppc("??1?$c_hash_table@JJ@@QAA@XZ");
//};

//void g_string_id_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_string_id_globals@@YAXXZ");
//};

