/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool allocate_list_contiguous(char const *, long, class c_allocation_interface *, class c_wrapped_array<struct s_allocation_description>, char const *, void **, unsigned long *);
// public: c_raw_storage_buffer_iterator::c_raw_storage_buffer_iterator(void *, long);
// public: void * c_raw_storage_buffer_iterator::get_array_elements_explicit(unsigned long, long, long);
// public: static unsigned long s_allocation_description::accumulate_size(unsigned long, struct s_allocation_description const &);
// bool allocate_list_contiguous(char const *, long, class c_allocation_interface *, class c_wrapped_array<struct s_allocation_description_holder>, char const *, void **, unsigned long *);
// public: static unsigned long s_allocation_description_holder::accumulate_size(unsigned long, struct s_allocation_description_holder const &);
// public: c_buffer_allocation_description::c_buffer_allocation_description(class c_basic_buffer<void> &, unsigned long, unsigned long);
// public: c_allocation_description::c_allocation_description(void);
// public: virtual unsigned long c_buffer_allocation_description::get_unaligned_size(void) const;
// unsigned long get_unaligned_allocation_size(unsigned long, unsigned long);
// public: virtual unsigned long c_buffer_allocation_description::get_alignment_bits(void) const;
// public: virtual void c_buffer_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const;
// struct s_allocation_description_holder make_allocation_description(class c_basic_buffer<void> &, unsigned long, unsigned long);
// private: virtual unsigned long c_empty_allocation_description::get_unaligned_size(void) const;
// private: virtual unsigned long c_empty_allocation_description::get_alignment_bits(void) const;
// private: virtual void c_empty_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const;
// struct s_allocation_description_holder make_empty_allocation_description(void);
// public: c_empty_allocation_description::c_empty_allocation_description(void);
// public: virtual unsigned long c_wrapped_flags_allocation_description::get_unaligned_size(void) const;
// public: virtual unsigned long c_wrapped_flags_allocation_description::get_alignment_bits(void) const;
// public: virtual void c_wrapped_flags_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const;
// public: void c_wrapped_flags::set_bits(void *, unsigned long);
// public: c_data_array_allocation_description::c_data_array_allocation_description(struct s_data_array *&, char const *, long, char const *, long, long, long);
// public: virtual unsigned long c_data_array_allocation_description::get_unaligned_size(void) const;
// public: virtual unsigned long c_data_array_allocation_description::get_alignment_bits(void) const;
// public: virtual void c_data_array_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const;
// struct s_allocation_description_holder make_allocation_description(struct s_data_array *&, char const *, long, char const *, long, long, long);
// public: struct s_allocation_description * c_wrapped_array_no_init<struct s_allocation_description>::begin(void);
// public: struct s_allocation_description * c_wrapped_array_no_init<struct s_allocation_description>::end(void);
// public: long c_wrapped_array_no_init<struct s_allocation_description>::count(void) const;
// public: struct s_allocation_description & c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description>, struct s_allocation_description>::operator[](long);
// public: struct s_allocation_description_holder * c_wrapped_array_no_init<struct s_allocation_description_holder>::begin(void);
// public: struct s_allocation_description_holder * c_wrapped_array_no_init<struct s_allocation_description_holder>::end(void);
// public: long c_wrapped_array_no_init<struct s_allocation_description_holder>::count(void) const;
// public: struct s_allocation_description_holder & c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description_holder>, struct s_allocation_description_holder>::operator[](long);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description>, struct s_allocation_description>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_allocation_description> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description> >::get_super_class(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description_holder>, struct s_allocation_description_holder>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_allocation_description_holder> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description_holder> >::get_super_class(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description>, struct s_allocation_description>::count(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description_holder>, struct s_allocation_description_holder>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_allocation_description> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_allocation_description_holder> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description_holder> >::get_super_class(void) const;
// int std::accumulate<struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &)>(struct s_allocation_description *, struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &));
// int std::accumulate<struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &)>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &));
// struct s_allocation_description_holder make_into_description_holder<class c_buffer_allocation_description>(class c_buffer_allocation_description);
// public: c_buffer_allocation_description::~c_buffer_allocation_description(void);
// public: s_allocation_description_holder::s_allocation_description_holder(void);
// public: s_allocation_description_holder::s_allocation_description_holder(struct s_allocation_description_holder const &);
// struct s_allocation_description_holder make_into_description_holder<class c_empty_allocation_description>(class c_empty_allocation_description);
// unsigned long get_total_unaligned_raw_size<unsigned long>(long);
// public: unsigned long * c_raw_storage_buffer_iterator::get_array_elements<unsigned long>(long);
// struct s_allocation_description_holder make_into_description_holder<class c_data_array_allocation_description>(class c_data_array_allocation_description);
// struct s_allocation_description * std::_Checked_base<struct s_allocation_description *>(struct s_allocation_description *&);
// int std::_Accumulate<struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &)>(struct s_allocation_description *, struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &));
// struct s_allocation_description_holder * std::_Checked_base<struct s_allocation_description_holder *>(struct s_allocation_description_holder *&);
// int std::_Accumulate<struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &)>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &));
// struct s_allocation_description * std::_Checked_base<struct s_allocation_description *>(struct s_allocation_description *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_allocation_description *>(struct s_allocation_description *, struct s_allocation_description *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<unsigned long (unsigned long, struct s_allocation_description const &)>(unsigned long (*)(unsigned long, struct s_allocation_description const &), wchar_t const *, unsigned int);
// struct s_allocation_description_holder * std::_Checked_base<struct s_allocation_description_holder *>(struct s_allocation_description_holder *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_allocation_description_holder *>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<unsigned long (unsigned long, struct s_allocation_description_holder const &)>(unsigned long (*)(unsigned long, struct s_allocation_description_holder const &), wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_allocation_description *>(struct s_allocation_description *const &);
// void std::_Debug_range2<struct s_allocation_description *>(struct s_allocation_description *, struct s_allocation_description *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_allocation_description_holder *>(struct s_allocation_description_holder *const &);
// void std::_Debug_range2<struct s_allocation_description_holder *>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_allocation_description>(struct s_allocation_description *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_allocation_description_holder>(struct s_allocation_description_holder *, wchar_t const *, unsigned int);

