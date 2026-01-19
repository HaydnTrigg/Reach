/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: D3DXShader::CParse::CParse(void);
// int D3DXShader::AddDecl_LeftRotate(class D3DXShader::CNode **);
// int D3DXShader::AddDecl_RightRotate(class D3DXShader::CNode **);
// protected: long D3DXShader::CParse::AddDeclTree(class D3DXShader::CNodeScope *, class D3DXShader::CNode *);
// int D3DXShader::CanCastObject(enum D3DXShader::_D3DCOMPONENT_TYPE, enum D3DXShader::_D3DCOMPONENT_TYPE);
// protected: class D3DXShader::CNode * D3DXShader::CParse::FindDecls(struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNodeScope *);
// protected: int D3DXShader::CParse::IsCast(enum D3DXShader::_D3DCOMPONENT_TYPE, enum D3DXShader::_D3DCOMPONENT_TYPE);
// protected: class D3DXShader::CNode * D3DXShader::CParse::AddCBuffer(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::PopCBuffer(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::GetUsageType(void);
// protected: int D3DXShader::CParse::IsScalar(class D3DXShader::CNode *);
// protected: int D3DXShader::CParse::IsIorU(class D3DXShader::CNode *);
// protected: int D3DXShader::CParse::IsTypeEqual(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::GetComponentType(class D3DXShader::CNode *, class D3DXShader::CNode *, enum D3DXShader::_D3DCOMPONENT_TYPE *);
// protected: unsigned int D3DXShader::CParse::EvalType(class D3DXShader::CNode *, struct D3DXShader::_D3DVALUE *);
// protected: long D3DXShader::CParse::CastToFloat(double *, struct D3DXShader::_D3DVALUE *, struct D3DXShader::D3DXTOKEN *);
// protected: void D3DXShader::CParse::WarnCastInt(double, struct D3DXShader::D3DXTOKEN *);
// protected: void D3DXShader::CParse::WarnCastUint(double, struct D3DXShader::D3DXTOKEN *);
// protected: int D3DXShader::CParse::IsPartiallyLiteral(class D3DXShader::CNode *);
// protected: int D3DXShader::CParse::IsFullyLiteral(class D3DXShader::CNode *, int);
// protected: int D3DXShader::CParse::IsSomewhatLiteral(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::AsmDecl(void);
// UCodeToNativeDWORD;
// UCodeGetUCodeHeader;
// UCodeMicrocodeIsValidVersion;
// UCodeGetShaderType;
// public: D3DXShader::CParse::~CParse(void);
// protected: unsigned int D3DXShader::CParse::ScoreFunctionDecl(class D3DXShader::CNodeFunction *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long);
// protected: long D3DXShader::CParse::PopUsageType(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::Attribute(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::Cast(struct D3DXShader::_D3DVALUE *, struct D3DXShader::_D3DVALUE *, struct D3DXShader::D3DXTOKEN *);
// protected: long D3DXShader::CParse::CastToUint(unsigned int *, struct D3DXShader::_D3DVALUE *, struct D3DXShader::D3DXTOKEN *);
// protected: long D3DXShader::CParse::CastToValue(struct D3DXShader::_D3DVALUE *, double, struct D3DXShader::D3DXTOKEN *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::Stmt(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::BreakStmt(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ContinueStmt(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::StopStmt(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::DiscardStmt(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CaseStmt(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: void D3DXShader::CParse::VError(char const *, char *);
// protected: void D3DXShader::CParse::Error(struct D3DXShader::D3DXTOKEN *, unsigned int, char const *, ...);
// protected: void D3DXShader::CParse::Warning(struct D3DXShader::D3DXTOKEN *, unsigned int, char const *, ...);
// protected: void D3DXShader::CParse::FatalError(struct D3DXShader::D3DXTOKEN *, unsigned int, char const *, ...);
// protected: class D3DXShader::CNode * D3DXShader::CParse::NonNull(class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::PushScope(enum D3DXShader::_D3DSCOPE_TYPE, char const *);
// protected: long D3DXShader::CParse::PopScope(void);
// protected: long D3DXShader::CParse::AddDecl(class D3DXShader::CNode *, int);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CBufferDecl(enum D3DXShader::_D3DDECL_TYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::NamespaceDecl(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::PushCBuffer(class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::MakeTypeConst(class D3DXShader::CNode *, int);
// protected: int D3DXShader::CParse::IsConst(class D3DXShader::CNode *);
// protected: int D3DXShader::CParse::IsNumeric(class D3DXShader::CNode *);
// protected: unsigned int D3DXShader::CParse::TypeSize(class D3DXShader::CNode *);
// protected: unsigned int D3DXShader::CParse::PrintType(char *, unsigned int, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::GetSubType(class D3DXShader::CNode *, unsigned int, class D3DXShader::CNodeType *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ObjectExpr(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::SetRObjectProduction(class D3DXShader::CNode **, enum D3DXShader::ESetCallType);
// protected: long D3DXShader::CParse::EvalIntrinsic(class D3DXShader::CNode *, struct D3DXShader::_D3DVALUE *);
// protected: void D3DXShader::CParse::ComputeExprSize(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CombineUintId(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CombineStrings(class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: static void D3DXShader::CParse::Static_Error(void *, char const *, ...);
// protected: void D3DXShader::CParse::Error(char const *, ...);
// protected: long D3DXShader::CParse::FindIntrinsic(struct D3DXShader::D3DINTRINSIC const *, unsigned int, class D3DXShader::CNodeType *, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode **, class D3DXShader::CNode **);
// protected: unsigned int D3DXShader::CParse::ScoreCast(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::ApplyUsage(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::CombineUsages(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: int D3DXShader::CParse::IsSupportedCast(class D3DXShader::CNode *, class D3DXShader::CNode *, int);
// protected: void D3DXShader::CParse::ErrorUnsupportedCast(struct D3DXShader::D3DXTOKEN *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, int);
// protected: long D3DXShader::CParse::BinaryType(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode **, class D3DXShader::CNode **, class D3DXShader::CNode **);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ScalarExpr(enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned int, double, struct D3DXShader::D3DXTOKEN *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ScalarExpr(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::StringExpr(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::NullExpr(struct D3DXShader::D3DXTOKEN *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::InitExpr(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::OffsetExpr(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::AsmExpr(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::StateObjectExpr(class D3DXShader::CNode *, enum D3DXShader::_D3DCOMPONENT_TYPE);
// protected: class D3DXShader::CNode * D3DXShader::CParse::SamplerExpr(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::StateblockExpr(class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::Eval(class D3DXShader::CNode *, struct D3DXShader::_D3DVALUE *);
// protected: unsigned int D3DXShader::CParse::ScoreFunctionCall(class D3DXShader::CNodeFunction *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long);
// protected: long D3DXShader::CParse::PushUsageType(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::Eval(class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::EvalUint(class D3DXShader::CNode *, unsigned int *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CaseCondExpr(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::AttributeParam(class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::FindCompatibleDecl(class D3DXShader::CNode *, enum D3DXShader::_D3DDECL_TYPE, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNodeScope *, unsigned long, unsigned int *, unsigned int *, class D3DXShader::CNodeDecl **);
// protected: long D3DXShader::CParse::FindDeclsNamespace(class D3DXShader::CNode *, enum D3DXShader::_D3DDECL_TYPE, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long, char const *, unsigned int *, unsigned int *, class D3DXShader::CNodeDecl **);
// protected: long D3DXShader::CParse::FindDecl(enum D3DXShader::_D3DDECL_TYPE, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNodeScope *, unsigned long, class D3DXShader::CNode **, class D3DXShader::CNode **);
// protected: class D3DXShader::CNode * D3DXShader::CParse::TypeDecl(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::StructDecl(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::VectorType(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::MatrixType(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::TypeDim(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::VariableExpr(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CastExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, int, int);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ConditionalExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ArrayExpr(class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::Expr(enum D3DXShader::_D3DEXPR_OP, class D3DXShader::CNode *, class D3DXShader::CNode *, int, int);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ReturnStmt(class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::IfStmt(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::SwitchStmt(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::ForStmt(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CParse::AsmFindDeclCallback(struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **);
// protected: int D3DXShader::CParse::Token(void);
// protected: class D3DXShader::CNode * D3DXShader::CParse::VariableDecl(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::FunctionDecl(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::FunctionExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, int);
// protected: class D3DXShader::CNode * D3DXShader::CParse::MethodExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::CompileExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int, int);
// protected: static long D3DXShader::CParse::Static_AsmFindDeclCallback(void *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **);
// public: static int D3DXShader::CParse::Static_Token(void *);
// protected: class D3DXShader::CNode * D3DXShader::CParse::AsmBlock(int);
// protected: void D3DXShader::CParse::Production(unsigned int, unsigned int);
// public: static void D3DXShader::CParse::Static_Production(void *, unsigned int, unsigned int);
// public: int D3DXShader::CParseYaccStruct::d3dxshader_parse(void);
// public: long D3DXShader::CParse::ParseEx(class D3DXShader::CPreProcessor *, unsigned long, class D3DXShader::CNode **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// public: long D3DXShader::CParse::Parse(class D3DXShader::CPreProcessor *, unsigned long, class D3DXShader::CNode **);

