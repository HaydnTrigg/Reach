/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_ai_sync_action_participant_flags const c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_ai_sync_action_participant_flags@@B"
// public: static enum e_ai_sync_action_arranger_setup_flags const c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@2W4e_ai_sync_action_arranger_setup_flags@@B"
// float debug_animation_phonebooth_draw_time; // "?debug_animation_phonebooth_draw_time@@3MA"
// struct s_action_definition g_unit_action_sync; // "?g_unit_action_sync@@3Us_action_definition@@A"
// long debug_sync_count; // "?debug_sync_count@@3JA"
// long local_sync_action_name; // "?local_sync_action_name@@3JA"
// bool debug_animation_assassination_selection; // "?debug_animation_assassination_selection@@3_NA"
// bool debug_enable_force_phonebooth_assassinate; // "?debug_enable_force_phonebooth_assassinate@@3_NA"
// bool debug_animation_phonebooth_test_draw; // "?debug_animation_phonebooth_test_draw@@3_NA"

// public: c_animation_sync_participant_tracker::c_animation_sync_participant_tracker(long);
// private: struct c_animation_sync_participant_tracker::tracker_entry * c_animation_sync_participant_tracker::find_tracker_entry(long);
// public: void c_animation_sync_participant_tracker::report_cast_result(long, bool);
// public: bool c_animation_sync_participant_tracker::clean_up_sync_action(void);
// public: bool c_animation_sync_participant_tracker::add_participant(long);
// public: bool c_animation_sync_participant_tracker::cast_new_participant(long, bool, bool, long *, bool *, class c_animation_id *);
// private: bool c_sync_action_iterator::next_search_path(void);
// public: c_sync_action_iterator::c_sync_action_iterator(long, long);
// public: void c_sync_action_iterator::initialize(long, long);
// public: struct s_animation_sync_action const * c_sync_action_iterator::next(void);
// public: class c_weapon_class const * c_animation_mode::find_class(long) const;
// public: class c_animation_mode const * c_model_animation_graph::find_mode(long, class c_animation_graph_search_cache *) const;
// public: bool c_animation_graph_search_cache::find_mode(long, long *);
// public: void (* c_animation_graph_search_cache::get_cache_mode_function(void))(class c_animation_graph_search_cache *, long, long);
// public: void c_sync_action_iterator::found_match(void);
// bool action_sync_animation_submit(long, struct action_request const *);
// void action_sync_animation_event(long, enum e_action, class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>);
// bool action_sync_animation_setup_on_participant(long, bool, enum e_action, class c_animation_id, long, union real_point3d const *, union vector3d const *, union vector3d const *, bool, float);
// public: void c_motor_request_sync::setup(enum e_action, class c_animation_id, long, union real_point3d const *, union vector3d const *, union vector3d const *, bool, float);
// public: c_motor_request_sync::c_motor_request_sync(void);
// public: virtual void const * c_motor_request_sync::cast_to(enum e_motor_task) const;
// public: c_motor_request_sync::~c_motor_request_sync(void);
// bool action_sync_animation_setup(long, long, enum e_action, union real_point3d const *, union vector3d const *, union vector3d const *, float, bool, bool);
// public: bool c_animation_id::operator==(class c_animation_id const &) const;
// public: c_animation_sync_participant_tracker::~c_animation_sync_participant_tracker(void);
// public: long c_animation_sync_participant_tracker::get_participant_count(void);
// bool action_arranged_sync_animation_setup(long, long, long, enum e_action, union real_point3d const *, union vector3d const *, union vector3d const *, float);
// public: void c_animation_id::set_subgraph(short);
// public: void c_animation_id::set_index(short);
// bool sync_action_participant_allows_interruption(long);
// bool sync_action_participant_test_motor_flag(long, enum e_motor_task_sync_action_flag);
// bool sync_action_participant_looped_animation(long);
// void sync_action_participant_ignore_interruption(long, bool);
// void sync_action_handle_deleted_object(long);
// void add_object_to_sync_action_participant_circular_list(long, long);
// void remove_object_from_sync_action_participant_circular_list(long);
// bool sync_action_can_be_initiated_by(struct s_animation_sync_action const *, long);
// enum e_sync_action_search_result find_compatible_sync_action_to_run(long, long, float, enum e_sync_action_precision_request, long, long *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **, struct s_animation_sync_action_same_type_participant const **);
// public: long c_sync_action_iterator::get_action_name(void);
// bool find_two_compatible_sync_action_participants(long, long, struct s_animation_sync_action const *, union real_point3d *, union vector3d *, struct s_animation_sync_action_same_type_participant const **, union real_point3d *, union vector3d *, struct s_animation_sync_action_same_type_participant const **, bool *);
// bool initiator_satisfies_airborne_state(long, long, bool);
// bool target_satisfies_airborne_state(long, long, bool);
// public: c_sync_action_iterator::~c_sync_action_iterator(void);
// public: c_animation_graph_universal_path_iterator::~c_animation_graph_universal_path_iterator(void);
// enum e_sync_action_search_result find_best_assassination_sync_action_to_run(long, long, struct s_animation_sync_action const **);
// void find_best_assassination_sync_action_in_group(long, long, long, union real_point3d const *, union vector3d const *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **, struct s_animation_sync_action_same_type_participant const **);
// bool assassination_sync_action_collides_or_falls(long, long, struct s_animation_sync_action const *, struct s_animation_sync_action_same_type_participant const *, struct s_animation_sync_action_same_type_participant const *, bool);
// bool assassination_sync_action_point_on_slope_or_falls(long, float, float, union real_point3d const *, bool, float *);
// bool suggest_sync_action_to_actor(long, long, float, float, long, long *, union real_point3d *, union vector3d *, float *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **);
// long sync_action_find_participants(long, long, struct s_animation_sync_action const *, bool *, struct s_animation_sync_action_same_type_participant const **, union real_point3d *, union vector3d *, union real_point3d *, union vector3d *, float *);
// void sync_action_test_non_animating_participant(long, long, float, float, float, union real_point3d const *, union vector3d const *, float *, union real_point3d *, union vector3d *);
// public: bool c_sector_ref::operator!=(class c_sector_ref const &) const;
// public: union real_point3d const * c_ai_point3d::point(void) const;
// void sync_action_test_animating_participant(long, long, float, float, union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float *, union real_point3d *, union vector3d *);
// bool sync_action_compatible_with_participant_current_states(long, long, long);
// void sync_action_compute_world_origin_and_axes(long, long, struct s_animation_sync_action const *, union real_point3d *, union vector3d *, union vector3d *);
// void sync_action_compute_world_origin_and_axes(long, long, struct s_animation_sync_action const *, union real_point3d *, union vector3d *, union vector3d *, enum e_sync_action_origin_calculation_type);
// void sync_action_adjust_position(long, union real_point3d const *, union real_point3d *);
// bool sync_action_is_target_object_compatible_type(long, long);
// public: c_enum<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_actor_sync_action_state);
// public: bool c_flags_no_init<enum e_animation_sync_action_flags, long, 4, struct s_default_enum_string_resolver>::test(enum e_animation_sync_action_flags) const;
// public: bool c_flags_no_init<enum e_animation_sync_action_other_type_flags, long, 2, struct s_default_enum_string_resolver>::test(enum e_animation_sync_action_other_type_flags) const;
// public: void c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_sync_action_search_flags) const;
// public: void c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_sync_action_search_flags, bool);
// public: c_flags<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_motor_task_sync_action_flag, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_ai_sync_action_participant_flags) const;
// public: static bool c_flags_no_init<enum e_animation_sync_action_flags, long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_sync_action_flags);
// private: static long c_flags_no_init<enum e_animation_sync_action_flags, long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_sync_action_flags);
// public: static bool c_flags_no_init<enum e_animation_sync_action_other_type_flags, long, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_sync_action_other_type_flags);
// private: static long c_flags_no_init<enum e_animation_sync_action_other_type_flags, long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_sync_action_other_type_flags);
// public: bool c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_sync_action_search_flags);
// private: static unsigned long c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_sync_action_search_flags);
// public: static bool c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_ai_sync_action_participant_flags);
// private: static unsigned char c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_ai_sync_action_participant_flags);
// private: static unsigned long c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_sync_action_search_flags);
// public: static void * hkpShape::operator new(unsigned int, void *);

