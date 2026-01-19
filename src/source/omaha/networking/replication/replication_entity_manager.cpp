/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_replication_entity_manager::c_replication_entity_manager(void);
// public: s_static_array<struct s_replication_entity_data, 1024>::s_static_array<struct s_replication_entity_data, 1024>(void);
// public: s_replication_entity_data::s_replication_entity_data(void);
// public: c_replication_entity_manager::~c_replication_entity_manager(void);
// public: void c_replication_entity_manager::initialize(void);
// public: void c_replication_entity_manager::reset(void);
// public: void c_replication_entity_manager::destroy(void);
// public: void c_replication_entity_manager::attach_client(class c_simulation_entity_database *);
// public: void c_replication_entity_manager::detach_client(class c_simulation_entity_database const *);
// public: long c_replication_entity_manager::create_local_entity(enum e_simulation_entity_type);
// public: void c_replication_entity_manager::delete_local_entity(long);
// private: void c_replication_entity_manager::notify_delete_remote_entity(long, bool);
// private: void c_replication_entity_manager::notify_creation_sent(long);
// public: void c_replication_entity_manager::set_entity_dirty(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// public: void c_replication_entity_manager::register_view(long, class c_replication_entity_manager_view *);
// public: void c_replication_entity_manager::deregister_view(long);
// private: void c_replication_entity_manager::write_update_description_to_string(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, unsigned long, void const *, long, char *);
// public: void c_replication_entity_manager::validate(void) const;
// public: void c_replication_entity_manager::dump_state(void) const;
// private: void c_replication_entity_manager::acknowledge_entity_deletion(long, long, bool);
// public: void c_replication_entity_manager::make_all_local(void);
// public: static unsigned char c_replication_entity_manager::rotate_seed(unsigned char);
// public: static unsigned long c_replication_entity_manager::rotate_nonce(unsigned long);
// public: long c_replication_entity_manager::rotate_entity_index(long);
// private: long c_replication_entity_manager::find_slot_for_creation(enum e_simulation_entity_type);
// private: long c_replication_entity_manager::preallocate_entity(enum e_simulation_entity_type);
// private: long c_replication_entity_manager::create_local_entity_internal(long);
// private: void c_replication_entity_manager::create_remote_entity_internal(long, unsigned long);
// private: void c_replication_entity_manager::delete_entity_internal(long);
// public: static long s_static_array<struct s_replication_entity_data, 1024>::get_count(void);
// public: void s_static_array<struct s_replication_entity_data, 1024>::set_memory(long);
// public: void c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_replication_entity_flags, bool);
// public: class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_flag(enum e_replication_entity_flags);
// public: unsigned char c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_replication_entity_flags);

//public: c_replication_entity_manager::c_replication_entity_manager(void)
//{
//    mangled_ppc("??0c_replication_entity_manager@@QAA@XZ");
//};

//public: s_static_array<struct s_replication_entity_data, 1024>::s_static_array<struct s_replication_entity_data, 1024>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_replication_entity_data@@$0EAA@@@QAA@XZ");
//};

//public: s_replication_entity_data::s_replication_entity_data(void)
//{
//    mangled_ppc("??0s_replication_entity_data@@QAA@XZ");
//};

//public: c_replication_entity_manager::~c_replication_entity_manager(void)
//{
//    mangled_ppc("??1c_replication_entity_manager@@QAA@XZ");
//};

//public: void c_replication_entity_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_replication_entity_manager@@QAAXXZ");
//};

//public: void c_replication_entity_manager::reset(void)
//{
//    mangled_ppc("?reset@c_replication_entity_manager@@QAAXXZ");
//};

//public: void c_replication_entity_manager::destroy(void)
//{
//    mangled_ppc("?destroy@c_replication_entity_manager@@QAAXXZ");
//};

//public: void c_replication_entity_manager::attach_client(class c_simulation_entity_database *)
//{
//    mangled_ppc("?attach_client@c_replication_entity_manager@@QAAXPAVc_simulation_entity_database@@@Z");
//};

//public: void c_replication_entity_manager::detach_client(class c_simulation_entity_database const *)
//{
//    mangled_ppc("?detach_client@c_replication_entity_manager@@QAAXPBVc_simulation_entity_database@@@Z");
//};

//public: long c_replication_entity_manager::create_local_entity(enum e_simulation_entity_type)
//{
//    mangled_ppc("?create_local_entity@c_replication_entity_manager@@QAAJW4e_simulation_entity_type@@@Z");
//};