//public: D3DXShader::CParse::CParse(void)
//{
//    mangled_ppc("??0CParse@D3DXShader@@QAA@XZ");
//};

//int D3DXShader::AddDecl_LeftRotate(class D3DXShader::CNode **)
//{
//    mangled_ppc("?AddDecl_LeftRotate@D3DXShader@@YAHPAPAVCNode@1@@Z");
//};

//int D3DXShader::AddDecl_RightRotate(class D3DXShader::CNode **)
//{
//    mangled_ppc("?AddDecl_RightRotate@D3DXShader@@YAHPAPAVCNode@1@@Z");
//};

//protected: long D3DXShader::CParse::AddDeclTree(class D3DXShader::CNodeScope *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?AddDeclTree@CParse@D3DXShader@@IAAJPAVCNodeScope@2@PAVCNode@2@@Z");
//};

//int D3DXShader::CanCastObject(enum D3DXShader::_D3DCOMPONENT_TYPE, enum D3DXShader::_D3DCOMPONENT_TYPE)
//{
//    mangled_ppc("?CanCastObject@D3DXShader@@YAHW4_D3DCOMPONENT_TYPE@1@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::FindDecls(struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNodeScope *)
//{
//    mangled_ppc("?FindDecls@CParse@D3DXShader@@IAAPAVCNode@2@PAUD3DXTOKEN@2@PAVCNodeScope@2@@Z");
//};

