/* ---------- headers */

#include "omaha\items\equipment_types.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_equipment_type *g_equipment_type_multiplayer_powerup; // "?g_equipment_type_multiplayer_powerup@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_spawner; // "?g_equipment_type_spawner@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_engineer_shields; // "?g_equipment_type_engineer_shields@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_proximity_mine; // "?g_equipment_type_proximity_mine@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_motion_tracker_noise; // "?g_equipment_type_motion_tracker_noise@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_showme; // "?g_equipment_type_showme@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_invincibility_mode; // "?g_equipment_type_invincibility_mode@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_treeoflife; // "?g_equipment_type_treeoflife@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_shapeshifter; // "?g_equipment_type_shapeshifter@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_player_trait_field; // "?g_equipment_type_player_trait_field@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_ai_trait_field; // "?g_equipment_type_ai_trait_field@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_repulsor_field; // "?g_equipment_type_repulsor_field@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_daddy; // "?g_equipment_type_daddy@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_laser_designation; // "?g_equipment_type_laser_designation@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_super_jump; // "?g_equipment_type_super_jump@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_ammo_pack; // "?g_equipment_type_ammo_pack@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_power_fist; // "?g_equipment_type_power_fist@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_health_pack; // "?g_equipment_type_health_pack@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_jet_pack; // "?g_equipment_type_jet_pack@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_hologram; // "?g_equipment_type_hologram@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_special_weapon; // "?g_equipment_type_special_weapon@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_special_move; // "?g_equipment_type_special_move@@3PAVc_equipment_type@@A"
// class c_equipment_type *g_equipment_type_sprint; // "?g_equipment_type_sprint@@3PAVc_equipment_type@@A"
// class c_equipment_type **g_equipment_types; // "?g_equipment_types@@3PAPAVc_equipment_type@@A"

