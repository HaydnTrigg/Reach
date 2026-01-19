/* ---------- headers */

#include "xdk\d3dx9d\cshaderprogram.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int D3DXShader::ComparePool(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareVariable(unsigned int, unsigned int, void const *);
// protected: virtual unsigned long D3DXShader::CShaderProgram::MakeSemantic(unsigned long, unsigned long);
// protected: virtual unsigned long D3DXShader::CShaderProgram::SemanticType(unsigned long);
// protected: virtual unsigned long D3DXShader::CShaderProgram::SemanticIndex(unsigned long);
// int D3DXShader::ArgCompare(unsigned int *, unsigned int, unsigned int *, unsigned int);
// protected: long D3DXShader::CShaderProgram::SuppressAdditionalErrors(unsigned long *);
// protected: virtual long D3DXShader::CShaderProgram::ValidateArguments(void);
// protected: long D3DXShader::CShaderProgram::ColorParents(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int);
// protected: long D3DXShader::CShaderProgram::ColorParents2(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int);
// protected: long D3DXShader::CShaderProgram::ColorChildren(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int);
// protected: long D3DXShader::CShaderProgram::ColorChildren2(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int);
// protected: long D3DXShader::CShaderProgram::FindPoolName(char const *, char const **, char, unsigned int);
// protected: virtual long D3DXShader::CShaderProgram::EmitObjectDCL(class D3DXShader::CArgument *);
// protected: long D3DXShader::CShaderProgram::Reset(void);
// protected: virtual int D3DXShader::CShaderProgram::ViolatesPortConstraints(class D3DXShader::CInstruction *, unsigned int *);
// protected: virtual long D3DXShader::CShaderProgram::EmitVersion(void);
// protected: virtual int D3DXShader::CShaderProgram::ViolatesWriteLim(class D3DXShader::CInstruction *, unsigned int);
// protected: virtual long D3DXShader::CShaderProgram::PropCentroid(void);
// protected: long D3DXShader::CShaderProgram::MatchBREAK2(void);
// protected: long D3DXShader::CShaderProgram::MatchENDWHILE(void);
// protected: long D3DXShader::CShaderProgram::MatchSINCOS(void);
// void D3DXShader::ExchangeRow(class D3DXShader::CInstruction *, unsigned int);
// protected: long D3DXShader::CShaderProgram::SortInstruction(void);
// protected: long D3DXShader::CShaderProgram::ResolveAddress(void);
// protected: long D3DXShader::CShaderProgram::CompressOrigin(void);
// protected: long D3DXShader::CShaderProgram::MatchRepMov(void);
// protected: long D3DXShader::CShaderProgram::MatchNEZero(void);
// protected: long D3DXShader::CShaderProgram::ConvertDP2(void);
// protected: long D3DXShader::CShaderProgram::PlaceInstruction(class D3DXShader::CInstruction *, class D3DXShader::CInstruction **, unsigned int);
// protected: long D3DXShader::CShaderProgram::MatchMAX(void);
// protected: long D3DXShader::CShaderProgram::MatchABS(void);
// protected: long D3DXShader::CShaderProgram::MatchABS2(void);
// protected: long D3DXShader::CShaderProgram::FindComp(unsigned int, class D3DXShader::CInstruction **, unsigned int *);
// protected: long D3DXShader::CShaderProgram::BuildLRP(unsigned int *, unsigned int *, unsigned int *, unsigned int *, class D3DXShader::CInstruction *, class D3DXShader::CInstruction *, unsigned int);
// protected: int D3DXShader::CShaderProgram::IsInstructionPred(class D3DXShader::CInstruction *, unsigned int *, unsigned int *, unsigned int);
// private: long D3DXShader::CShaderProgram::RFC_Convert(char const *, unsigned long, class D3DXShader::CArgument *, unsigned int *);
// private: long D3DXShader::CShaderProgram::Reschedule_Exchange(unsigned int, unsigned int);
// protected: long D3DXShader::CShaderProgram::SwapRegisters(unsigned int, unsigned int, unsigned int);
// int D3DXShader::IsIf(unsigned int);
// int D3DXShader::IsBreak(unsigned int);
// protected: class D3DXShader::CInstruction * D3DXShader::CShaderProgram::NewAndIf(class D3DXShader::CInstruction *, int);
// protected: long D3DXShader::CShaderProgram::CompactEndIfs(void);
// protected: class D3DXShader::CInstruction * D3DXShader::CShaderProgram::FindMatch(unsigned long, class D3DXShader::CInstruction *, unsigned int *, unsigned int, unsigned int);
// protected: long D3DXShader::CShaderProgram::FindMatchUp(unsigned long, class D3DXShader::CInstruction *, class D3DXShader::CInstruction **, unsigned int);
// protected: long D3DXShader::CShaderProgram::BuildInstruction(unsigned int *, unsigned int, unsigned int);
// protected: virtual long D3DXShader::CShaderProgram::EmitNOP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitSize(void);
// protected: long D3DXShader::CShaderProgram::EmitSrcSwizzle(unsigned long);
// protected: virtual unsigned long D3DXShader::CShaderProgram::CoIssue(unsigned long);
// unsigned int D3DXShader::TypeSize(class D3DXShader::CNode *);
// protected: virtual long D3DXShader::CShaderProgram::DestRegister(class D3DXShader::CArgument *, unsigned long *, unsigned long *, int *);
// protected: virtual long D3DXShader::CShaderProgram::DestMask(unsigned int *, unsigned int, unsigned long *, int);
// protected: virtual long D3DXShader::CShaderProgram::FindInput(class D3DXShader::CArgument *, unsigned long &, unsigned long &);
// protected: virtual long D3DXShader::CShaderProgram::SrcRegister(class D3DXShader::CArgument *, unsigned long *, unsigned long *);
// protected: virtual long D3DXShader::CShaderProgram::SrcSwizzle(unsigned int *, unsigned int, unsigned long, unsigned long *);
// protected: virtual long D3DXShader::CShaderProgram::PredRegister(class D3DXShader::CArgument *, unsigned long *);
// protected: long D3DXShader::CShaderProgram::ValidateInst(void);
// protected: static long D3DXShader::CShaderProgram::ValidationError(char const *, unsigned int, unsigned long, unsigned int, char const *, void *);
// protected: virtual unsigned int D3DXShader::CShaderProgram::CalcNumExtraSymbolTableEntries(void);
// protected: virtual long D3DXShader::CShaderProgram::AddUserOffsetInfo(class D3DXShader::CNodeVariable *, struct _D3DXSHADER_CONSTANTINFO *);
// protected: virtual long D3DXShader::CShaderProgram::ConstrainPortsArgumentTest(class D3DXShader::CInstruction *, unsigned int);
// protected: struct D3DXShader::D3DX_SEMANTIC * D3DXShader::CShaderProgram::FindSemantic(struct D3DXShader::D3DX_SEMANTIC *, unsigned long);
// public: int D3DXShader::CInstruction::IsPartial(void);
// public: D3DXShader::CShaderProgram::CShaderProgram(int);
// protected: virtual long D3DXShader::CShaderProgram::EmitBeginShaderLoop(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitEndShaderLoop(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitBeginFetchLoop(unsigned int, class D3DXShader::CArgument **);
// protected: virtual long D3DXShader::CShaderProgram::EmitEndFetchLoop(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitBeginExportLoop(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitEndExportLoop(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitStreamElement(class D3DXShader::CArgument *, unsigned long *, int);
// public: virtual D3DXShader::CShaderProgram::~CShaderProgram(void);
// protected: long D3DXShader::CShaderProgram::ComputeSwizzle(class D3DXShader::CInstruction *, unsigned int *, unsigned int, unsigned int *, unsigned int *, unsigned int, int);
// protected: long D3DXShader::CShaderProgram::MatchComplexTree(class D3DXShader::CInstruction *, struct D3DXShader::D3DX_MATCHENTRY const *, class D3DXShader::CInstruction **, unsigned int *, unsigned int *, unsigned int *, unsigned int, int);
// protected: long D3DXShader::CShaderProgram::CombineConstants(unsigned int, unsigned int, unsigned long, unsigned long, char);
// protected: virtual long D3DXShader::CShaderProgram::EmitDCL(class D3DXShader::CArgument *, unsigned long *);
// protected: virtual long D3DXShader::CShaderProgram::ValidateOutput(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitInstructions(void);
// protected: virtual long D3DXShader::CShaderProgram::PatternMatch(void);
// protected: long D3DXShader::CShaderProgram::ConstrainPorts(void);
// protected: long D3DXShader::CShaderProgram::PortConstraints(void);
// protected: long D3DXShader::CShaderProgram::MatchPOW(void);
// protected: long D3DXShader::CShaderProgram::RemapSamplerMove(void);
// protected: long D3DXShader::CShaderProgram::MatchMinMax(class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int *);
// protected: long D3DXShader::CShaderProgram::MatchMinMax2(class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int *);
// protected: long D3DXShader::CShaderProgram::MatchSatModifier(void);
// protected: long D3DXShader::CShaderProgram::MatchIF2(void);
// protected: long D3DXShader::CShaderProgram::MatchIF(void);
// protected: long D3DXShader::CShaderProgram::MatchNEEQ(void);
// protected: long D3DXShader::CShaderProgram::MatchNEEQ2(void);
// protected: long D3DXShader::CShaderProgram::MatchIFCOND(void);
// protected: long D3DXShader::CShaderProgram::MatchBREAK(void);
// protected: long D3DXShader::CShaderProgram::FoldIterator(void);
// protected: long D3DXShader::CShaderProgram::FoldBreak(void);
// protected: long D3DXShader::CShaderProgram::MatchBREAK_NEEQ(void);
// protected: long D3DXShader::CShaderProgram::MatchBREAK_NEEQ2(void);
// protected: long D3DXShader::CShaderProgram::MatchBREAK_COND(void);
// protected: long D3DXShader::CShaderProgram::MatchRepeatedNRM(void);
// protected: long D3DXShader::CShaderProgram::MatchNRM(void);
// protected: long D3DXShader::CShaderProgram::MatchComplexMad(int);
// protected: long D3DXShader::CShaderProgram::MatchDP2Add(void);
// protected: long D3DXShader::CShaderProgram::ValidModifier(unsigned int);
// protected: long D3DXShader::CShaderProgram::MatchLRP(void);
// protected: long D3DXShader::CShaderProgram::MatchLRP2(int);
// protected: long D3DXShader::CShaderProgram::Scan(unsigned int *, int *, unsigned int, int);
// private: long D3DXShader::CShaderProgram::Reschedule_FindCoissue(struct D3DXShader::_D3DXCP_DATA *, class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int, int, int);
// private: long D3DXShader::CShaderProgram::Reschedule_FindPair(struct D3DXShader::_D3DXCP_DATA *, struct D3DXShader::_D3DXCP_DATA *, class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int, int);
// protected: virtual long D3DXShader::CShaderProgram::Reschedule(void);
// protected: long D3DXShader::CShaderProgram::GroupIfs(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int, int, int, unsigned int, unsigned int);
// unsigned long D3DXShader::NegateReg(unsigned long);
// long D3DXShader::EmitTypeInfo(class D3DXShader::CCommentBlock *, class D3DXShader::CNode *, unsigned int, unsigned long, unsigned long *);
// protected: long D3DXShader::CShaderProgram::Assure(unsigned int);
// protected: virtual long D3DXShader::CShaderProgram::FindOutput(class D3DXShader::CArgument *, unsigned long &, unsigned long &, int *);
// protected: virtual long D3DXShader::CShaderProgram::FindObjectDims(void);
// protected: virtual long D3DXShader::CShaderProgram::TempRegister(unsigned int, unsigned int *, unsigned int, unsigned int *, unsigned int);
// protected: struct D3DXShader::D3DX_SEMANTIC * D3DXShader::CShaderProgram::FindSemantic(unsigned long);
// long StringCchCopyA(char *, unsigned int, char const *);
// merged_83B5CE60;
// protected: long D3DXShader::CShaderProgram::IndexSemanticFromTable(class D3DXShader::CArgument *, struct D3DXShader::D3DX_SEMANTIC *, unsigned short, int *);
// protected: long D3DXShader::CShaderProgram::MatchSourceModifier(unsigned int, unsigned int, unsigned int *, unsigned int, class D3DXShader::CInstruction *, int);
// protected: long D3DXShader::CShaderProgram::MatchNEG(int);
// protected: long D3DXShader::CShaderProgram::MatchABSModifier(void);
// protected: long D3DXShader::CShaderProgram::MatchBiasModifier(void);
// protected: long D3DXShader::CShaderProgram::MatchX2Modifier(void);
// protected: long D3DXShader::CShaderProgram::MatchCompModifier(class D3DXShader::CInstruction *);
// protected: long D3DXShader::CShaderProgram::MatchComplexComp(void);
// protected: long D3DXShader::CShaderProgram::MatchComplexBX2(void);
// protected: long D3DXShader::CShaderProgram::ResolveFlowControl(void);
// protected: long D3DXShader::CShaderProgram::Emit(unsigned long);
// protected: long D3DXShader::CShaderProgram::EmitPreShader(void);
// protected: long D3DXShader::CShaderProgram::EmitSymbolTable(void);
// protected: long D3DXShader::CShaderProgram::EmitDebugInfo(void);
// protected: virtual long D3DXShader::CShaderProgram::AddExtraSymbolTableEntries(class D3DXShader::CCommentBlock *, struct _D3DXSHADER_CONSTANTINFO *, unsigned int);
// public: virtual long D3DXShader::CShaderProgram::GenerateCode(struct ID3DXBuffer **);
// public: virtual long D3DXShader::CShaderProgram::IndexSemantic(class D3DXShader::CArgument *, int);
// protected: long D3DXShader::CShaderProgram::EmitInst(unsigned long);
// protected: long D3DXShader::CShaderProgram::EmitReg(unsigned long);
// protected: virtual long D3DXShader::CShaderProgram::EmitDest(unsigned long, unsigned long, unsigned long);
// protected: virtual long D3DXShader::CShaderProgram::EmitSrc(unsigned long, unsigned long, unsigned long);
// protected: long D3DXShader::CShaderProgram::EmitInstComplex(unsigned long, unsigned int *, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int, unsigned long, unsigned long, unsigned long, int);
// protected: virtual long D3DXShader::CShaderProgram::EmitDEF(unsigned int, float *);
// protected: virtual long D3DXShader::CShaderProgram::EmitDEFi(unsigned int, unsigned int *);
// protected: virtual long D3DXShader::CShaderProgram::EmitENDLOOP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitENDLOOP_INC(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitBREAK(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitTEX(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitTEXDD(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitTEXProj(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitTEXBias(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitTEXLOD(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitDP2ADD(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitCLIP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitSINCOS(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitIF(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitENDIF(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitANDIF(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitANDIFBOOL(int);
// protected: virtual long D3DXShader::CShaderProgram::EmitANDELSE(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitANDENDIF(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitNEG(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitPOW(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitLRP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitNRM(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitMAD(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitMAT(void);
// protected: long D3DXShader::CShaderProgram::EmitInstSimple(unsigned long, int);
// protected: long D3DXShader::CShaderProgram::EmitInstScalar(unsigned long, unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned long, int);
// protected: virtual long D3DXShader::CShaderProgram::EmitLOOP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitLOOP_INC(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitMOV(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitDSX(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitDSY(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitRCP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitFRC(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitEXP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitLOG(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitRSQ(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitMIN(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitMAX(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitLT(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitGE(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitADD(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitMUL(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitDST(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitDOT(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitLIT(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitCMP(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitCND(void);
// protected: virtual long D3DXShader::CShaderProgram::EmitABS(void);

