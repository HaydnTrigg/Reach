/* ---------- headers */

#include "omaha\physics\havok_collision_damage.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum s_collision_damage_aftermath_cache::e_flag const c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@2W4e_flag@s_collision_damage_aftermath_cache@@B"
// public: static long const s_static_array<struct s_collision_damage_aftermath_cache, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@2JB"
// public: static long const s_static_array<struct s_breakable_surface_damage_cache, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@2JB"
// public: static long const s_static_array<struct s_collision_damage_owner_transfer, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@2JB"
// public: static long const s_static_array<struct `void __cdecl havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_damage_owner_transfer_result@?7??havok_collision_damage_post_move_update@@YAXXZ@$0IA@@@2JB"
// public: static long const s_static_array<struct s_collision_damage_aftermath_cache *, 128>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_collision_damage_aftermath_cache@@$0IA@@@2JB"
// public: static long const s_static_array<struct s_breakable_surface_damage_cache *, 128>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_breakable_surface_damage_cache@@$0IA@@@2JB"
// bool disable_expensive_physics_rebuilding; // "?disable_expensive_physics_rebuilding@@3_NA"
// long g_debug_collision_damage_current_entry_index; // "?g_debug_collision_damage_current_entry_index@@3JA"
// class c_objects_to_damage_queue g_objects_to_damage_queue; // "?g_objects_to_damage_queue@@3Vc_objects_to_damage_queue@@A"
// class t_event_queue<struct s_breakable_surface_damage_cache, 128> g_breakable_surfaces_damage_queue; // "?g_breakable_surfaces_damage_queue@@3V?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@A"
// class t_event_queue<struct s_collision_damage_owner_transfer, 128> g_damage_owner_transfer_queue; // "?g_damage_owner_transfer_queue@@3V?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@A"
// class c_debug_collision_damage_cache_entry *g_debug_collision_damage_cache_entries; // "?g_debug_collision_damage_cache_entries@@3PAVc_debug_collision_damage_cache_entry@@A"

