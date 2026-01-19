/* ---------- headers */

#include "interfacelib\player_configuration_component_base.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_player_configuration_component_base::c_player_configuration_component_base(struct s_cui_component_description const *, class c_cui_object_property_table *);
// public: struct s_player_configuration const * c_player_configuration_component_base::get_player_configuration(void) const;
// public: void c_player_configuration_component_base::set_player_configuration(struct s_player_configuration const *);
// public: struct s_emblem_info c_player_configuration_component_base::get_emblem_info(void) const;
// public: void c_player_configuration_component_base::set_emblem_info(struct s_emblem_info const &);
// public: unsigned __int64 c_player_configuration_component_base::get_player_xuid(void) const;
// public: void c_player_configuration_component_base::set_player_xuid(unsigned __int64);
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_team(void) const;
// public: void c_player_configuration_component_base::set_player_team(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>);
// public: class c_enum<enum e_player_grade, char, -1, 21, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_grade(void) const;
// public: void c_player_configuration_component_base::set_player_grade(class c_enum<enum e_player_grade, char, -1, 21, struct s_default_enum_string_resolver>);
// public: class c_enum<enum e_player_sub_grade, char, -1, 5, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_sub_grade(void) const;
// public: void c_player_configuration_component_base::set_player_sub_grade(class c_enum<enum e_player_sub_grade, char, -1, 5, struct s_default_enum_string_resolver>);
// public: long c_player_configuration_component_base::get_player_experience(void) const;
// public: void c_player_configuration_component_base::set_player_experience(long);
// public: long c_player_configuration_component_base::get_player_skill(void) const;
// public: void c_player_configuration_component_base::set_player_skill(long);
// public: long c_player_configuration_component_base::get_player_skill_to_display(void) const;
// public: void c_player_configuration_component_base::set_player_skill_to_display(long);
// public: long c_player_configuration_component_base::get_player_skill_update_weight(void) const;
// public: void c_player_configuration_component_base::set_player_skill_update_weight(long);
// public: bool c_player_configuration_component_base::is_player_registered_bungienet_user(void) const;
// public: void c_player_configuration_component_base::set_player_registered_bungienet_user(bool);
// public: bool c_player_configuration_component_base::is_player_bungie_pro_member(void) const;
// public: void c_player_configuration_component_base::set_player_bungie_pro_member(bool);
// public: bool c_player_configuration_component_base::is_player_bungie_staff(void) const;
// public: void c_player_configuration_component_base::set_player_bungie_staff(bool);
// public: long c_player_configuration_component_base::get_player_background_bitmap_frame(void) const;
// public: bool c_player_configuration_component_base::get_player_bungienet_user_community0(void) const;
// public: void c_player_configuration_component_base::set_player_bungienet_user_community0(bool);
// public: bool c_player_configuration_component_base::get_player_bungienet_user_community1(void) const;
// public: void c_player_configuration_component_base::set_player_bungienet_user_community1(bool);
// public: bool c_player_configuration_component_base::get_player_bungienet_user_community2(void) const;
// public: void c_player_configuration_component_base::set_player_bungienet_user_community2(bool);
// public: bool c_player_configuration_component_base::is_live_account(void) const;
// public: bool c_player_configuration_component_base::is_live_enabled(void) const;
// public: bool c_player_configuration_component_base::is_guest_profile(void) const;
// public: bool c_player_configuration_component_base::can_have_file_shares(void) const;
// public: bool c_player_configuration_component_base::get_player_model_flag_female(void) const;
// public: void c_player_configuration_component_base::set_player_model_flag_female(bool);
// public: class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_choice(void) const;
// public: void c_player_configuration_component_base::set_player_model_choice(class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>);
// public: class c_cui_string_id c_player_configuration_component_base::get_player_model_choice_string(void) const;
// public: long c_player_configuration_component_base::get_player_model_spartan_helmet(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_helmet(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_left_shoulder(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_left_shoulder(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_right_shoulder(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_right_shoulder(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_chest(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_chest(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_wrist(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_wrist(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_utility(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_utility(long);
// public: long c_player_configuration_component_base::get_player_model_elite(void) const;
// public: void c_player_configuration_component_base::set_player_model_elite(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_paint_scheme(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_paint_scheme(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_armor_effect(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_armor_effect(long);
// public: long c_player_configuration_component_base::get_player_model_elite_armor_effect(void) const;
// public: void c_player_configuration_component_base::set_player_model_elite_armor_effect(long);
// public: long c_player_configuration_component_base::get_player_model_spartan_firefight_voice(void) const;
// public: void c_player_configuration_component_base::set_player_model_spartan_firefight_voice(long);
// public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_primary_color_index(void) const;
// public: void c_player_configuration_component_base::set_player_model_primary_color_index(class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver>);
// public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_secondary_color_index(void) const;
// public: void c_player_configuration_component_base::set_player_model_secondary_color_index(class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver>);
// public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_tertiary_color_index(void) const;
// public: void c_player_configuration_component_base::set_player_model_tertiary_color_index(class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver>);
// public: wchar_t const * c_player_configuration_component_base::get_player_name(void) const;
// public: void c_player_configuration_component_base::set_player_name(wchar_t const *);
// public: wchar_t const * c_player_configuration_component_base::get_player_service_tag(void) const;
// public: void c_player_configuration_component_base::set_player_service_tag(wchar_t const *);
// public: long c_player_configuration_component_base::get_mu(void) const;
// public: void c_player_configuration_component_base::set_mu(long);
// public: long c_player_configuration_component_base::get_sigma(void) const;
// public: void c_player_configuration_component_base::set_sigma(long);
// public: void c_flags_no_init<enum e_bungienet_user_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set(enum e_bungienet_user_flags, bool);

