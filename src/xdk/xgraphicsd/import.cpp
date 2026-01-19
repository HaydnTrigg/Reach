/* ---------- headers */

#include "xdk\xgraphicsd\import.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct D3DXShader::ExportSemantic *D3DXShader::g_rgVertexShaderExports; // "?g_rgVertexShaderExports@D3DXShader@@3PAUExportSemantic@1@A"
// struct D3DXShader::ExportSemantic *D3DXShader::g_rgPixelShaderExports; // "?g_rgPixelShaderExports@D3DXShader@@3PAUExportSemantic@1@A"
// char const **D3DXShader::g_rgpszInlineMicrocodeVariableNames; // "?g_rgpszInlineMicrocodeVariableNames@D3DXShader@@3PAPBDA"
// struct D3DXShader::TextureIntrinsicInfo *D3DXShader::g_rgTextureIntrinsicInfo; // "?g_rgTextureIntrinsicInfo@D3DXShader@@3PAUTextureIntrinsicInfo@1@A"

// unsigned int D3DXShader::FindHighestBit(unsigned long);
// bool D3DXShader::IsSingleBit(unsigned long);
// public: bool D3DXShader::VariableComponentInfo::IsInteger(void);
// public: bool D3DXShader::VariableComponentInfo::IsSignedInteger(void);
// public: void D3DXShader::Instruction_ControlTransfer::SetControlFlowPreference(enum D3DXShader::ControlFlowPreference);
// public: bool D3DXShader::Instruction::NeedsPreviousScalarResult(void);
// public: void D3DXShader::Dependency::SetScalarComponent(enum D3DXShader::Component);
// public: void D3DXShader::Result::Init(void);
// public: void D3DXShader::Result::SetDependency(class D3DXShader::Dependency *, unsigned int);
// public: void D3DXShader::Result::SetResultPtr(class D3DXShader::Result *, unsigned int, unsigned int);
// public: void D3DXShader::Result::SetIndexedResultPtr(struct D3DXShader::IndexedResult *);
// public: void D3DXShader::Result::SetVar(unsigned int, unsigned int);
// public: bool D3DXShader::Result::IsInstruction(void);
// public: bool D3DXShader::Result::IsDependency(void);
// public: bool D3DXShader::Result::IsLazyPHI(void);
// public: bool D3DXShader::Result::IsRval(void);
// public: void D3DXShader::Result::SetComponentIndex(unsigned int);
// public: void D3DXShader::Result::SetVectorWidth(void);
// public: bool D3DXShader::Result::IsVectorWidth(void);
// unsigned int D3DXShader::AttributeMask(enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType);
// bool D3DXShader::IsXenosFloat(float);
// float D3DXShader::XenosNormalize(float);
// public: bool D3DXShader::Variable::IsInteger(unsigned int);
// public: bool D3DXShader::Variable::IsSignedInteger(unsigned int);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_CALL(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_RETURN(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// UCodeGetUCodeHeader;
// NativeGetUCodeHeader;
// NativeMicrocodeIsValidVersion;
// public: bool D3DXShader::Compiler::VariableHasAssignments(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeConstantVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeIntegerVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeBooleanVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeInputVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeExportVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeSamplerVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeAddressVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodePredicateVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeLODVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodePrevScalarVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeGradientXVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeGradientYVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetMicrocodeFullFetchVarIndex(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetNumMicrocodeVariables(void);
// private: void D3DXShader::Compiler::IsolateVariableDefinition(class D3DXShader::Block *, unsigned int, unsigned int);
// public: void D3DXShader::Instruction_ControlTransfer::SetTargetLabelAddress(unsigned long);
// public: void D3DXShader::Instruction_ControlTransfer::SetSlashGfControlFlowPreference(enum D3DXShader::ControlFlowPreference);
// public: void D3DXShader::Instruction_ControlTransfer::SetTestControlFlowPreference(enum D3DXShader::ControlFlowPreference);
// public: bool D3DXShader::Instruction::SetAllConstraintFlags(unsigned int);
// public: bool D3DXShader::Instruction::IsAlwaysInteger(unsigned int);
// public: class D3DXShader::Compiler * D3DXShader::ComponentTypeEnumerator::GetCompiler(void);
// public: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::GetAttributes(void);
// public: class D3DXShader::Compiler * D3DXShader::ResultStack::GetCompiler(void);
// public: class D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)> * D3DXShader::ResultStack::GetStack(void);
// private: class D3DXShader::CNode * D3DXShader::Compiler::ExpectNodeType(class D3DXShader::CNode *, enum D3DXShader::_D3DNODE_TYPE);
// private: class D3DXShader::CNode * D3DXShader::Compiler::ExpectOptionalNodeType(class D3DXShader::CNode *, enum D3DXShader::_D3DNODE_TYPE);
// private: class D3DXShader::CNodeFunction * D3DXShader::Compiler::ExpectFunctionNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::ExpectExpressionNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::ExpectExpressionNode(class D3DXShader::CNode *, enum D3DXShader::_D3DEXPR_OP);
// private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::ExpectExpressionNode(class D3DXShader::CNode *, enum D3DXShader::_D3DEXPR_OP, unsigned int);
// private: class D3DXShader::CNodeType * D3DXShader::Compiler::ExpectTypeNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeArray * D3DXShader::Compiler::ExpectArrayNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeValue * D3DXShader::Compiler::ExpectValueNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeList * D3DXShader::Compiler::ExpectListNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeList * D3DXShader::Compiler::ExpectOptionalListNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeDecl * D3DXShader::Compiler::ExpectDeclNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeVariable * D3DXShader::Compiler::ExpectVariableNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeToken * D3DXShader::Compiler::ExpectTokenNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeUAsmRegister * D3DXShader::Compiler::ExpectUAsmRegisterNode(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeUAsmRegister * D3DXShader::Compiler::ExpectOptionalUAsmRegisterNode(class D3DXShader::CNode *);
// private: bool D3DXShader::Compiler::IsVariableInitializationStatement(class D3DXShader::CNode *);
// private: bool D3DXShader::Compiler::MatchesShaderTarget(class D3DXShader::CNode *, unsigned long *);
// private: void D3DXShader::Compiler::SetInternalTokenLocation(struct D3DXShader::D3DXTOKEN *);
// private: bool D3DXShader::Compiler::IsNonFloatType(class D3DXShader::CNodeType *);
// private: bool D3DXShader::Compiler::GetTypeShape(class D3DXShader::CNode *, unsigned int *, unsigned int *);
// private: bool D3DXShader::Compiler::GetLeafNodeShape(class D3DXShader::CNode *, unsigned int *, unsigned int *);
// private: bool D3DXShader::Compiler::GetNodeShape(class D3DXShader::CNode *, unsigned int *, unsigned int *);
// private: bool D3DXShader::Compiler::GetNodeSize(class D3DXShader::CNode *, unsigned int *);
// private: class D3DXShader::CNodeToken * D3DXShader::Compiler::GetSemanticToken(class D3DXShader::CNode *);
// private: bool D3DXShader::Compiler::ParseIntegerCastNode(class D3DXShader::CNode *, unsigned int *);
// private: bool D3DXShader::Compiler::ParseBooleanCastNode(class D3DXShader::CNode *, bool *);
// private: unsigned int D3DXShader::Compiler::ParseIntegerArgument(class D3DXShader::CNode *);
// private: void D3DXShader::Compiler::ParseIntegerRangeArgument(class D3DXShader::CNode *, unsigned int *, unsigned int *);
// private: bool D3DXShader::Compiler::ParseBooleanArgument(class D3DXShader::CNode *);
// private: struct D3DXShader::Function * D3DXShader::Compiler::FindFunctionByIndex(unsigned int);
// private: struct D3DXShader::Function * D3DXShader::Compiler::FindFunctionFromCallNode(class D3DXShader::CNodeExpression *);
// public: class D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)> * D3DXShader::ParseStack::GetNodeStack(void);
// private: char const * D3DXShader::Compiler::GetMicrocodeVarName(unsigned int);
// private: unsigned int D3DXShader::Compiler::GetVarIndexFromRegisterNode(class D3DXShader::CNodeUAsmRegister *, unsigned int *);
// public: char const * D3DXShader::Compiler::GetVarName(unsigned int);
// private: char const * D3DXShader::Compiler::GetAttributeName(class D3DXShader::CNodeAttribute *);
// private: enum D3DXShader::AttributeType D3DXShader::Compiler::IdentifyAttributeNode(class D3DXShader::CNodeAttribute *);
// private: void D3DXShader::Compiler::RestoreAttributeState(struct D3DXShader::AttributeStateStackEntry *);
// int D3DXShader::SortVariableComponentInfoByReg(void const *, void const *);
// private: void D3DXShader::Compiler::InitInternalImportVariable(unsigned int, struct D3DXShader::Function *, unsigned int, enum D3DXShader::_D3DSCOPE_TYPE, char const *);
// public: D3DXShader::MatrixAccessor::MatrixAccessor(class D3DXShader::ResultStackEnumerator *, unsigned int, unsigned int);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::AtEnd(void);
// public: struct D3DXShader::AttributeState * D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::PeekNext(void);
// public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::AtEnd(void);
// public: class D3DXShader::Result * D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PeekNext(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Position *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry>::Init(void);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::Instruction::InitJump(bool, class D3DXShader::Block *, bool, class D3DXShader::Compiler *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr(enum D3DXShader::Opcode, unsigned int, unsigned int);
// public: bool D3DXShader::Compiler::InsertCopy(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_MERGE(unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_EXPORT(void);
// private: class D3DXShader::CNodeToken * D3DXShader::Compiler::CreateTokenIdNode(char const *);
// private: class D3DXShader::CNodeDecl * D3DXShader::Compiler::CreateDeclNode(enum D3DXShader::_D3DDECL_TYPE, char const *, class D3DXShader::CNode *);
// private: class D3DXShader::CNodeList * D3DXShader::Compiler::CreateListNode(class D3DXShader::CNode *, class D3DXShader::CNode *, char const *);
// private: class D3DXShader::CNodeList * D3DXShader::Compiler::CreateValueListNode(float *, unsigned long);
// private: class D3DXShader::CNodeValue * D3DXShader::Compiler::CreateVariableValueNode(unsigned int, unsigned int);
// private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::CreateCastNode(class D3DXShader::CNode *, unsigned int);
// private: class D3DXShader::CNodeStatement * D3DXShader::Compiler::CreateStatementNode(void);
// private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::CreateAssignmentExpressionNode(unsigned int, class D3DXShader::CNode *, unsigned int);
// private: class D3DXShader::CNodeStatement * D3DXShader::Compiler::CreateVariableCopyStatementNode(unsigned int, unsigned int, unsigned int);
// private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::CreateVariableComparisonExpressionNode(unsigned int, class D3DXShader::CNode *);
// private: unsigned int D3DXShader::Compiler::CountLeafNodeComponents(class D3DXShader::CNode *);
// private: unsigned int D3DXShader::Compiler::CountComponents(class D3DXShader::CNode *);
// private: class D3DXShader::CNode * D3DXShader::Compiler::ImportASMNodeList(class D3DXShader::CNode *);
// private: class D3DXShader::CNodeType * D3DXShader::Compiler::CreateSimpleTypeNode(enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned int, unsigned int);
// private: unsigned int D3DXShader::Compiler::GetModifiersFromResult(class D3DXShader::Result *);
// private: bool D3DXShader::Compiler::GetFloatConstant(class D3DXShader::Result *, double *);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::GetScalarDependency(class D3DXShader::Dependency *, enum D3DXShader::Component);
// public: bool D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::IsAtTop(void);
// public: class D3DXShader::Result * D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PeekNextHigher(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Mark(struct D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Reset(struct D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Mark(struct D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Reset(struct D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 3>::ClearAll(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *);
// public: class D3DXShader::Result * D3DXShader::ResultStackEnumerator::PeekResult(void);
// public: D3DXShader::CNodeListWalker::~CNodeListWalker(void);
// private: void D3DXShader::Compiler::ApplyBranchAttributes(class D3DXShader::Instruction *, struct D3DXShader::CommittedAttributeState *);
// private: enum D3DXShader::Component D3DXShader::Compiler::GetComponentFromResult(class D3DXShader::Result *);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::MergeDependencies(class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Dependency *, enum D3DXShader::Component);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::MergeInstructions(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::IsolateComputation(class D3DXShader::Dependency *);
// public: struct D3DXShader::AttributeState * D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetNext(void);
// public: class D3DXShader::Result * D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetNext(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipForward(unsigned int);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::AddToTail(class D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0> *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::Block::InitSubEntryPoint(struct D3DXShader::Function *);
// public: unsigned long D3DXShader::Compiler::SetDeclContextNode(class D3DXShader::CNode *);
// public: void D3DXShader::Compiler::FreeProgramMem(void *, unsigned long);
// public: void * D3DXShader::Compiler::AllocAlignedFunctionMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// private: class D3DXShader::Block * D3DXShader::Compiler::CreateBlock(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::IsolateComputation(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETNE(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_TRUNC(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FLOOR(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT4(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CUBE(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX4(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_KILLGT(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DST(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAXA(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SIN(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_COS(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_TEX_LOD(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_GET_GRADIENTS(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_H(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_V(class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIPSQRT_IEEE(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Result, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Dependency *, class D3DXShader::Result, class D3DXShader::Result);
// public: class D3DXShader::Result * D3DXShader::Block::GetOrCreateVariableDefs(unsigned int, class D3DXShader::Compiler *);
// private: class D3DXShader::CNodeRegister * D3DXShader::Compiler::CreateRegisterNode(char, unsigned int);
// private: class D3DXShader::CNodeToken * D3DXShader::Compiler::CreateSemanticNode(unsigned long, unsigned long);
// private: unsigned int D3DXShader::Compiler::ParseExportSemantic(unsigned int, unsigned int, char const *, unsigned int, unsigned int, bool);
// private: class D3DXShader::CNodeDecl * D3DXShader::Compiler::CreateMicrocodeVariableDeclaration(char const *, unsigned int, unsigned int, enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned int, unsigned int, class D3DXShader::CNode **);
// private: void D3DXShader::Compiler::ImportMicrocodeInputVariable(char const *, unsigned int, unsigned long, unsigned long, class D3DXShader::CNode **, class D3DXShader::CNode **);
// private: void D3DXShader::Compiler::ImportMicrocodeOutputVariable(char const *, unsigned int, unsigned long, unsigned long, unsigned long, class D3DXShader::CNode **);
// private: void D3DXShader::Compiler::PrepareFunctionEntryBlock(class D3DXShader::Block *, struct D3DXShader::Function *);
// private: void D3DXShader::Compiler::AddFunctionExitAnnotation(class D3DXShader::Instruction *, struct D3DXShader::Function *);
// private: void D3DXShader::Compiler::RecordLexicalScopeMapping(void);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateArrayLoad(struct D3DXShader::IndexedResult *, class D3DXShader::Result, unsigned int);
// private: void D3DXShader::Compiler::MoveVariableDefinitionsFromBlock_SkipOutputs(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::CNodeFunction *, class D3DXShader::Compiler *);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipHigher(unsigned int);
// public: class D3DXShader::Result * D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetNextHigher(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::IsEmpty(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::RemoveAll(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::MoveElementsFrom(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::Init(void);
// public: void D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::RemoveAll(void);
// public: bool D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Contains(unsigned int);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ComponentTypeEnumerator::ContainerState * D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::ComponentTypeEnumerator::ContainerState D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Result * D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PeekLast(void);
// public: class D3DXShader::Result D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::RemoveLast(void);
// public: class D3DXShader::Result D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::RemoveLast(unsigned int);
// public: void D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::RemoveAll(void);
// public: unsigned int D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::CountItems(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToBeginning(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToEnd(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipBackward(unsigned int);
// public: void D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::RemoveLast(void);
// public: unsigned int D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::CountItems(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GoToEnd(void);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::AtBeginning(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetPrev(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::PeekPrev(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GoToBeginning(void);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::AtBeginning(void);
// public: struct D3DXShader::AttributeState * D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetPrev(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::LexicalScope * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::LexicalScope D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::AttributeStateStackEntry D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::RemoveAll(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ImportProgramStackState * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::ImportProgramStackState D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::Function * D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GoToEnd(void);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::AtBeginning(void);
// public: struct D3DXShader::LexicalScope * D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetPrev(void);
// public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::AtBeginning(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GoToBeginning(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GetSpaceWorker(unsigned int);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GoToBeginning(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::GetSpaceWorker(unsigned int);
// public: void * D3DXShader::Compiler::AllocProgramMem(unsigned long);
// private: class D3DXShader::Block * D3DXShader::Compiler::CreateSubEntryBlock(struct D3DXShader::Function *);
// private: void D3DXShader::Compiler::StartNewIsolationGroup(void);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Dependency *);
// private: unsigned int D3DXShader::Compiler::ParseExportSemantic(char const *, unsigned int, unsigned int, bool);
// public: class D3DXShader::Result * D3DXShader::ResultStackEnumerator::GetResult(void);
// public: class D3DXShader::Result * D3DXShader::ResultStackEnumerator::GetNthResult(unsigned int);
// public: void D3DXShader::ResultStackEnumerator::SkipResults(unsigned int);
// private: unsigned int D3DXShader::Compiler::ParseExportSemantic(class D3DXShader::CNode *, unsigned int, unsigned int, bool);
// private: static long D3DXShader::Compiler::ImportASMLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateSubroutineReturn(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::SeparateBlockForLine(class D3DXShader::CNode *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GetInstructionFromResult(class D3DXShader::Result *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependencyFromResult(class D3DXShader::Result *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::PeekDependency(class D3DXShader::ResultStackEnumerator *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependency(class D3DXShader::ResultStackEnumerator *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::GetMergedDependency(class D3DXShader::ResultStackEnumerator *, unsigned int, bool, bool);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::PeekMergedDependency(class D3DXShader::ResultStackEnumerator *, unsigned int, unsigned int);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::PeekVectorDependency(class D3DXShader::ResultStackEnumerator *, unsigned int);
// private: void D3DXShader::Compiler::ConvertToRVal(class D3DXShader::Result *);
// public: class D3DXShader::Result * D3DXShader::MatrixAccessor::Get(unsigned int, unsigned int);
// public: bool D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ComponentTypeEnumerator::ContainerState D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Pop(void);
// public: struct D3DXShader::ComponentTypeEnumerator::ContainerState * D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Peek(void);
// public: void D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Result D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Pop(void);
// public: class D3DXShader::Result D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Pop(unsigned int);
// public: class D3DXShader::Result * D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Peek(void);
// public: void D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PopAll(void);
// public: unsigned int D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetDepth(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToTop(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToBottom(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipLower(unsigned int);
// public: void D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Pop(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Peek(void);
// public: unsigned int D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetDepth(void);
// public: bool D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::IsAtBottom(void);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GoToTop(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetNextLower(void);
// public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::PeekNextLower(void);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 3>::GetField(unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 3>::SetFields(unsigned int, unsigned int, unsigned int);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::RemoveNext(void);
// public: void D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::LexicalScope D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Pop(void);
// public: struct D3DXShader::LexicalScope * D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Peek(void);
// public: void D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::AttributeStateStackEntry D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Pop(void);
// public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Peek(void);
// public: void D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::PopAll(void);
// public: void D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ImportProgramStackState D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Pop(void);
// public: struct D3DXShader::ImportProgramStackState * D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Peek(void);
// public: void D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::Function * D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Pop(void);
// public: bool D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::IsAtBottom(void);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GoToTop(void);
// public: struct D3DXShader::LexicalScope * D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetNextLower(void);
// public: D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)> *);
// public: class D3DXShader::Result * D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetPrev(void);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)> *);
// private: struct D3DXShader::AttributeState * D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::LexicalScopeNestingInfo * D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GetSpace(unsigned int);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)> *);
// private: struct D3DXShader::ComponentTypeEnumerator::ContainerState * D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::GetSpace(unsigned int);
// private: class D3DXShader::Result * D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::LexicalScope * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::AttributeStateStackEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::ImportProgramStackState * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::Function ** D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::GetSpace(unsigned int);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Result *);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Result);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Result *);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::IsolateComputation(class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Result, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Result, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Result *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_TFETCH(class D3DXShader::Result *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Dependency *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Dependency *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Dependency *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Instruction *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Dependency *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Result *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(class D3DXShader::Result *, class D3DXShader::Result *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT2ADD(class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Dependency *, class D3DXShader::Result, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Instruction *, class D3DXShader::Result, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Result *, class D3DXShader::Result, class D3DXShader::Result);
// public: void D3DXShader::ResultStack::Init(class D3DXShader::Compiler *);
// public: bool D3DXShader::ResultStack::IsEmpty(void);
// public: unsigned int D3DXShader::ResultStack::GetDepth(void);
// public: class D3DXShader::Result * D3DXShader::ResultStack::PeekTop(void);
// public: void D3DXShader::ResultStackEnumerator::SetDepth(unsigned int);
// private: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::AdvanceToNextField(void);
// public: void D3DXShader::ParseStack::Init(class D3DXShader::Compiler *);
// public: bool D3DXShader::ParseStack::IsEmpty(void);
// public: class D3DXShader::CNode * D3DXShader::ParseStack::Pop(enum D3DXShader::ParseStack::ParseStackEntryType *);
// unsigned int D3DXShader::DecodeUAsmWriteMask(unsigned long);
// private: class D3DXShader::Block * D3DXShader::Compiler::LeaveIsolateScope(void);
// private: void D3DXShader::Compiler::GenerateAssert(class D3DXShader::Result *, class D3DXShader::CNode *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateSumOfProducts(class D3DXShader::ResultStackEnumerator *, class D3DXShader::ResultStackEnumerator *, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateTextureLookup(class D3DXShader::Result *, class D3DXShader::Dependency *, unsigned int, bool, enum D3DXShader::TextureLookupSuffix, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// private: void D3DXShader::Compiler::GenerateArrayStore(struct D3DXShader::IndexedResult *, class D3DXShader::Result, unsigned int, class D3DXShader::Result);
// private: bool D3DXShader::Compiler::GenerateArrayVariableLoad(class D3DXShader::ResultStackEnumerator *, class D3DXShader::Result, unsigned int, unsigned int, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateTrigOp(class D3DXShader::Result *, enum D3DXShader::_D3DINTRINSIC_OP);
// public: D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>(class D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)> *);
// public: class D3DXShader::Result * D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetNextLower(void);
// public: D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Append(struct D3DXShader::AttributeState);
// public: struct D3DXShader::AttributeState * D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Append(void);
// public: struct D3DXShader::LexicalScopeNestingInfo * D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::Append(void);
// public: D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Append(struct D3DXShader::ComponentTypeEnumerator::ContainerState);
// public: void D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Append(class D3DXShader::Result);
// public: void D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Append(struct D3DXShader::ParseStack::ParseStackEntry);
// public: struct D3DXShader::LexicalScope * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Append(void);
// public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Append(void);
// public: struct D3DXShader::ImportProgramStackState * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Append(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Append(struct D3DXShader::Function *);
// public: void D3DXShader::ResultStack::DumpStack(void);
// public: class D3DXShader::Result D3DXShader::ResultStack::Pop(void);
// public: void D3DXShader::ResultStack::Pop(unsigned int);
// public: void D3DXShader::ResultStack::PopAll(void);
// public: D3DXShader::ResultStackEnumerator::ResultStackEnumerator(class D3DXShader::ResultStack *, unsigned int);
// public: D3DXShader::ResultStackEnumerator::ResultStackEnumerator(class D3DXShader::ResultStack *);
// public: void D3DXShader::ResultStackEnumerator::ReplaceResult(class D3DXShader::Result *);
// public: void D3DXShader::ResultStackEnumerator::ReplaceResult(class D3DXShader::Instruction *, unsigned int);
// public: void D3DXShader::ResultStackEnumerator::ReplaceResult(class D3DXShader::Dependency *, unsigned int);
// public: void D3DXShader::ResultStackEnumerator::ReplaceResults(unsigned int, class D3DXShader::Instruction *);
// public: void D3DXShader::ResultStackEnumerator::ReplaceResults(unsigned int, class D3DXShader::Dependency *);
// public: void D3DXShader::ParseStack::Mark(struct D3DXShader::StackEnumerator<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Position *);
// private: void D3DXShader::Compiler::ApplyAttributeNode(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *, class D3DXShader::CNodeAttribute *);
// private: void D3DXShader::Compiler::PeekAttributeState(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *);
// private: void D3DXShader::Compiler::ImportVariableInitialValue(class D3DXShader::ResultStack *, unsigned int, class D3DXShader::CNode *);
// private: void D3DXShader::Compiler::SwapResultStackRanges(class D3DXShader::ResultStackEnumerator *, unsigned int, class D3DXShader::ResultStackEnumerator *, unsigned int);
// private: void D3DXShader::Compiler::ConvertToRVals(class D3DXShader::ResultStack *, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateSumOfSquares(class D3DXShader::ResultStack *, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateDotProduct(class D3DXShader::ResultStack *, unsigned int);
// private: void D3DXShader::Compiler::AssignLValResult(class D3DXShader::Result *, class D3DXShader::Result);
// public: void D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Push(struct D3DXShader::ComponentTypeEnumerator::ContainerState);
// public: void D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Push(class D3DXShader::Result);
// public: void D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Push(struct D3DXShader::ParseStack::ParseStackEntry);
// public: struct D3DXShader::LexicalScope * D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Push(void);
// public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Push(void);
// public: struct D3DXShader::ImportProgramStackState * D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Push(void);
// public: void D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Push(struct D3DXShader::Function *);
// public: void D3DXShader::ResultStack::Push(class D3DXShader::Result);
// public: D3DXShader::CNodeListWalker::CNodeListWalker(class D3DXShader::CNode *, class D3DXShader::Compiler *);
// public: class D3DXShader::CNode * D3DXShader::CNodeListWalker::GetNext(void);
// public: void D3DXShader::CNodeListWalker::Reset(class D3DXShader::CNode *);
// private: bool D3DXShader::Compiler::IsDefaultCaseStatement(class D3DXShader::CNodeStatement *);
// private: bool D3DXShader::ComponentTypeEnumerator::StartNewNode(class D3DXShader::CNode *);
// private: bool D3DXShader::ComponentTypeEnumerator::FindNextField(void);
// public: enum D3DXShader::_D3DCOMPONENT_TYPE D3DXShader::ComponentTypeEnumerator::GetNextComponentType(void);
// public: void D3DXShader::ParseStack::PushRVal(class D3DXShader::CNode *);
// public: void D3DXShader::ParseStack::PushRVal_PossiblyNULL(class D3DXShader::CNode *);
// public: void D3DXShader::ParseStack::PushLVal(class D3DXShader::CNode *);
// public: void D3DXShader::ParseStack::PushReduction(class D3DXShader::CNode *, bool);
// public: void D3DXShader::ParseStack::Push(class D3DXShader::CNode *, enum D3DXShader::ParseStack::ParseStackEntryType);
// private: void D3DXShader::Compiler::EnterIsolateScope(class D3DXShader::Block **);
// private: void D3DXShader::Compiler::PushAttributeState(void);
// private: void D3DXShader::Compiler::GenerateDebugPrint(class D3DXShader::ResultStack *, class D3DXShader::CNodeExpression *, bool);
// private: void D3DXShader::Compiler::MarkVariableAssignments(class D3DXShader::CNode *, class D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)> *);
// private: void D3DXShader::Compiler::ImportParameterInitialValues(struct D3DXShader::Function *, class D3DXShader::CNode *, class D3DXShader::ResultStack *);
// private: class D3DXShader::CNode * D3DXShader::Compiler::PushList(class D3DXShader::ParseStack *, class D3DXShader::CNode *, bool, unsigned int, bool);
// private: void D3DXShader::Compiler::PushVariable(class D3DXShader::ResultStack *, unsigned int, class D3DXShader::Result *, unsigned int, unsigned int, bool);
// private: unsigned int D3DXShader::Compiler::PushVariableRegister(class D3DXShader::ResultStack *, unsigned int, unsigned int, unsigned int, bool);
// private: void D3DXShader::Compiler::PushInstruction(class D3DXShader::ResultStack *, class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::PushRangeOfResults(class D3DXShader::ResultStack *, class D3DXShader::ResultStackEnumerator *, unsigned int);
// private: void D3DXShader::Compiler::PushTextureLookup(class D3DXShader::ResultStack *, class D3DXShader::CNodeExpression *, unsigned int, bool, bool, enum D3DXShader::TextureLookupSuffix);
// private: class D3DXShader::CNode * D3DXShader::Compiler::PushList_StatementsOnly(class D3DXShader::ParseStack *, class D3DXShader::CNode *, bool);
// private: bool D3DXShader::Compiler::AnyTypesRequireConversion(class D3DXShader::CNode *);
// private: void D3DXShader::Compiler::CollectUnresolvedOptions(class D3DXShader::ResultStack *, class D3DXShader::CNodeUAsmInstruction *, class D3DXShader::Instruction *, struct D3DXShader::UnresolvedUAsmOptions **);
// private: void D3DXShader::Compiler::CommitAttributes(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *, unsigned int, unsigned int, enum D3DXShader::_D3DSCOPE_TYPE, class D3DXShader::CNode **, class D3DXShader::Block **, struct D3DXShader::CommittedAttributeState *);
// private: void D3DXShader::Compiler::CommitVariableAttributes(struct D3DXShader::Variable *, unsigned long, class D3DXShader::CNode *, enum D3DXShader::_D3DSCOPE_TYPE, enum D3DXShader::_D3DSCOPE_TYPE);
// private: void D3DXShader::Compiler::ExportVariable(class D3DXShader::ResultStack *, unsigned int, class D3DXShader::CNode *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::ExportOutParameters(class D3DXShader::CNodeFunction *, class D3DXShader::ResultStack *, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateShaderExit(struct D3DXShader::Function *, class D3DXShader::ResultStack *);
// private: void D3DXShader::Compiler::GenerateReturn(struct D3DXShader::Function *, class D3DXShader::ResultStack *);
// private: void D3DXShader::Compiler::CastNonFloatTypes(class D3DXShader::CNode *, class D3DXShader::ResultStack *, unsigned int);
// private: void D3DXShader::Compiler::ImportVariableTypeInfo(struct D3DXShader::Variable *, unsigned long, class D3DXShader::CNode *, enum D3DXShader::_D3DSCOPE_TYPE);
// private: void D3DXShader::Compiler::ImportReturnValue(class D3DXShader::CNodeFunction *, enum D3DXShader::VariableKind, class D3DXShader::CNodeDecl *);
// private: void D3DXShader::Compiler::ImportVariableInfo(unsigned int, class D3DXShader::CNodeDecl *, class D3DXShader::CNodeVariable *, enum D3DXShader::_D3DSCOPE_TYPE, struct D3DXShader::Function *);
// private: struct D3DXShader::Variable * D3DXShader::Compiler::ImportGlobalVariable(class D3DXShader::CNodeDecl *);
// private: void D3DXShader::Compiler::ImportParameters(struct D3DXShader::Function *, enum D3DXShader::VariableKind, bool, class D3DXShader::ResultStack *);
// private: void D3DXShader::Compiler::ImportVariableDeclaration(class D3DXShader::CNodeDecl *, class D3DXShader::ResultStack *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::ImportExpression(class D3DXShader::ResultStack *, class D3DXShader::CNode *, enum D3DXShader::Compiler::ExpressionUseType);
// private: void D3DXShader::Compiler::PrepareToImportInlineMicrocode(void);
// private: void D3DXShader::Compiler::PrepareBranchAttributes(class D3DXShader::ResultStack *, struct D3DXShader::CommittedAttributeState *);
// private: void D3DXShader::Compiler::ScanForVariableAssignments(struct D3DXShader::Function *);
// private: void D3DXShader::Compiler::Import(struct D3DXShader::Function *, class D3DXShader::CNode *);
// private: struct D3DXShader::Function * D3DXShader::Compiler::ImportProgram(class D3DXShader::CNode *, class D3DXShader::CNode *);
// private: void D3DXShader::Compiler::ImportASM(class D3DXShader::CNode *, struct ID3DXBuffer *);

