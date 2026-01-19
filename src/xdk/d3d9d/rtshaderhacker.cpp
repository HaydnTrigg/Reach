/* ---------- headers */

#include "xdk\d3d9d\rtshaderhacker.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned long const D3D::CArena::kChunkSize; // "?kChunkSize@CArena@D3D@@0KB"
// private: static unsigned long const D3D::CArena::kAlignment; // "?kAlignment@CArena@D3D@@0KB"
// struct D3D::RTRareInstructionInfo *D3D::g_RTRareInstructionInfo; // "?g_RTRareInstructionInfo@D3D@@3PAURTRareInstructionInfo@1@A"
// union D3D::SHADER_REGISTER const D3D::InvalidRegister; // "?InvalidRegister@D3D@@3TSHADER_REGISTER@1@B"

// public: bool D3D::FlowNode::IsExec(void);
// public: struct D3D::FlowNode * D3D::GraphMicrocodeBuilder::Start(void);
// public: bool D3D::SHADER_REGISTER::IsInvalid(void);
// public: D3D::SHADER_REGISTER::SHADER_REGISTER(void);
// public: D3D::SHADER_REGISTER::SHADER_REGISTER(enum D3D::EShaderRegisterType, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// public: D3D::SHADER_REGISTER::SHADER_REGISTER(enum D3D::EShaderRegisterType, unsigned long, unsigned long);
// public: D3D::SHADER_REGISTER::SHADER_REGISTER(enum D3D::EShaderRegisterType, unsigned long);
// public: union D3D::SHADER_REGISTER D3D::SHADER_REGISTER::Swizzle(unsigned long);
// public: union D3D::SHADER_REGISTER D3D::SHADER_REGISTER::Swizzle(unsigned long, unsigned long, unsigned long, unsigned long);
// public: unsigned long D3D::SHADER_REGISTER::GetWriteMask(void);
// public: static union D3D::SHADER_REGISTER D3D::SHADER_REGISTER::GetInvalidRegister(void);
// private: static void D3D::CONSTANT_ALLOCATOR::SetConstBit(unsigned __int64*, int);
// private: static bool D3D::CONSTANT_ALLOCATOR::GetConstBit(unsigned __int64const *, int);
// private: static long D3D::CONSTANT_ALLOCATOR::GenerateShaderConstantInfoCB(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// private: void D3D::CONSTANT_ALLOCATOR::FixUpUsedConstants(void);
// public: void D3D::GPR_ALLOCATOR::Initialize(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC);
// public: union D3D::SHADER_REGISTER D3D::GPR_ALLOCATOR::Allocate(int);
// public: union GPU_PROGRAMCONTROL D3D::GPR_ALLOCATOR::GetUpdatedProgramControl(union GPU_PROGRAMCONTROL);
// public: D3D::COND_TYPE::COND_TYPE(void);
// public: D3D::COND_TYPE::COND_TYPE(bool);
// public: D3D::COND_TYPE::COND_TYPE(unsigned char, bool);
// public: bool D3D::COND_TYPE::IsPred(void);
// public: bool D3D::COND_TYPE::operator==(union D3D::COND_TYPE);
// public: bool D3D::COND_TYPE::operator!=(union D3D::COND_TYPE);
// union D3D::COND_TYPE D3D::GetFlowCond(union GPUFLOW_INSTRUCTION *, union D3D::COND_TYPE);
// public: void D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::TODO_LIST::AddTodoEntry(struct D3D::FlowNode *, bool);
// private: static int D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::OpJumpsOrForcesEnd(unsigned long);
// private: static enum D3D::HackFailureReason D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::ProcessTodoEntryForDeepShaderAnalysis(struct D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::TODO_LIST *);
// private: void D3D::CShaderHacker::CClassForInsertingPerFetchStuff::MarkJumpTargets(class D3D::CShaderHacker *);
// private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::MarkFetchClauseStarts(class D3D::CShaderHacker *, unsigned long);
// private: void D3D::CShaderHacker::CClassForInsertingPerFetchStuff::BackPatchDanglingJumps(class D3D::CShaderHacker *);
// private: struct D3D::FlowNode * D3D::CShaderHacker::CClassForInsertingPerFetchStuff::InsertJumpNode(class D3D::CShaderHacker *, union D3D::COND_TYPE, struct D3D::FlowNode *);
// private: long D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddRareFetchAfter(class D3D::CShaderHacker *, struct D3D::FlowNode *&, struct D3D::ALUNode *&, enum D3D::ERareInstruction);
// private: bool D3D::CShaderHacker::CClassForInsertingPerFetchStuff::IsTfetchSameLODSameConst(struct D3D::ALUNode const *, struct D3D::ALUNode const *);
// private: unsigned long D3D::CShaderHacker::CClassForInsertingPerFetchStuff::GetNumTfetchSameLODSameConst(struct D3D::ALUNode *&, struct D3D::FlowNode *&);
// private: static bool D3D::CShaderHacker::AddCConstant(struct D3D::CShaderHacker::LITERAL_CONSTANT &, float, unsigned long &);
// private: long D3D::CShaderHacker::CopyInstructionAfter(struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::ALUNode const *, struct D3D::FlowNode **, struct D3D::ALUNode **);
// private: long D3D::CShaderHacker::AddALUAfter2(struct D3D::FlowNode *, struct D3D::ALUNode *, enum GPUALUVECTOROP, enum GPUALUSCALAROP, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, struct D3D::FlowNode **, struct D3D::ALUNode **);
// private: long D3D::CShaderHacker::CreateExecAfterEx(struct D3D::FlowNode *, bool, bool, bool, unsigned char, bool, struct D3D::FlowNode **);
// private: static long D3D::CShaderHacker::GetTfetchUsageInfoCB(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// private: enum D3D::HackFailureReason D3D::CShaderHacker::GetTfetchUsageInfo(unsigned long const *, unsigned long);
// public: static int D3D::CShaderHacker::QsortConstantSorter(void const *, void const *);
// private: D3D::CShaderHacker::~CShaderHacker(void);
// private: void * D3D::CShaderHacker::`scalar deleting destructor'(unsigned int);
// public: D3D::CShaderHacker::CClassForInsertingPerFetchStuff::CClassForInsertingPerFetchStuff(void);
// unsigned __int64 D3D::GetShaderHash(unsigned long const *, unsigned long);
// protected: static long D3D::CVertexShaderHashTable::GenerateVertexShaderInfoCB(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// public: void D3D::HACKED_SHADER_VARIATION::HACKED_SHADER_CONSTANT_INFO::Set(unsigned short, bool, unsigned short);
// public: long D3D::CRTCommandBufferHacker::GetFrameCount(void);
// public: enum D3D::HackFailureReason D3D::CONSTANT_ALLOCATOR::Initialize(void const *, unsigned long, void const *);
// public: int D3D::CONSTANT_ALLOCATOR::AllocateCConstant(void);
// public: static enum D3D::HackFailureReason D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::AnalyzeAllocAndP0Usage(class D3D::CShaderHacker *, struct D3D::SHADER_REHACKING_INFO *, bool &);
// private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddRestorePredicate(class D3D::CShaderHacker *, struct D3D::FlowNode *&, union D3D::SHADER_REGISTER &);
// private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddPerTfetchPerfCounterStuff(class D3D::CShaderHacker *, struct D3D::FlowNode *&, struct D3D::ALUNode *&, union D3D::SHADER_REGISTER &, union D3D::SHADER_REGISTER &, union GPUTEXTURE_FETCH_INSTRUCTION *, union D3D::SHADER_REGISTER &, unsigned long);
// private: long D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddGetCompTexLODAfter(class D3D::CShaderHacker *, struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::ALUNode const *, union D3D::SHADER_REGISTER &, struct D3D::FlowNode **, struct D3D::ALUNode **);
// private: union D3D::SHADER_REGISTER D3D::CShaderHacker::GetCConstantPerTFConst(int);
// private: union D3D::SHADER_REGISTER D3D::CShaderHacker::AllocateFloatConstant(float, float, float, float);
// private: union D3D::SHADER_REGISTER D3D::CShaderHacker::AllocateFloatConstant(float);
// private: union D3D::SHADER_REGISTER D3D::CShaderHacker::AllocateFloatConstant(float, float);
// public: enum D3D::HackFailureReason D3D::CShaderHacker::GenerateRehackingInfo(unsigned long const *, unsigned long, struct D3D::SHADER_REHACKING_INFO *);
// public: void D3D::CShaderHacker::Release(void);
// private: D3D::CShaderHacker::CShaderHacker(void);
// struct D3D::HACKED_VARIATION_LIST2* D3D::GetUsefulVariation(struct D3D::CPixelShaderHashEntry *, unsigned long, unsigned long, unsigned long, unsigned long);
// public: void D3D::HACKED_SHADER_VARIATION::Destroy(void);
// public: struct D3D::CPixelShaderHashEntry * D3D::CTSSortedList<struct D3D::CPixelShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: struct D3D::CVertexShaderHashEntry * D3D::CTSSortedList<struct D3D::CVertexShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddSavePredicate(class D3D::CShaderHacker *, struct D3D::FlowNode *&, union D3D::SHADER_REGISTER &);
// private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddPerTfetchStuff(class D3D::CShaderHacker *, struct D3D::ALUNode *, unsigned long);
// public: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddJumpsAndPerTfetchStuff(class D3D::CShaderHacker *, unsigned long, unsigned long &);
// public: static class D3D::CShaderHacker * D3D::CShaderHacker::Initialize(unsigned long const *, unsigned long, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, union GPU_INTERPOLATORCONTROL, struct D3D::SHADER_REHACKING_INFO *);
// public: static enum D3D::HackFailureReason D3D::CShaderHacker::Initialize(struct D3D::SHADER_REHACKING_INFO *, unsigned long const *, unsigned long, class D3D::CShaderHacker **);
// public: enum D3D::HackFailureReason D3D::CShaderHacker::GenerateHackedPixelShader(unsigned long, struct D3D::HACKED_SHADER_VARIATION *, enum D3D::ERareInstruction *);
// enum D3D::HackFailureReason D3D::GenerateAllRequiredShaderFlavors(struct D3D::SHADER_REHACKING_INFO *, unsigned long const *, unsigned long, class D3D::CShaderHacker *&, unsigned long, unsigned long, unsigned long, struct D3D::HACKED_SHADER_VARIATION **);
// public: enum D3D::HackFailureReason D3D::CPixelShaderHashTable::FindOrGetHackedShader(unsigned long const *, unsigned long, union GPU_GPRMANAGEMENT, union GPU_INSTSTOREMANAGEMENT, unsigned long, struct D3D::VERTEX_SHADER_INFO const *, struct D3D::HACKED_SHADER_VARIATION **);
// public: void D3D::HACKED_VARIATION_LIST2::Destroy(void);
// public: struct D3D::CPixelShaderHashEntry * D3D::CTSHashTable<struct D3D::CPixelShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: struct D3D::CVertexShaderHashEntry * D3D::CTSHashTable<struct D3D::CVertexShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: enum D3D::HackFailureReason D3D::CPixelShaderHashTable::FindOrGetTextureUsage(unsigned long const *, unsigned long, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, union GPU_INTERPOLATORCONTROL, struct D3D::SHADER_TEXTURE_USAGE **);
// public: void D3D::HACKED_VARIATION_LIST::Destroy(void);
// public: enum D3D::HackFailureReason D3D::CVertexShaderHashTable::FindOrGetVertexShaderInfo(unsigned long const *, unsigned long, struct D3D::VERTEX_SHADER_INFO *&);
// public: void D3D::CPixelShaderHashEntry::Destroy(void);
// public: void D3D::CTSSortedList<struct D3D::CPixelShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CTSHashTable<struct D3D::CPixelShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CPixelShaderHashTable::Destroy(void);

