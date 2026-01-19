/* ---------- headers */

#include "foundation\baselib\errors\events\event_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// ?initialize@c_event_manager@@QAAXQ6A?AW4e_event_log_index@@PBD@Z@Z;
// public: void c_event_manager::dispose(void);
// public: enum e_event_level c_event_manager::get_minimum_level(void) const;
// public: struct s_event_category const * c_event_manager::get_category_const(enum e_event_category) const;
// public: struct s_event_category * c_event_manager::get_category_writable(enum e_event_category);
// public: void c_event_manager::set_default_categories(long, struct s_event_category_default_configuration const *);
// public: void c_event_manager::set_output_level(enum e_event_level);
// public: void c_event_manager::set_log_level(enum e_event_level);
// public: void c_event_manager::set_debug_level(enum e_event_level);
// public: void c_event_manager::set_datamine_level(enum e_event_level);
// public: void c_event_manager::register_event_log(enum e_event_manager_tracked_log, enum e_event_log_index);
// public: static void c_event_manager::build_correct_category_name(char const *, char *, long);
// public: void c_event_manager::visit_categories_recursive(enum e_event_category, class c_event_category_visitor *) const;
// public: void c_event_manager::describe_category(enum e_event_category, char *, long) const;
// public: enum e_event_category c_event_manager::find_category_from_name(char const *) const;
// public: enum e_event_category c_event_manager::create_category_from_name(char const *);
// public: void c_event_manager::set_category_level_by_name(char const *, enum e_event_manager_category_set_level, enum e_event_level, class c_event_category_visitor *);
// public: bool c_event_manager::register_listener(class c_event_listener *);
// public: void c_event_manager::unregister_listener(class c_event_listener *);
// public: class s_flags<enum e_event_response_flags, unsigned long, 8> c_event_manager::query_event(enum e_event_level, enum e_event_category, class c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>) const;
// public: void c_event_manager::finalize_event(enum e_event_level, enum e_event_category, class s_flags<enum e_event_response_flags, unsigned long, 8>, class s_static_string<2048> const *, struct s_event_response *);
// public: bool c_event_manager::get_spam_suppression_enabled(void) const;
// public: bool c_event_manager::get_current_desired_output(void) const;
// public: long c_event_manager::update_spam_lines(long, char const **) const;
// private: void c_event_manager::recalculate_minimum_level(void);
// private: void c_event_manager::recalculate_minimum_category_level(void);
// private: void c_event_manager::update_minimum_category_level(enum e_event_level);
// private: void c_event_manager::visit_categories_recursive(enum e_event_category, class c_event_category_visitor *, enum e_event_manager_recurse_siblings) const;
// private: void c_event_manager::set_category_properties_recursive(enum e_event_category, enum e_event_level, class c_flags_zero_init<enum e_event_manager_category_set_level, unsigned long, 7>, unsigned long, unsigned long, enum e_event_manager_recurse_siblings, class c_event_category_visitor *);
// private: enum e_event_category c_event_manager::find_or_create_category_from_name_internal(char const *, enum e_event_manager_allow_category_creation);
// private: long c_event_manager::parse_category_substrings(char const *, long, long, char (*const)[64]) const;
// private: enum e_event_category c_event_manager::find_or_create_category_from_substrings_recursive(enum e_event_category, long, char const (*const)[64], enum e_event_manager_allow_category_creation);
// private: bool c_event_manager::query_event_spam_suppression(enum e_event_level, enum e_event_category, class s_static_string<2048> const *, unsigned long);
// private: void c_event_manager::add_event_to_spamming_list(class s_static_string<2048> const *, unsigned long, struct s_event_spamming_list_add_result *);
// public: static long s_static_array<enum e_event_log_index, 5>::get_count(void);
// public: void s_static_array<class c_event_listener *, 8>::set_memory(long);
// public: bool c_static_stack<struct s_event_category, 1024>::empty(void) const;
// public: bool c_static_stack<struct s_event_category, 1024>::full(void) const;
// public: long c_static_stack<struct s_event_category, 1024>::count(void) const;
// public: void c_static_stack<struct s_event_category, 1024>::clear(void);
// public: long c_static_stack<struct s_event_category, 1024>::push(void);
// public: struct s_event_category const * c_static_stack<struct s_event_category, 1024>::get(long) const;
// public: struct s_event_category * c_static_stack<struct s_event_category, 1024>::get(long);
// public: static long s_static_array<struct s_spamming_event, 64>::get_count(void);
// public: void s_static_array<struct s_spamming_event, 64>::set_memory(long);
// public: c_flags_zero_init<enum e_event_manager_category_set_level, unsigned long, 7>::c_flags_zero_init<enum e_event_manager_category_set_level, unsigned long, 7>(void);
// public: bool c_static_stack<struct s_event_category, 1024>::valid(void) const;
// public: bool c_static_stack<struct s_event_category, 1024>::valid(long) const;
// public: void s_static_string<2048>::set(char const *);
// public: bool s_static_string<2048>::is_equal(char const *) const;
// public: void s_flags<enum e_event_response_flags, unsigned long, 8>::clear(void);
// public: void s_flags<enum e_event_response_flags, unsigned long, 8>::set(enum e_event_response_flags, bool);
// public: enum e_event_log_index & s_static_array<enum e_event_log_index, 5>::operator[]<enum e_event_manager_tracked_log>(enum e_event_manager_tracked_log);
// public: void s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::clear(void);
// public: bool s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::test(enum e_event_manager_category_set_level) const;
// public: void s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::set(enum e_event_manager_category_set_level, bool);
// public: class c_event_listener *& s_static_array<class c_event_listener *, 8>::operator[]<long>(long);
// public: class c_event_listener *& s_static_array<class c_event_listener *, 8>::operator[]<enum e_event_listener>(enum e_event_listener);
// public: bool s_flags<enum e_event_generation_flags, unsigned long, 1>::test(enum e_event_generation_flags) const;
// public: enum e_event_log_index & s_static_array<enum e_event_log_index, 5>::operator[]<long>(long);
// public: struct s_spamming_event const & s_static_array<struct s_spamming_event, 64>::operator[]<long>(long) const;
// enum e_event_level int_min<enum e_event_level>(enum e_event_level const &, enum e_event_level const &);
// public: struct s_spamming_event & s_static_array<struct s_spamming_event, 64>::operator[]<long>(long);
// public: bool s_flags<enum e_event_response_flags, unsigned long, 8>::valid(void) const;
// public: static bool s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::valid_bit(enum e_event_manager_category_set_level);
// public: bool s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::valid(void) const;
// private: static unsigned long s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::flag_size_type(enum e_event_manager_category_set_level);
// public: static bool s_static_array<class c_event_listener *, 8>::valid<enum e_event_listener>(enum e_event_listener);
// public: static bool s_flags<enum e_event_generation_flags, unsigned long, 1>::valid_bit(enum e_event_generation_flags);
// private: static unsigned long s_flags<enum e_event_generation_flags, unsigned long, 1>::flag_size_type(enum e_event_generation_flags);
// public: static bool s_static_array<enum e_event_log_index, 5>::valid<long>(long);
// public: static bool s_static_array<struct s_spamming_event, 64>::valid<long>(long);
// private: static unsigned long s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::make_N_bit_mask_size_type(enum e_event_manager_category_set_level);

