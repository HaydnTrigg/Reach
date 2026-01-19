/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **D3D::g_ResourceName; // "?g_ResourceName@D3D@@3PAPBDA"
// __Fusion; // "__Fusion"
// D3D__SafeModeBitmapPath; // "D3D__SafeModeBitmapPath"
// D3D__NoAssertInSafeMode; // "D3D__NoAssertInSafeMode"
// D3D__NoExtraVertexInBeginExport; // "D3D__NoExtraVertexInBeginExport"
// D3D__NoExtraVerticesInEndExport; // "D3D__NoExtraVerticesInEndExport"

// unsigned long D3D::FindDestBaseIndex(class D3D::CDevice *, unsigned long);
// int D3D::IsFusion(void);
// public: D3D::SetEncodedThreadIdAndIncLockCount::SetEncodedThreadIdAndIncLockCount(unsigned long);
// public: unsigned long D3D::SetEncodedThreadIdAndIncLockCount::operator()(unsigned long) const;
// D3DResource_GetType;
// D3DVertexBuffer_GetDesc;
// D3DIndexBuffer_GetDesc;
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// D3DPtrToDWORD;
// D3DDWORDToPtr;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DTagCollection_TestAny;
// unsigned long D3D::InterlockedModify<unsigned long, struct D3D::SetEncodedThreadIdAndIncLockCount>(unsigned long volatile *, struct D3D::SetEncodedThreadIdAndIncLockCount const &);
// unsigned long D3D::GetCachedReadOnlyAddress(unsigned long);
// void D3D::FlushCachedMemory(unsigned long, unsigned long, int);
// unsigned int D3D::Pack32(unsigned long, unsigned long);
// void D3D::Unpack32(unsigned int, unsigned long *, unsigned long *);
// unsigned long D3D::GetCommonType(struct D3DResource *);
// char const * D3D::GetResourceName(unsigned long);
// void D3D::TimeStampWrittenResource(class D3D::CDevice *, struct D3DResource *);
// unsigned long D3D::EncodeFlushRange(unsigned long, unsigned long);
// void D3D::DecodeFlushRange(unsigned long, unsigned long *, unsigned long *);
// void D3D::VALIDATE_RESOURCE(struct D3DResource *, enum _D3DRESOURCETYPE, int, int);
// unsigned long D3D::GetExportIdentifier(struct D3DResource *);
// D3DResource_AddRef;
// D3DResource_GetDevice;
// D3DDevice_CreateVertexBuffer;
// D3DDevice_CreateConstantBuffer;
// D3DDevice_CreateIndexBuffer;
// D3DResource_IsSet;
// void DoBeginExportNanVertex(struct D3DDevice *);
// void D3D__DrawOneVertex(struct D3DDevice *);
// void DoEndExport512Pixels(struct D3DDevice *);
// void D3D__Draw512Pixels(struct D3DDevice *);
// D3DDevice_BeginExport;
// unsigned long D3D::InterlockedModifyAcquire<unsigned long, struct D3D::SetEncodedThreadIdAndIncLockCount>(unsigned long volatile *, struct D3D::SetEncodedThreadIdAndIncLockCount const &);
// void D3D::DestroyResource(struct D3DResource *);
// void * D3D::LockResource(struct D3DResource *, unsigned __int64, enum _D3DBLOCKTYPE, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// void D3D::UnlockResource(struct D3DResource *, unsigned long, unsigned long);
// void D3D::InvalidateCaches(class D3D::CDevice *, unsigned long, unsigned long);
// D3DResource_Release;
// D3DVertexBuffer_Lock;
// D3DVertexBuffer_AsyncLock;
// D3DVertexBuffer_Unlock;
// D3DConstantBuffer_Lock;
// D3DConstantBuffer_AsyncLock;
// D3DConstantBuffer_Unlock;
// D3DIndexBuffer_Lock;
// D3DIndexBuffer_AsyncLock;
// D3DIndexBuffer_Unlock;
// D3DDevice_EndExport;
// D3DDevice_InvalidateGpuCache;
// D3DDevice_InvalidateResourceGpuCache;

//unsigned long D3D::FindDestBaseIndex(class D3D::CDevice *, unsigned long)
//{
//    mangled_ppc("?FindDestBaseIndex@D3D@@YAKPAVCDevice@1@K@Z");
//};