//public: bool D3D::FlowNode::IsExec(void)
//{
//    mangled_ppc("?IsExec@FlowNode@D3D@@QAA_NXZ");
//};

//public: struct D3D::FlowNode * D3D::GraphMicrocodeBuilder::Start(void)
//{
//    mangled_ppc("?Start@GraphMicrocodeBuilder@D3D@@QAAPAUFlowNode@2@XZ");
//};

//public: bool D3D::SHADER_REGISTER::IsInvalid(void)
//{
//    mangled_ppc("?IsInvalid@SHADER_REGISTER@D3D@@QAA_NXZ");
//};

//public: D3D::SHADER_REGISTER::SHADER_REGISTER(void)
//{
//    mangled_ppc("??0SHADER_REGISTER@D3D@@QAA@XZ");
//};

//public: D3D::SHADER_REGISTER::SHADER_REGISTER(enum D3D::EShaderRegisterType, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("??0SHADER_REGISTER@D3D@@QAA@W4EShaderRegisterType@1@KKKKK@Z");
//};

//public: D3D::SHADER_REGISTER::SHADER_REGISTER(enum D3D::EShaderRegisterType, unsigned long, unsigned long)
//{
//    mangled_ppc("??0SHADER_REGISTER@D3D@@QAA@W4EShaderRegisterType@1@KK@Z");
//};

