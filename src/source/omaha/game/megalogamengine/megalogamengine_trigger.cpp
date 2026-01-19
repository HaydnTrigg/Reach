/* ---------- headers */

#include "omaha\game\megalogamengine\megalogamengine_trigger.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool megalo_filter_iteration_enabled; // "?megalo_filter_iteration_enabled@@3_NA"
// long g_megalo_objects_deleted_this_trigger; // "?g_megalo_objects_deleted_this_trigger@@3JA"

// int megalo_random_player_generator(int);
// public: void c_trigger::update(struct s_custom_game_engine_definition const *) const;
// private: void c_trigger::execute(struct s_custom_game_engine_definition const *) const;
// public: c_trigger::c_trigger(void);
// public: bool c_trigger::is_valid(struct s_custom_game_engine_definition const *) const;
// public: void c_trigger::encode(class c_bitstream *) const;
// public: void c_trigger::decode(class c_bitstream *);
// private: class c_condition const * c_trigger::get_condition(long, struct s_custom_game_engine_definition const *) const;
// private: class c_action const * c_trigger::get_action(long, struct s_custom_game_engine_definition const *) const;
// public: c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_trigger_execution_mode);
// public: enum e_trigger_execution_mode c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_trigger_execution_mode(void) const;
// public: bool c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_trigger_execution_mode) const;
// public: bool c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum e_trigger_type);
// public: bool c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::in_range(void) const;
// public: class c_trigger const * c_static_stack<class c_trigger, 320>::get_elements(void) const;
// public: long c_static_stack<class c_condition, 512>::count(void) const;
// public: class c_condition const & c_static_stack<class c_condition, 512>::operator[](long) const;
// public: long c_static_stack<class c_action, 1024>::count(void) const;
// public: class c_action const & c_static_stack<class c_action, 1024>::operator[](long) const;
// public: long * c_static_stack<long, 16>::begin(void);
// public: long * c_static_stack<long, 16>::end(void);
// public: bool c_static_stack<class c_condition, 512>::valid(long) const;
// public: bool c_static_stack<class c_action, 1024>::valid(long) const;
// public: bool c_static_stack<class c_condition, 512>::valid(void) const;
// public: bool c_static_stack<class c_action, 1024>::valid(void) const;
// void std::random_shuffle<long *, int (int)>(long *, long *, int (&)(int));
// public: void c_bitstream::write_enum<class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *);
// public: void c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_trigger_type c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_trigger_type(void) const;
// public: void c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// void std::_Random_shuffle<long *, int (int), int>(long *, long *, int (&)(int), int *);
// long required_encoding_bits_for_enum<class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>);
// public: static enum e_trigger_execution_mode c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_trigger_type c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// void std::_Debug_pointer<int (int)>(int (*)(int), wchar_t const *, unsigned int);

//int megalo_random_player_generator(int)
//{
//    mangled_ppc("?megalo_random_player_generator@@YAHH@Z");
//};

//public: void c_trigger::update(struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?update@c_trigger@@QBAXPBUs_custom_game_engine_definition@@@Z");
//};

//private: void c_trigger::execute(struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?execute@c_trigger@@ABAXPBUs_custom_game_engine_definition@@@Z");
//};

//public: c_trigger::c_trigger(void)
//{
//    mangled_ppc("??0c_trigger@@QAA@XZ");
//};

//public: bool c_trigger::is_valid(struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?is_valid@c_trigger@@QBA_NPBUs_custom_game_engine_definition@@@Z");
//};

//public: void c_trigger::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_trigger@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_trigger::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_trigger@@QAAXPAVc_bitstream@@@Z");
//};

//private: class c_condition const * c_trigger::get_condition(long, struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?get_condition@c_trigger@@ABAPBVc_condition@@JPBUs_custom_game_engine_definition@@@Z");
//};

//private: class c_action const * c_trigger::get_action(long, struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?get_action@c_trigger@@ABAPBVc_action@@JPBUs_custom_game_engine_definition@@@Z");
//};

//public: c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_trigger_execution_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_trigger_execution_mode@@@Z");
//};

//public: enum e_trigger_execution_mode c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_trigger_execution_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_trigger_execution_mode@@XZ");
//};

//public: bool c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_trigger_execution_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_trigger_execution_mode@@@Z");
//};

//public: bool c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum e_trigger_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@W4e_trigger_type@@@Z");
//};

//public: bool c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: class c_trigger const * c_static_stack<class c_trigger, 320>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Vc_trigger@@$0BEA@@@QBAPBVc_trigger@@XZ");
//};

//public: long c_static_stack<class c_condition, 512>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Vc_condition@@$0CAA@@@QBAJXZ");
//};

//public: class c_condition const & c_static_stack<class c_condition, 512>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Vc_condition@@$0CAA@@@QBAABVc_condition@@J@Z");
//};

//public: long c_static_stack<class c_action, 1024>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Vc_action@@$0EAA@@@QBAJXZ");
//};

//public: class c_action const & c_static_stack<class c_action, 1024>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Vc_action@@$0EAA@@@QBAABVc_action@@J@Z");
//};

//public: long * c_static_stack<long, 16>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@J$0BA@@@QAAPAJXZ");
//};

//public: long * c_static_stack<long, 16>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@J$0BA@@@QAAPAJXZ");
//};

//public: bool c_static_stack<class c_condition, 512>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_condition@@$0CAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class c_action, 1024>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_action@@$0EAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class c_condition, 512>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_condition@@$0CAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_action, 1024>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_action@@$0EAA@@@QBA_NXZ");
//};

//void std::random_shuffle<long *, int (int)>(long *, long *, int (&)(int))
//{
//    mangled_ppc("??$random_shuffle@PAJ$$A6AHH@Z@std@@YAXPAJ0A6AHH@Z@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_trigger_type c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_trigger_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@QBA?AW4e_trigger_type@@XZ");
//};

//public: void c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//void std::_Random_shuffle<long *, int (int), int>(long *, long *, int (&)(int), int *)
//{
//    mangled_ppc("??$_Random_shuffle@PAJ$$A6AHH@ZH@std@@YAXPAJ0A6AHH@ZPAH@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(class c_enum<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_trigger_execution_mode c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_trigger_execution_mode@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_trigger_execution_mode, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_trigger_execution_mode@@E$0A@$05Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_trigger_type c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@SA?AW4e_trigger_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_trigger_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_trigger_type@@E$0A@$07Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//void std::_Debug_pointer<int (int)>(int (*)(int), wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@$$A6AHH@Z@std@@YAXP6AHH@ZPB_WI@Z");
//};

