/* ---------- headers */

#include "xdk\xapilibd\stfc.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// StfcDataBlocksPerHashTreeLevel; // "StfcDataBlocksPerHashTreeLevel"
// StfcDriverObject; // "StfcDriverObject"

// StfcIsDataElement;
// StfcIsHashElement;
// InitializeListHead;
// RemoveEntryList;
// StfcBlockCacheElementFromBlock;
// StfcReferenceBlock;
// StfcDereferenceBlock;
// StfcMoveBlockCacheEntry;
// StfcLookupBlockCacheEntry;
// StfcCleanBlockCacheEntry;
// StfcDiscardBlock;
// StfcMapExistingBlock;
// StfcMapExistingDataBlock;
// StfcResetBlockCache;
// StfcResetWriteableBlockCache;
// StfcSetInAllocationSupport;
// StfcDbgPrintBlockCache;
// StfcBuildVolumeDescriptorFn;
// StfcResetWriteableDirectoryEntries;
// StfcComputeNumberOfDataBlocks;
// StfcInitializeDefaultPerformanceParameters;
// StfcCreateDevice;
// StfcDismountVolume;
// StfcDriverShutdown;
// StfcAllocateFcb;
// StfcCreateFcb;
// StfcCreateCloneFcb;
// StfcDereferenceFcb;
// StfcReferenceFcb;
// StfcFindOpenChildFcb;
// StfcIsLevel0HashBlockResident;
// StfcTestForFullyCachedRead;
// StfcIsValidFileName;
// StfcTimeStampToTime;
// StfcTimeToTimeStamp;
// StfcComputeLevelNBackingHashBlockNumber;
// StfcComputeBackingDataBlockNumber;
// StfcResetWriteableDirectoryBlock;
// StfcEndDataBlockUpdate;
// StfcFillDirectoryEntryFromFcb;
// StfcFsdQueryVolumeInformation;
// StfcSynchronousReadFile;
// StfcSynchronousWriteFile;
// StfcSynchronousWriteFileGather;
// StfcWorkerThread;
// StfcFsdQueueWorkerThread;
// StfcInitializeWorkerThreadContext;
// StfcSetPersistentStatus;
// ObDissectName;
// IopCopyTemplateFileName;
// IoCreateDirectoryEnumContext;
// IoIsNameInExpression;
// StfcFlushBlockCacheEntry;
// StfcFlushInAllocationSupportBlocks;
// StfcAllocateBlockCacheEntry;
// StfcMapNewBlock;
// StfcMapNewEmptyBlock;
// StfcMapReadableHashBlock;
// StfcMapEmptyHashBlock;
// StfcMapWriteableHashBlock;
// StfcMapReadableDataBlock;
// StfcMapEmptyDataBlock;
// StfcMapWriteableDataBlock;
// StfcMapWriteableCopyOfDataBlock;
// StfcFlushBlockCache;
// StfcFsdClose;
// StfcOpenTargetDirectory;
// StfcDriverEntry;
// StfcRefreshDirectoryEntryFromOpenChildFcb;
// StfcQueryNetworkOpenInformation;
// StfcFsdQueryInformation;
// StfcFsdFlushBuffers;
// StfcByteOffsetToBlockNumber;
// StfcLookupElementNameInDirectory;
// StfcFindExitingBlock;
// StfcExtendBackingFileSize;
// StfcAllocateBlocksFromLevel0HashBlock;
// StfcAllocateBlocksFromLevelNHashBlock;
// StfcAllocateBlocks;
// StfcFreeBlocksFromLevel0HashBlock;
// StfcFreeBlocksFromLevelNHashBlock;
// StfcFreeBlocks;
// StfcFsdDirectoryControl;
// StfcPreloadLevel0Hashblocks;
// StfcNonCachedRead;
// StfcFullyCachedRead;
// StfcPartiallyCachedRead;
// StfcFsdRead;
// StfcEnsureWriteableBlocksAvailable;
// StfcBeginDataBlockUpdate;
// StfcBeginDirectoryEntryUpdate;
// StfcUpdateDirectoryEntry;
// StfcEnsureWriteableDirectoryEntry;
// StfcDeleteFileAllocation;
// StfcTruncateFileAllocation;
// StfcExtendFileAllocation;
// StfcSetAllocationSize;
// StfcFsdWrite;
// StfcFsdCleanup;
// StfcCreateNewFile;
// StfcOverwriteExistingFile;
// StfcFsdCreate;
// StfcFlushUpdateDirectoryEntries;
// StfcControlDevice;
// StfcSetBasicInformation;
// StfcSetRenameInformation;
// StfcSetDispositionInformation;
// StfcSetEndOfFileInformation;
// StfcFsdSetInformation;

