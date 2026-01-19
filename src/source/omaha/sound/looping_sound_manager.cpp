/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_looping_sound_track_datum_flags const c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_looping_sound_track_datum_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_looping_sound_track_datum_flags@@B"
// public: static int const c_enum_no_init<long, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@JD$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static long const c_enum_no_init<long, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@JD$0A@$03Us_default_enum_string_resolver@@@@2JB"
// public: static enum e_looping_sound_track_component_bit const c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_looping_sound_track_component_bit@@E$00Us_default_enum_string_resolver@@@@2W4e_looping_sound_track_component_bit@@B"
// public: static enum e_sound_playback_bit const c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@2W4e_sound_playback_bit@@B"
// public: static enum e_looping_sound_datum_flag_bit const c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_looping_sound_datum_flag_bit@@E$06Us_default_enum_string_resolver@@@@2W4e_looping_sound_datum_flag_bit@@B"
// public: static long const s_static_array<struct looping_sound_detail_datum, 12>::k_element_count; // "?k_element_count@?$s_static_array@Ulooping_sound_detail_datum@@$0M@@@2JB"
// public: static long const s_static_array<struct looping_sound_track_datum, 4>::k_element_count; // "?k_element_count@?$s_static_array@Ulooping_sound_track_datum@@$03@@2JB"
// public: static long const s_static_array<struct s_looping_sound_track_restore_state, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_looping_sound_track_restore_state@@$03@@2JB"
// public: static enum e_looping_sound_playback_state const c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@2W4e_looping_sound_playback_state@@B"
// public: static long const s_static_array<struct real_decibel, 12>::k_element_count; // "?k_element_count@?$s_static_array@Ureal_decibel@@$0M@@@2JB"
// class t_restricted_allocation_manager<8, 0, 0, void (__cdecl __tls_set_g_looping_sound_data_allocator::*)(void *)> g_looping_sound_data_allocator; // "?g_looping_sound_data_allocator@@3V?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<2, 0, 0, void (__cdecl __tls_set_g_looping_sound_restore_data_allocator::*)(void *)> g_looping_sound_restore_data_allocator; // "?g_looping_sound_restore_data_allocator@@3V?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_looping_sound_data; // "?g_looping_sound_data@@3PAUs_data_array@@A"
// struct s_data_array *g_looping_sound_restore_data; // "?g_looping_sound_restore_data@@3PAUs_data_array@@A"

