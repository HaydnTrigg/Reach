/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: struct s_tag_field const * s_tag_field_fixup_datum::get_source_field(void) const;
// public: bool s_tag_field_fixup_datum::set_source_field(struct s_tag_field const *);
// bool create_tag_field_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_set(class c_basic_buffer<void> &, class c_basic_buffer<void> &, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, struct s_tag_fixup_context const *);
// bool fixup_tag_field_set_internal(class c_basic_buffer<void> &, class c_basic_buffer<void> &, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, struct s_tag_fixup_context const *, long);
// bool fixup_tag_field_initialize(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_initialize const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_copy_or_move_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool valid_block_field_move_pair(struct s_tag_field const *, struct s_tag_field const *);
// bool fixup_tag_field_copy_or_move(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_set_field_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_field(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_flags_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_flags(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_flags const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_enumeration_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_enumeration(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_enumeration const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_integer_to_enumeration_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_integer_to_enumeration(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_enumeration const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_conversion_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_conversion(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_integer_block_index_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_field_integer_block_index(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *);
// bool try_create_tag_field_struct_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool try_create_tag_field_block_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool try_create_tag_field_array_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool try_create_tag_field_resource_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool try_create_tag_field_interop_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *);
// bool fixup_tag_struct_instance(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long);
// bool fixup_tag_array_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long);
// bool fixup_tag_block_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long);
// bool fixup_tag_resource_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long);
// bool fixup_tag_interop_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long);
// bool fixup_tag_field_aggregate(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long);
// long find_string_in_string_list_definition(char const *, struct s_string_list_definition const *);
// bool tag_field_move_aggregate_raw(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &, class c_basic_buffer<void> &);
// bool tag_field_move_aggregate_raw_slow(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &, class c_basic_buffer<void> &);
// bool tag_field_move_aggregate_raw_fast(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &, class c_basic_buffer<void> &);
// bool tag_field_move_raw(struct s_tag_field const *, class c_basic_buffer<void> &, class c_basic_buffer<void> &);
// struct s_tag_struct_definition const * tag_struct_definitions_find_matching_ancestor_definition(struct s_tag_struct_definition const *, struct s_tag_struct_definition const *);
// struct s_tag_struct_definition const * tag_block_definitions_find_matching_ancestor_definition(struct s_tag_block_definition const *, struct s_tag_block_definition const *);
// struct s_tag_struct_definition const * tag_array_definitions_find_matching_ancestor_definition(struct s_tag_array_definition const *, struct s_tag_array_definition const *);
// struct s_tag_struct_definition const * tag_resource_definitions_find_matching_ancestor_definition(struct s_tag_resource_definition const *, struct s_tag_resource_definition const *);
// struct s_tag_struct_definition const * tag_interop_definitions_find_matching_ancestor_definition(struct s_tag_interop_definition const *, struct s_tag_interop_definition const *);
// public: c_wrapped_array<struct s_tag_field_fixup_datum const>::c_wrapped_array<struct s_tag_field_fixup_datum const>(struct s_tag_field_fixup_datum const *, long);
// void std::swap<struct s_tag_resource>(struct s_tag_resource &, struct s_tag_resource &);
// public: struct s_tag_reference const * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_tag_reference const>(void);
// public: struct s_tag_reference const * c_basic_buffer<void>::get_as_type<struct s_tag_reference const>(void);
// public: struct s_tag_reference const * c_basic_buffer<void>::get_as_type_from_offset<struct s_tag_reference const>(unsigned long);

//public: struct s_tag_field const * s_tag_field_fixup_datum::get_source_field(void) const
//{
//    mangled_ppc("?get_source_field@s_tag_field_fixup_datum@@QBAPBUs_tag_field@@XZ");
//};

//public: bool s_tag_field_fixup_datum::set_source_field(struct s_tag_field const *)
//{
//    mangled_ppc("?set_source_field@s_tag_field_fixup_datum@@QAA_NPBUs_tag_field@@@Z");
//};

