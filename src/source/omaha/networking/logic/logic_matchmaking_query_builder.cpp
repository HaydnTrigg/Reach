/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_session_search_query_builder_flags const c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_session_search_query_builder_flags@@B"

// void network_build_session_search_query(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, struct s_matchmaking_search_party_preferences const *, enum e_online_context_value, enum e_online_context_value, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *, struct s_online_session_search_parameters *, bool *);
// void network_build_session_search_parameters_from_session_properties(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, char const *, struct s_matchmaking_session_properties const *, struct s_matchmaking_search_party_preferences const *, enum e_online_context_value, enum e_online_context_value, struct s_online_session_search_parameters *);
// void network_build_session_search_parameters_from_session_properties_simple(struct s_matchmaking_session_properties const *, struct s_matchmaking_search_party_preferences const *, struct s_online_session_search_parameters *);
// void build_expanding_query_parameters(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, enum e_hopper_query_type, enum e_hopper_query_type, struct s_matchmaking_session_properties const *, long, struct s_matchmaking_session_search_query *, bool *);
// void build_query_best(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, long, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *, bool *);
// void build_static_query_parameters(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, enum e_hopper_query_type, enum e_hopper_query_type, bool, enum e_matchmaking_search_stage, long, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *);
// void build_query_acceptible(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, long, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *, bool *);
// void build_online_query_from_query(struct s_matchmaking_session_search_query const *, enum e_online_context_value, enum e_online_context_value, struct s_online_session_search_parameters *);
// public: bool c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::test(enum e_matchmaking_session_search_query_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::set(enum e_matchmaking_session_search_query_flags, bool);
// public: bool c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_session_search_query_builder_flags) const;
// public: void c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_session_search_query_builder_flags, bool);
// public: c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: float const & s_static_array<float, 17>::operator[]<enum e_hopper_query_weight>(enum e_hopper_query_weight) const;
// public: struct s_online_context & s_static_array<struct s_online_context, 6>::operator[]<long>(long);
// public: struct s_online_property & s_static_array<struct s_online_property, 23>::operator[]<long>(long);
// public: struct s_matchmaking_session_weighted_property const & s_static_array<struct s_matchmaking_session_weighted_property, 17>::operator[]<long>(long) const;
// public: struct s_online_weighted_property & s_static_array<struct s_online_weighted_property, 17>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_session_search_query_flags);
// private: static unsigned short c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_session_search_query_flags);
// public: void c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_session_search_query_builder_flags);
// private: static unsigned char c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_search_query_builder_flags);
// public: static bool s_static_array<float, 17>::valid<enum e_hopper_query_weight>(enum e_hopper_query_weight);
// private: static unsigned char c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_search_query_builder_flags);

//void network_build_session_search_query(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, struct s_matchmaking_search_party_preferences const *, enum e_online_context_value, enum e_online_context_value, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *, struct s_online_session_search_parameters *, bool *)
//{
//    mangled_ppc("?network_build_session_search_query@@YAXV?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@PBUs_matchmaking_search_party_preferences@@W4e_online_context_value@@2PBUs_matchmaking_session_properties@@PAUs_matchmaking_session_search_query@@PAUs_online_session_search_parameters@@PA_N@Z");
//};

//void network_build_session_search_parameters_from_session_properties(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, char const *, struct s_matchmaking_session_properties const *, struct s_matchmaking_search_party_preferences const *, enum e_online_context_value, enum e_online_context_value, struct s_online_session_search_parameters *)
//{
//    mangled_ppc("?network_build_session_search_parameters_from_session_properties@@YAXV?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@PBDPBUs_matchmaking_session_properties@@PBUs_matchmaking_search_party_preferences@@W4e_online_context_value@@4PAUs_online_session_search_parameters@@@Z");
//};

//void network_build_session_search_parameters_from_session_properties_simple(struct s_matchmaking_session_properties const *, struct s_matchmaking_search_party_preferences const *, struct s_online_session_search_parameters *)
//{
//    mangled_ppc("?network_build_session_search_parameters_from_session_properties_simple@@YAXPBUs_matchmaking_session_properties@@PBUs_matchmaking_search_party_preferences@@PAUs_online_session_search_parameters@@@Z");
//};

