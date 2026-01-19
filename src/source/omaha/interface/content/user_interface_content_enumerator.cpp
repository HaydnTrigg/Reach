/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_ui_content_enumerator::start(enum e_controller_index, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>);
// public: void c_ui_content_enumerator::start(enum e_controller_index, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>);
// private: void c_ui_content_enumerator::switch_state(enum c_ui_content_enumerator::e_state);
// private: bool c_ui_content_enumerator::update_acquire_cache(void);
// public: bool c_ui_content_cache::is_invalid(void) const;
// public: bool c_ui_content_cache::is_inadequate(void) const;
// public: c_ui_content_cache_ptr::c_ui_content_cache_ptr(class c_ui_content_cache *);
// public: void c_ui_content_cache::acquire(void);
// private: bool c_ui_content_enumerator::update_enumerate(void);
// private: void c_ui_content_enumerator::resume_enumeration(bool);
// public: bool c_ui_content_enumerate_items_task_base::has_remaining_items(void) const;
// public: bool c_ui_content_cross_title_enumerator::start(enum e_controller_index, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: bool c_ui_content_cross_title_enumerator::start(enum e_controller_index);
// public: class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > & c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::operator=(class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &);
// public: class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > & c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::operator=(class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &);
// class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > ui_content_task_make<class c_ui_content_enumerate_items_task<100>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>);
// bool ui_content_task_submit<class c_ui_content_enumerate_items_task<100> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &);
// class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > ui_content_task_make<class c_ui_content_enumerate_cross_title_items_task<1>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver> const &);
// bool ui_content_task_submit<class c_ui_content_enumerate_cross_title_items_task<1> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &);
// public: c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &);
// public: c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &);
// private: void c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::acquire(void);
// private: void c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::acquire(void);
// public: static class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > c_ui_content_task_functions::make<class c_ui_content_enumerate_items_task<100>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>);
// public: static bool c_ui_content_task_functions::submit<class c_ui_content_enumerate_items_task<100> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &);
// public: static class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > c_ui_content_task_functions::make<class c_ui_content_enumerate_cross_title_items_task<1>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: static bool c_ui_content_task_functions::submit<class c_ui_content_enumerate_cross_title_items_task<1> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &);
// private: c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_task<class c_ui_content_enumerate_items_task<100> > *);
// private: c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> > *);
// private: c_ui_content_task<class c_ui_content_enumerate_items_task<100> >::c_ui_content_task<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_enumerate_items_task<100> *);
// private: c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> >::c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_enumerate_cross_title_items_task<1> *);
// private: static bool c_ui_content_task_functions::allocate<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_task<class c_ui_content_enumerate_items_task<100> > **, class c_ui_content_enumerate_items_task<100> **);
// public: c_ui_content_enumerate_items_task<100>::c_ui_content_enumerate_items_task<100>(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>);
// public: c_ui_content_enumerate_items_task_base::c_ui_content_enumerate_items_task_base(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>, void *, unsigned int);
// merged_84BC93F8;
// private: static bool c_ui_content_task_functions::allocate<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> > **, class c_ui_content_enumerate_cross_title_items_task<1> **);
// public: c_ui_content_enumerate_cross_title_items_task<1>::c_ui_content_enumerate_cross_title_items_task<1>(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: c_ui_content_enumerate_cross_title_items_task_base::c_ui_content_enumerate_cross_title_items_task_base(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, void *, unsigned int);
// merged_84BC9698;
// merged_84BC96E0;
// merged_84BC9728;
// public: virtual c_ui_content_enumerate_items_task<100>::~c_ui_content_enumerate_items_task<100>(void);
// public: virtual c_ui_content_enumerate_cross_title_items_task<1>::~c_ui_content_enumerate_cross_title_items_task<1>(void);

//public: void c_ui_content_enumerator::start(enum e_controller_index, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?start@c_ui_content_enumerator@@QAAXW4e_controller_index@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_ui_content_enumerator::start(enum e_controller_index, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?start@c_ui_content_enumerator@@QAAXW4e_controller_index@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_ui_content_enumerator::switch_state(enum c_ui_content_enumerator::e_state)
//{
//    mangled_ppc("?switch_state@c_ui_content_enumerator@@AAAXW4e_state@1@@Z");
//};

//private: bool c_ui_content_enumerator::update_acquire_cache(void)
//{
//    mangled_ppc("?update_acquire_cache@c_ui_content_enumerator@@AAA_NXZ");
//};