//StfcIsDataElement
//{
//    mangled_ppc("StfcIsDataElement");
//};

//StfcIsHashElement
//{
//    mangled_ppc("StfcIsHashElement");
//};

//InitializeListHead
//{
//    mangled_ppc("InitializeListHead");
//};

//RemoveEntryList
//{
//    mangled_ppc("RemoveEntryList");
//};

//StfcBlockCacheElementFromBlock
//{
//    mangled_ppc("StfcBlockCacheElementFromBlock");
//};

//StfcReferenceBlock
//{
//    mangled_ppc("StfcReferenceBlock");
//};

//StfcDereferenceBlock
//{
//    mangled_ppc("StfcDereferenceBlock");
//};

//StfcMoveBlockCacheEntry
//{
//    mangled_ppc("StfcMoveBlockCacheEntry");
//};

//StfcLookupBlockCacheEntry
//{
//    mangled_ppc("StfcLookupBlockCacheEntry");
//};

//StfcCleanBlockCacheEntry
//{
//    mangled_ppc("StfcCleanBlockCacheEntry");
//};

//StfcDiscardBlock
//{
//    mangled_ppc("StfcDiscardBlock");
//};

//StfcMapExistingBlock
//{
//    mangled_ppc("StfcMapExistingBlock");
//};

//StfcMapExistingDataBlock
//{
//    mangled_ppc("StfcMapExistingDataBlock");
//};

//StfcResetBlockCache
//{
//    mangled_ppc("StfcResetBlockCache");
//};

//StfcResetWriteableBlockCache
//{
//    mangled_ppc("StfcResetWriteableBlockCache");
//};

//StfcSetInAllocationSupport
//{
//    mangled_ppc("StfcSetInAllocationSupport");
//};

//StfcDbgPrintBlockCache
//{
//    mangled_ppc("StfcDbgPrintBlockCache");
//};

//StfcBuildVolumeDescriptorFn
//{
//    mangled_ppc("StfcBuildVolumeDescriptorFn");
//};

//StfcResetWriteableDirectoryEntries
//{
//    mangled_ppc("StfcResetWriteableDirectoryEntries");
//};

//StfcComputeNumberOfDataBlocks
//{
//    mangled_ppc("StfcComputeNumberOfDataBlocks");
//};

//StfcInitializeDefaultPerformanceParameters
//{
//    mangled_ppc("StfcInitializeDefaultPerformanceParameters");
//};

//StfcCreateDevice
//{
//    mangled_ppc("StfcCreateDevice");
//};

//StfcDismountVolume
//{
//    mangled_ppc("StfcDismountVolume");
//};

//StfcDriverShutdown
//{
//    mangled_ppc("StfcDriverShutdown");
//};

//StfcAllocateFcb
//{
//    mangled_ppc("StfcAllocateFcb");
//};

//StfcCreateFcb
//{
//    mangled_ppc("StfcCreateFcb");
//};

//StfcCreateCloneFcb
//{
//    mangled_ppc("StfcCreateCloneFcb");
//};

//StfcDereferenceFcb
//{
//    mangled_ppc("StfcDereferenceFcb");
//};

//StfcReferenceFcb
//{
//    mangled_ppc("StfcReferenceFcb");
//};

//StfcFindOpenChildFcb
//{
//    mangled_ppc("StfcFindOpenChildFcb");
//};

//StfcIsLevel0HashBlockResident
//{
//    mangled_ppc("StfcIsLevel0HashBlockResident");
//};

//StfcTestForFullyCachedRead
//{
//    mangled_ppc("StfcTestForFullyCachedRead");
//};

//StfcIsValidFileName
//{
//    mangled_ppc("StfcIsValidFileName");
//};

//StfcTimeStampToTime
//{
//    mangled_ppc("StfcTimeStampToTime");
//};

//StfcTimeToTimeStamp
//{
//    mangled_ppc("StfcTimeToTimeStamp");
//};

//StfcComputeLevelNBackingHashBlockNumber
//{
//    mangled_ppc("StfcComputeLevelNBackingHashBlockNumber");
//};