//int D3D::IsFusion(void)
//{
//    mangled_ppc("?IsFusion@D3D@@YAHXZ");
//};

//public: D3D::SetEncodedThreadIdAndIncLockCount::SetEncodedThreadIdAndIncLockCount(unsigned long)
//{
//    mangled_ppc("??0SetEncodedThreadIdAndIncLockCount@D3D@@QAA@K@Z");
//};

//public: unsigned long D3D::SetEncodedThreadIdAndIncLockCount::operator()(unsigned long) const
//{
//    mangled_ppc("??RSetEncodedThreadIdAndIncLockCount@D3D@@QBAKK@Z");
//};

//D3DResource_GetType
//{
//    mangled_ppc("D3DResource_GetType");
//};

//D3DVertexBuffer_GetDesc
//{
//    mangled_ppc("D3DVertexBuffer_GetDesc");
//};

//D3DIndexBuffer_GetDesc
//{
//    mangled_ppc("D3DIndexBuffer_GetDesc");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//D3DPtrToDWORD
//{
//    mangled_ppc("D3DPtrToDWORD");
//};

//D3DDWORDToPtr
//{
//    mangled_ppc("D3DDWORDToPtr");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//unsigned long D3D::InterlockedModify<unsigned long, struct D3D::SetEncodedThreadIdAndIncLockCount>(unsigned long volatile *, struct D3D::SetEncodedThreadIdAndIncLockCount const &)
//{
//    mangled_ppc("??$InterlockedModify@KUSetEncodedThreadIdAndIncLockCount@D3D@@@D3D@@YAKPCKABUSetEncodedThreadIdAndIncLockCount@0@@Z");
//};

//unsigned long D3D::GetCachedReadOnlyAddress(unsigned long)
//{
//    mangled_ppc("?GetCachedReadOnlyAddress@D3D@@YAKK@Z");
//};

//void D3D::FlushCachedMemory(unsigned long, unsigned long, int)
//{
//    mangled_ppc("?FlushCachedMemory@D3D@@YAXKKH@Z");
//};

//unsigned int D3D::Pack32(unsigned long, unsigned long)
//{
//    mangled_ppc("?Pack32@D3D@@YAIKK@Z");
//};

//void D3D::Unpack32(unsigned int, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?Unpack32@D3D@@YAXIPAK0@Z");
//};

//unsigned long D3D::GetCommonType(struct D3DResource *)
//{
//    mangled_ppc("?GetCommonType@D3D@@YAKPAUD3DResource@@@Z");
//};

//char const * D3D::GetResourceName(unsigned long)
//{
//    mangled_ppc("?GetResourceName@D3D@@YAPBDK@Z");
//};

//void D3D::TimeStampWrittenResource(class D3D::CDevice *, struct D3DResource *)
//{
//    mangled_ppc("?TimeStampWrittenResource@D3D@@YAXPAVCDevice@1@PAUD3DResource@@@Z");
//};

//unsigned long D3D::EncodeFlushRange(unsigned long, unsigned long)
//{
//    mangled_ppc("?EncodeFlushRange@D3D@@YAKKK@Z");
//};

//void D3D::DecodeFlushRange(unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?DecodeFlushRange@D3D@@YAXKPAK0@Z");
//};

//void D3D::VALIDATE_RESOURCE(struct D3DResource *, enum _D3DRESOURCETYPE, int, int)
//{
//    mangled_ppc("?VALIDATE_RESOURCE@D3D@@YAXPAUD3DResource@@W4_D3DRESOURCETYPE@@HH@Z");
//};

//unsigned long D3D::GetExportIdentifier(struct D3DResource *)
//{
//    mangled_ppc("?GetExportIdentifier@D3D@@YAKPAUD3DResource@@@Z");
//};

//D3DResource_AddRef
//{
//    mangled_ppc("D3DResource_AddRef");
//};

//D3DResource_GetDevice
//{
//    mangled_ppc("D3DResource_GetDevice");
//};

//D3DDevice_CreateVertexBuffer
//{
//    mangled_ppc("D3DDevice_CreateVertexBuffer");
//};

