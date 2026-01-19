/* ---------- headers */

#include "omaha\simulation\game_interface\simulation_game_projectiles.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_simulation_projectile_entity_definition g_simulation_projectile_entity_definition; // "?g_simulation_projectile_entity_definition@@3Vc_simulation_projectile_entity_definition@@A"
// class c_simulation_projectile_attached_event_definition g_simulation_projectile_attached_event_definition; // "?g_simulation_projectile_attached_event_definition@@3Vc_simulation_projectile_attached_event_definition@@A"
// class c_simulation_projectile_detonate_event_definition g_simulation_projectile_detonate_event_definition; // "?g_simulation_projectile_detonate_event_definition@@3Vc_simulation_projectile_detonate_event_definition@@A"
// class c_simulation_projectile_impact_effect_event_definition g_simulation_projectile_impact_effect_event_definition; // "?g_simulation_projectile_impact_effect_event_definition@@3Vc_simulation_projectile_impact_effect_event_definition@@A"
// class c_simulation_projectile_object_impact_effect_event_definition g_simulation_projectile_object_impact_effect_event_definition; // "?g_simulation_projectile_object_impact_effect_event_definition@@3Vc_simulation_projectile_object_impact_effect_event_definition@@A"
// class c_simulation_projectile_supercombine_request_event_definition g_simulation_projectile_supercombine_request_event_definition; // "?g_simulation_projectile_supercombine_request_event_definition@@3Vc_simulation_projectile_supercombine_request_event_definition@@A"
// class c_simulation_request_projectile_attach_event_definition g_simulation_request_projectile_attach_event_definition; // "?g_simulation_request_projectile_attach_event_definition@@3Vc_simulation_request_projectile_attach_event_definition@@A"

