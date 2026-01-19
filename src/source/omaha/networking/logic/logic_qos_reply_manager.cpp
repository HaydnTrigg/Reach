/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_live_service_qos_manager_flags const c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_live_service_qos_manager_flags@@B"

// void logic_qos_reply_manager_initialize(void);
// void logic_qos_reply_manager_dispose(void);
// void logic_qos_reply_manager_update(void);
// bool logic_qos_reply_manager_session_data_set_for_group(struct s_transport_secure_identifier const *);
// void logic_qos_reply_manager_get_status(class c_static_string<256> *);
// public: void c_live_service_qos_manager::initialize(void);
// public: void c_live_service_qos_manager::dispose(void);
// public: void c_live_service_qos_manager::update(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: static bool c_live_service_qos_manager::connected_to_live(void);
// bool network_qos_original_qos_complete(void);
// public: bool c_live_service_qos_manager::original_qos_complete(void) const;
// bool network_qos_get_live_service_qos(struct s_transport_qos_result *);
// public: bool c_live_service_qos_manager::get_live_service_qos(struct s_transport_qos_result *) const;
// public: void c_session_qos_reply_manager::initialize(void);
// public: void c_session_qos_reply_manager::dispose(void);
// public: void c_session_qos_reply_manager::update(void);
// public: void c_session_qos_reply_manager::get_status(class c_static_string<256> *);
// private: static long c_session_qos_reply_manager::get_qos_reply_block(struct s_network_session_status_data const *, long, unsigned char *);
// public: long c_bitstream::get_potential_space_used_in_bits(void) const;
// public: bool c_bitstream::potentially_overflowed(void) const;
// protected: virtual bool c_squad_session_qos_reply_manager::get_session_id(struct s_transport_secure_identifier *);
// protected: virtual enum e_qos_reply_mode c_squad_session_qos_reply_manager::get_qos_reply_mode(void);
// protected: virtual bool c_squad_session_qos_reply_manager::qos_data_available(void);
// protected: virtual long c_squad_session_qos_reply_manager::get_qos_reply_bandwidth_limit(void);
// protected: virtual bool c_squad_session_qos_reply_manager::get_qos_data(struct s_network_session_status_data *);
// protected: virtual bool c_posse_session_qos_reply_manager::get_session_id(struct s_transport_secure_identifier *);
// protected: virtual enum e_qos_reply_mode c_posse_session_qos_reply_manager::get_qos_reply_mode(void);
// protected: virtual bool c_posse_session_qos_reply_manager::qos_data_available(void);
// protected: virtual long c_posse_session_qos_reply_manager::get_qos_reply_bandwidth_limit(void);
// protected: virtual bool c_posse_session_qos_reply_manager::get_qos_data(struct s_network_session_status_data *);
// public: bool c_group_session_qos_reply_manager::qos_data_set_for_session(struct s_transport_secure_identifier const *);
// protected: virtual bool c_group_session_qos_reply_manager::get_session_id(struct s_transport_secure_identifier *);
// protected: virtual enum e_qos_reply_mode c_group_session_qos_reply_manager::get_qos_reply_mode(void);
// protected: virtual bool c_group_session_qos_reply_manager::qos_data_available(void);
// protected: virtual long c_group_session_qos_reply_manager::get_qos_reply_bandwidth_limit(void);
// protected: virtual bool c_group_session_qos_reply_manager::get_qos_data(struct s_network_session_status_data *);
// public: void c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_live_service_qos_manager_flags) const;
// public: void c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_live_service_qos_manager_flags, bool);
// public: static bool c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_live_service_qos_manager_flags);
// private: static unsigned char c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_live_service_qos_manager_flags);
// public: s_logic_qos_reply_manager_globals::s_logic_qos_reply_manager_globals(void);
// public: c_live_service_qos_manager::c_live_service_qos_manager(void);
// public: c_squad_session_qos_reply_manager::c_squad_session_qos_reply_manager(void);
// public: c_posse_session_qos_reply_manager::c_posse_session_qos_reply_manager(void);
// public: c_group_session_qos_reply_manager::c_group_session_qos_reply_manager(void);
// public: c_session_qos_reply_manager::c_session_qos_reply_manager(void);
// public: c_flags<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_live_service_qos_manager_flags);

//void logic_qos_reply_manager_initialize(void)
//{
//    mangled_ppc("?logic_qos_reply_manager_initialize@@YAXXZ");
//};

