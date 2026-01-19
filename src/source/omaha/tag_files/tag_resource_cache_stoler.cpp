/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_tag_resource_cache_stoler::initialize(void);
// public: void c_tag_resource_cache_stoler::dispose(void);
// public: void c_tag_resource_cache_stoler::initialize_for_new_map(void);
// public: void c_tag_resource_cache_stoler::dispose_from_old_map(void);
// public: void c_tag_resource_cache_stoler::advance_age(void);
// public: void c_tag_resource_cache_stoler::hint_pending_steal(enum e_optional_cache_user, unsigned long);
// public: long c_tag_resource_cache_stoler::get_stolen_block_count(void) const;
// public: bool c_tag_resource_cache_stoler::stolen_block_pending(long) const;
// public: bool c_tag_resource_cache_stoler::stolen_block_pinned(long) const;
// public: bool c_tag_resource_cache_stoler::stolen_block_can_reclaim(long) const;
// public: bool c_tag_resource_cache_stoler::stolen_block_has_memory(long) const;
// public: unsigned long c_tag_resource_cache_stoler::get_stolen_block_size(long) const;
// public: void c_tag_resource_cache_stoler::set_stolen_block_memory(long, void *);
// public: void * c_tag_resource_cache_stoler::get_stolen_block_memory(long) const;
// public: void c_tag_resource_cache_stoler::clear_stolen_block_memory(long);
// public: void c_tag_resource_cache_stoler::terminate_block(long);
// public: void c_tag_resource_cache_stoler::pin_stolen_block(long, class c_optional_cache_user_callback *);
// public: void c_tag_resource_cache_stoler::unpin_stolen_block(long);
// public: void c_tag_resource_cache_stoler::update_spam(void);
// private: char const * c_tag_resource_cache_stoler::get_stolen_block_name(long) const;
// private: char const * c_tag_resource_cache_stoler::get_stolen_block_status(long) const;
// private: unsigned long c_tag_resource_cache_stoler::try_to_get_stolen_block_size(long) const;
// private: struct c_tag_resource_cache_stoler::s_stolen_memory_user * c_tag_resource_cache_stoler::get_stolen_memory_user_mutable(long);
// private: struct c_tag_resource_cache_stoler::s_stolen_memory_user const * c_tag_resource_cache_stoler::get_stolen_memory_user(long) const;
// public: static long s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::get_count(void);
// public: void s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::set_all(struct c_tag_resource_cache_stoler::s_stolen_memory_user const &);
// public: struct c_status_line & s_static_array<struct c_status_line, 6>::operator[]<long>(long);
// public: struct c_tag_resource_cache_stoler::s_stolen_memory_user & s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::operator[]<long>(long);
// public: struct c_tag_resource_cache_stoler::s_stolen_memory_user const & s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::operator[]<long>(long) const;
// public: static bool s_static_array<struct c_status_line, 6>::valid<long>(long);
// public: static bool s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::valid<long>(long);

//public: void c_tag_resource_cache_stoler::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_cache_stoler@@QAAXXZ");
//};

//public: void c_tag_resource_cache_stoler::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_cache_stoler@@QAAXXZ");
//};

//public: void c_tag_resource_cache_stoler::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_tag_resource_cache_stoler@@QAAXXZ");
//};

//public: void c_tag_resource_cache_stoler::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_tag_resource_cache_stoler@@QAAXXZ");
//};

//public: void c_tag_resource_cache_stoler::advance_age(void)
//{
//    mangled_ppc("?advance_age@c_tag_resource_cache_stoler@@QAAXXZ");
//};

//public: void c_tag_resource_cache_stoler::hint_pending_steal(enum e_optional_cache_user, unsigned long)
//{
//    mangled_ppc("?hint_pending_steal@c_tag_resource_cache_stoler@@QAAXW4e_optional_cache_user@@K@Z");
//};

//public: long c_tag_resource_cache_stoler::get_stolen_block_count(void) const
//{
//    mangled_ppc("?get_stolen_block_count@c_tag_resource_cache_stoler@@QBAJXZ");
//};

//public: bool c_tag_resource_cache_stoler::stolen_block_pending(long) const
//{
//    mangled_ppc("?stolen_block_pending@c_tag_resource_cache_stoler@@QBA_NJ@Z");
//};

//public: bool c_tag_resource_cache_stoler::stolen_block_pinned(long) const
//{
//    mangled_ppc("?stolen_block_pinned@c_tag_resource_cache_stoler@@QBA_NJ@Z");
//};

//public: bool c_tag_resource_cache_stoler::stolen_block_can_reclaim(long) const
//{
//    mangled_ppc("?stolen_block_can_reclaim@c_tag_resource_cache_stoler@@QBA_NJ@Z");
//};

