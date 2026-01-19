/* ---------- headers */

#include "interfacelib\roster_player_options_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_roster_player_options_component::k_max_item_count; // "?k_max_item_count@c_roster_player_options_component@@0IB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_roster_player_options_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_roster_player_options_component@@@@0Us_cui_component_description@@B"
// public: static enum c_roster_player_options_component::e_option const c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@2W4e_option@c_roster_player_options_component@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_roster_player_options_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_roster_player_options_component@@@@0Vc_cui_object_property_table@@A"

// public: c_roster_player_options_component::c_roster_player_options_component(void);
// merged_84B66068;
// public: virtual c_roster_player_options_component::~c_roster_player_options_component(void);
// protected: virtual void c_roster_player_options_component::do_update(class c_cui_update_context *);
// private: void c_roster_player_options_component::update_items(void);
// private: void c_roster_player_options_component::add_item(bool, long, bool);
// public: c_roster_player_options_component::s_item::s_item(long, bool);
// private: void c_roster_player_options_component::get_option_masks(enum e_controller_index, class c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> *, class c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> *);
// private: void c_roster_player_options_component::update_player_joinable(void);
// public: void c_roster_player_options_component::set_player_identifier(struct s_player_identifier const &);
// public: void c_roster_player_options_component::set_player_configuration(struct s_player_configuration const *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_roster_player_options_component>::get_instance(void);
// public: c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>(void);
// public: c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::~c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>(void);
// public: void c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::push_back(struct c_roster_player_options_component::s_item const &);
// public: void c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::clear(void);
// class c_cui_component * cui_component_create<class c_roster_player_options_component>(void);
// class c_cui_component * cui_component_clone<class c_roster_player_options_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_roster_player_options_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_roster_player_options_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_roster_player_options_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_roster_player_options_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, long, long & (c_roster_player_options_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_player_options_component::get_item_count(void) const;
// public: unsigned int c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::size(void) const;
// long cui_object_component_get_property_element_count<class c_roster_player_options_component, long & (c_roster_player_options_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_roster_player_options_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_roster_player_options_component::get_item_name(long) const;
// public: struct c_roster_player_options_component::s_item const & c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::operator[](unsigned int) const;
// public: struct c_roster_player_options_component::s_item const * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::data(void) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_player_options_component, bool, long & (c_roster_player_options_component::get_item_count::*)(void), bool & (c_roster_player_options_component::is_item_enabled::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_player_options_component::is_item_enabled(long) const;
// ??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: struct s_player_identifier c_roster_player_options_component::get_player_identifier(void) const;
// bool cui_set_scalar_property_by_const_reference<class c_roster_player_options_component, struct s_player_identifier, void & (c_roster_player_options_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, struct s_player_configuration const *, struct s_player_configuration const *& (c_roster_player_options_component::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: struct s_player_configuration const * c_roster_player_options_component::get_player_configuration(void) const;
// bool cui_set_scalar_property_by_value<class c_roster_player_options_component, struct s_player_configuration const *, void & (c_roster_player_options_component::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, bool, bool & (c_roster_player_options_component::is_player_from_active_roster::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_player_options_component::is_player_from_active_roster(void) const;
// bool cui_set_scalar_property_by_value<class c_roster_player_options_component, bool, void & (c_roster_player_options_component::set_player_from_active_roster::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_roster_player_options_component::set_player_from_active_roster(bool);
// bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, bool, bool & (c_roster_player_options_component::is_player_joinable::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_player_options_component::is_player_joinable(void) const;
// bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, long, long & (c_roster_player_options_component::get_player_system_link_available_squad_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_player_options_component::get_player_system_link_available_squad_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, long, long & (c_roster_player_options_component::get_network_active_roster_absolute_player_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_player_options_component::get_network_active_roster_absolute_player_index(void) const;
// public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::set_all(void);
// public: bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum c_roster_player_options_component::e_option) const;
// public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::set(enum c_roster_player_options_component::e_option, bool);
// public: class c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> & c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> const &);
// public: c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>(void);
// public: c_roster_player_options_component::c_roster_player_options_component(class c_roster_player_options_component const &);
// public: bool c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::empty(void) const;
// public: bool c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::full(void) const;
// private: struct c_roster_player_options_component::s_item * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::get(unsigned int);
// public: struct c_roster_player_options_component::s_item * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::data(void);
// public: c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>(class c_cui_static_vector<struct c_roster_player_options_component::s_item, 12> const &);
// public: void c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::pop_back(void);
// public: bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static class c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_from_range(enum c_roster_player_options_component::e_option, enum c_roster_player_options_component::e_option);
// public: static bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum c_roster_player_options_component::e_option);
// public: bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum c_roster_player_options_component::e_option);
// public: struct c_roster_player_options_component::s_item const * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::begin(void) const;
// public: struct c_roster_player_options_component::s_item const * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::end(void) const;
// public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// private: static unsigned short c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_roster_player_options_component::e_option);
// private: static unsigned short c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// void g_roster_option_enum_table::`dynamic atexit destructor'(void);

