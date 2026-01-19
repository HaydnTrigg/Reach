/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct hkpAgentSectorHeader * hkpAgentSectorHeader::allocate(int, int);
// public: void hkpAgentSectorHeader::deallocate(void);
// public: static enum hkJobQueue::JobPopFuncResult hkpJobQueueUtils::popDynamicsJob(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::JobQueueEntry &);
// public: static enum hkJobQueue::JobCreationStatus hkpJobQueueUtils::finishDynamicsJob(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, struct hkJobQueue::JobQueueEntryInput &);
// void uploadOpenJobsVariable(struct hkpBuildJacobianTaskHeader const *, struct hkpBuildJacobianTaskHeader const *);
// void spawnSplitSimulationIslandJob(class hkpDynamicsJob const *, struct hkpBuildJacobianTaskHeader const &, class hkJobQueue &, struct hkJobQueue::DynamicData *);
// void spawnBuildJacobiansJobs(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &, class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntryInput &);
// public: static int hkpAgentSectorHeader::getAllocatedSize(int);
// public: static void * hkpAgentSectorHeader::JobInfo::operator new(unsigned int, void *);
// public: hkpAgentSectorHeader::JobInfo::JobInfo(int);
// public: hkpPhysicsCommandQueue::hkpPhysicsCommandQueue(void);
// public: void hkpPhysicsCommandQueue::init(struct hkpPhysicsCommand *, int);
// public: enum hkJobQueue::JobPopFuncResult hkpDynamicsJob::popDynamicsJobTask(class hkpDynamicsJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpIntegrateJob::popJobTask(class hkpIntegrateJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpBuildAccumulatorsJob::popJobTask(class hkpBuildAccumulatorsJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpSplitSimulationIslandJob::popJobTask(class hkpSplitSimulationIslandJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpIntegrateMotionJob::popJobTask(class hkpIntegrateMotionJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpAgentSectorJob::popJobTask(class hkpAgentSectorJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpAgentNnEntryJob::popJobTask(class hkpAgentNnEntryJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpSolveApplyGravityJob::popJobTask(class hkpSolveApplyGravityJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpBuildJacobiansJob::popJobTask(class hkpBuildJacobiansJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpSolveConstraintBatchJob::popJobTask(class hkpSolveConstraintBatchJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpSolveIntegrateVelocitiesJob::popJobTask(class hkpSolveIntegrateVelocitiesJob &);
// public: enum hkJobQueue::JobPopFuncResult hkpSolveExportResultsJob::popJobTask(class hkpSolveExportResultsJob &);
// public: static int hkSpuDmaUtils::incrementInt32InMainMemory(int *, int, int);
// public: static void hkSpuDmaUtils::setInt32InMainMemory(int *, int, int);
// public: static void hkSpuDmaUtils::setChar8InMainMemory(signed char *, signed char, int);
// public: static void * hkpFireJacobianSetupCallback::operator new(unsigned int, void *);
// public: hkpFireJacobianSetupCallback::hkpFireJacobianSetupCallback(class hkpBuildAccumulatorsJob const &);
// public: static void * hkpSolveConstraintsJob::operator new(unsigned int, void *);
// public: static void * hkpSolveApplyGravityJob::operator new(unsigned int, void *);
// public: static void * hkpSolveConstraintBatchJob::operator new(unsigned int, void *);
// public: static void * hkpSolveIntegrateVelocitiesJob::operator new(unsigned int, void *);
// public: static void * hkpIntegrateMotionJob::operator new(unsigned int, void *);
// public: static void * hkpBroadPhaseJob::operator new(unsigned int, void *);
// public: static void * hkpPostCollideJob::operator new(unsigned int, void *);
// public: hkpIntegrateMotionJob::hkpIntegrateMotionJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &);
// public: hkpBroadPhaseJob::hkpBroadPhaseJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader *);
// public: hkpSolveApplyGravityJob::hkpSolveApplyGravityJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &);
// public: hkpSolveConstraintBatchJob::hkpSolveConstraintBatchJob(class hkpSolveApplyGravityJob const &, struct hkpBuildJacobianTaskHeader const &);
// public: hkpSolveConstraintBatchJob::hkpSolveConstraintBatchJob(class hkpSolveConstraintBatchJob const &);
// public: hkpSolveConstraintBatchJob::hkpSolveConstraintBatchJob(class hkpSolveIntegrateVelocitiesJob const &, struct hkpBuildJacobianTaskHeader const &);
// public: hkpSolveIntegrateVelocitiesJob::hkpSolveIntegrateVelocitiesJob(class hkpSolveConstraintBatchJob const &, struct hkpBuildJacobianTaskHeader const &);
// public: hkpSolveExportResultsJob::hkpSolveExportResultsJob(class hkpDynamicsJob const &, unsigned short, struct hkpBuildJacobianTaskHeader const &, enum hkpDynamicsJob::JobSubType);
// public: hkpSplitSimulationIslandJob::hkpSplitSimulationIslandJob(class hkpDynamicsJob const &, unsigned short, enum hkpDynamicsJob::JobSubType);
// public: hkpSolveConstraintsJob::hkpSolveConstraintsJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &);
// int hkGetByteOffsetCpuPtr(void const *, void const *);
// void createSolverDebugOstream(void);
// public: static void * hkpBuildJacobiansJob::operator new(unsigned int, void *);
// public: hkpBuildJacobiansJob::hkpBuildJacobiansJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTask *, struct hkpBuildJacobianTaskHeader const &);
// public: hkpRelativePointer32<struct hkpPhysicsCommand>::hkpRelativePointer32<struct hkpPhysicsCommand>(void);
// public: void hkpRelativePointer32<struct hkpPhysicsCommand>::set(struct hkpPhysicsCommand *);

