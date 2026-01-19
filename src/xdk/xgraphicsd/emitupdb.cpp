/* ---------- headers */

#include "xdk\xgraphicsd\emitupdb.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int D3DXShader::SwizzleMask(enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component);
// public: void D3DXShader::Instruction::SetCleaned(void);
// public: unsigned int D3DXShader::Instruction::GetNumDefComponents(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::InitOperand(unsigned int, class D3DXShader::Dependency *);
// bool D3DXShader::CanAddModifiers(unsigned int, unsigned int);
// unsigned int D3DXShader::AddModifiers(unsigned int, unsigned int);
// public: void D3DXShader::Dependency::InitReg(void);
// public: void D3DXShader::Dependency::SetNumComponents(unsigned int);
// public: void D3DXShader::Dependency::SetSwizzle(unsigned int);
// public: void D3DXShader::Dependency::SetDef(class D3DXShader::Instruction *);
// public: unsigned __int64* D3DXShader::Block::GetLiveAcrossSet(void);
// public: unsigned int D3DXShader::Compiler::GetVariableNumComponents(unsigned int);
// public: enum _D3DXREGISTER_SET D3DXShader::Compiler::GetVariableRegisterType(unsigned int);
// public: static unsigned long D3DXShader::Dependency::ComputeAllocSize(class D3DXShader::Compiler *);
// public: void D3DXShader::Dependency::SetRegister(unsigned int);
// public: void D3DXShader::Dependency::SetContextData(unsigned long);
// public: bool D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction>::IsLinked(void);
// private: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::SetPrev(class D3DXShader::Instruction **, class D3DXShader::Instruction *);
// private: static class D3DXShader::Instruction ** D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::MarkListTail(class D3DXShader::Instruction **);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateOutput(class D3DXShader::Instruction *);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateScalarOutput(class D3DXShader::Instruction *, enum D3DXShader::Component);
// public: bool D3DXShader::Dependency::CanAddModifiers(unsigned int);
// public: void D3DXShader::Dependency::AddModifiers(unsigned int);
// public: enum _D3DXREGISTER_SET D3DXShader::Dependency::GetRegisterSet(void);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertPrev(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertNext(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction ** D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetRingStart(void);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateOutput(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::Compiler::InsertInstrBefore(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::InsertInstrAfter(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::PlaceInstruction(class D3DXShader::Instruction *, enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::IsInBody(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FindLastVectorMicrocodeUseInBlock(class D3DXShader::Block *);
// int D3DXShader::SortVariableDebugInfo(void const *, void const *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertAtHead(class D3DXShader::Instruction *);
// public: void * D3DXShader::Compiler::AllocFunctionMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, enum D3DXShader::Opcode, unsigned int, unsigned int);
// public: void D3DXShader::Compiler::InsertInstrAtBodyHead(class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::InsertNopInBody(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::AddVariableLifetime(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, class D3DXShader::Instruction *, unsigned long *);
// private: void D3DXShader::Compiler::ExpandVariableProbes(void);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindBodyStartInstruction(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::AnnotateFinalInstructions(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::PrepareDebugInformation(void);

//unsigned int D3DXShader::SwizzleMask(enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component)
//{
//    mangled_ppc("?SwizzleMask@D3DXShader@@YAIW4Component@1@000@Z");
//};

//public: void D3DXShader::Instruction::SetCleaned(void)
//{
//    mangled_ppc("?SetCleaned@Instruction@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetNumDefComponents(void)
//{
//    mangled_ppc("?GetNumDefComponents@Instruction@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::InitOperand(unsigned int, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?InitOperand@Instruction@D3DXShader@@QAAPAVDependency@2@IPAV32@@Z");
//};

//bool D3DXShader::CanAddModifiers(unsigned int, unsigned int)
//{
//    mangled_ppc("?CanAddModifiers@D3DXShader@@YA_NII@Z");
//};

//unsigned int D3DXShader::AddModifiers(unsigned int, unsigned int)
//{
//    mangled_ppc("?AddModifiers@D3DXShader@@YAIII@Z");
//};

//public: void D3DXShader::Dependency::InitReg(void)
//{
//    mangled_ppc("?InitReg@Dependency@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Dependency::SetNumComponents(unsigned int)
//{
//    mangled_ppc("?SetNumComponents@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Dependency::SetSwizzle(unsigned int)
//{
//    mangled_ppc("?SetSwizzle@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Dependency::SetDef(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SetDef@Dependency@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: unsigned __int64* D3DXShader::Block::GetLiveAcrossSet(void)
//{
//    mangled_ppc("?GetLiveAcrossSet@Block@D3DXShader@@QAAPA_KXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetVariableNumComponents(unsigned int)
//{
//    mangled_ppc("?GetVariableNumComponents@Compiler@D3DXShader@@QAAII@Z");
//};