//public: c_animation_sync_participant_tracker::c_animation_sync_participant_tracker(long)
//{
//    mangled_ppc("??0c_animation_sync_participant_tracker@@QAA@J@Z");
//};

//private: struct c_animation_sync_participant_tracker::tracker_entry * c_animation_sync_participant_tracker::find_tracker_entry(long)
//{
//    mangled_ppc("?find_tracker_entry@c_animation_sync_participant_tracker@@AAAPAUtracker_entry@1@J@Z");
//};

//public: void c_animation_sync_participant_tracker::report_cast_result(long, bool)
//{
//    mangled_ppc("?report_cast_result@c_animation_sync_participant_tracker@@QAAXJ_N@Z");
//};

//public: bool c_animation_sync_participant_tracker::clean_up_sync_action(void)
//{
//    mangled_ppc("?clean_up_sync_action@c_animation_sync_participant_tracker@@QAA_NXZ");
//};

//public: bool c_animation_sync_participant_tracker::add_participant(long)
//{
//    mangled_ppc("?add_participant@c_animation_sync_participant_tracker@@QAA_NJ@Z");
//};

//public: bool c_animation_sync_participant_tracker::cast_new_participant(long, bool, bool, long *, bool *, class c_animation_id *)
//{
//    mangled_ppc("?cast_new_participant@c_animation_sync_participant_tracker@@QAA_NJ_N0PAJPA_NPAVc_animation_id@@@Z");
//};

