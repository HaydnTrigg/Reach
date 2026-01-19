/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_loadout_traits::initialize(void);
// public: void c_loadout_traits::set(class c_loadout_traits const *);
// public: void c_loadout_traits::encode(class c_bitstream *) const;
// public: void c_loadout_traits::decode(class c_bitstream *);
// public: void c_loadout_traits::set_name_absolute_index(char);
// public: void c_loadout_traits::set_initial_primary_weapon_absolute_index(char);
// bool multiplayer_weapon_index_is_valid(char);
// public: void c_loadout_traits::set_initial_secondary_weapon_absolute_index(char);
// public: void c_loadout_traits::set_initial_equipment_absolute_index(char);
// bool multiplayer_equipment_index_is_valid(char);
// public: void c_loadout_traits::set_initial_grenade_count_setting(enum e_grenade_count_setting);
// public: void c_loadout_palette_traits::initialize(void);
// public: void c_loadout_palette_traits::set(class c_loadout_palette_traits const *);
// public: void c_loadout_palette_traits::encode(class c_bitstream *) const;
// public: void c_loadout_palette_traits::decode(class c_bitstream *);
// public: void c_game_engine_loadout_traits::initialize(void);
// public: void c_game_engine_loadout_traits::set(class c_game_engine_loadout_traits const *);
// public: void c_game_engine_loadout_traits::encode(class c_bitstream *) const;
// public: void c_game_engine_loadout_traits::decode(class c_bitstream *);
// public: void c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: void c_bitstream::write_flags<class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver> *);
// public: class c_loadout_palette_traits & s_static_array<class c_loadout_palette_traits, 6>::operator[]<long>(long);
// public: class c_loadout_palette_traits const & s_static_array<class c_loadout_palette_traits, 6>::operator[]<long>(long) const;
// public: void c_bitstream::write_flags<class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver> *);
// public: void c_enum_no_init<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: unsigned char c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: unsigned char c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: static unsigned char c_enum_no_init<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static bool s_static_array<class c_loadout_palette_traits, 6>::valid<long>(long);
// public: bool c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum s_game_engine_loadout_definition::e_flags);
// private: static unsigned char c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_loadout_traits::e_flags);

//public: void c_loadout_traits::initialize(void)
//{
//    mangled_ppc("?initialize@c_loadout_traits@@QAAXXZ");
//};

//public: void c_loadout_traits::set(class c_loadout_traits const *)
//{
//    mangled_ppc("?set@c_loadout_traits@@QAAXPBV1@@Z");
//};

//public: void c_loadout_traits::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_loadout_traits@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_loadout_traits::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_loadout_traits@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_loadout_traits::set_name_absolute_index(char)
//{
//    mangled_ppc("?set_name_absolute_index@c_loadout_traits@@QAAXD@Z");
//};

//public: void c_loadout_traits::set_initial_primary_weapon_absolute_index(char)
//{
//    mangled_ppc("?set_initial_primary_weapon_absolute_index@c_loadout_traits@@QAAXD@Z");
//};

//bool multiplayer_weapon_index_is_valid(char)
//{
//    mangled_ppc("?multiplayer_weapon_index_is_valid@@YA_ND@Z");
//};

//public: void c_loadout_traits::set_initial_secondary_weapon_absolute_index(char)
//{
//    mangled_ppc("?set_initial_secondary_weapon_absolute_index@c_loadout_traits@@QAAXD@Z");
//};

//public: void c_loadout_traits::set_initial_equipment_absolute_index(char)
//{
//    mangled_ppc("?set_initial_equipment_absolute_index@c_loadout_traits@@QAAXD@Z");
//};

//bool multiplayer_equipment_index_is_valid(char)
//{
//    mangled_ppc("?multiplayer_equipment_index_is_valid@@YA_ND@Z");
//};

//public: void c_loadout_traits::set_initial_grenade_count_setting(enum e_grenade_count_setting)
//{
//    mangled_ppc("?set_initial_grenade_count_setting@c_loadout_traits@@QAAXW4e_grenade_count_setting@@@Z");
//};

//public: void c_loadout_palette_traits::initialize(void)
//{
//    mangled_ppc("?initialize@c_loadout_palette_traits@@QAAXXZ");
//};

//public: void c_loadout_palette_traits::set(class c_loadout_palette_traits const *)
//{
//    mangled_ppc("?set@c_loadout_palette_traits@@QAAXPBV1@@Z");
//};

//public: void c_loadout_palette_traits::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_loadout_palette_traits@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_loadout_palette_traits::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_loadout_palette_traits@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_loadout_traits::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_loadout_traits@@QAAXXZ");
//};

//public: void c_game_engine_loadout_traits::set(class c_game_engine_loadout_traits const *)
//{
//    mangled_ppc("?set@c_game_engine_loadout_traits@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_loadout_traits::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_loadout_traits@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_loadout_traits::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_loadout_traits@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_grenade_count_setting@@E$0A@$0P@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_grenade_count_setting@@E$0A@$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_loadout_palette_traits & s_static_array<class c_loadout_palette_traits, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_loadout_palette_traits@@$05@@QAAAAVc_loadout_palette_traits@@J@Z");
//};

//public: class c_loadout_palette_traits const & s_static_array<class c_loadout_palette_traits, 6>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_loadout_palette_traits@@$05@@QBAABVc_loadout_palette_traits@@J@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_enum_no_init<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_grenade_count_setting@@E$0A@$0P@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned char c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned char c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_grenade_count_setting, unsigned char, 0, 15, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_grenade_count_setting@@E$0A@$0P@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static bool s_static_array<class c_loadout_palette_traits, 6>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_loadout_palette_traits@@$05@@SA_NJ@Z");
//};

//public: bool c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum s_game_engine_loadout_definition::e_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum s_game_engine_loadout_definition::e_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flags@s_game_engine_loadout_definition@@E$01Us_default_enum_string_resolver@@@@CAEW4e_flags@s_game_engine_loadout_definition@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_loadout_traits::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_loadout_traits::e_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flags@c_loadout_traits@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flags@c_loadout_traits@@@Z");
//};

