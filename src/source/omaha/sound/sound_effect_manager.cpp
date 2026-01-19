/* ---------- headers */

#include "omaha\sound\sound_effect_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_sound_effect_source_type@@D$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_sound_effect_source_type const c_enum_no_init<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_sound_effect_source_type@@D$0A@$02Us_default_enum_string_resolver@@@@2W4e_sound_effect_source_type@@B"
// public: static enum e_looping_sound_flag const c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_looping_sound_flag@@G$05Us_default_enum_string_resolver@@@@2W4e_looping_sound_flag@@B"
// public: static int const c_enum_no_init<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_looping_sound_refresh_state@@D$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_looping_sound_refresh_state const c_enum_no_init<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_looping_sound_refresh_state@@D$0A@$02Us_default_enum_string_resolver@@@@2W4e_looping_sound_refresh_state@@B"
// class t_restricted_allocation_manager<8, 0, 0, void (__cdecl __tls_set_g_sound_effect_data_allocator::*)(void *)> g_sound_effect_data_allocator; // "?g_sound_effect_data_allocator@@3V?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_sound_effect_data; // "?g_sound_effect_data@@3PAUs_data_array@@A"

// void __tls_set_g_sound_effect_data_allocator(void *);
// void sound_effect_manager_refresh_from_loop(long, long, long, unsigned long, unsigned long, struct s_sound_source const *, enum e_looping_sound_refresh_state);
// void sound_effect_manager_loop_stopped(long, long, long);
// void sound_effect_manager_loop_inaudible(long, long, long);
// long sound_effect_manager_create_from_tracker(long, long, long, struct s_sound_impulse_definition *);
// void sound_effect_delete_on_dispatch_failure(long);
// long sound_effect_manager_create_manual(long, float, unsigned long);
// void sound_effect_manager_set_scale_manual(long, float);
// void sound_effect_manager_stop_manual(long);
// void sound_effects_update(void);
// public: bool s_sound_effect_datum::finished(void) const;
// bool sound_effect_manager_initialize(void);
// void sound_effect_manager_dispose_from_old_map(void);
// void sound_effect_manager_dispose(void);
// void sound_effect_manager_stop_all(void);
// void sound_effect_manager_initialize_for_new_structure_bsp(void);
// bool sound_effect_track_and_update_internal(long);
// public: long s_sound_effect_datum::get_identifier(long) const;
// void sound_effect_stop_internal(long);
// void sound_effect_update_components_internal(long, enum e_sound_effect_refresh_state);
// bool sound_effect_track_component_sound(long, long, void const *, struct s_sound_source *);
// public: bool s_sound_effect_datum::source_stopped(void) const;
// void sound_effect_get_source(long, struct s_sound_source *);
// void sound_effect_set_tracker_data(long, struct s_sound_impulse_definition *);
// long sound_effect_new(long, long);
// void sound_effect_delete(long);
// struct s_sound_effect_track_data * sound_effect_get_track_data(void *);
// struct s_sound_effect_track_data const * sound_effect_get_track_data_const(void const *);
// public: enum e_sound_radio_mix_setting c_enum_no_init<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>::operator enum e_sound_radio_mix_setting(void) const;
// public: c_enum<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>(enum e_sound_effect_source_type);
// public: enum e_sound_effect_source_type c_enum_no_init<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_sound_effect_source_type(void) const;
// public: bool c_enum_no_init<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_sound_effect_source_type) const;
// public: enum e_looping_sound_refresh_state c_enum_no_init<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_looping_sound_refresh_state(void) const;
// public: void c_data_iterator<struct s_sound_effect_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_sound_effect_datum>::next(void);
// public: struct s_sound_effect_datum * c_data_iterator<struct s_sound_effect_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_sound_effect_datum>::get_index(void) const;
// public: bool c_flags_no_init<enum e_platform_sound_playback_component_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum e_platform_sound_playback_component_flag_bits) const;
// public: bool c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::test(enum e_looping_sound_flag) const;
// public: c_flags<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: static bool c_flags_no_init<enum e_platform_sound_playback_component_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_platform_sound_playback_component_flag_bits);
// private: static unsigned long c_flags_no_init<enum e_platform_sound_playback_component_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_platform_sound_playback_component_flag_bits);
// public: static bool c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_flag);
// private: static unsigned short c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_flag);
// public: void c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_looping_sound_layer);
// public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::~t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>(void);
// void g_sound_effect_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_sound_effect_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z");
//};