//protected: int D3DXShader::CParse::IsCast(enum D3DXShader::_D3DCOMPONENT_TYPE, enum D3DXShader::_D3DCOMPONENT_TYPE)
//{
//    mangled_ppc("?IsCast@CParse@D3DXShader@@IAAHW4_D3DCOMPONENT_TYPE@2@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::AddCBuffer(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?AddCBuffer@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: long D3DXShader::CParse::PopCBuffer(void)
//{
//    mangled_ppc("?PopCBuffer@CParse@D3DXShader@@IAAJXZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::GetUsageType(void)
//{
//    mangled_ppc("?GetUsageType@CParse@D3DXShader@@IAAPAVCNode@2@XZ");
//};

//protected: int D3DXShader::CParse::IsScalar(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsScalar@CParse@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: int D3DXShader::CParse::IsIorU(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsIorU@CParse@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: int D3DXShader::CParse::IsTypeEqual(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsTypeEqual@CParse@D3DXShader@@IAAHPAVCNode@2@0@Z");
//};

//protected: long D3DXShader::CParse::GetComponentType(class D3DXShader::CNode *, class D3DXShader::CNode *, enum D3DXShader::_D3DCOMPONENT_TYPE *)
//{
//    mangled_ppc("?GetComponentType@CParse@D3DXShader@@IAAJPAVCNode@2@0PAW4_D3DCOMPONENT_TYPE@2@@Z");
//};

//protected: unsigned int D3DXShader::CParse::EvalType(class D3DXShader::CNode *, struct D3DXShader::_D3DVALUE *)
//{
//    mangled_ppc("?EvalType@CParse@D3DXShader@@IAAIPAVCNode@2@PAU_D3DVALUE@2@@Z");
//};

//protected: long D3DXShader::CParse::CastToFloat(double *, struct D3DXShader::_D3DVALUE *, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?CastToFloat@CParse@D3DXShader@@IAAJPANPAU_D3DVALUE@2@PAUD3DXTOKEN@2@@Z");
//};

//protected: void D3DXShader::CParse::WarnCastInt(double, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?WarnCastInt@CParse@D3DXShader@@IAAXNPAUD3DXTOKEN@2@@Z");
//};