//int D3DXShader::ComparePool(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?ComparePool@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareVariable(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareVariable@D3DXShader@@YAHIIPBX@Z");
//};

//protected: virtual unsigned long D3DXShader::CShaderProgram::MakeSemantic(unsigned long, unsigned long)
//{
//    mangled_ppc("?MakeSemantic@CShaderProgram@D3DXShader@@MAAKKK@Z");
//};

//protected: virtual unsigned long D3DXShader::CShaderProgram::SemanticType(unsigned long)
//{
//    mangled_ppc("?SemanticType@CShaderProgram@D3DXShader@@MAAKK@Z");
//};

//protected: virtual unsigned long D3DXShader::CShaderProgram::SemanticIndex(unsigned long)
//{
//    mangled_ppc("?SemanticIndex@CShaderProgram@D3DXShader@@MAAKK@Z");
//};

//int D3DXShader::ArgCompare(unsigned int *, unsigned int, unsigned int *, unsigned int)
//{
//    mangled_ppc("?ArgCompare@D3DXShader@@YAHPAII0I@Z");
//};

//protected: long D3DXShader::CShaderProgram::SuppressAdditionalErrors(unsigned long *)
//{
//    mangled_ppc("?SuppressAdditionalErrors@CShaderProgram@D3DXShader@@IAAJPAK@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::ValidateArguments(void)
//{
//    mangled_ppc("?ValidateArguments@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::ColorParents(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ColorParents@CShaderProgram@D3DXShader@@IAAJPAPAVCInstruction@2@PAV32@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::ColorParents2(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ColorParents2@CShaderProgram@D3DXShader@@IAAJPAPAVCInstruction@2@PAV32@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::ColorChildren(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ColorChildren@CShaderProgram@D3DXShader@@IAAJPAPAVCInstruction@2@PAV32@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::ColorChildren2(class D3DXShader::CInstruction **, class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ColorChildren2@CShaderProgram@D3DXShader@@IAAJPAPAVCInstruction@2@PAV32@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::FindPoolName(char const *, char const **, char, unsigned int)
//{
//    mangled_ppc("?FindPoolName@CShaderProgram@D3DXShader@@IAAJPBDPAPBDDI@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitObjectDCL(class D3DXShader::CArgument *)
//{
//    mangled_ppc("?EmitObjectDCL@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@@Z");
//};

