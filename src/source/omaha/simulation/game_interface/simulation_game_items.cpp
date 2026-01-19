/* ---------- headers */

#include "omaha\simulation\game_interface\simulation_game_items.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_simulation_item_entity_definition g_simulation_item_entity_definition; // "?g_simulation_item_entity_definition@@3Vc_simulation_item_entity_definition@@A"

// public: virtual enum e_simulation_entity_type c_simulation_item_entity_definition::entity_type(void);
// public: virtual char const * c_simulation_item_entity_definition::entity_type_name(void);
// public: virtual long c_simulation_item_entity_definition::state_data_size(void);
// public: virtual long c_simulation_item_entity_definition::creation_data_size(void);
// public: virtual long c_simulation_item_entity_definition::update_flag_count(void);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_item_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_item_entity_definition::object_required_to_join_game(long);
// public: virtual void c_simulation_item_entity_definition::build_object_creation_data(long, long, void *);
// public: virtual bool c_simulation_item_entity_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_item_entity_definition::handle_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: long c_animation_manager::get_state_name(void) const;
// public: virtual void c_simulation_item_entity_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_item_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual long c_simulation_item_entity_definition::create_object(long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void const *);
// public: virtual bool c_simulation_item_entity_definition::handle_delete_object(long);
// public: virtual void c_simulation_item_entity_definition::apply_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual struct s_simulation_object_state_data const * c_simulation_item_entity_definition::get_object_state_data(long, long, void const *);
// public: virtual bool c_simulation_item_entity_definition::promote_object_to_authority(long);
// public: virtual bool c_simulation_item_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_item_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_item_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_item_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual bool c_simulation_item_entity_definition::entity_creation_lossy_compare(void *, void *, long);
// public: virtual void c_simulation_item_entity_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: static void c_simulation_item_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// public: virtual void c_simulation_item_entity_definition::evaluate_update_cost(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// public: virtual void c_simulation_item_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// public: virtual bool c_simulation_item_entity_definition::entity_update_encode(struct s_entity_update_encode_data *);
// public: virtual bool c_simulation_item_entity_definition::entity_update_decode(struct s_entity_update_decode_data *);
// public: virtual bool c_simulation_item_entity_definition::entity_state_lossy_compare(void *, void *, long);
// protected: void c_simulation_item_entity_definition::item_rotate_entity_index(struct s_simulation_entity const *, struct s_simulation_item_creation_data const *, struct s_simulation_item_state_data *);
// protected: bool c_simulation_item_entity_definition::item_update_encode(struct s_entity_update_encode_data *);
// protected: bool c_simulation_item_entity_definition::item_update_decode(struct s_entity_update_decode_data *);
// public: bool c_simulation_item_entity_definition::ensure_object_position_update_quantization_inside_bsp(void);
// void encode_equipment_energy(class c_bitstream *, float);
// float decode_equipment_energy(class c_bitstream *);
// bool compare_quantized_equipment_energy(float, float);
// public: c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>(unsigned short);
// public: void c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// void simulation_object_evaluate_dirty_property_costs_recursive<enum e_simulation_item_update_flag, class c_simulation_object_entity_definition, 17, 22>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// void simulation_object_evaluate_dirty_property_costs<class c_simulation_item_entity_definition>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, struct s_entity_evaluate_update_outputs *);
// public: bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const;
// void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_item_update_flag, 17, 22>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// enum e_simulation_item_update_flag operator++(enum e_simulation_item_update_flag &, int);
// private: static unsigned short c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_state_change_flags);
// void g_simulation_item_entity_definition::`dynamic atexit destructor'(void);

//public: virtual enum e_simulation_entity_type c_simulation_item_entity_definition::entity_type(void)
//{
//    mangled_ppc("?entity_type@c_simulation_item_entity_definition@@UAA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual char const * c_simulation_item_entity_definition::entity_type_name(void)
//{
//    mangled_ppc("?entity_type_name@c_simulation_item_entity_definition@@UAAPBDXZ");
//};

//public: virtual long c_simulation_item_entity_definition::state_data_size(void)
//{
//    mangled_ppc("?state_data_size@c_simulation_item_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_item_entity_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_item_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_item_entity_definition::update_flag_count(void)
//{
//    mangled_ppc("?update_flag_count@c_simulation_item_entity_definition@@UAAJXZ");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_item_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_item_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_item_entity_definition::object_required_to_join_game(long)
//{
//    mangled_ppc("?object_required_to_join_game@c_simulation_item_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_item_entity_definition::build_object_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_object_creation_data@c_simulation_item_entity_definition@@UAAXJJPAX@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_item_entity_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_item_entity_definition::handle_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?handle_object_update@c_simulation_item_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JV2@JPAX@Z");
//};

