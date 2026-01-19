/* ---------- headers */

#include "omaha\main\main_predict.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum c_ui_predicted_resource::e_urgency const c_flags_no_init<enum c_ui_predicted_resource::e_urgency, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_urgency@c_ui_predicted_resource@@E$01Us_default_enum_string_resolver@@@@2W4e_urgency@c_ui_predicted_resource@@B"
// public: static long const c_big_flags_typed_no_init<long, 65535>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0PPPP@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 65535>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0PPPP@@@2JB"
// bool enable_tag_resource_prediction; // "?enable_tag_resource_prediction@@3_NA"
// bool enable_first_person_prediction; // "?enable_first_person_prediction@@3_NA"
// bool enable_structure_prediction; // "?enable_structure_prediction@@3_NA"
// bool enable_entire_pvs_prediction; // "?enable_entire_pvs_prediction@@3_NA"
// bool enable_cluster_objects_prediction; // "?enable_cluster_objects_prediction@@3_NA"
// bool g_cinematic_prediction_enable; // "?g_cinematic_prediction_enable@@3_NA"
// char const **k_priority_descriptions; // "?k_priority_descriptions@@3PAPBDA"
// long amortized_prediction_object_batch_size; // "?amortized_prediction_object_batch_size@@3JA"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 65535>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0PPPP@@@QAAXXZ@4JC"
// bool g_show_atomic_groupings; // "?g_show_atomic_groupings@@3_NA"
// bool enable_amortized_prediction; // "?enable_amortized_prediction@@3_NA"
// class c_main_render_object_collector g_object_collector; // "?g_object_collector@@3Vc_main_render_object_collector@@A"
// class s_static_array<struct c_status_line, 14> g_prediction_atomic_groupings; // "?g_prediction_atomic_groupings@@3V?$s_static_array@Uc_status_line@@$0O@@@A"
// class s_static_array<struct c_status_line, 14> g_prediction_object_groupings; // "?g_prediction_object_groupings@@3V?$s_static_array@Uc_status_line@@$0O@@@A"

