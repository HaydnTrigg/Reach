/* ---------- headers */

#include "omaha\simulation\simulation_queue_global_events.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_sandbox_rotation_snap, unsigned char, 0, 6, struct s_sandbox_rotation_snap_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_sandbox_rotation_snap@@E$0A@$05Us_sandbox_rotation_snap_string_resolver@@@@2HB"
// public: static enum e_sandbox_rotation_snap const c_enum_no_init<enum e_sandbox_rotation_snap, unsigned char, 0, 6, struct s_sandbox_rotation_snap_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_sandbox_rotation_snap@@E$0A@$05Us_sandbox_rotation_snap_string_resolver@@@@2W4e_sandbox_rotation_snap@@B"
// public: static int const c_enum_no_init<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_sandbox_action_type@@G$0A@$0M@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_sandbox_action_type const c_enum_no_init<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_sandbox_action_type@@G$0A@$0M@Us_default_enum_string_resolver@@@@2W4e_sandbox_action_type@@B"

// void simulation_queue_game_global_event_insert_or_send(enum e_simulation_queue_game_global_event_type);
// bool simulation_queue_game_global_event_encode(enum e_simulation_queue_game_global_event_type, unsigned char const *, long, unsigned char *, long, long *);
// void simulation_queue_game_global_event_insert(enum e_simulation_queue_game_global_event_type);
// void simulation_queue_game_global_event_insert_internal(enum e_simulation_queue_game_global_event_type, unsigned char const *, long);
// void simulation_queue_claim_authority_gameworld_insert(struct s_game_results_game_engine_snapshot const *, struct s_game_statborg_game_results_snapshot const *, bool);
// public: s_simulation_queue_claim_authority_gameworld_event_data::s_simulation_queue_claim_authority_gameworld_event_data(void);
// void simulation_queue_game_global_event_apply(class c_simulation_queue_element const *);
// bool simulation_queue_game_global_event_requires_cutoff(class c_simulation_queue_element const *);
// bool simulation_queue_game_global_event_cannot_be_reordered(class c_simulation_queue_element const *);
// void simulation_queue_game_global_bookkeeping_event_insert(enum e_simulation_queue_game_global_bookkeeping_event_type);
// void simulation_queue_game_global_bookkeeping_event_apply(class c_simulation_queue_element const *);
// void simulation_queue_player_event_insert(struct s_simulation_queue_player_event_data const *);
// bool encode_player_event(struct s_simulation_queue_player_event_data const *, unsigned char *const, long *);
// void simulation_queue_player_event_insert_or_send(struct s_simulation_queue_player_event_data const *);
// void simulation_queue_player_event_apply(class c_simulation_queue_element const *);
// void simulation_queue_player_update_insert(struct simulation_player_update const *);
// void simulation_queue_player_update_apply(class c_simulation_queue_element const *);
// void simulation_queue_sandbox_event_insert(class c_sandbox_action const *);
// void simulation_queue_sandbox_event_apply(class c_simulation_queue_element const *);
// public: c_sandbox_action::c_sandbox_action(void);
// void simulation_queue_object_glue_delete_insert(struct s_simulation_queue_object_glue_clear_data const *);
// void simulation_queue_object_glue_delete_apply(class c_simulation_queue_element const *);
// void simulation_queue_script_event_insert_or_send(struct s_simulation_queue_script_event_data const *);
// void simulation_queue_script_event_insert(unsigned char *, long);
// void simulation_queue_script_event_apply(class c_simulation_queue_element const *);
// public: s_simulation_queue_script_event_data::s_simulation_queue_script_event_data(void);
// void simulation_queue_coop_spawn_event_insert_or_send(struct s_simulation_queue_coop_spawn_event_data const *);
// void simulation_queue_coop_spawn_event_apply(class c_simulation_queue_element const *);
// void simulation_queue_player_loadout_event_insert_or_send(struct s_simulation_queue_player_loadout_event_data const *);
// void simulation_queue_player_loadout_event_apply(class c_simulation_queue_element const *);
// void simulation_queue_synchronous_migration_event_insert(struct s_simulation_queue_synchronous_migration_event_data const *);
// void simulation_queue_synchronous_migration_event_apply(class c_simulation_queue_element const *);
// void simulation_queue_player_event_apply_set_activation(long, bool);
// void simulation_queue_player_event_apply_betrayal_boot(long, long);
// void simulation_queue_insert_encoded_element(enum e_simulation_queue_element_type, unsigned char *, long);
// void simulation_queue_insert_or_send_encoded_element(enum e_simulation_queue_element_type, unsigned char *, long);
// public: bool c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::operator==(enum e_simulation_queue_element_type) const;
// public: c_enum<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>::c_enum<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_player_flags, unsigned long, 20, struct s_default_enum_string_resolver>::set(enum e_player_flags, bool);
// public: void c_bitstream::write_index<16, long>(char const *, long);
// public: long c_bitstream::read_index<16>(char const *);
// public: void c_bitstream::write_big_flags<class c_big_flags_typed_no_init<long, 2048> >(char const *, class c_big_flags_typed_no_init<long, 2048> const *);
// public: void c_bitstream::read_big_flags<class c_big_flags_typed_no_init<long, 2048> >(char const *, class c_big_flags_typed_no_init<long, 2048> *);
// public: unsigned long const * c_big_flags_typed_no_init<long, 2048>::get_bits_direct(void) const;
// public: unsigned long * c_big_flags_typed_no_init<long, 2048>::get_writeable_bits_direct(void);
// long required_encoding_bits_for_index<16>(void);

