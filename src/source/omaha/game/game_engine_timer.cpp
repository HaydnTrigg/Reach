/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void s_game_engine_timer_state_data::build_simulation_baseline(long);
// public: void s_game_engine_timer_state_data::encode(class c_bitstream *, long) const;
// public: void s_game_engine_timer_state_data::decode(class c_bitstream *, long);
// public: void c_game_engine_timer::initialize(long);
// public: void c_game_engine_timer::update(void);
// public: bool c_game_engine_timer::update_with_max_value(long);
// long quanta_from_ticks(long);
// public: bool c_game_engine_timer::is_expired(void) const;
// public: void c_game_engine_timer::set_rate(enum e_game_engine_timer_rate);
// public: long c_game_engine_timer::get_ticks_left(void) const;
// long ticks_from_quanta(long);
// public: void c_game_engine_timer::set_ticks_left(long);
// public: long c_game_engine_timer::get_seconds_left_for_display(void) const;
// public: void c_game_engine_timer::set_seconds_left_for_display(long);
// public: void c_game_engine_timer::copy_from(class c_game_engine_timer const *);
// public: bool c_game_engine_timer::build_update(struct s_game_engine_timer_state_data *) const;
// public: void c_game_engine_timer::apply_update(struct s_game_engine_timer_state_data const *);
// enum e_game_engine_timer_rate timer_rate_from_real_rate(float);
// long quantized_rate_from_timer_rate(enum e_game_engine_timer_rate);
// public: c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>(enum e_game_engine_timer_rate);
// public: void c_bitstream::write_enum<class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>);
// public: static enum e_game_engine_timer_rate c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);

//public: void s_game_engine_timer_state_data::build_simulation_baseline(long)
//{
//    mangled_ppc("?build_simulation_baseline@s_game_engine_timer_state_data@@QAAXJ@Z");
//};

//public: void s_game_engine_timer_state_data::encode(class c_bitstream *, long) const
//{
//    mangled_ppc("?encode@s_game_engine_timer_state_data@@QBAXPAVc_bitstream@@J@Z");
//};

//public: void s_game_engine_timer_state_data::decode(class c_bitstream *, long)
//{
//    mangled_ppc("?decode@s_game_engine_timer_state_data@@QAAXPAVc_bitstream@@J@Z");
//};

//public: void c_game_engine_timer::initialize(long)
//{
//    mangled_ppc("?initialize@c_game_engine_timer@@QAAXJ@Z");
//};

//public: void c_game_engine_timer::update(void)
//{
//    mangled_ppc("?update@c_game_engine_timer@@QAAXXZ");
//};

//public: bool c_game_engine_timer::update_with_max_value(long)
//{
//    mangled_ppc("?update_with_max_value@c_game_engine_timer@@QAA_NJ@Z");
//};

//long quanta_from_ticks(long)
//{
//    mangled_ppc("?quanta_from_ticks@@YAJJ@Z");
//};

//public: bool c_game_engine_timer::is_expired(void) const
//{
//    mangled_ppc("?is_expired@c_game_engine_timer@@QBA_NXZ");
//};

//public: void c_game_engine_timer::set_rate(enum e_game_engine_timer_rate)
//{
//    mangled_ppc("?set_rate@c_game_engine_timer@@QAAXW4e_game_engine_timer_rate@@@Z");
//};

//public: long c_game_engine_timer::get_ticks_left(void) const
//{
//    mangled_ppc("?get_ticks_left@c_game_engine_timer@@QBAJXZ");
//};

//long ticks_from_quanta(long)
//{
//    mangled_ppc("?ticks_from_quanta@@YAJJ@Z");
//};

//public: void c_game_engine_timer::set_ticks_left(long)
//{
//    mangled_ppc("?set_ticks_left@c_game_engine_timer@@QAAXJ@Z");
//};

//public: long c_game_engine_timer::get_seconds_left_for_display(void) const
//{
//    mangled_ppc("?get_seconds_left_for_display@c_game_engine_timer@@QBAJXZ");
//};

//public: void c_game_engine_timer::set_seconds_left_for_display(long)
//{
//    mangled_ppc("?set_seconds_left_for_display@c_game_engine_timer@@QAAXJ@Z");
//};

//public: void c_game_engine_timer::copy_from(class c_game_engine_timer const *)
//{
//    mangled_ppc("?copy_from@c_game_engine_timer@@QAAXPBV1@@Z");
//};

//public: bool c_game_engine_timer::build_update(struct s_game_engine_timer_state_data *) const
//{
//    mangled_ppc("?build_update@c_game_engine_timer@@QBA_NPAUs_game_engine_timer_state_data@@@Z");
//};

//public: void c_game_engine_timer::apply_update(struct s_game_engine_timer_state_data const *)
//{
//    mangled_ppc("?apply_update@c_game_engine_timer@@QAAXPBUs_game_engine_timer_state_data@@@Z");
//};

//enum e_game_engine_timer_rate timer_rate_from_real_rate(float)
//{
//    mangled_ppc("?timer_rate_from_real_rate@@YA?AW4e_game_engine_timer_rate@@M@Z");
//};

//long quantized_rate_from_timer_rate(enum e_game_engine_timer_rate)
//{
//    mangled_ppc("?quantized_rate_from_timer_rate@@YAJW4e_game_engine_timer_rate@@@Z");
//};

//public: c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>(enum e_game_engine_timer_rate)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@QAA@W4e_game_engine_timer_rate@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_game_engine_timer_rate c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@SA?AW4e_game_engine_timer_rate@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_game_engine_timer_rate, unsigned char, 0, 27, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_game_engine_timer_rate@@E$0A@$0BL@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

