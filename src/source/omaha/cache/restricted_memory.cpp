/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_restricted_memory::c_restricted_memory(void);
// public: c_restricted_memory::s_registered_member::s_registered_member(void);
// public: c_restricted_memory::s_mirror_slot::s_mirror_slot(void);
// public: c_restricted_memory::~c_restricted_memory(void);
// public: c_restricted_memory::s_registered_member::~s_registered_member(void);
// public: c_restricted_memory::s_mirror_slot::~s_mirror_slot(void);
// public: void c_restricted_memory::initialize(long, class c_restricted_section *, enum e_critical_sections, class c_restricted_memory_callbacks *);
// private: unsigned long c_restricted_section::get_size(void) const;
// public: void c_restricted_memory::add_mirror(class c_restricted_section *);
// private: void c_restricted_memory::uninitialize(void);
// public: void c_restricted_memory::destroy(void);
// public: unsigned int c_restricted_memory::subsection_size(void);
// public: long c_restricted_memory::mirror_count(void);
// public: unsigned int c_restricted_memory::total_size(void);
// public: unsigned int c_restricted_memory::reserved_size(void);
// public: void c_restricted_memory::reset_mirrors(void);
// public: bool c_restricted_memory::mirror_contents(bool);
// private: void * c_restricted_section::get_writable_address(void);
// public: void * c_restricted_memory::lock_primary(void);
// private: void const * c_restricted_section::get_address(void) const;
// public: void c_restricted_memory::begin_primary_aliasing(void);
// public: void c_restricted_memory::begin_aliasing_unprotected(void);
// public: void c_restricted_memory::end_primary_aliasing(void);
// public: void * c_restricted_memory::add_primary_alias(void);
// public: void c_restricted_memory::remove_primary_alias(void);
// public: void c_restricted_memory::begin_mirror_aliasing(void);
// public: void c_restricted_memory::begin_mirror_aliasing_unprotected(void);
// public: void c_restricted_memory::end_mirror_aliasing(void);
// public: void * c_restricted_memory::add_mirror_alias(void);
// public: void c_restricted_memory::remove_mirror_alias(void);
// public: void c_restricted_memory::handle_gamestate_load(void);
// public: void * c_restricted_memory::try_and_lock_primary(void);
// public: bool c_restricted_memory::wait_for_available_mirror(unsigned long) const;
// public: bool c_restricted_memory::wait_for_new_write_mirror(unsigned long) const;
// private: void c_restricted_memory::unlock_primary_read_only_internal(bool);
// public: void * c_restricted_memory::lock_primary_read_only(void);
// public: void * c_restricted_memory::try_and_lock_primary_read_only(void);
// public: void c_restricted_memory::unlock_primary_read_only(void);
// private: void * c_restricted_memory::lock_mirror_internal(bool);
// public: void * c_restricted_memory::lock_mirror(void);
// public: void * c_restricted_memory::try_and_lock_mirror(void);
// private: void c_restricted_memory::unlock_primary_internal(bool);
// public: void c_restricted_memory::unlock_primary(void);
// public: bool c_restricted_memory::mirror_locked_for_current_thread(void) const;
// private: void * c_restricted_memory::lock_mirror_read_only_internal(bool);
// private: void c_restricted_memory::unlock_mirror_internal(bool);
// private: void c_restricted_memory::unlock_mirror_read_only_internal(bool);
// public: void c_restricted_memory::allow_aliasing(void);
// public: void c_restricted_memory::block_aliasing(void);
// public: void c_restricted_memory::unlock_mirror(void);
// public: void * c_restricted_memory::lock_mirror_read_only(void);
// public: void * c_restricted_memory::try_and_lock_mirror_read_only(void);
// public: void c_restricted_memory::unlock_mirror_read_only(void);
// public: long c_restricted_memory::add_member(char const *, char const *, unsigned int, long, void (*)(void *), void (*)(void *), void (*)(void *));
// public: void c_restricted_memory::free_member(long);
// public: unsigned long c_restricted_memory::get_member_offset(long);
// public: void c_restricted_memory::clear_membership(void);
// public: void c_restricted_memory::erase_sector(enum e_restricted_section_type);
// public: void c_restricted_memory::set_protection_scheme(enum e_restricted_section_type, enum e_memory_protection);
// private: void c_restricted_memory::perform_post_copy_fixup_on_members(unsigned char *);
// private: void c_restricted_memory::perform_pre_overwrite_fixup_on_members(unsigned char *);
// private: void c_restricted_memory::set_user_addresses_internal(unsigned char *);
// private: void c_restricted_memory::clear_user_addresses_internal(void);
// private: static void c_restricted_memory::backup_primary_section(void);
// private: static void c_restricted_memory::restore_primary_section(void);
// private: static void c_restricted_memory::backup_mirror_section(unsigned int *, class c_restricted_section &);
// private: static void c_restricted_memory::validate_mirror_section(unsigned int *, class c_restricted_section &);
// raw_block_copy_asm;
// raw_block_copy_asm_flush;
// raw_block_copy_C;
// __lvx;
// __stvx;
// private: void c_restricted_memory::copy_data_between_sections(unsigned int *, class c_restricted_section &, unsigned int *, class c_restricted_section &volatile);
// public: bool c_restricted_memory::current_thread_has_obtained_read_privilages(void) const;
// public: bool c_restricted_memory::current_thread_has_obtained_write_privilages(void) const;
// public: void c_restricted_memory::handle_crash_of_current_thread(void);