//protected: long D3DXShader::CShaderProgram::Reset(void)
//{
//    mangled_ppc("?Reset@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: virtual int D3DXShader::CShaderProgram::ViolatesPortConstraints(class D3DXShader::CInstruction *, unsigned int *)
//{
//    mangled_ppc("?ViolatesPortConstraints@CShaderProgram@D3DXShader@@MAAHPAVCInstruction@2@PAI@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitVersion(void)
//{
//    mangled_ppc("?EmitVersion@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual int D3DXShader::CShaderProgram::ViolatesWriteLim(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ViolatesWriteLim@CShaderProgram@D3DXShader@@MAAHPAVCInstruction@2@I@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::PropCentroid(void)
//{
//    mangled_ppc("?PropCentroid@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchBREAK2(void)
//{
//    mangled_ppc("?MatchBREAK2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchENDWHILE(void)
//{
//    mangled_ppc("?MatchENDWHILE@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchSINCOS(void)
//{
//    mangled_ppc("?MatchSINCOS@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//void D3DXShader::ExchangeRow(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ExchangeRow@D3DXShader@@YAXPAVCInstruction@1@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::SortInstruction(void)
//{
//    mangled_ppc("?SortInstruction@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::ResolveAddress(void)
//{
//    mangled_ppc("?ResolveAddress@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::CompressOrigin(void)
//{
//    mangled_ppc("?CompressOrigin@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchRepMov(void)
//{
//    mangled_ppc("?MatchRepMov@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchNEZero(void)
//{
//    mangled_ppc("?MatchNEZero@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::ConvertDP2(void)
//{
//    mangled_ppc("?ConvertDP2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::PlaceInstruction(class D3DXShader::CInstruction *, class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?PlaceInstruction@CShaderProgram@D3DXShader@@IAAJPAVCInstruction@2@PAPAV32@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchMAX(void)
//{
//    mangled_ppc("?MatchMAX@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchABS(void)
//{
//    mangled_ppc("?MatchABS@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchABS2(void)
//{
//    mangled_ppc("?MatchABS2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::FindComp(unsigned int, class D3DXShader::CInstruction **, unsigned int *)
//{
//    mangled_ppc("?FindComp@CShaderProgram@D3DXShader@@IAAJIPAPAVCInstruction@2@PAI@Z");
//};