//public: D3D::SHADER_REGISTER::SHADER_REGISTER(enum D3D::EShaderRegisterType, unsigned long)
//{
//    mangled_ppc("??0SHADER_REGISTER@D3D@@QAA@W4EShaderRegisterType@1@K@Z");
//};

//public: union D3D::SHADER_REGISTER D3D::SHADER_REGISTER::Swizzle(unsigned long)
//{
//    mangled_ppc("?Swizzle@SHADER_REGISTER@D3D@@QAA?AT12@K@Z");
//};

//public: union D3D::SHADER_REGISTER D3D::SHADER_REGISTER::Swizzle(unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?Swizzle@SHADER_REGISTER@D3D@@QAA?AT12@KKKK@Z");
//};

//public: unsigned long D3D::SHADER_REGISTER::GetWriteMask(void)
//{
//    mangled_ppc("?GetWriteMask@SHADER_REGISTER@D3D@@QAAKXZ");
//};

//public: static union D3D::SHADER_REGISTER D3D::SHADER_REGISTER::GetInvalidRegister(void)
//{
//    mangled_ppc("?GetInvalidRegister@SHADER_REGISTER@D3D@@SA?AT12@XZ");
//};

//private: static void D3D::CONSTANT_ALLOCATOR::SetConstBit(unsigned __int64*, int)
//{
//    mangled_ppc("?SetConstBit@CONSTANT_ALLOCATOR@D3D@@CAXPA_KH@Z");
//};

