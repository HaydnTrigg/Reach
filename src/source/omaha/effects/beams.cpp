/* ---------- headers */

#include "omaha\effects\beams.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_effect_holdback_type const c_beam_system::x_holdback_type; // "?x_holdback_type@c_beam_system@@0W4e_effect_holdback_type@@B"
// private: static enum e_effect_holdback_type const c_beam_location::x_holdback_type; // "?x_holdback_type@c_beam_location@@0W4e_effect_holdback_type@@B"
// private: static enum e_effect_holdback_type const c_beam::x_holdback_type; // "?x_holdback_type@c_beam@@0W4e_effect_holdback_type@@B"
// bool g_beam_create; // "?g_beam_create@@3_NA"
// bool g_beam_frame_advance; // "?g_beam_frame_advance@@3_NA"
// bool g_beam_submit; // "?g_beam_submit@@3_NA"
// struct s_beam_information_by_priority *g_beam_information_by_priority; // "?g_beam_information_by_priority@@3PAUs_beam_information_by_priority@@A"
// long volatile `void __cdecl data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_beam@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_beam@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_beam@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_beam_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_beam_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_beam_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_beam_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_beam_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_beam_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// struct s_beam_information g_beam_information; // "?g_beam_information@@3Us_beam_information@@A"
// bool g_beam_dump; // "?g_beam_dump@@3_NA"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_beam_system_allocator::*)(void *)> g_beam_system_allocator; // "?g_beam_system_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_beam_location_allocator::*)(void *)> g_beam_location_allocator; // "?g_beam_location_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_beam_allocator::*)(void *)> g_beam_allocator; // "?g_beam_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@A"
// bool `void __cdecl data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_beam@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// bool `void __cdecl data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_beam_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// bool `void __cdecl data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_beam_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// public: static struct s_data_array *c_beam_system::x_data_array; // "?x_data_array@c_beam_system@@2PAUs_data_array@@A"
// public: static struct s_data_array *c_beam_location::x_data_array; // "?x_data_array@c_beam_location@@2PAUs_data_array@@A"
// public: static struct s_data_array *c_beam::x_data_array; // "?x_data_array@c_beam@@2PAUs_data_array@@A"