//unsigned int D3DXShader::FindHighestBit(unsigned long)
//{
//    mangled_ppc("?FindHighestBit@D3DXShader@@YAIK@Z");
//};

//bool D3DXShader::IsSingleBit(unsigned long)
//{
//    mangled_ppc("?IsSingleBit@D3DXShader@@YA_NK@Z");
//};

//public: bool D3DXShader::VariableComponentInfo::IsInteger(void)
//{
//    mangled_ppc("?IsInteger@VariableComponentInfo@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::VariableComponentInfo::IsSignedInteger(void)
//{
//    mangled_ppc("?IsSignedInteger@VariableComponentInfo@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetControlFlowPreference(enum D3DXShader::ControlFlowPreference)
//{
//    mangled_ppc("?SetControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAAXW4ControlFlowPreference@2@@Z");
//};

//public: bool D3DXShader::Instruction::NeedsPreviousScalarResult(void)
//{
//    mangled_ppc("?NeedsPreviousScalarResult@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Dependency::SetScalarComponent(enum D3DXShader::Component)
//{
//    mangled_ppc("?SetScalarComponent@Dependency@D3DXShader@@QAAXW4Component@2@@Z");
//};

//public: void D3DXShader::Result::Init(void)
//{
//    mangled_ppc("?Init@Result@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Result::SetDependency(class D3DXShader::Dependency *, unsigned int)
//{
//    mangled_ppc("?SetDependency@Result@D3DXShader@@QAAXPAVDependency@2@I@Z");
//};

