/* ---------- headers */

#include "havok\hkbase\hkJobQueue.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkJobQueueHwSetup::hkJobQueueHwSetup(void);
// enum hkJobQueue::JobPopFuncResult defaultPopDispatchFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::JobQueueEntry &);
// enum hkJobQueue::JobCreationStatus defaultFinishDispatchFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, struct hkJobQueue::JobQueueEntryInput &);
// public: hkJobQueue::hkJobQueue(struct hkJobQueueCinfo const &);
// enum hkJobQueue::JobPopFuncResult hkDefaultPopJobFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::JobQueueEntry &);
// enum hkJobQueue::JobCreationStatus hkDefaultFinishJobFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, struct hkJobQueue::JobQueueEntryInput &);
// public: hkJobQueue::~hkJobQueue(void);
// public: void hkJobQueue::registerJobWithCpuThread(enum hkJobType, unsigned char, int);
// public: void hkJobQueue::updateJobQueryRules(void);
// public: void hkJobQueue::setQueueCapacityForJobType(enum hkJobType, int);
// public: void hkJobQueue::setQueueCapacityForCpuCache(int);
// public: enum hkJobQueue::JobStatus hkJobQueue::processAllJobs(void);
// public: int hkJobQueue::getQueueIndexForJob(struct hkJob const &);
// public: struct hkJobQueue::DynamicData * hkJobQueue::lockQueue(char *);
// public: void hkJobQueue::unlockQueue(struct hkJobQueue::DynamicData *);
// public: enum hkJobQueue::JobStatus hkJobQueue::getNextJob(struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::WaitStatus);
// public: void hkJobQueue::releaseOneWaitingThread(struct hkJobQueue::DynamicData *);
// public: void hkJobQueue::checkQueueAndReleaseOneWaitingThread(int, struct hkJobQueue::DynamicData *);
// public: void hkJobQueue::addJobQueueLocked(struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, enum hkJobQueue::JobPriority);
// public: void hkJobQueue::addJob(struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::JobPriority);
// public: void hkJobQueue::addJob(struct hkJob &, enum hkJobQueue::JobPriority);
// public: void hkJobQueue::addJobBatch(class hkArrayBase<struct hkJob *> const &, enum hkJobQueue::JobPriority);
// public: void hkJobQueue::setWaitPolicy(enum hkJobQueue::WaitPolicy);
// public: enum hkJobQueue::WaitPolicy hkJobQueue::getWaitPolicy(void);
// public: int hkJobQueue::getMasterThreadFinishingFlags(void);
// public: void hkJobQueue::setMasterThreadFinishingFlags(int);
// public: void hkJobQueue::finishJob(struct hkJobQueue::JobQueueEntry const *, enum hkJobQueue::FinishJobFlag);
// public: enum hkJobQueue::JobStatus hkJobQueue::finishJobAndGetNextJob(struct hkJobQueue::JobQueueEntry const *, struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::WaitStatus);
// public: void hkJobQueue::registerJobHandler(enum hkJobType, struct hkJobQueue::hkJobHandlerFuncs);
// public: enum hkJobQueue::JobStatus hkJobQueue::finishAddAndGetNextJob(enum hkJobType, enum hkJobQueue::JobPriority, struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::WaitStatus);
// public: void hkJobQueue::releaseWaitingThreads(struct hkJobQueue::DynamicData *);
// public: static void * hkJobQueue::DynamicData::operator new(unsigned int);
// public: hkJobQueue::DynamicData::DynamicData(void);
// public: struct hkJobQueueHwSetup & hkJobQueueHwSetup::operator=(struct hkJobQueueHwSetup const &);
// public: hkJobQueue::Queue::Queue(void);
// public: hkJobQueueHwSetup::~hkJobQueueHwSetup(void);
// public: void * hkJobQueue::DynamicData::`scalar deleting destructor'(unsigned int);
// public: static void hkJobQueue::DynamicData::operator delete(void *);
// public: hkJobQueue::DynamicData::~DynamicData(void);
// public: hkJobQueue::Queue::~Queue(void);
// public: hkJobQueue::JobQueueEntryInput::JobQueueEntryInput(void);
// public: enum hkJobQueue::JobStatus hkJobQueue::findJobInternal(int, struct hkJobQueue::DynamicData *, enum hkJobQueue::WaitStatus, struct hkJobQueue::JobQueueEntry &);
// public: int hkJobQueue::findNextJob(struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::DynamicData *);
// public: int hkJobQueue::getSemaphoreIndex(int);
// public: enum hkJobType hkEnum<enum hkJobType, unsigned char>::operator enum hkJobType(void) const;
// public: class hkBool hkEnum<enum hkJobType, unsigned char>::operator==(enum hkJobType) const;
// public: hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>(void);
// public: struct hkJobQueue::CustomJobTypeSetup & hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::expandOne(void);
// public: class hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> & hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> const &);
// public: hkQueue<struct hkJobQueue::JobQueueEntry>::hkQueue<struct hkJobQueue::JobQueueEntry>(void);
// public: hkQueue<struct hkJobQueue::JobQueueEntry>::~hkQueue<struct hkJobQueue::JobQueueEntry>(void);
// public: void hkQueue<struct hkJobQueue::JobQueueEntry>::setCapacity(int);
// public: void hkQueue<struct hkJobQueue::JobQueueEntry>::enqueue(struct hkJobQueue::JobQueueEntry const &);
// public: void hkQueue<struct hkJobQueue::JobQueueEntry>::enqueueInFront(struct hkJobQueue::JobQueueEntry const &);
// public: void hkQueue<struct hkJobQueue::JobQueueEntry>::dequeue(struct hkJobQueue::JobQueueEntry &);
// public: class hkBool hkQueue<struct hkJobQueue::JobQueueEntry>::isEmpty(void) const;
// public: int hkQueue<struct hkJobQueue::JobQueueEntry>::getSize(void) const;
// public: hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>(void);
// public: struct hkJobQueue::CustomJobTypeSetup & hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::operator[](int);
// public: int hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::getSize(void) const;
// public: struct hkJobQueue::CustomJobTypeSetup & hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::~hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::~hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>(void);
// public: struct hkJob *const & hkArrayBase<struct hkJob *>::operator[](int) const;
// public: int hkArrayBase<struct hkJob *>::getSize(void) const;
// public: void hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// protected: class hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> > & hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> > const &, struct hkTraitBool<0>);
// private: void hkQueue<struct hkJobQueue::JobQueueEntry>::increaseCapacity(void);
// private: void hkQueue<struct hkJobQueue::JobQueueEntry>::releaseMemory(void);
// struct hkJobQueue::JobQueueEntry * hkAllocateChunk<struct hkJobQueue::JobQueueEntry>(int, int);
// public: int hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::getCapacity(void) const;
// public: void hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct hkJobQueue::CustomJobTypeSetup>(struct hkJobQueue::CustomJobTypeSetup *, int, struct hkTraitBool<0>);
// public: static void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::copy(class hkArray<int, struct hkContainerHeapAllocator> *, class hkArray<int, struct hkContainerHeapAllocator> const *, int);
// public: static void hkArrayUtil::constructWithArray<class hkArray<int, struct hkContainerHeapAllocator> >(class hkArray<int, struct hkContainerHeapAllocator> *, int, class hkArray<int, struct hkContainerHeapAllocator> const *, struct hkTraitBool<0>);
// void hkDeallocateChunk<struct hkJobQueue::JobQueueEntry>(struct hkJobQueue::JobQueueEntry *, int, int);
// public: void hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::clear(void);
// protected: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(class hkArray<int, struct hkContainerHeapAllocator> const &);
// public: class hkArray<int, struct hkContainerHeapAllocator> & hkArray<int, struct hkContainerHeapAllocator>::operator=(class hkArray<int, struct hkContainerHeapAllocator> const &);
// public: static void hkArrayUtil::destruct<struct hkJobQueue::CustomJobTypeSetup>(struct hkJobQueue::CustomJobTypeSetup *, int, struct hkTraitBool<0>);
// protected: class hkArrayBase<int> & hkArrayBase<int>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<int> const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithArray<int>(int *, int, int const *, struct hkTraitBool<1>);
// public: static void hkArrayBase<int>::copy(int *, int const *, int);

