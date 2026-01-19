/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned char const *const const D3DXShader::g_rgReorderBase; // "?g_rgReorderBase@D3DXShader@@3QBEB"
// struct D3DXShader::InputSemantic *D3DXShader::g_rgVertexFetchSemantics; // "?g_rgVertexFetchSemantics@D3DXShader@@3PAUInputSemantic@1@A"
// struct D3DXShader::InputSemantic *D3DXShader::g_rgPixelShaderImports; // "?g_rgPixelShaderImports@D3DXShader@@3PAUInputSemantic@1@A"

// public: bool D3DXShader::Instruction::ComputesScalarResult(void);
// float D3DXShader::XenosSaturate(float);
// double D3DXShader::XenosAbs(double);
// float D3DXShader::XenosNeg(float);
// double D3DXShader::Xenos2ToX(double);
// double D3DXShader::XenosLog2(double);
// double D3DXShader::XenosSqrtIEEE(double);
// double D3DXShader::XenosRecipSqrtIEEE(double);
// double D3DXShader::XenosRecipIEEE(double);
// public: unsigned int D3DXShader::Compiler::GetNextInstructionNumber(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetInstruction(struct D3DXShader::Compiler::InstructionPlacementPoint);
// public: void D3DXShader::Compiler::OnCreateCallInstruction(void);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeTernaryOperatorPrecision(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::ComponentTypeEnumerator::Skip(unsigned int);
// private: bool D3DXShader::Compiler::GetLinkageFromInputSemantic(struct D3DXShader::InputSemantic *, unsigned int, char const *, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *);
// private: void D3DXShader::Compiler::GetSemanticName(char *, unsigned long, class D3DXShader::CNode *, unsigned int);
// private: void D3DXShader::Compiler::GetVariableRegisterComponentRange(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
// private: void D3DXShader::Compiler::CacheVariableRegisterInstr(struct D3DXShader::Variable *, unsigned int, unsigned int, unsigned int, class D3DXShader::Instruction *);
// public: D3DXShader::Instruction::Instruction(enum D3DXShader::Opcode);
// float D3DXShader::ApplyModifiers(float, unsigned int);
// double D3DXShader::ApplyModifiers(double, enum D3DXShader::ConstantValueType, unsigned int);
// bool D3DXShader::ComputeBoundsFromConstraintFlags(unsigned int, double *, double *);
// void D3DXShader::ApplyModifiersToConstraintBounds(double *, double *, unsigned int);
// double D3DXShader::ConstraintMul(double, double);
// public: bool D3DXShader::Instruction::CanNormalizeSwizzle(unsigned int, unsigned int);
// public: void D3DXShader::Instruction::NormalizeSwizzle(unsigned int, unsigned int);
// enum D3DXShader::Component D3DXShader::DecodeSwizzleComponent(unsigned int, unsigned int);
// unsigned int D3DXShader::EncodeSwizzleComponent(enum D3DXShader::Component, unsigned int);
// unsigned int D3DXShader::DecodeSwizzle(unsigned int);
// unsigned int D3DXShader::EncodeSwizzle(enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component);
// public: enum D3DXShader::ErrorCode D3DXShader::Compiler::ValidateTextureInstructionOptions(class D3DXShader::Instruction *, union GPUTEXTURE_FETCH_INSTRUCTION *, bool);
// public: D3DXShader::Dependency::Dependency(class D3DXShader::Instruction *);
// public: void D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction>::Init(void);
// public: unsigned int D3DXShader::Instruction::CountNonVectorDependencies(void);
// public: unsigned int D3DXShader::Instruction::CountNonVectorDependents(void);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependencyWithModifiers(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int);
// public: int D3DXShader::Compiler::ComputeReverseRegisterEffect(class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::ChangeDependency(class D3DXShader::Dependency *, class D3DXShader::Instruction *, unsigned int, unsigned int);
// public: float D3DXShader::Instruction::GetModifiedFloatConstantValue(unsigned int, unsigned int);
// public: double D3DXShader::Instruction::GetModifiedConstantValue(unsigned int, unsigned int);
// public: void D3DXShader::Instruction::GetResultBounds(unsigned int, double *, double *);
// public: bool D3DXShader::Instruction::SetResultBounds(unsigned int, double, double, class D3DXShader::Compiler *);
// public: void D3DXShader::Dependency::GetResultBounds(unsigned int, double *, double *);
// public: void D3DXShader::Instruction::InitVFETCHInfo(class D3DXShader::Compiler *);
// public: void D3DXShader::Instruction::InitTFETCHInfo(class D3DXShader::Compiler *);
// public: void D3DXShader::Instruction::FlipCondition_InPlace(class D3DXShader::Compiler *);
// public: unsigned int D3DXShader::Instruction::EncodeOperand(unsigned int, union GPUALU_INSTRUCTION *, unsigned int, struct D3DXShader::VectorOperandEncoding *);
// public: void D3DXShader::Instruction::EncodeVFETCH(union GPUVERTEX_FETCH_INSTRUCTION *, class D3DXShader::Compiler *);
// public: void D3DXShader::Instruction::EncodeTexture(union GPUTEXTURE_FETCH_INSTRUCTION *, class D3DXShader::Compiler *);
// public: void D3DXShader::Dependency::FindScalarOperandSourceWorker(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int);
// public: bool D3DXShader::Dependency::IsEquivalentConstantDependency(class D3DXShader::Dependency *);
// public: void D3DXShader::Instruction::RemoveAllDependencies(class D3DXShader::Compiler *);
// public: void D3DXShader::Compiler::SetInstructionSequence(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::CheckInstructionSequence(class D3DXShader::Block *);
// public: void D3DXShader::Instruction::SetRegister(unsigned int, unsigned int);
// public: void D3DXShader::Instruction::Init(class D3DXShader::Compiler *, class D3DXShader::Block *, enum D3DXShader::Opcode, unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::EncodeControl(union GPUFLOW_INSTRUCTION *, class D3DXShader::Compiler *);
// public: bool D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::IsBitSetInField(unsigned int, unsigned int);
// public: void D3DXShader::Block::AddToPrologue(class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::PlaceInstruction(class D3DXShader::Instruction *, struct D3DXShader::Compiler::InstructionPlacementPoint);
// public: void D3DXShader::Instruction::InitVARIABLE(class D3DXShader::Compiler *, enum D3DXShader::Opcode, class D3DXShader::Block *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, enum D3DXShader::VariableComponentType);
// public: void D3DXShader::Compiler::DisconnectOrderingDependencies(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, enum D3DXShader::Opcode, unsigned int, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_PHI(class D3DXShader::Block *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_MERGE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::Clone(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::CloneFetchWithDifferentSampler(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// private: void D3DXShader::Compiler::SemanticError(enum D3DXShader::ErrorCode, class D3DXShader::CNode *, unsigned int);
// private: bool D3DXShader::Compiler::ChangeInterpolationMode(struct D3DXShader::LinkageSemantics *, unsigned int, bool, class D3DXShader::CNode *, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::CreateVertexShaderInputInstr(struct D3DXShader::LinkageSemantics, unsigned int);
// public: bool D3DXShader::Compiler::DetectOrReportDuplicateSemantic(struct D3DXShader::LinkageSemantics, class D3DXShader::ComponentTypeEnumerator *, struct D3DXShader::Variable *, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::CreateVariableInstrWorker(unsigned int, unsigned int, bool, enum D3DXShader::Opcode, class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint);
// public: struct D3DXShader::Variable * D3DXShader::Compiler::CloneUserVariable(struct D3DXShader::Variable *, enum _D3DXREGISTER_SET);
// public: struct D3DXShader::Variable * D3DXShader::Compiler::CreateInternalVariable(enum D3DXShader::VariableKind, unsigned int, char const *);
// public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreatePHI(class D3DXShader::Block *, unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::HasIdenticalDependencies(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::HasIdenticalNonVectorDependencies(class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::HasIdenticalNonVectorDependents(class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::IsLocatedAfter(class D3DXShader::Instruction *);
// public: bool D3DXShader::Compiler::SimplifyVectorDependent(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, unsigned int, unsigned int);
// public: class D3DXShader::Instruction ** D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::PeekLast(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_CLAMPED(class D3DXShader::Block *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETE(class D3DXShader::Block *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(class D3DXShader::Block *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGT(class D3DXShader::Block *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGE(class D3DXShader::Block *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_TFETCH(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Result);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Result);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeQuaternaryOperatorPrecision(class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependencyWithModifiers(class D3DXShader::Dependency *, unsigned int);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::ConvertToExport(class D3DXShader::Dependency *, unsigned int, class D3DXShader::Instruction *, bool);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_CONSTANT(unsigned int, float *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::FindExistingCopy(class D3DXShader::Dependency *, unsigned int *);
// private: bool D3DXShader::Compiler::ParseInputSemantic(char const *, unsigned int, struct D3DXShader::InputSemantic *, unsigned long, bool, class D3DXShader::CNode *, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *, bool *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateUniformVariableInstrWorker(unsigned int, unsigned int, bool);
// public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateConstant(unsigned int, float, float, float, float);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, float *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, struct D3DXShader::CONSTVALDATA *const);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, double *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>);
// public: bool D3DXShader::Instruction::IsLocatedAfter_PossiblySequenced(class D3DXShader::Instruction *, bool);
// public: struct D3DXShader::CONSTVALDATA D3DXShader::Instruction::GetModifiedConstantData(unsigned int, unsigned int);
// public: unsigned int D3DXShader::Instruction::ComputeConstantOutputs(double *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> *);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FlipCondition(class D3DXShader::Compiler *);
// public: void D3DXShader::Instruction::EncodeALU(union GPUALU_INSTRUCTION *, bool);
// public: class D3DXShader::Instruction ** D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Peek(void);
// public: bool D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::IsAtBottom(void);
// public: bool D3DXShader::Compiler::WillBePlacedAfter(class D3DXShader::Instruction *, struct D3DXShader::Compiler::InstructionPlacementPoint);
// public: void D3DXShader::Compiler::InsertNewCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Dependency *);
// public: bool D3DXShader::Compiler::InsertCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Dependency *);
// private: void D3DXShader::Compiler::ParseInputSemantic(class D3DXShader::CNodeVariable *, class D3DXShader::CNode *, unsigned int, struct D3DXShader::InputSemantic *, unsigned long, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *, bool *);
// private: void D3DXShader::Compiler::ParseVertexShaderInputSemantic(class D3DXShader::CNodeVariable *, class D3DXShader::CNode *, unsigned int, struct D3DXShader::LinkageSemantics *);
// private: void D3DXShader::Compiler::ParsePixelShaderInputSemantic(class D3DXShader::CNodeVariable *, class D3DXShader::CNode *, unsigned int, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::CreatePixelShaderInputInstr(struct D3DXShader::LinkageSemantics, unsigned int, enum D3DXShader::PARAMGEN, bool, bool);
// public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateInputVariable(unsigned int, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateInputInstr(unsigned int, unsigned int, char const *, unsigned int, bool);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateDiagnosticBaseIndexVariableInstr(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateIntegerConstantInstr(unsigned int, bool);
// public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateIntegerConstant(unsigned int, bool);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, float, float, float, float);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(double, enum D3DXShader::ConstantValueType);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::InsertNewCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::InsertNewCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Instruction *, enum D3DXShader::Component);
// public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateUniformVariable(unsigned int, unsigned int);
// public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateVariable(unsigned int, unsigned int);
// public: void D3DXShader::Compiler::RemoveDeadInstruction(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool);
// public: void D3DXShader::Compiler::RemoveDeadCodeTree(class D3DXShader::Instruction *);
// public: bool D3DXShader::Compiler::RemovePredicate(class D3DXShader::Instruction *, class D3DXShader::Dependency *, bool);
// private: bool D3DXShader::Instruction::DependsOnWorker(class D3DXShader::Instruction *, class D3DXShader::Block *, bool, class D3DXShader::Compiler *);
// public: bool D3DXShader::Compiler::CanReorderAdjacentWorker(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool);
// public: void D3DXShader::Compiler::ReorderAdjacentWorker(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool);
// public: bool D3DXShader::Compiler::CanReorderBefore(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool);
// public: void D3DXShader::Compiler::MarkThroughControllingBranches(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: enum D3DXShader::Component D3DXShader::Compiler::FindConstantOutput(class D3DXShader::Instruction *, float, unsigned int, bool);
// private: void D3DXShader::Compiler::RevokeConstantOutput(class D3DXShader::Instruction *, enum D3DXShader::Component);
// public: bool D3DXShader::Compiler::SimplifyDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *);
// public: bool D3DXShader::Compiler::FindPHIDef_Isolated(class D3DXShader::Instruction *, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: bool D3DXShader::Compiler::CanReorderAdjacent(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool);
// public: void D3DXShader::Compiler::ReorderAdjacent(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool);
// public: void D3DXShader::Compiler::ReorderBefore(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool);
// public: bool D3DXShader::Instruction::DependsOnLocal_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: void D3DXShader::Compiler::MarkThroughDependencies(class D3DXShader::Dependency *, bool);
// public: void D3DXShader::Compiler::MarkThroughDependents(class D3DXShader::Dependency *);
// public: void D3DXShader::Compiler::MarkThroughBranchInstruction(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// public: struct D3DXShader::FoldResult D3DXShader::Compiler::Fold(class D3DXShader::Instruction *, unsigned int, double *const, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>);
// public: void D3DXShader::Dependency::FindDef_Isolated(class D3DXShader::Instruction **, unsigned int *, unsigned int *, class D3DXShader::Instruction *);
// public: struct D3DXShader::FoldResult D3DXShader::Instruction::Fold(class D3DXShader::Compiler *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// public: void D3DXShader::Compiler::ResolveDependencyDef(class D3DXShader::Dependency *, class D3DXShader::Instruction **, unsigned int *, unsigned int *);

