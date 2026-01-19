/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_teleporter_area, 32>::k_element_count; // "?k_element_count@?$s_static_array@Vc_teleporter_area@@$0CA@@@2JB"

// struct s_teleporter_globals * get_teleporter_globals(void);
// void game_engine_teleporters_initialize_for_new_map(void);
// void game_engine_teleporters_dispose_from_old_map(void);
// void game_engine_teleporters_handle_promotion_to_simulation_authority(void);
// void game_engine_teleporters_handle_deleted_object(long);
// void game_engine_teleporters_update(void);
// void game_engine_teleporters_render(void);
// bool game_engine_teleporters_check_teleport_feasibility(union real_point3d const *, union real_point3d const *);
// public: struct s_multiplayer_object_boundary_geometry_data const * c_area::get_boundary_geometry(void) const;
// public: long c_teleporter_area::get_channel(void) const;
// float game_engine_teleporter_active(long);
// public: long c_area::get_object_index(void) const;
// float game_engine_teleporter_blocked(long);
// float game_engine_teleporter_cannot_send(long);
// float game_engine_teleporter_recently_teleported(long);
// public: long c_teleporter_area::get_recharge_timer(void) const;
// void update_players_before_teleporters(void);
// void update_players_after_teleporters(void);
// void update_objects_before_teleporters(void);
// void update_objects_after_teleporters(void);
// public: void c_teleporter_area::update(void);
// public: bool c_teleporter_area::can_teleport_players(void) const;
// public: bool c_teleporter_area::can_teleport_light_land_vehicles(void) const;
// public: bool c_teleporter_area::can_teleport_heavy_land_vehicles(void) const;
// public: bool c_teleporter_area::can_teleport_flying_vehicles(void) const;
// public: bool c_teleporter_area::can_teleport_projectiles(void) const;
// private: void c_teleporter_area::update_players(void);
// private: void c_teleporter_area::update_projectiles(void);
// private: void c_teleporter_area::update_vehicles(void);
// public: bool c_teleporter_area::is_sender(void) const;
// public: bool c_teleporter_area::is_receiver(void) const;
// public: struct object_datum const * c_teleporter_area::get_object(void) const;
// public: struct s_multiplayer_object_properties const * c_teleporter_area::get_multiplayer_properties(void) const;
// class c_teleporter_area * teleporter_try_and_get_random_available_receiver(class c_teleporter_area const *, long, bool);
// bool teleporter_receiver_has_connected_sender(class c_teleporter_area const *);
// bool teleporter_sender_has_connected_receiver(class c_teleporter_area const *);
// bool teleporter_can_pass_object(class c_teleporter_area const *, long);
// bool teleporter_is_blocked_for_object(class c_teleporter_area const *, class c_teleporter_area const *, long);
// bool teleporter_has_object_inside_boundary_area(class c_teleporter_area const *, long *);
// void teleporter_get_teleport_destination_position(class c_teleporter_area const *, class c_teleporter_area const *, long, union real_point3d *);
// bool teleporter_teleport_object(class c_teleporter_area *, class c_teleporter_area *, long);
// public: void c_teleporter_area::set_recharge_timer(long);
// void teleporter_flag_object_as_having_teleported_recursive(long);
// void send_teleportation_event_for_player(long);
// void display_teleporter_blocked_message(long);
// long get_teleporter_recharge_time_ticks(void);
// class c_teleporter_area * teleporter_try_and_get_from_object_index(long);
// public: bool c_area_set<class c_teleporter_area, 32>::exist(void);
// public: void c_multiplayer_object_iterator<struct vehicle_datum>::begin(unsigned long, unsigned char, unsigned long);
// public: bool c_multiplayer_object_iterator<struct vehicle_datum>::next(void);
// public: long c_static_stack<class c_teleporter_area *, 32>::count(void) const;
// public: void c_static_stack<class c_teleporter_area *, 32>::push_back(class c_teleporter_area *const &);
// public: class c_teleporter_area *& c_static_stack<class c_teleporter_area *, 32>::operator[](long);
// public: c_static_stack<class c_teleporter_area *, 32>::c_static_stack<class c_teleporter_area *, 32>(void);
// public: bool c_static_stack<class c_teleporter_area *, 32>::valid(long) const;
// public: long c_static_stack<class c_teleporter_area *, 32>::push(void);
// public: class c_teleporter_area ** c_static_stack<class c_teleporter_area *, 32>::get(long);
// public: bool c_static_stack<class c_teleporter_area *, 32>::valid(void) const;
// public: bool c_static_stack<class c_teleporter_area *, 32>::full(void) const;
// public: struct s_teleporter_globals * c_opaque_data<struct s_teleporter_globals, 3604, 4>::get(void);
// public: bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_teleporter_passability) const;
// public: void c_area_set<class c_teleporter_area, 32>::initialize(long, long, enum e_multiplayer_team_designator, enum e_area_set_team_designator_context);
// public: void c_area_set<class c_teleporter_area, 32>::update(void);
// public: void c_area_set<class c_teleporter_area, 32>::render(void);
// public: class c_teleporter_area * c_area_set<class c_teleporter_area, 32>::begin(void);
// public: class c_teleporter_area * c_area_set<class c_teleporter_area, 32>::end(void);
// public: void c_area_set<class c_teleporter_area, 32>::handle_deleted_object(long);
// public: class c_teleporter_area * s_static_array<class c_teleporter_area, 32>::begin(void);
// public: static bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_teleporter_passability);
// private: static unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_teleporter_passability);
// protected: void c_area_set<class c_teleporter_area, 32>::update_areas(void);
// public: void c_area::set_object_index(long);
// ?sort_range@?$s_static_array@J$0CA@@@QAAXJQ6A_NPBX00@Z0@Z;
// public: class c_teleporter_area & s_static_array<class c_teleporter_area, 32>::operator[]<long>(long);
// public: static bool s_static_array<class c_teleporter_area, 32>::valid<long>(long);

