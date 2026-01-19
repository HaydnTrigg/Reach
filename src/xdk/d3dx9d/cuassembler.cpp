/* ---------- headers */

#include "xdk\d3dx9d\cuassembler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct D3DXShader::_UCODE_OPCODE const *const const D3DXShader::g_Opcode; // "?g_Opcode@D3DXShader@@3QBU_UCODE_OPCODE@1@B"
// struct D3DXShader::_SHADER_REGISTER const *const const D3DXShader::g_Register; // "?g_Register@D3DXShader@@3QBU_SHADER_REGISTER@1@B"
// struct D3DXShader::CONFIG_FIELD_ENTRY *D3DXShader::g_ExportModeTable; // "?g_ExportModeTable@D3DXShader@@3PAUCONFIG_FIELD_ENTRY@1@A"
// struct D3DXShader::CONFIG_REGISTER_FIELD *D3DXShader::g_ConfigRegister; // "?g_ConfigRegister@D3DXShader@@3PAUCONFIG_REGISTER_FIELD@1@A"
// struct D3DXShader::EnumStringTableEntry *D3DXShader::D3DXREGISTER_SET_EnumTable; // "?D3DXREGISTER_SET_EnumTable@D3DXShader@@3PAUEnumStringTableEntry@1@A"
// struct D3DXShader::EnumStringTableEntry *D3DXShader::D3DXPARAMETER_CLASS_EnumTable; // "?D3DXPARAMETER_CLASS_EnumTable@D3DXShader@@3PAUEnumStringTableEntry@1@A"
// struct D3DXShader::EnumStringTableEntry *D3DXShader::D3DXPARAMETER_TYPE_EnumTable; // "?D3DXPARAMETER_TYPE_EnumTable@D3DXShader@@3PAUEnumStringTableEntry@1@A"
// struct D3DXShader::FIELD_ENTRY *D3DXShader::g_GPUVertexFormat; // "?g_GPUVertexFormat@D3DXShader@@3PAUFIELD_ENTRY@1@A"
// struct D3DXShader::FIELD_ENTRY *D3DXShader::g_GPUNumFormat; // "?g_GPUNumFormat@D3DXShader@@3PAUFIELD_ENTRY@1@A"
// struct D3DXShader::FETCH_FIELD *D3DXShader::g_VFetchField; // "?g_VFetchField@D3DXShader@@3PAUFETCH_FIELD@1@A"
// struct D3DXShader::FIELD_ENTRY *D3DXShader::g_GPUMinMagFilter; // "?g_GPUMinMagFilter@D3DXShader@@3PAUFIELD_ENTRY@1@A"
// struct D3DXShader::FIELD_ENTRY *D3DXShader::g_GPUMipFilter; // "?g_GPUMipFilter@D3DXShader@@3PAUFIELD_ENTRY@1@A"
// struct D3DXShader::FIELD_ENTRY *D3DXShader::g_GPUAnisoFilter; // "?g_GPUAnisoFilter@D3DXShader@@3PAUFIELD_ENTRY@1@A"
// struct D3DXShader::TFETCH_FIELD *D3DXShader::g_TFetchField; // "?g_TFetchField@D3DXShader@@3PAUTFETCH_FIELD@1@A"

