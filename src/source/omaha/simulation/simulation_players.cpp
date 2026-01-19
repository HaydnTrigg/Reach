/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_simulation_player::initialize(class c_simulation_world *, long, long, long, struct s_player_identifier const *, struct s_machine_identifier const *);
// public: void c_simulation_player::set_active(bool);
// public: void c_simulation_player::set_pending_deletion(bool);
// public: void c_simulation_player::destroy(void);
// public: void c_simulation_player::handle_local_input(struct s_player_action const *);
// public: void c_simulation_player::update_motion_and_prediction(void);
// public: void c_simulation_player::handle_remote_synchronous_input(struct s_player_action const *, unsigned long);
// public: bool c_simulation_player::generate_action(struct s_player_action *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: bool c_simulation_player::generate_prediction(struct s_player_prediction *);
// public: bool c_simulation_player::build_motion_data(struct s_player_action const *, bool, struct s_player_motion *) const;
// void simulation_player_collection_clear(struct s_player_collection *);
// void simulation_player_collection_build(struct s_player_collection *);
// void simulation_player_collection_verify(struct s_player_collection const *);
// unsigned long simulation_player_collection_get_in_game_mask(struct s_player_collection const *);
// void simulation_player_collection_apply_update(struct s_player_collection *, struct simulation_player_update const *);
// void simulation_player_update_generate_left_game(struct simulation_player_update *, struct s_player_collection *, long, struct s_player_identifier const *);
// void simulation_player_update_generate_swap(struct simulation_player_update *, struct s_player_collection *, long, long);
// void simulation_player_update_generate_remove(struct simulation_player_update *, struct s_player_collection *, long);
// void simulation_player_update_generate_add(struct simulation_player_update *, struct s_player_collection *, long, struct s_player_identifier const *, struct s_machine_identifier const *, enum e_input_user_index, enum e_controller_index, struct s_player_configuration const *, bool);
// void simulation_player_update_generate_configuration(struct simulation_player_update *, struct s_player_collection *, long, struct s_player_identifier const *, struct s_player_configuration const *);
// bool simulation_players_apply_update(struct simulation_player_update const *);
// bool simulation_player_update_apply_left_game(struct simulation_player_update const *);
// bool simulation_player_update_apply_swap(struct simulation_player_update const *);
// bool simulation_player_update_apply_remove(struct simulation_player_update const *);
// bool simulation_player_update_apply_added(struct simulation_player_update const *);
// bool simulation_player_update_apply_configuration(struct simulation_player_update const *);
// public: long c_data_iterator<struct player_datum>::get_absolute_index(void) const;

//public: void c_simulation_player::initialize(class c_simulation_world *, long, long, long, struct s_player_identifier const *, struct s_machine_identifier const *)
//{
//    mangled_ppc("?initialize@c_simulation_player@@QAAXPAVc_simulation_world@@JJJPBUs_player_identifier@@PBUs_machine_identifier@@@Z");
//};

//public: void c_simulation_player::set_active(bool)
//{
//    mangled_ppc("?set_active@c_simulation_player@@QAAX_N@Z");
//};

//public: void c_simulation_player::set_pending_deletion(bool)
//{
//    mangled_ppc("?set_pending_deletion@c_simulation_player@@QAAX_N@Z");
//};

//public: void c_simulation_player::destroy(void)
//{
//    mangled_ppc("?destroy@c_simulation_player@@QAAXXZ");
//};

//public: void c_simulation_player::handle_local_input(struct s_player_action const *)
//{
//    mangled_ppc("?handle_local_input@c_simulation_player@@QAAXPBUs_player_action@@@Z");
//};

//public: void c_simulation_player::update_motion_and_prediction(void)
//{
//    mangled_ppc("?update_motion_and_prediction@c_simulation_player@@QAAXXZ");
//};

//public: void c_simulation_player::handle_remote_synchronous_input(struct s_player_action const *, unsigned long)
//{
//    mangled_ppc("?handle_remote_synchronous_input@c_simulation_player@@QAAXPBUs_player_action@@K@Z");
//};