//private: static bool D3D::CONSTANT_ALLOCATOR::GetConstBit(unsigned __int64const *, int)
//{
//    mangled_ppc("?GetConstBit@CONSTANT_ALLOCATOR@D3D@@CA_NPB_KH@Z");
//};

//private: static long D3D::CONSTANT_ALLOCATOR::GenerateShaderConstantInfoCB(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?GenerateShaderConstantInfoCB@CONSTANT_ALLOCATOR@D3D@@CAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//private: void D3D::CONSTANT_ALLOCATOR::FixUpUsedConstants(void)
//{
//    mangled_ppc("?FixUpUsedConstants@CONSTANT_ALLOCATOR@D3D@@AAAXXZ");
//};

//public: void D3D::GPR_ALLOCATOR::Initialize(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC)
//{
//    mangled_ppc("?Initialize@GPR_ALLOCATOR@D3D@@QAAXTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@@Z");
//};

//public: union D3D::SHADER_REGISTER D3D::GPR_ALLOCATOR::Allocate(int)
//{
//    mangled_ppc("?Allocate@GPR_ALLOCATOR@D3D@@QAA?ATSHADER_REGISTER@2@H@Z");
//};

//public: union GPU_PROGRAMCONTROL D3D::GPR_ALLOCATOR::GetUpdatedProgramControl(union GPU_PROGRAMCONTROL)
//{
//    mangled_ppc("?GetUpdatedProgramControl@GPR_ALLOCATOR@D3D@@QAA?ATGPU_PROGRAMCONTROL@@T3@@Z");
//};

//public: D3D::COND_TYPE::COND_TYPE(void)
//{
//    mangled_ppc("??0COND_TYPE@D3D@@QAA@XZ");
//};

//public: D3D::COND_TYPE::COND_TYPE(bool)
//{
//    mangled_ppc("??0COND_TYPE@D3D@@QAA@_N@Z");
//};

//public: D3D::COND_TYPE::COND_TYPE(unsigned char, bool)
//{
//    mangled_ppc("??0COND_TYPE@D3D@@QAA@E_N@Z");
//};

//public: bool D3D::COND_TYPE::IsPred(void)
//{
//    mangled_ppc("?IsPred@COND_TYPE@D3D@@QAA_NXZ");
//};

//public: bool D3D::COND_TYPE::operator==(union D3D::COND_TYPE)
//{
//    mangled_ppc("??8COND_TYPE@D3D@@QAA_NT01@@Z");
//};

//public: bool D3D::COND_TYPE::operator!=(union D3D::COND_TYPE)
//{
//    mangled_ppc("??9COND_TYPE@D3D@@QAA_NT01@@Z");
//};

//union D3D::COND_TYPE D3D::GetFlowCond(union GPUFLOW_INSTRUCTION *, union D3D::COND_TYPE)
//{
//    mangled_ppc("?GetFlowCond@D3D@@YA?ATCOND_TYPE@1@PATGPUFLOW_INSTRUCTION@@T21@@Z");
//};

//public: void D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::TODO_LIST::AddTodoEntry(struct D3D::FlowNode *, bool)
//{
//    mangled_ppc("?AddTodoEntry@TODO_LIST@CClassForAnalyzingAllocAndP0Usage@CShaderHacker@D3D@@QAAXPAUFlowNode@4@_N@Z");
//};

//private: static int D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::OpJumpsOrForcesEnd(unsigned long)
//{
//    mangled_ppc("?OpJumpsOrForcesEnd@CClassForAnalyzingAllocAndP0Usage@CShaderHacker@D3D@@CAHK@Z");
//};