// void predict_structure_cluster_resources(class c_tag_resource_collector *, long, struct s_cluster_reference const &);
// public: c_main_render_object_collector::c_main_render_object_collector(void);
// public: void c_main_render_object_collector::clear_objects(void);
// public: void c_main_render_object_collector::restart_object_predictions(void);
// public: unsigned long c_main_render_object_collector::get_visit_count(void) const;
// public: unsigned long c_main_render_object_collector::get_unique_count(void) const;
// public: void c_main_render_object_collector::visit_cluster(struct s_cluster_reference const &);
// public: bool c_main_render_object_collector::visit_objects(class c_tag_resource_collector *);
// public: bool c_main_render_object_collector::visit_objects_but_not_weapons(class c_tag_resource_collector *);
// public: bool c_main_render_object_collector::visit_weapons(class c_tag_resource_collector *);
// public: void c_main_render_object_collector::visit_object_attachments(class c_tag_resource_collector *);
// private: void c_main_render_object_collector::add_object(long);
// public: c_main_render_demand_callback::c_main_render_demand_callback(long, long, long, bool);
// public: c_tag_resource_demand_callback::c_tag_resource_demand_callback(void);
// public: virtual unsigned long c_main_render_demand_callback::get_no_fail_priority_count(void);
// public: virtual unsigned long c_main_render_demand_callback::get_cutoff_priority_count(void);
// public: virtual unsigned long c_main_render_demand_callback::get_maximum_priority_count(void);
// public: virtual char const * c_main_render_demand_callback::describe_priority(long);
// void predict_immediate_area_structure(long, class c_tag_resource_collector *, struct s_cluster_reference &, long);
// void main_predict_reset_for_map_reload(void);
// public: virtual enum e_demand_priority_update_type c_main_render_demand_callback::demand_callback(long, class c_tag_resource_demand_collector *);
// public: c_pvs_cluster_iterator::c_pvs_cluster_iterator(long, long, struct s_cluster_reference const &);
// public: bool c_pvs_cluster_iterator::next(void);
// public: struct s_cluster_reference c_pvs_cluster_iterator::get_cluster_reference(void) const;
// public: unsigned long c_pvs_cluster_iterator::get_bsp_mask(void) const;
// private: bool c_pvs_cluster_iterator::go_to_next_cluster(void);
// private: bool c_pvs_cluster_iterator::valid_cluster_reference(void) const;
// private: bool c_pvs_cluster_iterator::visible_cluster_reference(void) const;
// public: c_potential_resource_collector::c_potential_resource_collector(class c_tag_resource_demand_collector *);
// public: virtual long c_potential_resource_collector::find_or_add_resource_molecule(long, long, long);
// public: virtual bool c_potential_resource_collector::predict_molecule(long);
// public: virtual void c_potential_resource_collector::begin_prediction_molecule(long);
// public: virtual void c_potential_resource_collector::end_prediction_molecule(void);
// public: virtual void c_potential_resource_collector::add_resource(struct s_tag_resource const *);
// public: virtual void c_potential_resource_collector::add_tag(long);
// public: c_tag_resource_collector::c_tag_resource_collector(void);
// public: c_simple_tag_resource_predictor::c_simple_tag_resource_predictor(bool, long, class c_tag_resource_demand_collector *);
// public: c_simple_tag_resource_predictor::~c_simple_tag_resource_predictor(void);
// public: virtual long c_simple_tag_resource_predictor::find_or_add_resource_molecule(long, long, long);
// public: virtual bool c_simple_tag_resource_predictor::predict_molecule(long);
// public: virtual void c_simple_tag_resource_predictor::begin_prediction_molecule(long);
// public: virtual void c_simple_tag_resource_predictor::end_prediction_molecule(void);
// public: virtual void c_simple_tag_resource_predictor::add_resource(struct s_tag_resource const *);
// public: virtual void c_simple_tag_resource_predictor::add_tag(long);
// public: c_main_render_user_interface_collector::c_main_render_user_interface_collector(class c_tag_resource_demand_collector *);
// public: virtual void c_main_render_user_interface_collector::predict_bitmap(long, long);
// public: c_user_interface_bitmap_collector::c_user_interface_bitmap_collector(void);
// void main_render_predict_initialize(void);
// void main_render_predict_tag_resources(void);
// void main_predict_potentially_active_tags(long, long, class c_scenario_resource_registry *, class c_tag_resource_demand_collector *);
// public: static long s_static_array<unsigned long *, 16>::get_count(void);
// public: c_static_sized_dynamic_array<long, 2048>::c_static_sized_dynamic_array<long, 2048>(void);
// public: void c_static_sized_dynamic_array<long, 2048>::clear(void);
// public: long c_static_sized_dynamic_array<long, 2048>::count(void) const;
// public: long & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::add_element(void);
// public: long & c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::operator[](long);
// public: struct c_status_line * s_static_array<struct c_status_line, 14>::get_elements(void);
// public: long * c_static_sized_dynamic_array<long, 2048>::begin(void);
// public: void c_static_sized_dynamic_array<long, 2048>::resize(long);
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::new_element_index(void);
// public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::get_element(long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<long, 2048> * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 2048> >::get_super_class(void);
// public: static long s_static_array<long, 2048>::get_count(void);
// public: long * s_static_array<long, 2048>::begin(void);
// public: long c_static_sized_dynamic_array<long, 2048>::new_element_index(void);
// private: class c_static_sized_dynamic_array<long, 2048> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::get_super_class(void);
// public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::count(void) const;
// public: class c_static_sized_dynamic_array<long, 2048> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 2048> >::get_super_class(void) const;
// public: void c_big_flags_typed_no_init<long, 65535>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 65535>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 65535>::set(long, bool);
// public: struct c_status_line & s_static_array<struct c_status_line, 14>::operator[]<long>(long);
// public: bool c_big_flags_typed_no_init<long, 65535>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 65535>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 65535>::valid(void) const;
// public: static bool s_static_array<struct c_status_line, 14>::valid<long>(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 65535>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 65535>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 65535>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 65535>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 65535>::get_mask_of_first_slice_of_chunk_exclusive(long);

//void predict_structure_cluster_resources(class c_tag_resource_collector *, long, struct s_cluster_reference const &)
//{
//    mangled_ppc("?predict_structure_cluster_resources@@YAXPAVc_tag_resource_collector@@JABUs_cluster_reference@@@Z");
//};

//public: c_main_render_object_collector::c_main_render_object_collector(void)
//{
//    mangled_ppc("??0c_main_render_object_collector@@QAA@XZ");
//};

