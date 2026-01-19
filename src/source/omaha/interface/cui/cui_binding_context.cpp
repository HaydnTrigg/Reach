/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static class c_cui_binding_context * c_cui_binding_context::create(unsigned int, unsigned int);
// private: c_cui_binding_context::c_cui_binding_context(class c_cui_component **, unsigned int, struct s_cui_property_binding *, unsigned int, unsigned long *);
// public: void c_cui_binding_context::initialize(void);
// public: class c_cui_component const * c_cui_binding_context::find_component_by_id(struct s_cui_component_screen_definition const *, long) const;
// public: class c_cui_component * c_cui_binding_context::find_component_by_id(struct s_cui_component_screen_definition const *, long);
// public: class c_cui_component const * c_cui_binding_context::find_component_by_name(long) const;
// public: class c_cui_component * c_cui_binding_context::find_component_by_name(long);
// public: void c_cui_binding_context::update(class c_cui_update_context *, class c_cui_binding_context *);
// public: bool c_cui_binding_context::is_component_updated(long) const;
// public: void c_cui_binding_context::set_component_updated(long, bool);
// bool execute_source_conversion(enum e_cui_binding_conversion_function, struct s_cui_binding_conversion_definition const *, struct s_cui_property_value const *, struct s_cui_property_value *);
// bool execute_negate_bool_conversion(struct s_cui_property_value const *, struct s_cui_property_value *);
// bool execute_compare_long_conversion(struct s_cui_binding_conversion_long_comparison_definition const *, struct s_cui_property_value const *, struct s_cui_property_value *);
// bool execute_target_conversion(struct s_cui_property_binding const *, class c_cui_component *, long, struct s_cui_property_value const *, struct s_cui_property_value *);
// public: enum e_cui_binding_conversion_function c_enum_no_init<enum e_cui_binding_conversion_function, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_cui_binding_conversion_function(void) const;
// public: enum e_cui_binding_conversion_comparison_operator c_enum_no_init<enum e_cui_binding_conversion_comparison_operator, char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_cui_binding_conversion_comparison_operator(void) const;
// public: c_cui_placement_allocator<class c_cui_component *>::c_cui_placement_allocator<class c_cui_component *>(class c_cui_component **, unsigned int);
// public: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::begin(void);
// public: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::end(void);
// public: c_cui_placement_allocator<struct s_cui_property_binding>::c_cui_placement_allocator<struct s_cui_property_binding>(struct s_cui_property_binding *, unsigned int);
// public: bool c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_cui_property_binding_flags) const;
// public: c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >(unsigned int, class c_cui_placement_allocator<class c_cui_component *> const &);
// public: c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >(unsigned int, class c_cui_placement_allocator<struct s_cui_property_binding> const &);
// bool execute_binding_conversion_comparison<long>(enum e_cui_binding_conversion_comparison_operator, long, long);
// public: static bool c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_cui_property_binding_flags);
// private: static unsigned short c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_cui_property_binding_flags);
// public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::reserve(unsigned int);
// public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::reserve(unsigned int);
// public: class c_cui_component ** c_cui_placement_allocator<class c_cui_component *>::allocate(unsigned int);
// public: struct s_cui_property_binding * c_cui_placement_allocator<struct s_cui_property_binding>::allocate(unsigned int);
// public: long c_cui_binding_scope::get_component_index(void) const;
// public: void c_cui_binding_scope::set_component_index(long);
// long cui_property_value_get_long(struct s_cui_property_value const *);

//public: static class c_cui_binding_context * c_cui_binding_context::create(unsigned int, unsigned int)
//{
//    mangled_ppc("?create@c_cui_binding_context@@SAPAV1@II@Z");
//};

//private: c_cui_binding_context::c_cui_binding_context(class c_cui_component **, unsigned int, struct s_cui_property_binding *, unsigned int, unsigned long *)
//{
//    mangled_ppc("??0c_cui_binding_context@@AAA@PAPAVc_cui_component@@IPAUs_cui_property_binding@@IPAK@Z");
//};

//public: void c_cui_binding_context::initialize(void)
//{
//    mangled_ppc("?initialize@c_cui_binding_context@@QAAXXZ");
//};

//public: class c_cui_component const * c_cui_binding_context::find_component_by_id(struct s_cui_component_screen_definition const *, long) const
//{
//    mangled_ppc("?find_component_by_id@c_cui_binding_context@@QBAPBVc_cui_component@@PBUs_cui_component_screen_definition@@J@Z");
//};

//public: class c_cui_component * c_cui_binding_context::find_component_by_id(struct s_cui_component_screen_definition const *, long)
//{
//    mangled_ppc("?find_component_by_id@c_cui_binding_context@@QAAPAVc_cui_component@@PBUs_cui_component_screen_definition@@J@Z");
//};

//public: class c_cui_component const * c_cui_binding_context::find_component_by_name(long) const
//{
//    mangled_ppc("?find_component_by_name@c_cui_binding_context@@QBAPBVc_cui_component@@J@Z");
//};

//public: class c_cui_component * c_cui_binding_context::find_component_by_name(long)
//{
//    mangled_ppc("?find_component_by_name@c_cui_binding_context@@QAAPAVc_cui_component@@J@Z");
//};

//public: void c_cui_binding_context::update(class c_cui_update_context *, class c_cui_binding_context *)
//{
//    mangled_ppc("?update@c_cui_binding_context@@QAAXPAVc_cui_update_context@@PAV1@@Z");
//};

//public: bool c_cui_binding_context::is_component_updated(long) const
//{
//    mangled_ppc("?is_component_updated@c_cui_binding_context@@QBA_NJ@Z");
//};