//public: bool D3DXShader::Instruction::ComputesScalarResult(void)
//{
//    mangled_ppc("?ComputesScalarResult@Instruction@D3DXShader@@QAA_NXZ");
//};

//float D3DXShader::XenosSaturate(float)
//{
//    mangled_ppc("?XenosSaturate@D3DXShader@@YAMM@Z");
//};

//double D3DXShader::XenosAbs(double)
//{
//    mangled_ppc("?XenosAbs@D3DXShader@@YANN@Z");
//};

//float D3DXShader::XenosNeg(float)
//{
//    mangled_ppc("?XenosNeg@D3DXShader@@YAMM@Z");
//};

//double D3DXShader::Xenos2ToX(double)
//{
//    mangled_ppc("?Xenos2ToX@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosLog2(double)
//{
//    mangled_ppc("?XenosLog2@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosSqrtIEEE(double)
//{
//    mangled_ppc("?XenosSqrtIEEE@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosRecipSqrtIEEE(double)
//{
//    mangled_ppc("?XenosRecipSqrtIEEE@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosRecipIEEE(double)
//{
//    mangled_ppc("?XenosRecipIEEE@D3DXShader@@YANN@Z");
//};

//public: unsigned int D3DXShader::Compiler::GetNextInstructionNumber(void)
//{
//    mangled_ppc("?GetNextInstructionNumber@Compiler@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetInstruction(struct D3DXShader::Compiler::InstructionPlacementPoint)
//{
//    mangled_ppc("?GetInstruction@Compiler@D3DXShader@@QAAPAVInstruction@2@UInstructionPlacementPoint@12@@Z");
//};