//void simulation_queue_game_global_event_insert_or_send(enum e_simulation_queue_game_global_event_type)
//{
//    mangled_ppc("?simulation_queue_game_global_event_insert_or_send@@YAXW4e_simulation_queue_game_global_event_type@@@Z");
//};

//bool simulation_queue_game_global_event_encode(enum e_simulation_queue_game_global_event_type, unsigned char const *, long, unsigned char *, long, long *)
//{
//    mangled_ppc("?simulation_queue_game_global_event_encode@@YA_NW4e_simulation_queue_game_global_event_type@@PBEJPAEJPAJ@Z");
//};

//void simulation_queue_game_global_event_insert(enum e_simulation_queue_game_global_event_type)
//{
//    mangled_ppc("?simulation_queue_game_global_event_insert@@YAXW4e_simulation_queue_game_global_event_type@@@Z");
//};

//void simulation_queue_game_global_event_insert_internal(enum e_simulation_queue_game_global_event_type, unsigned char const *, long)
//{
//    mangled_ppc("?simulation_queue_game_global_event_insert_internal@@YAXW4e_simulation_queue_game_global_event_type@@PBEJ@Z");
//};

//void simulation_queue_claim_authority_gameworld_insert(struct s_game_results_game_engine_snapshot const *, struct s_game_statborg_game_results_snapshot const *, bool)
//{
//    mangled_ppc("?simulation_queue_claim_authority_gameworld_insert@@YAXPBUs_game_results_game_engine_snapshot@@PBUs_game_statborg_game_results_snapshot@@_N@Z");
//};

//public: s_simulation_queue_claim_authority_gameworld_event_data::s_simulation_queue_claim_authority_gameworld_event_data(void)
//{
//    mangled_ppc("??0s_simulation_queue_claim_authority_gameworld_event_data@@QAA@XZ");
//};

//void simulation_queue_game_global_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_game_global_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//bool simulation_queue_game_global_event_requires_cutoff(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_game_global_event_requires_cutoff@@YA_NPBVc_simulation_queue_element@@@Z");
//};

//bool simulation_queue_game_global_event_cannot_be_reordered(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_game_global_event_cannot_be_reordered@@YA_NPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_game_global_bookkeeping_event_insert(enum e_simulation_queue_game_global_bookkeeping_event_type)
//{
//    mangled_ppc("?simulation_queue_game_global_bookkeeping_event_insert@@YAXW4e_simulation_queue_game_global_bookkeeping_event_type@@@Z");
//};

//void simulation_queue_game_global_bookkeeping_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_game_global_bookkeeping_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_player_event_insert(struct s_simulation_queue_player_event_data const *)
//{
//    mangled_ppc("?simulation_queue_player_event_insert@@YAXPBUs_simulation_queue_player_event_data@@@Z");
//};

//bool encode_player_event(struct s_simulation_queue_player_event_data const *, unsigned char *const, long *)
//{
//    mangled_ppc("?encode_player_event@@YA_NPBUs_simulation_queue_player_event_data@@QAEPAJ@Z");
//};

//void simulation_queue_player_event_insert_or_send(struct s_simulation_queue_player_event_data const *)
//{
//    mangled_ppc("?simulation_queue_player_event_insert_or_send@@YAXPBUs_simulation_queue_player_event_data@@@Z");
//};

//void simulation_queue_player_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_player_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_player_update_insert(struct simulation_player_update const *)
//{
//    mangled_ppc("?simulation_queue_player_update_insert@@YAXPBUsimulation_player_update@@@Z");
//};

//void simulation_queue_player_update_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_player_update_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_sandbox_event_insert(class c_sandbox_action const *)
//{
//    mangled_ppc("?simulation_queue_sandbox_event_insert@@YAXPBVc_sandbox_action@@@Z");
//};

//void simulation_queue_sandbox_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_sandbox_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//public: c_sandbox_action::c_sandbox_action(void)
//{
//    mangled_ppc("??0c_sandbox_action@@QAA@XZ");
//};

//void simulation_queue_object_glue_delete_insert(struct s_simulation_queue_object_glue_clear_data const *)
//{
//    mangled_ppc("?simulation_queue_object_glue_delete_insert@@YAXPBUs_simulation_queue_object_glue_clear_data@@@Z");
//};