//public: void c_replication_entity_manager::delete_local_entity(long)
//{
//    mangled_ppc("?delete_local_entity@c_replication_entity_manager@@QAAXJ@Z");
//};

//private: void c_replication_entity_manager::notify_delete_remote_entity(long, bool)
//{
//    mangled_ppc("?notify_delete_remote_entity@c_replication_entity_manager@@AAAXJ_N@Z");
//};

//private: void c_replication_entity_manager::notify_creation_sent(long)
//{
//    mangled_ppc("?notify_creation_sent@c_replication_entity_manager@@AAAXJ@Z");
//};

//public: void c_replication_entity_manager::set_entity_dirty(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_entity_dirty@c_replication_entity_manager@@QAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_replication_entity_manager::register_view(long, class c_replication_entity_manager_view *)
//{
//    mangled_ppc("?register_view@c_replication_entity_manager@@QAAXJPAVc_replication_entity_manager_view@@@Z");
//};

//public: void c_replication_entity_manager::deregister_view(long)
//{
//    mangled_ppc("?deregister_view@c_replication_entity_manager@@QAAXJ@Z");
//};

//private: void c_replication_entity_manager::write_update_description_to_string(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, unsigned long, void const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_replication_entity_manager@@AAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@KPBXJPAD@Z");
//};

//public: void c_replication_entity_manager::validate(void) const
//{
//    mangled_ppc("?validate@c_replication_entity_manager@@QBAXXZ");
//};

//public: void c_replication_entity_manager::dump_state(void) const
//{
//    mangled_ppc("?dump_state@c_replication_entity_manager@@QBAXXZ");
//};

//private: void c_replication_entity_manager::acknowledge_entity_deletion(long, long, bool)
//{
//    mangled_ppc("?acknowledge_entity_deletion@c_replication_entity_manager@@AAAXJJ_N@Z");
//};

//public: void c_replication_entity_manager::make_all_local(void)
//{
//    mangled_ppc("?make_all_local@c_replication_entity_manager@@QAAXXZ");
//};

//public: static unsigned char c_replication_entity_manager::rotate_seed(unsigned char)
//{
//    mangled_ppc("?rotate_seed@c_replication_entity_manager@@SAEE@Z");
//};

//public: static unsigned long c_replication_entity_manager::rotate_nonce(unsigned long)
//{
//    mangled_ppc("?rotate_nonce@c_replication_entity_manager@@SAKK@Z");
//};

//public: long c_replication_entity_manager::rotate_entity_index(long)
//{
//    mangled_ppc("?rotate_entity_index@c_replication_entity_manager@@QAAJJ@Z");
//};

//private: long c_replication_entity_manager::find_slot_for_creation(enum e_simulation_entity_type)
//{
//    mangled_ppc("?find_slot_for_creation@c_replication_entity_manager@@AAAJW4e_simulation_entity_type@@@Z");
//};

//private: long c_replication_entity_manager::preallocate_entity(enum e_simulation_entity_type)
//{
//    mangled_ppc("?preallocate_entity@c_replication_entity_manager@@AAAJW4e_simulation_entity_type@@@Z");
//};

//private: long c_replication_entity_manager::create_local_entity_internal(long)
//{
//    mangled_ppc("?create_local_entity_internal@c_replication_entity_manager@@AAAJJ@Z");
//};

//private: void c_replication_entity_manager::create_remote_entity_internal(long, unsigned long)
//{
//    mangled_ppc("?create_remote_entity_internal@c_replication_entity_manager@@AAAXJK@Z");
//};

//private: void c_replication_entity_manager::delete_entity_internal(long)
//{
//    mangled_ppc("?delete_entity_internal@c_replication_entity_manager@@AAAXJ@Z");
//};

//public: static long s_static_array<struct s_replication_entity_data, 1024>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_replication_entity_data@@$0EAA@@@SAJXZ");
//};

//public: void s_static_array<struct s_replication_entity_data, 1024>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_replication_entity_data@@$0EAA@@@QAAXJ@Z");
//};

//public: void c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_replication_entity_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_replication_entity_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??U?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_flag(enum e_replication_entity_flags)
//{
//    mangled_ppc("?make_flag@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@SA?AV1@W4e_replication_entity_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: c_flags<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: bool c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_replication_entity_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_replication_entity_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_replication_entity_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_replication_entity_flags@@@Z");
//};

