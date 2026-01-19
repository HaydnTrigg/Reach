/* ---------- headers */

#include "omaha\simulation\game_interface\simulation_game_breakable_surfaces.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_simulation_breakable_surface_break_event_definition g_simulation_breakable_surface_break_event_definition; // "?g_simulation_breakable_surface_break_event_definition@@3Vc_simulation_breakable_surface_break_event_definition@@A"
// class c_simulation_breakable_surface_damage_aoe_event_definition g_simulation_breakable_surface_damage_aoe_event_definition; // "?g_simulation_breakable_surface_damage_aoe_event_definition@@3Vc_simulation_breakable_surface_damage_aoe_event_definition@@A"
// class c_simulation_breakable_surface_group_entity_definition g_simulation_breakable_surface_group_entity_definition; // "?g_simulation_breakable_surface_group_entity_definition@@3Vc_simulation_breakable_surface_group_entity_definition@@A"

// public: virtual long c_simulation_breakable_surface_break_event_definition::payload_size(void);
// public: virtual long c_simulation_breakable_surface_break_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_breakable_surface_break_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_breakable_surface_break_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual float c_simulation_breakable_surface_break_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_breakable_surface_break_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_breakable_surface_break_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_breakable_surface_break_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_breakable_surface_break_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_breakable_surface_break_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_breakable_surface_break_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_breakable_surface_damage_aoe_event_definition::payload_size(void);
// public: virtual long c_simulation_breakable_surface_damage_aoe_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_breakable_surface_damage_aoe_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_breakable_surface_damage_aoe_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual float c_simulation_breakable_surface_damage_aoe_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_breakable_surface_damage_aoe_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_breakable_surface_damage_aoe_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual enum e_simulation_entity_type c_simulation_breakable_surface_group_entity_definition::entity_type(void);
// public: virtual char const * c_simulation_breakable_surface_group_entity_definition::entity_type_name(void);
// public: virtual long c_simulation_breakable_surface_group_entity_definition::state_data_size(void);
// public: virtual long c_simulation_breakable_surface_group_entity_definition::creation_data_size(void);
// public: virtual long c_simulation_breakable_surface_group_entity_definition::update_flag_count(void);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_breakable_surface_group_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_type_is_gameworld_object(void);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::gameworld_attachment_valid(long);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_update_encode(struct s_entity_update_encode_data *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_update_decode(struct s_entity_update_decode_data *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_state_lossy_compare(void *, void *, long);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_creation_lossy_compare(void *, void *, long);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::build_creation_data(long, long, void *);
// public: void c_breakable_surface_group_handle::set_raw_handle(long);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_breakable_surface_group_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::delete_game_entity(long);
// public: virtual bool c_simulation_breakable_surface_group_entity_definition::promote_game_entity_to_authority(long);
// public: c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>(unsigned long);
// public: bool c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver> const &) const;
// public: c_simulation_breakable_surface_break_event_definition::c_simulation_breakable_surface_break_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_breakable_surface_break_event_definition::event_type(void);
// public: virtual char const * c_simulation_breakable_surface_break_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_breakable_surface_break_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_breakable_surface_break_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_breakable_surface_damage_aoe_event_definition::c_simulation_breakable_surface_damage_aoe_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_breakable_surface_damage_aoe_event_definition::event_type(void);
// public: virtual char const * c_simulation_breakable_surface_damage_aoe_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_breakable_surface_damage_aoe_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_breakable_surface_damage_aoe_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_breakable_surface_group_entity_definition::c_simulation_breakable_surface_group_entity_definition(void);
// public: c_simulation_breakable_surface_group_entity_definition::~c_simulation_breakable_surface_group_entity_definition(void);
// void g_simulation_breakable_surface_group_entity_definition::`dynamic atexit destructor'(void);

//public: virtual long c_simulation_breakable_surface_break_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_breakable_surface_break_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_breakable_surface_break_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_breakable_surface_break_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_breakable_surface_break_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_breakable_surface_break_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_breakable_surface_break_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_breakable_surface_break_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual float c_simulation_breakable_surface_break_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_breakable_surface_break_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_breakable_surface_break_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_breakable_surface_break_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_breakable_surface_break_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_breakable_surface_break_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_breakable_surface_break_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_breakable_surface_break_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_breakable_surface_break_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_breakable_surface_break_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_breakable_surface_break_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_breakable_surface_break_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_breakable_surface_break_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_breakable_surface_break_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_breakable_surface_damage_aoe_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_breakable_surface_damage_aoe_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_breakable_surface_damage_aoe_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_breakable_surface_damage_aoe_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_breakable_surface_damage_aoe_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_breakable_surface_damage_aoe_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual float c_simulation_breakable_surface_damage_aoe_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_breakable_surface_damage_aoe_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_breakable_surface_damage_aoe_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_breakable_surface_damage_aoe_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_breakable_surface_damage_aoe_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual enum e_simulation_entity_type c_simulation_breakable_surface_group_entity_definition::entity_type(void)
//{
//    mangled_ppc("?entity_type@c_simulation_breakable_surface_group_entity_definition@@UAA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual char const * c_simulation_breakable_surface_group_entity_definition::entity_type_name(void)
//{
//    mangled_ppc("?entity_type_name@c_simulation_breakable_surface_group_entity_definition@@UAAPBDXZ");
//};

