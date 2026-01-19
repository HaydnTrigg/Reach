/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool operator==(struct s_content_item_general_metadata const &, struct s_content_item_general_metadata const &);
// bool operator==(struct s_content_item_history const &, struct s_content_item_history const &);
// bool operator==(struct s_content_item_display_metadata const &, struct s_content_item_display_metadata const &);
// bool operator==(struct s_content_item_campaign_metadata const &, struct s_content_item_campaign_metadata const &);
// bool operator==(struct s_content_item_firefight_metadata const &, struct s_content_item_firefight_metadata const &);
// bool operator==(struct s_content_item_metadata const &, struct s_content_item_metadata const &);
// public: c_content_item_metadata::c_content_item_metadata(void);
// void content_item_metadata_initialize(struct s_content_item_metadata *, enum e_content_item_type, unsigned long, wchar_t const *, wchar_t const *);
// void content_item_metadata_create(struct s_content_item_metadata *, enum e_controller_index);
// void content_item_metadata_modify(struct s_content_item_metadata *, enum e_controller_index);
// void content_item_metadata_create_or_modify(struct s_content_item_metadata *, bool, enum e_controller_index);
// unsigned __int64 content_item_metadata_get_built_in_timestamp(void);
// void content_item_metadata_initialize_built_in_history(struct s_content_item_metadata *, unsigned __int64);
// enum e_content_item_category content_item_metadata_get_category(enum e_content_item_type);
// void content_item_metadata_set_display_name(struct s_content_item_metadata *, wchar_t const *);
// void content_item_metadata_set_display_description(struct s_content_item_metadata *, wchar_t const *);
// void content_item_metadata_set_display_information(struct s_content_item_metadata *, wchar_t const *, wchar_t const *);
// void content_item_metadata_set_creation_author_name(struct s_content_item_metadata *, char const *);
// void content_item_metadata_clean_strings(struct s_content_item_metadata *);
// void content_item_metadata_set_defaults(struct s_content_item_metadata *);
// bool content_item_general_metadata_valid(struct s_content_item_general_metadata const *);
// bool content_item_campaign_metadata_valid(struct s_content_item_campaign_metadata const *);
// bool content_item_firefight_metadata_valid(struct s_content_item_firefight_metadata const *);
// bool content_item_metadata_valid(struct s_content_item_metadata const *);
// void content_item_metadata_encode(struct s_content_item_metadata const *, class c_bitstream *);
// public: c_scoped_bitstream_structure::~c_scoped_bitstream_structure(void);
// public: c_scoped_bitstream_structure::c_scoped_bitstream_structure(class c_bitstream *, char const *);
// void content_item_metadata_decode(class c_bitstream *, struct s_content_item_metadata *);
// void content_item_metadata_set_file_information(struct s_content_item_metadata *, enum e_content_item_type, unsigned long);
// void content_item_metadata_set_film_information(struct s_content_item_metadata *, unsigned long);
// long content_item_metadata_get_game_engine_icon_index(struct s_content_item_metadata const *);
// void clean_history_strings(struct s_content_item_history *);
// void encode_history(struct s_content_item_history const *, class c_bitstream *);
// void decode_history(class c_bitstream *, struct s_content_item_history *);
// bool content_item_metadata_get_current_built_in_author(char *, long);
// public: enum e_campaign_difficulty_level c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_campaign_difficulty_level(void) const;
// public: bool c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_campaign_difficulty_level) const;
// public: bool c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: enum e_campaign_metagame_scoring c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_scoring(void) const;
// public: bool c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_campaign_metagame_scoring) const;
// public: bool c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_content_item_author_flag) const;
// public: void c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_content_item_author_flag, bool);
// public: bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> const &) const;
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> *);
// public: void c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: void c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: void c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: void c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: static bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_content_item_author_flag);
// public: unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_item_author_flag);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_game_mode c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_game_engine_type c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_campaign_difficulty_level c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_campaign_metagame_scoring c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_item_author_flag);
// _mkgmtime;

//bool operator==(struct s_content_item_general_metadata const &, struct s_content_item_general_metadata const &)
//{
//    mangled_ppc("??8@YA_NABUs_content_item_general_metadata@@0@Z");
//};

//bool operator==(struct s_content_item_history const &, struct s_content_item_history const &)
//{
//    mangled_ppc("??8@YA_NABUs_content_item_history@@0@Z");
//};

