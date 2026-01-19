/* ---------- headers */

#include "havok\hkbase\hkMemorySystem.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned int const hkMemChunk::PINUSE_BIT; // "?PINUSE_BIT@hkMemChunk@@2IB"
// public: static unsigned int const hkMemChunk::CINUSE_BIT; // "?CINUSE_BIT@hkMemChunk@@2IB"
// public: static unsigned int const hkMemChunk::INUSE_BITS; // "?INUSE_BITS@hkMemChunk@@2IB"
// public: static unsigned int const hkMemChunk::ALIGN; // "?ALIGN@hkMemChunk@@2IB"
// public: static unsigned int const hkMemChunk::ALIGN_MASK; // "?ALIGN_MASK@hkMemChunk@@2IB"
// public: static unsigned int const hkMemChunk::PAYLOAD_OFFSET; // "?PAYLOAD_OFFSET@hkMemChunk@@2IB"
// protected: static unsigned int const hkLargeBlockAllocator::NTREEBINS; // "?NTREEBINS@hkLargeBlockAllocator@@1IB"
// protected: static unsigned int const hkLargeBlockAllocator::TREEBIN_SHIFT; // "?TREEBIN_SHIFT@hkLargeBlockAllocator@@1IB"
// protected: static unsigned int const hkLargeBlockAllocator::MIN_LARGE_SIZE; // "?MIN_LARGE_SIZE@hkLargeBlockAllocator@@1IB"
// protected: static unsigned int const hkLargeBlockAllocator::SIZE_T_BITSIZE; // "?SIZE_T_BITSIZE@hkLargeBlockAllocator@@1IB"
// const hkMemorySystem::`RTTI Complete Object Locator'; // "??_R4hkMemorySystem@@6B@"
// hkMemorySystem::`RTTI Class Hierarchy Descriptor'; // "??_R3hkMemorySystem@@8"
// hkMemorySystem::`RTTI Base Class Array'; // "??_R2hkMemorySystem@@8"
// hkMemorySystem::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkMemorySystem@@8"
// class hkMemorySystem::`RTTI Type Descriptor'; // "??_R0?AVhkMemorySystem@@@8"
// protected: static class hkMemorySystem *hkMemorySystem::s_instance; // "?s_instance@hkMemorySystem@@1PAV1@A"

// public: hkMemorySystem::FrameInfo::FrameInfo(void);
// public: static void hkMemorySystem::replaceInstance(class hkMemorySystem *);
// public: static class hkMemorySystem & hkMemorySystem::getInstance(void);
// public: static class hkMemorySystem * hkMemorySystem::getInstancePtr(void);
// public: virtual hkMemorySystem::~hkMemorySystem(void);
// protected: void hkMemorySystem::_printStatistics(class hkOstream &, struct hkMemorySystem::_PrintStatisticsInput const &);
// void printDetailedStatistics(char const *, class hkOstream &, struct hkMemoryAllocator::MemoryStatistics &, unsigned int);
// public: void const * hkStackMemory::getStackEnd(void);
// public: class hkMemoryAllocator & hkMemoryRouter::solver(void);
// public: class hkThreadMemory *const & hkArrayBase<class hkThreadMemory *>::operator[](int) const;
// public: int hkArrayBase<class hkThreadMemory *>::getSize(void) const;
// public: struct hkStackMemory *const & hkArrayBase<struct hkStackMemory *>::operator[](int) const;
// public: int hkArrayBase<struct hkStackMemory *>::getSize(void) const;
// public: class hkBool hkArrayBase<struct hkStackMemory *>::isEmpty(void) const;
// unsigned int hkMath::max2<unsigned int>(unsigned int, unsigned int);
// unsigned int hkMath::min2<unsigned int>(unsigned int, unsigned int);

//public: hkMemorySystem::FrameInfo::FrameInfo(void)
//{
//    mangled_ppc("??0FrameInfo@hkMemorySystem@@QAA@XZ");
//};

//public: static void hkMemorySystem::replaceInstance(class hkMemorySystem *)
//{
//    mangled_ppc("?replaceInstance@hkMemorySystem@@SAXPAV1@@Z");
//};

//public: static class hkMemorySystem & hkMemorySystem::getInstance(void)
//{
//    mangled_ppc("?getInstance@hkMemorySystem@@SAAAV1@XZ");
//};

//public: static class hkMemorySystem * hkMemorySystem::getInstancePtr(void)
//{
//    mangled_ppc("?getInstancePtr@hkMemorySystem@@SAPAV1@XZ");
//};

//public: virtual hkMemorySystem::~hkMemorySystem(void)
//{
//    mangled_ppc("??1hkMemorySystem@@UAA@XZ");
//};

//protected: void hkMemorySystem::_printStatistics(class hkOstream &, struct hkMemorySystem::_PrintStatisticsInput const &)
//{
//    mangled_ppc("?_printStatistics@hkMemorySystem@@IAAXAAVhkOstream@@ABU_PrintStatisticsInput@1@@Z");
//};

//void printDetailedStatistics(char const *, class hkOstream &, struct hkMemoryAllocator::MemoryStatistics &, unsigned int)
//{
//    mangled_ppc("?printDetailedStatistics@@YAXPBDAAVhkOstream@@AAUMemoryStatistics@hkMemoryAllocator@@I@Z");
//};

//public: void const * hkStackMemory::getStackEnd(void)
//{
//    mangled_ppc("?getStackEnd@hkStackMemory@@QAAPBXXZ");
//};

//public: class hkMemoryAllocator & hkMemoryRouter::solver(void)
//{
//    mangled_ppc("?solver@hkMemoryRouter@@QAAAAVhkMemoryAllocator@@XZ");
//};

//public: class hkThreadMemory *const & hkArrayBase<class hkThreadMemory *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkThreadMemory@@@@QBAABQAVhkThreadMemory@@H@Z");
//};

//public: int hkArrayBase<class hkThreadMemory *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkThreadMemory@@@@QBAHXZ");
//};

//public: struct hkStackMemory *const & hkArrayBase<struct hkStackMemory *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkStackMemory@@@@QBAABQAUhkStackMemory@@H@Z");
//};

//public: int hkArrayBase<struct hkStackMemory *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkStackMemory@@@@QBAHXZ");
//};

//public: class hkBool hkArrayBase<struct hkStackMemory *>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkArrayBase@PAUhkStackMemory@@@@QBA?AVhkBool@@XZ");
//};

//unsigned int hkMath::max2<unsigned int>(unsigned int, unsigned int)
//{
//    mangled_ppc("??$max2@I@hkMath@@YAIII@Z");
//};

//unsigned int hkMath::min2<unsigned int>(unsigned int, unsigned int)
//{
//    mangled_ppc("??$min2@I@hkMath@@YAIII@Z");
//};

