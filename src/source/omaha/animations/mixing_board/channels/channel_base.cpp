/* ---------- headers */

#include "omaha\animations\mixing_board\channels\channel_base.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver> const k_animation_state_change_zero_flags; // "?k_animation_state_change_zero_flags@@3V?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@B"
// class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const k_animation_playback_zero_flags; // "?k_animation_playback_zero_flags@@3V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@B"
// class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const k_animation_playback_default_flags; // "?k_animation_playback_default_flags@@3V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@B"
// class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const k_animation_playback_default_looping_flags; // "?k_animation_playback_default_looping_flags@@3V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@B"
// class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const k_animation_playback_default_blend_screen_flags; // "?k_animation_playback_default_blend_screen_flags@@3V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@B"
// class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> const k_animation_playback_default_transition_flags; // "?k_animation_playback_default_transition_flags@@3V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@B"

// public: c_channel_base::c_channel_base(void);
// public: c_mixing_board_slider::c_mixing_board_slider(void);
// public: c_channel_base::~c_channel_base(void);
// public: c_mixing_board_slider::~c_mixing_board_slider(void);
// public: void c_channel_base::initialize(void);
// public: void c_mixing_board_slider::initialize(void);
// public: void c_channel_base::reset(void);
// public: class c_model_animation const * c_channel_base::get_animation(void) const;
// public: class c_model_animation * c_channel_base::get_writable_animation(void);
// public: long c_channel_base::get_node_count(void) const;
// public: class c_model_animation_graph const * c_channel_base::get_graph(void) const;
// public: class c_model_animation_graph * c_channel_base::get_writable_graph(void);
// protected: void c_channel_base::set_animation_id(class c_animation_id);
// public: void c_channel_base::append_debug_string(char const *, char const *, char *, int) const;
// public: class c_big_flags_typed_no_init<long, 256> const * c_channel_base::prepare_node_mask_flags(struct render_model_definition const *, long) const;
// public: void c_channel_base::get_base_channel_nodes_moved_by_animation(class c_big_flags_typed_no_init<long, 256> *) const;
// public: bool c_channel_base::animation_allows_interpolation_in(void) const;
// public: bool c_channel_base::animation_allows_interpolation_out(void) const;
// public: bool c_channel_base::animation_allows_transition_adjustments(void) const;
// public: bool c_channel_base::animation_contains_data(enum e_internal_data_type) const;
// public: bool c_channel_base::get_animation_data(class c_animation_data *) const;
// public: void c_channel_base::get_keyframe_translation(float, short, short, union real_point3d *) const;
// protected: void c_channel_base::internal_apply_weighted_node_orientations(class c_animation_id, float, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long, bool);
// public: void c_channel_base::set_parent_slider(long, enum e_mixing_board_parent_slider_type);
// public: long c_channel_base::get_frame_count(void) const;
// public: float c_channel_base::get_authored_duration(void) const;
// public: static float c_channel_base::get_authored_rate(void);
// public: void c_channel_base::get_base_channel_settings(class c_base_channel_settings *) const;
// protected: bool c_channel_base::setup_channel_base(class c_base_channel_settings const *);
// public: t_short_fixed<13>::t_short_fixed<13>(void);
// public: c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_slider_target_positions);
// public: c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_mixing_board_parent_slider_type);
// public: void c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_animation_computation_flags, bool);
// public: static bool c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_computation_flags);
// private: static unsigned long c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_computation_flags);

//public: c_channel_base::c_channel_base(void)
//{
//    mangled_ppc("??0c_channel_base@@QAA@XZ");
//};

//public: c_mixing_board_slider::c_mixing_board_slider(void)
//{
//    mangled_ppc("??0c_mixing_board_slider@@QAA@XZ");
//};

//public: c_channel_base::~c_channel_base(void)
//{
//    mangled_ppc("??1c_channel_base@@QAA@XZ");
//};

//public: c_mixing_board_slider::~c_mixing_board_slider(void)
//{
//    mangled_ppc("??1c_mixing_board_slider@@QAA@XZ");
//};

//public: void c_channel_base::initialize(void)
//{
//    mangled_ppc("?initialize@c_channel_base@@QAAXXZ");
//};

//public: void c_mixing_board_slider::initialize(void)
//{
//    mangled_ppc("?initialize@c_mixing_board_slider@@QAAXXZ");
//};

//public: void c_channel_base::reset(void)
//{
//    mangled_ppc("?reset@c_channel_base@@QAAXXZ");
//};

//public: class c_model_animation const * c_channel_base::get_animation(void) const
//{
//    mangled_ppc("?get_animation@c_channel_base@@QBAPBVc_model_animation@@XZ");
//};

//public: class c_model_animation * c_channel_base::get_writable_animation(void)
//{
//    mangled_ppc("?get_writable_animation@c_channel_base@@QAAPAVc_model_animation@@XZ");
//};

//public: long c_channel_base::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_channel_base@@QBAJXZ");
//};