//StfcComputeBackingDataBlockNumber
//{
//    mangled_ppc("StfcComputeBackingDataBlockNumber");
//};

//StfcResetWriteableDirectoryBlock
//{
//    mangled_ppc("StfcResetWriteableDirectoryBlock");
//};

//StfcEndDataBlockUpdate
//{
//    mangled_ppc("StfcEndDataBlockUpdate");
//};

//StfcFillDirectoryEntryFromFcb
//{
//    mangled_ppc("StfcFillDirectoryEntryFromFcb");
//};

//StfcFsdQueryVolumeInformation
//{
//    mangled_ppc("StfcFsdQueryVolumeInformation");
//};

//StfcSynchronousReadFile
//{
//    mangled_ppc("StfcSynchronousReadFile");
//};

//StfcSynchronousWriteFile
//{
//    mangled_ppc("StfcSynchronousWriteFile");
//};

//StfcSynchronousWriteFileGather
//{
//    mangled_ppc("StfcSynchronousWriteFileGather");
//};

//StfcWorkerThread
//{
//    mangled_ppc("StfcWorkerThread");
//};

//StfcFsdQueueWorkerThread
//{
//    mangled_ppc("StfcFsdQueueWorkerThread");
//};

//StfcInitializeWorkerThreadContext
//{
//    mangled_ppc("StfcInitializeWorkerThreadContext");
//};

//StfcSetPersistentStatus
//{
//    mangled_ppc("StfcSetPersistentStatus");
//};

//ObDissectName
//{
//    mangled_ppc("ObDissectName");
//};

//IopCopyTemplateFileName
//{
//    mangled_ppc("IopCopyTemplateFileName");
//};

//IoCreateDirectoryEnumContext
//{
//    mangled_ppc("IoCreateDirectoryEnumContext");
//};

//IoIsNameInExpression
//{
//    mangled_ppc("IoIsNameInExpression");
//};

//StfcFlushBlockCacheEntry
//{
//    mangled_ppc("StfcFlushBlockCacheEntry");
//};

//StfcFlushInAllocationSupportBlocks
//{
//    mangled_ppc("StfcFlushInAllocationSupportBlocks");
//};

//StfcAllocateBlockCacheEntry
//{
//    mangled_ppc("StfcAllocateBlockCacheEntry");
//};

//StfcMapNewBlock
//{
//    mangled_ppc("StfcMapNewBlock");
//};

//StfcMapNewEmptyBlock
//{
//    mangled_ppc("StfcMapNewEmptyBlock");
//};

//StfcMapReadableHashBlock
//{
//    mangled_ppc("StfcMapReadableHashBlock");
//};

//StfcMapEmptyHashBlock
//{
//    mangled_ppc("StfcMapEmptyHashBlock");
//};

//StfcMapWriteableHashBlock
//{
//    mangled_ppc("StfcMapWriteableHashBlock");
//};

//StfcMapReadableDataBlock
//{
//    mangled_ppc("StfcMapReadableDataBlock");
//};

//StfcMapEmptyDataBlock
//{
//    mangled_ppc("StfcMapEmptyDataBlock");
//};

//StfcMapWriteableDataBlock
//{
//    mangled_ppc("StfcMapWriteableDataBlock");
//};

//StfcMapWriteableCopyOfDataBlock
//{
//    mangled_ppc("StfcMapWriteableCopyOfDataBlock");
//};

//StfcFlushBlockCache
//{
//    mangled_ppc("StfcFlushBlockCache");
//};

//StfcFsdClose
//{
//    mangled_ppc("StfcFsdClose");
//};

//StfcOpenTargetDirectory
//{
//    mangled_ppc("StfcOpenTargetDirectory");
//};

//StfcDriverEntry
//{
//    mangled_ppc("StfcDriverEntry");
//};

//StfcRefreshDirectoryEntryFromOpenChildFcb
//{
//    mangled_ppc("StfcRefreshDirectoryEntryFromOpenChildFcb");
//};

//StfcQueryNetworkOpenInformation
//{
//    mangled_ppc("StfcQueryNetworkOpenInformation");
//};

//StfcFsdQueryInformation
//{
//    mangled_ppc("StfcFsdQueryInformation");
//};

//StfcFsdFlushBuffers
//{
//    mangled_ppc("StfcFsdFlushBuffers");
//};