// void __tls_set_g_looping_sound_data_allocator(void *);
// void __tls_set_g_looping_sound_restore_data_allocator(void *);
// bool looping_sound_initialize(void);
// void looping_sound_initialize_for_new_structure_bsp(void);
// void looping_sound_dispose_from_old_map(void);
// void looping_sound_dispose(void);
// void looping_sound_manager_reset(void);
// bool sound_refresh_looping(long, unsigned long, long, long, long, struct s_sound_source const *, enum e_looping_sound_refresh_state, unsigned long, float, class c_flags<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>);
// float sound_source_get_maximum_distance_default(struct s_sound_source const *, long);
// public: void looping_sound_track_datum::set_layer_active(bool, struct looping_sound_track const *);
// public: bool looping_sound_track_datum::just_passed_layer_transition(void) const;
// public: bool looping_sound_track_datum::is_currently_starved(void) const;
// public: bool looping_sound_track_datum::waiting_at_transition(void) const;
// public: struct real_decibel looping_sound_track_datum::get_gain_db(struct looping_sound_track const *) const;
// public: bool looping_sound_track_datum::in_alternate_state(void) const;
// public: bool looping_sound_track_datum::state_change_pending(struct looping_sound_track *) const;
// public: bool looping_sound_track_datum::can_use_marker_transition(void) const;
// public: long looping_sound_track_datum::get_current_definition_index(struct looping_sound_track const *) const;
// public: bool looping_sound_datum::ordered_permutations_finished(void) const;
// bool looping_sound_should_restore(long);
// void looping_sound_save_to_game_state(long);
// void looping_sound_after_save_to_game_state(long);
// void looping_sound_clear_restore_state(void);
// bool looping_sound_try_and_get_restored_permutation(long, long, long, long, short, short *, short *);
// void looping_sound_music_iterator_begin(long *);
// bool looping_sound_music_iterator_next(long *, struct s_looping_sound_music_state *);
// public: bool looping_sound_datum::alternate(void) const;
// void looping_sound_in_channel(long, long, long, void const *);
// bool looping_sound_update_output_properties(long, long, void const *, struct s_sound_output_parameters *);
// void looping_sound_stop(long, long, long, enum e_sound_event_stop_reason);
// long looping_sound_new(long, unsigned long, long, long, long, struct s_sound_source const *);
// public: void looping_sound_track_datum::init_layer_active(bool);
// void looping_sound_delete(long);
// long get_first_track_definition_index_from_looping_sound(long);
// public: long looping_sound_track_datum::get_queued_definition_index(struct looping_sound_track const *) const;
// float get_priority_cutoff_for_looping_sound_definition_index(long, class c_big_flags<128> &, long, long);
// void cull_looping_sounds_by_priority(long, long, float);
// void process_looping_sounds(bool);
// struct real_decibel sound_pitch_range_map_gain_db(struct sound_definition const *, struct s_sound_pitch_range const *, float, bool);
// public: bool looping_sound_datum::wait_until_components_finish(void) const;
// public: bool looping_sound_datum::can_play_details(void) const;
// public: c_track_sound::c_track_sound(long);
// public: struct s_looping_sound_component_track_data * c_track_sound::get_track_data(void);
// public: c_track_sound_iterator::c_track_sound_iterator(long);
// public: bool c_track_sound_iterator::next(void);
// public: long c_track_sound::get_next_index(void) const;
// public: long c_track_sound_iterator::get_index(void) const;
// long looping_sound_find_sound(long, long, long, short);
// long looping_sound_find_or_create_sound(long, long, long, short, short, unsigned long *);
// long looping_sound_new_sound(long, long, long, short, short, unsigned long *);
// void looping_sound_link_track_sound(long, short, long);
// enum e_sound_fade_mode looping_sound_track_get_fade_mode(enum e_looping_sound_track_fade_mode, enum e_sound_fade_mode);
// void loop_track_fade_out(long, long, long, enum sound_event_fade_reason, float);
// public: bool sound_class_definition::loop_fade_out_linear(void) const;
// bool track_loop_track_sound(long, long, void const *, struct s_sound_source *);
// bool track_loop_detail_impulse_sound(long, long, struct loop_detail_sound_tracking_data const *, struct s_sound_source *);
// bool are_detail_sounds_equivalent(struct loop_detail_sound_tracking_data const *, struct loop_detail_sound_tracking_data const *);
// bool are_loop_tracks_equivalent(void const *, void const *);
// bool loop_identifiers_are_equal(long, void const *, long, void const *);
// void update_channel_for_looping_sound(short, struct real_decibel, struct s_sound_output_parameters const *);
// public: bool looping_sound_track_datum::pending_state_change_valid_for_channel(struct looping_sound_track *) const;
// public: bool looping_sound_track_datum::fade_pending(struct looping_sound_track const *) const;
// bool sound_commit_looping_definition(struct looping_sound_datum *, struct looping_sound_track_datum *, long, unsigned long *);
// unsigned long looping_sound_track_get_range_permutation_flags(struct sound_definition *, struct looping_sound_definition const *, struct looping_sound_datum *, long, short, bool);
// void looping_sound_track_set_range_permutation_flags(struct sound_definition *, struct looping_sound_definition const *, struct looping_sound_datum *, long, short, short, unsigned long);
// long looping_sound_track_get_last_playing_permutation_index(struct sound_definition *, struct looping_sound_definition const *, long);
// unsigned long * looping_sound_track_get_random_seed(struct looping_sound_definition const *, struct looping_sound_track_datum *, struct s_looping_sound_component_track_data *, bool);
// bool detail_sound_build_impulse_definition(long, long, struct s_sound_impulse_definition *);
// void detail_sound_random_offset(struct looping_sound_detail const *, union vector3d *);
// long looping_sound_find(long, long);
// void render_debug_looping_sound(long, struct s_sound_source const *);
// float sound_source_get_minimum_distance_default(struct s_sound_source const *, long);
// void looping_sound_render_debug(void);
// void stop_looping_sounds_by_sound_class(long, enum e_sound_event_stop_reason);
// public: enum e_looping_sound_track_fade_mode c_enum_no_init<enum e_looping_sound_track_fade_mode, long, 0, 5, struct s_default_enum_string_resolver>::operator enum e_looping_sound_track_fade_mode(void) const;
// public: enum e_looping_sound_layer c_enum_no_init<enum e_looping_sound_layer, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_looping_sound_layer(void) const;
// public: bool c_enum_no_init<enum e_looping_sound_layer, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_looping_sound_layer) const;
// public: bool c_enum_no_init<enum e_looping_sound_detail_period_type, long, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_looping_sound_detail_period_type) const;
// public: c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>(long);
// public: long c_enum_no_init<long, char, 0, 4, struct s_default_enum_string_resolver>::operator long(void) const;
// public: c_enum<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>(enum e_looping_sound_refresh_state);
// public: bool c_enum_no_init<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_looping_sound_refresh_state) const;
// public: void c_data_iterator<struct looping_sound_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct looping_sound_datum>::next(void);
// public: long c_data_iterator<struct looping_sound_datum>::get_index(void) const;
// public: void s_static_array<struct real_decibel, 12>::set_all(struct real_decibel const &);
// public: bool c_flags_no_init<enum e_looping_sound_track_layer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_looping_sound_track_layer_flags) const;
// public: void c_flags_no_init<enum e_sound_datum_flag_bits, unsigned long, 18, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_looping_sound_track_datum_flags) const;
// public: void c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_looping_sound_track_datum_flags, bool);
// public: void c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_looping_sound_track_component_bit) const;
// public: void c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_looping_sound_track_component_bit, bool);
// public: void c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::set(enum e_sound_playback_bit, bool);
// public: unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: void c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_looping_sound_datum_flag_bit) const;
// public: void c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_looping_sound_datum_flag_bit, bool);
// public: bool c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_looping_sound_layer) const;
// public: struct looping_sound_track_datum & s_static_array<struct looping_sound_track_datum, 4>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::test(enum e_looping_sound_playback_state) const;
// public: void c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::set(enum e_looping_sound_playback_state, bool);
// public: c_flags<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::c_flags<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>(void);
// public: struct looping_sound_track_datum const & s_static_array<struct looping_sound_track_datum, 4>::operator[]<long>(long) const;
// public: struct s_looping_sound_track_restore_state & s_static_array<struct s_looping_sound_track_restore_state, 4>::operator[]<long>(long);
// public: struct s_looping_sound_track_restore_state const & s_static_array<struct s_looping_sound_track_restore_state, 4>::operator[]<long>(long) const;
// public: struct looping_sound_track_datum & s_static_array<struct looping_sound_track_datum, 4>::operator[]<class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>);
// public: struct real_decibel & s_static_array<struct real_decibel, 4>::operator[]<long>(long);
// public: struct looping_sound_detail_datum & s_static_array<struct looping_sound_detail_datum, 12>::operator[]<long>(long);
// public: long & s_static_array<long, 12>::operator[]<char>(char);
// public: struct real_decibel & s_static_array<struct real_decibel, 12>::operator[]<long>(long);
// public: struct looping_sound_track_datum & s_static_array<struct looping_sound_track_datum, 4>::operator[]<short>(short);
// public: static bool c_flags_no_init<enum e_looping_sound_track_layer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_track_layer_flags);
// private: static unsigned short c_flags_no_init<enum e_looping_sound_track_layer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_track_layer_flags);
// public: static bool c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_track_datum_flags);
// private: static unsigned char c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_track_datum_flags);
// public: static bool c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_track_component_bit);
// private: static unsigned char c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_track_component_bit);
// public: static bool c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_playback_bit);
// public: bool c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_playback_bit);
// public: static bool c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_datum_flag_bit);
// private: static unsigned char c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_datum_flag_bit);
// public: static bool s_static_array<struct looping_sound_track_datum, 4>::valid<long>(long);
// public: void c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_playback_state);
// private: static unsigned long c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_playback_state);
// public: static bool s_static_array<struct s_looping_sound_track_restore_state, 4>::valid<long>(long);
// public: static bool s_static_array<struct looping_sound_track_datum, 4>::valid<class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<struct real_decibel, 4>::valid<long>(long);
// public: static bool s_static_array<struct looping_sound_detail_datum, 12>::valid<long>(long);
// public: static bool s_static_array<long, 12>::valid<char>(char);
// public: static bool s_static_array<struct real_decibel, 12>::valid<long>(long);
// public: static bool s_static_array<struct looping_sound_track_datum, 4>::valid<short>(short);
// private: static unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_sound_playback_bit);
// private: static unsigned long c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_looping_sound_playback_state);
// public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::~t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::~t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>(void);
// void g_looping_sound_data_allocator::`dynamic atexit destructor'(void);
// void g_looping_sound_restore_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_looping_sound_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_looping_sound_restore_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z");
//};

