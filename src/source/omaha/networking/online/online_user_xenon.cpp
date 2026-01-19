/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_big_flags_typed_no_init<long, 113>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0HB@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 113>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0HB@@@2JB"
// public: static long const s_static_array<class c_user_property_value, 113>::k_element_count; // "?k_element_count@?$s_static_array@Vc_user_property_value@@$0HB@@@2JB"
// public: static enum e_online_context_id const c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@2W4e_online_context_id@@B"
// public: static long const s_static_array<class c_user_context_value, 12>::k_element_count; // "?k_element_count@?$s_static_array@Vc_user_context_value@@$0M@@@2JB"
// public: static long const s_static_array<enum _XUSER_SIGNIN_STATE, 4>::k_element_count; // "?k_element_count@?$s_static_array@W4_XUSER_SIGNIN_STATE@@$03@@2JB"
// public: static long const s_static_array<class c_user_set_context_overlapped_task *, 4>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_user_set_context_overlapped_task@@$03@@2JB"
// public: static long const s_static_array<class c_user_set_property_overlapped_task *, 16>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_user_set_property_overlapped_task@@$0BA@@@2JB"
// public: static long const s_static_array<struct s_online_user_internal, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_online_user_internal@@$03@@2JB"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 113>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0HB@@@QAAXXZ@4JC"