// void havok_collision_damage_initialize_for_new_map(void);
// void havok_collision_damage_dispose_from_old_map(void);
// void havok_collision_damage_render_debug(void);
// void havok_collision_damage_update(long, long);
// public: s_game_collision_damage_cache::s_game_collision_damage_cache(void);
// void havok_collision_damage_pre_move_update(void);
// void havok_collision_damage_post_move_update(void);
// public: s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>(void);
// public: `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result::s_damage_owner_transfer_result(void);
// public: struct s_collision_damage_aftermath_cache * c_objects_to_damage_queue::try_to_allocate_aftermath(long, long, long, enum e_collision_damage_specific_pathway, class c_global_material_type, union real_point3d const *);
// public: long c_objects_to_damage_queue::peek_pending_count(void) const;
// bool havok_collision_damage_compare_damage_aftermaths(long, long, struct s_collision_damage_aftermath_cache const *);
// bool havok_collision_damage_compare_breakble_surface_aftermaths(long, long, struct s_collision_damage_aftermath_cache const *);
// bool compare_set_of_longs_in_structures(long, long, long const *, long);
// void havok_collision_damage_write_breakable_surface_damage(long, long, float, long, struct s_breakable_surface_damage_cache *);
// struct s_object_physics_payload const * object_physics_payload_get(long);
// public: class c_opaque_data<struct s_object_physics_payload, 12, 4> const & c_havok_component::get_object_physics_payload(void) const;
// struct object_definition const * object_definition_from_object_index_get(long);
// long havok_component_index_from_object_index_get(long);
// long havok_collision_damage_can_write_breakable_surface_damage(long, long, float *);
// float calculate_impulse_for_breakable_surface(long, long);
// void havok_collision_damage_apply_game_damage_recursive(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, union vector3d const *, union vector3d const *, long, class c_global_material_type, float, bool, float);
// bool havok_collision_damage_apply_game_damage(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, union vector3d const *, union vector3d const *, long, class c_global_material_type, float, long, enum e_collision_damage_specific_pathway);
// void havok_collision_damage_apply_absolute_damage_recursive(struct s_collision_damage_definition const *, union real_point3d const *, long, float, class c_global_material_type, float, float, long, enum e_collision_damage_specific_pathway);
// bool havok_collision_damage_has_collision_immunity(long, long);
// void havok_collision_damage_queue_damage_recursive(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, union vector3d const *, union vector3d const *, long, class c_global_material_type, float, bool, float, long, enum e_collision_damage_specific_pathway);
// bool havok_collision_damage_apply_absolute_damage(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, class c_global_material_type, float, float, bool, long, long, enum e_collision_damage_specific_pathway);
// bool havok_collision_damage_can_apply_to_object(long, enum e_collision_damage_type);
// bool havok_collision_damage_game_can_apply_to_object(long, long);
// bool havok_collision_damage_object_is_running_melee_physics(long);
// bool havok_collision_damage_objects_are_friends(long, long);
// bool havok_collision_damage_objects_are_bipeds(long, long);
// bool havok_collision_damage_collision_damage_definition_get(long, struct s_collision_damage_definition *);
// float havok_collision_game_damage_calculate_multiplier(long, long, float, bool *);
// float havok_collision_absolute_damage_calculate_multiplier(long, long, float, bool *);
// public: c_debug_collision_damage_cache_entry::c_debug_collision_damage_cache_entry(void);
// public: void c_debug_collision_damage_cache_entry::set(bool, long, long, float, float, float, float, float, union vector3d const *, union vector3d const *);
// public: long c_debug_collision_damage_cache_entry::get_game_time(void) const;
// public: bool c_debug_collision_damage_cache_entry::is_alive(void);
// public: union real_point3d const * c_debug_collision_damage_cache_entry::get_position(void) const;
// public: void c_debug_collision_damage_cache_entry::clear(void);
// public: long c_debug_collision_damage_cache_entry::get_object_index_a(void) const;
// public: long c_debug_collision_damage_cache_entry::get_object_index_b(void) const;
// public: void c_debug_collision_damage_cache_entry::render(bool);
// public: static class c_debug_collision_damage_cache_entry * c_debug_collision_damage_cache_entry::get_next_free_entry(void);
// public: static bool c_debug_collision_damage_cache_entry::havok_component_applied_damage_in_cache_entry(long);
// public: static bool c_debug_collision_damage_cache_entry::havok_component_recieved_damage_in_cache_entry(long);
// public: struct s_collision_damage_aftermath_cache ** s_static_array<struct s_collision_damage_aftermath_cache *, 128>::get_elements(void);
// public: struct s_breakable_surface_damage_cache ** s_static_array<struct s_breakable_surface_damage_cache *, 128>::get_elements(void);
// public: struct s_object_physics_payload const * c_opaque_data<struct s_object_physics_payload, 12, 4>::get_const(void) const;
// public: bool c_flags_no_init<enum s_object_physics_payload::e_flag, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum s_object_physics_payload::e_flag) const;
// public: void c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum s_collision_damage_aftermath_cache::e_flag) const;
// public: void c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::set(enum s_collision_damage_aftermath_cache::e_flag, bool);
// public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::initialize(void);
// public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::dispose(void);
// public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::reset(void);
// public: long t_event_queue<struct s_collision_damage_aftermath_cache, 128>::peek_pending_count(void) const;
// public: struct s_collision_damage_aftermath_cache * t_event_queue<struct s_collision_damage_aftermath_cache, 128>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::queue_event(struct s_collision_damage_aftermath_cache *);
// public: struct s_collision_damage_aftermath_cache * t_event_queue<struct s_collision_damage_aftermath_cache, 128>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_collision_damage_aftermath_cache * t_event_queue<struct s_collision_damage_aftermath_cache, 128>::release_chain_top_event(struct s_collision_damage_aftermath_cache *);
// public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::initialize(void);
// public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::dispose(void);
// public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::reset(void);
// public: struct s_breakable_surface_damage_cache * t_event_queue<struct s_breakable_surface_damage_cache, 128>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::queue_event(struct s_breakable_surface_damage_cache *);
// public: struct s_breakable_surface_damage_cache * t_event_queue<struct s_breakable_surface_damage_cache, 128>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_breakable_surface_damage_cache * t_event_queue<struct s_breakable_surface_damage_cache, 128>::release_chain_top_event(struct s_breakable_surface_damage_cache *);
// public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::initialize(void);
// public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::dispose(void);
// public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::reset(void);
// public: struct s_collision_damage_owner_transfer * t_event_queue<struct s_collision_damage_owner_transfer, 128>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::queue_event(struct s_collision_damage_owner_transfer *);
// public: struct s_collision_damage_owner_transfer * t_event_queue<struct s_collision_damage_owner_transfer, 128>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_collision_damage_owner_transfer * t_event_queue<struct s_collision_damage_owner_transfer, 128>::release_chain_top_event(struct s_collision_damage_owner_transfer *);
// public: struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result & s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::operator[]<long>(long);
// public: struct s_collision_damage_aftermath_cache *& s_static_array<struct s_collision_damage_aftermath_cache *, 128>::operator[]<long>(long);
// public: struct s_breakable_surface_damage_cache *& s_static_array<struct s_breakable_surface_damage_cache *, 128>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum s_collision_damage_aftermath_cache::e_flag);
// private: static unsigned long c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum s_collision_damage_aftermath_cache::e_flag);
// public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::initialize_limited(long);
// public: bool t_event_queue<struct s_collision_damage_aftermath_cache, 128>::valid_event(void const *) const;
// public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::initialize_limited(long);
// public: bool t_event_queue<struct s_breakable_surface_damage_cache, 128>::valid_event(void const *) const;
// public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::initialize_limited(long);
// public: bool t_event_queue<struct s_collision_damage_owner_transfer, 128>::valid_event(void const *) const;
// public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: static bool s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_collision_damage_aftermath_cache *, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_breakable_surface_damage_cache *, 128>::valid<long>(long);
// public: static long s_static_array<struct s_collision_damage_aftermath_cache, 128>::get_count(void);
// public: static long s_static_array<struct s_breakable_surface_damage_cache, 128>::get_count(void);
// public: static long s_static_array<struct s_collision_damage_owner_transfer, 128>::get_count(void);
// public: struct s_collision_damage_aftermath_cache & s_static_array<struct s_collision_damage_aftermath_cache, 128>::operator[]<long>(long);
// public: struct s_collision_damage_aftermath_cache const & s_static_array<struct s_collision_damage_aftermath_cache, 128>::operator[]<int>(int) const;
// public: struct s_collision_damage_aftermath_cache const & s_static_array<struct s_collision_damage_aftermath_cache, 128>::operator[]<long>(long) const;
// public: struct s_breakable_surface_damage_cache & s_static_array<struct s_breakable_surface_damage_cache, 128>::operator[]<long>(long);
// public: struct s_breakable_surface_damage_cache const & s_static_array<struct s_breakable_surface_damage_cache, 128>::operator[]<int>(int) const;
// public: struct s_breakable_surface_damage_cache const & s_static_array<struct s_breakable_surface_damage_cache, 128>::operator[]<long>(long) const;
// public: struct s_collision_damage_owner_transfer & s_static_array<struct s_collision_damage_owner_transfer, 128>::operator[]<long>(long);
// public: struct s_collision_damage_owner_transfer const & s_static_array<struct s_collision_damage_owner_transfer, 128>::operator[]<int>(int) const;
// public: struct s_collision_damage_owner_transfer const & s_static_array<struct s_collision_damage_owner_transfer, 128>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_collision_damage_aftermath_cache, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_collision_damage_aftermath_cache, 128>::valid<int>(int);
// public: static bool s_static_array<struct s_breakable_surface_damage_cache, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_breakable_surface_damage_cache, 128>::valid<int>(int);
// public: static bool s_static_array<struct s_collision_damage_owner_transfer, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_collision_damage_owner_transfer, 128>::valid<int>(int);
// public: c_objects_to_damage_queue::c_objects_to_damage_queue(void);
// public: t_event_queue<struct s_collision_damage_aftermath_cache, 128>::t_event_queue<struct s_collision_damage_aftermath_cache, 128>(void);
// public: s_static_array<struct s_collision_damage_aftermath_cache, 128>::s_static_array<struct s_collision_damage_aftermath_cache, 128>(void);
// public: s_collision_damage_aftermath_cache::s_collision_damage_aftermath_cache(void);
// public: c_flags<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::c_flags<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned long c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum s_collision_damage_aftermath_cache::e_flag);
// public: t_event_queue<struct s_breakable_surface_damage_cache, 128>::t_event_queue<struct s_breakable_surface_damage_cache, 128>(void);
// public: s_static_array<struct s_breakable_surface_damage_cache, 128>::s_static_array<struct s_breakable_surface_damage_cache, 128>(void);
// public: s_breakable_surface_damage_cache::s_breakable_surface_damage_cache(void);
// public: t_event_queue<struct s_collision_damage_owner_transfer, 128>::t_event_queue<struct s_collision_damage_owner_transfer, 128>(void);
// public: c_objects_to_damage_queue::~c_objects_to_damage_queue(void);
// public: t_event_queue<struct s_collision_damage_aftermath_cache, 128>::~t_event_queue<struct s_collision_damage_aftermath_cache, 128>(void);
// public: t_event_queue<struct s_breakable_surface_damage_cache, 128>::~t_event_queue<struct s_breakable_surface_damage_cache, 128>(void);
// public: t_event_queue<struct s_collision_damage_owner_transfer, 128>::~t_event_queue<struct s_collision_damage_owner_transfer, 128>(void);
// void g_objects_to_damage_queue::`dynamic atexit destructor'(void);
// void g_breakable_surfaces_damage_queue::`dynamic atexit destructor'(void);
// void g_damage_owner_transfer_queue::`dynamic atexit destructor'(void);