// GPU_SET_SCALAROP_SOURCE2_REG;
// long D3DXShader::ValidatorOutputCallback_QuickCheck(void *, char const *, unsigned long);
// public: D3DXShader::ValidatorOutputCallbackContext::ValidatorOutputCallbackContext(class D3DXShader::CTErrors *, struct D3DXShader::D3DXTOKEN *, int);
// public: long D3DXShader::ValidatorOutputCallbackContext::OutputLineString(char *);
// public: void D3DXShader::CUAssembler::SetFindDeclCallback(void *, long (*)(void *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **));
// protected: struct XShaderPDBBuilder * D3DXShader::CUAssembler::GetPDBBuilder(void);
// bool D3DXShader::IsFancyMaskRegister(char const *);
// long D3DXShader::D3DX9GetToken(class D3DXShader::CPreProcessor *, struct D3DXShader::D3DXTOKEN *);
// int D3DXShader::ParseSemantic(struct D3DXShader::D3DXTOKEN *, unsigned long &, unsigned int &);
// int D3DXShader::IsSemantic(struct D3DXShader::D3DXTOKEN *);
// protected: class D3DXShader::CNode * D3DXShader::CUAssembler::NonNull(class D3DXShader::CNode *);
// bool D3DXShader::MatchOpcodeInToken(char const *, char const *);
// unsigned long D3DXShader::INTToDWORD(int);
// unsigned long D3DXShader::FLOATToDWORD(float);
// unsigned int D3DXShader::AddStructMemberInfoNoDuplicates(struct _D3DXSHADER_STRUCTMEMBERINFO const *, unsigned int, struct _D3DXSHADER_STRUCTMEMBERINFO *, unsigned int *);
// unsigned int D3DXShader::AddTypeInfoNoDuplicates(struct _D3DXSHADER_TYPEINFO const *, struct _D3DXSHADER_TYPEINFO *, unsigned int *);
// protected: unsigned long D3DXShader::CUAssembler::DecodeMask(struct D3DXShader::D3DXTOKEN *);
// protected: unsigned long D3DXShader::CUAssembler::InterpretAsALUMask(unsigned long);
// protected: unsigned long D3DXShader::CUAssembler::DecodeSwizzle(struct D3DXShader::D3DXTOKEN *);
// int D3DXShader::DecodePredicate(class D3DXShader::CNodeUAsmInstruction *);
// int D3DXShader::IsValidScalarSwizzleEx(unsigned long, class D3DXShader::CNodeUAsmInstruction *, int);
// unsigned long D3DXShader::ConvertSwizzleToScalarForm(class D3DXShader::CNodeUAsmInstruction *, int);
// protected: static enum D3DXShader::_D3DXTOKEN_TYPE D3DXShader::CUAssembler::GetCanonicalNumericalType(enum D3DXShader::_D3DXTOKEN_TYPE);
// int D3DXShader::IsUsed(unsigned long, unsigned long, unsigned long);
// public: void D3DXShader::CUAssembler::MicrocodeErrorCallback(int, unsigned long, char const *);
// void D3DXShader::MicrocodeReoptimizerErrorCallback(void *, int, unsigned long, char const *);
// public: long D3DXShader::CUAssembler::GetParseTree(class D3DXShader::CNode **);
// protected: class D3DXShader::CNodeUAsmLabel * D3DXShader::CUAssembler::FindLabel(unsigned long);
// public: D3DXShader::CUAssembler::BitVector<256>::BitVector<256>(void);
// public: void D3DXShader::CUAssembler::BitVector<256>::Clear(void);
// public: D3DXShader::CUAssembler::BitVector<32>::BitVector<32>(void);
// public: void D3DXShader::CUAssembler::BitVector<32>::Clear(void);
// public: D3DXShader::CNodeUAsmLabel::CNodeUAsmLabel(void);
// public: virtual D3DXShader::CNodeUAsmLabel::~CNodeUAsmLabel(void);
// merged_83BBC350;
// public: unsigned long XMicrocodeBuilder::Release(void);
// public: void XMicrocodeBuilder::Initialize(unsigned long);
// public: void XMicrocodeBuilder::SetPDBHint(struct XShaderPDBHint const *);
// public: void XMicrocodeBuilder::SetPDBBuilder(struct IShaderPDBBuilder *);
// public: void XMicrocodeBuilder::AddDebuggerHint(unsigned long, char const *);
// public: void XMicrocodeBuilder::SetConstantTable(void const *, unsigned long);
// public: void XMicrocodeBuilder::StartPass(unsigned long);
// public: void XMicrocodeBuilder::EndPass(void);
// public: void XMicrocodeBuilder::SetProgramControl(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC);
// public: void XMicrocodeBuilder::DefineBooleanConstant(unsigned long, int);
// public: void XMicrocodeBuilder::DefineIntegerConstant(unsigned long, int *);
// public: void XMicrocodeBuilder::DefineFloatConstant(unsigned long, float *);
// public: void XMicrocodeBuilder::DeclareIndexSemantic(unsigned long, unsigned long, unsigned long);
// public: void XMicrocodeBuilder::DeclareInterpolatorSemantic(unsigned long, unsigned long, unsigned long);
// public: unsigned long XMicrocodeBuilder::AddTFetch(union GPUTEXTURE_FETCH_INSTRUCTION *);
// public: unsigned long XMicrocodeBuilder::AddVFetch(union GPUVERTEX_FETCH_INSTRUCTION *, int);
// public: unsigned long XMicrocodeBuilder::AddVFetchWithSemantic(union GPUVERTEX_FETCH_INSTRUCTION *, unsigned long, int);
// public: unsigned long XMicrocodeBuilder::AddALU(union GPUALU_INSTRUCTION *);
// public: unsigned long XMicrocodeBuilder::AddFlow(union GPUFLOW_INSTRUCTION *);
// public: void XMicrocodeBuilder::SetSerialize(unsigned long, int);
// public: unsigned long XMicrocodeBuilder::GetNextFlowAddress(void);
// public: unsigned long XMicrocodeBuilder::GetNextALUAddress(void);
// public: union GPUFLOW_INSTRUCTION * XMicrocodeBuilder::GetFlow(unsigned long);
// public: union GPUSHADER_INSTRUCTION * XMicrocodeBuilder::GetALU(unsigned long, int *);
// public: void XMicrocodeBuilder::Finish(void);
// public: unsigned long XMicrocodeBuilder::GetMicrocodeSize(void);
// public: long XMicrocodeBuilder::GetMicrocode(void *, unsigned long, unsigned long *);
// public: unsigned long XShaderPDBBuilder::AddRef(void);
// public: void XShaderPDBBuilder::BeginPass(int);
// public: void XShaderPDBBuilder::EndPass(unsigned long);
// public: void XShaderPDBBuilder::BeginShader(char const *, unsigned long);
// public: void XShaderPDBBuilder::AddSourceMapping(int, unsigned long, char const *, unsigned long, unsigned long, int);
// public: void XShaderPDBBuilder::AddConstantTable(struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long);
// public: void XShaderPDBBuilder::Finish(unsigned long);
// public: struct IShaderPDBBuilder * XShaderPDBBuilder::PromoteToIShaderPDBBuilder(void);
// public: static void * D3DXShader::CUAssembler::operator new(unsigned int);
// public: static void D3DXShader::CUAssembler::operator delete(void *);
// protected: bool D3DXShader::CUAssembler::IsPixelShader(void);
// protected: bool D3DXShader::CUAssembler::IsVertexShader(void);
// public: long D3DXShader::ValidatorOutputCallbackContext::OutputLine(void);
// public: long D3DXShader::ValidatorOutputCallbackContext::ValidatorOutput(char const *, unsigned long);
// long D3DXShader::ValidatorOutputCallback(void *, char const *, unsigned long);
// public: D3DXShader::CUAssembler::CUAssembler(void);
// long D3DXShader::GetEnumValue(struct D3DXShader::EnumStringTableEntry const *, char const *, unsigned int *);
// int D3DXShader::IsValidScalarSwizzle(unsigned long, class D3DXShader::CNodeUAsmInstruction *, int);
// protected: static long D3DXShader::CUAssembler::GetValueAsInt(struct D3DXShader::D3DXTOKEN *, int *, int, int);
// protected: static long D3DXShader::CUAssembler::GetValueAsBool(struct D3DXShader::D3DXTOKEN *, unsigned long *);
// public: static bool D3DXShader::CUAssembler::HandleVFetchOptions(class D3DXShader::CNodeUAsmInstruction *, union GPUVERTEX_FETCH_INSTRUCTION *, unsigned long *, int *, bool *, void (*)(void *, char const *, ...), void *);
// public: static void D3DXShader::CUAssembler::HandleTFetchOptions(class D3DXShader::CNodeUAsmInstruction *, union GPUTEXTURE_FETCH_INSTRUCTION *, bool *, void (*)(void *, char const *, ...), void *);
// public: void D3DXShader::CUAssembler::InitializePass(void);
// protected: class D3DXShader::CNodeUAsmLabel * D3DXShader::CUAssembler::CreateLabel(unsigned long, unsigned long);
// protected: int D3DXShader::CUAssembler::IsCustomInterpolatorOrder(void);
// public: bool D3DXShader::CUAssembler::BitVector<256>::IsSet(unsigned long);
// public: void D3DXShader::CUAssembler::BitVector<256>::Set(unsigned long);
// public: bool D3DXShader::CUAssembler::BitVector<32>::IsSet(unsigned long);
// public: void D3DXShader::CUAssembler::BitVector<32>::Set(unsigned long);
// void RELEASE<struct XShaderPDBBuilder>(struct XShaderPDBBuilder *&);
// void RELEASE<struct XMicrocodeBuilder>(struct XMicrocodeBuilder *&);
// public: long D3DXShader::ValidatorOutputCallbackContext::Flush(void);
// public: D3DXShader::CUAssembler::~CUAssembler(void);
// protected: void D3DXShader::CUAssembler::VError(char const *, char *);
// unsigned int D3DXShader::AddStringNoDuplicates(char const *, char *, unsigned int, unsigned int *);
// void D3DXShader::SplitName(char const *, char *, unsigned int, char *, unsigned int, enum D3DXShader::DEFCONST_PARSE_TYPE *, unsigned int *);
// protected: int D3DXShader::CUAssembler::AddConstant(struct _D3DXCONSTANT_DESC *, char const *, struct D3DXShader::DEFCONST_DESC *);
// unsigned int D3DXShader::AddTypeInfo(struct D3DXShader::DEFCONST_DESC const *, struct _D3DXSHADER_TYPEINFO *, unsigned int *, struct _D3DXSHADER_STRUCTMEMBERINFO *, unsigned int *, char *, unsigned int, unsigned int *);
// public: static void D3DXShader::CUAssembler::Static_Error(void *, char const *, ...);
// public: void * D3DXShader::CUAssembler::`scalar deleting destructor'(unsigned int);
// protected: void D3DXShader::CUAssembler::Error(char const *, ...);
// protected: static void D3DXShader::CUAssembler::ErrorCallback(void *, char const *, ...);
// protected: int D3DXShader::CUAssembler::DecodeOpcode(struct D3DXShader::D3DXTOKEN *);
// protected: int D3DXShader::CUAssembler::UpdateRootConstants(struct D3DXShader::DEFCONST_DESC *);
// protected: int D3DXShader::CUAssembler::DecodeDefconst(struct _D3DXCONSTANT_DESC *, char *, unsigned int);
// protected: int D3DXShader::CUAssembler::DecodeConstantTable(struct D3DXShader::D3DXTOKEN *);
// protected: class D3DXShader::CNode * D3DXShader::CUAssembler::DecodeRegister(struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNodeUAsmInstruction * D3DXShader::CUAssembler::MergeInstructions(class D3DXShader::CNodeUAsmInstruction *, class D3DXShader::CNodeUAsmInstruction *);
// protected: long D3DXShader::CUAssembler::HandleAlloc(union GPUFLOW_ALLOC &, class D3DXShader::CNodeUAsmInstruction *);
// protected: struct D3DXShader::D3DXTOKEN * D3DXShader::CUAssembler::GetOptionValue(class D3DXShader::CNodeUAsmInstruction *, char const *, int);
// protected: int D3DXShader::CUAssembler::GetYieldValue(class D3DXShader::CNodeUAsmInstruction *);
// protected: long D3DXShader::CUAssembler::InitCheck(char const *);
// protected: void D3DXShader::CUAssembler::DoSrcReg(union GPUALU_INSTRUCTION &, unsigned long, class D3DXShader::CNodeUAsmRegister *);
// protected: void D3DXShader::CUAssembler::DoDest(union GPUALU_INSTRUCTION &, class D3DXShader::CNodeUAsmInstruction *);
// protected: int D3DXShader::CUAssembler::DetectBias(class D3DXShader::CNodeUAsmRegister *, char const *);
// protected: void D3DXShader::CUAssembler::DoFetchSrcDest(union GPUTEXTURE_FETCH_INSTRUCTION *, class D3DXShader::CNodeUAsmInstruction *, unsigned long);
// protected: void D3DXShader::CUAssembler::CheckDeclarations(void);
// protected: int D3DXShader::CUAssembler::Token(void);
// protected: long D3DXShader::CUAssembler::HandleConfig(class D3DXShader::CNodeUAsmInstruction *);
// public: static int D3DXShader::CUAssembler::Static_Token(void *);
// protected: struct XMicrocodeBuilder * D3DXShader::CUAssembler::GetBuilder(int);
// protected: struct XMicrocodeBuilder * D3DXShader::CUAssembler::GetBuilder(void);
// protected: long D3DXShader::CUAssembler::HandleNA(class D3DXShader::CNodeUAsmInstruction *);
// protected: long D3DXShader::CUAssembler::HandleALU(class D3DXShader::CNodeUAsmInstruction *);
// protected: long D3DXShader::CUAssembler::HandleVFetch(class D3DXShader::CNodeUAsmInstruction *);
// protected: long D3DXShader::CUAssembler::HandleTFetch(class D3DXShader::CNodeUAsmInstruction *);
// protected: void D3DXShader::CUAssembler::RecordLabelUse(class D3DXShader::CNodeUAsmInstruction *, unsigned long);
// protected: void D3DXShader::CUAssembler::FixupLabels(void);
// protected: void D3DXShader::CUAssembler::CalculateExportCount(void);
// protected: long D3DXShader::CUAssembler::HandleFlow(class D3DXShader::CNodeUAsmInstruction *);
// public: long D3DXShader::CUAssembler::CalculateProgramControl(void);
// public: long D3DXShader::CUAssembler::GetShaderCode(struct ID3DXBuffer **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// protected: long D3DXShader::CUAssembler::HandleZPass(class D3DXShader::CNodeUAsmInstruction *);
// protected: long D3DXShader::CUAssembler::EmitInstruction(class D3DXShader::CNode *);
// protected: void D3DXShader::CUAssembler::Production(unsigned int, unsigned int);
// public: static void D3DXShader::CUAssembler::Static_Production(void *, unsigned int, unsigned int);
// public: int D3DXShader::CUAssemblerYaccStruct::d3dxuasm_parse(void);
// public: long D3DXShader::CUAssembler::Assemble(class D3DXShader::CPreProcessor *, unsigned long, unsigned long, class D3DXShader::CTErrors *, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// long D3DXShader::XAssembleMicrocode(class D3DXShader::CPreProcessor *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CTErrors *, struct ID3DXBuffer **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// long D3DXShader::XAssembleMicrocodeBlock(class D3DXShader::CPreProcessor *, unsigned long, class D3DXShader::CNode **, void *, long (*)(void *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **));