//private: static enum D3D::HackFailureReason D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::ProcessTodoEntryForDeepShaderAnalysis(struct D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::TODO_LIST *)
//{
//    mangled_ppc("?ProcessTodoEntryForDeepShaderAnalysis@CClassForAnalyzingAllocAndP0Usage@CShaderHacker@D3D@@CA?AW4HackFailureReason@3@PAUTODO_LIST@123@@Z");
//};

//private: void D3D::CShaderHacker::CClassForInsertingPerFetchStuff::MarkJumpTargets(class D3D::CShaderHacker *)
//{
//    mangled_ppc("?MarkJumpTargets@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAAXPAV23@@Z");
//};

//private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::MarkFetchClauseStarts(class D3D::CShaderHacker *, unsigned long)
//{
//    mangled_ppc("?MarkFetchClauseStarts@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAA?AW4HackFailureReason@3@PAV23@K@Z");
//};

//private: void D3D::CShaderHacker::CClassForInsertingPerFetchStuff::BackPatchDanglingJumps(class D3D::CShaderHacker *)
//{
//    mangled_ppc("?BackPatchDanglingJumps@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAAXPAV23@@Z");
//};

//private: struct D3D::FlowNode * D3D::CShaderHacker::CClassForInsertingPerFetchStuff::InsertJumpNode(class D3D::CShaderHacker *, union D3D::COND_TYPE, struct D3D::FlowNode *)
//{
//    mangled_ppc("?InsertJumpNode@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAAPAUFlowNode@3@PAV23@TCOND_TYPE@3@PAU43@@Z");
//};

//private: long D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddRareFetchAfter(class D3D::CShaderHacker *, struct D3D::FlowNode *&, struct D3D::ALUNode *&, enum D3D::ERareInstruction)
//{
//    mangled_ppc("?AddRareFetchAfter@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAAJPAV23@AAPAUFlowNode@3@AAPAUALUNode@3@W4ERareInstruction@3@@Z");
//};

//private: bool D3D::CShaderHacker::CClassForInsertingPerFetchStuff::IsTfetchSameLODSameConst(struct D3D::ALUNode const *, struct D3D::ALUNode const *)
//{
//    mangled_ppc("?IsTfetchSameLODSameConst@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAA_NPBUALUNode@3@0@Z");
//};

//private: unsigned long D3D::CShaderHacker::CClassForInsertingPerFetchStuff::GetNumTfetchSameLODSameConst(struct D3D::ALUNode *&, struct D3D::FlowNode *&)
//{
//    mangled_ppc("?GetNumTfetchSameLODSameConst@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAAKAAPAUALUNode@3@AAPAUFlowNode@3@@Z");
//};

//private: static bool D3D::CShaderHacker::AddCConstant(struct D3D::CShaderHacker::LITERAL_CONSTANT &, float, unsigned long &)
//{
//    mangled_ppc("?AddCConstant@CShaderHacker@D3D@@CA_NAAULITERAL_CONSTANT@12@MAAK@Z");
//};

//private: long D3D::CShaderHacker::CopyInstructionAfter(struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::ALUNode const *, struct D3D::FlowNode **, struct D3D::ALUNode **)
//{
//    mangled_ppc("?CopyInstructionAfter@CShaderHacker@D3D@@AAAJPAUFlowNode@2@PAUALUNode@2@PBU42@PAPAU32@PAPAU42@@Z");
//};

//private: long D3D::CShaderHacker::AddALUAfter2(struct D3D::FlowNode *, struct D3D::ALUNode *, enum GPUALUVECTOROP, enum GPUALUSCALAROP, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, union D3D::SHADER_REGISTER, struct D3D::FlowNode **, struct D3D::ALUNode **)
//{
//    mangled_ppc("?AddALUAfter2@CShaderHacker@D3D@@AAAJPAUFlowNode@2@PAUALUNode@2@W4GPUALUVECTOROP@@W4GPUALUSCALAROP@@TSHADER_REGISTER@2@4444PAPAU32@PAPAU42@@Z");
//};

//private: long D3D::CShaderHacker::CreateExecAfterEx(struct D3D::FlowNode *, bool, bool, bool, unsigned char, bool, struct D3D::FlowNode **)
//{
//    mangled_ppc("?CreateExecAfterEx@CShaderHacker@D3D@@AAAJPAUFlowNode@2@_N11E1PAPAU32@@Z");
//};

