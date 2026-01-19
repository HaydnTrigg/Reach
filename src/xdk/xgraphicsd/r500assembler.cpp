/* ---------- headers */

#include "xdk\xgraphicsd\r500assembler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned long const XGRAPHICS::ConstantTableBitVector::kNumConstants; // "?kNumConstants@ConstantTableBitVector@XGRAPHICS@@2KB"
// private: static int const XGRAPHICS::ConstantTableBitVector::kUsedConstantsTableSize; // "?kUsedConstantsTableSize@ConstantTableBitVector@XGRAPHICS@@0HB"
// public: static unsigned long const XGRAPHICS::ConstantRenumberingTable::kNumConstants; // "?kNumConstants@ConstantRenumberingTable@XGRAPHICS@@2KB"
// public: static unsigned long const BitVector<256>::SIZE; // "?SIZE@?$BitVector@$0BAA@@@2KB"
// public: static unsigned long const BitVector<256>::DWORD_BITSIZE; // "?DWORD_BITSIZE@?$BitVector@$0BAA@@@2KB"
// public: static unsigned long const BitVector<256>::ARRAY_SIZE; // "?ARRAY_SIZE@?$BitVector@$0BAA@@@2KB"
// public: static unsigned long const BitVector<32>::SIZE; // "?SIZE@?$BitVector@$0CA@@@2KB"
// public: static unsigned long const BitVector<32>::DWORD_BITSIZE; // "?DWORD_BITSIZE@?$BitVector@$0CA@@@2KB"
// public: static unsigned long const BitVector<32>::ARRAY_SIZE; // "?ARRAY_SIZE@?$BitVector@$0CA@@@2KB"
// struct XGRAPHICS::ProgramControlFieldUI *XGRAPHICS::g_ProgramControlField; // "?g_ProgramControlField@XGRAPHICS@@3PAUProgramControlFieldUI@1@A"
// struct XGRAPHICS::EnumStringTableEntry *XGRAPHICS::D3DXREGISTER_SET_EnumTable; // "?D3DXREGISTER_SET_EnumTable@XGRAPHICS@@3PAUEnumStringTableEntry@1@A"
// struct XGRAPHICS::EnumStringTableEntry *XGRAPHICS::D3DXPARAMETER_CLASS_EnumTable; // "?D3DXPARAMETER_CLASS_EnumTable@XGRAPHICS@@3PAUEnumStringTableEntry@1@A"
// struct XGRAPHICS::EnumStringTableEntry *XGRAPHICS::D3DXPARAMETER_TYPE_EnumTable; // "?D3DXPARAMETER_TYPE_EnumTable@XGRAPHICS@@3PAUEnumStringTableEntry@1@A"
// XShader__Enable_Translator; // "XShader__Enable_Translator"
// unsigned long XGRAPHICS::g_R500ShaderCounter; // "?g_R500ShaderCounter@XGRAPHICS@@3KA"