//public: bool c_ui_content_cache::is_invalid(void) const
//{
//    mangled_ppc("?is_invalid@c_ui_content_cache@@QBA_NXZ");
//};

//public: bool c_ui_content_cache::is_inadequate(void) const
//{
//    mangled_ppc("?is_inadequate@c_ui_content_cache@@QBA_NXZ");
//};

//public: c_ui_content_cache_ptr::c_ui_content_cache_ptr(class c_ui_content_cache *)
//{
//    mangled_ppc("??0c_ui_content_cache_ptr@@QAA@PAVc_ui_content_cache@@@Z");
//};

//public: void c_ui_content_cache::acquire(void)
//{
//    mangled_ppc("?acquire@c_ui_content_cache@@QAAXXZ");
//};

//private: bool c_ui_content_enumerator::update_enumerate(void)
//{
//    mangled_ppc("?update_enumerate@c_ui_content_enumerator@@AAA_NXZ");
//};

//private: void c_ui_content_enumerator::resume_enumeration(bool)
//{
//    mangled_ppc("?resume_enumeration@c_ui_content_enumerator@@AAAX_N@Z");
//};

//public: bool c_ui_content_enumerate_items_task_base::has_remaining_items(void) const
//{
//    mangled_ppc("?has_remaining_items@c_ui_content_enumerate_items_task_base@@QBA_NXZ");
//};

//public: bool c_ui_content_cross_title_enumerator::start(enum e_controller_index, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?start@c_ui_content_cross_title_enumerator@@QAA_NW4e_controller_index@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_ui_content_cross_title_enumerator::start(enum e_controller_index)
//{
//    mangled_ppc("?start@c_ui_content_cross_title_enumerator@@QAA_NW4e_controller_index@@@Z");
//};

//public: class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > & c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::operator=(class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &)
//{
//    mangled_ppc("??4?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@QAAAAV0@ABV0@@Z");
//};

//public: class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > & c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::operator=(class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &)
//{
//    mangled_ppc("??4?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@QAAAAV0@ABV0@@Z");
//};

//class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > ui_content_task_make<class c_ui_content_enumerate_items_task<100>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$ui_content_task_make@V?$c_ui_content_enumerate_items_task@$0GE@@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@@YA?AV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//bool ui_content_task_submit<class c_ui_content_enumerate_items_task<100> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &)
//{
//    mangled_ppc("??$ui_content_task_submit@V?$c_ui_content_enumerate_items_task@$0GE@@@@@YA_NW4e_controller_index@@ABV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@@Z");
//};

//class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > ui_content_task_make<class c_ui_content_enumerate_cross_title_items_task<1>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$ui_content_task_make@V?$c_ui_content_enumerate_cross_title_items_task@$00@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@@@YA?AV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@ABV?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool ui_content_task_submit<class c_ui_content_enumerate_cross_title_items_task<1> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &)
//{
//    mangled_ppc("??$ui_content_task_submit@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@YA_NW4e_controller_index@@ABV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@@Z");
//};

//public: c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &)
//{
//    mangled_ppc("??0?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@QAA@ABV0@@Z");
//};

//public: c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &)
//{
//    mangled_ppc("??0?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@QAA@ABV0@@Z");
//};

//private: void c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::acquire(void)
//{
//    mangled_ppc("?acquire@?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@AAAXXZ");
//};

//private: void c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::acquire(void)
//{
//    mangled_ppc("?acquire@?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@AAAXXZ");
//};

//public: static class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > c_ui_content_task_functions::make<class c_ui_content_enumerate_items_task<100>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$make@V?$c_ui_content_enumerate_items_task@$0GE@@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@c_ui_content_task_functions@@SA?AV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool c_ui_content_task_functions::submit<class c_ui_content_enumerate_items_task<100> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> > const &)
//{
//    mangled_ppc("??$submit@V?$c_ui_content_enumerate_items_task@$0GE@@@@c_ui_content_task_functions@@SA_NW4e_controller_index@@ABV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@@Z");
//};

//public: static class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > c_ui_content_task_functions::make<class c_ui_content_enumerate_cross_title_items_task<1>, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver> >(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$make@V?$c_ui_content_enumerate_cross_title_items_task@$00@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@@c_ui_content_task_functions@@SA?AV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool c_ui_content_task_functions::submit<class c_ui_content_enumerate_cross_title_items_task<1> >(enum e_controller_index, class c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> > const &)
//{
//    mangled_ppc("??$submit@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@c_ui_content_task_functions@@SA_NW4e_controller_index@@ABV?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@@Z");
//};

