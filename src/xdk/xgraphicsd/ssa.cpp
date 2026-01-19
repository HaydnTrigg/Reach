/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int XGRAPHICS::Pair(int, int);
// int XGRAPHICS::SrcOfPair(int);
// int XGRAPHICS::DestOfPair(int);
// int XGRAPHICS::CmpExpr(void *, void *);
// public: static void XGRAPHICS::Vector<int>::operator delete(void *);
// public: void XGRAPHICS::Vector<int>::remove(unsigned int);
// public: static void * XGRAPHICS::Vector<bool>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Vector<bool>::operator delete(void *);
// public: static void * XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: struct XGRAPHICS::CurrentValue * XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::Lookup(struct XGRAPHICS::CurrentValue *);
// public: void XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::Insert(struct XGRAPHICS::CurrentValue *);
// public: void XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::remove(unsigned int);
// protected: void XGRAPHICS::InternalVector::Clear(void);
// public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::DomFrontier(void) const;
// public: int XGRAPHICS::Block::GetId(void) const;
// bool R400Tables::R400_Commutes(enum R400Tables::Op);
// public: int XGRAPHICS::Compiler::GetNextGlobalNumber(void);
// public: int XGRAPHICS::Compiler::GetNextValueNumber(void);
// public: int const XGRAPHICS::SwizzleOrMaskInfo::operator[](int) const;
// public: void XGRAPHICS::SwizzleOrMaskInfo::SetU32All(unsigned int);
// public: int const XGRAPHICS::IRInst::GetId(void) const;
// public: int XGRAPHICS::IRInst::GetRelAddrOffset(int) const;
// public: int XGRAPHICS::IRInst::GetVisited(void) const;
// public: void XGRAPHICS::IRPhiNode::SetNumInputs(int);
// public: void XGRAPHICS::IRInst::SetDefIsPhysical(bool);
// public: void XGRAPHICS::IRInst::SetVReg(int, class XGRAPHICS::VRegInfo *);
// public: void XGRAPHICS::IRInst::SetOperand(int, int);
// public: void XGRAPHICS::IRInst::SetRelAddrOffset(int, int);
// public: void XGRAPHICS::IRInst::SetValue(int, int *);
// public: bool const XGRAPHICS::IRInst::OpIsCommutative(void) const;
// public: bool const XGRAPHICS::IRPhiNode::AllParmsSet(void) const;
// public: static void * XGRAPHICS::CurrentValue::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::CurrentValue::operator delete(void *);
// public: XGRAPHICS::CurrentValue::CurrentValue(class XGRAPHICS::IRInst *, class XGRAPHICS::Compiler *);
// public: int XGRAPHICS::CurrentValue::GetValue(int) const;
// public: bool XGRAPHICS::CurrentValue::HasValues(void) const;
// public: struct XGRAPHICS::CurrentValue * XGRAPHICS::DefStack::Def(void);
// public: bool XGRAPHICS::DefStack::IsEmpty(void);
// public: bool XGRAPHICS::VRegInfo::IsPhysical(void) const;
// public: bool XGRAPHICS::VRegInfo::DefStackIsEmpty(void) const;
// public: struct XGRAPHICS::CurrentValue * XGRAPHICS::VRegInfo::GetTopValue(void) const;
// public: int XGRAPHICS::TempValue::GetTempId(void) const;
// public: static void * XGRAPHICS::Vector<int>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<int>::Vector<int>(class XGRAPHICS::Arena const *);
// public: bool XGRAPHICS::IRInst::ParmCmp(void) const;
// int XGRAPHICS::HashExpr(void *);
// public: void XGRAPHICS::CurrentValue::MakeRHS(void);
// struct XGRAPHICS::CurrentValue * XGRAPHICS::VNLookupInst(class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *, struct XGRAPHICS::CurrentValue *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::CurrentValue::MakeValue(void);
// void XGRAPHICS::VNInsert(class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *, struct XGRAPHICS::CurrentValue *);
// public: bool XGRAPHICS::IRInst::SrcIsFromConstMov(class XGRAPHICS::IRInst *, int) const;
// void XGRAPHICS::SwitchOperands(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst **);
// public: XGRAPHICS::Vector<int>::~Vector<int>(void);
// public: int & XGRAPHICS::Vector<int>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<int>::Size(void) const;
// public: void XGRAPHICS::Vector<int>::push_back(int const &);
// public: void XGRAPHICS::Vector<int>::Clear(void);
// public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Clear(void);
// public: XGRAPHICS::Vector<bool>::Vector<bool>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<bool>::~Vector<bool>(void);
// public: bool & XGRAPHICS::Vector<bool>::operator[](unsigned int);
// public: void XGRAPHICS::Vector<bool>::Clear(void);
// public: XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::HashTable<struct XGRAPHICS::CurrentValue *>(class XGRAPHICS::Arena const *, int (*)(void *, void *), int (*)(void *), int);
// public: XGRAPHICS::stack<class XGRAPHICS::Block *>::~stack<class XGRAPHICS::Block *>(void);
// public: XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::~Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>(void);
// public: class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *& XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::operator[](unsigned int);
// public: void XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::push_back(class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *const &);
// int XGRAPHICS::RecordVisitedInst(int, class XGRAPHICS::IRInst *, class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> *);
// class XGRAPHICS::IRInst * XGRAPHICS::MakeCopy(class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> *, int, int, class XGRAPHICS::Block *, class XGRAPHICS::Compiler *);
// private: void XGRAPHICS::CFG::ScheduleCopies(class XGRAPHICS::Block *, class XGRAPHICS::Vector<bool> *, class XGRAPHICS::Vector<int> *, class XGRAPHICS::Vector<int> *, class XGRAPHICS::Vector<int> *, class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> *, int &);
// public: void * XGRAPHICS::Vector<int>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::Vector<bool>::`scalar deleting destructor'(unsigned int);
// private: bool XGRAPHICS::CFG::EdgesAreSplit(void);
// private: void XGRAPHICS::CFG::PlacePhiNodes(void);
// public: void XGRAPHICS::CFG::ReplacePhiNodesWithCopies(void);
// private: void XGRAPHICS::CFG::Rename(void);
// public: void XGRAPHICS::CFG::BuildSSA(void);

