/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void actor_handle_seat_entry(long, long, short);
// void actor_handle_seat_exit_start(long, long, short);
// void actor_handle_seat_exit(long, long, short, bool, enum e_motor_program *);
// void ai_player_handle_seat_entry(long, long, short);
// void ai_player_handle_seat_exit(long, long, short);
// void ai_player_handle_seat_exit_start(long);
// bool actor_handle_seat_attach(long, long, short);
// void actor_handle_vehicle_detach(long, long, long, short);
// void ai_handle_driver_change(long);
// void actor_attach_to_vehicle(long, long, bool);
// long actor_attached_to_vehicle(long);
// void actor_attach_to_seat(long, long, short, float, bool);
// bool ai_vehicle_choose_seat(long);
// void ai_vehicle_lock_actors(long, enum e_campaign_team);
// bool ai_vehicle_check_seat(long, struct seat_entry_info *);
// bool ai_vehicle_find_seat(long, long, struct unit_seat_source const *, short, struct seat_entry_info *);
// float ai_unit_get_seat_preference(long, short, bool, bool, bool);
// float ai_unit_get_seat_score(long, long, short, float, bool);
// bool ai_vehicle_evaluate_seat(long, long, short, bool, struct seat_entry_info *);
// bool ai_vehicle_reserve_seat(long, long, long, float);
// bool ai_vehicle_cancel_reservation(long);
// long ai_vehicle_get_reservation(long, long, enum e_campaign_team);
// void ai_vehicle_handle_allegiance_change(long);
// bool ai_vehicle_compare_unit_priority_for_unit_seat(long, short, long, long);
// bool ai_unit_seat_disallowed(long, long, short, enum e_campaign_team);
// bool ai_unit_seat_allowed(long, long, short, enum e_campaign_team);
// bool ai_vehicle_enterable(long, long, float, bool);
// bool ai_vehicle_desirable(long, long, bool, bool);
// bool ai_vehicle_boarding_desirable(long, long);
// bool local_ai_vehicle_desirable(long, long, bool, bool, bool);
// bool ai_vehicle_seats_available(long, long);
// bool ai_unit_seats_available(long);
// bool ai_vehicle_occupied_by_enemy(long, enum e_campaign_team);
// bool ai_vehicle_occupied_by_friendly_player(long, enum e_campaign_team);
// bool ai_vehicle_valid_follow_player_task_distance(long);
// bool ai_vehicle_turret_valid_distance(long, long, long, float);
// bool ai_vehicle_turret_valid_angle(long, long, long);
// long ai_vehicle_get_driver(long, enum e_campaign_team);
// short ai_vehicle_seat_count(long, bool);
// long ai_get_root_vehicle(long);
// bool ai_vehicle_ready_for_lockdown(long, enum e_campaign_team);
// short ai_vehicle_get_num_reservations(long, enum e_campaign_team, bool);
// short ai_vehicle_get_num_flip_actors(long);
// void actor_throttle_vehicle_speed(long);
// public: enum e_task_follow c_enum_no_init<enum e_task_follow, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_task_follow(void) const;
// public: bool c_flags_no_init<enum e_objective_flag, short, 3, struct s_default_enum_string_resolver>::test(enum e_objective_flag) const;
// public: static bool c_flags_no_init<enum e_objective_flag, short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_objective_flag);
// private: static short c_flags_no_init<enum e_objective_flag, short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_objective_flag);

//void actor_handle_seat_entry(long, long, short)
//{
//    mangled_ppc("?actor_handle_seat_entry@@YAXJJF@Z");
//};

//void actor_handle_seat_exit_start(long, long, short)
//{
//    mangled_ppc("?actor_handle_seat_exit_start@@YAXJJF@Z");
//};

//void actor_handle_seat_exit(long, long, short, bool, enum e_motor_program *)
//{
//    mangled_ppc("?actor_handle_seat_exit@@YAXJJF_NPAW4e_motor_program@@@Z");
//};