//public: c_restricted_memory::c_restricted_memory(void)
//{
//    mangled_ppc("??0c_restricted_memory@@QAA@XZ");
//};

//public: c_restricted_memory::s_registered_member::s_registered_member(void)
//{
//    mangled_ppc("??0s_registered_member@c_restricted_memory@@QAA@XZ");
//};

//public: c_restricted_memory::s_mirror_slot::s_mirror_slot(void)
//{
//    mangled_ppc("??0s_mirror_slot@c_restricted_memory@@QAA@XZ");
//};

//public: c_restricted_memory::~c_restricted_memory(void)
//{
//    mangled_ppc("??1c_restricted_memory@@QAA@XZ");
//};

//public: c_restricted_memory::s_registered_member::~s_registered_member(void)
//{
//    mangled_ppc("??1s_registered_member@c_restricted_memory@@QAA@XZ");
//};

//public: c_restricted_memory::s_mirror_slot::~s_mirror_slot(void)
//{
//    mangled_ppc("??1s_mirror_slot@c_restricted_memory@@QAA@XZ");
//};

//public: void c_restricted_memory::initialize(long, class c_restricted_section *, enum e_critical_sections, class c_restricted_memory_callbacks *)
//{
//    mangled_ppc("?initialize@c_restricted_memory@@QAAXJPAVc_restricted_section@@W4e_critical_sections@@PAVc_restricted_memory_callbacks@@@Z");
//};

//private: unsigned long c_restricted_section::get_size(void) const
//{
//    mangled_ppc("?get_size@c_restricted_section@@ABAKXZ");
//};

//public: void c_restricted_memory::add_mirror(class c_restricted_section *)
//{
//    mangled_ppc("?add_mirror@c_restricted_memory@@QAAXPAVc_restricted_section@@@Z");
//};

//private: void c_restricted_memory::uninitialize(void)
//{
//    mangled_ppc("?uninitialize@c_restricted_memory@@AAAXXZ");
//};

//public: void c_restricted_memory::destroy(void)
//{
//    mangled_ppc("?destroy@c_restricted_memory@@QAAXXZ");
//};

//public: unsigned int c_restricted_memory::subsection_size(void)
//{
//    mangled_ppc("?subsection_size@c_restricted_memory@@QAAIXZ");
//};

//public: long c_restricted_memory::mirror_count(void)
//{
//    mangled_ppc("?mirror_count@c_restricted_memory@@QAAJXZ");
//};

//public: unsigned int c_restricted_memory::total_size(void)
//{
//    mangled_ppc("?total_size@c_restricted_memory@@QAAIXZ");
//};

//public: unsigned int c_restricted_memory::reserved_size(void)
//{
//    mangled_ppc("?reserved_size@c_restricted_memory@@QAAIXZ");
//};

//public: void c_restricted_memory::reset_mirrors(void)
//{
//    mangled_ppc("?reset_mirrors@c_restricted_memory@@QAAXXZ");
//};

//public: bool c_restricted_memory::mirror_contents(bool)
//{
//    mangled_ppc("?mirror_contents@c_restricted_memory@@QAA_N_N@Z");
//};

//private: void * c_restricted_section::get_writable_address(void)
//{
//    mangled_ppc("?get_writable_address@c_restricted_section@@AAAPAXXZ");
//};

//public: void * c_restricted_memory::lock_primary(void)
//{
//    mangled_ppc("?lock_primary@c_restricted_memory@@QAAPAXXZ");
//};

//private: void const * c_restricted_section::get_address(void) const
//{
//    mangled_ppc("?get_address@c_restricted_section@@ABAPBXXZ");
//};

//public: void c_restricted_memory::begin_primary_aliasing(void)
//{
//    mangled_ppc("?begin_primary_aliasing@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::begin_aliasing_unprotected(void)
//{
//    mangled_ppc("?begin_aliasing_unprotected@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::end_primary_aliasing(void)
//{
//    mangled_ppc("?end_primary_aliasing@c_restricted_memory@@QAAXXZ");
//};