//public: hkJobQueueHwSetup::hkJobQueueHwSetup(void)
//{
//    mangled_ppc("??0hkJobQueueHwSetup@@QAA@XZ");
//};

//enum hkJobQueue::JobPopFuncResult defaultPopDispatchFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::JobQueueEntry &)
//{
//    mangled_ppc("?defaultPopDispatchFunc@@YA?AW4JobPopFuncResult@hkJobQueue@@AAV2@PAUDynamicData@2@AAUJobQueueEntry@2@2@Z");
//};

//enum hkJobQueue::JobCreationStatus defaultFinishDispatchFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, struct hkJobQueue::JobQueueEntryInput &)
//{
//    mangled_ppc("?defaultFinishDispatchFunc@@YA?AW4JobCreationStatus@hkJobQueue@@AAV2@PAUDynamicData@2@ABUJobQueueEntry@2@AAUJobQueueEntryInput@2@@Z");
//};

//public: hkJobQueue::hkJobQueue(struct hkJobQueueCinfo const &)
//{
//    mangled_ppc("??0hkJobQueue@@QAA@ABUhkJobQueueCinfo@@@Z");
//};

//enum hkJobQueue::JobPopFuncResult hkDefaultPopJobFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::JobQueueEntry &)
//{
//    mangled_ppc("?hkDefaultPopJobFunc@@YA?AW4JobPopFuncResult@hkJobQueue@@AAV2@PAUDynamicData@2@AAUJobQueueEntry@2@2@Z");
//};

