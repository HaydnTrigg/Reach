/* ---------- headers */

#include "omaha\scenario\scenario_placement.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_scenario_object_placement_iterator::c_scenario_object_placement_iterator(long);
// public: bool c_scenario_object_placement_iterator::valid(void) const;
// public: void c_scenario_object_placement_iterator::next(void);
// public: enum e_object_type c_scenario_object_placement_iterator::get_placement_object_type(void) const;
// public: long c_scenario_object_placement_iterator::get_placement_index(void) const;
// private: void c_scenario_object_placement_iterator::reset_object_type(enum e_object_type);
// private: struct s_tag_block const * c_scenario_object_placement_iterator::get_placement_block(void) const;
// public: struct s_tag_block * c_scenario_object_placement_iterator::get_palette_block(void) const;
// public: struct s_scenario_object const * c_scenario_object_placement_iterator::get_placement(void) const;
// public: struct s_scenario_object * c_scenario_object_placement_iterator::get_mutable_placement(void);
// public: struct s_tag_reference const * c_scenario_object_placement_iterator::get_placement_definition(void) const;
// public: c_scenario_object_placement_hierarchy::c_scenario_object_placement_hierarchy(long);
// public: class c_object_identifier const * c_scenario_object_placement_hierarchy::get_scenario_object_ultimate_parent_identifier(struct s_scenario_object const *) const;
// class c_static_string<256> describe_name_placement(long, struct s_object_name_placement const *);
// private: void c_scenario_object_placement_hierarchy::set_object_name_placement(long, enum e_object_type, long);
// private: void c_scenario_object_placement_hierarchy::set_sky_name_placement(long, long);
// private: static bool c_scenario_object_placement_hierarchy::name_placement_is_null(struct s_object_name_placement const *);
// private: struct scenario * c_scenario_object_placement_hierarchy::get_scenario(void) const;
// public: class c_object_identifier const * c_scenario_object_placement_hierarchy::get_object_identifier_from_name_placement(struct s_object_name_placement const *) const;
// public: struct s_object_name_placement const * c_scenario_object_placement_hierarchy::get_scenario_object_immediate_parent(struct s_scenario_object const *) const;
// public: struct s_object_name_placement const * c_scenario_object_placement_hierarchy::get_object_name_immediate_parent(struct s_object_name_placement const *) const;
// public: long c_scenario_object_placement_hierarchy::get_object_name_definition_index(struct s_object_name_placement const *) const;
// public: c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::c_static_sized_dynamic_array<struct s_object_name_placement, 2048>(void);
// public: void c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::resize(long);
// public: struct s_object_name_placement & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::operator[](long);
// public: struct s_object_name_placement const & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::operator[](long) const;
// public: void c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::set_all(struct s_object_name_placement const &);
// public: c_static_sized_dynamic_array<class c_object_identifier, 32>::c_static_sized_dynamic_array<class c_object_identifier, 32>(void);
// public: void c_static_sized_dynamic_array<class c_object_identifier, 32>::resize(long);
// public: class c_object_identifier & c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::operator[](long);
// public: class c_object_identifier const & c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::operator[](long) const;
// public: s_static_array<class c_object_identifier, 32>::s_static_array<class c_object_identifier, 32>(void);
// public: struct s_object_name_placement * c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::begin(void);
// public: struct s_object_name_placement const * c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::begin(void) const;
// public: struct s_object_name_placement * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::begin(void);
// public: struct s_object_name_placement * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::end(void);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> >::get_super_class(void);
// public: class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> >::get_super_class(void) const;
// public: static long s_static_array<struct s_object_name_placement, 2048>::get_count(void);
// public: class c_object_identifier * c_static_sized_dynamic_array<class c_object_identifier, 32>::begin(void);
// public: class c_object_identifier const * c_static_sized_dynamic_array<class c_object_identifier, 32>::begin(void) const;
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<class c_object_identifier, 32> * c_recursive_template_pattern<class c_static_sized_dynamic_array<class c_object_identifier, 32> >::get_super_class(void);
// public: class c_static_sized_dynamic_array<class c_object_identifier, 32> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<class c_object_identifier, 32> >::get_super_class(void) const;
// public: static long s_static_array<class c_object_identifier, 32>::get_count(void);
// public: struct s_object_name_placement * c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::end(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::count(void) const;
// public: struct s_object_name_placement * s_static_array<struct s_object_name_placement, 2048>::begin(void);
// public: struct s_object_name_placement const * s_static_array<struct s_object_name_placement, 2048>::begin(void) const;
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::count(void) const;
// public: class c_object_identifier * s_static_array<class c_object_identifier, 32>::begin(void);
// public: class c_object_identifier const * s_static_array<class c_object_identifier, 32>::begin(void) const;
// public: long c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::count(void) const;
// public: long c_static_sized_dynamic_array<class c_object_identifier, 32>::count(void) const;
// void std::fill<struct s_object_name_placement *, struct s_object_name_placement>(struct s_object_name_placement *, struct s_object_name_placement *, struct s_object_name_placement const &);
// struct s_object_name_placement * std::_Checked_base<struct s_object_name_placement *>(struct s_object_name_placement *&);
// void std::_Fill<struct s_object_name_placement *, struct s_object_name_placement>(struct s_object_name_placement *, struct s_object_name_placement *, struct s_object_name_placement const &);
// struct s_object_name_placement * std::_Checked_base<struct s_object_name_placement *>(struct s_object_name_placement *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_object_name_placement *>(struct s_object_name_placement *, struct s_object_name_placement *, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_object_name_placement *>(struct s_object_name_placement *const &);
// void std::_Debug_range2<struct s_object_name_placement *>(struct s_object_name_placement *, struct s_object_name_placement *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_object_name_placement>(struct s_object_name_placement *, wchar_t const *, unsigned int);