//public: void * c_restricted_memory::add_primary_alias(void)
//{
//    mangled_ppc("?add_primary_alias@c_restricted_memory@@QAAPAXXZ");
//};

//public: void c_restricted_memory::remove_primary_alias(void)
//{
//    mangled_ppc("?remove_primary_alias@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::begin_mirror_aliasing(void)
//{
//    mangled_ppc("?begin_mirror_aliasing@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::begin_mirror_aliasing_unprotected(void)
//{
//    mangled_ppc("?begin_mirror_aliasing_unprotected@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::end_mirror_aliasing(void)
//{
//    mangled_ppc("?end_mirror_aliasing@c_restricted_memory@@QAAXXZ");
//};

//public: void * c_restricted_memory::add_mirror_alias(void)
//{
//    mangled_ppc("?add_mirror_alias@c_restricted_memory@@QAAPAXXZ");
//};

//public: void c_restricted_memory::remove_mirror_alias(void)
//{
//    mangled_ppc("?remove_mirror_alias@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::handle_gamestate_load(void)
//{
//    mangled_ppc("?handle_gamestate_load@c_restricted_memory@@QAAXXZ");
//};

//public: void * c_restricted_memory::try_and_lock_primary(void)
//{
//    mangled_ppc("?try_and_lock_primary@c_restricted_memory@@QAAPAXXZ");
//};

//public: bool c_restricted_memory::wait_for_available_mirror(unsigned long) const
//{
//    mangled_ppc("?wait_for_available_mirror@c_restricted_memory@@QBA_NK@Z");
//};

//public: bool c_restricted_memory::wait_for_new_write_mirror(unsigned long) const
//{
//    mangled_ppc("?wait_for_new_write_mirror@c_restricted_memory@@QBA_NK@Z");
//};

//private: void c_restricted_memory::unlock_primary_read_only_internal(bool)
//{
//    mangled_ppc("?unlock_primary_read_only_internal@c_restricted_memory@@AAAX_N@Z");
//};

//public: void * c_restricted_memory::lock_primary_read_only(void)
//{
//    mangled_ppc("?lock_primary_read_only@c_restricted_memory@@QAAPAXXZ");
//};

//public: void * c_restricted_memory::try_and_lock_primary_read_only(void)
//{
//    mangled_ppc("?try_and_lock_primary_read_only@c_restricted_memory@@QAAPAXXZ");
//};

//public: void c_restricted_memory::unlock_primary_read_only(void)
//{
//    mangled_ppc("?unlock_primary_read_only@c_restricted_memory@@QAAXXZ");
//};

//private: void * c_restricted_memory::lock_mirror_internal(bool)
//{
//    mangled_ppc("?lock_mirror_internal@c_restricted_memory@@AAAPAX_N@Z");
//};

//public: void * c_restricted_memory::lock_mirror(void)
//{
//    mangled_ppc("?lock_mirror@c_restricted_memory@@QAAPAXXZ");
//};

//public: void * c_restricted_memory::try_and_lock_mirror(void)
//{
//    mangled_ppc("?try_and_lock_mirror@c_restricted_memory@@QAAPAXXZ");
//};

//private: void c_restricted_memory::unlock_primary_internal(bool)
//{
//    mangled_ppc("?unlock_primary_internal@c_restricted_memory@@AAAX_N@Z");
//};

//public: void c_restricted_memory::unlock_primary(void)
//{
//    mangled_ppc("?unlock_primary@c_restricted_memory@@QAAXXZ");
//};

//public: bool c_restricted_memory::mirror_locked_for_current_thread(void) const
//{
//    mangled_ppc("?mirror_locked_for_current_thread@c_restricted_memory@@QBA_NXZ");
//};

//private: void * c_restricted_memory::lock_mirror_read_only_internal(bool)
//{
//    mangled_ppc("?lock_mirror_read_only_internal@c_restricted_memory@@AAAPAX_N@Z");
//};

//private: void c_restricted_memory::unlock_mirror_internal(bool)
//{
//    mangled_ppc("?unlock_mirror_internal@c_restricted_memory@@AAAX_N@Z");
//};

//private: void c_restricted_memory::unlock_mirror_read_only_internal(bool)
//{
//    mangled_ppc("?unlock_mirror_read_only_internal@c_restricted_memory@@AAAX_N@Z");
//};

//public: void c_restricted_memory::allow_aliasing(void)
//{
//    mangled_ppc("?allow_aliasing@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::block_aliasing(void)
//{
//    mangled_ppc("?block_aliasing@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::unlock_mirror(void)
//{
//    mangled_ppc("?unlock_mirror@c_restricted_memory@@QAAXXZ");
//};

//public: void * c_restricted_memory::lock_mirror_read_only(void)
//{
//    mangled_ppc("?lock_mirror_read_only@c_restricted_memory@@QAAPAXXZ");
//};