//private: bool c_sync_action_iterator::next_search_path(void)
//{
//    mangled_ppc("?next_search_path@c_sync_action_iterator@@AAA_NXZ");
//};

//public: c_sync_action_iterator::c_sync_action_iterator(long, long)
//{
//    mangled_ppc("??0c_sync_action_iterator@@QAA@JJ@Z");
//};

//public: void c_sync_action_iterator::initialize(long, long)
//{
//    mangled_ppc("?initialize@c_sync_action_iterator@@QAAXJJ@Z");
//};

//public: struct s_animation_sync_action const * c_sync_action_iterator::next(void)
//{
//    mangled_ppc("?next@c_sync_action_iterator@@QAAPBUs_animation_sync_action@@XZ");
//};

//public: class c_weapon_class const * c_animation_mode::find_class(long) const
//{
//    mangled_ppc("?find_class@c_animation_mode@@QBAPBVc_weapon_class@@J@Z");
//};

//public: class c_animation_mode const * c_model_animation_graph::find_mode(long, class c_animation_graph_search_cache *) const
//{
//    mangled_ppc("?find_mode@c_model_animation_graph@@QBAPBVc_animation_mode@@JPAVc_animation_graph_search_cache@@@Z");
//};

//public: bool c_animation_graph_search_cache::find_mode(long, long *)
//{
//    mangled_ppc("?find_mode@c_animation_graph_search_cache@@QAA_NJPAJ@Z");
//};

//public: void (* c_animation_graph_search_cache::get_cache_mode_function(void))(class c_animation_graph_search_cache *, long, long)
//{
//    mangled_ppc("?get_cache_mode_function@c_animation_graph_search_cache@@QAAP6AXPAV1@JJ@ZXZ");
//};

//public: void c_sync_action_iterator::found_match(void)
//{
//    mangled_ppc("?found_match@c_sync_action_iterator@@QAAXXZ");
//};

//bool action_sync_animation_submit(long, struct action_request const *)
//{
//    mangled_ppc("?action_sync_animation_submit@@YA_NJPBUaction_request@@@Z");
//};

//void action_sync_animation_event(long, enum e_action, class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?action_sync_animation_event@@YAXJW4e_action@@V?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@@Z");
//};

//bool action_sync_animation_setup_on_participant(long, bool, enum e_action, class c_animation_id, long, union real_point3d const *, union vector3d const *, union vector3d const *, bool, float)
//{
//    mangled_ppc("?action_sync_animation_setup_on_participant@@YA_NJ_NW4e_action@@Vc_animation_id@@JPBTreal_point3d@@PBTvector3d@@40M@Z");
//};

