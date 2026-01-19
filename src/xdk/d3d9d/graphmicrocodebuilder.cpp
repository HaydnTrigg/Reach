/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned long const D3D::BitVector<96>::SIZE; // "?SIZE@?$BitVector@$0GA@@D3D@@2KB"
// private: static unsigned long const D3D::BitVector<96>::DWORD_BITSIZE; // "?DWORD_BITSIZE@?$BitVector@$0GA@@D3D@@0KB"
// private: static unsigned long const D3D::BitVector<96>::ARRAY_SIZE; // "?ARRAY_SIZE@?$BitVector@$0GA@@D3D@@0KB"

// public: bool D3D::FlowNode::HasCFAddress(void);
// public: D3D::CArena::CArena(void);
// public: D3D::CArena::~CArena(void);
// public: void * D3D::CArena::Alloc(unsigned long);
// public: struct D3D::ALUNode * D3D::FlowNode::GetLastChild(void);
// public: void D3D::FlowNode::Validate(void);
// public: D3D::GraphMicrocodeBuilder::GraphMicrocodeBuilder(void);
// public: D3D::GraphMicrocodeBuilder::~GraphMicrocodeBuilder(void);
// public: struct D3D::ALUNode * D3D::GraphMicrocodeBuilder::NewALUNode(void);
// public: struct D3D::FlowNode * D3D::GraphMicrocodeBuilder::NewFlowNode(void);
// void D3D::GetShaderSize_Imp(struct D3D::FlowNode *, unsigned long &, unsigned long &);
// public: unsigned long D3D::GraphMicrocodeBuilder::GetShaderSize(void);
// public: long D3D::GraphMicrocodeBuilder::AddFlowAfter(struct D3D::FlowNode *, union GPUFLOW_INSTRUCTION const &, struct D3D::FlowNode **);
// public: static unsigned long D3D::GraphMicrocodeBuilder::RemoveEndFromOp(unsigned long);
// public: static unsigned long D3D::GraphMicrocodeBuilder::ComputeSwizzle(unsigned long, unsigned long, unsigned long, unsigned long);
// public: static unsigned long D3D::GraphMicrocodeBuilder::ComputeSwizzle2(unsigned long, unsigned long);
// public: long D3D::GraphMicrocodeBuilder::CreateExecAfter(struct D3D::FlowNode *, struct D3D::FlowNode **);
// public: long D3D::GraphMicrocodeBuilder::RemoveChild(struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::ALUNode **);
// void D3D::SetNop(union GPUSHADER_INSTRUCTION *);
// void D3D::SetVector2(union GPUSHADER_INSTRUCTION *, enum GPUALUVECTOROP, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long);
// void D3D::SetVector3(union GPUSHADER_INSTRUCTION *, enum GPUALUVECTOROP, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long);
// void D3D::SetScalar(union GPUSHADER_INSTRUCTION *, enum GPUALUSCALAROP, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long);
// public: D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>(void);
// public: D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::~D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>(void);
// public: struct D3D::FlowNode ** D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::begin(void) const;
// public: unsigned long D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::size(void) const;
// public: void D3D::BitVector<96>::Clear(void);
// public: void D3D::BitVector<96>::Set(unsigned long);
// public: void D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::ensure2(unsigned long, long &);
// GPU_PUT_FLOW_INSTRUCTIONS;
// public: D3D::GMB_CSG_Context::GMB_CSG_Context(void);
// public: D3D::GMB_CSG_Context::~GMB_CSG_Context(void);
// public: long D3D::GraphMicrocodeBuilder::ConvertGraphToShader(void *, unsigned long);
// public: long D3D::GraphMicrocodeBuilder::SplitExecBlock(struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::FlowNode **);
// long D3D::GetUsedVertexFetchConstants(struct D3D::FlowNode *, class D3D::BitVector<96> *);
// void D3D::SetMov(union GPUSHADER_INSTRUCTION *, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long);
// public: void D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::ensure(unsigned long, long &);
// public: long D3D::GraphMicrocodeBuilder::AddFlowAfterSplit(struct D3D::FlowNode *, struct D3D::ALUNode *, union GPUFLOW_INSTRUCTION const &, struct D3D::FlowNode **);
// public: long D3D::GraphMicrocodeBuilder::AddALUAfter(struct D3D::FlowNode *, struct D3D::ALUNode *, bool, bool, union GPUSHADER_INSTRUCTION const &, struct D3D::FlowNode **, struct D3D::ALUNode **);
// public: void D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::resize(unsigned long, long &);
// long D3D::GMB_CSG_Callback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// public: long D3D::GraphMicrocodeBuilder::ConvertShaderToGraph(void const *, unsigned long);

//public: bool D3D::FlowNode::HasCFAddress(void)
//{
//    mangled_ppc("?HasCFAddress@FlowNode@D3D@@QAA_NXZ");
//};