//bool operator==(struct s_content_item_display_metadata const &, struct s_content_item_display_metadata const &)
//{
//    mangled_ppc("??8@YA_NABUs_content_item_display_metadata@@0@Z");
//};

//bool operator==(struct s_content_item_campaign_metadata const &, struct s_content_item_campaign_metadata const &)
//{
//    mangled_ppc("??8@YA_NABUs_content_item_campaign_metadata@@0@Z");
//};

//bool operator==(struct s_content_item_firefight_metadata const &, struct s_content_item_firefight_metadata const &)
//{
//    mangled_ppc("??8@YA_NABUs_content_item_firefight_metadata@@0@Z");
//};

//bool operator==(struct s_content_item_metadata const &, struct s_content_item_metadata const &)
//{
//    mangled_ppc("??8@YA_NABUs_content_item_metadata@@0@Z");
//};

//public: c_content_item_metadata::c_content_item_metadata(void)
//{
//    mangled_ppc("??0c_content_item_metadata@@QAA@XZ");
//};

//void content_item_metadata_initialize(struct s_content_item_metadata *, enum e_content_item_type, unsigned long, wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?content_item_metadata_initialize@@YAXPAUs_content_item_metadata@@W4e_content_item_type@@KPB_W2@Z");
//};

//void content_item_metadata_create(struct s_content_item_metadata *, enum e_controller_index)
//{
//    mangled_ppc("?content_item_metadata_create@@YAXPAUs_content_item_metadata@@W4e_controller_index@@@Z");
//};

//void content_item_metadata_modify(struct s_content_item_metadata *, enum e_controller_index)
//{
//    mangled_ppc("?content_item_metadata_modify@@YAXPAUs_content_item_metadata@@W4e_controller_index@@@Z");
//};

//void content_item_metadata_create_or_modify(struct s_content_item_metadata *, bool, enum e_controller_index)
//{
//    mangled_ppc("?content_item_metadata_create_or_modify@@YAXPAUs_content_item_metadata@@_NW4e_controller_index@@@Z");
//};

//unsigned __int64 content_item_metadata_get_built_in_timestamp(void)
//{
//    mangled_ppc("?content_item_metadata_get_built_in_timestamp@@YA_KXZ");
//};

//void content_item_metadata_initialize_built_in_history(struct s_content_item_metadata *, unsigned __int64)
//{
//    mangled_ppc("?content_item_metadata_initialize_built_in_history@@YAXPAUs_content_item_metadata@@_K@Z");
//};

//enum e_content_item_category content_item_metadata_get_category(enum e_content_item_type)
//{
//    mangled_ppc("?content_item_metadata_get_category@@YA?AW4e_content_item_category@@W4e_content_item_type@@@Z");
//};

//void content_item_metadata_set_display_name(struct s_content_item_metadata *, wchar_t const *)
//{
//    mangled_ppc("?content_item_metadata_set_display_name@@YAXPAUs_content_item_metadata@@PB_W@Z");
//};

//void content_item_metadata_set_display_description(struct s_content_item_metadata *, wchar_t const *)
//{
//    mangled_ppc("?content_item_metadata_set_display_description@@YAXPAUs_content_item_metadata@@PB_W@Z");
//};

//void content_item_metadata_set_display_information(struct s_content_item_metadata *, wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?content_item_metadata_set_display_information@@YAXPAUs_content_item_metadata@@PB_W1@Z");
//};

//void content_item_metadata_set_creation_author_name(struct s_content_item_metadata *, char const *)
//{
//    mangled_ppc("?content_item_metadata_set_creation_author_name@@YAXPAUs_content_item_metadata@@PBD@Z");
//};

//void content_item_metadata_clean_strings(struct s_content_item_metadata *)
//{
//    mangled_ppc("?content_item_metadata_clean_strings@@YAXPAUs_content_item_metadata@@@Z");
//};

//void content_item_metadata_set_defaults(struct s_content_item_metadata *)
//{
//    mangled_ppc("?content_item_metadata_set_defaults@@YAXPAUs_content_item_metadata@@@Z");
//};

//bool content_item_general_metadata_valid(struct s_content_item_general_metadata const *)
//{
//    mangled_ppc("?content_item_general_metadata_valid@@YA_NPBUs_content_item_general_metadata@@@Z");
//};