//int XGRAPHICS::Pair(int, int)
//{
//    mangled_ppc("?Pair@XGRAPHICS@@YAHHH@Z");
//};

//int XGRAPHICS::SrcOfPair(int)
//{
//    mangled_ppc("?SrcOfPair@XGRAPHICS@@YAHH@Z");
//};

//int XGRAPHICS::DestOfPair(int)
//{
//    mangled_ppc("?DestOfPair@XGRAPHICS@@YAHH@Z");
//};

//int XGRAPHICS::CmpExpr(void *, void *)
//{
//    mangled_ppc("?CmpExpr@XGRAPHICS@@YAHPAX0@Z");
//};

//public: static void XGRAPHICS::Vector<int>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@H@XGRAPHICS@@SAXPAX@Z");
//};

//public: void XGRAPHICS::Vector<int>::remove(unsigned int)
//{
//    mangled_ppc("?remove@?$Vector@H@XGRAPHICS@@QAAXI@Z");
//};

//public: static void * XGRAPHICS::Vector<bool>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@_N@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Vector<bool>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@_N@XGRAPHICS@@SAXPAX@Z");
//};

//public: static void * XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: struct XGRAPHICS::CurrentValue * XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::Lookup(struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?Lookup@?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@QAAPAUCurrentValue@2@PAU32@@Z");
//};

//public: void XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::Insert(struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?Insert@?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@QAAXPAUCurrentValue@2@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::remove(unsigned int)
//{
//    mangled_ppc("?remove@?$Vector@PAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@@XGRAPHICS@@QAAXI@Z");
//};

