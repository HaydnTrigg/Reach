/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long volatile D3DXShader::g_pCurrentCompilerTID; // "?g_pCurrentCompilerTID@D3DXShader@@3KC"
// struct D3DXShader::ErrorMessageInfo *D3DXShader::rgErrorMessages; // "?rgErrorMessages@D3DXShader@@3PAUErrorMessageInfo@1@A"
// XGBreakOnHLSLCompilerError; // "XGBreakOnHLSLCompilerError"
// XGBreakOnHLSLCompilerWarning; // "XGBreakOnHLSLCompilerWarning"
// class D3DXShader::Compiler *volatile D3DXShader::g_pCurrentCompiler; // "?g_pCurrentCompiler@D3DXShader@@3RAVCompiler@1@A"

// int D3DXShader::___Zero(void);
// int D3DXShader::___ConstantInt(int);
// private: unsigned long D3DXShader::CompilerHeap::GetBucketIndex(unsigned long);
// private: void D3DXShader::CompilerHeap::AddPhysInUse(unsigned long);
// __InlineInterlockedCompareExchangePointer;
// public: static class D3DXShader::Compiler * D3DXShader::CompilerHeap::GetCompilerFromContext(void *);
// unsigned int D3DXShader::GetLowestBitMask(unsigned int);
// bool D3DXShader::IsSingleBit(unsigned int);
// public: class D3DXShader::Compiler * D3DXShader::Instruction::GetCompiler(void);
// public: bool D3DXShader::Instruction::IsDead(void);
// public: class D3DXShader::Block * D3DXShader::Instruction::GetBlock(void);
// public: bool D3DXShader::Block::IsDead(void);
// public: class D3DXShader::Compiler * D3DXShader::Block::GetCompiler(void);
// public: bool D3DXShader::Compiler::NeedLineNumberInfo(void);
// public: bool D3DXShader::Compiler::NeedVariableDebugInfo(void);
// public: bool D3DXShader::Compiler::IsVertexShader(void);
// public: bool D3DXShader::Compiler::IsPixelShader(void);
// public: bool D3DXShader::Compiler::GeneratingSpecialZPassShader(void);
// public: void D3DXShader::Compiler::BeginPhase(unsigned int);
// public: bool D3DXShader::Compiler::BeforePhase(unsigned int);
// UCodeToNativeDWORD;
// NativeToUCodeDWORD;
// public: bool D3DXShader::Compiler::RetainDeadCode(void);
// private: void D3DXShader::Compiler::ResetGlobalRegisterAllocatorState(void);
// private: struct D3DXShader::CompilerHeap::PhysicalMemoryChunk * D3DXShader::CompilerHeap::GetPhysicalMemory(void);
// private: void D3DXShader::CompilerHeap::FreePhysicalMemory(struct D3DXShader::CompilerHeap::PhysicalMemoryChunk *);
// public: unsigned long D3DXShader::Instruction::GetContextData(void);
// class D3DXShader::Compiler * D3DXShader::DebugGetCurrentCompiler(void);
// void D3DXShader::InitCompilerEntryPoint(unsigned long, struct D3DXShader::CompilerEntryPointState *);
// public: static long D3DXShader::Compiler::BeginCompilerEntryPoint(struct D3DXShader::CompilerEntryPointState *, void *, void (*)(void *, int, class D3DXShader::CNode *, unsigned long, char const *));
// long D3DXShader::HandleShaderEntryPointException(struct ID3DXBuffer **, struct ID3DXConstantTable **);
// void D3DXShader::CompileToMicrocodeErrorCallbackAdapter(void *, int, class D3DXShader::CNode *, unsigned long, char const *);
// char const * D3DXShader::GetMessageFormatString(enum D3DXShader::ErrorCode);
// public: void D3DXShader::Compiler::FormatErrorMessage(char *, unsigned long, enum D3DXShader::ErrorCode, char *);
// private: void D3DXShader::Compiler::PopDisabledTransformation(void);
// public: D3DXShader::CCompilerHeapCommentBlock::~CCompilerHeapCommentBlock(void);
// private: long D3DXShader::Compiler::RemoveAutoZ(struct ID3DXBuffer **, unsigned long, long (*)(void *, char const *, unsigned long), void *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Validate(void);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation>::IsLinked(void);
// private: static struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation> * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::EntryFromT(struct D3DXShader::CompilerHeap::HeapAllocation *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::SetPrev(struct D3DXShader::CompilerHeap::HeapAllocation **, struct D3DXShader::CompilerHeap::HeapAllocation *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::Validate(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::Remove(struct D3DXShader::CompilerHeap::HeapAllocation *);
// private: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::TFromEntry(class D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction> *);
// private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction> * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::EntryFromT(class D3DXShader::Instruction *);
// private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::IsRingEnd(class D3DXShader::Instruction *);
// private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::IsRingStart(class D3DXShader::Instruction **);
// private: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<class D3DXShader::Block> *);
// private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Block> * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::EntryFromT(class D3DXShader::Block *);
// private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::IsRingEnd(class D3DXShader::Block *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::Validate(void);
// public: bool D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::IsEmpty(void);
// private: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::ValidateIndex(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 27>::ComputeArrayOffset(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 27>::ComputeBitShift(unsigned int);
// private: unsigned int * D3DXShader::FixedSizeBitSet<unsigned int, 27>::ComputeWordPtr(unsigned int);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::IsRingEnd(struct D3DXShader::CompilerHeap::HeapAllocation *);
// private: static struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::MarkListHead(struct D3DXShader::CompilerHeap::HeapAllocation *);
// private: static struct D3DXShader::CompilerHeap::HeapAllocation ** D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::MarkListTail(struct D3DXShader::CompilerHeap::HeapAllocation **);
// private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction> * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::EntryFromPrev(class D3DXShader::Instruction **);
// private: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::MarkListHead(class D3DXShader::Block *);
// private: static class D3DXShader::Block ** D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::MarkListTail(class D3DXShader::Block **);
// private: void * D3DXShader::CompilerHeap::SlowAlloc(unsigned long);
// public: void D3DXShader::CompilerHeap::Preallocate(void);
// public: void * D3DXShader::CompilerHeap::AllocSmall(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: class D3DXShader::Block * D3DXShader::Block::GetReplacement(void);
// public: class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> * D3DXShader::Block::GetBody(void);
// public: class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> * D3DXShader::Block::GetEpilogue(void);
// public: void * D3DXShader::Compiler::AllocSmallFunctionMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: class D3DXShader::CNode * D3DXShader::Compiler::FindD3DContextNode(unsigned long);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::RemoveChecked(struct D3DXShader::CompilerHeap::HeapAllocation *);
// public: bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::IsEmpty(void);
// public: class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetHead(void);
// public: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetNext(class D3DXShader::Instruction *);
// public: class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetHead(void);
// public: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetNext(class D3DXShader::Block *);
// public: bool D3DXShader::FixedSizeBitSet<unsigned int, 27>::IsSet(unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::SetBit(unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::ClearBit(unsigned int);
// private: struct D3DXShader::CompilerHeap::HeapAllocation ** D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::GetRingStart(void);
// private: struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::IsEmpty(void);
// private: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::TFromPrev(class D3DXShader::Instruction **);
// private: class D3DXShader::Block ** D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetRingStart(void);
// private: class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetRingEnd(void);
// private: void D3DXShader::CompilerHeap::FreeHeapMemory(void *);
// public: void D3DXShader::CompilerHeap::Free(void *, unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: static void D3DXShader::CompilerHeap::FreeInContext(void *, void *, unsigned long);
// public: static void D3DXShader::CCompilerHeapCommentBlock::operator delete(void *);
// public: bool D3DXShader::Compiler::IsDebugOptionEnabled(enum D3DXShader::DebugOption);
// public: bool D3DXShader::Compiler::DisableDebugOption(enum D3DXShader::DebugOption);
// public: void D3DXShader::Compiler::EnableDebugOption(enum D3DXShader::DebugOption);
// public: void D3DXShader::Compiler::RestartCompiler(void);
// public: void * D3DXShader::CCompilerHeapCommentBlock::`scalar deleting destructor'(unsigned int);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::Init(void);
// public: struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::GetHead(void);
// public: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetPrev(class D3DXShader::Instruction *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::Init(void);
// private: void D3DXShader::CompilerHeap::FreeHeapAllocations(void);
// public: void D3DXShader::CompilerHeap::Init(class D3DXShader::Compiler *);
// public: void D3DXShader::CompilerHeap::Destruct(void);
// public: void D3DXShader::CompilerHeap::FreeEverything(void);
// public: unsigned long D3DXShader::Compiler::FindContextData(class D3DXShader::Instruction *, bool);
// public: class D3DXShader::CNode * D3DXShader::Compiler::GetContextNode(unsigned long);
// public: void D3DXShader::Compiler::Init(void *, void (*)(void *, int, class D3DXShader::CNode *, unsigned long, char const *));
// public: void D3DXShader::Compiler::Destruct(long);
// public: class D3DXShader::CNode * D3DXShader::Compiler::GetContextNode(void);
// public: static long D3DXShader::Compiler::RestartCompilerEntryPoint(struct D3DXShader::CompilerEntryPointState *);
// public: static long D3DXShader::Compiler::EndCompilerEntryPoint(struct D3DXShader::CompilerEntryPointState *, long);
// private: void D3DXShader::Compiler::FatalErrorWorker(enum D3DXShader::ErrorCode, char *, char const *, unsigned int, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::Warning(enum D3DXShader::ErrorCode, ...);
// public: void D3DXShader::Compiler::FatalError(enum D3DXShader::ErrorCode, char const *, unsigned int, class D3DXShader::Instruction *, ...);
// private: static void D3DXShader::Compiler::HandleFetchOptionsErrorCallback(void *, char const *, ...);
// public: void D3DXShader::Compiler::CompileCommon(unsigned long, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// public: void D3DXShader::Compiler::CompileHLSL(unsigned long, unsigned long, int, class D3DXShader::CNode *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// public: void D3DXShader::Compiler::CompileASM(class D3DXShader::CNode *, struct ID3DXBuffer *, unsigned long, struct ID3DXBuffer **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// long D3DXShader::CompileToMicrocode(unsigned long, unsigned long, int, class D3DXShader::CNode *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, struct ID3DXBuffer **, struct ID3DXConstantTable **, void *, void (*)(void *, int, class D3DXShader::CNode *, unsigned long, char const *), struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// long D3DXShader::OptimizeMicrocode(class D3DXShader::CNode *, struct ID3DXBuffer *, unsigned long, struct ID3DXBuffer **, void *, void (*)(void *, int, unsigned long, char const *), struct _D3DXSHADER_COMPILE_PARAMETERSA *);

