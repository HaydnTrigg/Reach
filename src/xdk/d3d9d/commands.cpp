/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void D3D::CParser::Start(unsigned long *, unsigned long);
// void D3D::CopyFixups(struct D3D::FixupRecord *, struct D3D::FixupRecord const *, int, unsigned long);
// public: void D3D::CBuilder::Add(unsigned long);
// public: void D3D::CBuilder::Add(unsigned long, unsigned long);
// public: unsigned long D3D::CBuilder::Done(void);
// int D3D::ResourceCompareFunction(void const *, void const *);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS;
// public: void D3D::CCommandBuffer::DebugBeginRun(class D3D::CDevice *);
// D3DPtrToDWORD;
// D3DDWORDToPtr;
// D3DTag_Index;
// public: void D3D::CCommandBuffer::DebugEndRun(class D3D::CDevice *);
// D3DTag_SubsetMask;
// D3DTag_Mask;
// D3DDevice_CreateCommandBuffer;
// D3DTagCollection_TestAny;
// D3DTagCollection_TestAll;
// D3DDevice_CreateSystemCommandBuffer;
// D3DDevice_QuerySystemCommandBuffer;
// public: unsigned __int64* D3D::CCommandBuffer::MagicValue(void);
// public: int D3D::CCommandBuffer::VerifyMagicValue(void);
// class D3D::CCommandBuffer * D3D::Promote(struct D3DCommandBuffer *);
// public: D3D::CParser::CParser(void);
// public: D3D::CParser::CParser(unsigned long *, unsigned long);
// public: void D3D::CParser::QueryPosition(unsigned long **, unsigned long *);
// public: void D3D::CDevice::SetAllCommandBufferLazyState(struct _D3DTAGCOLLECTION *);
// struct D3DResource * D3DDWORDToPtr<struct D3DResource>(unsigned long);
// struct D3D::BufferResourceNode * D3DDWORDToPtr<struct D3D::BufferResourceNode>(unsigned long);
// struct D3D::RingAllocChunk * D3DDWORDToPtr<struct D3D::RingAllocChunk>(unsigned long);
// struct D3D::FixupRecord * D3DDWORDToPtr<struct D3D::FixupRecord>(unsigned long);
// unsigned long * D3DDWORDToPtr<unsigned long>(unsigned long);
// class D3D::CCommandBuffer * D3DDWORDToPtr<class D3D::CCommandBuffer>(unsigned long);
// void * (* D3DDWORDToPtr<void * (unsigned long, unsigned long, unsigned long *, unsigned long)>(unsigned long))(unsigned long, unsigned long, unsigned long *, unsigned long);
// void (* D3DDWORDToPtr<void (unsigned long)>(unsigned long))(unsigned long);
// void (* D3DDWORDToPtr<void (unsigned long, unsigned long *, unsigned long *)>(unsigned long))(unsigned long, unsigned long *, unsigned long *);
// struct D3D::DebugAllocationNode * D3DDWORDToPtr<struct D3D::DebugAllocationNode>(unsigned long);
// public: int D3D::CParser::Get(unsigned long *, struct D3D::ParseData *);
// unsigned long D3D::MoveInlineVertexData(union GPUVERTEX_FETCH_CONSTANT *, unsigned long *, unsigned long, unsigned long, unsigned long);
// void * D3D::MovePatches(struct D3D::RingAllocChunk *, struct D3D::RingAllocChunk const *);
// void D3D::WhackAddresses(unsigned long *, unsigned long, unsigned long, unsigned long);
// void D3D::VerifyAddresses(struct D3D::SegmentCall *);
// public: int D3D::CBuilder::Get(unsigned long *, struct D3D::ParseData *);
// void D3D::ResetCommandBufferState(class D3D::CDevice *, unsigned int *, struct _D3DTAGCOLLECTION &);
// public: void D3D::CCommandBuffer::DebugReset(void);
// public: void D3D::CCommandBuffer::DebugCreate(int);
// D3DCommandBuffer_SetMemory;
// D3DDevice_CreateGrowableCommandBuffer;
// D3DDevice_SetCommandBufferPredication;
// D3DCommandBuffer_BeginDynamicFixups;
// D3DCommandBuffer_BeginFixupCreation;
// public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::destroy(void);
// public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ensure2(unsigned long, long &);
// unsigned long * D3D::PreviousMultiple<unsigned long, unsigned long>(unsigned long *, unsigned long);
// struct D3D::BufferResourceNode * D3D::GetCachedReadOnlyAddress<struct D3D::BufferResourceNode>(struct D3D::BufferResourceNode *);
// struct D3D::SegmentCallNode * D3D::GetCachedReadOnlyAddress<struct D3D::SegmentCallNode>(struct D3D::SegmentCallNode *);
// struct D3D::DebugAllocationNode * D3D::GetCachedReadOnlyAddress<struct D3D::DebugAllocationNode>(struct D3D::DebugAllocationNode *);
// struct D3D::DebugAllocationNode ** D3D::GetCachedReadOnlyAddress<struct D3D::DebugAllocationNode *>(struct D3D::DebugAllocationNode **);
// void ** D3D::GetCachedReadOnlyAddress<void *>(void **);
// public: struct D3DResource * D3D::BufferResource::GetResource(void);
// struct D3D::BufferResourceNode * D3D::CB_pNext(struct D3D::BufferResourceNode *);
// struct D3D::BufferResourceNode * D3D::CB_pBufferResources(class D3D::CCommandBuffer *);
// struct D3D::RingAllocChunk * D3D::CB_pPatches(class D3D::CCommandBuffer *);
// struct D3D::FixupRecord * D3D::CB_pFixupWrite(class D3D::CCommandBuffer *);
// struct D3D::FixupRecord * D3D::CB_pFixupWriteLimit(class D3D::CCommandBuffer *);
// struct D3D::FixupRecord * D3D::CB_pFixupRead(class D3D::CCommandBuffer *);
// struct D3D::FixupRecord * D3D::CB_pStaticFixup(class D3D::CCommandBuffer *);
// unsigned long * D3D::CB_pPhysical(class D3D::CCommandBuffer *);
// class D3D::CCommandBuffer * D3D::CB_pNextGrowable(class D3D::CCommandBuffer *);
// void * (* D3D::CB_pGrowableAllocateCallback(class D3D::CCommandBuffer *))(unsigned long, unsigned long, unsigned long *, unsigned long);
// void (* D3D::CB_pGrowableFreeCallback(class D3D::CCommandBuffer *))(unsigned long);
// void (* D3D::CB_pGrowableQueryCallback(class D3D::CCommandBuffer *))(unsigned long, unsigned long *, unsigned long *);
// struct D3D::DebugAllocationNode * D3D::CB_pDebugAllocationList(class D3D::CCommandBuffer *);
// struct D3D::DebugAllocationNode * D3D::CB_pCurrentDebugAllocationNode(class D3D::CCommandBuffer *);
// void * D3D::CommandBufferDeviceAllocate(class D3D::CDevice *, unsigned long, unsigned long *, unsigned long);
// void D3D::TimeStampBufferResources(unsigned long, struct D3D::BufferResourceNode *, unsigned long);
// public: void D3D::CCommandBuffer::FlushCachedGpuCommands(void);
// public: void D3D::CCommandBuffer::FlushCachedAllocation(void);
// int D3D::CreatePhysicalPart(struct D3D::SegmentCallNode *, struct D3D::RingAllocChunk *, unsigned long *, unsigned long, struct D3D::SegmentCall *, struct D3D::RingAllocChunk **, unsigned long **, unsigned long *);
// void D3D::FixupPhysicalPart(class D3D::CCommandBuffer *, void *, struct D3D::RingAllocChunk *);
// void D3D::FixupPatches(class D3D::CCommandBuffer *, unsigned long, unsigned long);
// class D3D::BufferResource * D3D::MakeBufferResourceSpace(class D3D::CDevice *);
// struct D3D::SegmentCall * D3D::MakeSegmentCallSpace(class D3D::CDevice *);
// public: struct D3D::FixupRecord * D3D::CCommandBuffer::GetFixup(unsigned long, enum D3D::FixupType, struct D3DResource *);
// void D3D::GetTimestampResourceData(class D3D::CCommandBuffer *, struct D3DResource *, unsigned long *, int *);
// public: D3D::CBuilder::CBuilder(class D3D::CCommandBuffer *, enum D3D::FixupType, unsigned long, struct D3DResource *, unsigned long, unsigned long);
// public: void D3D::CCommandBuffer::GrowableFree(void);
// public: void D3D::CCommandBuffer::GrowableQuery(unsigned long *, unsigned long *);
// public: void D3D::CCommandBuffer::DebugDestroy(void);
// public: static int D3D::CCommandBuffer::DebugReclaim(void *, unsigned long, class D3D::CCommandBuffer *, unsigned long);
// public: void D3D::CCommandBuffer::DebugVerifyAllocation(void *, unsigned long);
// D3DCommandBuffer_GetClone;
// D3DCommandBuffer_CreateClone;
// D3DDevice_BeginCommandBuffer;
// D3DDevice_QueryBufferSpace;
// D3DCommandBuffer_Queue;
// D3DDevice_InsertMarker;
// D3DCommandBuffer_GetResources;
// D3DCommandBuffer_EndDynamicFixups;
// D3DCommandBuffer_EndFixupCreation;
// D3DCommandBuffer_CreateSurfacesFixup;
// D3DCommandBuffer_SetSurfaces;
// D3DCommandBuffer_CreateClipRectFixup;
// D3DCommandBuffer_SetClipRect;
// unsigned long D3DCommandBuffer_CreateShaderConstantFFixup(struct D3DCommandBuffer *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// void D3DCommandBuffer_SetShaderConstantF(struct D3DCommandBuffer *, unsigned long, float const *);
// D3DCommandBuffer_CreateVertexShaderConstantFFixup;
// D3DCommandBuffer_CreatePixelShaderConstantFFixup;
// D3DCommandBuffer_SetVertexShaderConstantF;
// D3DCommandBuffer_SetPixelShaderConstantF;
// D3DCommandBuffer_CreateViewportFixup;
// D3DCommandBuffer_SetViewport;
// D3DCommandBuffer_CreateTextureFixup;
// D3DCommandBuffer_SetTexture;
// D3DCommandBuffer_CreateVertexBufferFixup;
// D3DCommandBuffer_SetVertexBuffer;
// D3DCommandBuffer_CreateIndexBufferFixup;
// D3DCommandBuffer_SetIndexBuffer;
// D3DCommandBuffer_CreateVertexShaderFixup;
// D3DCommandBuffer_SetVertexShader;
// D3DCommandBuffer_CreatePixelShaderFixup;
// D3DCommandBuffer_SetPixelShader;
// D3DCommandBuffer_CreateConstantBufferFixup;
// D3DCommandBuffer_SetConstantBuffer;
// D3DCommandBuffer_CreateCommandBufferFixup;
// D3DCommandBuffer_SetCommandBuffer;
// D3DCommandBuffer_Deconstruct;
// D3DCommandBuffer_BeginReconstruction;
// D3DCommandBuffer_EndReconstruction;
// Direct3DReclaimGrowableMemory;
// public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ensure(unsigned long, long &);
// void D3D::TimeStampRecordedCommandBuffer(class D3D::CDevice *, class D3D::CCommandBuffer *);
// public: void D3D::CCommandBuffer::Destroy(void);
// public: int D3D::CCommandBuffer::DebugAddAllocation(void *, unsigned long);
// D3DDevice_EndCommandBuffer;
// public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::resize(unsigned long, long &);
// public: unsigned long * D3D::CCommandBuffer::GrowableAllocate(unsigned long, unsigned long *, unsigned long);
// public: long D3D::CCommandBuffer::AddRTListData(unsigned long, void const *, unsigned long);
// D3DDevice_RunCommandBuffer;

