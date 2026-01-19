/* ---------- headers */

#include "havok\hkserialize\hkResourceHandle.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkMemoryResourceHandle::`RTTI Complete Object Locator'; // "??_R4hkMemoryResourceHandle@@6B@"
// hkMemoryResourceHandle::`RTTI Class Hierarchy Descriptor'; // "??_R3hkMemoryResourceHandle@@8"
// hkMemoryResourceHandle::`RTTI Base Class Array'; // "??_R2hkMemoryResourceHandle@@8"
// hkMemoryResourceHandle::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkMemoryResourceHandle@@8"
// hkResourceHandle::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkResourceHandle@@8"
// hkResourceHandle::`RTTI Class Hierarchy Descriptor'; // "??_R3hkResourceHandle@@8"
// hkResourceHandle::`RTTI Base Class Array'; // "??_R2hkResourceHandle@@8"
// hkResourceBase::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkResourceBase@@8"
// hkResourceBase::`RTTI Class Hierarchy Descriptor'; // "??_R3hkResourceBase@@8"
// hkResourceBase::`RTTI Base Class Array'; // "??_R2hkResourceBase@@8"
// const hkResourceHandle::`RTTI Complete Object Locator'; // "??_R4hkResourceHandle@@6B@"
// const hkResourceBase::`RTTI Complete Object Locator'; // "??_R4hkResourceBase@@6B@"
// const hkMemoryResourceContainer::`RTTI Complete Object Locator'; // "??_R4hkMemoryResourceContainer@@6B@"
// hkMemoryResourceContainer::`RTTI Class Hierarchy Descriptor'; // "??_R3hkMemoryResourceContainer@@8"
// hkMemoryResourceContainer::`RTTI Base Class Array'; // "??_R2hkMemoryResourceContainer@@8"
// hkMemoryResourceContainer::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkMemoryResourceContainer@@8"
// hkResourceContainer::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkResourceContainer@@8"
// hkResourceContainer::`RTTI Class Hierarchy Descriptor'; // "??_R3hkResourceContainer@@8"
// hkResourceContainer::`RTTI Base Class Array'; // "??_R2hkResourceContainer@@8"
// const hkResourceContainer::`RTTI Complete Object Locator'; // "??_R4hkResourceContainer@@6B@"
// const hkContainerResourceMap::`RTTI Complete Object Locator'; // "??_R4hkContainerResourceMap@@6B@"
// hkContainerResourceMap::`RTTI Class Hierarchy Descriptor'; // "??_R3hkContainerResourceMap@@8"
// hkContainerResourceMap::`RTTI Base Class Array'; // "??_R2hkContainerResourceMap@@8"
// hkContainerResourceMap::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkContainerResourceMap@@8"
// hkResourceMap::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkResourceMap@@8"
// hkResourceMap::`RTTI Class Hierarchy Descriptor'; // "??_R3hkResourceMap@@8"
// hkResourceMap::`RTTI Base Class Array'; // "??_R2hkResourceMap@@8"
// const hkResourceMap::`RTTI Complete Object Locator'; // "??_R4hkResourceMap@@6B@"
// class hkMemoryResourceHandle::`RTTI Type Descriptor'; // "??_R0?AVhkMemoryResourceHandle@@@8"
// class hkResourceHandle::`RTTI Type Descriptor'; // "??_R0?AVhkResourceHandle@@@8"
// class hkResourceBase::`RTTI Type Descriptor'; // "??_R0?AVhkResourceBase@@@8"
// class hkMemoryResourceContainer::`RTTI Type Descriptor'; // "??_R0?AVhkMemoryResourceContainer@@@8"
// class hkResourceContainer::`RTTI Type Descriptor'; // "??_R0?AVhkResourceContainer@@@8"
// class hkContainerResourceMap::`RTTI Type Descriptor'; // "??_R0?AVhkContainerResourceMap@@@8"
// class hkResourceMap::`RTTI Type Descriptor'; // "??_R0?AVhkResourceMap@@@8"