//public: bool c_simulation_player::generate_action(struct s_player_action *)
//{
//    mangled_ppc("?generate_action@c_simulation_player@@QAA_NPAUs_player_action@@@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: bool c_simulation_player::generate_prediction(struct s_player_prediction *)
//{
//    mangled_ppc("?generate_prediction@c_simulation_player@@QAA_NPAUs_player_prediction@@@Z");
//};

//public: bool c_simulation_player::build_motion_data(struct s_player_action const *, bool, struct s_player_motion *) const
//{
//    mangled_ppc("?build_motion_data@c_simulation_player@@QBA_NPBUs_player_action@@_NPAUs_player_motion@@@Z");
//};

//void simulation_player_collection_clear(struct s_player_collection *)
//{
//    mangled_ppc("?simulation_player_collection_clear@@YAXPAUs_player_collection@@@Z");
//};

//void simulation_player_collection_build(struct s_player_collection *)
//{
//    mangled_ppc("?simulation_player_collection_build@@YAXPAUs_player_collection@@@Z");
//};

//void simulation_player_collection_verify(struct s_player_collection const *)
//{
//    mangled_ppc("?simulation_player_collection_verify@@YAXPBUs_player_collection@@@Z");
//};

//unsigned long simulation_player_collection_get_in_game_mask(struct s_player_collection const *)
//{
//    mangled_ppc("?simulation_player_collection_get_in_game_mask@@YAKPBUs_player_collection@@@Z");
//};

//void simulation_player_collection_apply_update(struct s_player_collection *, struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_collection_apply_update@@YAXPAUs_player_collection@@PBUsimulation_player_update@@@Z");
//};

//void simulation_player_update_generate_left_game(struct simulation_player_update *, struct s_player_collection *, long, struct s_player_identifier const *)
//{
//    mangled_ppc("?simulation_player_update_generate_left_game@@YAXPAUsimulation_player_update@@PAUs_player_collection@@JPBUs_player_identifier@@@Z");
//};

//void simulation_player_update_generate_swap(struct simulation_player_update *, struct s_player_collection *, long, long)
//{
//    mangled_ppc("?simulation_player_update_generate_swap@@YAXPAUsimulation_player_update@@PAUs_player_collection@@JJ@Z");
//};

//void simulation_player_update_generate_remove(struct simulation_player_update *, struct s_player_collection *, long)
//{
//    mangled_ppc("?simulation_player_update_generate_remove@@YAXPAUsimulation_player_update@@PAUs_player_collection@@J@Z");
//};

//void simulation_player_update_generate_add(struct simulation_player_update *, struct s_player_collection *, long, struct s_player_identifier const *, struct s_machine_identifier const *, enum e_input_user_index, enum e_controller_index, struct s_player_configuration const *, bool)
//{
//    mangled_ppc("?simulation_player_update_generate_add@@YAXPAUsimulation_player_update@@PAUs_player_collection@@JPBUs_player_identifier@@PBUs_machine_identifier@@W4e_input_user_index@@W4e_controller_index@@PBUs_player_configuration@@_N@Z");
//};

//void simulation_player_update_generate_configuration(struct simulation_player_update *, struct s_player_collection *, long, struct s_player_identifier const *, struct s_player_configuration const *)
//{
//    mangled_ppc("?simulation_player_update_generate_configuration@@YAXPAUsimulation_player_update@@PAUs_player_collection@@JPBUs_player_identifier@@PBUs_player_configuration@@@Z");
//};

//bool simulation_players_apply_update(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_players_apply_update@@YA_NPBUsimulation_player_update@@@Z");
//};

//bool simulation_player_update_apply_left_game(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_update_apply_left_game@@YA_NPBUsimulation_player_update@@@Z");
//};

//bool simulation_player_update_apply_swap(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_update_apply_swap@@YA_NPBUsimulation_player_update@@@Z");
//};

//bool simulation_player_update_apply_remove(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_update_apply_remove@@YA_NPBUsimulation_player_update@@@Z");
//};

//bool simulation_player_update_apply_added(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_update_apply_added@@YA_NPBUsimulation_player_update@@@Z");
//};

//bool simulation_player_update_apply_configuration(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_player_update_apply_configuration@@YA_NPBUsimulation_player_update@@@Z");
//};

//public: long c_data_iterator<struct player_datum>::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@?$c_data_iterator@Uplayer_datum@@@@QBAJXZ");
//};