//public: void D3D::CParser::Start(unsigned long *, unsigned long)
//{
//    mangled_ppc("?Start@CParser@D3D@@QAAXPAKK@Z");
//};

//void D3D::CopyFixups(struct D3D::FixupRecord *, struct D3D::FixupRecord const *, int, unsigned long)
//{
//    mangled_ppc("?CopyFixups@D3D@@YAXPAUFixupRecord@1@PBU21@HK@Z");
//};

//public: void D3D::CBuilder::Add(unsigned long)
//{
//    mangled_ppc("?Add@CBuilder@D3D@@QAAXK@Z");
//};

//public: void D3D::CBuilder::Add(unsigned long, unsigned long)
//{
//    mangled_ppc("?Add@CBuilder@D3D@@QAAXKK@Z");
//};

//public: unsigned long D3D::CBuilder::Done(void)
//{
//    mangled_ppc("?Done@CBuilder@D3D@@QAAKXZ");
//};

//int D3D::ResourceCompareFunction(void const *, void const *)
//{
//    mangled_ppc("?ResourceCompareFunction@D3D@@YAHPBX0@Z");
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

//GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS");
//};

//public: void D3D::CCommandBuffer::DebugBeginRun(class D3D::CDevice *)
//{
//    mangled_ppc("?DebugBeginRun@CCommandBuffer@D3D@@QAAXPAVCDevice@2@@Z");
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