// public: virtual enum e_simulation_entity_type c_simulation_projectile_entity_definition::entity_type(void);
// public: virtual char const * c_simulation_projectile_entity_definition::entity_type_name(void);
// public: virtual long c_simulation_projectile_entity_definition::state_data_size(void);
// public: virtual long c_simulation_projectile_entity_definition::creation_data_size(void);
// public: virtual long c_simulation_projectile_entity_definition::update_flag_count(void);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_projectile_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_projectile_entity_definition::object_required_to_join_game(long);
// public: virtual void c_simulation_projectile_entity_definition::build_object_creation_data(long, long, void *);
// bool projectile_definition_supports_tethering(long);
// public: virtual bool c_simulation_projectile_entity_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_projectile_entity_definition::handle_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual void c_simulation_projectile_entity_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_projectile_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual long c_simulation_projectile_entity_definition::create_object(long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void const *);
// public: s_projectile_targeting_data::s_projectile_targeting_data(void);
// public: virtual bool c_simulation_projectile_entity_definition::handle_delete_object(long);
// public: virtual void c_simulation_projectile_entity_definition::apply_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual struct s_simulation_object_state_data const * c_simulation_projectile_entity_definition::get_object_state_data(long, long, void const *);
// public: virtual bool c_simulation_projectile_entity_definition::promote_object_to_authority(long);
// public: virtual bool c_simulation_projectile_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_projectile_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_projectile_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_projectile_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual bool c_simulation_projectile_entity_definition::entity_creation_lossy_compare(void *, void *, long);
// public: virtual void c_simulation_projectile_entity_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: static void c_simulation_projectile_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// public: virtual void c_simulation_projectile_entity_definition::evaluate_update_cost(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// public: virtual void c_simulation_projectile_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// public: virtual bool c_simulation_projectile_entity_definition::entity_update_encode(struct s_entity_update_encode_data *);
// public: virtual bool c_simulation_projectile_entity_definition::entity_update_decode(struct s_entity_update_decode_data *);
// public: bool c_simulation_projectile_entity_definition::ensure_object_position_update_quantization_inside_bsp(void);
// public: virtual bool c_simulation_projectile_entity_definition::entity_state_lossy_compare(void *, void *, long);
// public: virtual long c_simulation_projectile_attached_event_definition::payload_size(void);
// public: virtual long c_simulation_projectile_attached_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_projectile_attached_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_projectile_attached_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_projectile_attached_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_projectile_attached_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// void projectile_attached_event_data_encode(struct s_simulation_projectile_attached_event_data const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_projectile_attached_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// bool projectile_attached_event_data_decode(struct s_simulation_projectile_attached_event_data *, class c_bitstream *, bool);
// public: virtual void c_simulation_projectile_attached_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_projectile_attached_event_definition::apply_game_event(long, long const *, long, void const *);
// void projectile_attached_event_data_apply(struct s_simulation_projectile_attached_event_data const *, long, long, bool *);
// public: virtual long c_simulation_projectile_attached_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_detonate_event_definition::payload_size(void);
// public: virtual long c_simulation_projectile_detonate_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_projectile_detonate_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_projectile_detonate_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual float c_simulation_projectile_detonate_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_projectile_detonate_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_projectile_detonate_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_projectile_detonate_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_projectile_detonate_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_projectile_detonate_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_detonate_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_impact_effect_event_definition::payload_size(void);
// public: virtual long c_simulation_projectile_impact_effect_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_projectile_impact_effect_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_projectile_impact_effect_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual float c_simulation_projectile_impact_effect_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_projectile_impact_effect_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_projectile_impact_effect_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_projectile_impact_effect_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_projectile_impact_effect_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_projectile_impact_effect_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_impact_effect_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_object_impact_effect_event_definition::payload_size(void);
// public: virtual long c_simulation_projectile_object_impact_effect_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_projectile_object_impact_effect_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_projectile_object_impact_effect_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_projectile_object_impact_effect_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_projectile_object_impact_effect_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// void projectile_object_impact_effect_event_data_encode(struct s_simulation_projectile_object_impact_effect_event_data const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_projectile_object_impact_effect_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// bool projectile_object_impact_effect_event_data_decode(struct s_simulation_projectile_object_impact_effect_event_data *, class c_bitstream *, bool);
// public: virtual void c_simulation_projectile_object_impact_effect_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_projectile_object_impact_effect_event_definition::apply_game_event(long, long const *, long, void const *);
// void projectile_object_impact_effect_event_data_apply(struct s_simulation_projectile_object_impact_effect_event_data const *, long);
// public: virtual long c_simulation_projectile_object_impact_effect_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_supercombine_request_event_definition::payload_size(void);
// public: virtual long c_simulation_projectile_supercombine_request_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_projectile_supercombine_request_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_projectile_supercombine_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_projectile_supercombine_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_projectile_supercombine_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_projectile_supercombine_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_projectile_supercombine_request_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_projectile_supercombine_request_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_projectile_supercombine_request_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_request_projectile_attach_event_definition::payload_size(void);
// public: virtual long c_simulation_request_projectile_attach_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_request_projectile_attach_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_request_projectile_attach_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_request_projectile_attach_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_request_projectile_attach_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_request_projectile_attach_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_request_projectile_attach_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_request_projectile_attach_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_request_projectile_attach_event_definition::get_player_index(long, long const *, long, void const *);
// public: bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_simulation_projectile_effect_flag) const;
// public: bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::test(enum e_projectile_flags) const;
// public: bool c_flags_no_init<enum e_projectile_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::test(enum e_projectile_definition_flags) const;
// void simulation_object_evaluate_dirty_property_costs_recursive<enum e_simulation_projectile_update_flag, class c_simulation_object_entity_definition, 17, 18>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// void simulation_object_evaluate_dirty_property_costs<class c_simulation_projectile_entity_definition>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, struct s_entity_evaluate_update_outputs *);
// public: void c_bitstream::write_flags<class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_unit_vector_fast<8>(char const *, union vector3d const *);
// public: void c_bitstream::read_flags<class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver> *);
// public: static bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_projectile_effect_flag);
// public: unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_projectile_effect_flag);
// public: static bool c_flags_no_init<enum e_projectile_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::valid_bit(enum e_projectile_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_projectile_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::flag_size_type(enum e_projectile_definition_flags);
// void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_projectile_update_flag, 17, 18>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// enum e_simulation_projectile_update_flag operator++(enum e_simulation_projectile_update_flag &, int);
// long quantize_unit_vector3d_fast<8>(union vector3d const *);
// public: bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const;
// long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 5, 1, 0>(float);
// public: c_simulation_projectile_entity_definition::c_simulation_projectile_entity_definition(void);
// public: c_simulation_projectile_attached_event_definition::c_simulation_projectile_attached_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_projectile_attached_event_definition::event_type(void);
// public: virtual char const * c_simulation_projectile_attached_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_attached_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_attached_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_projectile_detonate_event_definition::c_simulation_projectile_detonate_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_projectile_detonate_event_definition::event_type(void);
// public: virtual char const * c_simulation_projectile_detonate_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_detonate_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_detonate_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_projectile_impact_effect_event_definition::c_simulation_projectile_impact_effect_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_projectile_impact_effect_event_definition::event_type(void);
// public: virtual char const * c_simulation_projectile_impact_effect_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_impact_effect_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_impact_effect_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_projectile_object_impact_effect_event_definition::c_simulation_projectile_object_impact_effect_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_projectile_object_impact_effect_event_definition::event_type(void);
// public: virtual char const * c_simulation_projectile_object_impact_effect_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_object_impact_effect_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_object_impact_effect_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_projectile_supercombine_request_event_definition::c_simulation_projectile_supercombine_request_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_projectile_supercombine_request_event_definition::event_type(void);
// public: virtual char const * c_simulation_projectile_supercombine_request_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_supercombine_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_supercombine_request_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_request_projectile_attach_event_definition::c_simulation_request_projectile_attach_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_request_projectile_attach_event_definition::event_type(void);
// public: virtual char const * c_simulation_request_projectile_attach_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_request_projectile_attach_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_request_projectile_attach_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_projectile_entity_definition::~c_simulation_projectile_entity_definition(void);
// void g_simulation_projectile_entity_definition::`dynamic atexit destructor'(void);