//void ai_player_handle_seat_entry(long, long, short)
//{
//    mangled_ppc("?ai_player_handle_seat_entry@@YAXJJF@Z");
//};

//void ai_player_handle_seat_exit(long, long, short)
//{
//    mangled_ppc("?ai_player_handle_seat_exit@@YAXJJF@Z");
//};

//void ai_player_handle_seat_exit_start(long)
//{
//    mangled_ppc("?ai_player_handle_seat_exit_start@@YAXJ@Z");
//};

//bool actor_handle_seat_attach(long, long, short)
//{
//    mangled_ppc("?actor_handle_seat_attach@@YA_NJJF@Z");
//};

//void actor_handle_vehicle_detach(long, long, long, short)
//{
//    mangled_ppc("?actor_handle_vehicle_detach@@YAXJJJF@Z");
//};

//void ai_handle_driver_change(long)
//{
//    mangled_ppc("?ai_handle_driver_change@@YAXJ@Z");
//};

//void actor_attach_to_vehicle(long, long, bool)
//{
//    mangled_ppc("?actor_attach_to_vehicle@@YAXJJ_N@Z");
//};

//long actor_attached_to_vehicle(long)
//{
//    mangled_ppc("?actor_attached_to_vehicle@@YAJJ@Z");
//};

//void actor_attach_to_seat(long, long, short, float, bool)
//{
//    mangled_ppc("?actor_attach_to_seat@@YAXJJFM_N@Z");
//};

//bool ai_vehicle_choose_seat(long)
//{
//    mangled_ppc("?ai_vehicle_choose_seat@@YA_NJ@Z");
//};

//void ai_vehicle_lock_actors(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_vehicle_lock_actors@@YAXJW4e_campaign_team@@@Z");
//};

//bool ai_vehicle_check_seat(long, struct seat_entry_info *)
//{
//    mangled_ppc("?ai_vehicle_check_seat@@YA_NJPAUseat_entry_info@@@Z");
//};

//bool ai_vehicle_find_seat(long, long, struct unit_seat_source const *, short, struct seat_entry_info *)
//{
//    mangled_ppc("?ai_vehicle_find_seat@@YA_NJJPBUunit_seat_source@@FPAUseat_entry_info@@@Z");
//};

//float ai_unit_get_seat_preference(long, short, bool, bool, bool)
//{
//    mangled_ppc("?ai_unit_get_seat_preference@@YAMJF_N00@Z");
//};

//float ai_unit_get_seat_score(long, long, short, float, bool)
//{
//    mangled_ppc("?ai_unit_get_seat_score@@YAMJJFM_N@Z");
//};

//bool ai_vehicle_evaluate_seat(long, long, short, bool, struct seat_entry_info *)
//{
//    mangled_ppc("?ai_vehicle_evaluate_seat@@YA_NJJF_NPAUseat_entry_info@@@Z");
//};

//bool ai_vehicle_reserve_seat(long, long, long, float)
//{
//    mangled_ppc("?ai_vehicle_reserve_seat@@YA_NJJJM@Z");
//};

//bool ai_vehicle_cancel_reservation(long)
//{
//    mangled_ppc("?ai_vehicle_cancel_reservation@@YA_NJ@Z");
//};

//long ai_vehicle_get_reservation(long, long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_vehicle_get_reservation@@YAJJJW4e_campaign_team@@@Z");
//};

//void ai_vehicle_handle_allegiance_change(long)
//{
//    mangled_ppc("?ai_vehicle_handle_allegiance_change@@YAXJ@Z");
//};

//bool ai_vehicle_compare_unit_priority_for_unit_seat(long, short, long, long)
//{
//    mangled_ppc("?ai_vehicle_compare_unit_priority_for_unit_seat@@YA_NJFJJ@Z");
//};

//bool ai_unit_seat_disallowed(long, long, short, enum e_campaign_team)
//{
//    mangled_ppc("?ai_unit_seat_disallowed@@YA_NJJFW4e_campaign_team@@@Z");
//};

