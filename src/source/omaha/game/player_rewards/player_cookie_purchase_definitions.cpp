/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_block_definition cookie_purchase_definition_block; // "?cookie_purchase_definition_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition cookie_purchase_definition_block_struct_definition; // "?cookie_purchase_definition_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition cookie_purchase_globals_block; // "?cookie_purchase_globals_block@@3Us_tag_block_definition@@A"
// struct s_tag_group_legacy_vtable legacy_cookie_purchase_globals_vtable; // "?legacy_cookie_purchase_globals_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group cookie_purchase_globals_group; // "?cookie_purchase_globals_group@@3Us_tag_group@@A"
// struct s_tag_group_stream_definition legacy_cookie_purchase_globals_stream_definition; // "?legacy_cookie_purchase_globals_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_cookie_purchase_globals_xsync_declaration; // "?legacy_cookie_purchase_globals_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_cookie_purchase_globals_vtable_shim; // "?legacy_cookie_purchase_globals_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// long cookie_purchase_get_top_level_item_count_in_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// struct s_purchasable_item_handle cookie_purchase_get_top_level_item_handle(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, long);
// public: s_purchasable_item_handle::s_purchasable_item_handle(void);
// long cookie_purchase_get_family_count_in_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// struct s_purchasable_family_handle cookie_purchase_get_family_handle(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, long);
// public: s_purchasable_family_handle::s_purchasable_family_handle(void);
// struct s_purchasable_item_handle cookie_purchase_get_family_item_handle(struct s_purchasable_family_handle, long);
// long cookie_purchase_get_global_item_count(void);
// struct s_cookie_purchase_definition const * cookie_purchase_global_item_get_definition(long);
// struct s_cookie_purchase_family_definition const * cookie_purchase_family_get_definition(struct s_purchasable_family_handle);
// long cookie_purchase_get_family_item_count(struct s_purchasable_family_handle);
// struct s_cookie_purchase_definition const * cookie_purchase_item_get_definition(struct s_purchasable_item_handle);
// long cookie_purchase_item_get_absolute_index(struct s_purchasable_item_handle);
// unsigned long cookie_purchase_definition_generate_checksum(void);
// long cookie_purchase_get_string_id_for_purchase_category(enum e_purchase_category);
// bool cookie_purchase_item_unlocked_by_dlc(unsigned long, long);
// bool cookie_purchase_item_can_be_unlocked_by_dlc(long);
// bool cookie_purchase_item_unlocked_by_waypoint(unsigned long, long);
// public: bool s_purchasable_item_handle::operator==(struct s_purchasable_item_handle const &) const;
// public: bool s_purchasable_item_handle::is_valid(void);
// public: void s_purchasable_item_handle::set_invalid(void);
// public: bool s_purchasable_family_handle::operator==(struct s_purchasable_family_handle const &) const;
// public: bool s_purchasable_family_handle::is_valid(void);
// public: void s_purchasable_family_handle::set_invalid(void);
// struct s_cookie_purchase_globals_definition const * cookie_purchase_globals_try_and_get(void);
// long find_unnamed_family_index(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// struct s_purchasable_family_handle find_unnamed_family(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// struct s_purchasable_family_handle build_family_handle(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, long);
// struct s_purchasable_family_handle build_family_handle_from_item_handle(struct s_purchasable_item_handle);
// long cookie_purchase_get_family_count_in_category_internal(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// bool is_external_unlockable_item_unlocked(struct s_tag_block const *, unsigned long, long);
// bool is_item_externally_unlockable(struct s_tag_block const *, long);
// bool cookie_purchase_globals_postprocess(long, bool);
// public: c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(enum e_purchase_category);
// public: enum e_purchase_category c_enum_no_init<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::operator enum e_purchase_category(void) const;
// public: bool c_enum_no_init<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::operator==(enum e_purchase_category) const;
// public: bool c_enum_no_init<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::in_range(void) const;

//long cookie_purchase_get_top_level_item_count_in_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?cookie_purchase_get_top_level_item_count_in_category@@YAJV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//struct s_purchasable_item_handle cookie_purchase_get_top_level_item_handle(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, long)
//{
//    mangled_ppc("?cookie_purchase_get_top_level_item_handle@@YA?AUs_purchasable_item_handle@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: s_purchasable_item_handle::s_purchasable_item_handle(void)
//{
//    mangled_ppc("??0s_purchasable_item_handle@@QAA@XZ");
//};

//long cookie_purchase_get_family_count_in_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?cookie_purchase_get_family_count_in_category@@YAJV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//struct s_purchasable_family_handle cookie_purchase_get_family_handle(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, long)
//{
//    mangled_ppc("?cookie_purchase_get_family_handle@@YA?AUs_purchasable_family_handle@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: s_purchasable_family_handle::s_purchasable_family_handle(void)
//{
//    mangled_ppc("??0s_purchasable_family_handle@@QAA@XZ");
//};

//struct s_purchasable_item_handle cookie_purchase_get_family_item_handle(struct s_purchasable_family_handle, long)
//{
//    mangled_ppc("?cookie_purchase_get_family_item_handle@@YA?AUs_purchasable_item_handle@@Us_purchasable_family_handle@@J@Z");
//};

//long cookie_purchase_get_global_item_count(void)
//{
//    mangled_ppc("?cookie_purchase_get_global_item_count@@YAJXZ");
//};

//struct s_cookie_purchase_definition const * cookie_purchase_global_item_get_definition(long)
//{
//    mangled_ppc("?cookie_purchase_global_item_get_definition@@YAPBUs_cookie_purchase_definition@@J@Z");
//};

