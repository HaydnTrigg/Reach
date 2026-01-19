/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: D3DXShader::CNode::CNode(void);
// public: D3DXShader::CNode::CNode(enum D3DXShader::_D3DNODE_TYPE);
// public: virtual int D3DXShader::CNode::IsEqual(class D3DXShader::CNode *);
// public: static int D3DXShader::CNode::IsEqual(class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: static class D3DXShader::CNode * D3DXShader::CNode::Copy(class D3DXShader::CNode *);
// public: static class D3DXShader::CNode * D3DXShader::CNode::Append(class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNode::Print(void);
// public: static void D3DXShader::CNode::Print(class D3DXShader::CNode *);
// public: D3DXShader::CNodeList::CNodeList(void);
// public: D3DXShader::CNodeList::CNodeList(class D3DXShader::CNode *, class D3DXShader::CNode *, char const *);
// public: virtual int D3DXShader::CNodeList::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeList::Print(void);
// public: D3DXShader::CNodeTree::CNodeTree(void);
// public: D3DXShader::CNodeTree::CNodeTree(char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeTree::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeTree::Print(void);
// public: D3DXShader::CNodeSetCall::CNodeSetCall(void);
// public: D3DXShader::CNodeSetCall::CNodeSetCall(class D3DXShader::CNode *, enum D3DXShader::ESetCallType);
// public: virtual int D3DXShader::CNodeSetCall::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeSetCall::Print(void);
// int D3DXShader::TokenEqual(struct D3DXShader::D3DXTOKEN const *, struct D3DXShader::D3DXTOKEN const *);
// public: D3DXShader::CNodeToken::CNodeToken(void);
// public: D3DXShader::CNodeToken::CNodeToken(struct D3DXShader::D3DXTOKEN const *);
// public: virtual int D3DXShader::CNodeToken::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeToken::Print(void);
// public: D3DXShader::CNodeProgram::CNodeProgram(void);
// public: D3DXShader::CNodeProgram::CNodeProgram(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeProgram::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeProgram::Print(void);
// public: D3DXShader::CNodeScope::CNodeScope(void);
// public: D3DXShader::CNodeScope::CNodeScope(enum D3DXShader::_D3DSCOPE_TYPE, char const *, class D3DXShader::CNode *, class D3DXShader::CNodeTree *, class D3DXShader::CNodeScope *);
// public: virtual int D3DXShader::CNodeScope::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeScope::Print(void);
// public: D3DXShader::CNodeDecl::CNodeDecl(void);
// public: D3DXShader::CNodeDecl::CNodeDecl(enum D3DXShader::_D3DDECL_TYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeDecl::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeDecl::Print(void);
// public: D3DXShader::CNodeCBuffer::CNodeCBuffer(void);
// public: D3DXShader::CNodeCBuffer::CNodeCBuffer(class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeCBuffer::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeCBuffer::Print(void);
// public: D3DXShader::CNodeAttribute::CNodeAttribute(void);
// public: D3DXShader::CNodeAttribute::CNodeAttribute(class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeAttribute::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeAttribute::Print(void);
// public: D3DXShader::CNodeCaseCondition::CNodeCaseCondition(void);
// public: D3DXShader::CNodeCaseCondition::CNodeCaseCondition(class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeCaseCondition::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeCaseCondition::Print(void);
// public: D3DXShader::CNodeUsage::CNodeUsage(void);
// public: D3DXShader::CNodeUsage::CNodeUsage(unsigned long, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeUsage::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeUsage::Print(void);
// public: static void D3DXShader::CNodeUsage::PrintUsage(unsigned long);
// public: D3DXShader::CNodeArray::CNodeArray(void);
// public: D3DXShader::CNodeArray::CNodeArray(class D3DXShader::CNode *, unsigned int);
// public: virtual int D3DXShader::CNodeArray::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeArray::Print(void);
// public: D3DXShader::CNodeType::CNodeType(void);
// public: D3DXShader::CNodeType::CNodeType(enum D3DXShader::_D3DTYPE_TEMPLATE, enum D3DXShader::_D3DCOMPONENT_TYPE, class D3DXShader::CNode *, unsigned int, unsigned int, unsigned long);
// public: virtual int D3DXShader::CNodeType::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeType::Print(void);
// public: D3DXShader::CNodeFunction::CNodeFunction(void);
// public: D3DXShader::CNodeFunction::CNodeFunction(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeFunction::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeFunction::Print(void);
// public: D3DXShader::CNodeVariable::CNodeVariable(void);
// public: D3DXShader::CNodeVariable::CNodeVariable(unsigned int, unsigned int, enum D3DXShader::_D3DSCOPE_TYPE, unsigned long, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeVariable::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeVariable::Print(void);
// public: D3DXShader::CNodeStatement::CNodeStatement(void);
// public: D3DXShader::CNodeStatement::CNodeStatement(enum D3DXShader::_D3DSTMT_TYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int);
// public: virtual int D3DXShader::CNodeStatement::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeStatement::Print(void);
// public: D3DXShader::CNodeStateBlockFunctionCall::CNodeStateBlockFunctionCall(void);
// public: virtual int D3DXShader::CNodeStateBlockFunctionCall::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeStateBlockFunctionCall::Print(void);
// public: D3DXShader::CNodeExpression::CNodeExpression(void);
// public: D3DXShader::CNodeExpression::CNodeExpression(class D3DXShader::CNode *, enum D3DXShader::_D3DEXPR_OP, class D3DXShader::CNode *, class D3DXShader::CNode *, int, struct D3DXShader::D3DXTOKEN const *);
// public: virtual int D3DXShader::CNodeExpression::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeExpression::Print(void);
// public: D3DXShader::CNodeValue::CNodeValue(void);
// public: D3DXShader::CNodeValue::CNodeValue(struct D3DXShader::_D3DVALUE const *, struct D3DXShader::D3DXTOKEN const *);
// public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, unsigned int, struct D3DXShader::D3DXTOKEN const *);
// public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, double, struct D3DXShader::D3DXTOKEN const *);
// public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, class D3DXShader::CNode *, struct D3DXShader::D3DXTOKEN const *);
// public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, unsigned char *, unsigned int, struct D3DXShader::D3DXTOKEN const *);
// public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, unsigned int, unsigned int, struct D3DXShader::D3DXTOKEN const *);
// public: virtual int D3DXShader::CNodeValue::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeValue::Print(void);
// public: D3DXShader::CNodeState::CNodeState(void);
// public: D3DXShader::CNodeState::CNodeState(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeState::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeState::Print(void);
// public: D3DXShader::CNodeBuffer::CNodeBuffer(void);
// public: D3DXShader::CNodeBuffer::CNodeBuffer(struct D3DXShader::D3DXTOKEN const *, unsigned char *, unsigned int);
// public: virtual int D3DXShader::CNodeBuffer::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeBuffer::Print(void);
// public: D3DXShader::CNodeRegister::CNodeRegister(void);
// public: D3DXShader::CNodeRegister::CNodeRegister(enum D3DXShader::_D3DRREGISTERBINDTYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeRegister::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeRegister::Print(void);
// public: D3DXShader::CNodeFormat::CNodeFormat(void);
// public: D3DXShader::CNodeFormat::CNodeFormat(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: virtual int D3DXShader::CNodeFormat::IsEqual(class D3DXShader::CNode *);
// public: virtual void D3DXShader::CNodeFormat::Print(void);
// public: static class D3DXCore::CAlloc * D3DXShader::CNode::SetAlloc(class D3DXCore::CAlloc *);
// public: static unsigned char * D3DXShader::CNode::Alloc(unsigned long, unsigned long);
// public: static void * D3DXShader::CNode::operator new(unsigned int);
// public: virtual class D3DXShader::CNode * D3DXShader::CNode::Copy(void);
// public: virtual class D3DXShader::CNodeList * D3DXShader::CNodeList::Copy(void);
// public: virtual class D3DXShader::CNodeTree * D3DXShader::CNodeTree::Copy(void);
// public: virtual class D3DXShader::CNodeSetCall * D3DXShader::CNodeSetCall::Copy(void);
// public: virtual class D3DXShader::CNodeToken * D3DXShader::CNodeToken::Copy(void);
// public: virtual class D3DXShader::CNodeProgram * D3DXShader::CNodeProgram::Copy(void);
// public: virtual class D3DXShader::CNodeScope * D3DXShader::CNodeScope::Copy(void);
// public: virtual class D3DXShader::CNodeDecl * D3DXShader::CNodeDecl::Copy(void);
// public: virtual class D3DXShader::CNodeCBuffer * D3DXShader::CNodeCBuffer::Copy(void);
// public: virtual class D3DXShader::CNodeAttribute * D3DXShader::CNodeAttribute::Copy(void);
// public: virtual class D3DXShader::CNodeCaseCondition * D3DXShader::CNodeCaseCondition::Copy(void);
// public: virtual class D3DXShader::CNodeUsage * D3DXShader::CNodeUsage::Copy(void);
// public: virtual class D3DXShader::CNodeArray * D3DXShader::CNodeArray::Copy(void);
// public: virtual class D3DXShader::CNodeType * D3DXShader::CNodeType::Copy(void);
// public: virtual class D3DXShader::CNodeFunction * D3DXShader::CNodeFunction::Copy(void);
// public: virtual class D3DXShader::CNodeVariable * D3DXShader::CNodeVariable::Copy(void);
// public: virtual class D3DXShader::CNodeStatement * D3DXShader::CNodeStatement::Copy(void);
// public: virtual class D3DXShader::CNodeStateBlockFunctionCall * D3DXShader::CNodeStateBlockFunctionCall::Copy(void);
// public: virtual class D3DXShader::CNodeExpression * D3DXShader::CNodeExpression::Copy(void);
// public: virtual class D3DXShader::CNodeValue * D3DXShader::CNodeValue::Copy(void);
// public: virtual class D3DXShader::CNodeState * D3DXShader::CNodeState::Copy(void);
// public: virtual class D3DXShader::CNodeBuffer * D3DXShader::CNodeBuffer::Copy(void);
// public: virtual class D3DXShader::CNodeRegister * D3DXShader::CNodeRegister::Copy(void);
// public: virtual class D3DXShader::CNodeFormat * D3DXShader::CNodeFormat::Copy(void);