// void __tls_set_g_beam_system_allocator(void *);
// public: static void c_beam_system::initialize_for_game(void);
// public: static void c_beam_system::initialize_for_map(void);
// public: static void c_beam_system::dispose_from_map(void);
// public: static void c_beam_system::dispose_from_game(void);
// public: static void c_beam_system::initialize_for_new_structure_bsp(void);
// public: static void c_beam_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// public: static void c_beam_system::handle_tag_changes(void);
// public: static long c_beam_system::create(unsigned char, class c_tag_index, long, unsigned short, unsigned short, class c_tag_index, unsigned char);
// public: void c_beam_system::set_should_live(bool);
// public: void c_beam_system::set_should_frame_advance(bool);
// public: void c_beam_system::set_should_render(bool);
// public: void c_beam_system::set_ever_frame_advanced(bool);
// public: static void c_beam_system::destroy(long);
// public: long c_beam_system::add_beam_location(struct real_matrix4x3const *, unsigned long);
// public: long c_beam_system::to_datum_index(void) const;
// public: unsigned char c_beam_system::get_priority(void) const;
// public: void c_beam_system::remove_further_beam_locations(long);
// public: long c_beam_location::get_next_sibling(void) const;
// public: void c_beam_location::clear_next_sibling(void);
// public: static void c_beam_system::pulse_all(float);
// public: static void c_beam_system::frame_advance_all(float);
// public: bool c_beam_system::get_should_live(void) const;
// public: bool c_beam_system::get_should_frame_advance(void) const;
// public: static void c_beam_system::frame_advance_all_gpu(float);
// public: static void c_beam_system::submit_all(enum e_output_user_index, enum e_effect_pass);
// public: bool c_beam_system::get_should_render(void) const;
// public: void c_beam_system::query_effect(float);
// public: void c_beam_system::frame_advance(float);
// public: long c_beam_system::get_effect_index(void) const;
// public: long c_beam_location::get_next_sibling_index(void) const;
// public: void c_beam_system::submit(long, enum e_effect_pass);
// public: unsigned char c_beam_system::get_camera_mode(void) const;
// public: bool c_beam_location::get_first_person(void) const;
// public: long c_beam_system::count(void) const;
// public: static void c_beam_system::count_by_priority(void);
// void __tls_set_g_beam_location_allocator(void *);
// public: static void c_beam_location::initialize_for_game(void);
// public: static void c_beam_location::initialize_for_map(void);
// public: static void c_beam_location::dispose_from_map(void);
// public: static void c_beam_location::dispose_from_game(void);
// public: static long c_beam_location::create(unsigned char, long, struct real_matrix4x3const *, unsigned long);
// public: long c_beam_system_definition::get_beam_count(void) const;
// public: void c_beam::set_next_sibling_index(long);
// public: static void c_beam_location::destroy(long);
// public: void c_beam_location::add_sibling(long);
// public: void c_beam_location::frame_advance(float, class c_beam_states *);
// public: long c_beam::get_next_sibling_index(void) const;
// public: void c_beam_location::submit(void);
// public: long c_beam_location::count(void) const;
// void __tls_set_g_beam_allocator(void *);
// public: static void c_beam::initialize_for_game(void);
// public: static void c_beam::initialize_for_map(void);
// public: static void c_beam::dispose_from_map(void);
// public: static void c_beam::dispose_from_game(void);
// public: static long c_beam::create(unsigned char, long, long, unsigned long);
// public: char const * c_beam_location::get_name(void) const;
// public: float c_beam::real_internal_random_range(float, float) const;
// public: static void c_beam::destroy(long);
// public: void c_beam::frame_advance(float, class c_beam_states *);
// public: void c_beam_definition::evaluate_length_if_not_constant_over_time(class c_beam_states const *, float *) const;
// public: bool c_editable_property_base::is_constant_over_time(void) const;
// public: float c_beam_definition::evaluate_length(class c_beam_states const *) const;
// public: void c_beam_definition::evaluate_offset_if_not_constant_over_time(class c_beam_states const *, float *) const;
// public: float c_beam_definition::evaluate_offset(class c_beam_states const *) const;
// public: void c_beam_definition::evaluate_profile_density_if_not_constant_over_time(class c_beam_states const *, float *) const;
// public: float c_beam_definition::evaluate_profile_density(class c_beam_states const *) const;
// public: float c_beam_location::get_length_cap(void) const;
// private: static void c_beam::render_callback(void const *, long, short, short);
// public: void c_beam::render(void) const;
// public: void c_beam::submit(void) const;
// public: float c_beam_definition::get_sort_bias(void) const;
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// public: long c_beam::count(void) const;
// public: float c_editable_property<class c_beam_states>::evaluate(class c_beam_states const *) const;
// public: void c_data_iterator<class c_beam_system>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_beam_system>::next(void);
// public: class c_beam_system * c_data_iterator<class c_beam_system>::get_datum(void) const;
// public: long c_data_iterator<class c_beam_system>::get_index(void) const;
// public: static bool c_editable_property_base::property_value_is_initialized<float>(float const *);
// void data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level, bool);
// void data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level);
// public: static void c_editable_property_base::set_property_value_to_uninitialized<float>(float *);
// void data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level);
// public: float c_editable_property_base::evaluate<class c_beam_states>(class c_beam_states const *) const;
// public: void c_data_iterator<class c_beam>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_beam>::next(void);
// public: class c_beam * c_data_iterator<class c_beam>::get_datum(void) const;
// void data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level, bool);
// void data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: void c_data_iterator<class c_beam_location>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_beam_location>::next(void);
// public: class c_beam_location * c_data_iterator<class c_beam_location>::get_datum(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>(void);
// void g_beam_system_allocator::`dynamic atexit destructor'(void);
// void g_beam_location_allocator::`dynamic atexit destructor'(void);
// void g_beam_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_beam_system_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_beam_system_allocator@@YAXPAX@Z");
//};

//public: static void c_beam_system::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_beam_system@@SAXXZ");
//};

//public: static void c_beam_system::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_beam_system@@SAXXZ");
//};

//public: static void c_beam_system::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_beam_system@@SAXXZ");
//};

//public: static void c_beam_system::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_beam_system@@SAXXZ");
//};

//public: static void c_beam_system::initialize_for_new_structure_bsp(void)
//{
//    mangled_ppc("?initialize_for_new_structure_bsp@c_beam_system@@SAXXZ");
//};