// long equipment_effect_new_on_object(long, long, float);
// float equipment_get_energy_burned(long);
// long int_max(int, long);
// long equipment_get_warmup_ticks(long);
// public: virtual bool c_equipment_type_spawner::update(long) const;
// public: virtual void c_equipment_type_spawner::handle_client_key_frame_request(long) const;
// protected: void c_equipment_type_spawner::activate(long) const;
// private: void c_equipment_type_spawner::spawn_equipment(long) const;
// protected: virtual void c_equipment_type_engineer_shields::activate(long) const;
// void engineer_shields_activate(long, struct s_location *, union real_point3d *, float, long, bool);
// public: virtual bool c_equipment_type_proximity_mine::compute_function_value(long, long, long, float *, bool *, bool *) const;
// public: virtual bool c_equipment_type_proximity_mine::update(long) const;
// public: long const c_havok_component::get_object_index(void) const;
// public: virtual bool c_equipment_type_motion_tracker_noise::update(long) const;
// public: virtual bool c_equipment_type_invincibility_mode::update(long) const;
// protected: virtual void c_equipment_type_invincibility_mode::activate(long) const;
// private: void c_equipment_type_invincibility_mode::play_threshold_effects(long) const;
// protected: virtual void c_equipment_type_invincibility_mode::deactivate(long) const;
// private: void c_equipment_type_invincibility_mode::put_unit_in_armor_lock(long) const;
// private: void c_equipment_type_invincibility_mode::detach_projectiles_recursive(long, union real_point3d const *) const;
// public: virtual void c_equipment_type_treeoflife::equipment_new(long) const;
// public: virtual bool c_equipment_type_treeoflife::update(long) const;
// bool tree_of_life_update_object_recursive(struct s_equipment_type_treeoflife const *, union real_point3d const *, float, long);
// protected: virtual void c_equipment_type_shapeshifter::activate(long) const;
// protected: virtual void c_equipment_type_shapeshifter::deactivate(long) const;
// public: virtual bool c_equipment_type_repulsor_field::update(long) const;
// void apply_repulsor_field(long, union real_point3d const *, struct s_location const *, float, float, long);
// public: virtual void c_equipment_type_daddy::create_children(long) const;
// public: virtual bool c_equipment_type_daddy::update(long) const;
// private: void c_equipment_type_daddy::update_child_visibility(long) const;
// protected: virtual void c_equipment_type_super_jump::deactivate(long) const;
// public: virtual void c_equipment_type_ammo_pack::activate(long) const;
// enum e_weapon_set & operator++(enum e_weapon_set &);
// private: void c_equipment_type_ammo_pack::give_ammo_to_weapon(long, long) const;
// protected: virtual bool c_equipment_type_health_pack::update(long) const;
// protected: virtual void c_equipment_type_jet_pack::activate(long) const;
// protected: virtual void c_equipment_type_jet_pack::deactivate(long) const;
// protected: virtual bool c_equipment_type_jet_pack::update(long) const;
// protected: void c_equipment_type_fire_and_forget::request_activation_change(long, bool) const;
// protected: virtual void c_equipment_type_hologram::activate(long) const;
// long weapon_try_and_get_definition_index(long);
// void delete_old_hologram(long);
// protected: virtual void c_equipment_type_hologram::deactivate(long) const;
// public: virtual bool c_equipment_type_special_weapon::update(long) const;
// protected: virtual void c_equipment_type_special_weapon::activate(long) const;
// protected: virtual void c_equipment_type_special_weapon::deactivate(long) const;
// protected: virtual bool c_equipment_type_special_move::can_activate(long) const;
// protected: virtual void c_equipment_type_special_move::activate(long) const;
// private: long c_equipment_type_special_move::get_direction_index(union vector3d const *, union vector3d const *, union vector3d *) const;
// public: bool c_flags_no_init<enum s_equipment_type_treeoflife::e_flag, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum s_equipment_type_treeoflife::e_flag) const;
// public: bool c_flags_no_init<enum s_equipment_type_engineer_shields::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum s_equipment_type_engineer_shields::e_flag) const;
// public: struct s_player_loadout_weapon & s_static_array<struct s_player_loadout_weapon, 3>::operator[]<int>(int);
// public: static bool c_flags_no_init<enum s_equipment_type_treeoflife::e_flag, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_equipment_type_treeoflife::e_flag);
// private: static unsigned long c_flags_no_init<enum s_equipment_type_treeoflife::e_flag, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_equipment_type_treeoflife::e_flag);
// public: static bool c_flags_no_init<enum s_equipment_type_engineer_shields::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_equipment_type_engineer_shields::e_flag);
// private: static unsigned long c_flags_no_init<enum s_equipment_type_engineer_shields::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_equipment_type_engineer_shields::e_flag);
// public: static bool s_static_array<struct s_player_loadout_weapon, 3>::valid<int>(int);
// public: c_equipment_type_multiplayer_powerup::c_equipment_type_multiplayer_powerup(void);
// public: virtual void c_equipment_type::equipment_new(long) const;
// public: virtual void c_equipment_type::create_children(long) const;
// public: virtual bool c_equipment_type::can_activate(long) const;
// public: virtual bool c_equipment_type::compute_function_value(long, long, long, float *, bool *, bool *) const;
// public: virtual void c_equipment_type::activate_local_predicted(long) const;
// public: virtual void c_equipment_type::deactivate_local_predicted(long) const;
// public: virtual void c_equipment_type::activate_local_authoritative(long) const;
// public: virtual void c_equipment_type::deactivate_local_authoritative(long) const;
// public: virtual void c_equipment_type::handle_activation_request(long) const;
// public: virtual void c_equipment_type::handle_deactivation_request(long) const;
// public: virtual void c_equipment_type::apply_activation_message_remote(long) const;
// public: virtual void c_equipment_type::apply_deactivation_message_remote(long) const;
// public: virtual void c_equipment_type::apply_activation_message_local(long) const;
// public: virtual void c_equipment_type::apply_deactivation_message_local(long) const;
// public: virtual bool c_equipment_type::update(long) const;
// public: virtual void c_equipment_type::notify_child_took_shield_damage(long) const;
// public: virtual bool c_equipment_type::can_be_thrown(long) const;
// public: virtual void c_equipment_type::handle_client_key_frame_request(long) const;
// public: c_equipment_type::c_equipment_type(void);
// public: c_equipment_type_spawner::c_equipment_type_spawner(void);
// public: virtual void c_equipment_type_spawner::activate_local_predicted(long) const;
// public: virtual void c_equipment_type_spawner::activate_local_authoritative(long) const;
// public: c_equipment_type_engineer_shields::c_equipment_type_engineer_shields(void);
// public: virtual void c_equipment_type_fire_and_forget::activate_local_authoritative(long) const;
// public: virtual void c_equipment_type_fire_and_forget::deactivate_local_authoritative(long) const;
// public: virtual void c_equipment_type_fire_and_forget::handle_activation_request(long) const;
// public: virtual void c_equipment_type_fire_and_forget::handle_deactivation_request(long) const;
// public: virtual void c_equipment_type_fire_and_forget::activate_local_predicted(long) const;
// public: virtual void c_equipment_type_fire_and_forget::deactivate_local_predicted(long) const;
// protected: virtual void c_equipment_type_fire_and_forget::deactivate(long) const;
// public: c_equipment_type_fire_and_forget::c_equipment_type_fire_and_forget(void);
// protected: virtual void c_equipment_type_fire_and_forget::activate(long) const;
// public: c_equipment_type_proximity_mine::c_equipment_type_proximity_mine(void);
// public: c_equipment_type_motion_tracker_noise::c_equipment_type_motion_tracker_noise(void);
// public: c_equipment_type_invincibility_mode::c_equipment_type_invincibility_mode(void);
// public: virtual void c_equipment_type_authoritative::activate_local_predicted(long) const;
// public: virtual void c_equipment_type_authoritative::activate_local_authoritative(long) const;
// public: virtual void c_equipment_type_authoritative::handle_activation_request(long) const;
// public: virtual void c_equipment_type_authoritative::apply_activation_message_remote(long) const;
// public: virtual void c_equipment_type_authoritative::apply_activation_message_local(long) const;
// public: virtual void c_equipment_type_invincibility_mode::deactivate_local_predicted(long) const;
// public: virtual void c_equipment_type_invincibility_mode::deactivate_local_authoritative(long) const;
// public: virtual void c_equipment_type_invincibility_mode::handle_deactivation_request(long) const;
// public: virtual void c_equipment_type_invincibility_mode::apply_deactivation_message_remote(long) const;
// public: virtual void c_equipment_type_invincibility_mode::apply_deactivation_message_local(long) const;
// public: c_equipment_type_authoritative::c_equipment_type_authoritative(void);
// public: virtual void c_equipment_type_authoritative::deactivate_local_predicted(long) const;
// public: virtual void c_equipment_type_authoritative::deactivate_local_authoritative(long) const;
// public: virtual void c_equipment_type_authoritative::handle_deactivation_request(long) const;
// public: virtual void c_equipment_type_authoritative::apply_deactivation_message_remote(long) const;
// public: virtual void c_equipment_type_authoritative::apply_deactivation_message_local(long) const;
// protected: virtual void c_equipment_type_authoritative::activate(long) const;
// protected: virtual void c_equipment_type_authoritative::deactivate(long) const;
// public: c_equipment_type_treeoflife::c_equipment_type_treeoflife(void);
// public: c_equipment_type_shapeshifter::c_equipment_type_shapeshifter(void);
// public: virtual void c_equipment_type_predicted::activate_local_predicted(long) const;
// public: virtual void c_equipment_type_predicted::deactivate_local_predicted(long) const;
// public: virtual void c_equipment_type_predicted::activate_local_authoritative(long) const;
// public: virtual void c_equipment_type_predicted::deactivate_local_authoritative(long) const;
// public: virtual void c_equipment_type_predicted::handle_activation_request(long) const;
// public: virtual void c_equipment_type_predicted::handle_deactivation_request(long) const;
// public: virtual void c_equipment_type_predicted::apply_activation_message_remote(long) const;
// public: virtual void c_equipment_type_predicted::apply_deactivation_message_remote(long) const;
// public: virtual void c_equipment_type_predicted::apply_activation_message_local(long) const;
// public: virtual void c_equipment_type_predicted::apply_deactivation_message_local(long) const;
// public: c_equipment_type_predicted::c_equipment_type_predicted(void);
// protected: virtual void c_equipment_type_predicted::activate(long) const;
// protected: virtual void c_equipment_type_predicted::deactivate(long) const;
// public: c_equipment_type_repulsor_field::c_equipment_type_repulsor_field(void);
// public: c_equipment_type_daddy::c_equipment_type_daddy(void);
// public: c_equipment_type_super_jump::c_equipment_type_super_jump(void);
// public: c_equipment_type_ammo_pack::c_equipment_type_ammo_pack(void);
// public: c_equipment_type_health_pack::c_equipment_type_health_pack(void);
// public: c_equipment_type_jet_pack::c_equipment_type_jet_pack(void);
// public: c_equipment_type_hologram::c_equipment_type_hologram(void);
// public: c_equipment_type_special_weapon::c_equipment_type_special_weapon(void);
// public: c_equipment_type_special_move::c_equipment_type_special_move(void);
// public: c_equipment_type_sprint::c_equipment_type_sprint(void);
// protected: virtual bool c_equipment_type_sprint::can_activate(long) const;