//private: static long D3D::CShaderHacker::GetTfetchUsageInfoCB(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?GetTfetchUsageInfoCB@CShaderHacker@D3D@@CAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//private: enum D3D::HackFailureReason D3D::CShaderHacker::GetTfetchUsageInfo(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?GetTfetchUsageInfo@CShaderHacker@D3D@@AAA?AW4HackFailureReason@2@PBKK@Z");
//};

//public: static int D3D::CShaderHacker::QsortConstantSorter(void const *, void const *)
//{
//    mangled_ppc("?QsortConstantSorter@CShaderHacker@D3D@@SAHPBX0@Z");
//};

//private: D3D::CShaderHacker::~CShaderHacker(void)
//{
//    mangled_ppc("??1CShaderHacker@D3D@@AAA@XZ");
//};

//private: void * D3D::CShaderHacker::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCShaderHacker@D3D@@AAAPAXI@Z");
//};

//public: D3D::CShaderHacker::CClassForInsertingPerFetchStuff::CClassForInsertingPerFetchStuff(void)
//{
//    mangled_ppc("??0CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@QAA@XZ");
//};

//unsigned __int64 D3D::GetShaderHash(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?GetShaderHash@D3D@@YA_KPBKK@Z");
//};

//protected: static long D3D::CVertexShaderHashTable::GenerateVertexShaderInfoCB(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?GenerateVertexShaderInfoCB@CVertexShaderHashTable@D3D@@KAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//public: void D3D::HACKED_SHADER_VARIATION::HACKED_SHADER_CONSTANT_INFO::Set(unsigned short, bool, unsigned short)
//{
//    mangled_ppc("?Set@HACKED_SHADER_CONSTANT_INFO@HACKED_SHADER_VARIATION@D3D@@QAAXG_NG@Z");
//};

//public: long D3D::CRTCommandBufferHacker::GetFrameCount(void)
//{
//    mangled_ppc("?GetFrameCount@CRTCommandBufferHacker@D3D@@QAAJXZ");
//};

//public: enum D3D::HackFailureReason D3D::CONSTANT_ALLOCATOR::Initialize(void const *, unsigned long, void const *)
//{
//    mangled_ppc("?Initialize@CONSTANT_ALLOCATOR@D3D@@QAA?AW4HackFailureReason@2@PBXK0@Z");
//};

//public: int D3D::CONSTANT_ALLOCATOR::AllocateCConstant(void)
//{
//    mangled_ppc("?AllocateCConstant@CONSTANT_ALLOCATOR@D3D@@QAAHXZ");
//};

//public: static enum D3D::HackFailureReason D3D::CShaderHacker::CClassForAnalyzingAllocAndP0Usage::AnalyzeAllocAndP0Usage(class D3D::CShaderHacker *, struct D3D::SHADER_REHACKING_INFO *, bool &)
//{
//    mangled_ppc("?AnalyzeAllocAndP0Usage@CClassForAnalyzingAllocAndP0Usage@CShaderHacker@D3D@@SA?AW4HackFailureReason@3@PAV23@PAUSHADER_REHACKING_INFO@3@AA_N@Z");
//};

//private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddRestorePredicate(class D3D::CShaderHacker *, struct D3D::FlowNode *&, union D3D::SHADER_REGISTER &)
//{
//    mangled_ppc("?AddRestorePredicate@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAA?AW4HackFailureReason@3@PAV23@AAPAUFlowNode@3@AATSHADER_REGISTER@3@@Z");
//};

//private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddPerTfetchPerfCounterStuff(class D3D::CShaderHacker *, struct D3D::FlowNode *&, struct D3D::ALUNode *&, union D3D::SHADER_REGISTER &, union D3D::SHADER_REGISTER &, union GPUTEXTURE_FETCH_INSTRUCTION *, union D3D::SHADER_REGISTER &, unsigned long)
//{
//    mangled_ppc("?AddPerTfetchPerfCounterStuff@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAA?AW4HackFailureReason@3@PAV23@AAPAUFlowNode@3@AAPAUALUNode@3@AATSHADER_REGISTER@3@3PATGPUTEXTURE_FETCH_INSTRUCTION@@3K@Z");
//};

//private: long D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddGetCompTexLODAfter(class D3D::CShaderHacker *, struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::ALUNode const *, union D3D::SHADER_REGISTER &, struct D3D::FlowNode **, struct D3D::ALUNode **)
//{
//    mangled_ppc("?AddGetCompTexLODAfter@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAAJPAV23@PAUFlowNode@3@PAUALUNode@3@PBU53@AATSHADER_REGISTER@3@PAPAU43@PAPAU53@@Z");
//};