// void online_user_initialize(void);
// void online_user_dispose(void);
// void online_user_update(void);
// void online_user_set_context(enum e_controller_index, enum e_online_context_id, enum e_online_context_value);
// public: void c_user_context_value::set_desired(unsigned long);
// void online_user_set_property(enum e_controller_index, enum e_online_property_id, struct s_online_data const *);
// public: void c_user_property_value::set_desired(unsigned long);
// void online_user_set_property_force(enum e_controller_index, enum e_online_property_id, struct s_online_data const *);
// bool online_user_get_gamertag(enum e_controller_index, class c_static_wchar_string<16> *);
// bool online_user_is_muting_player(enum e_controller_index, unsigned __int64);
// bool online_user_any_is_friend(unsigned __int64);
// bool online_user_is_friend(enum e_controller_index, unsigned __int64);
// class c_flags<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> online_user_get_flags(enum e_controller_index);
// bool online_user_is_signed_in_to_live(enum e_controller_index);
// bool sign_in_state_is_signed_in_to_live(enum _XUSER_SIGNIN_STATE);
// bool online_user_is_signed_in_to_live_immediate(enum e_controller_index);
// bool online_user_is_signed_in_to_machine(enum e_controller_index);
// bool sign_in_state_is_signed_in_to_machine(enum _XUSER_SIGNIN_STATE);
// bool online_user_is_signed_in_to_machine_immediate(enum e_controller_index);
// wchar_t const * online_user_get_name(enum e_controller_index);
// unsigned __int64 online_user_get_player_identifier(enum e_controller_index);
// unsigned __int64 online_user_get_xuid(enum e_controller_index);
// bool online_has_any_silver_or_gold_live_users(void);
// bool online_has_all_online_enabled_users(void);
// bool online_user_get_content_created_by_xuid_allowed(enum e_controller_index, unsigned __int64);
// enum e_controller_index online_user_get_sponsoring_controller_index(enum e_controller_index);
// public: virtual bool c_online_user_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_online_user_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_online_user_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// void online_user_set_context_synchronous(enum e_controller_index, enum e_online_context_id, enum e_online_context_value);
// void online_user_state_initialize(void);
// void online_user_state_initialize_user_state(long);
// void online_user_state_update(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void online_user_properties_initialize(void);
// public: c_user_set_property_overlapped_task::c_user_set_property_overlapped_task(char const *, long);
// public: virtual char const * c_user_set_property_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_user_set_property_overlapped_task::start(void *);
// public: void c_user_set_property_overlapped_task::clear(void);
// merged_82AB00D8;
// public: virtual c_user_set_property_overlapped_task::~c_user_set_property_overlapped_task(void);
// void online_user_properties_dispose(void);
// void online_user_properties_update(void);
// public: void c_user_set_property_overlapped_task::initialize(enum e_controller_index, unsigned __int64, enum e_online_property_id, unsigned long);
// public: enum e_controller_index c_user_set_property_overlapped_task::get_controller_index(void) const;
// public: unsigned __int64 c_user_set_property_overlapped_task::get_xuid(void) const;
// public: enum e_online_property_id c_user_set_property_overlapped_task::get_property_id(void) const;
// public: unsigned long c_user_set_property_overlapped_task::get_property_value(void) const;
// public: unsigned long c_user_property_value::get_desired(void);
// public: void c_user_property_value::set(unsigned long);
// public: bool c_user_property_value::is_dirty(void);
// void online_user_contexts_initialize(void);
// public: c_user_set_context_overlapped_task::c_user_set_context_overlapped_task(char const *, long);
// public: virtual char const * c_user_set_context_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_user_set_context_overlapped_task::start(void *);
// public: void c_user_set_context_overlapped_task::clear(void);
// merged_82AB0CE8;
// public: virtual c_user_set_context_overlapped_task::~c_user_set_context_overlapped_task(void);
// void online_user_contexts_dispose(void);
// void online_user_contexts_update(void);
// public: void c_user_set_context_overlapped_task::initialize(enum e_controller_index, unsigned __int64, enum e_online_context_id, unsigned long);
// public: enum e_controller_index c_user_set_context_overlapped_task::get_controller_index(void) const;
// public: unsigned __int64 c_user_set_context_overlapped_task::get_xuid(void) const;
// public: enum e_online_context_id c_user_set_context_overlapped_task::get_context_id(void) const;
// public: unsigned long c_user_set_context_overlapped_task::get_context_value(void) const;
// public: unsigned long c_user_context_value::get_desired(void);
// public: void c_user_context_value::set(unsigned long);
// public: bool c_user_context_value::is_dirty(void);
// void online_user_register_online_user_notification(void);
// public: c_online_user_controller_monitor::c_online_user_controller_monitor(void);
// void online_user_initialize_controller(enum e_controller_index);
// public: void c_user_context_value::clear(void);
// public: void c_user_property_value::clear(void);
// enum _XUSER_SIGNIN_STATE online_user_get_sign_in_state(enum e_controller_index);
// enum _XUSER_SIGNIN_STATE online_user_get_sign_in_state_immediate(enum e_controller_index);
// bool online_user_sign_in_state_defense_system_enabled(void);
// void online_user_sign_in_state_defense_system_update(void);
// void online_user_sign_in_state_defense_system_disable(void);
// void online_user_sign_in_state_defense_system_probe(void);
// void online_user_sign_in_state_defense_system_enable(void);
// public: void s_static_array<enum _XUSER_SIGNIN_STATE, 4>::set_all(enum _XUSER_SIGNIN_STATE const &);
// public: void s_static_array<class c_user_set_context_overlapped_task *, 4>::set_all(class c_user_set_context_overlapped_task *const &);
// public: void s_static_array<class c_user_set_property_overlapped_task *, 16>::set_all(class c_user_set_property_overlapped_task *const &);
// public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set(enum e_online_user_flags, bool);
// public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set_range(enum e_online_user_flags, enum e_online_user_flags, bool);
// public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> const &);
// public: unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::c_flags<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>(void);
// public: void c_big_flags_typed_no_init<long, 113>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 113>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 113>::set(long, bool);
// public: void c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum e_online_context_id) const;
// public: void c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::set(enum e_online_context_id, bool);
// public: struct s_online_user_internal & s_static_array<struct s_online_user_internal, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_user_context_value & s_static_array<class c_user_context_value, 12>::operator[]<enum e_online_context_id>(enum e_online_context_id);
// public: class c_user_property_value & s_static_array<class c_user_property_value, 113>::operator[]<enum e_online_property_id>(enum e_online_property_id);
// public: struct s_online_user_internal & s_static_array<struct s_online_user_internal, 4>::operator[]<long>(long);
// unsigned long fast_checksum<enum e_controller_index>(unsigned long, enum e_controller_index const *);
// unsigned long fast_checksum<unsigned __int64>(unsigned long, unsigned __int64const *);
// unsigned long fast_checksum<struct s_transport_unique_identifier>(unsigned long, struct s_transport_unique_identifier const *);
// public: class c_user_set_property_overlapped_task *& s_static_array<class c_user_set_property_overlapped_task *, 16>::operator[]<long>(long);
// void overlapped_track_delete<class c_user_set_property_overlapped_task>(class c_user_set_property_overlapped_task *);
// public: class c_user_property_value & s_static_array<class c_user_property_value, 113>::operator[]<long>(long);
// public: class c_user_set_context_overlapped_task *& s_static_array<class c_user_set_context_overlapped_task *, 4>::operator[]<long>(long);
// void overlapped_track_delete<class c_user_set_context_overlapped_task>(class c_user_set_context_overlapped_task *);
// public: class c_user_context_value & s_static_array<class c_user_context_value, 12>::operator[]<long>(long);
// public: enum _XUSER_SIGNIN_STATE & s_static_array<enum _XUSER_SIGNIN_STATE, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> const &);
// public: static class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_online_user_flags, enum e_online_user_flags);
// public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_big_flags_typed_no_init<long, 113>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 113>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 113>::valid(void) const;
// public: static bool c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_online_context_id);
// private: static unsigned short c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_context_id);
// public: static bool s_static_array<struct s_online_user_internal, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_user_context_value, 12>::valid<enum e_online_context_id>(enum e_online_context_id);
// public: static bool s_static_array<class c_user_property_value, 113>::valid<enum e_online_property_id>(enum e_online_property_id);
// public: static bool s_static_array<struct s_online_user_internal, 4>::valid<long>(long);
// void prefetch<enum e_controller_index>(enum e_controller_index const *);
// void prefetch<unsigned __int64>(unsigned __int64const *);
// void prefetch<struct s_transport_unique_identifier>(struct s_transport_unique_identifier const *);
// public: static bool s_static_array<class c_user_set_property_overlapped_task *, 16>::valid<long>(long);
// public: static bool s_static_array<class c_user_property_value, 113>::valid<long>(long);
// public: static bool s_static_array<class c_user_set_context_overlapped_task *, 4>::valid<long>(long);
// public: static bool s_static_array<class c_user_context_value, 12>::valid<long>(long);
// public: static bool s_static_array<enum _XUSER_SIGNIN_STATE, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// private: static unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_user_flags);
// private: static unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 113>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 113>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 113>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 113>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 113>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: s_online_user_globals::s_online_user_globals(void);
// public: s_static_array<struct s_online_user_internal, 4>::s_static_array<struct s_online_user_internal, 4>(void);
// public: s_online_user_internal::s_online_user_internal(void);
// public: s_static_array<class c_user_property_value, 113>::s_static_array<class c_user_property_value, 113>(void);
// public: c_user_property_value::c_user_property_value(void);
// public: s_static_array<class c_user_context_value, 12>::s_static_array<class c_user_context_value, 12>(void);
// public: c_user_context_value::c_user_context_value(void);
// public: c_big_flags<113>::c_big_flags<113>(void);
// public: c_big_flags_typed<long, 113>::c_big_flags_typed<long, 113>(void);
// public: c_flags<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::c_flags<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned short c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_context_id);

