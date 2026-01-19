/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_sound_tracker_bit const c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_sound_tracker_bit@@E$00Us_default_enum_string_resolver@@@@2W4e_sound_tracker_bit@@B"
// public: static long const s_static_array<struct s_sound_tracker_event, 1152>::k_element_count; // "?k_element_count@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 1152>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$0EIA@@@2JB"

// bool sound_trackers_initialize(void);
// public: void c_status_line_data_array_tracker::initialize(char const *, struct s_data_array **);
// void sound_trackers_dispose(void);
// void sound_trackers_initialize_for_new_map(void);
// void sound_trackers_dispose_from_old_map(void);
// void sound_trackers_demand_facial_animation_resources(class c_tag_resource_collector *);
// struct s_sound_tracker_datum * sound_tracker_get_mutable(long);
// struct s_sound_tracker_datum * sound_tracker_try_to_get_mutable(long);
// struct s_sound_tracker_datum const * sound_tracker_get(long);
// struct s_sound_tracker_datum const * sound_tracker_try_to_get(long);
// bool sound_trackers_can_update(void);
// bool sound_tracker_track_sound(long, long, struct s_sound_source *);
// bool sound_tracker_update_output(long, long, struct s_sound_output_parameters *);
// void sound_tracker_notify_while_playing(long, long, long);
// void sound_tracker_notify_playback_position(long, long, long, struct s_sound_permutation const *, float);
// void sound_tracker_notify_playback_position_queue(long, long, long, struct s_sound_permutation const *, float);
// void sound_tracker_notify_on_stop(long, enum e_sound_event_stop_reason);
// void sound_tracker_notify_on_stop_queue(long, enum e_sound_event_stop_reason);
// bool sound_tracker_was_stopped(long);
// bool sound_tracker_was_explicitly_stopped(long);
// long sound_tracker_new(long, long, struct s_sound_tracker const *, class c_basic_buffer<void const>);
// void sound_tracker_stop(long);
// long sound_tracker_get_definition_index(long);
// void sound_trackers_refresh_begin(void);
// public: void c_status_line_data_array_tracker::update(void);
// void sound_trackers_refresh_end(void);
// void sound_tracker_touch(long);
// void sound_tracker_touch_queue(long);
// void sound_manager_dispatch_audio_to_main(void);
// public: struct s_data_array * c_smart_data_array<struct s_sound_tracker_datum>::operator struct s_data_array *(void) const;
// public: class c_smart_data_array<struct s_sound_tracker_datum> & c_smart_data_array<struct s_sound_tracker_datum>::operator=(struct s_data_array *);
// public: struct s_data_array *& c_smart_data_array<struct s_sound_tracker_datum>::get_restricted_data_array_address(void);
// public: void c_data_iterator<struct s_sound_tracker_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_sound_tracker_datum>::next(void);
// public: struct s_sound_tracker_datum * c_data_iterator<struct s_sound_tracker_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_sound_tracker_datum>::get_index(void) const;
// public: bool c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_sound_tracker_bit) const;
// public: void c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_sound_tracker_bit, bool);
// public: void t_event_queue<struct s_sound_tracker_event, 1152>::initialize(void);
// public: struct s_sound_tracker_event * t_event_queue<struct s_sound_tracker_event, 1152>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_sound_tracker_event, 1152>::queue_event(struct s_sound_tracker_event *);
// public: struct s_sound_tracker_event * t_event_queue<struct s_sound_tracker_event, 1152>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_sound_tracker_event * t_event_queue<struct s_sound_tracker_event, 1152>::release_chain_top_event(struct s_sound_tracker_event *);
// public: static bool c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_tracker_bit);
// private: static unsigned char c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_tracker_bit);
// public: void t_event_queue<struct s_sound_tracker_event, 1152>::initialize_limited(long);
// public: bool t_event_queue<struct s_sound_tracker_event, 1152>::valid_event(void const *) const;
// public: void t_event_queue<struct s_sound_tracker_event, 1152>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: static long s_static_array<struct s_sound_tracker_event, 1152>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 1152>::get_elements(void);
// public: struct s_sound_tracker_event & s_static_array<struct s_sound_tracker_event, 1152>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 1152>::operator[]<long>(long);
// public: struct s_sound_tracker_event const & s_static_array<struct s_sound_tracker_event, 1152>::operator[]<int>(int) const;
// public: struct s_sound_tracker_event const & s_static_array<struct s_sound_tracker_event, 1152>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_sound_tracker_event, 1152>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 1152>::valid<long>(long);
// public: static bool s_static_array<struct s_sound_tracker_event, 1152>::valid<int>(int);
// public: s_sound_tracker_globals::s_sound_tracker_globals(void);
// public: c_status_line_data_array_tracker::c_status_line_data_array_tracker(void);
// public: t_event_queue<struct s_sound_tracker_event, 1152>::t_event_queue<struct s_sound_tracker_event, 1152>(void);
// public: t_event_queue<struct s_sound_tracker_event, 1152>::~t_event_queue<struct s_sound_tracker_event, 1152>(void);
// void g_sound_queue_audio_to_main::`dynamic atexit destructor'(void);