//GPU_SET_SCALAROP_SOURCE2_REG
//{
//    mangled_ppc("GPU_SET_SCALAROP_SOURCE2_REG");
//};

//long D3DXShader::ValidatorOutputCallback_QuickCheck(void *, char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutputCallback_QuickCheck@D3DXShader@@YAJPAXPBDK@Z");
//};

//public: D3DXShader::ValidatorOutputCallbackContext::ValidatorOutputCallbackContext(class D3DXShader::CTErrors *, struct D3DXShader::D3DXTOKEN *, int)
//{
//    mangled_ppc("??0ValidatorOutputCallbackContext@D3DXShader@@QAA@PAVCTErrors@1@PAUD3DXTOKEN@1@H@Z");
//};

//public: long D3DXShader::ValidatorOutputCallbackContext::OutputLineString(char *)
//{
//    mangled_ppc("?OutputLineString@ValidatorOutputCallbackContext@D3DXShader@@QAAJPAD@Z");
//};

//public: void D3DXShader::CUAssembler::SetFindDeclCallback(void *, long (*)(void *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **))
//{
//    mangled_ppc("?SetFindDeclCallback@CUAssembler@D3DXShader@@QAAXPAXP6AJ0PAUD3DXTOKEN@2@KPAPAVCNode@2@@Z@Z");
//};