//bool ai_unit_seat_allowed(long, long, short, enum e_campaign_team)
//{
//    mangled_ppc("?ai_unit_seat_allowed@@YA_NJJFW4e_campaign_team@@@Z");
//};

//bool ai_vehicle_enterable(long, long, float, bool)
//{
//    mangled_ppc("?ai_vehicle_enterable@@YA_NJJM_N@Z");
//};

//bool ai_vehicle_desirable(long, long, bool, bool)
//{
//    mangled_ppc("?ai_vehicle_desirable@@YA_NJJ_N0@Z");
//};

//bool ai_vehicle_boarding_desirable(long, long)
//{
//    mangled_ppc("?ai_vehicle_boarding_desirable@@YA_NJJ@Z");
//};

//bool local_ai_vehicle_desirable(long, long, bool, bool, bool)
//{
//    mangled_ppc("?local_ai_vehicle_desirable@@YA_NJJ_N00@Z");
//};

//bool ai_vehicle_seats_available(long, long)
//{
//    mangled_ppc("?ai_vehicle_seats_available@@YA_NJJ@Z");
//};

//bool ai_unit_seats_available(long)
//{
//    mangled_ppc("?ai_unit_seats_available@@YA_NJ@Z");
//};

//bool ai_vehicle_occupied_by_enemy(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_vehicle_occupied_by_enemy@@YA_NJW4e_campaign_team@@@Z");
//};

//bool ai_vehicle_occupied_by_friendly_player(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_vehicle_occupied_by_friendly_player@@YA_NJW4e_campaign_team@@@Z");
//};

//bool ai_vehicle_valid_follow_player_task_distance(long)
//{
//    mangled_ppc("?ai_vehicle_valid_follow_player_task_distance@@YA_NJ@Z");
//};

//bool ai_vehicle_turret_valid_distance(long, long, long, float)
//{
//    mangled_ppc("?ai_vehicle_turret_valid_distance@@YA_NJJJM@Z");
//};

//bool ai_vehicle_turret_valid_angle(long, long, long)
//{
//    mangled_ppc("?ai_vehicle_turret_valid_angle@@YA_NJJJ@Z");
//};

//long ai_vehicle_get_driver(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_vehicle_get_driver@@YAJJW4e_campaign_team@@@Z");
//};

//short ai_vehicle_seat_count(long, bool)
//{
//    mangled_ppc("?ai_vehicle_seat_count@@YAFJ_N@Z");
//};

//long ai_get_root_vehicle(long)
//{
//    mangled_ppc("?ai_get_root_vehicle@@YAJJ@Z");
//};

//bool ai_vehicle_ready_for_lockdown(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_vehicle_ready_for_lockdown@@YA_NJW4e_campaign_team@@@Z");
//};

//short ai_vehicle_get_num_reservations(long, enum e_campaign_team, bool)
//{
//    mangled_ppc("?ai_vehicle_get_num_reservations@@YAFJW4e_campaign_team@@_N@Z");
//};

//short ai_vehicle_get_num_flip_actors(long)
//{
//    mangled_ppc("?ai_vehicle_get_num_flip_actors@@YAFJ@Z");
//};

//void actor_throttle_vehicle_speed(long)
//{
//    mangled_ppc("?actor_throttle_vehicle_speed@@YAXJ@Z");
//};

//public: enum e_task_follow c_enum_no_init<enum e_task_follow, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_task_follow(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_task_follow@@F$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_task_follow@@XZ");
//};

//public: bool c_flags_no_init<enum e_objective_flag, short, 3, struct s_default_enum_string_resolver>::test(enum e_objective_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_objective_flag@@F$02Us_default_enum_string_resolver@@@@QBA_NW4e_objective_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_objective_flag, short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_objective_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_objective_flag@@F$02Us_default_enum_string_resolver@@@@SA_NW4e_objective_flag@@@Z");
//};

//private: static short c_flags_no_init<enum e_objective_flag, short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_objective_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_objective_flag@@F$02Us_default_enum_string_resolver@@@@CAFW4e_objective_flag@@@Z");
//};