//protected: void D3DXShader::CParse::WarnCastUint(double, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?WarnCastUint@CParse@D3DXShader@@IAAXNPAUD3DXTOKEN@2@@Z");
//};

//protected: int D3DXShader::CParse::IsPartiallyLiteral(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsPartiallyLiteral@CParse@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: int D3DXShader::CParse::IsFullyLiteral(class D3DXShader::CNode *, int)
//{
//    mangled_ppc("?IsFullyLiteral@CParse@D3DXShader@@IAAHPAVCNode@2@H@Z");
//};

//protected: int D3DXShader::CParse::IsSomewhatLiteral(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsSomewhatLiteral@CParse@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::AsmDecl(void)
//{
//    mangled_ppc("?AsmDecl@CParse@D3DXShader@@IAAPAVCNode@2@XZ");
//};

//UCodeToNativeDWORD
//{
//    mangled_ppc("UCodeToNativeDWORD");
//};

//UCodeGetUCodeHeader
//{
//    mangled_ppc("UCodeGetUCodeHeader");
//};

//UCodeMicrocodeIsValidVersion
//{
//    mangled_ppc("UCodeMicrocodeIsValidVersion");
//};

//UCodeGetShaderType
//{
//    mangled_ppc("UCodeGetShaderType");
//};

//public: D3DXShader::CParse::~CParse(void)
//{
//    mangled_ppc("??1CParse@D3DXShader@@QAA@XZ");
//};

//protected: unsigned int D3DXShader::CParse::ScoreFunctionDecl(class D3DXShader::CNodeFunction *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)
//{
//    mangled_ppc("?ScoreFunctionDecl@CParse@D3DXShader@@IAAIPAVCNodeFunction@2@PAVCNode@2@1K@Z");
//};

//protected: long D3DXShader::CParse::PopUsageType(void)
//{
//    mangled_ppc("?PopUsageType@CParse@D3DXShader@@IAAJXZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::Attribute(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?Attribute@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: long D3DXShader::CParse::Cast(struct D3DXShader::_D3DVALUE *, struct D3DXShader::_D3DVALUE *, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?Cast@CParse@D3DXShader@@IAAJPAU_D3DVALUE@2@0PAUD3DXTOKEN@2@@Z");
//};

//protected: long D3DXShader::CParse::CastToUint(unsigned int *, struct D3DXShader::_D3DVALUE *, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?CastToUint@CParse@D3DXShader@@IAAJPAIPAU_D3DVALUE@2@PAUD3DXTOKEN@2@@Z");
//};

//protected: long D3DXShader::CParse::CastToValue(struct D3DXShader::_D3DVALUE *, double, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?CastToValue@CParse@D3DXShader@@IAAJPAU_D3DVALUE@2@NPAUD3DXTOKEN@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::Stmt(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Stmt@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::BreakStmt(void)
//{
//    mangled_ppc("?BreakStmt@CParse@D3DXShader@@IAAPAVCNode@2@XZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ContinueStmt(void)
//{
//    mangled_ppc("?ContinueStmt@CParse@D3DXShader@@IAAPAVCNode@2@XZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::StopStmt(void)
//{
//    mangled_ppc("?StopStmt@CParse@D3DXShader@@IAAPAVCNode@2@XZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::DiscardStmt(void)
//{
//    mangled_ppc("?DiscardStmt@CParse@D3DXShader@@IAAPAVCNode@2@XZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CaseStmt(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CaseStmt@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: void D3DXShader::CParse::VError(char const *, char *)
//{
//    mangled_ppc("?VError@CParse@D3DXShader@@IAAXPBDPAD@Z");
//};

//protected: void D3DXShader::CParse::Error(struct D3DXShader::D3DXTOKEN *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?Error@CParse@D3DXShader@@IAAXPAUD3DXTOKEN@2@IPBDZZ");
//};

//protected: void D3DXShader::CParse::Warning(struct D3DXShader::D3DXTOKEN *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?Warning@CParse@D3DXShader@@IAAXPAUD3DXTOKEN@2@IPBDZZ");
//};