//public: c_player_configuration_component_base::c_player_configuration_component_base(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_player_configuration_component_base@@QAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//public: struct s_player_configuration const * c_player_configuration_component_base::get_player_configuration(void) const
//{
//    mangled_ppc("?get_player_configuration@c_player_configuration_component_base@@QBAPBUs_player_configuration@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_configuration(struct s_player_configuration const *)
//{
//    mangled_ppc("?set_player_configuration@c_player_configuration_component_base@@QAAXPBUs_player_configuration@@@Z");
//};

//public: struct s_emblem_info c_player_configuration_component_base::get_emblem_info(void) const
//{
//    mangled_ppc("?get_emblem_info@c_player_configuration_component_base@@QBA?AUs_emblem_info@@XZ");
//};

//public: void c_player_configuration_component_base::set_emblem_info(struct s_emblem_info const &)
//{
//    mangled_ppc("?set_emblem_info@c_player_configuration_component_base@@QAAXABUs_emblem_info@@@Z");
//};

//public: unsigned __int64 c_player_configuration_component_base::get_player_xuid(void) const
//{
//    mangled_ppc("?get_player_xuid@c_player_configuration_component_base@@QBA_KXZ");
//};

//public: void c_player_configuration_component_base::set_player_xuid(unsigned __int64)
//{
//    mangled_ppc("?set_player_xuid@c_player_configuration_component_base@@QAAX_K@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_team(void) const
//{
//    mangled_ppc("?get_player_team@c_player_configuration_component_base@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_team(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_team@c_player_configuration_component_base@@QAAXV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_player_grade, char, -1, 21, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_grade(void) const
//{
//    mangled_ppc("?get_player_grade@c_player_configuration_component_base@@QBA?AV?$c_enum@W4e_player_grade@@D$0?0$0BF@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_grade(class c_enum<enum e_player_grade, char, -1, 21, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_grade@c_player_configuration_component_base@@QAAXV?$c_enum@W4e_player_grade@@D$0?0$0BF@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_player_sub_grade, char, -1, 5, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_sub_grade(void) const
//{
//    mangled_ppc("?get_player_sub_grade@c_player_configuration_component_base@@QBA?AV?$c_enum@W4e_player_sub_grade@@D$0?0$04Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_sub_grade(class c_enum<enum e_player_sub_grade, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_sub_grade@c_player_configuration_component_base@@QAAXV?$c_enum@W4e_player_sub_grade@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_player_configuration_component_base::get_player_experience(void) const
//{
//    mangled_ppc("?get_player_experience@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_experience(long)
//{
//    mangled_ppc("?set_player_experience@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_skill(void) const
//{
//    mangled_ppc("?get_player_skill@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_skill(long)
//{
//    mangled_ppc("?set_player_skill@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_skill_to_display(void) const
//{
//    mangled_ppc("?get_player_skill_to_display@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_skill_to_display(long)
//{
//    mangled_ppc("?set_player_skill_to_display@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_skill_update_weight(void) const
//{
//    mangled_ppc("?get_player_skill_update_weight@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_skill_update_weight(long)
//{
//    mangled_ppc("?set_player_skill_update_weight@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: bool c_player_configuration_component_base::is_player_registered_bungienet_user(void) const
//{
//    mangled_ppc("?is_player_registered_bungienet_user@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_registered_bungienet_user(bool)
//{
//    mangled_ppc("?set_player_registered_bungienet_user@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: bool c_player_configuration_component_base::is_player_bungie_pro_member(void) const
//{
//    mangled_ppc("?is_player_bungie_pro_member@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_bungie_pro_member(bool)
//{
//    mangled_ppc("?set_player_bungie_pro_member@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: bool c_player_configuration_component_base::is_player_bungie_staff(void) const
//{
//    mangled_ppc("?is_player_bungie_staff@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_bungie_staff(bool)
//{
//    mangled_ppc("?set_player_bungie_staff@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: long c_player_configuration_component_base::get_player_background_bitmap_frame(void) const
//{
//    mangled_ppc("?get_player_background_bitmap_frame@c_player_configuration_component_base@@QBAJXZ");
//};