//protected: struct XShaderPDBBuilder * D3DXShader::CUAssembler::GetPDBBuilder(void)
//{
//    mangled_ppc("?GetPDBBuilder@CUAssembler@D3DXShader@@IAAPAUXShaderPDBBuilder@@XZ");
//};

//bool D3DXShader::IsFancyMaskRegister(char const *)
//{
//    mangled_ppc("?IsFancyMaskRegister@D3DXShader@@YA_NPBD@Z");
//};

//long D3DXShader::D3DX9GetToken(class D3DXShader::CPreProcessor *, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?D3DX9GetToken@D3DXShader@@YAJPAVCPreProcessor@1@PAUD3DXTOKEN@1@@Z");
//};

//int D3DXShader::ParseSemantic(struct D3DXShader::D3DXTOKEN *, unsigned long &, unsigned int &)
//{
//    mangled_ppc("?ParseSemantic@D3DXShader@@YAHPAUD3DXTOKEN@1@AAKAAI@Z");
//};

//int D3DXShader::IsSemantic(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?IsSemantic@D3DXShader@@YAHPAUD3DXTOKEN@1@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CUAssembler::NonNull(class D3DXShader::CNode *)
//{
//    mangled_ppc("?NonNull@CUAssembler@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//bool D3DXShader::MatchOpcodeInToken(char const *, char const *)
//{
//    mangled_ppc("?MatchOpcodeInToken@D3DXShader@@YA_NPBD0@Z");
//};

//unsigned long D3DXShader::INTToDWORD(int)
//{
//    mangled_ppc("?INTToDWORD@D3DXShader@@YAKH@Z");
//};

//unsigned long D3DXShader::FLOATToDWORD(float)
//{
//    mangled_ppc("?FLOATToDWORD@D3DXShader@@YAKM@Z");
//};

//unsigned int D3DXShader::AddStructMemberInfoNoDuplicates(struct _D3DXSHADER_STRUCTMEMBERINFO const *, unsigned int, struct _D3DXSHADER_STRUCTMEMBERINFO *, unsigned int *)
//{
//    mangled_ppc("?AddStructMemberInfoNoDuplicates@D3DXShader@@YAIPBU_D3DXSHADER_STRUCTMEMBERINFO@@IPAU2@PAI@Z");
//};

//unsigned int D3DXShader::AddTypeInfoNoDuplicates(struct _D3DXSHADER_TYPEINFO const *, struct _D3DXSHADER_TYPEINFO *, unsigned int *)
//{
//    mangled_ppc("?AddTypeInfoNoDuplicates@D3DXShader@@YAIPBU_D3DXSHADER_TYPEINFO@@PAU2@PAI@Z");
//};

//protected: unsigned long D3DXShader::CUAssembler::DecodeMask(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?DecodeMask@CUAssembler@D3DXShader@@IAAKPAUD3DXTOKEN@2@@Z");
//};

//protected: unsigned long D3DXShader::CUAssembler::InterpretAsALUMask(unsigned long)
//{
//    mangled_ppc("?InterpretAsALUMask@CUAssembler@D3DXShader@@IAAKK@Z");
//};

//protected: unsigned long D3DXShader::CUAssembler::DecodeSwizzle(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?DecodeSwizzle@CUAssembler@D3DXShader@@IAAKPAUD3DXTOKEN@2@@Z");
//};

//int D3DXShader::DecodePredicate(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?DecodePredicate@D3DXShader@@YAHPAVCNodeUAsmInstruction@1@@Z");
//};

//int D3DXShader::IsValidScalarSwizzleEx(unsigned long, class D3DXShader::CNodeUAsmInstruction *, int)
//{
//    mangled_ppc("?IsValidScalarSwizzleEx@D3DXShader@@YAHKPAVCNodeUAsmInstruction@1@H@Z");
//};

//unsigned long D3DXShader::ConvertSwizzleToScalarForm(class D3DXShader::CNodeUAsmInstruction *, int)
//{
//    mangled_ppc("?ConvertSwizzleToScalarForm@D3DXShader@@YAKPAVCNodeUAsmInstruction@1@H@Z");
//};

//protected: static enum D3DXShader::_D3DXTOKEN_TYPE D3DXShader::CUAssembler::GetCanonicalNumericalType(enum D3DXShader::_D3DXTOKEN_TYPE)
//{
//    mangled_ppc("?GetCanonicalNumericalType@CUAssembler@D3DXShader@@KA?AW4_D3DXTOKEN_TYPE@2@W432@@Z");
//};

//int D3DXShader::IsUsed(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?IsUsed@D3DXShader@@YAHKKK@Z");
//};

//public: void D3DXShader::CUAssembler::MicrocodeErrorCallback(int, unsigned long, char const *)
//{
//    mangled_ppc("?MicrocodeErrorCallback@CUAssembler@D3DXShader@@QAAXHKPBD@Z");
//};

//void D3DXShader::MicrocodeReoptimizerErrorCallback(void *, int, unsigned long, char const *)
//{
//    mangled_ppc("?MicrocodeReoptimizerErrorCallback@D3DXShader@@YAXPAXHKPBD@Z");
//};

//public: long D3DXShader::CUAssembler::GetParseTree(class D3DXShader::CNode **)
//{
//    mangled_ppc("?GetParseTree@CUAssembler@D3DXShader@@QAAJPAPAVCNode@2@@Z");
//};

//protected: class D3DXShader::CNodeUAsmLabel * D3DXShader::CUAssembler::FindLabel(unsigned long)
//{
//    mangled_ppc("?FindLabel@CUAssembler@D3DXShader@@IAAPAVCNodeUAsmLabel@2@K@Z");
//};

//public: D3DXShader::CUAssembler::BitVector<256>::BitVector<256>(void)
//{
//    mangled_ppc("??0?$BitVector@$0BAA@@CUAssembler@D3DXShader@@QAA@XZ");
//};

//public: void D3DXShader::CUAssembler::BitVector<256>::Clear(void)
//{
//    mangled_ppc("?Clear@?$BitVector@$0BAA@@CUAssembler@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::CUAssembler::BitVector<32>::BitVector<32>(void)
//{
//    mangled_ppc("??0?$BitVector@$0CA@@CUAssembler@D3DXShader@@QAA@XZ");
//};