//void online_user_initialize(void)
//{
//    mangled_ppc("?online_user_initialize@@YAXXZ");
//};

//void online_user_dispose(void)
//{
//    mangled_ppc("?online_user_dispose@@YAXXZ");
//};

//void online_user_update(void)
//{
//    mangled_ppc("?online_user_update@@YAXXZ");
//};

//void online_user_set_context(enum e_controller_index, enum e_online_context_id, enum e_online_context_value)
//{
//    mangled_ppc("?online_user_set_context@@YAXW4e_controller_index@@W4e_online_context_id@@W4e_online_context_value@@@Z");
//};

//public: void c_user_context_value::set_desired(unsigned long)
//{
//    mangled_ppc("?set_desired@c_user_context_value@@QAAXK@Z");
//};

//void online_user_set_property(enum e_controller_index, enum e_online_property_id, struct s_online_data const *)
//{
//    mangled_ppc("?online_user_set_property@@YAXW4e_controller_index@@W4e_online_property_id@@PBUs_online_data@@@Z");
//};

//public: void c_user_property_value::set_desired(unsigned long)
//{
//    mangled_ppc("?set_desired@c_user_property_value@@QAAXK@Z");
//};

//void online_user_set_property_force(enum e_controller_index, enum e_online_property_id, struct s_online_data const *)
//{
//    mangled_ppc("?online_user_set_property_force@@YAXW4e_controller_index@@W4e_online_property_id@@PBUs_online_data@@@Z");
//};