//public: void D3D::CCommandBuffer::DebugEndRun(class D3D::CDevice *)
//{
//    mangled_ppc("?DebugEndRun@CCommandBuffer@D3D@@QAAXPAVCDevice@2@@Z");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTag_Mask
//{
//    mangled_ppc("D3DTag_Mask");
//};

//D3DDevice_CreateCommandBuffer
//{
//    mangled_ppc("D3DDevice_CreateCommandBuffer");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//D3DTagCollection_TestAll
//{
//    mangled_ppc("D3DTagCollection_TestAll");
//};

//D3DDevice_CreateSystemCommandBuffer
//{
//    mangled_ppc("D3DDevice_CreateSystemCommandBuffer");
//};

//D3DDevice_QuerySystemCommandBuffer
//{
//    mangled_ppc("D3DDevice_QuerySystemCommandBuffer");
//};

//public: unsigned __int64* D3D::CCommandBuffer::MagicValue(void)
//{
//    mangled_ppc("?MagicValue@CCommandBuffer@D3D@@QAAPA_KXZ");
//};

//public: int D3D::CCommandBuffer::VerifyMagicValue(void)
//{
//    mangled_ppc("?VerifyMagicValue@CCommandBuffer@D3D@@QAAHXZ");
//};

//class D3D::CCommandBuffer * D3D::Promote(struct D3DCommandBuffer *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAVCCommandBuffer@1@PAUD3DCommandBuffer@@@Z");
//};

