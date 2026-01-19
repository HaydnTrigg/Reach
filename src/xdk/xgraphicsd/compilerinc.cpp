/* ---------- headers */

#include "xdk\xgraphicsd\compilerinc.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **XGRAPHICS::E_INTERP_USAGE_STR; // "?E_INTERP_USAGE_STR@XGRAPHICS@@3PAPBDA"
// char const **XGRAPHICS::E_SSM_COMPILEGET_QUERY_STR; // "?E_SSM_COMPILEGET_QUERY_STR@XGRAPHICS@@3PAPBDA"

// public: XGRAPHICS::Arena::Arena(class XGRAPHICS::Compiler *);
// public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForPointAA(void);
// public: void * XGRAPHICS::Arena::Malloc(unsigned int) const;
// public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForPixelFog(void);
// public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForLineAA(void);
// public: void XGRAPHICS::Arena::Free(void *) const;
// public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForPolyStipple(void);
// public: void XGRAPHICS::Arena::Release(void) const;
// public: void XGRAPHICS::Arena::SetRecycle(bool);
// public: unsigned int XGRAPHICS::Compiler::GetVertexFetchConst(int, unsigned int *, unsigned int *);
// public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConst(int);
// public: virtual void XGRAPHICS::ShaderOutput::SetConstByValue(int, int, float);
// public: virtual void XGRAPHICS::ShaderPairOutput::SetConstByValue(int, int, float);
// public: virtual void XGRAPHICS::ShaderPairOutput::SetConstByName(int, int, int, int);
// public: virtual void XGRAPHICS::ShaderPairOutput::SetInterpUsage(int, int, int, int, int *, int *, int *);
// public: virtual void XGRAPHICS::ShaderPairOutput::AllocTextureFetchConst(int, bool, unsigned int *, unsigned int *);
// public: virtual void XGRAPHICS::ShaderPairOutput::AllocVertexFetchConst(int, bool, unsigned int *, unsigned int *);
// public: virtual struct XGRAPHICS::_CS_COMPILED_SHADER * XGRAPHICS::ShaderPairOutput::GetPCS(void);
// public: virtual void XGRAPHICS::ShaderOutput::SetConstByName(int, int, int, int);
// public: virtual void XGRAPHICS::ShaderOutput::SetInterpUsage(int, int, int, int, int *, int *, int *);
// public: virtual void XGRAPHICS::ShaderOutput::AllocTextureFetchConst(int, bool, unsigned int *, unsigned int *);
// public: virtual void XGRAPHICS::ShaderOutput::AllocVertexFetchConst(int, bool, unsigned int *, unsigned int *);
// public: void XGRAPHICS::Compiler::MemDumpData(void);
// public: static int XGRAPHICS::Compiler::GetVertexFromDcl(int, int);
// public: void XGRAPHICS::Compiler::RSLog(char const *, char *);
// bool XGRAPHICS::IsBlank(char);
// public: void XGRAPHICS::Compiler::FlushOutput(void);
// public: void XGRAPHICS::Compiler::ResetValueNumber(void);
// public: void XGRAPHICS::Compiler::SetDebugOutput(bool, bool, bool, bool, bool, bool);
// public: char const * XGRAPHICS::Compiler::DbgFileName(void) const;
// public: void XGRAPHICS::Compiler::SetBaseName(char *);
// public: char const * XGRAPHICS::Compiler::GetExtBaseName(void) const;
// public: void XGRAPHICS::Compiler::SetExtBaseName(int, char *);
// public: char * XGRAPHICS::Compiler::CodeBuffer(int, int);
// public: void XGRAPHICS::Compiler::ReleaseCodeBuffer(int);
// public: virtual struct XGRAPHICS::_CS_COMPILED_SHADER * XGRAPHICS::ShaderOutput::GetPCS(void);
// public: static void XGRAPHICS::ILProgram::operator delete(void *);
// public: unsigned int * XGRAPHICS::ILProgram::operator()(int) const;
// public: bool const XGRAPHICS::ILProgram::GetFlag(unsigned int) const;
// public: bool XGRAPHICS::ILProgram::IsPixel(void) const;
// public: int XGRAPHICS::ILProgram::NumInputShaders(void) const;
// public: XGRAPHICS::HwLimits::HwLimits(void);
// public: static void * XGRAPHICS::LinkageInfo::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Disassembler::~Disassembler(void);
// public: static void * XGRAPHICS::SSMHandle::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::SSMHandle::SSMHandle(void);
// public: XGRAPHICS::ShaderPairOutput::ShaderPairOutput(void *, void *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::Compiler::ResetTempNumber(void);
// public: void XGRAPHICS::Compiler::ResetLoopConstSetNumber(void);
// public: void XGRAPHICS::Compiler::ResetLoopInputSetNumber(void);
// public: void XGRAPHICS::Compiler::ResetLoopOutputSetNumber(void);
// public: void XGRAPHICS::Compiler::ResetGlobalNumber(void);
// public: void XGRAPHICS::Compiler::Free(void *);
// public: class XGRAPHICS::Arena const * XGRAPHICS::Compiler::ApplicationAp(void) const;
// public: class XGRAPHICS::Arena const * XGRAPHICS::Compiler::ShaderAp(void) const;
// public: class XGRAPHICS::Arena const * XGRAPHICS::Compiler::PhaseAp(void) const;
// public: void XGRAPHICS::Compiler::SetShaderIndex(int);
// public: struct XGRAPHICS::CompAState * XGRAPHICS::Compiler::GetCurrentAbstractState(void) const;
// public: void XGRAPHICS::Compiler::SetOptFlag(int);
// public: void XGRAPHICS::Compiler::ResetOptFlag(int);
// public: bool XGRAPHICS::Compiler::OptFlagIsOn(int) const;
// public: void XGRAPHICS::Compiler::Error(int);
// public: void * XGRAPHICS::Compiler::Malloc(unsigned int);
// public: static void * XGRAPHICS::CFG::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::CFG::operator delete(void *);
// public: int const XGRAPHICS::CFG::GetMaxTempNumber(void) const;
// public: int const XGRAPHICS::CFG::GetNumTemps(void) const;
// public: int const XGRAPHICS::CFG::GetNumInterps(void) const;
// public: int const XGRAPHICS::CFG::GetFirstInstIsFetch(void) const;
// public: static void * XGRAPHICS::ILInstIterator::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::ILInstIterator::operator delete(void *);
// public: XGRAPHICS::CTBitSet<8192, unsigned long>::CTBitSet<8192, unsigned long>(void);
// public: void XGRAPHICS::Compiler::MakeAp(int);
// public: void XGRAPHICS::Compiler::OptFlagDefaults(void);
// public: void XGRAPHICS::Compiler::ReleaseSpace(bool);
// public: virtual void XGRAPHICS::ShaderPairOutput::AllocFetchConst(enum XGRAPHICS::IL_Shader_Type, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// public: virtual void XGRAPHICS::ShaderOutput::AllocFetchConst(enum XGRAPHICS::IL_Shader_Type, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// public: void * XGRAPHICS::ILProgram::`scalar deleting destructor'(unsigned int);
// public: XGRAPHICS::CompilerDisassem::~CompilerDisassem(void);
// public: void XGRAPHICS::Compiler::SetRecycle(void);
// public: void * XGRAPHICS::ILInstIterator::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::CFG::`scalar deleting destructor'(unsigned int);
// public: static void XGRAPHICS::Compiler::RSLogWrapper(void *, char const *, ...);
// private: void XGRAPHICS::Compiler::OpenCompilerOutputFile(char const *, char *);
// public: void XGRAPHICS::Compiler::Output(char const *, ...);
// public: void XGRAPHICS::Compiler::RelOutput(char const *, ...);
// public: void XGRAPHICS::Compiler::Voutput(char const *, char *);
// public: void XGRAPHICS::Compiler::InitContextPerApp(void);
// public: void XGRAPHICS::Compiler::InitContextPerShader(void);
// public: static class XGRAPHICS::SSMHandle * XGRAPHICS::SSMHandle::Make(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_CS_COMPILED_SHADER *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::ShaderOutput::OutputVertexPatch(int, int, class XGRAPHICS::Compiler *, int);
// public: XGRAPHICS::Crayola::Crayola(void);
// public: virtual void XGRAPHICS::Crayola::AdjustForPixelShader(void);
// public: virtual void XGRAPHICS::Crayola::AdjustForVertexShader(void);
// public: XGRAPHICS::Disassembler::Disassembler(void);
// public: XGRAPHICS::ShaderOutput::ShaderOutput(void *, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::CompilerDisassem::CompilerDisassem(class XGRAPHICS::Compiler *);
// protected: virtual void XGRAPHICS::CompilerDisassem::DoPrint(char *, char *);
// private: XGRAPHICS::Compiler::~Compiler(void);
// public: XGRAPHICS::Compiler::Compiler(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SS_SHADER_STORE *, struct XGRAPHICS::_SSM_REGISTRY *);
// public: void XGRAPHICS::Compiler::SetConstantComponent(int, int, struct XGRAPHICS::konst);
// public: void XGRAPHICS::Compiler::SetInterpUsage(int, int, int, int, int *, int *, int *);
// public: virtual void XGRAPHICS::ShaderPairOutput::OutputVertexPatch(int, int, class XGRAPHICS::Compiler *, int);
// public: void XGRAPHICS::Compiler::PerfDumpData(void);
// public: void XGRAPHICS::Compiler::FlushRSLog(void);
// public: void XGRAPHICS::Compiler::LookupAndSet(char *, int);
// public: void XGRAPHICS::Compiler::ProcessInput(void);
// public: static class XGRAPHICS::SSMHandle * XGRAPHICS::SSMHandle::Make(struct XGRAPHICS::_CS_COMPILED_SHADER *, class XGRAPHICS::Compiler *);
// private: void XGRAPHICS::Compiler::Compile(class XGRAPHICS::ILProgram *);
// public: int XGRAPHICS::Compiler::CompileShaderPair(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned char *, unsigned char *, struct XGRAPHICS::_ABSTRACT_STATE *);
// public: int XGRAPHICS::Compiler::CompileShader(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned char *, struct XGRAPHICS::_ABSTRACT_STATE *);