//protected: void D3DXShader::CParse::FatalError(struct D3DXShader::D3DXTOKEN *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?FatalError@CParse@D3DXShader@@IAAXPAUD3DXTOKEN@2@IPBDZZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::NonNull(class D3DXShader::CNode *)
//{
//    mangled_ppc("?NonNull@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: long D3DXShader::CParse::PushScope(enum D3DXShader::_D3DSCOPE_TYPE, char const *)
//{
//    mangled_ppc("?PushScope@CParse@D3DXShader@@IAAJW4_D3DSCOPE_TYPE@2@PBD@Z");
//};

//protected: long D3DXShader::CParse::PopScope(void)
//{
//    mangled_ppc("?PopScope@CParse@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CParse::AddDecl(class D3DXShader::CNode *, int)
//{
//    mangled_ppc("?AddDecl@CParse@D3DXShader@@IAAJPAVCNode@2@H@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CBufferDecl(enum D3DXShader::_D3DDECL_TYPE, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CBufferDecl@CParse@D3DXShader@@IAAPAVCNode@2@W4_D3DDECL_TYPE@2@PAV32@111@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::NamespaceDecl(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?NamespaceDecl@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@00@Z");
//};

//protected: long D3DXShader::CParse::PushCBuffer(class D3DXShader::CNode *)
//{
//    mangled_ppc("?PushCBuffer@CParse@D3DXShader@@IAAJPAVCNode@2@@Z");
//};

//protected: long D3DXShader::CParse::MakeTypeConst(class D3DXShader::CNode *, int)
//{
//    mangled_ppc("?MakeTypeConst@CParse@D3DXShader@@IAAJPAVCNode@2@H@Z");
//};

//protected: int D3DXShader::CParse::IsConst(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsConst@CParse@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: int D3DXShader::CParse::IsNumeric(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsNumeric@CParse@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: unsigned int D3DXShader::CParse::TypeSize(class D3DXShader::CNode *)
//{
//    mangled_ppc("?TypeSize@CParse@D3DXShader@@IAAIPAVCNode@2@@Z");
//};

//protected: unsigned int D3DXShader::CParse::PrintType(char *, unsigned int, class D3DXShader::CNode *)
//{
//    mangled_ppc("?PrintType@CParse@D3DXShader@@IAAIPADIPAVCNode@2@@Z");
//};

//protected: long D3DXShader::CParse::GetSubType(class D3DXShader::CNode *, unsigned int, class D3DXShader::CNodeType *)
//{
//    mangled_ppc("?GetSubType@CParse@D3DXShader@@IAAJPAVCNode@2@IPAVCNodeType@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ObjectExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ObjectExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::SetRObjectProduction(class D3DXShader::CNode **, enum D3DXShader::ESetCallType)
//{
//    mangled_ppc("?SetRObjectProduction@CParse@D3DXShader@@IAAPAVCNode@2@PAPAV32@W4ESetCallType@2@@Z");
//};

//protected: long D3DXShader::CParse::EvalIntrinsic(class D3DXShader::CNode *, struct D3DXShader::_D3DVALUE *)
//{
//    mangled_ppc("?EvalIntrinsic@CParse@D3DXShader@@IAAJPAVCNode@2@PAU_D3DVALUE@2@@Z");
//};

//protected: void D3DXShader::CParse::ComputeExprSize(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ComputeExprSize@CParse@D3DXShader@@IAAXPAVCNode@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CombineUintId(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CombineUintId@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CombineStrings(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CombineStrings@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//public: static void D3DXShader::CParse::Static_Error(void *, char const *, ...)
//{
//    mangled_ppc("?Static_Error@CParse@D3DXShader@@SAXPAXPBDZZ");
//};

//protected: void D3DXShader::CParse::Error(char const *, ...)
//{
//    mangled_ppc("?Error@CParse@D3DXShader@@IAAXPBDZZ");
//};

//protected: long D3DXShader::CParse::FindIntrinsic(struct D3DXShader::D3DINTRINSIC const *, unsigned int, class D3DXShader::CNodeType *, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode **, class D3DXShader::CNode **)
//{
//    mangled_ppc("?FindIntrinsic@CParse@D3DXShader@@IAAJPBUD3DINTRINSIC@2@IPAVCNodeType@2@PAUD3DXTOKEN@2@PAVCNode@2@PAPAV62@4@Z");
//};