//public: void D3DXShader::CUAssembler::BitVector<32>::Clear(void)
//{
//    mangled_ppc("?Clear@?$BitVector@$0CA@@CUAssembler@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::CNodeUAsmLabel::CNodeUAsmLabel(void)
//{
//    mangled_ppc("??0CNodeUAsmLabel@D3DXShader@@QAA@XZ");
//};

//public: virtual D3DXShader::CNodeUAsmLabel::~CNodeUAsmLabel(void)
//{
//    mangled_ppc("??1CNodeUAsmLabel@D3DXShader@@UAA@XZ");
//};

//merged_83BBC350
//{
//    mangled_ppc("merged_83BBC350");
//};

//public: unsigned long XMicrocodeBuilder::Release(void)
//{
//    mangled_ppc("?Release@XMicrocodeBuilder@@QAAKXZ");
//};

//public: void XMicrocodeBuilder::Initialize(unsigned long)
//{
//    mangled_ppc("?Initialize@XMicrocodeBuilder@@QAAXK@Z");
//};

//public: void XMicrocodeBuilder::SetPDBHint(struct XShaderPDBHint const *)
//{
//    mangled_ppc("?SetPDBHint@XMicrocodeBuilder@@QAAXPBUXShaderPDBHint@@@Z");
//};

//public: void XMicrocodeBuilder::SetPDBBuilder(struct IShaderPDBBuilder *)
//{
//    mangled_ppc("?SetPDBBuilder@XMicrocodeBuilder@@QAAXPAUIShaderPDBBuilder@@@Z");
//};

//public: void XMicrocodeBuilder::AddDebuggerHint(unsigned long, char const *)
//{
//    mangled_ppc("?AddDebuggerHint@XMicrocodeBuilder@@QAAXKPBD@Z");
//};

//public: void XMicrocodeBuilder::SetConstantTable(void const *, unsigned long)
//{
//    mangled_ppc("?SetConstantTable@XMicrocodeBuilder@@QAAXPBXK@Z");
//};

//public: void XMicrocodeBuilder::StartPass(unsigned long)
//{
//    mangled_ppc("?StartPass@XMicrocodeBuilder@@QAAXK@Z");
//};

//public: void XMicrocodeBuilder::EndPass(void)
//{
//    mangled_ppc("?EndPass@XMicrocodeBuilder@@QAAXXZ");
//};

//public: void XMicrocodeBuilder::SetProgramControl(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC)
//{
//    mangled_ppc("?SetProgramControl@XMicrocodeBuilder@@QAAXTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@@Z");
//};

//public: void XMicrocodeBuilder::DefineBooleanConstant(unsigned long, int)
//{
//    mangled_ppc("?DefineBooleanConstant@XMicrocodeBuilder@@QAAXKH@Z");
//};

//public: void XMicrocodeBuilder::DefineIntegerConstant(unsigned long, int *)
//{
//    mangled_ppc("?DefineIntegerConstant@XMicrocodeBuilder@@QAAXKPAH@Z");
//};

//public: void XMicrocodeBuilder::DefineFloatConstant(unsigned long, float *)
//{
//    mangled_ppc("?DefineFloatConstant@XMicrocodeBuilder@@QAAXKPAM@Z");
//};

//public: void XMicrocodeBuilder::DeclareIndexSemantic(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?DeclareIndexSemantic@XMicrocodeBuilder@@QAAXKKK@Z");
//};

//public: void XMicrocodeBuilder::DeclareInterpolatorSemantic(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?DeclareInterpolatorSemantic@XMicrocodeBuilder@@QAAXKKK@Z");
//};

//public: unsigned long XMicrocodeBuilder::AddTFetch(union GPUTEXTURE_FETCH_INSTRUCTION *)
//{
//    mangled_ppc("?AddTFetch@XMicrocodeBuilder@@QAAKPATGPUTEXTURE_FETCH_INSTRUCTION@@@Z");
//};

//public: unsigned long XMicrocodeBuilder::AddVFetch(union GPUVERTEX_FETCH_INSTRUCTION *, int)
//{
//    mangled_ppc("?AddVFetch@XMicrocodeBuilder@@QAAKPATGPUVERTEX_FETCH_INSTRUCTION@@H@Z");
//};

//public: unsigned long XMicrocodeBuilder::AddVFetchWithSemantic(union GPUVERTEX_FETCH_INSTRUCTION *, unsigned long, int)
//{
//    mangled_ppc("?AddVFetchWithSemantic@XMicrocodeBuilder@@QAAKPATGPUVERTEX_FETCH_INSTRUCTION@@KH@Z");
//};

//public: unsigned long XMicrocodeBuilder::AddALU(union GPUALU_INSTRUCTION *)
//{
//    mangled_ppc("?AddALU@XMicrocodeBuilder@@QAAKPATGPUALU_INSTRUCTION@@@Z");
//};

//public: unsigned long XMicrocodeBuilder::AddFlow(union GPUFLOW_INSTRUCTION *)
//{
//    mangled_ppc("?AddFlow@XMicrocodeBuilder@@QAAKPATGPUFLOW_INSTRUCTION@@@Z");
//};

//public: void XMicrocodeBuilder::SetSerialize(unsigned long, int)
//{
//    mangled_ppc("?SetSerialize@XMicrocodeBuilder@@QAAXKH@Z");
//};

//public: unsigned long XMicrocodeBuilder::GetNextFlowAddress(void)
//{
//    mangled_ppc("?GetNextFlowAddress@XMicrocodeBuilder@@QAAKXZ");
//};

//public: unsigned long XMicrocodeBuilder::GetNextALUAddress(void)
//{
//    mangled_ppc("?GetNextALUAddress@XMicrocodeBuilder@@QAAKXZ");
//};

//public: union GPUFLOW_INSTRUCTION * XMicrocodeBuilder::GetFlow(unsigned long)
//{
//    mangled_ppc("?GetFlow@XMicrocodeBuilder@@QAAPATGPUFLOW_INSTRUCTION@@K@Z");
//};

//public: union GPUSHADER_INSTRUCTION * XMicrocodeBuilder::GetALU(unsigned long, int *)
//{
//    mangled_ppc("?GetALU@XMicrocodeBuilder@@QAAPATGPUSHADER_INSTRUCTION@@KPAH@Z");
//};

//public: void XMicrocodeBuilder::Finish(void)
//{
//    mangled_ppc("?Finish@XMicrocodeBuilder@@QAAXXZ");
//};

//public: unsigned long XMicrocodeBuilder::GetMicrocodeSize(void)
//{
//    mangled_ppc("?GetMicrocodeSize@XMicrocodeBuilder@@QAAKXZ");
//};