//struct s_teleporter_globals * get_teleporter_globals(void)
//{
//    mangled_ppc("?get_teleporter_globals@@YAPAUs_teleporter_globals@@XZ");
//};

//void game_engine_teleporters_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_engine_teleporters_initialize_for_new_map@@YAXXZ");
//};

//void game_engine_teleporters_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_engine_teleporters_dispose_from_old_map@@YAXXZ");
//};

//void game_engine_teleporters_handle_promotion_to_simulation_authority(void)
//{
//    mangled_ppc("?game_engine_teleporters_handle_promotion_to_simulation_authority@@YAXXZ");
//};

//void game_engine_teleporters_handle_deleted_object(long)
//{
//    mangled_ppc("?game_engine_teleporters_handle_deleted_object@@YAXJ@Z");
//};

//void game_engine_teleporters_update(void)
//{
//    mangled_ppc("?game_engine_teleporters_update@@YAXXZ");
//};

//void game_engine_teleporters_render(void)
//{
//    mangled_ppc("?game_engine_teleporters_render@@YAXXZ");
//};

//bool game_engine_teleporters_check_teleport_feasibility(union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?game_engine_teleporters_check_teleport_feasibility@@YA_NPBTreal_point3d@@0@Z");
//};

//public: struct s_multiplayer_object_boundary_geometry_data const * c_area::get_boundary_geometry(void) const
//{
//    mangled_ppc("?get_boundary_geometry@c_area@@QBAPBUs_multiplayer_object_boundary_geometry_data@@XZ");
//};

//public: long c_teleporter_area::get_channel(void) const
//{
//    mangled_ppc("?get_channel@c_teleporter_area@@QBAJXZ");
//};

//float game_engine_teleporter_active(long)
//{
//    mangled_ppc("?game_engine_teleporter_active@@YAMJ@Z");
//};

//public: long c_area::get_object_index(void) const
//{
//    mangled_ppc("?get_object_index@c_area@@QBAJXZ");
//};

//float game_engine_teleporter_blocked(long)
//{
//    mangled_ppc("?game_engine_teleporter_blocked@@YAMJ@Z");
//};

//float game_engine_teleporter_cannot_send(long)
//{
//    mangled_ppc("?game_engine_teleporter_cannot_send@@YAMJ@Z");
//};

//float game_engine_teleporter_recently_teleported(long)
//{
//    mangled_ppc("?game_engine_teleporter_recently_teleported@@YAMJ@Z");
//};

//public: long c_teleporter_area::get_recharge_timer(void) const
//{
//    mangled_ppc("?get_recharge_timer@c_teleporter_area@@QBAJXZ");
//};

//void update_players_before_teleporters(void)
//{
//    mangled_ppc("?update_players_before_teleporters@@YAXXZ");
//};

//void update_players_after_teleporters(void)
//{
//    mangled_ppc("?update_players_after_teleporters@@YAXXZ");
//};

//void update_objects_before_teleporters(void)
//{
//    mangled_ppc("?update_objects_before_teleporters@@YAXXZ");
//};

//void update_objects_after_teleporters(void)
//{
//    mangled_ppc("?update_objects_after_teleporters@@YAXXZ");
//};

//public: void c_teleporter_area::update(void)
//{
//    mangled_ppc("?update@c_teleporter_area@@QAAXXZ");
//};

//public: bool c_teleporter_area::can_teleport_players(void) const
//{
//    mangled_ppc("?can_teleport_players@c_teleporter_area@@QBA_NXZ");
//};