//bool allocate_list_contiguous(char const *, long, class c_allocation_interface *, class c_wrapped_array<struct s_allocation_description>, char const *, void **, unsigned long *)
//{
//    mangled_ppc("?allocate_list_contiguous@@YA_NPBDJPAVc_allocation_interface@@V?$c_wrapped_array@Us_allocation_description@@@@0PAPAXPAK@Z");
//};

//public: c_raw_storage_buffer_iterator::c_raw_storage_buffer_iterator(void *, long)
//{
//    mangled_ppc("??0c_raw_storage_buffer_iterator@@QAA@PAXJ@Z");
//};

//public: void * c_raw_storage_buffer_iterator::get_array_elements_explicit(unsigned long, long, long)
//{
//    mangled_ppc("?get_array_elements_explicit@c_raw_storage_buffer_iterator@@QAAPAXKJJ@Z");
//};

//public: static unsigned long s_allocation_description::accumulate_size(unsigned long, struct s_allocation_description const &)
//{
//    mangled_ppc("?accumulate_size@s_allocation_description@@SAKKABU1@@Z");
//};

//bool allocate_list_contiguous(char const *, long, class c_allocation_interface *, class c_wrapped_array<struct s_allocation_description_holder>, char const *, void **, unsigned long *)
//{
//    mangled_ppc("?allocate_list_contiguous@@YA_NPBDJPAVc_allocation_interface@@V?$c_wrapped_array@Us_allocation_description_holder@@@@0PAPAXPAK@Z");
//};