// public: hkMemoryResourceHandle::hkMemoryResourceHandle(void);
// public: hkMemoryResourceHandle::hkMemoryResourceHandle(class hkFinishLoadedObjectFlag);
// public: virtual hkMemoryResourceHandle::~hkMemoryResourceHandle(void);
// public: virtual void hkMemoryResourceHandle::clearExternalLinks(void);
// public: virtual char const * hkMemoryResourceHandle::getName(class hkStringBuf &) const;
// public: virtual void hkMemoryResourceHandle::setName(char const *);
// public: virtual void * hkMemoryResourceHandle::getObject(void) const;
// public: virtual class hkClass const * hkMemoryResourceHandle::getClass(void) const;
// public: virtual void hkMemoryResourceHandle::setObject(void *, class hkClass const *);
// public: virtual void hkMemoryResourceHandle::addExternalLink(char const *, char const *);
// public: virtual void hkMemoryResourceHandle::removeExternalLink(char const *);
// public: virtual void hkMemoryResourceHandle::getExternalLinks(class hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator> &);
// public: virtual void hkResourceHandle::tryToResolveLinks(class hkResourceMap &);
// public: virtual void hkResourceContainer::tryToResolveLinks(class hkResourceMap &);
// public: void hkResourceContainer::getPath(class hkStringBuf &);
// public: void hkResourceContainer::findAllResourceRecursively(class hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator> &);
// public: void hkResourceContainer::findAllContainersRecursively(class hkArray<class hkResourceContainer *, struct hkContainerHeapAllocator> &);
// public: hkMemoryResourceContainer::hkMemoryResourceContainer(char const *);
// public: hkMemoryResourceContainer::hkMemoryResourceContainer(class hkFinishLoadedObjectFlag);
// public: virtual hkMemoryResourceContainer::~hkMemoryResourceContainer(void);
// public: virtual class hkResourceHandle * hkMemoryResourceContainer::createResource(char const *, void *, class hkClass const *);
// public: virtual class hkResourceHandle * hkMemoryResourceContainer::findResourceByName(char const *, class hkClass const *, class hkResourceHandle const *) const;
// public: virtual void hkMemoryResourceContainer::destroyResource(class hkResourceHandle *);
// public: virtual char const * hkMemoryResourceContainer::getName(class hkStringBuf &) const;
// public: virtual class hkResourceContainer * hkMemoryResourceContainer::createContainer(char const *);
// public: virtual void hkMemoryResourceContainer::destroyContainer(class hkResourceContainer *);
// public: virtual int hkMemoryResourceContainer::getNumContainers(void);
// public: virtual class hkResourceContainer * hkMemoryResourceContainer::findContainerByName(char const *, class hkResourceContainer const *) const;
// public: virtual enum hkResult hkMemoryResourceContainer::parentTo(class hkResourceContainer *);
// public: hkContainerResourceMap::hkContainerResourceMap(class hkResourceContainer *);
// public: virtual void * hkContainerResourceMap::findObjectByName(char const *, class hkClass const **) const;
// public: virtual enum hkResourceBase::Type hkResourceHandle::getType(void) const;
// protected: hkResourceHandle::hkResourceHandle(void);
// public: hkResourceBase::hkResourceBase(void);
// merged_846EBCC0;
// public: static void hkResourceBase::operator delete(void *);
// public: virtual hkResourceBase::~hkResourceBase(void);
// merged_846EBD88;
// public: static void hkResourceHandle::operator delete(void *);
// protected: virtual hkResourceHandle::~hkResourceHandle(void);
// merged_846EBE60;
// public: static void hkMemoryResourceHandle::operator delete(void *);
// protected: hkResourceHandle::hkResourceHandle(class hkFinishLoadedObjectFlag);
// public: hkResourceBase::hkResourceBase(class hkFinishLoadedObjectFlag);
// public: virtual enum hkResourceBase::Type hkResourceContainer::getType(void) const;
// protected: hkResourceContainer::hkResourceContainer(void);
// merged_846EBFE0;
// public: static void hkResourceContainer::operator delete(void *);
// protected: virtual hkResourceContainer::~hkResourceContainer(void);
// public: virtual int hkMemoryResourceContainer::getNumResources(void);
// public: virtual class hkResourceContainer * hkMemoryResourceContainer::getParent(void);
// merged_846EC0F8;
// public: static void hkMemoryResourceContainer::operator delete(void *);
// protected: hkResourceContainer::hkResourceContainer(class hkFinishLoadedObjectFlag);
// public: static void * hkMemoryResourceHandle::operator new(unsigned int);
// public: static void * hkMemoryResourceContainer::operator new(unsigned int);
// protected: hkResourceMap::hkResourceMap(void);
// merged_846EC2D0;
// protected: virtual hkResourceMap::~hkResourceMap(void);
// merged_846EC330;
// public: virtual hkContainerResourceMap::~hkContainerResourceMap(void);
// public: hkStringMap<class hkResourceHandle *>::~hkStringMap<class hkResourceHandle *>(void);
// public: hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: struct hkMemoryResourceHandle::ExternalLink & hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: void hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::pushBack(class hkRefPtr<class hkMemoryResourceHandle> const &);
// public: hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: void hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::pushBack(class hkRefPtr<class hkMemoryResourceContainer> const &);
// public: hkStringMap<class hkResourceHandle *>::hkStringMap<class hkResourceHandle *>(void);
// public: void hkStringMap<class hkResourceHandle *>::insert(char const *, class hkResourceHandle *);
// public: class hkResourceHandle * hkStringMap<class hkResourceHandle *>::getWithDefault(char const *, class hkResourceHandle *) const;
// public: hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::reserve(int);
// public: hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::pushBack(class hkResourceHandle *const &);
// public: void hkArray<class hkResourceContainer *, struct hkContainerHeapAllocator>::pushBack(class hkResourceContainer *const &);
// public: hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>(void);
// public: struct hkMemoryResourceHandle::ExternalLink & hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::operator[](int);
// public: int hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::getSize(void) const;
// public: void hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::clear(void);
// public: void hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::removeAt(int);
// public: struct hkMemoryResourceHandle::ExternalLink & hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::~hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::~hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>(void);
// public: hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >(void);
// public: class hkRefPtr<class hkMemoryResourceHandle> const & hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::operator[](int) const;
// public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::getSize(void) const;
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::removeAtAndCopy(int);
// public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::indexOf(class hkRefPtr<class hkMemoryResourceHandle> const &, int, int) const;
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::_pushBack(class hkMemoryAllocator &, class hkRefPtr<class hkMemoryResourceHandle> const &);
// public: hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::~hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >(void);
// public: hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >(void);
// public: class hkRefPtr<class hkMemoryResourceContainer> const & hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::operator[](int) const;
// public: class hkRefPtr<class hkMemoryResourceContainer> & hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::operator[](int);
// public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::getSize(void) const;
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::removeAt(int);
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::removeAtAndCopy(int);
// public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::indexOf(class hkRefPtr<class hkMemoryResourceContainer> const &, int, int) const;
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::_pushBack(class hkMemoryAllocator &, class hkRefPtr<class hkMemoryResourceContainer> const &);
// public: hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::~hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >(void);
// public: hkArrayBase<struct hkResourceHandle::Link>::hkArrayBase<struct hkResourceHandle::Link>(void);
// public: struct hkResourceHandle::Link & hkArrayBase<struct hkResourceHandle::Link>::operator[](int);
// public: int hkArrayBase<struct hkResourceHandle::Link>::getSize(void) const;
// public: void hkArrayBase<struct hkResourceHandle::Link>::clear(void);
// public: void hkArrayBase<struct hkResourceHandle::Link>::popBack(int);
// public: void hkArrayBase<struct hkResourceHandle::Link>::_reserve(class hkMemoryAllocator &, int);
// public: struct hkResourceHandle::Link * hkArrayBase<struct hkResourceHandle::Link>::expandByUnchecked(int);
// public: hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::~hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkResourceHandle::Link>::~hkArrayBase<struct hkResourceHandle::Link>(void);
// public: hkArrayBase<class hkResourceHandle *>::hkArrayBase<class hkResourceHandle *>(void);
// public: class hkResourceHandle *& hkArrayBase<class hkResourceHandle *>::operator[](int);
// public: int hkArrayBase<class hkResourceHandle *>::getSize(void) const;
// public: void hkArrayBase<class hkResourceHandle *>::_pushBack(class hkMemoryAllocator &, class hkResourceHandle *const &);
// public: hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::~hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkResourceHandle *>::~hkArrayBase<class hkResourceHandle *>(void);
// public: void hkArrayBase<class hkResourceContainer *>::_pushBack(class hkMemoryAllocator &, class hkResourceContainer *const &);
// public: hkRefPtr<class hkMemoryResourceContainer>::hkRefPtr<class hkMemoryResourceContainer>(class hkMemoryResourceContainer *);
// public: hkRefPtr<class hkMemoryResourceContainer>::~hkRefPtr<class hkMemoryResourceContainer>(void);
// public: class hkMemoryResourceContainer * hkRefPtr<class hkMemoryResourceContainer>::operator->(void) const;
// public: class hkMemoryResourceContainer * hkRefPtr<class hkMemoryResourceContainer>::operator class hkMemoryResourceContainer *(void) const;
// public: hkRefPtr<class hkMemoryResourceHandle>::hkRefPtr<class hkMemoryResourceHandle>(class hkMemoryResourceHandle *);
// public: hkRefPtr<class hkMemoryResourceHandle>::~hkRefPtr<class hkMemoryResourceHandle>(void);
// public: class hkMemoryResourceHandle * hkRefPtr<class hkMemoryResourceHandle>::operator class hkMemoryResourceHandle *(void) const;
// public: void hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::getCapacity(void) const;
// public: void hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkMemoryResourceHandle::ExternalLink>(struct hkMemoryResourceHandle::ExternalLink *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkMemoryResourceHandle::ExternalLink>(struct hkMemoryResourceHandle::ExternalLink *, int, struct hkTraitBool<0>);
// public: hkMemoryResourceHandle::ExternalLink::ExternalLink(void);
// public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::getCapacity(void) const;
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkRefPtr<class hkMemoryResourceHandle> >(class hkRefPtr<class hkMemoryResourceHandle> *, int, struct hkTraitBool<0>);
// public: class hkMemoryResourceHandle * hkRefPtr<class hkMemoryResourceHandle>::val(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkRefPtr<class hkMemoryResourceHandle> >(class hkRefPtr<class hkMemoryResourceHandle> *, int, class hkRefPtr<class hkMemoryResourceHandle> const &, struct hkTraitBool<0>);
// public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::getCapacity(void) const;
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkRefPtr<class hkMemoryResourceContainer> >(class hkRefPtr<class hkMemoryResourceContainer> *, int, struct hkTraitBool<0>);
// public: class hkMemoryResourceContainer * hkRefPtr<class hkMemoryResourceContainer>::val(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkRefPtr<class hkMemoryResourceContainer> >(class hkRefPtr<class hkMemoryResourceContainer> *, int, class hkRefPtr<class hkMemoryResourceContainer> const &, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkResourceHandle::Link>::getCapacity(void) const;
// public: void hkArrayBase<struct hkResourceHandle::Link>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkResourceHandle::Link>(struct hkResourceHandle::Link *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkResourceHandle::Link>(struct hkResourceHandle::Link *, int, struct hkTraitBool<0>);
// public: hkResourceHandle::Link::Link(void);
// public: hkClassMemberAccessor::hkClassMemberAccessor(void);
// public: int hkArrayBase<class hkResourceHandle *>::getCapacity(void) const;
// public: void hkArrayBase<class hkResourceHandle *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkResourceHandle *>(class hkResourceHandle **, int, class hkResourceHandle *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkResourceContainer *>::getCapacity(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkResourceContainer *>(class hkResourceContainer **, int, class hkResourceContainer *const &, struct hkTraitBool<1>);
// public: void * hkRefPtr<class hkMemoryResourceHandle>::`scalar deleting destructor'(unsigned int);
// public: void * hkRefPtr<class hkMemoryResourceContainer>::`scalar deleting destructor'(unsigned int);
// public: static void hkRefPtr<class hkMemoryResourceContainer>::operator delete(void *);
// public: static void hkRefPtr<class hkMemoryResourceHandle>::operator delete(void *);
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::clear(void);
// public: hkRefPtr<class hkMemoryResourceHandle>::hkRefPtr<class hkMemoryResourceHandle>(class hkRefPtr<class hkMemoryResourceHandle> const &);
// public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::clear(void);
// public: hkRefPtr<class hkMemoryResourceContainer>::hkRefPtr<class hkMemoryResourceContainer>(class hkRefPtr<class hkMemoryResourceContainer> const &);
// public: void hkArrayBase<class hkResourceHandle *>::clear(void);
// public: static void hkArrayUtil::destruct<class hkResourceHandle *>(class hkResourceHandle **, int, struct hkTraitBool<1>);