//bool content_item_campaign_metadata_valid(struct s_content_item_campaign_metadata const *)
//{
//    mangled_ppc("?content_item_campaign_metadata_valid@@YA_NPBUs_content_item_campaign_metadata@@@Z");
//};

//bool content_item_firefight_metadata_valid(struct s_content_item_firefight_metadata const *)
//{
//    mangled_ppc("?content_item_firefight_metadata_valid@@YA_NPBUs_content_item_firefight_metadata@@@Z");
//};

//bool content_item_metadata_valid(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?content_item_metadata_valid@@YA_NPBUs_content_item_metadata@@@Z");
//};

//void content_item_metadata_encode(struct s_content_item_metadata const *, class c_bitstream *)
//{
//    mangled_ppc("?content_item_metadata_encode@@YAXPBUs_content_item_metadata@@PAVc_bitstream@@@Z");
//};

//public: c_scoped_bitstream_structure::~c_scoped_bitstream_structure(void)
//{
//    mangled_ppc("??1c_scoped_bitstream_structure@@QAA@XZ");
//};

//public: c_scoped_bitstream_structure::c_scoped_bitstream_structure(class c_bitstream *, char const *)
//{
//    mangled_ppc("??0c_scoped_bitstream_structure@@QAA@PAVc_bitstream@@PBD@Z");
//};

//void content_item_metadata_decode(class c_bitstream *, struct s_content_item_metadata *)
//{
//    mangled_ppc("?content_item_metadata_decode@@YAXPAVc_bitstream@@PAUs_content_item_metadata@@@Z");
//};

//void content_item_metadata_set_file_information(struct s_content_item_metadata *, enum e_content_item_type, unsigned long)
//{
//    mangled_ppc("?content_item_metadata_set_file_information@@YAXPAUs_content_item_metadata@@W4e_content_item_type@@K@Z");
//};

//void content_item_metadata_set_film_information(struct s_content_item_metadata *, unsigned long)
//{
//    mangled_ppc("?content_item_metadata_set_film_information@@YAXPAUs_content_item_metadata@@K@Z");
//};

//long content_item_metadata_get_game_engine_icon_index(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?content_item_metadata_get_game_engine_icon_index@@YAJPBUs_content_item_metadata@@@Z");
//};

//void clean_history_strings(struct s_content_item_history *)
//{
//    mangled_ppc("?clean_history_strings@@YAXPAUs_content_item_history@@@Z");
//};

//void encode_history(struct s_content_item_history const *, class c_bitstream *)
//{
//    mangled_ppc("?encode_history@@YAXPBUs_content_item_history@@PAVc_bitstream@@@Z");
//};

//void decode_history(class c_bitstream *, struct s_content_item_history *)
//{
//    mangled_ppc("?decode_history@@YAXPAVc_bitstream@@PAUs_content_item_history@@@Z");
//};

//bool content_item_metadata_get_current_built_in_author(char *, long)
//{
//    mangled_ppc("?content_item_metadata_get_current_built_in_author@@YA_NPADJ@Z");
//};

//public: enum e_campaign_difficulty_level c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_campaign_difficulty_level(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_difficulty_level@@XZ");
//};

//public: bool c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_campaign_difficulty_level) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_campaign_difficulty_level@@@Z");
//};

//public: bool c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: enum e_campaign_metagame_scoring c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_scoring(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_metagame_scoring@@XZ");
//};

//public: bool c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_campaign_metagame_scoring) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_campaign_metagame_scoring@@@Z");
//};

//public: bool c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_content_item_author_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_content_item_author_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_content_item_author_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_content_item_author_flag@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: void c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: void c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: void c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: static bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_content_item_author_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_content_item_author_flag@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_item_author_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_content_item_author_flag@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_game_mode c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_game_mode@@H@Z");
//};

//public: static char c_enum_no_init<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: static enum e_game_engine_type c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@SA?AW4e_game_engine_type@@H@Z");
//};

//public: static char c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: static enum e_campaign_difficulty_level c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_campaign_difficulty_level@@H@Z");
//};

//public: static char c_enum_no_init<enum e_campaign_difficulty_level, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0A@$03Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: static enum e_campaign_metagame_scoring c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_campaign_metagame_scoring@@H@Z");
//};

//public: static char c_enum_no_init<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: bool c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_content_item_author_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_item_author_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_content_item_author_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_content_item_author_flag@@@Z");
//};

//_mkgmtime
//{
//    mangled_ppc("_mkgmtime");
//};