//protected: long D3DXShader::CShaderProgram::BuildLRP(unsigned int *, unsigned int *, unsigned int *, unsigned int *, class D3DXShader::CInstruction *, class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?BuildLRP@CShaderProgram@D3DXShader@@IAAJPAI000PAVCInstruction@2@1I@Z");
//};

//protected: int D3DXShader::CShaderProgram::IsInstructionPred(class D3DXShader::CInstruction *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?IsInstructionPred@CShaderProgram@D3DXShader@@IAAHPAVCInstruction@2@PAI1I@Z");
//};

//private: long D3DXShader::CShaderProgram::RFC_Convert(char const *, unsigned long, class D3DXShader::CArgument *, unsigned int *)
//{
//    mangled_ppc("?RFC_Convert@CShaderProgram@D3DXShader@@AAAJPBDKPAVCArgument@2@PAI@Z");
//};

//private: long D3DXShader::CShaderProgram::Reschedule_Exchange(unsigned int, unsigned int)
//{
//    mangled_ppc("?Reschedule_Exchange@CShaderProgram@D3DXShader@@AAAJII@Z");
//};

//protected: long D3DXShader::CShaderProgram::SwapRegisters(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SwapRegisters@CShaderProgram@D3DXShader@@IAAJIII@Z");
//};