//protected: void XGRAPHICS::InternalVector::Clear(void)
//{
//    mangled_ppc("?Clear@InternalVector@XGRAPHICS@@IAAXXZ");
//};

//public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::DomFrontier(void) const
//{
//    mangled_ppc("?DomFrontier@Block@XGRAPHICS@@QBAPBV?$Vector@PAVBlock@XGRAPHICS@@@2@XZ");
//};

//public: int XGRAPHICS::Block::GetId(void) const
//{
//    mangled_ppc("?GetId@Block@XGRAPHICS@@QBAHXZ");
//};

//bool R400Tables::R400_Commutes(enum R400Tables::Op)
//{
//    mangled_ppc("?R400_Commutes@R400Tables@@YA_NW4Op@1@@Z");
//};

//public: int XGRAPHICS::Compiler::GetNextGlobalNumber(void)
//{
//    mangled_ppc("?GetNextGlobalNumber@Compiler@XGRAPHICS@@QAAHXZ");
//};

//public: int XGRAPHICS::Compiler::GetNextValueNumber(void)
//{
//    mangled_ppc("?GetNextValueNumber@Compiler@XGRAPHICS@@QAAHXZ");
//};

//public: int const XGRAPHICS::SwizzleOrMaskInfo::operator[](int) const
//{
//    mangled_ppc("??ASwizzleOrMaskInfo@XGRAPHICS@@QBA?BHH@Z");
//};

//public: void XGRAPHICS::SwizzleOrMaskInfo::SetU32All(unsigned int)
//{
//    mangled_ppc("?SetU32All@SwizzleOrMaskInfo@XGRAPHICS@@QAAXI@Z");
//};

//public: int const XGRAPHICS::IRInst::GetId(void) const
//{
//    mangled_ppc("?GetId@IRInst@XGRAPHICS@@QBA?BHXZ");
//};

//public: int XGRAPHICS::IRInst::GetRelAddrOffset(int) const
//{
//    mangled_ppc("?GetRelAddrOffset@IRInst@XGRAPHICS@@QBAHH@Z");
//};

//public: int XGRAPHICS::IRInst::GetVisited(void) const
//{
//    mangled_ppc("?GetVisited@IRInst@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::IRPhiNode::SetNumInputs(int)
//{
//    mangled_ppc("?SetNumInputs@IRPhiNode@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::IRInst::SetDefIsPhysical(bool)
//{
//    mangled_ppc("?SetDefIsPhysical@IRInst@XGRAPHICS@@QAAX_N@Z");
//};

//public: void XGRAPHICS::IRInst::SetVReg(int, class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?SetVReg@IRInst@XGRAPHICS@@QAAXHPAVVRegInfo@2@@Z");
//};

//public: void XGRAPHICS::IRInst::SetOperand(int, int)
//{
//    mangled_ppc("?SetOperand@IRInst@XGRAPHICS@@QAAXHH@Z");
//};

//public: void XGRAPHICS::IRInst::SetRelAddrOffset(int, int)
//{
//    mangled_ppc("?SetRelAddrOffset@IRInst@XGRAPHICS@@QAAXHH@Z");
//};

//public: void XGRAPHICS::IRInst::SetValue(int, int *)
//{
//    mangled_ppc("?SetValue@IRInst@XGRAPHICS@@QAAXHPAH@Z");
//};

//public: bool const XGRAPHICS::IRInst::OpIsCommutative(void) const
//{
//    mangled_ppc("?OpIsCommutative@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool const XGRAPHICS::IRPhiNode::AllParmsSet(void) const
//{
//    mangled_ppc("?AllParmsSet@IRPhiNode@XGRAPHICS@@QBA?B_NXZ");
//};

//public: static void * XGRAPHICS::CurrentValue::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2CurrentValue@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::CurrentValue::operator delete(void *)
//{
//    mangled_ppc("??3CurrentValue@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::CurrentValue::CurrentValue(class XGRAPHICS::IRInst *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0CurrentValue@XGRAPHICS@@QAA@PAVIRInst@1@PAVCompiler@1@@Z");
//};