//public: static struct hkpAgentSectorHeader * hkpAgentSectorHeader::allocate(int, int)
//{
//    mangled_ppc("?allocate@hkpAgentSectorHeader@@SAPAU1@HH@Z");
//};

//public: void hkpAgentSectorHeader::deallocate(void)
//{
//    mangled_ppc("?deallocate@hkpAgentSectorHeader@@QAAXXZ");
//};

//public: static enum hkJobQueue::JobPopFuncResult hkpJobQueueUtils::popDynamicsJob(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry &, struct hkJobQueue::JobQueueEntry &)
//{
//    mangled_ppc("?popDynamicsJob@hkpJobQueueUtils@@SA?AW4JobPopFuncResult@hkJobQueue@@AAV3@PAUDynamicData@3@AAUJobQueueEntry@3@2@Z");
//};

//public: static enum hkJobQueue::JobCreationStatus hkpJobQueueUtils::finishDynamicsJob(class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntry const &, struct hkJobQueue::JobQueueEntryInput &)
//{
//    mangled_ppc("?finishDynamicsJob@hkpJobQueueUtils@@SA?AW4JobCreationStatus@hkJobQueue@@AAV3@PAUDynamicData@3@ABUJobQueueEntry@3@AAUJobQueueEntryInput@3@@Z");
//};

//void uploadOpenJobsVariable(struct hkpBuildJacobianTaskHeader const *, struct hkpBuildJacobianTaskHeader const *)
//{
//    mangled_ppc("?uploadOpenJobsVariable@@YAXPBUhkpBuildJacobianTaskHeader@@0@Z");
//};

//void spawnSplitSimulationIslandJob(class hkpDynamicsJob const *, struct hkpBuildJacobianTaskHeader const &, class hkJobQueue &, struct hkJobQueue::DynamicData *)
//{
//    mangled_ppc("?spawnSplitSimulationIslandJob@@YAXPBVhkpDynamicsJob@@ABUhkpBuildJacobianTaskHeader@@AAVhkJobQueue@@PAUDynamicData@3@@Z");
//};

//void spawnBuildJacobiansJobs(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &, class hkJobQueue &, struct hkJobQueue::DynamicData *, struct hkJobQueue::JobQueueEntryInput &)
//{
//    mangled_ppc("?spawnBuildJacobiansJobs@@YAXABVhkpDynamicsJob@@ABUhkpBuildJacobianTaskHeader@@AAVhkJobQueue@@PAUDynamicData@3@AAUJobQueueEntryInput@3@@Z");
//};

//public: static int hkpAgentSectorHeader::getAllocatedSize(int)
//{
//    mangled_ppc("?getAllocatedSize@hkpAgentSectorHeader@@SAHH@Z");
//};

//public: static void * hkpAgentSectorHeader::JobInfo::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2JobInfo@hkpAgentSectorHeader@@SAPAXIPAX@Z");
//};

