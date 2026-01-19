/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_group_filter::`vftable'{for `hkpRayCollidableFilter'}; // "??_7c_group_filter@@6BhkpRayCollidableFilter@@@"
// const c_group_filter::`vftable'{for `hkpRayShapeCollectionFilter'}; // "??_7c_group_filter@@6BhkpRayShapeCollectionFilter@@@"
// const c_group_filter::`vftable'{for `hkpShapeCollectionFilter'}; // "??_7c_group_filter@@6BhkpShapeCollectionFilter@@@"
// const c_group_filter::`vftable'{for `hkpCollidableCollidableFilter'}; // "??_7c_group_filter@@6BhkpCollidableCollidableFilter@@@"
// const c_group_filter::`vftable'{for `hkReferencedObject'}; // "??_7c_group_filter@@6BhkReferencedObject@@@"

// class hkpGroupFilter * havok_initialize_collision_filter(void);
// void havok_collision_filter_build(struct s_havok_collision_filter_definition *);
// public: c_group_filter::c_group_filter(void);
// public: virtual int hkpGroupFilter::dummyUnused(void);
// public: virtual class hkBool c_group_filter::isCollisionEnabled(class hkpCollidable const &, class hkpCollidable const &) const;
// public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, class hkpShapeContainer const &, unsigned int, unsigned int) const;
// public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const;
// public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpShapeRayCastInput const &, class hkpShape const &, class hkpShapeContainer const &, unsigned int) const;
// public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpWorldRayCastInput const &, class hkpCollidable const &) const;
// private: bool c_group_filter::colllision_early_out_asymetrical(class hkpCollidable const *, class hkpCollidable const *, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const;
// private: bool c_group_filter::is_mopp_vs_mopp_collision(class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const;
// private: bool c_group_filter::is_mopp_vs_mopp_collision(class hkpCollidable const &, class hkpCollidable const &) const;
// private: static bool c_group_filter::is_dead_sink_surface(enum e_havok_group, class hkpShape const &, unsigned int);
// private: static bool c_group_filter::is_dead_environment_shape_key(enum e_havok_group, class hkpShape const &, unsigned int);
// private: bool c_group_filter::collidable_b_evalulate_primitive_collision_group(class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int, bool *) const;
// private: bool c_group_filter::collidable_b_evalulate_primitive_collision_group(class hkpCdBody const &, class hkpCdBody const &, class hkpShape const *, class hkpShape const *, bool *) const;
// public: static int hkpGroupFilter::getSystemGroupFromFilterInfo(unsigned int);
// private: static bool c_group_filter::is_phantom_shape_versus_environment_collision(class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int);
// private: bool c_group_filter::is_phantom_shape_versus_phantom_collision(class hkpCollidable const *, class hkpCollidable const *, bool *) const;
// private: static bool c_group_filter::is_phantom_shape_a_versus_phantom_b_collision(class hkpCollidable const *, class hkpCollidable const *, bool *);
// private: static bool c_group_filter::is_disabled_shape_vs_phantom_collision(class hkpCollidable const *, class hkpCollidable const *, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int);
// merged_83474448;
// public: virtual c_group_filter::~c_group_filter(void);
// enum e_havok_group havok_entity_get_default_group_safe(class hkpRigidBody const *);
// void havok_collision_filter_fixup(struct s_havok_collision_filter_definition *);
// public: c_group_filter::c_group_filter(class hkFinishLoadedObjectFlag);
// public: hkpGroupFilter::hkpGroupFilter(class hkFinishLoadedObjectFlag);
// merged_834746B8;
// enum e_havok_group havok_group_from_havok_group_mask_build(unsigned long);
// [thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int);
// public: static void hkpCollisionFilter::operator delete(void *);
// public: static void * hkpCollisionFilter::operator new(unsigned int, void *);
// public: hkpCollisionFilter::hkpCollisionFilter(class hkFinishLoadedObjectFlag);
// merged_83474AD0;
// public: hkpCollidableCollidableFilter::hkpCollidableCollidableFilter(void);
// merged_83474B38;
// public: virtual hkpCollidableCollidableFilter::~hkpCollidableCollidableFilter(void);
// public: hkpShapeCollectionFilter::hkpShapeCollectionFilter(void);
// merged_83474BB8;
// public: virtual hkpShapeCollectionFilter::~hkpShapeCollectionFilter(void);
// public: hkpRayShapeCollectionFilter::hkpRayShapeCollectionFilter(void);
// merged_83474C38;
// public: virtual hkpRayShapeCollectionFilter::~hkpRayShapeCollectionFilter(void);
// public: hkpRayCollidableFilter::hkpRayCollidableFilter(void);
// merged_83474CB8;
// public: virtual hkpRayCollidableFilter::~hkpRayCollidableFilter(void);
// public: virtual hkpCollisionFilter::~hkpCollisionFilter(void);
// public: hkEnum<enum hkpCollisionFilter::hkpFilterType, unsigned int>::hkEnum<enum hkpCollisionFilter::hkpFilterType, unsigned int>(void);
// public: void hkEnum<enum hkpCollisionFilter::hkpFilterType, unsigned int>::operator=(enum hkpCollisionFilter::hkpFilterType);
// [thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int);