//public: XGRAPHICS::Arena::Arena(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Arena@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForPointAA(void)
//{
//    mangled_ppc("?GetTextureFetchConstForPointAA@Compiler@XGRAPHICS@@QAAIXZ");
//};

//public: void * XGRAPHICS::Arena::Malloc(unsigned int) const
//{
//    mangled_ppc("?Malloc@Arena@XGRAPHICS@@QBAPAXI@Z");
//};

//public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForPixelFog(void)
//{
//    mangled_ppc("?GetTextureFetchConstForPixelFog@Compiler@XGRAPHICS@@QAAIXZ");
//};

//public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForLineAA(void)
//{
//    mangled_ppc("?GetTextureFetchConstForLineAA@Compiler@XGRAPHICS@@QAAIXZ");
//};

//public: void XGRAPHICS::Arena::Free(void *) const
//{
//    mangled_ppc("?Free@Arena@XGRAPHICS@@QBAXPAX@Z");
//};

//public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConstForPolyStipple(void)
//{
//    mangled_ppc("?GetTextureFetchConstForPolyStipple@Compiler@XGRAPHICS@@QAAIXZ");
//};

//public: void XGRAPHICS::Arena::Release(void) const
//{
//    mangled_ppc("?Release@Arena@XGRAPHICS@@QBAXXZ");
//};