// void * XGRAPHICS::MyClientAllocSysMem(void *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::MyClientFreeSysMem(void *, void *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::MyClientAllocVidMem(void *, unsigned int, enum XGRAPHICS::_E_SSM_VIDMEMHEAP, struct XGRAPHICS::_SSM_VIDMEM *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::MyClientFreeVidMem(void *, struct XGRAPHICS::_SSM_VIDMEM *);
// unsigned int XGRAPHICS::MyClientQueryRegistry(void *, char *, unsigned int *);
// void XGRAPHICS::MyClientDebugString(void *, char *, char *, char *);
// void XGRAPHICS::MyClientAssert(void *);
// void XGRAPHICS::MyClientErrorMessage(void *, unsigned int, unsigned int, char *);
// unsigned int * __fastcall XGRAPHICS::MyClientGetCmdBuffSpace(void *, unsigned int);
// unsigned int * __fastcall XGRAPHICS::MyClientGetEmptyCmdBuff(void *, unsigned int);
// unsigned int __fastcall XGRAPHICS::MyClientGetMaxEmptyCmdBuffSize(void *);
// unsigned int __fastcall XGRAPHICS::MyClientUpdateCmdBuffSpace(void *, unsigned int, unsigned __int64*);
// unsigned int __fastcall XGRAPHICS::MyClientCheckTSRetired(void *, unsigned __int64*, unsigned int);
// void __fastcall XGRAPHICS::MyClientConvertToUASValues(void *, void *, void *);
// long XGRAPHICS::CreateILMgmt(struct XGRAPHICS::_R400ILSTORE *);
// bool XGRAPHICS::IsExecOp(unsigned long);
// bool XGRAPHICS::IsExecEndOp(unsigned long);
// void XGRAPHICS::ConvertR500TypeAndIndexToD3DTypeAndIndex(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long &, unsigned long &);
// unsigned long XGRAPHICS::CalculateCentroidUsageAndIndex(int, unsigned long, unsigned long, unsigned long, unsigned long);
// unsigned long XGRAPHICS::UCodeToPrivateDWORD(unsigned long);
// unsigned long XGRAPHICS::PrivateToNativeDWORD(unsigned long);
// unsigned long XGRAPHICS::FindFirstALUInstructionPrivate(unsigned long const *, unsigned long);
// unsigned long XGRAPHICS::FindFirstALUInstructionUCode(unsigned long const *, unsigned long);
// unsigned long XGRAPHICS::FindFirstALUInstructionNative(unsigned long const *, unsigned long);
// void XGRAPHICS::PrivateToNativeR500Microcode(unsigned long *, unsigned long);
// public: void XGRAPHICS::ConstantTableBitVector::Initialize(void);
// public: void XGRAPHICS::ConstantTableBitVector::SetUsed(unsigned long);
// public: bool XGRAPHICS::ConstantTableBitVector::IsUsed(unsigned long);
// public: int XGRAPHICS::ConstantTableBitVector::FindHighestUnused(int);
// GPU_GET_FLOW_INSTRUCTIONS;
// GPU_PUT_FLOW_INSTRUCTIONS;
// public: void XGRAPHICS::ConstantRenumberingTable::RecordConstantDescription(struct _D3DXCONSTANT_DESC *);
// public: void XGRAPHICS::ConstantRenumberingTable::RecordConstant(struct _D3DXCONSTANT_DESC const *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *);
// public: void XGRAPHICS::ConstantRenumberingTable::BuildConstantDescription(struct _D3DXCONSTANT_DESC *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *);
// public: void XGRAPHICS::ConstantRenumberingTable::RecordConstantTableEntries(struct ID3DXConstantTable *);
// public: unsigned long XGRAPHICS::ConstantRenumberingTable::Renumber(unsigned long);
// bool XGRAPHICS::UsingCompilerLiteral(union GPUALU_INSTRUCTION const *);
// void XGRAPHICS::RenumberCompilerLiteralsVisitor(void *, bool, bool, bool, unsigned long, void *);
// public: XGRAPHICS::FixSerializationContext::FixSerializationContext(struct XMicrocodeBuilder *);
// public: bool XGRAPHICS::FixSerializationContext::ShouldSerialize(bool, bool, bool, union GPUSHADER_INSTRUCTION *);
// void XGRAPHICS::Enter(void);
// void XGRAPHICS::Leave(void);
// enum XGRAPHICS::_E_SSM_RETURNCODE __fastcall XGRAPHICS::ThreadSafeSSMPrecompileShader(unsigned int, void *);
// long XGRAPHICS::R500ShaderConstantValueCallback(void *, unsigned long, unsigned int, void *, unsigned int);
// long XGRAPHICS::ValidatorOutputCallback_QuickCheck(void *, char const *, unsigned long);
// public: XGRAPHICS::R500ValidatorOutputCallbackContext::R500ValidatorOutputCallbackContext(void *, void (*)(void *, int, unsigned long, char const *), int);
// public: long XGRAPHICS::R500ValidatorOutputCallbackContext::OutputLineString(char *);
// XPrintf;
// UcodeDebugPrintf;
// long XGRAPHICS::GetEnumString(struct XGRAPHICS::EnumStringTableEntry const *, unsigned int, char const **);
// int XGRAPHICS::DWORDToINT(unsigned long);
// float XGRAPHICS::DWORDToFLOAT(unsigned long);
// void XGRAPHICS::BuildConstantDescription(struct _D3DXCONSTANT_DESC *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *);
// unsigned int XGRAPHICS::CountConstantRegisters(struct _D3DXCONSTANT_DESC const *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_TYPEINFO const *);
// public: BitVector<256>::BitVector<256>(void);
// public: void BitVector<256>::Clear(void);
// public: bool BitVector<256>::IsSet(unsigned long);
// public: void BitVector<256>::Set(unsigned long);
// public: BitVector<32>::BitVector<32>(void);
// public: void BitVector<32>::Clear(void);
// public: bool BitVector<32>::IsSet(unsigned long);
// public: void BitVector<32>::Set(unsigned long);
// UCodeGetUCodeHeader;
// NativeGetUCodeHeader;
// NativeGetShaderType;
// NativeGetTotalShaderSize;
// public: XGRAPHICS::OutStream::OutStream(long (*)(void *, char const *, unsigned long), void *);
// public: void XGRAPHICS::OutStream::SetRTF(int);
// public: static bool XGRAPHICS::OutStream::IsRTFDelimiter(char);
// public: long XGRAPHICS::OutStream::GetAccumulatedResult(void);
// private: long XGRAPHICS::OutStream::AccumulateResult(long);
// unsigned long XGRAPHICS::ATI_D3DSI_GETCOMMENTSIZE(unsigned long);
// void AL_Create(struct _ATILIST *, unsigned long);
// void AL_Destroy(struct _ATILIST *);
// void XGRAPHICS::AS_SetStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE, unsigned int);
// void XGRAPHICS::AS_SetArrayStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int, unsigned int);
// long XGRAPHICS::DeleteILMgmt(struct XGRAPHICS::_R400ILSTORE *);
// void XGRAPHICS::ForEachInstruction(void *, unsigned long, void (*)(void *, bool, bool, bool, unsigned long, void *), void *, bool, bool);
// long XGRAPHICS::ProcessStateList(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XMicrocodeBuilder *, union GPU_PROGRAMCONTROL *, union GPU_CONTEXTMISC *, bool);
// public: long XGRAPHICS::ConstantRenumberingTable::Initialize(unsigned long const *, unsigned long, struct ID3DXConstantTable *, struct XGRAPHICS::_CS_COMPILED_SHADER *, bool);
// public: long XGRAPHICS::ConstantRenumberingTable::CreateCompilerConstantDeclarations(unsigned long **, unsigned long *);
// void XGRAPHICS::SetInterpolatorInfo(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XMicrocodeBuilder *, int);
// void XGRAPHICS::CopyMicrocodeVisitor(void *, bool, bool, bool, unsigned long, void *);
// void XGRAPHICS::CopyMicrocodeIntoBuilder(unsigned long *, unsigned long, union _UCODE_VSINPUTDECLARATION *, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, struct XMicrocodeBuilder *, struct XGRAPHICS::SamplerDimensionTable *);
// long XGRAPHICS::RenumberCompilerLiterals(unsigned long const *, unsigned long, unsigned long *, unsigned long, struct ID3DXConstantTable *, struct XMicrocodeBuilder *, struct XGRAPHICS::_CS_COMPILED_SHADER *, int);
// long XGRAPHICS::ParseDefsAndDecls(unsigned long const *, unsigned long, int, struct XMicrocodeBuilder *, struct XGRAPHICS::SamplerDimensionTable *);
// long XGRAPHICS::MyBuildMicrocodeCommon(unsigned long const *, unsigned long, struct ID3DXConstantTable *, struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XMicrocodeBuilder **, int, union _UCODE_VSINPUTDECLARATION *, struct _UCODE_DEBUGGER_PARAMETERS *);
// public: void XGRAPHICS::FixSerializationContext::Mark(unsigned long);
// void XGRAPHICS::SetTFetchFetchValidOnly(struct XMicrocodeBuilder *);
// void XGRAPHICS::CreateUsageInfoFromShader(unsigned long const *, unsigned long, struct XGRAPHICS::_R400VSFUNC *);
// void * XGRAPHICS::MyMalloc(unsigned long);
// void XGRAPHICS::MyFree(void *);
// public: long XGRAPHICS::R500ValidatorOutputCallbackContext::OutputLine(void);
// public: long XGRAPHICS::R500ValidatorOutputCallbackContext::ValidatorOutput(char const *, unsigned long);
// long XGRAPHICS::ValidatorOutputCallback(void *, char const *, unsigned long);
// public: long XGRAPHICS::OutStream::Printf(char const *, ...);
// public: long XGRAPHICS::OutStream::Write(char const *, unsigned long);
// public: void XGRAPHICS::FixSerializationContext::Callback(void *, bool, bool, bool, unsigned long);
// long XGRAPHICS::OutStreamCallback(void *, char const *, unsigned long);
// long XGRAPHICS::DisassembleR500MicrocodeRaw(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, unsigned long const *, unsigned long, long (*)(void *, unsigned long, unsigned int, void *, unsigned int), void *, unsigned long, class XGRAPHICS::OutStream *);
// public: long XGRAPHICS::R500ValidatorOutputCallbackContext::Flush(void);
// void XGRAPHICS::PrintFloat(class XGRAPHICS::OutStream *, float);
// void XGRAPHICS::PrintConstantDescription(class XGRAPHICS::OutStream *, char const *, struct _D3DXCONSTANT_DESC *);
// void XGRAPHICS::PrintConstant(class XGRAPHICS::OutStream *, char const *, char const *, char const *, struct _D3DXCONSTANT_DESC const *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *);
// long XGRAPHICS::DumpConstantTable(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long);
// public: void XGRAPHICS::OutStream::PrintRTF(char const *);
// public: void XGRAPHICS::OutStream::PrintLineBreak(void);
// public: void XGRAPHICS::OutStream::StartOpcode(void);
// public: void XGRAPHICS::OutStream::EndOpcode(void);
// public: void XGRAPHICS::OutStream::StartUnimportantText(void);
// public: void XGRAPHICS::OutStream::EndUnimportantText(void);
// public: void XGRAPHICS::FixSerializationContext::Fix(void);
// void XGRAPHICS::FixSerialization(struct XMicrocodeBuilder *);
// long XGRAPHICS::OutputMicrocodeCommon(unsigned long *, unsigned long, unsigned long *, struct XMicrocodeBuilder *, int);
// long XGRAPHICS::R500DoPixelShader(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *);
// long XGRAPHICS::R500DoVertexShader(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *);
// long XGRAPHICS::R500D3DShaderTokensToMicrocode(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *);
// long XGRAPHICS::DisassembleR500MicrocodeCommon(unsigned long, int, unsigned long, struct _UCODE_R500UCODE_COMMON const *, class XGRAPHICS::OutStream *, void const *, unsigned long, void const **);
// long XGRAPHICS::DisassembleDebuggerHint(struct _UCODE_R500_DEBUGGER_HINT_HEADER const *, class XGRAPHICS::OutStream *);
// long XGRAPHICS::DisassembleR500PSMicrocode(struct _UCODE_R500PSUCODE const *, class XGRAPHICS::OutStream *, void const *, unsigned long, unsigned long);
// long XGRAPHICS::DisassembleR500VSMicrocode(struct _UCODE_R500VSUCODE const *, class XGRAPHICS::OutStream *, void const *, unsigned long, unsigned long);
// long XGRAPHICS::DisassembleR500Microcode(unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long, class XGRAPHICS::OutStream *, unsigned long);
// long XGRAPHICS::ConvertShaderToMicrocodeImp(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *);
// XConvertShaderToMicrocode;
// XGConvertDXTokensToMicrocode;
// long XGRAPHICS::DumpCommonTables(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *);
// long XGRAPHICS::DumpTimingEstimate(void *, enum UCODESHADERTYPE, unsigned long, class XGRAPHICS::OutStream *);
// public: void XGRAPHICS::OutStream::PrintOpcode(char const *);
// void XGRAPHICS::DisassembleProgramControl(class XGRAPHICS::OutStream *, int, int, int, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, bool *);
// long XGRAPHICS::DisassembleR500MicrocodePreamble(unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, class XGRAPHICS::OutStream *);
// long XGRAPHICS::DisassembleR500MicrocodePassPreamble(unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, class XGRAPHICS::OutStream *, unsigned long);
// long XGRAPHICS::DumpDefinitionTable_EnumerateLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *);
// long XGRAPHICS::DumpDefinitionTable(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long);
// long XGRAPHICS::DumpCommonPassTables(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long);
// long XGRAPHICS::DisassemblePass(class XGRAPHICS::OutStream *, unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long);
// long XGRAPHICS::DisassembleMicrocode(unsigned long const *, unsigned long, unsigned long, long (*)(void *, char const *, unsigned long), void *, void const *);
// XDisassembleMicrocodeShader;