//int D3DXShader::___Zero(void)
//{
//    mangled_ppc("?___Zero@D3DXShader@@YAHXZ");
//};

//int D3DXShader::___ConstantInt(int)
//{
//    mangled_ppc("?___ConstantInt@D3DXShader@@YAHH@Z");
//};

//private: unsigned long D3DXShader::CompilerHeap::GetBucketIndex(unsigned long)
//{
//    mangled_ppc("?GetBucketIndex@CompilerHeap@D3DXShader@@AAAKK@Z");
//};

//private: void D3DXShader::CompilerHeap::AddPhysInUse(unsigned long)
//{
//    mangled_ppc("?AddPhysInUse@CompilerHeap@D3DXShader@@AAAXK@Z");
//};

//__InlineInterlockedCompareExchangePointer
//{
//    mangled_ppc("__InlineInterlockedCompareExchangePointer");
//};

//public: static class D3DXShader::Compiler * D3DXShader::CompilerHeap::GetCompilerFromContext(void *)
//{
//    mangled_ppc("?GetCompilerFromContext@CompilerHeap@D3DXShader@@SAPAVCompiler@2@PAX@Z");
//};

//unsigned int D3DXShader::GetLowestBitMask(unsigned int)
//{
//    mangled_ppc("?GetLowestBitMask@D3DXShader@@YAII@Z");
//};