//bool looping_sound_initialize(void)
//{
//    mangled_ppc("?looping_sound_initialize@@YA_NXZ");
//};

//void looping_sound_initialize_for_new_structure_bsp(void)
//{
//    mangled_ppc("?looping_sound_initialize_for_new_structure_bsp@@YAXXZ");
//};

//void looping_sound_dispose_from_old_map(void)
//{
//    mangled_ppc("?looping_sound_dispose_from_old_map@@YAXXZ");
//};

//void looping_sound_dispose(void)
//{
//    mangled_ppc("?looping_sound_dispose@@YAXXZ");
//};

//void looping_sound_manager_reset(void)
//{
//    mangled_ppc("?looping_sound_manager_reset@@YAXXZ");
//};

//bool sound_refresh_looping(long, unsigned long, long, long, long, struct s_sound_source const *, enum e_looping_sound_refresh_state, unsigned long, float, class c_flags<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?sound_refresh_looping@@YA_NJKJJJPBUs_sound_source@@W4e_looping_sound_refresh_state@@KMV?$c_flags@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@@Z");
//};

//float sound_source_get_maximum_distance_default(struct s_sound_source const *, long)
//{
//    mangled_ppc("?sound_source_get_maximum_distance_default@@YAMPBUs_sound_source@@J@Z");
//};