//void * XGRAPHICS::MyClientAllocSysMem(void *, unsigned int)
//{
//    mangled_ppc("?MyClientAllocSysMem@XGRAPHICS@@YAPAXPAXI@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::MyClientFreeSysMem(void *, void *)
//{
//    mangled_ppc("?MyClientFreeSysMem@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAX0@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::MyClientAllocVidMem(void *, unsigned int, enum XGRAPHICS::_E_SSM_VIDMEMHEAP, struct XGRAPHICS::_SSM_VIDMEM *)
//{
//    mangled_ppc("?MyClientAllocVidMem@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAXIW4_E_SSM_VIDMEMHEAP@1@PAU_SSM_VIDMEM@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::MyClientFreeVidMem(void *, struct XGRAPHICS::_SSM_VIDMEM *)
//{
//    mangled_ppc("?MyClientFreeVidMem@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAXPAU_SSM_VIDMEM@1@@Z");
//};

//unsigned int XGRAPHICS::MyClientQueryRegistry(void *, char *, unsigned int *)
//{
//    mangled_ppc("?MyClientQueryRegistry@XGRAPHICS@@YAIPAXPADPAI@Z");
//};

//void XGRAPHICS::MyClientDebugString(void *, char *, char *, char *)
//{
//    mangled_ppc("?MyClientDebugString@XGRAPHICS@@YAXPAXPAD11@Z");
//};

//void XGRAPHICS::MyClientAssert(void *)
//{
//    mangled_ppc("?MyClientAssert@XGRAPHICS@@YAXPAX@Z");
//};

//void XGRAPHICS::MyClientErrorMessage(void *, unsigned int, unsigned int, char *)
//{
//    mangled_ppc("?MyClientErrorMessage@XGRAPHICS@@YAXPAXIIPAD@Z");
//};

//unsigned int * __fastcall XGRAPHICS::MyClientGetCmdBuffSpace(void *, unsigned int)
//{
//    mangled_ppc("?MyClientGetCmdBuffSpace@XGRAPHICS@@YIPAIPAXI@Z");
//};

//unsigned int * __fastcall XGRAPHICS::MyClientGetEmptyCmdBuff(void *, unsigned int)
//{
//    mangled_ppc("?MyClientGetEmptyCmdBuff@XGRAPHICS@@YIPAIPAXI@Z");
//};

