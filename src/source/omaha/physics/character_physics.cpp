/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool enable_animation_influenced_flight; // "?enable_animation_influenced_flight@@3_NA"
// char const **global_character_physics_override_names; // "?global_character_physics_override_names@@3PAPBDA"
// bool enable_flight_noise; // "?enable_flight_noise@@3_NA"
// enum e_character_physics_override g_character_physics_override; // "?g_character_physics_override@@3W4e_character_physics_override@@A"
// long g_player_physics_override; // "?g_player_physics_override@@3JA"

// public: void c_character_physics_component::initialize(long);
// public: void c_character_physics_component::set_mode(enum c_character_physics_component::e_mode);
// public: enum c_character_physics_component::e_mode c_character_physics_component::get_mode(void) const;
// public: bool c_character_physics_component::is_sentinel_mode(void) const;
// public: void c_character_physics_component::update(struct s_character_physics_update_output_datum *, struct s_character_physics_update_input_datum const *);
// public: void c_character_physics_component::move(struct s_character_physics_move_output_datum *, struct s_character_physics_move_input_datum const *);
// public: void c_character_physics_component::snap_facing(union vector3d *, union vector3d *, struct s_character_physics_update_input_datum const *);
// private: void c_character_physics_component::update_animation(struct s_character_physics_update_output_datum *, struct s_character_physics_update_input_datum const *);
// public: bool c_character_physics_component::is_immune_to_collision_damage(void) const;
// private: void c_character_physics_component::ping_collision_damage_immunity_counter(void);
// public: class c_character_physics_mode_ground_datum * c_character_physics_component::get_mode_ground(void);
// public: class c_character_physics_mode_ground_datum const * c_character_physics_component::get_mode_ground_const(void) const;
// public: class c_character_physics_mode_flying_datum * c_character_physics_component::get_mode_flying(void);
// public: class c_character_physics_mode_dead_datum * c_character_physics_component::get_mode_dead(void);
// public: class c_character_physics_mode_sentinel_datum * c_character_physics_component::get_mode_sentinel(void);
// public: class c_character_physics_mode_melee_datum * c_character_physics_component::get_mode_melee(void);
// void character_physics_update_input_datum_initialize(long, struct s_character_physics_update_input_datum *, class c_character_physics_component const *, struct s_character_physics_definition const *, long, class c_animation_manager const *, float, enum e_havok_group, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, class hkpShape const *);
// void character_physics_update_input_datum_initialize_ground(struct s_character_physics_update_input_datum *, class c_character_physics_component *, bool, bool, bool, bool, float, float, long);
// void character_physics_update_input_datum_initialize_flying(long, struct s_character_physics_update_input_datum *, class c_character_physics_component const *, float, float);
// void character_physics_update_input_datum_initialize_dead(struct s_character_physics_update_input_datum *, class c_character_physics_component *, bool, bool, bool, bool);
// void character_physics_update_input_datum_initialize_sentinel(struct s_character_physics_update_input_datum *, class c_character_physics_component const *, class c_animation_id, union real_point3d const *, union real_point3d const *, union vector3d const *);
// void character_physics_update_input_datum_initialize_melee(struct s_character_physics_update_input_datum *, class c_character_physics_component const *, bool, union real_point3d const *, union vector3d const *, float, float, float);
// void character_physics_move_input_datum_initialize(struct s_character_physics_move_input_datum *, class c_character_physics_component const *, struct s_character_physics_definition const *, long, long, bool, bool, bool, bool, bool, bool, bool, bool, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// void character_physics_move_input_datum_initialize_ground(struct s_character_physics_move_input_datum *, class c_character_physics_component *, bool);
// void character_physics_move_input_datum_initialize_flying(struct s_character_physics_move_input_datum *, class c_character_physics_component const *);
// void character_physics_move_input_datum_initialize_dead(struct s_character_physics_move_input_datum *, class c_character_physics_component const *, bool);
// void character_physics_move_input_datum_initialize_sentinel(struct s_character_physics_move_input_datum *, class c_character_physics_component const *, union real_point3d const *);
// void character_physics_move_input_datum_initialize_melee(struct s_character_physics_move_input_datum *, class c_character_physics_component const *);

//public: void c_character_physics_component::initialize(long)
//{
//    mangled_ppc("?initialize@c_character_physics_component@@QAAXJ@Z");
//};