//public: static unsigned long s_allocation_description_holder::accumulate_size(unsigned long, struct s_allocation_description_holder const &)
//{
//    mangled_ppc("?accumulate_size@s_allocation_description_holder@@SAKKABU1@@Z");
//};

//public: c_buffer_allocation_description::c_buffer_allocation_description(class c_basic_buffer<void> &, unsigned long, unsigned long)
//{
//    mangled_ppc("??0c_buffer_allocation_description@@QAA@AAV?$c_basic_buffer@X@@KK@Z");
//};

//public: c_allocation_description::c_allocation_description(void)
//{
//    mangled_ppc("??0c_allocation_description@@QAA@XZ");
//};

//public: virtual unsigned long c_buffer_allocation_description::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@c_buffer_allocation_description@@UBAKXZ");
//};

//unsigned long get_unaligned_allocation_size(unsigned long, unsigned long)
//{
//    mangled_ppc("?get_unaligned_allocation_size@@YAKKK@Z");
//};

//public: virtual unsigned long c_buffer_allocation_description::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@c_buffer_allocation_description@@UBAKXZ");
//};

//public: virtual void c_buffer_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@c_buffer_allocation_description@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description(class c_basic_buffer<void> &, unsigned long, unsigned long)
//{
//    mangled_ppc("?make_allocation_description@@YA?AUs_allocation_description_holder@@AAV?$c_basic_buffer@X@@KK@Z");
//};

//private: virtual unsigned long c_empty_allocation_description::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@c_empty_allocation_description@@EBAKXZ");
//};

//private: virtual unsigned long c_empty_allocation_description::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@c_empty_allocation_description@@EBAKXZ");
//};

//private: virtual void c_empty_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@c_empty_allocation_description@@EBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//struct s_allocation_description_holder make_empty_allocation_description(void)
//{
//    mangled_ppc("?make_empty_allocation_description@@YA?AUs_allocation_description_holder@@XZ");
//};

//public: c_empty_allocation_description::c_empty_allocation_description(void)
//{
//    mangled_ppc("??0c_empty_allocation_description@@QAA@XZ");
//};

//public: virtual unsigned long c_wrapped_flags_allocation_description::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@c_wrapped_flags_allocation_description@@UBAKXZ");
//};

//public: virtual unsigned long c_wrapped_flags_allocation_description::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@c_wrapped_flags_allocation_description@@UBAKXZ");
//};

//public: virtual void c_wrapped_flags_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@c_wrapped_flags_allocation_description@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//public: void c_wrapped_flags::set_bits(void *, unsigned long)
//{
//    mangled_ppc("?set_bits@c_wrapped_flags@@QAAXPAXK@Z");
//};

//public: c_data_array_allocation_description::c_data_array_allocation_description(struct s_data_array *&, char const *, long, char const *, long, long, long)
//{
//    mangled_ppc("??0c_data_array_allocation_description@@QAA@AAPAUs_data_array@@PBDJ1JJJ@Z");
//};

//public: virtual unsigned long c_data_array_allocation_description::get_unaligned_size(void) const
//{
//    mangled_ppc("?get_unaligned_size@c_data_array_allocation_description@@UBAKXZ");
//};

//public: virtual unsigned long c_data_array_allocation_description::get_alignment_bits(void) const
//{
//    mangled_ppc("?get_alignment_bits@c_data_array_allocation_description@@UBAKXZ");
//};

//public: virtual void c_data_array_allocation_description::assign_storage(class c_raw_storage_buffer_iterator &) const
//{
//    mangled_ppc("?assign_storage@c_data_array_allocation_description@@UBAXAAVc_raw_storage_buffer_iterator@@@Z");
//};

//struct s_allocation_description_holder make_allocation_description(struct s_data_array *&, char const *, long, char const *, long, long, long)
//{
//    mangled_ppc("?make_allocation_description@@YA?AUs_allocation_description_holder@@AAPAUs_data_array@@PBDJ1JJJ@Z");
//};