//bool online_user_get_gamertag(enum e_controller_index, class c_static_wchar_string<16> *)
//{
//    mangled_ppc("?online_user_get_gamertag@@YA_NW4e_controller_index@@PAV?$c_static_wchar_string@$0BA@@@@Z");
//};

//bool online_user_is_muting_player(enum e_controller_index, unsigned __int64)
//{
//    mangled_ppc("?online_user_is_muting_player@@YA_NW4e_controller_index@@_K@Z");
//};

//bool online_user_any_is_friend(unsigned __int64)
//{
//    mangled_ppc("?online_user_any_is_friend@@YA_N_K@Z");
//};

//bool online_user_is_friend(enum e_controller_index, unsigned __int64)
//{
//    mangled_ppc("?online_user_is_friend@@YA_NW4e_controller_index@@_K@Z");
//};

//class c_flags<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> online_user_get_flags(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_flags@@YA?AV?$c_flags@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@W4e_controller_index@@@Z");
//};

//bool online_user_is_signed_in_to_live(enum e_controller_index)
//{
//    mangled_ppc("?online_user_is_signed_in_to_live@@YA_NW4e_controller_index@@@Z");
//};

//bool sign_in_state_is_signed_in_to_live(enum _XUSER_SIGNIN_STATE)
//{
//    mangled_ppc("?sign_in_state_is_signed_in_to_live@@YA_NW4_XUSER_SIGNIN_STATE@@@Z");
//};

//bool online_user_is_signed_in_to_live_immediate(enum e_controller_index)
//{
//    mangled_ppc("?online_user_is_signed_in_to_live_immediate@@YA_NW4e_controller_index@@@Z");
//};

//bool online_user_is_signed_in_to_machine(enum e_controller_index)
//{
//    mangled_ppc("?online_user_is_signed_in_to_machine@@YA_NW4e_controller_index@@@Z");
//};

//bool sign_in_state_is_signed_in_to_machine(enum _XUSER_SIGNIN_STATE)
//{
//    mangled_ppc("?sign_in_state_is_signed_in_to_machine@@YA_NW4_XUSER_SIGNIN_STATE@@@Z");
//};

//bool online_user_is_signed_in_to_machine_immediate(enum e_controller_index)
//{
//    mangled_ppc("?online_user_is_signed_in_to_machine_immediate@@YA_NW4e_controller_index@@@Z");
//};

//wchar_t const * online_user_get_name(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_name@@YAPB_WW4e_controller_index@@@Z");
//};

//unsigned __int64 online_user_get_player_identifier(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_player_identifier@@YA_KW4e_controller_index@@@Z");
//};

//unsigned __int64 online_user_get_xuid(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_xuid@@YA_KW4e_controller_index@@@Z");
//};

//bool online_has_any_silver_or_gold_live_users(void)
//{
//    mangled_ppc("?online_has_any_silver_or_gold_live_users@@YA_NXZ");
//};

//bool online_has_all_online_enabled_users(void)
//{
//    mangled_ppc("?online_has_all_online_enabled_users@@YA_NXZ");
//};

//bool online_user_get_content_created_by_xuid_allowed(enum e_controller_index, unsigned __int64)
//{
//    mangled_ppc("?online_user_get_content_created_by_xuid_allowed@@YA_NW4e_controller_index@@_K@Z");
//};

//enum e_controller_index online_user_get_sponsoring_controller_index(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_sponsoring_controller_index@@YA?AW4e_controller_index@@W41@@Z");
//};

//public: virtual bool c_online_user_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_online_user_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_online_user_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_online_user_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_online_user_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_online_user_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//void online_user_set_context_synchronous(enum e_controller_index, enum e_online_context_id, enum e_online_context_value)
//{
//    mangled_ppc("?online_user_set_context_synchronous@@YAXW4e_controller_index@@W4e_online_context_id@@W4e_online_context_value@@@Z");
//};

//void online_user_state_initialize(void)
//{
//    mangled_ppc("?online_user_state_initialize@@YAXXZ");
//};