//void sound_effect_manager_refresh_from_loop(long, long, long, unsigned long, unsigned long, struct s_sound_source const *, enum e_looping_sound_refresh_state)
//{
//    mangled_ppc("?sound_effect_manager_refresh_from_loop@@YAXJJJKKPBUs_sound_source@@W4e_looping_sound_refresh_state@@@Z");
//};

//void sound_effect_manager_loop_stopped(long, long, long)
//{
//    mangled_ppc("?sound_effect_manager_loop_stopped@@YAXJJJ@Z");
//};

//void sound_effect_manager_loop_inaudible(long, long, long)
//{
//    mangled_ppc("?sound_effect_manager_loop_inaudible@@YAXJJJ@Z");
//};

//long sound_effect_manager_create_from_tracker(long, long, long, struct s_sound_impulse_definition *)
//{
//    mangled_ppc("?sound_effect_manager_create_from_tracker@@YAJJJJPAUs_sound_impulse_definition@@@Z");
//};

//void sound_effect_delete_on_dispatch_failure(long)
//{
//    mangled_ppc("?sound_effect_delete_on_dispatch_failure@@YAXJ@Z");
//};

//long sound_effect_manager_create_manual(long, float, unsigned long)
//{
//    mangled_ppc("?sound_effect_manager_create_manual@@YAJJMK@Z");
//};

//void sound_effect_manager_set_scale_manual(long, float)
//{
//    mangled_ppc("?sound_effect_manager_set_scale_manual@@YAXJM@Z");
//};

//void sound_effect_manager_stop_manual(long)
//{
//    mangled_ppc("?sound_effect_manager_stop_manual@@YAXJ@Z");
//};

//void sound_effects_update(void)
//{
//    mangled_ppc("?sound_effects_update@@YAXXZ");
//};

//public: bool s_sound_effect_datum::finished(void) const
//{
//    mangled_ppc("?finished@s_sound_effect_datum@@QBA_NXZ");
//};

//bool sound_effect_manager_initialize(void)
//{
//    mangled_ppc("?sound_effect_manager_initialize@@YA_NXZ");
//};

//void sound_effect_manager_dispose_from_old_map(void)
//{
//    mangled_ppc("?sound_effect_manager_dispose_from_old_map@@YAXXZ");
//};

//void sound_effect_manager_dispose(void)
//{
//    mangled_ppc("?sound_effect_manager_dispose@@YAXXZ");
//};

//void sound_effect_manager_stop_all(void)
//{
//    mangled_ppc("?sound_effect_manager_stop_all@@YAXXZ");
//};

//void sound_effect_manager_initialize_for_new_structure_bsp(void)
//{
//    mangled_ppc("?sound_effect_manager_initialize_for_new_structure_bsp@@YAXXZ");
//};

//bool sound_effect_track_and_update_internal(long)
//{
//    mangled_ppc("?sound_effect_track_and_update_internal@@YA_NJ@Z");
//};

//public: long s_sound_effect_datum::get_identifier(long) const
//{
//    mangled_ppc("?get_identifier@s_sound_effect_datum@@QBAJJ@Z");
//};

//void sound_effect_stop_internal(long)
//{
//    mangled_ppc("?sound_effect_stop_internal@@YAXJ@Z");
//};

//void sound_effect_update_components_internal(long, enum e_sound_effect_refresh_state)
//{
//    mangled_ppc("?sound_effect_update_components_internal@@YAXJW4e_sound_effect_refresh_state@@@Z");
//};

//bool sound_effect_track_component_sound(long, long, void const *, struct s_sound_source *)
//{
//    mangled_ppc("?sound_effect_track_component_sound@@YA_NJJPBXPAUs_sound_source@@@Z");
//};