//public: void looping_sound_track_datum::set_layer_active(bool, struct looping_sound_track const *)
//{
//    mangled_ppc("?set_layer_active@looping_sound_track_datum@@QAAX_NPBUlooping_sound_track@@@Z");
//};

//public: bool looping_sound_track_datum::just_passed_layer_transition(void) const
//{
//    mangled_ppc("?just_passed_layer_transition@looping_sound_track_datum@@QBA_NXZ");
//};

//public: bool looping_sound_track_datum::is_currently_starved(void) const
//{
//    mangled_ppc("?is_currently_starved@looping_sound_track_datum@@QBA_NXZ");
//};

//public: bool looping_sound_track_datum::waiting_at_transition(void) const
//{
//    mangled_ppc("?waiting_at_transition@looping_sound_track_datum@@QBA_NXZ");
//};

//public: struct real_decibel looping_sound_track_datum::get_gain_db(struct looping_sound_track const *) const
//{
//    mangled_ppc("?get_gain_db@looping_sound_track_datum@@QBA?AUreal_decibel@@PBUlooping_sound_track@@@Z");
//};

//public: bool looping_sound_track_datum::in_alternate_state(void) const
//{
//    mangled_ppc("?in_alternate_state@looping_sound_track_datum@@QBA_NXZ");
//};

//public: bool looping_sound_track_datum::state_change_pending(struct looping_sound_track *) const
//{
//    mangled_ppc("?state_change_pending@looping_sound_track_datum@@QBA_NPAUlooping_sound_track@@@Z");
//};

//public: bool looping_sound_track_datum::can_use_marker_transition(void) const
//{
//    mangled_ppc("?can_use_marker_transition@looping_sound_track_datum@@QBA_NXZ");
//};

//public: long looping_sound_track_datum::get_current_definition_index(struct looping_sound_track const *) const
//{
//    mangled_ppc("?get_current_definition_index@looping_sound_track_datum@@QBAJPBUlooping_sound_track@@@Z");
//};

//public: bool looping_sound_datum::ordered_permutations_finished(void) const
//{
//    mangled_ppc("?ordered_permutations_finished@looping_sound_datum@@QBA_NXZ");
//};

//bool looping_sound_should_restore(long)
//{
//    mangled_ppc("?looping_sound_should_restore@@YA_NJ@Z");
//};

//void looping_sound_save_to_game_state(long)
//{
//    mangled_ppc("?looping_sound_save_to_game_state@@YAXJ@Z");
//};

//void looping_sound_after_save_to_game_state(long)
//{
//    mangled_ppc("?looping_sound_after_save_to_game_state@@YAXJ@Z");
//};

//void looping_sound_clear_restore_state(void)
//{
//    mangled_ppc("?looping_sound_clear_restore_state@@YAXXZ");
//};

//bool looping_sound_try_and_get_restored_permutation(long, long, long, long, short, short *, short *)
//{
//    mangled_ppc("?looping_sound_try_and_get_restored_permutation@@YA_NJJJJFPAF0@Z");
//};

//void looping_sound_music_iterator_begin(long *)
//{
//    mangled_ppc("?looping_sound_music_iterator_begin@@YAXPAJ@Z");
//};

//bool looping_sound_music_iterator_next(long *, struct s_looping_sound_music_state *)
//{
//    mangled_ppc("?looping_sound_music_iterator_next@@YA_NPAJPAUs_looping_sound_music_state@@@Z");
//};

//public: bool looping_sound_datum::alternate(void) const
//{
//    mangled_ppc("?alternate@looping_sound_datum@@QBA_NXZ");
//};

//void looping_sound_in_channel(long, long, long, void const *)
//{
//    mangled_ppc("?looping_sound_in_channel@@YAXJJJPBX@Z");
//};

//bool looping_sound_update_output_properties(long, long, void const *, struct s_sound_output_parameters *)
//{
//    mangled_ppc("?looping_sound_update_output_properties@@YA_NJJPBXPAUs_sound_output_parameters@@@Z");
//};

//void looping_sound_stop(long, long, long, enum e_sound_event_stop_reason)
//{
//    mangled_ppc("?looping_sound_stop@@YAXJJJW4e_sound_event_stop_reason@@@Z");
//};

