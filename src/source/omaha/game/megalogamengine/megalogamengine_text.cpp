/* ---------- headers */

#include "omaha\game\megalogamengine\megalogamengine_text.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_replaceable_token::initialize(void);
// public: bool c_replaceable_token::operator==(class c_replaceable_token const &) const;
// public: bool c_replaceable_token::operator!=(class c_replaceable_token const &) const;
// public: void c_replaceable_token::print_to(class c_static_string<128> *) const;
// public: void c_replaceable_token::print_to(class c_static_wchar_string<128> *) const;
// public: void c_replaceable_token::resolve_references(class c_resolved_token *) const;
// public: void c_replaceable_token::encode(class c_bitstream *) const;
// public: void c_replaceable_token::decode(class c_bitstream *);
// public: void c_dynamic_string::initialize(void);
// public: bool c_dynamic_string::operator==(class c_dynamic_string const &) const;
// public: bool c_dynamic_string::operator!=(class c_dynamic_string const &) const;
// public: void c_dynamic_string::print_to_buffer(class c_static_string<128> *) const;
// public: void c_dynamic_string::print_to_buffer(class c_static_wchar_string<128> *) const;
// public: void c_dynamic_string::resolve_references(class c_resolved_dynamic_string *) const;
// public: void c_dynamic_string::encode(class c_bitstream *) const;
// public: enum e_replaceable_token_type c_replaceable_token::get_type(void) const;
// public: void c_dynamic_string::decode(class c_bitstream *);
// public: void c_resolved_token::initialize(void);
// public: void c_resolved_token::print_to(class c_static_string<128> *) const;
// public: void c_resolved_token::print_to(class c_static_wchar_string<128> *) const;
// public: bool c_resolved_token::operator==(class c_resolved_token const &) const;
// public: bool c_resolved_token::operator!=(class c_resolved_token const &) const;
// public: void c_resolved_token::encode(class c_bitstream *) const;
// public: void c_resolved_token::decode(class c_bitstream *);
// public: void c_resolved_dynamic_string::initialize(void);
// public: void c_resolved_dynamic_string::print_to_buffer(class c_static_string<128> *) const;
// public: enum e_replaceable_token_type c_resolved_token::get_type(void) const;
// public: void c_resolved_dynamic_string::print_to_buffer(class c_static_wchar_string<128> *) const;
// public: bool c_resolved_dynamic_string::operator==(class c_resolved_dynamic_string const &) const;
// public: bool c_resolved_dynamic_string::operator!=(class c_resolved_dynamic_string const &) const;
// public: void c_resolved_dynamic_string::encode(class c_bitstream *) const;
// public: void c_resolved_dynamic_string::decode(class c_bitstream *);
// bool populate_replacement_list(wchar_t const *, class c_static_stack<struct s_replacement_info, 2> *);
// enum e_replaceable_token_type get_token_type_for_character(wchar_t);
// bool strings_have_same_replacement_tokens(struct utf8const *, struct utf8const *);
// public: class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::operator=(enum e_replaceable_token_type);
// public: enum e_replaceable_token_type c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::operator enum e_replaceable_token_type(void) const;
// public: bool c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::operator==(enum e_replaceable_token_type) const;
// public: static long s_static_array<class c_replaceable_token, 2>::get_count(void);
// public: void s_static_array<class c_replaceable_token, 2>::set_memory(long);
// public: static long s_static_array<class c_resolved_token, 2>::get_count(void);
// public: bool c_static_stack<struct s_replacement_info, 2>::full(void) const;
// public: long c_static_stack<struct s_replacement_info, 2>::count(void) const;
// public: void c_static_stack<struct s_replacement_info, 2>::clear(void);
// public: void c_static_stack<struct s_replacement_info, 2>::push_back(struct s_replacement_info const &);
// public: struct s_replacement_info & c_static_stack<struct s_replacement_info, 2>::operator[](long);
// public: c_static_stack<struct s_replacement_info, 2>::c_static_stack<struct s_replacement_info, 2>(void);
// public: bool c_static_stack<struct s_replacement_info, 2>::valid(void) const;
// public: bool c_static_stack<struct s_replacement_info, 2>::valid(long) const;
// public: long c_static_stack<struct s_replacement_info, 2>::push(void);
// public: struct s_replacement_info * c_static_stack<struct s_replacement_info, 2>::get(long);
// public: void c_static_wchar_string<128>::clear(void);
// public: void c_static_wchar_string<128>::set_char(char const *);
// public: void c_static_wchar_string<128>::set_utf8(struct utf8const *);
// public: wchar_t const * c_static_wchar_string<128>::print(wchar_t const *, ...);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> *);
// public: class c_replaceable_token & s_static_array<class c_replaceable_token, 2>::operator[]<long>(long);
// public: class c_replaceable_token const & s_static_array<class c_replaceable_token, 2>::operator[]<long>(long) const;
// public: class c_resolved_token & s_static_array<class c_resolved_token, 2>::operator[]<long>(long);
// public: void c_bitstream::write_index<112, short>(char const *, short);
// void print_timer_seconds_to_wchar_string<128>(long, class c_static_wchar_string<128> *);
// public: class c_resolved_token const & s_static_array<class c_resolved_token, 2>::operator[]<long>(long) const;
// public: bool c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: wchar_t const * c_static_wchar_string<128>::append_print(wchar_t const *, ...);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>);
// public: static enum e_replaceable_token_type c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static bool s_static_array<class c_replaceable_token, 2>::valid<long>(long);
// public: static bool s_static_array<class c_resolved_token, 2>::valid<long>(long);
// public: long c_static_wchar_string<128>::length(void) const;