//bool D3DXShader::IsSingleBit(unsigned int)
//{
//    mangled_ppc("?IsSingleBit@D3DXShader@@YA_NI@Z");
//};

//public: class D3DXShader::Compiler * D3DXShader::Instruction::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@Instruction@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: bool D3DXShader::Instruction::IsDead(void)
//{
//    mangled_ppc("?IsDead@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Block * D3DXShader::Instruction::GetBlock(void)
//{
//    mangled_ppc("?GetBlock@Instruction@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: bool D3DXShader::Block::IsDead(void)
//{
//    mangled_ppc("?IsDead@Block@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::Block::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@Block@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: bool D3DXShader::Compiler::NeedLineNumberInfo(void)
//{
//    mangled_ppc("?NeedLineNumberInfo@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::NeedVariableDebugInfo(void)
//{
//    mangled_ppc("?NeedVariableDebugInfo@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::IsVertexShader(void)
//{
//    mangled_ppc("?IsVertexShader@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::IsPixelShader(void)
//{
//    mangled_ppc("?IsPixelShader@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::GeneratingSpecialZPassShader(void)
//{
//    mangled_ppc("?GeneratingSpecialZPassShader@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Compiler::BeginPhase(unsigned int)
//{
//    mangled_ppc("?BeginPhase@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Compiler::BeforePhase(unsigned int)
//{
//    mangled_ppc("?BeforePhase@Compiler@D3DXShader@@QAA_NI@Z");
//};