//public: void D3DXShader::Result::SetResultPtr(class D3DXShader::Result *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetResultPtr@Result@D3DXShader@@QAAXPAV12@II@Z");
//};

//public: void D3DXShader::Result::SetIndexedResultPtr(struct D3DXShader::IndexedResult *)
//{
//    mangled_ppc("?SetIndexedResultPtr@Result@D3DXShader@@QAAXPAUIndexedResult@2@@Z");
//};

//public: void D3DXShader::Result::SetVar(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetVar@Result@D3DXShader@@QAAXII@Z");
//};

//public: bool D3DXShader::Result::IsInstruction(void)
//{
//    mangled_ppc("?IsInstruction@Result@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Result::IsDependency(void)
//{
//    mangled_ppc("?IsDependency@Result@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Result::IsLazyPHI(void)
//{
//    mangled_ppc("?IsLazyPHI@Result@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Result::IsRval(void)
//{
//    mangled_ppc("?IsRval@Result@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Result::SetComponentIndex(unsigned int)
//{
//    mangled_ppc("?SetComponentIndex@Result@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Result::SetVectorWidth(void)
//{
//    mangled_ppc("?SetVectorWidth@Result@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Result::IsVectorWidth(void)
//{
//    mangled_ppc("?IsVectorWidth@Result@D3DXShader@@QAA_NXZ");
//};

//unsigned int D3DXShader::AttributeMask(enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType, enum D3DXShader::AttributeType)
//{
//    mangled_ppc("?AttributeMask@D3DXShader@@YAIW4AttributeType@1@000000000@Z");
//};

//bool D3DXShader::IsXenosFloat(float)
//{
//    mangled_ppc("?IsXenosFloat@D3DXShader@@YA_NM@Z");
//};

//float D3DXShader::XenosNormalize(float)
//{
//    mangled_ppc("?XenosNormalize@D3DXShader@@YAMM@Z");
//};