//unsigned int __fastcall XGRAPHICS::MyClientGetMaxEmptyCmdBuffSize(void *)
//{
//    mangled_ppc("?MyClientGetMaxEmptyCmdBuffSize@XGRAPHICS@@YIIPAX@Z");
//};

//unsigned int __fastcall XGRAPHICS::MyClientUpdateCmdBuffSpace(void *, unsigned int, unsigned __int64*)
//{
//    mangled_ppc("?MyClientUpdateCmdBuffSpace@XGRAPHICS@@YIIPAXIPA_K@Z");
//};

//unsigned int __fastcall XGRAPHICS::MyClientCheckTSRetired(void *, unsigned __int64*, unsigned int)
//{
//    mangled_ppc("?MyClientCheckTSRetired@XGRAPHICS@@YIIPAXPA_KI@Z");
//};

//void __fastcall XGRAPHICS::MyClientConvertToUASValues(void *, void *, void *)
//{
//    mangled_ppc("?MyClientConvertToUASValues@XGRAPHICS@@YIXPAX00@Z");
//};

//long XGRAPHICS::CreateILMgmt(struct XGRAPHICS::_R400ILSTORE *)
//{
//    mangled_ppc("?CreateILMgmt@XGRAPHICS@@YAJPAU_R400ILSTORE@1@@Z");
//};

//bool XGRAPHICS::IsExecOp(unsigned long)
//{
//    mangled_ppc("?IsExecOp@XGRAPHICS@@YA_NK@Z");
//};

//bool XGRAPHICS::IsExecEndOp(unsigned long)
//{
//    mangled_ppc("?IsExecEndOp@XGRAPHICS@@YA_NK@Z");
//};

//void XGRAPHICS::ConvertR500TypeAndIndexToD3DTypeAndIndex(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long &, unsigned long &)
//{
//    mangled_ppc("?ConvertR500TypeAndIndexToD3DTypeAndIndex@XGRAPHICS@@YAXKKKKAAK0@Z");
//};

//unsigned long XGRAPHICS::CalculateCentroidUsageAndIndex(int, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?CalculateCentroidUsageAndIndex@XGRAPHICS@@YAKHKKKK@Z");
//};

//unsigned long XGRAPHICS::UCodeToPrivateDWORD(unsigned long)
//{
//    mangled_ppc("?UCodeToPrivateDWORD@XGRAPHICS@@YAKK@Z");
//};

//unsigned long XGRAPHICS::PrivateToNativeDWORD(unsigned long)
//{
//    mangled_ppc("?PrivateToNativeDWORD@XGRAPHICS@@YAKK@Z");
//};

//unsigned long XGRAPHICS::FindFirstALUInstructionPrivate(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?FindFirstALUInstructionPrivate@XGRAPHICS@@YAKPBKK@Z");
//};

//unsigned long XGRAPHICS::FindFirstALUInstructionUCode(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?FindFirstALUInstructionUCode@XGRAPHICS@@YAKPBKK@Z");
//};

//unsigned long XGRAPHICS::FindFirstALUInstructionNative(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?FindFirstALUInstructionNative@XGRAPHICS@@YAKPBKK@Z");
//};

//void XGRAPHICS::PrivateToNativeR500Microcode(unsigned long *, unsigned long)
//{
//    mangled_ppc("?PrivateToNativeR500Microcode@XGRAPHICS@@YAXPAKK@Z");
//};

//public: void XGRAPHICS::ConstantTableBitVector::Initialize(void)
//{
//    mangled_ppc("?Initialize@ConstantTableBitVector@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::ConstantTableBitVector::SetUsed(unsigned long)
//{
//    mangled_ppc("?SetUsed@ConstantTableBitVector@XGRAPHICS@@QAAXK@Z");
//};

//public: bool XGRAPHICS::ConstantTableBitVector::IsUsed(unsigned long)
//{
//    mangled_ppc("?IsUsed@ConstantTableBitVector@XGRAPHICS@@QAA_NK@Z");
//};

//public: int XGRAPHICS::ConstantTableBitVector::FindHighestUnused(int)
//{
//    mangled_ppc("?FindHighestUnused@ConstantTableBitVector@XGRAPHICS@@QAAHH@Z");
//};

//GPU_GET_FLOW_INSTRUCTIONS
//{
//    mangled_ppc("GPU_GET_FLOW_INSTRUCTIONS");
//};

//GPU_PUT_FLOW_INSTRUCTIONS
//{
//    mangled_ppc("GPU_PUT_FLOW_INSTRUCTIONS");
//};

//public: void XGRAPHICS::ConstantRenumberingTable::RecordConstantDescription(struct _D3DXCONSTANT_DESC *)
//{
//    mangled_ppc("?RecordConstantDescription@ConstantRenumberingTable@XGRAPHICS@@QAAXPAU_D3DXCONSTANT_DESC@@@Z");
//};

//public: void XGRAPHICS::ConstantRenumberingTable::RecordConstant(struct _D3DXCONSTANT_DESC const *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *)
//{
//    mangled_ppc("?RecordConstant@ConstantRenumberingTable@XGRAPHICS@@QAAXPBU_D3DXCONSTANT_DESC@@PBU_D3DXSHADER_CONSTANTTABLE@@PBU_D3DXSHADER_CONSTANTINFO@@PBU_D3DXSHADER_TYPEINFO@@@Z");
//};

//public: void XGRAPHICS::ConstantRenumberingTable::BuildConstantDescription(struct _D3DXCONSTANT_DESC *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *)
//{
//    mangled_ppc("?BuildConstantDescription@ConstantRenumberingTable@XGRAPHICS@@QAAXPAU_D3DXCONSTANT_DESC@@PBU_D3DXSHADER_CONSTANTTABLE@@PBU_D3DXSHADER_CONSTANTINFO@@PBU_D3DXSHADER_TYPEINFO@@@Z");
//};

//public: void XGRAPHICS::ConstantRenumberingTable::RecordConstantTableEntries(struct ID3DXConstantTable *)
//{
//    mangled_ppc("?RecordConstantTableEntries@ConstantRenumberingTable@XGRAPHICS@@QAAXPAUID3DXConstantTable@@@Z");
//};

//public: unsigned long XGRAPHICS::ConstantRenumberingTable::Renumber(unsigned long)
//{
//    mangled_ppc("?Renumber@ConstantRenumberingTable@XGRAPHICS@@QAAKK@Z");
//};