//void havok_collision_damage_initialize_for_new_map(void)
//{
//    mangled_ppc("?havok_collision_damage_initialize_for_new_map@@YAXXZ");
//};

//void havok_collision_damage_dispose_from_old_map(void)
//{
//    mangled_ppc("?havok_collision_damage_dispose_from_old_map@@YAXXZ");
//};

//void havok_collision_damage_render_debug(void)
//{
//    mangled_ppc("?havok_collision_damage_render_debug@@YAXXZ");
//};

//void havok_collision_damage_update(long, long)
//{
//    mangled_ppc("?havok_collision_damage_update@@YAXJJ@Z");
//};

//public: s_game_collision_damage_cache::s_game_collision_damage_cache(void)
//{
//    mangled_ppc("??0s_game_collision_damage_cache@@QAA@XZ");
//};

//void havok_collision_damage_pre_move_update(void)
//{
//    mangled_ppc("?havok_collision_damage_pre_move_update@@YAXXZ");
//};

//void havok_collision_damage_post_move_update(void)
//{
//    mangled_ppc("?havok_collision_damage_post_move_update@@YAXXZ");
//};

//public: s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_damage_owner_transfer_result@?7??havok_collision_damage_post_move_update@@YAXXZ@$0IA@@@QAA@XZ");
//};