//void logic_qos_reply_manager_dispose(void)
//{
//    mangled_ppc("?logic_qos_reply_manager_dispose@@YAXXZ");
//};

//void logic_qos_reply_manager_update(void)
//{
//    mangled_ppc("?logic_qos_reply_manager_update@@YAXXZ");
//};

//bool logic_qos_reply_manager_session_data_set_for_group(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?logic_qos_reply_manager_session_data_set_for_group@@YA_NPBUs_transport_secure_identifier@@@Z");
//};

//void logic_qos_reply_manager_get_status(class c_static_string<256> *)
//{
//    mangled_ppc("?logic_qos_reply_manager_get_status@@YAXPAV?$c_static_string@$0BAA@@@@Z");
//};

//public: void c_live_service_qos_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_live_service_qos_manager@@QAAXXZ");
//};

//public: void c_live_service_qos_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_live_service_qos_manager@@QAAXXZ");
//};

//public: void c_live_service_qos_manager::update(void)
//{
//    mangled_ppc("?update@c_live_service_qos_manager@@QAAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: static bool c_live_service_qos_manager::connected_to_live(void)
//{
//    mangled_ppc("?connected_to_live@c_live_service_qos_manager@@CA_NXZ");
//};

//bool network_qos_original_qos_complete(void)
//{
//    mangled_ppc("?network_qos_original_qos_complete@@YA_NXZ");
//};

//public: bool c_live_service_qos_manager::original_qos_complete(void) const
//{
//    mangled_ppc("?original_qos_complete@c_live_service_qos_manager@@QBA_NXZ");
//};

//bool network_qos_get_live_service_qos(struct s_transport_qos_result *)
//{
//    mangled_ppc("?network_qos_get_live_service_qos@@YA_NPAUs_transport_qos_result@@@Z");
//};

//public: bool c_live_service_qos_manager::get_live_service_qos(struct s_transport_qos_result *) const
//{
//    mangled_ppc("?get_live_service_qos@c_live_service_qos_manager@@QBA_NPAUs_transport_qos_result@@@Z");
//};

//public: void c_session_qos_reply_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_session_qos_reply_manager@@QAAXXZ");
//};

//public: void c_session_qos_reply_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_session_qos_reply_manager@@QAAXXZ");
//};

//public: void c_session_qos_reply_manager::update(void)
//{
//    mangled_ppc("?update@c_session_qos_reply_manager@@QAAXXZ");
//};

//public: void c_session_qos_reply_manager::get_status(class c_static_string<256> *)
//{
//    mangled_ppc("?get_status@c_session_qos_reply_manager@@QAAXPAV?$c_static_string@$0BAA@@@@Z");
//};

//private: static long c_session_qos_reply_manager::get_qos_reply_block(struct s_network_session_status_data const *, long, unsigned char *)
//{
//    mangled_ppc("?get_qos_reply_block@c_session_qos_reply_manager@@CAJPBUs_network_session_status_data@@JPAE@Z");
//};

//public: long c_bitstream::get_potential_space_used_in_bits(void) const
//{
//    mangled_ppc("?get_potential_space_used_in_bits@c_bitstream@@QBAJXZ");
//};

//public: bool c_bitstream::potentially_overflowed(void) const
//{
//    mangled_ppc("?potentially_overflowed@c_bitstream@@QBA_NXZ");
//};

//protected: virtual bool c_squad_session_qos_reply_manager::get_session_id(struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?get_session_id@c_squad_session_qos_reply_manager@@MAA_NPAUs_transport_secure_identifier@@@Z");
//};

//protected: virtual enum e_qos_reply_mode c_squad_session_qos_reply_manager::get_qos_reply_mode(void)
//{
//    mangled_ppc("?get_qos_reply_mode@c_squad_session_qos_reply_manager@@MAA?AW4e_qos_reply_mode@@XZ");
//};

//protected: virtual bool c_squad_session_qos_reply_manager::qos_data_available(void)
//{
//    mangled_ppc("?qos_data_available@c_squad_session_qos_reply_manager@@MAA_NXZ");
//};

//protected: virtual long c_squad_session_qos_reply_manager::get_qos_reply_bandwidth_limit(void)
//{
//    mangled_ppc("?get_qos_reply_bandwidth_limit@c_squad_session_qos_reply_manager@@MAAJXZ");
//};

//protected: virtual bool c_squad_session_qos_reply_manager::get_qos_data(struct s_network_session_status_data *)
//{
//    mangled_ppc("?get_qos_data@c_squad_session_qos_reply_manager@@MAA_NPAUs_network_session_status_data@@@Z");
//};

