/* ---------- headers */

#include "xdk\xgraphicsd\ssmstatecompiler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const XGRAPHICS::Disassembler::kMaxCFInstructions; // "?kMaxCFInstructions@Disassembler@XGRAPHICS@@0IB"
// private: static int const XGRAPHICS::CTBitSet<8192, unsigned long>::DWORD_SIZE; // "?DWORD_SIZE@?$CTBitSet@$0CAAA@K@XGRAPHICS@@0HB"
// private: static int const XGRAPHICS::CTBitSet<8192, unsigned long>::BITS_PER_DWORD; // "?BITS_PER_DWORD@?$CTBitSet@$0CAAA@K@XGRAPHICS@@0HB"

// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CC_Destroy(struct XGRAPHICS::_CC_STATE_COMPILER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::NonRTS_CompileProgram(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM **);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TranslateShader(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, bool, struct XGRAPHICS::_CS_COMPILED_SHADER **, unsigned char *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::RTS_CompileProgram(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM **);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CC_CompileProgram(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM **);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CC_CompileShader(struct XGRAPHICS::_CC_STATE_COMPILER *, unsigned int, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_COMPILED_SHADER *);
// struct XGRAPHICS::_CC_STATE_COMPILER * XGRAPHICS::CC_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_PS_PROGRAM_STORE *, struct XGRAPHICS::_SS_SHADER_STORE *, struct XGRAPHICS::_SR_SHADER_RECYCLER *, struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_SSM_REGISTRY *, unsigned int);

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CC_Destroy(struct XGRAPHICS::_CC_STATE_COMPILER *)
//{
//    mangled_ppc("?CC_Destroy@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CC_STATE_COMPILER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::NonRTS_CompileProgram(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM **)
//{
//    mangled_ppc("?NonRTS_CompileProgram@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CC_STATE_COMPILER@1@PAU_ABSTRACT_STATE@1@PAPAU_CP_COMPILED_PROGRAM@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TranslateShader(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, bool, struct XGRAPHICS::_CS_COMPILED_SHADER **, unsigned char *)
//{
//    mangled_ppc("?TranslateShader@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CC_STATE_COMPILER@1@PAU_ABSTRACT_STATE@1@I_NPAPAU_CS_COMPILED_SHADER@1@PAE@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::RTS_CompileProgram(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM **)
//{
//    mangled_ppc("?RTS_CompileProgram@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CC_STATE_COMPILER@1@PAU_ABSTRACT_STATE@1@PAPAU_CP_COMPILED_PROGRAM@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CC_CompileProgram(struct XGRAPHICS::_CC_STATE_COMPILER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM **)
//{
//    mangled_ppc("?CC_CompileProgram@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CC_STATE_COMPILER@1@PAU_ABSTRACT_STATE@1@PAPAU_CP_COMPILED_PROGRAM@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CC_CompileShader(struct XGRAPHICS::_CC_STATE_COMPILER *, unsigned int, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CC_CompileShader@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CC_STATE_COMPILER@1@IPAU_ABSTRACT_STATE@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//struct XGRAPHICS::_CC_STATE_COMPILER * XGRAPHICS::CC_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_PS_PROGRAM_STORE *, struct XGRAPHICS::_SS_SHADER_STORE *, struct XGRAPHICS::_SR_SHADER_RECYCLER *, struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_SSM_REGISTRY *, unsigned int)
//{
//    mangled_ppc("?CC_Create@XGRAPHICS@@YAPAU_CC_STATE_COMPILER@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_PS_PROGRAM_STORE@1@PAU_SS_SHADER_STORE@1@PAU_SR_SHADER_RECYCLER@1@PAU_TS_TEXTURE_SERVER@1@PAU_SSM_REGISTRY@1@I@Z");
//};