//class hkpGroupFilter * havok_initialize_collision_filter(void)
//{
//    mangled_ppc("?havok_initialize_collision_filter@@YAPAVhkpGroupFilter@@XZ");
//};

//void havok_collision_filter_build(struct s_havok_collision_filter_definition *)
//{
//    mangled_ppc("?havok_collision_filter_build@@YAXPAUs_havok_collision_filter_definition@@@Z");
//};

//public: c_group_filter::c_group_filter(void)
//{
//    mangled_ppc("??0c_group_filter@@QAA@XZ");
//};

//public: virtual int hkpGroupFilter::dummyUnused(void)
//{
//    mangled_ppc("?dummyUnused@hkpGroupFilter@@UAAHXZ");
//};

//public: virtual class hkBool c_group_filter::isCollisionEnabled(class hkpCollidable const &, class hkpCollidable const &) const
//{
//    mangled_ppc("?isCollisionEnabled@c_group_filter@@UBA?AVhkBool@@ABVhkpCollidable@@0@Z");
//};

//public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, class hkpShapeContainer const &, unsigned int, unsigned int) const
//{
//    mangled_ppc("?isCollisionEnabled@c_group_filter@@UBA?AVhkBool@@ABUhkpCollisionInput@@ABVhkpCdBody@@1ABVhkpShapeContainer@@2II@Z");
//};

//public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const
//{
//    mangled_ppc("?isCollisionEnabled@c_group_filter@@UBA?AVhkBool@@ABUhkpCollisionInput@@ABVhkpCdBody@@1ABVhkpShapeContainer@@I@Z");
//};

//public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpShapeRayCastInput const &, class hkpShape const &, class hkpShapeContainer const &, unsigned int) const
//{
//    mangled_ppc("?isCollisionEnabled@c_group_filter@@UBA?AVhkBool@@ABUhkpShapeRayCastInput@@ABVhkpShape@@ABVhkpShapeContainer@@I@Z");
//};

//public: virtual class hkBool c_group_filter::isCollisionEnabled(struct hkpWorldRayCastInput const &, class hkpCollidable const &) const
//{
//    mangled_ppc("?isCollisionEnabled@c_group_filter@@UBA?AVhkBool@@ABUhkpWorldRayCastInput@@ABVhkpCollidable@@@Z");
//};

//private: bool c_group_filter::colllision_early_out_asymetrical(class hkpCollidable const *, class hkpCollidable const *, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const
//{
//    mangled_ppc("?colllision_early_out_asymetrical@c_group_filter@@ABA_NPBVhkpCollidable@@0ABVhkpCdBody@@1ABVhkpShapeContainer@@I@Z");
//};

//private: bool c_group_filter::is_mopp_vs_mopp_collision(class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const
//{
//    mangled_ppc("?is_mopp_vs_mopp_collision@c_group_filter@@ABA_NABVhkpCdBody@@0ABVhkpShapeContainer@@I@Z");
//};