//private: union D3D::SHADER_REGISTER D3D::CShaderHacker::GetCConstantPerTFConst(int)
//{
//    mangled_ppc("?GetCConstantPerTFConst@CShaderHacker@D3D@@AAA?ATSHADER_REGISTER@2@H@Z");
//};

//private: union D3D::SHADER_REGISTER D3D::CShaderHacker::AllocateFloatConstant(float, float, float, float)
//{
//    mangled_ppc("?AllocateFloatConstant@CShaderHacker@D3D@@AAA?ATSHADER_REGISTER@2@MMMM@Z");
//};

//private: union D3D::SHADER_REGISTER D3D::CShaderHacker::AllocateFloatConstant(float)
//{
//    mangled_ppc("?AllocateFloatConstant@CShaderHacker@D3D@@AAA?ATSHADER_REGISTER@2@M@Z");
//};

//private: union D3D::SHADER_REGISTER D3D::CShaderHacker::AllocateFloatConstant(float, float)
//{
//    mangled_ppc("?AllocateFloatConstant@CShaderHacker@D3D@@AAA?ATSHADER_REGISTER@2@MM@Z");
//};

//public: enum D3D::HackFailureReason D3D::CShaderHacker::GenerateRehackingInfo(unsigned long const *, unsigned long, struct D3D::SHADER_REHACKING_INFO *)
//{
//    mangled_ppc("?GenerateRehackingInfo@CShaderHacker@D3D@@QAA?AW4HackFailureReason@2@PBKKPAUSHADER_REHACKING_INFO@2@@Z");
//};

//public: void D3D::CShaderHacker::Release(void)
//{
//    mangled_ppc("?Release@CShaderHacker@D3D@@QAAXXZ");
//};

//private: D3D::CShaderHacker::CShaderHacker(void)
//{
//    mangled_ppc("??0CShaderHacker@D3D@@AAA@XZ");
//};

//struct D3D::HACKED_VARIATION_LIST2* D3D::GetUsefulVariation(struct D3D::CPixelShaderHashEntry *, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?GetUsefulVariation@D3D@@YAPAUHACKED_VARIATION_LIST2@1@PAUCPixelShaderHashEntry@1@KKKK@Z");
//};

//public: void D3D::HACKED_SHADER_VARIATION::Destroy(void)
//{
//    mangled_ppc("?Destroy@HACKED_SHADER_VARIATION@D3D@@QAAXXZ");
//};

//public: struct D3D::CPixelShaderHashEntry * D3D::CTSSortedList<struct D3D::CPixelShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@UCPixelShaderHashEntry@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAUCPixelShaderHashEntry@2@_K@Z");
//};

//public: struct D3D::CVertexShaderHashEntry * D3D::CTSSortedList<struct D3D::CVertexShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@UCVertexShaderHashEntry@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAUCVertexShaderHashEntry@2@_K@Z");
//};

//private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddSavePredicate(class D3D::CShaderHacker *, struct D3D::FlowNode *&, union D3D::SHADER_REGISTER &)
//{
//    mangled_ppc("?AddSavePredicate@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAA?AW4HackFailureReason@3@PAV23@AAPAUFlowNode@3@AATSHADER_REGISTER@3@@Z");
//};

//private: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddPerTfetchStuff(class D3D::CShaderHacker *, struct D3D::ALUNode *, unsigned long)
//{
//    mangled_ppc("?AddPerTfetchStuff@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@AAA?AW4HackFailureReason@3@PAV23@PAUALUNode@3@K@Z");
//};

//public: enum D3D::HackFailureReason D3D::CShaderHacker::CClassForInsertingPerFetchStuff::AddJumpsAndPerTfetchStuff(class D3D::CShaderHacker *, unsigned long, unsigned long &)
//{
//    mangled_ppc("?AddJumpsAndPerTfetchStuff@CClassForInsertingPerFetchStuff@CShaderHacker@D3D@@QAA?AW4HackFailureReason@3@PAV23@KAAK@Z");
//};

//public: static class D3D::CShaderHacker * D3D::CShaderHacker::Initialize(unsigned long const *, unsigned long, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, union GPU_INTERPOLATORCONTROL, struct D3D::SHADER_REHACKING_INFO *)
//{
//    mangled_ppc("?Initialize@CShaderHacker@D3D@@SAPAV12@PBKKTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@TGPU_INTERPOLATORCONTROL@@PAUSHADER_REHACKING_INFO@2@@Z");
//};