//enum hkJobQueue::JobCreationStatus hkDefaultFinishJobFunc(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, struct hkJobQueue::JobQueueEntryInput &)
//{
//    mangled_ppc("?hkDefaultFinishJobFunc@@YA?AW4JobCreationStatus@hkJobQueue@@AAV2@PAUDynamicData@2@ABUJobQueueEntry@2@AAUJobQueueEntryInput@2@@Z");
//};

//public: hkJobQueue::~hkJobQueue(void)
//{
//    mangled_ppc("??1hkJobQueue@@QAA@XZ");
//};

//public: void hkJobQueue::registerJobWithCpuThread(enum hkJobType, unsigned char, int)
//{
//    mangled_ppc("?registerJobWithCpuThread@hkJobQueue@@QAAXW4hkJobType@@EH@Z");
//};

//public: void hkJobQueue::updateJobQueryRules(void)
//{
//    mangled_ppc("?updateJobQueryRules@hkJobQueue@@QAAXXZ");
//};

//public: void hkJobQueue::setQueueCapacityForJobType(enum hkJobType, int)
//{
//    mangled_ppc("?setQueueCapacityForJobType@hkJobQueue@@QAAXW4hkJobType@@H@Z");
//};

//public: void hkJobQueue::setQueueCapacityForCpuCache(int)
//{
//    mangled_ppc("?setQueueCapacityForCpuCache@hkJobQueue@@QAAXH@Z");
//};

//public: enum hkJobQueue::JobStatus hkJobQueue::processAllJobs(void)
//{
//    mangled_ppc("?processAllJobs@hkJobQueue@@QAA?AW4JobStatus@1@XZ");
//};

//public: int hkJobQueue::getQueueIndexForJob(struct hkJob const &)
//{
//    mangled_ppc("?getQueueIndexForJob@hkJobQueue@@QAAHABUhkJob@@@Z");
//};

//public: struct hkJobQueue::DynamicData * hkJobQueue::lockQueue(char *)
//{
//    mangled_ppc("?lockQueue@hkJobQueue@@QAAPAUDynamicData@1@PAD@Z");
//};

//public: void hkJobQueue::unlockQueue(struct hkJobQueue::DynamicData *)
//{
//    mangled_ppc("?unlockQueue@hkJobQueue@@QAAXPAUDynamicData@1@@Z");
//};

//public: enum hkJobQueue::JobStatus hkJobQueue::getNextJob(struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::WaitStatus)
//{
//    mangled_ppc("?getNextJob@hkJobQueue@@QAA?AW4JobStatus@1@AAUJobQueueEntry@1@W4WaitStatus@1@@Z");
//};

//public: void hkJobQueue::releaseOneWaitingThread(struct hkJobQueue::DynamicData *)
//{
//    mangled_ppc("?releaseOneWaitingThread@hkJobQueue@@QAAXPAUDynamicData@1@@Z");
//};

//public: void hkJobQueue::checkQueueAndReleaseOneWaitingThread(int, struct hkJobQueue::DynamicData *)
//{
//    mangled_ppc("?checkQueueAndReleaseOneWaitingThread@hkJobQueue@@QAAXHPAUDynamicData@1@@Z");
//};

