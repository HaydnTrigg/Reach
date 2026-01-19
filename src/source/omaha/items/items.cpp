/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool item_new(long, struct s_object_placement_data *, bool *);
// void item_maintain_z_up(long);
// bool item_update(long);
// void item_update_ignore_object_index(long);
// void item_move(long);
// void item_attach_to_marker(long, long, long, long);
// void item_attach_to_node(long, long, short);
// void item_detach(long);
// bool dangerous_items_near_player(long *);
// void item_set_inventory_ownership(long, long);
// void item_fix_position(long);
// struct s_grounded_friction_definition * item_get_grounded_friction_definition(long);
// void item_multiplayer_at_rest_state_initialize(long);
// void item_update_player_inventory(long);
// void item_hide_inventory(long);
// void item_stow_inventory(long, long, long, long);
// void item_show_inventory_unattached(long, long);
// void item_show_inventory(long, long, long, long);
// void item_unstow_inventory(long, long, long, long);
// bool item_in_hand(long);
// bool item_stowed(long);
// void item_accelerate(long, union vector3d const *, bool);
// void item_notify_acceleration(long, union vector3d const *);
// void item_detonate(long);
// void item_get_position_even_if_in_inventory(long, union real_point3d *);
// void item_mark_relevance(long);
// void item_adjust_scale_and_variant(long, long);
// public: bool c_flags_no_init<enum e_item_definition_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_item_definition_flags) const;
// public: static bool c_flags_no_init<enum e_item_definition_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_item_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_item_definition_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_item_definition_flags);

//bool item_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?item_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void item_maintain_z_up(long)
//{
//    mangled_ppc("?item_maintain_z_up@@YAXJ@Z");
//};

//bool item_update(long)
//{
//    mangled_ppc("?item_update@@YA_NJ@Z");
//};

//void item_update_ignore_object_index(long)
//{
//    mangled_ppc("?item_update_ignore_object_index@@YAXJ@Z");
//};

//void item_move(long)
//{
//    mangled_ppc("?item_move@@YAXJ@Z");
//};

//void item_attach_to_marker(long, long, long, long)
//{
//    mangled_ppc("?item_attach_to_marker@@YAXJJJJ@Z");
//};

//void item_attach_to_node(long, long, short)
//{
//    mangled_ppc("?item_attach_to_node@@YAXJJF@Z");
//};

//void item_detach(long)
//{
//    mangled_ppc("?item_detach@@YAXJ@Z");
//};

//bool dangerous_items_near_player(long *)
//{
//    mangled_ppc("?dangerous_items_near_player@@YA_NPAJ@Z");
//};

//void item_set_inventory_ownership(long, long)
//{
//    mangled_ppc("?item_set_inventory_ownership@@YAXJJ@Z");
//};

//void item_fix_position(long)
//{
//    mangled_ppc("?item_fix_position@@YAXJ@Z");
//};

//struct s_grounded_friction_definition * item_get_grounded_friction_definition(long)
//{
//    mangled_ppc("?item_get_grounded_friction_definition@@YAPAUs_grounded_friction_definition@@J@Z");
//};

//void item_multiplayer_at_rest_state_initialize(long)
//{
//    mangled_ppc("?item_multiplayer_at_rest_state_initialize@@YAXJ@Z");
//};

//void item_update_player_inventory(long)
//{
//    mangled_ppc("?item_update_player_inventory@@YAXJ@Z");
//};

//void item_hide_inventory(long)
//{
//    mangled_ppc("?item_hide_inventory@@YAXJ@Z");
//};

//void item_stow_inventory(long, long, long, long)
//{
//    mangled_ppc("?item_stow_inventory@@YAXJJJJ@Z");
//};

//void item_show_inventory_unattached(long, long)
//{
//    mangled_ppc("?item_show_inventory_unattached@@YAXJJ@Z");
//};

//void item_show_inventory(long, long, long, long)
//{
//    mangled_ppc("?item_show_inventory@@YAXJJJJ@Z");
//};

//void item_unstow_inventory(long, long, long, long)
//{
//    mangled_ppc("?item_unstow_inventory@@YAXJJJJ@Z");
//};

//bool item_in_hand(long)
//{
//    mangled_ppc("?item_in_hand@@YA_NJ@Z");
//};

//bool item_stowed(long)
//{
//    mangled_ppc("?item_stowed@@YA_NJ@Z");
//};

//void item_accelerate(long, union vector3d const *, bool)
//{
//    mangled_ppc("?item_accelerate@@YAXJPBTvector3d@@_N@Z");
//};

//void item_notify_acceleration(long, union vector3d const *)
//{
//    mangled_ppc("?item_notify_acceleration@@YAXJPBTvector3d@@@Z");
//};

//void item_detonate(long)
//{
//    mangled_ppc("?item_detonate@@YAXJ@Z");
//};

//void item_get_position_even_if_in_inventory(long, union real_point3d *)
//{
//    mangled_ppc("?item_get_position_even_if_in_inventory@@YAXJPATreal_point3d@@@Z");
//};

//void item_mark_relevance(long)
//{
//    mangled_ppc("?item_mark_relevance@@YAXJ@Z");
//};

//void item_adjust_scale_and_variant(long, long)
//{
//    mangled_ppc("?item_adjust_scale_and_variant@@YAXJJ@Z");
//};

//public: bool c_flags_no_init<enum e_item_definition_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_item_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_item_definition_flags@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_item_definition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_item_definition_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_item_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_item_definition_flags@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_item_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_item_definition_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_item_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_item_definition_flags@@K$00Us_default_enum_string_resolver@@@@CAKW4e_item_definition_flags@@@Z");
//};