//long looping_sound_new(long, unsigned long, long, long, long, struct s_sound_source const *)
//{
//    mangled_ppc("?looping_sound_new@@YAJJKJJJPBUs_sound_source@@@Z");
//};

//public: void looping_sound_track_datum::init_layer_active(bool)
//{
//    mangled_ppc("?init_layer_active@looping_sound_track_datum@@QAAX_N@Z");
//};

//void looping_sound_delete(long)
//{
//    mangled_ppc("?looping_sound_delete@@YAXJ@Z");
//};

//long get_first_track_definition_index_from_looping_sound(long)
//{
//    mangled_ppc("?get_first_track_definition_index_from_looping_sound@@YAJJ@Z");
//};

//public: long looping_sound_track_datum::get_queued_definition_index(struct looping_sound_track const *) const
//{
//    mangled_ppc("?get_queued_definition_index@looping_sound_track_datum@@QBAJPBUlooping_sound_track@@@Z");
//};

//float get_priority_cutoff_for_looping_sound_definition_index(long, class c_big_flags<128> &, long, long)
//{
//    mangled_ppc("?get_priority_cutoff_for_looping_sound_definition_index@@YAMJAAV?$c_big_flags@$0IA@@@JJ@Z");
//};

//void cull_looping_sounds_by_priority(long, long, float)
//{
//    mangled_ppc("?cull_looping_sounds_by_priority@@YAXJJM@Z");
//};

//void process_looping_sounds(bool)
//{
//    mangled_ppc("?process_looping_sounds@@YAX_N@Z");
//};

//struct real_decibel sound_pitch_range_map_gain_db(struct sound_definition const *, struct s_sound_pitch_range const *, float, bool)
//{
//    mangled_ppc("?sound_pitch_range_map_gain_db@@YA?AUreal_decibel@@PBUsound_definition@@PBUs_sound_pitch_range@@M_N@Z");
//};

//public: bool looping_sound_datum::wait_until_components_finish(void) const
//{
//    mangled_ppc("?wait_until_components_finish@looping_sound_datum@@QBA_NXZ");
//};

//public: bool looping_sound_datum::can_play_details(void) const
//{
//    mangled_ppc("?can_play_details@looping_sound_datum@@QBA_NXZ");
//};

//public: c_track_sound::c_track_sound(long)
//{
//    mangled_ppc("??0c_track_sound@@QAA@J@Z");
//};

//public: struct s_looping_sound_component_track_data * c_track_sound::get_track_data(void)
//{
//    mangled_ppc("?get_track_data@c_track_sound@@QAAPAUs_looping_sound_component_track_data@@XZ");
//};

//public: c_track_sound_iterator::c_track_sound_iterator(long)
//{
//    mangled_ppc("??0c_track_sound_iterator@@QAA@J@Z");
//};

//public: bool c_track_sound_iterator::next(void)
//{
//    mangled_ppc("?next@c_track_sound_iterator@@QAA_NXZ");
//};

//public: long c_track_sound::get_next_index(void) const
//{
//    mangled_ppc("?get_next_index@c_track_sound@@QBAJXZ");
//};

//public: long c_track_sound_iterator::get_index(void) const
//{
//    mangled_ppc("?get_index@c_track_sound_iterator@@QBAJXZ");
//};

//long looping_sound_find_sound(long, long, long, short)
//{
//    mangled_ppc("?looping_sound_find_sound@@YAJJJJF@Z");
//};

//long looping_sound_find_or_create_sound(long, long, long, short, short, unsigned long *)
//{
//    mangled_ppc("?looping_sound_find_or_create_sound@@YAJJJJFFPAK@Z");
//};

//long looping_sound_new_sound(long, long, long, short, short, unsigned long *)
//{
//    mangled_ppc("?looping_sound_new_sound@@YAJJJJFFPAK@Z");
//};

//void looping_sound_link_track_sound(long, short, long)
//{
//    mangled_ppc("?looping_sound_link_track_sound@@YAXJFJ@Z");
//};

//enum e_sound_fade_mode looping_sound_track_get_fade_mode(enum e_looping_sound_track_fade_mode, enum e_sound_fade_mode)
//{
//    mangled_ppc("?looping_sound_track_get_fade_mode@@YA?AW4e_sound_fade_mode@@W4e_looping_sound_track_fade_mode@@W41@@Z");
//};

//void loop_track_fade_out(long, long, long, enum sound_event_fade_reason, float)
//{
//    mangled_ppc("?loop_track_fade_out@@YAXJJJW4sound_event_fade_reason@@M@Z");
//};

//public: bool sound_class_definition::loop_fade_out_linear(void) const
//{
//    mangled_ppc("?loop_fade_out_linear@sound_class_definition@@QBA_NXZ");
//};