//public: D3D::CArena::CArena(void)
//{
//    mangled_ppc("??0CArena@D3D@@QAA@XZ");
//};

//public: D3D::CArena::~CArena(void)
//{
//    mangled_ppc("??1CArena@D3D@@QAA@XZ");
//};

//public: void * D3D::CArena::Alloc(unsigned long)
//{
//    mangled_ppc("?Alloc@CArena@D3D@@QAAPAXK@Z");
//};

//public: struct D3D::ALUNode * D3D::FlowNode::GetLastChild(void)
//{
//    mangled_ppc("?GetLastChild@FlowNode@D3D@@QAAPAUALUNode@2@XZ");
//};

//public: void D3D::FlowNode::Validate(void)
//{
//    mangled_ppc("?Validate@FlowNode@D3D@@QAAXXZ");
//};

//public: D3D::GraphMicrocodeBuilder::GraphMicrocodeBuilder(void)
//{
//    mangled_ppc("??0GraphMicrocodeBuilder@D3D@@QAA@XZ");
//};

//public: D3D::GraphMicrocodeBuilder::~GraphMicrocodeBuilder(void)
//{
//    mangled_ppc("??1GraphMicrocodeBuilder@D3D@@QAA@XZ");
//};

//public: struct D3D::ALUNode * D3D::GraphMicrocodeBuilder::NewALUNode(void)
//{
//    mangled_ppc("?NewALUNode@GraphMicrocodeBuilder@D3D@@QAAPAUALUNode@2@XZ");
//};

//public: struct D3D::FlowNode * D3D::GraphMicrocodeBuilder::NewFlowNode(void)
//{
//    mangled_ppc("?NewFlowNode@GraphMicrocodeBuilder@D3D@@QAAPAUFlowNode@2@XZ");
//};

//void D3D::GetShaderSize_Imp(struct D3D::FlowNode *, unsigned long &, unsigned long &)
//{
//    mangled_ppc("?GetShaderSize_Imp@D3D@@YAXPAUFlowNode@1@AAK1@Z");
//};

//public: unsigned long D3D::GraphMicrocodeBuilder::GetShaderSize(void)
//{
//    mangled_ppc("?GetShaderSize@GraphMicrocodeBuilder@D3D@@QAAKXZ");
//};

//public: long D3D::GraphMicrocodeBuilder::AddFlowAfter(struct D3D::FlowNode *, union GPUFLOW_INSTRUCTION const &, struct D3D::FlowNode **)
//{
//    mangled_ppc("?AddFlowAfter@GraphMicrocodeBuilder@D3D@@QAAJPAUFlowNode@2@ABTGPUFLOW_INSTRUCTION@@PAPAU32@@Z");
//};

//public: static unsigned long D3D::GraphMicrocodeBuilder::RemoveEndFromOp(unsigned long)
//{
//    mangled_ppc("?RemoveEndFromOp@GraphMicrocodeBuilder@D3D@@SAKK@Z");
//};

//public: static unsigned long D3D::GraphMicrocodeBuilder::ComputeSwizzle(unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?ComputeSwizzle@GraphMicrocodeBuilder@D3D@@SAKKKKK@Z");
//};

//public: static unsigned long D3D::GraphMicrocodeBuilder::ComputeSwizzle2(unsigned long, unsigned long)
//{
//    mangled_ppc("?ComputeSwizzle2@GraphMicrocodeBuilder@D3D@@SAKKK@Z");
//};

//public: long D3D::GraphMicrocodeBuilder::CreateExecAfter(struct D3D::FlowNode *, struct D3D::FlowNode **)
//{
//    mangled_ppc("?CreateExecAfter@GraphMicrocodeBuilder@D3D@@QAAJPAUFlowNode@2@PAPAU32@@Z");
//};

//public: long D3D::GraphMicrocodeBuilder::RemoveChild(struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::ALUNode **)
//{
//    mangled_ppc("?RemoveChild@GraphMicrocodeBuilder@D3D@@QAAJPAUFlowNode@2@PAUALUNode@2@PAPAU42@@Z");
//};

//void D3D::SetNop(union GPUSHADER_INSTRUCTION *)
//{
//    mangled_ppc("?SetNop@D3D@@YAXPATGPUSHADER_INSTRUCTION@@@Z");
//};

//void D3D::SetVector2(union GPUSHADER_INSTRUCTION *, enum GPUALUVECTOROP, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetVector2@D3D@@YAXPATGPUSHADER_INSTRUCTION@@W4GPUALUVECTOROP@@KKW4GPUALUSRCSELECT@@KK2KK@Z");
//};

//void D3D::SetVector3(union GPUSHADER_INSTRUCTION *, enum GPUALUVECTOROP, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetVector3@D3D@@YAXPATGPUSHADER_INSTRUCTION@@W4GPUALUVECTOROP@@KKW4GPUALUSRCSELECT@@KK2KK2KK@Z");
//};