//bool create_tag_field_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?create_tag_field_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_set(class c_basic_buffer<void> &, class c_basic_buffer<void> &, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_set@@YA_NAAV?$c_basic_buffer@X@@0ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@PBUs_tag_fixup_context@@@Z");
//};

//bool fixup_tag_field_set_internal(class c_basic_buffer<void> &, class c_basic_buffer<void> &, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_field_set_internal@@YA_NAAV?$c_basic_buffer@X@@0ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@PBUs_tag_fixup_context@@J@Z");
//};

//bool fixup_tag_field_initialize(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_initialize const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_initialize@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_initialize@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_copy_or_move_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_copy_or_move_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool valid_block_field_move_pair(struct s_tag_field const *, struct s_tag_field const *)
//{
//    mangled_ppc("?valid_block_field_move_pair@@YA_NPBUs_tag_field@@0@Z");
//};

//bool fixup_tag_field_copy_or_move(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_copy_or_move@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_field@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_set_field_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_set_field_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_field(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_field@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_field@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_flags_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_flags_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_flags(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_flags const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_flags@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_flags@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_enumeration_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_enumeration_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_enumeration(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_enumeration const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_enumeration@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_enumeration@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_integer_to_enumeration_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_integer_to_enumeration_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_integer_to_enumeration(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_enumeration const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_integer_to_enumeration@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_enumeration@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_conversion_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_conversion_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_conversion(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_conversion@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_field@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_integer_block_index_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_integer_block_index_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_field_integer_block_index(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, struct s_tag_field_fixup_field const *, struct s_tag_fixup_context const *)
//{
//    mangled_ppc("?fixup_tag_field_integer_block_index@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@PBUs_tag_field_fixup_field@@PBUs_tag_fixup_context@@@Z");
//};

//bool try_create_tag_field_struct_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_struct_versioning_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool try_create_tag_field_block_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_block_versioning_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool try_create_tag_field_array_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_array_versioning_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool try_create_tag_field_resource_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_resource_versioning_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool try_create_tag_field_interop_versioning_fixup(class c_tag_definition_matcher *, struct s_tag_field const *, struct s_tag_field const *, struct s_tag_field_fixup_datum *, enum e_tag_field_fixup_optimization_type *)
//{
//    mangled_ppc("?try_create_tag_field_interop_versioning_fixup@@YA_NPAVc_tag_definition_matcher@@PBUs_tag_field@@1PAUs_tag_field_fixup_datum@@PAW4e_tag_field_fixup_optimization_type@@@Z");
//};

//bool fixup_tag_struct_instance(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_struct_instance@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@JPBUs_tag_field_aggregate_fixup_definition@@PBUs_tag_fixup_context@@J@Z");
//};

//bool fixup_tag_array_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_array_elements@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@JPBUs_tag_field_aggregate_fixup_definition@@PBUs_tag_fixup_context@@J@Z");
//};

//bool fixup_tag_block_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_block_elements@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@JPBUs_tag_field_aggregate_fixup_definition@@PBUs_tag_fixup_context@@J@Z");
//};

//bool fixup_tag_resource_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_resource_elements@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@JPBUs_tag_field_aggregate_fixup_definition@@PBUs_tag_fixup_context@@J@Z");
//};

//bool fixup_tag_interop_elements(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_interop_elements@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@JPBUs_tag_field_aggregate_fixup_definition@@PBUs_tag_fixup_context@@J@Z");
//};

//bool fixup_tag_field_aggregate(class c_basic_buffer<void> &, class c_basic_buffer<void> &, struct s_tag_field const *, class c_wrapped_array<struct s_tag_field_fixup_datum const> const &, long, struct s_tag_field_aggregate_fixup_definition const *, struct s_tag_fixup_context const *, long)
//{
//    mangled_ppc("?fixup_tag_field_aggregate@@YA_NAAV?$c_basic_buffer@X@@0PBUs_tag_field@@ABV?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@JPBUs_tag_field_aggregate_fixup_definition@@PBUs_tag_fixup_context@@J@Z");
//};