//bool track_loop_track_sound(long, long, void const *, struct s_sound_source *)
//{
//    mangled_ppc("?track_loop_track_sound@@YA_NJJPBXPAUs_sound_source@@@Z");
//};

//bool track_loop_detail_impulse_sound(long, long, struct loop_detail_sound_tracking_data const *, struct s_sound_source *)
//{
//    mangled_ppc("?track_loop_detail_impulse_sound@@YA_NJJPBUloop_detail_sound_tracking_data@@PAUs_sound_source@@@Z");
//};

//bool are_detail_sounds_equivalent(struct loop_detail_sound_tracking_data const *, struct loop_detail_sound_tracking_data const *)
//{
//    mangled_ppc("?are_detail_sounds_equivalent@@YA_NPBUloop_detail_sound_tracking_data@@0@Z");
//};

//bool are_loop_tracks_equivalent(void const *, void const *)
//{
//    mangled_ppc("?are_loop_tracks_equivalent@@YA_NPBX0@Z");
//};

//bool loop_identifiers_are_equal(long, void const *, long, void const *)
//{
//    mangled_ppc("?loop_identifiers_are_equal@@YA_NJPBXJ0@Z");
//};

//void update_channel_for_looping_sound(short, struct real_decibel, struct s_sound_output_parameters const *)
//{
//    mangled_ppc("?update_channel_for_looping_sound@@YAXFUreal_decibel@@PBUs_sound_output_parameters@@@Z");
//};

//public: bool looping_sound_track_datum::pending_state_change_valid_for_channel(struct looping_sound_track *) const
//{
//    mangled_ppc("?pending_state_change_valid_for_channel@looping_sound_track_datum@@QBA_NPAUlooping_sound_track@@@Z");
//};

//public: bool looping_sound_track_datum::fade_pending(struct looping_sound_track const *) const
//{
//    mangled_ppc("?fade_pending@looping_sound_track_datum@@QBA_NPBUlooping_sound_track@@@Z");
//};

//bool sound_commit_looping_definition(struct looping_sound_datum *, struct looping_sound_track_datum *, long, unsigned long *)
//{
//    mangled_ppc("?sound_commit_looping_definition@@YA_NPAUlooping_sound_datum@@PAUlooping_sound_track_datum@@JPAK@Z");
//};

//unsigned long looping_sound_track_get_range_permutation_flags(struct sound_definition *, struct looping_sound_definition const *, struct looping_sound_datum *, long, short, bool)
//{
//    mangled_ppc("?looping_sound_track_get_range_permutation_flags@@YAKPAUsound_definition@@PBUlooping_sound_definition@@PAUlooping_sound_datum@@JF_N@Z");
//};

//void looping_sound_track_set_range_permutation_flags(struct sound_definition *, struct looping_sound_definition const *, struct looping_sound_datum *, long, short, short, unsigned long)
//{
//    mangled_ppc("?looping_sound_track_set_range_permutation_flags@@YAXPAUsound_definition@@PBUlooping_sound_definition@@PAUlooping_sound_datum@@JFFK@Z");
//};

//long looping_sound_track_get_last_playing_permutation_index(struct sound_definition *, struct looping_sound_definition const *, long)
//{
//    mangled_ppc("?looping_sound_track_get_last_playing_permutation_index@@YAJPAUsound_definition@@PBUlooping_sound_definition@@J@Z");
//};

//unsigned long * looping_sound_track_get_random_seed(struct looping_sound_definition const *, struct looping_sound_track_datum *, struct s_looping_sound_component_track_data *, bool)
//{
//    mangled_ppc("?looping_sound_track_get_random_seed@@YAPAKPBUlooping_sound_definition@@PAUlooping_sound_track_datum@@PAUs_looping_sound_component_track_data@@_N@Z");
//};

//bool detail_sound_build_impulse_definition(long, long, struct s_sound_impulse_definition *)
//{
//    mangled_ppc("?detail_sound_build_impulse_definition@@YA_NJJPAUs_sound_impulse_definition@@@Z");
//};

//void detail_sound_random_offset(struct looping_sound_detail const *, union vector3d *)
//{
//    mangled_ppc("?detail_sound_random_offset@@YAXPBUlooping_sound_detail@@PATvector3d@@@Z");
//};

//long looping_sound_find(long, long)
//{
//    mangled_ppc("?looping_sound_find@@YAJJJ@Z");
//};

//void render_debug_looping_sound(long, struct s_sound_source const *)
//{
//    mangled_ppc("?render_debug_looping_sound@@YAXJPBUs_sound_source@@@Z");
//};