//int D3DXShader::IsIf(unsigned int)
//{
//    mangled_ppc("?IsIf@D3DXShader@@YAHI@Z");
//};

//int D3DXShader::IsBreak(unsigned int)
//{
//    mangled_ppc("?IsBreak@D3DXShader@@YAHI@Z");
//};

//protected: class D3DXShader::CInstruction * D3DXShader::CShaderProgram::NewAndIf(class D3DXShader::CInstruction *, int)
//{
//    mangled_ppc("?NewAndIf@CShaderProgram@D3DXShader@@IAAPAVCInstruction@2@PAV32@H@Z");
//};

//protected: long D3DXShader::CShaderProgram::CompactEndIfs(void)
//{
//    mangled_ppc("?CompactEndIfs@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: class D3DXShader::CInstruction * D3DXShader::CShaderProgram::FindMatch(unsigned long, class D3DXShader::CInstruction *, unsigned int *, unsigned int, unsigned int)
//{
//    mangled_ppc("?FindMatch@CShaderProgram@D3DXShader@@IAAPAVCInstruction@2@KPAV32@PAIII@Z");
//};

//protected: long D3DXShader::CShaderProgram::FindMatchUp(unsigned long, class D3DXShader::CInstruction *, class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?FindMatchUp@CShaderProgram@D3DXShader@@IAAJKPAVCInstruction@2@PAPAV32@I@Z");
//};

//protected: long D3DXShader::CShaderProgram::BuildInstruction(unsigned int *, unsigned int, unsigned int)
//{
//    mangled_ppc("?BuildInstruction@CShaderProgram@D3DXShader@@IAAJPAIII@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitNOP(void)
//{
//    mangled_ppc("?EmitNOP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitSize(void)
//{
//    mangled_ppc("?EmitSize@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::EmitSrcSwizzle(unsigned long)
//{
//    mangled_ppc("?EmitSrcSwizzle@CShaderProgram@D3DXShader@@IAAJK@Z");
//};

//protected: virtual unsigned long D3DXShader::CShaderProgram::CoIssue(unsigned long)
//{
//    mangled_ppc("?CoIssue@CShaderProgram@D3DXShader@@MAAKK@Z");
//};

//unsigned int D3DXShader::TypeSize(class D3DXShader::CNode *)
//{
//    mangled_ppc("?TypeSize@D3DXShader@@YAIPAVCNode@1@@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::DestRegister(class D3DXShader::CArgument *, unsigned long *, unsigned long *, int *)
//{
//    mangled_ppc("?DestRegister@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@PAK1PAH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::DestMask(unsigned int *, unsigned int, unsigned long *, int)
//{
//    mangled_ppc("?DestMask@CShaderProgram@D3DXShader@@MAAJPAIIPAKH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::FindInput(class D3DXShader::CArgument *, unsigned long &, unsigned long &)
//{
//    mangled_ppc("?FindInput@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@AAK1@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::SrcRegister(class D3DXShader::CArgument *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?SrcRegister@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@PAK1@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::SrcSwizzle(unsigned int *, unsigned int, unsigned long, unsigned long *)
//{
//    mangled_ppc("?SrcSwizzle@CShaderProgram@D3DXShader@@MAAJPAIIKPAK@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::PredRegister(class D3DXShader::CArgument *, unsigned long *)
//{
//    mangled_ppc("?PredRegister@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@PAK@Z");
//};

//protected: long D3DXShader::CShaderProgram::ValidateInst(void)
//{
//    mangled_ppc("?ValidateInst@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: static long D3DXShader::CShaderProgram::ValidationError(char const *, unsigned int, unsigned long, unsigned int, char const *, void *)
//{
//    mangled_ppc("?ValidationError@CShaderProgram@D3DXShader@@KAJPBDIKI0PAX@Z");
//};

//protected: virtual unsigned int D3DXShader::CShaderProgram::CalcNumExtraSymbolTableEntries(void)
//{
//    mangled_ppc("?CalcNumExtraSymbolTableEntries@CShaderProgram@D3DXShader@@MAAIXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::AddUserOffsetInfo(class D3DXShader::CNodeVariable *, struct _D3DXSHADER_CONSTANTINFO *)
//{
//    mangled_ppc("?AddUserOffsetInfo@CShaderProgram@D3DXShader@@MAAJPAVCNodeVariable@2@PAU_D3DXSHADER_CONSTANTINFO@@@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::ConstrainPortsArgumentTest(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ConstrainPortsArgumentTest@CShaderProgram@D3DXShader@@MAAJPAVCInstruction@2@I@Z");
//};

//protected: struct D3DXShader::D3DX_SEMANTIC * D3DXShader::CShaderProgram::FindSemantic(struct D3DXShader::D3DX_SEMANTIC *, unsigned long)
//{
//    mangled_ppc("?FindSemantic@CShaderProgram@D3DXShader@@IAAPAUD3DX_SEMANTIC@2@PAU32@K@Z");
//};