//protected: unsigned int D3DXShader::CParse::ScoreCast(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ScoreCast@CParse@D3DXShader@@IAAIPAVCNode@2@0@Z");
//};

//protected: long D3DXShader::CParse::ApplyUsage(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ApplyUsage@CParse@D3DXShader@@IAAJPAVCNode@2@0@Z");
//};

//protected: long D3DXShader::CParse::CombineUsages(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CombineUsages@CParse@D3DXShader@@IAAJPAVCNode@2@0@Z");
//};

//protected: int D3DXShader::CParse::IsSupportedCast(class D3DXShader::CNode *, class D3DXShader::CNode *, int)
//{
//    mangled_ppc("?IsSupportedCast@CParse@D3DXShader@@IAAHPAVCNode@2@0H@Z");
//};

//protected: void D3DXShader::CParse::ErrorUnsupportedCast(struct D3DXShader::D3DXTOKEN *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, int)
//{
//    mangled_ppc("?ErrorUnsupportedCast@CParse@D3DXShader@@IAAXPAUD3DXTOKEN@2@PBDPAVCNode@2@2H@Z");
//};

//protected: long D3DXShader::CParse::BinaryType(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode **, class D3DXShader::CNode **, class D3DXShader::CNode **)
//{
//    mangled_ppc("?BinaryType@CParse@D3DXShader@@IAAJPAVCNode@2@0PAPAV32@11@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ScalarExpr(enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned int, double, struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?ScalarExpr@CParse@D3DXShader@@IAAPAVCNode@2@W4_D3DCOMPONENT_TYPE@2@INPAUD3DXTOKEN@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ScalarExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ScalarExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::StringExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?StringExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::NullExpr(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?NullExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAUD3DXTOKEN@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::InitExpr(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?InitExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::OffsetExpr(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?OffsetExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::AsmExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?AsmExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::StateObjectExpr(class D3DXShader::CNode *, enum D3DXShader::_D3DCOMPONENT_TYPE)
//{
//    mangled_ppc("?StateObjectExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@W4_D3DCOMPONENT_TYPE@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::SamplerExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?SamplerExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::StateblockExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?StateblockExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: long D3DXShader::CParse::Eval(class D3DXShader::CNode *, struct D3DXShader::_D3DVALUE *)
//{
//    mangled_ppc("?Eval@CParse@D3DXShader@@IAAJPAVCNode@2@PAU_D3DVALUE@2@@Z");
//};

//protected: unsigned int D3DXShader::CParse::ScoreFunctionCall(class D3DXShader::CNodeFunction *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)
//{
//    mangled_ppc("?ScoreFunctionCall@CParse@D3DXShader@@IAAIPAVCNodeFunction@2@PAVCNode@2@1K@Z");
//};

//protected: long D3DXShader::CParse::PushUsageType(class D3DXShader::CNode *)
//{
//    mangled_ppc("?PushUsageType@CParse@D3DXShader@@IAAJPAVCNode@2@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::Eval(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Eval@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: long D3DXShader::CParse::EvalUint(class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?EvalUint@CParse@D3DXShader@@IAAJPAVCNode@2@PAI@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CaseCondExpr(class D3DXShader::CNode *)
//{
//    mangled_ppc("?CaseCondExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::AttributeParam(class D3DXShader::CNode *)
//{
//    mangled_ppc("?AttributeParam@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: long D3DXShader::CParse::FindCompatibleDecl(class D3DXShader::CNode *, enum D3DXShader::_D3DDECL_TYPE, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNodeScope *, unsigned long, unsigned int *, unsigned int *, class D3DXShader::CNodeDecl **)
//{
//    mangled_ppc("?FindCompatibleDecl@CParse@D3DXShader@@IAAJPAVCNode@2@W4_D3DDECL_TYPE@2@PAUD3DXTOKEN@2@00PAVCNodeScope@2@KPAI4PAPAVCNodeDecl@2@@Z");
//};

//protected: long D3DXShader::CParse::FindDeclsNamespace(class D3DXShader::CNode *, enum D3DXShader::_D3DDECL_TYPE, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long, char const *, unsigned int *, unsigned int *, class D3DXShader::CNodeDecl **)
//{
//    mangled_ppc("?FindDeclsNamespace@CParse@D3DXShader@@IAAJPAVCNode@2@W4_D3DDECL_TYPE@2@PAUD3DXTOKEN@2@00KPBDPAI4PAPAVCNodeDecl@2@@Z");
//};