//public: hkpAgentSectorHeader::JobInfo::JobInfo(int)
//{
//    mangled_ppc("??0JobInfo@hkpAgentSectorHeader@@QAA@H@Z");
//};

//public: hkpPhysicsCommandQueue::hkpPhysicsCommandQueue(void)
//{
//    mangled_ppc("??0hkpPhysicsCommandQueue@@QAA@XZ");
//};

//public: void hkpPhysicsCommandQueue::init(struct hkpPhysicsCommand *, int)
//{
//    mangled_ppc("?init@hkpPhysicsCommandQueue@@QAAXPAUhkpPhysicsCommand@@H@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpDynamicsJob::popDynamicsJobTask(class hkpDynamicsJob &)
//{
//    mangled_ppc("?popDynamicsJobTask@hkpDynamicsJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpIntegrateJob::popJobTask(class hkpIntegrateJob &)
//{
//    mangled_ppc("?popJobTask@hkpIntegrateJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpBuildAccumulatorsJob::popJobTask(class hkpBuildAccumulatorsJob &)
//{
//    mangled_ppc("?popJobTask@hkpBuildAccumulatorsJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpSplitSimulationIslandJob::popJobTask(class hkpSplitSimulationIslandJob &)
//{
//    mangled_ppc("?popJobTask@hkpSplitSimulationIslandJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpIntegrateMotionJob::popJobTask(class hkpIntegrateMotionJob &)
//{
//    mangled_ppc("?popJobTask@hkpIntegrateMotionJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpAgentSectorJob::popJobTask(class hkpAgentSectorJob &)
//{
//    mangled_ppc("?popJobTask@hkpAgentSectorJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpAgentNnEntryJob::popJobTask(class hkpAgentNnEntryJob &)
//{
//    mangled_ppc("?popJobTask@hkpAgentNnEntryJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpSolveApplyGravityJob::popJobTask(class hkpSolveApplyGravityJob &)
//{
//    mangled_ppc("?popJobTask@hkpSolveApplyGravityJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpBuildJacobiansJob::popJobTask(class hkpBuildJacobiansJob &)
//{
//    mangled_ppc("?popJobTask@hkpBuildJacobiansJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpSolveConstraintBatchJob::popJobTask(class hkpSolveConstraintBatchJob &)
//{
//    mangled_ppc("?popJobTask@hkpSolveConstraintBatchJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpSolveIntegrateVelocitiesJob::popJobTask(class hkpSolveIntegrateVelocitiesJob &)
//{
//    mangled_ppc("?popJobTask@hkpSolveIntegrateVelocitiesJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: enum hkJobQueue::JobPopFuncResult hkpSolveExportResultsJob::popJobTask(class hkpSolveExportResultsJob &)
//{
//    mangled_ppc("?popJobTask@hkpSolveExportResultsJob@@QAA?AW4JobPopFuncResult@hkJobQueue@@AAV1@@Z");
//};

//public: static int hkSpuDmaUtils::incrementInt32InMainMemory(int *, int, int)
//{
//    mangled_ppc("?incrementInt32InMainMemory@hkSpuDmaUtils@@SAHPAHHH@Z");
//};

//public: static void hkSpuDmaUtils::setInt32InMainMemory(int *, int, int)
//{
//    mangled_ppc("?setInt32InMainMemory@hkSpuDmaUtils@@SAXPAHHH@Z");
//};

//public: static void hkSpuDmaUtils::setChar8InMainMemory(signed char *, signed char, int)
//{
//    mangled_ppc("?setChar8InMainMemory@hkSpuDmaUtils@@SAXPACCH@Z");
//};

//public: static void * hkpFireJacobianSetupCallback::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpFireJacobianSetupCallback@@SAPAXIPAX@Z");
//};

//public: hkpFireJacobianSetupCallback::hkpFireJacobianSetupCallback(class hkpBuildAccumulatorsJob const &)
//{
//    mangled_ppc("??0hkpFireJacobianSetupCallback@@QAA@ABVhkpBuildAccumulatorsJob@@@Z");
//};

//public: static void * hkpSolveConstraintsJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpSolveConstraintsJob@@SAPAXIPAX@Z");
//};

//public: static void * hkpSolveApplyGravityJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpSolveApplyGravityJob@@SAPAXIPAX@Z");
//};

//public: static void * hkpSolveConstraintBatchJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpSolveConstraintBatchJob@@SAPAXIPAX@Z");
//};