//public: virtual long c_simulation_breakable_surface_group_entity_definition::state_data_size(void)
//{
//    mangled_ppc("?state_data_size@c_simulation_breakable_surface_group_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_breakable_surface_group_entity_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_breakable_surface_group_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_breakable_surface_group_entity_definition::update_flag_count(void)
//{
//    mangled_ppc("?update_flag_count@c_simulation_breakable_surface_group_entity_definition@@UAAJXZ");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_breakable_surface_group_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_breakable_surface_group_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *)
//{
//    mangled_ppc("?entity_replication_required_for_view_activation@c_simulation_breakable_surface_group_entity_definition@@UAA_NPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_type_is_gameworld_object(void)
//{
//    mangled_ppc("?entity_type_is_gameworld_object@c_simulation_breakable_surface_group_entity_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::gameworld_attachment_valid(long)
//{
//    mangled_ppc("?gameworld_attachment_valid@c_simulation_breakable_surface_group_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_breakable_surface_group_entity_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_breakable_surface_group_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_simulation_breakable_surface_group_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_breakable_surface_group_entity_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_breakable_surface_group_entity_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?entity_update_encode@c_simulation_breakable_surface_group_entity_definition@@UAA_NPAUs_entity_update_encode_data@@@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?entity_update_decode@c_simulation_breakable_surface_group_entity_definition@@UAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_state_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_state_lossy_compare@c_simulation_breakable_surface_group_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_breakable_surface_group_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::build_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_creation_data@c_simulation_breakable_surface_group_entity_definition@@UAAXJJPAX@Z");
//};

//public: void c_breakable_surface_group_handle::set_raw_handle(long)
//{
//    mangled_ppc("?set_raw_handle@c_breakable_surface_group_handle@@QAAXJ@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_breakable_surface_group_entity_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *)
//{
//    mangled_ppc("?build_updated_state_data@c_simulation_breakable_surface_group_entity_definition@@UAA_NPBUs_simulation_entity@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_breakable_surface_group_entity_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_breakable_surface_group_entity_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_breakable_surface_group_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_breakable_surface_group_entity_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?create_game_entity@c_simulation_breakable_surface_group_entity_definition@@UAA_NJJPBXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?update_game_entity@c_simulation_breakable_surface_group_entity_definition@@UAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::delete_game_entity(long)
//{
//    mangled_ppc("?delete_game_entity@c_simulation_breakable_surface_group_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_breakable_surface_group_entity_definition::promote_game_entity_to_authority(long)
//{
//    mangled_ppc("?promote_game_entity_to_authority@c_simulation_breakable_surface_group_entity_definition@@UAA_NJ@Z");
//};

//public: c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: c_simulation_breakable_surface_break_event_definition::c_simulation_breakable_surface_break_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_breakable_surface_break_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_breakable_surface_break_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_breakable_surface_break_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_breakable_surface_break_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_breakable_surface_break_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_breakable_surface_break_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_breakable_surface_break_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_breakable_surface_break_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_breakable_surface_break_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_breakable_surface_damage_aoe_event_definition::c_simulation_breakable_surface_damage_aoe_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_breakable_surface_damage_aoe_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_breakable_surface_damage_aoe_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_breakable_surface_damage_aoe_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_breakable_surface_damage_aoe_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_breakable_surface_damage_aoe_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_breakable_surface_damage_aoe_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_breakable_surface_damage_aoe_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_breakable_surface_damage_aoe_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_breakable_surface_damage_aoe_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_breakable_surface_group_entity_definition::c_simulation_breakable_surface_group_entity_definition(void)
//{
//    mangled_ppc("??0c_simulation_breakable_surface_group_entity_definition@@QAA@XZ");
//};

//public: c_simulation_breakable_surface_group_entity_definition::~c_simulation_breakable_surface_group_entity_definition(void)
//{
//    mangled_ppc("??1c_simulation_breakable_surface_group_entity_definition@@QAA@XZ");
//};

//void g_simulation_breakable_surface_group_entity_definition::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_breakable_surface_group_entity_definition@@YAXXZ");
//};

