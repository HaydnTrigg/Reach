/* ---------- headers */

#include "havok\hkserialize\hkPackfileData.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkPackfileData::`RTTI Complete Object Locator'; // "??_R4hkPackfileData@@6B@"
// const hkResource::`RTTI Complete Object Locator'; // "??_R4hkResource@@6B@"

// public: hkPackfileData::hkPackfileData(void);
// public: virtual void hkPackfileData::callDestructors(void);
// public: virtual hkPackfileData::~hkPackfileData(void);
// public: void hkPackfileData::setName(char const *);
// public: virtual void hkPackfileData::getImportsExports(class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> &, class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> &) const;
// public: void hkPackfileData::addExport(char const *, void *);
// public: void hkPackfileData::removeExport(void *);
// public: void hkPackfileData::addImport(char const *, void **);
// public: void hkPackfileData::removeImport(void **);
// public: int hkPackfileData::finishedObjects(void) const;
// public: virtual void * hkPackfileData::getContentsPointer(char const *, class hkTypeInfoRegistry const *) const;
// bool baseOrSameClass(char const *, char const *, class hkClassNameRegistry const *);
// public: void hkPackfileData::setContentsWithName(void *, char const *);
// public: virtual char const * hkPackfileData::getContentsTypeName(void) const;
// public: void hkPackfileData::setPackfileClassNameRegistry(class hkClassNameRegistry const *);
// public: virtual void hkPackfileData::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// merged_84759C40;
// public: hkResource::hkResource(void);
// public: virtual void hkResource::callDestructors(void);
// merged_84759CD0;
// public: virtual hkResource::~hkResource(void);
// public: hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>::~hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>(void);
// public: hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>::hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>(void);
// public: void hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>::clear(void);
// public: int hkStringMap<class hkTypeInfo const *>::getSize(void) const;
// public: void hkStringMap<class hkTypeInfo const *>::clear(void);
// public: hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>::hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>(void);
// public: struct hkResource::Export & hkArray<struct hkResource::Export, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkResource::Import & hkArray<struct hkResource::Import, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArrayBase<struct hkPackfileData::Chunk>::hkArrayBase<struct hkPackfileData::Chunk>(void);
// public: struct hkPackfileData::Chunk & hkArrayBase<struct hkPackfileData::Chunk>::operator[](int);
// public: hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>::~hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkPackfileData::Chunk>::~hkArrayBase<struct hkPackfileData::Chunk>(void);
// public: void hkArrayBase<struct hkResource::Export>::removeAt(int);
// public: struct hkResource::Export & hkArrayBase<struct hkResource::Export>::_expandOne(class hkMemoryAllocator &);
// public: class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> & hkArray<struct hkResource::Export, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> const &);
// public: void hkArrayBase<struct hkResource::Import>::removeAt(int);
// public: struct hkResource::Import & hkArrayBase<struct hkResource::Import>::_expandOne(class hkMemoryAllocator &);
// public: class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> & hkArray<struct hkResource::Import, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<void *>(char const *, class hkArray<void *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<struct hkPackfileData::Chunk>(char const *, class hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<struct hkResource::Export>(char const *, class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<struct hkResource::Import>(char const *, class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> const &);
// public: void hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void *const * hkArrayBase<void *>::begin(void) const;
// public: void hkArrayBase<struct hkPackfileData::Chunk>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: struct hkPackfileData::Chunk const * hkArrayBase<struct hkPackfileData::Chunk>::begin(void) const;
// public: struct hkResource::Export const * hkArrayBase<struct hkResource::Export>::begin(void) const;
// protected: class hkArrayBase<struct hkResource::Export> & hkArrayBase<struct hkResource::Export>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkResource::Export> const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkResource::Export>(struct hkResource::Export *, int, struct hkTraitBool<0>);
// public: struct hkResource::Import const * hkArrayBase<struct hkResource::Import>::begin(void) const;
// protected: class hkArrayBase<struct hkResource::Import> & hkArrayBase<struct hkResource::Import>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkResource::Import> const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkResource::Import>(struct hkResource::Import *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkResource::Export>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayBase<struct hkResource::Export>::copy(struct hkResource::Export *, struct hkResource::Export const *, int);
// public: static void hkArrayUtil::constructWithArray<struct hkResource::Export>(struct hkResource::Export *, int, struct hkResource::Export const *, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkResource::Import>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayBase<struct hkResource::Import>::copy(struct hkResource::Import *, struct hkResource::Import const *, int);
// public: static void hkArrayUtil::constructWithArray<struct hkResource::Import>(struct hkResource::Import *, int, struct hkResource::Import const *, struct hkTraitBool<0>);

