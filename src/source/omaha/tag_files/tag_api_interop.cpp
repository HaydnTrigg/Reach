/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool tag_interop_descriptor_exists(struct s_tag_interop const *);
// bool tag_interop_fixup(struct s_tag_interop *);
// bool tag_interop_type_is_valid(struct s_tag_persistent_identifier const &);
// public: c_tag_interop_allocator::c_tag_interop_allocator(void);
// public: virtual void * c_tag_interop_allocator::allocate(unsigned long, unsigned long);
// public: virtual void c_tag_interop_allocator::deallocate(void *, unsigned long);
// public: c_unchecked_tag_interop_verifier::c_unchecked_tag_interop_verifier(void);
// public: virtual bool c_unchecked_tag_interop_verifier::valid_buffer(class c_basic_buffer<void const>);
// void tag_interop_teardown(struct s_tag_interop *);
// bool tag_interop_locked(struct s_tag_interop *);
// unsigned long tag_interop_type_get_object_unaligned_size(struct s_tag_persistent_identifier const &);
// bool tag_interop_fixup_inline(struct s_tag_interop *, class c_tag_interop_verifier *);
// void tag_interop_teardown_inline(struct s_tag_interop *);
// void tag_interop_initialize(struct s_tag_interop *, struct s_tag_interop_definition const *);
// bool tag_interop_create(struct s_tag_interop *);
// bool tag_interop_descriptor_create(struct s_tag_interop *);
// void tag_interop_destroy(struct s_tag_interop *);
// void tag_interop_descriptor_destroy(struct s_tag_interop *);
// public: long s_tag_interop_definition::get_descriptor_size(void) const;
// public: class c_tag_interop_vtable_interface const * s_tag_interop_definition::get_interop_vtable(void) const;
// public: struct s_tag_struct_definition const * s_tag_interop_definition::get_descriptor_definition(void) const;
// public: struct s_tag_struct_definition * s_tag_interop_definition::get_descriptor_definition(void);
// public: struct s_tag_persistent_identifier const & s_tag_interop_definition::get_interop_type_identifier(void) const;
// public: char const * s_tag_interop_definition::get_interop_name(void) const;
// bool tag_interop_copy(struct s_tag_interop const *, struct s_tag_interop *);
// bool tag_interop_fixup_manually(struct s_tag_interop *, class c_aligned_allocator *, class c_tag_interop_verifier *);
// void tag_interop_teardown_manually(struct s_tag_interop *, class c_aligned_allocator *);
// bool tag_interop_fixup_manually_for_cache(struct s_tag_interop *, long, class c_aligned_allocator *, class c_tag_interop_verifier *);
// void tag_interop_teardown_manually_for_cache(struct s_tag_interop *, long, class c_aligned_allocator *);
// void * tag_interop_descriptor_get_with_size(struct s_tag_interop const *, unsigned long);
// void * tag_interop_descriptor_get_with_definition(struct s_tag_interop const *, struct s_tag_struct_definition const *);
// void * tag_interop_descriptor_get(struct s_tag_interop const *);
// bool tag_interop_object_exists(struct s_tag_interop const *);

//bool tag_interop_descriptor_exists(struct s_tag_interop const *)
//{
//    mangled_ppc("?tag_interop_descriptor_exists@@YA_NPBUs_tag_interop@@@Z");
//};

//bool tag_interop_fixup(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_fixup@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_interop_type_is_valid(struct s_tag_persistent_identifier const &)
//{
//    mangled_ppc("?tag_interop_type_is_valid@@YA_NABUs_tag_persistent_identifier@@@Z");
//};

//public: c_tag_interop_allocator::c_tag_interop_allocator(void)
//{
//    mangled_ppc("??0c_tag_interop_allocator@@QAA@XZ");
//};

//public: virtual void * c_tag_interop_allocator::allocate(unsigned long, unsigned long)
//{
//    mangled_ppc("?allocate@c_tag_interop_allocator@@UAAPAXKK@Z");
//};

//public: virtual void c_tag_interop_allocator::deallocate(void *, unsigned long)
//{
//    mangled_ppc("?deallocate@c_tag_interop_allocator@@UAAXPAXK@Z");
//};

//public: c_unchecked_tag_interop_verifier::c_unchecked_tag_interop_verifier(void)
//{
//    mangled_ppc("??0c_unchecked_tag_interop_verifier@@QAA@XZ");
//};

//public: virtual bool c_unchecked_tag_interop_verifier::valid_buffer(class c_basic_buffer<void const>)
//{
//    mangled_ppc("?valid_buffer@c_unchecked_tag_interop_verifier@@UAA_NV?$c_basic_buffer@$$CBX@@@Z");
//};

//void tag_interop_teardown(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_teardown@@YAXPAUs_tag_interop@@@Z");
//};

//bool tag_interop_locked(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_locked@@YA_NPAUs_tag_interop@@@Z");
//};