//public: bool D3DXShader::Variable::IsInteger(unsigned int)
//{
//    mangled_ppc("?IsInteger@Variable@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Variable::IsSignedInteger(unsigned int)
//{
//    mangled_ppc("?IsSignedInteger@Variable@D3DXShader@@QAA_NI@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Abs@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_CALL(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_CALL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_RETURN(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_RETURN@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//UCodeGetUCodeHeader
//{
//    mangled_ppc("UCodeGetUCodeHeader");
//};

//NativeGetUCodeHeader
//{
//    mangled_ppc("NativeGetUCodeHeader");
//};

//NativeMicrocodeIsValidVersion
//{
//    mangled_ppc("NativeMicrocodeIsValidVersion");
//};

//public: bool D3DXShader::Compiler::VariableHasAssignments(unsigned int)
//{
//    mangled_ppc("?VariableHasAssignments@Compiler@D3DXShader@@QAA_NI@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeConstantVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeConstantVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeIntegerVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeIntegerVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeBooleanVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeBooleanVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeInputVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeInputVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeExportVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeExportVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeSamplerVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeSamplerVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeAddressVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeAddressVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodePredicateVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodePredicateVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeLODVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeLODVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodePrevScalarVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodePrevScalarVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeGradientXVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeGradientXVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeGradientYVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeGradientYVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetMicrocodeFullFetchVarIndex(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeFullFetchVarIndex@Compiler@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetNumMicrocodeVariables(void)
//{
//    mangled_ppc("?GetNumMicrocodeVariables@Compiler@D3DXShader@@AAAIXZ");
//};

//private: void D3DXShader::Compiler::IsolateVariableDefinition(class D3DXShader::Block *, unsigned int, unsigned int)
//{
//    mangled_ppc("?IsolateVariableDefinition@Compiler@D3DXShader@@AAAXPAVBlock@2@II@Z");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetTargetLabelAddress(unsigned long)
//{
//    mangled_ppc("?SetTargetLabelAddress@Instruction_ControlTransfer@D3DXShader@@QAAXK@Z");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetSlashGfControlFlowPreference(enum D3DXShader::ControlFlowPreference)
//{
//    mangled_ppc("?SetSlashGfControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAAXW4ControlFlowPreference@2@@Z");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetTestControlFlowPreference(enum D3DXShader::ControlFlowPreference)
//{
//    mangled_ppc("?SetTestControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAAXW4ControlFlowPreference@2@@Z");
//};

//public: bool D3DXShader::Instruction::SetAllConstraintFlags(unsigned int)
//{
//    mangled_ppc("?SetAllConstraintFlags@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::IsAlwaysInteger(unsigned int)
//{
//    mangled_ppc("?IsAlwaysInteger@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: class D3DXShader::Compiler * D3DXShader::ComponentTypeEnumerator::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@ComponentTypeEnumerator@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::GetAttributes(void)
//{
//    mangled_ppc("?GetAttributes@ComponentTypeEnumerator@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::ResultStack::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@ResultStack@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: class D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)> * D3DXShader::ResultStack::GetStack(void)
//{
//    mangled_ppc("?GetStack@ResultStack@D3DXShader@@QAAPAV?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: class D3DXShader::CNode * D3DXShader::Compiler::ExpectNodeType(class D3DXShader::CNode *, enum D3DXShader::_D3DNODE_TYPE)
//{
//    mangled_ppc("?ExpectNodeType@Compiler@D3DXShader@@AAAPAVCNode@2@PAV32@W4_D3DNODE_TYPE@2@@Z");
//};

//private: class D3DXShader::CNode * D3DXShader::Compiler::ExpectOptionalNodeType(class D3DXShader::CNode *, enum D3DXShader::_D3DNODE_TYPE)
//{
//    mangled_ppc("?ExpectOptionalNodeType@Compiler@D3DXShader@@AAAPAVCNode@2@PAV32@W4_D3DNODE_TYPE@2@@Z");
//};

//private: class D3DXShader::CNodeFunction * D3DXShader::Compiler::ExpectFunctionNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectFunctionNode@Compiler@D3DXShader@@AAAPAVCNodeFunction@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::ExpectExpressionNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectExpressionNode@Compiler@D3DXShader@@AAAPAVCNodeExpression@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::ExpectExpressionNode(class D3DXShader::CNode *, enum D3DXShader::_D3DEXPR_OP)
//{
//    mangled_ppc("?ExpectExpressionNode@Compiler@D3DXShader@@AAAPAVCNodeExpression@2@PAVCNode@2@W4_D3DEXPR_OP@2@@Z");
//};

//private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::ExpectExpressionNode(class D3DXShader::CNode *, enum D3DXShader::_D3DEXPR_OP, unsigned int)
//{
//    mangled_ppc("?ExpectExpressionNode@Compiler@D3DXShader@@AAAPAVCNodeExpression@2@PAVCNode@2@W4_D3DEXPR_OP@2@I@Z");
//};

//private: class D3DXShader::CNodeType * D3DXShader::Compiler::ExpectTypeNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectTypeNode@Compiler@D3DXShader@@AAAPAVCNodeType@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeArray * D3DXShader::Compiler::ExpectArrayNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectArrayNode@Compiler@D3DXShader@@AAAPAVCNodeArray@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeValue * D3DXShader::Compiler::ExpectValueNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectValueNode@Compiler@D3DXShader@@AAAPAVCNodeValue@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeList * D3DXShader::Compiler::ExpectListNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectListNode@Compiler@D3DXShader@@AAAPAVCNodeList@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeList * D3DXShader::Compiler::ExpectOptionalListNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectOptionalListNode@Compiler@D3DXShader@@AAAPAVCNodeList@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeDecl * D3DXShader::Compiler::ExpectDeclNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectDeclNode@Compiler@D3DXShader@@AAAPAVCNodeDecl@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeVariable * D3DXShader::Compiler::ExpectVariableNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectVariableNode@Compiler@D3DXShader@@AAAPAVCNodeVariable@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeToken * D3DXShader::Compiler::ExpectTokenNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectTokenNode@Compiler@D3DXShader@@AAAPAVCNodeToken@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeUAsmRegister * D3DXShader::Compiler::ExpectUAsmRegisterNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectUAsmRegisterNode@Compiler@D3DXShader@@AAAPAVCNodeUAsmRegister@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeUAsmRegister * D3DXShader::Compiler::ExpectOptionalUAsmRegisterNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ExpectOptionalUAsmRegisterNode@Compiler@D3DXShader@@AAAPAVCNodeUAsmRegister@2@PAVCNode@2@@Z");
//};

//private: bool D3DXShader::Compiler::IsVariableInitializationStatement(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsVariableInitializationStatement@Compiler@D3DXShader@@AAA_NPAVCNode@2@@Z");
//};

//private: bool D3DXShader::Compiler::MatchesShaderTarget(class D3DXShader::CNode *, unsigned long *)
//{
//    mangled_ppc("?MatchesShaderTarget@Compiler@D3DXShader@@AAA_NPAVCNode@2@PAK@Z");
//};

//private: void D3DXShader::Compiler::SetInternalTokenLocation(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?SetInternalTokenLocation@Compiler@D3DXShader@@AAAXPAUD3DXTOKEN@2@@Z");
//};

//private: bool D3DXShader::Compiler::IsNonFloatType(class D3DXShader::CNodeType *)
//{
//    mangled_ppc("?IsNonFloatType@Compiler@D3DXShader@@AAA_NPAVCNodeType@2@@Z");
//};

//private: bool D3DXShader::Compiler::GetTypeShape(class D3DXShader::CNode *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetTypeShape@Compiler@D3DXShader@@AAA_NPAVCNode@2@PAI1@Z");
//};

//private: bool D3DXShader::Compiler::GetLeafNodeShape(class D3DXShader::CNode *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetLeafNodeShape@Compiler@D3DXShader@@AAA_NPAVCNode@2@PAI1@Z");
//};

//private: bool D3DXShader::Compiler::GetNodeShape(class D3DXShader::CNode *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetNodeShape@Compiler@D3DXShader@@AAA_NPAVCNode@2@PAI1@Z");
//};

//private: bool D3DXShader::Compiler::GetNodeSize(class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?GetNodeSize@Compiler@D3DXShader@@AAA_NPAVCNode@2@PAI@Z");
//};

//private: class D3DXShader::CNodeToken * D3DXShader::Compiler::GetSemanticToken(class D3DXShader::CNode *)
//{
//    mangled_ppc("?GetSemanticToken@Compiler@D3DXShader@@AAAPAVCNodeToken@2@PAVCNode@2@@Z");
//};

//private: bool D3DXShader::Compiler::ParseIntegerCastNode(class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?ParseIntegerCastNode@Compiler@D3DXShader@@AAA_NPAVCNode@2@PAI@Z");
//};

//private: bool D3DXShader::Compiler::ParseBooleanCastNode(class D3DXShader::CNode *, bool *)
//{
//    mangled_ppc("?ParseBooleanCastNode@Compiler@D3DXShader@@AAA_NPAVCNode@2@PA_N@Z");
//};

//private: unsigned int D3DXShader::Compiler::ParseIntegerArgument(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ParseIntegerArgument@Compiler@D3DXShader@@AAAIPAVCNode@2@@Z");
//};

//private: void D3DXShader::Compiler::ParseIntegerRangeArgument(class D3DXShader::CNode *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?ParseIntegerRangeArgument@Compiler@D3DXShader@@AAAXPAVCNode@2@PAI1@Z");
//};

//private: bool D3DXShader::Compiler::ParseBooleanArgument(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ParseBooleanArgument@Compiler@D3DXShader@@AAA_NPAVCNode@2@@Z");
//};

//private: struct D3DXShader::Function * D3DXShader::Compiler::FindFunctionByIndex(unsigned int)
//{
//    mangled_ppc("?FindFunctionByIndex@Compiler@D3DXShader@@AAAPAUFunction@2@I@Z");
//};

//private: struct D3DXShader::Function * D3DXShader::Compiler::FindFunctionFromCallNode(class D3DXShader::CNodeExpression *)
//{
//    mangled_ppc("?FindFunctionFromCallNode@Compiler@D3DXShader@@AAAPAUFunction@2@PAVCNodeExpression@2@@Z");
//};

//public: class D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)> * D3DXShader::ParseStack::GetNodeStack(void)
//{
//    mangled_ppc("?GetNodeStack@ParseStack@D3DXShader@@QAAPAV?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//private: char const * D3DXShader::Compiler::GetMicrocodeVarName(unsigned int)
//{
//    mangled_ppc("?GetMicrocodeVarName@Compiler@D3DXShader@@AAAPBDI@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetVarIndexFromRegisterNode(class D3DXShader::CNodeUAsmRegister *, unsigned int *)
//{
//    mangled_ppc("?GetVarIndexFromRegisterNode@Compiler@D3DXShader@@AAAIPAVCNodeUAsmRegister@2@PAI@Z");
//};

//public: char const * D3DXShader::Compiler::GetVarName(unsigned int)
//{
//    mangled_ppc("?GetVarName@Compiler@D3DXShader@@QAAPBDI@Z");
//};

//private: char const * D3DXShader::Compiler::GetAttributeName(class D3DXShader::CNodeAttribute *)
//{
//    mangled_ppc("?GetAttributeName@Compiler@D3DXShader@@AAAPBDPAVCNodeAttribute@2@@Z");
//};

//private: enum D3DXShader::AttributeType D3DXShader::Compiler::IdentifyAttributeNode(class D3DXShader::CNodeAttribute *)
//{
//    mangled_ppc("?IdentifyAttributeNode@Compiler@D3DXShader@@AAA?AW4AttributeType@2@PAVCNodeAttribute@2@@Z");
//};

//private: void D3DXShader::Compiler::RestoreAttributeState(struct D3DXShader::AttributeStateStackEntry *)
//{
//    mangled_ppc("?RestoreAttributeState@Compiler@D3DXShader@@AAAXPAUAttributeStateStackEntry@2@@Z");
//};

