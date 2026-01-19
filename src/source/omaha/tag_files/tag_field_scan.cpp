/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void tag_field_scan_state_new(struct tag_field_scan_state *, struct s_tag_block_definition const *, void const *);
// void tag_field_scan_state_new(struct tag_field_scan_state *, struct s_tag_struct_definition const *, void const *);
// void tag_field_scan_state_add_field_type(struct tag_field_scan_state *, enum e_tag_field);
// void tag_field_scan_state_add_all_field_types(struct tag_field_scan_state *);
// bool tag_field_scan_any_fields_set_are_inlined(struct tag_field_scan_state const *);
// bool tag_field_scan_any_fields_set_exist_recursively(struct tag_field_scan_state const *);
// class c_string_builder tag_field_scan_state_dump(struct tag_field_scan_state const *);
// struct s_tag_field const * tag_field_scan_state_extract_field_from_stack(struct tag_field_scan_state const *, long);
// bool tag_field_scan(struct tag_field_scan_state *);
// void tag_field_scan_update_state_accounting_for_aggregates(struct tag_field_scan_state *);
// public: c_tag_field_scanner::c_tag_field_scanner(struct s_tag_struct_definition const *, void const *);
// public: c_tag_field_scanner::c_tag_field_scanner(struct s_tag_block_definition const *, void const *);
// public: c_tag_field_scanner::c_tag_field_scanner(struct s_tag_block const *, long);
// public: c_tag_field_scanner::c_tag_field_scanner(long);
// public: c_tag_field_scanner::c_tag_field_scanner(struct tag_field_scan_state const *);
// public: void c_tag_field_scanner::set_scan_flags(unsigned long);
// public: void c_tag_field_scanner::add_all_external_aggregate_types(void);
// public: void c_tag_field_scanner::add_all_map_specific_types(void);
// public: void c_tag_field_scanner::add_scan_type(enum e_tag_field);
// public: void c_tag_field_scanner::add_all_scan_types(void);
// public: bool c_tag_field_scanner::any_fields_set_exist_recursively(void) const;
// public: bool c_tag_field_scanner::next(void);
// public: struct s_tag_field const * c_tag_field_scanner::field(void) const;
// public: void const * c_tag_field_scanner::address(void) const;
// public: char const * c_tag_field_scanner::name(void) const;
// public: void const * c_tag_field_scanner::definition(void) const;
// public: enum e_tag_field c_tag_field_scanner::type(void) const;
// public: unsigned long c_tag_field_scanner::id(void) const;
// public: long c_tag_field_scanner::base_address_offset(void) const;
// public: long c_tag_field_scanner::cache_file_address_offset(void) const;
// public: unsigned long c_tag_field_scanner::size(void) const;
// public: __int64 c_tag_field_scanner::external_element_locator_base(void) const;
// public: __int64 c_tag_field_scanner::try_to_get_external_element_locator_base(void) const;
// public: class c_string_builder c_tag_field_scanner::dump(void) const;
// public: struct s_tag_field const * c_tag_field_scanner::extract_field_from_stack(long) const;
// public: unsigned long const * c_big_flags_typed_no_init<long, 62>::get_bits_direct(void) const;

//void tag_field_scan_state_new(struct tag_field_scan_state *, struct s_tag_block_definition const *, void const *)
//{
//    mangled_ppc("?tag_field_scan_state_new@@YAXPAUtag_field_scan_state@@PBUs_tag_block_definition@@PBX@Z");
//};

//void tag_field_scan_state_new(struct tag_field_scan_state *, struct s_tag_struct_definition const *, void const *)
//{
//    mangled_ppc("?tag_field_scan_state_new@@YAXPAUtag_field_scan_state@@PBUs_tag_struct_definition@@PBX@Z");
//};

//void tag_field_scan_state_add_field_type(struct tag_field_scan_state *, enum e_tag_field)
//{
//    mangled_ppc("?tag_field_scan_state_add_field_type@@YAXPAUtag_field_scan_state@@W4e_tag_field@@@Z");
//};

//void tag_field_scan_state_add_all_field_types(struct tag_field_scan_state *)
//{
//    mangled_ppc("?tag_field_scan_state_add_all_field_types@@YAXPAUtag_field_scan_state@@@Z");
//};

//bool tag_field_scan_any_fields_set_are_inlined(struct tag_field_scan_state const *)
//{
//    mangled_ppc("?tag_field_scan_any_fields_set_are_inlined@@YA_NPBUtag_field_scan_state@@@Z");
//};

//bool tag_field_scan_any_fields_set_exist_recursively(struct tag_field_scan_state const *)
//{
//    mangled_ppc("?tag_field_scan_any_fields_set_exist_recursively@@YA_NPBUtag_field_scan_state@@@Z");
//};

//class c_string_builder tag_field_scan_state_dump(struct tag_field_scan_state const *)
//{
//    mangled_ppc("?tag_field_scan_state_dump@@YA?AVc_string_builder@@PBUtag_field_scan_state@@@Z");
//};

//struct s_tag_field const * tag_field_scan_state_extract_field_from_stack(struct tag_field_scan_state const *, long)
//{
//    mangled_ppc("?tag_field_scan_state_extract_field_from_stack@@YAPBUs_tag_field@@PBUtag_field_scan_state@@J@Z");
//};

//bool tag_field_scan(struct tag_field_scan_state *)
//{
//    mangled_ppc("?tag_field_scan@@YA_NPAUtag_field_scan_state@@@Z");
//};

