/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_multiplayer_shared_scenario_tag; // "?k_multiplayer_shared_scenario_tag@@3PBDB"
// char const *const k_single_player_shared_scenario_tag; // "?k_single_player_shared_scenario_tag@@3PBDB"
// char const *const k_main_menu_scenario_tag; // "?k_main_menu_scenario_tag@@3PBDB"
// char const *const k_introduction_scenario_tag; // "?k_introduction_scenario_tag@@3PBDB"
// char const *const k_cache_file_extension; // "?k_cache_file_extension@@3PBDB"
// bool cache_files_enable_memory_protection; // "?cache_files_enable_memory_protection@@3_NA"
// bool g_require_secure_cache_files; // "?g_require_secure_cache_files@@3_NA"
// class c_physical_memory_allocation g_string_id_initialization_allocator; // "?g_string_id_initialization_allocator@@3Vc_physical_memory_allocation@@A"

// enum e_shared_resource_database_type cache_file_offset_get_shared_type(long);
// long cache_file_offset_set_shared_type(long, enum e_shared_resource_database_type);
// long cache_file_offset_make_not_shared(long);
// char const * cache_files_map_directory(void);
// void cache_file_get_path(char const *, char *, long);
// class c_static_string<256> cache_file_get_path(char const *);
// bool cache_file_header_verify(struct s_cache_file_header const *, char const *, bool);
// bool cache_file_header_verify_and_version(struct s_cache_file_header const *, char const *, bool);
// long cache_file_get_global_tag_index_from_header(struct s_cache_file_loaded_tags_header const *, unsigned long);
// void * cache_file_get_tag_from_header(struct s_cache_file_loaded_tags_header const *, unsigned long, long);
// long cache_file_tag_instance_get_tag_index(struct cache_file_tag_instance const *, long);
// void cache_file_get_instance_bounds_from_header(struct s_cache_file_loaded_tags_header const *, struct s_cache_file_tag_instance_bounds *);
// float cache_file_map_progress_estimated_megabytes_remaining(enum e_scenario_type, char const *);
// long cache_file_map_progress_estimated_miliseconds_remaining(enum e_scenario_type, char const *);
// float cache_file_map_progress(enum e_scenario_type, char const *);
// float cache_file_map_progress_helper(enum e_scenario_type, char const *, enum e_cache_file_progress_type);
// float cache_files_individual_map_progress(char const *);
// unsigned long compute_realtime_checksum(void const *, int);
// public: long c_wrapped_array_no_init<struct cache_file_tag_instance const>::count(void) const;
// public: struct cache_file_tag_instance const * c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::get_element(long) const;
// public: long c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>::count(void) const;
// public: struct s_cache_file_global_tag_index const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>, struct s_cache_file_global_tag_index const>::operator[](long) const;
// public: struct cache_file_tag_instance const * c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::valid_index(long) const;
// public: struct s_cache_file_global_tag_index const * c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>, struct s_cache_file_global_tag_index const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const> >::get_super_class(void) const;
// public: struct cache_file_tag_instance const * c_wrapped_array_no_init<struct cache_file_tag_instance const>::begin(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::count(void) const;
// public: class c_wrapped_array_no_init<struct cache_file_tag_instance const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct cache_file_tag_instance const> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>, struct s_cache_file_global_tag_index const>::count(void) const;
// public: bool c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_cache_file_header_bit) const;
// public: static bool c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_cache_file_header_bit);
// private: static unsigned char c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_cache_file_header_bit);

//enum e_shared_resource_database_type cache_file_offset_get_shared_type(long)
//{
//    mangled_ppc("?cache_file_offset_get_shared_type@@YA?AW4e_shared_resource_database_type@@J@Z");
//};

//long cache_file_offset_set_shared_type(long, enum e_shared_resource_database_type)
//{
//    mangled_ppc("?cache_file_offset_set_shared_type@@YAJJW4e_shared_resource_database_type@@@Z");
//};

//long cache_file_offset_make_not_shared(long)
//{
//    mangled_ppc("?cache_file_offset_make_not_shared@@YAJJ@Z");
//};

//char const * cache_files_map_directory(void)
//{
//    mangled_ppc("?cache_files_map_directory@@YAPBDXZ");
//};

//void cache_file_get_path(char const *, char *, long)
//{
//    mangled_ppc("?cache_file_get_path@@YAXPBDPADJ@Z");
//};

//class c_static_string<256> cache_file_get_path(char const *)
//{
//    mangled_ppc("?cache_file_get_path@@YA?AV?$c_static_string@$0BAA@@@PBD@Z");
//};

