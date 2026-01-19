/* ---------- headers */

#include "omaha\simulation\game_interface\simulation_map_variant.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_map_variant_palette_flags const c_flags_no_init<enum e_map_variant_palette_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_map_variant_palette_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_map_variant_palette_flags@@B"
// public: static enum e_simulation_map_variant_slot_update const c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@2W4e_simulation_map_variant_slot_update@@B"
// class c_simulation_map_variant_entity_definition g_simulation_map_variant_entity_definition; // "?g_simulation_map_variant_entity_definition@@3Vc_simulation_map_variant_entity_definition@@A"

// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_map_variant_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *);
// public: virtual bool c_simulation_map_variant_entity_definition::promote_game_entity_to_authority(long);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_type_is_gameworld_object(void);
// public: virtual bool c_simulation_map_variant_entity_definition::gameworld_attachment_valid(long);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_map_variant_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_map_variant_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// public: virtual void c_simulation_map_variant_entity_definition::build_creation_data(long, long, void *);
// public: virtual void c_simulation_map_variant_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_map_variant_entity_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_map_variant_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual bool c_simulation_map_variant_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_map_variant_entity_definition::delete_game_entity(long);
// public: virtual void c_simulation_map_variant_entity_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: virtual bool c_simulation_map_variant_entity_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual bool c_simulation_map_variant_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *);
// public: virtual bool c_simulation_map_variant_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_update_encode(struct s_entity_update_encode_data *);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_update_decode(struct s_entity_update_decode_data *);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_state_lossy_compare(void *, void *, long);
// public: virtual bool c_simulation_map_variant_entity_definition::entity_creation_lossy_compare(void *, void *, long);
// public: c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>(unsigned __int64);
// public: c_flags<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>(unsigned long);
// public: class c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::operator<<=(long);
// public: void c_bitstream::write_index<31, long>(char const *, long);
// public: long c_bitstream::read_index<31>(char const *);
// public: struct s_simulation_map_variant_object_state const & s_static_array<struct s_simulation_map_variant_object_state, 21>::operator[]<long>(long) const;
// public: void c_bitstream::write_index<256, short>(char const *, short);
// public: void c_bitstream::write_index<32, short>(char const *, short);
// public: void c_bitstream::write_axes<14, 20>(char const *, union vector3d const *, union vector3d const *);
// public: void c_bitstream::write_index<651, long>(char const *, long);
// public: struct s_simulation_map_variant_object_state & s_static_array<struct s_simulation_map_variant_object_state, 21>::operator[]<long>(long);
// public: void c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_simulation_map_variant_slot_update, bool);
// public: unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: long c_bitstream::read_index<32>(char const *);
// public: void c_bitstream::read_axes<14, 20>(char const *, union vector3d *, union vector3d *);
// public: long c_bitstream::read_index<651>(char const *);
// long required_encoding_bits_for_index<31>(void);
// public: static bool s_static_array<struct s_simulation_map_variant_object_state, 21>::valid<long>(long);
// long required_encoding_bits_for_index<32>(void);
// long quantize_unit_vector3d_fast<20>(union vector3d const *);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 14, 0, 0>(char const *, float);
// long required_encoding_bits_for_index<651>(void);
// public: static bool c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_map_variant_slot_update);
// public: bool c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_map_variant_slot_update);
// long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 417, 1, 0>(float);
// long quantize_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 16384, 0, 0>(float);
// private: static unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_map_variant_slot_update);
// public: c_simulation_map_variant_entity_definition::c_simulation_map_variant_entity_definition(void);
// public: virtual enum e_simulation_entity_type c_simulation_map_variant_entity_definition::entity_type(void);
// public: virtual char const * c_simulation_map_variant_entity_definition::entity_type_name(void);
// public: virtual long c_simulation_map_variant_entity_definition::state_data_size(void);
// public: virtual long c_simulation_map_variant_entity_definition::creation_data_size(void);
// public: virtual long c_simulation_map_variant_entity_definition::update_flag_count(void);
// public: c_simulation_map_variant_entity_definition::~c_simulation_map_variant_entity_definition(void);
// void g_simulation_map_variant_entity_definition::`dynamic atexit destructor'(void);

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_map_variant_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_map_variant_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *)
//{
//    mangled_ppc("?entity_replication_required_for_view_activation@c_simulation_map_variant_entity_definition@@UAA_NPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::promote_game_entity_to_authority(long)
//{
//    mangled_ppc("?promote_game_entity_to_authority@c_simulation_map_variant_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_type_is_gameworld_object(void)
//{
//    mangled_ppc("?entity_type_is_gameworld_object@c_simulation_map_variant_entity_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::gameworld_attachment_valid(long)
//{
//    mangled_ppc("?gameworld_attachment_valid@c_simulation_map_variant_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_map_variant_entity_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_map_variant_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_simulation_map_variant_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::build_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_creation_data@c_simulation_map_variant_entity_definition@@UAAXJJPAX@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_map_variant_entity_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_map_variant_entity_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_map_variant_entity_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_map_variant_entity_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?create_game_entity@c_simulation_map_variant_entity_definition@@UAA_NJJPBXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::delete_game_entity(long)
//{
//    mangled_ppc("?delete_game_entity@c_simulation_map_variant_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_map_variant_entity_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_map_variant_entity_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_map_variant_entity_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *)
//{
//    mangled_ppc("?build_updated_state_data@c_simulation_map_variant_entity_definition@@UAA_NPBUs_simulation_entity@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?update_game_entity@c_simulation_map_variant_entity_definition@@UAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?entity_update_encode@c_simulation_map_variant_entity_definition@@UAA_NPAUs_entity_update_encode_data@@@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?entity_update_decode@c_simulation_map_variant_entity_definition@@UAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_state_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_state_lossy_compare@c_simulation_map_variant_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual bool c_simulation_map_variant_entity_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_map_variant_entity_definition@@UAA_NPAX0J@Z");
//};