//public: D3DXShader::CNode::CNode(void)
//{
//    mangled_ppc("??0CNode@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNode::CNode(enum D3DXShader::_D3DNODE_TYPE)
//{
//    mangled_ppc("??0CNode@D3DXShader@@QAA@W4_D3DNODE_TYPE@1@@Z");
//};

//public: virtual int D3DXShader::CNode::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNode@D3DXShader@@UAAHPAV12@@Z");
//};

//public: static int D3DXShader::CNode::IsEqual(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNode@D3DXShader@@SAHPAV12@0@Z");
//};

//public: static class D3DXShader::CNode * D3DXShader::CNode::Copy(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Copy@CNode@D3DXShader@@SAPAV12@PAV12@@Z");
//};

//public: static class D3DXShader::CNode * D3DXShader::CNode::Append(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?Append@CNode@D3DXShader@@SAPAV12@PAV12@0@Z");
//};

//public: virtual void D3DXShader::CNode::Print(void)
//{
//    mangled_ppc("?Print@CNode@D3DXShader@@UAAXXZ");
//};

//public: static void D3DXShader::CNode::Print(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Print@CNode@D3DXShader@@SAXPAV12@@Z");
//};

//public: D3DXShader::CNodeList::CNodeList(void)
//{
//    mangled_ppc("??0CNodeList@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeList::CNodeList(class D3DXShader::CNode *, class D3DXShader::CNode *, char const *)
//{
//    mangled_ppc("??0CNodeList@D3DXShader@@QAA@PAVCNode@1@0PBD@Z");
//};