//?initialize@c_event_manager@@QAAXQ6A?AW4e_event_log_index@@PBD@Z@Z
//{
//    mangled_ppc("?initialize@c_event_manager@@QAAXQ6A?AW4e_event_log_index@@PBD@Z@Z");
//};

//public: void c_event_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_event_manager@@QAAXXZ");
//};

//public: enum e_event_level c_event_manager::get_minimum_level(void) const
//{
//    mangled_ppc("?get_minimum_level@c_event_manager@@QBA?AW4e_event_level@@XZ");
//};

//public: struct s_event_category const * c_event_manager::get_category_const(enum e_event_category) const
//{
//    mangled_ppc("?get_category_const@c_event_manager@@QBAPBUs_event_category@@W4e_event_category@@@Z");
//};

//public: struct s_event_category * c_event_manager::get_category_writable(enum e_event_category)
//{
//    mangled_ppc("?get_category_writable@c_event_manager@@QAAPAUs_event_category@@W4e_event_category@@@Z");
//};

//public: void c_event_manager::set_default_categories(long, struct s_event_category_default_configuration const *)
//{
//    mangled_ppc("?set_default_categories@c_event_manager@@QAAXJPBUs_event_category_default_configuration@@@Z");
//};

//public: void c_event_manager::set_output_level(enum e_event_level)
//{
//    mangled_ppc("?set_output_level@c_event_manager@@QAAXW4e_event_level@@@Z");
//};

//public: void c_event_manager::set_log_level(enum e_event_level)
//{
//    mangled_ppc("?set_log_level@c_event_manager@@QAAXW4e_event_level@@@Z");
//};

//public: void c_event_manager::set_debug_level(enum e_event_level)
//{
//    mangled_ppc("?set_debug_level@c_event_manager@@QAAXW4e_event_level@@@Z");
//};

