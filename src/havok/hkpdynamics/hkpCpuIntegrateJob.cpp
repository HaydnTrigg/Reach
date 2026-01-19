/* ---------- headers */

#include "havok\hkpdynamics\hkpCpuIntegrateJob.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// enum hkJobQueue::JobStatus integrateJob(struct hkpMtThreadStructure &, class hkJobQueue &, struct hkJobQueue::JobQueueEntry &);
// void createBuildJacobianAndSolveJacobianTaskCollection(class hkpSimulationIsland *, class hkBool, struct hkpBuildJacobianTaskHeader *, struct hkpBuildJacobianTaskCollection *, struct hkpSolveJacobiansTaskCollection *);
// class hkBool canSolveOnSingleProcessor(struct hkpBuildJacobianTaskHeader const &);
// void createAndAppendNewTask(struct hkpBuildJacobianTaskHeader const *, struct hkpBuildJacobianTaskCollection *, struct hkpSolveJacobiansTaskCollection *, struct hkpBuildJacobianTask *&, struct hkpSolveConstraintBatchTask *&, struct hkpSolveConstraintBatchTask *&, struct hkpSolveConstraintBatchTask *&, class hkpJacobianSchema *&, struct hkpSolverElemTemp *&, class hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo> &, int &, int, unsigned short *&, class hkBool, class hkBool, class hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator> &);
// public: static void * hkpBuildJacobianTaskHeader::operator new(unsigned int);
// public: hkpCreateJacobianTasksJob::hkpCreateJacobianTasksJob(class hkpIntegrateJob const &, struct hkpBuildJacobianTaskHeader *);
// protected: hkpBuildAccumulatorsJob::hkpBuildAccumulatorsJob(class hkpDynamicsJob const &, enum hkpDynamicsJob::JobSubType);
// public: static void * hkpBuildJacobianTask::operator new(unsigned int);
// public: static void * hkpSolveConstraintBatchTask::operator new(unsigned int);
// public: hkpSolveConstraintBatchTask::hkpSolveConstraintBatchTask(void);
// public: hkpBuildJacobianTask::hkpBuildJacobianTask(void);
// public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>::hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>(int);
// public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>::~hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>(void);
// public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>(void);
// public: void hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::reserve(int);
// public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(int);
// public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::~hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(void);
// public: class hkBool hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>::wasReallocated(void) const;
// public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::wasReallocated(void) const;
// public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>(void);
// public: struct `anonymous namespace'::hkConstraintInternalInfo & hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::getSize(void) const;
// public: class hkBool hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::isEmpty(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::clear(void);
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::pushBackUnchecked(struct `anonymous namespace'::hkConstraintInternalInfo const &);
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::_reserve(class hkMemoryAllocator &, int);
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::setSizeUnchecked(int);
// public: struct `anonymous namespace'::hkConstraintInternalInfo * hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::begin(void);
// public: struct `anonymous namespace'::hkConstraintInternalInfo * hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::end(void);
// public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::~hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>(void);
// public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(void);
// public: struct `anonymous namespace'::hkConstraintInternalCallbackInfo & hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::getSize(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::clear(void);
// public: struct `anonymous namespace'::hkConstraintInternalCallbackInfo * hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::expandByUnchecked(int);
// public: hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::~hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(void);
// public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::~hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>(void);
// unsigned long * hkMemTempBlockAlloc<unsigned long>(int);
// void hkMemTempBlockFree<unsigned long>(unsigned long *, int);
// int * hkMemTempBlockAlloc<int>(int);
// void hkMemTempBlockFree<int>(int *, int);
// struct hkpBuildJacobianTaskCollection::CallbackPair * hkAllocateChunk<struct hkpBuildJacobianTaskCollection::CallbackPair>(int, int);
// public: static void hkCheckDeterminismUtil::checkMt<class hkBool>(int, class hkBool const &);
// struct `anonymous namespace'::hkConstraintInternalInfo * hkAllocateStack<struct `anonymous namespace'::hkConstraintInternalInfo>(int, char const *);
// void hkDeallocateStack<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *);
// struct `anonymous namespace'::hkConstraintInternalCallbackInfo * hkAllocateStack<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(int, char const *);
// void hkDeallocateStack<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(struct `anonymous namespace'::hkConstraintInternalCallbackInfo *);
// public: void hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *, int, struct `anonymous namespace'::hkConstraintInternalInfo const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(struct `anonymous namespace'::hkConstraintInternalCallbackInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(struct `anonymous namespace'::hkConstraintInternalCallbackInfo *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::getCapacity(void) const;

//enum hkJobQueue::JobStatus integrateJob(struct hkpMtThreadStructure &, class hkJobQueue &, struct hkJobQueue::JobQueueEntry &)
//{
//    mangled_ppc("?integrateJob@@YA?AW4JobStatus@hkJobQueue@@AAUhkpMtThreadStructure@@AAV2@AAUJobQueueEntry@2@@Z");
//};

//void createBuildJacobianAndSolveJacobianTaskCollection(class hkpSimulationIsland *, class hkBool, struct hkpBuildJacobianTaskHeader *, struct hkpBuildJacobianTaskCollection *, struct hkpSolveJacobiansTaskCollection *)
//{
//    mangled_ppc("?createBuildJacobianAndSolveJacobianTaskCollection@@YAXPAVhkpSimulationIsland@@VhkBool@@PAUhkpBuildJacobianTaskHeader@@PAUhkpBuildJacobianTaskCollection@@PAUhkpSolveJacobiansTaskCollection@@@Z");
//};

//class hkBool canSolveOnSingleProcessor(struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("?canSolveOnSingleProcessor@@YA?AVhkBool@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//void createAndAppendNewTask(struct hkpBuildJacobianTaskHeader const *, struct hkpBuildJacobianTaskCollection *, struct hkpSolveJacobiansTaskCollection *, struct hkpBuildJacobianTask *&, struct hkpSolveConstraintBatchTask *&, struct hkpSolveConstraintBatchTask *&, struct hkpSolveConstraintBatchTask *&, class hkpJacobianSchema *&, struct hkpSolverElemTemp *&, class hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo> &, int &, int, unsigned short *&, class hkBool, class hkBool, class hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?createAndAppendNewTask@@YAXPBUhkpBuildJacobianTaskHeader@@PAUhkpBuildJacobianTaskCollection@@PAUhkpSolveJacobiansTaskCollection@@AAPAUhkpBuildJacobianTask@@AAPAUhkpSolveConstraintBatchTask@@44AAPAVhkpJacobianSchema@@AAPAUhkpSolverElemTemp@@AAV?$hkLocalArray@UhkConstraintInternalInfo@?A0x61365998@@@@AAHHAAPAGVhkBool@@V9@AAV?$hkArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void * hkpBuildJacobianTaskHeader::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpBuildJacobianTaskHeader@@SAPAXI@Z");
//};

//public: hkpCreateJacobianTasksJob::hkpCreateJacobianTasksJob(class hkpIntegrateJob const &, struct hkpBuildJacobianTaskHeader *)
//{
//    mangled_ppc("??0hkpCreateJacobianTasksJob@@QAA@ABVhkpIntegrateJob@@PAUhkpBuildJacobianTaskHeader@@@Z");
//};

//protected: hkpBuildAccumulatorsJob::hkpBuildAccumulatorsJob(class hkpDynamicsJob const &, enum hkpDynamicsJob::JobSubType)
//{
//    mangled_ppc("??0hkpBuildAccumulatorsJob@@IAA@ABVhkpDynamicsJob@@W4JobSubType@1@@Z");
//};

//public: static void * hkpBuildJacobianTask::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpBuildJacobianTask@@SAPAXI@Z");
//};

//public: static void * hkpSolveConstraintBatchTask::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpSolveConstraintBatchTask@@SAPAXI@Z");
//};

//public: hkpSolveConstraintBatchTask::hkpSolveConstraintBatchTask(void)
//{
//    mangled_ppc("??0hkpSolveConstraintBatchTask@@QAA@XZ");
//};

//public: hkpBuildJacobianTask::hkpBuildJacobianTask(void)
//{
//    mangled_ppc("??0hkpBuildJacobianTask@@QAA@XZ");
//};

//public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>::hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@UhkConstraintInternalInfo@?A0x61365998@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>::~hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@UhkConstraintInternalInfo@?A0x61365998@@@@QAA@XZ");
//};

//public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::~hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<struct `anonymous namespace'::hkConstraintInternalInfo>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@UhkConstraintInternalInfo@?A0x61365998@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::hkConstraintInternalInfo & hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAAAUhkConstraintInternalInfo@?A0x61365998@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QBAHXZ");
//};

//public: class hkBool hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::pushBackUnchecked(struct `anonymous namespace'::hkConstraintInternalInfo const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAXABUhkConstraintInternalInfo@?A0x61365998@@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::setSizeUnchecked(int)
//{
//    mangled_ppc("?setSizeUnchecked@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAXH@Z");
//};

//public: struct `anonymous namespace'::hkConstraintInternalInfo * hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAPAUhkConstraintInternalInfo@?A0x61365998@@XZ");
//};

//public: struct `anonymous namespace'::hkConstraintInternalInfo * hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::end(void)
//{
//    mangled_ppc("?end@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAPAUhkConstraintInternalInfo@?A0x61365998@@XZ");
//};

//public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::~hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::hkConstraintInternalCallbackInfo & hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAAAAUhkConstraintInternalCallbackInfo@?A0x61365998@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAAXXZ");
//};

//public: struct `anonymous namespace'::hkConstraintInternalCallbackInfo * hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::expandByUnchecked(int)
//{
//    mangled_ppc("?expandByUnchecked@?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAAPAUhkConstraintInternalCallbackInfo@?A0x61365998@@H@Z");
//};

//public: hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::~hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAA@XZ");
//};

//public: hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::~hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//unsigned long * hkMemTempBlockAlloc<unsigned long>(int)
//{
//    mangled_ppc("??$hkMemTempBlockAlloc@K@@YAPAKH@Z");
//};

//void hkMemTempBlockFree<unsigned long>(unsigned long *, int)
//{
//    mangled_ppc("??$hkMemTempBlockFree@K@@YAXPAKH@Z");
//};

//int * hkMemTempBlockAlloc<int>(int)
//{
//    mangled_ppc("??$hkMemTempBlockAlloc@H@@YAPAHH@Z");
//};

//void hkMemTempBlockFree<int>(int *, int)
//{
//    mangled_ppc("??$hkMemTempBlockFree@H@@YAXPAHH@Z");
//};

//struct hkpBuildJacobianTaskCollection::CallbackPair * hkAllocateChunk<struct hkpBuildJacobianTaskCollection::CallbackPair>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@UCallbackPair@hkpBuildJacobianTaskCollection@@@@YAPAUCallbackPair@hkpBuildJacobianTaskCollection@@HH@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<class hkBool>(int, class hkBool const &)
//{
//    mangled_ppc("??$checkMt@VhkBool@@@hkCheckDeterminismUtil@@SAXHABVhkBool@@@Z");
//};

//struct `anonymous namespace'::hkConstraintInternalInfo * hkAllocateStack<struct `anonymous namespace'::hkConstraintInternalInfo>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UhkConstraintInternalInfo@?A0x61365998@@@@YAPAUhkConstraintInternalInfo@?A0x61365998@@HPBD@Z");
//};

//void hkDeallocateStack<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *)
//{
//    mangled_ppc("??$hkDeallocateStack@UhkConstraintInternalInfo@?A0x61365998@@@@YAXPAUhkConstraintInternalInfo@?A0x61365998@@@Z");
//};

//struct `anonymous namespace'::hkConstraintInternalCallbackInfo * hkAllocateStack<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@YAPAUhkConstraintInternalCallbackInfo@?A0x61365998@@HPBD@Z");
//};

//void hkDeallocateStack<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(struct `anonymous namespace'::hkConstraintInternalCallbackInfo *)
//{
//    mangled_ppc("??$hkDeallocateStack@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@YAXPAUhkConstraintInternalCallbackInfo@?A0x61365998@@@Z");
//};

//public: void hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct `anonymous namespace'::hkConstraintInternalCallbackInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkConstraintInternalCallbackInfo@?A0x61365998@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct `anonymous namespace'::hkConstraintInternalInfo, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkConstraintInternalInfo@?A0x61365998@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkConstraintInternalInfo@?A0x61365998@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkConstraintInternalInfo@?A0x61365998@@@hkArrayUtil@@SAXPAUhkConstraintInternalInfo@?A0x61365998@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *, int, struct `anonymous namespace'::hkConstraintInternalInfo const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UhkConstraintInternalInfo@?A0x61365998@@@hkArrayUtil@@SAXPAUhkConstraintInternalInfo@?A0x61365998@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkConstraintInternalInfo>(struct `anonymous namespace'::hkConstraintInternalInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkConstraintInternalInfo@?A0x61365998@@@hkArrayUtil@@SAXPAUhkConstraintInternalInfo@?A0x61365998@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(struct `anonymous namespace'::hkConstraintInternalCallbackInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkConstraintInternalCallbackInfo@?A0x61365998@@@hkArrayUtil@@SAXPAUhkConstraintInternalCallbackInfo@?A0x61365998@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>(struct `anonymous namespace'::hkConstraintInternalCallbackInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkConstraintInternalCallbackInfo@?A0x61365998@@@hkArrayUtil@@SAXPAUhkConstraintInternalCallbackInfo@?A0x61365998@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkConstraintInternalCallbackInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkConstraintInternalCallbackInfo@?A0x61365998@@@@QBAHXZ");
//};

