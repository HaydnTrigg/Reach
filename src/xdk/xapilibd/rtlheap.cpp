/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// RtlpHeapHeaderFieldOffsets; // "RtlpHeapHeaderFieldOffsets"
// RtlHeapBreakOnSize; // "RtlHeapBreakOnSize"
// MmHeapSegmentReserve; // "MmHeapSegmentReserve"
// MmHeapSegmentCommit; // "MmHeapSegmentCommit"
// MmHeapDeCommitTotalFreeThreshold; // "MmHeapDeCommitTotalFreeThreshold"
// MmHeapDeCommitFreeBlockThreshold; // "MmHeapDeCommitFreeBlockThreshold"
// CheckHeapFillPattern; // "CheckHeapFillPattern"
// RtlpValidateHeapHdrsEnable; // "RtlpValidateHeapHdrsEnable"

// NtAllocateVirtualMemoryWrapper;
// InitializeListHead;
// RemoveEntryList;
// RtlZeroHeap;
// RtlpCreateUnCommittedRange;
// RtlpDestroyUnCommittedRange;
// RtlpInsertUnCommittedPages;
// RtlpFindAndCommitPages;
// RtlpDestroyHeapSegment;
// RtlpCoalesceFreeBlocks;
// RtlpInsertFreeBlock;
// RtlpGetExtraStuffPointer;
// RtlpGetSizeOfBigBlock;
// RtlpCheckBusyBlockTail;
// RtlSetAttributesOnHeapAlloc;
// RtlGetAttributesOnHeapAlloc;
// RtlGetFreeSpaceHeap;
// RtlpCheckHeapSignature;
// RtlpValidateHeapHeaders;
// RtlpValidateHeapSegment;
// RtlpValidateHeapEntry;
// RtlpValidateHeap;
// RtlDebugWalkHeap;
// RtlWalkHeap;
// RtlValidateHeap;
// RtlDebugCompactHeap;
// RtlDestroyHeap;
// RtlpGrowBlockInPlace;
// RtlSizeHeap;
// RtlpInitializeHeapSegment;
// RtlpExtendHeap;
// RtlpDeCommitFreeBlock;
// RtlLockHeap;
// RtlUnlockHeap;
// RtlpCoalesceHeap;
// RtlCompactHeap;
// RtlCreateHeap;
// RtlAllocateHeapSlowly;
// RtlFreeHeapSlowly;
// RtlAllocateHeap;
// RtlFreeHeap;
// RtlReAllocateHeap;

//NtAllocateVirtualMemoryWrapper
//{
//    mangled_ppc("NtAllocateVirtualMemoryWrapper");
//};

//InitializeListHead
//{
//    mangled_ppc("InitializeListHead");
//};

//RemoveEntryList
//{
//    mangled_ppc("RemoveEntryList");
//};

//RtlZeroHeap
//{
//    mangled_ppc("RtlZeroHeap");
//};

//RtlpCreateUnCommittedRange
//{
//    mangled_ppc("RtlpCreateUnCommittedRange");
//};

//RtlpDestroyUnCommittedRange
//{
//    mangled_ppc("RtlpDestroyUnCommittedRange");
//};

//RtlpInsertUnCommittedPages
//{
//    mangled_ppc("RtlpInsertUnCommittedPages");
//};

//RtlpFindAndCommitPages
//{
//    mangled_ppc("RtlpFindAndCommitPages");
//};

//RtlpDestroyHeapSegment
//{
//    mangled_ppc("RtlpDestroyHeapSegment");
//};

//RtlpCoalesceFreeBlocks
//{
//    mangled_ppc("RtlpCoalesceFreeBlocks");
//};

//RtlpInsertFreeBlock
//{
//    mangled_ppc("RtlpInsertFreeBlock");
//};

//RtlpGetExtraStuffPointer
//{
//    mangled_ppc("RtlpGetExtraStuffPointer");
//};

//RtlpGetSizeOfBigBlock
//{
//    mangled_ppc("RtlpGetSizeOfBigBlock");
//};

//RtlpCheckBusyBlockTail
//{
//    mangled_ppc("RtlpCheckBusyBlockTail");
//};

//RtlSetAttributesOnHeapAlloc
//{
//    mangled_ppc("RtlSetAttributesOnHeapAlloc");
//};

//RtlGetAttributesOnHeapAlloc
//{
//    mangled_ppc("RtlGetAttributesOnHeapAlloc");
//};

//RtlGetFreeSpaceHeap
//{
//    mangled_ppc("RtlGetFreeSpaceHeap");
//};

//RtlpCheckHeapSignature
//{
//    mangled_ppc("RtlpCheckHeapSignature");
//};

//RtlpValidateHeapHeaders
//{
//    mangled_ppc("RtlpValidateHeapHeaders");
//};

//RtlpValidateHeapSegment
//{
//    mangled_ppc("RtlpValidateHeapSegment");
//};

//RtlpValidateHeapEntry
//{
//    mangled_ppc("RtlpValidateHeapEntry");
//};

//RtlpValidateHeap
//{
//    mangled_ppc("RtlpValidateHeap");
//};

//RtlDebugWalkHeap
//{
//    mangled_ppc("RtlDebugWalkHeap");
//};

//RtlWalkHeap
//{
//    mangled_ppc("RtlWalkHeap");
//};

//RtlValidateHeap
//{
//    mangled_ppc("RtlValidateHeap");
//};

//RtlDebugCompactHeap
//{
//    mangled_ppc("RtlDebugCompactHeap");
//};

//RtlDestroyHeap
//{
//    mangled_ppc("RtlDestroyHeap");
//};

//RtlpGrowBlockInPlace
//{
//    mangled_ppc("RtlpGrowBlockInPlace");
//};

//RtlSizeHeap
//{
//    mangled_ppc("RtlSizeHeap");
//};

//RtlpInitializeHeapSegment
//{
//    mangled_ppc("RtlpInitializeHeapSegment");
//};

//RtlpExtendHeap
//{
//    mangled_ppc("RtlpExtendHeap");
//};

//RtlpDeCommitFreeBlock
//{
//    mangled_ppc("RtlpDeCommitFreeBlock");
//};

//RtlLockHeap
//{
//    mangled_ppc("RtlLockHeap");
//};

//RtlUnlockHeap
//{
//    mangled_ppc("RtlUnlockHeap");
//};

//RtlpCoalesceHeap
//{
//    mangled_ppc("RtlpCoalesceHeap");
//};

//RtlCompactHeap
//{
//    mangled_ppc("RtlCompactHeap");
//};

//RtlCreateHeap
//{
//    mangled_ppc("RtlCreateHeap");
//};

//RtlAllocateHeapSlowly
//{
//    mangled_ppc("RtlAllocateHeapSlowly");
//};

//RtlFreeHeapSlowly
//{
//    mangled_ppc("RtlFreeHeapSlowly");
//};

//RtlAllocateHeap
//{
//    mangled_ppc("RtlAllocateHeap");
//};

//RtlFreeHeap
//{
//    mangled_ppc("RtlFreeHeap");
//};

//RtlReAllocateHeap
//{
//    mangled_ppc("RtlReAllocateHeap");
//};