//public: void hkJobQueue::addJobQueueLocked(struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, enum hkJobQueue::JobPriority)
//{
//    mangled_ppc("?addJobQueueLocked@hkJobQueue@@QAAXPAUDynamicData@1@ABUJobQueueEntry@1@W4JobPriority@1@@Z");
//};

//public: void hkJobQueue::addJob(struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::JobPriority)
//{
//    mangled_ppc("?addJob@hkJobQueue@@QAAXAAUJobQueueEntry@1@W4JobPriority@1@@Z");
//};

//public: void hkJobQueue::addJob(struct hkJob &, enum hkJobQueue::JobPriority)
//{
//    mangled_ppc("?addJob@hkJobQueue@@QAAXAAUhkJob@@W4JobPriority@1@@Z");
//};

//public: void hkJobQueue::addJobBatch(class hkArrayBase<struct hkJob *> const &, enum hkJobQueue::JobPriority)
//{
//    mangled_ppc("?addJobBatch@hkJobQueue@@QAAXABV?$hkArrayBase@PAUhkJob@@@@W4JobPriority@1@@Z");
//};

//public: void hkJobQueue::setWaitPolicy(enum hkJobQueue::WaitPolicy)
//{
//    mangled_ppc("?setWaitPolicy@hkJobQueue@@QAAXW4WaitPolicy@1@@Z");
//};

//public: enum hkJobQueue::WaitPolicy hkJobQueue::getWaitPolicy(void)
//{
//    mangled_ppc("?getWaitPolicy@hkJobQueue@@QAA?AW4WaitPolicy@1@XZ");
//};

//public: int hkJobQueue::getMasterThreadFinishingFlags(void)
//{
//    mangled_ppc("?getMasterThreadFinishingFlags@hkJobQueue@@QAAHXZ");
//};

//public: void hkJobQueue::setMasterThreadFinishingFlags(int)
//{
//    mangled_ppc("?setMasterThreadFinishingFlags@hkJobQueue@@QAAXH@Z");
//};

//public: void hkJobQueue::finishJob(struct hkJobQueue::JobQueueEntry const *, enum hkJobQueue::FinishJobFlag)
//{
//    mangled_ppc("?finishJob@hkJobQueue@@QAAXPBUJobQueueEntry@1@W4FinishJobFlag@1@@Z");
//};

//public: enum hkJobQueue::JobStatus hkJobQueue::finishJobAndGetNextJob(struct hkJobQueue::JobQueueEntry const *, struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::WaitStatus)
//{
//    mangled_ppc("?finishJobAndGetNextJob@hkJobQueue@@QAA?AW4JobStatus@1@PBUJobQueueEntry@1@AAU31@W4WaitStatus@1@@Z");
//};

//public: void hkJobQueue::registerJobHandler(enum hkJobType, struct hkJobQueue::hkJobHandlerFuncs)
//{
//    mangled_ppc("?registerJobHandler@hkJobQueue@@QAAXW4hkJobType@@UhkJobHandlerFuncs@1@@Z");
//};

//public: enum hkJobQueue::JobStatus hkJobQueue::finishAddAndGetNextJob(enum hkJobType, enum hkJobQueue::JobPriority, struct hkJobQueue::JobQueueEntry &, enum hkJobQueue::WaitStatus)
//{
//    mangled_ppc("?finishAddAndGetNextJob@hkJobQueue@@QAA?AW4JobStatus@1@W4hkJobType@@W4JobPriority@1@AAUJobQueueEntry@1@W4WaitStatus@1@@Z");
//};

//public: void hkJobQueue::releaseWaitingThreads(struct hkJobQueue::DynamicData *)
//{
//    mangled_ppc("?releaseWaitingThreads@hkJobQueue@@QAAXPAUDynamicData@1@@Z");
//};

//public: static void * hkJobQueue::DynamicData::operator new(unsigned int)
//{
//    mangled_ppc("??2DynamicData@hkJobQueue@@SAPAXI@Z");
//};

//public: hkJobQueue::DynamicData::DynamicData(void)
//{
//    mangled_ppc("??0DynamicData@hkJobQueue@@QAA@XZ");
//};