//public: void c_character_physics_component::set_mode(enum c_character_physics_component::e_mode)
//{
//    mangled_ppc("?set_mode@c_character_physics_component@@QAAXW4e_mode@1@@Z");
//};

//public: enum c_character_physics_component::e_mode c_character_physics_component::get_mode(void) const
//{
//    mangled_ppc("?get_mode@c_character_physics_component@@QBA?AW4e_mode@1@XZ");
//};

//public: bool c_character_physics_component::is_sentinel_mode(void) const
//{
//    mangled_ppc("?is_sentinel_mode@c_character_physics_component@@QBA_NXZ");
//};

//public: void c_character_physics_component::update(struct s_character_physics_update_output_datum *, struct s_character_physics_update_input_datum const *)
//{
//    mangled_ppc("?update@c_character_physics_component@@QAAXPAUs_character_physics_update_output_datum@@PBUs_character_physics_update_input_datum@@@Z");
//};

//public: void c_character_physics_component::move(struct s_character_physics_move_output_datum *, struct s_character_physics_move_input_datum const *)
//{
//    mangled_ppc("?move@c_character_physics_component@@QAAXPAUs_character_physics_move_output_datum@@PBUs_character_physics_move_input_datum@@@Z");
//};

//public: void c_character_physics_component::snap_facing(union vector3d *, union vector3d *, struct s_character_physics_update_input_datum const *)
//{
//    mangled_ppc("?snap_facing@c_character_physics_component@@QAAXPATvector3d@@0PBUs_character_physics_update_input_datum@@@Z");
//};

//private: void c_character_physics_component::update_animation(struct s_character_physics_update_output_datum *, struct s_character_physics_update_input_datum const *)
//{
//    mangled_ppc("?update_animation@c_character_physics_component@@AAAXPAUs_character_physics_update_output_datum@@PBUs_character_physics_update_input_datum@@@Z");
//};

//public: bool c_character_physics_component::is_immune_to_collision_damage(void) const
//{
//    mangled_ppc("?is_immune_to_collision_damage@c_character_physics_component@@QBA_NXZ");
//};

//private: void c_character_physics_component::ping_collision_damage_immunity_counter(void)
//{
//    mangled_ppc("?ping_collision_damage_immunity_counter@c_character_physics_component@@AAAXXZ");
//};

//public: class c_character_physics_mode_ground_datum * c_character_physics_component::get_mode_ground(void)
//{
//    mangled_ppc("?get_mode_ground@c_character_physics_component@@QAAPAVc_character_physics_mode_ground_datum@@XZ");
//};

//public: class c_character_physics_mode_ground_datum const * c_character_physics_component::get_mode_ground_const(void) const
//{
//    mangled_ppc("?get_mode_ground_const@c_character_physics_component@@QBAPBVc_character_physics_mode_ground_datum@@XZ");
//};

//public: class c_character_physics_mode_flying_datum * c_character_physics_component::get_mode_flying(void)
//{
//    mangled_ppc("?get_mode_flying@c_character_physics_component@@QAAPAVc_character_physics_mode_flying_datum@@XZ");
//};

//public: class c_character_physics_mode_dead_datum * c_character_physics_component::get_mode_dead(void)
//{
//    mangled_ppc("?get_mode_dead@c_character_physics_component@@QAAPAVc_character_physics_mode_dead_datum@@XZ");
//};

//public: class c_character_physics_mode_sentinel_datum * c_character_physics_component::get_mode_sentinel(void)
//{
//    mangled_ppc("?get_mode_sentinel@c_character_physics_component@@QAAPAVc_character_physics_mode_sentinel_datum@@XZ");
//};

//public: class c_character_physics_mode_melee_datum * c_character_physics_component::get_mode_melee(void)
//{
//    mangled_ppc("?get_mode_melee@c_character_physics_component@@QAAPAVc_character_physics_mode_melee_datum@@XZ");
//};

//void character_physics_update_input_datum_initialize(long, struct s_character_physics_update_input_datum *, class c_character_physics_component const *, struct s_character_physics_definition const *, long, class c_animation_manager const *, float, enum e_havok_group, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, class hkpShape const *)
//{
//    mangled_ppc("?character_physics_update_input_datum_initialize@@YAXJPAUs_character_physics_update_input_datum@@PBVc_character_physics_component@@PBUs_character_physics_definition@@JPBVc_animation_manager@@MW4e_havok_group@@_N55555555555MMPBTvector3d@@PBTreal_point3d@@66666PBVhkpShape@@@Z");
//};