//void simulation_queue_object_glue_delete_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_object_glue_delete_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_script_event_insert_or_send(struct s_simulation_queue_script_event_data const *)
//{
//    mangled_ppc("?simulation_queue_script_event_insert_or_send@@YAXPBUs_simulation_queue_script_event_data@@@Z");
//};

//void simulation_queue_script_event_insert(unsigned char *, long)
//{
//    mangled_ppc("?simulation_queue_script_event_insert@@YAXPAEJ@Z");
//};

//void simulation_queue_script_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_script_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//public: s_simulation_queue_script_event_data::s_simulation_queue_script_event_data(void)
//{
//    mangled_ppc("??0s_simulation_queue_script_event_data@@QAA@XZ");
//};

//void simulation_queue_coop_spawn_event_insert_or_send(struct s_simulation_queue_coop_spawn_event_data const *)
//{
//    mangled_ppc("?simulation_queue_coop_spawn_event_insert_or_send@@YAXPBUs_simulation_queue_coop_spawn_event_data@@@Z");
//};

//void simulation_queue_coop_spawn_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_coop_spawn_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_player_loadout_event_insert_or_send(struct s_simulation_queue_player_loadout_event_data const *)
//{
//    mangled_ppc("?simulation_queue_player_loadout_event_insert_or_send@@YAXPBUs_simulation_queue_player_loadout_event_data@@@Z");
//};

//void simulation_queue_player_loadout_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_player_loadout_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_synchronous_migration_event_insert(struct s_simulation_queue_synchronous_migration_event_data const *)
//{
//    mangled_ppc("?simulation_queue_synchronous_migration_event_insert@@YAXPBUs_simulation_queue_synchronous_migration_event_data@@@Z");
//};

//void simulation_queue_synchronous_migration_event_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_synchronous_migration_event_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_player_event_apply_set_activation(long, bool)
//{
//    mangled_ppc("?simulation_queue_player_event_apply_set_activation@@YAXJ_N@Z");
//};

//void simulation_queue_player_event_apply_betrayal_boot(long, long)
//{
//    mangled_ppc("?simulation_queue_player_event_apply_betrayal_boot@@YAXJJ@Z");
//};

//void simulation_queue_insert_encoded_element(enum e_simulation_queue_element_type, unsigned char *, long)
//{
//    mangled_ppc("?simulation_queue_insert_encoded_element@@YAXW4e_simulation_queue_element_type@@PAEJ@Z");
//};

//void simulation_queue_insert_or_send_encoded_element(enum e_simulation_queue_element_type, unsigned char *, long)
//{
//    mangled_ppc("?simulation_queue_insert_or_send_encoded_element@@YAXW4e_simulation_queue_element_type@@PAEJ@Z");
//};

//public: bool c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::operator==(enum e_simulation_queue_element_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_queue_element_type@@@Z");
//};

//public: c_enum<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>::c_enum<enum e_sandbox_action_type, unsigned short, 0, 12, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_sandbox_action_type@@G$0A@$0M@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_player_flags, unsigned long, 20, struct s_default_enum_string_resolver>::set(enum e_player_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_flags@@K$0BE@Us_default_enum_string_resolver@@@@QAAXW4e_player_flags@@_N@Z");
//};

//public: void c_bitstream::write_index<16, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0BA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_index<16>(char const *)
//{
//    mangled_ppc("??$read_index@$0BA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_big_flags<class c_big_flags_typed_no_init<long, 2048> >(char const *, class c_big_flags_typed_no_init<long, 2048> const *)
//{
//    mangled_ppc("??$write_big_flags@V?$c_big_flags_typed_no_init@J$0IAA@@@@c_bitstream@@QAAXPBDPBV?$c_big_flags_typed_no_init@J$0IAA@@@@Z");
//};

//public: void c_bitstream::read_big_flags<class c_big_flags_typed_no_init<long, 2048> >(char const *, class c_big_flags_typed_no_init<long, 2048> *)
//{
//    mangled_ppc("??$read_big_flags@V?$c_big_flags_typed_no_init@J$0IAA@@@@c_bitstream@@QAAXPBDPAV?$c_big_flags_typed_no_init@J$0IAA@@@@Z");
//};

//public: unsigned long const * c_big_flags_typed_no_init<long, 2048>::get_bits_direct(void) const
//{
//    mangled_ppc("?get_bits_direct@?$c_big_flags_typed_no_init@J$0IAA@@@QBAPBKXZ");
//};

//public: unsigned long * c_big_flags_typed_no_init<long, 2048>::get_writeable_bits_direct(void)
//{
//    mangled_ppc("?get_writeable_bits_direct@?$c_big_flags_typed_no_init@J$0IAA@@@QAAPAKXZ");
//};

//long required_encoding_bits_for_index<16>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0BA@@@YAJXZ");
//};

