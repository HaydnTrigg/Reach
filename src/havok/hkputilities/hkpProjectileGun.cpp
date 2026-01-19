/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpGunProjectile::`vftable'{for `hkpContactListener'}; // "??_7hkpGunProjectile@@6BhkpContactListener@@@"
// const hkpGunProjectile::`vftable'{for `hkReferencedObject'}; // "??_7hkpGunProjectile@@6BhkReferencedObject@@@"
// const hkpGunProjectile::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkpGunProjectile@@6BhkReferencedObject@@@"
// hkpGunProjectile::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpGunProjectile@@8"
// hkpGunProjectile::`RTTI Base Class Array'; // "??_R2hkpGunProjectile@@8"
// hkpGunProjectile::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpGunProjectile@@8"
// hkpContactListener::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@hkpContactListener@@8"
// hkpContactListener::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpContactListener@@8"
// hkpContactListener::`RTTI Base Class Array'; // "??_R2hkpContactListener@@8"
// hkpContactListener::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpContactListener@@8"
// const hkpGunProjectile::`RTTI Complete Object Locator'{for `hkpContactListener'}; // "??_R4hkpGunProjectile@@6BhkpContactListener@@@"
// const hkpContactListener::`RTTI Complete Object Locator'; // "??_R4hkpContactListener@@6B@"
// const hkpProjectileGun::`RTTI Complete Object Locator'; // "??_R4hkpProjectileGun@@6B@"
// hkpProjectileGun::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpProjectileGun@@8"
// hkpProjectileGun::`RTTI Base Class Array'; // "??_R2hkpProjectileGun@@8"
// hkpProjectileGun::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpProjectileGun@@8"
// hkpFirstPersonGun::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpFirstPersonGun@@8"
// hkpFirstPersonGun::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpFirstPersonGun@@8"
// hkpFirstPersonGun::`RTTI Base Class Array'; // "??_R2hkpFirstPersonGun@@8"
// class hkpGunProjectile::`RTTI Type Descriptor'; // "??_R0?AVhkpGunProjectile@@@8"
// class hkpContactListener::`RTTI Type Descriptor'; // "??_R0?AVhkpContactListener@@@8"
// class hkpProjectileGun::`RTTI Type Descriptor'; // "??_R0?AVhkpProjectileGun@@@8"
// class hkpFirstPersonGun::`RTTI Type Descriptor'; // "??_R0?AVhkpFirstPersonGun@@@8"