//public: `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result::s_damage_owner_transfer_result(void)
//{
//    mangled_ppc("??0s_damage_owner_transfer_result@?7??havok_collision_damage_post_move_update@@YAXXZ@QAA@XZ");
//};

//public: struct s_collision_damage_aftermath_cache * c_objects_to_damage_queue::try_to_allocate_aftermath(long, long, long, enum e_collision_damage_specific_pathway, class c_global_material_type, union real_point3d const *)
//{
//    mangled_ppc("?try_to_allocate_aftermath@c_objects_to_damage_queue@@QAAPAUs_collision_damage_aftermath_cache@@JJJW4e_collision_damage_specific_pathway@@Vc_global_material_type@@PBTreal_point3d@@@Z");
//};

//public: long c_objects_to_damage_queue::peek_pending_count(void) const
//{
//    mangled_ppc("?peek_pending_count@c_objects_to_damage_queue@@QBAJXZ");
//};

//bool havok_collision_damage_compare_damage_aftermaths(long, long, struct s_collision_damage_aftermath_cache const *)
//{
//    mangled_ppc("?havok_collision_damage_compare_damage_aftermaths@@YA_NJJPBUs_collision_damage_aftermath_cache@@@Z");
//};

//bool havok_collision_damage_compare_breakble_surface_aftermaths(long, long, struct s_collision_damage_aftermath_cache const *)
//{
//    mangled_ppc("?havok_collision_damage_compare_breakble_surface_aftermaths@@YA_NJJPBUs_collision_damage_aftermath_cache@@@Z");
//};

//bool compare_set_of_longs_in_structures(long, long, long const *, long)
//{
//    mangled_ppc("?compare_set_of_longs_in_structures@@YA_NJJPBJJ@Z");
//};

//void havok_collision_damage_write_breakable_surface_damage(long, long, float, long, struct s_breakable_surface_damage_cache *)
//{
//    mangled_ppc("?havok_collision_damage_write_breakable_surface_damage@@YAXJJMJPAUs_breakable_surface_damage_cache@@@Z");
//};

//struct s_object_physics_payload const * object_physics_payload_get(long)
//{
//    mangled_ppc("?object_physics_payload_get@@YAPBUs_object_physics_payload@@J@Z");
//};

//public: class c_opaque_data<struct s_object_physics_payload, 12, 4> const & c_havok_component::get_object_physics_payload(void) const
//{
//    mangled_ppc("?get_object_physics_payload@c_havok_component@@QBAABV?$c_opaque_data@Us_object_physics_payload@@$0M@$03@@XZ");
//};

//struct object_definition const * object_definition_from_object_index_get(long)
//{
//    mangled_ppc("?object_definition_from_object_index_get@@YAPBUobject_definition@@J@Z");
//};

//long havok_component_index_from_object_index_get(long)
//{
//    mangled_ppc("?havok_component_index_from_object_index_get@@YAJJ@Z");
//};

//long havok_collision_damage_can_write_breakable_surface_damage(long, long, float *)
//{
//    mangled_ppc("?havok_collision_damage_can_write_breakable_surface_damage@@YAJJJPAM@Z");
//};

//float calculate_impulse_for_breakable_surface(long, long)
//{
//    mangled_ppc("?calculate_impulse_for_breakable_surface@@YAMJJ@Z");
//};