//public: int D3DXShader::CInstruction::IsPartial(void)
//{
//    mangled_ppc("?IsPartial@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: D3DXShader::CShaderProgram::CShaderProgram(int)
//{
//    mangled_ppc("??0CShaderProgram@D3DXShader@@QAA@H@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitBeginShaderLoop(void)
//{
//    mangled_ppc("?EmitBeginShaderLoop@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitEndShaderLoop(void)
//{
//    mangled_ppc("?EmitEndShaderLoop@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitBeginFetchLoop(unsigned int, class D3DXShader::CArgument **)
//{
//    mangled_ppc("?EmitBeginFetchLoop@CShaderProgram@D3DXShader@@MAAJIPAPAVCArgument@2@@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitEndFetchLoop(void)
//{
//    mangled_ppc("?EmitEndFetchLoop@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitBeginExportLoop(void)
//{
//    mangled_ppc("?EmitBeginExportLoop@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitEndExportLoop(void)
//{
//    mangled_ppc("?EmitEndExportLoop@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitStreamElement(class D3DXShader::CArgument *, unsigned long *, int)
//{
//    mangled_ppc("?EmitStreamElement@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@PAKH@Z");
//};

//public: virtual D3DXShader::CShaderProgram::~CShaderProgram(void)
//{
//    mangled_ppc("??1CShaderProgram@D3DXShader@@UAA@XZ");
//};

//protected: long D3DXShader::CShaderProgram::ComputeSwizzle(class D3DXShader::CInstruction *, unsigned int *, unsigned int, unsigned int *, unsigned int *, unsigned int, int)
//{
//    mangled_ppc("?ComputeSwizzle@CShaderProgram@D3DXShader@@IAAJPAVCInstruction@2@PAII11IH@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchComplexTree(class D3DXShader::CInstruction *, struct D3DXShader::D3DX_MATCHENTRY const *, class D3DXShader::CInstruction **, unsigned int *, unsigned int *, unsigned int *, unsigned int, int)
//{
//    mangled_ppc("?MatchComplexTree@CShaderProgram@D3DXShader@@IAAJPAVCInstruction@2@PBUD3DX_MATCHENTRY@2@PAPAV32@PAI33IH@Z");
//};

//protected: long D3DXShader::CShaderProgram::CombineConstants(unsigned int, unsigned int, unsigned long, unsigned long, char)
//{
//    mangled_ppc("?CombineConstants@CShaderProgram@D3DXShader@@IAAJIIKKD@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDCL(class D3DXShader::CArgument *, unsigned long *)
//{
//    mangled_ppc("?EmitDCL@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@PAK@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::ValidateOutput(void)
//{
//    mangled_ppc("?ValidateOutput@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitInstructions(void)
//{
//    mangled_ppc("?EmitInstructions@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::PatternMatch(void)
//{
//    mangled_ppc("?PatternMatch@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::ConstrainPorts(void)
//{
//    mangled_ppc("?ConstrainPorts@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::PortConstraints(void)
//{
//    mangled_ppc("?PortConstraints@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchPOW(void)
//{
//    mangled_ppc("?MatchPOW@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::RemapSamplerMove(void)
//{
//    mangled_ppc("?RemapSamplerMove@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchMinMax(class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int *)
//{
//    mangled_ppc("?MatchMinMax@CShaderProgram@D3DXShader@@IAAJPAPAVCInstruction@2@0PAI@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchMinMax2(class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int *)
//{
//    mangled_ppc("?MatchMinMax2@CShaderProgram@D3DXShader@@IAAJPAPAVCInstruction@2@0PAI@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchSatModifier(void)
//{
//    mangled_ppc("?MatchSatModifier@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchIF2(void)
//{
//    mangled_ppc("?MatchIF2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchIF(void)
//{
//    mangled_ppc("?MatchIF@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchNEEQ(void)
//{
//    mangled_ppc("?MatchNEEQ@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchNEEQ2(void)
//{
//    mangled_ppc("?MatchNEEQ2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchIFCOND(void)
//{
//    mangled_ppc("?MatchIFCOND@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchBREAK(void)
//{
//    mangled_ppc("?MatchBREAK@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::FoldIterator(void)
//{
//    mangled_ppc("?FoldIterator@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::FoldBreak(void)
//{
//    mangled_ppc("?FoldBreak@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchBREAK_NEEQ(void)
//{
//    mangled_ppc("?MatchBREAK_NEEQ@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchBREAK_NEEQ2(void)
//{
//    mangled_ppc("?MatchBREAK_NEEQ2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchBREAK_COND(void)
//{
//    mangled_ppc("?MatchBREAK_COND@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchRepeatedNRM(void)
//{
//    mangled_ppc("?MatchRepeatedNRM@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchNRM(void)
//{
//    mangled_ppc("?MatchNRM@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchComplexMad(int)
//{
//    mangled_ppc("?MatchComplexMad@CShaderProgram@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchDP2Add(void)
//{
//    mangled_ppc("?MatchDP2Add@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::ValidModifier(unsigned int)
//{
//    mangled_ppc("?ValidModifier@CShaderProgram@D3DXShader@@IAAJI@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchLRP(void)
//{
//    mangled_ppc("?MatchLRP@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchLRP2(int)
//{
//    mangled_ppc("?MatchLRP2@CShaderProgram@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CShaderProgram::Scan(unsigned int *, int *, unsigned int, int)
//{
//    mangled_ppc("?Scan@CShaderProgram@D3DXShader@@IAAJPAIPAHIH@Z");
//};

//private: long D3DXShader::CShaderProgram::Reschedule_FindCoissue(struct D3DXShader::_D3DXCP_DATA *, class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int, int, int)
//{
//    mangled_ppc("?Reschedule_FindCoissue@CShaderProgram@D3DXShader@@AAAJPAU_D3DXCP_DATA@2@PAPAVCInstruction@2@1IHH@Z");
//};