//public: virtual enum e_simulation_entity_type c_simulation_projectile_entity_definition::entity_type(void)
//{
//    mangled_ppc("?entity_type@c_simulation_projectile_entity_definition@@UAA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual char const * c_simulation_projectile_entity_definition::entity_type_name(void)
//{
//    mangled_ppc("?entity_type_name@c_simulation_projectile_entity_definition@@UAAPBDXZ");
//};

//public: virtual long c_simulation_projectile_entity_definition::state_data_size(void)
//{
//    mangled_ppc("?state_data_size@c_simulation_projectile_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_entity_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_projectile_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_entity_definition::update_flag_count(void)
//{
//    mangled_ppc("?update_flag_count@c_simulation_projectile_entity_definition@@UAAJXZ");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_projectile_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_projectile_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_projectile_entity_definition::object_required_to_join_game(long)
//{
//    mangled_ppc("?object_required_to_join_game@c_simulation_projectile_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::build_object_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_object_creation_data@c_simulation_projectile_entity_definition@@UAAXJJPAX@Z");
//};

//bool projectile_definition_supports_tethering(long)
//{
//    mangled_ppc("?projectile_definition_supports_tethering@@YA_NJ@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_projectile_entity_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_projectile_entity_definition::handle_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?handle_object_update@c_simulation_projectile_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JV2@JPAX@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_projectile_entity_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_projectile_entity_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual long c_simulation_projectile_entity_definition::create_object(long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void const *)
//{
//    mangled_ppc("?create_object@c_simulation_projectile_entity_definition@@UAAJJPBXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: s_projectile_targeting_data::s_projectile_targeting_data(void)
//{
//    mangled_ppc("??0s_projectile_targeting_data@@QAA@XZ");
//};