//public: struct hkJobQueueHwSetup & hkJobQueueHwSetup::operator=(struct hkJobQueueHwSetup const &)
//{
//    mangled_ppc("??4hkJobQueueHwSetup@@QAAAAU0@ABU0@@Z");
//};

//public: hkJobQueue::Queue::Queue(void)
//{
//    mangled_ppc("??0Queue@hkJobQueue@@QAA@XZ");
//};

//public: hkJobQueueHwSetup::~hkJobQueueHwSetup(void)
//{
//    mangled_ppc("??1hkJobQueueHwSetup@@QAA@XZ");
//};

//public: void * hkJobQueue::DynamicData::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GDynamicData@hkJobQueue@@QAAPAXI@Z");
//};

//public: static void hkJobQueue::DynamicData::operator delete(void *)
//{
//    mangled_ppc("??3DynamicData@hkJobQueue@@SAXPAX@Z");
//};

//public: hkJobQueue::DynamicData::~DynamicData(void)
//{
//    mangled_ppc("??1DynamicData@hkJobQueue@@QAA@XZ");
//};

//public: hkJobQueue::Queue::~Queue(void)
//{
//    mangled_ppc("??1Queue@hkJobQueue@@QAA@XZ");
//};

//public: hkJobQueue::JobQueueEntryInput::JobQueueEntryInput(void)
//{
//    mangled_ppc("??0JobQueueEntryInput@hkJobQueue@@QAA@XZ");
//};

//public: enum hkJobQueue::JobStatus hkJobQueue::findJobInternal(int, struct hkJobQueue::DynamicData *, enum hkJobQueue::WaitStatus, struct hkJobQueue::JobQueueEntry &)
//{
//    mangled_ppc("?findJobInternal@hkJobQueue@@QAA?AW4JobStatus@1@HPAUDynamicData@1@W4WaitStatus@1@AAUJobQueueEntry@1@@Z");
//};

//public: int hkJobQueue::findNextJob(struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::DynamicData *)
//{
//    mangled_ppc("?findNextJob@hkJobQueue@@QAAHAAUJobQueueEntry@1@PAUDynamicData@1@@Z");
//};

//public: int hkJobQueue::getSemaphoreIndex(int)
//{
//    mangled_ppc("?getSemaphoreIndex@hkJobQueue@@QAAHH@Z");
//};

//public: enum hkJobType hkEnum<enum hkJobType, unsigned char>::operator enum hkJobType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkJobType@@E@@QBA?AW4hkJobType@@XZ");
//};

//public: class hkBool hkEnum<enum hkJobType, unsigned char>::operator==(enum hkJobType) const
//{
//    mangled_ppc("??8?$hkEnum@W4hkJobType@@E@@QBA?AVhkBool@@W4hkJobType@@@Z");
//};

//public: hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UCustomJobTypeSetup@hkJobQueue@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkJobQueue::CustomJobTypeSetup & hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UCustomJobTypeSetup@hkJobQueue@@UhkContainerHeapAllocator@@@@QAAAAUCustomJobTypeSetup@hkJobQueue@@XZ");
//};

//public: class hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> & hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@V?$hkArray@HUhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: hkQueue<struct hkJobQueue::JobQueueEntry>::hkQueue<struct hkJobQueue::JobQueueEntry>(void)
//{
//    mangled_ppc("??0?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QAA@XZ");
//};

//public: hkQueue<struct hkJobQueue::JobQueueEntry>::~hkQueue<struct hkJobQueue::JobQueueEntry>(void)
//{
//    mangled_ppc("??1?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QAA@XZ");
//};

//public: void hkQueue<struct hkJobQueue::JobQueueEntry>::setCapacity(int)
//{
//    mangled_ppc("?setCapacity@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QAAXH@Z");
//};

//public: void hkQueue<struct hkJobQueue::JobQueueEntry>::enqueue(struct hkJobQueue::JobQueueEntry const &)
//{
//    mangled_ppc("?enqueue@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QAAXABUJobQueueEntry@hkJobQueue@@@Z");
//};

//public: void hkQueue<struct hkJobQueue::JobQueueEntry>::enqueueInFront(struct hkJobQueue::JobQueueEntry const &)
//{
//    mangled_ppc("?enqueueInFront@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QAAXABUJobQueueEntry@hkJobQueue@@@Z");
//};