//float sound_source_get_minimum_distance_default(struct s_sound_source const *, long)
//{
//    mangled_ppc("?sound_source_get_minimum_distance_default@@YAMPBUs_sound_source@@J@Z");
//};

//void looping_sound_render_debug(void)
//{
//    mangled_ppc("?looping_sound_render_debug@@YAXXZ");
//};

//void stop_looping_sounds_by_sound_class(long, enum e_sound_event_stop_reason)
//{
//    mangled_ppc("?stop_looping_sounds_by_sound_class@@YAXJW4e_sound_event_stop_reason@@@Z");
//};

//public: enum e_looping_sound_track_fade_mode c_enum_no_init<enum e_looping_sound_track_fade_mode, long, 0, 5, struct s_default_enum_string_resolver>::operator enum e_looping_sound_track_fade_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_looping_sound_track_fade_mode@@J$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_looping_sound_track_fade_mode@@XZ");
//};

//public: enum e_looping_sound_layer c_enum_no_init<enum e_looping_sound_layer, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_looping_sound_layer(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_looping_sound_layer@@F$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_looping_sound_layer@@XZ");
//};

//public: bool c_enum_no_init<enum e_looping_sound_layer, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_looping_sound_layer) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_looping_sound_layer@@F$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_layer@@@Z");
//};

//public: bool c_enum_no_init<enum e_looping_sound_detail_period_type, long, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_looping_sound_detail_period_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_looping_sound_detail_period_type@@J$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_detail_period_type@@@Z");
//};

//public: c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>(long)
//{
//    mangled_ppc("??0?$c_enum@JD$0A@$03Us_default_enum_string_resolver@@@@QAA@J@Z");
//};

//public: long c_enum_no_init<long, char, 0, 4, struct s_default_enum_string_resolver>::operator long(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@JD$0A@$03Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: c_enum<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>(enum e_looping_sound_refresh_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_looping_sound_refresh_state@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_looping_sound_refresh_state@@@Z");
//};

//public: bool c_enum_no_init<enum e_looping_sound_refresh_state, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_looping_sound_refresh_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_looping_sound_refresh_state@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_refresh_state@@@Z");
//};

//public: void c_data_iterator<struct looping_sound_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Ulooping_sound_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct looping_sound_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Ulooping_sound_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct looping_sound_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Ulooping_sound_datum@@@@QBAJXZ");
//};

//public: void s_static_array<struct real_decibel, 12>::set_all(struct real_decibel const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Ureal_decibel@@$0M@@@QAAXABUreal_decibel@@@Z");
//};

//public: bool c_flags_no_init<enum e_looping_sound_track_layer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_looping_sound_track_layer_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_track_layer_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_track_layer_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_sound_datum_flag_bits, unsigned long, 18, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_sound_datum_flag_bits@@K$0BC@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_looping_sound_track_datum_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_track_datum_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_track_datum_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_looping_sound_track_datum_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_looping_sound_track_datum_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_looping_sound_track_datum_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_looping_sound_track_component_bit@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_looping_sound_track_component_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_track_component_bit@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_track_component_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_looping_sound_track_component_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_looping_sound_track_component_bit@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_looping_sound_track_component_bit@@_N@Z");
//};

//public: void c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::set(enum e_sound_playback_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@QAAXW4e_sound_playback_bit@@_N@Z");
//};

//public: unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_looping_sound_datum_flag_bit@@E$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_looping_sound_datum_flag_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_datum_flag_bit@@E$06Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_datum_flag_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_looping_sound_datum_flag_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_looping_sound_datum_flag_bit@@E$06Us_default_enum_string_resolver@@@@QAAXW4e_looping_sound_datum_flag_bit@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_looping_sound_layer, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_looping_sound_layer) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_layer@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_layer@@@Z");
//};

//public: struct looping_sound_track_datum & s_static_array<struct looping_sound_track_datum, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ulooping_sound_track_datum@@$03@@QAAAAUlooping_sound_track_datum@@J@Z");
//};

//public: bool c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::test(enum e_looping_sound_playback_state) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@QBA_NW4e_looping_sound_playback_state@@@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::set(enum e_looping_sound_playback_state, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@QAAXW4e_looping_sound_playback_state@@_N@Z");
//};

//public: c_flags<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::c_flags<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct looping_sound_track_datum const & s_static_array<struct looping_sound_track_datum, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ulooping_sound_track_datum@@$03@@QBAABUlooping_sound_track_datum@@J@Z");
//};

//public: struct s_looping_sound_track_restore_state & s_static_array<struct s_looping_sound_track_restore_state, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_looping_sound_track_restore_state@@$03@@QAAAAUs_looping_sound_track_restore_state@@J@Z");
//};

//public: struct s_looping_sound_track_restore_state const & s_static_array<struct s_looping_sound_track_restore_state, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_looping_sound_track_restore_state@@$03@@QBAABUs_looping_sound_track_restore_state@@J@Z");
//};

