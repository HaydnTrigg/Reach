/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_havok_proxy_rigid_bodies_active; // "?g_havok_proxy_rigid_bodies_active@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_havok_proxy_data_allocator::*)(void *)> g_havok_proxy_data_allocator; // "?g_havok_proxy_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_havok_proxy_data; // "?g_havok_proxy_data@@3PAUs_data_array@@A"

// void __tls_set_g_havok_proxy_data_allocator(void *);
// void havok_proxies_initialize(void);
// void havok_proxies_dispose(void);
// void havok_proxies_initialize_for_new_map(void);
// void havok_proxies_dispose_from_old_map(void);
// void havok_proxy_release(long);
// void havok_proxy_release_internal(long, bool);
// void havok_proxy_rebuild(long);
// bool havok_proxy_aquire_internal(long, bool);
// void havok_proxies_initialize_rigid_bodies(void);
// void havok_proxies_dispose_rigid_bodies(void);
// void havok_proxies_dispose_rigid_bodies_fast(void);
// void havok_proxies_update(void);
// void havok_proxy_aquire(long);
// void havok_proxies_apply_hard_key_frame(class hkVector4const &, class hkQuaternion const &, float, class hkVector4const &, class hkpRigidBody *);
// bool limit3d(class hkVector4&, float);
// void havok_proxies_move(void);
// long havok_proxy_rigid_bodies_get(class s_static_array<class hkpRigidBody *, 16> *);
// void havok_proxy_get_transform_for_object(long, struct real_matrix4x3*);
// bool is_player_controlled_object(long);
// long object_get_havok_proxy_index(long);
// void havok_proxies_render_debug(void);
// public: void c_data_iterator<struct s_havok_proxy_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_havok_proxy_datum>::next(void);
// public: struct s_havok_proxy_datum * c_data_iterator<struct s_havok_proxy_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_havok_proxy_datum>::get_index(void) const;
// public: void hkVector4::setMul4(class hkSimdReal const &, class hkVector4const &);
// public: class hkSimdReal hkVector4::lengthSquared3(void) const;
// public: void hkVector4::setRotatedDir(class hkQuaternion const &, class hkVector4const &);
// public: struct __vector4& hkVector4::getQuad(void);
// public: void hkVector4::addMul4(class hkVector4const &, class hkVector4const &);
// public: void hkVector4::setAddMul4(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkVector4::broadcast(int);
// public: void hkQuaternion::setMulInverse(class hkQuaternion const &, class hkQuaternion const &);
// public: void hkVector4::subMul4(class hkSimdReal const &, class hkVector4const &);
// public: class hkSimdReal hkVector4::dot4(class hkVector4const &) const;
// public: float hkQuaternion::getAngle(void) const;
// float hkMath::fabs(float);
// float hkMath::acos(float);
// public: class hkBool hkQuaternion::hasValidAxis(void) const;
// public: void hkQuaternion::getAxis(class hkVector4&) const;
// public: int hkVector4Comparison::anyIsSet(enum hkVector4Comparison::Mask) const;
// public: class hkVector4Comparison hkVector4::compareLessThan4(class hkVector4const &) const;
// public: void hkVector4::normalize3(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>(void);
// void g_havok_proxy_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_havok_proxy_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z");
//};

//void havok_proxies_initialize(void)
//{
//    mangled_ppc("?havok_proxies_initialize@@YAXXZ");
//};

//void havok_proxies_dispose(void)
//{
//    mangled_ppc("?havok_proxies_dispose@@YAXXZ");
//};

//void havok_proxies_initialize_for_new_map(void)
//{
//    mangled_ppc("?havok_proxies_initialize_for_new_map@@YAXXZ");
//};

//void havok_proxies_dispose_from_old_map(void)
//{
//    mangled_ppc("?havok_proxies_dispose_from_old_map@@YAXXZ");
//};

//void havok_proxy_release(long)
//{
//    mangled_ppc("?havok_proxy_release@@YAXJ@Z");
//};

//void havok_proxy_release_internal(long, bool)
//{
//    mangled_ppc("?havok_proxy_release_internal@@YAXJ_N@Z");
//};

//void havok_proxy_rebuild(long)
//{
//    mangled_ppc("?havok_proxy_rebuild@@YAXJ@Z");
//};

//bool havok_proxy_aquire_internal(long, bool)
//{
//    mangled_ppc("?havok_proxy_aquire_internal@@YA_NJ_N@Z");
//};

//void havok_proxies_initialize_rigid_bodies(void)
//{
//    mangled_ppc("?havok_proxies_initialize_rigid_bodies@@YAXXZ");
//};

//void havok_proxies_dispose_rigid_bodies(void)
//{
//    mangled_ppc("?havok_proxies_dispose_rigid_bodies@@YAXXZ");
//};

//void havok_proxies_dispose_rigid_bodies_fast(void)
//{
//    mangled_ppc("?havok_proxies_dispose_rigid_bodies_fast@@YAXXZ");
//};

//void havok_proxies_update(void)
//{
//    mangled_ppc("?havok_proxies_update@@YAXXZ");
//};

//void havok_proxy_aquire(long)
//{
//    mangled_ppc("?havok_proxy_aquire@@YAXJ@Z");
//};

