/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_object_filter::initialize(void);
// public: void c_object_filter::encode(class c_bitstream *) const;
// public: void c_object_filter::decode(class c_bitstream *);
// public: char const * c_object_filter::get_label_string(void) const;
// public: bool c_object_filter::scenario_object_matches_filter(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const;
// public: bool c_object_filter::object_matches_filter(long) const;
// public: bool c_object_filter::object_placement_data_matches_filter(struct s_object_placement_data const *) const;
// public: bool c_object_filter::satisfied_by_map_variant(class c_game_engine_custom_variant const *, class c_map_variant const *) const;
// private: bool c_object_filter::test_label_filter(long) const;
// private: bool c_object_filter::test_label_filter(char const *, long) const;
// private: bool c_object_filter::test_type_filter(long) const;
// private: bool c_object_filter::test_user_data_filter(long) const;
// private: bool c_object_filter::test_team_filter(enum e_multiplayer_team_designator) const;
// public: class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::operator=(enum e_object_team_filter);
// public: bool c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::operator==(enum e_object_team_filter) const;
// public: void c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>);
// public: static enum e_object_team_filter c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: bool c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_filter_parameters);

//public: void c_object_filter::initialize(void)
//{
//    mangled_ppc("?initialize@c_object_filter@@QAAXXZ");
//};

//public: void c_object_filter::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_object_filter@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_object_filter::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_object_filter@@QAAXPAVc_bitstream@@@Z");
//};

//public: char const * c_object_filter::get_label_string(void) const
//{
//    mangled_ppc("?get_label_string@c_object_filter@@QBAPBDXZ");
//};

//public: bool c_object_filter::scenario_object_matches_filter(long, enum e_object_type, long, struct s_scenario_object const *, struct s_scenario_multiplayer_object_properties const *) const
//{
//    mangled_ppc("?scenario_object_matches_filter@c_object_filter@@QBA_NJW4e_object_type@@JPBUs_scenario_object@@PBUs_scenario_multiplayer_object_properties@@@Z");
//};

//public: bool c_object_filter::object_matches_filter(long) const
//{
//    mangled_ppc("?object_matches_filter@c_object_filter@@QBA_NJ@Z");
//};

//public: bool c_object_filter::object_placement_data_matches_filter(struct s_object_placement_data const *) const
//{
//    mangled_ppc("?object_placement_data_matches_filter@c_object_filter@@QBA_NPBUs_object_placement_data@@@Z");
//};

//public: bool c_object_filter::satisfied_by_map_variant(class c_game_engine_custom_variant const *, class c_map_variant const *) const
//{
//    mangled_ppc("?satisfied_by_map_variant@c_object_filter@@QBA_NPBVc_game_engine_custom_variant@@PBVc_map_variant@@@Z");
//};

//private: bool c_object_filter::test_label_filter(long) const
//{
//    mangled_ppc("?test_label_filter@c_object_filter@@ABA_NJ@Z");
//};

//private: bool c_object_filter::test_label_filter(char const *, long) const
//{
//    mangled_ppc("?test_label_filter@c_object_filter@@ABA_NPBDJ@Z");
//};

//private: bool c_object_filter::test_type_filter(long) const
//{
//    mangled_ppc("?test_type_filter@c_object_filter@@ABA_NJ@Z");
//};

//private: bool c_object_filter::test_user_data_filter(long) const
//{
//    mangled_ppc("?test_user_data_filter@c_object_filter@@ABA_NJ@Z");
//};

//private: bool c_object_filter::test_team_filter(enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("?test_team_filter@c_object_filter@@ABA_NW4e_multiplayer_team_designator@@@Z");
//};

//public: class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::operator=(enum e_object_team_filter)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@QAAAAV0@W4e_object_team_filter@@@Z");
//};

//public: bool c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::operator==(enum e_object_team_filter) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@QBA_NW4e_object_team_filter@@@Z");
//};

//public: void c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_object_team_filter c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@SA?AW4e_object_team_filter@@H@Z");
//};

//public: static char c_enum_no_init<enum e_object_team_filter, char, -1, 11, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_object_team_filter@@D$0?0$0L@Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: bool c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_filter_parameters, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_filter_parameters)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_filter_parameters@@E$02Us_default_enum_string_resolver@@@@CAEW4e_filter_parameters@@@Z");
//};