//public: void c_main_render_object_collector::clear_objects(void)
//{
//    mangled_ppc("?clear_objects@c_main_render_object_collector@@QAAXXZ");
//};

//public: void c_main_render_object_collector::restart_object_predictions(void)
//{
//    mangled_ppc("?restart_object_predictions@c_main_render_object_collector@@QAAXXZ");
//};

//public: unsigned long c_main_render_object_collector::get_visit_count(void) const
//{
//    mangled_ppc("?get_visit_count@c_main_render_object_collector@@QBAKXZ");
//};

//public: unsigned long c_main_render_object_collector::get_unique_count(void) const
//{
//    mangled_ppc("?get_unique_count@c_main_render_object_collector@@QBAKXZ");
//};

//public: void c_main_render_object_collector::visit_cluster(struct s_cluster_reference const &)
//{
//    mangled_ppc("?visit_cluster@c_main_render_object_collector@@QAAXABUs_cluster_reference@@@Z");
//};

//public: bool c_main_render_object_collector::visit_objects(class c_tag_resource_collector *)
//{
//    mangled_ppc("?visit_objects@c_main_render_object_collector@@QAA_NPAVc_tag_resource_collector@@@Z");
//};

//public: bool c_main_render_object_collector::visit_objects_but_not_weapons(class c_tag_resource_collector *)
//{
//    mangled_ppc("?visit_objects_but_not_weapons@c_main_render_object_collector@@QAA_NPAVc_tag_resource_collector@@@Z");
//};

//public: bool c_main_render_object_collector::visit_weapons(class c_tag_resource_collector *)
//{
//    mangled_ppc("?visit_weapons@c_main_render_object_collector@@QAA_NPAVc_tag_resource_collector@@@Z");
//};

//public: void c_main_render_object_collector::visit_object_attachments(class c_tag_resource_collector *)
//{
//    mangled_ppc("?visit_object_attachments@c_main_render_object_collector@@QAAXPAVc_tag_resource_collector@@@Z");
//};

//private: void c_main_render_object_collector::add_object(long)
//{
//    mangled_ppc("?add_object@c_main_render_object_collector@@AAAXJ@Z");
//};

//public: c_main_render_demand_callback::c_main_render_demand_callback(long, long, long, bool)
//{
//    mangled_ppc("??0c_main_render_demand_callback@@QAA@JJJ_N@Z");
//};

//public: c_tag_resource_demand_callback::c_tag_resource_demand_callback(void)
//{
//    mangled_ppc("??0c_tag_resource_demand_callback@@QAA@XZ");
//};

//public: virtual unsigned long c_main_render_demand_callback::get_no_fail_priority_count(void)
//{
//    mangled_ppc("?get_no_fail_priority_count@c_main_render_demand_callback@@UAAKXZ");
//};

//public: virtual unsigned long c_main_render_demand_callback::get_cutoff_priority_count(void)
//{
//    mangled_ppc("?get_cutoff_priority_count@c_main_render_demand_callback@@UAAKXZ");
//};

//public: virtual unsigned long c_main_render_demand_callback::get_maximum_priority_count(void)
//{
//    mangled_ppc("?get_maximum_priority_count@c_main_render_demand_callback@@UAAKXZ");
//};

//public: virtual char const * c_main_render_demand_callback::describe_priority(long)
//{
//    mangled_ppc("?describe_priority@c_main_render_demand_callback@@UAAPBDJ@Z");
//};

//void predict_immediate_area_structure(long, class c_tag_resource_collector *, struct s_cluster_reference &, long)
//{
//    mangled_ppc("?predict_immediate_area_structure@@YAXJPAVc_tag_resource_collector@@AAUs_cluster_reference@@J@Z");
//};

//void main_predict_reset_for_map_reload(void)
//{
//    mangled_ppc("?main_predict_reset_for_map_reload@@YAXXZ");
//};

//public: virtual enum e_demand_priority_update_type c_main_render_demand_callback::demand_callback(long, class c_tag_resource_demand_collector *)
//{
//    mangled_ppc("?demand_callback@c_main_render_demand_callback@@UAA?AW4e_demand_priority_update_type@@JPAVc_tag_resource_demand_collector@@@Z");
//};

//public: c_pvs_cluster_iterator::c_pvs_cluster_iterator(long, long, struct s_cluster_reference const &)
//{
//    mangled_ppc("??0c_pvs_cluster_iterator@@QAA@JJABUs_cluster_reference@@@Z");
//};