//public: D3D::CParser::CParser(void)
//{
//    mangled_ppc("??0CParser@D3D@@QAA@XZ");
//};

//public: D3D::CParser::CParser(unsigned long *, unsigned long)
//{
//    mangled_ppc("??0CParser@D3D@@QAA@PAKK@Z");
//};

//public: void D3D::CParser::QueryPosition(unsigned long **, unsigned long *)
//{
//    mangled_ppc("?QueryPosition@CParser@D3D@@QAAXPAPAKPAK@Z");
//};

//public: void D3D::CDevice::SetAllCommandBufferLazyState(struct _D3DTAGCOLLECTION *)
//{
//    mangled_ppc("?SetAllCommandBufferLazyState@CDevice@D3D@@QAAXPAU_D3DTAGCOLLECTION@@@Z");
//};

//struct D3DResource * D3DDWORDToPtr<struct D3DResource>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@UD3DResource@@@@YAPAUD3DResource@@K@Z");
//};

//struct D3D::BufferResourceNode * D3DDWORDToPtr<struct D3D::BufferResourceNode>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@UBufferResourceNode@D3D@@@@YAPAUBufferResourceNode@D3D@@K@Z");
//};

//struct D3D::RingAllocChunk * D3DDWORDToPtr<struct D3D::RingAllocChunk>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@URingAllocChunk@D3D@@@@YAPAURingAllocChunk@D3D@@K@Z");
//};

//struct D3D::FixupRecord * D3DDWORDToPtr<struct D3D::FixupRecord>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@UFixupRecord@D3D@@@@YAPAUFixupRecord@D3D@@K@Z");
//};

//unsigned long * D3DDWORDToPtr<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@K@@YAPAKK@Z");
//};

//class D3D::CCommandBuffer * D3DDWORDToPtr<class D3D::CCommandBuffer>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@VCCommandBuffer@D3D@@@@YAPAVCCommandBuffer@D3D@@K@Z");
//};

//void * (* D3DDWORDToPtr<void * (unsigned long, unsigned long, unsigned long *, unsigned long)>(unsigned long))(unsigned long, unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@$$A6APAXKKPAKK@Z@@YAP6APAXKKPAKK@ZK@Z");
//};

//void (* D3DDWORDToPtr<void (unsigned long)>(unsigned long))(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@$$A6AXK@Z@@YAP6AXK@ZK@Z");
//};

//void (* D3DDWORDToPtr<void (unsigned long, unsigned long *, unsigned long *)>(unsigned long))(unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("??$D3DDWORDToPtr@$$A6AXKPAK0@Z@@YAP6AXKPAK0@ZK@Z");
//};

//struct D3D::DebugAllocationNode * D3DDWORDToPtr<struct D3D::DebugAllocationNode>(unsigned long)
//{
//    mangled_ppc("??$D3DDWORDToPtr@UDebugAllocationNode@D3D@@@@YAPAUDebugAllocationNode@D3D@@K@Z");
//};

//public: int D3D::CParser::Get(unsigned long *, struct D3D::ParseData *)
//{
//    mangled_ppc("?Get@CParser@D3D@@QAAHPAKPAUParseData@2@@Z");
//};

//unsigned long D3D::MoveInlineVertexData(union GPUVERTEX_FETCH_CONSTANT *, unsigned long *, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?MoveInlineVertexData@D3D@@YAKPATGPUVERTEX_FETCH_CONSTANT@@PAKKKK@Z");
//};

//void * D3D::MovePatches(struct D3D::RingAllocChunk *, struct D3D::RingAllocChunk const *)
//{
//    mangled_ppc("?MovePatches@D3D@@YAPAXPAURingAllocChunk@1@PBU21@@Z");
//};