//bool XGRAPHICS::UsingCompilerLiteral(union GPUALU_INSTRUCTION const *)
//{
//    mangled_ppc("?UsingCompilerLiteral@XGRAPHICS@@YA_NPBTGPUALU_INSTRUCTION@@@Z");
//};

//void XGRAPHICS::RenumberCompilerLiteralsVisitor(void *, bool, bool, bool, unsigned long, void *)
//{
//    mangled_ppc("?RenumberCompilerLiteralsVisitor@XGRAPHICS@@YAXPAX_N11K0@Z");
//};

//public: XGRAPHICS::FixSerializationContext::FixSerializationContext(struct XMicrocodeBuilder *)
//{
//    mangled_ppc("??0FixSerializationContext@XGRAPHICS@@QAA@PAUXMicrocodeBuilder@@@Z");
//};

//public: bool XGRAPHICS::FixSerializationContext::ShouldSerialize(bool, bool, bool, union GPUSHADER_INSTRUCTION *)
//{
//    mangled_ppc("?ShouldSerialize@FixSerializationContext@XGRAPHICS@@QAA_N_N00PATGPUSHADER_INSTRUCTION@@@Z");
//};

//void XGRAPHICS::Enter(void)
//{
//    mangled_ppc("?Enter@XGRAPHICS@@YAXXZ");
//};

//void XGRAPHICS::Leave(void)
//{
//    mangled_ppc("?Leave@XGRAPHICS@@YAXXZ");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE __fastcall XGRAPHICS::ThreadSafeSSMPrecompileShader(unsigned int, void *)
//{
//    mangled_ppc("?ThreadSafeSSMPrecompileShader@XGRAPHICS@@YI?AW4_E_SSM_RETURNCODE@1@IPAX@Z");
//};

//long XGRAPHICS::R500ShaderConstantValueCallback(void *, unsigned long, unsigned int, void *, unsigned int)
//{
//    mangled_ppc("?R500ShaderConstantValueCallback@XGRAPHICS@@YAJPAXKI0I@Z");
//};

//long XGRAPHICS::ValidatorOutputCallback_QuickCheck(void *, char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutputCallback_QuickCheck@XGRAPHICS@@YAJPAXPBDK@Z");
//};

//public: XGRAPHICS::R500ValidatorOutputCallbackContext::R500ValidatorOutputCallbackContext(void *, void (*)(void *, int, unsigned long, char const *), int)
//{
//    mangled_ppc("??0R500ValidatorOutputCallbackContext@XGRAPHICS@@QAA@PAXP6AX0HKPBD@ZH@Z");
//};

//public: long XGRAPHICS::R500ValidatorOutputCallbackContext::OutputLineString(char *)
//{
//    mangled_ppc("?OutputLineString@R500ValidatorOutputCallbackContext@XGRAPHICS@@QAAJPAD@Z");
//};

//XPrintf
//{
//    mangled_ppc("XPrintf");
//};

//UcodeDebugPrintf
//{
//    mangled_ppc("UcodeDebugPrintf");
//};

//long XGRAPHICS::GetEnumString(struct XGRAPHICS::EnumStringTableEntry const *, unsigned int, char const **)
//{
//    mangled_ppc("?GetEnumString@XGRAPHICS@@YAJPBUEnumStringTableEntry@1@IPAPBD@Z");
//};

//int XGRAPHICS::DWORDToINT(unsigned long)
//{
//    mangled_ppc("?DWORDToINT@XGRAPHICS@@YAHK@Z");
//};

//float XGRAPHICS::DWORDToFLOAT(unsigned long)
//{
//    mangled_ppc("?DWORDToFLOAT@XGRAPHICS@@YAMK@Z");
//};

//void XGRAPHICS::BuildConstantDescription(struct _D3DXCONSTANT_DESC *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *)
//{
//    mangled_ppc("?BuildConstantDescription@XGRAPHICS@@YAXPAU_D3DXCONSTANT_DESC@@PBU_D3DXSHADER_CONSTANTTABLE@@PBU_D3DXSHADER_CONSTANTINFO@@PBU_D3DXSHADER_TYPEINFO@@@Z");
//};

//unsigned int XGRAPHICS::CountConstantRegisters(struct _D3DXCONSTANT_DESC const *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_TYPEINFO const *)
//{
//    mangled_ppc("?CountConstantRegisters@XGRAPHICS@@YAIPBU_D3DXCONSTANT_DESC@@PBU_D3DXSHADER_CONSTANTTABLE@@PBU_D3DXSHADER_TYPEINFO@@@Z");
//};

//public: BitVector<256>::BitVector<256>(void)
//{
//    mangled_ppc("??0?$BitVector@$0BAA@@@QAA@XZ");
//};

//public: void BitVector<256>::Clear(void)
//{
//    mangled_ppc("?Clear@?$BitVector@$0BAA@@@QAAXXZ");
//};

//public: bool BitVector<256>::IsSet(unsigned long)
//{
//    mangled_ppc("?IsSet@?$BitVector@$0BAA@@@QAA_NK@Z");
//};

//public: void BitVector<256>::Set(unsigned long)
//{
//    mangled_ppc("?Set@?$BitVector@$0BAA@@@QAAXK@Z");
//};

//public: BitVector<32>::BitVector<32>(void)
//{
//    mangled_ppc("??0?$BitVector@$0CA@@@QAA@XZ");
//};

//public: void BitVector<32>::Clear(void)
//{
//    mangled_ppc("?Clear@?$BitVector@$0CA@@@QAAXXZ");
//};

//public: bool BitVector<32>::IsSet(unsigned long)
//{
//    mangled_ppc("?IsSet@?$BitVector@$0CA@@@QAA_NK@Z");
//};

//public: void BitVector<32>::Set(unsigned long)
//{
//    mangled_ppc("?Set@?$BitVector@$0CA@@@QAAXK@Z");
//};

//UCodeGetUCodeHeader
//{
//    mangled_ppc("UCodeGetUCodeHeader");
//};

//NativeGetUCodeHeader
//{
//    mangled_ppc("NativeGetUCodeHeader");
//};

//NativeGetShaderType
//{
//    mangled_ppc("NativeGetShaderType");
//};

//NativeGetTotalShaderSize
//{
//    mangled_ppc("NativeGetTotalShaderSize");
//};

//public: XGRAPHICS::OutStream::OutStream(long (*)(void *, char const *, unsigned long), void *)
//{
//    mangled_ppc("??0OutStream@XGRAPHICS@@QAA@P6AJPAXPBDK@Z0@Z");
//};