//public: virtual int D3DXShader::CNodeList::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeList@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeList::Print(void)
//{
//    mangled_ppc("?Print@CNodeList@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeTree::CNodeTree(void)
//{
//    mangled_ppc("??0CNodeTree@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeTree::CNodeTree(char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeTree@D3DXShader@@QAA@PBDPAVCNode@1@11@Z");
//};

//public: virtual int D3DXShader::CNodeTree::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeTree@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeTree::Print(void)
//{
//    mangled_ppc("?Print@CNodeTree@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeSetCall::CNodeSetCall(void)
//{
//    mangled_ppc("??0CNodeSetCall@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeSetCall::CNodeSetCall(class D3DXShader::CNode *, enum D3DXShader::ESetCallType)
//{
//    mangled_ppc("??0CNodeSetCall@D3DXShader@@QAA@PAVCNode@1@W4ESetCallType@1@@Z");
//};

//public: virtual int D3DXShader::CNodeSetCall::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeSetCall@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeSetCall::Print(void)
//{
//    mangled_ppc("?Print@CNodeSetCall@D3DXShader@@UAAXXZ");
//};

//int D3DXShader::TokenEqual(struct D3DXShader::D3DXTOKEN const *, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("?TokenEqual@D3DXShader@@YAHPBUD3DXTOKEN@1@0@Z");
//};