//public: struct s_allocation_description * c_wrapped_array_no_init<struct s_allocation_description>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_allocation_description@@@@QAAPAUs_allocation_description@@XZ");
//};

//public: struct s_allocation_description * c_wrapped_array_no_init<struct s_allocation_description>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_allocation_description@@@@QAAPAUs_allocation_description@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_allocation_description>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_allocation_description@@@@QBAJXZ");
//};

//public: struct s_allocation_description & c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description>, struct s_allocation_description>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_allocation_description@@@@Us_allocation_description@@@@QAAAAUs_allocation_description@@J@Z");
//};

//public: struct s_allocation_description_holder * c_wrapped_array_no_init<struct s_allocation_description_holder>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@QAAPAUs_allocation_description_holder@@XZ");
//};

//public: struct s_allocation_description_holder * c_wrapped_array_no_init<struct s_allocation_description_holder>::end(void)
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@QAAPAUs_allocation_description_holder@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_allocation_description_holder>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@QBAJXZ");
//};

//public: struct s_allocation_description_holder & c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description_holder>, struct s_allocation_description_holder>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@Us_allocation_description_holder@@@@QAAAAUs_allocation_description_holder@@J@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description>, struct s_allocation_description>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_allocation_description@@@@Us_allocation_description@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_allocation_description> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_allocation_description@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_allocation_description@@@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description_holder>, struct s_allocation_description_holder>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@Us_allocation_description_holder@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_allocation_description_holder> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description_holder> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@@@QAAPAV?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description>, struct s_allocation_description>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_allocation_description@@@@Us_allocation_description@@@@QBAJXZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_allocation_description_holder>, struct s_allocation_description_holder>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@Us_allocation_description_holder@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_allocation_description> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_allocation_description@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_allocation_description@@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_allocation_description_holder> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_allocation_description_holder> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@@@QBAPBV?$c_wrapped_array_no_init@Us_allocation_description_holder@@@@XZ");
//};

//int std::accumulate<struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &)>(struct s_allocation_description *, struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &))
//{
//    mangled_ppc("??$accumulate@PAUs_allocation_description@@HP6AKKABU1@@Z@std@@YAHPAUs_allocation_description@@0HP6AKKABU1@@Z@Z");
//};

//int std::accumulate<struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &)>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &))
//{
//    mangled_ppc("??$accumulate@PAUs_allocation_description_holder@@HP6AKKABU1@@Z@std@@YAHPAUs_allocation_description_holder@@0HP6AKKABU1@@Z@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_buffer_allocation_description>(class c_buffer_allocation_description)
//{
//    mangled_ppc("??$make_into_description_holder@Vc_buffer_allocation_description@@@@YA?AUs_allocation_description_holder@@Vc_buffer_allocation_description@@@Z");
//};

//public: c_buffer_allocation_description::~c_buffer_allocation_description(void)
//{
//    mangled_ppc("??1c_buffer_allocation_description@@QAA@XZ");
//};

//public: s_allocation_description_holder::s_allocation_description_holder(void)
//{
//    mangled_ppc("??0s_allocation_description_holder@@QAA@XZ");
//};

//public: s_allocation_description_holder::s_allocation_description_holder(struct s_allocation_description_holder const &)
//{
//    mangled_ppc("??0s_allocation_description_holder@@QAA@ABU0@@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_empty_allocation_description>(class c_empty_allocation_description)
//{
//    mangled_ppc("??$make_into_description_holder@Vc_empty_allocation_description@@@@YA?AUs_allocation_description_holder@@Vc_empty_allocation_description@@@Z");
//};

//unsigned long get_total_unaligned_raw_size<unsigned long>(long)
//{
//    mangled_ppc("??$get_total_unaligned_raw_size@K@@YAKJ@Z");
//};

//public: unsigned long * c_raw_storage_buffer_iterator::get_array_elements<unsigned long>(long)
//{
//    mangled_ppc("??$get_array_elements@K@c_raw_storage_buffer_iterator@@QAAPAKJ@Z");
//};