//public: c_scenario_object_placement_iterator::c_scenario_object_placement_iterator(long)
//{
//    mangled_ppc("??0c_scenario_object_placement_iterator@@QAA@J@Z");
//};

//public: bool c_scenario_object_placement_iterator::valid(void) const
//{
//    mangled_ppc("?valid@c_scenario_object_placement_iterator@@QBA_NXZ");
//};

//public: void c_scenario_object_placement_iterator::next(void)
//{
//    mangled_ppc("?next@c_scenario_object_placement_iterator@@QAAXXZ");
//};

//public: enum e_object_type c_scenario_object_placement_iterator::get_placement_object_type(void) const
//{
//    mangled_ppc("?get_placement_object_type@c_scenario_object_placement_iterator@@QBA?AW4e_object_type@@XZ");
//};

//public: long c_scenario_object_placement_iterator::get_placement_index(void) const
//{
//    mangled_ppc("?get_placement_index@c_scenario_object_placement_iterator@@QBAJXZ");
//};

//private: void c_scenario_object_placement_iterator::reset_object_type(enum e_object_type)
//{
//    mangled_ppc("?reset_object_type@c_scenario_object_placement_iterator@@AAAXW4e_object_type@@@Z");
//};

//private: struct s_tag_block const * c_scenario_object_placement_iterator::get_placement_block(void) const
//{
//    mangled_ppc("?get_placement_block@c_scenario_object_placement_iterator@@ABAPBUs_tag_block@@XZ");
//};

//public: struct s_tag_block * c_scenario_object_placement_iterator::get_palette_block(void) const
//{
//    mangled_ppc("?get_palette_block@c_scenario_object_placement_iterator@@QBAPAUs_tag_block@@XZ");
//};

//public: struct s_scenario_object const * c_scenario_object_placement_iterator::get_placement(void) const
//{
//    mangled_ppc("?get_placement@c_scenario_object_placement_iterator@@QBAPBUs_scenario_object@@XZ");
//};

//public: struct s_scenario_object * c_scenario_object_placement_iterator::get_mutable_placement(void)
//{
//    mangled_ppc("?get_mutable_placement@c_scenario_object_placement_iterator@@QAAPAUs_scenario_object@@XZ");
//};

//public: struct s_tag_reference const * c_scenario_object_placement_iterator::get_placement_definition(void) const
//{
//    mangled_ppc("?get_placement_definition@c_scenario_object_placement_iterator@@QBAPBUs_tag_reference@@XZ");
//};

//public: c_scenario_object_placement_hierarchy::c_scenario_object_placement_hierarchy(long)
//{
//    mangled_ppc("??0c_scenario_object_placement_hierarchy@@QAA@J@Z");
//};

//public: class c_object_identifier const * c_scenario_object_placement_hierarchy::get_scenario_object_ultimate_parent_identifier(struct s_scenario_object const *) const
//{
//    mangled_ppc("?get_scenario_object_ultimate_parent_identifier@c_scenario_object_placement_hierarchy@@QBAPBVc_object_identifier@@PBUs_scenario_object@@@Z");
//};