//bool sound_trackers_initialize(void)
//{
//    mangled_ppc("?sound_trackers_initialize@@YA_NXZ");
//};

//public: void c_status_line_data_array_tracker::initialize(char const *, struct s_data_array **)
//{
//    mangled_ppc("?initialize@c_status_line_data_array_tracker@@QAAXPBDPAPAUs_data_array@@@Z");
//};

//void sound_trackers_dispose(void)
//{
//    mangled_ppc("?sound_trackers_dispose@@YAXXZ");
//};

//void sound_trackers_initialize_for_new_map(void)
//{
//    mangled_ppc("?sound_trackers_initialize_for_new_map@@YAXXZ");
//};

//void sound_trackers_dispose_from_old_map(void)
//{
//    mangled_ppc("?sound_trackers_dispose_from_old_map@@YAXXZ");
//};

//void sound_trackers_demand_facial_animation_resources(class c_tag_resource_collector *)
//{
//    mangled_ppc("?sound_trackers_demand_facial_animation_resources@@YAXPAVc_tag_resource_collector@@@Z");
//};

//struct s_sound_tracker_datum * sound_tracker_get_mutable(long)
//{
//    mangled_ppc("?sound_tracker_get_mutable@@YAPAUs_sound_tracker_datum@@J@Z");
//};

//struct s_sound_tracker_datum * sound_tracker_try_to_get_mutable(long)
//{
//    mangled_ppc("?sound_tracker_try_to_get_mutable@@YAPAUs_sound_tracker_datum@@J@Z");
//};

//struct s_sound_tracker_datum const * sound_tracker_get(long)
//{
//    mangled_ppc("?sound_tracker_get@@YAPBUs_sound_tracker_datum@@J@Z");
//};

//struct s_sound_tracker_datum const * sound_tracker_try_to_get(long)
//{
//    mangled_ppc("?sound_tracker_try_to_get@@YAPBUs_sound_tracker_datum@@J@Z");
//};

//bool sound_trackers_can_update(void)
//{
//    mangled_ppc("?sound_trackers_can_update@@YA_NXZ");
//};

//bool sound_tracker_track_sound(long, long, struct s_sound_source *)
//{
//    mangled_ppc("?sound_tracker_track_sound@@YA_NJJPAUs_sound_source@@@Z");
//};

//bool sound_tracker_update_output(long, long, struct s_sound_output_parameters *)
//{
//    mangled_ppc("?sound_tracker_update_output@@YA_NJJPAUs_sound_output_parameters@@@Z");
//};

//void sound_tracker_notify_while_playing(long, long, long)
//{
//    mangled_ppc("?sound_tracker_notify_while_playing@@YAXJJJ@Z");
//};

//void sound_tracker_notify_playback_position(long, long, long, struct s_sound_permutation const *, float)
//{
//    mangled_ppc("?sound_tracker_notify_playback_position@@YAXJJJPBUs_sound_permutation@@M@Z");
//};

//void sound_tracker_notify_playback_position_queue(long, long, long, struct s_sound_permutation const *, float)
//{
//    mangled_ppc("?sound_tracker_notify_playback_position_queue@@YAXJJJPBUs_sound_permutation@@M@Z");
//};

//void sound_tracker_notify_on_stop(long, enum e_sound_event_stop_reason)
//{
//    mangled_ppc("?sound_tracker_notify_on_stop@@YAXJW4e_sound_event_stop_reason@@@Z");
//};

//void sound_tracker_notify_on_stop_queue(long, enum e_sound_event_stop_reason)
//{
//    mangled_ppc("?sound_tracker_notify_on_stop_queue@@YAXJW4e_sound_event_stop_reason@@@Z");
//};

//bool sound_tracker_was_stopped(long)
//{
//    mangled_ppc("?sound_tracker_was_stopped@@YA_NJ@Z");
//};

//bool sound_tracker_was_explicitly_stopped(long)
//{
//    mangled_ppc("?sound_tracker_was_explicitly_stopped@@YA_NJ@Z");
//};

//long sound_tracker_new(long, long, struct s_sound_tracker const *, class c_basic_buffer<void const>)
//{
//    mangled_ppc("?sound_tracker_new@@YAJJJPBUs_sound_tracker@@V?$c_basic_buffer@$$CBX@@@Z");
//};

//void sound_tracker_stop(long)
//{
//    mangled_ppc("?sound_tracker_stop@@YAXJ@Z");
//};

//long sound_tracker_get_definition_index(long)
//{
//    mangled_ppc("?sound_tracker_get_definition_index@@YAJJ@Z");
//};

//void sound_trackers_refresh_begin(void)
//{
//    mangled_ppc("?sound_trackers_refresh_begin@@YAXXZ");
//};