//public: void c_replaceable_token::initialize(void)
//{
//    mangled_ppc("?initialize@c_replaceable_token@@QAAXXZ");
//};

//public: bool c_replaceable_token::operator==(class c_replaceable_token const &) const
//{
//    mangled_ppc("??8c_replaceable_token@@QBA_NABV0@@Z");
//};

//public: bool c_replaceable_token::operator!=(class c_replaceable_token const &) const
//{
//    mangled_ppc("??9c_replaceable_token@@QBA_NABV0@@Z");
//};

//public: void c_replaceable_token::print_to(class c_static_string<128> *) const
//{
//    mangled_ppc("?print_to@c_replaceable_token@@QBAXPAV?$c_static_string@$0IA@@@@Z");
//};

//public: void c_replaceable_token::print_to(class c_static_wchar_string<128> *) const
//{
//    mangled_ppc("?print_to@c_replaceable_token@@QBAXPAV?$c_static_wchar_string@$0IA@@@@Z");
//};

//public: void c_replaceable_token::resolve_references(class c_resolved_token *) const
//{
//    mangled_ppc("?resolve_references@c_replaceable_token@@QBAXPAVc_resolved_token@@@Z");
//};

//public: void c_replaceable_token::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_replaceable_token@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_replaceable_token::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_replaceable_token@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_dynamic_string::initialize(void)
//{
//    mangled_ppc("?initialize@c_dynamic_string@@QAAXXZ");
//};

//public: bool c_dynamic_string::operator==(class c_dynamic_string const &) const
//{
//    mangled_ppc("??8c_dynamic_string@@QBA_NABV0@@Z");
//};

//public: bool c_dynamic_string::operator!=(class c_dynamic_string const &) const
//{
//    mangled_ppc("??9c_dynamic_string@@QBA_NABV0@@Z");
//};

//public: void c_dynamic_string::print_to_buffer(class c_static_string<128> *) const
//{
//    mangled_ppc("?print_to_buffer@c_dynamic_string@@QBAXPAV?$c_static_string@$0IA@@@@Z");
//};

//public: void c_dynamic_string::print_to_buffer(class c_static_wchar_string<128> *) const
//{
//    mangled_ppc("?print_to_buffer@c_dynamic_string@@QBAXPAV?$c_static_wchar_string@$0IA@@@@Z");
//};

//public: void c_dynamic_string::resolve_references(class c_resolved_dynamic_string *) const
//{
//    mangled_ppc("?resolve_references@c_dynamic_string@@QBAXPAVc_resolved_dynamic_string@@@Z");
//};