//public: void XGRAPHICS::OutStream::SetRTF(int)
//{
//    mangled_ppc("?SetRTF@OutStream@XGRAPHICS@@QAAXH@Z");
//};

//public: static bool XGRAPHICS::OutStream::IsRTFDelimiter(char)
//{
//    mangled_ppc("?IsRTFDelimiter@OutStream@XGRAPHICS@@SA_ND@Z");
//};

//public: long XGRAPHICS::OutStream::GetAccumulatedResult(void)
//{
//    mangled_ppc("?GetAccumulatedResult@OutStream@XGRAPHICS@@QAAJXZ");
//};

//private: long XGRAPHICS::OutStream::AccumulateResult(long)
//{
//    mangled_ppc("?AccumulateResult@OutStream@XGRAPHICS@@AAAJJ@Z");
//};

//unsigned long XGRAPHICS::ATI_D3DSI_GETCOMMENTSIZE(unsigned long)
//{
//    mangled_ppc("?ATI_D3DSI_GETCOMMENTSIZE@XGRAPHICS@@YAKK@Z");
//};

//void AL_Create(struct _ATILIST *, unsigned long)
//{
//    mangled_ppc("?AL_Create@@YAXPAU_ATILIST@@K@Z");
//};

//void AL_Destroy(struct _ATILIST *)
//{
//    mangled_ppc("?AL_Destroy@@YAXPAU_ATILIST@@@Z");
//};

//void XGRAPHICS::AS_SetStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE, unsigned int)
//{
//    mangled_ppc("?AS_SetStateI@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_STATE@1@I@Z");
//};

//void XGRAPHICS::AS_SetArrayStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int, unsigned int)
//{
//    mangled_ppc("?AS_SetArrayStateI@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_ARRAY_STATE@1@II@Z");
//};

//long XGRAPHICS::DeleteILMgmt(struct XGRAPHICS::_R400ILSTORE *)
//{
//    mangled_ppc("?DeleteILMgmt@XGRAPHICS@@YAJPAU_R400ILSTORE@1@@Z");
//};

//void XGRAPHICS::ForEachInstruction(void *, unsigned long, void (*)(void *, bool, bool, bool, unsigned long, void *), void *, bool, bool)
//{
//    mangled_ppc("?ForEachInstruction@XGRAPHICS@@YAXPAXKP6AX0_N11K0@Z011@Z");
//};

//long XGRAPHICS::ProcessStateList(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XMicrocodeBuilder *, union GPU_PROGRAMCONTROL *, union GPU_CONTEXTMISC *, bool)
//{
//    mangled_ppc("?ProcessStateList@XGRAPHICS@@YAJPAU_CS_COMPILED_SHADER@1@PAUXMicrocodeBuilder@@PATGPU_PROGRAMCONTROL@@PATGPU_CONTEXTMISC@@_N@Z");
//};

//public: long XGRAPHICS::ConstantRenumberingTable::Initialize(unsigned long const *, unsigned long, struct ID3DXConstantTable *, struct XGRAPHICS::_CS_COMPILED_SHADER *, bool)
//{
//    mangled_ppc("?Initialize@ConstantRenumberingTable@XGRAPHICS@@QAAJPBKKPAUID3DXConstantTable@@PAU_CS_COMPILED_SHADER@2@_N@Z");
//};

//public: long XGRAPHICS::ConstantRenumberingTable::CreateCompilerConstantDeclarations(unsigned long **, unsigned long *)
//{
//    mangled_ppc("?CreateCompilerConstantDeclarations@ConstantRenumberingTable@XGRAPHICS@@QAAJPAPAKPAK@Z");
//};

//void XGRAPHICS::SetInterpolatorInfo(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XMicrocodeBuilder *, int)
//{
//    mangled_ppc("?SetInterpolatorInfo@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@PAUXMicrocodeBuilder@@H@Z");
//};

//void XGRAPHICS::CopyMicrocodeVisitor(void *, bool, bool, bool, unsigned long, void *)
//{
//    mangled_ppc("?CopyMicrocodeVisitor@XGRAPHICS@@YAXPAX_N11K0@Z");
//};

//void XGRAPHICS::CopyMicrocodeIntoBuilder(unsigned long *, unsigned long, union _UCODE_VSINPUTDECLARATION *, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, struct XMicrocodeBuilder *, struct XGRAPHICS::SamplerDimensionTable *)
//{
//    mangled_ppc("?CopyMicrocodeIntoBuilder@XGRAPHICS@@YAXPAKKPAT_UCODE_VSINPUTDECLARATION@@TGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@PAUXMicrocodeBuilder@@PAUSamplerDimensionTable@1@@Z");
//};

//long XGRAPHICS::RenumberCompilerLiterals(unsigned long const *, unsigned long, unsigned long *, unsigned long, struct ID3DXConstantTable *, struct XMicrocodeBuilder *, struct XGRAPHICS::_CS_COMPILED_SHADER *, int)
//{
//    mangled_ppc("?RenumberCompilerLiterals@XGRAPHICS@@YAJPBKKPAKKPAUID3DXConstantTable@@PAUXMicrocodeBuilder@@PAU_CS_COMPILED_SHADER@1@H@Z");
//};

//long XGRAPHICS::ParseDefsAndDecls(unsigned long const *, unsigned long, int, struct XMicrocodeBuilder *, struct XGRAPHICS::SamplerDimensionTable *)
//{
//    mangled_ppc("?ParseDefsAndDecls@XGRAPHICS@@YAJPBKKHPAUXMicrocodeBuilder@@PAUSamplerDimensionTable@1@@Z");
//};

//long XGRAPHICS::MyBuildMicrocodeCommon(unsigned long const *, unsigned long, struct ID3DXConstantTable *, struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XMicrocodeBuilder **, int, union _UCODE_VSINPUTDECLARATION *, struct _UCODE_DEBUGGER_PARAMETERS *)
//{
//    mangled_ppc("?MyBuildMicrocodeCommon@XGRAPHICS@@YAJPBKKPAUID3DXConstantTable@@PAU_CS_COMPILED_SHADER@1@PAPAUXMicrocodeBuilder@@HPAT_UCODE_VSINPUTDECLARATION@@PAU_UCODE_DEBUGGER_PARAMETERS@@@Z");
//};

//public: void XGRAPHICS::FixSerializationContext::Mark(unsigned long)
//{
//    mangled_ppc("?Mark@FixSerializationContext@XGRAPHICS@@QAAXK@Z");
//};