//public: long XMicrocodeBuilder::GetMicrocode(void *, unsigned long, unsigned long *)
//{
//    mangled_ppc("?GetMicrocode@XMicrocodeBuilder@@QAAJPAXKPAK@Z");
//};

//public: unsigned long XShaderPDBBuilder::AddRef(void)
//{
//    mangled_ppc("?AddRef@XShaderPDBBuilder@@QAAKXZ");
//};

//public: void XShaderPDBBuilder::BeginPass(int)
//{
//    mangled_ppc("?BeginPass@XShaderPDBBuilder@@QAAXH@Z");
//};

//public: void XShaderPDBBuilder::EndPass(unsigned long)
//{
//    mangled_ppc("?EndPass@XShaderPDBBuilder@@QAAXK@Z");
//};

//public: void XShaderPDBBuilder::BeginShader(char const *, unsigned long)
//{
//    mangled_ppc("?BeginShader@XShaderPDBBuilder@@QAAXPBDK@Z");
//};

//public: void XShaderPDBBuilder::AddSourceMapping(int, unsigned long, char const *, unsigned long, unsigned long, int)
//{
//    mangled_ppc("?AddSourceMapping@XShaderPDBBuilder@@QAAXHKPBDKKH@Z");
//};

//public: void XShaderPDBBuilder::AddConstantTable(struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long)
//{
//    mangled_ppc("?AddConstantTable@XShaderPDBBuilder@@QAAXPBU_D3DXSHADER_CONSTANTTABLE@@K@Z");
//};

//public: void XShaderPDBBuilder::Finish(unsigned long)
//{
//    mangled_ppc("?Finish@XShaderPDBBuilder@@QAAXK@Z");
//};

//public: struct IShaderPDBBuilder * XShaderPDBBuilder::PromoteToIShaderPDBBuilder(void)
//{
//    mangled_ppc("?PromoteToIShaderPDBBuilder@XShaderPDBBuilder@@QAAPAUIShaderPDBBuilder@@XZ");
//};

//public: static void * D3DXShader::CUAssembler::operator new(unsigned int)
//{
//    mangled_ppc("??2CUAssembler@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CUAssembler::operator delete(void *)
//{
//    mangled_ppc("??3CUAssembler@D3DXShader@@SAXPAX@Z");
//};

//protected: bool D3DXShader::CUAssembler::IsPixelShader(void)
//{
//    mangled_ppc("?IsPixelShader@CUAssembler@D3DXShader@@IAA_NXZ");
//};

//protected: bool D3DXShader::CUAssembler::IsVertexShader(void)
//{
//    mangled_ppc("?IsVertexShader@CUAssembler@D3DXShader@@IAA_NXZ");
//};

//public: long D3DXShader::ValidatorOutputCallbackContext::OutputLine(void)
//{
//    mangled_ppc("?OutputLine@ValidatorOutputCallbackContext@D3DXShader@@QAAJXZ");
//};

//public: long D3DXShader::ValidatorOutputCallbackContext::ValidatorOutput(char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutput@ValidatorOutputCallbackContext@D3DXShader@@QAAJPBDK@Z");
//};

//long D3DXShader::ValidatorOutputCallback(void *, char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutputCallback@D3DXShader@@YAJPAXPBDK@Z");
//};

//public: D3DXShader::CUAssembler::CUAssembler(void)
//{
//    mangled_ppc("??0CUAssembler@D3DXShader@@QAA@XZ");
//};

//long D3DXShader::GetEnumValue(struct D3DXShader::EnumStringTableEntry const *, char const *, unsigned int *)
//{
//    mangled_ppc("?GetEnumValue@D3DXShader@@YAJPBUEnumStringTableEntry@1@PBDPAI@Z");
//};

//int D3DXShader::IsValidScalarSwizzle(unsigned long, class D3DXShader::CNodeUAsmInstruction *, int)
//{
//    mangled_ppc("?IsValidScalarSwizzle@D3DXShader@@YAHKPAVCNodeUAsmInstruction@1@H@Z");
//};

//protected: static long D3DXShader::CUAssembler::GetValueAsInt(struct D3DXShader::D3DXTOKEN *, int *, int, int)
//{
//    mangled_ppc("?GetValueAsInt@CUAssembler@D3DXShader@@KAJPAUD3DXTOKEN@2@PAHHH@Z");
//};

//protected: static long D3DXShader::CUAssembler::GetValueAsBool(struct D3DXShader::D3DXTOKEN *, unsigned long *)
//{
//    mangled_ppc("?GetValueAsBool@CUAssembler@D3DXShader@@KAJPAUD3DXTOKEN@2@PAK@Z");
//};

//public: static bool D3DXShader::CUAssembler::HandleVFetchOptions(class D3DXShader::CNodeUAsmInstruction *, union GPUVERTEX_FETCH_INSTRUCTION *, unsigned long *, int *, bool *, void (*)(void *, char const *, ...), void *)
//{
//    mangled_ppc("?HandleVFetchOptions@CUAssembler@D3DXShader@@SA_NPAVCNodeUAsmInstruction@2@PATGPUVERTEX_FETCH_INSTRUCTION@@PAKPAHPA_NP6AXPAXPBDZZ5@Z");
//};

//public: static void D3DXShader::CUAssembler::HandleTFetchOptions(class D3DXShader::CNodeUAsmInstruction *, union GPUTEXTURE_FETCH_INSTRUCTION *, bool *, void (*)(void *, char const *, ...), void *)
//{
//    mangled_ppc("?HandleTFetchOptions@CUAssembler@D3DXShader@@SAXPAVCNodeUAsmInstruction@2@PATGPUTEXTURE_FETCH_INSTRUCTION@@PA_NP6AXPAXPBDZZ3@Z");
//};

//public: void D3DXShader::CUAssembler::InitializePass(void)
//{
//    mangled_ppc("?InitializePass@CUAssembler@D3DXShader@@QAAXXZ");
//};

//protected: class D3DXShader::CNodeUAsmLabel * D3DXShader::CUAssembler::CreateLabel(unsigned long, unsigned long)
//{
//    mangled_ppc("?CreateLabel@CUAssembler@D3DXShader@@IAAPAVCNodeUAsmLabel@2@KK@Z");
//};

//protected: int D3DXShader::CUAssembler::IsCustomInterpolatorOrder(void)
//{
//    mangled_ppc("?IsCustomInterpolatorOrder@CUAssembler@D3DXShader@@IAAHXZ");
//};

