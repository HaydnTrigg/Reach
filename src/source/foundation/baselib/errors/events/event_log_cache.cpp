/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_event_log_cache::initialize(class c_event_log_manager *);
// public: void c_event_log_cache::dispose(void);
// public: bool c_event_log_cache::is_empty(void) const;
// public: bool c_event_log_cache::is_space_available(long) const;
// public: bool c_event_log_cache::add_to_cache(long, enum e_event_log_index const *, char const *, bool *);
// public: void c_event_log_cache::flush(void);
// enum e_event_log_index & operator++(enum e_event_log_index &);
// public: unsigned long c_event_log_cache::get_last_flush_time(void) const;
// public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::empty(void) const;
// public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::full(void) const;
// public: long c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::count(void) const;
// public: void c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::clear(void);
// public: long c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::push(void);
// public: struct c_event_log_cache::s_cache_entry * c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::get(long);
// public: static long s_static_array<char, 32768>::get_count(void);
// public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::valid(void) const;
// public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::valid(long) const;
// public: void s_flags<enum e_event_log_index, unsigned long, 32>::clear(void);
// public: bool s_flags<enum e_event_log_index, unsigned long, 32>::test(enum e_event_log_index) const;
// public: void s_flags<enum e_event_log_index, unsigned long, 32>::set(enum e_event_log_index, bool);
// public: class s_flags<enum e_event_log_index, unsigned long, 32> & s_flags<enum e_event_log_index, unsigned long, 32>::operator|=(class s_flags<enum e_event_log_index, unsigned long, 32> const &);
// public: char & s_static_array<char, 32768>::operator[]<long>(long);
// public: static bool s_flags<enum e_event_log_index, unsigned long, 32>::valid_bit(enum e_event_log_index);
// public: bool s_flags<enum e_event_log_index, unsigned long, 32>::valid(void) const;
// private: static unsigned long s_flags<enum e_event_log_index, unsigned long, 32>::flag_size_type(enum e_event_log_index);
// public: static bool s_static_array<char, 32768>::valid<long>(long);
// private: static unsigned long s_flags<enum e_event_log_index, unsigned long, 32>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_event_log_index, unsigned long, 32>::make_N_bit_mask_size_type(enum e_event_log_index);

//public: void c_event_log_cache::initialize(class c_event_log_manager *)
//{
//    mangled_ppc("?initialize@c_event_log_cache@@QAAXPAVc_event_log_manager@@@Z");
//};

//public: void c_event_log_cache::dispose(void)
//{
//    mangled_ppc("?dispose@c_event_log_cache@@QAAXXZ");
//};

//public: bool c_event_log_cache::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_event_log_cache@@QBA_NXZ");
//};

//public: bool c_event_log_cache::is_space_available(long) const
//{
//    mangled_ppc("?is_space_available@c_event_log_cache@@QBA_NJ@Z");
//};

//public: bool c_event_log_cache::add_to_cache(long, enum e_event_log_index const *, char const *, bool *)
//{
//    mangled_ppc("?add_to_cache@c_event_log_cache@@QAA_NJPBW4e_event_log_index@@PBDPA_N@Z");
//};

//public: void c_event_log_cache::flush(void)
//{
//    mangled_ppc("?flush@c_event_log_cache@@QAAXXZ");
//};

//enum e_event_log_index & operator++(enum e_event_log_index &)
//{
//    mangled_ppc("??E@YAAAW4e_event_log_index@@AAW40@@Z");
//};

//public: unsigned long c_event_log_cache::get_last_flush_time(void) const
//{
//    mangled_ppc("?get_last_flush_time@c_event_log_cache@@QBAKXZ");
//};

//public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QBAJXZ");
//};

//public: void c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QAAXXZ");
//};

//public: long c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QAAJXZ");
//};

//public: struct c_event_log_cache::s_cache_entry * c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QAAPAUs_cache_entry@c_event_log_cache@@J@Z");
//};

//public: static long s_static_array<char, 32768>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@D$0IAAA@@@SAJXZ");
//};

//public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_event_log_cache::s_cache_entry, 1024>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_cache_entry@c_event_log_cache@@$0EAA@@@QBA_NJ@Z");
//};

//public: void s_flags<enum e_event_log_index, unsigned long, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_event_log_index@@K$0CA@@@QAAXXZ");
//};

//public: bool s_flags<enum e_event_log_index, unsigned long, 32>::test(enum e_event_log_index) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_event_log_index@@K$0CA@@@QBA_NW4e_event_log_index@@@Z");
//};

//public: void s_flags<enum e_event_log_index, unsigned long, 32>::set(enum e_event_log_index, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_event_log_index@@K$0CA@@@QAAXW4e_event_log_index@@_N@Z");
//};

//public: class s_flags<enum e_event_log_index, unsigned long, 32> & s_flags<enum e_event_log_index, unsigned long, 32>::operator|=(class s_flags<enum e_event_log_index, unsigned long, 32> const &)
//{
//    mangled_ppc("??_5?$s_flags@W4e_event_log_index@@K$0CA@@@QAAAAV0@ABV0@@Z");
//};

//public: char & s_static_array<char, 32768>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@D$0IAAA@@@QAAAADJ@Z");
//};

//public: static bool s_flags<enum e_event_log_index, unsigned long, 32>::valid_bit(enum e_event_log_index)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_event_log_index@@K$0CA@@@SA_NW4e_event_log_index@@@Z");
//};

//public: bool s_flags<enum e_event_log_index, unsigned long, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_event_log_index@@K$0CA@@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_event_log_index, unsigned long, 32>::flag_size_type(enum e_event_log_index)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_event_log_index@@K$0CA@@@CAKW4e_event_log_index@@@Z");
//};

//public: static bool s_static_array<char, 32768>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@D$0IAAA@@@SA_NJ@Z");
//};

//private: static unsigned long s_flags<enum e_event_log_index, unsigned long, 32>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_event_log_index@@K$0CA@@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_event_log_index, unsigned long, 32>::make_N_bit_mask_size_type(enum e_event_log_index)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_event_log_index@@K$0CA@@@CAKW4e_event_log_index@@@Z");
//};