//public: hkMemoryResourceHandle::hkMemoryResourceHandle(void)
//{
//    mangled_ppc("??0hkMemoryResourceHandle@@QAA@XZ");
//};

//public: hkMemoryResourceHandle::hkMemoryResourceHandle(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkMemoryResourceHandle@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual hkMemoryResourceHandle::~hkMemoryResourceHandle(void)
//{
//    mangled_ppc("??1hkMemoryResourceHandle@@UAA@XZ");
//};

//public: virtual void hkMemoryResourceHandle::clearExternalLinks(void)
//{
//    mangled_ppc("?clearExternalLinks@hkMemoryResourceHandle@@UAAXXZ");
//};

//public: virtual char const * hkMemoryResourceHandle::getName(class hkStringBuf &) const
//{
//    mangled_ppc("?getName@hkMemoryResourceHandle@@UBAPBDAAVhkStringBuf@@@Z");
//};

//public: virtual void hkMemoryResourceHandle::setName(char const *)
//{
//    mangled_ppc("?setName@hkMemoryResourceHandle@@UAAXPBD@Z");
//};

//public: virtual void * hkMemoryResourceHandle::getObject(void) const
//{
//    mangled_ppc("?getObject@hkMemoryResourceHandle@@UBAPAXXZ");
//};