//public: hkPackfileData::hkPackfileData(void)
//{
//    mangled_ppc("??0hkPackfileData@@QAA@XZ");
//};

//public: virtual void hkPackfileData::callDestructors(void)
//{
//    mangled_ppc("?callDestructors@hkPackfileData@@UAAXXZ");
//};

//public: virtual hkPackfileData::~hkPackfileData(void)
//{
//    mangled_ppc("??1hkPackfileData@@UAA@XZ");
//};

//public: void hkPackfileData::setName(char const *)
//{
//    mangled_ppc("?setName@hkPackfileData@@QAAXPBD@Z");
//};

//public: virtual void hkPackfileData::getImportsExports(class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> &, class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getImportsExports@hkPackfileData@@UBAXAAV?$hkArray@UImport@hkResource@@UhkContainerHeapAllocator@@@@AAV?$hkArray@UExport@hkResource@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkPackfileData::addExport(char const *, void *)
//{
//    mangled_ppc("?addExport@hkPackfileData@@QAAXPBDPAX@Z");
//};

//public: void hkPackfileData::removeExport(void *)
//{
//    mangled_ppc("?removeExport@hkPackfileData@@QAAXPAX@Z");
//};

//public: void hkPackfileData::addImport(char const *, void **)
//{
//    mangled_ppc("?addImport@hkPackfileData@@QAAXPBDPAPAX@Z");
//};

//public: void hkPackfileData::removeImport(void **)
//{
//    mangled_ppc("?removeImport@hkPackfileData@@QAAXPAPAX@Z");
//};

//public: int hkPackfileData::finishedObjects(void) const
//{
//    mangled_ppc("?finishedObjects@hkPackfileData@@QBAHXZ");
//};

//public: virtual void * hkPackfileData::getContentsPointer(char const *, class hkTypeInfoRegistry const *) const
//{
//    mangled_ppc("?getContentsPointer@hkPackfileData@@UBAPAXPBDPBVhkTypeInfoRegistry@@@Z");
//};

//bool baseOrSameClass(char const *, char const *, class hkClassNameRegistry const *)
//{
//    mangled_ppc("?baseOrSameClass@@YA_NPBD0PBVhkClassNameRegistry@@@Z");
//};

//public: void hkPackfileData::setContentsWithName(void *, char const *)
//{
//    mangled_ppc("?setContentsWithName@hkPackfileData@@QAAXPAXPBD@Z");
//};

//public: virtual char const * hkPackfileData::getContentsTypeName(void) const
//{
//    mangled_ppc("?getContentsTypeName@hkPackfileData@@UBAPBDXZ");
//};

//public: void hkPackfileData::setPackfileClassNameRegistry(class hkClassNameRegistry const *)
//{
//    mangled_ppc("?setPackfileClassNameRegistry@hkPackfileData@@QAAXPBVhkClassNameRegistry@@@Z");
//};

//public: virtual void hkPackfileData::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkPackfileData@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//merged_84759C40
//{
//    mangled_ppc("merged_84759C40");
//};

//public: hkResource::hkResource(void)
//{
//    mangled_ppc("??0hkResource@@QAA@XZ");
//};

//public: virtual void hkResource::callDestructors(void)
//{
//    mangled_ppc("?callDestructors@hkResource@@UAAXXZ");
//};

//merged_84759CD0
//{
//    mangled_ppc("merged_84759CD0");
//};

//public: virtual hkResource::~hkResource(void)
//{
//    mangled_ppc("??1hkResource@@UAA@XZ");
//};

//public: hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>::~hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAXPBDUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>::hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAXPBDUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkPointerMap<void *, char const *, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$hkPointerMap@PAXPBDUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkStringMap<class hkTypeInfo const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkStringMap@PBVhkTypeInfo@@@@QBAHXZ");
//};

//public: void hkStringMap<class hkTypeInfo const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkStringMap@PBVhkTypeInfo@@@@QAAXXZ");
//};

//public: hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>::hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UChunk@hkPackfileData@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkResource::Export & hkArray<struct hkResource::Export, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UExport@hkResource@@UhkContainerHeapAllocator@@@@QAAAAUExport@hkResource@@XZ");
//};