//public: void D3DXShader::Compiler::OnCreateCallInstruction(void)
//{
//    mangled_ppc("?OnCreateCallInstruction@Compiler@D3DXShader@@QAAXXZ");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int)
//{
//    mangled_ppc("?ComputeBinaryOperatorPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@PAVInstruction@2@W4Component@2@I@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeTernaryOperatorPrecision(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?ComputeTernaryOperatorPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@III@Z");
//};

//public: void D3DXShader::ComponentTypeEnumerator::Skip(unsigned int)
//{
//    mangled_ppc("?Skip@ComponentTypeEnumerator@D3DXShader@@QAAXI@Z");
//};

//private: bool D3DXShader::Compiler::GetLinkageFromInputSemantic(struct D3DXShader::InputSemantic *, unsigned int, char const *, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *)
//{
//    mangled_ppc("?GetLinkageFromInputSemantic@Compiler@D3DXShader@@AAA_NPAUInputSemantic@2@IPBDPAULinkageSemantics@2@PAW4PARAMGEN@2@@Z");
//};

//private: void D3DXShader::Compiler::GetSemanticName(char *, unsigned long, class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("?GetSemanticName@Compiler@D3DXShader@@AAAXPADKPAVCNode@2@I@Z");
//};

//private: void D3DXShader::Compiler::GetVariableRegisterComponentRange(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetVariableRegisterComponentRange@Compiler@D3DXShader@@AAAXIIPAI0000@Z");
//};