//private: bool c_group_filter::is_mopp_vs_mopp_collision(class hkpCollidable const &, class hkpCollidable const &) const
//{
//    mangled_ppc("?is_mopp_vs_mopp_collision@c_group_filter@@ABA_NABVhkpCollidable@@0@Z");
//};

//private: static bool c_group_filter::is_dead_sink_surface(enum e_havok_group, class hkpShape const &, unsigned int)
//{
//    mangled_ppc("?is_dead_sink_surface@c_group_filter@@CA_NW4e_havok_group@@ABVhkpShape@@I@Z");
//};

//private: static bool c_group_filter::is_dead_environment_shape_key(enum e_havok_group, class hkpShape const &, unsigned int)
//{
//    mangled_ppc("?is_dead_environment_shape_key@c_group_filter@@CA_NW4e_havok_group@@ABVhkpShape@@I@Z");
//};

//private: bool c_group_filter::collidable_b_evalulate_primitive_collision_group(class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int, bool *) const
//{
//    mangled_ppc("?collidable_b_evalulate_primitive_collision_group@c_group_filter@@ABA_NABVhkpCdBody@@0ABVhkpShapeContainer@@IPA_N@Z");
//};

//private: bool c_group_filter::collidable_b_evalulate_primitive_collision_group(class hkpCdBody const &, class hkpCdBody const &, class hkpShape const *, class hkpShape const *, bool *) const
//{
//    mangled_ppc("?collidable_b_evalulate_primitive_collision_group@c_group_filter@@ABA_NABVhkpCdBody@@0PBVhkpShape@@1PA_N@Z");
//};

//public: static int hkpGroupFilter::getSystemGroupFromFilterInfo(unsigned int)
//{
//    mangled_ppc("?getSystemGroupFromFilterInfo@hkpGroupFilter@@SAHI@Z");
//};

//private: static bool c_group_filter::is_phantom_shape_versus_environment_collision(class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int)
//{
//    mangled_ppc("?is_phantom_shape_versus_environment_collision@c_group_filter@@CA_NABVhkpCdBody@@0ABVhkpShapeContainer@@I@Z");
//};

//private: bool c_group_filter::is_phantom_shape_versus_phantom_collision(class hkpCollidable const *, class hkpCollidable const *, bool *) const
//{
//    mangled_ppc("?is_phantom_shape_versus_phantom_collision@c_group_filter@@ABA_NPBVhkpCollidable@@0PA_N@Z");
//};

//private: static bool c_group_filter::is_phantom_shape_a_versus_phantom_b_collision(class hkpCollidable const *, class hkpCollidable const *, bool *)
//{
//    mangled_ppc("?is_phantom_shape_a_versus_phantom_b_collision@c_group_filter@@CA_NPBVhkpCollidable@@0PA_N@Z");
//};

//private: static bool c_group_filter::is_disabled_shape_vs_phantom_collision(class hkpCollidable const *, class hkpCollidable const *, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int)
//{
//    mangled_ppc("?is_disabled_shape_vs_phantom_collision@c_group_filter@@CA_NPBVhkpCollidable@@0ABVhkpCdBody@@1ABVhkpShapeContainer@@I@Z");
//};

//merged_83474448
//{
//    mangled_ppc("merged_83474448");
//};

//public: virtual c_group_filter::~c_group_filter(void)
//{
//    mangled_ppc("??1c_group_filter@@UAA@XZ");
//};

//enum e_havok_group havok_entity_get_default_group_safe(class hkpRigidBody const *)
//{
//    mangled_ppc("?havok_entity_get_default_group_safe@@YA?AW4e_havok_group@@PBVhkpRigidBody@@@Z");
//};

//void havok_collision_filter_fixup(struct s_havok_collision_filter_definition *)
//{
//    mangled_ppc("?havok_collision_filter_fixup@@YAXPAUs_havok_collision_filter_definition@@@Z");
//};