//protected: long D3DXShader::CParse::FindDecl(enum D3DXShader::_D3DDECL_TYPE, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNodeScope *, unsigned long, class D3DXShader::CNode **, class D3DXShader::CNode **)
//{
//    mangled_ppc("?FindDecl@CParse@D3DXShader@@IAAJW4_D3DDECL_TYPE@2@PAUD3DXTOKEN@2@PAVCNode@2@2PAVCNodeScope@2@KPAPAV52@4@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::TypeDecl(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?TypeDecl@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::StructDecl(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?StructDecl@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::VectorType(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?VectorType@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::MatrixType(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?MatrixType@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@00@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::TypeDim(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?TypeDim@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::VariableExpr(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?VariableExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CastExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, int, int)
//{
//    mangled_ppc("?CastExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0HH@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ConditionalExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ConditionalExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@00@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ArrayExpr(class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ArrayExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::Expr(enum D3DXShader::_D3DEXPR_OP, class D3DXShader::CNode *, class D3DXShader::CNode *, int, int)
//{
//    mangled_ppc("?Expr@CParse@D3DXShader@@IAAPAVCNode@2@W4_D3DEXPR_OP@2@PAV32@1HH@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ReturnStmt(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ReturnStmt@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::IfStmt(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?IfStmt@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@000@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::SwitchStmt(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?SwitchStmt@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@00@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::ForStmt(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?ForStmt@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0000@Z");
//};

//protected: long D3DXShader::CParse::AsmFindDeclCallback(struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **)
//{
//    mangled_ppc("?AsmFindDeclCallback@CParse@D3DXShader@@IAAJPAUD3DXTOKEN@2@KPAPAVCNode@2@@Z");
//};

//protected: int D3DXShader::CParse::Token(void)
//{
//    mangled_ppc("?Token@CParse@D3DXShader@@IAAHXZ");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::VariableDecl(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?VariableDecl@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@000@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::FunctionDecl(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?FunctionDecl@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@000@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::FunctionExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, int)
//{
//    mangled_ppc("?FunctionExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@0H@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::MethodExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?MethodExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@00@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::CompileExpr(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int, int)
//{
//    mangled_ppc("?CompileExpr@CParse@D3DXShader@@IAAPAVCNode@2@PAV32@00IH@Z");
//};

//protected: static long D3DXShader::CParse::Static_AsmFindDeclCallback(void *, struct D3DXShader::D3DXTOKEN *, unsigned long, class D3DXShader::CNode **)
//{
//    mangled_ppc("?Static_AsmFindDeclCallback@CParse@D3DXShader@@KAJPAXPAUD3DXTOKEN@2@KPAPAVCNode@2@@Z");
//};

//public: static int D3DXShader::CParse::Static_Token(void *)
//{
//    mangled_ppc("?Static_Token@CParse@D3DXShader@@SAHPAX@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CParse::AsmBlock(int)
//{
//    mangled_ppc("?AsmBlock@CParse@D3DXShader@@IAAPAVCNode@2@H@Z");
//};

//protected: void D3DXShader::CParse::Production(unsigned int, unsigned int)
//{
//    mangled_ppc("?Production@CParse@D3DXShader@@IAAXII@Z");
//};

//public: static void D3DXShader::CParse::Static_Production(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("?Static_Production@CParse@D3DXShader@@SAXPAXII@Z");
//};

//public: int D3DXShader::CParseYaccStruct::d3dxshader_parse(void)
//{
//    mangled_ppc("?d3dxshader_parse@CParseYaccStruct@D3DXShader@@QAAHXZ");
//};

//public: long D3DXShader::CParse::ParseEx(class D3DXShader::CPreProcessor *, unsigned long, class D3DXShader::CNode **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?ParseEx@CParse@D3DXShader@@QAAJPAVCPreProcessor@2@KPAPAVCNode@2@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//public: long D3DXShader::CParse::Parse(class D3DXShader::CPreProcessor *, unsigned long, class D3DXShader::CNode **)
//{
//    mangled_ppc("?Parse@CParse@D3DXShader@@QAAJPAVCPreProcessor@2@KPAPAVCNode@2@@Z");
//};

