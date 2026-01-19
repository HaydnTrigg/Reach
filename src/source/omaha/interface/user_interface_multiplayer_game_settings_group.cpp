/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_reference_definition g_text_value_pair_reference; // "?g_text_value_pair_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_reference_definition g_multiplayer_variant_settings_interface_reference; // "?g_multiplayer_variant_settings_interface_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_reference_definition g_sandbox_object_properties_interface_reference; // "?g_sandbox_object_properties_interface_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_block_definition text_value_pair_definition_block; // "?text_value_pair_definition_block@@3Us_tag_block_definition@@A"
// struct s_tag_group text_value_pair_definition_group; // "?text_value_pair_definition_group@@3Us_tag_group@@A"
// struct s_tag_block_definition sandbox_text_value_pair_definition_block; // "?sandbox_text_value_pair_definition_block@@3Us_tag_block_definition@@A"
// struct s_tag_group sandbox_text_value_pair_definition_group; // "?sandbox_text_value_pair_definition_group@@3Us_tag_group@@A"
// struct s_tag_block_definition multiplayer_variant_settings_interface_definition_block; // "?multiplayer_variant_settings_interface_definition_block@@3Us_tag_block_definition@@A"
// struct s_tag_group multiplayer_variant_settings_interface_definition_group; // "?multiplayer_variant_settings_interface_definition_group@@3Us_tag_group@@A"
// struct s_tag_group_legacy_vtable legacy_text_value_pair_definition_vtable; // "?legacy_text_value_pair_definition_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_text_value_pair_definition_stream_definition; // "?legacy_text_value_pair_definition_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_text_value_pair_definition_xsync_declaration; // "?legacy_text_value_pair_definition_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// struct s_tag_group_legacy_vtable legacy_sandbox_text_value_pair_definition_vtable; // "?legacy_sandbox_text_value_pair_definition_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_sandbox_text_value_pair_definition_stream_definition; // "?legacy_sandbox_text_value_pair_definition_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_sandbox_text_value_pair_definition_xsync_declaration; // "?legacy_sandbox_text_value_pair_definition_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// struct s_tag_group_legacy_vtable legacy_multiplayer_variant_settings_interface_definition_vtable; // "?legacy_multiplayer_variant_settings_interface_definition_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_multiplayer_variant_settings_interface_definition_stream_definition; // "?legacy_multiplayer_variant_settings_interface_definition_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_multiplayer_variant_settings_interface_definition_xsync_declaration; // "?legacy_multiplayer_variant_settings_interface_definition_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_text_value_pair_definition_vtable_shim; // "?legacy_text_value_pair_definition_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// class c_legacy_tag_group_vtable_shim legacy_sandbox_text_value_pair_definition_vtable_shim; // "?legacy_sandbox_text_value_pair_definition_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// class c_legacy_tag_group_vtable_shim legacy_multiplayer_variant_settings_interface_definition_vtable_shim; // "?legacy_multiplayer_variant_settings_interface_definition_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// struct s_text_value_pair_definition const * text_value_pair_definition_try_and_get(enum e_game_variant_parameter);
// struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_setting(enum e_game_engine_category);
// struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_name(long);
// struct s_multiplayer_variant_settings_interface_definition const * multiplayer_variant_settings_interface_definition_try_and_get_master(void);
// struct s_object_properties_tag_block_definition const * get_sandbox_object_property_values(void);
// struct s_text_value_pair const * text_value_pair_try_and_get_by_index(struct s_text_value_pair_definition const *, short);
// struct s_text_value_pair const * text_value_pair_try_and_get_by_value(struct s_text_value_pair_definition const *, struct s_text_value_pair const *);
// struct s_text_value_pair const * text_value_pair_try_and_get_default(struct s_text_value_pair_definition const *);
// bool set_variant_parameter_value_from_text_value_pair_value(class c_game_variant *, enum e_game_variant_parameter, struct s_text_value_pair const *);
// bool get_text_value_pair_value_from_variant_parameter_value(class c_game_variant const *, enum e_game_variant_parameter, struct s_text_value_pair_definition const *, struct s_text_value_pair *, short *);
// enum e_game_engine_category get_player_trait_category_from_template_category(enum e_game_engine_category, enum e_game_engine_category);
// enum e_game_variant_parameter get_player_trait_parameter_from_template_parameter(enum e_game_engine_category, enum e_game_variant_parameter);
// struct s_text_value_pair_definition const * text_value_pair_definition_try_and_get_recursive(struct s_multiplayer_variant_settings_interface_definition const *, enum e_game_variant_parameter);
// struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_setting_recursive(struct s_multiplayer_variant_settings_interface_definition const *, enum e_game_engine_category);
// struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_name_recursive(struct s_multiplayer_variant_settings_interface_definition const *, long);
// char const * get_game_variant_parameter_string(enum e_game_variant_parameter);
// public: c_enum<enum e_text_value_pair_parameter_type, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_value_pair_parameter_type, char, 0, 3, struct s_default_enum_string_resolver>(enum e_text_value_pair_parameter_type);
// public: enum e_text_value_pair_parameter_type c_enum_no_init<enum e_text_value_pair_parameter_type, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_text_value_pair_parameter_type(void) const;
// public: void c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_text_value_pair_flags) const;
// public: static bool c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_text_value_pair_flags);
// private: static unsigned char c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_text_value_pair_flags);

//struct s_text_value_pair_definition const * text_value_pair_definition_try_and_get(enum e_game_variant_parameter)
//{
//    mangled_ppc("?text_value_pair_definition_try_and_get@@YAPBUs_text_value_pair_definition@@W4e_game_variant_parameter@@@Z");
//};

//struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_setting(enum e_game_engine_category)
//{
//    mangled_ppc("?variant_setting_edit_reference_try_and_get_by_setting@@YAPBUs_variant_setting_edit_reference@@W4e_game_engine_category@@@Z");
//};

//struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_name(long)
//{
//    mangled_ppc("?variant_setting_edit_reference_try_and_get_by_name@@YAPBUs_variant_setting_edit_reference@@J@Z");
//};

//struct s_multiplayer_variant_settings_interface_definition const * multiplayer_variant_settings_interface_definition_try_and_get_master(void)
//{
//    mangled_ppc("?multiplayer_variant_settings_interface_definition_try_and_get_master@@YAPBUs_multiplayer_variant_settings_interface_definition@@XZ");
//};

//struct s_object_properties_tag_block_definition const * get_sandbox_object_property_values(void)
//{
//    mangled_ppc("?get_sandbox_object_property_values@@YAPBUs_object_properties_tag_block_definition@@XZ");
//};

//struct s_text_value_pair const * text_value_pair_try_and_get_by_index(struct s_text_value_pair_definition const *, short)
//{
//    mangled_ppc("?text_value_pair_try_and_get_by_index@@YAPBUs_text_value_pair@@PBUs_text_value_pair_definition@@F@Z");
//};

//struct s_text_value_pair const * text_value_pair_try_and_get_by_value(struct s_text_value_pair_definition const *, struct s_text_value_pair const *)
//{
//    mangled_ppc("?text_value_pair_try_and_get_by_value@@YAPBUs_text_value_pair@@PBUs_text_value_pair_definition@@PBU1@@Z");
//};

//struct s_text_value_pair const * text_value_pair_try_and_get_default(struct s_text_value_pair_definition const *)
//{
//    mangled_ppc("?text_value_pair_try_and_get_default@@YAPBUs_text_value_pair@@PBUs_text_value_pair_definition@@@Z");
//};

//bool set_variant_parameter_value_from_text_value_pair_value(class c_game_variant *, enum e_game_variant_parameter, struct s_text_value_pair const *)
//{
//    mangled_ppc("?set_variant_parameter_value_from_text_value_pair_value@@YA_NPAVc_game_variant@@W4e_game_variant_parameter@@PBUs_text_value_pair@@@Z");
//};

//bool get_text_value_pair_value_from_variant_parameter_value(class c_game_variant const *, enum e_game_variant_parameter, struct s_text_value_pair_definition const *, struct s_text_value_pair *, short *)
//{
//    mangled_ppc("?get_text_value_pair_value_from_variant_parameter_value@@YA_NPBVc_game_variant@@W4e_game_variant_parameter@@PBUs_text_value_pair_definition@@PAUs_text_value_pair@@PAF@Z");
//};

//enum e_game_engine_category get_player_trait_category_from_template_category(enum e_game_engine_category, enum e_game_engine_category)
//{
//    mangled_ppc("?get_player_trait_category_from_template_category@@YA?AW4e_game_engine_category@@W41@0@Z");
//};

//enum e_game_variant_parameter get_player_trait_parameter_from_template_parameter(enum e_game_engine_category, enum e_game_variant_parameter)
//{
//    mangled_ppc("?get_player_trait_parameter_from_template_parameter@@YA?AW4e_game_variant_parameter@@W4e_game_engine_category@@W41@@Z");
//};

//struct s_text_value_pair_definition const * text_value_pair_definition_try_and_get_recursive(struct s_multiplayer_variant_settings_interface_definition const *, enum e_game_variant_parameter)
//{
//    mangled_ppc("?text_value_pair_definition_try_and_get_recursive@@YAPBUs_text_value_pair_definition@@PBUs_multiplayer_variant_settings_interface_definition@@W4e_game_variant_parameter@@@Z");
//};

//struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_setting_recursive(struct s_multiplayer_variant_settings_interface_definition const *, enum e_game_engine_category)
//{
//    mangled_ppc("?variant_setting_edit_reference_try_and_get_by_setting_recursive@@YAPBUs_variant_setting_edit_reference@@PBUs_multiplayer_variant_settings_interface_definition@@W4e_game_engine_category@@@Z");
//};

//struct s_variant_setting_edit_reference const * variant_setting_edit_reference_try_and_get_by_name_recursive(struct s_multiplayer_variant_settings_interface_definition const *, long)
//{
//    mangled_ppc("?variant_setting_edit_reference_try_and_get_by_name_recursive@@YAPBUs_variant_setting_edit_reference@@PBUs_multiplayer_variant_settings_interface_definition@@J@Z");
//};

//char const * get_game_variant_parameter_string(enum e_game_variant_parameter)
//{
//    mangled_ppc("?get_game_variant_parameter_string@@YAPBDW4e_game_variant_parameter@@@Z");
//};

//public: c_enum<enum e_text_value_pair_parameter_type, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_value_pair_parameter_type, char, 0, 3, struct s_default_enum_string_resolver>(enum e_text_value_pair_parameter_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_value_pair_parameter_type@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_text_value_pair_parameter_type@@@Z");
//};

//public: enum e_text_value_pair_parameter_type c_enum_no_init<enum e_text_value_pair_parameter_type, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_text_value_pair_parameter_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_text_value_pair_parameter_type@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_text_value_pair_parameter_type@@XZ");
//};

//public: void c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_text_value_pair_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_text_value_pair_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_text_value_pair_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_text_value_pair_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_text_value_pair_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_text_value_pair_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_text_value_pair_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_text_value_pair_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_text_value_pair_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_text_value_pair_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_text_value_pair_flags@@@Z");
//};