//public: c_roster_player_options_component::c_roster_player_options_component(void)
//{
//    mangled_ppc("??0c_roster_player_options_component@@QAA@XZ");
//};

//merged_84B66068
//{
//    mangled_ppc("merged_84B66068");
//};

//public: virtual c_roster_player_options_component::~c_roster_player_options_component(void)
//{
//    mangled_ppc("??1c_roster_player_options_component@@UAA@XZ");
//};

//protected: virtual void c_roster_player_options_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_roster_player_options_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_roster_player_options_component::update_items(void)
//{
//    mangled_ppc("?update_items@c_roster_player_options_component@@AAAXXZ");
//};

//private: void c_roster_player_options_component::add_item(bool, long, bool)
//{
//    mangled_ppc("?add_item@c_roster_player_options_component@@AAAX_NJ0@Z");
//};

//public: c_roster_player_options_component::s_item::s_item(long, bool)
//{
//    mangled_ppc("??0s_item@c_roster_player_options_component@@QAA@J_N@Z");
//};

//private: void c_roster_player_options_component::get_option_masks(enum e_controller_index, class c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> *, class c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?get_option_masks@c_roster_player_options_component@@AAAXW4e_controller_index@@PAV?$c_flags@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@1@Z");
//};

//private: void c_roster_player_options_component::update_player_joinable(void)
//{
//    mangled_ppc("?update_player_joinable@c_roster_player_options_component@@AAAXXZ");
//};

//public: void c_roster_player_options_component::set_player_identifier(struct s_player_identifier const &)
//{
//    mangled_ppc("?set_player_identifier@c_roster_player_options_component@@QAAXABUs_player_identifier@@@Z");
//};

//public: void c_roster_player_options_component::set_player_configuration(struct s_player_configuration const *)
//{
//    mangled_ppc("?set_player_configuration@c_roster_player_options_component@@QAAXPBUs_player_configuration@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_roster_player_options_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_roster_player_options_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::~c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAA@XZ");
//};

//public: void c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::push_back(struct c_roster_player_options_component::s_item const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAAXABUs_item@c_roster_player_options_component@@@Z");
//};

//public: void c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAAXXZ");
//};

//class c_cui_component * cui_component_create<class c_roster_player_options_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_roster_player_options_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_roster_player_options_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_roster_player_options_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_roster_player_options_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_roster_player_options_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_roster_player_options_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_roster_player_options_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_roster_player_options_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_roster_player_options_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_roster_player_options_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, long, long & (c_roster_player_options_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_player_options_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_roster_player_options_component@@QBAJXZ");
//};

//public: unsigned int c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBAIXZ");
//};

//long cui_object_component_get_property_element_count<class c_roster_player_options_component, long & (c_roster_player_options_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_roster_player_options_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_player_options_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_player_options_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_roster_player_options_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_roster_player_options_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: struct c_roster_player_options_component::s_item const & c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBAABUs_item@c_roster_player_options_component@@I@Z");
//};

//public: struct c_roster_player_options_component::s_item const * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBAPBUs_item@c_roster_player_options_component@@XZ");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_player_options_component, bool, long & (c_roster_player_options_component::get_item_count::*)(void), bool & (c_roster_player_options_component::is_item_enabled::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_player_options_component@@_N$1?get_item_count@1@QBAJXZ$1?is_item_enabled@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_player_options_component::is_item_enabled(long) const
//{
//    mangled_ppc("?is_item_enabled@c_roster_player_options_component@@QBA_NJ@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_player_identifier c_roster_player_options_component::get_player_identifier(void) const
//{
//    mangled_ppc("?get_player_identifier@c_roster_player_options_component@@QBA?AUs_player_identifier@@XZ");
//};