//void D3D::WhackAddresses(unsigned long *, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?WhackAddresses@D3D@@YAXPAKKKK@Z");
//};

//void D3D::VerifyAddresses(struct D3D::SegmentCall *)
//{
//    mangled_ppc("?VerifyAddresses@D3D@@YAXPAUSegmentCall@1@@Z");
//};

//public: int D3D::CBuilder::Get(unsigned long *, struct D3D::ParseData *)
//{
//    mangled_ppc("?Get@CBuilder@D3D@@QAAHPAKPAUParseData@2@@Z");
//};

//void D3D::ResetCommandBufferState(class D3D::CDevice *, unsigned int *, struct _D3DTAGCOLLECTION &)
//{
//    mangled_ppc("?ResetCommandBufferState@D3D@@YAXPAVCDevice@1@PIAU_D3DTAGCOLLECTION@@@Z");
//};

//public: void D3D::CCommandBuffer::DebugReset(void)
//{
//    mangled_ppc("?DebugReset@CCommandBuffer@D3D@@QAAXXZ");
//};

//public: void D3D::CCommandBuffer::DebugCreate(int)
//{
//    mangled_ppc("?DebugCreate@CCommandBuffer@D3D@@QAAXH@Z");
//};

//D3DCommandBuffer_SetMemory
//{
//    mangled_ppc("D3DCommandBuffer_SetMemory");
//};

//D3DDevice_CreateGrowableCommandBuffer
//{
//    mangled_ppc("D3DDevice_CreateGrowableCommandBuffer");
//};

//D3DDevice_SetCommandBufferPredication
//{
//    mangled_ppc("D3DDevice_SetCommandBufferPredication");
//};

//D3DCommandBuffer_BeginDynamicFixups
//{
//    mangled_ppc("D3DCommandBuffer_BeginDynamicFixups");
//};

//D3DCommandBuffer_BeginFixupCreation
//{
//    mangled_ppc("D3DCommandBuffer_BeginFixupCreation");
//};

//public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::destroy(void)
//{
//    mangled_ppc("?destroy@?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ensure2(unsigned long, long &)
//{
//    mangled_ppc("?ensure2@?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//unsigned long * D3D::PreviousMultiple<unsigned long, unsigned long>(unsigned long *, unsigned long)
//{
//    mangled_ppc("??$PreviousMultiple@KK@D3D@@YAPAKPAKK@Z");
//};

//struct D3D::BufferResourceNode * D3D::GetCachedReadOnlyAddress<struct D3D::BufferResourceNode>(struct D3D::BufferResourceNode *)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@UBufferResourceNode@D3D@@@D3D@@YAPAUBufferResourceNode@0@PAU10@@Z");
//};

//struct D3D::SegmentCallNode * D3D::GetCachedReadOnlyAddress<struct D3D::SegmentCallNode>(struct D3D::SegmentCallNode *)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@USegmentCallNode@D3D@@@D3D@@YAPAUSegmentCallNode@0@PAU10@@Z");
//};

//struct D3D::DebugAllocationNode * D3D::GetCachedReadOnlyAddress<struct D3D::DebugAllocationNode>(struct D3D::DebugAllocationNode *)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@UDebugAllocationNode@D3D@@@D3D@@YAPAUDebugAllocationNode@0@PAU10@@Z");
//};

//struct D3D::DebugAllocationNode ** D3D::GetCachedReadOnlyAddress<struct D3D::DebugAllocationNode *>(struct D3D::DebugAllocationNode **)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@PAUDebugAllocationNode@D3D@@@D3D@@YAPAPAUDebugAllocationNode@0@PAPAU10@@Z");
//};

//void ** D3D::GetCachedReadOnlyAddress<void *>(void **)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@PAX@D3D@@YAPAPAXPAPAX@Z");
//};

//public: struct D3DResource * D3D::BufferResource::GetResource(void)
//{
//    mangled_ppc("?GetResource@BufferResource@D3D@@QAAPAUD3DResource@@XZ");
//};

//struct D3D::BufferResourceNode * D3D::CB_pNext(struct D3D::BufferResourceNode *)
//{
//    mangled_ppc("?CB_pNext@D3D@@YAPAUBufferResourceNode@1@PAU21@@Z");
//};

//struct D3D::BufferResourceNode * D3D::CB_pBufferResources(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pBufferResources@D3D@@YAPAUBufferResourceNode@1@PAVCCommandBuffer@1@@Z");
//};