//class c_static_string<256> describe_name_placement(long, struct s_object_name_placement const *)
//{
//    mangled_ppc("?describe_name_placement@@YA?AV?$c_static_string@$0BAA@@@JPBUs_object_name_placement@@@Z");
//};

//private: void c_scenario_object_placement_hierarchy::set_object_name_placement(long, enum e_object_type, long)
//{
//    mangled_ppc("?set_object_name_placement@c_scenario_object_placement_hierarchy@@AAAXJW4e_object_type@@J@Z");
//};

//private: void c_scenario_object_placement_hierarchy::set_sky_name_placement(long, long)
//{
//    mangled_ppc("?set_sky_name_placement@c_scenario_object_placement_hierarchy@@AAAXJJ@Z");
//};

//private: static bool c_scenario_object_placement_hierarchy::name_placement_is_null(struct s_object_name_placement const *)
//{
//    mangled_ppc("?name_placement_is_null@c_scenario_object_placement_hierarchy@@CA_NPBUs_object_name_placement@@@Z");
//};

//private: struct scenario * c_scenario_object_placement_hierarchy::get_scenario(void) const
//{
//    mangled_ppc("?get_scenario@c_scenario_object_placement_hierarchy@@ABAPAUscenario@@XZ");
//};

//public: class c_object_identifier const * c_scenario_object_placement_hierarchy::get_object_identifier_from_name_placement(struct s_object_name_placement const *) const
//{
//    mangled_ppc("?get_object_identifier_from_name_placement@c_scenario_object_placement_hierarchy@@QBAPBVc_object_identifier@@PBUs_object_name_placement@@@Z");
//};

//public: struct s_object_name_placement const * c_scenario_object_placement_hierarchy::get_scenario_object_immediate_parent(struct s_scenario_object const *) const
//{
//    mangled_ppc("?get_scenario_object_immediate_parent@c_scenario_object_placement_hierarchy@@QBAPBUs_object_name_placement@@PBUs_scenario_object@@@Z");
//};

//public: struct s_object_name_placement const * c_scenario_object_placement_hierarchy::get_object_name_immediate_parent(struct s_object_name_placement const *) const
//{
//    mangled_ppc("?get_object_name_immediate_parent@c_scenario_object_placement_hierarchy@@QBAPBUs_object_name_placement@@PBU2@@Z");
//};

//public: long c_scenario_object_placement_hierarchy::get_object_name_definition_index(struct s_object_name_placement const *) const
//{
//    mangled_ppc("?get_object_name_definition_index@c_scenario_object_placement_hierarchy@@QBAJPBUs_object_name_placement@@@Z");
//};

//public: c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::c_static_sized_dynamic_array<struct s_object_name_placement, 2048>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@QAA@XZ");
//};

//public: void c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@QAAXJ@Z");
//};

//public: struct s_object_name_placement & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QAAAAUs_object_name_placement@@J@Z");
//};

//public: struct s_object_name_placement const & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QBAABUs_object_name_placement@@J@Z");
//};

//public: void c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::set_all(struct s_object_name_placement const &)
//{
//    mangled_ppc("?set_all@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QAAXABUs_object_name_placement@@@Z");
//};

//public: c_static_sized_dynamic_array<class c_object_identifier, 32>::c_static_sized_dynamic_array<class c_object_identifier, 32>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@QAA@XZ");
//};

//public: void c_static_sized_dynamic_array<class c_object_identifier, 32>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@QAAXJ@Z");
//};

//public: class c_object_identifier & c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@Vc_object_identifier@@@@QAAAAVc_object_identifier@@J@Z");
//};

//public: class c_object_identifier const & c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@Vc_object_identifier@@@@QBAABVc_object_identifier@@J@Z");
//};

//public: s_static_array<class c_object_identifier, 32>::s_static_array<class c_object_identifier, 32>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_object_identifier@@$0CA@@@QAA@XZ");
//};

//public: struct s_object_name_placement * c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@QAAPAUs_object_name_placement@@XZ");
//};

//public: struct s_object_name_placement const * c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@QBAPBUs_object_name_placement@@XZ");
//};

//public: struct s_object_name_placement * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QAAPAUs_object_name_placement@@XZ");
//};

