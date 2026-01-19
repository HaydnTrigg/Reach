/* ---------- headers */

#include "omaha\interface\widgets\active_roster_list_widget.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// ?g_item_pools@c_active_roster_list_widget@@0QBQQ1@Us_item_pool@1@B; // "?g_item_pools@c_active_roster_list_widget@@0QBQQ1@Us_item_pool@1@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_active_roster_list_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_active_roster_list_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_active_roster_list_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_active_roster_list_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_active_roster_list_widget::c_component_list::~c_component_list(void);
// private: static void c_active_roster_list_widget::get_item_key(class c_active_roster_list_data_component::c_item const *, struct c_active_roster_list_widget::s_item_key *);
// public: unsigned __int64 c_active_roster_list_data_component::c_player::get_xuid(void) const;
// private: static long c_active_roster_list_widget::compare_item_keys(struct c_active_roster_list_widget::s_item_key const *, struct c_active_roster_list_widget::s_item_key const *);
// private: static bool c_active_roster_list_widget::compare_item_keys_sort(void const *, void const *, void const *);
// private: static long c_active_roster_list_widget::compare_item_keys_search(void const *, void const *, void const *);
// private: static struct c_active_roster_list_widget::s_item_widget_map_entry const * c_active_roster_list_widget::find_item_widget_map_entry(struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_key const *);
// private: static struct c_active_roster_list_widget::s_item_widget_map_entry * c_active_roster_list_widget::find_item_widget_map_entry(struct c_active_roster_list_widget::s_item_widget_map_entry *, struct c_active_roster_list_widget::s_item_widget_map_entry *, struct c_active_roster_list_widget::s_item_key const *);
// public: c_active_roster_list_widget::c_active_roster_list_widget(void);
// public: c_active_roster_list_widget::s_item_key::s_item_key(void);
// public: c_active_roster_list_widget::s_item_pool::s_item_pool(void);
// public: c_active_roster_list_widget::c_component_list::c_component_list(void);
// merged_84A40210;
// public: virtual c_active_roster_list_widget::~c_active_roster_list_widget(void);
// public: virtual c_input_event_component::~c_input_event_component(void);
// public: c_active_roster_list_widget::s_item_pool::~s_item_pool(void);
// public: virtual c_event_component::~c_event_component(void);
// public: long c_active_roster_list_widget::get_item_count(void) const;
// public: void c_active_roster_list_widget::set_squad_section_header_item(class c_list_item_widget *);
// public: void c_active_roster_list_widget::set_network_section_header_item(class c_list_item_widget *);
// public: void c_active_roster_list_widget::set_header_item(class c_list_item_widget *);
// public: void c_active_roster_list_widget::set_player_item(class c_list_item_widget *);
// public: void c_active_roster_list_widget::set_slot_item(class c_list_item_widget *);
// public: void c_active_roster_list_widget::set_separator_item(class c_list_item_widget *);
// protected: virtual void c_active_roster_list_widget::do_update(class c_cui_update_context *);
// public: bool c_active_roster_list_widget::get_headers_selectable(void) const;
// private: bool c_active_roster_list_widget::is_selected_event_valid(void) const;
// private: void c_active_roster_list_widget::set_selected_event_valid(bool);
// protected: virtual void c_active_roster_list_widget::do_initialize(class c_cui_update_context *);
// protected: virtual bool c_active_roster_list_widget::do_replicates_descendant(class c_cui_component const *) const;
// protected: virtual bool c_active_roster_list_widget::do_is_focusable(void) const;
// protected: virtual bool c_active_roster_list_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *);
// public: void c_input_event_component::set_input_event(class c_cui_input_event const *);
// public: class c_team_switch_request_manager * c_active_roster_list_data_component::get_team_switch_requestor(void);
// bool is_valid_selectable_item_index(class c_active_roster_list_data_component const *, long, bool);
// protected: virtual void c_active_roster_list_widget::do_render(class c_cui_render_context *) const;
// private: void c_active_roster_list_widget::set_selected_item_index(long, bool);
// private: enum c_active_roster_list_widget::e_item_type c_active_roster_list_widget::get_item_type(class c_active_roster_list_data_component::c_item const *);
// ?get_item_count_and_pools@c_active_roster_list_widget@@ABAXPAJPAPBQQ1@Us_item_pool@1@@Z;
// private: bool c_active_roster_list_widget::page_up(long, float);
// public: float c_active_roster_list_widget::s_item_pool::get_model_height(void) const;
// private: bool c_active_roster_list_widget::page_down(long, float);
// private: bool c_active_roster_list_widget::scroll_analog(float);
// private: void c_active_roster_list_widget::maintain_selection(long);
// ?update_virtual_contents@c_active_roster_list_widget@@AAAXJPBQQ1@Us_item_pool@1@@Z;
// ?update_virtual_window@c_active_roster_list_widget@@AAAXJPBQQ1@Us_item_pool@1@@Z;
// ?update_item_widgets@c_active_roster_list_widget@@AAAXPAVc_cui_update_context@@PBQQ1@Us_item_pool@1@@Z;
// public: void * c_list_item_widget::get_user_data(void) const;
// public: void c_list_item_widget::set_user_data(void *);
// public: bool c_active_roster_list_widget::get_show_selection_when_unfocused(void) const;
// public: bool c_active_roster_list_widget::get_show_selection_when_disabled(void) const;
// public: c_active_roster_list_widget::s_item_widget_map_entry::s_item_widget_map_entry(void);
// struct s_cui_active_roster_settings_definition const * get_active_roster_settings_definition(void);
// bool is_item_selectable(class c_active_roster_list_data_component::c_item const *, bool);
// long get_prev_selectable_item_index(class c_active_roster_list_data_component *, long, bool);
// long get_next_selectable_item_index(class c_active_roster_list_data_component *, long, bool);
// bool is_first_selectable_player_item(class c_active_roster_list_data_component *, long, bool);
// bool session_id_valid(struct s_transport_secure_identifier const *);
// public: unsigned int c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::size(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::begin(void);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::end(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_active_roster_list_widget>::get_instance(void);
// public: unsigned int c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::size(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::begin(void);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::end(void);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::data(void);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::data(void);
// public: c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >(unsigned int, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> const &);
// public: c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::~c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >(void);
// public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::push_back(struct c_active_roster_list_widget::s_item_widget_map_entry const &);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::erase(struct c_active_roster_list_widget::s_item_widget_map_entry const *);
// public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::clear(void);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, bool, bool & (c_active_roster_list_widget::get_show_selection_when_unfocused::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, bool, void & (c_active_roster_list_widget::set_show_selection_when_unfocused::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_show_selection_when_unfocused(bool);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, bool, bool & (c_active_roster_list_widget::get_show_selection_when_disabled::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, bool, void & (c_active_roster_list_widget::set_show_selection_when_disabled::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_show_selection_when_disabled(bool);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, bool, bool & (c_active_roster_list_widget::get_headers_selectable::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, bool, void & (c_active_roster_list_widget::set_headers_selectable::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_headers_selectable(bool);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_left_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_left_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_left_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_left_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_up_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_up_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_up_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_up_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_right_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_right_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_right_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_right_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_down_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_down_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_down_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_down_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_return_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_return_focus_to(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_input_event_component *, class c_input_event_component *& (c_active_roster_list_widget::get_selected_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_active_roster_list_widget::get_selected_event(void) const;
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_prev_arrow::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_prev_arrow(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_prev_arrow::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_prev_arrow(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_next_arrow::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_next_arrow(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_next_arrow::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_next_arrow(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_active_roster_list_data_component *, class c_active_roster_list_data_component *& (c_active_roster_list_widget::get_active_roster_list_data::*)(void)>(void const *, long, struct s_cui_property_value *);
// void cui_property_value_set(struct s_cui_property_value *, class c_active_roster_list_data_component *);
// public: class c_active_roster_list_data_component * c_active_roster_list_widget::get_active_roster_list_data(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_active_roster_list_data_component *, void & (c_active_roster_list_widget::set_active_roster_list_data::*)(class c_active_roster_list_data_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_active_roster_list_data_component **);
// public: void c_active_roster_list_widget::set_active_roster_list_data(class c_active_roster_list_data_component *);
// class c_active_roster_list_data_component * cui_dynamic_cast<class c_active_roster_list_data_component *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, long, long & (c_active_roster_list_widget::get_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_active_roster_list_widget::get_selected_item_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_squad_section_header_item::*)(void)>(void const *, long, struct s_cui_property_value *);
// void cui_property_value_set(struct s_cui_property_value *, class c_list_item_widget *);
// public: class c_list_item_widget * c_active_roster_list_widget::get_squad_section_header_item(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_squad_section_header_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_list_item_widget **);
// class c_list_item_widget * cui_dynamic_cast<class c_list_item_widget *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_network_section_header_item::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_list_item_widget * c_active_roster_list_widget::get_network_section_header_item(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_network_section_header_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_header_item::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_list_item_widget * c_active_roster_list_widget::get_header_item(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_header_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_player_item::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_list_item_widget * c_active_roster_list_widget::get_player_item(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_player_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_slot_item::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_list_item_widget * c_active_roster_list_widget::get_slot_item(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_slot_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_separator_item::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_list_item_widget * c_active_roster_list_widget::get_separator_item(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_separator_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_squad_background::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_squad_background(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_squad_background::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_squad_background(class c_cui_widget *);
// bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_network_background::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_active_roster_list_widget::get_network_background(void) const;
// bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_network_background::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_roster_list_widget::set_network_background(class c_cui_widget *);
// public: c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>(void);
// public: c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::~c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>(void);
// public: void c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::push_back(struct c_active_roster_list_widget::s_item_widget_map_entry const &);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::erase(struct c_active_roster_list_widget::s_item_widget_map_entry const *);
// public: bool c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::empty(void) const;
// public: bool c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::full(void) const;
// private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::get(unsigned int);
// private: bool c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::position_valid(struct c_active_roster_list_widget::s_item_widget_map_entry const *) const;
// public: bool c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::full(void) const;
// private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::get(unsigned int);
// private: bool c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::position_valid(struct c_active_roster_list_widget::s_item_widget_map_entry const *) const;
// public: unsigned int c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::capacity(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::begin(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::end(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::begin(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::end(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::data(void) const;
// public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::data(void) const;
// public: static class c_list_item_widget * s_cui_dynamic_cast<class c_list_item_widget *>::cast(class c_cui_component *);
// public: static class c_active_roster_list_data_component * s_cui_dynamic_cast<class c_active_roster_list_data_component *>::cast(class c_cui_component *);
// public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::reserve(unsigned int);
// public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::pop_back(void);
// private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::collapse(struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_widget_map_entry const *);
// public: void c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry>::deallocate(struct c_active_roster_list_widget::s_item_widget_map_entry *, unsigned int);
// public: void c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::clear(void);
// private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::collapse(struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_widget_map_entry const *);
// private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::get_mutable_iterator(struct c_active_roster_list_widget::s_item_widget_map_entry const *);
// public: bool c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::empty(void) const;
// private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::get_mutable_iterator(struct c_active_roster_list_widget::s_item_widget_map_entry const *);
// public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry>::allocate(unsigned int);
// public: void c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::pop_back(void);
// public: long c_cui_component::get_child_count(void) const;
// class c_cui_component * cui_component_create<class c_active_roster_list_widget>(void);

//public: c_active_roster_list_widget::c_component_list::~c_component_list(void)
//{
//    mangled_ppc("??1c_component_list@c_active_roster_list_widget@@QAA@XZ");
//};

//private: static void c_active_roster_list_widget::get_item_key(class c_active_roster_list_data_component::c_item const *, struct c_active_roster_list_widget::s_item_key *)
//{
//    mangled_ppc("?get_item_key@c_active_roster_list_widget@@CAXPBVc_item@c_active_roster_list_data_component@@PAUs_item_key@1@@Z");
//};

//public: unsigned __int64 c_active_roster_list_data_component::c_player::get_xuid(void) const
//{
//    mangled_ppc("?get_xuid@c_player@c_active_roster_list_data_component@@QBA_KXZ");
//};

//private: static long c_active_roster_list_widget::compare_item_keys(struct c_active_roster_list_widget::s_item_key const *, struct c_active_roster_list_widget::s_item_key const *)
//{
//    mangled_ppc("?compare_item_keys@c_active_roster_list_widget@@CAJPBUs_item_key@1@0@Z");
//};

//private: static bool c_active_roster_list_widget::compare_item_keys_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_item_keys_sort@c_active_roster_list_widget@@CA_NPBX00@Z");
//};

//private: static long c_active_roster_list_widget::compare_item_keys_search(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_item_keys_search@c_active_roster_list_widget@@CAJPBX00@Z");
//};

//private: static struct c_active_roster_list_widget::s_item_widget_map_entry const * c_active_roster_list_widget::find_item_widget_map_entry(struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_key const *)
//{
//    mangled_ppc("?find_item_widget_map_entry@c_active_roster_list_widget@@CAPBUs_item_widget_map_entry@1@PBU21@0PBUs_item_key@1@@Z");
//};

//private: static struct c_active_roster_list_widget::s_item_widget_map_entry * c_active_roster_list_widget::find_item_widget_map_entry(struct c_active_roster_list_widget::s_item_widget_map_entry *, struct c_active_roster_list_widget::s_item_widget_map_entry *, struct c_active_roster_list_widget::s_item_key const *)
//{
//    mangled_ppc("?find_item_widget_map_entry@c_active_roster_list_widget@@CAPAUs_item_widget_map_entry@1@PAU21@0PBUs_item_key@1@@Z");
//};

//public: c_active_roster_list_widget::c_active_roster_list_widget(void)
//{
//    mangled_ppc("??0c_active_roster_list_widget@@QAA@XZ");
//};

//public: c_active_roster_list_widget::s_item_key::s_item_key(void)
//{
//    mangled_ppc("??0s_item_key@c_active_roster_list_widget@@QAA@XZ");
//};

//public: c_active_roster_list_widget::s_item_pool::s_item_pool(void)
//{
//    mangled_ppc("??0s_item_pool@c_active_roster_list_widget@@QAA@XZ");
//};

//public: c_active_roster_list_widget::c_component_list::c_component_list(void)
//{
//    mangled_ppc("??0c_component_list@c_active_roster_list_widget@@QAA@XZ");
//};

//merged_84A40210
//{
//    mangled_ppc("merged_84A40210");
//};

//public: virtual c_active_roster_list_widget::~c_active_roster_list_widget(void)
//{
//    mangled_ppc("??1c_active_roster_list_widget@@UAA@XZ");
//};

//public: virtual c_input_event_component::~c_input_event_component(void)
//{
//    mangled_ppc("??1c_input_event_component@@UAA@XZ");
//};

//public: c_active_roster_list_widget::s_item_pool::~s_item_pool(void)
//{
//    mangled_ppc("??1s_item_pool@c_active_roster_list_widget@@QAA@XZ");
//};

//public: virtual c_event_component::~c_event_component(void)
//{
//    mangled_ppc("??1c_event_component@@UAA@XZ");
//};

//public: long c_active_roster_list_widget::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_active_roster_list_widget@@QBAJXZ");
//};

//public: void c_active_roster_list_widget::set_squad_section_header_item(class c_list_item_widget *)
//{
//    mangled_ppc("?set_squad_section_header_item@c_active_roster_list_widget@@QAAXPAVc_list_item_widget@@@Z");
//};

//public: void c_active_roster_list_widget::set_network_section_header_item(class c_list_item_widget *)
//{
//    mangled_ppc("?set_network_section_header_item@c_active_roster_list_widget@@QAAXPAVc_list_item_widget@@@Z");
//};

//public: void c_active_roster_list_widget::set_header_item(class c_list_item_widget *)
//{
//    mangled_ppc("?set_header_item@c_active_roster_list_widget@@QAAXPAVc_list_item_widget@@@Z");
//};

//public: void c_active_roster_list_widget::set_player_item(class c_list_item_widget *)
//{
//    mangled_ppc("?set_player_item@c_active_roster_list_widget@@QAAXPAVc_list_item_widget@@@Z");
//};

//public: void c_active_roster_list_widget::set_slot_item(class c_list_item_widget *)
//{
//    mangled_ppc("?set_slot_item@c_active_roster_list_widget@@QAAXPAVc_list_item_widget@@@Z");
//};

//public: void c_active_roster_list_widget::set_separator_item(class c_list_item_widget *)
//{
//    mangled_ppc("?set_separator_item@c_active_roster_list_widget@@QAAXPAVc_list_item_widget@@@Z");
//};

//protected: virtual void c_active_roster_list_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_active_roster_list_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_active_roster_list_widget::get_headers_selectable(void) const
//{
//    mangled_ppc("?get_headers_selectable@c_active_roster_list_widget@@QBA_NXZ");
//};

//private: bool c_active_roster_list_widget::is_selected_event_valid(void) const
//{
//    mangled_ppc("?is_selected_event_valid@c_active_roster_list_widget@@ABA_NXZ");
//};

//private: void c_active_roster_list_widget::set_selected_event_valid(bool)
//{
//    mangled_ppc("?set_selected_event_valid@c_active_roster_list_widget@@AAAX_N@Z");
//};

//protected: virtual void c_active_roster_list_widget::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_active_roster_list_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual bool c_active_roster_list_widget::do_replicates_descendant(class c_cui_component const *) const
//{
//    mangled_ppc("?do_replicates_descendant@c_active_roster_list_widget@@MBA_NPBVc_cui_component@@@Z");
//};

//protected: virtual bool c_active_roster_list_widget::do_is_focusable(void) const
//{
//    mangled_ppc("?do_is_focusable@c_active_roster_list_widget@@MBA_NXZ");
//};

//protected: virtual bool c_active_roster_list_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_handle_input_event@c_active_roster_list_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: void c_input_event_component::set_input_event(class c_cui_input_event const *)
//{
//    mangled_ppc("?set_input_event@c_input_event_component@@QAAXPBVc_cui_input_event@@@Z");
//};

//public: class c_team_switch_request_manager * c_active_roster_list_data_component::get_team_switch_requestor(void)
//{
//    mangled_ppc("?get_team_switch_requestor@c_active_roster_list_data_component@@QAAPAVc_team_switch_request_manager@@XZ");
//};

//bool is_valid_selectable_item_index(class c_active_roster_list_data_component const *, long, bool)
//{
//    mangled_ppc("?is_valid_selectable_item_index@@YA_NPBVc_active_roster_list_data_component@@J_N@Z");
//};

//protected: virtual void c_active_roster_list_widget::do_render(class c_cui_render_context *) const
//{
//    mangled_ppc("?do_render@c_active_roster_list_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//private: void c_active_roster_list_widget::set_selected_item_index(long, bool)
//{
//    mangled_ppc("?set_selected_item_index@c_active_roster_list_widget@@AAAXJ_N@Z");
//};

//private: enum c_active_roster_list_widget::e_item_type c_active_roster_list_widget::get_item_type(class c_active_roster_list_data_component::c_item const *)
//{
//    mangled_ppc("?get_item_type@c_active_roster_list_widget@@AAA?AW4e_item_type@1@PBVc_item@c_active_roster_list_data_component@@@Z");
//};

//?get_item_count_and_pools@c_active_roster_list_widget@@ABAXPAJPAPBQQ1@Us_item_pool@1@@Z
//{
//    mangled_ppc("?get_item_count_and_pools@c_active_roster_list_widget@@ABAXPAJPAPBQQ1@Us_item_pool@1@@Z");
//};

//private: bool c_active_roster_list_widget::page_up(long, float)
//{
//    mangled_ppc("?page_up@c_active_roster_list_widget@@AAA_NJM@Z");
//};

//public: float c_active_roster_list_widget::s_item_pool::get_model_height(void) const
//{
//    mangled_ppc("?get_model_height@s_item_pool@c_active_roster_list_widget@@QBAMXZ");
//};

//private: bool c_active_roster_list_widget::page_down(long, float)
//{
//    mangled_ppc("?page_down@c_active_roster_list_widget@@AAA_NJM@Z");
//};

//private: bool c_active_roster_list_widget::scroll_analog(float)
//{
//    mangled_ppc("?scroll_analog@c_active_roster_list_widget@@AAA_NM@Z");
//};

//private: void c_active_roster_list_widget::maintain_selection(long)
//{
//    mangled_ppc("?maintain_selection@c_active_roster_list_widget@@AAAXJ@Z");
//};

//?update_virtual_contents@c_active_roster_list_widget@@AAAXJPBQQ1@Us_item_pool@1@@Z
//{
//    mangled_ppc("?update_virtual_contents@c_active_roster_list_widget@@AAAXJPBQQ1@Us_item_pool@1@@Z");
//};

//?update_virtual_window@c_active_roster_list_widget@@AAAXJPBQQ1@Us_item_pool@1@@Z
//{
//    mangled_ppc("?update_virtual_window@c_active_roster_list_widget@@AAAXJPBQQ1@Us_item_pool@1@@Z");
//};

//?update_item_widgets@c_active_roster_list_widget@@AAAXPAVc_cui_update_context@@PBQQ1@Us_item_pool@1@@Z
//{
//    mangled_ppc("?update_item_widgets@c_active_roster_list_widget@@AAAXPAVc_cui_update_context@@PBQQ1@Us_item_pool@1@@Z");
//};

//public: void * c_list_item_widget::get_user_data(void) const
//{
//    mangled_ppc("?get_user_data@c_list_item_widget@@QBAPAXXZ");
//};

//public: void c_list_item_widget::set_user_data(void *)
//{
//    mangled_ppc("?set_user_data@c_list_item_widget@@QAAXPAX@Z");
//};

//public: bool c_active_roster_list_widget::get_show_selection_when_unfocused(void) const
//{
//    mangled_ppc("?get_show_selection_when_unfocused@c_active_roster_list_widget@@QBA_NXZ");
//};

//public: bool c_active_roster_list_widget::get_show_selection_when_disabled(void) const
//{
//    mangled_ppc("?get_show_selection_when_disabled@c_active_roster_list_widget@@QBA_NXZ");
//};

//public: c_active_roster_list_widget::s_item_widget_map_entry::s_item_widget_map_entry(void)
//{
//    mangled_ppc("??0s_item_widget_map_entry@c_active_roster_list_widget@@QAA@XZ");
//};

//struct s_cui_active_roster_settings_definition const * get_active_roster_settings_definition(void)
//{
//    mangled_ppc("?get_active_roster_settings_definition@@YAPBUs_cui_active_roster_settings_definition@@XZ");
//};

//bool is_item_selectable(class c_active_roster_list_data_component::c_item const *, bool)
//{
//    mangled_ppc("?is_item_selectable@@YA_NPBVc_item@c_active_roster_list_data_component@@_N@Z");
//};

//long get_prev_selectable_item_index(class c_active_roster_list_data_component *, long, bool)
//{
//    mangled_ppc("?get_prev_selectable_item_index@@YAJPAVc_active_roster_list_data_component@@J_N@Z");
//};

//long get_next_selectable_item_index(class c_active_roster_list_data_component *, long, bool)
//{
//    mangled_ppc("?get_next_selectable_item_index@@YAJPAVc_active_roster_list_data_component@@J_N@Z");
//};

//bool is_first_selectable_player_item(class c_active_roster_list_data_component *, long, bool)
//{
//    mangled_ppc("?is_first_selectable_player_item@@YA_NPAVc_active_roster_list_data_component@@J_N@Z");
//};

//bool session_id_valid(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?session_id_valid@@YA_NPBUs_transport_secure_identifier@@@Z");
//};

//public: unsigned int c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBAIXZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::end(void)
//{
//    mangled_ppc("?end@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_active_roster_list_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_active_roster_list_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: unsigned int c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QBAIXZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::data(void)
//{
//    mangled_ppc("?data@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >(unsigned int, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> const &)
//{
//    mangled_ppc("??0?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAA@IABV?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@Z");
//};

//public: c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::~c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >(void)
//{
//    mangled_ppc("??1?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAA@XZ");
//};

//public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::push_back(struct c_active_roster_list_widget::s_item_widget_map_entry const &)
//{
//    mangled_ppc("?push_back@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAXABUs_item_widget_map_entry@c_active_roster_list_widget@@@Z");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::erase(struct c_active_roster_list_widget::s_item_widget_map_entry const *)
//{
//    mangled_ppc("?erase@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@PBU23@@Z");
//};

//public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAXXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, bool, bool & (c_active_roster_list_widget::get_show_selection_when_unfocused::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@_N$1?get_show_selection_when_unfocused@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, bool, void & (c_active_roster_list_widget::set_show_selection_when_unfocused::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@_N$1?set_show_selection_when_unfocused@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_show_selection_when_unfocused(bool)
//{
//    mangled_ppc("?set_show_selection_when_unfocused@c_active_roster_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, bool, bool & (c_active_roster_list_widget::get_show_selection_when_disabled::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@_N$1?get_show_selection_when_disabled@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, bool, void & (c_active_roster_list_widget::set_show_selection_when_disabled::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@_N$1?set_show_selection_when_disabled@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_show_selection_when_disabled(bool)
//{
//    mangled_ppc("?set_show_selection_when_disabled@c_active_roster_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, bool, bool & (c_active_roster_list_widget::get_headers_selectable::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@_N$1?get_headers_selectable@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, bool, void & (c_active_roster_list_widget::set_headers_selectable::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@_N$1?set_headers_selectable@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_headers_selectable(bool)
//{
//    mangled_ppc("?set_headers_selectable@c_active_roster_list_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_left_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_left_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_left_focus_to(void) const
//{
//    mangled_ppc("?get_left_focus_to@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_left_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_left_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_left_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_left_focus_to@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_up_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_up_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_up_focus_to(void) const
//{
//    mangled_ppc("?get_up_focus_to@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_up_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_up_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_up_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_up_focus_to@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_right_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_right_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_right_focus_to(void) const
//{
//    mangled_ppc("?get_right_focus_to@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_right_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_right_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_right_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_right_focus_to@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_down_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_down_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_down_focus_to(void) const
//{
//    mangled_ppc("?get_down_focus_to@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_down_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_down_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_down_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_down_focus_to@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_return_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_return_focus_to(void) const
//{
//    mangled_ppc("?get_return_focus_to@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_return_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_return_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_return_focus_to@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_input_event_component *, class c_input_event_component *& (c_active_roster_list_widget::get_selected_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_input_event_component@@$1?get_selected_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_active_roster_list_widget::get_selected_event(void) const
//{
//    mangled_ppc("?get_selected_event@c_active_roster_list_widget@@QBAPAVc_input_event_component@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_prev_arrow::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_prev_arrow@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_prev_arrow(void) const
//{
//    mangled_ppc("?get_prev_arrow@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_prev_arrow::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_prev_arrow@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_prev_arrow(class c_cui_widget *)
//{
//    mangled_ppc("?set_prev_arrow@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_next_arrow::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_next_arrow@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_next_arrow(void) const
//{
//    mangled_ppc("?get_next_arrow@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_next_arrow::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_next_arrow@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_next_arrow(class c_cui_widget *)
//{
//    mangled_ppc("?set_next_arrow@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_active_roster_list_data_component *, class c_active_roster_list_data_component *& (c_active_roster_list_widget::get_active_roster_list_data::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_active_roster_list_data_component@@$1?get_active_roster_list_data@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_active_roster_list_data_component *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_active_roster_list_data_component@@@Z");
//};

//public: class c_active_roster_list_data_component * c_active_roster_list_widget::get_active_roster_list_data(void) const
//{
//    mangled_ppc("?get_active_roster_list_data@c_active_roster_list_widget@@QBAPAVc_active_roster_list_data_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_active_roster_list_data_component *, void & (c_active_roster_list_widget::set_active_roster_list_data::*)(class c_active_roster_list_data_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_active_roster_list_data_component@@$1?set_active_roster_list_data@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_active_roster_list_data_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_active_roster_list_data_component@@@Z");
//};

//public: void c_active_roster_list_widget::set_active_roster_list_data(class c_active_roster_list_data_component *)
//{
//    mangled_ppc("?set_active_roster_list_data@c_active_roster_list_widget@@QAAXPAVc_active_roster_list_data_component@@@Z");
//};

//class c_active_roster_list_data_component * cui_dynamic_cast<class c_active_roster_list_data_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_active_roster_list_data_component@@@@YAPAVc_active_roster_list_data_component@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, long, long & (c_active_roster_list_widget::get_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@J$1?get_selected_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_active_roster_list_widget::get_selected_item_index(void) const
//{
//    mangled_ppc("?get_selected_item_index@c_active_roster_list_widget@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_squad_section_header_item::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?get_squad_section_header_item@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_list_item_widget *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_list_item_widget@@@Z");
//};

//public: class c_list_item_widget * c_active_roster_list_widget::get_squad_section_header_item(void) const
//{
//    mangled_ppc("?get_squad_section_header_item@c_active_roster_list_widget@@QBAPAVc_list_item_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_squad_section_header_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?set_squad_section_header_item@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_list_item_widget **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_list_item_widget@@@Z");
//};

//class c_list_item_widget * cui_dynamic_cast<class c_list_item_widget *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_list_item_widget@@@@YAPAVc_list_item_widget@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_network_section_header_item::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?get_network_section_header_item@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_list_item_widget * c_active_roster_list_widget::get_network_section_header_item(void) const
//{
//    mangled_ppc("?get_network_section_header_item@c_active_roster_list_widget@@QBAPAVc_list_item_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_network_section_header_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?set_network_section_header_item@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_header_item::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?get_header_item@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_list_item_widget * c_active_roster_list_widget::get_header_item(void) const
//{
//    mangled_ppc("?get_header_item@c_active_roster_list_widget@@QBAPAVc_list_item_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_header_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?set_header_item@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_player_item::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?get_player_item@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_list_item_widget * c_active_roster_list_widget::get_player_item(void) const
//{
//    mangled_ppc("?get_player_item@c_active_roster_list_widget@@QBAPAVc_list_item_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_player_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?set_player_item@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_slot_item::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?get_slot_item@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_list_item_widget * c_active_roster_list_widget::get_slot_item(void) const
//{
//    mangled_ppc("?get_slot_item@c_active_roster_list_widget@@QBAPAVc_list_item_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_slot_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?set_slot_item@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_list_item_widget *, class c_list_item_widget *& (c_active_roster_list_widget::get_separator_item::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?get_separator_item@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_list_item_widget * c_active_roster_list_widget::get_separator_item(void) const
//{
//    mangled_ppc("?get_separator_item@c_active_roster_list_widget@@QBAPAVc_list_item_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_list_item_widget *, void & (c_active_roster_list_widget::set_separator_item::*)(class c_list_item_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_list_item_widget@@$1?set_separator_item@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_squad_background::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_squad_background@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_squad_background(void) const
//{
//    mangled_ppc("?get_squad_background@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_squad_background::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_squad_background@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_squad_background(class c_cui_widget *)
//{
//    mangled_ppc("?set_squad_background@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_roster_list_widget, class c_cui_widget *, class c_cui_widget *& (c_active_roster_list_widget::get_network_background::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?get_network_background@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_active_roster_list_widget::get_network_background(void) const
//{
//    mangled_ppc("?get_network_background@c_active_roster_list_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_roster_list_widget, class c_cui_widget *, void & (c_active_roster_list_widget::set_network_background::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_roster_list_widget@@PAVc_cui_widget@@$1?set_network_background@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_roster_list_widget::set_network_background(class c_cui_widget *)
//{
//    mangled_ppc("?set_network_background@c_active_roster_list_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//public: c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::~c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAA@XZ");
//};

//public: void c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::push_back(struct c_active_roster_list_widget::s_item_widget_map_entry const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAXABUs_item_widget_map_entry@c_active_roster_list_widget@@@Z");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::erase(struct c_active_roster_list_widget::s_item_widget_map_entry const *)
//{
//    mangled_ppc("?erase@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@PBU23@@Z");
//};

//public: bool c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBA_NXZ");
//};

//public: bool c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBA_NXZ");
//};

//private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@AAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@I@Z");
//};

//private: bool c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::position_valid(struct c_active_roster_list_widget::s_item_widget_map_entry const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@ABA_NPBUs_item_widget_map_entry@c_active_roster_list_widget@@@Z");
//};

//public: bool c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QBA_NXZ");
//};

//private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@AAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@I@Z");
//};

//private: bool c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::position_valid(struct c_active_roster_list_widget::s_item_widget_map_entry const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@ABA_NPBUs_item_widget_map_entry@c_active_roster_list_widget@@@Z");
//};

//public: unsigned int c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::capacity(void) const
//{
//    mangled_ppc("?capacity@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBAIXZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBAPBUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBAPBUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QBAPBUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QBAPBUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QBAPBUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry const * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QBAPBUs_item_widget_map_entry@c_active_roster_list_widget@@XZ");
//};

//public: static class c_list_item_widget * s_cui_dynamic_cast<class c_list_item_widget *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_list_item_widget@@@@SAPAVc_list_item_widget@@PAVc_cui_component@@@Z");
//};

//public: static class c_active_roster_list_data_component * s_cui_dynamic_cast<class c_active_roster_list_data_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_active_roster_list_data_component@@@@SAPAVc_active_roster_list_data_component@@PAVc_cui_component@@@Z");
//};

//public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::reserve(unsigned int)
//{
//    mangled_ppc("?reserve@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAXI@Z");
//};

//public: void c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@QAAXXZ");
//};

//private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::collapse(struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_widget_map_entry const *)
//{
//    mangled_ppc("?collapse@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@AAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@PBU23@0@Z");
//};

//public: void c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry>::deallocate(struct c_active_roster_list_widget::s_item_widget_map_entry *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@QAAXPAUs_item_widget_map_entry@c_active_roster_list_widget@@I@Z");
//};

//public: void c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAXXZ");
//};

//private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::collapse(struct c_active_roster_list_widget::s_item_widget_map_entry const *, struct c_active_roster_list_widget::s_item_widget_map_entry const *)
//{
//    mangled_ppc("?collapse@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@AAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@PBU23@0@Z");
//};

//private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, class c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry> >::get_mutable_iterator(struct c_active_roster_list_widget::s_item_widget_map_entry const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@V?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@@@AAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@PBU23@@Z");
//};

//public: bool c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QBA_NXZ");
//};

//private: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::get_mutable_iterator(struct c_active_roster_list_widget::s_item_widget_map_entry const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@AAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@PBU23@@Z");
//};

//public: struct c_active_roster_list_widget::s_item_widget_map_entry * c_cui_dynamic_allocator<struct c_active_roster_list_widget::s_item_widget_map_entry>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$c_cui_dynamic_allocator@Us_item_widget_map_entry@c_active_roster_list_widget@@@@QAAPAUs_item_widget_map_entry@c_active_roster_list_widget@@I@Z");
//};

//public: void c_cui_static_vector<struct c_active_roster_list_widget::s_item_widget_map_entry, 320>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_item_widget_map_entry@c_active_roster_list_widget@@$0BEA@@@QAAXXZ");
//};

//public: long c_cui_component::get_child_count(void) const
//{
//    mangled_ppc("?get_child_count@c_cui_component@@QBAJXZ");
//};

//class c_cui_component * cui_component_create<class c_active_roster_list_widget>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_active_roster_list_widget@@@@YAPAVc_cui_component@@XZ");
//};