//private: long D3DXShader::CShaderProgram::Reschedule_FindPair(struct D3DXShader::_D3DXCP_DATA *, struct D3DXShader::_D3DXCP_DATA *, class D3DXShader::CInstruction **, class D3DXShader::CInstruction **, unsigned int, int)
//{
//    mangled_ppc("?Reschedule_FindPair@CShaderProgram@D3DXShader@@AAAJPAU_D3DXCP_DATA@2@0PAPAVCInstruction@2@1IH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::Reschedule(void)
//{
//    mangled_ppc("?Reschedule@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::GroupIfs(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int, int, int, unsigned int, unsigned int)
//{
//    mangled_ppc("?GroupIfs@CShaderProgram@D3DXShader@@IAAJIIPAI000IHHII@Z");
//};

//unsigned long D3DXShader::NegateReg(unsigned long)
//{
//    mangled_ppc("?NegateReg@D3DXShader@@YAKK@Z");
//};

//long D3DXShader::EmitTypeInfo(class D3DXShader::CCommentBlock *, class D3DXShader::CNode *, unsigned int, unsigned long, unsigned long *)
//{
//    mangled_ppc("?EmitTypeInfo@D3DXShader@@YAJPAVCCommentBlock@1@PAVCNode@1@IKPAK@Z");
//};

//protected: long D3DXShader::CShaderProgram::Assure(unsigned int)
//{
//    mangled_ppc("?Assure@CShaderProgram@D3DXShader@@IAAJI@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::FindOutput(class D3DXShader::CArgument *, unsigned long &, unsigned long &, int *)
//{
//    mangled_ppc("?FindOutput@CShaderProgram@D3DXShader@@MAAJPAVCArgument@2@AAK1PAH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::FindObjectDims(void)
//{
//    mangled_ppc("?FindObjectDims@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::TempRegister(unsigned int, unsigned int *, unsigned int, unsigned int *, unsigned int)
//{
//    mangled_ppc("?TempRegister@CShaderProgram@D3DXShader@@MAAJIPAII0I@Z");
//};

//protected: struct D3DXShader::D3DX_SEMANTIC * D3DXShader::CShaderProgram::FindSemantic(unsigned long)
//{
//    mangled_ppc("?FindSemantic@CShaderProgram@D3DXShader@@IAAPAUD3DX_SEMANTIC@2@K@Z");
//};

//long StringCchCopyA(char *, unsigned int, char const *)
//{
//    mangled_ppc("?StringCchCopyA@@YAJPADIPBD@Z");
//};

//merged_83B5CE60
//{
//    mangled_ppc("merged_83B5CE60");
//};

//protected: long D3DXShader::CShaderProgram::IndexSemanticFromTable(class D3DXShader::CArgument *, struct D3DXShader::D3DX_SEMANTIC *, unsigned short, int *)
//{
//    mangled_ppc("?IndexSemanticFromTable@CShaderProgram@D3DXShader@@IAAJPAVCArgument@2@PAUD3DX_SEMANTIC@2@GPAH@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchSourceModifier(unsigned int, unsigned int, unsigned int *, unsigned int, class D3DXShader::CInstruction *, int)
//{
//    mangled_ppc("?MatchSourceModifier@CShaderProgram@D3DXShader@@IAAJIIPAIIPAVCInstruction@2@H@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchNEG(int)
//{
//    mangled_ppc("?MatchNEG@CShaderProgram@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchABSModifier(void)
//{
//    mangled_ppc("?MatchABSModifier@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchBiasModifier(void)
//{
//    mangled_ppc("?MatchBiasModifier@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchX2Modifier(void)
//{
//    mangled_ppc("?MatchX2Modifier@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchCompModifier(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?MatchCompModifier@CShaderProgram@D3DXShader@@IAAJPAVCInstruction@2@@Z");
//};

//protected: long D3DXShader::CShaderProgram::MatchComplexComp(void)
//{
//    mangled_ppc("?MatchComplexComp@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::MatchComplexBX2(void)
//{
//    mangled_ppc("?MatchComplexBX2@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::ResolveFlowControl(void)
//{
//    mangled_ppc("?ResolveFlowControl@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::Emit(unsigned long)
//{
//    mangled_ppc("?Emit@CShaderProgram@D3DXShader@@IAAJK@Z");
//};

//protected: long D3DXShader::CShaderProgram::EmitPreShader(void)
//{
//    mangled_ppc("?EmitPreShader@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::EmitSymbolTable(void)
//{
//    mangled_ppc("?EmitSymbolTable@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::EmitDebugInfo(void)
//{
//    mangled_ppc("?EmitDebugInfo@CShaderProgram@D3DXShader@@IAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::AddExtraSymbolTableEntries(class D3DXShader::CCommentBlock *, struct _D3DXSHADER_CONSTANTINFO *, unsigned int)
//{
//    mangled_ppc("?AddExtraSymbolTableEntries@CShaderProgram@D3DXShader@@MAAJPAVCCommentBlock@2@PAU_D3DXSHADER_CONSTANTINFO@@I@Z");
//};

//public: virtual long D3DXShader::CShaderProgram::GenerateCode(struct ID3DXBuffer **)
//{
//    mangled_ppc("?GenerateCode@CShaderProgram@D3DXShader@@UAAJPAPAUID3DXBuffer@@@Z");
//};

//public: virtual long D3DXShader::CShaderProgram::IndexSemantic(class D3DXShader::CArgument *, int)
//{
//    mangled_ppc("?IndexSemantic@CShaderProgram@D3DXShader@@UAAJPAVCArgument@2@H@Z");
//};