//public: void c_event_manager::set_datamine_level(enum e_event_level)
//{
//    mangled_ppc("?set_datamine_level@c_event_manager@@QAAXW4e_event_level@@@Z");
//};

//public: void c_event_manager::register_event_log(enum e_event_manager_tracked_log, enum e_event_log_index)
//{
//    mangled_ppc("?register_event_log@c_event_manager@@QAAXW4e_event_manager_tracked_log@@W4e_event_log_index@@@Z");
//};

//public: static void c_event_manager::build_correct_category_name(char const *, char *, long)
//{
//    mangled_ppc("?build_correct_category_name@c_event_manager@@SAXPBDPADJ@Z");
//};

//public: void c_event_manager::visit_categories_recursive(enum e_event_category, class c_event_category_visitor *) const
//{
//    mangled_ppc("?visit_categories_recursive@c_event_manager@@QBAXW4e_event_category@@PAVc_event_category_visitor@@@Z");
//};

//public: void c_event_manager::describe_category(enum e_event_category, char *, long) const
//{
//    mangled_ppc("?describe_category@c_event_manager@@QBAXW4e_event_category@@PADJ@Z");
//};

//public: enum e_event_category c_event_manager::find_category_from_name(char const *) const
//{
//    mangled_ppc("?find_category_from_name@c_event_manager@@QBA?AW4e_event_category@@PBD@Z");
//};

//public: enum e_event_category c_event_manager::create_category_from_name(char const *)
//{
//    mangled_ppc("?create_category_from_name@c_event_manager@@QAA?AW4e_event_category@@PBD@Z");
//};

//public: void c_event_manager::set_category_level_by_name(char const *, enum e_event_manager_category_set_level, enum e_event_level, class c_event_category_visitor *)
//{
//    mangled_ppc("?set_category_level_by_name@c_event_manager@@QAAXPBDW4e_event_manager_category_set_level@@W4e_event_level@@PAVc_event_category_visitor@@@Z");
//};

//public: bool c_event_manager::register_listener(class c_event_listener *)
//{
//    mangled_ppc("?register_listener@c_event_manager@@QAA_NPAVc_event_listener@@@Z");
//};

//public: void c_event_manager::unregister_listener(class c_event_listener *)
//{
//    mangled_ppc("?unregister_listener@c_event_manager@@QAAXPAVc_event_listener@@@Z");
//};

//public: class s_flags<enum e_event_response_flags, unsigned long, 8> c_event_manager::query_event(enum e_event_level, enum e_event_category, class c_flags_zero_init<enum e_event_generation_flags, unsigned long, 1>) const
//{
//    mangled_ppc("?query_event@c_event_manager@@QBA?AV?$s_flags@W4e_event_response_flags@@K$07@@W4e_event_level@@W4e_event_category@@V?$c_flags_zero_init@W4e_event_generation_flags@@K$00@@@Z");
//};

//public: void c_event_manager::finalize_event(enum e_event_level, enum e_event_category, class s_flags<enum e_event_response_flags, unsigned long, 8>, class s_static_string<2048> const *, struct s_event_response *)
//{
//    mangled_ppc("?finalize_event@c_event_manager@@QAAXW4e_event_level@@W4e_event_category@@V?$s_flags@W4e_event_response_flags@@K$07@@PBV?$s_static_string@$0IAA@@@PAUs_event_response@@@Z");
//};

//public: bool c_event_manager::get_spam_suppression_enabled(void) const
//{
//    mangled_ppc("?get_spam_suppression_enabled@c_event_manager@@QBA_NXZ");
//};

//public: bool c_event_manager::get_current_desired_output(void) const
//{
//    mangled_ppc("?get_current_desired_output@c_event_manager@@QBA_NXZ");
//};

//public: long c_event_manager::update_spam_lines(long, char const **) const
//{
//    mangled_ppc("?update_spam_lines@c_event_manager@@QBAJJPAPBD@Z");
//};

//private: void c_event_manager::recalculate_minimum_level(void)
//{
//    mangled_ppc("?recalculate_minimum_level@c_event_manager@@AAAXXZ");
//};

//private: void c_event_manager::recalculate_minimum_category_level(void)
//{
//    mangled_ppc("?recalculate_minimum_category_level@c_event_manager@@AAAXXZ");
//};

//private: void c_event_manager::update_minimum_category_level(enum e_event_level)
//{
//    mangled_ppc("?update_minimum_category_level@c_event_manager@@AAAXW4e_event_level@@@Z");
//};