//void havok_collision_damage_apply_game_damage_recursive(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, union vector3d const *, union vector3d const *, long, class c_global_material_type, float, bool, float)
//{
//    mangled_ppc("?havok_collision_damage_apply_game_damage_recursive@@YAXPBUs_collision_damage_definition@@0PBTreal_point3d@@JMPBTvector3d@@2JVc_global_material_type@@M_NM@Z");
//};

//bool havok_collision_damage_apply_game_damage(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, union vector3d const *, union vector3d const *, long, class c_global_material_type, float, long, enum e_collision_damage_specific_pathway)
//{
//    mangled_ppc("?havok_collision_damage_apply_game_damage@@YA_NPBUs_collision_damage_definition@@0PBTreal_point3d@@JMPBTvector3d@@2JVc_global_material_type@@MJW4e_collision_damage_specific_pathway@@@Z");
//};

//void havok_collision_damage_apply_absolute_damage_recursive(struct s_collision_damage_definition const *, union real_point3d const *, long, float, class c_global_material_type, float, float, long, enum e_collision_damage_specific_pathway)
//{
//    mangled_ppc("?havok_collision_damage_apply_absolute_damage_recursive@@YAXPBUs_collision_damage_definition@@PBTreal_point3d@@JMVc_global_material_type@@MMJW4e_collision_damage_specific_pathway@@@Z");
//};

//bool havok_collision_damage_has_collision_immunity(long, long)
//{
//    mangled_ppc("?havok_collision_damage_has_collision_immunity@@YA_NJJ@Z");
//};

//void havok_collision_damage_queue_damage_recursive(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, union vector3d const *, union vector3d const *, long, class c_global_material_type, float, bool, float, long, enum e_collision_damage_specific_pathway)
//{
//    mangled_ppc("?havok_collision_damage_queue_damage_recursive@@YAXPBUs_collision_damage_definition@@0PBTreal_point3d@@JMPBTvector3d@@2JVc_global_material_type@@M_NMJW4e_collision_damage_specific_pathway@@@Z");
//};

//bool havok_collision_damage_apply_absolute_damage(struct s_collision_damage_definition const *, struct s_collision_damage_definition const *, union real_point3d const *, long, float, class c_global_material_type, float, float, bool, long, long, enum e_collision_damage_specific_pathway)
//{
//    mangled_ppc("?havok_collision_damage_apply_absolute_damage@@YA_NPBUs_collision_damage_definition@@0PBTreal_point3d@@JMVc_global_material_type@@MM_NJJW4e_collision_damage_specific_pathway@@@Z");
//};

//bool havok_collision_damage_can_apply_to_object(long, enum e_collision_damage_type)
//{
//    mangled_ppc("?havok_collision_damage_can_apply_to_object@@YA_NJW4e_collision_damage_type@@@Z");
//};

//bool havok_collision_damage_game_can_apply_to_object(long, long)
//{
//    mangled_ppc("?havok_collision_damage_game_can_apply_to_object@@YA_NJJ@Z");
//};

//bool havok_collision_damage_object_is_running_melee_physics(long)
//{
//    mangled_ppc("?havok_collision_damage_object_is_running_melee_physics@@YA_NJ@Z");
//};

//bool havok_collision_damage_objects_are_friends(long, long)
//{
//    mangled_ppc("?havok_collision_damage_objects_are_friends@@YA_NJJ@Z");
//};

//bool havok_collision_damage_objects_are_bipeds(long, long)
//{
//    mangled_ppc("?havok_collision_damage_objects_are_bipeds@@YA_NJJ@Z");
//};

//bool havok_collision_damage_collision_damage_definition_get(long, struct s_collision_damage_definition *)
//{
//    mangled_ppc("?havok_collision_damage_collision_damage_definition_get@@YA_NJPAUs_collision_damage_definition@@@Z");
//};

//float havok_collision_game_damage_calculate_multiplier(long, long, float, bool *)
//{
//    mangled_ppc("?havok_collision_game_damage_calculate_multiplier@@YAMJJMPA_N@Z");
//};

//float havok_collision_absolute_damage_calculate_multiplier(long, long, float, bool *)
//{
//    mangled_ppc("?havok_collision_absolute_damage_calculate_multiplier@@YAMJJMPA_N@Z");
//};

//public: c_debug_collision_damage_cache_entry::c_debug_collision_damage_cache_entry(void)
//{
//    mangled_ppc("??0c_debug_collision_damage_cache_entry@@QAA@XZ");
//};

//public: void c_debug_collision_damage_cache_entry::set(bool, long, long, float, float, float, float, float, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?set@c_debug_collision_damage_cache_entry@@QAAX_NJJMMMMMPBTvector3d@@1@Z");
//};