//bool cache_file_header_verify(struct s_cache_file_header const *, char const *, bool)
//{
//    mangled_ppc("?cache_file_header_verify@@YA_NPBUs_cache_file_header@@PBD_N@Z");
//};

//bool cache_file_header_verify_and_version(struct s_cache_file_header const *, char const *, bool)
//{
//    mangled_ppc("?cache_file_header_verify_and_version@@YA_NPBUs_cache_file_header@@PBD_N@Z");
//};

//long cache_file_get_global_tag_index_from_header(struct s_cache_file_loaded_tags_header const *, unsigned long)
//{
//    mangled_ppc("?cache_file_get_global_tag_index_from_header@@YAJPBUs_cache_file_loaded_tags_header@@K@Z");
//};

//void * cache_file_get_tag_from_header(struct s_cache_file_loaded_tags_header const *, unsigned long, long)
//{
//    mangled_ppc("?cache_file_get_tag_from_header@@YAPAXPBUs_cache_file_loaded_tags_header@@KJ@Z");
//};

//long cache_file_tag_instance_get_tag_index(struct cache_file_tag_instance const *, long)
//{
//    mangled_ppc("?cache_file_tag_instance_get_tag_index@@YAJPBUcache_file_tag_instance@@J@Z");
//};

//void cache_file_get_instance_bounds_from_header(struct s_cache_file_loaded_tags_header const *, struct s_cache_file_tag_instance_bounds *)
//{
//    mangled_ppc("?cache_file_get_instance_bounds_from_header@@YAXPBUs_cache_file_loaded_tags_header@@PAUs_cache_file_tag_instance_bounds@@@Z");
//};

//float cache_file_map_progress_estimated_megabytes_remaining(enum e_scenario_type, char const *)
//{
//    mangled_ppc("?cache_file_map_progress_estimated_megabytes_remaining@@YAMW4e_scenario_type@@PBD@Z");
//};

//long cache_file_map_progress_estimated_miliseconds_remaining(enum e_scenario_type, char const *)
//{
//    mangled_ppc("?cache_file_map_progress_estimated_miliseconds_remaining@@YAJW4e_scenario_type@@PBD@Z");
//};

//float cache_file_map_progress(enum e_scenario_type, char const *)
//{
//    mangled_ppc("?cache_file_map_progress@@YAMW4e_scenario_type@@PBD@Z");
//};

//float cache_file_map_progress_helper(enum e_scenario_type, char const *, enum e_cache_file_progress_type)
//{
//    mangled_ppc("?cache_file_map_progress_helper@@YAMW4e_scenario_type@@PBDW4e_cache_file_progress_type@@@Z");
//};

//float cache_files_individual_map_progress(char const *)
//{
//    mangled_ppc("?cache_files_individual_map_progress@@YAMPBD@Z");
//};

//unsigned long compute_realtime_checksum(void const *, int)
//{
//    mangled_ppc("?compute_realtime_checksum@@YAKPBXH@Z");
//};

//public: long c_wrapped_array_no_init<struct cache_file_tag_instance const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@QBAJXZ");
//};

//public: struct cache_file_tag_instance const * c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@$$CBUcache_file_tag_instance@@@@QBAPBUcache_file_tag_instance@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@QBAJXZ");
//};

//public: struct s_cache_file_global_tag_index const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>, struct s_cache_file_global_tag_index const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@$$CBUs_cache_file_global_tag_index@@@@QBAABUs_cache_file_global_tag_index@@J@Z");
//};

//public: struct cache_file_tag_instance const * c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@$$CBUcache_file_tag_instance@@@@QBAPBUcache_file_tag_instance@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@$$CBUcache_file_tag_instance@@@@QBA_NJ@Z");
//};

//public: struct s_cache_file_global_tag_index const * c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@QBAPBUs_cache_file_global_tag_index@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>, struct s_cache_file_global_tag_index const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@$$CBUs_cache_file_global_tag_index@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@XZ");
//};

//public: struct cache_file_tag_instance const * c_wrapped_array_no_init<struct cache_file_tag_instance const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@QBAPBUcache_file_tag_instance@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct cache_file_tag_instance const>, struct cache_file_tag_instance const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@$$CBUcache_file_tag_instance@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct cache_file_tag_instance const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct cache_file_tag_instance const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUcache_file_tag_instance@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_cache_file_global_tag_index const>, struct s_cache_file_global_tag_index const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_cache_file_global_tag_index@@@@$$CBUs_cache_file_global_tag_index@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_cache_file_header_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cache_file_header_bit@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_cache_file_header_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_cache_file_header_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cache_file_header_bit@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_cache_file_header_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_cache_file_header_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cache_file_header_bit@@E$01Us_default_enum_string_resolver@@@@CAEW4e_cache_file_header_bit@@@Z");
//};