//public: int XGRAPHICS::CurrentValue::GetValue(int) const
//{
//    mangled_ppc("?GetValue@CurrentValue@XGRAPHICS@@QBAHH@Z");
//};

//public: bool XGRAPHICS::CurrentValue::HasValues(void) const
//{
//    mangled_ppc("?HasValues@CurrentValue@XGRAPHICS@@QBA_NXZ");
//};

//public: struct XGRAPHICS::CurrentValue * XGRAPHICS::DefStack::Def(void)
//{
//    mangled_ppc("?Def@DefStack@XGRAPHICS@@QAAPAUCurrentValue@2@XZ");
//};

//public: bool XGRAPHICS::DefStack::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@DefStack@XGRAPHICS@@QAA_NXZ");
//};

//public: bool XGRAPHICS::VRegInfo::IsPhysical(void) const
//{
//    mangled_ppc("?IsPhysical@VRegInfo@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::VRegInfo::DefStackIsEmpty(void) const
//{
//    mangled_ppc("?DefStackIsEmpty@VRegInfo@XGRAPHICS@@QBA_NXZ");
//};

//public: struct XGRAPHICS::CurrentValue * XGRAPHICS::VRegInfo::GetTopValue(void) const
//{
//    mangled_ppc("?GetTopValue@VRegInfo@XGRAPHICS@@QBAPAUCurrentValue@2@XZ");
//};

//public: int XGRAPHICS::TempValue::GetTempId(void) const
//{
//    mangled_ppc("?GetTempId@TempValue@XGRAPHICS@@QBAHXZ");
//};

//public: static void * XGRAPHICS::Vector<int>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@H@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<int>::Vector<int>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@H@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: bool XGRAPHICS::IRInst::ParmCmp(void) const
//{
//    mangled_ppc("?ParmCmp@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//int XGRAPHICS::HashExpr(void *)
//{
//    mangled_ppc("?HashExpr@XGRAPHICS@@YAHPAX@Z");
//};

//public: void XGRAPHICS::CurrentValue::MakeRHS(void)
//{
//    mangled_ppc("?MakeRHS@CurrentValue@XGRAPHICS@@QAAXXZ");
//};

//struct XGRAPHICS::CurrentValue * XGRAPHICS::VNLookupInst(class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *, struct XGRAPHICS::CurrentValue *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?VNLookupInst@XGRAPHICS@@YAPAUCurrentValue@1@PAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@1@PAU21@PAVCompiler@1@@Z");
//};

//public: void XGRAPHICS::CurrentValue::MakeValue(void)
//{
//    mangled_ppc("?MakeValue@CurrentValue@XGRAPHICS@@QAAXXZ");
//};

//void XGRAPHICS::VNInsert(class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *, struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?VNInsert@XGRAPHICS@@YAXPAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@1@PAUCurrentValue@1@@Z");
//};

//public: bool XGRAPHICS::IRInst::SrcIsFromConstMov(class XGRAPHICS::IRInst *, int) const
//{
//    mangled_ppc("?SrcIsFromConstMov@IRInst@XGRAPHICS@@QBA_NPAV12@H@Z");
//};

//void XGRAPHICS::SwitchOperands(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst **)
//{
//    mangled_ppc("?SwitchOperands@XGRAPHICS@@YAXPAVIRInst@1@PAPAV21@@Z");
//};

//public: XGRAPHICS::Vector<int>::~Vector<int>(void)
//{
//    mangled_ppc("??1?$Vector@H@XGRAPHICS@@QAA@XZ");
//};

//public: int & XGRAPHICS::Vector<int>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@H@XGRAPHICS@@QAAAAHI@Z");
//};

//public: unsigned int XGRAPHICS::Vector<int>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@H@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<int>::push_back(int const &)
//{
//    mangled_ppc("?push_back@?$Vector@H@XGRAPHICS@@QAAXABH@Z");
//};