//private: c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >::c_ui_content_task_pointer<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_task<class c_ui_content_enumerate_items_task<100> > *)
//{
//    mangled_ppc("??0?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_items_task@$0GE@@@@@AAA@PAV?$c_ui_content_task@V?$c_ui_content_enumerate_items_task@$0GE@@@@@@Z");
//};

//private: c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >::c_ui_content_task_pointer<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> > *)
//{
//    mangled_ppc("??0?$c_ui_content_task_pointer@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@AAA@PAV?$c_ui_content_task@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@@Z");
//};

//private: c_ui_content_task<class c_ui_content_enumerate_items_task<100> >::c_ui_content_task<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_enumerate_items_task<100> *)
//{
//    mangled_ppc("??0?$c_ui_content_task@V?$c_ui_content_enumerate_items_task@$0GE@@@@@AAA@PAV?$c_ui_content_enumerate_items_task@$0GE@@@@Z");
//};

//private: c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> >::c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_enumerate_cross_title_items_task<1> *)
//{
//    mangled_ppc("??0?$c_ui_content_task@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@AAA@PAV?$c_ui_content_enumerate_cross_title_items_task@$00@@@Z");
//};

//private: static bool c_ui_content_task_functions::allocate<class c_ui_content_enumerate_items_task<100> >(class c_ui_content_task<class c_ui_content_enumerate_items_task<100> > **, class c_ui_content_enumerate_items_task<100> **)
//{
//    mangled_ppc("??$allocate@V?$c_ui_content_enumerate_items_task@$0GE@@@@c_ui_content_task_functions@@CA_NPAPAV?$c_ui_content_task@V?$c_ui_content_enumerate_items_task@$0GE@@@@@PAPAV?$c_ui_content_enumerate_items_task@$0GE@@@@Z");
//};

//public: c_ui_content_enumerate_items_task<100>::c_ui_content_enumerate_items_task<100>(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_ui_content_enumerate_items_task@$0GE@@@QAA@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_ui_content_enumerate_items_task_base::c_ui_content_enumerate_items_task_base(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>, void *, unsigned int)
//{
//    mangled_ppc("??0c_ui_content_enumerate_items_task_base@@QAA@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@PAXI@Z");
//};

//merged_84BC93F8
//{
//    mangled_ppc("merged_84BC93F8");
//};

//private: static bool c_ui_content_task_functions::allocate<class c_ui_content_enumerate_cross_title_items_task<1> >(class c_ui_content_task<class c_ui_content_enumerate_cross_title_items_task<1> > **, class c_ui_content_enumerate_cross_title_items_task<1> **)
//{
//    mangled_ppc("??$allocate@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@c_ui_content_task_functions@@CA_NPAPAV?$c_ui_content_task@V?$c_ui_content_enumerate_cross_title_items_task@$00@@@@PAPAV?$c_ui_content_enumerate_cross_title_items_task@$00@@@Z");
//};

//public: c_ui_content_enumerate_cross_title_items_task<1>::c_ui_content_enumerate_cross_title_items_task<1>(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_ui_content_enumerate_cross_title_items_task@$00@@QAA@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_ui_content_enumerate_cross_title_items_task_base::c_ui_content_enumerate_cross_title_items_task_base(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, void *, unsigned int)
//{
//    mangled_ppc("??0c_ui_content_enumerate_cross_title_items_task_base@@QAA@V?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@PAXI@Z");
//};

//merged_84BC9698
//{
//    mangled_ppc("merged_84BC9698");
//};

//merged_84BC96E0
//{
//    mangled_ppc("merged_84BC96E0");
//};

//merged_84BC9728
//{
//    mangled_ppc("merged_84BC9728");
//};

//public: virtual c_ui_content_enumerate_items_task<100>::~c_ui_content_enumerate_items_task<100>(void)
//{
//    mangled_ppc("??1?$c_ui_content_enumerate_items_task@$0GE@@@UAA@XZ");
//};

//public: virtual c_ui_content_enumerate_cross_title_items_task<1>::~c_ui_content_enumerate_cross_title_items_task<1>(void)
//{
//    mangled_ppc("??1?$c_ui_content_enumerate_cross_title_items_task@$00@@UAA@XZ");
//};

