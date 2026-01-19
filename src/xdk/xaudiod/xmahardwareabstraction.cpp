/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct XAUDIO::_XMA_CONTEXT_DATA *XAUDIO::XMAHARDWARE::pContextArray; // "?pContextArray@XMAHARDWARE@XAUDIO@@3PAU_XMA_CONTEXT_DATA@2@A"

// void GetBinary(char *, unsigned long, int, int, bool);
// XMAPlaybackInitialize;
// XMAPlaybackCreate;
// XMAPlaybackDestroy;
// XMAPlaybackGetRequiredBufferSize;
// XMAPlaybackFreeContexts;
// XMAPlaybackQueryContextsAllocated;
// XMAPlaybackSubmitData;
// XMAPlaybackQueryInputDataPending;
// XMAPlaybackQueryReadyForMoreData;
// XMAPlaybackIsIdle;
// XMAPlaybackQueryStatus;
// XMAPlaybackQueryAvailableData;
// bool XMAPlaybackUpdateWriteBufferReadOffset(struct XAUDIO::_XMA_CONTEXT_DATA *, unsigned long);
// XMAPlaybackConsumeDecodedData;
// XMAPlaybackAccessDecodedData;
// XMAPlaybackRewindDecodePosition;
// __lvx;
// __stvx;
// XMAPlaybackFlushData;
// XMAPlaybackGetErrorBits;
// XMAPlaybackGetParseError;
// XMAPlaybackGetPacketMetadata;
// XMAPlaybackSetLoop;
// XMAPlaybackGetRemainingLoopCount;
// XMAPlaybackGetStreamPosition;
// XMAPlaybackQueryCurrentPosition;
// XMAPlaybackSetDecodePosition;
// XMAPlaybackGetFrameOffsetFromPacketHeader;
// XMAPlaybackDebugDump;
// unsigned long XAUDIO::XMAHARDWARE::GetCurrentlyProcessingContext(void);
// unsigned short XAUDIO::XMAHARDWARE::CalculateContextIndex(struct IXMAContext *const);
// void XAUDIO::XMAHARDWARE::SetValidContextRegister(unsigned long, unsigned long);
// void XAUDIO::XMAHARDWARE::ClearValidContextRegister(unsigned long, unsigned long);
// void XAUDIO::XMAHARDWARE::ClearErrorContextRegister(unsigned long, unsigned long);
// void XAUDIO::XMAHARDWARE::WriteResetEnableRegister(unsigned long, unsigned long);
// void CopyContextData(struct XAUDIO::_XMA_CONTEXT_DATA *, struct XAUDIO::_XMA_CONTEXT_DATA const *);
// void XMAPlaybackRecoverFromHardwareHang(void);
// XMAPlaybackAllocateContexts;
// XMAPlaybackRequestModifyLock;
// XMAPlaybackWaitUntilModifyLockObtained;
// XMAPlaybackQueryModifyLockObtained;
// XMAPlaybackResumePlayback;

//void GetBinary(char *, unsigned long, int, int, bool)
//{
//    mangled_ppc("?GetBinary@@YAXPADKHH_N@Z");
//};

//XMAPlaybackInitialize
//{
//    mangled_ppc("XMAPlaybackInitialize");
//};

//XMAPlaybackCreate
//{
//    mangled_ppc("XMAPlaybackCreate");
//};

//XMAPlaybackDestroy
//{
//    mangled_ppc("XMAPlaybackDestroy");
//};

//XMAPlaybackGetRequiredBufferSize
//{
//    mangled_ppc("XMAPlaybackGetRequiredBufferSize");
//};

//XMAPlaybackFreeContexts
//{
//    mangled_ppc("XMAPlaybackFreeContexts");
//};

//XMAPlaybackQueryContextsAllocated
//{
//    mangled_ppc("XMAPlaybackQueryContextsAllocated");
//};

//XMAPlaybackSubmitData
//{
//    mangled_ppc("XMAPlaybackSubmitData");
//};

//XMAPlaybackQueryInputDataPending
//{
//    mangled_ppc("XMAPlaybackQueryInputDataPending");
//};

//XMAPlaybackQueryReadyForMoreData
//{
//    mangled_ppc("XMAPlaybackQueryReadyForMoreData");
//};

//XMAPlaybackIsIdle
//{
//    mangled_ppc("XMAPlaybackIsIdle");
//};

//XMAPlaybackQueryStatus
//{
//    mangled_ppc("XMAPlaybackQueryStatus");
//};

//XMAPlaybackQueryAvailableData
//{
//    mangled_ppc("XMAPlaybackQueryAvailableData");
//};

