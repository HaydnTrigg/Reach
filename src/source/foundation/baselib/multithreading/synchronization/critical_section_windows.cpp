/* ---------- headers */

#include "foundation\baselib\multithreading\synchronization\critical_section_windows.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_critical_section const k_critical_section_invalid; // "?k_critical_section_invalid@@3Us_critical_section@@B"

// struct s_critical_section critical_section_declare(long, struct s_critical_section_definition const *);
// void critical_section_create(class c_critical_section_instance *, unsigned long, long, struct s_critical_section_definition const *);
// public: void c_synchronization_object::set_non_stack_ordering(bool);
// void critical_section_destroy(class c_critical_section_instance *);
// void critical_section_enter_internal(struct s_critical_section, enum e_critical_section_recursive);
// public: long c_synchronization_object::get_locking_thread(void) const;
// public: void c_synchronization_object::increment_lock_count(long);
// bool critical_section_try_and_enter_internal(struct s_critical_section);
// void critical_section_leave_internal(struct s_critical_section, enum e_critical_section_recursive);
// public: void c_synchronization_object::decrement_lock_count(void);
// bool critical_section_inside(struct s_critical_section);
// void critical_section_force_release_if_owned_by_thread(class c_critical_section_instance *, long);
// public: c_critical_section_scope::c_critical_section_scope(struct s_critical_section);
// public: c_critical_section_scope::c_critical_section_scope(struct s_critical_section, long, bool *);
// public: c_critical_section_scope::~c_critical_section_scope(void);
// public: void s_flags<enum e_synchronization_object_flags, unsigned long, 1>::set(enum e_synchronization_object_flags, bool);
// public: static bool s_flags<enum e_synchronization_object_flags, unsigned long, 1>::valid_bit(enum e_synchronization_object_flags);
// public: bool s_flags<enum e_synchronization_object_flags, unsigned long, 1>::valid(void) const;
// private: static unsigned long s_flags<enum e_synchronization_object_flags, unsigned long, 1>::flag_size_type(enum e_synchronization_object_flags);
// private: static unsigned long s_flags<enum e_synchronization_object_flags, unsigned long, 1>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_synchronization_object_flags, unsigned long, 1>::make_N_bit_mask_size_type(enum e_synchronization_object_flags);

//struct s_critical_section critical_section_declare(long, struct s_critical_section_definition const *)
//{
//    mangled_ppc("?critical_section_declare@@YA?AUs_critical_section@@JPBUs_critical_section_definition@@@Z");
//};

//void critical_section_create(class c_critical_section_instance *, unsigned long, long, struct s_critical_section_definition const *)
//{
//    mangled_ppc("?critical_section_create@@YAXPAVc_critical_section_instance@@KJPBUs_critical_section_definition@@@Z");
//};

//public: void c_synchronization_object::set_non_stack_ordering(bool)
//{
//    mangled_ppc("?set_non_stack_ordering@c_synchronization_object@@QAAX_N@Z");
//};

//void critical_section_destroy(class c_critical_section_instance *)
//{
//    mangled_ppc("?critical_section_destroy@@YAXPAVc_critical_section_instance@@@Z");
//};

//void critical_section_enter_internal(struct s_critical_section, enum e_critical_section_recursive)
//{
//    mangled_ppc("?critical_section_enter_internal@@YAXUs_critical_section@@W4e_critical_section_recursive@@@Z");
//};

//public: long c_synchronization_object::get_locking_thread(void) const
//{
//    mangled_ppc("?get_locking_thread@c_synchronization_object@@QBAJXZ");
//};

//public: void c_synchronization_object::increment_lock_count(long)
//{
//    mangled_ppc("?increment_lock_count@c_synchronization_object@@QAAXJ@Z");
//};

//bool critical_section_try_and_enter_internal(struct s_critical_section)
//{
//    mangled_ppc("?critical_section_try_and_enter_internal@@YA_NUs_critical_section@@@Z");
//};

//void critical_section_leave_internal(struct s_critical_section, enum e_critical_section_recursive)
//{
//    mangled_ppc("?critical_section_leave_internal@@YAXUs_critical_section@@W4e_critical_section_recursive@@@Z");
//};

//public: void c_synchronization_object::decrement_lock_count(void)
//{
//    mangled_ppc("?decrement_lock_count@c_synchronization_object@@QAAXXZ");
//};

//bool critical_section_inside(struct s_critical_section)
//{
//    mangled_ppc("?critical_section_inside@@YA_NUs_critical_section@@@Z");
//};

//void critical_section_force_release_if_owned_by_thread(class c_critical_section_instance *, long)
//{
//    mangled_ppc("?critical_section_force_release_if_owned_by_thread@@YAXPAVc_critical_section_instance@@J@Z");
//};

//public: c_critical_section_scope::c_critical_section_scope(struct s_critical_section)
//{
//    mangled_ppc("??0c_critical_section_scope@@QAA@Us_critical_section@@@Z");
//};

//public: c_critical_section_scope::c_critical_section_scope(struct s_critical_section, long, bool *)
//{
//    mangled_ppc("??0c_critical_section_scope@@QAA@Us_critical_section@@JPA_N@Z");
//};

//public: c_critical_section_scope::~c_critical_section_scope(void)
//{
//    mangled_ppc("??1c_critical_section_scope@@QAA@XZ");
//};

//public: void s_flags<enum e_synchronization_object_flags, unsigned long, 1>::set(enum e_synchronization_object_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_synchronization_object_flags@@K$00@@QAAXW4e_synchronization_object_flags@@_N@Z");
//};

//public: static bool s_flags<enum e_synchronization_object_flags, unsigned long, 1>::valid_bit(enum e_synchronization_object_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_synchronization_object_flags@@K$00@@SA_NW4e_synchronization_object_flags@@@Z");
//};

//public: bool s_flags<enum e_synchronization_object_flags, unsigned long, 1>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_synchronization_object_flags@@K$00@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_synchronization_object_flags, unsigned long, 1>::flag_size_type(enum e_synchronization_object_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_synchronization_object_flags@@K$00@@CAKW4e_synchronization_object_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_synchronization_object_flags, unsigned long, 1>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_synchronization_object_flags@@K$00@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_synchronization_object_flags, unsigned long, 1>::make_N_bit_mask_size_type(enum e_synchronization_object_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_synchronization_object_flags@@K$00@@CAKW4e_synchronization_object_flags@@@Z");
//};