//void online_user_state_initialize_user_state(long)
//{
//    mangled_ppc("?online_user_state_initialize_user_state@@YAXJ@Z");
//};

//void online_user_state_update(void)
//{
//    mangled_ppc("?online_user_state_update@@YAXXZ");
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

//void online_user_properties_initialize(void)
//{
//    mangled_ppc("?online_user_properties_initialize@@YAXXZ");
//};

//public: c_user_set_property_overlapped_task::c_user_set_property_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_user_set_property_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_user_set_property_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_user_set_property_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_user_set_property_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_user_set_property_overlapped_task@@UAAKPAX@Z");
//};

//public: void c_user_set_property_overlapped_task::clear(void)
//{
//    mangled_ppc("?clear@c_user_set_property_overlapped_task@@QAAXXZ");
//};

//merged_82AB00D8
//{
//    mangled_ppc("merged_82AB00D8");
//};

//public: virtual c_user_set_property_overlapped_task::~c_user_set_property_overlapped_task(void)
//{
//    mangled_ppc("??1c_user_set_property_overlapped_task@@UAA@XZ");
//};

//void online_user_properties_dispose(void)
//{
//    mangled_ppc("?online_user_properties_dispose@@YAXXZ");
//};

//void online_user_properties_update(void)
//{
//    mangled_ppc("?online_user_properties_update@@YAXXZ");
//};

//public: void c_user_set_property_overlapped_task::initialize(enum e_controller_index, unsigned __int64, enum e_online_property_id, unsigned long)
//{
//    mangled_ppc("?initialize@c_user_set_property_overlapped_task@@QAAXW4e_controller_index@@_KW4e_online_property_id@@K@Z");
//};

//public: enum e_controller_index c_user_set_property_overlapped_task::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_user_set_property_overlapped_task@@QBA?AW4e_controller_index@@XZ");
//};

//public: unsigned __int64 c_user_set_property_overlapped_task::get_xuid(void) const
//{
//    mangled_ppc("?get_xuid@c_user_set_property_overlapped_task@@QBA_KXZ");
//};

//public: enum e_online_property_id c_user_set_property_overlapped_task::get_property_id(void) const
//{
//    mangled_ppc("?get_property_id@c_user_set_property_overlapped_task@@QBA?AW4e_online_property_id@@XZ");
//};

//public: unsigned long c_user_set_property_overlapped_task::get_property_value(void) const
//{
//    mangled_ppc("?get_property_value@c_user_set_property_overlapped_task@@QBAKXZ");
//};

//public: unsigned long c_user_property_value::get_desired(void)
//{
//    mangled_ppc("?get_desired@c_user_property_value@@QAAKXZ");
//};

//public: void c_user_property_value::set(unsigned long)
//{
//    mangled_ppc("?set@c_user_property_value@@QAAXK@Z");
//};

//public: bool c_user_property_value::is_dirty(void)
//{
//    mangled_ppc("?is_dirty@c_user_property_value@@QAA_NXZ");
//};

//void online_user_contexts_initialize(void)
//{
//    mangled_ppc("?online_user_contexts_initialize@@YAXXZ");
//};

//public: c_user_set_context_overlapped_task::c_user_set_context_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_user_set_context_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_user_set_context_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_user_set_context_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_user_set_context_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_user_set_context_overlapped_task@@UAAKPAX@Z");
//};

//public: void c_user_set_context_overlapped_task::clear(void)
//{
//    mangled_ppc("?clear@c_user_set_context_overlapped_task@@QAAXXZ");
//};

//merged_82AB0CE8
//{
//    mangled_ppc("merged_82AB0CE8");
//};

//public: virtual c_user_set_context_overlapped_task::~c_user_set_context_overlapped_task(void)
//{
//    mangled_ppc("??1c_user_set_context_overlapped_task@@UAA@XZ");
//};

//void online_user_contexts_dispose(void)
//{
//    mangled_ppc("?online_user_contexts_dispose@@YAXXZ");
//};

//void online_user_contexts_update(void)
//{
//    mangled_ppc("?online_user_contexts_update@@YAXXZ");
//};