//long equipment_effect_new_on_object(long, long, float)
//{
//    mangled_ppc("?equipment_effect_new_on_object@@YAJJJM@Z");
//};

//float equipment_get_energy_burned(long)
//{
//    mangled_ppc("?equipment_get_energy_burned@@YAMJ@Z");
//};

//long int_max(int, long)
//{
//    mangled_ppc("?int_max@@YAJHJ@Z");
//};

//long equipment_get_warmup_ticks(long)
//{
//    mangled_ppc("?equipment_get_warmup_ticks@@YAJJ@Z");
//};

//public: virtual bool c_equipment_type_spawner::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_spawner@@UBA_NJ@Z");
//};

//public: virtual void c_equipment_type_spawner::handle_client_key_frame_request(long) const
//{
//    mangled_ppc("?handle_client_key_frame_request@c_equipment_type_spawner@@UBAXJ@Z");
//};

//protected: void c_equipment_type_spawner::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_spawner@@IBAXJ@Z");
//};

//private: void c_equipment_type_spawner::spawn_equipment(long) const
//{
//    mangled_ppc("?spawn_equipment@c_equipment_type_spawner@@ABAXJ@Z");
//};

//protected: virtual void c_equipment_type_engineer_shields::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_engineer_shields@@MBAXJ@Z");
//};