//public: static void * hkpSolveIntegrateVelocitiesJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpSolveIntegrateVelocitiesJob@@SAPAXIPAX@Z");
//};

//public: static void * hkpIntegrateMotionJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpIntegrateMotionJob@@SAPAXIPAX@Z");
//};

//public: static void * hkpBroadPhaseJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpBroadPhaseJob@@SAPAXIPAX@Z");
//};

//public: static void * hkpPostCollideJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpPostCollideJob@@SAPAXIPAX@Z");
//};

//public: hkpIntegrateMotionJob::hkpIntegrateMotionJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpIntegrateMotionJob@@QAA@ABVhkpDynamicsJob@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpBroadPhaseJob::hkpBroadPhaseJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader *)
//{
//    mangled_ppc("??0hkpBroadPhaseJob@@QAA@ABVhkpDynamicsJob@@PAUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpSolveApplyGravityJob::hkpSolveApplyGravityJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpSolveApplyGravityJob@@QAA@ABVhkpDynamicsJob@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpSolveConstraintBatchJob::hkpSolveConstraintBatchJob(class hkpSolveApplyGravityJob const &, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpSolveConstraintBatchJob@@QAA@ABVhkpSolveApplyGravityJob@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpSolveConstraintBatchJob::hkpSolveConstraintBatchJob(class hkpSolveConstraintBatchJob const &)
//{
//    mangled_ppc("??0hkpSolveConstraintBatchJob@@QAA@ABV0@@Z");
//};

//public: hkpSolveConstraintBatchJob::hkpSolveConstraintBatchJob(class hkpSolveIntegrateVelocitiesJob const &, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpSolveConstraintBatchJob@@QAA@ABVhkpSolveIntegrateVelocitiesJob@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpSolveIntegrateVelocitiesJob::hkpSolveIntegrateVelocitiesJob(class hkpSolveConstraintBatchJob const &, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpSolveIntegrateVelocitiesJob@@QAA@ABVhkpSolveConstraintBatchJob@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpSolveExportResultsJob::hkpSolveExportResultsJob(class hkpDynamicsJob const &, unsigned short, struct hkpBuildJacobianTaskHeader const &, enum hkpDynamicsJob::JobSubType)
//{
//    mangled_ppc("??0hkpSolveExportResultsJob@@QAA@ABVhkpDynamicsJob@@GABUhkpBuildJacobianTaskHeader@@W4JobSubType@1@@Z");
//};

//public: hkpSplitSimulationIslandJob::hkpSplitSimulationIslandJob(class hkpDynamicsJob const &, unsigned short, enum hkpDynamicsJob::JobSubType)
//{
//    mangled_ppc("??0hkpSplitSimulationIslandJob@@QAA@ABVhkpDynamicsJob@@GW4JobSubType@1@@Z");
//};

//public: hkpSolveConstraintsJob::hkpSolveConstraintsJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpSolveConstraintsJob@@QAA@ABVhkpDynamicsJob@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//int hkGetByteOffsetCpuPtr(void const *, void const *)
//{
//    mangled_ppc("?hkGetByteOffsetCpuPtr@@YAHPBX0@Z");
//};

//void createSolverDebugOstream(void)
//{
//    mangled_ppc("?createSolverDebugOstream@@YAXXZ");
//};

//public: static void * hkpBuildJacobiansJob::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpBuildJacobiansJob@@SAPAXIPAX@Z");
//};

//public: hkpBuildJacobiansJob::hkpBuildJacobiansJob(class hkpDynamicsJob const &, struct hkpBuildJacobianTask *, struct hkpBuildJacobianTaskHeader const &)
//{
//    mangled_ppc("??0hkpBuildJacobiansJob@@QAA@ABVhkpDynamicsJob@@PAUhkpBuildJacobianTask@@ABUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: hkpRelativePointer32<struct hkpPhysicsCommand>::hkpRelativePointer32<struct hkpPhysicsCommand>(void)
//{
//    mangled_ppc("??0?$hkpRelativePointer32@UhkpPhysicsCommand@@@@QAA@XZ");
//};

//public: void hkpRelativePointer32<struct hkpPhysicsCommand>::set(struct hkpPhysicsCommand *)
//{
//    mangled_ppc("?set@?$hkpRelativePointer32@UhkpPhysicsCommand@@@@QAAXPAUhkpPhysicsCommand@@@Z");
//};