//private: void D3DXShader::Compiler::CacheVariableRegisterInstr(struct D3DXShader::Variable *, unsigned int, unsigned int, unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CacheVariableRegisterInstr@Compiler@D3DXShader@@AAAXPAUVariable@2@IIIPAVInstruction@2@@Z");
//};

//public: D3DXShader::Instruction::Instruction(enum D3DXShader::Opcode)
//{
//    mangled_ppc("??0Instruction@D3DXShader@@QAA@W4Opcode@1@@Z");
//};

//float D3DXShader::ApplyModifiers(float, unsigned int)
//{
//    mangled_ppc("?ApplyModifiers@D3DXShader@@YAMMI@Z");
//};

//double D3DXShader::ApplyModifiers(double, enum D3DXShader::ConstantValueType, unsigned int)
//{
//    mangled_ppc("?ApplyModifiers@D3DXShader@@YANNW4ConstantValueType@1@I@Z");
//};

//bool D3DXShader::ComputeBoundsFromConstraintFlags(unsigned int, double *, double *)
//{
//    mangled_ppc("?ComputeBoundsFromConstraintFlags@D3DXShader@@YA_NIPAN0@Z");
//};

//void D3DXShader::ApplyModifiersToConstraintBounds(double *, double *, unsigned int)
//{
//    mangled_ppc("?ApplyModifiersToConstraintBounds@D3DXShader@@YAXPAN0I@Z");
//};

//double D3DXShader::ConstraintMul(double, double)
//{
//    mangled_ppc("?ConstraintMul@D3DXShader@@YANNN@Z");
//};

//public: bool D3DXShader::Instruction::CanNormalizeSwizzle(unsigned int, unsigned int)
//{
//    mangled_ppc("?CanNormalizeSwizzle@Instruction@D3DXShader@@QAA_NII@Z");
//};

//public: void D3DXShader::Instruction::NormalizeSwizzle(unsigned int, unsigned int)
//{
//    mangled_ppc("?NormalizeSwizzle@Instruction@D3DXShader@@QAAXII@Z");
//};

//enum D3DXShader::Component D3DXShader::DecodeSwizzleComponent(unsigned int, unsigned int)
//{
//    mangled_ppc("?DecodeSwizzleComponent@D3DXShader@@YA?AW4Component@1@II@Z");
//};

//unsigned int D3DXShader::EncodeSwizzleComponent(enum D3DXShader::Component, unsigned int)
//{
//    mangled_ppc("?EncodeSwizzleComponent@D3DXShader@@YAIW4Component@1@I@Z");
//};

//unsigned int D3DXShader::DecodeSwizzle(unsigned int)
//{
//    mangled_ppc("?DecodeSwizzle@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::EncodeSwizzle(enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component, enum D3DXShader::Component)
//{
//    mangled_ppc("?EncodeSwizzle@D3DXShader@@YAIW4Component@1@000@Z");
//};

//public: enum D3DXShader::ErrorCode D3DXShader::Compiler::ValidateTextureInstructionOptions(class D3DXShader::Instruction *, union GPUTEXTURE_FETCH_INSTRUCTION *, bool)
//{
//    mangled_ppc("?ValidateTextureInstructionOptions@Compiler@D3DXShader@@QAA?AW4ErrorCode@2@PAVInstruction@2@PATGPUTEXTURE_FETCH_INSTRUCTION@@_N@Z");
//};

//public: D3DXShader::Dependency::Dependency(class D3DXShader::Instruction *)
//{
//    mangled_ppc("??0Dependency@D3DXShader@@QAA@PAVInstruction@1@@Z");
//};

//public: void D3DXShader::DoubleLinkListEntry<class D3DXShader::Instruction>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@VInstruction@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Instruction::CountNonVectorDependencies(void)
//{
//    mangled_ppc("?CountNonVectorDependencies@Instruction@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Instruction::CountNonVectorDependents(void)
//{
//    mangled_ppc("?CountNonVectorDependents@Instruction@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependencyWithModifiers(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?GetDependencyWithModifiers@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@III@Z");
//};

//public: int D3DXShader::Compiler::ComputeReverseRegisterEffect(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ComputeReverseRegisterEffect@Compiler@D3DXShader@@QAAHPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Instruction::ChangeDependency(class D3DXShader::Dependency *, class D3DXShader::Instruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?ChangeDependency@Instruction@D3DXShader@@QAA_NPAVDependency@2@PAV12@II@Z");
//};