//public: long c_debug_collision_damage_cache_entry::get_game_time(void) const
//{
//    mangled_ppc("?get_game_time@c_debug_collision_damage_cache_entry@@QBAJXZ");
//};

//public: bool c_debug_collision_damage_cache_entry::is_alive(void)
//{
//    mangled_ppc("?is_alive@c_debug_collision_damage_cache_entry@@QAA_NXZ");
//};

//public: union real_point3d const * c_debug_collision_damage_cache_entry::get_position(void) const
//{
//    mangled_ppc("?get_position@c_debug_collision_damage_cache_entry@@QBAPBTreal_point3d@@XZ");
//};

//public: void c_debug_collision_damage_cache_entry::clear(void)
//{
//    mangled_ppc("?clear@c_debug_collision_damage_cache_entry@@QAAXXZ");
//};

//public: long c_debug_collision_damage_cache_entry::get_object_index_a(void) const
//{
//    mangled_ppc("?get_object_index_a@c_debug_collision_damage_cache_entry@@QBAJXZ");
//};

//public: long c_debug_collision_damage_cache_entry::get_object_index_b(void) const
//{
//    mangled_ppc("?get_object_index_b@c_debug_collision_damage_cache_entry@@QBAJXZ");
//};

//public: void c_debug_collision_damage_cache_entry::render(bool)
//{
//    mangled_ppc("?render@c_debug_collision_damage_cache_entry@@QAAX_N@Z");
//};

//public: static class c_debug_collision_damage_cache_entry * c_debug_collision_damage_cache_entry::get_next_free_entry(void)
//{
//    mangled_ppc("?get_next_free_entry@c_debug_collision_damage_cache_entry@@SAPAV1@XZ");
//};

//public: static bool c_debug_collision_damage_cache_entry::havok_component_applied_damage_in_cache_entry(long)
//{
//    mangled_ppc("?havok_component_applied_damage_in_cache_entry@c_debug_collision_damage_cache_entry@@SA_NJ@Z");
//};

//public: static bool c_debug_collision_damage_cache_entry::havok_component_recieved_damage_in_cache_entry(long)
//{
//    mangled_ppc("?havok_component_recieved_damage_in_cache_entry@c_debug_collision_damage_cache_entry@@SA_NJ@Z");
//};

//public: struct s_collision_damage_aftermath_cache ** s_static_array<struct s_collision_damage_aftermath_cache *, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_collision_damage_aftermath_cache@@$0IA@@@QAAPAPAUs_collision_damage_aftermath_cache@@XZ");
//};

//public: struct s_breakable_surface_damage_cache ** s_static_array<struct s_breakable_surface_damage_cache *, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_breakable_surface_damage_cache@@$0IA@@@QAAPAPAUs_breakable_surface_damage_cache@@XZ");
//};

//public: struct s_object_physics_payload const * c_opaque_data<struct s_object_physics_payload, 12, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_opaque_data@Us_object_physics_payload@@$0M@$03@@QBAPBUs_object_physics_payload@@XZ");
//};

//public: bool c_flags_no_init<enum s_object_physics_payload::e_flag, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum s_object_physics_payload::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_object_physics_payload@@G$02Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_object_physics_payload@@@Z");
//};

//public: void c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum s_collision_damage_aftermath_cache::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_collision_damage_aftermath_cache@@@Z");
//};

//public: void c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::set(enum s_collision_damage_aftermath_cache::e_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@QAAXW4e_flag@s_collision_damage_aftermath_cache@@_N@Z");
//};

//public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::dispose(void)
//{
//    mangled_ppc("?dispose@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::reset(void)
//{
//    mangled_ppc("?reset@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAXXZ");
//};

//public: long t_event_queue<struct s_collision_damage_aftermath_cache, 128>::peek_pending_count(void) const
//{
//    mangled_ppc("?peek_pending_count@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QBAJXZ");
//};

//public: struct s_collision_damage_aftermath_cache * t_event_queue<struct s_collision_damage_aftermath_cache, 128>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAPAUs_collision_damage_aftermath_cache@@XZ");
//};

//public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::queue_event(struct s_collision_damage_aftermath_cache *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAXPAUs_collision_damage_aftermath_cache@@@Z");
//};

//public: struct s_collision_damage_aftermath_cache * t_event_queue<struct s_collision_damage_aftermath_cache, 128>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAPAUs_collision_damage_aftermath_cache@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_collision_damage_aftermath_cache * t_event_queue<struct s_collision_damage_aftermath_cache, 128>::release_chain_top_event(struct s_collision_damage_aftermath_cache *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAPAUs_collision_damage_aftermath_cache@@PAU2@@Z");
//};