//public: bool c_player_configuration_component_base::get_player_bungienet_user_community0(void) const
//{
//    mangled_ppc("?get_player_bungienet_user_community0@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_bungienet_user_community0(bool)
//{
//    mangled_ppc("?set_player_bungienet_user_community0@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: bool c_player_configuration_component_base::get_player_bungienet_user_community1(void) const
//{
//    mangled_ppc("?get_player_bungienet_user_community1@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_bungienet_user_community1(bool)
//{
//    mangled_ppc("?set_player_bungienet_user_community1@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: bool c_player_configuration_component_base::get_player_bungienet_user_community2(void) const
//{
//    mangled_ppc("?get_player_bungienet_user_community2@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_bungienet_user_community2(bool)
//{
//    mangled_ppc("?set_player_bungienet_user_community2@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: bool c_player_configuration_component_base::is_live_account(void) const
//{
//    mangled_ppc("?is_live_account@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: bool c_player_configuration_component_base::is_live_enabled(void) const
//{
//    mangled_ppc("?is_live_enabled@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: bool c_player_configuration_component_base::is_guest_profile(void) const
//{
//    mangled_ppc("?is_guest_profile@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: bool c_player_configuration_component_base::can_have_file_shares(void) const
//{
//    mangled_ppc("?can_have_file_shares@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: bool c_player_configuration_component_base::get_player_model_flag_female(void) const
//{
//    mangled_ppc("?get_player_model_flag_female@c_player_configuration_component_base@@QBA_NXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_flag_female(bool)
//{
//    mangled_ppc("?set_player_model_flag_female@c_player_configuration_component_base@@QAAX_N@Z");
//};