//public: bool c_teleporter_area::can_teleport_light_land_vehicles(void) const
//{
//    mangled_ppc("?can_teleport_light_land_vehicles@c_teleporter_area@@QBA_NXZ");
//};

//public: bool c_teleporter_area::can_teleport_heavy_land_vehicles(void) const
//{
//    mangled_ppc("?can_teleport_heavy_land_vehicles@c_teleporter_area@@QBA_NXZ");
//};

//public: bool c_teleporter_area::can_teleport_flying_vehicles(void) const
//{
//    mangled_ppc("?can_teleport_flying_vehicles@c_teleporter_area@@QBA_NXZ");
//};

//public: bool c_teleporter_area::can_teleport_projectiles(void) const
//{
//    mangled_ppc("?can_teleport_projectiles@c_teleporter_area@@QBA_NXZ");
//};

//private: void c_teleporter_area::update_players(void)
//{
//    mangled_ppc("?update_players@c_teleporter_area@@AAAXXZ");
//};

//private: void c_teleporter_area::update_projectiles(void)
//{
//    mangled_ppc("?update_projectiles@c_teleporter_area@@AAAXXZ");
//};

//private: void c_teleporter_area::update_vehicles(void)
//{
//    mangled_ppc("?update_vehicles@c_teleporter_area@@AAAXXZ");
//};

//public: bool c_teleporter_area::is_sender(void) const
//{
//    mangled_ppc("?is_sender@c_teleporter_area@@QBA_NXZ");
//};

//public: bool c_teleporter_area::is_receiver(void) const
//{
//    mangled_ppc("?is_receiver@c_teleporter_area@@QBA_NXZ");
//};

//public: struct object_datum const * c_teleporter_area::get_object(void) const
//{
//    mangled_ppc("?get_object@c_teleporter_area@@QBAPBUobject_datum@@XZ");
//};

//public: struct s_multiplayer_object_properties const * c_teleporter_area::get_multiplayer_properties(void) const
//{
//    mangled_ppc("?get_multiplayer_properties@c_teleporter_area@@QBAPBUs_multiplayer_object_properties@@XZ");
//};

//class c_teleporter_area * teleporter_try_and_get_random_available_receiver(class c_teleporter_area const *, long, bool)
//{
//    mangled_ppc("?teleporter_try_and_get_random_available_receiver@@YAPAVc_teleporter_area@@PBV1@J_N@Z");
//};

//bool teleporter_receiver_has_connected_sender(class c_teleporter_area const *)
//{
//    mangled_ppc("?teleporter_receiver_has_connected_sender@@YA_NPBVc_teleporter_area@@@Z");
//};

//bool teleporter_sender_has_connected_receiver(class c_teleporter_area const *)
//{
//    mangled_ppc("?teleporter_sender_has_connected_receiver@@YA_NPBVc_teleporter_area@@@Z");
//};

//bool teleporter_can_pass_object(class c_teleporter_area const *, long)
//{
//    mangled_ppc("?teleporter_can_pass_object@@YA_NPBVc_teleporter_area@@J@Z");
//};

//bool teleporter_is_blocked_for_object(class c_teleporter_area const *, class c_teleporter_area const *, long)
//{
//    mangled_ppc("?teleporter_is_blocked_for_object@@YA_NPBVc_teleporter_area@@0J@Z");
//};

//bool teleporter_has_object_inside_boundary_area(class c_teleporter_area const *, long *)
//{
//    mangled_ppc("?teleporter_has_object_inside_boundary_area@@YA_NPBVc_teleporter_area@@PAJ@Z");
//};

//void teleporter_get_teleport_destination_position(class c_teleporter_area const *, class c_teleporter_area const *, long, union real_point3d *)
//{
//    mangled_ppc("?teleporter_get_teleport_destination_position@@YAXPBVc_teleporter_area@@0JPATreal_point3d@@@Z");
//};

//bool teleporter_teleport_object(class c_teleporter_area *, class c_teleporter_area *, long)
//{
//    mangled_ppc("?teleporter_teleport_object@@YA_NPAVc_teleporter_area@@0J@Z");
//};

//public: void c_teleporter_area::set_recharge_timer(long)
//{
//    mangled_ppc("?set_recharge_timer@c_teleporter_area@@QAAXJ@Z");
//};

//void teleporter_flag_object_as_having_teleported_recursive(long)
//{
//    mangled_ppc("?teleporter_flag_object_as_having_teleported_recursive@@YAXJ@Z");
//};

//void send_teleportation_event_for_player(long)
//{
//    mangled_ppc("?send_teleportation_event_for_player@@YAXJ@Z");
//};

//void display_teleporter_blocked_message(long)
//{
//    mangled_ppc("?display_teleporter_blocked_message@@YAXJ@Z");
//};