//void build_expanding_query_parameters(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, enum e_hopper_query_type, enum e_hopper_query_type, struct s_matchmaking_session_properties const *, long, struct s_matchmaking_session_search_query *, bool *)
//{
//    mangled_ppc("?build_expanding_query_parameters@@YAXV?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@W4e_hopper_query_type@@1PBUs_matchmaking_session_properties@@JPAUs_matchmaking_session_search_query@@PA_N@Z");
//};

//void build_query_best(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, long, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *, bool *)
//{
//    mangled_ppc("?build_query_best@@YAXV?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@JPBUs_matchmaking_session_properties@@PAUs_matchmaking_session_search_query@@PA_N@Z");
//};

//void build_static_query_parameters(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, enum e_hopper_query_type, enum e_hopper_query_type, bool, enum e_matchmaking_search_stage, long, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *)
//{
//    mangled_ppc("?build_static_query_parameters@@YAXV?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@W4e_hopper_query_type@@1_NW4e_matchmaking_search_stage@@JPBUs_matchmaking_session_properties@@PAUs_matchmaking_session_search_query@@@Z");
//};

//void build_query_acceptible(class c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>, long, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_search_query *, bool *)
//{
//    mangled_ppc("?build_query_acceptible@@YAXV?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@JPBUs_matchmaking_session_properties@@PAUs_matchmaking_session_search_query@@PA_N@Z");
//};

//void build_online_query_from_query(struct s_matchmaking_session_search_query const *, enum e_online_context_value, enum e_online_context_value, struct s_online_session_search_parameters *)
//{
//    mangled_ppc("?build_online_query_from_query@@YAXPBUs_matchmaking_session_search_query@@W4e_online_context_value@@1PAUs_online_session_search_parameters@@@Z");
//};

//public: bool c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::test(enum e_matchmaking_session_search_query_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_session_search_query_flags@@G$06Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_session_search_query_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::set(enum e_matchmaking_session_search_query_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_session_search_query_flags@@G$06Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_session_search_query_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_session_search_query_builder_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_session_search_query_builder_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_session_search_query_builder_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_session_search_query_builder_flags@@_N@Z");
//};

//public: c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: float const & s_static_array<float, 17>::operator[]<enum e_hopper_query_weight>(enum e_hopper_query_weight) const
//{
//    mangled_ppc("??$?AW4e_hopper_query_weight@@@?$s_static_array@M$0BB@@@QBAABMW4e_hopper_query_weight@@@Z");
//};

//public: struct s_online_context & s_static_array<struct s_online_context, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_online_context@@$05@@QAAAAUs_online_context@@J@Z");
//};

//public: struct s_online_property & s_static_array<struct s_online_property, 23>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_online_property@@$0BH@@@QAAAAUs_online_property@@J@Z");
//};

//public: struct s_matchmaking_session_weighted_property const & s_static_array<struct s_matchmaking_session_weighted_property, 17>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_matchmaking_session_weighted_property@@$0BB@@@QBAABUs_matchmaking_session_weighted_property@@J@Z");
//};

//public: struct s_online_weighted_property & s_static_array<struct s_online_weighted_property, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_online_weighted_property@@$0BB@@@QAAAAUs_online_weighted_property@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_session_search_query_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_session_search_query_flags@@G$06Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_session_search_query_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_matchmaking_session_search_query_flags, unsigned short, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_session_search_query_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_session_search_query_flags@@G$06Us_default_enum_string_resolver@@@@CAGW4e_matchmaking_session_search_query_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_session_search_query_builder_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_session_search_query_builder_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_search_query_builder_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_session_search_query_builder_flags@@@Z");
//};

//public: static bool s_static_array<float, 17>::valid<enum e_hopper_query_weight>(enum e_hopper_query_weight)
//{
//    mangled_ppc("??$valid@W4e_hopper_query_weight@@@?$s_static_array@M$0BB@@@SA_NW4e_hopper_query_weight@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_session_search_query_builder_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_search_query_builder_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_session_search_query_builder_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_session_search_query_builder_flags@@@Z");
//};