//public: virtual class hkClass const * hkMemoryResourceHandle::getClass(void) const
//{
//    mangled_ppc("?getClass@hkMemoryResourceHandle@@UBAPBVhkClass@@XZ");
//};

//public: virtual void hkMemoryResourceHandle::setObject(void *, class hkClass const *)
//{
//    mangled_ppc("?setObject@hkMemoryResourceHandle@@UAAXPAXPBVhkClass@@@Z");
//};

//public: virtual void hkMemoryResourceHandle::addExternalLink(char const *, char const *)
//{
//    mangled_ppc("?addExternalLink@hkMemoryResourceHandle@@UAAXPBD0@Z");
//};

//public: virtual void hkMemoryResourceHandle::removeExternalLink(char const *)
//{
//    mangled_ppc("?removeExternalLink@hkMemoryResourceHandle@@UAAXPBD@Z");
//};

//public: virtual void hkMemoryResourceHandle::getExternalLinks(class hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getExternalLinks@hkMemoryResourceHandle@@UAAXAAV?$hkArray@ULink@hkResourceHandle@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkResourceHandle::tryToResolveLinks(class hkResourceMap &)
//{
//    mangled_ppc("?tryToResolveLinks@hkResourceHandle@@UAAXAAVhkResourceMap@@@Z");
//};

//public: virtual void hkResourceContainer::tryToResolveLinks(class hkResourceMap &)
//{
//    mangled_ppc("?tryToResolveLinks@hkResourceContainer@@UAAXAAVhkResourceMap@@@Z");
//};

//public: void hkResourceContainer::getPath(class hkStringBuf &)
//{
//    mangled_ppc("?getPath@hkResourceContainer@@QAAXAAVhkStringBuf@@@Z");
//};

//public: void hkResourceContainer::findAllResourceRecursively(class hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?findAllResourceRecursively@hkResourceContainer@@QAAXAAV?$hkArray@PAVhkResourceHandle@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkResourceContainer::findAllContainersRecursively(class hkArray<class hkResourceContainer *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?findAllContainersRecursively@hkResourceContainer@@QAAXAAV?$hkArray@PAVhkResourceContainer@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: hkMemoryResourceContainer::hkMemoryResourceContainer(char const *)
//{
//    mangled_ppc("??0hkMemoryResourceContainer@@QAA@PBD@Z");
//};

//public: hkMemoryResourceContainer::hkMemoryResourceContainer(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkMemoryResourceContainer@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual hkMemoryResourceContainer::~hkMemoryResourceContainer(void)
//{
//    mangled_ppc("??1hkMemoryResourceContainer@@UAA@XZ");
//};

//public: virtual class hkResourceHandle * hkMemoryResourceContainer::createResource(char const *, void *, class hkClass const *)
//{
//    mangled_ppc("?createResource@hkMemoryResourceContainer@@UAAPAVhkResourceHandle@@PBDPAXPBVhkClass@@@Z");
//};