//UCodeToNativeDWORD
//{
//    mangled_ppc("UCodeToNativeDWORD");
//};

//NativeToUCodeDWORD
//{
//    mangled_ppc("NativeToUCodeDWORD");
//};

//public: bool D3DXShader::Compiler::RetainDeadCode(void)
//{
//    mangled_ppc("?RetainDeadCode@Compiler@D3DXShader@@QAA_NXZ");
//};

//private: void D3DXShader::Compiler::ResetGlobalRegisterAllocatorState(void)
//{
//    mangled_ppc("?ResetGlobalRegisterAllocatorState@Compiler@D3DXShader@@AAAXXZ");
//};

//private: struct D3DXShader::CompilerHeap::PhysicalMemoryChunk * D3DXShader::CompilerHeap::GetPhysicalMemory(void)
//{
//    mangled_ppc("?GetPhysicalMemory@CompilerHeap@D3DXShader@@AAAPAUPhysicalMemoryChunk@12@XZ");
//};

//private: void D3DXShader::CompilerHeap::FreePhysicalMemory(struct D3DXShader::CompilerHeap::PhysicalMemoryChunk *)
//{
//    mangled_ppc("?FreePhysicalMemory@CompilerHeap@D3DXShader@@AAAXPAUPhysicalMemoryChunk@12@@Z");
//};

//public: unsigned long D3DXShader::Instruction::GetContextData(void)
//{
//    mangled_ppc("?GetContextData@Instruction@D3DXShader@@QAAKXZ");
//};

//class D3DXShader::Compiler * D3DXShader::DebugGetCurrentCompiler(void)
//{
//    mangled_ppc("?DebugGetCurrentCompiler@D3DXShader@@YAPAVCompiler@1@XZ");
//};

//void D3DXShader::InitCompilerEntryPoint(unsigned long, struct D3DXShader::CompilerEntryPointState *)
//{
//    mangled_ppc("?InitCompilerEntryPoint@D3DXShader@@YAXKPAUCompilerEntryPointState@1@@Z");
//};

//public: static long D3DXShader::Compiler::BeginCompilerEntryPoint(struct D3DXShader::CompilerEntryPointState *, void *, void (*)(void *, int, class D3DXShader::CNode *, unsigned long, char const *))
//{
//    mangled_ppc("?BeginCompilerEntryPoint@Compiler@D3DXShader@@SAJPAUCompilerEntryPointState@2@PAXP6AX1HPAVCNode@2@KPBD@Z@Z");
//};

//long D3DXShader::HandleShaderEntryPointException(struct ID3DXBuffer **, struct ID3DXConstantTable **)
//{
//    mangled_ppc("?HandleShaderEntryPointException@D3DXShader@@YAJPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@@Z");
//};

//void D3DXShader::CompileToMicrocodeErrorCallbackAdapter(void *, int, class D3DXShader::CNode *, unsigned long, char const *)
//{
//    mangled_ppc("?CompileToMicrocodeErrorCallbackAdapter@D3DXShader@@YAXPAXHPAVCNode@1@KPBD@Z");
//};

//char const * D3DXShader::GetMessageFormatString(enum D3DXShader::ErrorCode)
//{
//    mangled_ppc("?GetMessageFormatString@D3DXShader@@YAPBDW4ErrorCode@1@@Z");
//};

//public: void D3DXShader::Compiler::FormatErrorMessage(char *, unsigned long, enum D3DXShader::ErrorCode, char *)
//{
//    mangled_ppc("?FormatErrorMessage@Compiler@D3DXShader@@QAAXPADKW4ErrorCode@2@0@Z");
//};

//private: void D3DXShader::Compiler::PopDisabledTransformation(void)
//{
//    mangled_ppc("?PopDisabledTransformation@Compiler@D3DXShader@@AAAXXZ");
//};

