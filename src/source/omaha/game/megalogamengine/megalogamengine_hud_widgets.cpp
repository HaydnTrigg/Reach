/* ---------- headers */

#include "omaha\game\megalogamengine\megalogamengine_hud_widgets.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_megalogamengine_widget::initialize(enum e_megalo_widget_position);
// public: void c_megalogamengine_widget::build_interface_state(long, long, struct s_megalogamengine_interface_state *) const;
// public: void c_megalogamengine_widget::submit(long *const) const;
// public: void c_megalogamengine_widget::build_simulation_baseline(enum e_megalo_widget_position);
// public: bool c_megalogamengine_widget::build_simulation_update(class c_megalogamengine_widget *) const;
// public: void c_megalogamengine_widget::apply_simulation_update(class c_megalogamengine_widget const *);
// public: void c_megalogamengine_widget::encode(class c_bitstream *) const;
// public: void c_megalogamengine_widget::decode(class c_bitstream *);
// public: void c_megalogamengine_hud_meter_input::initialize(void);
// public: bool c_megalogamengine_hud_meter_input::operator==(class c_megalogamengine_hud_meter_input const &) const;
// public: bool c_megalogamengine_hud_meter_input::operator!=(class c_megalogamengine_hud_meter_input const &) const;
// public: float c_megalogamengine_hud_meter_input::get_theta(void) const;
// public: void c_megalogamengine_hud_meter_input::encode(class c_bitstream *) const;
// public: void c_megalogamengine_hud_meter_input::decode(class c_bitstream *);
// public: long c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::push(void);
// public: struct s_megalogamengine_widget_interface_state * c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::get(long);
// public: enum e_megalogamengine_hud_meter_input_type c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_megalogamengine_hud_meter_input_type(void) const;
// public: bool c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_megalogamengine_hud_meter_input_type) const;
// public: c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>(enum e_megalo_widget_position);
// public: bool c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::valid(long) const;
// public: bool c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::full(void) const;
// public: bool c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::valid(void) const;
// public: void c_bitstream::write_enum<class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_index<64, long>(char const *, long);
// public: void c_bitstream::read_enum<class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_index<64>(char const *);
// public: void c_bitstream::write_enum<class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> >(class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_index<64>(void);
// public: static enum e_megalo_widget_position c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_megalogamengine_hud_meter_input_type c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);

//public: void c_megalogamengine_widget::initialize(enum e_megalo_widget_position)
//{
//    mangled_ppc("?initialize@c_megalogamengine_widget@@QAAXW4e_megalo_widget_position@@@Z");
//};

//public: void c_megalogamengine_widget::build_interface_state(long, long, struct s_megalogamengine_interface_state *) const
//{
//    mangled_ppc("?build_interface_state@c_megalogamengine_widget@@QBAXJJPAUs_megalogamengine_interface_state@@@Z");
//};

//public: void c_megalogamengine_widget::submit(long *const) const
//{
//    mangled_ppc("?submit@c_megalogamengine_widget@@QBAXQAJ@Z");
//};

//public: void c_megalogamengine_widget::build_simulation_baseline(enum e_megalo_widget_position)
//{
//    mangled_ppc("?build_simulation_baseline@c_megalogamengine_widget@@QAAXW4e_megalo_widget_position@@@Z");
//};

//public: bool c_megalogamengine_widget::build_simulation_update(class c_megalogamengine_widget *) const
//{
//    mangled_ppc("?build_simulation_update@c_megalogamengine_widget@@QBA_NPAV1@@Z");
//};

//public: void c_megalogamengine_widget::apply_simulation_update(class c_megalogamengine_widget const *)
//{
//    mangled_ppc("?apply_simulation_update@c_megalogamengine_widget@@QAAXPBV1@@Z");
//};

//public: void c_megalogamengine_widget::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_megalogamengine_widget@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_megalogamengine_widget::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_megalogamengine_widget@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_megalogamengine_hud_meter_input::initialize(void)
//{
//    mangled_ppc("?initialize@c_megalogamengine_hud_meter_input@@QAAXXZ");
//};

//public: bool c_megalogamengine_hud_meter_input::operator==(class c_megalogamengine_hud_meter_input const &) const
//{
//    mangled_ppc("??8c_megalogamengine_hud_meter_input@@QBA_NABV0@@Z");
//};

//public: bool c_megalogamengine_hud_meter_input::operator!=(class c_megalogamengine_hud_meter_input const &) const
//{
//    mangled_ppc("??9c_megalogamengine_hud_meter_input@@QBA_NABV0@@Z");
//};

//public: float c_megalogamengine_hud_meter_input::get_theta(void) const
//{
//    mangled_ppc("?get_theta@c_megalogamengine_hud_meter_input@@QBAMXZ");
//};

//public: void c_megalogamengine_hud_meter_input::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_megalogamengine_hud_meter_input@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_megalogamengine_hud_meter_input::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_megalogamengine_hud_meter_input@@QAAXPAVc_bitstream@@@Z");
//};

//public: long c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_megalogamengine_widget_interface_state@@$03@@QAAJXZ");
//};

//public: struct s_megalogamengine_widget_interface_state * c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_megalogamengine_widget_interface_state@@$03@@QAAPAUs_megalogamengine_widget_interface_state@@J@Z");
//};

//public: enum e_megalogamengine_hud_meter_input_type c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_megalogamengine_hud_meter_input_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_megalogamengine_hud_meter_input_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_megalogamengine_hud_meter_input_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_megalogamengine_hud_meter_input_type@@@Z");
//};

//public: c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>(enum e_megalo_widget_position)
//{
//    mangled_ppc("??0?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@QAA@W4e_megalo_widget_position@@@Z");
//};

//public: bool c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_megalogamengine_widget_interface_state@@$03@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_megalogamengine_widget_interface_state@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_megalogamengine_widget_interface_state, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_megalogamengine_widget_interface_state@@$03@@QBA_NXZ");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<64, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0EA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_index<64>(char const *)
//{
//    mangled_ppc("??$read_index@$0EA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver> >(class c_enum<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_index<64>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0EA@@@YAJXZ");
//};

//public: static enum e_megalo_widget_position c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@SA?AW4e_megalo_widget_position@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_megalo_widget_position, unsigned char, 0, 12, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_megalo_widget_position@@E$0A@$0M@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_megalogamengine_hud_meter_input_type c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_megalogamengine_hud_meter_input_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_megalogamengine_hud_meter_input_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_megalogamengine_hud_meter_input_type@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