//private: void c_event_manager::visit_categories_recursive(enum e_event_category, class c_event_category_visitor *, enum e_event_manager_recurse_siblings) const
//{
//    mangled_ppc("?visit_categories_recursive@c_event_manager@@ABAXW4e_event_category@@PAVc_event_category_visitor@@W4e_event_manager_recurse_siblings@@@Z");
//};

//private: void c_event_manager::set_category_properties_recursive(enum e_event_category, enum e_event_level, class c_flags_zero_init<enum e_event_manager_category_set_level, unsigned long, 7>, unsigned long, unsigned long, enum e_event_manager_recurse_siblings, class c_event_category_visitor *)
//{
//    mangled_ppc("?set_category_properties_recursive@c_event_manager@@AAAXW4e_event_category@@W4e_event_level@@V?$c_flags_zero_init@W4e_event_manager_category_set_level@@K$06@@KKW4e_event_manager_recurse_siblings@@PAVc_event_category_visitor@@@Z");
//};

//private: enum e_event_category c_event_manager::find_or_create_category_from_name_internal(char const *, enum e_event_manager_allow_category_creation)
//{
//    mangled_ppc("?find_or_create_category_from_name_internal@c_event_manager@@AAA?AW4e_event_category@@PBDW4e_event_manager_allow_category_creation@@@Z");
//};

//private: long c_event_manager::parse_category_substrings(char const *, long, long, char (*const)[64]) const
//{
//    mangled_ppc("?parse_category_substrings@c_event_manager@@ABAJPBDJJQAY0EA@D@Z");
//};

//private: enum e_event_category c_event_manager::find_or_create_category_from_substrings_recursive(enum e_event_category, long, char const (*const)[64], enum e_event_manager_allow_category_creation)
//{
//    mangled_ppc("?find_or_create_category_from_substrings_recursive@c_event_manager@@AAA?AW4e_event_category@@W42@JQAY0EA@$$CBDW4e_event_manager_allow_category_creation@@@Z");
//};

//private: bool c_event_manager::query_event_spam_suppression(enum e_event_level, enum e_event_category, class s_static_string<2048> const *, unsigned long)
//{
//    mangled_ppc("?query_event_spam_suppression@c_event_manager@@AAA_NW4e_event_level@@W4e_event_category@@PBV?$s_static_string@$0IAA@@@K@Z");
//};

//private: void c_event_manager::add_event_to_spamming_list(class s_static_string<2048> const *, unsigned long, struct s_event_spamming_list_add_result *)
//{
//    mangled_ppc("?add_event_to_spamming_list@c_event_manager@@AAAXPBV?$s_static_string@$0IAA@@@KPAUs_event_spamming_list_add_result@@@Z");
//};

//public: static long s_static_array<enum e_event_log_index, 5>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@W4e_event_log_index@@$04@@SAJXZ");
//};

//public: void s_static_array<class c_event_listener *, 8>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@PAVc_event_listener@@$07@@QAAXJ@Z");
//};

//public: bool c_static_stack<struct s_event_category, 1024>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_event_category@@$0EAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_event_category, 1024>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_event_category@@$0EAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_event_category, 1024>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_event_category@@$0EAA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_event_category, 1024>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_event_category@@$0EAA@@@QAAXXZ");
//};

//public: long c_static_stack<struct s_event_category, 1024>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_event_category@@$0EAA@@@QAAJXZ");
//};

//public: struct s_event_category const * c_static_stack<struct s_event_category, 1024>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_event_category@@$0EAA@@@QBAPBUs_event_category@@J@Z");
//};

//public: struct s_event_category * c_static_stack<struct s_event_category, 1024>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_event_category@@$0EAA@@@QAAPAUs_event_category@@J@Z");
//};

//public: static long s_static_array<struct s_spamming_event, 64>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_spamming_event@@$0EA@@@SAJXZ");
//};

//public: void s_static_array<struct s_spamming_event, 64>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_spamming_event@@$0EA@@@QAAXJ@Z");
//};

//public: c_flags_zero_init<enum e_event_manager_category_set_level, unsigned long, 7>::c_flags_zero_init<enum e_event_manager_category_set_level, unsigned long, 7>(void)
//{
//    mangled_ppc("??0?$c_flags_zero_init@W4e_event_manager_category_set_level@@K$06@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_event_category, 1024>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_event_category@@$0EAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_event_category, 1024>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_event_category@@$0EAA@@@QBA_NJ@Z");
//};

//public: void s_static_string<2048>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0IAA@@@QAAXPBD@Z");
//};

//public: bool s_static_string<2048>::is_equal(char const *) const
//{
//    mangled_ppc("?is_equal@?$s_static_string@$0IAA@@@QBA_NPBD@Z");
//};