//public: virtual class hkResourceHandle * hkMemoryResourceContainer::findResourceByName(char const *, class hkClass const *, class hkResourceHandle const *) const
//{
//    mangled_ppc("?findResourceByName@hkMemoryResourceContainer@@UBAPAVhkResourceHandle@@PBDPBVhkClass@@PBV2@@Z");
//};

//public: virtual void hkMemoryResourceContainer::destroyResource(class hkResourceHandle *)
//{
//    mangled_ppc("?destroyResource@hkMemoryResourceContainer@@UAAXPAVhkResourceHandle@@@Z");
//};

//public: virtual char const * hkMemoryResourceContainer::getName(class hkStringBuf &) const
//{
//    mangled_ppc("?getName@hkMemoryResourceContainer@@UBAPBDAAVhkStringBuf@@@Z");
//};

//public: virtual class hkResourceContainer * hkMemoryResourceContainer::createContainer(char const *)
//{
//    mangled_ppc("?createContainer@hkMemoryResourceContainer@@UAAPAVhkResourceContainer@@PBD@Z");
//};

//public: virtual void hkMemoryResourceContainer::destroyContainer(class hkResourceContainer *)
//{
//    mangled_ppc("?destroyContainer@hkMemoryResourceContainer@@UAAXPAVhkResourceContainer@@@Z");
//};

//public: virtual int hkMemoryResourceContainer::getNumContainers(void)
//{
//    mangled_ppc("?getNumContainers@hkMemoryResourceContainer@@UAAHXZ");
//};

//public: virtual class hkResourceContainer * hkMemoryResourceContainer::findContainerByName(char const *, class hkResourceContainer const *) const
//{
//    mangled_ppc("?findContainerByName@hkMemoryResourceContainer@@UBAPAVhkResourceContainer@@PBDPBV2@@Z");
//};

//public: virtual enum hkResult hkMemoryResourceContainer::parentTo(class hkResourceContainer *)
//{
//    mangled_ppc("?parentTo@hkMemoryResourceContainer@@UAA?AW4hkResult@@PAVhkResourceContainer@@@Z");
//};

//public: hkContainerResourceMap::hkContainerResourceMap(class hkResourceContainer *)
//{
//    mangled_ppc("??0hkContainerResourceMap@@QAA@PAVhkResourceContainer@@@Z");
//};

//public: virtual void * hkContainerResourceMap::findObjectByName(char const *, class hkClass const **) const
//{
//    mangled_ppc("?findObjectByName@hkContainerResourceMap@@UBAPAXPBDPAPBVhkClass@@@Z");
//};

//public: virtual enum hkResourceBase::Type hkResourceHandle::getType(void) const
//{
//    mangled_ppc("?getType@hkResourceHandle@@UBA?AW4Type@hkResourceBase@@XZ");
//};

//protected: hkResourceHandle::hkResourceHandle(void)
//{
//    mangled_ppc("??0hkResourceHandle@@IAA@XZ");
//};

//public: hkResourceBase::hkResourceBase(void)
//{
//    mangled_ppc("??0hkResourceBase@@QAA@XZ");
//};

//merged_846EBCC0
//{
//    mangled_ppc("merged_846EBCC0");
//};

//public: static void hkResourceBase::operator delete(void *)
//{
//    mangled_ppc("??3hkResourceBase@@SAXPAX@Z");
//};

//public: virtual hkResourceBase::~hkResourceBase(void)
//{
//    mangled_ppc("??1hkResourceBase@@UAA@XZ");
//};

//merged_846EBD88
//{
//    mangled_ppc("merged_846EBD88");
//};

//public: static void hkResourceHandle::operator delete(void *)
//{
//    mangled_ppc("??3hkResourceHandle@@SAXPAX@Z");
//};

//protected: virtual hkResourceHandle::~hkResourceHandle(void)
//{
//    mangled_ppc("??1hkResourceHandle@@MAA@XZ");
//};

//merged_846EBE60
//{
//    mangled_ppc("merged_846EBE60");
//};

//public: static void hkMemoryResourceHandle::operator delete(void *)
//{
//    mangled_ppc("??3hkMemoryResourceHandle@@SAXPAX@Z");
//};

//protected: hkResourceHandle::hkResourceHandle(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkResourceHandle@@IAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkResourceBase::hkResourceBase(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkResourceBase@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual enum hkResourceBase::Type hkResourceContainer::getType(void) const
//{
//    mangled_ppc("?getType@hkResourceContainer@@UBA?AW4Type@hkResourceBase@@XZ");
//};

//protected: hkResourceContainer::hkResourceContainer(void)
//{
//    mangled_ppc("??0hkResourceContainer@@IAA@XZ");
//};

//merged_846EBFE0
//{
//    mangled_ppc("merged_846EBFE0");
//};

//public: static void hkResourceContainer::operator delete(void *)
//{
//    mangled_ppc("??3hkResourceContainer@@SAXPAX@Z");
//};

//protected: virtual hkResourceContainer::~hkResourceContainer(void)
//{
//    mangled_ppc("??1hkResourceContainer@@MAA@XZ");
//};

//public: virtual int hkMemoryResourceContainer::getNumResources(void)
//{
//    mangled_ppc("?getNumResources@hkMemoryResourceContainer@@UAAHXZ");
//};