//public: void c_motor_request_sync::setup(enum e_action, class c_animation_id, long, union real_point3d const *, union vector3d const *, union vector3d const *, bool, float)
//{
//    mangled_ppc("?setup@c_motor_request_sync@@QAAXW4e_action@@Vc_animation_id@@JPBTreal_point3d@@PBTvector3d@@3_NM@Z");
//};

//public: c_motor_request_sync::c_motor_request_sync(void)
//{
//    mangled_ppc("??0c_motor_request_sync@@QAA@XZ");
//};

//public: virtual void const * c_motor_request_sync::cast_to(enum e_motor_task) const
//{
//    mangled_ppc("?cast_to@c_motor_request_sync@@UBAPBXW4e_motor_task@@@Z");
//};

//public: c_motor_request_sync::~c_motor_request_sync(void)
//{
//    mangled_ppc("??1c_motor_request_sync@@QAA@XZ");
//};

//bool action_sync_animation_setup(long, long, enum e_action, union real_point3d const *, union vector3d const *, union vector3d const *, float, bool, bool)
//{
//    mangled_ppc("?action_sync_animation_setup@@YA_NJJW4e_action@@PBTreal_point3d@@PBTvector3d@@2M_N3@Z");
//};

//public: bool c_animation_id::operator==(class c_animation_id const &) const
//{
//    mangled_ppc("??8c_animation_id@@QBA_NABV0@@Z");
//};

//public: c_animation_sync_participant_tracker::~c_animation_sync_participant_tracker(void)
//{
//    mangled_ppc("??1c_animation_sync_participant_tracker@@QAA@XZ");
//};

//public: long c_animation_sync_participant_tracker::get_participant_count(void)
//{
//    mangled_ppc("?get_participant_count@c_animation_sync_participant_tracker@@QAAJXZ");
//};

//bool action_arranged_sync_animation_setup(long, long, long, enum e_action, union real_point3d const *, union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?action_arranged_sync_animation_setup@@YA_NJJJW4e_action@@PBTreal_point3d@@PBTvector3d@@2M@Z");
//};

//public: void c_animation_id::set_subgraph(short)
//{
//    mangled_ppc("?set_subgraph@c_animation_id@@QAAXF@Z");
//};

//public: void c_animation_id::set_index(short)
//{
//    mangled_ppc("?set_index@c_animation_id@@QAAXF@Z");
//};

//bool sync_action_participant_allows_interruption(long)
//{
//    mangled_ppc("?sync_action_participant_allows_interruption@@YA_NJ@Z");
//};

//bool sync_action_participant_test_motor_flag(long, enum e_motor_task_sync_action_flag)
//{
//    mangled_ppc("?sync_action_participant_test_motor_flag@@YA_NJW4e_motor_task_sync_action_flag@@@Z");
//};

//bool sync_action_participant_looped_animation(long)
//{
//    mangled_ppc("?sync_action_participant_looped_animation@@YA_NJ@Z");
//};

//void sync_action_participant_ignore_interruption(long, bool)
//{
//    mangled_ppc("?sync_action_participant_ignore_interruption@@YAXJ_N@Z");
//};

//void sync_action_handle_deleted_object(long)
//{
//    mangled_ppc("?sync_action_handle_deleted_object@@YAXJ@Z");
//};

//void add_object_to_sync_action_participant_circular_list(long, long)
//{
//    mangled_ppc("?add_object_to_sync_action_participant_circular_list@@YAXJJ@Z");
//};

//void remove_object_from_sync_action_participant_circular_list(long)
//{
//    mangled_ppc("?remove_object_from_sync_action_participant_circular_list@@YAXJ@Z");
//};

//bool sync_action_can_be_initiated_by(struct s_animation_sync_action const *, long)
//{
//    mangled_ppc("?sync_action_can_be_initiated_by@@YA_NPBUs_animation_sync_action@@J@Z");
//};

//enum e_sync_action_search_result find_compatible_sync_action_to_run(long, long, float, enum e_sync_action_precision_request, long, long *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **, struct s_animation_sync_action_same_type_participant const **)
//{
//    mangled_ppc("?find_compatible_sync_action_to_run@@YA?AW4e_sync_action_search_result@@JJMW4e_sync_action_precision_request@@JPAJPAPBUs_animation_sync_action@@PAPBUs_animation_sync_action_same_type_participant@@3@Z");
//};