//public: static void c_beam_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?prepare_for_non_bsp_zone_set_switch@c_beam_system@@SAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//public: static void c_beam_system::handle_tag_changes(void)
//{
//    mangled_ppc("?handle_tag_changes@c_beam_system@@SAXXZ");
//};

//public: static long c_beam_system::create(unsigned char, class c_tag_index, long, unsigned short, unsigned short, class c_tag_index, unsigned char)
//{
//    mangled_ppc("?create@c_beam_system@@SAJEVc_tag_index@@JGG0E@Z");
//};

//public: void c_beam_system::set_should_live(bool)
//{
//    mangled_ppc("?set_should_live@c_beam_system@@QAAX_N@Z");
//};

//public: void c_beam_system::set_should_frame_advance(bool)
//{
//    mangled_ppc("?set_should_frame_advance@c_beam_system@@QAAX_N@Z");
//};

//public: void c_beam_system::set_should_render(bool)
//{
//    mangled_ppc("?set_should_render@c_beam_system@@QAAX_N@Z");
//};

//public: void c_beam_system::set_ever_frame_advanced(bool)
//{
//    mangled_ppc("?set_ever_frame_advanced@c_beam_system@@QAAX_N@Z");
//};

//public: static void c_beam_system::destroy(long)
//{
//    mangled_ppc("?destroy@c_beam_system@@SAXJ@Z");
//};

//public: long c_beam_system::add_beam_location(struct real_matrix4x3const *, unsigned long)
//{
//    mangled_ppc("?add_beam_location@c_beam_system@@QAAJPBUreal_matrix4x3@@K@Z");
//};

//public: long c_beam_system::to_datum_index(void) const
//{
//    mangled_ppc("?to_datum_index@c_beam_system@@QBAJXZ");
//};

//public: unsigned char c_beam_system::get_priority(void) const
//{
//    mangled_ppc("?get_priority@c_beam_system@@QBAEXZ");
//};

//public: void c_beam_system::remove_further_beam_locations(long)
//{
//    mangled_ppc("?remove_further_beam_locations@c_beam_system@@QAAXJ@Z");
//};

//public: long c_beam_location::get_next_sibling(void) const
//{
//    mangled_ppc("?get_next_sibling@c_beam_location@@QBAJXZ");
//};

//public: void c_beam_location::clear_next_sibling(void)
//{
//    mangled_ppc("?clear_next_sibling@c_beam_location@@QAAXXZ");
//};

//public: static void c_beam_system::pulse_all(float)
//{
//    mangled_ppc("?pulse_all@c_beam_system@@SAXM@Z");
//};

//public: static void c_beam_system::frame_advance_all(float)
//{
//    mangled_ppc("?frame_advance_all@c_beam_system@@SAXM@Z");
//};

//public: bool c_beam_system::get_should_live(void) const
//{
//    mangled_ppc("?get_should_live@c_beam_system@@QBA_NXZ");
//};

//public: bool c_beam_system::get_should_frame_advance(void) const
//{
//    mangled_ppc("?get_should_frame_advance@c_beam_system@@QBA_NXZ");
//};

//public: static void c_beam_system::frame_advance_all_gpu(float)
//{
//    mangled_ppc("?frame_advance_all_gpu@c_beam_system@@SAXM@Z");
//};

//public: static void c_beam_system::submit_all(enum e_output_user_index, enum e_effect_pass)
//{
//    mangled_ppc("?submit_all@c_beam_system@@SAXW4e_output_user_index@@W4e_effect_pass@@@Z");
//};

//public: bool c_beam_system::get_should_render(void) const
//{
//    mangled_ppc("?get_should_render@c_beam_system@@QBA_NXZ");
//};

//public: void c_beam_system::query_effect(float)
//{
//    mangled_ppc("?query_effect@c_beam_system@@QAAXM@Z");
//};

//public: void c_beam_system::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_beam_system@@QAAXM@Z");
//};

//public: long c_beam_system::get_effect_index(void) const
//{
//    mangled_ppc("?get_effect_index@c_beam_system@@QBAJXZ");
//};

//public: long c_beam_location::get_next_sibling_index(void) const
//{
//    mangled_ppc("?get_next_sibling_index@c_beam_location@@QBAJXZ");
//};

//public: void c_beam_system::submit(long, enum e_effect_pass)
//{
//    mangled_ppc("?submit@c_beam_system@@QAAXJW4e_effect_pass@@@Z");
//};