//D3DDevice_CreateConstantBuffer
//{
//    mangled_ppc("D3DDevice_CreateConstantBuffer");
//};

//D3DDevice_CreateIndexBuffer
//{
//    mangled_ppc("D3DDevice_CreateIndexBuffer");
//};

//D3DResource_IsSet
//{
//    mangled_ppc("D3DResource_IsSet");
//};

//void DoBeginExportNanVertex(struct D3DDevice *)
//{
//    mangled_ppc("?DoBeginExportNanVertex@@YAXPAUD3DDevice@@@Z");
//};

//void D3D__DrawOneVertex(struct D3DDevice *)
//{
//    mangled_ppc("?D3D__DrawOneVertex@@YAXPAUD3DDevice@@@Z");
//};

//void DoEndExport512Pixels(struct D3DDevice *)
//{
//    mangled_ppc("?DoEndExport512Pixels@@YAXPAUD3DDevice@@@Z");
//};

//void D3D__Draw512Pixels(struct D3DDevice *)
//{
//    mangled_ppc("?D3D__Draw512Pixels@@YAXPAUD3DDevice@@@Z");
//};

//D3DDevice_BeginExport
//{
//    mangled_ppc("D3DDevice_BeginExport");
//};

//unsigned long D3D::InterlockedModifyAcquire<unsigned long, struct D3D::SetEncodedThreadIdAndIncLockCount>(unsigned long volatile *, struct D3D::SetEncodedThreadIdAndIncLockCount const &)
//{
//    mangled_ppc("??$InterlockedModifyAcquire@KUSetEncodedThreadIdAndIncLockCount@D3D@@@D3D@@YAKPCKABUSetEncodedThreadIdAndIncLockCount@0@@Z");
//};

//void D3D::DestroyResource(struct D3DResource *)
//{
//    mangled_ppc("?DestroyResource@D3D@@YAXPAUD3DResource@@@Z");
//};

//void * D3D::LockResource(struct D3DResource *, unsigned __int64, enum _D3DBLOCKTYPE, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?LockResource@D3D@@YAPAXPAUD3DResource@@_KW4_D3DBLOCKTYPE@@KKKKKKK@Z");
//};

//void D3D::UnlockResource(struct D3DResource *, unsigned long, unsigned long)
//{
//    mangled_ppc("?UnlockResource@D3D@@YAXPAUD3DResource@@KK@Z");
//};

//void D3D::InvalidateCaches(class D3D::CDevice *, unsigned long, unsigned long)
//{
//    mangled_ppc("?InvalidateCaches@D3D@@YAXPAVCDevice@1@KK@Z");
//};

//D3DResource_Release
//{
//    mangled_ppc("D3DResource_Release");
//};

//D3DVertexBuffer_Lock
//{
//    mangled_ppc("D3DVertexBuffer_Lock");
//};

//D3DVertexBuffer_AsyncLock
//{
//    mangled_ppc("D3DVertexBuffer_AsyncLock");
//};

//D3DVertexBuffer_Unlock
//{
//    mangled_ppc("D3DVertexBuffer_Unlock");
//};

//D3DConstantBuffer_Lock
//{
//    mangled_ppc("D3DConstantBuffer_Lock");
//};

//D3DConstantBuffer_AsyncLock
//{
//    mangled_ppc("D3DConstantBuffer_AsyncLock");
//};

//D3DConstantBuffer_Unlock
//{
//    mangled_ppc("D3DConstantBuffer_Unlock");
//};

//D3DIndexBuffer_Lock
//{
//    mangled_ppc("D3DIndexBuffer_Lock");
//};

//D3DIndexBuffer_AsyncLock
//{
//    mangled_ppc("D3DIndexBuffer_AsyncLock");
//};

//D3DIndexBuffer_Unlock
//{
//    mangled_ppc("D3DIndexBuffer_Unlock");
//};

//D3DDevice_EndExport
//{
//    mangled_ppc("D3DDevice_EndExport");
//};

//D3DDevice_InvalidateGpuCache
//{
//    mangled_ppc("D3DDevice_InvalidateGpuCache");
//};

//D3DDevice_InvalidateResourceGpuCache
//{
//    mangled_ppc("D3DDevice_InvalidateResourceGpuCache");
//};