//public: D3DXShader::CNodeToken::CNodeToken(void)
//{
//    mangled_ppc("??0CNodeToken@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeToken::CNodeToken(struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeToken@D3DXShader@@QAA@PBUD3DXTOKEN@1@@Z");
//};

//public: virtual int D3DXShader::CNodeToken::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeToken@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeToken::Print(void)
//{
//    mangled_ppc("?Print@CNodeToken@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeProgram::CNodeProgram(void)
//{
//    mangled_ppc("??0CNodeProgram@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeProgram::CNodeProgram(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeProgram@D3DXShader@@QAA@IIIIIIPAVCNode@1@@Z");
//};

//public: virtual int D3DXShader::CNodeProgram::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeProgram@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeProgram::Print(void)
//{
//    mangled_ppc("?Print@CNodeProgram@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeScope::CNodeScope(void)
//{
//    mangled_ppc("??0CNodeScope@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeScope::CNodeScope(enum D3DXShader::_D3DSCOPE_TYPE, char const *, class D3DXShader::CNode *, class D3DXShader::CNodeTree *, class D3DXShader::CNodeScope *)
//{
//    mangled_ppc("??0CNodeScope@D3DXShader@@QAA@W4_D3DSCOPE_TYPE@1@PBDPAVCNode@1@PAVCNodeTree@1@PAV01@@Z");
//};

//public: virtual int D3DXShader::CNodeScope::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeScope@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeScope::Print(void)
//{
//    mangled_ppc("?Print@CNodeScope@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeDecl::CNodeDecl(void)
//{
//    mangled_ppc("??0CNodeDecl@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeDecl::CNodeDecl(enum D3DXShader::_D3DDECL_TYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeDecl@D3DXShader@@QAA@W4_D3DDECL_TYPE@1@PAVCNode@1@111@Z");
//};

//public: virtual int D3DXShader::CNodeDecl::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeDecl@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeDecl::Print(void)
//{
//    mangled_ppc("?Print@CNodeDecl@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeCBuffer::CNodeCBuffer(void)
//{
//    mangled_ppc("??0CNodeCBuffer@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeCBuffer::CNodeCBuffer(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeCBuffer@D3DXShader@@QAA@PAVCNode@1@0@Z");
//};