//bool XMAPlaybackUpdateWriteBufferReadOffset(struct XAUDIO::_XMA_CONTEXT_DATA *, unsigned long)
//{
//    mangled_ppc("?XMAPlaybackUpdateWriteBufferReadOffset@@YA_NPAU_XMA_CONTEXT_DATA@XAUDIO@@K@Z");
//};

//XMAPlaybackConsumeDecodedData
//{
//    mangled_ppc("XMAPlaybackConsumeDecodedData");
//};

//XMAPlaybackAccessDecodedData
//{
//    mangled_ppc("XMAPlaybackAccessDecodedData");
//};

//XMAPlaybackRewindDecodePosition
//{
//    mangled_ppc("XMAPlaybackRewindDecodePosition");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//XMAPlaybackFlushData
//{
//    mangled_ppc("XMAPlaybackFlushData");
//};

//XMAPlaybackGetErrorBits
//{
//    mangled_ppc("XMAPlaybackGetErrorBits");
//};

//XMAPlaybackGetParseError
//{
//    mangled_ppc("XMAPlaybackGetParseError");
//};

//XMAPlaybackGetPacketMetadata
//{
//    mangled_ppc("XMAPlaybackGetPacketMetadata");
//};

//XMAPlaybackSetLoop
//{
//    mangled_ppc("XMAPlaybackSetLoop");
//};

//XMAPlaybackGetRemainingLoopCount
//{
//    mangled_ppc("XMAPlaybackGetRemainingLoopCount");
//};

//XMAPlaybackGetStreamPosition
//{
//    mangled_ppc("XMAPlaybackGetStreamPosition");
//};

//XMAPlaybackQueryCurrentPosition
//{
//    mangled_ppc("XMAPlaybackQueryCurrentPosition");
//};

//XMAPlaybackSetDecodePosition
//{
//    mangled_ppc("XMAPlaybackSetDecodePosition");
//};

//XMAPlaybackGetFrameOffsetFromPacketHeader
//{
//    mangled_ppc("XMAPlaybackGetFrameOffsetFromPacketHeader");
//};

//XMAPlaybackDebugDump
//{
//    mangled_ppc("XMAPlaybackDebugDump");
//};

//unsigned long XAUDIO::XMAHARDWARE::GetCurrentlyProcessingContext(void)
//{
//    mangled_ppc("?GetCurrentlyProcessingContext@XMAHARDWARE@XAUDIO@@YAKXZ");
//};

//unsigned short XAUDIO::XMAHARDWARE::CalculateContextIndex(struct IXMAContext *const)
//{
//    mangled_ppc("?CalculateContextIndex@XMAHARDWARE@XAUDIO@@YAGQAUIXMAContext@@@Z");
//};

//void XAUDIO::XMAHARDWARE::SetValidContextRegister(unsigned long, unsigned long)
//{
//    mangled_ppc("?SetValidContextRegister@XMAHARDWARE@XAUDIO@@YAXKK@Z");
//};

//void XAUDIO::XMAHARDWARE::ClearValidContextRegister(unsigned long, unsigned long)
//{
//    mangled_ppc("?ClearValidContextRegister@XMAHARDWARE@XAUDIO@@YAXKK@Z");
//};

//void XAUDIO::XMAHARDWARE::ClearErrorContextRegister(unsigned long, unsigned long)
//{
//    mangled_ppc("?ClearErrorContextRegister@XMAHARDWARE@XAUDIO@@YAXKK@Z");
//};

//void XAUDIO::XMAHARDWARE::WriteResetEnableRegister(unsigned long, unsigned long)
//{
//    mangled_ppc("?WriteResetEnableRegister@XMAHARDWARE@XAUDIO@@YAXKK@Z");
//};

//void CopyContextData(struct XAUDIO::_XMA_CONTEXT_DATA *, struct XAUDIO::_XMA_CONTEXT_DATA const *)
//{
//    mangled_ppc("?CopyContextData@@YAXPAU_XMA_CONTEXT_DATA@XAUDIO@@PBU12@@Z");
//};

//void XMAPlaybackRecoverFromHardwareHang(void)
//{
//    mangled_ppc("?XMAPlaybackRecoverFromHardwareHang@@YAXXZ");
//};

//XMAPlaybackAllocateContexts
//{
//    mangled_ppc("XMAPlaybackAllocateContexts");
//};

//XMAPlaybackRequestModifyLock
//{
//    mangled_ppc("XMAPlaybackRequestModifyLock");
//};

//XMAPlaybackWaitUntilModifyLockObtained
//{
//    mangled_ppc("XMAPlaybackWaitUntilModifyLockObtained");
//};

//XMAPlaybackQueryModifyLockObtained
//{
//    mangled_ppc("XMAPlaybackQueryModifyLockObtained");
//};

//XMAPlaybackResumePlayback
//{
//    mangled_ppc("XMAPlaybackResumePlayback");
//};