//public: D3DXShader::CCompilerHeapCommentBlock::~CCompilerHeapCommentBlock(void)
//{
//    mangled_ppc("??1CCompilerHeapCommentBlock@D3DXShader@@QAA@XZ");
//};

//private: long D3DXShader::Compiler::RemoveAutoZ(struct ID3DXBuffer **, unsigned long, long (*)(void *, char const *, unsigned long), void *)
//{
//    mangled_ppc("?RemoveAutoZ@Compiler@D3DXShader@@AAAJPAPAUID3DXBuffer@@KP6AJPAXPBDK@Z1@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UHeapAllocation@CompilerHeap@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@CAPAUHeapAllocation@CompilerHeap@2@PAV?$DoubleLinkListEntry@UHeapAllocation@CompilerHeap@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation> * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::EntryFromT(struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UHeapAllocation@CompilerHeap@D3DXShader@@@2@PAUHeapAllocation@CompilerHeap@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::SetPrev(struct D3DXShader::CompilerHeap::HeapAllocation **, struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUHeapAllocation@CompilerHeap@2@PAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::Remove(struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@SAXPAUHeapAllocation@CompilerHeap@2@@Z");
//};

//private: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::TFromEntry(class D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAPAVInstruction@2@PAV?$DoubleLinkListEntry@VInstruction@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction> * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::EntryFromT(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAPAV?$DoubleLinkListEntry@VInstruction@D3DXShader@@@2@PAVInstruction@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::IsRingEnd(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CA_NPAVInstruction@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::IsRingStart(class D3DXShader::Instruction **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CA_NPAPAVInstruction@2@@Z");
//};

//private: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<class D3DXShader::Block> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CAPAVBlock@2@PAV?$DoubleLinkListEntry@VBlock@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Block> * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::EntryFromT(class D3DXShader::Block *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@VBlock@D3DXShader@@@2@PAVBlock@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::IsRingEnd(class D3DXShader::Block *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CA_NPAVBlock@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::ValidateIndex(unsigned int)
//{
//    mangled_ppc("?ValidateIndex@?$FixedSizeBitSet@I$0BL@@D3DXShader@@AAAXI@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 27>::ComputeArrayOffset(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset@?$FixedSizeBitSet@I$0BL@@D3DXShader@@AAAKI@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 27>::ComputeBitShift(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift@?$FixedSizeBitSet@I$0BL@@D3DXShader@@AAAKI@Z");
//};

//private: unsigned int * D3DXShader::FixedSizeBitSet<unsigned int, 27>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$FixedSizeBitSet@I$0BL@@D3DXShader@@AAAPAII@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::IsRingEnd(struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@CA_NPAUHeapAllocation@CompilerHeap@2@@Z");
//};

//private: static struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::MarkListHead(struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@CAPAUHeapAllocation@CompilerHeap@2@PAU342@@Z");
//};

//private: static struct D3DXShader::CompilerHeap::HeapAllocation ** D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::MarkListTail(struct D3DXShader::CompilerHeap::HeapAllocation **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@CAPAPAUHeapAllocation@CompilerHeap@2@PAPAU342@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction> * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::EntryFromPrev(class D3DXShader::Instruction **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAPAV?$DoubleLinkListEntry@VInstruction@D3DXShader@@@2@PAPAVInstruction@2@@Z");
//};

//private: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::MarkListHead(class D3DXShader::Block *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CAPAVBlock@2@PAV32@@Z");
//};

//private: static class D3DXShader::Block ** D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::MarkListTail(class D3DXShader::Block **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CAPAPAVBlock@2@PAPAV32@@Z");
//};

//private: void * D3DXShader::CompilerHeap::SlowAlloc(unsigned long)
//{
//    mangled_ppc("?SlowAlloc@CompilerHeap@D3DXShader@@AAAPAXK@Z");
//};

//public: void D3DXShader::CompilerHeap::Preallocate(void)
//{
//    mangled_ppc("?Preallocate@CompilerHeap@D3DXShader@@QAAXXZ");
//};

//public: void * D3DXShader::CompilerHeap::AllocSmall(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocSmall@CompilerHeap@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetReplacement(void)
//{
//    mangled_ppc("?GetReplacement@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> * D3DXShader::Block::GetBody(void)
//{
//    mangled_ppc("?GetBody@Block@D3DXShader@@QAAPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@XZ");
//};