//public: void XGRAPHICS::Arena::SetRecycle(bool)
//{
//    mangled_ppc("?SetRecycle@Arena@XGRAPHICS@@QAAX_N@Z");
//};

//public: unsigned int XGRAPHICS::Compiler::GetVertexFetchConst(int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetVertexFetchConst@Compiler@XGRAPHICS@@QAAIHPAI0@Z");
//};

//public: unsigned int XGRAPHICS::Compiler::GetTextureFetchConst(int)
//{
//    mangled_ppc("?GetTextureFetchConst@Compiler@XGRAPHICS@@QAAIH@Z");
//};

//public: virtual void XGRAPHICS::ShaderOutput::SetConstByValue(int, int, float)
//{
//    mangled_ppc("?SetConstByValue@ShaderOutput@XGRAPHICS@@UAAXHHM@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::SetConstByValue(int, int, float)
//{
//    mangled_ppc("?SetConstByValue@ShaderPairOutput@XGRAPHICS@@UAAXHHM@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::SetConstByName(int, int, int, int)
//{
//    mangled_ppc("?SetConstByName@ShaderPairOutput@XGRAPHICS@@UAAXHHHH@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::SetInterpUsage(int, int, int, int, int *, int *, int *)
//{
//    mangled_ppc("?SetInterpUsage@ShaderPairOutput@XGRAPHICS@@UAAXHHHHPAH00@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::AllocTextureFetchConst(int, bool, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AllocTextureFetchConst@ShaderPairOutput@XGRAPHICS@@UAAXH_NPAI1@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::AllocVertexFetchConst(int, bool, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AllocVertexFetchConst@ShaderPairOutput@XGRAPHICS@@UAAXH_NPAI1@Z");
//};

