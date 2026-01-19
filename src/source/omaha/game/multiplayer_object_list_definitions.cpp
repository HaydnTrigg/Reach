/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_reference_definition global_multiplayer_object_type_list_reference; // "?global_multiplayer_object_type_list_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_block_definition multiplayer_object_type_list_block; // "?multiplayer_object_type_list_block@@3Us_tag_block_definition@@A"
// struct s_tag_group multiplayer_object_type_list_group; // "?multiplayer_object_type_list_group@@3Us_tag_group@@A"
// struct s_tag_group_legacy_vtable legacy_multiplayer_object_type_list_vtable; // "?legacy_multiplayer_object_type_list_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_multiplayer_object_type_list_stream_definition; // "?legacy_multiplayer_object_type_list_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_multiplayer_object_type_list_xsync_declaration; // "?legacy_multiplayer_object_type_list_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class c_legacy_tag_group_vtable_shim legacy_multiplayer_object_type_list_vtable_shim; // "?legacy_multiplayer_object_type_list_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"

// public: long s_multiplayer_object_type_list::get_total_object_type_count(void) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_object_type_index_by_name(long) const;
// public: struct s_multiplayer_object_type const * s_multiplayer_object_type_list::find_multiplayer_object_type_by_name(long) const;
// public: struct s_multiplayer_object_type const * s_multiplayer_object_type_list::get_multiplayer_object_type(long) const;
// public: struct s_multiplayer_object_type * s_multiplayer_object_type_list::get_multiplayer_object_type(long);
// public: long s_multiplayer_object_type_list::get_multiplayer_weapon_count(void) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::get_multiplayer_weapon(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_weapon_index_by_name(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_weapon_absolute_index_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_weapon_name_by_tag_index(long) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_weapon_object_collection_entry_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_weapon_loadout_menu_sprite_frame_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::get_multiplayer_vehicle_count(void) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::get_multiplayer_vehicle(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_index_by_name(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_absolute_index_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_name_by_tag_index(long) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_vehicle_object_collection_entry_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_loadout_menu_sprite_frame_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_grenade_name_by_tag_index(long) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_grenade_object_collection_entry_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_grenade_loadout_menu_sprite_frame_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::get_multiplayer_equipment_count(void) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::get_multiplayer_equipment(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_equipment_index_by_name(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_equipment_absolute_index_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_equipment_name_by_tag_index(long) const;
// public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_equipment_object_collection_entry_by_tag_index(long) const;
// public: long s_multiplayer_object_type_list::find_multiplayer_equipment_loadout_menu_sprite_frame_by_tag_index(long) const;
// struct s_multiplayer_object_type_list const * try_and_get_global_multiplayer_object_type_list(void);
// long multiplayer_get_weapon_set_index_by_name(long);
// long multiplayer_get_weapon_set_name(long);
// long multiplayer_get_vehicle_set_index_by_name(long);
// long multiplayer_get_vehicle_set_name(long);
// long multiplayer_remap_weapon_definition_index(long, long);
// long multiplayer_remap_vehicle_definition_index(long, long);
// void multiplayer_object_type_list_dump_bitvector_for_scenario(void);
// bool multiplayer_object_type_list_verify_mapinfo_for_scenario(void);
// long find_multiplayer_object_collection_entry_index_by_name(struct s_tag_block const *, struct s_tag_block const *, long);
// long find_multiplayer_object_absolute_index_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long);
// long find_multiplayer_object_name_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long);
// struct s_multiplayer_object_collection_entry const * find_multiplayer_object_collection_entry_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long);
// long find_multiplayer_object_loadout_menu_sprite_frame_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long);
// long get_remap_table_index_by_name(long, struct s_tag_block const *, char const *);
// long find_multiplayer_object_remap_table_by_name(struct s_tag_block const *, long);
// long get_special_remap_table_index_by_name(long);
// long get_remap_table_name(long, struct s_tag_block const *);
// long remap_object_definition_index(long, struct s_tag_block const *, long, struct s_tag_block const *, struct s_tag_block const *);
// long get_random_object_definition_index_from_collection(struct s_tag_block const *, struct s_tag_block const *);
// long remap_object_definition_index_with_table(long, struct s_multiplayer_object_remap_table const *, struct s_tag_block const *, struct s_tag_block const *);
// void resolve_multiplayer_object_type_list_references(struct s_multiplayer_object_type_list *, bool);
// bool resolve_multiplayer_weapon_collection_block(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *);
// bool resolve_multiplayer_vehicle_collection_block(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *);
// bool block_definition_can_match_multiplayer_object_collection_block(struct s_tag_field const *, struct s_tag_block_definition const *);

