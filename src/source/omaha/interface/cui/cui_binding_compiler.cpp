/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_cui_binding_compiler::c_cui_binding_compiler(class c_cui_static_vector<class c_cui_component *, 8192> *, class c_cui_static_vector<struct s_cui_property_binding, 8192> *);
// public: bool c_cui_binding_compiler::compile(enum c_cui_binding_compiler::e_compile_error *, struct s_cui_property_binding_definition const **);
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_negate_bool_conversion(struct s_cui_property_binding *, enum e_cui_property_type *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_compare_long_conversion(struct s_cui_property_binding *, enum e_cui_property_type *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_conversion(struct s_cui_property_binding *, enum e_cui_property_type *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_source(struct s_cui_property_binding *, enum e_cui_property_type *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_target(struct s_cui_property_binding *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::check_compatibility(struct s_cui_property_binding const *, enum e_cui_property_type) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::calculate_update_sequence(struct s_cui_property_binding *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_binding(struct s_cui_property_binding *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::calculate_update_sequence(class c_big_flags<8192> *, struct s_cui_property_binding *) const;
// private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::calculate_component_update_sequence(class c_big_flags<8192> *, class c_cui_component const *, long *) const;
// public: c_big_flags<8192>::c_big_flags<8192>(void);
// public: void c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::set(enum e_cui_property_binding_flags, bool);
// public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::erase(struct s_cui_property_binding const *);
// public: void c_big_flags_typed_no_init<long, 8192>::set(long, bool);
// public: c_big_flags_typed<long, 8192>::c_big_flags_typed<long, 8192>(void);
// private: bool c_cui_static_vector<struct s_cui_property_binding, 8192>::position_valid(struct s_cui_property_binding const *) const;
// public: struct s_cui_property_binding const * c_cui_static_vector<struct s_cui_property_binding, 8192>::begin(void) const;
// public: struct s_cui_property_binding const * c_cui_static_vector<struct s_cui_property_binding, 8192>::end(void) const;
// public: struct s_cui_property_binding const * c_cui_static_vector<struct s_cui_property_binding, 8192>::data(void) const;
// private: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::collapse(struct s_cui_property_binding const *, struct s_cui_property_binding const *);
// public: bool c_big_flags_typed_no_init<long, 8192>::valid(void) const;
// private: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::get_mutable_iterator(struct s_cui_property_binding const *);
// protected: static unsigned long c_big_flags_typed_no_init<long, 8192>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 8192>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 8192>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 8192>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 8192>::get_mask_of_first_slice_of_chunk_exclusive(long);
// bool cui_property_description_is_input(struct s_cui_property_description const *);
// bool cui_property_description_is_output(struct s_cui_property_description const *);

//public: c_cui_binding_compiler::c_cui_binding_compiler(class c_cui_static_vector<class c_cui_component *, 8192> *, class c_cui_static_vector<struct s_cui_property_binding, 8192> *)
//{
//    mangled_ppc("??0c_cui_binding_compiler@@QAA@PAV?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@PAV?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@@Z");
//};

//public: bool c_cui_binding_compiler::compile(enum c_cui_binding_compiler::e_compile_error *, struct s_cui_property_binding_definition const **)
//{
//    mangled_ppc("?compile@c_cui_binding_compiler@@QAA_NPAW4e_compile_error@1@PAPBUs_cui_property_binding_definition@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_negate_bool_conversion(struct s_cui_property_binding *, enum e_cui_property_type *) const
//{
//    mangled_ppc("?compile_negate_bool_conversion@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@PAW4e_cui_property_type@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_compare_long_conversion(struct s_cui_property_binding *, enum e_cui_property_type *) const
//{
//    mangled_ppc("?compile_compare_long_conversion@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@PAW4e_cui_property_type@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_conversion(struct s_cui_property_binding *, enum e_cui_property_type *) const
//{
//    mangled_ppc("?compile_conversion@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@PAW4e_cui_property_type@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_source(struct s_cui_property_binding *, enum e_cui_property_type *) const
//{
//    mangled_ppc("?compile_source@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@PAW4e_cui_property_type@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_target(struct s_cui_property_binding *) const
//{
//    mangled_ppc("?compile_target@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::check_compatibility(struct s_cui_property_binding const *, enum e_cui_property_type) const
//{
//    mangled_ppc("?check_compatibility@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PBUs_cui_property_binding@@W4e_cui_property_type@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::calculate_update_sequence(struct s_cui_property_binding *) const
//{
//    mangled_ppc("?calculate_update_sequence@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::compile_binding(struct s_cui_property_binding *) const
//{
//    mangled_ppc("?compile_binding@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAUs_cui_property_binding@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::calculate_update_sequence(class c_big_flags<8192> *, struct s_cui_property_binding *) const
//{
//    mangled_ppc("?calculate_update_sequence@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAV?$c_big_flags@$0CAAA@@@PAUs_cui_property_binding@@@Z");
//};

//private: enum c_cui_binding_compiler::e_compile_error c_cui_binding_compiler::calculate_component_update_sequence(class c_big_flags<8192> *, class c_cui_component const *, long *) const
//{
//    mangled_ppc("?calculate_component_update_sequence@c_cui_binding_compiler@@ABA?AW4e_compile_error@1@PAV?$c_big_flags@$0CAAA@@@PBVc_cui_component@@PAJ@Z");
//};

//public: c_big_flags<8192>::c_big_flags<8192>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0CAAA@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::set(enum e_cui_property_binding_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_cui_property_binding_flags@@G$02Us_default_enum_string_resolver@@@@QAAXW4e_cui_property_binding_flags@@_N@Z");
//};

//public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::erase(struct s_cui_property_binding const *)
//{
//    mangled_ppc("?erase@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAPAUs_cui_property_binding@@PBU2@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 8192>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0CAAA@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 8192>::c_big_flags_typed<long, 8192>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0CAAA@@@QAA@XZ");
//};

//private: bool c_cui_static_vector<struct s_cui_property_binding, 8192>::position_valid(struct s_cui_property_binding const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@ABA_NPBUs_cui_property_binding@@@Z");
//};

//public: struct s_cui_property_binding const * c_cui_static_vector<struct s_cui_property_binding, 8192>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QBAPBUs_cui_property_binding@@XZ");
//};

//public: struct s_cui_property_binding const * c_cui_static_vector<struct s_cui_property_binding, 8192>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QBAPBUs_cui_property_binding@@XZ");
//};

//public: struct s_cui_property_binding const * c_cui_static_vector<struct s_cui_property_binding, 8192>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QBAPBUs_cui_property_binding@@XZ");
//};

//private: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::collapse(struct s_cui_property_binding const *, struct s_cui_property_binding const *)
//{
//    mangled_ppc("?collapse@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@AAAPAUs_cui_property_binding@@PBU2@0@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 8192>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0CAAA@@@QBA_NXZ");
//};

//private: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::get_mutable_iterator(struct s_cui_property_binding const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@AAAPAUs_cui_property_binding@@PBU2@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 8192>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0CAAA@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 8192>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0CAAA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 8192>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0CAAA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 8192>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0CAAA@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 8192>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0CAAA@@@KAKJ@Z");
//};

//bool cui_property_description_is_input(struct s_cui_property_description const *)
//{
//    mangled_ppc("?cui_property_description_is_input@@YA_NPBUs_cui_property_description@@@Z");
//};

//bool cui_property_description_is_output(struct s_cui_property_description const *)
//{
//    mangled_ppc("?cui_property_description_is_output@@YA_NPBUs_cui_property_description@@@Z");
//};