//void havok_proxies_apply_hard_key_frame(class hkVector4const &, class hkQuaternion const &, float, class hkVector4const &, class hkpRigidBody *)
//{
//    mangled_ppc("?havok_proxies_apply_hard_key_frame@@YAXABVhkVector4@@ABVhkQuaternion@@M0PAVhkpRigidBody@@@Z");
//};

//bool limit3d(class hkVector4&, float)
//{
//    mangled_ppc("?limit3d@@YA_NAAVhkVector4@@M@Z");
//};

//void havok_proxies_move(void)
//{
//    mangled_ppc("?havok_proxies_move@@YAXXZ");
//};

//long havok_proxy_rigid_bodies_get(class s_static_array<class hkpRigidBody *, 16> *)
//{
//    mangled_ppc("?havok_proxy_rigid_bodies_get@@YAJPAV?$s_static_array@PAVhkpRigidBody@@$0BA@@@@Z");
//};

//void havok_proxy_get_transform_for_object(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?havok_proxy_get_transform_for_object@@YAXJPAUreal_matrix4x3@@@Z");
//};

//bool is_player_controlled_object(long)
//{
//    mangled_ppc("?is_player_controlled_object@@YA_NJ@Z");
//};

//long object_get_havok_proxy_index(long)
//{
//    mangled_ppc("?object_get_havok_proxy_index@@YAJJ@Z");
//};

//void havok_proxies_render_debug(void)
//{
//    mangled_ppc("?havok_proxies_render_debug@@YAXXZ");
//};

//public: void c_data_iterator<struct s_havok_proxy_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_havok_proxy_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_havok_proxy_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_havok_proxy_datum@@@@QAA_NXZ");
//};

//public: struct s_havok_proxy_datum * c_data_iterator<struct s_havok_proxy_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_havok_proxy_datum@@@@QBAPAUs_havok_proxy_datum@@XZ");
//};

//public: long c_data_iterator<struct s_havok_proxy_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_havok_proxy_datum@@@@QBAJXZ");
//};

//public: void hkVector4::setMul4(class hkSimdReal const &, class hkVector4const &)
//{
//    mangled_ppc("?setMul4@hkVector4@@QAAXABVhkSimdReal@@ABV1@@Z");
//};

//public: class hkSimdReal hkVector4::lengthSquared3(void) const
//{
//    mangled_ppc("?lengthSquared3@hkVector4@@QBA?AVhkSimdReal@@XZ");
//};

//public: void hkVector4::setRotatedDir(class hkQuaternion const &, class hkVector4const &)
//{
//    mangled_ppc("?setRotatedDir@hkVector4@@QAAXABVhkQuaternion@@ABV1@@Z");
//};

//public: struct __vector4& hkVector4::getQuad(void)
//{
//    mangled_ppc("?getQuad@hkVector4@@QAAAAU__vector4@@XZ");
//};

//public: void hkVector4::addMul4(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?addMul4@hkVector4@@QAAXABV1@0@Z");
//};

//public: void hkVector4::setAddMul4(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setAddMul4@hkVector4@@QAAXABV1@00@Z");
//};

//public: void hkVector4::broadcast(int)
//{
//    mangled_ppc("?broadcast@hkVector4@@QAAXH@Z");
//};

//public: void hkQuaternion::setMulInverse(class hkQuaternion const &, class hkQuaternion const &)
//{
//    mangled_ppc("?setMulInverse@hkQuaternion@@QAAXABV1@0@Z");
//};

//public: void hkVector4::subMul4(class hkSimdReal const &, class hkVector4const &)
//{
//    mangled_ppc("?subMul4@hkVector4@@QAAXABVhkSimdReal@@ABV1@@Z");
//};

//public: class hkSimdReal hkVector4::dot4(class hkVector4const &) const
//{
//    mangled_ppc("?dot4@hkVector4@@QBA?AVhkSimdReal@@ABV1@@Z");
//};

//public: float hkQuaternion::getAngle(void) const
//{
//    mangled_ppc("?getAngle@hkQuaternion@@QBAMXZ");
//};

//float hkMath::fabs(float)
//{
//    mangled_ppc("?fabs@hkMath@@YAMM@Z");
//};

//float hkMath::acos(float)
//{
//    mangled_ppc("?acos@hkMath@@YAMM@Z");
//};

//public: class hkBool hkQuaternion::hasValidAxis(void) const
//{
//    mangled_ppc("?hasValidAxis@hkQuaternion@@QBA?AVhkBool@@XZ");
//};

//public: void hkQuaternion::getAxis(class hkVector4&) const
//{
//    mangled_ppc("?getAxis@hkQuaternion@@QBAXAAVhkVector4@@@Z");
//};

//public: int hkVector4Comparison::anyIsSet(enum hkVector4Comparison::Mask) const
//{
//    mangled_ppc("?anyIsSet@hkVector4Comparison@@QBAHW4Mask@1@@Z");
//};

//public: class hkVector4Comparison hkVector4::compareLessThan4(class hkVector4const &) const
//{
//    mangled_ppc("?compareLessThan4@hkVector4@@QBA?AVhkVector4Comparison@@ABV1@@Z");
//};

//public: void hkVector4::normalize3(void)
//{
//    mangled_ppc("?normalize3@hkVector4@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_havok_proxy_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_havok_proxy_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_havok_proxy_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_havok_proxy_data_allocator@@YAXXZ");
//};

