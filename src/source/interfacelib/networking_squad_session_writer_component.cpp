/* ---------- headers */

#include "interfacelib\networking_squad_session_writer_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_networking_squad_session_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_networking_squad_session_writer_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_networking_squad_session_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_networking_squad_session_writer_component@@@@0Vc_cui_object_property_table@@A"

// public: c_networking_squad_session_writer_component::c_networking_squad_session_writer_component(void);
// merged_84B0EE30;
// public: virtual c_networking_squad_session_writer_component::~c_networking_squad_session_writer_component(void);
// public: bool c_networking_squad_session_writer_component::set_multiplayer_map_id(long);
// public: bool c_networking_squad_session_writer_component::set_game_variant(class c_game_variant_component *);
// bool game_variant_change_custom_variant_type(class c_game_variant *, enum e_game_engine_type);
// public: struct s_owned_content_item const & c_game_variant_component::get_owned_content_item(void) const;
// public: bool c_networking_squad_session_writer_component::set_multiplayer_map_variant(class c_map_variant_component *);
// public: struct s_owned_content_item const & c_map_variant_component::get_owned_content_item(void) const;
// public: bool c_networking_squad_session_writer_component::set_film_description(class c_film_description_component *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_networking_squad_session_writer_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_networking_squad_session_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_networking_squad_session_writer_component>(class c_cui_component const *);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_campaign_difficulty_level::*)(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_campaign_difficulty_level(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_writer_component, long, long & (c_networking_squad_session_writer_component::get_campaign_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_writer_component::get_campaign_id(void) const;
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_campaign_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_campaign_id(long);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, short, bool & (c_networking_squad_session_writer_component::set_campaign_insertion_point::*)(short)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_campaign_insertion_point(short);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_writer_component, long, long & (c_networking_squad_session_writer_component::get_map_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_writer_component::get_map_id(void) const;
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_campaign_map_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_campaign_map_id(long);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_campaign_metagame_scoring::*)(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_campaign_metagame_scoring(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_game_skulls::*)(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_game_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>, void & (c_networking_squad_session_writer_component::set_advertisement_mode::*)(class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_networking_squad_session_writer_component::set_advertisement_mode(class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_networking_squad_session_writer_component, bool, void & (c_networking_squad_session_writer_component::set_closed::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_networking_squad_session_writer_component::set_closed(bool);
// bool cui_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, void & (c_networking_squad_session_writer_component::set_max_player_count::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_networking_squad_session_writer_component::set_max_player_count(long);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, unsigned short, bool & (c_networking_squad_session_writer_component::set_hopper_id::*)(unsigned short)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_hopper_id(unsigned short);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_firefight_map_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_firefight_map_id(long);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_multiplayer_map_id::*)(long)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, class c_game_variant_component *, class c_game_variant_component *& (c_networking_squad_session_reader_component::get_game_variant::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_game_variant_component * c_networking_squad_session_reader_component::get_game_variant(void) const;
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_game_variant_component *, bool & (c_networking_squad_session_writer_component::set_game_variant::*)(class c_game_variant_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_game_variant_component **);
// class c_game_variant_component * cui_dynamic_cast<class c_game_variant_component *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, class c_map_variant_component *, class c_map_variant_component *& (c_networking_squad_session_reader_component::get_multiplayer_map_variant::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_map_variant_component * c_networking_squad_session_reader_component::get_multiplayer_map_variant(void) const;
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_map_variant_component *, bool & (c_networking_squad_session_writer_component::set_multiplayer_map_variant::*)(class c_map_variant_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_map_variant_component **);
// class c_map_variant_component * cui_dynamic_cast<class c_map_variant_component *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, class c_film_description_component *, class c_film_description_component *& (c_networking_squad_session_reader_component::get_film_description::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_film_description_component * c_networking_squad_session_reader_component::get_film_description(void) const;
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_film_description_component *, bool & (c_networking_squad_session_writer_component::set_film_description::*)(class c_film_description_component *)>(void *, long, struct s_cui_property_value const *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_film_description_component **);
// class c_film_description_component * cui_dynamic_cast<class c_film_description_component *>(class c_cui_component *);
// bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_privacy::*)(class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: bool c_networking_squad_session_writer_component::set_privacy(class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>);
// public: c_networking_squad_session_writer_component::c_networking_squad_session_writer_component(class c_networking_squad_session_writer_component const &);
// public: c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: static class c_game_variant_component * s_cui_dynamic_cast<class c_game_variant_component *>::cast(class c_cui_component *);
// public: static class c_map_variant_component * s_cui_dynamic_cast<class c_map_variant_component *>::cast(class c_cui_component *);
// public: static class c_film_description_component * s_cui_dynamic_cast<class c_film_description_component *>::cast(class c_cui_component *);
// bool cui_property_value_get<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// bool cui_property_value_get(struct s_cui_property_value const *, short *);

//public: c_networking_squad_session_writer_component::c_networking_squad_session_writer_component(void)
//{
//    mangled_ppc("??0c_networking_squad_session_writer_component@@QAA@XZ");
//};

//merged_84B0EE30
//{
//    mangled_ppc("merged_84B0EE30");
//};

//public: virtual c_networking_squad_session_writer_component::~c_networking_squad_session_writer_component(void)
//{
//    mangled_ppc("??1c_networking_squad_session_writer_component@@UAA@XZ");
//};

//public: bool c_networking_squad_session_writer_component::set_multiplayer_map_id(long)
//{
//    mangled_ppc("?set_multiplayer_map_id@c_networking_squad_session_writer_component@@QAA_NJ@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_game_variant(class c_game_variant_component *)
//{
//    mangled_ppc("?set_game_variant@c_networking_squad_session_writer_component@@QAA_NPAVc_game_variant_component@@@Z");
//};

//bool game_variant_change_custom_variant_type(class c_game_variant *, enum e_game_engine_type)
//{
//    mangled_ppc("?game_variant_change_custom_variant_type@@YA_NPAVc_game_variant@@W4e_game_engine_type@@@Z");
//};

//public: struct s_owned_content_item const & c_game_variant_component::get_owned_content_item(void) const
//{
//    mangled_ppc("?get_owned_content_item@c_game_variant_component@@QBAABUs_owned_content_item@@XZ");
//};

//public: bool c_networking_squad_session_writer_component::set_multiplayer_map_variant(class c_map_variant_component *)
//{
//    mangled_ppc("?set_multiplayer_map_variant@c_networking_squad_session_writer_component@@QAA_NPAVc_map_variant_component@@@Z");
//};

//public: struct s_owned_content_item const & c_map_variant_component::get_owned_content_item(void) const
//{
//    mangled_ppc("?get_owned_content_item@c_map_variant_component@@QBAABUs_owned_content_item@@XZ");
//};

//public: bool c_networking_squad_session_writer_component::set_film_description(class c_film_description_component *)
//{
//    mangled_ppc("?set_film_description@c_networking_squad_session_writer_component@@QAA_NPAVc_film_description_component@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_networking_squad_session_writer_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_networking_squad_session_writer_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_networking_squad_session_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_networking_squad_session_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_networking_squad_session_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_networking_squad_session_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_campaign_difficulty_level::*)(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?set_campaign_difficulty_level@1@QAA_NV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_campaign_difficulty_level(class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_campaign_difficulty_level@c_networking_squad_session_writer_component@@QAA_NV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_writer_component, long, long & (c_networking_squad_session_writer_component::get_campaign_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_writer_component@@J$1?get_campaign_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_writer_component::get_campaign_id(void) const
//{
//    mangled_ppc("?get_campaign_id@c_networking_squad_session_writer_component@@QBAJXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_campaign_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@J$1?set_campaign_id@1@QAA_NJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_campaign_id(long)
//{
//    mangled_ppc("?set_campaign_id@c_networking_squad_session_writer_component@@QAA_NJ@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, short, bool & (c_networking_squad_session_writer_component::set_campaign_insertion_point::*)(short)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@F$1?set_campaign_insertion_point@1@QAA_NF@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_campaign_insertion_point(short)
//{
//    mangled_ppc("?set_campaign_insertion_point@c_networking_squad_session_writer_component@@QAA_NF@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_writer_component, long, long & (c_networking_squad_session_writer_component::get_map_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_writer_component@@J$1?get_map_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_writer_component::get_map_id(void) const
//{
//    mangled_ppc("?get_map_id@c_networking_squad_session_writer_component@@QBAJXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_campaign_map_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@J$1?set_campaign_map_id@1@QAA_NJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_campaign_map_id(long)
//{
//    mangled_ppc("?set_campaign_map_id@c_networking_squad_session_writer_component@@QAA_NJ@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_campaign_metagame_scoring::*)(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?set_campaign_metagame_scoring@1@QAA_NV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_campaign_metagame_scoring(class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_campaign_metagame_scoring@c_networking_squad_session_writer_component@@QAA_NV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_game_skulls::*)(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@$1?set_game_skulls@1@QAA_NV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_game_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_game_skulls@c_networking_squad_session_writer_component@@QAA_NV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>, void & (c_networking_squad_session_writer_component::set_advertisement_mode::*)(class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@V?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@$1?set_advertisement_mode@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_networking_squad_session_writer_component::set_advertisement_mode(class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_advertisement_mode@c_networking_squad_session_writer_component@@QAAXV?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_networking_squad_session_writer_component, bool, void & (c_networking_squad_session_writer_component::set_closed::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@_N$1?set_closed@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_networking_squad_session_writer_component::set_closed(bool)
//{
//    mangled_ppc("?set_closed@c_networking_squad_session_writer_component@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, void & (c_networking_squad_session_writer_component::set_max_player_count::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@J$1?set_max_player_count@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_networking_squad_session_writer_component::set_max_player_count(long)
//{
//    mangled_ppc("?set_max_player_count@c_networking_squad_session_writer_component@@QAAXJ@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, unsigned short, bool & (c_networking_squad_session_writer_component::set_hopper_id::*)(unsigned short)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@G$1?set_hopper_id@1@QAA_NG@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_hopper_id(unsigned short)
//{
//    mangled_ppc("?set_hopper_id@c_networking_squad_session_writer_component@@QAA_NG@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_firefight_map_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@J$1?set_firefight_map_id@1@QAA_NJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_firefight_map_id(long)
//{
//    mangled_ppc("?set_firefight_map_id@c_networking_squad_session_writer_component@@QAA_NJ@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, long, bool & (c_networking_squad_session_writer_component::set_multiplayer_map_id::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@J$1?set_multiplayer_map_id@1@QAA_NJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, class c_game_variant_component *, class c_game_variant_component *& (c_networking_squad_session_reader_component::get_game_variant::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PAVc_game_variant_component@@$1?get_game_variant@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_game_variant_component * c_networking_squad_session_reader_component::get_game_variant(void) const
//{
//    mangled_ppc("?get_game_variant@c_networking_squad_session_reader_component@@QBAPAVc_game_variant_component@@XZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_game_variant_component *, bool & (c_networking_squad_session_writer_component::set_game_variant::*)(class c_game_variant_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@PAVc_game_variant_component@@$1?set_game_variant@1@QAA_NPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_game_variant_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_game_variant_component@@@Z");
//};

//class c_game_variant_component * cui_dynamic_cast<class c_game_variant_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_game_variant_component@@@@YAPAVc_game_variant_component@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, class c_map_variant_component *, class c_map_variant_component *& (c_networking_squad_session_reader_component::get_multiplayer_map_variant::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PAVc_map_variant_component@@$1?get_multiplayer_map_variant@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_map_variant_component * c_networking_squad_session_reader_component::get_multiplayer_map_variant(void) const
//{
//    mangled_ppc("?get_multiplayer_map_variant@c_networking_squad_session_reader_component@@QBAPAVc_map_variant_component@@XZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_map_variant_component *, bool & (c_networking_squad_session_writer_component::set_multiplayer_map_variant::*)(class c_map_variant_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@PAVc_map_variant_component@@$1?set_multiplayer_map_variant@1@QAA_NPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_map_variant_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_map_variant_component@@@Z");
//};

//class c_map_variant_component * cui_dynamic_cast<class c_map_variant_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_map_variant_component@@@@YAPAVc_map_variant_component@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, class c_film_description_component *, class c_film_description_component *& (c_networking_squad_session_reader_component::get_film_description::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PAVc_film_description_component@@$1?get_film_description@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_film_description_component * c_networking_squad_session_reader_component::get_film_description(void) const
//{
//    mangled_ppc("?get_film_description@c_networking_squad_session_reader_component@@QBAPAVc_film_description_component@@XZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_film_description_component *, bool & (c_networking_squad_session_writer_component::set_film_description::*)(class c_film_description_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@PAVc_film_description_component@@$1?set_film_description@1@QAA_NPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_film_description_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_film_description_component@@@Z");
//};

//class c_film_description_component * cui_dynamic_cast<class c_film_description_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_film_description_component@@@@YAPAVc_film_description_component@@PAVc_cui_component@@@Z");
//};

//bool cui_try_set_scalar_property_by_value<class c_networking_squad_session_writer_component, class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>, bool & (c_networking_squad_session_writer_component::set_privacy::*)(class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_networking_squad_session_writer_component@@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@$1?set_privacy@1@QAA_NV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_writer_component::set_privacy(class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_privacy@c_networking_squad_session_writer_component@@QAA_NV?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_networking_squad_session_writer_component::c_networking_squad_session_writer_component(class c_networking_squad_session_writer_component const &)
//{
//    mangled_ppc("??0c_networking_squad_session_writer_component@@QAA@ABV0@@Z");
//};

//public: c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static class c_game_variant_component * s_cui_dynamic_cast<class c_game_variant_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_game_variant_component@@@@SAPAVc_game_variant_component@@PAVc_cui_component@@@Z");
//};

//public: static class c_map_variant_component * s_cui_dynamic_cast<class c_map_variant_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_map_variant_component@@@@SAPAVc_map_variant_component@@PAVc_cui_component@@@Z");
//};

//public: static class c_film_description_component * s_cui_dynamic_cast<class c_film_description_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_film_description_component@@@@SAPAVc_film_description_component@@PAVc_cui_component@@@Z");
//};

//bool cui_property_value_get<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, short *)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAF@Z");
//};