//StfcByteOffsetToBlockNumber
//{
//    mangled_ppc("StfcByteOffsetToBlockNumber");
//};

//StfcLookupElementNameInDirectory
//{
//    mangled_ppc("StfcLookupElementNameInDirectory");
//};

//StfcFindExitingBlock
//{
//    mangled_ppc("StfcFindExitingBlock");
//};

//StfcExtendBackingFileSize
//{
//    mangled_ppc("StfcExtendBackingFileSize");
//};

//StfcAllocateBlocksFromLevel0HashBlock
//{
//    mangled_ppc("StfcAllocateBlocksFromLevel0HashBlock");
//};

//StfcAllocateBlocksFromLevelNHashBlock
//{
//    mangled_ppc("StfcAllocateBlocksFromLevelNHashBlock");
//};

//StfcAllocateBlocks
//{
//    mangled_ppc("StfcAllocateBlocks");
//};

//StfcFreeBlocksFromLevel0HashBlock
//{
//    mangled_ppc("StfcFreeBlocksFromLevel0HashBlock");
//};

//StfcFreeBlocksFromLevelNHashBlock
//{
//    mangled_ppc("StfcFreeBlocksFromLevelNHashBlock");
//};

//StfcFreeBlocks
//{
//    mangled_ppc("StfcFreeBlocks");
//};

//StfcFsdDirectoryControl
//{
//    mangled_ppc("StfcFsdDirectoryControl");
//};

//StfcPreloadLevel0Hashblocks
//{
//    mangled_ppc("StfcPreloadLevel0Hashblocks");
//};

//StfcNonCachedRead
//{
//    mangled_ppc("StfcNonCachedRead");
//};

//StfcFullyCachedRead
//{
//    mangled_ppc("StfcFullyCachedRead");
//};

//StfcPartiallyCachedRead
//{
//    mangled_ppc("StfcPartiallyCachedRead");
//};

//StfcFsdRead
//{
//    mangled_ppc("StfcFsdRead");
//};

//StfcEnsureWriteableBlocksAvailable
//{
//    mangled_ppc("StfcEnsureWriteableBlocksAvailable");
//};

//StfcBeginDataBlockUpdate
//{
//    mangled_ppc("StfcBeginDataBlockUpdate");
//};

//StfcBeginDirectoryEntryUpdate
//{
//    mangled_ppc("StfcBeginDirectoryEntryUpdate");
//};

//StfcUpdateDirectoryEntry
//{
//    mangled_ppc("StfcUpdateDirectoryEntry");
//};

//StfcEnsureWriteableDirectoryEntry
//{
//    mangled_ppc("StfcEnsureWriteableDirectoryEntry");
//};

//StfcDeleteFileAllocation
//{
//    mangled_ppc("StfcDeleteFileAllocation");
//};

//StfcTruncateFileAllocation
//{
//    mangled_ppc("StfcTruncateFileAllocation");
//};

//StfcExtendFileAllocation
//{
//    mangled_ppc("StfcExtendFileAllocation");
//};

//StfcSetAllocationSize
//{
//    mangled_ppc("StfcSetAllocationSize");
//};

//StfcFsdWrite
//{
//    mangled_ppc("StfcFsdWrite");
//};

//StfcFsdCleanup
//{
//    mangled_ppc("StfcFsdCleanup");
//};

//StfcCreateNewFile
//{
//    mangled_ppc("StfcCreateNewFile");
//};

//StfcOverwriteExistingFile
//{
//    mangled_ppc("StfcOverwriteExistingFile");
//};

//StfcFsdCreate
//{
//    mangled_ppc("StfcFsdCreate");
//};

//StfcFlushUpdateDirectoryEntries
//{
//    mangled_ppc("StfcFlushUpdateDirectoryEntries");
//};

//StfcControlDevice
//{
//    mangled_ppc("StfcControlDevice");
//};

//StfcSetBasicInformation
//{
//    mangled_ppc("StfcSetBasicInformation");
//};

//StfcSetRenameInformation
//{
//    mangled_ppc("StfcSetRenameInformation");
//};

//StfcSetDispositionInformation
//{
//    mangled_ppc("StfcSetDispositionInformation");
//};

//StfcSetEndOfFileInformation
//{
//    mangled_ppc("StfcSetEndOfFileInformation");
//};

//StfcFsdSetInformation
//{
//    mangled_ppc("StfcFsdSetInformation");
//};