//void XGRAPHICS::SetTFetchFetchValidOnly(struct XMicrocodeBuilder *)
//{
//    mangled_ppc("?SetTFetchFetchValidOnly@XGRAPHICS@@YAXPAUXMicrocodeBuilder@@@Z");
//};

//void XGRAPHICS::CreateUsageInfoFromShader(unsigned long const *, unsigned long, struct XGRAPHICS::_R400VSFUNC *)
//{
//    mangled_ppc("?CreateUsageInfoFromShader@XGRAPHICS@@YAXPBKKPAU_R400VSFUNC@1@@Z");
//};

//void * XGRAPHICS::MyMalloc(unsigned long)
//{
//    mangled_ppc("?MyMalloc@XGRAPHICS@@YAPAXK@Z");
//};

//void XGRAPHICS::MyFree(void *)
//{
//    mangled_ppc("?MyFree@XGRAPHICS@@YAXPAX@Z");
//};

//public: long XGRAPHICS::R500ValidatorOutputCallbackContext::OutputLine(void)
//{
//    mangled_ppc("?OutputLine@R500ValidatorOutputCallbackContext@XGRAPHICS@@QAAJXZ");
//};

//public: long XGRAPHICS::R500ValidatorOutputCallbackContext::ValidatorOutput(char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutput@R500ValidatorOutputCallbackContext@XGRAPHICS@@QAAJPBDK@Z");
//};

//long XGRAPHICS::ValidatorOutputCallback(void *, char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutputCallback@XGRAPHICS@@YAJPAXPBDK@Z");
//};

//public: long XGRAPHICS::OutStream::Printf(char const *, ...)
//{
//    mangled_ppc("?Printf@OutStream@XGRAPHICS@@QAAJPBDZZ");
//};

//public: long XGRAPHICS::OutStream::Write(char const *, unsigned long)
//{
//    mangled_ppc("?Write@OutStream@XGRAPHICS@@QAAJPBDK@Z");
//};

//public: void XGRAPHICS::FixSerializationContext::Callback(void *, bool, bool, bool, unsigned long)
//{
//    mangled_ppc("?Callback@FixSerializationContext@XGRAPHICS@@QAAXPAX_N11K@Z");
//};

//long XGRAPHICS::OutStreamCallback(void *, char const *, unsigned long)
//{
//    mangled_ppc("?OutStreamCallback@XGRAPHICS@@YAJPAXPBDK@Z");
//};

//long XGRAPHICS::DisassembleR500MicrocodeRaw(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, unsigned long const *, unsigned long, long (*)(void *, unsigned long, unsigned int, void *, unsigned int), void *, unsigned long, class XGRAPHICS::OutStream *)
//{
//    mangled_ppc("?DisassembleR500MicrocodeRaw@XGRAPHICS@@YAJTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@PBKKP6AJPAXKI3I@Z3KPAVOutStream@1@@Z");
//};

//public: long XGRAPHICS::R500ValidatorOutputCallbackContext::Flush(void)
//{
//    mangled_ppc("?Flush@R500ValidatorOutputCallbackContext@XGRAPHICS@@QAAJXZ");
//};

//void XGRAPHICS::PrintFloat(class XGRAPHICS::OutStream *, float)
//{
//    mangled_ppc("?PrintFloat@XGRAPHICS@@YAXPAVOutStream@1@M@Z");
//};

//void XGRAPHICS::PrintConstantDescription(class XGRAPHICS::OutStream *, char const *, struct _D3DXCONSTANT_DESC *)
//{
//    mangled_ppc("?PrintConstantDescription@XGRAPHICS@@YAXPAVOutStream@1@PBDPAU_D3DXCONSTANT_DESC@@@Z");
//};

//void XGRAPHICS::PrintConstant(class XGRAPHICS::OutStream *, char const *, char const *, char const *, struct _D3DXCONSTANT_DESC const *, struct _D3DXSHADER_CONSTANTTABLE const *, struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_TYPEINFO const *)
//{
//    mangled_ppc("?PrintConstant@XGRAPHICS@@YAXPAVOutStream@1@PBD11PBU_D3DXCONSTANT_DESC@@PBU_D3DXSHADER_CONSTANTTABLE@@PBU_D3DXSHADER_CONSTANTINFO@@PBU_D3DXSHADER_TYPEINFO@@@Z");
//};

//long XGRAPHICS::DumpConstantTable(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long)
//{
//    mangled_ppc("?DumpConstantTable@XGRAPHICS@@YAJPAVOutStream@1@W4UCODESHADERTYPE@@PBU_UCODE_HEADER@@K@Z");
//};

//public: void XGRAPHICS::OutStream::PrintRTF(char const *)
//{
//    mangled_ppc("?PrintRTF@OutStream@XGRAPHICS@@QAAXPBD@Z");
//};

//public: void XGRAPHICS::OutStream::PrintLineBreak(void)
//{
//    mangled_ppc("?PrintLineBreak@OutStream@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::OutStream::StartOpcode(void)
//{
//    mangled_ppc("?StartOpcode@OutStream@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::OutStream::EndOpcode(void)
//{
//    mangled_ppc("?EndOpcode@OutStream@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::OutStream::StartUnimportantText(void)
//{
//    mangled_ppc("?StartUnimportantText@OutStream@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::OutStream::EndUnimportantText(void)
//{
//    mangled_ppc("?EndUnimportantText@OutStream@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::FixSerializationContext::Fix(void)
//{
//    mangled_ppc("?Fix@FixSerializationContext@XGRAPHICS@@QAAXXZ");
//};

//void XGRAPHICS::FixSerialization(struct XMicrocodeBuilder *)
//{
//    mangled_ppc("?FixSerialization@XGRAPHICS@@YAXPAUXMicrocodeBuilder@@@Z");
//};

//long XGRAPHICS::OutputMicrocodeCommon(unsigned long *, unsigned long, unsigned long *, struct XMicrocodeBuilder *, int)
//{
//    mangled_ppc("?OutputMicrocodeCommon@XGRAPHICS@@YAJPAKK0PAUXMicrocodeBuilder@@H@Z");
//};

//long XGRAPHICS::R500DoPixelShader(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *)
//{
//    mangled_ppc("?R500DoPixelShader@XGRAPHICS@@YAJPBKKPAKK1KPAXP6AX2HKPBD@ZPAUID3DXConstantTable@@PAU_UCODE_DEBUGGER_PARAMETERS@@@Z");
//};