//public: virtual class hkResourceContainer * hkMemoryResourceContainer::getParent(void)
//{
//    mangled_ppc("?getParent@hkMemoryResourceContainer@@UAAPAVhkResourceContainer@@XZ");
//};

//merged_846EC0F8
//{
//    mangled_ppc("merged_846EC0F8");
//};

//public: static void hkMemoryResourceContainer::operator delete(void *)
//{
//    mangled_ppc("??3hkMemoryResourceContainer@@SAXPAX@Z");
//};

//protected: hkResourceContainer::hkResourceContainer(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkResourceContainer@@IAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: static void * hkMemoryResourceHandle::operator new(unsigned int)
//{
//    mangled_ppc("??2hkMemoryResourceHandle@@SAPAXI@Z");
//};

//public: static void * hkMemoryResourceContainer::operator new(unsigned int)
//{
//    mangled_ppc("??2hkMemoryResourceContainer@@SAPAXI@Z");
//};

//protected: hkResourceMap::hkResourceMap(void)
//{
//    mangled_ppc("??0hkResourceMap@@IAA@XZ");
//};

//merged_846EC2D0
//{
//    mangled_ppc("merged_846EC2D0");
//};

//protected: virtual hkResourceMap::~hkResourceMap(void)
//{
//    mangled_ppc("??1hkResourceMap@@MAA@XZ");
//};

//merged_846EC330
//{
//    mangled_ppc("merged_846EC330");
//};

//public: virtual hkContainerResourceMap::~hkContainerResourceMap(void)
//{
//    mangled_ppc("??1hkContainerResourceMap@@UAA@XZ");
//};

//public: hkStringMap<class hkResourceHandle *>::~hkStringMap<class hkResourceHandle *>(void)
//{
//    mangled_ppc("??1?$hkStringMap@PAVhkResourceHandle@@@@QAA@XZ");
//};

//public: hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UExternalLink@hkMemoryResourceHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UExternalLink@hkMemoryResourceHandle@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: struct hkMemoryResourceHandle::ExternalLink & hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UExternalLink@hkMemoryResourceHandle@@UhkContainerHeapAllocator@@@@QAAAAUExternalLink@hkMemoryResourceHandle@@XZ");
//};

//public: hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkRefPtr@VhkMemoryResourceHandle@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@V?$hkRefPtr@VhkMemoryResourceHandle@@@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::pushBack(class hkRefPtr<class hkMemoryResourceHandle> const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@V?$hkRefPtr@VhkMemoryResourceHandle@@@@UhkContainerHeapAllocator@@@@QAAXABV?$hkRefPtr@VhkMemoryResourceHandle@@@@@Z");
//};

//public: hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkRefPtr@VhkMemoryResourceContainer@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@V?$hkRefPtr@VhkMemoryResourceContainer@@@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::pushBack(class hkRefPtr<class hkMemoryResourceContainer> const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@V?$hkRefPtr@VhkMemoryResourceContainer@@@@UhkContainerHeapAllocator@@@@QAAXABV?$hkRefPtr@VhkMemoryResourceContainer@@@@@Z");
//};

//public: hkStringMap<class hkResourceHandle *>::hkStringMap<class hkResourceHandle *>(void)
//{
//    mangled_ppc("??0?$hkStringMap@PAVhkResourceHandle@@@@QAA@XZ");
//};

//public: void hkStringMap<class hkResourceHandle *>::insert(char const *, class hkResourceHandle *)
//{
//    mangled_ppc("?insert@?$hkStringMap@PAVhkResourceHandle@@@@QAAXPBDPAVhkResourceHandle@@@Z");
//};

//public: class hkResourceHandle * hkStringMap<class hkResourceHandle *>::getWithDefault(char const *, class hkResourceHandle *) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@PAVhkResourceHandle@@@@QBAPAVhkResourceHandle@@PBDPAV2@@Z");
//};

//public: hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@ULink@hkResourceHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@ULink@hkResourceHandle@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkResourceHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::pushBack(class hkResourceHandle *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkResourceHandle@@UhkContainerHeapAllocator@@@@QAAXABQAVhkResourceHandle@@@Z");
//};

//public: void hkArray<class hkResourceContainer *, struct hkContainerHeapAllocator>::pushBack(class hkResourceContainer *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkResourceContainer@@UhkContainerHeapAllocator@@@@QAAXABQAVhkResourceContainer@@@Z");
//};

//public: hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAA@XZ");
//};

//public: struct hkMemoryResourceHandle::ExternalLink & hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAAAAUExternalLink@hkMemoryResourceHandle@@H@Z");
//};

//public: int hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAAXH@Z");
//};

//public: struct hkMemoryResourceHandle::ExternalLink & hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAAAAUExternalLink@hkMemoryResourceHandle@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::~hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UExternalLink@hkMemoryResourceHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::~hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAA@XZ");
//};

//public: class hkRefPtr<class hkMemoryResourceHandle> const & hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QBAABV?$hkRefPtr@VhkMemoryResourceHandle@@@@H@Z");
//};

//public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::indexOf(class hkRefPtr<class hkMemoryResourceHandle> const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QBAHABV?$hkRefPtr@VhkMemoryResourceHandle@@@@HH@Z");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::_pushBack(class hkMemoryAllocator &, class hkRefPtr<class hkMemoryResourceHandle> const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAAXAAVhkMemoryAllocator@@ABV?$hkRefPtr@VhkMemoryResourceHandle@@@@@Z");
//};