//int D3DXShader::SortVariableComponentInfoByReg(void const *, void const *)
//{
//    mangled_ppc("?SortVariableComponentInfoByReg@D3DXShader@@YAHPBX0@Z");
//};

//private: void D3DXShader::Compiler::InitInternalImportVariable(unsigned int, struct D3DXShader::Function *, unsigned int, enum D3DXShader::_D3DSCOPE_TYPE, char const *)
//{
//    mangled_ppc("?InitInternalImportVariable@Compiler@D3DXShader@@AAAXIPAUFunction@2@IW4_D3DSCOPE_TYPE@2@PBD@Z");
//};

//public: D3DXShader::MatrixAccessor::MatrixAccessor(class D3DXShader::ResultStackEnumerator *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0MatrixAccessor@D3DXShader@@QAA@PAVResultStackEnumerator@1@II@Z");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::AttributeState * D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::PeekNext(void)
//{
//    mangled_ppc("?PeekNext@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeState@2@XZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Result * D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PeekNext(void)
//{
//    mangled_ppc("?PeekNext@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::InitJump(bool, class D3DXShader::Block *, bool, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?InitJump@Instruction@D3DXShader@@QAAX_NPAVBlock@2@0PAVCompiler@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr(enum D3DXShader::Opcode, unsigned int, unsigned int)
//{
//    mangled_ppc("?MakeInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@W4Opcode@2@II@Z");
//};

//public: bool D3DXShader::Compiler::InsertCopy(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?InsertCopy@Compiler@D3DXShader@@QAA_NPAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_MERGE(unsigned int)
//{
//    mangled_ppc("?MakeInstr_MERGE@Compiler@D3DXShader@@QAAPAVInstruction@2@I@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_EXPORT(void)
//{
//    mangled_ppc("?MakeInstr_Q_ALLOC_EXPORT@Compiler@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//private: class D3DXShader::CNodeToken * D3DXShader::Compiler::CreateTokenIdNode(char const *)
//{
//    mangled_ppc("?CreateTokenIdNode@Compiler@D3DXShader@@AAAPAVCNodeToken@2@PBD@Z");
//};

//private: class D3DXShader::CNodeDecl * D3DXShader::Compiler::CreateDeclNode(enum D3DXShader::_D3DDECL_TYPE, char const *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CreateDeclNode@Compiler@D3DXShader@@AAAPAVCNodeDecl@2@W4_D3DDECL_TYPE@2@PBDPAVCNode@2@@Z");
//};

//private: class D3DXShader::CNodeList * D3DXShader::Compiler::CreateListNode(class D3DXShader::CNode *, class D3DXShader::CNode *, char const *)
//{
//    mangled_ppc("?CreateListNode@Compiler@D3DXShader@@AAAPAVCNodeList@2@PAVCNode@2@0PBD@Z");
//};

//private: class D3DXShader::CNodeList * D3DXShader::Compiler::CreateValueListNode(float *, unsigned long)
//{
//    mangled_ppc("?CreateValueListNode@Compiler@D3DXShader@@AAAPAVCNodeList@2@PAMK@Z");
//};

//private: class D3DXShader::CNodeValue * D3DXShader::Compiler::CreateVariableValueNode(unsigned int, unsigned int)
//{
//    mangled_ppc("?CreateVariableValueNode@Compiler@D3DXShader@@AAAPAVCNodeValue@2@II@Z");
//};

//private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::CreateCastNode(class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("?CreateCastNode@Compiler@D3DXShader@@AAAPAVCNodeExpression@2@PAVCNode@2@I@Z");
//};

//private: class D3DXShader::CNodeStatement * D3DXShader::Compiler::CreateStatementNode(void)
//{
//    mangled_ppc("?CreateStatementNode@Compiler@D3DXShader@@AAAPAVCNodeStatement@2@XZ");
//};

//private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::CreateAssignmentExpressionNode(unsigned int, class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("?CreateAssignmentExpressionNode@Compiler@D3DXShader@@AAAPAVCNodeExpression@2@IPAVCNode@2@I@Z");
//};

//private: class D3DXShader::CNodeStatement * D3DXShader::Compiler::CreateVariableCopyStatementNode(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CreateVariableCopyStatementNode@Compiler@D3DXShader@@AAAPAVCNodeStatement@2@III@Z");
//};

//private: class D3DXShader::CNodeExpression * D3DXShader::Compiler::CreateVariableComparisonExpressionNode(unsigned int, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CreateVariableComparisonExpressionNode@Compiler@D3DXShader@@AAAPAVCNodeExpression@2@IPAVCNode@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::CountLeafNodeComponents(class D3DXShader::CNode *)
//{
//    mangled_ppc("?CountLeafNodeComponents@Compiler@D3DXShader@@AAAIPAVCNode@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::CountComponents(class D3DXShader::CNode *)
//{
//    mangled_ppc("?CountComponents@Compiler@D3DXShader@@AAAIPAVCNode@2@@Z");
//};

//private: class D3DXShader::CNode * D3DXShader::Compiler::ImportASMNodeList(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ImportASMNodeList@Compiler@D3DXShader@@AAAPAVCNode@2@PAV32@@Z");
//};

//private: class D3DXShader::CNodeType * D3DXShader::Compiler::CreateSimpleTypeNode(enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned int, unsigned int)
//{
//    mangled_ppc("?CreateSimpleTypeNode@Compiler@D3DXShader@@AAAPAVCNodeType@2@W4_D3DCOMPONENT_TYPE@2@II@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetModifiersFromResult(class D3DXShader::Result *)
//{
//    mangled_ppc("?GetModifiersFromResult@Compiler@D3DXShader@@AAAIPAVResult@2@@Z");
//};

//private: bool D3DXShader::Compiler::GetFloatConstant(class D3DXShader::Result *, double *)
//{
//    mangled_ppc("?GetFloatConstant@Compiler@D3DXShader@@AAA_NPAVResult@2@PAN@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::GetScalarDependency(class D3DXShader::Dependency *, enum D3DXShader::Component)
//{
//    mangled_ppc("?GetScalarDependency@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@W4Component@2@@Z");
//};

//public: bool D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::IsAtTop(void)
//{
//    mangled_ppc("?IsAtTop@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Result * D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PeekNextHigher(void)
//{
//    mangled_ppc("?PeekNextHigher@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Mark(struct D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Reset(struct D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Mark(struct D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Reset(struct D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 3>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$02@D3DXShader@@QAAXXZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: class D3DXShader::Result * D3DXShader::ResultStackEnumerator::PeekResult(void)
//{
//    mangled_ppc("?PeekResult@ResultStackEnumerator@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: D3DXShader::CNodeListWalker::~CNodeListWalker(void)
//{
//    mangled_ppc("??1CNodeListWalker@D3DXShader@@QAA@XZ");
//};

//private: void D3DXShader::Compiler::ApplyBranchAttributes(class D3DXShader::Instruction *, struct D3DXShader::CommittedAttributeState *)
//{
//    mangled_ppc("?ApplyBranchAttributes@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAUCommittedAttributeState@2@@Z");
//};

//private: enum D3DXShader::Component D3DXShader::Compiler::GetComponentFromResult(class D3DXShader::Result *)
//{
//    mangled_ppc("?GetComponentFromResult@Compiler@D3DXShader@@AAA?AW4Component@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::MergeDependencies(class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Dependency *, enum D3DXShader::Component)
//{
//    mangled_ppc("?MergeDependencies@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@W4Component@2@010101@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::MergeInstructions(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?MergeInstructions@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@W4Component@2@010101@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::IsolateComputation(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?IsolateComputation@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: struct D3DXShader::AttributeState * D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeState@2@XZ");
//};

//public: class D3DXShader::Result * D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipForward(unsigned int)
//{
//    mangled_ppc("?SkipForward@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::AddToTail(class D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0> *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAU342@@Z");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: void D3DXShader::Block::InitSubEntryPoint(struct D3DXShader::Function *)
//{
//    mangled_ppc("?InitSubEntryPoint@Block@D3DXShader@@QAAXPAUFunction@2@@Z");
//};

//public: unsigned long D3DXShader::Compiler::SetDeclContextNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?SetDeclContextNode@Compiler@D3DXShader@@QAAKPAVCNode@2@@Z");
//};

//public: void D3DXShader::Compiler::FreeProgramMem(void *, unsigned long)
//{
//    mangled_ppc("?FreeProgramMem@Compiler@D3DXShader@@QAAXPAXK@Z");
//};

//public: void * D3DXShader::Compiler::AllocAlignedFunctionMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocAlignedFunctionMem@Compiler@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::CreateBlock(void)
//{
//    mangled_ppc("?CreateBlock@Compiler@D3DXShader@@AAAPAVBlock@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::IsolateComputation(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsolateComputation@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MIN@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETNE(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_FRACT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_TRUNC(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_TRUNC@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FLOOR(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_FLOOR@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@00@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT4(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DOT4@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DOT3@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CUBE(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CUBE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX4(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX4@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_KILLGT(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_KILLGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DST(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DST@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAXA(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAXA@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_EXP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_RECIP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_MAXA@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_SQRT_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SIN(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_SIN@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_COS(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_COS@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_TEX_LOD(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_SET_TEX_LOD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_GET_GRADIENTS(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_GET_GRADIENTS@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_H(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_SET_GRADIENTS_H@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_V(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_SET_GRADIENTS_V@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MIN@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_FRACT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_EXP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_LOG_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_RECIP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIPSQRT_IEEE(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_RECIPSQRT_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_SQRT_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_DOT3@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@0PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Result, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Dependency *, class D3DXShader::Result, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@VResult@2@1@Z");
//};

//public: class D3DXShader::Result * D3DXShader::Block::GetOrCreateVariableDefs(unsigned int, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetOrCreateVariableDefs@Block@D3DXShader@@QAAPAVResult@2@IPAVCompiler@2@@Z");
//};

//private: class D3DXShader::CNodeRegister * D3DXShader::Compiler::CreateRegisterNode(char, unsigned int)
//{
//    mangled_ppc("?CreateRegisterNode@Compiler@D3DXShader@@AAAPAVCNodeRegister@2@DI@Z");
//};

//private: class D3DXShader::CNodeToken * D3DXShader::Compiler::CreateSemanticNode(unsigned long, unsigned long)
//{
//    mangled_ppc("?CreateSemanticNode@Compiler@D3DXShader@@AAAPAVCNodeToken@2@KK@Z");
//};

//private: unsigned int D3DXShader::Compiler::ParseExportSemantic(unsigned int, unsigned int, char const *, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?ParseExportSemantic@Compiler@D3DXShader@@AAAIIIPBDII_N@Z");
//};

//private: class D3DXShader::CNodeDecl * D3DXShader::Compiler::CreateMicrocodeVariableDeclaration(char const *, unsigned int, unsigned int, enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned int, unsigned int, class D3DXShader::CNode **)
//{
//    mangled_ppc("?CreateMicrocodeVariableDeclaration@Compiler@D3DXShader@@AAAPAVCNodeDecl@2@PBDIIW4_D3DCOMPONENT_TYPE@2@IIPAPAVCNode@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportMicrocodeInputVariable(char const *, unsigned int, unsigned long, unsigned long, class D3DXShader::CNode **, class D3DXShader::CNode **)
//{
//    mangled_ppc("?ImportMicrocodeInputVariable@Compiler@D3DXShader@@AAAXPBDIKKPAPAVCNode@2@1@Z");
//};

//private: void D3DXShader::Compiler::ImportMicrocodeOutputVariable(char const *, unsigned int, unsigned long, unsigned long, unsigned long, class D3DXShader::CNode **)
//{
//    mangled_ppc("?ImportMicrocodeOutputVariable@Compiler@D3DXShader@@AAAXPBDIKKKPAPAVCNode@2@@Z");
//};

//private: void D3DXShader::Compiler::PrepareFunctionEntryBlock(class D3DXShader::Block *, struct D3DXShader::Function *)
//{
//    mangled_ppc("?PrepareFunctionEntryBlock@Compiler@D3DXShader@@AAAXPAVBlock@2@PAUFunction@2@@Z");
//};