//void engineer_shields_activate(long, struct s_location *, union real_point3d *, float, long, bool)
//{
//    mangled_ppc("?engineer_shields_activate@@YAXJPAUs_location@@PATreal_point3d@@MJ_N@Z");
//};

//public: virtual bool c_equipment_type_proximity_mine::compute_function_value(long, long, long, float *, bool *, bool *) const
//{
//    mangled_ppc("?compute_function_value@c_equipment_type_proximity_mine@@UBA_NJJJPAMPA_N1@Z");
//};

//public: virtual bool c_equipment_type_proximity_mine::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_proximity_mine@@UBA_NJ@Z");
//};

//public: long const c_havok_component::get_object_index(void) const
//{
//    mangled_ppc("?get_object_index@c_havok_component@@QBA?BJXZ");
//};

//public: virtual bool c_equipment_type_motion_tracker_noise::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_motion_tracker_noise@@UBA_NJ@Z");
//};

//public: virtual bool c_equipment_type_invincibility_mode::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_invincibility_mode@@UBA_NJ@Z");
//};

//protected: virtual void c_equipment_type_invincibility_mode::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_invincibility_mode@@MBAXJ@Z");
//};

//private: void c_equipment_type_invincibility_mode::play_threshold_effects(long) const
//{
//    mangled_ppc("?play_threshold_effects@c_equipment_type_invincibility_mode@@ABAXJ@Z");
//};

//protected: virtual void c_equipment_type_invincibility_mode::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_invincibility_mode@@MBAXJ@Z");
//};

//private: void c_equipment_type_invincibility_mode::put_unit_in_armor_lock(long) const
//{
//    mangled_ppc("?put_unit_in_armor_lock@c_equipment_type_invincibility_mode@@ABAXJ@Z");
//};

//private: void c_equipment_type_invincibility_mode::detach_projectiles_recursive(long, union real_point3d const *) const
//{
//    mangled_ppc("?detach_projectiles_recursive@c_equipment_type_invincibility_mode@@ABAXJPBTreal_point3d@@@Z");
//};

//public: virtual void c_equipment_type_treeoflife::equipment_new(long) const
//{
//    mangled_ppc("?equipment_new@c_equipment_type_treeoflife@@UBAXJ@Z");
//};

//public: virtual bool c_equipment_type_treeoflife::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_treeoflife@@UBA_NJ@Z");
//};

//bool tree_of_life_update_object_recursive(struct s_equipment_type_treeoflife const *, union real_point3d const *, float, long)
//{
//    mangled_ppc("?tree_of_life_update_object_recursive@@YA_NPBUs_equipment_type_treeoflife@@PBTreal_point3d@@MJ@Z");
//};

//protected: virtual void c_equipment_type_shapeshifter::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_shapeshifter@@MBAXJ@Z");
//};

//protected: virtual void c_equipment_type_shapeshifter::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_shapeshifter@@MBAXJ@Z");
//};