//public: bool D3DXShader::CUAssembler::BitVector<256>::IsSet(unsigned long)
//{
//    mangled_ppc("?IsSet@?$BitVector@$0BAA@@CUAssembler@D3DXShader@@QAA_NK@Z");
//};

//public: void D3DXShader::CUAssembler::BitVector<256>::Set(unsigned long)
//{
//    mangled_ppc("?Set@?$BitVector@$0BAA@@CUAssembler@D3DXShader@@QAAXK@Z");
//};

//public: bool D3DXShader::CUAssembler::BitVector<32>::IsSet(unsigned long)
//{
//    mangled_ppc("?IsSet@?$BitVector@$0CA@@CUAssembler@D3DXShader@@QAA_NK@Z");
//};

//public: void D3DXShader::CUAssembler::BitVector<32>::Set(unsigned long)
//{
//    mangled_ppc("?Set@?$BitVector@$0CA@@CUAssembler@D3DXShader@@QAAXK@Z");
//};

//void RELEASE<struct XShaderPDBBuilder>(struct XShaderPDBBuilder *&)
//{
//    mangled_ppc("??$RELEASE@UXShaderPDBBuilder@@@@YAXAAPAUXShaderPDBBuilder@@@Z");
//};

//void RELEASE<struct XMicrocodeBuilder>(struct XMicrocodeBuilder *&)
//{
//    mangled_ppc("??$RELEASE@UXMicrocodeBuilder@@@@YAXAAPAUXMicrocodeBuilder@@@Z");
//};

//public: long D3DXShader::ValidatorOutputCallbackContext::Flush(void)
//{
//    mangled_ppc("?Flush@ValidatorOutputCallbackContext@D3DXShader@@QAAJXZ");
//};

//public: D3DXShader::CUAssembler::~CUAssembler(void)
//{
//    mangled_ppc("??1CUAssembler@D3DXShader@@QAA@XZ");
//};

//protected: void D3DXShader::CUAssembler::VError(char const *, char *)
//{
//    mangled_ppc("?VError@CUAssembler@D3DXShader@@IAAXPBDPAD@Z");
//};

//unsigned int D3DXShader::AddStringNoDuplicates(char const *, char *, unsigned int, unsigned int *)
//{
//    mangled_ppc("?AddStringNoDuplicates@D3DXShader@@YAIPBDPADIPAI@Z");
//};

//void D3DXShader::SplitName(char const *, char *, unsigned int, char *, unsigned int, enum D3DXShader::DEFCONST_PARSE_TYPE *, unsigned int *)
//{
//    mangled_ppc("?SplitName@D3DXShader@@YAXPBDPADI1IPAW4DEFCONST_PARSE_TYPE@1@PAI@Z");
//};

//protected: int D3DXShader::CUAssembler::AddConstant(struct _D3DXCONSTANT_DESC *, char const *, struct D3DXShader::DEFCONST_DESC *)
//{
//    mangled_ppc("?AddConstant@CUAssembler@D3DXShader@@IAAHPAU_D3DXCONSTANT_DESC@@PBDPAUDEFCONST_DESC@2@@Z");
//};

//unsigned int D3DXShader::AddTypeInfo(struct D3DXShader::DEFCONST_DESC const *, struct _D3DXSHADER_TYPEINFO *, unsigned int *, struct _D3DXSHADER_STRUCTMEMBERINFO *, unsigned int *, char *, unsigned int, unsigned int *)
//{
//    mangled_ppc("?AddTypeInfo@D3DXShader@@YAIPBUDEFCONST_DESC@1@PAU_D3DXSHADER_TYPEINFO@@PAIPAU_D3DXSHADER_STRUCTMEMBERINFO@@2PADI2@Z");
//};

//public: static void D3DXShader::CUAssembler::Static_Error(void *, char const *, ...)
//{
//    mangled_ppc("?Static_Error@CUAssembler@D3DXShader@@SAXPAXPBDZZ");
//};

//public: void * D3DXShader::CUAssembler::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCUAssembler@D3DXShader@@QAAPAXI@Z");
//};

//protected: void D3DXShader::CUAssembler::Error(char const *, ...)
//{
//    mangled_ppc("?Error@CUAssembler@D3DXShader@@IAAXPBDZZ");
//};

//protected: static void D3DXShader::CUAssembler::ErrorCallback(void *, char const *, ...)
//{
//    mangled_ppc("?ErrorCallback@CUAssembler@D3DXShader@@KAXPAXPBDZZ");
//};

//protected: int D3DXShader::CUAssembler::DecodeOpcode(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?DecodeOpcode@CUAssembler@D3DXShader@@IAAHPAUD3DXTOKEN@2@@Z");
//};

//protected: int D3DXShader::CUAssembler::UpdateRootConstants(struct D3DXShader::DEFCONST_DESC *)
//{
//    mangled_ppc("?UpdateRootConstants@CUAssembler@D3DXShader@@IAAHPAUDEFCONST_DESC@2@@Z");
//};

//protected: int D3DXShader::CUAssembler::DecodeDefconst(struct _D3DXCONSTANT_DESC *, char *, unsigned int)
//{
//    mangled_ppc("?DecodeDefconst@CUAssembler@D3DXShader@@IAAHPAU_D3DXCONSTANT_DESC@@PADI@Z");
//};

//protected: int D3DXShader::CUAssembler::DecodeConstantTable(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?DecodeConstantTable@CUAssembler@D3DXShader@@IAAHPAUD3DXTOKEN@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CUAssembler::DecodeRegister(struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?DecodeRegister@CUAssembler@D3DXShader@@IAAPAVCNode@2@PAUD3DXTOKEN@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNodeUAsmInstruction * D3DXShader::CUAssembler::MergeInstructions(class D3DXShader::CNodeUAsmInstruction *, class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?MergeInstructions@CUAssembler@D3DXShader@@IAAPAVCNodeUAsmInstruction@2@PAV32@0@Z");
//};

//protected: long D3DXShader::CUAssembler::HandleAlloc(union GPUFLOW_ALLOC &, class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleAlloc@CUAssembler@D3DXShader@@IAAJAATGPUFLOW_ALLOC@@PAVCNodeUAsmInstruction@2@@Z");
//};

//protected: struct D3DXShader::D3DXTOKEN * D3DXShader::CUAssembler::GetOptionValue(class D3DXShader::CNodeUAsmInstruction *, char const *, int)
//{
//    mangled_ppc("?GetOptionValue@CUAssembler@D3DXShader@@IAAPAUD3DXTOKEN@2@PAVCNodeUAsmInstruction@2@PBDH@Z");
//};

//protected: int D3DXShader::CUAssembler::GetYieldValue(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?GetYieldValue@CUAssembler@D3DXShader@@IAAHPAVCNodeUAsmInstruction@2@@Z");
//};