// public: hkpGunProjectile::hkpGunProjectile(class hkpProjectileGun *, class hkpRigidBody *);
// public: virtual hkpGunProjectile::~hkpGunProjectile(void);
// public: void hkpGunProjectile::destroy(void);
// public: void hkpGunProjectile::addToWorld(class hkpWorld *);
// public: void hkpGunProjectile::removeFromWorld(void);
// public: virtual void hkpGunProjectile::onDestroy(void);
// private: void hkpGunProjectile::_destroyBody(void);
// public: void hkpGunProjectile::update(float);
// public: void hkpGunProjectile::setHitListening(bool);
// public: static void hkpGunProjectile::flyTrue(class hkpRigidBody *, float, float);
// public: hkpProjectileGun::hkpProjectileGun(class hkpWorld *, class hkdWorld *);
// public: hkpProjectileGun::hkpProjectileGun(class hkFinishLoadedObjectFlag);
// public: virtual hkpProjectileGun::~hkpProjectileGun(void);
// protected: void hkpProjectileGun::clearProjectiles(void);
// protected: void hkpProjectileGun::destroyAgedProjectiles(float);
// protected: void hkpProjectileGun::updateProjectiles(float);
// protected: void hkpProjectileGun::clearHitProjectiles(void);
// protected: void hkpProjectileGun::removeDestroyedProjectiles(void);
// protected: void hkpProjectileGun::addProjectile(class hkpGunProjectile *);
// public: virtual void hkpProjectileGun::fireGun(class hkpWorld *, class hkTransform const &);
// public: virtual void hkpProjectileGun::stepGun(float, class hkpWorld *, class hkpRigidBody const *, class hkTransform const &, bool, bool);
// public: virtual void hkpProjectileGun::onUpdate(float, class hkpWorld *, class hkpRigidBody const *, class hkTransform const &, bool, bool);
// protected: class hkpGunProjectile * hkpProjectileGun::getFirstActiveProjectile(void) const;
// public: virtual void hkpProjectileGun::reset(class hkpWorld *);
// public: virtual void hkpGunProjectile::onHit(class hkpContactPointEvent const &);
// public: virtual void hkpGunProjectile::onUpdate(float);
// private: virtual void hkpGunProjectile::contactPointCallback(class hkpContactPointEvent const &);
// merged_83F313A0;
// public: static void hkpGunProjectile::operator delete(void *);
// public: bool hkpGunProjectile::isDestroyed(void) const;
// public: bool hkpGunProjectile::isInWorld(void) const;
// public: bool hkpGunProjectile::isHitListening(void);
// public: virtual void hkpFirstPersonGun::initGun(class hkpWorld *);
// public: virtual void hkpProjectileGun::onGunFired(class hkpWorld *, class hkTransform const &);
// merged_83F31550;
// public: static void hkpProjectileGun::operator delete(void *);
// public: float hkpGunProjectile::getExistanceTime(void) const;
// public: void hkpGunProjectile::clearHit(void);
// public: class hkpProjectileGun * hkpGunProjectile::getGun(void) const;
// public: hkFlags<enum hkpGunProjectile::Flags, unsigned char>::hkFlags<enum hkpGunProjectile::Flags, unsigned char>(unsigned char);
// public: void hkFlags<enum hkpGunProjectile::Flags, unsigned char>::orWith(unsigned char);
// public: void hkFlags<enum hkpGunProjectile::Flags, unsigned char>::andWith(unsigned char);
// public: unsigned char hkFlags<enum hkpGunProjectile::Flags, unsigned char>::get(void) const;
// public: hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::pushBack(class hkpGunProjectile *const &);
// public: hkArrayBase<class hkpGunProjectile *>::hkArrayBase<class hkpGunProjectile *>(void);
// public: class hkpGunProjectile *const & hkArrayBase<class hkpGunProjectile *>::operator[](int) const;
// public: class hkpGunProjectile *& hkArrayBase<class hkpGunProjectile *>::operator[](int);
// public: int hkArrayBase<class hkpGunProjectile *>::getSize(void) const;
// public: void hkArrayBase<class hkpGunProjectile *>::clear(void);
// public: void hkArrayBase<class hkpGunProjectile *>::removeAt(int);
// public: void hkArrayBase<class hkpGunProjectile *>::_pushBack(class hkMemoryAllocator &, class hkpGunProjectile *const &);
// public: hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::~hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpGunProjectile *>::~hkArrayBase<class hkpGunProjectile *>(void);
// public: void hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<class hkpGunProjectile *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpGunProjectile *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpGunProjectile *>(class hkpGunProjectile **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpGunProjectile *>(class hkpGunProjectile **, int, class hkpGunProjectile *const &, struct hkTraitBool<1>);
// [thunk]: public: virtual void * hkpGunProjectile::`vector deleting destructor'(unsigned int);

//public: hkpGunProjectile::hkpGunProjectile(class hkpProjectileGun *, class hkpRigidBody *)
//{
//    mangled_ppc("??0hkpGunProjectile@@QAA@PAVhkpProjectileGun@@PAVhkpRigidBody@@@Z");
//};

//public: virtual hkpGunProjectile::~hkpGunProjectile(void)
//{
//    mangled_ppc("??1hkpGunProjectile@@UAA@XZ");
//};

//public: void hkpGunProjectile::destroy(void)
//{
//    mangled_ppc("?destroy@hkpGunProjectile@@QAAXXZ");
//};

//public: void hkpGunProjectile::addToWorld(class hkpWorld *)
//{
//    mangled_ppc("?addToWorld@hkpGunProjectile@@QAAXPAVhkpWorld@@@Z");
//};

//public: void hkpGunProjectile::removeFromWorld(void)
//{
//    mangled_ppc("?removeFromWorld@hkpGunProjectile@@QAAXXZ");
//};

//public: virtual void hkpGunProjectile::onDestroy(void)
//{
//    mangled_ppc("?onDestroy@hkpGunProjectile@@UAAXXZ");
//};

//private: void hkpGunProjectile::_destroyBody(void)
//{
//    mangled_ppc("?_destroyBody@hkpGunProjectile@@AAAXXZ");
//};

//public: void hkpGunProjectile::update(float)
//{
//    mangled_ppc("?update@hkpGunProjectile@@QAAXM@Z");
//};

//public: void hkpGunProjectile::setHitListening(bool)
//{
//    mangled_ppc("?setHitListening@hkpGunProjectile@@QAAX_N@Z");
//};