//public: struct hkResource::Import & hkArray<struct hkResource::Import, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UImport@hkResource@@UhkContainerHeapAllocator@@@@QAAAAUImport@hkResource@@XZ");
//};

//public: hkArrayBase<struct hkPackfileData::Chunk>::hkArrayBase<struct hkPackfileData::Chunk>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UChunk@hkPackfileData@@@@QAA@XZ");
//};

//public: struct hkPackfileData::Chunk & hkArrayBase<struct hkPackfileData::Chunk>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UChunk@hkPackfileData@@@@QAAAAUChunk@hkPackfileData@@H@Z");
//};

//public: hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>::~hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UChunk@hkPackfileData@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkPackfileData::Chunk>::~hkArrayBase<struct hkPackfileData::Chunk>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UChunk@hkPackfileData@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkResource::Export>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UExport@hkResource@@@@QAAXH@Z");
//};

//public: struct hkResource::Export & hkArrayBase<struct hkResource::Export>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UExport@hkResource@@@@QAAAAUExport@hkResource@@AAVhkMemoryAllocator@@@Z");
//};

//public: class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> & hkArray<struct hkResource::Export, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@UExport@hkResource@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: void hkArrayBase<struct hkResource::Import>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UImport@hkResource@@@@QAAXH@Z");
//};

//public: struct hkResource::Import & hkArrayBase<struct hkResource::Import>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UImport@hkResource@@@@QAAAAUImport@hkResource@@AAVhkMemoryAllocator@@@Z");
//};

//public: class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> & hkArray<struct hkResource::Import, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@UImport@hkResource@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: void hkStatisticsCollector::addArray<void *>(char const *, class hkArray<void *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAX@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAXUhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkPackfileData::Chunk>(char const *, class hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UChunk@hkPackfileData@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UChunk@hkPackfileData@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkResource::Export>(char const *, class hkArray<struct hkResource::Export, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UExport@hkResource@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UExport@hkResource@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkResource::Import>(char const *, class hkArray<struct hkResource::Import, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UImport@hkResource@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UImport@hkResource@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkArray<struct hkPackfileData::Chunk, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UChunk@hkPackfileData@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void *const * hkArrayBase<void *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAX@@QBAPBQAXXZ");
//};

//public: void hkArrayBase<struct hkPackfileData::Chunk>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UChunk@hkPackfileData@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: struct hkPackfileData::Chunk const * hkArrayBase<struct hkPackfileData::Chunk>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UChunk@hkPackfileData@@@@QBAPBUChunk@hkPackfileData@@XZ");
//};

//public: struct hkResource::Export const * hkArrayBase<struct hkResource::Export>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UExport@hkResource@@@@QBAPBUExport@hkResource@@XZ");
//};

//protected: class hkArrayBase<struct hkResource::Export> & hkArrayBase<struct hkResource::Export>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkResource::Export> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@UExport@hkResource@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkResource::Export>(struct hkResource::Export *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UExport@hkResource@@@hkArrayUtil@@SAXPAUExport@hkResource@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: struct hkResource::Import const * hkArrayBase<struct hkResource::Import>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UImport@hkResource@@@@QBAPBUImport@hkResource@@XZ");
//};

//protected: class hkArrayBase<struct hkResource::Import> & hkArrayBase<struct hkResource::Import>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkResource::Import> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@UImport@hkResource@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkResource::Import>(struct hkResource::Import *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UImport@hkResource@@@hkArrayUtil@@SAXPAUImport@hkResource@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkResource::Export>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UExport@hkResource@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayBase<struct hkResource::Export>::copy(struct hkResource::Export *, struct hkResource::Export const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@UExport@hkResource@@@@SAXPAUExport@hkResource@@PBU23@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkResource::Export>(struct hkResource::Export *, int, struct hkResource::Export const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UExport@hkResource@@@hkArrayUtil@@SAXPAUExport@hkResource@@HPBU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkResource::Import>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UImport@hkResource@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayBase<struct hkResource::Import>::copy(struct hkResource::Import *, struct hkResource::Import const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@UImport@hkResource@@@@SAXPAUImport@hkResource@@PBU23@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkResource::Import>(struct hkResource::Import *, int, struct hkResource::Import const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UImport@hkResource@@@hkArrayUtil@@SAXPAUImport@hkResource@@HPBU12@U?$hkTraitBool@$0A@@@@Z");
//};