//public: virtual bool c_simulation_projectile_entity_definition::handle_delete_object(long)
//{
//    mangled_ppc("?handle_delete_object@c_simulation_projectile_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::apply_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?apply_object_update@c_simulation_projectile_entity_definition@@UAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual struct s_simulation_object_state_data const * c_simulation_projectile_entity_definition::get_object_state_data(long, long, void const *)
//{
//    mangled_ppc("?get_object_state_data@c_simulation_projectile_entity_definition@@UAAPBUs_simulation_object_state_data@@JJPBX@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::promote_object_to_authority(long)
//{
//    mangled_ppc("?promote_object_to_authority@c_simulation_projectile_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_projectile_entity_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_projectile_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_projectile_entity_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_projectile_entity_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_projectile_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_projectile_entity_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: static void c_simulation_projectile_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_dirty_property_costs@c_simulation_projectile_entity_definition@@SAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::evaluate_update_cost(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_update_cost@c_simulation_projectile_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: virtual void c_simulation_projectile_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_simulation_projectile_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::entity_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?entity_update_encode@c_simulation_projectile_entity_definition@@UAA_NPAUs_entity_update_encode_data@@@Z");
//};

//public: virtual bool c_simulation_projectile_entity_definition::entity_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?entity_update_decode@c_simulation_projectile_entity_definition@@UAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: bool c_simulation_projectile_entity_definition::ensure_object_position_update_quantization_inside_bsp(void)
//{
//    mangled_ppc("?ensure_object_position_update_quantization_inside_bsp@c_simulation_projectile_entity_definition@@QAA_NXZ");
//};

//public: virtual bool c_simulation_projectile_entity_definition::entity_state_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_state_lossy_compare@c_simulation_projectile_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual long c_simulation_projectile_attached_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_projectile_attached_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_attached_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_projectile_attached_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_projectile_attached_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_projectile_attached_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_projectile_attached_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_projectile_attached_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_projectile_attached_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_projectile_attached_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_projectile_attached_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_projectile_attached_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//void projectile_attached_event_data_encode(struct s_simulation_projectile_attached_event_data const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?projectile_attached_event_data_encode@@YAXPBUs_simulation_projectile_attached_event_data@@PAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_projectile_attached_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_projectile_attached_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//bool projectile_attached_event_data_decode(struct s_simulation_projectile_attached_event_data *, class c_bitstream *, bool)
//{
//    mangled_ppc("?projectile_attached_event_data_decode@@YA_NPAUs_simulation_projectile_attached_event_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_projectile_attached_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_projectile_attached_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_projectile_attached_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_projectile_attached_event_definition@@UAAXJPBJJPBX@Z");
//};

//void projectile_attached_event_data_apply(struct s_simulation_projectile_attached_event_data const *, long, long, bool *)
//{
//    mangled_ppc("?projectile_attached_event_data_apply@@YAXPBUs_simulation_projectile_attached_event_data@@JJPA_N@Z");
//};