//public: void c_status_line_data_array_tracker::update(void)
//{
//    mangled_ppc("?update@c_status_line_data_array_tracker@@QAAXXZ");
//};

//void sound_trackers_refresh_end(void)
//{
//    mangled_ppc("?sound_trackers_refresh_end@@YAXXZ");
//};

//void sound_tracker_touch(long)
//{
//    mangled_ppc("?sound_tracker_touch@@YAXJ@Z");
//};

//void sound_tracker_touch_queue(long)
//{
//    mangled_ppc("?sound_tracker_touch_queue@@YAXJ@Z");
//};

//void sound_manager_dispatch_audio_to_main(void)
//{
//    mangled_ppc("?sound_manager_dispatch_audio_to_main@@YAXXZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_sound_tracker_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_sound_tracker_datum@@@@QBAPAUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct s_sound_tracker_datum> & c_smart_data_array<struct s_sound_tracker_datum>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_sound_tracker_datum@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: struct s_data_array *& c_smart_data_array<struct s_sound_tracker_datum>::get_restricted_data_array_address(void)
//{
//    mangled_ppc("?get_restricted_data_array_address@?$c_smart_data_array@Us_sound_tracker_datum@@@@QAAAAPAUs_data_array@@XZ");
//};

//public: void c_data_iterator<struct s_sound_tracker_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_sound_tracker_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_sound_tracker_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_sound_tracker_datum@@@@QAA_NXZ");
//};

//public: struct s_sound_tracker_datum * c_data_iterator<struct s_sound_tracker_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_sound_tracker_datum@@@@QBAPAUs_sound_tracker_datum@@XZ");
//};

//public: long c_data_iterator<struct s_sound_tracker_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_sound_tracker_datum@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_sound_tracker_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_sound_tracker_bit@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_sound_tracker_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_sound_tracker_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_sound_tracker_bit@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_sound_tracker_bit@@_N@Z");
//};

//public: void t_event_queue<struct s_sound_tracker_event, 1152>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAAXXZ");
//};

//public: struct s_sound_tracker_event * t_event_queue<struct s_sound_tracker_event, 1152>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAAPAUs_sound_tracker_event@@XZ");
//};

//public: void t_event_queue<struct s_sound_tracker_event, 1152>::queue_event(struct s_sound_tracker_event *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAAXPAUs_sound_tracker_event@@@Z");
//};

//public: struct s_sound_tracker_event * t_event_queue<struct s_sound_tracker_event, 1152>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAAPAUs_sound_tracker_event@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_sound_tracker_event * t_event_queue<struct s_sound_tracker_event, 1152>::release_chain_top_event(struct s_sound_tracker_event *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAAPAUs_sound_tracker_event@@PAU2@@Z");
//};

//public: static bool c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_sound_tracker_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_sound_tracker_bit@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_sound_tracker_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_sound_tracker_bit, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_sound_tracker_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_sound_tracker_bit@@E$00Us_default_enum_string_resolver@@@@CAEW4e_sound_tracker_bit@@@Z");
//};

//public: void t_event_queue<struct s_sound_tracker_event, 1152>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_sound_tracker_event, 1152>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_sound_tracker_event, 1152>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: static long s_static_array<struct s_sound_tracker_event, 1152>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 1152>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$0EIA@@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//public: struct s_sound_tracker_event & s_static_array<struct s_sound_tracker_event, 1152>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@QAAAAUs_sound_tracker_event@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 1152>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$0EIA@@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: struct s_sound_tracker_event const & s_static_array<struct s_sound_tracker_event, 1152>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@QBAABUs_sound_tracker_event@@H@Z");
//};

//public: struct s_sound_tracker_event const & s_static_array<struct s_sound_tracker_event, 1152>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@QBAABUs_sound_tracker_event@@J@Z");
//};

//public: static bool s_static_array<struct s_sound_tracker_event, 1152>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 1152>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$0EIA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_sound_tracker_event, 1152>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_sound_tracker_event@@$0EIA@@@SA_NH@Z");
//};

//public: s_sound_tracker_globals::s_sound_tracker_globals(void)
//{
//    mangled_ppc("??0s_sound_tracker_globals@@QAA@XZ");
//};

//public: c_status_line_data_array_tracker::c_status_line_data_array_tracker(void)
//{
//    mangled_ppc("??0c_status_line_data_array_tracker@@QAA@XZ");
//};

//public: t_event_queue<struct s_sound_tracker_event, 1152>::t_event_queue<struct s_sound_tracker_event, 1152>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAA@XZ");
//};

//public: t_event_queue<struct s_sound_tracker_event, 1152>::~t_event_queue<struct s_sound_tracker_event, 1152>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_sound_tracker_event@@$0EIA@@@QAA@XZ");
//};

//void g_sound_queue_audio_to_main::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_sound_queue_audio_to_main@@YAXXZ");
//};