//void tag_field_scan_update_state_accounting_for_aggregates(struct tag_field_scan_state *)
//{
//    mangled_ppc("?tag_field_scan_update_state_accounting_for_aggregates@@YAXPAUtag_field_scan_state@@@Z");
//};

//public: c_tag_field_scanner::c_tag_field_scanner(struct s_tag_struct_definition const *, void const *)
//{
//    mangled_ppc("??0c_tag_field_scanner@@QAA@PBUs_tag_struct_definition@@PBX@Z");
//};

//public: c_tag_field_scanner::c_tag_field_scanner(struct s_tag_block_definition const *, void const *)
//{
//    mangled_ppc("??0c_tag_field_scanner@@QAA@PBUs_tag_block_definition@@PBX@Z");
//};

//public: c_tag_field_scanner::c_tag_field_scanner(struct s_tag_block const *, long)
//{
//    mangled_ppc("??0c_tag_field_scanner@@QAA@PBUs_tag_block@@J@Z");
//};

//public: c_tag_field_scanner::c_tag_field_scanner(long)
//{
//    mangled_ppc("??0c_tag_field_scanner@@QAA@J@Z");
//};

//public: c_tag_field_scanner::c_tag_field_scanner(struct tag_field_scan_state const *)
//{
//    mangled_ppc("??0c_tag_field_scanner@@QAA@PBUtag_field_scan_state@@@Z");
//};

//public: void c_tag_field_scanner::set_scan_flags(unsigned long)
//{
//    mangled_ppc("?set_scan_flags@c_tag_field_scanner@@QAAXK@Z");
//};

//public: void c_tag_field_scanner::add_all_external_aggregate_types(void)
//{
//    mangled_ppc("?add_all_external_aggregate_types@c_tag_field_scanner@@QAAXXZ");
//};

//public: void c_tag_field_scanner::add_all_map_specific_types(void)
//{
//    mangled_ppc("?add_all_map_specific_types@c_tag_field_scanner@@QAAXXZ");
//};

//public: void c_tag_field_scanner::add_scan_type(enum e_tag_field)
//{
//    mangled_ppc("?add_scan_type@c_tag_field_scanner@@QAAXW4e_tag_field@@@Z");
//};

//public: void c_tag_field_scanner::add_all_scan_types(void)
//{
//    mangled_ppc("?add_all_scan_types@c_tag_field_scanner@@QAAXXZ");
//};

//public: bool c_tag_field_scanner::any_fields_set_exist_recursively(void) const
//{
//    mangled_ppc("?any_fields_set_exist_recursively@c_tag_field_scanner@@QBA_NXZ");
//};

//public: bool c_tag_field_scanner::next(void)
//{
//    mangled_ppc("?next@c_tag_field_scanner@@QAA_NXZ");
//};

//public: struct s_tag_field const * c_tag_field_scanner::field(void) const
//{
//    mangled_ppc("?field@c_tag_field_scanner@@QBAPBUs_tag_field@@XZ");
//};

//public: void const * c_tag_field_scanner::address(void) const
//{
//    mangled_ppc("?address@c_tag_field_scanner@@QBAPBXXZ");
//};

//public: char const * c_tag_field_scanner::name(void) const
//{
//    mangled_ppc("?name@c_tag_field_scanner@@QBAPBDXZ");
//};

//public: void const * c_tag_field_scanner::definition(void) const
//{
//    mangled_ppc("?definition@c_tag_field_scanner@@QBAPBXXZ");
//};

//public: enum e_tag_field c_tag_field_scanner::type(void) const
//{
//    mangled_ppc("?type@c_tag_field_scanner@@QBA?AW4e_tag_field@@XZ");
//};

//public: unsigned long c_tag_field_scanner::id(void) const
//{
//    mangled_ppc("?id@c_tag_field_scanner@@QBAKXZ");
//};

//public: long c_tag_field_scanner::base_address_offset(void) const
//{
//    mangled_ppc("?base_address_offset@c_tag_field_scanner@@QBAJXZ");
//};

//public: long c_tag_field_scanner::cache_file_address_offset(void) const
//{
//    mangled_ppc("?cache_file_address_offset@c_tag_field_scanner@@QBAJXZ");
//};

//public: unsigned long c_tag_field_scanner::size(void) const
//{
//    mangled_ppc("?size@c_tag_field_scanner@@QBAKXZ");
//};

//public: __int64 c_tag_field_scanner::external_element_locator_base(void) const
//{
//    mangled_ppc("?external_element_locator_base@c_tag_field_scanner@@QBA_JXZ");
//};

//public: __int64 c_tag_field_scanner::try_to_get_external_element_locator_base(void) const
//{
//    mangled_ppc("?try_to_get_external_element_locator_base@c_tag_field_scanner@@QBA_JXZ");
//};

//public: class c_string_builder c_tag_field_scanner::dump(void) const
//{
//    mangled_ppc("?dump@c_tag_field_scanner@@QBA?AVc_string_builder@@XZ");
//};

//public: struct s_tag_field const * c_tag_field_scanner::extract_field_from_stack(long) const
//{
//    mangled_ppc("?extract_field_from_stack@c_tag_field_scanner@@QBAPBUs_tag_field@@J@Z");
//};

//public: unsigned long const * c_big_flags_typed_no_init<long, 62>::get_bits_direct(void) const
//{
//    mangled_ppc("?get_bits_direct@?$c_big_flags_typed_no_init@J$0DO@@@QBAPBKXZ");
//};