//public: void * c_restricted_memory::try_and_lock_mirror_read_only(void)
//{
//    mangled_ppc("?try_and_lock_mirror_read_only@c_restricted_memory@@QAAPAXXZ");
//};

//public: void c_restricted_memory::unlock_mirror_read_only(void)
//{
//    mangled_ppc("?unlock_mirror_read_only@c_restricted_memory@@QAAXXZ");
//};

//public: long c_restricted_memory::add_member(char const *, char const *, unsigned int, long, void (*)(void *), void (*)(void *), void (*)(void *))
//{
//    mangled_ppc("?add_member@c_restricted_memory@@QAAJPBD0IJP6AXPAX@Z22@Z");
//};

//public: void c_restricted_memory::free_member(long)
//{
//    mangled_ppc("?free_member@c_restricted_memory@@QAAXJ@Z");
//};

//public: unsigned long c_restricted_memory::get_member_offset(long)
//{
//    mangled_ppc("?get_member_offset@c_restricted_memory@@QAAKJ@Z");
//};

//public: void c_restricted_memory::clear_membership(void)
//{
//    mangled_ppc("?clear_membership@c_restricted_memory@@QAAXXZ");
//};

//public: void c_restricted_memory::erase_sector(enum e_restricted_section_type)
//{
//    mangled_ppc("?erase_sector@c_restricted_memory@@QAAXW4e_restricted_section_type@@@Z");
//};

//public: void c_restricted_memory::set_protection_scheme(enum e_restricted_section_type, enum e_memory_protection)
//{
//    mangled_ppc("?set_protection_scheme@c_restricted_memory@@QAAXW4e_restricted_section_type@@W4e_memory_protection@@@Z");
//};

//private: void c_restricted_memory::perform_post_copy_fixup_on_members(unsigned char *)
//{
//    mangled_ppc("?perform_post_copy_fixup_on_members@c_restricted_memory@@AAAXPAE@Z");
//};

//private: void c_restricted_memory::perform_pre_overwrite_fixup_on_members(unsigned char *)
//{
//    mangled_ppc("?perform_pre_overwrite_fixup_on_members@c_restricted_memory@@AAAXPAE@Z");
//};

//private: void c_restricted_memory::set_user_addresses_internal(unsigned char *)
//{
//    mangled_ppc("?set_user_addresses_internal@c_restricted_memory@@AAAXPAE@Z");
//};

//private: void c_restricted_memory::clear_user_addresses_internal(void)
//{
//    mangled_ppc("?clear_user_addresses_internal@c_restricted_memory@@AAAXXZ");
//};

//private: static void c_restricted_memory::backup_primary_section(void)
//{
//    mangled_ppc("?backup_primary_section@c_restricted_memory@@CAXXZ");
//};

//private: static void c_restricted_memory::restore_primary_section(void)
//{
//    mangled_ppc("?restore_primary_section@c_restricted_memory@@CAXXZ");
//};

//private: static void c_restricted_memory::backup_mirror_section(unsigned int *, class c_restricted_section &)
//{
//    mangled_ppc("?backup_mirror_section@c_restricted_memory@@CAXPIAVc_restricted_section@@@Z");
//};

//private: static void c_restricted_memory::validate_mirror_section(unsigned int *, class c_restricted_section &)
//{
//    mangled_ppc("?validate_mirror_section@c_restricted_memory@@CAXPIAVc_restricted_section@@@Z");
//};

//raw_block_copy_asm
//{
//    mangled_ppc("raw_block_copy_asm");
//};

//raw_block_copy_asm_flush
//{
//    mangled_ppc("raw_block_copy_asm_flush");
//};

//raw_block_copy_C
//{
//    mangled_ppc("raw_block_copy_C");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//private: void c_restricted_memory::copy_data_between_sections(unsigned int *, class c_restricted_section &, unsigned int *, class c_restricted_section &volatile)
//{
//    mangled_ppc("?copy_data_between_sections@c_restricted_memory@@AAAXPIAVc_restricted_section@@PIBV2@@Z");
//};

//public: bool c_restricted_memory::current_thread_has_obtained_read_privilages(void) const
//{
//    mangled_ppc("?current_thread_has_obtained_read_privilages@c_restricted_memory@@QBA_NXZ");
//};

//public: bool c_restricted_memory::current_thread_has_obtained_write_privilages(void) const
//{
//    mangled_ppc("?current_thread_has_obtained_write_privilages@c_restricted_memory@@QBA_NXZ");
//};

//public: void c_restricted_memory::handle_crash_of_current_thread(void)
//{
//    mangled_ppc("?handle_crash_of_current_thread@c_restricted_memory@@QAAXXZ");
//};