//public: virtual struct XGRAPHICS::_CS_COMPILED_SHADER * XGRAPHICS::ShaderPairOutput::GetPCS(void)
//{
//    mangled_ppc("?GetPCS@ShaderPairOutput@XGRAPHICS@@UAAPAU_CS_COMPILED_SHADER@2@XZ");
//};

//public: virtual void XGRAPHICS::ShaderOutput::SetConstByName(int, int, int, int)
//{
//    mangled_ppc("?SetConstByName@ShaderOutput@XGRAPHICS@@UAAXHHHH@Z");
//};

//public: virtual void XGRAPHICS::ShaderOutput::SetInterpUsage(int, int, int, int, int *, int *, int *)
//{
//    mangled_ppc("?SetInterpUsage@ShaderOutput@XGRAPHICS@@UAAXHHHHPAH00@Z");
//};

//public: virtual void XGRAPHICS::ShaderOutput::AllocTextureFetchConst(int, bool, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AllocTextureFetchConst@ShaderOutput@XGRAPHICS@@UAAXH_NPAI1@Z");
//};

//public: virtual void XGRAPHICS::ShaderOutput::AllocVertexFetchConst(int, bool, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AllocVertexFetchConst@ShaderOutput@XGRAPHICS@@UAAXH_NPAI1@Z");
//};

//public: void XGRAPHICS::Compiler::MemDumpData(void)
//{
//    mangled_ppc("?MemDumpData@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: static int XGRAPHICS::Compiler::GetVertexFromDcl(int, int)
//{
//    mangled_ppc("?GetVertexFromDcl@Compiler@XGRAPHICS@@SAHHH@Z");
//};

//public: void XGRAPHICS::Compiler::RSLog(char const *, char *)
//{
//    mangled_ppc("?RSLog@Compiler@XGRAPHICS@@QAAXPBDPAD@Z");
//};

//bool XGRAPHICS::IsBlank(char)
//{
//    mangled_ppc("?IsBlank@XGRAPHICS@@YA_ND@Z");
//};

//public: void XGRAPHICS::Compiler::FlushOutput(void)
//{
//    mangled_ppc("?FlushOutput@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::ResetValueNumber(void)
//{
//    mangled_ppc("?ResetValueNumber@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::SetDebugOutput(bool, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?SetDebugOutput@Compiler@XGRAPHICS@@QAAX_N00000@Z");
//};

//public: char const * XGRAPHICS::Compiler::DbgFileName(void) const
//{
//    mangled_ppc("?DbgFileName@Compiler@XGRAPHICS@@QBAPBDXZ");
//};

//public: void XGRAPHICS::Compiler::SetBaseName(char *)
//{
//    mangled_ppc("?SetBaseName@Compiler@XGRAPHICS@@QAAXPAD@Z");
//};

//public: char const * XGRAPHICS::Compiler::GetExtBaseName(void) const
//{
//    mangled_ppc("?GetExtBaseName@Compiler@XGRAPHICS@@QBAPBDXZ");
//};

//public: void XGRAPHICS::Compiler::SetExtBaseName(int, char *)
//{
//    mangled_ppc("?SetExtBaseName@Compiler@XGRAPHICS@@QAAXHPAD@Z");
//};

//public: char * XGRAPHICS::Compiler::CodeBuffer(int, int)
//{
//    mangled_ppc("?CodeBuffer@Compiler@XGRAPHICS@@QAAPADHH@Z");
//};

//public: void XGRAPHICS::Compiler::ReleaseCodeBuffer(int)
//{
//    mangled_ppc("?ReleaseCodeBuffer@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: virtual struct XGRAPHICS::_CS_COMPILED_SHADER * XGRAPHICS::ShaderOutput::GetPCS(void)
//{
//    mangled_ppc("?GetPCS@ShaderOutput@XGRAPHICS@@UAAPAU_CS_COMPILED_SHADER@2@XZ");
//};