//long find_string_in_string_list_definition(char const *, struct s_string_list_definition const *)
//{
//    mangled_ppc("?find_string_in_string_list_definition@@YAJPBDPBUs_string_list_definition@@@Z");
//};

//bool tag_field_move_aggregate_raw(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?tag_field_move_aggregate_raw@@YA_NPBUs_tag_struct_definition@@JAAV?$c_basic_buffer@X@@1@Z");
//};

//bool tag_field_move_aggregate_raw_slow(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?tag_field_move_aggregate_raw_slow@@YA_NPBUs_tag_struct_definition@@JAAV?$c_basic_buffer@X@@1@Z");
//};

//bool tag_field_move_aggregate_raw_fast(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?tag_field_move_aggregate_raw_fast@@YA_NPBUs_tag_struct_definition@@JAAV?$c_basic_buffer@X@@1@Z");
//};

//bool tag_field_move_raw(struct s_tag_field const *, class c_basic_buffer<void> &, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?tag_field_move_raw@@YA_NPBUs_tag_field@@AAV?$c_basic_buffer@X@@1@Z");
//};

//struct s_tag_struct_definition const * tag_struct_definitions_find_matching_ancestor_definition(struct s_tag_struct_definition const *, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_struct_definitions_find_matching_ancestor_definition@@YAPBUs_tag_struct_definition@@PBU1@0@Z");
//};

//struct s_tag_struct_definition const * tag_block_definitions_find_matching_ancestor_definition(struct s_tag_block_definition const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?tag_block_definitions_find_matching_ancestor_definition@@YAPBUs_tag_struct_definition@@PBUs_tag_block_definition@@0@Z");
//};

//struct s_tag_struct_definition const * tag_array_definitions_find_matching_ancestor_definition(struct s_tag_array_definition const *, struct s_tag_array_definition const *)
//{
//    mangled_ppc("?tag_array_definitions_find_matching_ancestor_definition@@YAPBUs_tag_struct_definition@@PBUs_tag_array_definition@@0@Z");
//};

//struct s_tag_struct_definition const * tag_resource_definitions_find_matching_ancestor_definition(struct s_tag_resource_definition const *, struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?tag_resource_definitions_find_matching_ancestor_definition@@YAPBUs_tag_struct_definition@@PBUs_tag_resource_definition@@0@Z");
//};

//struct s_tag_struct_definition const * tag_interop_definitions_find_matching_ancestor_definition(struct s_tag_interop_definition const *, struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?tag_interop_definitions_find_matching_ancestor_definition@@YAPBUs_tag_struct_definition@@PBUs_tag_interop_definition@@0@Z");
//};

//public: c_wrapped_array<struct s_tag_field_fixup_datum const>::c_wrapped_array<struct s_tag_field_fixup_datum const>(struct s_tag_field_fixup_datum const *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBUs_tag_field_fixup_datum@@@@QAA@PBUs_tag_field_fixup_datum@@J@Z");
//};

//void std::swap<struct s_tag_resource>(struct s_tag_resource &, struct s_tag_resource &)
//{
//    mangled_ppc("??$swap@Us_tag_resource@@@std@@YAXAAUs_tag_resource@@0@Z");
//};

//public: struct s_tag_reference const * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_tag_reference const>(void)
//{
//    mangled_ppc("??$?B$$CBUs_tag_reference@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPBUs_tag_reference@@XZ");
//};

//public: struct s_tag_reference const * c_basic_buffer<void>::get_as_type<struct s_tag_reference const>(void)
//{
//    mangled_ppc("??$get_as_type@$$CBUs_tag_reference@@@?$c_basic_buffer@X@@QAAPBUs_tag_reference@@XZ");
//};

//public: struct s_tag_reference const * c_basic_buffer<void>::get_as_type_from_offset<struct s_tag_reference const>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBUs_tag_reference@@@?$c_basic_buffer@X@@QAAPBUs_tag_reference@@K@Z");
//};