//public: long c_animation_manager::get_state_name(void) const
//{
//    mangled_ppc("?get_state_name@c_animation_manager@@QBAJXZ");
//};

//public: virtual void c_simulation_item_entity_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_item_entity_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_item_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_item_entity_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual long c_simulation_item_entity_definition::create_object(long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void const *)
//{
//    mangled_ppc("?create_object@c_simulation_item_entity_definition@@UAAJJPBXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::handle_delete_object(long)
//{
//    mangled_ppc("?handle_delete_object@c_simulation_item_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_item_entity_definition::apply_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?apply_object_update@c_simulation_item_entity_definition@@UAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual struct s_simulation_object_state_data const * c_simulation_item_entity_definition::get_object_state_data(long, long, void const *)
//{
//    mangled_ppc("?get_object_state_data@c_simulation_item_entity_definition@@UAAPBUs_simulation_object_state_data@@JJPBX@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::promote_object_to_authority(long)
//{
//    mangled_ppc("?promote_object_to_authority@c_simulation_item_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_item_entity_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_item_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_item_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_item_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_item_entity_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_item_entity_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_item_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual void c_simulation_item_entity_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_item_entity_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: static void c_simulation_item_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_dirty_property_costs@c_simulation_item_entity_definition@@SAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: virtual void c_simulation_item_entity_definition::evaluate_update_cost(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_update_cost@c_simulation_item_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: virtual void c_simulation_item_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_simulation_item_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::entity_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?entity_update_encode@c_simulation_item_entity_definition@@UAA_NPAUs_entity_update_encode_data@@@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::entity_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?entity_update_decode@c_simulation_item_entity_definition@@UAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: virtual bool c_simulation_item_entity_definition::entity_state_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_state_lossy_compare@c_simulation_item_entity_definition@@UAA_NPAX0J@Z");
//};

//protected: void c_simulation_item_entity_definition::item_rotate_entity_index(struct s_simulation_entity const *, struct s_simulation_item_creation_data const *, struct s_simulation_item_state_data *)
//{
//    mangled_ppc("?item_rotate_entity_index@c_simulation_item_entity_definition@@IAAXPBUs_simulation_entity@@PBUs_simulation_item_creation_data@@PAUs_simulation_item_state_data@@@Z");
//};

//protected: bool c_simulation_item_entity_definition::item_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?item_update_encode@c_simulation_item_entity_definition@@IAA_NPAUs_entity_update_encode_data@@@Z");
//};

//protected: bool c_simulation_item_entity_definition::item_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?item_update_decode@c_simulation_item_entity_definition@@IAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: bool c_simulation_item_entity_definition::ensure_object_position_update_quantization_inside_bsp(void)
//{
//    mangled_ppc("?ensure_object_position_update_quantization_inside_bsp@c_simulation_item_entity_definition@@QAA_NXZ");
//};

//void encode_equipment_energy(class c_bitstream *, float)
//{
//    mangled_ppc("?encode_equipment_energy@@YAXPAVc_bitstream@@M@Z");
//};

//float decode_equipment_energy(class c_bitstream *)
//{
//    mangled_ppc("?decode_equipment_energy@@YAMPAVc_bitstream@@@Z");
//};

//bool compare_quantized_equipment_energy(float, float)
//{
//    mangled_ppc("?compare_quantized_equipment_energy@@YA_NMM@Z");
//};

//public: c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>(unsigned short)
//{
//    mangled_ppc("??0?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAA@G@Z");
//};

//public: void c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//void simulation_object_evaluate_dirty_property_costs_recursive<enum e_simulation_item_update_flag, class c_simulation_object_entity_definition, 17, 22>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_recursive@W4e_simulation_item_update_flag@@Vc_simulation_object_entity_definition@@$0BB@$0BG@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//void simulation_object_evaluate_dirty_property_costs<class c_simulation_item_entity_definition>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs@Vc_simulation_item_entity_definition@@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_item_update_flag, 17, 22>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_non_recursive@W4e_simulation_item_update_flag@@$0BB@$0BG@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//enum e_simulation_item_update_flag operator++(enum e_simulation_item_update_flag &, int)
//{
//    mangled_ppc("??E@YA?AW4e_simulation_item_update_flag@@AAW40@H@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_state_change_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@CAGW4e_animation_state_change_flags@@@Z");
//};

//void g_simulation_item_entity_definition::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_item_entity_definition@@YAXXZ");
//};