//void D3D::SetScalar(union GPUSHADER_INSTRUCTION *, enum GPUALUSCALAROP, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetScalar@D3D@@YAXPATGPUSHADER_INSTRUCTION@@W4GPUALUSCALAROP@@KKW4GPUALUSRCSELECT@@KK@Z");
//};

//public: D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>(void)
//{
//    mangled_ppc("??0?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QAA@XZ");
//};

//public: D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::~D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>(void)
//{
//    mangled_ppc("??1?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QAA@XZ");
//};

//public: struct D3D::FlowNode ** D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::begin(void) const
//{
//    mangled_ppc("?begin@?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QBAPAPAUFlowNode@2@XZ");
//};

//public: unsigned long D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::size(void) const
//{
//    mangled_ppc("?size@?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QBAKXZ");
//};

//public: void D3D::BitVector<96>::Clear(void)
//{
//    mangled_ppc("?Clear@?$BitVector@$0GA@@D3D@@QAAXXZ");
//};

//public: void D3D::BitVector<96>::Set(unsigned long)
//{
//    mangled_ppc("?Set@?$BitVector@$0GA@@D3D@@QAAXK@Z");
//};

//public: void D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::ensure2(unsigned long, long &)
//{
//    mangled_ppc("?ensure2@?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//GPU_PUT_FLOW_INSTRUCTIONS
//{
//    mangled_ppc("GPU_PUT_FLOW_INSTRUCTIONS");
//};

//public: D3D::GMB_CSG_Context::GMB_CSG_Context(void)
//{
//    mangled_ppc("??0GMB_CSG_Context@D3D@@QAA@XZ");
//};

//public: D3D::GMB_CSG_Context::~GMB_CSG_Context(void)
//{
//    mangled_ppc("??1GMB_CSG_Context@D3D@@QAA@XZ");
//};

//public: long D3D::GraphMicrocodeBuilder::ConvertGraphToShader(void *, unsigned long)
//{
//    mangled_ppc("?ConvertGraphToShader@GraphMicrocodeBuilder@D3D@@QAAJPAXK@Z");
//};

//public: long D3D::GraphMicrocodeBuilder::SplitExecBlock(struct D3D::FlowNode *, struct D3D::ALUNode *, struct D3D::FlowNode **)
//{
//    mangled_ppc("?SplitExecBlock@GraphMicrocodeBuilder@D3D@@QAAJPAUFlowNode@2@PAUALUNode@2@PAPAU32@@Z");
//};

//long D3D::GetUsedVertexFetchConstants(struct D3D::FlowNode *, class D3D::BitVector<96> *)
//{
//    mangled_ppc("?GetUsedVertexFetchConstants@D3D@@YAJPAUFlowNode@1@PAV?$BitVector@$0GA@@1@@Z");
//};

//void D3D::SetMov(union GPUSHADER_INSTRUCTION *, unsigned long, unsigned long, enum GPUALUSRCSELECT, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetMov@D3D@@YAXPATGPUSHADER_INSTRUCTION@@KKW4GPUALUSRCSELECT@@KK@Z");
//};

//public: void D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::ensure(unsigned long, long &)
//{
//    mangled_ppc("?ensure@?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//public: long D3D::GraphMicrocodeBuilder::AddFlowAfterSplit(struct D3D::FlowNode *, struct D3D::ALUNode *, union GPUFLOW_INSTRUCTION const &, struct D3D::FlowNode **)
//{
//    mangled_ppc("?AddFlowAfterSplit@GraphMicrocodeBuilder@D3D@@QAAJPAUFlowNode@2@PAUALUNode@2@ABTGPUFLOW_INSTRUCTION@@PAPAU32@@Z");
//};

//public: long D3D::GraphMicrocodeBuilder::AddALUAfter(struct D3D::FlowNode *, struct D3D::ALUNode *, bool, bool, union GPUSHADER_INSTRUCTION const &, struct D3D::FlowNode **, struct D3D::ALUNode **)
//{
//    mangled_ppc("?AddALUAfter@GraphMicrocodeBuilder@D3D@@QAAJPAUFlowNode@2@PAUALUNode@2@_N2ABTGPUSHADER_INSTRUCTION@@PAPAU32@PAPAU42@@Z");
//};

//public: void D3D::D3DFastVector<struct D3D::FlowNode *, void * (D3D::MemAlloc::*)(unsigned long), void (D3D::MemFree::*)(void *)>::resize(unsigned long, long &)
//{
//    mangled_ppc("?resize@?$D3DFastVector@PAUFlowNode@D3D@@$1?MemAlloc@2@YAPAXK@Z$1?MemFree@2@YAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//long D3D::GMB_CSG_Callback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?GMB_CSG_Callback@D3D@@YAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//public: long D3D::GraphMicrocodeBuilder::ConvertShaderToGraph(void const *, unsigned long)
//{
//    mangled_ppc("?ConvertShaderToGraph@GraphMicrocodeBuilder@D3D@@QAAJPBXK@Z");
//};