//public: float D3DXShader::Instruction::GetModifiedFloatConstantValue(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetModifiedFloatConstantValue@Instruction@D3DXShader@@QAAMII@Z");
//};

//public: double D3DXShader::Instruction::GetModifiedConstantValue(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetModifiedConstantValue@Instruction@D3DXShader@@QAANII@Z");
//};

//public: void D3DXShader::Instruction::GetResultBounds(unsigned int, double *, double *)
//{
//    mangled_ppc("?GetResultBounds@Instruction@D3DXShader@@QAAXIPAN0@Z");
//};

//public: bool D3DXShader::Instruction::SetResultBounds(unsigned int, double, double, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?SetResultBounds@Instruction@D3DXShader@@QAA_NINNPAVCompiler@2@@Z");
//};

//public: void D3DXShader::Dependency::GetResultBounds(unsigned int, double *, double *)
//{
//    mangled_ppc("?GetResultBounds@Dependency@D3DXShader@@QAAXIPAN0@Z");
//};

//public: void D3DXShader::Instruction::InitVFETCHInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?InitVFETCHInfo@Instruction@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: void D3DXShader::Instruction::InitTFETCHInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?InitTFETCHInfo@Instruction@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: void D3DXShader::Instruction::FlipCondition_InPlace(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?FlipCondition_InPlace@Instruction@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: unsigned int D3DXShader::Instruction::EncodeOperand(unsigned int, union GPUALU_INSTRUCTION *, unsigned int, struct D3DXShader::VectorOperandEncoding *)
//{
//    mangled_ppc("?EncodeOperand@Instruction@D3DXShader@@QAAIIPATGPUALU_INSTRUCTION@@IPAUVectorOperandEncoding@2@@Z");
//};

//public: void D3DXShader::Instruction::EncodeVFETCH(union GPUVERTEX_FETCH_INSTRUCTION *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?EncodeVFETCH@Instruction@D3DXShader@@QAAXPATGPUVERTEX_FETCH_INSTRUCTION@@PAVCompiler@2@@Z");
//};

//public: void D3DXShader::Instruction::EncodeTexture(union GPUTEXTURE_FETCH_INSTRUCTION *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?EncodeTexture@Instruction@D3DXShader@@QAAXPATGPUTEXTURE_FETCH_INSTRUCTION@@PAVCompiler@2@@Z");
//};

//public: void D3DXShader::Dependency::FindScalarOperandSourceWorker(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?FindScalarOperandSourceWorker@Dependency@D3DXShader@@QAAXW4Component@2@PAPAVInstruction@2@PAW432@PAIPAVBlock@2@PAV42@I@Z");
//};

//public: bool D3DXShader::Dependency::IsEquivalentConstantDependency(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?IsEquivalentConstantDependency@Dependency@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: void D3DXShader::Instruction::RemoveAllDependencies(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?RemoveAllDependencies@Instruction@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: void D3DXShader::Compiler::SetInstructionSequence(class D3DXShader::Block *)
//{
//    mangled_ppc("?SetInstructionSequence@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::CheckInstructionSequence(class D3DXShader::Block *)
//{
//    mangled_ppc("?CheckInstructionSequence@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Instruction::SetRegister(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetRegister@Instruction@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::Instruction::Init(class D3DXShader::Compiler *, class D3DXShader::Block *, enum D3DXShader::Opcode, unsigned int, unsigned int)
//{
//    mangled_ppc("?Init@Instruction@D3DXShader@@QAAXPAVCompiler@2@PAVBlock@2@W4Opcode@2@II@Z");
//};

//public: bool D3DXShader::Instruction::EncodeControl(union GPUFLOW_INSTRUCTION *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?EncodeControl@Instruction@D3DXShader@@QAA_NPATGPUFLOW_INSTRUCTION@@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::IsBitSetInField(unsigned int, unsigned int)
//{
//    mangled_ppc("?IsBitSetInField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAA_NII@Z");
//};

//public: void D3DXShader::Block::AddToPrologue(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddToPrologue@Block@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Compiler::PlaceInstruction(class D3DXShader::Instruction *, struct D3DXShader::Compiler::InstructionPlacementPoint)
//{
//    mangled_ppc("?PlaceInstruction@Compiler@D3DXShader@@QAAXPAVInstruction@2@UInstructionPlacementPoint@12@@Z");
//};

//public: void D3DXShader::Instruction::InitVARIABLE(class D3DXShader::Compiler *, enum D3DXShader::Opcode, class D3DXShader::Block *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, enum D3DXShader::VariableComponentType)
//{
//    mangled_ppc("?InitVARIABLE@Instruction@D3DXShader@@QAAXPAVCompiler@2@W4Opcode@2@PAVBlock@2@IIIIIW4VariableComponentType@2@@Z");
//};

//public: void D3DXShader::Compiler::DisconnectOrderingDependencies(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?DisconnectOrderingDependencies@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, enum D3DXShader::Opcode, unsigned int, unsigned int)
//{
//    mangled_ppc("?MakeInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@W4Opcode@2@II@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_PHI(class D3DXShader::Block *)
//{
//    mangled_ppc("?MakeInstr_PHI@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_MERGE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, unsigned int)
//{
//    mangled_ppc("?MakeInstr_MERGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@I@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::Clone(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Clone@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::CloneFetchWithDifferentSampler(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?CloneFetchWithDifferentSampler@Compiler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVDependency@2@@Z");
//};