//public: bool s_sound_effect_datum::source_stopped(void) const
//{
//    mangled_ppc("?source_stopped@s_sound_effect_datum@@QBA_NXZ");
//};

//void sound_effect_get_source(long, struct s_sound_source *)
//{
//    mangled_ppc("?sound_effect_get_source@@YAXJPAUs_sound_source@@@Z");
//};

//void sound_effect_set_tracker_data(long, struct s_sound_impulse_definition *)
//{
//    mangled_ppc("?sound_effect_set_tracker_data@@YAXJPAUs_sound_impulse_definition@@@Z");
//};

//long sound_effect_new(long, long)
//{
//    mangled_ppc("?sound_effect_new@@YAJJJ@Z");
//};

//void sound_effect_delete(long)
//{
//    mangled_ppc("?sound_effect_delete@@YAXJ@Z");
//};

//struct s_sound_effect_track_data * sound_effect_get_track_data(void *)
//{
//    mangled_ppc("?sound_effect_get_track_data@@YAPAUs_sound_effect_track_data@@PAX@Z");
//};

//struct s_sound_effect_track_data const * sound_effect_get_track_data_const(void const *)
//{
//    mangled_ppc("?sound_effect_get_track_data_const@@YAPBUs_sound_effect_track_data@@PBX@Z");
//};

//public: enum e_sound_radio_mix_setting c_enum_no_init<enum e_sound_radio_mix_setting, long, 0, 3, struct s_default_enum_string_resolver>::operator enum e_sound_radio_mix_setting(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_sound_radio_mix_setting@@J$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_sound_radio_mix_setting@@XZ");
//};

//public: c_enum<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>(enum e_sound_effect_source_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_sound_effect_source_type@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_sound_effect_source_type@@@Z");
//};

//public: enum e_sound_effect_source_type c_enum_no_init<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_sound_effect_source_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_sound_effect_source_type@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_sound_effect_source_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_sound_effect_source_type, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_sound_effect_source_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_sound_effect_source_type@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_sound_effect_source_type@@@Z");
//};

//public: enum e_looping_sound_refresh_state c_enum_no_init<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_looping_sound_refresh_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_looping_sound_refresh_state@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_looping_sound_refresh_state@@XZ");
//};

//public: void c_data_iterator<struct s_sound_effect_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_sound_effect_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_sound_effect_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_sound_effect_datum@@@@QAA_NXZ");
//};

//public: struct s_sound_effect_datum * c_data_iterator<struct s_sound_effect_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_sound_effect_datum@@@@QBAPAUs_sound_effect_datum@@XZ");
//};

//public: long c_data_iterator<struct s_sound_effect_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_sound_effect_datum@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_platform_sound_playback_component_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum e_platform_sound_playback_component_flag_bits) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_platform_sound_playback_component_flag_bits@@K$03Us_default_enum_string_resolver@@@@QBA_NW4e_platform_sound_playback_component_flag_bits@@@Z");
//};

//public: bool c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::test(enum e_looping_sound_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_flag@@G$05Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_flag@@@Z");
//};

//public: c_flags<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_platform_sound_playback_component_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_platform_sound_playback_component_flag_bits)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_platform_sound_playback_component_flag_bits@@K$03Us_default_enum_string_resolver@@@@SA_NW4e_platform_sound_playback_component_flag_bits@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_platform_sound_playback_component_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_platform_sound_playback_component_flag_bits)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_platform_sound_playback_component_flag_bits@@K$03Us_default_enum_string_resolver@@@@CAKW4e_platform_sound_playback_component_flag_bits@@@Z");
//};

//public: static bool c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_looping_sound_flag@@G$05Us_default_enum_string_resolver@@@@SA_NW4e_looping_sound_flag@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_looping_sound_flag, unsigned short, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_looping_sound_flag@@G$05Us_default_enum_string_resolver@@@@CAGW4e_looping_sound_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_looping_sound_layer)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@CAEW4e_looping_sound_layer@@@Z");
//};

//public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>::~t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_effect_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_effect_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_sound_effect_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_sound_effect_data_allocator@@YAXXZ");
//};

