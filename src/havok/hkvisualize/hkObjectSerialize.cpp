/* ---------- headers */

#include "havok\hkvisualize\hkObjectSerialize.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned __int64 hkObjectSerialize::readObject(class hkStreamReader *, void *&, unsigned int &, class hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator> &, unsigned __int64&);
// public: static int hkObjectSerialize::writeObject(class hkStreamWriter *, class hkStructureLayout const &, unsigned __int64, void const *, class hkClass const &, class hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator> &);
// int _writeData(class hkStreamWriter *, unsigned __int64, unsigned __int64, void *, unsigned int, class hkRelocationInfo const &, class hkBool);
// public: hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::setSize(int);
// public: void hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::setSize(int);
// public: struct hkObjectSerialize::GlobalFixup & hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkRelocationInfo::Local const & hkArrayBase<struct hkRelocationInfo::Local>::operator[](int) const;
// public: hkArrayBase<struct hkObjectSerialize::LocalFixup>::hkArrayBase<struct hkObjectSerialize::LocalFixup>(void);
// public: struct hkObjectSerialize::LocalFixup & hkArrayBase<struct hkObjectSerialize::LocalFixup>::operator[](int);
// public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::~hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkObjectSerialize::LocalFixup>::~hkArrayBase<struct hkObjectSerialize::LocalFixup>(void);
// public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_reserve(class hkMemoryAllocator &, int);
// public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkObjectSerialize::GlobalFixup & hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_expandOne(class hkMemoryAllocator &);
// public: void hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkObjectSerialize::LocalFixup>(struct hkObjectSerialize::LocalFixup *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkObjectSerialize::LocalFixup>(struct hkObjectSerialize::LocalFixup *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkObjectSerialize::GlobalFixup>(struct hkObjectSerialize::GlobalFixup *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkObjectSerialize::LocalFixup>::getCapacity(void) const;
// public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::clear(void);

//public: static unsigned __int64 hkObjectSerialize::readObject(class hkStreamReader *, void *&, unsigned int &, class hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator> &, unsigned __int64&)
//{
//    mangled_ppc("?readObject@hkObjectSerialize@@SA_KPAVhkStreamReader@@AAPAXAAIAAV?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@AA_K@Z");
//};

//public: static int hkObjectSerialize::writeObject(class hkStreamWriter *, class hkStructureLayout const &, unsigned __int64, void const *, class hkClass const &, class hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?writeObject@hkObjectSerialize@@SAHPAVhkStreamWriter@@ABVhkStructureLayout@@_KPBXABVhkClass@@AAV?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@@Z");
//};

//int _writeData(class hkStreamWriter *, unsigned __int64, unsigned __int64, void *, unsigned int, class hkRelocationInfo const &, class hkBool)
//{
//    mangled_ppc("?_writeData@@YAHPAVhkStreamWriter@@_K1PAXIABVhkRelocationInfo@@VhkBool@@@Z");
//};

//public: hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@ULocalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@ULocalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkObjectSerialize::GlobalFixup & hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAAAAUGlobalFixup@hkObjectSerialize@@XZ");
//};

//public: struct hkRelocationInfo::Local const & hkArrayBase<struct hkRelocationInfo::Local>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@ULocal@hkRelocationInfo@@@@QBAABULocal@hkRelocationInfo@@H@Z");
//};

//public: hkArrayBase<struct hkObjectSerialize::LocalFixup>::hkArrayBase<struct hkObjectSerialize::LocalFixup>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAA@XZ");
//};

//public: struct hkObjectSerialize::LocalFixup & hkArrayBase<struct hkObjectSerialize::LocalFixup>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAAAAULocalFixup@hkObjectSerialize@@H@Z");
//};

//public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::~hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@ULocalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkObjectSerialize::LocalFixup>::~hkArrayBase<struct hkObjectSerialize::LocalFixup>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkObjectSerialize::GlobalFixup & hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAAAAUGlobalFixup@hkObjectSerialize@@AAVhkMemoryAllocator@@@Z");
//};

//public: void hkArray<struct hkObjectSerialize::LocalFixup, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@ULocalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkObjectSerialize::LocalFixup>(struct hkObjectSerialize::LocalFixup *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@ULocalFixup@hkObjectSerialize@@@hkArrayUtil@@SAXPAULocalFixup@hkObjectSerialize@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkObjectSerialize::LocalFixup>(struct hkObjectSerialize::LocalFixup *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@ULocalFixup@hkObjectSerialize@@@hkArrayUtil@@SAXPAULocalFixup@hkObjectSerialize@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkObjectSerialize::GlobalFixup>(struct hkObjectSerialize::GlobalFixup *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UGlobalFixup@hkObjectSerialize@@@hkArrayUtil@@SAXPAUGlobalFixup@hkObjectSerialize@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkObjectSerialize::LocalFixup>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkObjectSerialize::LocalFixup>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@ULocalFixup@hkObjectSerialize@@@@QAAXXZ");
//};