//public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::dispose(void)
//{
//    mangled_ppc("?dispose@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::reset(void)
//{
//    mangled_ppc("?reset@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAXXZ");
//};

//public: struct s_breakable_surface_damage_cache * t_event_queue<struct s_breakable_surface_damage_cache, 128>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAPAUs_breakable_surface_damage_cache@@XZ");
//};

//public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::queue_event(struct s_breakable_surface_damage_cache *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAXPAUs_breakable_surface_damage_cache@@@Z");
//};

//public: struct s_breakable_surface_damage_cache * t_event_queue<struct s_breakable_surface_damage_cache, 128>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAPAUs_breakable_surface_damage_cache@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_breakable_surface_damage_cache * t_event_queue<struct s_breakable_surface_damage_cache, 128>::release_chain_top_event(struct s_breakable_surface_damage_cache *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAPAUs_breakable_surface_damage_cache@@PAU2@@Z");
//};

//public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::dispose(void)
//{
//    mangled_ppc("?dispose@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::reset(void)
//{
//    mangled_ppc("?reset@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAXXZ");
//};

//public: struct s_collision_damage_owner_transfer * t_event_queue<struct s_collision_damage_owner_transfer, 128>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAPAUs_collision_damage_owner_transfer@@XZ");
//};

//public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::queue_event(struct s_collision_damage_owner_transfer *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAXPAUs_collision_damage_owner_transfer@@@Z");
//};

//public: struct s_collision_damage_owner_transfer * t_event_queue<struct s_collision_damage_owner_transfer, 128>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAPAUs_collision_damage_owner_transfer@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_collision_damage_owner_transfer * t_event_queue<struct s_collision_damage_owner_transfer, 128>::release_chain_top_event(struct s_collision_damage_owner_transfer *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAPAUs_collision_damage_owner_transfer@@PAU2@@Z");
//};

//public: struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result & s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_damage_owner_transfer_result@?7??havok_collision_damage_post_move_update@@YAXXZ@$0IA@@@QAAAAUs_damage_owner_transfer_result@?7??havok_collision_damage_post_move_update@@YAXXZ@J@Z");
//};

//public: struct s_collision_damage_aftermath_cache *& s_static_array<struct s_collision_damage_aftermath_cache *, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_collision_damage_aftermath_cache@@$0IA@@@QAAAAPAUs_collision_damage_aftermath_cache@@J@Z");
//};

//public: struct s_breakable_surface_damage_cache *& s_static_array<struct s_breakable_surface_damage_cache *, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_breakable_surface_damage_cache@@$0IA@@@QAAAAPAUs_breakable_surface_damage_cache@@J@Z");
//};

//public: static bool c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum s_collision_damage_aftermath_cache::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_collision_damage_aftermath_cache@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum s_collision_damage_aftermath_cache::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@CAKW4e_flag@s_collision_damage_aftermath_cache@@@Z");
//};

//public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_collision_damage_aftermath_cache, 128>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_collision_damage_aftermath_cache, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_breakable_surface_damage_cache, 128>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_breakable_surface_damage_cache, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_collision_damage_owner_transfer, 128>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_collision_damage_owner_transfer, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: static bool s_static_array<struct `void havok_collision_damage_post_move_update(void)'::`8'::s_damage_owner_transfer_result, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_damage_owner_transfer_result@?7??havok_collision_damage_post_move_update@@YAXXZ@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_collision_damage_aftermath_cache *, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_collision_damage_aftermath_cache@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_breakable_surface_damage_cache *, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_breakable_surface_damage_cache@@$0IA@@@SA_NJ@Z");
//};

//public: static long s_static_array<struct s_collision_damage_aftermath_cache, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@SAJXZ");
//};

//public: static long s_static_array<struct s_breakable_surface_damage_cache, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@SAJXZ");
//};

//public: static long s_static_array<struct s_collision_damage_owner_transfer, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@SAJXZ");
//};

//public: struct s_collision_damage_aftermath_cache & s_static_array<struct s_collision_damage_aftermath_cache, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@QAAAAUs_collision_damage_aftermath_cache@@J@Z");
//};

//public: struct s_collision_damage_aftermath_cache const & s_static_array<struct s_collision_damage_aftermath_cache, 128>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@QBAABUs_collision_damage_aftermath_cache@@H@Z");
//};

//public: struct s_collision_damage_aftermath_cache const & s_static_array<struct s_collision_damage_aftermath_cache, 128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@QBAABUs_collision_damage_aftermath_cache@@J@Z");
//};