//public: hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkRefPtr@VhkMemoryResourceHandle@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::~hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAA@XZ");
//};

//public: class hkRefPtr<class hkMemoryResourceContainer> const & hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QBAABV?$hkRefPtr@VhkMemoryResourceContainer@@@@H@Z");
//};

//public: class hkRefPtr<class hkMemoryResourceContainer> & hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAAAAV?$hkRefPtr@VhkMemoryResourceContainer@@@@H@Z");
//};

//public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::indexOf(class hkRefPtr<class hkMemoryResourceContainer> const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QBAHABV?$hkRefPtr@VhkMemoryResourceContainer@@@@HH@Z");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::_pushBack(class hkMemoryAllocator &, class hkRefPtr<class hkMemoryResourceContainer> const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAAXAAVhkMemoryAllocator@@ABV?$hkRefPtr@VhkMemoryResourceContainer@@@@@Z");
//};

//public: hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkRefPtr@VhkMemoryResourceContainer@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::~hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkResourceHandle::Link>::hkArrayBase<struct hkResourceHandle::Link>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@ULink@hkResourceHandle@@@@QAA@XZ");
//};

//public: struct hkResourceHandle::Link & hkArrayBase<struct hkResourceHandle::Link>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@ULink@hkResourceHandle@@@@QAAAAULink@hkResourceHandle@@H@Z");
//};

//public: int hkArrayBase<struct hkResourceHandle::Link>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@ULink@hkResourceHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkResourceHandle::Link>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@ULink@hkResourceHandle@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkResourceHandle::Link>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@ULink@hkResourceHandle@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkResourceHandle::Link>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@ULink@hkResourceHandle@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkResourceHandle::Link * hkArrayBase<struct hkResourceHandle::Link>::expandByUnchecked(int)
//{
//    mangled_ppc("?expandByUnchecked@?$hkArrayBase@ULink@hkResourceHandle@@@@QAAPAULink@hkResourceHandle@@H@Z");
//};

//public: hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::~hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@ULink@hkResourceHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkResourceHandle::Link>::~hkArrayBase<struct hkResourceHandle::Link>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@ULink@hkResourceHandle@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkResourceHandle *>::hkArrayBase<class hkResourceHandle *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkResourceHandle@@@@QAA@XZ");
//};

//public: class hkResourceHandle *& hkArrayBase<class hkResourceHandle *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkResourceHandle@@@@QAAAAPAVhkResourceHandle@@H@Z");
//};

//public: int hkArrayBase<class hkResourceHandle *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkResourceHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkResourceHandle *>::_pushBack(class hkMemoryAllocator &, class hkResourceHandle *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkResourceHandle@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkResourceHandle@@@Z");
//};

//public: hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::~hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkResourceHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkResourceHandle *>::~hkArrayBase<class hkResourceHandle *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkResourceHandle@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkResourceContainer *>::_pushBack(class hkMemoryAllocator &, class hkResourceContainer *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkResourceContainer@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkResourceContainer@@@Z");
//};

//public: hkRefPtr<class hkMemoryResourceContainer>::hkRefPtr<class hkMemoryResourceContainer>(class hkMemoryResourceContainer *)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkMemoryResourceContainer@@@@QAA@PAVhkMemoryResourceContainer@@@Z");
//};

//public: hkRefPtr<class hkMemoryResourceContainer>::~hkRefPtr<class hkMemoryResourceContainer>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkMemoryResourceContainer@@@@QAA@XZ");
//};

//public: class hkMemoryResourceContainer * hkRefPtr<class hkMemoryResourceContainer>::operator->(void) const
//{
//    mangled_ppc("??C?$hkRefPtr@VhkMemoryResourceContainer@@@@QBAPAVhkMemoryResourceContainer@@XZ");
//};

//public: class hkMemoryResourceContainer * hkRefPtr<class hkMemoryResourceContainer>::operator class hkMemoryResourceContainer *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkMemoryResourceContainer@@@@QBAPAVhkMemoryResourceContainer@@XZ");
//};

//public: hkRefPtr<class hkMemoryResourceHandle>::hkRefPtr<class hkMemoryResourceHandle>(class hkMemoryResourceHandle *)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkMemoryResourceHandle@@@@QAA@PAVhkMemoryResourceHandle@@@Z");
//};

//public: hkRefPtr<class hkMemoryResourceHandle>::~hkRefPtr<class hkMemoryResourceHandle>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkMemoryResourceHandle@@@@QAA@XZ");
//};

//public: class hkMemoryResourceHandle * hkRefPtr<class hkMemoryResourceHandle>::operator class hkMemoryResourceHandle *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkMemoryResourceHandle@@@@QBAPAVhkMemoryResourceHandle@@XZ");
//};