//public: void c_user_set_context_overlapped_task::initialize(enum e_controller_index, unsigned __int64, enum e_online_context_id, unsigned long)
//{
//    mangled_ppc("?initialize@c_user_set_context_overlapped_task@@QAAXW4e_controller_index@@_KW4e_online_context_id@@K@Z");
//};

//public: enum e_controller_index c_user_set_context_overlapped_task::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_user_set_context_overlapped_task@@QBA?AW4e_controller_index@@XZ");
//};

//public: unsigned __int64 c_user_set_context_overlapped_task::get_xuid(void) const
//{
//    mangled_ppc("?get_xuid@c_user_set_context_overlapped_task@@QBA_KXZ");
//};

//public: enum e_online_context_id c_user_set_context_overlapped_task::get_context_id(void) const
//{
//    mangled_ppc("?get_context_id@c_user_set_context_overlapped_task@@QBA?AW4e_online_context_id@@XZ");
//};

//public: unsigned long c_user_set_context_overlapped_task::get_context_value(void) const
//{
//    mangled_ppc("?get_context_value@c_user_set_context_overlapped_task@@QBAKXZ");
//};

//public: unsigned long c_user_context_value::get_desired(void)
//{
//    mangled_ppc("?get_desired@c_user_context_value@@QAAKXZ");
//};

//public: void c_user_context_value::set(unsigned long)
//{
//    mangled_ppc("?set@c_user_context_value@@QAAXK@Z");
//};

//public: bool c_user_context_value::is_dirty(void)
//{
//    mangled_ppc("?is_dirty@c_user_context_value@@QAA_NXZ");
//};

//void online_user_register_online_user_notification(void)
//{
//    mangled_ppc("?online_user_register_online_user_notification@@YAXXZ");
//};

//public: c_online_user_controller_monitor::c_online_user_controller_monitor(void)
//{
//    mangled_ppc("??0c_online_user_controller_monitor@@QAA@XZ");
//};

//void online_user_initialize_controller(enum e_controller_index)
//{
//    mangled_ppc("?online_user_initialize_controller@@YAXW4e_controller_index@@@Z");
//};

//public: void c_user_context_value::clear(void)
//{
//    mangled_ppc("?clear@c_user_context_value@@QAAXXZ");
//};

//public: void c_user_property_value::clear(void)
//{
//    mangled_ppc("?clear@c_user_property_value@@QAAXXZ");
//};

//enum _XUSER_SIGNIN_STATE online_user_get_sign_in_state(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_sign_in_state@@YA?AW4_XUSER_SIGNIN_STATE@@W4e_controller_index@@@Z");
//};

//enum _XUSER_SIGNIN_STATE online_user_get_sign_in_state_immediate(enum e_controller_index)
//{
//    mangled_ppc("?online_user_get_sign_in_state_immediate@@YA?AW4_XUSER_SIGNIN_STATE@@W4e_controller_index@@@Z");
//};

//bool online_user_sign_in_state_defense_system_enabled(void)
//{
//    mangled_ppc("?online_user_sign_in_state_defense_system_enabled@@YA_NXZ");
//};

//void online_user_sign_in_state_defense_system_update(void)
//{
//    mangled_ppc("?online_user_sign_in_state_defense_system_update@@YAXXZ");
//};

//void online_user_sign_in_state_defense_system_disable(void)
//{
//    mangled_ppc("?online_user_sign_in_state_defense_system_disable@@YAXXZ");
//};

//void online_user_sign_in_state_defense_system_probe(void)
//{
//    mangled_ppc("?online_user_sign_in_state_defense_system_probe@@YAXXZ");
//};

//void online_user_sign_in_state_defense_system_enable(void)
//{
//    mangled_ppc("?online_user_sign_in_state_defense_system_enable@@YAXXZ");
//};

//public: void s_static_array<enum _XUSER_SIGNIN_STATE, 4>::set_all(enum _XUSER_SIGNIN_STATE const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@W4_XUSER_SIGNIN_STATE@@$03@@QAAXABW4_XUSER_SIGNIN_STATE@@@Z");
//};

//public: void s_static_array<class c_user_set_context_overlapped_task *, 4>::set_all(class c_user_set_context_overlapped_task *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PAVc_user_set_context_overlapped_task@@$03@@QAAXABQAVc_user_set_context_overlapped_task@@@Z");
//};