//unsigned long tag_interop_type_get_object_unaligned_size(struct s_tag_persistent_identifier const &)
//{
//    mangled_ppc("?tag_interop_type_get_object_unaligned_size@@YAKABUs_tag_persistent_identifier@@@Z");
//};

//bool tag_interop_fixup_inline(struct s_tag_interop *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_interop_fixup_inline@@YA_NPAUs_tag_interop@@PAVc_tag_interop_verifier@@@Z");
//};

//void tag_interop_teardown_inline(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_teardown_inline@@YAXPAUs_tag_interop@@@Z");
//};

//void tag_interop_initialize(struct s_tag_interop *, struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?tag_interop_initialize@@YAXPAUs_tag_interop@@PBUs_tag_interop_definition@@@Z");
//};

//bool tag_interop_create(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_create@@YA_NPAUs_tag_interop@@@Z");
//};

//bool tag_interop_descriptor_create(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_descriptor_create@@YA_NPAUs_tag_interop@@@Z");
//};

//void tag_interop_destroy(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_destroy@@YAXPAUs_tag_interop@@@Z");
//};

//void tag_interop_descriptor_destroy(struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_descriptor_destroy@@YAXPAUs_tag_interop@@@Z");
//};

//public: long s_tag_interop_definition::get_descriptor_size(void) const
//{
//    mangled_ppc("?get_descriptor_size@s_tag_interop_definition@@QBAJXZ");
//};

//public: class c_tag_interop_vtable_interface const * s_tag_interop_definition::get_interop_vtable(void) const
//{
//    mangled_ppc("?get_interop_vtable@s_tag_interop_definition@@QBAPBVc_tag_interop_vtable_interface@@XZ");
//};

//public: struct s_tag_struct_definition const * s_tag_interop_definition::get_descriptor_definition(void) const
//{
//    mangled_ppc("?get_descriptor_definition@s_tag_interop_definition@@QBAPBUs_tag_struct_definition@@XZ");
//};

//public: struct s_tag_struct_definition * s_tag_interop_definition::get_descriptor_definition(void)
//{
//    mangled_ppc("?get_descriptor_definition@s_tag_interop_definition@@QAAPAUs_tag_struct_definition@@XZ");
//};

//public: struct s_tag_persistent_identifier const & s_tag_interop_definition::get_interop_type_identifier(void) const
//{
//    mangled_ppc("?get_interop_type_identifier@s_tag_interop_definition@@QBAABUs_tag_persistent_identifier@@XZ");
//};

//public: char const * s_tag_interop_definition::get_interop_name(void) const
//{
//    mangled_ppc("?get_interop_name@s_tag_interop_definition@@QBAPBDXZ");
//};

//bool tag_interop_copy(struct s_tag_interop const *, struct s_tag_interop *)
//{
//    mangled_ppc("?tag_interop_copy@@YA_NPBUs_tag_interop@@PAU1@@Z");
//};

//bool tag_interop_fixup_manually(struct s_tag_interop *, class c_aligned_allocator *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_interop_fixup_manually@@YA_NPAUs_tag_interop@@PAVc_aligned_allocator@@PAVc_tag_interop_verifier@@@Z");
//};

//void tag_interop_teardown_manually(struct s_tag_interop *, class c_aligned_allocator *)
//{
//    mangled_ppc("?tag_interop_teardown_manually@@YAXPAUs_tag_interop@@PAVc_aligned_allocator@@@Z");
//};

//bool tag_interop_fixup_manually_for_cache(struct s_tag_interop *, long, class c_aligned_allocator *, class c_tag_interop_verifier *)
//{
//    mangled_ppc("?tag_interop_fixup_manually_for_cache@@YA_NPAUs_tag_interop@@JPAVc_aligned_allocator@@PAVc_tag_interop_verifier@@@Z");
//};

//void tag_interop_teardown_manually_for_cache(struct s_tag_interop *, long, class c_aligned_allocator *)
//{
//    mangled_ppc("?tag_interop_teardown_manually_for_cache@@YAXPAUs_tag_interop@@JPAVc_aligned_allocator@@@Z");
//};

//void * tag_interop_descriptor_get_with_size(struct s_tag_interop const *, unsigned long)
//{
//    mangled_ppc("?tag_interop_descriptor_get_with_size@@YAPAXPBUs_tag_interop@@K@Z");
//};

//void * tag_interop_descriptor_get_with_definition(struct s_tag_interop const *, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_interop_descriptor_get_with_definition@@YAPAXPBUs_tag_interop@@PBUs_tag_struct_definition@@@Z");
//};

//void * tag_interop_descriptor_get(struct s_tag_interop const *)
//{
//    mangled_ppc("?tag_interop_descriptor_get@@YAPAXPBUs_tag_interop@@@Z");
//};

//bool tag_interop_object_exists(struct s_tag_interop const *)
//{
//    mangled_ppc("?tag_interop_object_exists@@YA_NPBUs_tag_interop@@@Z");
//};