//struct D3D::RingAllocChunk * D3D::CB_pPatches(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pPatches@D3D@@YAPAURingAllocChunk@1@PAVCCommandBuffer@1@@Z");
//};

//struct D3D::FixupRecord * D3D::CB_pFixupWrite(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pFixupWrite@D3D@@YAPAUFixupRecord@1@PAVCCommandBuffer@1@@Z");
//};

//struct D3D::FixupRecord * D3D::CB_pFixupWriteLimit(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pFixupWriteLimit@D3D@@YAPAUFixupRecord@1@PAVCCommandBuffer@1@@Z");
//};

//struct D3D::FixupRecord * D3D::CB_pFixupRead(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pFixupRead@D3D@@YAPAUFixupRecord@1@PAVCCommandBuffer@1@@Z");
//};

//struct D3D::FixupRecord * D3D::CB_pStaticFixup(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pStaticFixup@D3D@@YAPAUFixupRecord@1@PAVCCommandBuffer@1@@Z");
//};

//unsigned long * D3D::CB_pPhysical(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pPhysical@D3D@@YAPAKPAVCCommandBuffer@1@@Z");
//};

//class D3D::CCommandBuffer * D3D::CB_pNextGrowable(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pNextGrowable@D3D@@YAPAVCCommandBuffer@1@PAV21@@Z");
//};

//void * (* D3D::CB_pGrowableAllocateCallback(class D3D::CCommandBuffer *))(unsigned long, unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("?CB_pGrowableAllocateCallback@D3D@@YAP6APAXKKPAKK@ZPAVCCommandBuffer@1@@Z");
//};

//void (* D3D::CB_pGrowableFreeCallback(class D3D::CCommandBuffer *))(unsigned long)
//{
//    mangled_ppc("?CB_pGrowableFreeCallback@D3D@@YAP6AXK@ZPAVCCommandBuffer@1@@Z");
//};

//void (* D3D::CB_pGrowableQueryCallback(class D3D::CCommandBuffer *))(unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?CB_pGrowableQueryCallback@D3D@@YAP6AXKPAK0@ZPAVCCommandBuffer@1@@Z");
//};

//struct D3D::DebugAllocationNode * D3D::CB_pDebugAllocationList(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pDebugAllocationList@D3D@@YAPAUDebugAllocationNode@1@PAVCCommandBuffer@1@@Z");
//};

//struct D3D::DebugAllocationNode * D3D::CB_pCurrentDebugAllocationNode(class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?CB_pCurrentDebugAllocationNode@D3D@@YAPAUDebugAllocationNode@1@PAVCCommandBuffer@1@@Z");
//};

//void * D3D::CommandBufferDeviceAllocate(class D3D::CDevice *, unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("?CommandBufferDeviceAllocate@D3D@@YAPAXPAVCDevice@1@KPAKK@Z");
//};

//void D3D::TimeStampBufferResources(unsigned long, struct D3D::BufferResourceNode *, unsigned long)
//{
//    mangled_ppc("?TimeStampBufferResources@D3D@@YAXKPAUBufferResourceNode@1@K@Z");
//};

//public: void D3D::CCommandBuffer::FlushCachedGpuCommands(void)
//{
//    mangled_ppc("?FlushCachedGpuCommands@CCommandBuffer@D3D@@QAAXXZ");
//};

//public: void D3D::CCommandBuffer::FlushCachedAllocation(void)
//{
//    mangled_ppc("?FlushCachedAllocation@CCommandBuffer@D3D@@QAAXXZ");
//};

//int D3D::CreatePhysicalPart(struct D3D::SegmentCallNode *, struct D3D::RingAllocChunk *, unsigned long *, unsigned long, struct D3D::SegmentCall *, struct D3D::RingAllocChunk **, unsigned long **, unsigned long *)
//{
//    mangled_ppc("?CreatePhysicalPart@D3D@@YAHPAUSegmentCallNode@1@PAURingAllocChunk@1@PAKKPAUSegmentCall@1@PAPAU31@PAPAK2@Z");
//};

//void D3D::FixupPhysicalPart(class D3D::CCommandBuffer *, void *, struct D3D::RingAllocChunk *)
//{
//    mangled_ppc("?FixupPhysicalPart@D3D@@YAXPAVCCommandBuffer@1@PAXPAURingAllocChunk@1@@Z");
//};

//void D3D::FixupPatches(class D3D::CCommandBuffer *, unsigned long, unsigned long)
//{
//    mangled_ppc("?FixupPatches@D3D@@YAXPAVCCommandBuffer@1@KK@Z");
//};