//struct s_allocation_description_holder make_into_description_holder<class c_data_array_allocation_description>(class c_data_array_allocation_description)
//{
//    mangled_ppc("??$make_into_description_holder@Vc_data_array_allocation_description@@@@YA?AUs_allocation_description_holder@@Vc_data_array_allocation_description@@@Z");
//};

//struct s_allocation_description * std::_Checked_base<struct s_allocation_description *>(struct s_allocation_description *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_allocation_description@@@std@@YAPAUs_allocation_description@@AAPAU1@@Z");
//};

//int std::_Accumulate<struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &)>(struct s_allocation_description *, struct s_allocation_description *, int, unsigned long (*)(unsigned long, struct s_allocation_description const &))
//{
//    mangled_ppc("??$_Accumulate@PAUs_allocation_description@@HP6AKKABU1@@Z@std@@YAHPAUs_allocation_description@@0HP6AKKABU1@@Z@Z");
//};

//struct s_allocation_description_holder * std::_Checked_base<struct s_allocation_description_holder *>(struct s_allocation_description_holder *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_allocation_description_holder@@@std@@YAPAUs_allocation_description_holder@@AAPAU1@@Z");
//};

//int std::_Accumulate<struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &)>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, int, unsigned long (*)(unsigned long, struct s_allocation_description_holder const &))
//{
//    mangled_ppc("??$_Accumulate@PAUs_allocation_description_holder@@HP6AKKABU1@@Z@std@@YAHPAUs_allocation_description_holder@@0HP6AKKABU1@@Z@Z");
//};

//struct s_allocation_description * std::_Checked_base<struct s_allocation_description *>(struct s_allocation_description *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_allocation_description@@@std@@YAPAUs_allocation_description@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_allocation_description *>(struct s_allocation_description *, struct s_allocation_description *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_allocation_description@@@std@@YAXPAUs_allocation_description@@0PB_WI@Z");
//};

//void std::_Debug_pointer<unsigned long (unsigned long, struct s_allocation_description const &)>(unsigned long (*)(unsigned long, struct s_allocation_description const &), wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@$$A6AKKABUs_allocation_description@@@Z@std@@YAXP6AKKABUs_allocation_description@@@ZPB_WI@Z");
//};

//struct s_allocation_description_holder * std::_Checked_base<struct s_allocation_description_holder *>(struct s_allocation_description_holder *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_allocation_description_holder@@@std@@YAPAUs_allocation_description_holder@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_allocation_description_holder *>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_allocation_description_holder@@@std@@YAXPAUs_allocation_description_holder@@0PB_WI@Z");
//};

//void std::_Debug_pointer<unsigned long (unsigned long, struct s_allocation_description_holder const &)>(unsigned long (*)(unsigned long, struct s_allocation_description_holder const &), wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@$$A6AKKABUs_allocation_description_holder@@@Z@std@@YAXP6AKKABUs_allocation_description_holder@@@ZPB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_allocation_description *>(struct s_allocation_description *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_allocation_description@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_allocation_description@@@Z");
//};

//void std::_Debug_range2<struct s_allocation_description *>(struct s_allocation_description *, struct s_allocation_description *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_allocation_description@@@std@@YAXPAUs_allocation_description@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_allocation_description_holder *>(struct s_allocation_description_holder *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_allocation_description_holder@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_allocation_description_holder@@@Z");
//};

//void std::_Debug_range2<struct s_allocation_description_holder *>(struct s_allocation_description_holder *, struct s_allocation_description_holder *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_allocation_description_holder@@@std@@YAXPAUs_allocation_description_holder@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_allocation_description>(struct s_allocation_description *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_allocation_description@@@std@@YAXPAUs_allocation_description@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_allocation_description_holder>(struct s_allocation_description_holder *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_allocation_description_holder@@@std@@YAXPAUs_allocation_description_holder@@PB_WI@Z");
//};