//private: void D3DXShader::Compiler::SemanticError(enum D3DXShader::ErrorCode, class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("?SemanticError@Compiler@D3DXShader@@AAAXW4ErrorCode@2@PAVCNode@2@I@Z");
//};

//private: bool D3DXShader::Compiler::ChangeInterpolationMode(struct D3DXShader::LinkageSemantics *, unsigned int, bool, class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("?ChangeInterpolationMode@Compiler@D3DXShader@@AAA_NPAULinkageSemantics@2@I_NPAVCNode@2@I@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::CreateVertexShaderInputInstr(struct D3DXShader::LinkageSemantics, unsigned int)
//{
//    mangled_ppc("?CreateVertexShaderInputInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@ULinkageSemantics@2@I@Z");
//};

//public: bool D3DXShader::Compiler::DetectOrReportDuplicateSemantic(struct D3DXShader::LinkageSemantics, class D3DXShader::ComponentTypeEnumerator *, struct D3DXShader::Variable *, unsigned int)
//{
//    mangled_ppc("?DetectOrReportDuplicateSemantic@Compiler@D3DXShader@@QAA_NULinkageSemantics@2@PAVComponentTypeEnumerator@2@PAUVariable@2@I@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::CreateVariableInstrWorker(unsigned int, unsigned int, bool, enum D3DXShader::Opcode, class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint)
//{
//    mangled_ppc("?CreateVariableInstrWorker@Compiler@D3DXShader@@QAAPAVInstruction@2@II_NW4Opcode@2@PAVBlock@2@UInstructionPlacementPoint@12@@Z");
//};

//public: struct D3DXShader::Variable * D3DXShader::Compiler::CloneUserVariable(struct D3DXShader::Variable *, enum _D3DXREGISTER_SET)
//{
//    mangled_ppc("?CloneUserVariable@Compiler@D3DXShader@@QAAPAUVariable@2@PAU32@W4_D3DXREGISTER_SET@@@Z");
//};

//public: struct D3DXShader::Variable * D3DXShader::Compiler::CreateInternalVariable(enum D3DXShader::VariableKind, unsigned int, char const *)
//{
//    mangled_ppc("?CreateInternalVariable@Compiler@D3DXShader@@QAAPAUVariable@2@W4VariableKind@2@IPBD@Z");
//};

//public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreatePHI(class D3DXShader::Block *, unsigned int, unsigned int)
//{
//    mangled_ppc("?GetOrCreatePHI@Compiler@D3DXShader@@QAA?AVResult@2@PAVBlock@2@II@Z");
//};

//public: bool D3DXShader::Instruction::HasIdenticalDependencies(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?HasIdenticalDependencies@Instruction@D3DXShader@@QAA_NPAV12@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Instruction::HasIdenticalNonVectorDependencies(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?HasIdenticalNonVectorDependencies@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Instruction::HasIdenticalNonVectorDependents(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?HasIdenticalNonVectorDependents@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Instruction::IsLocatedAfter(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsLocatedAfter@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Compiler::SimplifyVectorDependent(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SimplifyVectorDependent@Compiler@D3DXShader@@QAA_NPAVInstruction@2@PAVDependency@2@0II@Z");
//};

//public: class D3DXShader::Instruction ** D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_CLAMPED(class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_RECIP_CLAMPED@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETE(class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGT(class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGE(class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_TFETCH(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_TFETCH@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV32@VResult@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Result)
//{
//    mangled_ppc("?MakeInstr_V_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV32@VResult@2@@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeQuaternaryOperatorPrecision(class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>)
//{
//    mangled_ppc("?ComputeQuaternaryOperatorPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::GetDependencyWithModifiers(class D3DXShader::Dependency *, unsigned int)
//{
//    mangled_ppc("?GetDependencyWithModifiers@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@I@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::ConvertToExport(class D3DXShader::Dependency *, unsigned int, class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?ConvertToExport@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@IPAVInstruction@2@_N@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_CONSTANT(unsigned int, float *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>)
//{
//    mangled_ppc("?MakeInstr_CONSTANT@Compiler@D3DXShader@@QAAPAVInstruction@2@IQAMV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::FindExistingCopy(class D3DXShader::Dependency *, unsigned int *)
//{
//    mangled_ppc("?FindExistingCopy@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVDependency@2@PAI@Z");
//};

//private: bool D3DXShader::Compiler::ParseInputSemantic(char const *, unsigned int, struct D3DXShader::InputSemantic *, unsigned long, bool, class D3DXShader::CNode *, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *, bool *)
//{
//    mangled_ppc("?ParseInputSemantic@Compiler@D3DXShader@@AAA_NPBDIPAUInputSemantic@2@K_NPAVCNode@2@PAULinkageSemantics@2@PAW4PARAMGEN@2@PA_N@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateUniformVariableInstrWorker(unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?GetOrCreateUniformVariableInstrWorker@Compiler@D3DXShader@@QAAPAVInstruction@2@II_N@Z");
//};