//public: void c_dynamic_string::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_dynamic_string@@QBAXPAVc_bitstream@@@Z");
//};

//public: enum e_replaceable_token_type c_replaceable_token::get_type(void) const
//{
//    mangled_ppc("?get_type@c_replaceable_token@@QBA?AW4e_replaceable_token_type@@XZ");
//};

//public: void c_dynamic_string::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_dynamic_string@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_resolved_token::initialize(void)
//{
//    mangled_ppc("?initialize@c_resolved_token@@QAAXXZ");
//};

//public: void c_resolved_token::print_to(class c_static_string<128> *) const
//{
//    mangled_ppc("?print_to@c_resolved_token@@QBAXPAV?$c_static_string@$0IA@@@@Z");
//};

//public: void c_resolved_token::print_to(class c_static_wchar_string<128> *) const
//{
//    mangled_ppc("?print_to@c_resolved_token@@QBAXPAV?$c_static_wchar_string@$0IA@@@@Z");
//};

//public: bool c_resolved_token::operator==(class c_resolved_token const &) const
//{
//    mangled_ppc("??8c_resolved_token@@QBA_NABV0@@Z");
//};

//public: bool c_resolved_token::operator!=(class c_resolved_token const &) const
//{
//    mangled_ppc("??9c_resolved_token@@QBA_NABV0@@Z");
//};

//public: void c_resolved_token::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_resolved_token@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_resolved_token::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_resolved_token@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_resolved_dynamic_string::initialize(void)
//{
//    mangled_ppc("?initialize@c_resolved_dynamic_string@@QAAXXZ");
//};

//public: void c_resolved_dynamic_string::print_to_buffer(class c_static_string<128> *) const
//{
//    mangled_ppc("?print_to_buffer@c_resolved_dynamic_string@@QBAXPAV?$c_static_string@$0IA@@@@Z");
//};

//public: enum e_replaceable_token_type c_resolved_token::get_type(void) const
//{
//    mangled_ppc("?get_type@c_resolved_token@@QBA?AW4e_replaceable_token_type@@XZ");
//};

//public: void c_resolved_dynamic_string::print_to_buffer(class c_static_wchar_string<128> *) const
//{
//    mangled_ppc("?print_to_buffer@c_resolved_dynamic_string@@QBAXPAV?$c_static_wchar_string@$0IA@@@@Z");
//};

//public: bool c_resolved_dynamic_string::operator==(class c_resolved_dynamic_string const &) const
//{
//    mangled_ppc("??8c_resolved_dynamic_string@@QBA_NABV0@@Z");
//};

//public: bool c_resolved_dynamic_string::operator!=(class c_resolved_dynamic_string const &) const
//{
//    mangled_ppc("??9c_resolved_dynamic_string@@QBA_NABV0@@Z");
//};

//public: void c_resolved_dynamic_string::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_resolved_dynamic_string@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_resolved_dynamic_string::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_resolved_dynamic_string@@QAAXPAVc_bitstream@@@Z");
//};

//bool populate_replacement_list(wchar_t const *, class c_static_stack<struct s_replacement_info, 2> *)
//{
//    mangled_ppc("?populate_replacement_list@@YA_NPB_WPAV?$c_static_stack@Us_replacement_info@@$01@@@Z");
//};

//enum e_replaceable_token_type get_token_type_for_character(wchar_t)
//{
//    mangled_ppc("?get_token_type_for_character@@YA?AW4e_replaceable_token_type@@_W@Z");
//};

//bool strings_have_same_replacement_tokens(struct utf8const *, struct utf8const *)
//{
//    mangled_ppc("?strings_have_same_replacement_tokens@@YA_NPBUutf8@@0@Z");
//};

//public: class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::operator=(enum e_replaceable_token_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@QAAAAV0@W4e_replaceable_token_type@@@Z");
//};

//public: enum e_replaceable_token_type c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::operator enum e_replaceable_token_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@QBA?AW4e_replaceable_token_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::operator==(enum e_replaceable_token_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@QBA_NW4e_replaceable_token_type@@@Z");
//};

//public: static long s_static_array<class c_replaceable_token, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_replaceable_token@@$01@@SAJXZ");
//};