//public: class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> * D3DXShader::Block::GetEpilogue(void)
//{
//    mangled_ppc("?GetEpilogue@Block@D3DXShader@@QAAPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@XZ");
//};

//public: void * D3DXShader::Compiler::AllocSmallFunctionMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocSmallFunctionMem@Compiler@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: class D3DXShader::CNode * D3DXShader::Compiler::FindD3DContextNode(unsigned long)
//{
//    mangled_ppc("?FindD3DContextNode@Compiler@D3DXShader@@QAAPAVCNode@2@K@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::RemoveChecked(struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?RemoveChecked@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@QAAXPAUHeapAllocation@CompilerHeap@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetNext(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@SAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetNext(class D3DXShader::Block *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@SAPAVBlock@2@PAV32@@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned int, 27>::IsSet(unsigned int)
//{
//    mangled_ppc("?IsSet@?$FixedSizeBitSet@I$0BL@@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::SetBit(unsigned int)
//{
//    mangled_ppc("?SetBit@?$FixedSizeBitSet@I$0BL@@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::ClearBit(unsigned int)
//{
//    mangled_ppc("?ClearBit@?$FixedSizeBitSet@I$0BL@@D3DXShader@@QAAXI@Z");
//};

//private: struct D3DXShader::CompilerHeap::HeapAllocation ** D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUHeapAllocation@CompilerHeap@2@XZ");
//};

//private: struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@AAAPAUHeapAllocation@CompilerHeap@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::TFromPrev(class D3DXShader::Instruction **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAPAVInstruction@2@PAPAV32@@Z");
//};

//private: class D3DXShader::Block ** D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@AAAPAPAVBlock@2@XZ");
//};

//private: class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@AAAPAVBlock@2@XZ");
//};

//private: void D3DXShader::CompilerHeap::FreeHeapMemory(void *)
//{
//    mangled_ppc("?FreeHeapMemory@CompilerHeap@D3DXShader@@AAAXPAX@Z");
//};

//public: void D3DXShader::CompilerHeap::Free(void *, unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?Free@CompilerHeap@D3DXShader@@QAAXPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: static void D3DXShader::CompilerHeap::FreeInContext(void *, void *, unsigned long)
//{
//    mangled_ppc("?FreeInContext@CompilerHeap@D3DXShader@@SAXPAX0K@Z");
//};

//public: static void D3DXShader::CCompilerHeapCommentBlock::operator delete(void *)
//{
//    mangled_ppc("??3CCompilerHeapCommentBlock@D3DXShader@@SAXPAX@Z");
//};

//public: bool D3DXShader::Compiler::IsDebugOptionEnabled(enum D3DXShader::DebugOption)
//{
//    mangled_ppc("?IsDebugOptionEnabled@Compiler@D3DXShader@@QAA_NW4DebugOption@2@@Z");
//};

//public: bool D3DXShader::Compiler::DisableDebugOption(enum D3DXShader::DebugOption)
//{
//    mangled_ppc("?DisableDebugOption@Compiler@D3DXShader@@QAA_NW4DebugOption@2@@Z");
//};

//public: void D3DXShader::Compiler::EnableDebugOption(enum D3DXShader::DebugOption)
//{
//    mangled_ppc("?EnableDebugOption@Compiler@D3DXShader@@QAAXW4DebugOption@2@@Z");
//};

//public: void D3DXShader::Compiler::RestartCompiler(void)
//{
//    mangled_ppc("?RestartCompiler@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void * D3DXShader::CCompilerHeapCommentBlock::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCCompilerHeapCommentBlock@D3DXShader@@QAAPAXI@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::CompilerHeap::HeapAllocation * D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@QAAPAUHeapAllocation@CompilerHeap@2@XZ");
//};

//public: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetPrev(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@SAPAVInstruction@2@PAV32@@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: void D3DXShader::CompilerHeap::FreeHeapAllocations(void)
//{
//    mangled_ppc("?FreeHeapAllocations@CompilerHeap@D3DXShader@@AAAXXZ");
//};

//public: void D3DXShader::CompilerHeap::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@CompilerHeap@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: void D3DXShader::CompilerHeap::Destruct(void)
//{
//    mangled_ppc("?Destruct@CompilerHeap@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::CompilerHeap::FreeEverything(void)
//{
//    mangled_ppc("?FreeEverything@CompilerHeap@D3DXShader@@QAAXXZ");
//};