//public: bool c_tag_resource_cache_stoler::stolen_block_has_memory(long) const
//{
//    mangled_ppc("?stolen_block_has_memory@c_tag_resource_cache_stoler@@QBA_NJ@Z");
//};

//public: unsigned long c_tag_resource_cache_stoler::get_stolen_block_size(long) const
//{
//    mangled_ppc("?get_stolen_block_size@c_tag_resource_cache_stoler@@QBAKJ@Z");
//};

//public: void c_tag_resource_cache_stoler::set_stolen_block_memory(long, void *)
//{
//    mangled_ppc("?set_stolen_block_memory@c_tag_resource_cache_stoler@@QAAXJPAX@Z");
//};

//public: void * c_tag_resource_cache_stoler::get_stolen_block_memory(long) const
//{
//    mangled_ppc("?get_stolen_block_memory@c_tag_resource_cache_stoler@@QBAPAXJ@Z");
//};

//public: void c_tag_resource_cache_stoler::clear_stolen_block_memory(long)
//{
//    mangled_ppc("?clear_stolen_block_memory@c_tag_resource_cache_stoler@@QAAXJ@Z");
//};

//public: void c_tag_resource_cache_stoler::terminate_block(long)
//{
//    mangled_ppc("?terminate_block@c_tag_resource_cache_stoler@@QAAXJ@Z");
//};

//public: void c_tag_resource_cache_stoler::pin_stolen_block(long, class c_optional_cache_user_callback *)
//{
//    mangled_ppc("?pin_stolen_block@c_tag_resource_cache_stoler@@QAAXJPAVc_optional_cache_user_callback@@@Z");
//};

//public: void c_tag_resource_cache_stoler::unpin_stolen_block(long)
//{
//    mangled_ppc("?unpin_stolen_block@c_tag_resource_cache_stoler@@QAAXJ@Z");
//};

//public: void c_tag_resource_cache_stoler::update_spam(void)
//{
//    mangled_ppc("?update_spam@c_tag_resource_cache_stoler@@QAAXXZ");
//};

//private: char const * c_tag_resource_cache_stoler::get_stolen_block_name(long) const
//{
//    mangled_ppc("?get_stolen_block_name@c_tag_resource_cache_stoler@@ABAPBDJ@Z");
//};

//private: char const * c_tag_resource_cache_stoler::get_stolen_block_status(long) const
//{
//    mangled_ppc("?get_stolen_block_status@c_tag_resource_cache_stoler@@ABAPBDJ@Z");
//};

//private: unsigned long c_tag_resource_cache_stoler::try_to_get_stolen_block_size(long) const
//{
//    mangled_ppc("?try_to_get_stolen_block_size@c_tag_resource_cache_stoler@@ABAKJ@Z");
//};

//private: struct c_tag_resource_cache_stoler::s_stolen_memory_user * c_tag_resource_cache_stoler::get_stolen_memory_user_mutable(long)
//{
//    mangled_ppc("?get_stolen_memory_user_mutable@c_tag_resource_cache_stoler@@AAAPAUs_stolen_memory_user@1@J@Z");
//};

//private: struct c_tag_resource_cache_stoler::s_stolen_memory_user const * c_tag_resource_cache_stoler::get_stolen_memory_user(long) const
//{
//    mangled_ppc("?get_stolen_memory_user@c_tag_resource_cache_stoler@@ABAPBUs_stolen_memory_user@1@J@Z");
//};

//public: static long s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_stolen_memory_user@c_tag_resource_cache_stoler@@$05@@SAJXZ");
//};

//public: void s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::set_all(struct c_tag_resource_cache_stoler::s_stolen_memory_user const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Us_stolen_memory_user@c_tag_resource_cache_stoler@@$05@@QAAXABUs_stolen_memory_user@c_tag_resource_cache_stoler@@@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uc_status_line@@$05@@QAAAAUc_status_line@@J@Z");
//};

//public: struct c_tag_resource_cache_stoler::s_stolen_memory_user & s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_stolen_memory_user@c_tag_resource_cache_stoler@@$05@@QAAAAUs_stolen_memory_user@c_tag_resource_cache_stoler@@J@Z");
//};

//public: struct c_tag_resource_cache_stoler::s_stolen_memory_user const & s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_stolen_memory_user@c_tag_resource_cache_stoler@@$05@@QBAABUs_stolen_memory_user@c_tag_resource_cache_stoler@@J@Z");
//};

//public: static bool s_static_array<struct c_status_line, 6>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uc_status_line@@$05@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_tag_resource_cache_stoler::s_stolen_memory_user, 6>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_stolen_memory_user@c_tag_resource_cache_stoler@@$05@@SA_NJ@Z");
//};