//void character_physics_update_input_datum_initialize_ground(struct s_character_physics_update_input_datum *, class c_character_physics_component *, bool, bool, bool, bool, float, float, long)
//{
//    mangled_ppc("?character_physics_update_input_datum_initialize_ground@@YAXPAUs_character_physics_update_input_datum@@PAVc_character_physics_component@@_N222MMJ@Z");
//};

//void character_physics_update_input_datum_initialize_flying(long, struct s_character_physics_update_input_datum *, class c_character_physics_component const *, float, float)
//{
//    mangled_ppc("?character_physics_update_input_datum_initialize_flying@@YAXJPAUs_character_physics_update_input_datum@@PBVc_character_physics_component@@MM@Z");
//};

//void character_physics_update_input_datum_initialize_dead(struct s_character_physics_update_input_datum *, class c_character_physics_component *, bool, bool, bool, bool)
//{
//    mangled_ppc("?character_physics_update_input_datum_initialize_dead@@YAXPAUs_character_physics_update_input_datum@@PAVc_character_physics_component@@_N222@Z");
//};

//void character_physics_update_input_datum_initialize_sentinel(struct s_character_physics_update_input_datum *, class c_character_physics_component const *, class c_animation_id, union real_point3d const *, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?character_physics_update_input_datum_initialize_sentinel@@YAXPAUs_character_physics_update_input_datum@@PBVc_character_physics_component@@Vc_animation_id@@PBTreal_point3d@@3PBTvector3d@@@Z");
//};

//void character_physics_update_input_datum_initialize_melee(struct s_character_physics_update_input_datum *, class c_character_physics_component const *, bool, union real_point3d const *, union vector3d const *, float, float, float)
//{
//    mangled_ppc("?character_physics_update_input_datum_initialize_melee@@YAXPAUs_character_physics_update_input_datum@@PBVc_character_physics_component@@_NPBTreal_point3d@@PBTvector3d@@MMM@Z");
//};

//void character_physics_move_input_datum_initialize(struct s_character_physics_move_input_datum *, class c_character_physics_component const *, struct s_character_physics_definition const *, long, long, bool, bool, bool, bool, bool, bool, bool, bool, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?character_physics_move_input_datum_initialize@@YAXPAUs_character_physics_move_input_datum@@PBVc_character_physics_component@@PBUs_character_physics_definition@@JJ_N3333333PBTreal_point3d@@PBTvector3d@@55@Z");
//};

//void character_physics_move_input_datum_initialize_ground(struct s_character_physics_move_input_datum *, class c_character_physics_component *, bool)
//{
//    mangled_ppc("?character_physics_move_input_datum_initialize_ground@@YAXPAUs_character_physics_move_input_datum@@PAVc_character_physics_component@@_N@Z");
//};

//void character_physics_move_input_datum_initialize_flying(struct s_character_physics_move_input_datum *, class c_character_physics_component const *)
//{
//    mangled_ppc("?character_physics_move_input_datum_initialize_flying@@YAXPAUs_character_physics_move_input_datum@@PBVc_character_physics_component@@@Z");
//};

//void character_physics_move_input_datum_initialize_dead(struct s_character_physics_move_input_datum *, class c_character_physics_component const *, bool)
//{
//    mangled_ppc("?character_physics_move_input_datum_initialize_dead@@YAXPAUs_character_physics_move_input_datum@@PBVc_character_physics_component@@_N@Z");
//};

//void character_physics_move_input_datum_initialize_sentinel(struct s_character_physics_move_input_datum *, class c_character_physics_component const *, union real_point3d const *)
//{
//    mangled_ppc("?character_physics_move_input_datum_initialize_sentinel@@YAXPAUs_character_physics_move_input_datum@@PBVc_character_physics_component@@PBTreal_point3d@@@Z");
//};

//void character_physics_move_input_datum_initialize_melee(struct s_character_physics_move_input_datum *, class c_character_physics_component const *)
//{
//    mangled_ppc("?character_physics_move_input_datum_initialize_melee@@YAXPAUs_character_physics_move_input_datum@@PBVc_character_physics_component@@@Z");
//};

