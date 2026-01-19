/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool user_interface_voice_is_squad(void);
// enum e_voice_session voice_get_session(void);
// bool user_interface_voice_is_posse(void);
// bool user_interface_voice_is_group(void);
// bool user_interface_voice_player_away_in_private_chat(struct s_user_interface_session_player_index const *);
// bool voice_player_away_in_private_chat(long);
// bool user_interface_voice_player_has_voice(struct s_user_interface_session_player_index const *);
// bool voice_player_has_voice(long);
// bool user_interface_voice_lifecycle_allows_any_local_player_to_communicate_with_player(struct s_user_interface_session_player_index const *);
// bool voice_lifecycle_allows_any_local_player_to_communicate_with_player(long);
// bool user_interface_voice_lifecycle_allows_controller_to_communicate_with_player(enum e_controller_index, struct s_user_interface_session_player_index const *);
// bool voice_lifecycle_allows_controller_to_communicate_with_player(enum e_controller_index, long);
// bool user_interface_voice_player_is_talking(struct s_user_interface_session_player_index const *);
// bool user_interface_voice_any_local_player_muting(struct s_user_interface_session_player_index const *);
// bool voice_any_local_player_muting(long);
// bool user_interface_voice_get_controller_player_index(enum e_controller_index, struct s_user_interface_session_player_index *);
// long voice_get_controller_player_index(enum e_controller_index);
// bool user_interface_voice_get_mute(struct s_user_interface_session_player_index const *, struct s_user_interface_session_player_index const *);
// bool voice_get_mute(long, long);
// bool user_interface_voice_get_voluntary_mute_mask(struct s_user_interface_session_player_index const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> voice_get_player_voluntary_mute_mask(long);
// bool user_interface_voice_get_local_mute_through_guide(struct s_user_interface_session_player_index const *, struct s_user_interface_session_player_index const *);
// bool voice_get_local_mute_through_guide(long, long);
// void user_interface_voice_set_mute(struct s_user_interface_session_player_index const *, struct s_user_interface_session_player_index const *, bool);
// enum e_user_interface_voice_state user_interface_voice_get_player_state(enum e_controller_index, struct s_user_interface_session_player_index const *);
// bool user_interface_session_player_matches_voice_session(struct s_user_interface_session_player_index const *);
// void build_user_interface_session_player_from_voice(long, struct s_user_interface_session_player_index *);
// enum e_ringspeak_bitmap_frame user_interface_get_ringspeak_bitmap_frame(enum e_controller_index, enum e_user_interface_voice_state);

//bool user_interface_voice_is_squad(void)
//{
//    mangled_ppc("?user_interface_voice_is_squad@@YA_NXZ");
//};

//enum e_voice_session voice_get_session(void)
//{
//    mangled_ppc("?voice_get_session@@YA?AW4e_voice_session@@XZ");
//};

//bool user_interface_voice_is_posse(void)
//{
//    mangled_ppc("?user_interface_voice_is_posse@@YA_NXZ");
//};

//bool user_interface_voice_is_group(void)
//{
//    mangled_ppc("?user_interface_voice_is_group@@YA_NXZ");
//};

//bool user_interface_voice_player_away_in_private_chat(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_player_away_in_private_chat@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool voice_player_away_in_private_chat(long)
//{
//    mangled_ppc("?voice_player_away_in_private_chat@@YA_NJ@Z");
//};

//bool user_interface_voice_player_has_voice(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_player_has_voice@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool voice_player_has_voice(long)
//{
//    mangled_ppc("?voice_player_has_voice@@YA_NJ@Z");
//};

//bool user_interface_voice_lifecycle_allows_any_local_player_to_communicate_with_player(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_lifecycle_allows_any_local_player_to_communicate_with_player@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool voice_lifecycle_allows_any_local_player_to_communicate_with_player(long)
//{
//    mangled_ppc("?voice_lifecycle_allows_any_local_player_to_communicate_with_player@@YA_NJ@Z");
//};

//bool user_interface_voice_lifecycle_allows_controller_to_communicate_with_player(enum e_controller_index, struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_lifecycle_allows_controller_to_communicate_with_player@@YA_NW4e_controller_index@@PBUs_user_interface_session_player_index@@@Z");
//};

//bool voice_lifecycle_allows_controller_to_communicate_with_player(enum e_controller_index, long)
//{
//    mangled_ppc("?voice_lifecycle_allows_controller_to_communicate_with_player@@YA_NW4e_controller_index@@J@Z");
//};

//bool user_interface_voice_player_is_talking(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_player_is_talking@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_voice_any_local_player_muting(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_any_local_player_muting@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool voice_any_local_player_muting(long)
//{
//    mangled_ppc("?voice_any_local_player_muting@@YA_NJ@Z");
//};

//bool user_interface_voice_get_controller_player_index(enum e_controller_index, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_voice_get_controller_player_index@@YA_NW4e_controller_index@@PAUs_user_interface_session_player_index@@@Z");
//};

//long voice_get_controller_player_index(enum e_controller_index)
//{
//    mangled_ppc("?voice_get_controller_player_index@@YAJW4e_controller_index@@@Z");
//};

//bool user_interface_voice_get_mute(struct s_user_interface_session_player_index const *, struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_get_mute@@YA_NPBUs_user_interface_session_player_index@@0@Z");
//};

//bool voice_get_mute(long, long)
//{
//    mangled_ppc("?voice_get_mute@@YA_NJJ@Z");
//};

//bool user_interface_voice_get_voluntary_mute_mask(struct s_user_interface_session_player_index const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?user_interface_voice_get_voluntary_mute_mask@@YA_NPBUs_user_interface_session_player_index@@PAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> voice_get_player_voluntary_mute_mask(long)
//{
//    mangled_ppc("?voice_get_player_voluntary_mute_mask@@YA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool user_interface_voice_get_local_mute_through_guide(struct s_user_interface_session_player_index const *, struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_get_local_mute_through_guide@@YA_NPBUs_user_interface_session_player_index@@0@Z");
//};

//bool voice_get_local_mute_through_guide(long, long)
//{
//    mangled_ppc("?voice_get_local_mute_through_guide@@YA_NJJ@Z");
//};

//void user_interface_voice_set_mute(struct s_user_interface_session_player_index const *, struct s_user_interface_session_player_index const *, bool)
//{
//    mangled_ppc("?user_interface_voice_set_mute@@YAXPBUs_user_interface_session_player_index@@0_N@Z");
//};

//enum e_user_interface_voice_state user_interface_voice_get_player_state(enum e_controller_index, struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_voice_get_player_state@@YA?AW4e_user_interface_voice_state@@W4e_controller_index@@PBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_session_player_matches_voice_session(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_session_player_matches_voice_session@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//void build_user_interface_session_player_from_voice(long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?build_user_interface_session_player_from_voice@@YAXJPAUs_user_interface_session_player_index@@@Z");
//};

//enum e_ringspeak_bitmap_frame user_interface_get_ringspeak_bitmap_frame(enum e_controller_index, enum e_user_interface_voice_state)
//{
//    mangled_ppc("?user_interface_get_ringspeak_bitmap_frame@@YA?AW4e_ringspeak_bitmap_frame@@W4e_controller_index@@W4e_user_interface_voice_state@@@Z");
//};