//public: static enum D3D::HackFailureReason D3D::CShaderHacker::Initialize(struct D3D::SHADER_REHACKING_INFO *, unsigned long const *, unsigned long, class D3D::CShaderHacker **)
//{
//    mangled_ppc("?Initialize@CShaderHacker@D3D@@SA?AW4HackFailureReason@2@PAUSHADER_REHACKING_INFO@2@PBKKPAPAV12@@Z");
//};

//public: enum D3D::HackFailureReason D3D::CShaderHacker::GenerateHackedPixelShader(unsigned long, struct D3D::HACKED_SHADER_VARIATION *, enum D3D::ERareInstruction *)
//{
//    mangled_ppc("?GenerateHackedPixelShader@CShaderHacker@D3D@@QAA?AW4HackFailureReason@2@KPAUHACKED_SHADER_VARIATION@2@PAW4ERareInstruction@2@@Z");
//};

//enum D3D::HackFailureReason D3D::GenerateAllRequiredShaderFlavors(struct D3D::SHADER_REHACKING_INFO *, unsigned long const *, unsigned long, class D3D::CShaderHacker *&, unsigned long, unsigned long, unsigned long, struct D3D::HACKED_SHADER_VARIATION **)
//{
//    mangled_ppc("?GenerateAllRequiredShaderFlavors@D3D@@YA?AW4HackFailureReason@1@PAUSHADER_REHACKING_INFO@1@PBKKAAPAVCShaderHacker@1@KKKPAPAUHACKED_SHADER_VARIATION@1@@Z");
//};

//public: enum D3D::HackFailureReason D3D::CPixelShaderHashTable::FindOrGetHackedShader(unsigned long const *, unsigned long, union GPU_GPRMANAGEMENT, union GPU_INSTSTOREMANAGEMENT, unsigned long, struct D3D::VERTEX_SHADER_INFO const *, struct D3D::HACKED_SHADER_VARIATION **)
//{
//    mangled_ppc("?FindOrGetHackedShader@CPixelShaderHashTable@D3D@@QAA?AW4HackFailureReason@2@PBKKTGPU_GPRMANAGEMENT@@TGPU_INSTSTOREMANAGEMENT@@KPBUVERTEX_SHADER_INFO@2@PAPAUHACKED_SHADER_VARIATION@2@@Z");
//};

//public: void D3D::HACKED_VARIATION_LIST2::Destroy(void)
//{
//    mangled_ppc("?Destroy@HACKED_VARIATION_LIST2@D3D@@QAAXXZ");
//};

//public: struct D3D::CPixelShaderHashEntry * D3D::CTSHashTable<struct D3D::CPixelShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@UCPixelShaderHashEntry@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAUCPixelShaderHashEntry@2@_KK@Z");
//};

//public: struct D3D::CVertexShaderHashEntry * D3D::CTSHashTable<struct D3D::CVertexShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@UCVertexShaderHashEntry@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAUCVertexShaderHashEntry@2@_KK@Z");
//};

//public: enum D3D::HackFailureReason D3D::CPixelShaderHashTable::FindOrGetTextureUsage(unsigned long const *, unsigned long, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, union GPU_INTERPOLATORCONTROL, struct D3D::SHADER_TEXTURE_USAGE **)
//{
//    mangled_ppc("?FindOrGetTextureUsage@CPixelShaderHashTable@D3D@@QAA?AW4HackFailureReason@2@PBKKTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@TGPU_INTERPOLATORCONTROL@@PAPAUSHADER_TEXTURE_USAGE@2@@Z");
//};

//public: void D3D::HACKED_VARIATION_LIST::Destroy(void)
//{
//    mangled_ppc("?Destroy@HACKED_VARIATION_LIST@D3D@@QAAXXZ");
//};

//public: enum D3D::HackFailureReason D3D::CVertexShaderHashTable::FindOrGetVertexShaderInfo(unsigned long const *, unsigned long, struct D3D::VERTEX_SHADER_INFO *&)
//{
//    mangled_ppc("?FindOrGetVertexShaderInfo@CVertexShaderHashTable@D3D@@QAA?AW4HackFailureReason@2@PBKKAAPAUVERTEX_SHADER_INFO@2@@Z");
//};

//public: void D3D::CPixelShaderHashEntry::Destroy(void)
//{
//    mangled_ppc("?Destroy@CPixelShaderHashEntry@D3D@@QAAXXZ");
//};

//public: void D3D::CTSSortedList<struct D3D::CPixelShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@UCPixelShaderHashEntry@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CTSHashTable<struct D3D::CPixelShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@UCPixelShaderHashEntry@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CPixelShaderHashTable::Destroy(void)
//{
//    mangled_ppc("?Destroy@CPixelShaderHashTable@D3D@@QAAXXZ");
//};