//public: static void XGRAPHICS::ILProgram::operator delete(void *)
//{
//    mangled_ppc("??3ILProgram@XGRAPHICS@@SAXPAX@Z");
//};

//public: unsigned int * XGRAPHICS::ILProgram::operator()(int) const
//{
//    mangled_ppc("??RILProgram@XGRAPHICS@@QBAPAIH@Z");
//};

//public: bool const XGRAPHICS::ILProgram::GetFlag(unsigned int) const
//{
//    mangled_ppc("?GetFlag@ILProgram@XGRAPHICS@@QBA?B_NI@Z");
//};

//public: bool XGRAPHICS::ILProgram::IsPixel(void) const
//{
//    mangled_ppc("?IsPixel@ILProgram@XGRAPHICS@@QBA_NXZ");
//};

//public: int XGRAPHICS::ILProgram::NumInputShaders(void) const
//{
//    mangled_ppc("?NumInputShaders@ILProgram@XGRAPHICS@@QBAHXZ");
//};

//public: XGRAPHICS::HwLimits::HwLimits(void)
//{
//    mangled_ppc("??0HwLimits@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::LinkageInfo::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2LinkageInfo@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::Disassembler::~Disassembler(void)
//{
//    mangled_ppc("??1Disassembler@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::SSMHandle::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2SSMHandle@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::SSMHandle::SSMHandle(void)
//{
//    mangled_ppc("??0SSMHandle@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::ShaderPairOutput::ShaderPairOutput(void *, void *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ShaderPairOutput@XGRAPHICS@@QAA@PAX0PAVCompiler@1@@Z");
//};

//public: void XGRAPHICS::Compiler::ResetTempNumber(void)
//{
//    mangled_ppc("?ResetTempNumber@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::ResetLoopConstSetNumber(void)
//{
//    mangled_ppc("?ResetLoopConstSetNumber@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::ResetLoopInputSetNumber(void)
//{
//    mangled_ppc("?ResetLoopInputSetNumber@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::ResetLoopOutputSetNumber(void)
//{
//    mangled_ppc("?ResetLoopOutputSetNumber@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::ResetGlobalNumber(void)
//{
//    mangled_ppc("?ResetGlobalNumber@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::Free(void *)
//{
//    mangled_ppc("?Free@Compiler@XGRAPHICS@@QAAXPAX@Z");
//};

//public: class XGRAPHICS::Arena const * XGRAPHICS::Compiler::ApplicationAp(void) const
//{
//    mangled_ppc("?ApplicationAp@Compiler@XGRAPHICS@@QBAPBVArena@2@XZ");
//};

//public: class XGRAPHICS::Arena const * XGRAPHICS::Compiler::ShaderAp(void) const
//{
//    mangled_ppc("?ShaderAp@Compiler@XGRAPHICS@@QBAPBVArena@2@XZ");
//};

//public: class XGRAPHICS::Arena const * XGRAPHICS::Compiler::PhaseAp(void) const
//{
//    mangled_ppc("?PhaseAp@Compiler@XGRAPHICS@@QBAPBVArena@2@XZ");
//};

//public: void XGRAPHICS::Compiler::SetShaderIndex(int)
//{
//    mangled_ppc("?SetShaderIndex@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: struct XGRAPHICS::CompAState * XGRAPHICS::Compiler::GetCurrentAbstractState(void) const
//{
//    mangled_ppc("?GetCurrentAbstractState@Compiler@XGRAPHICS@@QBAPAUCompAState@2@XZ");
//};

//public: void XGRAPHICS::Compiler::SetOptFlag(int)
//{
//    mangled_ppc("?SetOptFlag@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::Compiler::ResetOptFlag(int)
//{
//    mangled_ppc("?ResetOptFlag@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: bool XGRAPHICS::Compiler::OptFlagIsOn(int) const
//{
//    mangled_ppc("?OptFlagIsOn@Compiler@XGRAPHICS@@QBA_NH@Z");
//};

//public: void XGRAPHICS::Compiler::Error(int)
//{
//    mangled_ppc("?Error@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: void * XGRAPHICS::Compiler::Malloc(unsigned int)
//{
//    mangled_ppc("?Malloc@Compiler@XGRAPHICS@@QAAPAXI@Z");
//};

//public: static void * XGRAPHICS::CFG::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2CFG@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::CFG::operator delete(void *)
//{
//    mangled_ppc("??3CFG@XGRAPHICS@@SAXPAX@Z");
//};