//public: unsigned long D3DXShader::Compiler::FindContextData(class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?FindContextData@Compiler@D3DXShader@@QAAKPAVInstruction@2@_N@Z");
//};

//public: class D3DXShader::CNode * D3DXShader::Compiler::GetContextNode(unsigned long)
//{
//    mangled_ppc("?GetContextNode@Compiler@D3DXShader@@QAAPAVCNode@2@K@Z");
//};

//public: void D3DXShader::Compiler::Init(void *, void (*)(void *, int, class D3DXShader::CNode *, unsigned long, char const *))
//{
//    mangled_ppc("?Init@Compiler@D3DXShader@@QAAXPAXP6AX0HPAVCNode@2@KPBD@Z@Z");
//};

//public: void D3DXShader::Compiler::Destruct(long)
//{
//    mangled_ppc("?Destruct@Compiler@D3DXShader@@QAAXJ@Z");
//};

//public: class D3DXShader::CNode * D3DXShader::Compiler::GetContextNode(void)
//{
//    mangled_ppc("?GetContextNode@Compiler@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//public: static long D3DXShader::Compiler::RestartCompilerEntryPoint(struct D3DXShader::CompilerEntryPointState *)
//{
//    mangled_ppc("?RestartCompilerEntryPoint@Compiler@D3DXShader@@SAJPAUCompilerEntryPointState@2@@Z");
//};

//public: static long D3DXShader::Compiler::EndCompilerEntryPoint(struct D3DXShader::CompilerEntryPointState *, long)
//{
//    mangled_ppc("?EndCompilerEntryPoint@Compiler@D3DXShader@@SAJPAUCompilerEntryPointState@2@J@Z");
//};

//private: void D3DXShader::Compiler::FatalErrorWorker(enum D3DXShader::ErrorCode, char *, char const *, unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FatalErrorWorker@Compiler@D3DXShader@@AAAXW4ErrorCode@2@PADPBDIPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Compiler::Warning(enum D3DXShader::ErrorCode, ...)
//{
//    mangled_ppc("?Warning@Compiler@D3DXShader@@QAAXW4ErrorCode@2@ZZ");
//};

//public: void D3DXShader::Compiler::FatalError(enum D3DXShader::ErrorCode, char const *, unsigned int, class D3DXShader::Instruction *, ...)
//{
//    mangled_ppc("?FatalError@Compiler@D3DXShader@@QAAXW4ErrorCode@2@PBDIPAVInstruction@2@ZZ");
//};

//private: static void D3DXShader::Compiler::HandleFetchOptionsErrorCallback(void *, char const *, ...)
//{
//    mangled_ppc("?HandleFetchOptionsErrorCallback@Compiler@D3DXShader@@CAXPAXPBDZZ");
//};

//public: void D3DXShader::Compiler::CompileCommon(unsigned long, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileCommon@Compiler@D3DXShader@@QAAXKKPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//public: void D3DXShader::Compiler::CompileHLSL(unsigned long, unsigned long, int, class D3DXShader::CNode *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileHLSL@Compiler@D3DXShader@@QAAXKKHPAVCNode@2@PBD00PAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//public: void D3DXShader::Compiler::CompileASM(class D3DXShader::CNode *, struct ID3DXBuffer *, unsigned long, struct ID3DXBuffer **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileASM@Compiler@D3DXShader@@QAAXPAVCNode@2@PAUID3DXBuffer@@KPAPAU4@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//long D3DXShader::CompileToMicrocode(unsigned long, unsigned long, int, class D3DXShader::CNode *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, struct ID3DXBuffer **, struct ID3DXConstantTable **, void *, void (*)(void *, int, class D3DXShader::CNode *, unsigned long, char const *), struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileToMicrocode@D3DXShader@@YAJKKHPAVCNode@1@PBD00PAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAXP6AX4H0K1@ZPAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//long D3DXShader::OptimizeMicrocode(class D3DXShader::CNode *, struct ID3DXBuffer *, unsigned long, struct ID3DXBuffer **, void *, void (*)(void *, int, unsigned long, char const *), struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?OptimizeMicrocode@D3DXShader@@YAJPAVCNode@1@PAUID3DXBuffer@@KPAPAU3@PAXP6AX3HKPBD@ZPAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