//public: static void hkpGunProjectile::flyTrue(class hkpRigidBody *, float, float)
//{
//    mangled_ppc("?flyTrue@hkpGunProjectile@@SAXPAVhkpRigidBody@@MM@Z");
//};

//public: hkpProjectileGun::hkpProjectileGun(class hkpWorld *, class hkdWorld *)
//{
//    mangled_ppc("??0hkpProjectileGun@@QAA@PAVhkpWorld@@PAVhkdWorld@@@Z");
//};

//public: hkpProjectileGun::hkpProjectileGun(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpProjectileGun@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual hkpProjectileGun::~hkpProjectileGun(void)
//{
//    mangled_ppc("??1hkpProjectileGun@@UAA@XZ");
//};

//protected: void hkpProjectileGun::clearProjectiles(void)
//{
//    mangled_ppc("?clearProjectiles@hkpProjectileGun@@IAAXXZ");
//};

//protected: void hkpProjectileGun::destroyAgedProjectiles(float)
//{
//    mangled_ppc("?destroyAgedProjectiles@hkpProjectileGun@@IAAXM@Z");
//};

//protected: void hkpProjectileGun::updateProjectiles(float)
//{
//    mangled_ppc("?updateProjectiles@hkpProjectileGun@@IAAXM@Z");
//};

//protected: void hkpProjectileGun::clearHitProjectiles(void)
//{
//    mangled_ppc("?clearHitProjectiles@hkpProjectileGun@@IAAXXZ");
//};

//protected: void hkpProjectileGun::removeDestroyedProjectiles(void)
//{
//    mangled_ppc("?removeDestroyedProjectiles@hkpProjectileGun@@IAAXXZ");
//};

//protected: void hkpProjectileGun::addProjectile(class hkpGunProjectile *)
//{
//    mangled_ppc("?addProjectile@hkpProjectileGun@@IAAXPAVhkpGunProjectile@@@Z");
//};

//public: virtual void hkpProjectileGun::fireGun(class hkpWorld *, class hkTransform const &)
//{
//    mangled_ppc("?fireGun@hkpProjectileGun@@UAAXPAVhkpWorld@@ABVhkTransform@@@Z");
//};

//public: virtual void hkpProjectileGun::stepGun(float, class hkpWorld *, class hkpRigidBody const *, class hkTransform const &, bool, bool)
//{
//    mangled_ppc("?stepGun@hkpProjectileGun@@UAAXMPAVhkpWorld@@PBVhkpRigidBody@@ABVhkTransform@@_N3@Z");
//};

//public: virtual void hkpProjectileGun::onUpdate(float, class hkpWorld *, class hkpRigidBody const *, class hkTransform const &, bool, bool)
//{
//    mangled_ppc("?onUpdate@hkpProjectileGun@@UAAXMPAVhkpWorld@@PBVhkpRigidBody@@ABVhkTransform@@_N3@Z");
//};

//protected: class hkpGunProjectile * hkpProjectileGun::getFirstActiveProjectile(void) const
//{
//    mangled_ppc("?getFirstActiveProjectile@hkpProjectileGun@@IBAPAVhkpGunProjectile@@XZ");
//};

//public: virtual void hkpProjectileGun::reset(class hkpWorld *)
//{
//    mangled_ppc("?reset@hkpProjectileGun@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpGunProjectile::onHit(class hkpContactPointEvent const &)
//{
//    mangled_ppc("?onHit@hkpGunProjectile@@UAAXABVhkpContactPointEvent@@@Z");
//};

//public: virtual void hkpGunProjectile::onUpdate(float)
//{
//    mangled_ppc("?onUpdate@hkpGunProjectile@@UAAXM@Z");
//};

//private: virtual void hkpGunProjectile::contactPointCallback(class hkpContactPointEvent const &)
//{
//    mangled_ppc("?contactPointCallback@hkpGunProjectile@@EAAXABVhkpContactPointEvent@@@Z");
//};

//merged_83F313A0
//{
//    mangled_ppc("merged_83F313A0");
//};

//public: static void hkpGunProjectile::operator delete(void *)
//{
//    mangled_ppc("??3hkpGunProjectile@@SAXPAX@Z");
//};

//public: bool hkpGunProjectile::isDestroyed(void) const
//{
//    mangled_ppc("?isDestroyed@hkpGunProjectile@@QBA_NXZ");
//};