//public: struct s_breakable_surface_damage_cache & s_static_array<struct s_breakable_surface_damage_cache, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@QAAAAUs_breakable_surface_damage_cache@@J@Z");
//};

//public: struct s_breakable_surface_damage_cache const & s_static_array<struct s_breakable_surface_damage_cache, 128>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@QBAABUs_breakable_surface_damage_cache@@H@Z");
//};

//public: struct s_breakable_surface_damage_cache const & s_static_array<struct s_breakable_surface_damage_cache, 128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@QBAABUs_breakable_surface_damage_cache@@J@Z");
//};

//public: struct s_collision_damage_owner_transfer & s_static_array<struct s_collision_damage_owner_transfer, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@QAAAAUs_collision_damage_owner_transfer@@J@Z");
//};

//public: struct s_collision_damage_owner_transfer const & s_static_array<struct s_collision_damage_owner_transfer, 128>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@QBAABUs_collision_damage_owner_transfer@@H@Z");
//};

//public: struct s_collision_damage_owner_transfer const & s_static_array<struct s_collision_damage_owner_transfer, 128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@QBAABUs_collision_damage_owner_transfer@@J@Z");
//};

//public: static bool s_static_array<struct s_collision_damage_aftermath_cache, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_collision_damage_aftermath_cache, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_breakable_surface_damage_cache, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_breakable_surface_damage_cache, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_collision_damage_owner_transfer, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_collision_damage_owner_transfer, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_collision_damage_owner_transfer@@$0IA@@@SA_NH@Z");
//};

//public: c_objects_to_damage_queue::c_objects_to_damage_queue(void)
//{
//    mangled_ppc("??0c_objects_to_damage_queue@@QAA@XZ");
//};

//public: t_event_queue<struct s_collision_damage_aftermath_cache, 128>::t_event_queue<struct s_collision_damage_aftermath_cache, 128>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAA@XZ");
//};

//public: s_static_array<struct s_collision_damage_aftermath_cache, 128>::s_static_array<struct s_collision_damage_aftermath_cache, 128>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_collision_damage_aftermath_cache@@$0IA@@@QAA@XZ");
//};

//public: s_collision_damage_aftermath_cache::s_collision_damage_aftermath_cache(void)
//{
//    mangled_ppc("??0s_collision_damage_aftermath_cache@@QAA@XZ");
//};

//public: c_flags<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::c_flags<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum s_collision_damage_aftermath_cache::e_flag, unsigned long, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum s_collision_damage_aftermath_cache::e_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flag@s_collision_damage_aftermath_cache@@K$03Us_default_enum_string_resolver@@@@CAKW4e_flag@s_collision_damage_aftermath_cache@@@Z");
//};

//public: t_event_queue<struct s_breakable_surface_damage_cache, 128>::t_event_queue<struct s_breakable_surface_damage_cache, 128>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAA@XZ");
//};

//public: s_static_array<struct s_breakable_surface_damage_cache, 128>::s_static_array<struct s_breakable_surface_damage_cache, 128>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_breakable_surface_damage_cache@@$0IA@@@QAA@XZ");
//};

//public: s_breakable_surface_damage_cache::s_breakable_surface_damage_cache(void)
//{
//    mangled_ppc("??0s_breakable_surface_damage_cache@@QAA@XZ");
//};

//public: t_event_queue<struct s_collision_damage_owner_transfer, 128>::t_event_queue<struct s_collision_damage_owner_transfer, 128>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAA@XZ");
//};

//public: c_objects_to_damage_queue::~c_objects_to_damage_queue(void)
//{
//    mangled_ppc("??1c_objects_to_damage_queue@@QAA@XZ");
//};

//public: t_event_queue<struct s_collision_damage_aftermath_cache, 128>::~t_event_queue<struct s_collision_damage_aftermath_cache, 128>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_collision_damage_aftermath_cache@@$0IA@@@QAA@XZ");
//};

//public: t_event_queue<struct s_breakable_surface_damage_cache, 128>::~t_event_queue<struct s_breakable_surface_damage_cache, 128>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_breakable_surface_damage_cache@@$0IA@@@QAA@XZ");
//};

//public: t_event_queue<struct s_collision_damage_owner_transfer, 128>::~t_event_queue<struct s_collision_damage_owner_transfer, 128>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_collision_damage_owner_transfer@@$0IA@@@QAA@XZ");
//};

//void g_objects_to_damage_queue::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_objects_to_damage_queue@@YAXXZ");
//};

//void g_breakable_surfaces_damage_queue::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_breakable_surfaces_damage_queue@@YAXXZ");
//};

//void g_damage_owner_transfer_queue::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_damage_owner_transfer_queue@@YAXXZ");
//};