//public: void hkArray<struct hkMemoryResourceHandle::ExternalLink, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UExternalLink@hkMemoryResourceHandle@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkRefPtr<class hkMemoryResourceHandle>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkRefPtr@VhkMemoryResourceHandle@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkRefPtr<class hkMemoryResourceContainer>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkRefPtr@VhkMemoryResourceContainer@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkResourceHandle::Link, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@ULink@hkResourceHandle@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkResourceHandle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkResourceHandle@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMemoryResourceHandle::ExternalLink>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UExternalLink@hkMemoryResourceHandle@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkMemoryResourceHandle::ExternalLink>(struct hkMemoryResourceHandle::ExternalLink *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UExternalLink@hkMemoryResourceHandle@@@hkArrayUtil@@SAXPAUExternalLink@hkMemoryResourceHandle@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkMemoryResourceHandle::ExternalLink>(struct hkMemoryResourceHandle::ExternalLink *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UExternalLink@hkMemoryResourceHandle@@@hkArrayUtil@@SAXPAUExternalLink@hkMemoryResourceHandle@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkMemoryResourceHandle::ExternalLink::ExternalLink(void)
//{
//    mangled_ppc("??0ExternalLink@hkMemoryResourceHandle@@QAA@XZ");
//};

//public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkRefPtr<class hkMemoryResourceHandle> >(class hkRefPtr<class hkMemoryResourceHandle> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@hkArrayUtil@@SAXPAV?$hkRefPtr@VhkMemoryResourceHandle@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: class hkMemoryResourceHandle * hkRefPtr<class hkMemoryResourceHandle>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkMemoryResourceHandle@@@@QBAPAVhkMemoryResourceHandle@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkRefPtr<class hkMemoryResourceHandle> >(class hkRefPtr<class hkMemoryResourceHandle> *, int, class hkRefPtr<class hkMemoryResourceHandle> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@hkArrayUtil@@SAXPAV?$hkRefPtr@VhkMemoryResourceHandle@@@@HABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkRefPtr<class hkMemoryResourceContainer> >(class hkRefPtr<class hkMemoryResourceContainer> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@hkArrayUtil@@SAXPAV?$hkRefPtr@VhkMemoryResourceContainer@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: class hkMemoryResourceContainer * hkRefPtr<class hkMemoryResourceContainer>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkMemoryResourceContainer@@@@QBAPAVhkMemoryResourceContainer@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkRefPtr<class hkMemoryResourceContainer> >(class hkRefPtr<class hkMemoryResourceContainer> *, int, class hkRefPtr<class hkMemoryResourceContainer> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@hkArrayUtil@@SAXPAV?$hkRefPtr@VhkMemoryResourceContainer@@@@HABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkResourceHandle::Link>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@ULink@hkResourceHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkResourceHandle::Link>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@ULink@hkResourceHandle@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkResourceHandle::Link>(struct hkResourceHandle::Link *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@ULink@hkResourceHandle@@@hkArrayUtil@@SAXPAULink@hkResourceHandle@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkResourceHandle::Link>(struct hkResourceHandle::Link *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@ULink@hkResourceHandle@@@hkArrayUtil@@SAXPAULink@hkResourceHandle@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkResourceHandle::Link::Link(void)
//{
//    mangled_ppc("??0Link@hkResourceHandle@@QAA@XZ");
//};

//public: hkClassMemberAccessor::hkClassMemberAccessor(void)
//{
//    mangled_ppc("??0hkClassMemberAccessor@@QAA@XZ");
//};

//public: int hkArrayBase<class hkResourceHandle *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkResourceHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkResourceHandle *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkResourceHandle@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkResourceHandle *>(class hkResourceHandle **, int, class hkResourceHandle *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkResourceHandle@@@hkArrayUtil@@SAXPAPAVhkResourceHandle@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkResourceContainer *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkResourceContainer@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkResourceContainer *>(class hkResourceContainer **, int, class hkResourceContainer *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkResourceContainer@@@hkArrayUtil@@SAXPAPAVhkResourceContainer@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: void * hkRefPtr<class hkMemoryResourceHandle>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkRefPtr@VhkMemoryResourceHandle@@@@QAAPAXI@Z");
//};

//public: void * hkRefPtr<class hkMemoryResourceContainer>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkRefPtr@VhkMemoryResourceContainer@@@@QAAPAXI@Z");
//};

//public: static void hkRefPtr<class hkMemoryResourceContainer>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkRefPtr@VhkMemoryResourceContainer@@@@SAXPAX@Z");
//};

//public: static void hkRefPtr<class hkMemoryResourceHandle>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkRefPtr@VhkMemoryResourceHandle@@@@SAXPAX@Z");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceHandle> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceHandle@@@@@@QAAXXZ");
//};

//public: hkRefPtr<class hkMemoryResourceHandle>::hkRefPtr<class hkMemoryResourceHandle>(class hkRefPtr<class hkMemoryResourceHandle> const &)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkMemoryResourceHandle@@@@QAA@ABV0@@Z");
//};

//public: void hkArrayBase<class hkRefPtr<class hkMemoryResourceContainer> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkRefPtr@VhkMemoryResourceContainer@@@@@@QAAXXZ");
//};

//public: hkRefPtr<class hkMemoryResourceContainer>::hkRefPtr<class hkMemoryResourceContainer>(class hkRefPtr<class hkMemoryResourceContainer> const &)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkMemoryResourceContainer@@@@QAA@ABV0@@Z");
//};

//public: void hkArrayBase<class hkResourceHandle *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkResourceHandle@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkResourceHandle *>(class hkResourceHandle **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkResourceHandle@@@hkArrayUtil@@SAXPAPAVhkResourceHandle@@HU?$hkTraitBool@$00@@@Z");
//};