//public: virtual long c_simulation_projectile_attached_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_projectile_attached_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_detonate_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_projectile_detonate_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_detonate_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_projectile_detonate_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_projectile_detonate_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_projectile_detonate_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_projectile_detonate_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_projectile_detonate_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual float c_simulation_projectile_detonate_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_projectile_detonate_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_projectile_detonate_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_projectile_detonate_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_projectile_detonate_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_projectile_detonate_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_projectile_detonate_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_projectile_detonate_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_projectile_detonate_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_projectile_detonate_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_projectile_detonate_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_projectile_detonate_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_detonate_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_projectile_detonate_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_impact_effect_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_projectile_impact_effect_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_impact_effect_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_projectile_impact_effect_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_projectile_impact_effect_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_projectile_impact_effect_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_projectile_impact_effect_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_projectile_impact_effect_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual float c_simulation_projectile_impact_effect_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_projectile_impact_effect_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_projectile_impact_effect_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_projectile_impact_effect_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_projectile_impact_effect_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_projectile_impact_effect_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_projectile_impact_effect_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_projectile_impact_effect_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_projectile_impact_effect_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_projectile_impact_effect_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_projectile_impact_effect_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_projectile_impact_effect_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_impact_effect_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_projectile_impact_effect_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_object_impact_effect_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_projectile_object_impact_effect_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_object_impact_effect_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_projectile_object_impact_effect_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_projectile_object_impact_effect_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_projectile_object_impact_effect_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_projectile_object_impact_effect_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_projectile_object_impact_effect_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_projectile_object_impact_effect_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_projectile_object_impact_effect_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_projectile_object_impact_effect_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_projectile_object_impact_effect_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//void projectile_object_impact_effect_event_data_encode(struct s_simulation_projectile_object_impact_effect_event_data const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?projectile_object_impact_effect_event_data_encode@@YAXPBUs_simulation_projectile_object_impact_effect_event_data@@PAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_projectile_object_impact_effect_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_projectile_object_impact_effect_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//bool projectile_object_impact_effect_event_data_decode(struct s_simulation_projectile_object_impact_effect_event_data *, class c_bitstream *, bool)
//{
//    mangled_ppc("?projectile_object_impact_effect_event_data_decode@@YA_NPAUs_simulation_projectile_object_impact_effect_event_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_projectile_object_impact_effect_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_projectile_object_impact_effect_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_projectile_object_impact_effect_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_projectile_object_impact_effect_event_definition@@UAAXJPBJJPBX@Z");
//};

//void projectile_object_impact_effect_event_data_apply(struct s_simulation_projectile_object_impact_effect_event_data const *, long)
//{
//    mangled_ppc("?projectile_object_impact_effect_event_data_apply@@YAXPBUs_simulation_projectile_object_impact_effect_event_data@@J@Z");
//};

//public: virtual long c_simulation_projectile_object_impact_effect_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_projectile_object_impact_effect_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_supercombine_request_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_projectile_supercombine_request_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_projectile_supercombine_request_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_projectile_supercombine_request_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_projectile_supercombine_request_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_projectile_supercombine_request_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_projectile_supercombine_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_projectile_supercombine_request_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_projectile_supercombine_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_projectile_supercombine_request_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_projectile_supercombine_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_projectile_supercombine_request_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_projectile_supercombine_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_projectile_supercombine_request_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_projectile_supercombine_request_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_projectile_supercombine_request_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_projectile_supercombine_request_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_projectile_supercombine_request_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_projectile_supercombine_request_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_projectile_supercombine_request_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_request_projectile_attach_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_request_projectile_attach_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_request_projectile_attach_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_request_projectile_attach_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_request_projectile_attach_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_request_projectile_attach_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_request_projectile_attach_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_request_projectile_attach_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_request_projectile_attach_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_request_projectile_attach_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_request_projectile_attach_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_request_projectile_attach_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_request_projectile_attach_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_request_projectile_attach_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_request_projectile_attach_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_request_projectile_attach_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_request_projectile_attach_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_request_projectile_attach_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_request_projectile_attach_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_request_projectile_attach_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_simulation_projectile_effect_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_projectile_effect_flag@@@Z");
//};

//public: bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::test(enum e_projectile_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QBA_NW4e_projectile_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_projectile_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::test(enum e_projectile_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_projectile_definition_flags@@K$0BK@Us_default_enum_string_resolver@@@@QBA_NW4e_projectile_definition_flags@@@Z");
//};