//protected: long D3DXShader::CShaderProgram::EmitInst(unsigned long)
//{
//    mangled_ppc("?EmitInst@CShaderProgram@D3DXShader@@IAAJK@Z");
//};

//protected: long D3DXShader::CShaderProgram::EmitReg(unsigned long)
//{
//    mangled_ppc("?EmitReg@CShaderProgram@D3DXShader@@IAAJK@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDest(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?EmitDest@CShaderProgram@D3DXShader@@MAAJKKK@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitSrc(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?EmitSrc@CShaderProgram@D3DXShader@@MAAJKKK@Z");
//};

//protected: long D3DXShader::CShaderProgram::EmitInstComplex(unsigned long, unsigned int *, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int, unsigned long, unsigned long, unsigned long, int)
//{
//    mangled_ppc("?EmitInstComplex@CShaderProgram@D3DXShader@@IAAJKPAII000IKKKH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDEF(unsigned int, float *)
//{
//    mangled_ppc("?EmitDEF@CShaderProgram@D3DXShader@@MAAJIPAM@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDEFi(unsigned int, unsigned int *)
//{
//    mangled_ppc("?EmitDEFi@CShaderProgram@D3DXShader@@MAAJIPAI@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitENDLOOP(void)
//{
//    mangled_ppc("?EmitENDLOOP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitENDLOOP_INC(void)
//{
//    mangled_ppc("?EmitENDLOOP_INC@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitBREAK(void)
//{
//    mangled_ppc("?EmitBREAK@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitTEX(void)
//{
//    mangled_ppc("?EmitTEX@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitTEXDD(void)
//{
//    mangled_ppc("?EmitTEXDD@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitTEXProj(void)
//{
//    mangled_ppc("?EmitTEXProj@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitTEXBias(void)
//{
//    mangled_ppc("?EmitTEXBias@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitTEXLOD(void)
//{
//    mangled_ppc("?EmitTEXLOD@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDP2ADD(void)
//{
//    mangled_ppc("?EmitDP2ADD@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitCLIP(void)
//{
//    mangled_ppc("?EmitCLIP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitSINCOS(void)
//{
//    mangled_ppc("?EmitSINCOS@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitIF(void)
//{
//    mangled_ppc("?EmitIF@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitENDIF(void)
//{
//    mangled_ppc("?EmitENDIF@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitANDIF(void)
//{
//    mangled_ppc("?EmitANDIF@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitANDIFBOOL(int)
//{
//    mangled_ppc("?EmitANDIFBOOL@CShaderProgram@D3DXShader@@MAAJH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitANDELSE(void)
//{
//    mangled_ppc("?EmitANDELSE@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitANDENDIF(void)
//{
//    mangled_ppc("?EmitANDENDIF@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitNEG(void)
//{
//    mangled_ppc("?EmitNEG@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitPOW(void)
//{
//    mangled_ppc("?EmitPOW@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitLRP(void)
//{
//    mangled_ppc("?EmitLRP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitNRM(void)
//{
//    mangled_ppc("?EmitNRM@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitMAD(void)
//{
//    mangled_ppc("?EmitMAD@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitMAT(void)
//{
//    mangled_ppc("?EmitMAT@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CShaderProgram::EmitInstSimple(unsigned long, int)
//{
//    mangled_ppc("?EmitInstSimple@CShaderProgram@D3DXShader@@IAAJKH@Z");
//};

//protected: long D3DXShader::CShaderProgram::EmitInstScalar(unsigned long, unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned long, int)
//{
//    mangled_ppc("?EmitInstScalar@CShaderProgram@D3DXShader@@IAAJKPAI0IIKH@Z");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitLOOP(void)
//{
//    mangled_ppc("?EmitLOOP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitLOOP_INC(void)
//{
//    mangled_ppc("?EmitLOOP_INC@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitMOV(void)
//{
//    mangled_ppc("?EmitMOV@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDSX(void)
//{
//    mangled_ppc("?EmitDSX@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDSY(void)
//{
//    mangled_ppc("?EmitDSY@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitRCP(void)
//{
//    mangled_ppc("?EmitRCP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitFRC(void)
//{
//    mangled_ppc("?EmitFRC@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitEXP(void)
//{
//    mangled_ppc("?EmitEXP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitLOG(void)
//{
//    mangled_ppc("?EmitLOG@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitRSQ(void)
//{
//    mangled_ppc("?EmitRSQ@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitMIN(void)
//{
//    mangled_ppc("?EmitMIN@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitMAX(void)
//{
//    mangled_ppc("?EmitMAX@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitLT(void)
//{
//    mangled_ppc("?EmitLT@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitGE(void)
//{
//    mangled_ppc("?EmitGE@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitADD(void)
//{
//    mangled_ppc("?EmitADD@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitMUL(void)
//{
//    mangled_ppc("?EmitMUL@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDST(void)
//{
//    mangled_ppc("?EmitDST@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitDOT(void)
//{
//    mangled_ppc("?EmitDOT@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitLIT(void)
//{
//    mangled_ppc("?EmitLIT@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitCMP(void)
//{
//    mangled_ppc("?EmitCMP@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitCND(void)
//{
//    mangled_ppc("?EmitCND@CShaderProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CShaderProgram::EmitABS(void)
//{
//    mangled_ppc("?EmitABS@CShaderProgram@D3DXShader@@MAAJXZ");
//};