//public: class c_model_animation_graph const * c_channel_base::get_graph(void) const
//{
//    mangled_ppc("?get_graph@c_channel_base@@QBAPBVc_model_animation_graph@@XZ");
//};

//public: class c_model_animation_graph * c_channel_base::get_writable_graph(void)
//{
//    mangled_ppc("?get_writable_graph@c_channel_base@@QAAPAVc_model_animation_graph@@XZ");
//};

//protected: void c_channel_base::set_animation_id(class c_animation_id)
//{
//    mangled_ppc("?set_animation_id@c_channel_base@@IAAXVc_animation_id@@@Z");
//};

//public: void c_channel_base::append_debug_string(char const *, char const *, char *, int) const
//{
//    mangled_ppc("?append_debug_string@c_channel_base@@QBAXPBD0PADH@Z");
//};

//public: class c_big_flags_typed_no_init<long, 256> const * c_channel_base::prepare_node_mask_flags(struct render_model_definition const *, long) const
//{
//    mangled_ppc("?prepare_node_mask_flags@c_channel_base@@QBAPBV?$c_big_flags_typed_no_init@J$0BAA@@@PBUrender_model_definition@@J@Z");
//};

//public: void c_channel_base::get_base_channel_nodes_moved_by_animation(class c_big_flags_typed_no_init<long, 256> *) const
//{
//    mangled_ppc("?get_base_channel_nodes_moved_by_animation@c_channel_base@@QBAXPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//public: bool c_channel_base::animation_allows_interpolation_in(void) const
//{
//    mangled_ppc("?animation_allows_interpolation_in@c_channel_base@@QBA_NXZ");
//};

//public: bool c_channel_base::animation_allows_interpolation_out(void) const
//{
//    mangled_ppc("?animation_allows_interpolation_out@c_channel_base@@QBA_NXZ");
//};

//public: bool c_channel_base::animation_allows_transition_adjustments(void) const
//{
//    mangled_ppc("?animation_allows_transition_adjustments@c_channel_base@@QBA_NXZ");
//};

//public: bool c_channel_base::animation_contains_data(enum e_internal_data_type) const
//{
//    mangled_ppc("?animation_contains_data@c_channel_base@@QBA_NW4e_internal_data_type@@@Z");
//};

//public: bool c_channel_base::get_animation_data(class c_animation_data *) const
//{
//    mangled_ppc("?get_animation_data@c_channel_base@@QBA_NPAVc_animation_data@@@Z");
//};

//public: void c_channel_base::get_keyframe_translation(float, short, short, union real_point3d *) const
//{
//    mangled_ppc("?get_keyframe_translation@c_channel_base@@QBAXMFFPATreal_point3d@@@Z");
//};

//protected: void c_channel_base::internal_apply_weighted_node_orientations(class c_animation_id, float, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long, bool)
//{
//    mangled_ppc("?internal_apply_weighted_node_orientations@c_channel_base@@IAAXVc_animation_id@@MPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@0PBKM@ZJ_N@Z");
//};

//public: void c_channel_base::set_parent_slider(long, enum e_mixing_board_parent_slider_type)
//{
//    mangled_ppc("?set_parent_slider@c_channel_base@@QAAXJW4e_mixing_board_parent_slider_type@@@Z");
//};

//public: long c_channel_base::get_frame_count(void) const
//{
//    mangled_ppc("?get_frame_count@c_channel_base@@QBAJXZ");
//};

//public: float c_channel_base::get_authored_duration(void) const
//{
//    mangled_ppc("?get_authored_duration@c_channel_base@@QBAMXZ");
//};

//public: static float c_channel_base::get_authored_rate(void)
//{
//    mangled_ppc("?get_authored_rate@c_channel_base@@SAMXZ");
//};

//public: void c_channel_base::get_base_channel_settings(class c_base_channel_settings *) const
//{
//    mangled_ppc("?get_base_channel_settings@c_channel_base@@QBAXPAVc_base_channel_settings@@@Z");
//};

//protected: bool c_channel_base::setup_channel_base(class c_base_channel_settings const *)
//{
//    mangled_ppc("?setup_channel_base@c_channel_base@@IAA_NPBVc_base_channel_settings@@@Z");
//};

//public: t_short_fixed<13>::t_short_fixed<13>(void)
//{
//    mangled_ppc("??0?$t_short_fixed@$0N@@@QAA@XZ");
//};

//public: c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_slider_target_positions@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_slider_target_positions, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_slider_target_positions)
//{
//    mangled_ppc("??0?$c_enum@W4e_slider_target_positions@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_slider_target_positions@@@Z");
//};

//public: c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_mixing_board_parent_slider_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_mixing_board_parent_slider_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_mixing_board_parent_slider_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_mixing_board_parent_slider_type@@@Z");
//};

//public: void c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_animation_computation_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_computation_flags@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_animation_computation_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_animation_computation_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_animation_computation_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_animation_computation_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_computation_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_animation_computation_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_animation_computation_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_animation_computation_flags@@@Z");
//};