//public: virtual bool c_equipment_type_repulsor_field::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_repulsor_field@@UBA_NJ@Z");
//};

//void apply_repulsor_field(long, union real_point3d const *, struct s_location const *, float, float, long)
//{
//    mangled_ppc("?apply_repulsor_field@@YAXJPBTreal_point3d@@PBUs_location@@MMJ@Z");
//};

//public: virtual void c_equipment_type_daddy::create_children(long) const
//{
//    mangled_ppc("?create_children@c_equipment_type_daddy@@UBAXJ@Z");
//};

//public: virtual bool c_equipment_type_daddy::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_daddy@@UBA_NJ@Z");
//};

//private: void c_equipment_type_daddy::update_child_visibility(long) const
//{
//    mangled_ppc("?update_child_visibility@c_equipment_type_daddy@@ABAXJ@Z");
//};

//protected: virtual void c_equipment_type_super_jump::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_super_jump@@MBAXJ@Z");
//};

//public: virtual void c_equipment_type_ammo_pack::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_ammo_pack@@UBAXJ@Z");
//};

//enum e_weapon_set & operator++(enum e_weapon_set &)
//{
//    mangled_ppc("??E@YAAAW4e_weapon_set@@AAW40@@Z");
//};

//private: void c_equipment_type_ammo_pack::give_ammo_to_weapon(long, long) const
//{
//    mangled_ppc("?give_ammo_to_weapon@c_equipment_type_ammo_pack@@ABAXJJ@Z");
//};

//protected: virtual bool c_equipment_type_health_pack::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_health_pack@@MBA_NJ@Z");
//};

//protected: virtual void c_equipment_type_jet_pack::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_jet_pack@@MBAXJ@Z");
//};

//protected: virtual void c_equipment_type_jet_pack::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_jet_pack@@MBAXJ@Z");
//};

//protected: virtual bool c_equipment_type_jet_pack::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_jet_pack@@MBA_NJ@Z");
//};

//protected: void c_equipment_type_fire_and_forget::request_activation_change(long, bool) const
//{
//    mangled_ppc("?request_activation_change@c_equipment_type_fire_and_forget@@IBAXJ_N@Z");
//};

//protected: virtual void c_equipment_type_hologram::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_hologram@@MBAXJ@Z");
//};

//long weapon_try_and_get_definition_index(long)
//{
//    mangled_ppc("?weapon_try_and_get_definition_index@@YAJJ@Z");
//};

//void delete_old_hologram(long)
//{
//    mangled_ppc("?delete_old_hologram@@YAXJ@Z");
//};

//protected: virtual void c_equipment_type_hologram::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_hologram@@MBAXJ@Z");
//};

//public: virtual bool c_equipment_type_special_weapon::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type_special_weapon@@UBA_NJ@Z");
//};

//protected: virtual void c_equipment_type_special_weapon::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_special_weapon@@MBAXJ@Z");
//};

//protected: virtual void c_equipment_type_special_weapon::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_special_weapon@@MBAXJ@Z");
//};

//protected: virtual bool c_equipment_type_special_move::can_activate(long) const
//{
//    mangled_ppc("?can_activate@c_equipment_type_special_move@@MBA_NJ@Z");
//};

//protected: virtual void c_equipment_type_special_move::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_special_move@@MBAXJ@Z");
//};

//private: long c_equipment_type_special_move::get_direction_index(union vector3d const *, union vector3d const *, union vector3d *) const
//{
//    mangled_ppc("?get_direction_index@c_equipment_type_special_move@@ABAJPBTvector3d@@0PAT2@@Z");
//};

//public: bool c_flags_no_init<enum s_equipment_type_treeoflife::e_flag, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum s_equipment_type_treeoflife::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_equipment_type_treeoflife@@K$01Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_equipment_type_treeoflife@@@Z");
//};

//public: bool c_flags_no_init<enum s_equipment_type_engineer_shields::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum s_equipment_type_engineer_shields::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_equipment_type_engineer_shields@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_equipment_type_engineer_shields@@@Z");
//};

//public: struct s_player_loadout_weapon & s_static_array<struct s_player_loadout_weapon, 3>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_player_loadout_weapon@@$02@@QAAAAUs_player_loadout_weapon@@H@Z");
//};