//bool cui_set_scalar_property_by_const_reference<class c_roster_player_options_component, struct s_player_identifier, void & (c_roster_player_options_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_const_reference@Vc_roster_player_options_component@@Us_player_identifier@@$1?set_player_identifier@1@QAAXABU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, struct s_player_configuration const *, struct s_player_configuration const *& (c_roster_player_options_component::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@PBUs_player_configuration@@$1?get_player_configuration@1@QBAPBU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_player_configuration const * c_roster_player_options_component::get_player_configuration(void) const
//{
//    mangled_ppc("?get_player_configuration@c_roster_player_options_component@@QBAPBUs_player_configuration@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_roster_player_options_component, struct s_player_configuration const *, void & (c_roster_player_options_component::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_roster_player_options_component@@PBUs_player_configuration@@$1?set_player_configuration@1@QAAXPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, bool, bool & (c_roster_player_options_component::is_player_from_active_roster::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@_N$1?is_player_from_active_roster@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_player_options_component::is_player_from_active_roster(void) const
//{
//    mangled_ppc("?is_player_from_active_roster@c_roster_player_options_component@@QBA_NXZ");
//};

//bool cui_set_scalar_property_by_value<class c_roster_player_options_component, bool, void & (c_roster_player_options_component::set_player_from_active_roster::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_roster_player_options_component@@_N$1?set_player_from_active_roster@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_roster_player_options_component::set_player_from_active_roster(bool)
//{
//    mangled_ppc("?set_player_from_active_roster@c_roster_player_options_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, bool, bool & (c_roster_player_options_component::is_player_joinable::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@_N$1?is_player_joinable@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_player_options_component::is_player_joinable(void) const
//{
//    mangled_ppc("?is_player_joinable@c_roster_player_options_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, long, long & (c_roster_player_options_component::get_player_system_link_available_squad_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@J$1?get_player_system_link_available_squad_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_player_options_component::get_player_system_link_available_squad_index(void) const
//{
//    mangled_ppc("?get_player_system_link_available_squad_index@c_roster_player_options_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_player_options_component, long, long & (c_roster_player_options_component::get_network_active_roster_absolute_player_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_player_options_component@@J$1?get_network_active_roster_absolute_player_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_player_options_component::get_network_active_roster_absolute_player_index(void) const
//{
//    mangled_ppc("?get_network_active_roster_absolute_player_index@c_roster_player_options_component@@QBAJXZ");
//};

//public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum c_roster_player_options_component::e_option) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QBA_NW4e_option@c_roster_player_options_component@@@Z");
//};

//public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::set(enum c_roster_player_options_component::e_option, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QAAXW4e_option@c_roster_player_options_component@@_N@Z");
//};

//public: class c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> & c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::c_flags<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_roster_player_options_component::c_roster_player_options_component(class c_roster_player_options_component const &)
//{
//    mangled_ppc("??0c_roster_player_options_component@@QAA@ABV0@@Z");
//};

//public: bool c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBA_NXZ");
//};

//public: bool c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBA_NXZ");
//};

//private: struct c_roster_player_options_component::s_item * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@AAAPAUs_item@c_roster_player_options_component@@I@Z");
//};

//public: struct c_roster_player_options_component::s_item * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAAPAUs_item@c_roster_player_options_component@@XZ");
//};

//public: c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>(class c_cui_static_vector<struct c_roster_player_options_component::s_item, 12> const &)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAA@ABV0@@Z");
//};

//public: void c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static class c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver> c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_from_range(enum c_roster_player_options_component::e_option, enum c_roster_player_options_component::e_option)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@SA?AV1@W4e_option@c_roster_player_options_component@@0@Z");
//};

//public: static bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum c_roster_player_options_component::e_option)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@SA_NW4e_option@c_roster_player_options_component@@@Z");
//};

//public: bool c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum c_roster_player_options_component::e_option)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_option@c_roster_player_options_component@@@Z");
//};

//public: struct c_roster_player_options_component::s_item const * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBAPBUs_item@c_roster_player_options_component@@XZ");
//};

//public: struct c_roster_player_options_component::s_item const * c_cui_static_vector<struct c_roster_player_options_component::s_item, 12>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_item@c_roster_player_options_component@@$0M@@@QBAPBUs_item@c_roster_player_options_component@@XZ");
//};

//public: void c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//private: static unsigned short c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_roster_player_options_component::e_option)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_option@c_roster_player_options_component@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum c_roster_player_options_component::e_option, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_option@c_roster_player_options_component@@G$0M@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//void g_roster_option_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_roster_option_enum_table@@YAXXZ");
//};