//public: bool hkpGunProjectile::isInWorld(void) const
//{
//    mangled_ppc("?isInWorld@hkpGunProjectile@@QBA_NXZ");
//};

//public: bool hkpGunProjectile::isHitListening(void)
//{
//    mangled_ppc("?isHitListening@hkpGunProjectile@@QAA_NXZ");
//};

//public: virtual void hkpFirstPersonGun::initGun(class hkpWorld *)
//{
//    mangled_ppc("?initGun@hkpFirstPersonGun@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpProjectileGun::onGunFired(class hkpWorld *, class hkTransform const &)
//{
//    mangled_ppc("?onGunFired@hkpProjectileGun@@UAAXPAVhkpWorld@@ABVhkTransform@@@Z");
//};

//merged_83F31550
//{
//    mangled_ppc("merged_83F31550");
//};

//public: static void hkpProjectileGun::operator delete(void *)
//{
//    mangled_ppc("??3hkpProjectileGun@@SAXPAX@Z");
//};

//public: float hkpGunProjectile::getExistanceTime(void) const
//{
//    mangled_ppc("?getExistanceTime@hkpGunProjectile@@QBAMXZ");
//};

//public: void hkpGunProjectile::clearHit(void)
//{
//    mangled_ppc("?clearHit@hkpGunProjectile@@QAAXXZ");
//};

//public: class hkpProjectileGun * hkpGunProjectile::getGun(void) const
//{
//    mangled_ppc("?getGun@hkpGunProjectile@@QBAPAVhkpProjectileGun@@XZ");
//};

//public: hkFlags<enum hkpGunProjectile::Flags, unsigned char>::hkFlags<enum hkpGunProjectile::Flags, unsigned char>(unsigned char)
//{
//    mangled_ppc("??0?$hkFlags@W4Flags@hkpGunProjectile@@E@@QAA@E@Z");
//};

//public: void hkFlags<enum hkpGunProjectile::Flags, unsigned char>::orWith(unsigned char)
//{
//    mangled_ppc("?orWith@?$hkFlags@W4Flags@hkpGunProjectile@@E@@QAAXE@Z");
//};

//public: void hkFlags<enum hkpGunProjectile::Flags, unsigned char>::andWith(unsigned char)
//{
//    mangled_ppc("?andWith@?$hkFlags@W4Flags@hkpGunProjectile@@E@@QAAXE@Z");
//};

//public: unsigned char hkFlags<enum hkpGunProjectile::Flags, unsigned char>::get(void) const
//{
//    mangled_ppc("?get@?$hkFlags@W4Flags@hkpGunProjectile@@E@@QBAEXZ");
//};

//public: hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpGunProjectile@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::pushBack(class hkpGunProjectile *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpGunProjectile@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpGunProjectile@@@Z");
//};

//public: hkArrayBase<class hkpGunProjectile *>::hkArrayBase<class hkpGunProjectile *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpGunProjectile@@@@QAA@XZ");
//};

//public: class hkpGunProjectile *const & hkArrayBase<class hkpGunProjectile *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpGunProjectile@@@@QBAABQAVhkpGunProjectile@@H@Z");
//};

//public: class hkpGunProjectile *& hkArrayBase<class hkpGunProjectile *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpGunProjectile@@@@QAAAAPAVhkpGunProjectile@@H@Z");
//};

//public: int hkArrayBase<class hkpGunProjectile *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpGunProjectile@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpGunProjectile *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpGunProjectile@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpGunProjectile *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAVhkpGunProjectile@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkpGunProjectile *>::_pushBack(class hkMemoryAllocator &, class hkpGunProjectile *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpGunProjectile@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpGunProjectile@@@Z");
//};

//public: hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::~hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpGunProjectile@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpGunProjectile *>::~hkArrayBase<class hkpGunProjectile *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpGunProjectile@@@@QAA@XZ");
//};

//public: void hkArray<class hkpGunProjectile *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpGunProjectile@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkpGunProjectile *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpGunProjectile@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpGunProjectile *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpGunProjectile@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpGunProjectile *>(class hkpGunProjectile **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpGunProjectile@@@hkArrayUtil@@SAXPAPAVhkpGunProjectile@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpGunProjectile *>(class hkpGunProjectile **, int, class hkpGunProjectile *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpGunProjectile@@@hkArrayUtil@@SAXPAPAVhkpGunProjectile@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//[thunk]: public: virtual void * hkpGunProjectile::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpGunProjectile@@W7AAPAXI@Z");
//};