//protected: long D3DXShader::CUAssembler::InitCheck(char const *)
//{
//    mangled_ppc("?InitCheck@CUAssembler@D3DXShader@@IAAJPBD@Z");
//};

//protected: void D3DXShader::CUAssembler::DoSrcReg(union GPUALU_INSTRUCTION &, unsigned long, class D3DXShader::CNodeUAsmRegister *)
//{
//    mangled_ppc("?DoSrcReg@CUAssembler@D3DXShader@@IAAXAATGPUALU_INSTRUCTION@@KPAVCNodeUAsmRegister@2@@Z");
//};

//protected: void D3DXShader::CUAssembler::DoDest(union GPUALU_INSTRUCTION &, class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?DoDest@CUAssembler@D3DXShader@@IAAXAATGPUALU_INSTRUCTION@@PAVCNodeUAsmInstruction@2@@Z");
//};

//protected: int D3DXShader::CUAssembler::DetectBias(class D3DXShader::CNodeUAsmRegister *, char const *)
//{
//    mangled_ppc("?DetectBias@CUAssembler@D3DXShader@@IAAHPAVCNodeUAsmRegister@2@PBD@Z");
//};

//protected: void D3DXShader::CUAssembler::DoFetchSrcDest(union GPUTEXTURE_FETCH_INSTRUCTION *, class D3DXShader::CNodeUAsmInstruction *, unsigned long)
//{
//    mangled_ppc("?DoFetchSrcDest@CUAssembler@D3DXShader@@IAAXPATGPUTEXTURE_FETCH_INSTRUCTION@@PAVCNodeUAsmInstruction@2@K@Z");
//};

//protected: void D3DXShader::CUAssembler::CheckDeclarations(void)
//{
//    mangled_ppc("?CheckDeclarations@CUAssembler@D3DXShader@@IAAXXZ");
//};

//protected: int D3DXShader::CUAssembler::Token(void)
//{
//    mangled_ppc("?Token@CUAssembler@D3DXShader@@IAAHXZ");
//};

//protected: long D3DXShader::CUAssembler::HandleConfig(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleConfig@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//public: static int D3DXShader::CUAssembler::Static_Token(void *)
//{
//    mangled_ppc("?Static_Token@CUAssembler@D3DXShader@@SAHPAX@Z");
//};

//protected: struct XMicrocodeBuilder * D3DXShader::CUAssembler::GetBuilder(int)
//{
//    mangled_ppc("?GetBuilder@CUAssembler@D3DXShader@@IAAPAUXMicrocodeBuilder@@H@Z");
//};

//protected: struct XMicrocodeBuilder * D3DXShader::CUAssembler::GetBuilder(void)
//{
//    mangled_ppc("?GetBuilder@CUAssembler@D3DXShader@@IAAPAUXMicrocodeBuilder@@XZ");
//};

//protected: long D3DXShader::CUAssembler::HandleNA(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleNA@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//protected: long D3DXShader::CUAssembler::HandleALU(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleALU@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//protected: long D3DXShader::CUAssembler::HandleVFetch(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleVFetch@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//protected: long D3DXShader::CUAssembler::HandleTFetch(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleTFetch@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//protected: void D3DXShader::CUAssembler::RecordLabelUse(class D3DXShader::CNodeUAsmInstruction *, unsigned long)
//{
//    mangled_ppc("?RecordLabelUse@CUAssembler@D3DXShader@@IAAXPAVCNodeUAsmInstruction@2@K@Z");
//};

//protected: void D3DXShader::CUAssembler::FixupLabels(void)
//{
//    mangled_ppc("?FixupLabels@CUAssembler@D3DXShader@@IAAXXZ");
//};

//protected: void D3DXShader::CUAssembler::CalculateExportCount(void)
//{
//    mangled_ppc("?CalculateExportCount@CUAssembler@D3DXShader@@IAAXXZ");
//};

//protected: long D3DXShader::CUAssembler::HandleFlow(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleFlow@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//public: long D3DXShader::CUAssembler::CalculateProgramControl(void)
//{
//    mangled_ppc("?CalculateProgramControl@CUAssembler@D3DXShader@@QAAJXZ");
//};

//public: long D3DXShader::CUAssembler::GetShaderCode(struct ID3DXBuffer **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?GetShaderCode@CUAssembler@D3DXShader@@QAAJPAPAUID3DXBuffer@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//protected: long D3DXShader::CUAssembler::HandleZPass(class D3DXShader::CNodeUAsmInstruction *)
//{
//    mangled_ppc("?HandleZPass@CUAssembler@D3DXShader@@IAAJPAVCNodeUAsmInstruction@2@@Z");
//};

//protected: long D3DXShader::CUAssembler::EmitInstruction(class D3DXShader::CNode *)
//{
//    mangled_ppc("?EmitInstruction@CUAssembler@D3DXShader@@IAAJPAVCNode@2@@Z");
//};

//protected: void D3DXShader::CUAssembler::Production(unsigned int, unsigned int)
//{
//    mangled_ppc("?Production@CUAssembler@D3DXShader@@IAAXII@Z");
//};

//public: static void D3DXShader::CUAssembler::Static_Production(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("?Static_Production@CUAssembler@D3DXShader@@SAXPAXII@Z");
//};

//public: int D3DXShader::CUAssemblerYaccStruct::d3dxuasm_parse(void)
//{
//    mangled_ppc("?d3dxuasm_parse@CUAssemblerYaccStruct@D3DXShader@@QAAHXZ");
//};

//public: long D3DXShader::CUAssembler::Assemble(class D3DXShader::CPreProcessor *, unsigned long, unsigned long, class D3DXShader::CTErrors *, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?Assemble@CUAssembler@D3DXShader@@QAAJPAVCPreProcessor@2@KKPAVCTErrors@2@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//long D3DXShader::XAssembleMicrocode(class D3DXShader::CPreProcessor *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CTErrors *, struct ID3DXBuffer **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?XAssembleMicrocode@D3DXShader@@YAJPAVCPreProcessor@1@PAUD3DXTOKEN@1@KPAVCTErrors@1@PAPAUID3DXBuffer@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//long D3DXShader::XAssembleMicrocodeBlock(class D3DXShader::CPreProcessor *, unsigned long, class D3DXShader::CNode **, void *, long (*)(void *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **))
//{
//    mangled_ppc("?XAssembleMicrocodeBlock@D3DXShader@@YAJPAVCPreProcessor@1@KPAPAVCNode@1@PAXP6AJ2PAUD3DXTOKEN@1@K1@Z@Z");
//};