//public: static bool c_flags_no_init<enum s_equipment_type_treeoflife::e_flag, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_equipment_type_treeoflife::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_equipment_type_treeoflife@@K$01Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_equipment_type_treeoflife@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum s_equipment_type_treeoflife::e_flag, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_equipment_type_treeoflife::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_equipment_type_treeoflife@@K$01Us_default_enum_string_resolver@@@@CAKW4e_flag@s_equipment_type_treeoflife@@@Z");
//};

//public: static bool c_flags_no_init<enum s_equipment_type_engineer_shields::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_equipment_type_engineer_shields::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_equipment_type_engineer_shields@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_equipment_type_engineer_shields@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum s_equipment_type_engineer_shields::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_equipment_type_engineer_shields::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_equipment_type_engineer_shields@@K$00Us_default_enum_string_resolver@@@@CAKW4e_flag@s_equipment_type_engineer_shields@@@Z");
//};

//public: static bool s_static_array<struct s_player_loadout_weapon, 3>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_player_loadout_weapon@@$02@@SA_NH@Z");
//};

//public: c_equipment_type_multiplayer_powerup::c_equipment_type_multiplayer_powerup(void)
//{
//    mangled_ppc("??0c_equipment_type_multiplayer_powerup@@QAA@XZ");
//};

//public: virtual void c_equipment_type::equipment_new(long) const
//{
//    mangled_ppc("?equipment_new@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::create_children(long) const
//{
//    mangled_ppc("?create_children@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual bool c_equipment_type::can_activate(long) const
//{
//    mangled_ppc("?can_activate@c_equipment_type@@UBA_NJ@Z");
//};

//public: virtual bool c_equipment_type::compute_function_value(long, long, long, float *, bool *, bool *) const
//{
//    mangled_ppc("?compute_function_value@c_equipment_type@@UBA_NJJJPAMPA_N1@Z");
//};

//public: virtual void c_equipment_type::activate_local_predicted(long) const
//{
//    mangled_ppc("?activate_local_predicted@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::deactivate_local_predicted(long) const
//{
//    mangled_ppc("?deactivate_local_predicted@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::activate_local_authoritative(long) const
//{
//    mangled_ppc("?activate_local_authoritative@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::deactivate_local_authoritative(long) const
//{
//    mangled_ppc("?deactivate_local_authoritative@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::handle_activation_request(long) const
//{
//    mangled_ppc("?handle_activation_request@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::handle_deactivation_request(long) const
//{
//    mangled_ppc("?handle_deactivation_request@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::apply_activation_message_remote(long) const
//{
//    mangled_ppc("?apply_activation_message_remote@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::apply_deactivation_message_remote(long) const
//{
//    mangled_ppc("?apply_deactivation_message_remote@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::apply_activation_message_local(long) const
//{
//    mangled_ppc("?apply_activation_message_local@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type::apply_deactivation_message_local(long) const
//{
//    mangled_ppc("?apply_deactivation_message_local@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual bool c_equipment_type::update(long) const
//{
//    mangled_ppc("?update@c_equipment_type@@UBA_NJ@Z");
//};

//public: virtual void c_equipment_type::notify_child_took_shield_damage(long) const
//{
//    mangled_ppc("?notify_child_took_shield_damage@c_equipment_type@@UBAXJ@Z");
//};

//public: virtual bool c_equipment_type::can_be_thrown(long) const
//{
//    mangled_ppc("?can_be_thrown@c_equipment_type@@UBA_NJ@Z");
//};

//public: virtual void c_equipment_type::handle_client_key_frame_request(long) const
//{
//    mangled_ppc("?handle_client_key_frame_request@c_equipment_type@@UBAXJ@Z");
//};

//public: c_equipment_type::c_equipment_type(void)
//{
//    mangled_ppc("??0c_equipment_type@@QAA@XZ");
//};

//public: c_equipment_type_spawner::c_equipment_type_spawner(void)
//{
//    mangled_ppc("??0c_equipment_type_spawner@@QAA@XZ");
//};

//public: virtual void c_equipment_type_spawner::activate_local_predicted(long) const
//{
//    mangled_ppc("?activate_local_predicted@c_equipment_type_spawner@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_spawner::activate_local_authoritative(long) const
//{
//    mangled_ppc("?activate_local_authoritative@c_equipment_type_spawner@@UBAXJ@Z");
//};

//public: c_equipment_type_engineer_shields::c_equipment_type_engineer_shields(void)
//{
//    mangled_ppc("??0c_equipment_type_engineer_shields@@QAA@XZ");
//};