//class D3D::BufferResource * D3D::MakeBufferResourceSpace(class D3D::CDevice *)
//{
//    mangled_ppc("?MakeBufferResourceSpace@D3D@@YAPAVBufferResource@1@PAVCDevice@1@@Z");
//};

//struct D3D::SegmentCall * D3D::MakeSegmentCallSpace(class D3D::CDevice *)
//{
//    mangled_ppc("?MakeSegmentCallSpace@D3D@@YAPAUSegmentCall@1@PAVCDevice@1@@Z");
//};

//public: struct D3D::FixupRecord * D3D::CCommandBuffer::GetFixup(unsigned long, enum D3D::FixupType, struct D3DResource *)
//{
//    mangled_ppc("?GetFixup@CCommandBuffer@D3D@@QAAPAUFixupRecord@2@KW4FixupType@2@PAUD3DResource@@@Z");
//};

//void D3D::GetTimestampResourceData(class D3D::CCommandBuffer *, struct D3DResource *, unsigned long *, int *)
//{
//    mangled_ppc("?GetTimestampResourceData@D3D@@YAXPAVCCommandBuffer@1@PAUD3DResource@@PAKPAH@Z");
//};

//public: D3D::CBuilder::CBuilder(class D3D::CCommandBuffer *, enum D3D::FixupType, unsigned long, struct D3DResource *, unsigned long, unsigned long)
//{
//    mangled_ppc("??0CBuilder@D3D@@QAA@PAVCCommandBuffer@1@W4FixupType@1@KPAUD3DResource@@KK@Z");
//};

//public: void D3D::CCommandBuffer::GrowableFree(void)
//{
//    mangled_ppc("?GrowableFree@CCommandBuffer@D3D@@QAAXXZ");
//};

//public: void D3D::CCommandBuffer::GrowableQuery(unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GrowableQuery@CCommandBuffer@D3D@@QAAXPAK0@Z");
//};

//public: void D3D::CCommandBuffer::DebugDestroy(void)
//{
//    mangled_ppc("?DebugDestroy@CCommandBuffer@D3D@@QAAXXZ");
//};

//public: static int D3D::CCommandBuffer::DebugReclaim(void *, unsigned long, class D3D::CCommandBuffer *, unsigned long)
//{
//    mangled_ppc("?DebugReclaim@CCommandBuffer@D3D@@SAHPAXKPAV12@K@Z");
//};

//public: void D3D::CCommandBuffer::DebugVerifyAllocation(void *, unsigned long)
//{
//    mangled_ppc("?DebugVerifyAllocation@CCommandBuffer@D3D@@QAAXPAXK@Z");
//};

//D3DCommandBuffer_GetClone
//{
//    mangled_ppc("D3DCommandBuffer_GetClone");
//};

//D3DCommandBuffer_CreateClone
//{
//    mangled_ppc("D3DCommandBuffer_CreateClone");
//};

//D3DDevice_BeginCommandBuffer
//{
//    mangled_ppc("D3DDevice_BeginCommandBuffer");
//};

//D3DDevice_QueryBufferSpace
//{
//    mangled_ppc("D3DDevice_QueryBufferSpace");
//};

//D3DCommandBuffer_Queue
//{
//    mangled_ppc("D3DCommandBuffer_Queue");
//};

//D3DDevice_InsertMarker
//{
//    mangled_ppc("D3DDevice_InsertMarker");
//};

//D3DCommandBuffer_GetResources
//{
//    mangled_ppc("D3DCommandBuffer_GetResources");
//};

//D3DCommandBuffer_EndDynamicFixups
//{
//    mangled_ppc("D3DCommandBuffer_EndDynamicFixups");
//};

//D3DCommandBuffer_EndFixupCreation
//{
//    mangled_ppc("D3DCommandBuffer_EndFixupCreation");
//};

//D3DCommandBuffer_CreateSurfacesFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateSurfacesFixup");
//};

//D3DCommandBuffer_SetSurfaces
//{
//    mangled_ppc("D3DCommandBuffer_SetSurfaces");
//};

//D3DCommandBuffer_CreateClipRectFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateClipRectFixup");
//};

//D3DCommandBuffer_SetClipRect
//{
//    mangled_ppc("D3DCommandBuffer_SetClipRect");
//};

//unsigned long D3DCommandBuffer_CreateShaderConstantFFixup(struct D3DCommandBuffer *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?D3DCommandBuffer_CreateShaderConstantFFixup@@YAKPAUD3DCommandBuffer@@KKKKK@Z");
//};

//void D3DCommandBuffer_SetShaderConstantF(struct D3DCommandBuffer *, unsigned long, float const *)
//{
//    mangled_ppc("?D3DCommandBuffer_SetShaderConstantF@@YAXPAUD3DCommandBuffer@@KPBM@Z");
//};