//public: long s_multiplayer_object_type_list::get_total_object_type_count(void) const
//{
//    mangled_ppc("?get_total_object_type_count@s_multiplayer_object_type_list@@QBAJXZ");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_object_type_index_by_name(long) const
//{
//    mangled_ppc("?find_multiplayer_object_type_index_by_name@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: struct s_multiplayer_object_type const * s_multiplayer_object_type_list::find_multiplayer_object_type_by_name(long) const
//{
//    mangled_ppc("?find_multiplayer_object_type_by_name@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_type@@J@Z");
//};

//public: struct s_multiplayer_object_type const * s_multiplayer_object_type_list::get_multiplayer_object_type(long) const
//{
//    mangled_ppc("?get_multiplayer_object_type@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_type@@J@Z");
//};

//public: struct s_multiplayer_object_type * s_multiplayer_object_type_list::get_multiplayer_object_type(long)
//{
//    mangled_ppc("?get_multiplayer_object_type@s_multiplayer_object_type_list@@QAAPAUs_multiplayer_object_type@@J@Z");
//};

//public: long s_multiplayer_object_type_list::get_multiplayer_weapon_count(void) const
//{
//    mangled_ppc("?get_multiplayer_weapon_count@s_multiplayer_object_type_list@@QBAJXZ");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::get_multiplayer_weapon(long) const
//{
//    mangled_ppc("?get_multiplayer_weapon@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_weapon_index_by_name(long) const
//{
//    mangled_ppc("?find_multiplayer_weapon_index_by_name@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_weapon_absolute_index_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_weapon_absolute_index_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_weapon_name_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_weapon_name_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_weapon_object_collection_entry_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_weapon_object_collection_entry_by_tag_index@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_weapon_loadout_menu_sprite_frame_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_weapon_loadout_menu_sprite_frame_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::get_multiplayer_vehicle_count(void) const
//{
//    mangled_ppc("?get_multiplayer_vehicle_count@s_multiplayer_object_type_list@@QBAJXZ");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::get_multiplayer_vehicle(long) const
//{
//    mangled_ppc("?get_multiplayer_vehicle@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_index_by_name(long) const
//{
//    mangled_ppc("?find_multiplayer_vehicle_index_by_name@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_absolute_index_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_vehicle_absolute_index_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_name_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_vehicle_name_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_vehicle_object_collection_entry_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_vehicle_object_collection_entry_by_tag_index@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_vehicle_loadout_menu_sprite_frame_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_vehicle_loadout_menu_sprite_frame_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_grenade_name_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_grenade_name_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_grenade_object_collection_entry_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_grenade_object_collection_entry_by_tag_index@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_grenade_loadout_menu_sprite_frame_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_grenade_loadout_menu_sprite_frame_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::get_multiplayer_equipment_count(void) const
//{
//    mangled_ppc("?get_multiplayer_equipment_count@s_multiplayer_object_type_list@@QBAJXZ");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::get_multiplayer_equipment(long) const
//{
//    mangled_ppc("?get_multiplayer_equipment@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_equipment_index_by_name(long) const
//{
//    mangled_ppc("?find_multiplayer_equipment_index_by_name@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_equipment_absolute_index_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_equipment_absolute_index_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_equipment_name_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_equipment_name_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//public: struct s_multiplayer_object_collection_entry const * s_multiplayer_object_type_list::find_multiplayer_equipment_object_collection_entry_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_equipment_object_collection_entry_by_tag_index@s_multiplayer_object_type_list@@QBAPBUs_multiplayer_object_collection_entry@@J@Z");
//};

//public: long s_multiplayer_object_type_list::find_multiplayer_equipment_loadout_menu_sprite_frame_by_tag_index(long) const
//{
//    mangled_ppc("?find_multiplayer_equipment_loadout_menu_sprite_frame_by_tag_index@s_multiplayer_object_type_list@@QBAJJ@Z");
//};

//struct s_multiplayer_object_type_list const * try_and_get_global_multiplayer_object_type_list(void)
//{
//    mangled_ppc("?try_and_get_global_multiplayer_object_type_list@@YAPBUs_multiplayer_object_type_list@@XZ");
//};

//long multiplayer_get_weapon_set_index_by_name(long)
//{
//    mangled_ppc("?multiplayer_get_weapon_set_index_by_name@@YAJJ@Z");
//};

//long multiplayer_get_weapon_set_name(long)
//{
//    mangled_ppc("?multiplayer_get_weapon_set_name@@YAJJ@Z");
//};

//long multiplayer_get_vehicle_set_index_by_name(long)
//{
//    mangled_ppc("?multiplayer_get_vehicle_set_index_by_name@@YAJJ@Z");
//};