//public: virtual void c_equipment_type_fire_and_forget::activate_local_authoritative(long) const
//{
//    mangled_ppc("?activate_local_authoritative@c_equipment_type_fire_and_forget@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_fire_and_forget::deactivate_local_authoritative(long) const
//{
//    mangled_ppc("?deactivate_local_authoritative@c_equipment_type_fire_and_forget@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_fire_and_forget::handle_activation_request(long) const
//{
//    mangled_ppc("?handle_activation_request@c_equipment_type_fire_and_forget@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_fire_and_forget::handle_deactivation_request(long) const
//{
//    mangled_ppc("?handle_deactivation_request@c_equipment_type_fire_and_forget@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_fire_and_forget::activate_local_predicted(long) const
//{
//    mangled_ppc("?activate_local_predicted@c_equipment_type_fire_and_forget@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_fire_and_forget::deactivate_local_predicted(long) const
//{
//    mangled_ppc("?deactivate_local_predicted@c_equipment_type_fire_and_forget@@UBAXJ@Z");
//};

//protected: virtual void c_equipment_type_fire_and_forget::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_fire_and_forget@@MBAXJ@Z");
//};

//public: c_equipment_type_fire_and_forget::c_equipment_type_fire_and_forget(void)
//{
//    mangled_ppc("??0c_equipment_type_fire_and_forget@@QAA@XZ");
//};

//protected: virtual void c_equipment_type_fire_and_forget::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_fire_and_forget@@MBAXJ@Z");
//};

//public: c_equipment_type_proximity_mine::c_equipment_type_proximity_mine(void)
//{
//    mangled_ppc("??0c_equipment_type_proximity_mine@@QAA@XZ");
//};

//public: c_equipment_type_motion_tracker_noise::c_equipment_type_motion_tracker_noise(void)
//{
//    mangled_ppc("??0c_equipment_type_motion_tracker_noise@@QAA@XZ");
//};

//public: c_equipment_type_invincibility_mode::c_equipment_type_invincibility_mode(void)
//{
//    mangled_ppc("??0c_equipment_type_invincibility_mode@@QAA@XZ");
//};

//public: virtual void c_equipment_type_authoritative::activate_local_predicted(long) const
//{
//    mangled_ppc("?activate_local_predicted@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::activate_local_authoritative(long) const
//{
//    mangled_ppc("?activate_local_authoritative@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::handle_activation_request(long) const
//{
//    mangled_ppc("?handle_activation_request@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::apply_activation_message_remote(long) const
//{
//    mangled_ppc("?apply_activation_message_remote@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::apply_activation_message_local(long) const
//{
//    mangled_ppc("?apply_activation_message_local@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_invincibility_mode::deactivate_local_predicted(long) const
//{
//    mangled_ppc("?deactivate_local_predicted@c_equipment_type_invincibility_mode@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_invincibility_mode::deactivate_local_authoritative(long) const
//{
//    mangled_ppc("?deactivate_local_authoritative@c_equipment_type_invincibility_mode@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_invincibility_mode::handle_deactivation_request(long) const
//{
//    mangled_ppc("?handle_deactivation_request@c_equipment_type_invincibility_mode@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_invincibility_mode::apply_deactivation_message_remote(long) const
//{
//    mangled_ppc("?apply_deactivation_message_remote@c_equipment_type_invincibility_mode@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_invincibility_mode::apply_deactivation_message_local(long) const
//{
//    mangled_ppc("?apply_deactivation_message_local@c_equipment_type_invincibility_mode@@UBAXJ@Z");
//};

//public: c_equipment_type_authoritative::c_equipment_type_authoritative(void)
//{
//    mangled_ppc("??0c_equipment_type_authoritative@@QAA@XZ");
//};

//public: virtual void c_equipment_type_authoritative::deactivate_local_predicted(long) const
//{
//    mangled_ppc("?deactivate_local_predicted@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::deactivate_local_authoritative(long) const
//{
//    mangled_ppc("?deactivate_local_authoritative@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::handle_deactivation_request(long) const
//{
//    mangled_ppc("?handle_deactivation_request@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::apply_deactivation_message_remote(long) const
//{
//    mangled_ppc("?apply_deactivation_message_remote@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_authoritative::apply_deactivation_message_local(long) const
//{
//    mangled_ppc("?apply_deactivation_message_local@c_equipment_type_authoritative@@UBAXJ@Z");
//};