//struct s_cookie_purchase_family_definition const * cookie_purchase_family_get_definition(struct s_purchasable_family_handle)
//{
//    mangled_ppc("?cookie_purchase_family_get_definition@@YAPBUs_cookie_purchase_family_definition@@Us_purchasable_family_handle@@@Z");
//};

//long cookie_purchase_get_family_item_count(struct s_purchasable_family_handle)
//{
//    mangled_ppc("?cookie_purchase_get_family_item_count@@YAJUs_purchasable_family_handle@@@Z");
//};

//struct s_cookie_purchase_definition const * cookie_purchase_item_get_definition(struct s_purchasable_item_handle)
//{
//    mangled_ppc("?cookie_purchase_item_get_definition@@YAPBUs_cookie_purchase_definition@@Us_purchasable_item_handle@@@Z");
//};

//long cookie_purchase_item_get_absolute_index(struct s_purchasable_item_handle)
//{
//    mangled_ppc("?cookie_purchase_item_get_absolute_index@@YAJUs_purchasable_item_handle@@@Z");
//};

//unsigned long cookie_purchase_definition_generate_checksum(void)
//{
//    mangled_ppc("?cookie_purchase_definition_generate_checksum@@YAKXZ");
//};

//long cookie_purchase_get_string_id_for_purchase_category(enum e_purchase_category)
//{
//    mangled_ppc("?cookie_purchase_get_string_id_for_purchase_category@@YAJW4e_purchase_category@@@Z");
//};

//bool cookie_purchase_item_unlocked_by_dlc(unsigned long, long)
//{
//    mangled_ppc("?cookie_purchase_item_unlocked_by_dlc@@YA_NKJ@Z");
//};

//bool cookie_purchase_item_can_be_unlocked_by_dlc(long)
//{
//    mangled_ppc("?cookie_purchase_item_can_be_unlocked_by_dlc@@YA_NJ@Z");
//};

//bool cookie_purchase_item_unlocked_by_waypoint(unsigned long, long)
//{
//    mangled_ppc("?cookie_purchase_item_unlocked_by_waypoint@@YA_NKJ@Z");
//};

//public: bool s_purchasable_item_handle::operator==(struct s_purchasable_item_handle const &) const
//{
//    mangled_ppc("??8s_purchasable_item_handle@@QBA_NABU0@@Z");
//};

//public: bool s_purchasable_item_handle::is_valid(void)
//{
//    mangled_ppc("?is_valid@s_purchasable_item_handle@@QAA_NXZ");
//};

//public: void s_purchasable_item_handle::set_invalid(void)
//{
//    mangled_ppc("?set_invalid@s_purchasable_item_handle@@QAAXXZ");
//};

//public: bool s_purchasable_family_handle::operator==(struct s_purchasable_family_handle const &) const
//{
//    mangled_ppc("??8s_purchasable_family_handle@@QBA_NABU0@@Z");
//};

//public: bool s_purchasable_family_handle::is_valid(void)
//{
//    mangled_ppc("?is_valid@s_purchasable_family_handle@@QAA_NXZ");
//};

//public: void s_purchasable_family_handle::set_invalid(void)
//{
//    mangled_ppc("?set_invalid@s_purchasable_family_handle@@QAAXXZ");
//};

//struct s_cookie_purchase_globals_definition const * cookie_purchase_globals_try_and_get(void)
//{
//    mangled_ppc("?cookie_purchase_globals_try_and_get@@YAPBUs_cookie_purchase_globals_definition@@XZ");
//};

//long find_unnamed_family_index(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?find_unnamed_family_index@@YAJV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//struct s_purchasable_family_handle find_unnamed_family(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?find_unnamed_family@@YA?AUs_purchasable_family_handle@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//struct s_purchasable_family_handle build_family_handle(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, long)
//{
//    mangled_ppc("?build_family_handle@@YA?AUs_purchasable_family_handle@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@J@Z");
//};

//struct s_purchasable_family_handle build_family_handle_from_item_handle(struct s_purchasable_item_handle)
//{
//    mangled_ppc("?build_family_handle_from_item_handle@@YA?AUs_purchasable_family_handle@@Us_purchasable_item_handle@@@Z");
//};

//long cookie_purchase_get_family_count_in_category_internal(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?cookie_purchase_get_family_count_in_category_internal@@YAJV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//bool is_external_unlockable_item_unlocked(struct s_tag_block const *, unsigned long, long)
//{
//    mangled_ppc("?is_external_unlockable_item_unlocked@@YA_NPBUs_tag_block@@KJ@Z");
//};

//bool is_item_externally_unlockable(struct s_tag_block const *, long)
//{
//    mangled_ppc("?is_item_externally_unlockable@@YA_NPBUs_tag_block@@J@Z");
//};

//bool cookie_purchase_globals_postprocess(long, bool)
//{
//    mangled_ppc("?cookie_purchase_globals_postprocess@@YA_NJ_N@Z");
//};

//public: c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(enum e_purchase_category)
//{
//    mangled_ppc("??0?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@QAA@W4e_purchase_category@@@Z");
//};

//public: enum e_purchase_category c_enum_no_init<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::operator enum e_purchase_category(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@QBA?AW4e_purchase_category@@XZ");
//};

//public: bool c_enum_no_init<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::operator==(enum e_purchase_category) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@QBA_NW4e_purchase_category@@@Z");
//};

//public: bool c_enum_no_init<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