//public: unsigned char c_beam_system::get_camera_mode(void) const
//{
//    mangled_ppc("?get_camera_mode@c_beam_system@@QBAEXZ");
//};

//public: bool c_beam_location::get_first_person(void) const
//{
//    mangled_ppc("?get_first_person@c_beam_location@@QBA_NXZ");
//};

//public: long c_beam_system::count(void) const
//{
//    mangled_ppc("?count@c_beam_system@@QBAJXZ");
//};

//public: static void c_beam_system::count_by_priority(void)
//{
//    mangled_ppc("?count_by_priority@c_beam_system@@SAXXZ");
//};

//void __tls_set_g_beam_location_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_beam_location_allocator@@YAXPAX@Z");
//};

//public: static void c_beam_location::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_beam_location@@SAXXZ");
//};

//public: static void c_beam_location::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_beam_location@@SAXXZ");
//};

//public: static void c_beam_location::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_beam_location@@SAXXZ");
//};

//public: static void c_beam_location::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_beam_location@@SAXXZ");
//};

//public: static long c_beam_location::create(unsigned char, long, struct real_matrix4x3const *, unsigned long)
//{
//    mangled_ppc("?create@c_beam_location@@SAJEJPBUreal_matrix4x3@@K@Z");
//};

//public: long c_beam_system_definition::get_beam_count(void) const
//{
//    mangled_ppc("?get_beam_count@c_beam_system_definition@@QBAJXZ");
//};

//public: void c_beam::set_next_sibling_index(long)
//{
//    mangled_ppc("?set_next_sibling_index@c_beam@@QAAXJ@Z");
//};

//public: static void c_beam_location::destroy(long)
//{
//    mangled_ppc("?destroy@c_beam_location@@SAXJ@Z");
//};

//public: void c_beam_location::add_sibling(long)
//{
//    mangled_ppc("?add_sibling@c_beam_location@@QAAXJ@Z");
//};

//public: void c_beam_location::frame_advance(float, class c_beam_states *)
//{
//    mangled_ppc("?frame_advance@c_beam_location@@QAAXMPAVc_beam_states@@@Z");
//};

//public: long c_beam::get_next_sibling_index(void) const
//{
//    mangled_ppc("?get_next_sibling_index@c_beam@@QBAJXZ");
//};

//public: void c_beam_location::submit(void)
//{
//    mangled_ppc("?submit@c_beam_location@@QAAXXZ");
//};

//public: long c_beam_location::count(void) const
//{
//    mangled_ppc("?count@c_beam_location@@QBAJXZ");
//};

//void __tls_set_g_beam_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_beam_allocator@@YAXPAX@Z");
//};

//public: static void c_beam::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_beam@@SAXXZ");
//};

//public: static void c_beam::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_beam@@SAXXZ");
//};

//public: static void c_beam::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_beam@@SAXXZ");
//};

//public: static void c_beam::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_beam@@SAXXZ");
//};

//public: static long c_beam::create(unsigned char, long, long, unsigned long)
//{
//    mangled_ppc("?create@c_beam@@SAJEJJK@Z");
//};

//public: char const * c_beam_location::get_name(void) const
//{
//    mangled_ppc("?get_name@c_beam_location@@QBAPBDXZ");
//};

//public: float c_beam::real_internal_random_range(float, float) const
//{
//    mangled_ppc("?real_internal_random_range@c_beam@@QBAMMM@Z");
//};

//public: static void c_beam::destroy(long)
//{
//    mangled_ppc("?destroy@c_beam@@SAXJ@Z");
//};

//public: void c_beam::frame_advance(float, class c_beam_states *)
//{
//    mangled_ppc("?frame_advance@c_beam@@QAAXMPAVc_beam_states@@@Z");
//};

//public: void c_beam_definition::evaluate_length_if_not_constant_over_time(class c_beam_states const *, float *) const
//{
//    mangled_ppc("?evaluate_length_if_not_constant_over_time@c_beam_definition@@QBAXPBVc_beam_states@@PAM@Z");
//};

//public: bool c_editable_property_base::is_constant_over_time(void) const
//{
//    mangled_ppc("?is_constant_over_time@c_editable_property_base@@QBA_NXZ");
//};

//public: float c_beam_definition::evaluate_length(class c_beam_states const *) const
//{
//    mangled_ppc("?evaluate_length@c_beam_definition@@QBAMPBVc_beam_states@@@Z");
//};