//public: void s_flags<enum e_event_response_flags, unsigned long, 8>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_event_response_flags@@K$07@@QAAXXZ");
//};

//public: void s_flags<enum e_event_response_flags, unsigned long, 8>::set(enum e_event_response_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_event_response_flags@@K$07@@QAAXW4e_event_response_flags@@_N@Z");
//};

//public: enum e_event_log_index & s_static_array<enum e_event_log_index, 5>::operator[]<enum e_event_manager_tracked_log>(enum e_event_manager_tracked_log)
//{
//    mangled_ppc("??$?AW4e_event_manager_tracked_log@@@?$s_static_array@W4e_event_log_index@@$04@@QAAAAW4e_event_log_index@@W4e_event_manager_tracked_log@@@Z");
//};

//public: void s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_event_manager_category_set_level@@K$06@@QAAXXZ");
//};

//public: bool s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::test(enum e_event_manager_category_set_level) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_event_manager_category_set_level@@K$06@@QBA_NW4e_event_manager_category_set_level@@@Z");
//};

//public: void s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::set(enum e_event_manager_category_set_level, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_event_manager_category_set_level@@K$06@@QAAXW4e_event_manager_category_set_level@@_N@Z");
//};

//public: class c_event_listener *& s_static_array<class c_event_listener *, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_event_listener@@$07@@QAAAAPAVc_event_listener@@J@Z");
//};

//public: class c_event_listener *& s_static_array<class c_event_listener *, 8>::operator[]<enum e_event_listener>(enum e_event_listener)
//{
//    mangled_ppc("??$?AW4e_event_listener@@@?$s_static_array@PAVc_event_listener@@$07@@QAAAAPAVc_event_listener@@W4e_event_listener@@@Z");
//};

//public: bool s_flags<enum e_event_generation_flags, unsigned long, 1>::test(enum e_event_generation_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_event_generation_flags@@K$00@@QBA_NW4e_event_generation_flags@@@Z");
//};

//public: enum e_event_log_index & s_static_array<enum e_event_log_index, 5>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_event_log_index@@$04@@QAAAAW4e_event_log_index@@J@Z");
//};

//public: struct s_spamming_event const & s_static_array<struct s_spamming_event, 64>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_spamming_event@@$0EA@@@QBAABUs_spamming_event@@J@Z");
//};

//enum e_event_level int_min<enum e_event_level>(enum e_event_level const &, enum e_event_level const &)
//{
//    mangled_ppc("??$int_min@W4e_event_level@@@@YA?AW4e_event_level@@ABW40@0@Z");
//};

//public: struct s_spamming_event & s_static_array<struct s_spamming_event, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_spamming_event@@$0EA@@@QAAAAUs_spamming_event@@J@Z");
//};

//public: bool s_flags<enum e_event_response_flags, unsigned long, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_event_response_flags@@K$07@@QBA_NXZ");
//};

//public: static bool s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::valid_bit(enum e_event_manager_category_set_level)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_event_manager_category_set_level@@K$06@@SA_NW4e_event_manager_category_set_level@@@Z");
//};

//public: bool s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_event_manager_category_set_level@@K$06@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::flag_size_type(enum e_event_manager_category_set_level)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_event_manager_category_set_level@@K$06@@CAKW4e_event_manager_category_set_level@@@Z");
//};

//public: static bool s_static_array<class c_event_listener *, 8>::valid<enum e_event_listener>(enum e_event_listener)
//{
//    mangled_ppc("??$valid@W4e_event_listener@@@?$s_static_array@PAVc_event_listener@@$07@@SA_NW4e_event_listener@@@Z");
//};

//public: static bool s_flags<enum e_event_generation_flags, unsigned long, 1>::valid_bit(enum e_event_generation_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_event_generation_flags@@K$00@@SA_NW4e_event_generation_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_event_generation_flags, unsigned long, 1>::flag_size_type(enum e_event_generation_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_event_generation_flags@@K$00@@CAKW4e_event_generation_flags@@@Z");
//};

//public: static bool s_static_array<enum e_event_log_index, 5>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_event_log_index@@$04@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_spamming_event, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_spamming_event@@$0EA@@@SA_NJ@Z");
//};

//private: static unsigned long s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_event_manager_category_set_level@@K$06@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_event_manager_category_set_level, unsigned long, 7>::make_N_bit_mask_size_type(enum e_event_manager_category_set_level)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_event_manager_category_set_level@@K$06@@CAKW4e_event_manager_category_set_level@@@Z");
//};

