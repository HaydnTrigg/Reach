/* ---------- headers */

#include "omaha\simulation\game_interface\simulation_game_damage.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_simulation_damage_aftermath_event_definition g_simulation_damage_aftermath_event_definition; // "?g_simulation_damage_aftermath_event_definition@@3Vc_simulation_damage_aftermath_event_definition@@A"
// class c_simulation_damage_section_response_event_definition g_simulation_damage_section_response_event_definition; // "?g_simulation_damage_section_response_event_definition@@3Vc_simulation_damage_section_response_event_definition@@A"

// public: virtual long c_simulation_damage_aftermath_event_definition::payload_size(void);
// public: virtual long c_simulation_damage_aftermath_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_damage_aftermath_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_damage_aftermath_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_damage_aftermath_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_damage_aftermath_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_damage_aftermath_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_damage_aftermath_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_damage_aftermath_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_damage_aftermath_event_definition::apply_game_event(long, long const *, long, void const *);
// public: s_damage_aftermath_result_data::s_damage_aftermath_result_data(void);
// public: virtual long c_simulation_damage_aftermath_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_damage_section_response_event_definition::payload_size(void);
// public: virtual long c_simulation_damage_section_response_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_damage_section_response_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_damage_section_response_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_damage_section_response_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_damage_section_response_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_damage_section_response_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_damage_section_response_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_damage_section_response_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_damage_section_response_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_damage_section_response_event_definition::get_player_index(long, long const *, long, void const *);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<25, 1>, 12, 0, 1>(char const *, float);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<2, 1>, 5, 0, 1>(char const *, float);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<16, 1>, 5, 0, 1>(char const *, float);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<3, 1>, 5, 0, 1>(char const *, float);
// public: void c_bitstream::write_index<11, short>(char const *, short);
// public: void c_bitstream::write_valid_index<4, long>(char const *, long);
// public: long c_bitstream::read_valid_index<4>(char const *);
// long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<25, 1>, 4096, 0, 1>(float);
// long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<2, 1>, 32, 0, 1>(float);
// long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<16, 1>, 32, 0, 1>(float);
// long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<3, 1>, 32, 0, 1>(float);
// public: float const t_quantize_real_float<25, 1>::operator float const(void) const;
// public: float const t_quantize_real_float<2, 1>::operator float const(void) const;
// public: float const t_quantize_real_float<16, 1>::operator float const(void) const;
// public: float const t_quantize_real_float<3, 1>::operator float const(void) const;
// public: c_simulation_damage_aftermath_event_definition::c_simulation_damage_aftermath_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_damage_aftermath_event_definition::event_type(void);
// public: virtual char const * c_simulation_damage_aftermath_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_damage_aftermath_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_damage_aftermath_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_damage_section_response_event_definition::c_simulation_damage_section_response_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_damage_section_response_event_definition::event_type(void);
// public: virtual char const * c_simulation_damage_section_response_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_damage_section_response_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_damage_section_response_event_definition::entity_reference_encoding_type(long);

//public: virtual long c_simulation_damage_aftermath_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_damage_aftermath_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_damage_aftermath_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_damage_aftermath_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_damage_aftermath_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_damage_aftermath_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_damage_aftermath_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_damage_aftermath_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_damage_aftermath_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_damage_aftermath_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_damage_aftermath_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_damage_aftermath_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_damage_aftermath_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_damage_aftermath_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_damage_aftermath_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_damage_aftermath_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_damage_aftermath_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_damage_aftermath_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_damage_aftermath_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_damage_aftermath_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: s_damage_aftermath_result_data::s_damage_aftermath_result_data(void)
//{
//    mangled_ppc("??0s_damage_aftermath_result_data@@QAA@XZ");
//};

//public: virtual long c_simulation_damage_aftermath_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_damage_aftermath_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_damage_section_response_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_damage_section_response_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_damage_section_response_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_damage_section_response_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_damage_section_response_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_damage_section_response_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_damage_section_response_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_damage_section_response_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_damage_section_response_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_damage_section_response_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_damage_section_response_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_damage_section_response_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_damage_section_response_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_damage_section_response_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_damage_section_response_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_damage_section_response_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_damage_section_response_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_damage_section_response_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_damage_section_response_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_damage_section_response_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_damage_section_response_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_damage_section_response_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<25, 1>, 12, 0, 1>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$0BJ@$00@@$0M@$0A@$00@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<2, 1>, 5, 0, 1>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$01$00@@$04$0A@$00@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<16, 1>, 5, 0, 1>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$0BA@$00@@$04$0A@$00@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<3, 1>, 5, 0, 1>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$02$00@@$04$0A@$00@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_index<11, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0L@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::write_valid_index<4, long>(char const *, long)
//{
//    mangled_ppc("??$write_valid_index@$03J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_valid_index<4>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$03@c_bitstream@@QAAJPBD@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<25, 1>, 4096, 0, 1>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$0BJ@$00@@$0BAAA@$0A@$00@@YAJM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<2, 1>, 32, 0, 1>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$01$00@@$0CA@$0A@$00@@YAJM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<16, 1>, 32, 0, 1>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$0BA@$00@@$0CA@$0A@$00@@YAJM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<0, 1>, struct t_quantize_real_float<3, 1>, 32, 0, 1>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0A@$00@@U?$t_quantize_real_float@$02$00@@$0CA@$0A@$00@@YAJM@Z");
//};

//public: float const t_quantize_real_float<25, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0BJ@$00@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<2, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$01$00@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<16, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$0BA@$00@@QBA?BMXZ");
//};

//public: float const t_quantize_real_float<3, 1>::operator float const(void) const
//{
//    mangled_ppc("??B?$t_quantize_real_float@$02$00@@QBA?BMXZ");
//};

//public: c_simulation_damage_aftermath_event_definition::c_simulation_damage_aftermath_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_damage_aftermath_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_damage_aftermath_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_damage_aftermath_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_damage_aftermath_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_damage_aftermath_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_damage_aftermath_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_damage_aftermath_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_damage_aftermath_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_damage_aftermath_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_damage_section_response_event_definition::c_simulation_damage_section_response_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_damage_section_response_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_damage_section_response_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_damage_section_response_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_damage_section_response_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_damage_section_response_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_damage_section_response_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_damage_section_response_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_damage_section_response_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_damage_section_response_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