//public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateConstant(unsigned int, float, float, float, float)
//{
//    mangled_ppc("?GetOrCreateConstant@Compiler@D3DXShader@@QAA?AVResult@2@IMMMM@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, float *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>)
//{
//    mangled_ppc("?GetOrCreateConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@IQAMV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, struct D3DXShader::CONSTVALDATA *const)
//{
//    mangled_ppc("?GetOrCreateConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@IQAUCONSTVALDATA@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, double *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>)
//{
//    mangled_ppc("?GetOrCreateConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@IQANV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//public: bool D3DXShader::Instruction::IsLocatedAfter_PossiblySequenced(class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?IsLocatedAfter_PossiblySequenced@Instruction@D3DXShader@@QAA_NPAV12@_N@Z");
//};

//public: struct D3DXShader::CONSTVALDATA D3DXShader::Instruction::GetModifiedConstantData(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetModifiedConstantData@Instruction@D3DXShader@@QAA?AUCONSTVALDATA@2@II@Z");
//};

//public: unsigned int D3DXShader::Instruction::ComputeConstantOutputs(double *const, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> *)
//{
//    mangled_ppc("?ComputeConstantOutputs@Instruction@D3DXShader@@QAAIQANPAV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FlipCondition(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?FlipCondition@Instruction@D3DXShader@@QAAPAV12@PAVCompiler@2@@Z");
//};

//public: void D3DXShader::Instruction::EncodeALU(union GPUALU_INSTRUCTION *, bool)
//{
//    mangled_ppc("?EncodeALU@Instruction@D3DXShader@@QAAXPATGPUALU_INSTRUCTION@@_N@Z");
//};

//public: class D3DXShader::Instruction ** D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@XZ");
//};

//public: bool D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::IsAtBottom(void)
//{
//    mangled_ppc("?IsAtBottom@?$StackEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::WillBePlacedAfter(class D3DXShader::Instruction *, struct D3DXShader::Compiler::InstructionPlacementPoint)
//{
//    mangled_ppc("?WillBePlacedAfter@Compiler@D3DXShader@@QAA_NPAVInstruction@2@UInstructionPlacementPoint@12@@Z");
//};

//public: void D3DXShader::Compiler::InsertNewCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?InsertNewCopy@Compiler@D3DXShader@@QAAXPAVBlock@2@UInstructionPlacementPoint@12@PAVDependency@2@@Z");
//};

//public: bool D3DXShader::Compiler::InsertCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?InsertCopy@Compiler@D3DXShader@@QAA_NPAVBlock@2@UInstructionPlacementPoint@12@PAVDependency@2@@Z");
//};

//private: void D3DXShader::Compiler::ParseInputSemantic(class D3DXShader::CNodeVariable *, class D3DXShader::CNode *, unsigned int, struct D3DXShader::InputSemantic *, unsigned long, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *, bool *)
//{
//    mangled_ppc("?ParseInputSemantic@Compiler@D3DXShader@@AAAXPAVCNodeVariable@2@PAVCNode@2@IPAUInputSemantic@2@KPAULinkageSemantics@2@PAW4PARAMGEN@2@PA_N@Z");
//};

//private: void D3DXShader::Compiler::ParseVertexShaderInputSemantic(class D3DXShader::CNodeVariable *, class D3DXShader::CNode *, unsigned int, struct D3DXShader::LinkageSemantics *)
//{
//    mangled_ppc("?ParseVertexShaderInputSemantic@Compiler@D3DXShader@@AAAXPAVCNodeVariable@2@PAVCNode@2@IPAULinkageSemantics@2@@Z");
//};

//private: void D3DXShader::Compiler::ParsePixelShaderInputSemantic(class D3DXShader::CNodeVariable *, class D3DXShader::CNode *, unsigned int, struct D3DXShader::LinkageSemantics *, enum D3DXShader::PARAMGEN *)
//{
//    mangled_ppc("?ParsePixelShaderInputSemantic@Compiler@D3DXShader@@AAAXPAVCNodeVariable@2@PAVCNode@2@IPAULinkageSemantics@2@PAW4PARAMGEN@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::CreatePixelShaderInputInstr(struct D3DXShader::LinkageSemantics, unsigned int, enum D3DXShader::PARAMGEN, bool, bool)
//{
//    mangled_ppc("?CreatePixelShaderInputInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@ULinkageSemantics@2@IW4PARAMGEN@2@_N2@Z");
//};

//public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateInputVariable(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetOrCreateInputVariable@Compiler@D3DXShader@@QAA?AVResult@2@II@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateInputInstr(unsigned int, unsigned int, char const *, unsigned int, bool)
//{
//    mangled_ppc("?GetOrCreateInputInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@IIPBDI_N@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateDiagnosticBaseIndexVariableInstr(void)
//{
//    mangled_ppc("?GetOrCreateDiagnosticBaseIndexVariableInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateIntegerConstantInstr(unsigned int, bool)
//{
//    mangled_ppc("?GetOrCreateIntegerConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@I_N@Z");
//};

//public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateIntegerConstant(unsigned int, bool)
//{
//    mangled_ppc("?GetOrCreateIntegerConstant@Compiler@D3DXShader@@QAA?AVResult@2@I_N@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, float, float, float, float)
//{
//    mangled_ppc("?GetOrCreateConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@IMMMM@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(double, enum D3DXShader::ConstantValueType)
//{
//    mangled_ppc("?GetOrCreateConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@NW4ConstantValueType@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::InsertNewCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertNewCopy@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@UInstructionPlacementPoint@12@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::InsertNewCopy(class D3DXShader::Block *, struct D3DXShader::Compiler::InstructionPlacementPoint, class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?InsertNewCopy@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@UInstructionPlacementPoint@12@PAV32@W4Component@2@@Z");
//};