//public: void c_cui_binding_context::set_component_updated(long, bool)
//{
//    mangled_ppc("?set_component_updated@c_cui_binding_context@@QAAXJ_N@Z");
//};

//bool execute_source_conversion(enum e_cui_binding_conversion_function, struct s_cui_binding_conversion_definition const *, struct s_cui_property_value const *, struct s_cui_property_value *)
//{
//    mangled_ppc("?execute_source_conversion@@YA_NW4e_cui_binding_conversion_function@@PBUs_cui_binding_conversion_definition@@PBUs_cui_property_value@@PAU3@@Z");
//};

//bool execute_negate_bool_conversion(struct s_cui_property_value const *, struct s_cui_property_value *)
//{
//    mangled_ppc("?execute_negate_bool_conversion@@YA_NPBUs_cui_property_value@@PAU1@@Z");
//};

//bool execute_compare_long_conversion(struct s_cui_binding_conversion_long_comparison_definition const *, struct s_cui_property_value const *, struct s_cui_property_value *)
//{
//    mangled_ppc("?execute_compare_long_conversion@@YA_NPBUs_cui_binding_conversion_long_comparison_definition@@PBUs_cui_property_value@@PAU2@@Z");
//};

//bool execute_target_conversion(struct s_cui_property_binding const *, class c_cui_component *, long, struct s_cui_property_value const *, struct s_cui_property_value *)
//{
//    mangled_ppc("?execute_target_conversion@@YA_NPBUs_cui_property_binding@@PAVc_cui_component@@JPBUs_cui_property_value@@PAU3@@Z");
//};

//public: enum e_cui_binding_conversion_function c_enum_no_init<enum e_cui_binding_conversion_function, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_cui_binding_conversion_function(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_cui_binding_conversion_function@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_cui_binding_conversion_function@@XZ");
//};

//public: enum e_cui_binding_conversion_comparison_operator c_enum_no_init<enum e_cui_binding_conversion_comparison_operator, char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_cui_binding_conversion_comparison_operator(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_cui_binding_conversion_comparison_operator@@D$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_cui_binding_conversion_comparison_operator@@XZ");
//};

//public: c_cui_placement_allocator<class c_cui_component *>::c_cui_placement_allocator<class c_cui_component *>(class c_cui_component **, unsigned int)
//{
//    mangled_ppc("??0?$c_cui_placement_allocator@PAVc_cui_component@@@@QAA@PAPAVc_cui_component@@I@Z");
//};

//public: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAPAUs_cui_property_binding@@XZ");
//};

//public: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::end(void)
//{
//    mangled_ppc("?end@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAPAUs_cui_property_binding@@XZ");
//};

//public: c_cui_placement_allocator<struct s_cui_property_binding>::c_cui_placement_allocator<struct s_cui_property_binding>(struct s_cui_property_binding *, unsigned int)
//{
//    mangled_ppc("??0?$c_cui_placement_allocator@Us_cui_property_binding@@@@QAA@PAUs_cui_property_binding@@I@Z");
//};

//public: bool c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_cui_property_binding_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cui_property_binding_flags@@G$02Us_default_enum_string_resolver@@@@QBA_NW4e_cui_property_binding_flags@@@Z");
//};

//public: c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >(unsigned int, class c_cui_placement_allocator<class c_cui_component *> const &)
//{
//    mangled_ppc("??0?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAA@IABV?$c_cui_placement_allocator@PAVc_cui_component@@@@@Z");
//};

//public: c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >(unsigned int, class c_cui_placement_allocator<struct s_cui_property_binding> const &)
//{
//    mangled_ppc("??0?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAA@IABV?$c_cui_placement_allocator@Us_cui_property_binding@@@@@Z");
//};

//bool execute_binding_conversion_comparison<long>(enum e_cui_binding_conversion_comparison_operator, long, long)
//{
//    mangled_ppc("??$execute_binding_conversion_comparison@J@@YA_NW4e_cui_binding_conversion_comparison_operator@@JJ@Z");
//};

//public: static bool c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_cui_property_binding_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cui_property_binding_flags@@G$02Us_default_enum_string_resolver@@@@SA_NW4e_cui_property_binding_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_cui_property_binding_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cui_property_binding_flags@@G$02Us_default_enum_string_resolver@@@@CAGW4e_cui_property_binding_flags@@@Z");
//};

//public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::reserve(unsigned int)
//{
//    mangled_ppc("?reserve@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAXI@Z");
//};

//public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::reserve(unsigned int)
//{
//    mangled_ppc("?reserve@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAXI@Z");
//};

//public: class c_cui_component ** c_cui_placement_allocator<class c_cui_component *>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$c_cui_placement_allocator@PAVc_cui_component@@@@QAAPAPAVc_cui_component@@I@Z");
//};

//public: struct s_cui_property_binding * c_cui_placement_allocator<struct s_cui_property_binding>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$c_cui_placement_allocator@Us_cui_property_binding@@@@QAAPAUs_cui_property_binding@@I@Z");
//};

//public: long c_cui_binding_scope::get_component_index(void) const
//{
//    mangled_ppc("?get_component_index@c_cui_binding_scope@@QBAJXZ");
//};

//public: void c_cui_binding_scope::set_component_index(long)
//{
//    mangled_ppc("?set_component_index@c_cui_binding_scope@@QAAXJ@Z");
//};

//long cui_property_value_get_long(struct s_cui_property_value const *)
//{
//    mangled_ppc("?cui_property_value_get_long@@YAJPBUs_cui_property_value@@@Z");
//};