//protected: virtual bool c_posse_session_qos_reply_manager::get_session_id(struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?get_session_id@c_posse_session_qos_reply_manager@@MAA_NPAUs_transport_secure_identifier@@@Z");
//};

//protected: virtual enum e_qos_reply_mode c_posse_session_qos_reply_manager::get_qos_reply_mode(void)
//{
//    mangled_ppc("?get_qos_reply_mode@c_posse_session_qos_reply_manager@@MAA?AW4e_qos_reply_mode@@XZ");
//};

//protected: virtual bool c_posse_session_qos_reply_manager::qos_data_available(void)
//{
//    mangled_ppc("?qos_data_available@c_posse_session_qos_reply_manager@@MAA_NXZ");
//};

//protected: virtual long c_posse_session_qos_reply_manager::get_qos_reply_bandwidth_limit(void)
//{
//    mangled_ppc("?get_qos_reply_bandwidth_limit@c_posse_session_qos_reply_manager@@MAAJXZ");
//};

//protected: virtual bool c_posse_session_qos_reply_manager::get_qos_data(struct s_network_session_status_data *)
//{
//    mangled_ppc("?get_qos_data@c_posse_session_qos_reply_manager@@MAA_NPAUs_network_session_status_data@@@Z");
//};

//public: bool c_group_session_qos_reply_manager::qos_data_set_for_session(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?qos_data_set_for_session@c_group_session_qos_reply_manager@@QAA_NPBUs_transport_secure_identifier@@@Z");
//};

//protected: virtual bool c_group_session_qos_reply_manager::get_session_id(struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?get_session_id@c_group_session_qos_reply_manager@@MAA_NPAUs_transport_secure_identifier@@@Z");
//};

//protected: virtual enum e_qos_reply_mode c_group_session_qos_reply_manager::get_qos_reply_mode(void)
//{
//    mangled_ppc("?get_qos_reply_mode@c_group_session_qos_reply_manager@@MAA?AW4e_qos_reply_mode@@XZ");
//};

//protected: virtual bool c_group_session_qos_reply_manager::qos_data_available(void)
//{
//    mangled_ppc("?qos_data_available@c_group_session_qos_reply_manager@@MAA_NXZ");
//};

//protected: virtual long c_group_session_qos_reply_manager::get_qos_reply_bandwidth_limit(void)
//{
//    mangled_ppc("?get_qos_reply_bandwidth_limit@c_group_session_qos_reply_manager@@MAAJXZ");
//};

//protected: virtual bool c_group_session_qos_reply_manager::get_qos_data(struct s_network_session_status_data *)
//{
//    mangled_ppc("?get_qos_data@c_group_session_qos_reply_manager@@MAA_NPAUs_network_session_status_data@@@Z");
//};

//public: void c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_live_service_qos_manager_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_live_service_qos_manager_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_live_service_qos_manager_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_live_service_qos_manager_flags@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_live_service_qos_manager_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_live_service_qos_manager_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_live_service_qos_manager_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_live_service_qos_manager_flags@@@Z");
//};

//public: s_logic_qos_reply_manager_globals::s_logic_qos_reply_manager_globals(void)
//{
//    mangled_ppc("??0s_logic_qos_reply_manager_globals@@QAA@XZ");
//};

//public: c_live_service_qos_manager::c_live_service_qos_manager(void)
//{
//    mangled_ppc("??0c_live_service_qos_manager@@QAA@XZ");
//};

//public: c_squad_session_qos_reply_manager::c_squad_session_qos_reply_manager(void)
//{
//    mangled_ppc("??0c_squad_session_qos_reply_manager@@QAA@XZ");
//};

//public: c_posse_session_qos_reply_manager::c_posse_session_qos_reply_manager(void)
//{
//    mangled_ppc("??0c_posse_session_qos_reply_manager@@QAA@XZ");
//};

//public: c_group_session_qos_reply_manager::c_group_session_qos_reply_manager(void)
//{
//    mangled_ppc("??0c_group_session_qos_reply_manager@@QAA@XZ");
//};

//public: c_session_qos_reply_manager::c_session_qos_reply_manager(void)
//{
//    mangled_ppc("??0c_session_qos_reply_manager@@QAA@XZ");
//};

//public: c_flags<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_live_service_qos_manager_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_live_service_qos_manager_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_live_service_qos_manager_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_live_service_qos_manager_flags@@@Z");
//};