//public: void s_static_array<class c_user_set_property_overlapped_task *, 16>::set_all(class c_user_set_property_overlapped_task *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PAVc_user_set_property_overlapped_task@@$0BA@@@QAAXABQAVc_user_set_property_overlapped_task@@@Z");
//};

//public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set(enum e_online_user_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAXW4e_online_user_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set_range(enum e_online_user_flags, enum e_online_user_flags, bool)
//{
//    mangled_ppc("?set_range@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAXW4e_online_user_flags@@0_N@Z");
//};

//public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: c_flags<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::c_flags<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_big_flags_typed_no_init<long, 113>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0HB@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 113>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0HB@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 113>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0HB@@@QAAXJ_N@Z");
//};

//public: void c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum e_online_context_id) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@QBA_NW4e_online_context_id@@@Z");
//};

//public: void c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::set(enum e_online_context_id, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@QAAXW4e_online_context_id@@_N@Z");
//};

//public: struct s_online_user_internal & s_static_array<struct s_online_user_internal, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_online_user_internal@@$03@@QAAAAUs_online_user_internal@@W4e_controller_index@@@Z");
//};

//public: class c_user_context_value & s_static_array<class c_user_context_value, 12>::operator[]<enum e_online_context_id>(enum e_online_context_id)
//{
//    mangled_ppc("??$?AW4e_online_context_id@@@?$s_static_array@Vc_user_context_value@@$0M@@@QAAAAVc_user_context_value@@W4e_online_context_id@@@Z");
//};

//public: class c_user_property_value & s_static_array<class c_user_property_value, 113>::operator[]<enum e_online_property_id>(enum e_online_property_id)
//{
//    mangled_ppc("??$?AW4e_online_property_id@@@?$s_static_array@Vc_user_property_value@@$0HB@@@QAAAAVc_user_property_value@@W4e_online_property_id@@@Z");
//};

//public: struct s_online_user_internal & s_static_array<struct s_online_user_internal, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_online_user_internal@@$03@@QAAAAUs_online_user_internal@@J@Z");
//};

//unsigned long fast_checksum<enum e_controller_index>(unsigned long, enum e_controller_index const *)
//{
//    mangled_ppc("??$fast_checksum@W4e_controller_index@@@@YAKKPBW4e_controller_index@@@Z");
//};

//unsigned long fast_checksum<unsigned __int64>(unsigned long, unsigned __int64const *)
//{
//    mangled_ppc("??$fast_checksum@_K@@YAKKPB_K@Z");
//};

//unsigned long fast_checksum<struct s_transport_unique_identifier>(unsigned long, struct s_transport_unique_identifier const *)
//{
//    mangled_ppc("??$fast_checksum@Us_transport_unique_identifier@@@@YAKKPBUs_transport_unique_identifier@@@Z");
//};

//public: class c_user_set_property_overlapped_task *& s_static_array<class c_user_set_property_overlapped_task *, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_user_set_property_overlapped_task@@$0BA@@@QAAAAPAVc_user_set_property_overlapped_task@@J@Z");
//};

//void overlapped_track_delete<class c_user_set_property_overlapped_task>(class c_user_set_property_overlapped_task *)
//{
//    mangled_ppc("??$overlapped_track_delete@Vc_user_set_property_overlapped_task@@@@YAXPAVc_user_set_property_overlapped_task@@@Z");
//};

//public: class c_user_property_value & s_static_array<class c_user_property_value, 113>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_user_property_value@@$0HB@@@QAAAAVc_user_property_value@@J@Z");
//};

//public: class c_user_set_context_overlapped_task *& s_static_array<class c_user_set_context_overlapped_task *, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_user_set_context_overlapped_task@@$03@@QAAAAPAVc_user_set_context_overlapped_task@@J@Z");
//};

//void overlapped_track_delete<class c_user_set_context_overlapped_task>(class c_user_set_context_overlapped_task *)
//{
//    mangled_ppc("??$overlapped_track_delete@Vc_user_set_context_overlapped_task@@@@YAXPAVc_user_set_context_overlapped_task@@@Z");
//};

//public: class c_user_context_value & s_static_array<class c_user_context_value, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_user_context_value@@$0M@@@QAAAAVc_user_context_value@@J@Z");
//};