//public: void s_static_array<class c_replaceable_token, 2>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Vc_replaceable_token@@$01@@QAAXJ@Z");
//};

//public: static long s_static_array<class c_resolved_token, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_resolved_token@@$01@@SAJXZ");
//};

//public: bool c_static_stack<struct s_replacement_info, 2>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_replacement_info@@$01@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_replacement_info, 2>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_replacement_info@@$01@@QBAJXZ");
//};

//public: void c_static_stack<struct s_replacement_info, 2>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_replacement_info@@$01@@QAAXXZ");
//};

//public: void c_static_stack<struct s_replacement_info, 2>::push_back(struct s_replacement_info const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_replacement_info@@$01@@QAAXABUs_replacement_info@@@Z");
//};

//public: struct s_replacement_info & c_static_stack<struct s_replacement_info, 2>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_replacement_info@@$01@@QAAAAUs_replacement_info@@J@Z");
//};

//public: c_static_stack<struct s_replacement_info, 2>::c_static_stack<struct s_replacement_info, 2>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_replacement_info@@$01@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_replacement_info, 2>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_replacement_info@@$01@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_replacement_info, 2>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_replacement_info@@$01@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_replacement_info, 2>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_replacement_info@@$01@@QAAJXZ");
//};

//public: struct s_replacement_info * c_static_stack<struct s_replacement_info, 2>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_replacement_info@@$01@@QAAPAUs_replacement_info@@J@Z");
//};

//public: void c_static_wchar_string<128>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_wchar_string@$0IA@@@QAAXXZ");
//};

//public: void c_static_wchar_string<128>::set_char(char const *)
//{
//    mangled_ppc("?set_char@?$c_static_wchar_string@$0IA@@@QAAXPBD@Z");
//};

//public: void c_static_wchar_string<128>::set_utf8(struct utf8const *)
//{
//    mangled_ppc("?set_utf8@?$c_static_wchar_string@$0IA@@@QAAXPBUutf8@@@Z");
//};

//public: wchar_t const * c_static_wchar_string<128>::print(wchar_t const *, ...)
//{
//    mangled_ppc("?print@?$c_static_wchar_string@$0IA@@@QAAPB_WPB_WZZ");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_replaceable_token & s_static_array<class c_replaceable_token, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_replaceable_token@@$01@@QAAAAVc_replaceable_token@@J@Z");
//};

//public: class c_replaceable_token const & s_static_array<class c_replaceable_token, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_replaceable_token@@$01@@QBAABVc_replaceable_token@@J@Z");
//};

//public: class c_resolved_token & s_static_array<class c_resolved_token, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_resolved_token@@$01@@QAAAAVc_resolved_token@@J@Z");
//};

//public: void c_bitstream::write_index<112, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0HA@F@c_bitstream@@QAAXPBDF@Z");
//};

//void print_timer_seconds_to_wchar_string<128>(long, class c_static_wchar_string<128> *)
//{
//    mangled_ppc("??$print_timer_seconds_to_wchar_string@$0IA@@@YAXJPAV?$c_static_wchar_string@$0IA@@@@Z");
//};

//public: class c_resolved_token const & s_static_array<class c_resolved_token, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_resolved_token@@$01@@QBAABVc_resolved_token@@J@Z");
//};

//public: bool c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: wchar_t const * c_static_wchar_string<128>::append_print(wchar_t const *, ...)
//{
//    mangled_ppc("?append_print@?$c_static_wchar_string@$0IA@@@QAAPB_WPB_WZZ");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_replaceable_token_type c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@SA?AW4e_replaceable_token_type@@H@Z");
//};

//public: static char c_enum_no_init<enum e_replaceable_token_type, char, -1, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_replaceable_token_type@@D$0?0$04Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: static bool s_static_array<class c_replaceable_token, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_replaceable_token@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_resolved_token, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_resolved_token@@$01@@SA_NJ@Z");
//};

//public: long c_static_wchar_string<128>::length(void) const
//{
//    mangled_ppc("?length@?$c_static_wchar_string@$0IA@@@QBAJXZ");
//};

