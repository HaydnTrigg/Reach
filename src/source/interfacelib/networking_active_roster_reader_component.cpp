/* ---------- headers */

#include "interfacelib\networking_active_roster_reader_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_networking_active_roster_reader_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_networking_active_roster_reader_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_networking_active_roster_reader_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_networking_active_roster_reader_component@@@@0Vc_cui_object_property_table@@A"

// public: c_networking_active_roster_reader_component::c_networking_active_roster_reader_component(void);
// merged_84B0A6C8;
// public: virtual c_networking_active_roster_reader_component::~c_networking_active_roster_reader_component(void);
// protected: virtual void c_networking_active_roster_reader_component::do_update(class c_cui_update_context *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_networking_active_roster_reader_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_networking_active_roster_reader_component>(void);
// class c_cui_component * cui_component_clone<class c_networking_active_roster_reader_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_networking_active_roster_reader_component::get_controller_index(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_mode@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_roster_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_network_active_roster_mode, char, 0, 3, struct s_default_enum_string_resolver> c_networking_active_roster_reader_component::get_roster_mode(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_active_roster_reader_component, bool, bool & (c_networking_active_roster_reader_component::is_incoming_join_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::is_incoming_join_in_progress(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_incoming_join_state::*)(class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::get_incoming_join_state(class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, long, bool & (c_networking_active_roster_reader_component::get_incoming_join_wait_seconds::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::get_incoming_join_wait_seconds(long *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_incoming_join_failure_type::*)(class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::get_incoming_join_failure_type(class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_active_roster_reader_component, bool, bool & (c_networking_active_roster_reader_component::is_outgoing_join_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::is_outgoing_join_in_progress(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_outgoing_join_state::*)(class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::get_outgoing_join_state(class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_outgoing_join_failure_type::*)(class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_active_roster_reader_component::get_outgoing_join_failure_type(class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *) const;
// public: c_networking_active_roster_reader_component::c_networking_active_roster_reader_component(class c_networking_active_roster_reader_component const &);
// void cui_property_value_set<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> const &);
// void g_network_active_roster_incoming_join_state_enum_table::`dynamic atexit destructor'(void);
// void g_network_active_roster_incoming_join_failure_type_enum_table::`dynamic atexit destructor'(void);
// void g_network_active_roster_outgoing_join_state_enum_table::`dynamic atexit destructor'(void);
// void g_network_active_roster_outgoing_join_failure_type_enum_table::`dynamic atexit destructor'(void);

//public: c_networking_active_roster_reader_component::c_networking_active_roster_reader_component(void)
//{
//    mangled_ppc("??0c_networking_active_roster_reader_component@@QAA@XZ");
//};

//merged_84B0A6C8
//{
//    mangled_ppc("merged_84B0A6C8");
//};

//public: virtual c_networking_active_roster_reader_component::~c_networking_active_roster_reader_component(void)
//{
//    mangled_ppc("??1c_networking_active_roster_reader_component@@UAA@XZ");
//};

//protected: virtual void c_networking_active_roster_reader_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_networking_active_roster_reader_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_networking_active_roster_reader_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_networking_active_roster_reader_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_networking_active_roster_reader_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_networking_active_roster_reader_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_networking_active_roster_reader_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_networking_active_roster_reader_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_networking_active_roster_reader_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_networking_active_roster_reader_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_mode@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_roster_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_mode@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_roster_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_network_active_roster_mode, char, 0, 3, struct s_default_enum_string_resolver> c_networking_active_roster_reader_component::get_roster_mode(void) const
//{
//    mangled_ppc("?get_roster_mode@c_networking_active_roster_reader_component@@QBA?AV?$c_enum@W4e_network_active_roster_mode@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_active_roster_reader_component, bool, bool & (c_networking_active_roster_reader_component::is_incoming_join_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@_N$1?is_incoming_join_in_progress@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::is_incoming_join_in_progress(void) const
//{
//    mangled_ppc("?is_incoming_join_in_progress@c_networking_active_roster_reader_component@@QBA_NXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_incoming_join_state::*)(class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_incoming_join_state@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::get_incoming_join_state(class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_incoming_join_state@c_networking_active_roster_reader_component@@QBA_NPAV?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, long, bool & (c_networking_active_roster_reader_component::get_incoming_join_wait_seconds::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_active_roster_reader_component@@J$1?get_incoming_join_wait_seconds@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::get_incoming_join_wait_seconds(long *) const
//{
//    mangled_ppc("?get_incoming_join_wait_seconds@c_networking_active_roster_reader_component@@QBA_NPAJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_incoming_join_failure_type::*)(class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_incoming_join_failure_type@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::get_incoming_join_failure_type(class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_incoming_join_failure_type@c_networking_active_roster_reader_component@@QBA_NPAV?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_active_roster_reader_component, bool, bool & (c_networking_active_roster_reader_component::is_outgoing_join_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_active_roster_reader_component@@_N$1?is_outgoing_join_in_progress@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::is_outgoing_join_in_progress(void) const
//{
//    mangled_ppc("?is_outgoing_join_in_progress@c_networking_active_roster_reader_component@@QBA_NXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_outgoing_join_state::*)(class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@$1?get_outgoing_join_state@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::get_outgoing_join_state(class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_outgoing_join_state@c_networking_active_roster_reader_component@@QBA_NPAV?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_active_roster_reader_component, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>, bool & (c_networking_active_roster_reader_component::get_outgoing_join_failure_type::*)(class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_active_roster_reader_component@@V?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@$1?get_outgoing_join_failure_type@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_active_roster_reader_component::get_outgoing_join_failure_type(class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_outgoing_join_failure_type@c_networking_active_roster_reader_component@@QBA_NPAV?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_networking_active_roster_reader_component::c_networking_active_roster_reader_component(class c_networking_active_roster_reader_component const &)
//{
//    mangled_ppc("??0c_networking_active_roster_reader_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//void g_network_active_roster_incoming_join_state_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_network_active_roster_incoming_join_state_enum_table@@YAXXZ");
//};

//void g_network_active_roster_incoming_join_failure_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_network_active_roster_incoming_join_failure_type_enum_table@@YAXXZ");
//};

//void g_network_active_roster_outgoing_join_state_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_network_active_roster_outgoing_join_state_enum_table@@YAXXZ");
//};

//void g_network_active_roster_outgoing_join_failure_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_network_active_roster_outgoing_join_failure_type_enum_table@@YAXXZ");
//};