//public: virtual int D3DXShader::CNodeCBuffer::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeCBuffer@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeCBuffer::Print(void)
//{
//    mangled_ppc("?Print@CNodeCBuffer@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeAttribute::CNodeAttribute(void)
//{
//    mangled_ppc("??0CNodeAttribute@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeAttribute::CNodeAttribute(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeAttribute@D3DXShader@@QAA@PAVCNode@1@0@Z");
//};

//public: virtual int D3DXShader::CNodeAttribute::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeAttribute@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeAttribute::Print(void)
//{
//    mangled_ppc("?Print@CNodeAttribute@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeCaseCondition::CNodeCaseCondition(void)
//{
//    mangled_ppc("??0CNodeCaseCondition@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeCaseCondition::CNodeCaseCondition(class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeCaseCondition@D3DXShader@@QAA@PAVCNode@1@@Z");
//};

//public: virtual int D3DXShader::CNodeCaseCondition::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeCaseCondition@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeCaseCondition::Print(void)
//{
//    mangled_ppc("?Print@CNodeCaseCondition@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeUsage::CNodeUsage(void)
//{
//    mangled_ppc("??0CNodeUsage@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeUsage::CNodeUsage(unsigned long, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeUsage@D3DXShader@@QAA@KPAVCNode@1@00@Z");
//};

//public: virtual int D3DXShader::CNodeUsage::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeUsage@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeUsage::Print(void)
//{
//    mangled_ppc("?Print@CNodeUsage@D3DXShader@@UAAXXZ");
//};

//public: static void D3DXShader::CNodeUsage::PrintUsage(unsigned long)
//{
//    mangled_ppc("?PrintUsage@CNodeUsage@D3DXShader@@SAXK@Z");
//};

//public: D3DXShader::CNodeArray::CNodeArray(void)
//{
//    mangled_ppc("??0CNodeArray@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeArray::CNodeArray(class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("??0CNodeArray@D3DXShader@@QAA@PAVCNode@1@I@Z");
//};

//public: virtual int D3DXShader::CNodeArray::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeArray@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeArray::Print(void)
//{
//    mangled_ppc("?Print@CNodeArray@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeType::CNodeType(void)
//{
//    mangled_ppc("??0CNodeType@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeType::CNodeType(enum D3DXShader::_D3DTYPE_TEMPLATE, enum D3DXShader::_D3DCOMPONENT_TYPE, class D3DXShader::CNode *, unsigned int, unsigned int, unsigned long)
//{
//    mangled_ppc("??0CNodeType@D3DXShader@@QAA@W4_D3DTYPE_TEMPLATE@1@W4_D3DCOMPONENT_TYPE@1@PAVCNode@1@IIK@Z");
//};

//public: virtual int D3DXShader::CNodeType::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeType@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeType::Print(void)
//{
//    mangled_ppc("?Print@CNodeType@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeFunction::CNodeFunction(void)
//{
//    mangled_ppc("??0CNodeFunction@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeFunction::CNodeFunction(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeFunction@D3DXShader@@QAA@IIIIKPAVCNode@1@00000000@Z");
//};

//public: virtual int D3DXShader::CNodeFunction::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeFunction@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeFunction::Print(void)
//{
//    mangled_ppc("?Print@CNodeFunction@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeVariable::CNodeVariable(void)
//{
//    mangled_ppc("??0CNodeVariable@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeVariable::CNodeVariable(unsigned int, unsigned int, enum D3DXShader::_D3DSCOPE_TYPE, unsigned long, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeVariable@D3DXShader@@QAA@IIW4_D3DSCOPE_TYPE@1@KPAVCNode@1@1111@Z");
//};