//private: void D3DXShader::Compiler::AddFunctionExitAnnotation(class D3DXShader::Instruction *, struct D3DXShader::Function *)
//{
//    mangled_ppc("?AddFunctionExitAnnotation@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAUFunction@2@@Z");
//};

//private: void D3DXShader::Compiler::RecordLexicalScopeMapping(void)
//{
//    mangled_ppc("?RecordLexicalScopeMapping@Compiler@D3DXShader@@AAAXXZ");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateArrayLoad(struct D3DXShader::IndexedResult *, class D3DXShader::Result, unsigned int)
//{
//    mangled_ppc("?GenerateArrayLoad@Compiler@D3DXShader@@AAAPAVInstruction@2@PAUIndexedResult@2@VResult@2@I@Z");
//};

//private: void D3DXShader::Compiler::MoveVariableDefinitionsFromBlock_SkipOutputs(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::CNodeFunction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?MoveVariableDefinitionsFromBlock_SkipOutputs@Compiler@D3DXShader@@AAAXPAVBlock@2@0PAVCNodeFunction@2@PAV12@@Z");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipHigher(unsigned int)
//{
//    mangled_ppc("?SkipHigher@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: class D3DXShader::Result * D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetNextHigher(void)
//{
//    mangled_ppc("?GetNextHigher@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::MoveElementsFrom(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *)
//{
//    mangled_ppc("?MoveElementsFrom@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Contains(unsigned int)
//{
//    mangled_ppc("?Contains@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ComponentTypeEnumerator::ContainerState * D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUContainerState@ComponentTypeEnumerator@2@XZ");
//};

//public: struct D3DXShader::ComponentTypeEnumerator::ContainerState D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA?AUContainerState@ComponentTypeEnumerator@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Result * D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: class D3DXShader::Result D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AVResult@2@XZ");
//};

//public: class D3DXShader::Result D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::RemoveLast(unsigned int)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AVResult@2@I@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipBackward(unsigned int)
//{
//    mangled_ppc("?SkipBackward@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUParseStackEntry@ParseStack@2@XZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA?AUParseStackEntry@ParseStack@2@XZ");
//};

//public: unsigned int D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUParseStackEntry@ParseStack@2@XZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::PeekPrev(void)
//{
//    mangled_ppc("?PeekPrev@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUParseStackEntry@ParseStack@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::AttributeState * D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeState@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::LexicalScope * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScope@2@XZ");
//};

//public: struct D3DXShader::LexicalScope D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AULexicalScope@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeStateStackEntry@2@XZ");
//};

//public: struct D3DXShader::AttributeStateStackEntry D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUAttributeStateStackEntry@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ImportProgramStackState * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUImportProgramStackState@2@XZ");
//};

//public: struct D3DXShader::ImportProgramStackState D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUImportProgramStackState@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::Function * D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUFunction@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::LexicalScope * D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScope@2@XZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: void * D3DXShader::Compiler::AllocProgramMem(unsigned long)
//{
//    mangled_ppc("?AllocProgramMem@Compiler@D3DXShader@@QAAPAXK@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::CreateSubEntryBlock(struct D3DXShader::Function *)
//{
//    mangled_ppc("?CreateSubEntryBlock@Compiler@D3DXShader@@AAAPAVBlock@2@PAUFunction@2@@Z");
//};

//private: void D3DXShader::Compiler::StartNewIsolationGroup(void)
//{
//    mangled_ppc("?StartNewIsolationGroup@Compiler@D3DXShader@@AAAXXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?Abs@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@@Z");
//};

//private: unsigned int D3DXShader::Compiler::ParseExportSemantic(char const *, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?ParseExportSemantic@Compiler@D3DXShader@@AAAIPBDII_N@Z");
//};

//public: class D3DXShader::Result * D3DXShader::ResultStackEnumerator::GetResult(void)
//{
//    mangled_ppc("?GetResult@ResultStackEnumerator@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: class D3DXShader::Result * D3DXShader::ResultStackEnumerator::GetNthResult(unsigned int)
//{
//    mangled_ppc("?GetNthResult@ResultStackEnumerator@D3DXShader@@QAAPAVResult@2@I@Z");
//};

//public: void D3DXShader::ResultStackEnumerator::SkipResults(unsigned int)
//{
//    mangled_ppc("?SkipResults@ResultStackEnumerator@D3DXShader@@QAAXI@Z");
//};

//private: unsigned int D3DXShader::Compiler::ParseExportSemantic(class D3DXShader::CNode *, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?ParseExportSemantic@Compiler@D3DXShader@@AAAIPAVCNode@2@II_N@Z");
//};

//private: static long D3DXShader::Compiler::ImportASMLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?ImportASMLiteralsCallback@Compiler@D3DXShader@@CAJPAXKKKPBX@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateSubroutineReturn(class D3DXShader::Block *)
//{
//    mangled_ppc("?GenerateSubroutineReturn@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::SeparateBlockForLine(class D3DXShader::CNode *)
//{
//    mangled_ppc("?SeparateBlockForLine@Compiler@D3DXShader@@AAAXPAVCNode@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GetInstructionFromResult(class D3DXShader::Result *)
//{
//    mangled_ppc("?GetInstructionFromResult@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVResult@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependencyFromResult(class D3DXShader::Result *)
//{
//    mangled_ppc("?GetDependencyFromResult@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResult@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::PeekDependency(class D3DXShader::ResultStackEnumerator *)
//{
//    mangled_ppc("?PeekDependency@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResultStackEnumerator@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependency(class D3DXShader::ResultStackEnumerator *)
//{
//    mangled_ppc("?GetDependency@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResultStackEnumerator@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::GetMergedDependency(class D3DXShader::ResultStackEnumerator *, unsigned int, bool, bool)
//{
//    mangled_ppc("?GetMergedDependency@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResultStackEnumerator@2@I_N1@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::PeekMergedDependency(class D3DXShader::ResultStackEnumerator *, unsigned int, unsigned int)
//{
//    mangled_ppc("?PeekMergedDependency@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResultStackEnumerator@2@II@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::PeekVectorDependency(class D3DXShader::ResultStackEnumerator *, unsigned int)
//{
//    mangled_ppc("?PeekVectorDependency@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResultStackEnumerator@2@I@Z");
//};

//private: void D3DXShader::Compiler::ConvertToRVal(class D3DXShader::Result *)
//{
//    mangled_ppc("?ConvertToRVal@Compiler@D3DXShader@@AAAXPAVResult@2@@Z");
//};

//public: class D3DXShader::Result * D3DXShader::MatrixAccessor::Get(unsigned int, unsigned int)
//{
//    mangled_ppc("?Get@MatrixAccessor@D3DXShader@@QAAPAVResult@2@II@Z");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ComponentTypeEnumerator::ContainerState D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA?AUContainerState@ComponentTypeEnumerator@2@XZ");
//};

//public: struct D3DXShader::ComponentTypeEnumerator::ContainerState * D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUContainerState@ComponentTypeEnumerator@2@XZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Result D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AVResult@2@XZ");
//};

//public: class D3DXShader::Result D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Pop(unsigned int)
//{
//    mangled_ppc("?Pop@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AVResult@2@I@Z");
//};

//public: class D3DXShader::Result * D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GoToBottom(void)
//{
//    mangled_ppc("?GoToBottom@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::SkipLower(unsigned int)
//{
//    mangled_ppc("?SkipLower@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA?AUParseStackEntry@ParseStack@2@XZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUParseStackEntry@ParseStack@2@XZ");
//};

//public: unsigned int D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::IsAtBottom(void)
//{
//    mangled_ppc("?IsAtBottom@?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetNextLower(void)
//{
//    mangled_ppc("?GetNextLower@?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUParseStackEntry@ParseStack@2@XZ");
//};

//public: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::PeekNextLower(void)
//{
//    mangled_ppc("?PeekNextLower@?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAPAUParseStackEntry@ParseStack@2@XZ");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 3>::GetField(unsigned int)
//{
//    mangled_ppc("?GetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$02@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 3>::SetFields(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetFields@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$02@D3DXShader@@QAAXIII@Z");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::RemoveNext(void)
//{
//    mangled_ppc("?RemoveNext@?$ArrayListEnumerator@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::LexicalScope D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AULexicalScope@2@XZ");
//};

//public: struct D3DXShader::LexicalScope * D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScope@2@XZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::AttributeStateStackEntry D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUAttributeStateStackEntry@2@XZ");
//};

//public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeStateStackEntry@2@XZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ImportProgramStackState D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUImportProgramStackState@2@XZ");
//};

//public: struct D3DXShader::ImportProgramStackState * D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUImportProgramStackState@2@XZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::Function * D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUFunction@2@XZ");
//};

//public: bool D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::IsAtBottom(void)
//{
//    mangled_ppc("?IsAtBottom@?$StackEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::LexicalScope * D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetNextLower(void)
//{
//    mangled_ppc("?GetNextLower@?$StackEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScope@2@XZ");
//};

//public: D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: class D3DXShader::Result * D3DXShader::ArrayListEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::ArrayListEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@1@@Z");
//};

//private: struct D3DXShader::AttributeState * D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUAttributeState@2@I@Z");
//};

//private: struct D3DXShader::LexicalScopeNestingInfo * D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAULexicalScopeNestingInfo@2@I@Z");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::ArrayListEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//private: struct D3DXShader::ComponentTypeEnumerator::ContainerState * D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@AAAPAUContainerState@ComponentTypeEnumerator@2@I@Z");
//};

//private: class D3DXShader::Result * D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAVResult@2@I@Z");
//};

//private: struct D3DXShader::ParseStack::ParseStackEntry * D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@AAAPAUParseStackEntry@ParseStack@2@I@Z");
//};

//private: struct D3DXShader::LexicalScope * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAULexicalScope@2@I@Z");
//};

//private: struct D3DXShader::AttributeStateStackEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUAttributeStateStackEntry@2@I@Z");
//};

//private: struct D3DXShader::ImportProgramStackState * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUImportProgramStackState@2@I@Z");
//};

//private: struct D3DXShader::Function ** D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAUFunction@2@I@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Result *)
//{
//    mangled_ppc("?Negate@Compiler@D3DXShader@@QAAPAVDependency@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Result)
//{
//    mangled_ppc("?Negate@Compiler@D3DXShader@@QAAPAVDependency@2@VResult@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Result *)
//{
//    mangled_ppc("?Abs@Compiler@D3DXShader@@QAAPAVDependency@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Abs(class D3DXShader::Result)
//{
//    mangled_ppc("?Abs@Compiler@D3DXShader@@QAAPAVDependency@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::IsolateComputation(class D3DXShader::Result *)
//{
//    mangled_ppc("?IsolateComputation@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Result, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Result, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_S_LOG_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Result *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_FRACT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_S_EXP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_S_LOG_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_S_RECIP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_TFETCH(class D3DXShader::Result *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_TFETCH@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Dependency *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Dependency *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(class D3DXShader::Dependency *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Instruction *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@VResult@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Dependency *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Dependency *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Instruction *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Instruction *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Result *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Result *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(class D3DXShader::Result *, class D3DXShader::Result *)
//{
//    mangled_ppc("?MakeInstr_V_MIN@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@0@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT2ADD(class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_DOT2ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@0VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Dependency *, class D3DXShader::Result, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@VResult@2@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Instruction *, class D3DXShader::Result, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@VResult@2@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Result *, class D3DXShader::Result, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVResult@2@V42@1@Z");
//};

//public: void D3DXShader::ResultStack::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@ResultStack@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: bool D3DXShader::ResultStack::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@ResultStack@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::ResultStack::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@ResultStack@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Result * D3DXShader::ResultStack::PeekTop(void)
//{
//    mangled_ppc("?PeekTop@ResultStack@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: void D3DXShader::ResultStackEnumerator::SetDepth(unsigned int)
//{
//    mangled_ppc("?SetDepth@ResultStackEnumerator@D3DXShader@@QAAXI@Z");
//};