//long get_teleporter_recharge_time_ticks(void)
//{
//    mangled_ppc("?get_teleporter_recharge_time_ticks@@YAJXZ");
//};

//class c_teleporter_area * teleporter_try_and_get_from_object_index(long)
//{
//    mangled_ppc("?teleporter_try_and_get_from_object_index@@YAPAVc_teleporter_area@@J@Z");
//};

//public: bool c_area_set<class c_teleporter_area, 32>::exist(void)
//{
//    mangled_ppc("?exist@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAA_NXZ");
//};

//public: void c_multiplayer_object_iterator<struct vehicle_datum>::begin(unsigned long, unsigned char, unsigned long)
//{
//    mangled_ppc("?begin@?$c_multiplayer_object_iterator@Uvehicle_datum@@@@QAAXKEK@Z");
//};

//public: bool c_multiplayer_object_iterator<struct vehicle_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_multiplayer_object_iterator@Uvehicle_datum@@@@QAA_NXZ");
//};

//public: long c_static_stack<class c_teleporter_area *, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QBAJXZ");
//};

//public: void c_static_stack<class c_teleporter_area *, 32>::push_back(class c_teleporter_area *const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QAAXABQAVc_teleporter_area@@@Z");
//};

//public: class c_teleporter_area *& c_static_stack<class c_teleporter_area *, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QAAAAPAVc_teleporter_area@@J@Z");
//};

//public: c_static_stack<class c_teleporter_area *, 32>::c_static_stack<class c_teleporter_area *, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QAA@XZ");
//};

//public: bool c_static_stack<class c_teleporter_area *, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<class c_teleporter_area *, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QAAJXZ");
//};

//public: class c_teleporter_area ** c_static_stack<class c_teleporter_area *, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QAAPAPAVc_teleporter_area@@J@Z");
//};

//public: bool c_static_stack<class c_teleporter_area *, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_teleporter_area *, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@PAVc_teleporter_area@@$0CA@@@QBA_NXZ");
//};

//public: struct s_teleporter_globals * c_opaque_data<struct s_teleporter_globals, 3604, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_teleporter_globals@@$0OBE@$03@@QAAPAUs_teleporter_globals@@XZ");
//};

//public: bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_teleporter_passability) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_teleporter_passability@@@Z");
//};

//public: void c_area_set<class c_teleporter_area, 32>::initialize(long, long, enum e_multiplayer_team_designator, enum e_area_set_team_designator_context)
//{
//    mangled_ppc("?initialize@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAAXJJW4e_multiplayer_team_designator@@W4e_area_set_team_designator_context@@@Z");
//};

//public: void c_area_set<class c_teleporter_area, 32>::update(void)
//{
//    mangled_ppc("?update@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAAXXZ");
//};

//public: void c_area_set<class c_teleporter_area, 32>::render(void)
//{
//    mangled_ppc("?render@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAAXXZ");
//};

//public: class c_teleporter_area * c_area_set<class c_teleporter_area, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAAPAVc_teleporter_area@@XZ");
//};

//public: class c_teleporter_area * c_area_set<class c_teleporter_area, 32>::end(void)
//{
//    mangled_ppc("?end@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAAPAVc_teleporter_area@@XZ");
//};

//public: void c_area_set<class c_teleporter_area, 32>::handle_deleted_object(long)
//{
//    mangled_ppc("?handle_deleted_object@?$c_area_set@Vc_teleporter_area@@$0CA@@@QAAXJ@Z");
//};

//public: class c_teleporter_area * s_static_array<class c_teleporter_area, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Vc_teleporter_area@@$0CA@@@QAAPAVc_teleporter_area@@XZ");
//};

//public: static bool c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_teleporter_passability)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_teleporter_passability@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_teleporter_passability, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_teleporter_passability)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_teleporter_passability@@E$04Us_default_enum_string_resolver@@@@CAEW4e_teleporter_passability@@@Z");
//};

//protected: void c_area_set<class c_teleporter_area, 32>::update_areas(void)
//{
//    mangled_ppc("?update_areas@?$c_area_set@Vc_teleporter_area@@$0CA@@@IAAXXZ");
//};

//public: void c_area::set_object_index(long)
//{
//    mangled_ppc("?set_object_index@c_area@@QAAXJ@Z");
//};

//?sort_range@?$s_static_array@J$0CA@@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@J$0CA@@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: class c_teleporter_area & s_static_array<class c_teleporter_area, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_teleporter_area@@$0CA@@@QAAAAVc_teleporter_area@@J@Z");
//};

//public: static bool s_static_array<class c_teleporter_area, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_teleporter_area@@$0CA@@@SA_NJ@Z");
//};