//public: virtual int D3DXShader::CNodeVariable::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeVariable@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeVariable::Print(void)
//{
//    mangled_ppc("?Print@CNodeVariable@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeStatement::CNodeStatement(void)
//{
//    mangled_ppc("??0CNodeStatement@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeStatement::CNodeStatement(enum D3DXShader::_D3DSTMT_TYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int)
//{
//    mangled_ppc("??0CNodeStatement@D3DXShader@@QAA@W4_D3DSTMT_TYPE@1@PAVCNode@1@111111I@Z");
//};

//public: virtual int D3DXShader::CNodeStatement::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeStatement@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeStatement::Print(void)
//{
//    mangled_ppc("?Print@CNodeStatement@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeStateBlockFunctionCall::CNodeStateBlockFunctionCall(void)
//{
//    mangled_ppc("??0CNodeStateBlockFunctionCall@D3DXShader@@QAA@XZ");
//};

//public: virtual int D3DXShader::CNodeStateBlockFunctionCall::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeStateBlockFunctionCall@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeStateBlockFunctionCall::Print(void)
//{
//    mangled_ppc("?Print@CNodeStateBlockFunctionCall@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeExpression::CNodeExpression(void)
//{
//    mangled_ppc("??0CNodeExpression@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeExpression::CNodeExpression(class D3DXShader::CNode *, enum D3DXShader::_D3DEXPR_OP, class D3DXShader::CNode *, class D3DXShader::CNode *, int, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeExpression@D3DXShader@@QAA@PAVCNode@1@W4_D3DEXPR_OP@1@00HPBUD3DXTOKEN@1@@Z");
//};

//public: virtual int D3DXShader::CNodeExpression::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeExpression@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeExpression::Print(void)
//{
//    mangled_ppc("?Print@CNodeExpression@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeValue::CNodeValue(void)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeValue::CNodeValue(struct D3DXShader::_D3DVALUE const *, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@PBU_D3DVALUE@1@PBUD3DXTOKEN@1@@Z");
//};

//public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, unsigned int, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@W4_D3DVALUE_TYPE@1@IPBUD3DXTOKEN@1@@Z");
//};

//public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, double, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@W4_D3DVALUE_TYPE@1@NPBUD3DXTOKEN@1@@Z");
//};

//public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, class D3DXShader::CNode *, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@W4_D3DVALUE_TYPE@1@PAVCNode@1@PBUD3DXTOKEN@1@@Z");
//};

//public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, unsigned char *, unsigned int, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@W4_D3DVALUE_TYPE@1@PAEIPBUD3DXTOKEN@1@@Z");
//};

//public: D3DXShader::CNodeValue::CNodeValue(enum D3DXShader::_D3DVALUE_TYPE, unsigned int, unsigned int, struct D3DXShader::D3DXTOKEN const *)
//{
//    mangled_ppc("??0CNodeValue@D3DXShader@@QAA@W4_D3DVALUE_TYPE@1@IIPBUD3DXTOKEN@1@@Z");
//};

//public: virtual int D3DXShader::CNodeValue::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeValue@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeValue::Print(void)
//{
//    mangled_ppc("?Print@CNodeValue@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeState::CNodeState(void)
//{
//    mangled_ppc("??0CNodeState@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeState::CNodeState(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeState@D3DXShader@@QAA@PAVCNode@1@00@Z");
//};

//public: virtual int D3DXShader::CNodeState::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeState@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeState::Print(void)
//{
//    mangled_ppc("?Print@CNodeState@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeBuffer::CNodeBuffer(void)
//{
//    mangled_ppc("??0CNodeBuffer@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeBuffer::CNodeBuffer(struct D3DXShader::D3DXTOKEN const *, unsigned char *, unsigned int)
//{
//    mangled_ppc("??0CNodeBuffer@D3DXShader@@QAA@PBUD3DXTOKEN@1@PAEI@Z");
//};