//public: enum _D3DXREGISTER_SET D3DXShader::Compiler::GetVariableRegisterType(unsigned int)
//{
//    mangled_ppc("?GetVariableRegisterType@Compiler@D3DXShader@@QAA?AW4_D3DXREGISTER_SET@@I@Z");
//};

//public: static unsigned long D3DXShader::Dependency::ComputeAllocSize(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ComputeAllocSize@Dependency@D3DXShader@@SAKPAVCompiler@2@@Z");
//};

//public: void D3DXShader::Dependency::SetRegister(unsigned int)
//{
//    mangled_ppc("?SetRegister@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Dependency::SetContextData(unsigned long)
//{
//    mangled_ppc("?SetContextData@Dependency@D3DXShader@@QAAXK@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@VInstruction@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::SetPrev(class D3DXShader::Instruction **, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAXPAPAVInstruction@2@PAV32@@Z");
//};

//private: static class D3DXShader::Instruction ** D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::MarkListTail(class D3DXShader::Instruction **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAPAPAVInstruction@2@PAPAV32@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateOutput(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CreateOutput@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateScalarOutput(class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?CreateScalarOutput@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@W4Component@2@@Z");
//};

//public: bool D3DXShader::Dependency::CanAddModifiers(unsigned int)
//{
//    mangled_ppc("?CanAddModifiers@Dependency@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::Dependency::AddModifiers(unsigned int)
//{
//    mangled_ppc("?AddModifiers@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: enum _D3DXREGISTER_SET D3DXShader::Dependency::GetRegisterSet(void)
//{
//    mangled_ppc("?GetRegisterSet@Dependency@D3DXShader@@QAA?AW4_D3DXREGISTER_SET@@XZ");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertPrev(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertPrev@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@SAXPAVInstruction@2@0@Z");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertNext(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertNext@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@SAXPAVInstruction@2@0@Z");
//};

//private: class D3DXShader::Instruction ** D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@AAAPAPAVInstruction@2@XZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateOutput(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CreateOutput@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@III@Z");
//};

//public: void D3DXShader::Compiler::InsertInstrBefore(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertInstrBefore@Compiler@D3DXShader@@QAAXPAVInstruction@2@0@Z");
//};

//public: void D3DXShader::Compiler::InsertInstrAfter(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertInstrAfter@Compiler@D3DXShader@@QAAXPAVInstruction@2@0@Z");
//};

//public: void D3DXShader::Compiler::PlaceInstruction(class D3DXShader::Instruction *, enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?PlaceInstruction@Compiler@D3DXShader@@QAAXPAVInstruction@2@W4PlacementMethod@12@0@Z");
//};

//public: bool D3DXShader::Instruction::IsInBody(void)
//{
//    mangled_ppc("?IsInBody@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FindLastVectorMicrocodeUseInBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindLastVectorMicrocodeUseInBlock@Instruction@D3DXShader@@QAAPAV12@PAVBlock@2@@Z");
//};

//int D3DXShader::SortVariableDebugInfo(void const *, void const *)
//{
//    mangled_ppc("?SortVariableDebugInfo@D3DXShader@@YAHPBX0@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertAtHead(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertAtHead@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void * D3DXShader::Compiler::AllocFunctionMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocFunctionMem@Compiler@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, enum D3DXShader::Opcode, unsigned int, unsigned int)
//{
//    mangled_ppc("?MakeInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@W4Opcode@2@II@Z");
//};

//public: void D3DXShader::Compiler::InsertInstrAtBodyHead(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertInstrAtBodyHead@Compiler@D3DXShader@@QAAXPAVBlock@2@PAVInstruction@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::InsertNopInBody(class D3DXShader::Block *)
//{
//    mangled_ppc("?InsertNopInBody@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::AddVariableLifetime(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, class D3DXShader::Instruction *, unsigned long *)
//{
//    mangled_ppc("?AddVariableLifetime@Compiler@D3DXShader@@AAAXPAVInstruction@2@0_N0PAK@Z");
//};

//private: void D3DXShader::Compiler::ExpandVariableProbes(void)
//{
//    mangled_ppc("?ExpandVariableProbes@Compiler@D3DXShader@@AAAXXZ");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindBodyStartInstruction(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindBodyStartInstruction@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::AnnotateFinalInstructions(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AnnotateFinalInstructions@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::PrepareDebugInformation(void)
//{
//    mangled_ppc("?PrepareDebugInformation@Compiler@D3DXShader@@AAAXXZ");
//};