//public: class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_choice(void) const
//{
//    mangled_ppc("?get_player_model_choice@c_player_configuration_component_base@@QBA?AV?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_model_choice(class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_model_choice@c_player_configuration_component_base@@QAAXV?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_cui_string_id c_player_configuration_component_base::get_player_model_choice_string(void) const
//{
//    mangled_ppc("?get_player_model_choice_string@c_player_configuration_component_base@@QBA?AVc_cui_string_id@@XZ");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_helmet(void) const
//{
//    mangled_ppc("?get_player_model_spartan_helmet@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_helmet(long)
//{
//    mangled_ppc("?set_player_model_spartan_helmet@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_left_shoulder(void) const
//{
//    mangled_ppc("?get_player_model_spartan_left_shoulder@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_left_shoulder(long)
//{
//    mangled_ppc("?set_player_model_spartan_left_shoulder@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_right_shoulder(void) const
//{
//    mangled_ppc("?get_player_model_spartan_right_shoulder@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_right_shoulder(long)
//{
//    mangled_ppc("?set_player_model_spartan_right_shoulder@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_chest(void) const
//{
//    mangled_ppc("?get_player_model_spartan_chest@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_chest(long)
//{
//    mangled_ppc("?set_player_model_spartan_chest@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_wrist(void) const
//{
//    mangled_ppc("?get_player_model_spartan_wrist@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_wrist(long)
//{
//    mangled_ppc("?set_player_model_spartan_wrist@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_utility(void) const
//{
//    mangled_ppc("?get_player_model_spartan_utility@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_utility(long)
//{
//    mangled_ppc("?set_player_model_spartan_utility@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_elite(void) const
//{
//    mangled_ppc("?get_player_model_elite@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_elite(long)
//{
//    mangled_ppc("?set_player_model_elite@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_paint_scheme(void) const
//{
//    mangled_ppc("?get_player_model_spartan_paint_scheme@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_paint_scheme(long)
//{
//    mangled_ppc("?set_player_model_spartan_paint_scheme@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_armor_effect(void) const
//{
//    mangled_ppc("?get_player_model_spartan_armor_effect@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_armor_effect(long)
//{
//    mangled_ppc("?set_player_model_spartan_armor_effect@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_elite_armor_effect(void) const
//{
//    mangled_ppc("?get_player_model_elite_armor_effect@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_elite_armor_effect(long)
//{
//    mangled_ppc("?set_player_model_elite_armor_effect@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_player_model_spartan_firefight_voice(void) const
//{
//    mangled_ppc("?get_player_model_spartan_firefight_voice@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_player_model_spartan_firefight_voice(long)
//{
//    mangled_ppc("?set_player_model_spartan_firefight_voice@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_primary_color_index(void) const
//{
//    mangled_ppc("?get_player_model_primary_color_index@c_player_configuration_component_base@@QBA?AV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_model_primary_color_index(class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_model_primary_color_index@c_player_configuration_component_base@@QAAXV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_secondary_color_index(void) const
//{
//    mangled_ppc("?get_player_model_secondary_color_index@c_player_configuration_component_base@@QBA?AV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_model_secondary_color_index(class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_model_secondary_color_index@c_player_configuration_component_base@@QAAXV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_configuration_component_base::get_player_model_tertiary_color_index(void) const
//{
//    mangled_ppc("?get_player_model_tertiary_color_index@c_player_configuration_component_base@@QBA?AV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_player_configuration_component_base::set_player_model_tertiary_color_index(class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_model_tertiary_color_index@c_player_configuration_component_base@@QAAXV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: wchar_t const * c_player_configuration_component_base::get_player_name(void) const
//{
//    mangled_ppc("?get_player_name@c_player_configuration_component_base@@QBAPB_WXZ");
//};

//public: void c_player_configuration_component_base::set_player_name(wchar_t const *)
//{
//    mangled_ppc("?set_player_name@c_player_configuration_component_base@@QAAXPB_W@Z");
//};

//public: wchar_t const * c_player_configuration_component_base::get_player_service_tag(void) const
//{
//    mangled_ppc("?get_player_service_tag@c_player_configuration_component_base@@QBAPB_WXZ");
//};

//public: void c_player_configuration_component_base::set_player_service_tag(wchar_t const *)
//{
//    mangled_ppc("?set_player_service_tag@c_player_configuration_component_base@@QAAXPB_W@Z");
//};

//public: long c_player_configuration_component_base::get_mu(void) const
//{
//    mangled_ppc("?get_mu@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_mu(long)
//{
//    mangled_ppc("?set_mu@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: long c_player_configuration_component_base::get_sigma(void) const
//{
//    mangled_ppc("?get_sigma@c_player_configuration_component_base@@QBAJXZ");
//};

//public: void c_player_configuration_component_base::set_sigma(long)
//{
//    mangled_ppc("?set_sigma@c_player_configuration_component_base@@QAAXJ@Z");
//};

//public: void c_flags_no_init<enum e_bungienet_user_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set(enum e_bungienet_user_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_bungienet_user_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_bungienet_user_flags@@_N@Z");
//};