//void simulation_object_evaluate_dirty_property_costs_recursive<enum e_simulation_projectile_update_flag, class c_simulation_object_entity_definition, 17, 18>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_recursive@W4e_simulation_projectile_update_flag@@Vc_simulation_object_entity_definition@@$0BB@$0BC@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//void simulation_object_evaluate_dirty_property_costs<class c_simulation_projectile_entity_definition>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs@Vc_simulation_projectile_entity_definition@@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_unit_vector_fast<8>(char const *, union vector3d const *)
//{
//    mangled_ppc("??$write_unit_vector_fast@$07@c_bitstream@@QAAXPBDPBTvector3d@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_projectile_effect_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_simulation_projectile_effect_flag@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_projectile_effect_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@CAEW4e_simulation_projectile_effect_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_projectile_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::valid_bit(enum e_projectile_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_projectile_definition_flags@@K$0BK@Us_default_enum_string_resolver@@@@SA_NW4e_projectile_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_projectile_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::flag_size_type(enum e_projectile_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_projectile_definition_flags@@K$0BK@Us_default_enum_string_resolver@@@@CAKW4e_projectile_definition_flags@@@Z");
//};

//void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_projectile_update_flag, 17, 18>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_non_recursive@W4e_simulation_projectile_update_flag@@$0BB@$0BC@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//enum e_simulation_projectile_update_flag operator++(enum e_simulation_projectile_update_flag &, int)
//{
//    mangled_ppc("??E@YA?AW4e_simulation_projectile_update_flag@@AAW40@H@Z");
//};

//long quantize_unit_vector3d_fast<8>(union vector3d const *)
//{
//    mangled_ppc("??$quantize_unit_vector3d_fast@$07@@YAJPBTvector3d@@@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 5, 1, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$04$00$0A@@@YAJM@Z");
//};

//public: c_simulation_projectile_entity_definition::c_simulation_projectile_entity_definition(void)
//{
//    mangled_ppc("??0c_simulation_projectile_entity_definition@@QAA@XZ");
//};

//public: c_simulation_projectile_attached_event_definition::c_simulation_projectile_attached_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_projectile_attached_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_projectile_attached_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_projectile_attached_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_projectile_attached_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_projectile_attached_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_attached_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_projectile_attached_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_attached_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_projectile_attached_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_projectile_detonate_event_definition::c_simulation_projectile_detonate_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_projectile_detonate_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_projectile_detonate_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_projectile_detonate_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_projectile_detonate_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_projectile_detonate_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_detonate_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_projectile_detonate_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_detonate_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_projectile_detonate_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_projectile_impact_effect_event_definition::c_simulation_projectile_impact_effect_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_projectile_impact_effect_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_projectile_impact_effect_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_projectile_impact_effect_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_projectile_impact_effect_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_projectile_impact_effect_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_impact_effect_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_projectile_impact_effect_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_impact_effect_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_projectile_impact_effect_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_projectile_object_impact_effect_event_definition::c_simulation_projectile_object_impact_effect_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_projectile_object_impact_effect_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_projectile_object_impact_effect_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_projectile_object_impact_effect_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_projectile_object_impact_effect_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_projectile_object_impact_effect_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_object_impact_effect_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_projectile_object_impact_effect_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_object_impact_effect_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_projectile_object_impact_effect_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_projectile_supercombine_request_event_definition::c_simulation_projectile_supercombine_request_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_projectile_supercombine_request_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_projectile_supercombine_request_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_projectile_supercombine_request_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_projectile_supercombine_request_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_projectile_supercombine_request_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_projectile_supercombine_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_projectile_supercombine_request_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_projectile_supercombine_request_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_projectile_supercombine_request_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_request_projectile_attach_event_definition::c_simulation_request_projectile_attach_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_request_projectile_attach_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_request_projectile_attach_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_request_projectile_attach_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_request_projectile_attach_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_request_projectile_attach_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_request_projectile_attach_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_request_projectile_attach_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_request_projectile_attach_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_request_projectile_attach_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_projectile_entity_definition::~c_simulation_projectile_entity_definition(void)
//{
//    mangled_ppc("??1c_simulation_projectile_entity_definition@@QAA@XZ");
//};

//void g_simulation_projectile_entity_definition::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_projectile_entity_definition@@YAXXZ");
//};