//public: int const XGRAPHICS::CFG::GetMaxTempNumber(void) const
//{
//    mangled_ppc("?GetMaxTempNumber@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::CFG::GetNumTemps(void) const
//{
//    mangled_ppc("?GetNumTemps@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::CFG::GetNumInterps(void) const
//{
//    mangled_ppc("?GetNumInterps@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::CFG::GetFirstInstIsFetch(void) const
//{
//    mangled_ppc("?GetFirstInstIsFetch@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: static void * XGRAPHICS::ILInstIterator::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2ILInstIterator@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::ILInstIterator::operator delete(void *)
//{
//    mangled_ppc("??3ILInstIterator@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::CTBitSet<8192, unsigned long>::CTBitSet<8192, unsigned long>(void)
//{
//    mangled_ppc("??0?$CTBitSet@$0CAAA@K@XGRAPHICS@@QAA@XZ");
//};

//public: void XGRAPHICS::Compiler::MakeAp(int)
//{
//    mangled_ppc("?MakeAp@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::Compiler::OptFlagDefaults(void)
//{
//    mangled_ppc("?OptFlagDefaults@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::ReleaseSpace(bool)
//{
//    mangled_ppc("?ReleaseSpace@Compiler@XGRAPHICS@@QAAX_N@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::AllocFetchConst(enum XGRAPHICS::IL_Shader_Type, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AllocFetchConst@ShaderPairOutput@XGRAPHICS@@UAAXW4IL_Shader_Type@2@W4E_FETCH_TYPE@2@IPAI2@Z");
//};

//public: virtual void XGRAPHICS::ShaderOutput::AllocFetchConst(enum XGRAPHICS::IL_Shader_Type, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AllocFetchConst@ShaderOutput@XGRAPHICS@@UAAXW4IL_Shader_Type@2@W4E_FETCH_TYPE@2@IPAI2@Z");
//};

//public: void * XGRAPHICS::ILProgram::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GILProgram@XGRAPHICS@@QAAPAXI@Z");
//};

//public: XGRAPHICS::CompilerDisassem::~CompilerDisassem(void)
//{
//    mangled_ppc("??1CompilerDisassem@XGRAPHICS@@QAA@XZ");
//};

//public: void XGRAPHICS::Compiler::SetRecycle(void)
//{
//    mangled_ppc("?SetRecycle@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void * XGRAPHICS::ILInstIterator::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GILInstIterator@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::CFG::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCFG@XGRAPHICS@@QAAPAXI@Z");
//};

//public: static void XGRAPHICS::Compiler::RSLogWrapper(void *, char const *, ...)
//{
//    mangled_ppc("?RSLogWrapper@Compiler@XGRAPHICS@@SAXPAXPBDZZ");
//};

//private: void XGRAPHICS::Compiler::OpenCompilerOutputFile(char const *, char *)
//{
//    mangled_ppc("?OpenCompilerOutputFile@Compiler@XGRAPHICS@@AAAXPBDPAD@Z");
//};

//public: void XGRAPHICS::Compiler::Output(char const *, ...)
//{
//    mangled_ppc("?Output@Compiler@XGRAPHICS@@QAAXPBDZZ");
//};

//public: void XGRAPHICS::Compiler::RelOutput(char const *, ...)
//{
//    mangled_ppc("?RelOutput@Compiler@XGRAPHICS@@QAAXPBDZZ");
//};

//public: void XGRAPHICS::Compiler::Voutput(char const *, char *)
//{
//    mangled_ppc("?Voutput@Compiler@XGRAPHICS@@QAAXPBDPAD@Z");
//};

//public: void XGRAPHICS::Compiler::InitContextPerApp(void)
//{
//    mangled_ppc("?InitContextPerApp@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::InitContextPerShader(void)
//{
//    mangled_ppc("?InitContextPerShader@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: static class XGRAPHICS::SSMHandle * XGRAPHICS::SSMHandle::Make(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_CS_COMPILED_SHADER *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Make@SSMHandle@XGRAPHICS@@SAPAV12@PAU_CS_COMPILED_SHADER@2@0PAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::ShaderOutput::OutputVertexPatch(int, int, class XGRAPHICS::Compiler *, int)
//{
//    mangled_ppc("?OutputVertexPatch@ShaderOutput@XGRAPHICS@@UAAXHHPAVCompiler@2@H@Z");
//};