//public: enum _XUSER_SIGNIN_STATE & s_static_array<enum _XUSER_SIGNIN_STATE, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@W4_XUSER_SIGNIN_STATE@@$03@@QAAAAW4_XUSER_SIGNIN_STATE@@W4e_controller_index@@@Z");
//};

//public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_online_user_flags, enum e_online_user_flags)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@SA?AV1@W4e_online_user_flags@@0@Z");
//};

//public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 113>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0HB@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 113>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0HB@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 113>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0HB@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_online_context_id)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@SA_NW4e_online_context_id@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_context_id)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_online_context_id@@@Z");
//};

//public: static bool s_static_array<struct s_online_user_internal, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_online_user_internal@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_user_context_value, 12>::valid<enum e_online_context_id>(enum e_online_context_id)
//{
//    mangled_ppc("??$valid@W4e_online_context_id@@@?$s_static_array@Vc_user_context_value@@$0M@@@SA_NW4e_online_context_id@@@Z");
//};

//public: static bool s_static_array<class c_user_property_value, 113>::valid<enum e_online_property_id>(enum e_online_property_id)
//{
//    mangled_ppc("??$valid@W4e_online_property_id@@@?$s_static_array@Vc_user_property_value@@$0HB@@@SA_NW4e_online_property_id@@@Z");
//};

//public: static bool s_static_array<struct s_online_user_internal, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_online_user_internal@@$03@@SA_NJ@Z");
//};

//void prefetch<enum e_controller_index>(enum e_controller_index const *)
//{
//    mangled_ppc("??$prefetch@W4e_controller_index@@@@YAXPBW4e_controller_index@@@Z");
//};

//void prefetch<unsigned __int64>(unsigned __int64const *)
//{
//    mangled_ppc("??$prefetch@_K@@YAXPB_K@Z");
//};

//void prefetch<struct s_transport_unique_identifier>(struct s_transport_unique_identifier const *)
//{
//    mangled_ppc("??$prefetch@Us_transport_unique_identifier@@@@YAXPBUs_transport_unique_identifier@@@Z");
//};

//public: static bool s_static_array<class c_user_set_property_overlapped_task *, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVc_user_set_property_overlapped_task@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_user_property_value, 113>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_user_property_value@@$0HB@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_user_set_context_overlapped_task *, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVc_user_set_context_overlapped_task@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_user_context_value, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_user_context_value@@$0M@@@SA_NJ@Z");
//};

//public: static bool s_static_array<enum _XUSER_SIGNIN_STATE, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@W4_XUSER_SIGNIN_STATE@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: void c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_user_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKW4e_online_user_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 113>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0HB@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 113>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0HB@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 113>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0HB@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 113>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0HB@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 113>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0HB@@@KAKJ@Z");
//};

//public: s_online_user_globals::s_online_user_globals(void)
//{
//    mangled_ppc("??0s_online_user_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_online_user_internal, 4>::s_static_array<struct s_online_user_internal, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_online_user_internal@@$03@@QAA@XZ");
//};

//public: s_online_user_internal::s_online_user_internal(void)
//{
//    mangled_ppc("??0s_online_user_internal@@QAA@XZ");
//};

//public: s_static_array<class c_user_property_value, 113>::s_static_array<class c_user_property_value, 113>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_user_property_value@@$0HB@@@QAA@XZ");
//};

//public: c_user_property_value::c_user_property_value(void)
//{
//    mangled_ppc("??0c_user_property_value@@QAA@XZ");
//};

//public: s_static_array<class c_user_context_value, 12>::s_static_array<class c_user_context_value, 12>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_user_context_value@@$0M@@@QAA@XZ");
//};

//public: c_user_context_value::c_user_context_value(void)
//{
//    mangled_ppc("??0c_user_context_value@@QAA@XZ");
//};

//public: c_big_flags<113>::c_big_flags<113>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0HB@@@QAA@XZ");
//};

//public: c_big_flags_typed<long, 113>::c_big_flags_typed<long, 113>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0HB@@@QAA@XZ");
//};

//public: c_flags<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::c_flags<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_online_context_id, unsigned short, 12, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_context_id)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_online_context_id@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_online_context_id@@@Z");
//};