//long XGRAPHICS::R500DoVertexShader(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *)
//{
//    mangled_ppc("?R500DoVertexShader@XGRAPHICS@@YAJPBKKPAKK1KPAXP6AX2HKPBD@ZPAUID3DXConstantTable@@PAU_UCODE_DEBUGGER_PARAMETERS@@@Z");
//};

//long XGRAPHICS::R500D3DShaderTokensToMicrocode(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *)
//{
//    mangled_ppc("?R500D3DShaderTokensToMicrocode@XGRAPHICS@@YAJPBKKPAKK1KPAXP6AX2HKPBD@ZPAUID3DXConstantTable@@PAU_UCODE_DEBUGGER_PARAMETERS@@@Z");
//};

//long XGRAPHICS::DisassembleR500MicrocodeCommon(unsigned long, int, unsigned long, struct _UCODE_R500UCODE_COMMON const *, class XGRAPHICS::OutStream *, void const *, unsigned long, void const **)
//{
//    mangled_ppc("?DisassembleR500MicrocodeCommon@XGRAPHICS@@YAJKHKPBU_UCODE_R500UCODE_COMMON@@PAVOutStream@1@PBXKPAPBX@Z");
//};

//long XGRAPHICS::DisassembleDebuggerHint(struct _UCODE_R500_DEBUGGER_HINT_HEADER const *, class XGRAPHICS::OutStream *)
//{
//    mangled_ppc("?DisassembleDebuggerHint@XGRAPHICS@@YAJPBU_UCODE_R500_DEBUGGER_HINT_HEADER@@PAVOutStream@1@@Z");
//};

//long XGRAPHICS::DisassembleR500PSMicrocode(struct _UCODE_R500PSUCODE const *, class XGRAPHICS::OutStream *, void const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?DisassembleR500PSMicrocode@XGRAPHICS@@YAJPBU_UCODE_R500PSUCODE@@PAVOutStream@1@PBXKK@Z");
//};

//long XGRAPHICS::DisassembleR500VSMicrocode(struct _UCODE_R500VSUCODE const *, class XGRAPHICS::OutStream *, void const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?DisassembleR500VSMicrocode@XGRAPHICS@@YAJPBU_UCODE_R500VSUCODE@@PAVOutStream@1@PBXKK@Z");
//};

//long XGRAPHICS::DisassembleR500Microcode(unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long, class XGRAPHICS::OutStream *, unsigned long)
//{
//    mangled_ppc("?DisassembleR500Microcode@XGRAPHICS@@YAJKW4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPBXKPAVOutStream@1@K@Z");
//};

//long XGRAPHICS::ConvertShaderToMicrocodeImp(unsigned long const *, unsigned long, unsigned long *, unsigned long, unsigned long *, unsigned long, void *, void (*)(void *, int, unsigned long, char const *), struct ID3DXConstantTable *, struct _UCODE_DEBUGGER_PARAMETERS *)
//{
//    mangled_ppc("?ConvertShaderToMicrocodeImp@XGRAPHICS@@YAJPBKKPAKK1KPAXP6AX2HKPBD@ZPAUID3DXConstantTable@@PAU_UCODE_DEBUGGER_PARAMETERS@@@Z");
//};

//XConvertShaderToMicrocode
//{
//    mangled_ppc("XConvertShaderToMicrocode");
//};

//XGConvertDXTokensToMicrocode
//{
//    mangled_ppc("XGConvertDXTokensToMicrocode");
//};

//long XGRAPHICS::DumpCommonTables(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *)
//{
//    mangled_ppc("?DumpCommonTables@XGRAPHICS@@YAJPAVOutStream@1@W4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPBX@Z");
//};

//long XGRAPHICS::DumpTimingEstimate(void *, enum UCODESHADERTYPE, unsigned long, class XGRAPHICS::OutStream *)
//{
//    mangled_ppc("?DumpTimingEstimate@XGRAPHICS@@YAJPAXW4UCODESHADERTYPE@@KPAVOutStream@1@@Z");
//};

//public: void XGRAPHICS::OutStream::PrintOpcode(char const *)
//{
//    mangled_ppc("?PrintOpcode@OutStream@XGRAPHICS@@QAAXPBD@Z");
//};

//void XGRAPHICS::DisassembleProgramControl(class XGRAPHICS::OutStream *, int, int, int, union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, bool *)
//{
//    mangled_ppc("?DisassembleProgramControl@XGRAPHICS@@YAXPAVOutStream@1@HHHTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@PA_N@Z");
//};

//long XGRAPHICS::DisassembleR500MicrocodePreamble(unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, class XGRAPHICS::OutStream *)
//{
//    mangled_ppc("?DisassembleR500MicrocodePreamble@XGRAPHICS@@YAJKW4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPAVOutStream@1@@Z");
//};

//long XGRAPHICS::DisassembleR500MicrocodePassPreamble(unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, class XGRAPHICS::OutStream *, unsigned long)
//{
//    mangled_ppc("?DisassembleR500MicrocodePassPreamble@XGRAPHICS@@YAJKW4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPAVOutStream@1@K@Z");
//};

//long XGRAPHICS::DumpDefinitionTable_EnumerateLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?DumpDefinitionTable_EnumerateLiteralsCallback@XGRAPHICS@@YAJPAXKKKPBX@Z");
//};

//long XGRAPHICS::DumpDefinitionTable(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?DumpDefinitionTable@XGRAPHICS@@YAJPAVOutStream@1@W4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPBXK@Z");
//};

//long XGRAPHICS::DumpCommonPassTables(class XGRAPHICS::OutStream *, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?DumpCommonPassTables@XGRAPHICS@@YAJPAVOutStream@1@W4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPBXK@Z");
//};

//long XGRAPHICS::DisassemblePass(class XGRAPHICS::OutStream *, unsigned long, enum UCODESHADERTYPE, struct _UCODE_HEADER const *, unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?DisassemblePass@XGRAPHICS@@YAJPAVOutStream@1@KW4UCODESHADERTYPE@@PBU_UCODE_HEADER@@KPBXK@Z");
//};

//long XGRAPHICS::DisassembleMicrocode(unsigned long const *, unsigned long, unsigned long, long (*)(void *, char const *, unsigned long), void *, void const *)
//{
//    mangled_ppc("?DisassembleMicrocode@XGRAPHICS@@YAJPBKKKP6AJPAXPBDK@Z1PBX@Z");
//};

//XDisassembleMicrocodeShader
//{
//    mangled_ppc("XDisassembleMicrocodeShader");
//};