//public: struct looping_sound_track_datum & s_static_array<struct looping_sound_track_datum, 4>::operator[]<class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@JD$0A@$03Us_default_enum_string_resolver@@@@@?$s_static_array@Ulooping_sound_track_datum@@$03@@QAAAAUlooping_sound_track_datum@@V?$c_enum@JD$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct real_decibel & s_static_array<struct real_decibel, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ureal_decibel@@$03@@QAAAAUreal_decibel@@J@Z");
//};

//public: struct looping_sound_detail_datum & s_static_array<struct looping_sound_detail_datum, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ulooping_sound_detail_datum@@$0M@@@QAAAAUlooping_sound_detail_datum@@J@Z");
//};

//public: long & s_static_array<long, 12>::operator[]<char>(char)
//{
//    mangled_ppc("??$?AD@?$s_static_array@J$0M@@@QAAAAJD@Z");
//};

//public: struct real_decibel & s_static_array<struct real_decibel, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ureal_decibel@@$0M@@@QAAAAUreal_decibel@@J@Z");
//};

//public: struct looping_sound_track_datum & s_static_array<struct looping_sound_track_datum, 4>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Ulooping_sound_track_datum@@$03@@QAAAAUlooping_sound_track_datum@@F@Z");
//};

//public: static bool c_flags_no_init<enum e_looping_sound_track_layer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_track_layer_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_looping_sound_track_layer_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_looping_sound_track_layer_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_looping_sound_track_layer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_track_layer_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_looping_sound_track_layer_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_looping_sound_track_layer_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_track_datum_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_looping_sound_track_datum_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_looping_sound_track_datum_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_looping_sound_track_datum_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_track_datum_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_looping_sound_track_datum_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_looping_sound_track_datum_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_track_component_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_looping_sound_track_component_bit@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_looping_sound_track_component_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_looping_sound_track_component_bit, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_track_component_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_looping_sound_track_component_bit@@E$00Us_default_enum_string_resolver@@@@CAEW4e_looping_sound_track_component_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_playback_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@SA_NW4e_sound_playback_bit@@@Z");
//};

//public: bool c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_playback_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@CAGW4e_sound_playback_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_datum_flag_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_looping_sound_datum_flag_bit@@E$06Us_default_enum_string_resolver@@@@SA_NW4e_looping_sound_datum_flag_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_looping_sound_datum_flag_bit, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_datum_flag_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_looping_sound_datum_flag_bit@@E$06Us_default_enum_string_resolver@@@@CAEW4e_looping_sound_datum_flag_bit@@@Z");
//};

//public: static bool s_static_array<struct looping_sound_track_datum, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ulooping_sound_track_datum@@$03@@SA_NJ@Z");
//};

//public: void c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_looping_sound_playback_state)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@SA_NW4e_looping_sound_playback_state@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_looping_sound_playback_state)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@CAKW4e_looping_sound_playback_state@@@Z");
//};

//public: static bool s_static_array<struct s_looping_sound_track_restore_state, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_looping_sound_track_restore_state@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct looping_sound_track_datum, 4>::valid<class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<long, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@JD$0A@$03Us_default_enum_string_resolver@@@@@?$s_static_array@Ulooping_sound_track_datum@@$03@@SA_NV?$c_enum@JD$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct real_decibel, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ureal_decibel@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct looping_sound_detail_datum, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ulooping_sound_detail_datum@@$0M@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 12>::valid<char>(char)
//{
//    mangled_ppc("??$valid@D@?$s_static_array@J$0M@@@SA_ND@Z");
//};

//public: static bool s_static_array<struct real_decibel, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ureal_decibel@@$0M@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct looping_sound_track_datum, 4>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Ulooping_sound_track_datum@@$03@@SA_NF@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_sound_playback_bit, unsigned short, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_sound_playback_bit)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_sound_playback_bit@@G$06Us_default_enum_string_resolver@@@@CAGW4e_sound_playback_bit@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_looping_sound_playback_state, unsigned long, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_looping_sound_playback_state)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_looping_sound_playback_state@@K$06Us_default_enum_string_resolver@@@@CAKW4e_looping_sound_playback_state@@@Z");
//};

//public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>::~t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_looping_sound_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_looping_sound_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>::~t_restricted_allocation_manager<2, 0, 0, void (__tls_set_g_looping_sound_restore_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$01$0A@$0A@$1?__tls_set_g_looping_sound_restore_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_looping_sound_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_looping_sound_data_allocator@@YAXXZ");
//};

//void g_looping_sound_restore_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_looping_sound_restore_data_allocator@@YAXXZ");
//};