//public: long c_sync_action_iterator::get_action_name(void)
//{
//    mangled_ppc("?get_action_name@c_sync_action_iterator@@QAAJXZ");
//};

//bool find_two_compatible_sync_action_participants(long, long, struct s_animation_sync_action const *, union real_point3d *, union vector3d *, struct s_animation_sync_action_same_type_participant const **, union real_point3d *, union vector3d *, struct s_animation_sync_action_same_type_participant const **, bool *)
//{
//    mangled_ppc("?find_two_compatible_sync_action_participants@@YA_NJJPBUs_animation_sync_action@@PATreal_point3d@@PATvector3d@@PAPBUs_animation_sync_action_same_type_participant@@123PA_N@Z");
//};

//bool initiator_satisfies_airborne_state(long, long, bool)
//{
//    mangled_ppc("?initiator_satisfies_airborne_state@@YA_NJJ_N@Z");
//};

//bool target_satisfies_airborne_state(long, long, bool)
//{
//    mangled_ppc("?target_satisfies_airborne_state@@YA_NJJ_N@Z");
//};

//public: c_sync_action_iterator::~c_sync_action_iterator(void)
//{
//    mangled_ppc("??1c_sync_action_iterator@@QAA@XZ");
//};

//public: c_animation_graph_universal_path_iterator::~c_animation_graph_universal_path_iterator(void)
//{
//    mangled_ppc("??1c_animation_graph_universal_path_iterator@@QAA@XZ");
//};

//enum e_sync_action_search_result find_best_assassination_sync_action_to_run(long, long, struct s_animation_sync_action const **)
//{
//    mangled_ppc("?find_best_assassination_sync_action_to_run@@YA?AW4e_sync_action_search_result@@JJPAPBUs_animation_sync_action@@@Z");
//};

//void find_best_assassination_sync_action_in_group(long, long, long, union real_point3d const *, union vector3d const *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **, struct s_animation_sync_action_same_type_participant const **)
//{
//    mangled_ppc("?find_best_assassination_sync_action_in_group@@YAXJJJPBTreal_point3d@@PBTvector3d@@PAPBUs_animation_sync_action@@PAPBUs_animation_sync_action_same_type_participant@@3@Z");
//};

//bool assassination_sync_action_collides_or_falls(long, long, struct s_animation_sync_action const *, struct s_animation_sync_action_same_type_participant const *, struct s_animation_sync_action_same_type_participant const *, bool)
//{
//    mangled_ppc("?assassination_sync_action_collides_or_falls@@YA_NJJPBUs_animation_sync_action@@PBUs_animation_sync_action_same_type_participant@@1_N@Z");
//};

//bool assassination_sync_action_point_on_slope_or_falls(long, float, float, union real_point3d const *, bool, float *)
//{
//    mangled_ppc("?assassination_sync_action_point_on_slope_or_falls@@YA_NJMMPBTreal_point3d@@_NPAM@Z");
//};

//bool suggest_sync_action_to_actor(long, long, float, float, long, long *, union real_point3d *, union vector3d *, float *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **)
//{
//    mangled_ppc("?suggest_sync_action_to_actor@@YA_NJJMMJPAJPATreal_point3d@@PATvector3d@@PAMPAPBUs_animation_sync_action@@PAPBUs_animation_sync_action_same_type_participant@@@Z");
//};

//long sync_action_find_participants(long, long, struct s_animation_sync_action const *, bool *, struct s_animation_sync_action_same_type_participant const **, union real_point3d *, union vector3d *, union real_point3d *, union vector3d *, float *)
//{
//    mangled_ppc("?sync_action_find_participants@@YAJJJPBUs_animation_sync_action@@PA_NPAPBUs_animation_sync_action_same_type_participant@@PATreal_point3d@@PATvector3d@@34PAM@Z");
//};

//void sync_action_test_non_animating_participant(long, long, float, float, float, union real_point3d const *, union vector3d const *, float *, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?sync_action_test_non_animating_participant@@YAXJJMMMPBTreal_point3d@@PBTvector3d@@PAMPAT1@PAT2@@Z");
//};