//private: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::AdvanceToNextField(void)
//{
//    mangled_ppc("?AdvanceToNextField@ComponentTypeEnumerator@D3DXShader@@AAAPAVCNode@2@XZ");
//};

//public: void D3DXShader::ParseStack::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@ParseStack@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: bool D3DXShader::ParseStack::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@ParseStack@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::CNode * D3DXShader::ParseStack::Pop(enum D3DXShader::ParseStack::ParseStackEntryType *)
//{
//    mangled_ppc("?Pop@ParseStack@D3DXShader@@QAAPAVCNode@2@PAW4ParseStackEntryType@12@@Z");
//};

//unsigned int D3DXShader::DecodeUAsmWriteMask(unsigned long)
//{
//    mangled_ppc("?DecodeUAsmWriteMask@D3DXShader@@YAIK@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::LeaveIsolateScope(void)
//{
//    mangled_ppc("?LeaveIsolateScope@Compiler@D3DXShader@@AAAPAVBlock@2@XZ");
//};

//private: void D3DXShader::Compiler::GenerateAssert(class D3DXShader::Result *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?GenerateAssert@Compiler@D3DXShader@@AAAXPAVResult@2@PAVCNode@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateSumOfProducts(class D3DXShader::ResultStackEnumerator *, class D3DXShader::ResultStackEnumerator *, unsigned int)
//{
//    mangled_ppc("?GenerateSumOfProducts@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVResultStackEnumerator@2@0I@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateTextureLookup(class D3DXShader::Result *, class D3DXShader::Dependency *, unsigned int, bool, enum D3DXShader::TextureLookupSuffix, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?GenerateTextureLookup@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVResult@2@PAVDependency@2@I_NW4TextureLookupSuffix@2@PAV32@111@Z");
//};

//private: void D3DXShader::Compiler::GenerateArrayStore(struct D3DXShader::IndexedResult *, class D3DXShader::Result, unsigned int, class D3DXShader::Result)
//{
//    mangled_ppc("?GenerateArrayStore@Compiler@D3DXShader@@AAAXPAUIndexedResult@2@VResult@2@I1@Z");
//};

//private: bool D3DXShader::Compiler::GenerateArrayVariableLoad(class D3DXShader::ResultStackEnumerator *, class D3DXShader::Result, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?GenerateArrayVariableLoad@Compiler@D3DXShader@@AAA_NPAVResultStackEnumerator@2@VResult@2@III@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateTrigOp(class D3DXShader::Result *, enum D3DXShader::_D3DINTRINSIC_OP)
//{
//    mangled_ppc("?GenerateTrigOp@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVResult@2@W4_D3DINTRINSIC_OP@2@@Z");
//};

//public: D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>(class D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: class D3DXShader::Result * D3DXShader::StackEnumerator<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::GetNextLower(void)
//{
//    mangled_ppc("?GetNextLower@?$StackEnumerator@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVResult@2@XZ");
//};

//public: D3DXShader::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::StackEnumerator<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@1@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Append(struct D3DXShader::AttributeState)
//{
//    mangled_ppc("?Append@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUAttributeState@2@@Z");
//};

//public: struct D3DXShader::AttributeState * D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeState@2@XZ");
//};

//public: struct D3DXShader::LexicalScopeNestingInfo * D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScopeNestingInfo@2@XZ");
//};

//public: D3DXShader::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::StackEnumerator<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Append(struct D3DXShader::ComponentTypeEnumerator::ContainerState)
//{
//    mangled_ppc("?Append@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXUContainerState@ComponentTypeEnumerator@2@@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Append(class D3DXShader::Result)
//{
//    mangled_ppc("?Append@?$ArrayList@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXVResult@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Append(struct D3DXShader::ParseStack::ParseStackEntry)
//{
//    mangled_ppc("?Append@?$ArrayList@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXUParseStackEntry@ParseStack@2@@Z");
//};

//public: struct D3DXShader::LexicalScope * D3DXShader::ArrayList<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScope@2@XZ");
//};

//public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::ArrayList<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeStateStackEntry@2@XZ");
//};

//public: struct D3DXShader::ImportProgramStackState * D3DXShader::ArrayList<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUImportProgramStackState@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Append(struct D3DXShader::Function *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUFunction@2@@Z");
//};

//public: void D3DXShader::ResultStack::DumpStack(void)
//{
//    mangled_ppc("?DumpStack@ResultStack@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Result D3DXShader::ResultStack::Pop(void)
//{
//    mangled_ppc("?Pop@ResultStack@D3DXShader@@QAA?AVResult@2@XZ");
//};

//public: void D3DXShader::ResultStack::Pop(unsigned int)
//{
//    mangled_ppc("?Pop@ResultStack@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::ResultStack::PopAll(void)
//{
//    mangled_ppc("?PopAll@ResultStack@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::ResultStackEnumerator::ResultStackEnumerator(class D3DXShader::ResultStack *, unsigned int)
//{
//    mangled_ppc("??0ResultStackEnumerator@D3DXShader@@QAA@PAVResultStack@1@I@Z");
//};

//public: D3DXShader::ResultStackEnumerator::ResultStackEnumerator(class D3DXShader::ResultStack *)
//{
//    mangled_ppc("??0ResultStackEnumerator@D3DXShader@@QAA@PAVResultStack@1@@Z");
//};

//public: void D3DXShader::ResultStackEnumerator::ReplaceResult(class D3DXShader::Result *)
//{
//    mangled_ppc("?ReplaceResult@ResultStackEnumerator@D3DXShader@@QAAXPAVResult@2@@Z");
//};

//public: void D3DXShader::ResultStackEnumerator::ReplaceResult(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?ReplaceResult@ResultStackEnumerator@D3DXShader@@QAAXPAVInstruction@2@I@Z");
//};

//public: void D3DXShader::ResultStackEnumerator::ReplaceResult(class D3DXShader::Dependency *, unsigned int)
//{
//    mangled_ppc("?ReplaceResult@ResultStackEnumerator@D3DXShader@@QAAXPAVDependency@2@I@Z");
//};

//public: void D3DXShader::ResultStackEnumerator::ReplaceResults(unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReplaceResults@ResultStackEnumerator@D3DXShader@@QAAXIPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ResultStackEnumerator::ReplaceResults(unsigned int, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?ReplaceResults@ResultStackEnumerator@D3DXShader@@QAAXIPAVDependency@2@@Z");
//};

//public: void D3DXShader::ParseStack::Mark(struct D3DXShader::StackEnumerator<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@ParseStack@D3DXShader@@QAAXPAUPosition@?$StackEnumerator@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::ApplyAttributeNode(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *, class D3DXShader::CNodeAttribute *)
//{
//    mangled_ppc("?ApplyAttributeNode@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVCNodeAttribute@2@@Z");
//};

//private: void D3DXShader::Compiler::PeekAttributeState(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *)
//{
//    mangled_ppc("?PeekAttributeState@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportVariableInitialValue(class D3DXShader::ResultStack *, unsigned int, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ImportVariableInitialValue@Compiler@D3DXShader@@AAAXPAVResultStack@2@IPAVCNode@2@@Z");
//};

//private: void D3DXShader::Compiler::SwapResultStackRanges(class D3DXShader::ResultStackEnumerator *, unsigned int, class D3DXShader::ResultStackEnumerator *, unsigned int)
//{
//    mangled_ppc("?SwapResultStackRanges@Compiler@D3DXShader@@AAAXPAVResultStackEnumerator@2@I0I@Z");
//};

//private: void D3DXShader::Compiler::ConvertToRVals(class D3DXShader::ResultStack *, unsigned int)
//{
//    mangled_ppc("?ConvertToRVals@Compiler@D3DXShader@@AAAXPAVResultStack@2@I@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateSumOfSquares(class D3DXShader::ResultStack *, unsigned int)
//{
//    mangled_ppc("?GenerateSumOfSquares@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVResultStack@2@I@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateDotProduct(class D3DXShader::ResultStack *, unsigned int)
//{
//    mangled_ppc("?GenerateDotProduct@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVResultStack@2@I@Z");
//};

//private: void D3DXShader::Compiler::AssignLValResult(class D3DXShader::Result *, class D3DXShader::Result)
//{
//    mangled_ppc("?AssignLValResult@Compiler@D3DXShader@@AAAXPAVResult@2@V32@@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Push(struct D3DXShader::ComponentTypeEnumerator::ContainerState)
//{
//    mangled_ppc("?Push@?$Stack@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXUContainerState@ComponentTypeEnumerator@2@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Result, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Result, class D3DXShader::Result, unsigned long)>::Push(class D3DXShader::Result)
//{
//    mangled_ppc("?Push@?$Stack@VResult@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXVResult@2@@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::ParseStack::ParseStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ParseStack::ParseStackEntry, struct D3DXShader::ParseStack::ParseStackEntry, unsigned long)>::Push(struct D3DXShader::ParseStack::ParseStackEntry)
//{
//    mangled_ppc("?Push@?$Stack@UParseStackEntry@ParseStack@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXUParseStackEntry@ParseStack@2@@Z");
//};

//public: struct D3DXShader::LexicalScope * D3DXShader::Stack<struct D3DXShader::LexicalScope, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScope, struct D3DXShader::LexicalScope, unsigned long)>::Push(void)
//{
//    mangled_ppc("?Push@?$Stack@ULexicalScope@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScope@2@XZ");
//};

//public: struct D3DXShader::AttributeStateStackEntry * D3DXShader::Stack<struct D3DXShader::AttributeStateStackEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeStateStackEntry, struct D3DXShader::AttributeStateStackEntry, unsigned long)>::Push(void)
//{
//    mangled_ppc("?Push@?$Stack@UAttributeStateStackEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUAttributeStateStackEntry@2@XZ");
//};

//public: struct D3DXShader::ImportProgramStackState * D3DXShader::Stack<struct D3DXShader::ImportProgramStackState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ImportProgramStackState, struct D3DXShader::ImportProgramStackState, unsigned long)>::Push(void)
//{
//    mangled_ppc("?Push@?$Stack@UImportProgramStackState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUImportProgramStackState@2@XZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::Function *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::Function *, struct D3DXShader::Function *, unsigned long)>::Push(struct D3DXShader::Function *)
//{
//    mangled_ppc("?Push@?$Stack@PAUFunction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUFunction@2@@Z");
//};

//public: void D3DXShader::ResultStack::Push(class D3DXShader::Result)
//{
//    mangled_ppc("?Push@ResultStack@D3DXShader@@QAAXVResult@2@@Z");
//};

//public: D3DXShader::CNodeListWalker::CNodeListWalker(class D3DXShader::CNode *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("??0CNodeListWalker@D3DXShader@@QAA@PAVCNode@1@PAVCompiler@1@@Z");
//};

//public: class D3DXShader::CNode * D3DXShader::CNodeListWalker::GetNext(void)
//{
//    mangled_ppc("?GetNext@CNodeListWalker@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//public: void D3DXShader::CNodeListWalker::Reset(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Reset@CNodeListWalker@D3DXShader@@QAAXPAVCNode@2@@Z");
//};

//private: bool D3DXShader::Compiler::IsDefaultCaseStatement(class D3DXShader::CNodeStatement *)
//{
//    mangled_ppc("?IsDefaultCaseStatement@Compiler@D3DXShader@@AAA_NPAVCNodeStatement@2@@Z");
//};

//private: bool D3DXShader::ComponentTypeEnumerator::StartNewNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?StartNewNode@ComponentTypeEnumerator@D3DXShader@@AAA_NPAVCNode@2@@Z");
//};

//private: bool D3DXShader::ComponentTypeEnumerator::FindNextField(void)
//{
//    mangled_ppc("?FindNextField@ComponentTypeEnumerator@D3DXShader@@AAA_NXZ");
//};

//public: enum D3DXShader::_D3DCOMPONENT_TYPE D3DXShader::ComponentTypeEnumerator::GetNextComponentType(void)
//{
//    mangled_ppc("?GetNextComponentType@ComponentTypeEnumerator@D3DXShader@@QAA?AW4_D3DCOMPONENT_TYPE@2@XZ");
//};