//public: struct s_object_name_placement * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::end(void)
//{
//    mangled_ppc("?end@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QAAPAUs_object_name_placement@@XZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@XZ");
//};

//public: static long s_static_array<struct s_object_name_placement, 2048>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_object_name_placement@@$0IAA@@@SAJXZ");
//};

//public: class c_object_identifier * c_static_sized_dynamic_array<class c_object_identifier, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@QAAPAVc_object_identifier@@XZ");
//};

//public: class c_object_identifier const * c_static_sized_dynamic_array<class c_object_identifier, 32>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@QBAPBVc_object_identifier@@XZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@Vc_object_identifier@@@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<class c_object_identifier, 32> * c_recursive_template_pattern<class c_static_sized_dynamic_array<class c_object_identifier, 32> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@@@QAAPAV?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@XZ");
//};

//public: class c_static_sized_dynamic_array<class c_object_identifier, 32> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<class c_object_identifier, 32> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@@@QBAPBV?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@XZ");
//};

//public: static long s_static_array<class c_object_identifier, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_object_identifier@@$0CA@@@SAJXZ");
//};

//public: struct s_object_name_placement * c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::end(void)
//{
//    mangled_ppc("?end@?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@QAAPAUs_object_name_placement@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_object_name_placement, 2048>, struct s_object_name_placement>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@Us_object_name_placement@@@@QBAJXZ");
//};

//public: struct s_object_name_placement * s_static_array<struct s_object_name_placement, 2048>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_object_name_placement@@$0IAA@@@QAAPAUs_object_name_placement@@XZ");
//};

//public: struct s_object_name_placement const * s_static_array<struct s_object_name_placement, 2048>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_object_name_placement@@$0IAA@@@QBAPBUs_object_name_placement@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<class c_object_identifier, 32>, class c_object_identifier>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@Vc_object_identifier@@@@QBAJXZ");
//};

//public: class c_object_identifier * s_static_array<class c_object_identifier, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Vc_object_identifier@@$0CA@@@QAAPAVc_object_identifier@@XZ");
//};

//public: class c_object_identifier const * s_static_array<class c_object_identifier, 32>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Vc_object_identifier@@$0CA@@@QBAPBVc_object_identifier@@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_object_name_placement, 2048>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_object_name_placement@@$0IAA@@@QBAJXZ");
//};

//public: long c_static_sized_dynamic_array<class c_object_identifier, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Vc_object_identifier@@$0CA@@@QBAJXZ");
//};

//void std::fill<struct s_object_name_placement *, struct s_object_name_placement>(struct s_object_name_placement *, struct s_object_name_placement *, struct s_object_name_placement const &)
//{
//    mangled_ppc("??$fill@PAUs_object_name_placement@@U1@@std@@YAXPAUs_object_name_placement@@0ABU1@@Z");
//};

//struct s_object_name_placement * std::_Checked_base<struct s_object_name_placement *>(struct s_object_name_placement *&)
//{
//    mangled_ppc("??$_Checked_base@PAUs_object_name_placement@@@std@@YAPAUs_object_name_placement@@AAPAU1@@Z");
//};

//void std::_Fill<struct s_object_name_placement *, struct s_object_name_placement>(struct s_object_name_placement *, struct s_object_name_placement *, struct s_object_name_placement const &)
//{
//    mangled_ppc("??$_Fill@PAUs_object_name_placement@@U1@@std@@YAXPAUs_object_name_placement@@0ABU1@@Z");
//};

//struct s_object_name_placement * std::_Checked_base<struct s_object_name_placement *>(struct s_object_name_placement *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAUs_object_name_placement@@@std@@YAPAUs_object_name_placement@@AAPAU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_object_name_placement *>(struct s_object_name_placement *, struct s_object_name_placement *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAUs_object_name_placement@@@std@@YAXPAUs_object_name_placement@@0PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_object_name_placement *>(struct s_object_name_placement *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAUs_object_name_placement@@@std@@YA?AUrandom_access_iterator_tag@0@ABQAUs_object_name_placement@@@Z");
//};

//void std::_Debug_range2<struct s_object_name_placement *>(struct s_object_name_placement *, struct s_object_name_placement *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAUs_object_name_placement@@@std@@YAXPAUs_object_name_placement@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_object_name_placement>(struct s_object_name_placement *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_object_name_placement@@@std@@YAXPAUs_object_name_placement@@PB_WI@Z");
//};