//D3DCommandBuffer_CreateVertexShaderConstantFFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateVertexShaderConstantFFixup");
//};

//D3DCommandBuffer_CreatePixelShaderConstantFFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreatePixelShaderConstantFFixup");
//};

//D3DCommandBuffer_SetVertexShaderConstantF
//{
//    mangled_ppc("D3DCommandBuffer_SetVertexShaderConstantF");
//};

//D3DCommandBuffer_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DCommandBuffer_SetPixelShaderConstantF");
//};

//D3DCommandBuffer_CreateViewportFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateViewportFixup");
//};

//D3DCommandBuffer_SetViewport
//{
//    mangled_ppc("D3DCommandBuffer_SetViewport");
//};

//D3DCommandBuffer_CreateTextureFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateTextureFixup");
//};

//D3DCommandBuffer_SetTexture
//{
//    mangled_ppc("D3DCommandBuffer_SetTexture");
//};

//D3DCommandBuffer_CreateVertexBufferFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateVertexBufferFixup");
//};

//D3DCommandBuffer_SetVertexBuffer
//{
//    mangled_ppc("D3DCommandBuffer_SetVertexBuffer");
//};

//D3DCommandBuffer_CreateIndexBufferFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateIndexBufferFixup");
//};

//D3DCommandBuffer_SetIndexBuffer
//{
//    mangled_ppc("D3DCommandBuffer_SetIndexBuffer");
//};

//D3DCommandBuffer_CreateVertexShaderFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateVertexShaderFixup");
//};

//D3DCommandBuffer_SetVertexShader
//{
//    mangled_ppc("D3DCommandBuffer_SetVertexShader");
//};

//D3DCommandBuffer_CreatePixelShaderFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreatePixelShaderFixup");
//};

//D3DCommandBuffer_SetPixelShader
//{
//    mangled_ppc("D3DCommandBuffer_SetPixelShader");
//};

//D3DCommandBuffer_CreateConstantBufferFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateConstantBufferFixup");
//};

//D3DCommandBuffer_SetConstantBuffer
//{
//    mangled_ppc("D3DCommandBuffer_SetConstantBuffer");
//};

//D3DCommandBuffer_CreateCommandBufferFixup
//{
//    mangled_ppc("D3DCommandBuffer_CreateCommandBufferFixup");
//};

//D3DCommandBuffer_SetCommandBuffer
//{
//    mangled_ppc("D3DCommandBuffer_SetCommandBuffer");
//};

//D3DCommandBuffer_Deconstruct
//{
//    mangled_ppc("D3DCommandBuffer_Deconstruct");
//};

//D3DCommandBuffer_BeginReconstruction
//{
//    mangled_ppc("D3DCommandBuffer_BeginReconstruction");
//};

//D3DCommandBuffer_EndReconstruction
//{
//    mangled_ppc("D3DCommandBuffer_EndReconstruction");
//};

//Direct3DReclaimGrowableMemory
//{
//    mangled_ppc("Direct3DReclaimGrowableMemory");
//};

//public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ensure(unsigned long, long &)
//{
//    mangled_ppc("?ensure@?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//void D3D::TimeStampRecordedCommandBuffer(class D3D::CDevice *, class D3D::CCommandBuffer *)
//{
//    mangled_ppc("?TimeStampRecordedCommandBuffer@D3D@@YAXPAVCDevice@1@PAVCCommandBuffer@1@@Z");
//};

//public: void D3D::CCommandBuffer::Destroy(void)
//{
//    mangled_ppc("?Destroy@CCommandBuffer@D3D@@QAAXXZ");
//};

//public: int D3D::CCommandBuffer::DebugAddAllocation(void *, unsigned long)
//{
//    mangled_ppc("?DebugAddAllocation@CCommandBuffer@D3D@@QAAHPAXK@Z");
//};

//D3DDevice_EndCommandBuffer
//{
//    mangled_ppc("D3DDevice_EndCommandBuffer");
//};

//public: void D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::resize(unsigned long, long &)
//{
//    mangled_ppc("?resize@?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//public: unsigned long * D3D::CCommandBuffer::GrowableAllocate(unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("?GrowableAllocate@CCommandBuffer@D3D@@QAAPAKKPAKK@Z");
//};

//public: long D3D::CCommandBuffer::AddRTListData(unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?AddRTListData@CCommandBuffer@D3D@@QAAJKPBXK@Z");
//};

//D3DDevice_RunCommandBuffer
//{
//    mangled_ppc("D3DDevice_RunCommandBuffer");
//};