//public: void D3DXShader::ParseStack::PushRVal(class D3DXShader::CNode *)
//{
//    mangled_ppc("?PushRVal@ParseStack@D3DXShader@@QAAXPAVCNode@2@@Z");
//};

//public: void D3DXShader::ParseStack::PushRVal_PossiblyNULL(class D3DXShader::CNode *)
//{
//    mangled_ppc("?PushRVal_PossiblyNULL@ParseStack@D3DXShader@@QAAXPAVCNode@2@@Z");
//};

//public: void D3DXShader::ParseStack::PushLVal(class D3DXShader::CNode *)
//{
//    mangled_ppc("?PushLVal@ParseStack@D3DXShader@@QAAXPAVCNode@2@@Z");
//};

//public: void D3DXShader::ParseStack::PushReduction(class D3DXShader::CNode *, bool)
//{
//    mangled_ppc("?PushReduction@ParseStack@D3DXShader@@QAAXPAVCNode@2@_N@Z");
//};

//public: void D3DXShader::ParseStack::Push(class D3DXShader::CNode *, enum D3DXShader::ParseStack::ParseStackEntryType)
//{
//    mangled_ppc("?Push@ParseStack@D3DXShader@@QAAXPAVCNode@2@W4ParseStackEntryType@12@@Z");
//};

//private: void D3DXShader::Compiler::EnterIsolateScope(class D3DXShader::Block **)
//{
//    mangled_ppc("?EnterIsolateScope@Compiler@D3DXShader@@AAAXPAPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::PushAttributeState(void)
//{
//    mangled_ppc("?PushAttributeState@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::GenerateDebugPrint(class D3DXShader::ResultStack *, class D3DXShader::CNodeExpression *, bool)
//{
//    mangled_ppc("?GenerateDebugPrint@Compiler@D3DXShader@@AAAXPAVResultStack@2@PAVCNodeExpression@2@_N@Z");
//};

//private: void D3DXShader::Compiler::MarkVariableAssignments(class D3DXShader::CNode *, class D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)> *)
//{
//    mangled_ppc("?MarkVariableAssignments@Compiler@D3DXShader@@AAAXPAVCNode@2@PAV?$Stack@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportParameterInitialValues(struct D3DXShader::Function *, class D3DXShader::CNode *, class D3DXShader::ResultStack *)
//{
//    mangled_ppc("?ImportParameterInitialValues@Compiler@D3DXShader@@AAAXPAUFunction@2@PAVCNode@2@PAVResultStack@2@@Z");
//};

//private: class D3DXShader::CNode * D3DXShader::Compiler::PushList(class D3DXShader::ParseStack *, class D3DXShader::CNode *, bool, unsigned int, bool)
//{
//    mangled_ppc("?PushList@Compiler@D3DXShader@@AAAPAVCNode@2@PAVParseStack@2@PAV32@_NI2@Z");
//};

//private: void D3DXShader::Compiler::PushVariable(class D3DXShader::ResultStack *, unsigned int, class D3DXShader::Result *, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?PushVariable@Compiler@D3DXShader@@AAAXPAVResultStack@2@IPAVResult@2@II_N@Z");
//};

//private: unsigned int D3DXShader::Compiler::PushVariableRegister(class D3DXShader::ResultStack *, unsigned int, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?PushVariableRegister@Compiler@D3DXShader@@AAAIPAVResultStack@2@III_N@Z");
//};

//private: void D3DXShader::Compiler::PushInstruction(class D3DXShader::ResultStack *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?PushInstruction@Compiler@D3DXShader@@AAAXPAVResultStack@2@PAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::PushRangeOfResults(class D3DXShader::ResultStack *, class D3DXShader::ResultStackEnumerator *, unsigned int)
//{
//    mangled_ppc("?PushRangeOfResults@Compiler@D3DXShader@@AAAXPAVResultStack@2@PAVResultStackEnumerator@2@I@Z");
//};

//private: void D3DXShader::Compiler::PushTextureLookup(class D3DXShader::ResultStack *, class D3DXShader::CNodeExpression *, unsigned int, bool, bool, enum D3DXShader::TextureLookupSuffix)
//{
//    mangled_ppc("?PushTextureLookup@Compiler@D3DXShader@@AAAXPAVResultStack@2@PAVCNodeExpression@2@I_N2W4TextureLookupSuffix@2@@Z");
//};

//private: class D3DXShader::CNode * D3DXShader::Compiler::PushList_StatementsOnly(class D3DXShader::ParseStack *, class D3DXShader::CNode *, bool)
//{
//    mangled_ppc("?PushList_StatementsOnly@Compiler@D3DXShader@@AAAPAVCNode@2@PAVParseStack@2@PAV32@_N@Z");
//};

//private: bool D3DXShader::Compiler::AnyTypesRequireConversion(class D3DXShader::CNode *)
//{
//    mangled_ppc("?AnyTypesRequireConversion@Compiler@D3DXShader@@AAA_NPAVCNode@2@@Z");
//};

//private: void D3DXShader::Compiler::CollectUnresolvedOptions(class D3DXShader::ResultStack *, class D3DXShader::CNodeUAsmInstruction *, class D3DXShader::Instruction *, struct D3DXShader::UnresolvedUAsmOptions **)
//{
//    mangled_ppc("?CollectUnresolvedOptions@Compiler@D3DXShader@@AAAXPAVResultStack@2@PAVCNodeUAsmInstruction@2@PAVInstruction@2@PAPAUUnresolvedUAsmOptions@2@@Z");
//};

//private: void D3DXShader::Compiler::CommitAttributes(class D3DXShader::ArrayList<struct D3DXShader::AttributeState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::AttributeState, struct D3DXShader::AttributeState, unsigned long)> *, unsigned int, unsigned int, enum D3DXShader::_D3DSCOPE_TYPE, class D3DXShader::CNode **, class D3DXShader::Block **, struct D3DXShader::CommittedAttributeState *)
//{
//    mangled_ppc("?CommitAttributes@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UAttributeState@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@IIW4_D3DSCOPE_TYPE@2@PAPAVCNode@2@PAPAVBlock@2@PAUCommittedAttributeState@2@@Z");
//};

//private: void D3DXShader::Compiler::CommitVariableAttributes(struct D3DXShader::Variable *, unsigned long, class D3DXShader::CNode *, enum D3DXShader::_D3DSCOPE_TYPE, enum D3DXShader::_D3DSCOPE_TYPE)
//{
//    mangled_ppc("?CommitVariableAttributes@Compiler@D3DXShader@@AAAXPAUVariable@2@KPAVCNode@2@W4_D3DSCOPE_TYPE@2@2@Z");
//};

//private: void D3DXShader::Compiler::ExportVariable(class D3DXShader::ResultStack *, unsigned int, class D3DXShader::CNode *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ExportVariable@Compiler@D3DXShader@@AAAXPAVResultStack@2@IPAVCNode@2@PAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::ExportOutParameters(class D3DXShader::CNodeFunction *, class D3DXShader::ResultStack *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ExportOutParameters@Compiler@D3DXShader@@AAAXPAVCNodeFunction@2@PAVResultStack@2@PAVInstruction@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateShaderExit(struct D3DXShader::Function *, class D3DXShader::ResultStack *)
//{
//    mangled_ppc("?GenerateShaderExit@Compiler@D3DXShader@@AAAPAVInstruction@2@PAUFunction@2@PAVResultStack@2@@Z");
//};

//private: void D3DXShader::Compiler::GenerateReturn(struct D3DXShader::Function *, class D3DXShader::ResultStack *)
//{
//    mangled_ppc("?GenerateReturn@Compiler@D3DXShader@@AAAXPAUFunction@2@PAVResultStack@2@@Z");
//};

//private: void D3DXShader::Compiler::CastNonFloatTypes(class D3DXShader::CNode *, class D3DXShader::ResultStack *, unsigned int)
//{
//    mangled_ppc("?CastNonFloatTypes@Compiler@D3DXShader@@AAAXPAVCNode@2@PAVResultStack@2@I@Z");
//};

//private: void D3DXShader::Compiler::ImportVariableTypeInfo(struct D3DXShader::Variable *, unsigned long, class D3DXShader::CNode *, enum D3DXShader::_D3DSCOPE_TYPE)
//{
//    mangled_ppc("?ImportVariableTypeInfo@Compiler@D3DXShader@@AAAXPAUVariable@2@KPAVCNode@2@W4_D3DSCOPE_TYPE@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportReturnValue(class D3DXShader::CNodeFunction *, enum D3DXShader::VariableKind, class D3DXShader::CNodeDecl *)
//{
//    mangled_ppc("?ImportReturnValue@Compiler@D3DXShader@@AAAXPAVCNodeFunction@2@W4VariableKind@2@PAVCNodeDecl@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportVariableInfo(unsigned int, class D3DXShader::CNodeDecl *, class D3DXShader::CNodeVariable *, enum D3DXShader::_D3DSCOPE_TYPE, struct D3DXShader::Function *)
//{
//    mangled_ppc("?ImportVariableInfo@Compiler@D3DXShader@@AAAXIPAVCNodeDecl@2@PAVCNodeVariable@2@W4_D3DSCOPE_TYPE@2@PAUFunction@2@@Z");
//};

//private: struct D3DXShader::Variable * D3DXShader::Compiler::ImportGlobalVariable(class D3DXShader::CNodeDecl *)
//{
//    mangled_ppc("?ImportGlobalVariable@Compiler@D3DXShader@@AAAPAUVariable@2@PAVCNodeDecl@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportParameters(struct D3DXShader::Function *, enum D3DXShader::VariableKind, bool, class D3DXShader::ResultStack *)
//{
//    mangled_ppc("?ImportParameters@Compiler@D3DXShader@@AAAXPAUFunction@2@W4VariableKind@2@_NPAVResultStack@2@@Z");
//};

//private: void D3DXShader::Compiler::ImportVariableDeclaration(class D3DXShader::CNodeDecl *, class D3DXShader::ResultStack *)
//{
//    mangled_ppc("?ImportVariableDeclaration@Compiler@D3DXShader@@AAAXPAVCNodeDecl@2@PAVResultStack@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::ImportExpression(class D3DXShader::ResultStack *, class D3DXShader::CNode *, enum D3DXShader::Compiler::ExpressionUseType)
//{
//    mangled_ppc("?ImportExpression@Compiler@D3DXShader@@AAAPAVDependency@2@PAVResultStack@2@PAVCNode@2@W4ExpressionUseType@12@@Z");
//};

//private: void D3DXShader::Compiler::PrepareToImportInlineMicrocode(void)
//{
//    mangled_ppc("?PrepareToImportInlineMicrocode@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::PrepareBranchAttributes(class D3DXShader::ResultStack *, struct D3DXShader::CommittedAttributeState *)
//{
//    mangled_ppc("?PrepareBranchAttributes@Compiler@D3DXShader@@AAAXPAVResultStack@2@PAUCommittedAttributeState@2@@Z");
//};

//private: void D3DXShader::Compiler::ScanForVariableAssignments(struct D3DXShader::Function *)
//{
//    mangled_ppc("?ScanForVariableAssignments@Compiler@D3DXShader@@AAAXPAUFunction@2@@Z");
//};

//private: void D3DXShader::Compiler::Import(struct D3DXShader::Function *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?Import@Compiler@D3DXShader@@AAAXPAUFunction@2@PAVCNode@2@@Z");
//};

//private: struct D3DXShader::Function * D3DXShader::Compiler::ImportProgram(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ImportProgram@Compiler@D3DXShader@@AAAPAUFunction@2@PAVCNode@2@0@Z");
//};

//private: void D3DXShader::Compiler::ImportASM(class D3DXShader::CNode *, struct ID3DXBuffer *)
//{
//    mangled_ppc("?ImportASM@Compiler@D3DXShader@@AAAXPAVCNode@2@PAUID3DXBuffer@@@Z");
//};