//public: c_group_filter::c_group_filter(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0c_group_filter@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkpGroupFilter::hkpGroupFilter(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpGroupFilter@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//merged_834746B8
//{
//    mangled_ppc("merged_834746B8");
//};

//enum e_havok_group havok_group_from_havok_group_mask_build(unsigned long)
//{
//    mangled_ppc("?havok_group_from_havok_group_mask_build@@YA?AW4e_havok_group@@K@Z");
//};

//[thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_group_filter@@WBA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpGroupFilter@@WBA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_group_filter@@WBE@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpGroupFilter@@WBE@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_group_filter@@W7AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpGroupFilter@@W7AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_group_filter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_group_filter@@WM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpGroupFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpGroupFilter@@WM@AAPAXI@Z");
//};

//public: static void hkpCollisionFilter::operator delete(void *)
//{
//    mangled_ppc("??3hkpCollisionFilter@@SAXPAX@Z");
//};

//public: static void * hkpCollisionFilter::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpCollisionFilter@@SAPAXIPAX@Z");
//};

//public: hkpCollisionFilter::hkpCollisionFilter(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpCollisionFilter@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//merged_83474AD0
//{
//    mangled_ppc("merged_83474AD0");
//};

//public: hkpCollidableCollidableFilter::hkpCollidableCollidableFilter(void)
//{
//    mangled_ppc("??0hkpCollidableCollidableFilter@@QAA@XZ");
//};

//merged_83474B38
//{
//    mangled_ppc("merged_83474B38");
//};

//public: virtual hkpCollidableCollidableFilter::~hkpCollidableCollidableFilter(void)
//{
//    mangled_ppc("??1hkpCollidableCollidableFilter@@UAA@XZ");
//};

//public: hkpShapeCollectionFilter::hkpShapeCollectionFilter(void)
//{
//    mangled_ppc("??0hkpShapeCollectionFilter@@QAA@XZ");
//};

//merged_83474BB8
//{
//    mangled_ppc("merged_83474BB8");
//};

//public: virtual hkpShapeCollectionFilter::~hkpShapeCollectionFilter(void)
//{
//    mangled_ppc("??1hkpShapeCollectionFilter@@UAA@XZ");
//};

//public: hkpRayShapeCollectionFilter::hkpRayShapeCollectionFilter(void)
//{
//    mangled_ppc("??0hkpRayShapeCollectionFilter@@QAA@XZ");
//};

//merged_83474C38
//{
//    mangled_ppc("merged_83474C38");
//};

//public: virtual hkpRayShapeCollectionFilter::~hkpRayShapeCollectionFilter(void)
//{
//    mangled_ppc("??1hkpRayShapeCollectionFilter@@UAA@XZ");
//};

//public: hkpRayCollidableFilter::hkpRayCollidableFilter(void)
//{
//    mangled_ppc("??0hkpRayCollidableFilter@@QAA@XZ");
//};

//merged_83474CB8
//{
//    mangled_ppc("merged_83474CB8");
//};

//public: virtual hkpRayCollidableFilter::~hkpRayCollidableFilter(void)
//{
//    mangled_ppc("??1hkpRayCollidableFilter@@UAA@XZ");
//};

//public: virtual hkpCollisionFilter::~hkpCollisionFilter(void)
//{
//    mangled_ppc("??1hkpCollisionFilter@@UAA@XZ");
//};

//public: hkEnum<enum hkpCollisionFilter::hkpFilterType, unsigned int>::hkEnum<enum hkpCollisionFilter::hkpFilterType, unsigned int>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpFilterType@hkpCollisionFilter@@I@@QAA@XZ");
//};

//public: void hkEnum<enum hkpCollisionFilter::hkpFilterType, unsigned int>::operator=(enum hkpCollisionFilter::hkpFilterType)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpFilterType@hkpCollisionFilter@@I@@QAAXW4hkpFilterType@hkpCollisionFilter@@@Z");
//};

//[thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpCollisionFilter@@W7AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpCollisionFilter@@WM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpCollisionFilter@@WBA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpCollisionFilter::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpCollisionFilter@@WBE@AAPAXI@Z");
//};