//public: void c_beam_definition::evaluate_offset_if_not_constant_over_time(class c_beam_states const *, float *) const
//{
//    mangled_ppc("?evaluate_offset_if_not_constant_over_time@c_beam_definition@@QBAXPBVc_beam_states@@PAM@Z");
//};

//public: float c_beam_definition::evaluate_offset(class c_beam_states const *) const
//{
//    mangled_ppc("?evaluate_offset@c_beam_definition@@QBAMPBVc_beam_states@@@Z");
//};

//public: void c_beam_definition::evaluate_profile_density_if_not_constant_over_time(class c_beam_states const *, float *) const
//{
//    mangled_ppc("?evaluate_profile_density_if_not_constant_over_time@c_beam_definition@@QBAXPBVc_beam_states@@PAM@Z");
//};

//public: float c_beam_definition::evaluate_profile_density(class c_beam_states const *) const
//{
//    mangled_ppc("?evaluate_profile_density@c_beam_definition@@QBAMPBVc_beam_states@@@Z");
//};

//public: float c_beam_location::get_length_cap(void) const
//{
//    mangled_ppc("?get_length_cap@c_beam_location@@QBAMXZ");
//};

//private: static void c_beam::render_callback(void const *, long, short, short)
//{
//    mangled_ppc("?render_callback@c_beam@@CAXPBXJFF@Z");
//};

//public: void c_beam::render(void) const
//{
//    mangled_ppc("?render@c_beam@@QBAXXZ");
//};

//public: void c_beam::submit(void) const
//{
//    mangled_ppc("?submit@c_beam@@QBAXXZ");
//};

//public: float c_beam_definition::get_sort_bias(void) const
//{
//    mangled_ppc("?get_sort_bias@c_beam_definition@@QBAMXZ");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//public: long c_beam::count(void) const
//{
//    mangled_ppc("?count@c_beam@@QBAJXZ");
//};

//public: float c_editable_property<class c_beam_states>::evaluate(class c_beam_states const *) const
//{
//    mangled_ppc("?evaluate@?$c_editable_property@Vc_beam_states@@@@QBAMPBVc_beam_states@@@Z");
//};

//public: void c_data_iterator<class c_beam_system>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_beam_system@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_beam_system>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_beam_system@@@@QAA_NXZ");
//};

//public: class c_beam_system * c_data_iterator<class c_beam_system>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_beam_system@@@@QBAPAVc_beam_system@@XZ");
//};

//public: long c_data_iterator<class c_beam_system>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Vc_beam_system@@@@QBAJXZ");
//};

//public: static bool c_editable_property_base::property_value_is_initialized<float>(float const *)
//{
//    mangled_ppc("??$property_value_is_initialized@M@c_editable_property_base@@SA_NPBM@Z");
//};

//void data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_beam_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_beam@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//void data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_beam_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//public: static void c_editable_property_base::set_property_value_to_uninitialized<float>(float *)
//{
//    mangled_ppc("??$set_property_value_to_uninitialized@M@c_editable_property_base@@SAXPAM@Z");
//};

//void data_dump<class c_beam>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_beam@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//public: float c_editable_property_base::evaluate<class c_beam_states>(class c_beam_states const *) const
//{
//    mangled_ppc("??$evaluate@Vc_beam_states@@@c_editable_property_base@@QBAMPBVc_beam_states@@@Z");
//};

//public: void c_data_iterator<class c_beam>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_beam@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_beam>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_beam@@@@QAA_NXZ");
//};

//public: class c_beam * c_data_iterator<class c_beam>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_beam@@@@QBAPAVc_beam@@XZ");
//};

//void data_dump<class c_beam_system>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_beam_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//void data_dump<class c_beam_location>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_beam_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: void c_data_iterator<class c_beam_location>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_beam_location@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_beam_location>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_beam_location@@@@QAA_NXZ");
//};

//public: class c_beam_location * c_data_iterator<class c_beam_location>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_beam_location@@@@QBAPAVc_beam_location@@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_system_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_system_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_location_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_location_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_beam_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_beam_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_beam_system_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_beam_system_allocator@@YAXXZ");
//};

//void g_beam_location_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_beam_location_allocator@@YAXXZ");
//};

//void g_beam_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_beam_allocator@@YAXXZ");
//};