//public: void XGRAPHICS::Vector<int>::Clear(void)
//{
//    mangled_ppc("?Clear@?$Vector@H@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Clear(void)
//{
//    mangled_ppc("?Clear@?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXXZ");
//};

//public: XGRAPHICS::Vector<bool>::Vector<bool>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@_N@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<bool>::~Vector<bool>(void)
//{
//    mangled_ppc("??1?$Vector@_N@XGRAPHICS@@QAA@XZ");
//};

//public: bool & XGRAPHICS::Vector<bool>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@_N@XGRAPHICS@@QAAAA_NI@Z");
//};

//public: void XGRAPHICS::Vector<bool>::Clear(void)
//{
//    mangled_ppc("?Clear@?$Vector@_N@XGRAPHICS@@QAAXXZ");
//};

//public: XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *>::HashTable<struct XGRAPHICS::CurrentValue *>(class XGRAPHICS::Arena const *, int (*)(void *, void *), int (*)(void *), int)
//{
//    mangled_ppc("??0?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@P6AHPAX1@ZP6AH1@ZH@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::Block *>::~stack<class XGRAPHICS::Block *>(void)
//{
//    mangled_ppc("??1?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::~Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>(void)
//{
//    mangled_ppc("??1?$Vector@PAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *& XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@@XGRAPHICS@@QAAAAPAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@1@I@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *>::push_back(class XGRAPHICS::HashTable<struct XGRAPHICS::CurrentValue *> *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@XGRAPHICS@@@XGRAPHICS@@QAAXABQAV?$HashTable@PAUCurrentValue@XGRAPHICS@@@2@@Z");
//};

//int XGRAPHICS::RecordVisitedInst(int, class XGRAPHICS::IRInst *, class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> *)
//{
//    mangled_ppc("?RecordVisitedInst@XGRAPHICS@@YAHHPAVIRInst@1@PAV?$Vector@PAVIRInst@XGRAPHICS@@@1@@Z");
//};

//class XGRAPHICS::IRInst * XGRAPHICS::MakeCopy(class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> *, int, int, class XGRAPHICS::Block *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeCopy@XGRAPHICS@@YAPAVIRInst@1@PAV?$Vector@PAVIRInst@XGRAPHICS@@@1@HHPAVBlock@1@PAVCompiler@1@@Z");
//};

//private: void XGRAPHICS::CFG::ScheduleCopies(class XGRAPHICS::Block *, class XGRAPHICS::Vector<bool> *, class XGRAPHICS::Vector<int> *, class XGRAPHICS::Vector<int> *, class XGRAPHICS::Vector<int> *, class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> *, int &)
//{
//    mangled_ppc("?ScheduleCopies@CFG@XGRAPHICS@@AAAXPAVBlock@2@PAV?$Vector@_N@2@PAV?$Vector@H@2@22PAV?$Vector@PAVIRInst@XGRAPHICS@@@2@AAH@Z");
//};

//public: void * XGRAPHICS::Vector<int>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@H@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::Vector<bool>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@_N@XGRAPHICS@@QAAPAXI@Z");
//};

//private: bool XGRAPHICS::CFG::EdgesAreSplit(void)
//{
//    mangled_ppc("?EdgesAreSplit@CFG@XGRAPHICS@@AAA_NXZ");
//};

//private: void XGRAPHICS::CFG::PlacePhiNodes(void)
//{
//    mangled_ppc("?PlacePhiNodes@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::ReplacePhiNodesWithCopies(void)
//{
//    mangled_ppc("?ReplacePhiNodesWithCopies@CFG@XGRAPHICS@@QAAXXZ");
//};

//private: void XGRAPHICS::CFG::Rename(void)
//{
//    mangled_ppc("?Rename@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::BuildSSA(void)
//{
//    mangled_ppc("?BuildSSA@CFG@XGRAPHICS@@QAAXXZ");
//};