//public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateUniformVariable(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetOrCreateUniformVariable@Compiler@D3DXShader@@QAA?AVResult@2@II@Z");
//};

//public: class D3DXShader::Result D3DXShader::Compiler::GetOrCreateVariable(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetOrCreateVariable@Compiler@D3DXShader@@QAA?AVResult@2@II@Z");
//};

//public: void D3DXShader::Compiler::RemoveDeadInstruction(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool)
//{
//    mangled_ppc("?RemoveDeadInstruction@Compiler@D3DXShader@@QAAXPAVInstruction@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@_N@Z");
//};

//public: void D3DXShader::Compiler::RemoveDeadCodeTree(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?RemoveDeadCodeTree@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Compiler::RemovePredicate(class D3DXShader::Instruction *, class D3DXShader::Dependency *, bool)
//{
//    mangled_ppc("?RemovePredicate@Compiler@D3DXShader@@QAA_NPAVInstruction@2@PAVDependency@2@_N@Z");
//};

//private: bool D3DXShader::Instruction::DependsOnWorker(class D3DXShader::Instruction *, class D3DXShader::Block *, bool, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?DependsOnWorker@Instruction@D3DXShader@@AAA_NPAV12@PAVBlock@2@_NPAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Compiler::CanReorderAdjacentWorker(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool)
//{
//    mangled_ppc("?CanReorderAdjacentWorker@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0_N1@Z");
//};

//public: void D3DXShader::Compiler::ReorderAdjacentWorker(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool)
//{
//    mangled_ppc("?ReorderAdjacentWorker@Compiler@D3DXShader@@QAAXPAVInstruction@2@0_N1@Z");
//};

//public: bool D3DXShader::Compiler::CanReorderBefore(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?CanReorderBefore@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0_N@Z");
//};

//public: void D3DXShader::Compiler::MarkThroughControllingBranches(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkThroughControllingBranches@Compiler@D3DXShader@@QAAXPAVInstruction@2@PAVBlock@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: enum D3DXShader::Component D3DXShader::Compiler::FindConstantOutput(class D3DXShader::Instruction *, float, unsigned int, bool)
//{
//    mangled_ppc("?FindConstantOutput@Compiler@D3DXShader@@AAA?AW4Component@2@PAVInstruction@2@MI_N@Z");
//};

//private: void D3DXShader::Compiler::RevokeConstantOutput(class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?RevokeConstantOutput@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@@Z");
//};

//public: bool D3DXShader::Compiler::SimplifyDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *)
//{
//    mangled_ppc("?SimplifyDependents@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0IIPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PA_N@Z");
//};

//public: bool D3DXShader::Compiler::FindPHIDef_Isolated(class D3DXShader::Instruction *, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FindPHIDef_Isolated@Compiler@D3DXShader@@QAA_NPAVInstruction@2@PAPAV32@PAW4Component@2@PAI00@Z");
//};

//public: bool D3DXShader::Compiler::CanReorderAdjacent(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool)
//{
//    mangled_ppc("?CanReorderAdjacent@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0_N1@Z");
//};

//public: void D3DXShader::Compiler::ReorderAdjacent(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, bool)
//{
//    mangled_ppc("?ReorderAdjacent@Compiler@D3DXShader@@QAAXPAVInstruction@2@0_N1@Z");
//};

//public: void D3DXShader::Compiler::ReorderBefore(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?ReorderBefore@Compiler@D3DXShader@@QAAXPAVInstruction@2@0_N@Z");
//};

//public: bool D3DXShader::Instruction::DependsOnLocal_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?DependsOnLocal_Sequenced@Instruction@D3DXShader@@QAA_NPAV12@PAVCompiler@2@@Z");
//};

//public: void D3DXShader::Compiler::MarkThroughDependencies(class D3DXShader::Dependency *, bool)
//{
//    mangled_ppc("?MarkThroughDependencies@Compiler@D3DXShader@@QAAXPAVDependency@2@_N@Z");
//};

//public: void D3DXShader::Compiler::MarkThroughDependents(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MarkThroughDependents@Compiler@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//public: void D3DXShader::Compiler::MarkThroughBranchInstruction(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkThroughBranchInstruction@Compiler@D3DXShader@@QAAXPAVInstruction@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: struct D3DXShader::FoldResult D3DXShader::Compiler::Fold(class D3DXShader::Instruction *, unsigned int, double *const, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>)
//{
//    mangled_ppc("?Fold@Compiler@D3DXShader@@QAA?AUFoldResult@2@PAVInstruction@2@IQANPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//public: void D3DXShader::Dependency::FindDef_Isolated(class D3DXShader::Instruction **, unsigned int *, unsigned int *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FindDef_Isolated@Dependency@D3DXShader@@QAAXPAPAVInstruction@2@PAI1PAV32@@Z");
//};

//public: struct D3DXShader::FoldResult D3DXShader::Instruction::Fold(class D3DXShader::Compiler *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?Fold@Instruction@D3DXShader@@QAA?AUFoldResult@2@PAVCompiler@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::Compiler::ResolveDependencyDef(class D3DXShader::Dependency *, class D3DXShader::Instruction **, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?ResolveDependencyDef@Compiler@D3DXShader@@QAAXPAVDependency@2@PAPAVInstruction@2@PAI2@Z");
//};