//public: void hkQueue<struct hkJobQueue::JobQueueEntry>::dequeue(struct hkJobQueue::JobQueueEntry &)
//{
//    mangled_ppc("?dequeue@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QAAXAAUJobQueueEntry@hkJobQueue@@@Z");
//};

//public: class hkBool hkQueue<struct hkJobQueue::JobQueueEntry>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QBA?AVhkBool@@XZ");
//};

//public: int hkQueue<struct hkJobQueue::JobQueueEntry>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@QBAHXZ");
//};

//public: hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QAA@XZ");
//};

//public: struct hkJobQueue::CustomJobTypeSetup & hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QAAAAUCustomJobTypeSetup@hkJobQueue@@H@Z");
//};

//public: int hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QBAHXZ");
//};

//public: struct hkJobQueue::CustomJobTypeSetup & hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QAAAAUCustomJobTypeSetup@hkJobQueue@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::~hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UCustomJobTypeSetup@hkJobQueue@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::~hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QAA@XZ");
//};

//public: struct hkJob *const & hkArrayBase<struct hkJob *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkJob@@@@QBAABQAUhkJob@@H@Z");
//};

//public: int hkArrayBase<struct hkJob *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkJob@@@@QBAHXZ");
//};

//public: void hkArray<struct hkJobQueue::CustomJobTypeSetup, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UCustomJobTypeSetup@hkJobQueue@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//protected: class hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> > & hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> > const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//private: void hkQueue<struct hkJobQueue::JobQueueEntry>::increaseCapacity(void)
//{
//    mangled_ppc("?increaseCapacity@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@AAAXXZ");
//};

//private: void hkQueue<struct hkJobQueue::JobQueueEntry>::releaseMemory(void)
//{
//    mangled_ppc("?releaseMemory@?$hkQueue@UJobQueueEntry@hkJobQueue@@@@AAAXXZ");
//};

//struct hkJobQueue::JobQueueEntry * hkAllocateChunk<struct hkJobQueue::JobQueueEntry>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@UJobQueueEntry@hkJobQueue@@@@YAPAUJobQueueEntry@hkJobQueue@@HH@Z");
//};

//public: int hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkJobQueue::CustomJobTypeSetup>(struct hkJobQueue::CustomJobTypeSetup *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UCustomJobTypeSetup@hkJobQueue@@@hkArrayUtil@@SAXPAUCustomJobTypeSetup@hkJobQueue@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::copy(class hkArray<int, struct hkContainerHeapAllocator> *, class hkArray<int, struct hkContainerHeapAllocator> const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@SAXPAV?$hkArray@HUhkContainerHeapAllocator@@@@PBV2@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<class hkArray<int, struct hkContainerHeapAllocator> >(class hkArray<int, struct hkContainerHeapAllocator> *, int, class hkArray<int, struct hkContainerHeapAllocator> const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@V?$hkArray@HUhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@HUhkContainerHeapAllocator@@@@HPBV1@U?$hkTraitBool@$0A@@@@Z");
//};

//void hkDeallocateChunk<struct hkJobQueue::JobQueueEntry>(struct hkJobQueue::JobQueueEntry *, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@UJobQueueEntry@hkJobQueue@@@@YAXPAUJobQueueEntry@hkJobQueue@@HH@Z");
//};

//public: void hkArrayBase<struct hkJobQueue::CustomJobTypeSetup>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UCustomJobTypeSetup@hkJobQueue@@@@QAAXXZ");
//};

//protected: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(class hkArray<int, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??0?$hkArray@HUhkContainerHeapAllocator@@@@IAA@ABV0@@Z");
//};

//public: class hkArray<int, struct hkContainerHeapAllocator> & hkArray<int, struct hkContainerHeapAllocator>::operator=(class hkArray<int, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@HUhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkJobQueue::CustomJobTypeSetup>(struct hkJobQueue::CustomJobTypeSetup *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UCustomJobTypeSetup@hkJobQueue@@@hkArrayUtil@@SAXPAUCustomJobTypeSetup@hkJobQueue@@HU?$hkTraitBool@$0A@@@@Z");
//};

//protected: class hkArrayBase<int> & hkArrayBase<int>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<int> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@H@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<int>(int *, int, int const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@H@hkArrayUtil@@SAXPAHHPBHU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayBase<int>::copy(int *, int const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@H@@SAXPAHPBHH@Z");
//};