//long multiplayer_get_vehicle_set_name(long)
//{
//    mangled_ppc("?multiplayer_get_vehicle_set_name@@YAJJ@Z");
//};

//long multiplayer_remap_weapon_definition_index(long, long)
//{
//    mangled_ppc("?multiplayer_remap_weapon_definition_index@@YAJJJ@Z");
//};

//long multiplayer_remap_vehicle_definition_index(long, long)
//{
//    mangled_ppc("?multiplayer_remap_vehicle_definition_index@@YAJJJ@Z");
//};

//void multiplayer_object_type_list_dump_bitvector_for_scenario(void)
//{
//    mangled_ppc("?multiplayer_object_type_list_dump_bitvector_for_scenario@@YAXXZ");
//};

//bool multiplayer_object_type_list_verify_mapinfo_for_scenario(void)
//{
//    mangled_ppc("?multiplayer_object_type_list_verify_mapinfo_for_scenario@@YA_NXZ");
//};

//long find_multiplayer_object_collection_entry_index_by_name(struct s_tag_block const *, struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_multiplayer_object_collection_entry_index_by_name@@YAJPBUs_tag_block@@0J@Z");
//};

//long find_multiplayer_object_absolute_index_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_multiplayer_object_absolute_index_by_tag_index@@YAJPBUs_tag_block@@0J@Z");
//};

//long find_multiplayer_object_name_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_multiplayer_object_name_by_tag_index@@YAJPBUs_tag_block@@0J@Z");
//};

//struct s_multiplayer_object_collection_entry const * find_multiplayer_object_collection_entry_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_multiplayer_object_collection_entry_by_tag_index@@YAPBUs_multiplayer_object_collection_entry@@PBUs_tag_block@@0J@Z");
//};

//long find_multiplayer_object_loadout_menu_sprite_frame_by_tag_index(struct s_tag_block const *, struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_multiplayer_object_loadout_menu_sprite_frame_by_tag_index@@YAJPBUs_tag_block@@0J@Z");
//};

//long get_remap_table_index_by_name(long, struct s_tag_block const *, char const *)
//{
//    mangled_ppc("?get_remap_table_index_by_name@@YAJJPBUs_tag_block@@PBD@Z");
//};

//long find_multiplayer_object_remap_table_by_name(struct s_tag_block const *, long)
//{
//    mangled_ppc("?find_multiplayer_object_remap_table_by_name@@YAJPBUs_tag_block@@J@Z");
//};

//long get_special_remap_table_index_by_name(long)
//{
//    mangled_ppc("?get_special_remap_table_index_by_name@@YAJJ@Z");
//};

//long get_remap_table_name(long, struct s_tag_block const *)
//{
//    mangled_ppc("?get_remap_table_name@@YAJJPBUs_tag_block@@@Z");
//};

//long remap_object_definition_index(long, struct s_tag_block const *, long, struct s_tag_block const *, struct s_tag_block const *)
//{
//    mangled_ppc("?remap_object_definition_index@@YAJJPBUs_tag_block@@J00@Z");
//};

//long get_random_object_definition_index_from_collection(struct s_tag_block const *, struct s_tag_block const *)
//{
//    mangled_ppc("?get_random_object_definition_index_from_collection@@YAJPBUs_tag_block@@0@Z");
//};

//long remap_object_definition_index_with_table(long, struct s_multiplayer_object_remap_table const *, struct s_tag_block const *, struct s_tag_block const *)
//{
//    mangled_ppc("?remap_object_definition_index_with_table@@YAJJPBUs_multiplayer_object_remap_table@@PBUs_tag_block@@1@Z");
//};

//void resolve_multiplayer_object_type_list_references(struct s_multiplayer_object_type_list *, bool)
//{
//    mangled_ppc("?resolve_multiplayer_object_type_list_references@@YAXPAUs_multiplayer_object_type_list@@_N@Z");
//};

//bool resolve_multiplayer_weapon_collection_block(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *)
//{
//    mangled_ppc("?resolve_multiplayer_weapon_collection_block@@YA_NJPBUs_tag_field@@PBX1_JPAUs_tag_block_resolve_custom_result@@@Z");
//};

//bool resolve_multiplayer_vehicle_collection_block(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *)
//{
//    mangled_ppc("?resolve_multiplayer_vehicle_collection_block@@YA_NJPBUs_tag_field@@PBX1_JPAUs_tag_block_resolve_custom_result@@@Z");
//};

//bool block_definition_can_match_multiplayer_object_collection_block(struct s_tag_field const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?block_definition_can_match_multiplayer_object_collection_block@@YA_NPBUs_tag_field@@PBUs_tag_block_definition@@@Z");
//};