//public: XGRAPHICS::Crayola::Crayola(void)
//{
//    mangled_ppc("??0Crayola@XGRAPHICS@@QAA@XZ");
//};

//public: virtual void XGRAPHICS::Crayola::AdjustForPixelShader(void)
//{
//    mangled_ppc("?AdjustForPixelShader@Crayola@XGRAPHICS@@UAAXXZ");
//};

//public: virtual void XGRAPHICS::Crayola::AdjustForVertexShader(void)
//{
//    mangled_ppc("?AdjustForVertexShader@Crayola@XGRAPHICS@@UAAXXZ");
//};

//public: XGRAPHICS::Disassembler::Disassembler(void)
//{
//    mangled_ppc("??0Disassembler@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::ShaderOutput::ShaderOutput(void *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ShaderOutput@XGRAPHICS@@QAA@PAXPAVCompiler@1@@Z");
//};

//public: XGRAPHICS::CompilerDisassem::CompilerDisassem(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0CompilerDisassem@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//protected: virtual void XGRAPHICS::CompilerDisassem::DoPrint(char *, char *)
//{
//    mangled_ppc("?DoPrint@CompilerDisassem@XGRAPHICS@@MAAXPAD0@Z");
//};

//private: XGRAPHICS::Compiler::~Compiler(void)
//{
//    mangled_ppc("??1Compiler@XGRAPHICS@@AAA@XZ");
//};

//public: XGRAPHICS::Compiler::Compiler(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SS_SHADER_STORE *, struct XGRAPHICS::_SSM_REGISTRY *)
//{
//    mangled_ppc("??0Compiler@XGRAPHICS@@QAA@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_SS_SHADER_STORE@1@PAU_SSM_REGISTRY@1@@Z");
//};

//public: void XGRAPHICS::Compiler::SetConstantComponent(int, int, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?SetConstantComponent@Compiler@XGRAPHICS@@QAAXHHUkonst@2@@Z");
//};

//public: void XGRAPHICS::Compiler::SetInterpUsage(int, int, int, int, int *, int *, int *)
//{
//    mangled_ppc("?SetInterpUsage@Compiler@XGRAPHICS@@QAAXHHHHPAH00@Z");
//};

//public: virtual void XGRAPHICS::ShaderPairOutput::OutputVertexPatch(int, int, class XGRAPHICS::Compiler *, int)
//{
//    mangled_ppc("?OutputVertexPatch@ShaderPairOutput@XGRAPHICS@@UAAXHHPAVCompiler@2@H@Z");
//};

//public: void XGRAPHICS::Compiler::PerfDumpData(void)
//{
//    mangled_ppc("?PerfDumpData@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::FlushRSLog(void)
//{
//    mangled_ppc("?FlushRSLog@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Compiler::LookupAndSet(char *, int)
//{
//    mangled_ppc("?LookupAndSet@Compiler@XGRAPHICS@@QAAXPADH@Z");
//};

//public: void XGRAPHICS::Compiler::ProcessInput(void)
//{
//    mangled_ppc("?ProcessInput@Compiler@XGRAPHICS@@QAAXXZ");
//};

//public: static class XGRAPHICS::SSMHandle * XGRAPHICS::SSMHandle::Make(struct XGRAPHICS::_CS_COMPILED_SHADER *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Make@SSMHandle@XGRAPHICS@@SAPAV12@PAU_CS_COMPILED_SHADER@2@PAVCompiler@2@@Z");
//};

//private: void XGRAPHICS::Compiler::Compile(class XGRAPHICS::ILProgram *)
//{
//    mangled_ppc("?Compile@Compiler@XGRAPHICS@@AAAXPAVILProgram@2@@Z");
//};

//public: int XGRAPHICS::Compiler::CompileShaderPair(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned char *, unsigned char *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CompileShaderPair@Compiler@XGRAPHICS@@QAAHPAU_CS_COMPILED_SHADER@2@0PAE1PAU_ABSTRACT_STATE@2@@Z");
//};

//public: int XGRAPHICS::Compiler::CompileShader(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned char *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CompileShader@Compiler@XGRAPHICS@@QAAHPAU_CS_COMPILED_SHADER@2@PAEPAU_ABSTRACT_STATE@2@@Z");
//};