//public: virtual int D3DXShader::CNodeBuffer::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeBuffer@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeBuffer::Print(void)
//{
//    mangled_ppc("?Print@CNodeBuffer@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeRegister::CNodeRegister(void)
//{
//    mangled_ppc("??0CNodeRegister@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeRegister::CNodeRegister(enum D3DXShader::_D3DRREGISTERBINDTYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeRegister@D3DXShader@@QAA@W4_D3DRREGISTERBINDTYPE@1@PAVCNode@1@11@Z");
//};

//public: virtual int D3DXShader::CNodeRegister::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeRegister@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeRegister::Print(void)
//{
//    mangled_ppc("?Print@CNodeRegister@D3DXShader@@UAAXXZ");
//};

//public: D3DXShader::CNodeFormat::CNodeFormat(void)
//{
//    mangled_ppc("??0CNodeFormat@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CNodeFormat::CNodeFormat(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CNodeFormat@D3DXShader@@QAA@PAVCNode@1@00@Z");
//};

//public: virtual int D3DXShader::CNodeFormat::IsEqual(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsEqual@CNodeFormat@D3DXShader@@UAAHPAVCNode@2@@Z");
//};

//public: virtual void D3DXShader::CNodeFormat::Print(void)
//{
//    mangled_ppc("?Print@CNodeFormat@D3DXShader@@UAAXXZ");
//};

//public: static class D3DXCore::CAlloc * D3DXShader::CNode::SetAlloc(class D3DXCore::CAlloc *)
//{
//    mangled_ppc("?SetAlloc@CNode@D3DXShader@@SAPAVCAlloc@D3DXCore@@PAV34@@Z");
//};

//public: static unsigned char * D3DXShader::CNode::Alloc(unsigned long, unsigned long)
//{
//    mangled_ppc("?Alloc@CNode@D3DXShader@@SAPAEKK@Z");
//};

//public: static void * D3DXShader::CNode::operator new(unsigned int)
//{
//    mangled_ppc("??2CNode@D3DXShader@@SAPAXI@Z");
//};

//public: virtual class D3DXShader::CNode * D3DXShader::CNode::Copy(void)
//{
//    mangled_ppc("?Copy@CNode@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeList * D3DXShader::CNodeList::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeList@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeTree * D3DXShader::CNodeTree::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeTree@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeSetCall * D3DXShader::CNodeSetCall::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeSetCall@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeToken * D3DXShader::CNodeToken::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeToken@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeProgram * D3DXShader::CNodeProgram::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeProgram@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeScope * D3DXShader::CNodeScope::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeScope@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeDecl * D3DXShader::CNodeDecl::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeDecl@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeCBuffer * D3DXShader::CNodeCBuffer::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeCBuffer@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeAttribute * D3DXShader::CNodeAttribute::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeAttribute@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeCaseCondition * D3DXShader::CNodeCaseCondition::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeCaseCondition@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeUsage * D3DXShader::CNodeUsage::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeUsage@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeArray * D3DXShader::CNodeArray::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeArray@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeType * D3DXShader::CNodeType::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeType@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeFunction * D3DXShader::CNodeFunction::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeFunction@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeVariable * D3DXShader::CNodeVariable::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeVariable@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeStatement * D3DXShader::CNodeStatement::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeStatement@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeStateBlockFunctionCall * D3DXShader::CNodeStateBlockFunctionCall::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeStateBlockFunctionCall@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeExpression * D3DXShader::CNodeExpression::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeExpression@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeValue * D3DXShader::CNodeValue::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeValue@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeState * D3DXShader::CNodeState::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeState@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeBuffer * D3DXShader::CNodeBuffer::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeBuffer@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeRegister * D3DXShader::CNodeRegister::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeRegister@D3DXShader@@UAAPAV12@XZ");
//};

//public: virtual class D3DXShader::CNodeFormat * D3DXShader::CNodeFormat::Copy(void)
//{
//    mangled_ppc("?Copy@CNodeFormat@D3DXShader@@UAAPAV12@XZ");
//};