//public: c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>(unsigned __int64)
//{
//    mangled_ppc("??0?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@QAA@_K@Z");
//};

//public: c_flags<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: class c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::operator<<=(long)
//{
//    mangled_ppc("??_3?$c_flags_no_init@J_K$0EA@Us_default_enum_string_resolver@@@@QAAAAV0@J@Z");
//};

//public: void c_bitstream::write_index<31, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0BP@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_index<31>(char const *)
//{
//    mangled_ppc("??$read_index@$0BP@@c_bitstream@@QAAJPBD@Z");
//};

//public: struct s_simulation_map_variant_object_state const & s_static_array<struct s_simulation_map_variant_object_state, 21>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_simulation_map_variant_object_state@@$0BF@@@QBAABUs_simulation_map_variant_object_state@@J@Z");
//};

//public: void c_bitstream::write_index<256, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0BAA@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::write_index<32, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0CA@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::write_axes<14, 20>(char const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("??$write_axes@$0O@$0BE@@c_bitstream@@QAAXPBDPBTvector3d@@1@Z");
//};

//public: void c_bitstream::write_index<651, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0CIL@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: struct s_simulation_map_variant_object_state & s_static_array<struct s_simulation_map_variant_object_state, 21>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_simulation_map_variant_object_state@@$0BF@@@QAAAAUs_simulation_map_variant_object_state@@J@Z");
//};

//public: void c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_simulation_map_variant_slot_update, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_simulation_map_variant_slot_update@@_N@Z");
//};

//public: unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: long c_bitstream::read_index<32>(char const *)
//{
//    mangled_ppc("??$read_index@$0CA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::read_axes<14, 20>(char const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("??$read_axes@$0O@$0BE@@c_bitstream@@QAAXPBDPATvector3d@@1@Z");
//};

//public: long c_bitstream::read_index<651>(char const *)
//{
//    mangled_ppc("??$read_index@$0CIL@@c_bitstream@@QAAJPBD@Z");
//};

//long required_encoding_bits_for_index<31>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0BP@@@YAJXZ");
//};

//public: static bool s_static_array<struct s_simulation_map_variant_object_state, 21>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_simulation_map_variant_object_state@@$0BF@@@SA_NJ@Z");
//};

//long required_encoding_bits_for_index<32>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0CA@@@YAJXZ");
//};

//long quantize_unit_vector3d_fast<20>(union vector3d const *)
//{
//    mangled_ppc("??$quantize_unit_vector3d_fast@$0BE@@@YAJPBTvector3d@@@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 14, 0, 0>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@U?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@$0O@$0A@$0A@@c_bitstream@@QAAXPBDM@Z");
//};

//long required_encoding_bits_for_index<651>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0CIL@@@YAJXZ");
//};

//public: static bool c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_map_variant_slot_update)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_simulation_map_variant_slot_update@@@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_map_variant_slot_update)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@CAKW4e_simulation_map_variant_slot_update@@@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 417, 1, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$0BKB@$00$0A@@@YAJM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 16384, 0, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@U?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@$0EAAA@$0A@$0A@@@YAJM@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_simulation_map_variant_slot_update, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_map_variant_slot_update)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_simulation_map_variant_slot_update@@K$02Us_default_enum_string_resolver@@@@CAKW4e_simulation_map_variant_slot_update@@@Z");
//};

//public: c_simulation_map_variant_entity_definition::c_simulation_map_variant_entity_definition(void)
//{
//    mangled_ppc("??0c_simulation_map_variant_entity_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_entity_type c_simulation_map_variant_entity_definition::entity_type(void)
//{
//    mangled_ppc("?entity_type@c_simulation_map_variant_entity_definition@@UAA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual char const * c_simulation_map_variant_entity_definition::entity_type_name(void)
//{
//    mangled_ppc("?entity_type_name@c_simulation_map_variant_entity_definition@@UAAPBDXZ");
//};

//public: virtual long c_simulation_map_variant_entity_definition::state_data_size(void)
//{
//    mangled_ppc("?state_data_size@c_simulation_map_variant_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_map_variant_entity_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_map_variant_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_map_variant_entity_definition::update_flag_count(void)
//{
//    mangled_ppc("?update_flag_count@c_simulation_map_variant_entity_definition@@UAAJXZ");
//};

//public: c_simulation_map_variant_entity_definition::~c_simulation_map_variant_entity_definition(void)
//{
//    mangled_ppc("??1c_simulation_map_variant_entity_definition@@QAA@XZ");
//};

//void g_simulation_map_variant_entity_definition::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_map_variant_entity_definition@@YAXXZ");
//};