//public: bool c_sector_ref::operator!=(class c_sector_ref const &) const
//{
//    mangled_ppc("??9c_sector_ref@@QBA_NABV0@@Z");
//};

//public: union real_point3d const * c_ai_point3d::point(void) const
//{
//    mangled_ppc("?point@c_ai_point3d@@QBAPBTreal_point3d@@XZ");
//};

//void sync_action_test_animating_participant(long, long, float, float, union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float *, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?sync_action_test_animating_participant@@YAXJJMMPBTreal_point3d@@PBTvector3d@@0101PAMPAT1@PAT2@@Z");
//};

//bool sync_action_compatible_with_participant_current_states(long, long, long)
//{
//    mangled_ppc("?sync_action_compatible_with_participant_current_states@@YA_NJJJ@Z");
//};

//void sync_action_compute_world_origin_and_axes(long, long, struct s_animation_sync_action const *, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?sync_action_compute_world_origin_and_axes@@YAXJJPBUs_animation_sync_action@@PATreal_point3d@@PATvector3d@@2@Z");
//};

//void sync_action_compute_world_origin_and_axes(long, long, struct s_animation_sync_action const *, union real_point3d *, union vector3d *, union vector3d *, enum e_sync_action_origin_calculation_type)
//{
//    mangled_ppc("?sync_action_compute_world_origin_and_axes@@YAXJJPBUs_animation_sync_action@@PATreal_point3d@@PATvector3d@@2W4e_sync_action_origin_calculation_type@@@Z");
//};

//void sync_action_adjust_position(long, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?sync_action_adjust_position@@YAXJPBTreal_point3d@@PAT1@@Z");
//};

//bool sync_action_is_target_object_compatible_type(long, long)
//{
//    mangled_ppc("?sync_action_is_target_object_compatible_type@@YA_NJJ@Z");
//};

//public: c_enum<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_actor_sync_action_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_actor_sync_action_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_actor_sync_action_state@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_actor_sync_action_state@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_sync_action_flags, long, 4, struct s_default_enum_string_resolver>::test(enum e_animation_sync_action_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_sync_action_flags@@J$03Us_default_enum_string_resolver@@@@QBA_NW4e_animation_sync_action_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_sync_action_other_type_flags, long, 2, struct s_default_enum_string_resolver>::test(enum e_animation_sync_action_other_type_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_animation_sync_action_other_type_flags@@J$01Us_default_enum_string_resolver@@@@QBA_NW4e_animation_sync_action_other_type_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_sync_action_search_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_sync_action_search_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_sync_action_search_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_sync_action_search_flags@@_N@Z");
//};

//public: c_flags<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_motor_task_sync_action_flag, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_motor_task_sync_action_flag@@E$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_ai_sync_action_participant_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_ai_sync_action_participant_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_sync_action_flags, long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_sync_action_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_sync_action_flags@@J$03Us_default_enum_string_resolver@@@@SA_NW4e_animation_sync_action_flags@@@Z");
//};

//private: static long c_flags_no_init<enum e_animation_sync_action_flags, long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_sync_action_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_sync_action_flags@@J$03Us_default_enum_string_resolver@@@@CAJW4e_animation_sync_action_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_sync_action_other_type_flags, long, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_sync_action_other_type_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_sync_action_other_type_flags@@J$01Us_default_enum_string_resolver@@@@SA_NW4e_animation_sync_action_other_type_flags@@@Z");
//};

//private: static long c_flags_no_init<enum e_animation_sync_action_other_type_flags, long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_sync_action_other_type_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_sync_action_other_type_flags@@J$01Us_default_enum_string_resolver@@@@CAJW4e_animation_sync_action_other_type_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_sync_action_search_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_sync_action_search_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_sync_action_search_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_sync_action_search_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_ai_sync_action_participant_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_ai_sync_action_participant_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_ai_sync_action_participant_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_ai_sync_action_participant_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_sync_action_search_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_sync_action_search_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_sync_action_search_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_sync_action_search_flags@@@Z");
//};

//public: static void * hkpShape::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpShape@@SAPAXIPAX@Z");
//};