//public: bool c_pvs_cluster_iterator::next(void)
//{
//    mangled_ppc("?next@c_pvs_cluster_iterator@@QAA_NXZ");
//};

//public: struct s_cluster_reference c_pvs_cluster_iterator::get_cluster_reference(void) const
//{
//    mangled_ppc("?get_cluster_reference@c_pvs_cluster_iterator@@QBA?AUs_cluster_reference@@XZ");
//};

//public: unsigned long c_pvs_cluster_iterator::get_bsp_mask(void) const
//{
//    mangled_ppc("?get_bsp_mask@c_pvs_cluster_iterator@@QBAKXZ");
//};

//private: bool c_pvs_cluster_iterator::go_to_next_cluster(void)
//{
//    mangled_ppc("?go_to_next_cluster@c_pvs_cluster_iterator@@AAA_NXZ");
//};

//private: bool c_pvs_cluster_iterator::valid_cluster_reference(void) const
//{
//    mangled_ppc("?valid_cluster_reference@c_pvs_cluster_iterator@@ABA_NXZ");
//};

//private: bool c_pvs_cluster_iterator::visible_cluster_reference(void) const
//{
//    mangled_ppc("?visible_cluster_reference@c_pvs_cluster_iterator@@ABA_NXZ");
//};

//public: c_potential_resource_collector::c_potential_resource_collector(class c_tag_resource_demand_collector *)
//{
//    mangled_ppc("??0c_potential_resource_collector@@QAA@PAVc_tag_resource_demand_collector@@@Z");
//};

//public: virtual long c_potential_resource_collector::find_or_add_resource_molecule(long, long, long)
//{
//    mangled_ppc("?find_or_add_resource_molecule@c_potential_resource_collector@@UAAJJJJ@Z");
//};

//public: virtual bool c_potential_resource_collector::predict_molecule(long)
//{
//    mangled_ppc("?predict_molecule@c_potential_resource_collector@@UAA_NJ@Z");
//};

//public: virtual void c_potential_resource_collector::begin_prediction_molecule(long)
//{
//    mangled_ppc("?begin_prediction_molecule@c_potential_resource_collector@@UAAXJ@Z");
//};

//public: virtual void c_potential_resource_collector::end_prediction_molecule(void)
//{
//    mangled_ppc("?end_prediction_molecule@c_potential_resource_collector@@UAAXXZ");
//};

//public: virtual void c_potential_resource_collector::add_resource(struct s_tag_resource const *)
//{
//    mangled_ppc("?add_resource@c_potential_resource_collector@@UAAXPBUs_tag_resource@@@Z");
//};

//public: virtual void c_potential_resource_collector::add_tag(long)
//{
//    mangled_ppc("?add_tag@c_potential_resource_collector@@UAAXJ@Z");
//};

//public: c_tag_resource_collector::c_tag_resource_collector(void)
//{
//    mangled_ppc("??0c_tag_resource_collector@@QAA@XZ");
//};

//public: c_simple_tag_resource_predictor::c_simple_tag_resource_predictor(bool, long, class c_tag_resource_demand_collector *)
//{
//    mangled_ppc("??0c_simple_tag_resource_predictor@@QAA@_NJPAVc_tag_resource_demand_collector@@@Z");
//};

//public: c_simple_tag_resource_predictor::~c_simple_tag_resource_predictor(void)
//{
//    mangled_ppc("??1c_simple_tag_resource_predictor@@QAA@XZ");
//};

//public: virtual long c_simple_tag_resource_predictor::find_or_add_resource_molecule(long, long, long)
//{
//    mangled_ppc("?find_or_add_resource_molecule@c_simple_tag_resource_predictor@@UAAJJJJ@Z");
//};

//public: virtual bool c_simple_tag_resource_predictor::predict_molecule(long)
//{
//    mangled_ppc("?predict_molecule@c_simple_tag_resource_predictor@@UAA_NJ@Z");
//};

//public: virtual void c_simple_tag_resource_predictor::begin_prediction_molecule(long)
//{
//    mangled_ppc("?begin_prediction_molecule@c_simple_tag_resource_predictor@@UAAXJ@Z");
//};

//public: virtual void c_simple_tag_resource_predictor::end_prediction_molecule(void)
//{
//    mangled_ppc("?end_prediction_molecule@c_simple_tag_resource_predictor@@UAAXXZ");
//};