//protected: virtual void c_equipment_type_authoritative::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_authoritative@@MBAXJ@Z");
//};

//protected: virtual void c_equipment_type_authoritative::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_authoritative@@MBAXJ@Z");
//};

//public: c_equipment_type_treeoflife::c_equipment_type_treeoflife(void)
//{
//    mangled_ppc("??0c_equipment_type_treeoflife@@QAA@XZ");
//};

//public: c_equipment_type_shapeshifter::c_equipment_type_shapeshifter(void)
//{
//    mangled_ppc("??0c_equipment_type_shapeshifter@@QAA@XZ");
//};

//public: virtual void c_equipment_type_predicted::activate_local_predicted(long) const
//{
//    mangled_ppc("?activate_local_predicted@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::deactivate_local_predicted(long) const
//{
//    mangled_ppc("?deactivate_local_predicted@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::activate_local_authoritative(long) const
//{
//    mangled_ppc("?activate_local_authoritative@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::deactivate_local_authoritative(long) const
//{
//    mangled_ppc("?deactivate_local_authoritative@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::handle_activation_request(long) const
//{
//    mangled_ppc("?handle_activation_request@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::handle_deactivation_request(long) const
//{
//    mangled_ppc("?handle_deactivation_request@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::apply_activation_message_remote(long) const
//{
//    mangled_ppc("?apply_activation_message_remote@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::apply_deactivation_message_remote(long) const
//{
//    mangled_ppc("?apply_deactivation_message_remote@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::apply_activation_message_local(long) const
//{
//    mangled_ppc("?apply_activation_message_local@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: virtual void c_equipment_type_predicted::apply_deactivation_message_local(long) const
//{
//    mangled_ppc("?apply_deactivation_message_local@c_equipment_type_predicted@@UBAXJ@Z");
//};

//public: c_equipment_type_predicted::c_equipment_type_predicted(void)
//{
//    mangled_ppc("??0c_equipment_type_predicted@@QAA@XZ");
//};

//protected: virtual void c_equipment_type_predicted::activate(long) const
//{
//    mangled_ppc("?activate@c_equipment_type_predicted@@MBAXJ@Z");
//};

//protected: virtual void c_equipment_type_predicted::deactivate(long) const
//{
//    mangled_ppc("?deactivate@c_equipment_type_predicted@@MBAXJ@Z");
//};

//public: c_equipment_type_repulsor_field::c_equipment_type_repulsor_field(void)
//{
//    mangled_ppc("??0c_equipment_type_repulsor_field@@QAA@XZ");
//};

//public: c_equipment_type_daddy::c_equipment_type_daddy(void)
//{
//    mangled_ppc("??0c_equipment_type_daddy@@QAA@XZ");
//};

//public: c_equipment_type_super_jump::c_equipment_type_super_jump(void)
//{
//    mangled_ppc("??0c_equipment_type_super_jump@@QAA@XZ");
//};

//public: c_equipment_type_ammo_pack::c_equipment_type_ammo_pack(void)
//{
//    mangled_ppc("??0c_equipment_type_ammo_pack@@QAA@XZ");
//};

//public: c_equipment_type_health_pack::c_equipment_type_health_pack(void)
//{
//    mangled_ppc("??0c_equipment_type_health_pack@@QAA@XZ");
//};

//public: c_equipment_type_jet_pack::c_equipment_type_jet_pack(void)
//{
//    mangled_ppc("??0c_equipment_type_jet_pack@@QAA@XZ");
//};

//public: c_equipment_type_hologram::c_equipment_type_hologram(void)
//{
//    mangled_ppc("??0c_equipment_type_hologram@@QAA@XZ");
//};

//public: c_equipment_type_special_weapon::c_equipment_type_special_weapon(void)
//{
//    mangled_ppc("??0c_equipment_type_special_weapon@@QAA@XZ");
//};

//public: c_equipment_type_special_move::c_equipment_type_special_move(void)
//{
//    mangled_ppc("??0c_equipment_type_special_move@@QAA@XZ");
//};

//public: c_equipment_type_sprint::c_equipment_type_sprint(void)
//{
//    mangled_ppc("??0c_equipment_type_sprint@@QAA@XZ");
//};

//protected: virtual bool c_equipment_type_sprint::can_activate(long) const
//{
//    mangled_ppc("?can_activate@c_equipment_type_sprint@@MBA_NJ@Z");
//};