//public: virtual void c_simple_tag_resource_predictor::add_resource(struct s_tag_resource const *)
//{
//    mangled_ppc("?add_resource@c_simple_tag_resource_predictor@@UAAXPBUs_tag_resource@@@Z");
//};

//public: virtual void c_simple_tag_resource_predictor::add_tag(long)
//{
//    mangled_ppc("?add_tag@c_simple_tag_resource_predictor@@UAAXJ@Z");
//};

//public: c_main_render_user_interface_collector::c_main_render_user_interface_collector(class c_tag_resource_demand_collector *)
//{
//    mangled_ppc("??0c_main_render_user_interface_collector@@QAA@PAVc_tag_resource_demand_collector@@@Z");
//};

//public: virtual void c_main_render_user_interface_collector::predict_bitmap(long, long)
//{
//    mangled_ppc("?predict_bitmap@c_main_render_user_interface_collector@@UAAXJJ@Z");
//};

//public: c_user_interface_bitmap_collector::c_user_interface_bitmap_collector(void)
//{
//    mangled_ppc("??0c_user_interface_bitmap_collector@@QAA@XZ");
//};

//void main_render_predict_initialize(void)
//{
//    mangled_ppc("?main_render_predict_initialize@@YAXXZ");
//};

//void main_render_predict_tag_resources(void)
//{
//    mangled_ppc("?main_render_predict_tag_resources@@YAXXZ");
//};

//void main_predict_potentially_active_tags(long, long, class c_scenario_resource_registry *, class c_tag_resource_demand_collector *)
//{
//    mangled_ppc("?main_predict_potentially_active_tags@@YAXJJPAVc_scenario_resource_registry@@PAVc_tag_resource_demand_collector@@@Z");
//};

//public: static long s_static_array<unsigned long *, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAK$0BA@@@SAJXZ");
//};

//public: c_static_sized_dynamic_array<long, 2048>::c_static_sized_dynamic_array<long, 2048>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@J$0IAA@@@QAA@XZ");
//};

//public: void c_static_sized_dynamic_array<long, 2048>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_sized_dynamic_array@J$0IAA@@@QAAXXZ");
//};

//public: long c_static_sized_dynamic_array<long, 2048>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@J$0IAA@@@QBAJXZ");
//};

//public: long & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QAAAAJXZ");
//};

//public: long & c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QAAAAJJ@Z");
//};

//public: struct c_status_line * s_static_array<struct c_status_line, 14>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Uc_status_line@@$0O@@@QAAPAUc_status_line@@XZ");
//};

//public: long * c_static_sized_dynamic_array<long, 2048>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@J$0IAA@@@QAAPAJXZ");
//};

//public: void c_static_sized_dynamic_array<long, 2048>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@J$0IAA@@@QAAXJ@Z");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QAAJXZ");
//};

//public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QAAPAJJ@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<long, 2048> * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 2048> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@J$0IAA@@@@@QAAPAV?$c_static_sized_dynamic_array@J$0IAA@@@XZ");
//};

//public: static long s_static_array<long, 2048>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$0IAA@@@SAJXZ");
//};

//public: long * s_static_array<long, 2048>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@J$0IAA@@@QAAPAJXZ");
//};

//public: long c_static_sized_dynamic_array<long, 2048>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@J$0IAA@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<long, 2048> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@AAAPAV?$c_static_sized_dynamic_array@J$0IAA@@@XZ");
//};

//public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QAAPAJXZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<long, 2048>, long>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0IAA@@@J@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<long, 2048> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 2048> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@J$0IAA@@@@@QBAPBV?$c_static_sized_dynamic_array@J$0IAA@@@XZ");
//};

//public: void c_big_flags_typed_no_init<long, 65535>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0PPPP@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 65535>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0PPPP@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 65535>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0PPPP@@@QAAXJ_N@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 14>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uc_status_line@@$0O@@@QAAAAUc_status_line@@J@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 65535>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0PPPP@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 65535>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0PPPP@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 65535>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0PPPP@@@QBA_NXZ");
//};

//public: static bool s_static_array<struct c_status_line, 14>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uc_status_line@@$0O@@@SA_NJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 65535>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0PPPP@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 65535>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0PPPP@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 65535>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0PPPP@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 65535>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0PPPP@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 65535>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0PPPP@@@KAKJ@Z");
//};

