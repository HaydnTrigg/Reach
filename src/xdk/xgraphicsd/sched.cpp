/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: class XGRAPHICS::SchedNode * XGRAPHICS::SchedNode::Next(void);
// public: XGRAPHICS::R400ThreadModel::R400ThreadModel(class XGRAPHICS::Arena const *);
// public: void XGRAPHICS::R400ThreadModel::Reset(void);
// public: int XGRAPHICS::R400ThreadModel::LatestYieldCycle(void);
// public: bool XGRAPHICS::R400ThreadModel::HasUnyieldFetch(void);
// private: static int XGRAPHICS::SchedNode::ComparePriority(class XGRAPHICS::SchedNode *, class XGRAPHICS::SchedNode *);
// public: bool XGRAPHICS::R400ThreadModel::Check(class XGRAPHICS::IRInst const *);
// public: void XGRAPHICS::R400ThreadModel::AdvanceCycle(struct XGRAPHICS::ParallelGroup const *);
// public: void XGRAPHICS::R400ThreadModel::ReactivateMova(class XGRAPHICS::SchedNode *);
// public: bool XGRAPHICS::bitset::subsetOf(class XGRAPHICS::bitset const &) const;
// public: int XGRAPHICS::bitset::first_unset(void) const;
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator|=(class XGRAPHICS::bitset const &);
// public: static void * XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::operator delete(void *);
// public: XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::Vector<struct XGRAPHICS::DepEdge *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::~Vector<struct XGRAPHICS::DepEdge *>(void);
// public: struct XGRAPHICS::DepEdge *& XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::Size(void) const;
// public: void XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::push_back(struct XGRAPHICS::DepEdge *const &);
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::operator delete(void *);
// public: XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::Vector<class XGRAPHICS::SchedNode *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::~Vector<class XGRAPHICS::SchedNode *>(void);
// public: class XGRAPHICS::SchedNode *& XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::Size(void) const;
// public: void XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::push_back(class XGRAPHICS::SchedNode *const &);
// public: void XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::Clear(void);
// public: static void XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::operator delete(void *);
// public: XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::~HashTable<class XGRAPHICS::IRInst *>(void);
// public: XGRAPHICS::DListNode::DListNode(void);
// public: static int XGRAPHICS::IRInst::GetInstCount(class XGRAPHICS::Compiler *);
// private: int const XGRAPHICS::IRMovBase::Getcomponent(void) const;
// public: bool const XGRAPHICS::IRInst::DefIsGlobal(void) const;
// public: void XGRAPHICS::IRInst::SetDefIsGlobal(bool);
// public: bool const XGRAPHICS::IRInst::HasVectorEquiv(void) const;
// public: static void * XGRAPHICS::ResourceModel::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::ResourceModel::operator delete(void *);
// public: virtual void XGRAPHICS::ResourceModel::Reset(void);
// public: virtual void XGRAPHICS::R400SchedModel::Reset(void);
// public: int XGRAPHICS::R400SchedModel::MaxResourceHeight(void);
// public: XGRAPHICS::Scheduler::Scheduler(void);
// public: XGRAPHICS::Scheduler::~Scheduler(void);
// public: static void * XGRAPHICS::DepEdge::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::DepEdge::operator delete(void *);
// private: XGRAPHICS::SchedNode::SchedNode(class XGRAPHICS::IRInst *const, int);
// public: virtual XGRAPHICS::SchedNode::~SchedNode(void);
// public: static void * XGRAPHICS::ParallelGroup::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::ParallelGroup::operator delete(void *);
// public: XGRAPHICS::ParallelGroup::ParallelGroup(void);
// public: static void * XGRAPHICS::R400ThreadModel::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::R400ThreadModel::operator delete(void *);
// private: static int XGRAPHICS::SchedNode::CompareDestination(void *, void *);
// private: static int XGRAPHICS::SchedNode::HashByDestination(void *);
// public: void XGRAPHICS::ParallelGroup::AssignSlot(class XGRAPHICS::SchedNode *);
// public: void XGRAPHICS::R400ThreadModel::Apply(class XGRAPHICS::SchedNode *);
// public: void * XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::`scalar deleting destructor'(unsigned int);
// public: XGRAPHICS::ParallelGroup::~ParallelGroup(void);
// private: void XGRAPHICS::Scheduler::Preprocess(void);
// private: class XGRAPHICS::SchedNode * XGRAPHICS::Scheduler::FindOrCreateInputDefNode(class XGRAPHICS::IRInst *);
// public: void * XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::`scalar deleting destructor'(unsigned int);
// private: void XGRAPHICS::Scheduler::ComputeNumbers(void);
// public: void * XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::`scalar deleting destructor'(unsigned int);
// private: void XGRAPHICS::Scheduler::AddToReadyList(class XGRAPHICS::SchedNode *);
// private: bool XGRAPHICS::Scheduler::IsInstReady(class XGRAPHICS::SchedNode *);
// private: void XGRAPHICS::Scheduler::AddToHoldOrReadyList(class XGRAPHICS::SchedNode *);
// private: void XGRAPHICS::Scheduler::EnableDepSuccessors(class XGRAPHICS::SchedNode *);
// private: class XGRAPHICS::SchedNode * XGRAPHICS::Scheduler::SelectReadyPartialWrite(bool &);
// private: void XGRAPHICS::Scheduler::CycleForward(void);
// private: void XGRAPHICS::Scheduler::AllocateLocalRegister(class XGRAPHICS::SchedNode *);
// public: int XGRAPHICS::IRMovBase::GetComponent(void);
// public: bool XGRAPHICS::IRInst::DefIsLocalTemp(void) const;
// public: XGRAPHICS::ResourceModel::ResourceModel(void);
// public: virtual void XGRAPHICS::ResourceModel::AdvanceCycle(void);
// public: virtual bool XGRAPHICS::ResourceModel::FullState(void);
// public: virtual bool XGRAPHICS::ResourceModel::ZeroState(void);
// public: XGRAPHICS::R400SlotModel::R400SlotModel(void);
// public: virtual void XGRAPHICS::R400SlotModel::AdvanceCycle(void);
// public: virtual bool XGRAPHICS::R400SlotModel::FullState(void);
// public: virtual bool XGRAPHICS::R400SlotModel::HasRoomForVector(void);
// public: virtual bool XGRAPHICS::R400SlotModel::HasRoomForScalar(void);
// public: XGRAPHICS::R400ConstantModel::R400ConstantModel(void);
// public: virtual bool XGRAPHICS::R400ConstantModel::HasRoomForVector(void);
// public: virtual bool XGRAPHICS::R400ConstantModel::HasRoomForScalar(void);
// public: XGRAPHICS::R400SchedModel::R400SchedModel(class XGRAPHICS::Arena const *);
// public: virtual bool XGRAPHICS::R400SchedModel::Check(class XGRAPHICS::IRInst const *);
// public: virtual void XGRAPHICS::R400SchedModel::Apply(class XGRAPHICS::IRInst const *);
// public: virtual void XGRAPHICS::R400SchedModel::AdvanceCycle(void);
// public: virtual bool XGRAPHICS::R400SchedModel::FullState(void);
// public: virtual bool XGRAPHICS::R400SchedModel::ZeroState(void);
// public: virtual bool XGRAPHICS::R400SchedModel::HasRoomForVector(void);
// public: virtual bool XGRAPHICS::R400SchedModel::HasRoomForScalar(void);
// merged_83E4A340;
// bool XGRAPHICS::EquivalentMovBase(class XGRAPHICS::IRInst const *, class XGRAPHICS::IRInst const *);
// public: void * XGRAPHICS::ParallelGroup::`scalar deleting destructor'(unsigned int);
// private: void XGRAPHICS::Scheduler::MarkGlobalDefs(void);
// private: void XGRAPHICS::Scheduler::BuildPhysicalLiveness(void);
// private: void XGRAPHICS::Scheduler::BuildGraph(class XGRAPHICS::Block *);
// private: void XGRAPHICS::Scheduler::CleanGraph(void);
// private: void XGRAPHICS::Scheduler::ScheduleInst(class XGRAPHICS::SchedNode *);
// private: void XGRAPHICS::Scheduler::CollapseExtraMova(class XGRAPHICS::SchedNode *);
// private: class XGRAPHICS::SchedNode * XGRAPHICS::Scheduler::SelectFromReadyList(void);
// private: void XGRAPHICS::Scheduler::ScheduleParallelGroup(void);
// private: void XGRAPHICS::Scheduler::ScheduleBlock(class XGRAPHICS::Block *);
// public: void XGRAPHICS::Scheduler::Run(class XGRAPHICS::CFG *);
// public: void XGRAPHICS::CFG::ScheduleInstructions(void);

//public: class XGRAPHICS::SchedNode * XGRAPHICS::SchedNode::Next(void)
//{
//    mangled_ppc("?Next@SchedNode@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: XGRAPHICS::R400ThreadModel::R400ThreadModel(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0R400ThreadModel@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: void XGRAPHICS::R400ThreadModel::Reset(void)
//{
//    mangled_ppc("?Reset@R400ThreadModel@XGRAPHICS@@QAAXXZ");
//};

//public: int XGRAPHICS::R400ThreadModel::LatestYieldCycle(void)
//{
//    mangled_ppc("?LatestYieldCycle@R400ThreadModel@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::R400ThreadModel::HasUnyieldFetch(void)
//{
//    mangled_ppc("?HasUnyieldFetch@R400ThreadModel@XGRAPHICS@@QAA_NXZ");
//};

//private: static int XGRAPHICS::SchedNode::ComparePriority(class XGRAPHICS::SchedNode *, class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?ComparePriority@SchedNode@XGRAPHICS@@CAHPAV12@0@Z");
//};

//public: bool XGRAPHICS::R400ThreadModel::Check(class XGRAPHICS::IRInst const *)
//{
//    mangled_ppc("?Check@R400ThreadModel@XGRAPHICS@@QAA_NPBVIRInst@2@@Z");
//};

//public: void XGRAPHICS::R400ThreadModel::AdvanceCycle(struct XGRAPHICS::ParallelGroup const *)
//{
//    mangled_ppc("?AdvanceCycle@R400ThreadModel@XGRAPHICS@@QAAXPBUParallelGroup@2@@Z");
//};

//public: void XGRAPHICS::R400ThreadModel::ReactivateMova(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?ReactivateMova@R400ThreadModel@XGRAPHICS@@QAAXPAVSchedNode@2@@Z");
//};

//public: bool XGRAPHICS::bitset::subsetOf(class XGRAPHICS::bitset const &) const
//{
//    mangled_ppc("?subsetOf@bitset@XGRAPHICS@@QBA_NABV12@@Z");
//};

//public: int XGRAPHICS::bitset::first_unset(void) const
//{
//    mangled_ppc("?first_unset@bitset@XGRAPHICS@@QBAHXZ");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator|=(class XGRAPHICS::bitset const &)
//{
//    mangled_ppc("??_5bitset@XGRAPHICS@@QAAAAV01@ABV01@@Z");
//};

//public: static void * XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::Vector<struct XGRAPHICS::DepEdge *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::~Vector<struct XGRAPHICS::DepEdge *>(void)
//{
//    mangled_ppc("??1?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: struct XGRAPHICS::DepEdge *& XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@QAAAAPAUDepEdge@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::push_back(struct XGRAPHICS::DepEdge *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@QAAXABQAUDepEdge@2@@Z");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::Vector<class XGRAPHICS::SchedNode *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::~Vector<class XGRAPHICS::SchedNode *>(void)
//{
//    mangled_ppc("??1?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::SchedNode *& XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVSchedNode@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::push_back(class XGRAPHICS::SchedNode *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVSchedNode@2@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::Clear(void)
//{
//    mangled_ppc("?Clear@?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QAAXXZ");
//};

//public: static void XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::operator delete(void *)
//{
//    mangled_ppc("??3?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::~HashTable<class XGRAPHICS::IRInst *>(void)
//{
//    mangled_ppc("??1?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::DListNode::DListNode(void)
//{
//    mangled_ppc("??0DListNode@XGRAPHICS@@QAA@XZ");
//};

//public: static int XGRAPHICS::IRInst::GetInstCount(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?GetInstCount@IRInst@XGRAPHICS@@SAHPAVCompiler@2@@Z");
//};

//private: int const XGRAPHICS::IRMovBase::Getcomponent(void) const
//{
//    mangled_ppc("?Getcomponent@IRMovBase@XGRAPHICS@@ABA?BHXZ");
//};

//public: bool const XGRAPHICS::IRInst::DefIsGlobal(void) const
//{
//    mangled_ppc("?DefIsGlobal@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: void XGRAPHICS::IRInst::SetDefIsGlobal(bool)
//{
//    mangled_ppc("?SetDefIsGlobal@IRInst@XGRAPHICS@@QAAX_N@Z");
//};

//public: bool const XGRAPHICS::IRInst::HasVectorEquiv(void) const
//{
//    mangled_ppc("?HasVectorEquiv@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: static void * XGRAPHICS::ResourceModel::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2ResourceModel@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::ResourceModel::operator delete(void *)
//{
//    mangled_ppc("??3ResourceModel@XGRAPHICS@@SAXPAX@Z");
//};

//public: virtual void XGRAPHICS::ResourceModel::Reset(void)
//{
//    mangled_ppc("?Reset@ResourceModel@XGRAPHICS@@UAAXXZ");
//};

//public: virtual void XGRAPHICS::R400SchedModel::Reset(void)
//{
//    mangled_ppc("?Reset@R400SchedModel@XGRAPHICS@@UAAXXZ");
//};

//public: int XGRAPHICS::R400SchedModel::MaxResourceHeight(void)
//{
//    mangled_ppc("?MaxResourceHeight@R400SchedModel@XGRAPHICS@@QAAHXZ");
//};

//public: XGRAPHICS::Scheduler::Scheduler(void)
//{
//    mangled_ppc("??0Scheduler@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::Scheduler::~Scheduler(void)
//{
//    mangled_ppc("??1Scheduler@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::DepEdge::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2DepEdge@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::DepEdge::operator delete(void *)
//{
//    mangled_ppc("??3DepEdge@XGRAPHICS@@SAXPAX@Z");
//};

//private: XGRAPHICS::SchedNode::SchedNode(class XGRAPHICS::IRInst *const, int)
//{
//    mangled_ppc("??0SchedNode@XGRAPHICS@@AAA@QAVIRInst@1@H@Z");
//};

//public: virtual XGRAPHICS::SchedNode::~SchedNode(void)
//{
//    mangled_ppc("??1SchedNode@XGRAPHICS@@UAA@XZ");
//};

//public: static void * XGRAPHICS::ParallelGroup::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2ParallelGroup@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::ParallelGroup::operator delete(void *)
//{
//    mangled_ppc("??3ParallelGroup@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::ParallelGroup::ParallelGroup(void)
//{
//    mangled_ppc("??0ParallelGroup@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::R400ThreadModel::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2R400ThreadModel@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::R400ThreadModel::operator delete(void *)
//{
//    mangled_ppc("??3R400ThreadModel@XGRAPHICS@@SAXPAX@Z");
//};

//private: static int XGRAPHICS::SchedNode::CompareDestination(void *, void *)
//{
//    mangled_ppc("?CompareDestination@SchedNode@XGRAPHICS@@CAHPAX0@Z");
//};

//private: static int XGRAPHICS::SchedNode::HashByDestination(void *)
//{
//    mangled_ppc("?HashByDestination@SchedNode@XGRAPHICS@@CAHPAX@Z");
//};

//public: void XGRAPHICS::ParallelGroup::AssignSlot(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?AssignSlot@ParallelGroup@XGRAPHICS@@QAAXPAVSchedNode@2@@Z");
//};

//public: void XGRAPHICS::R400ThreadModel::Apply(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?Apply@R400ThreadModel@XGRAPHICS@@QAAXPAVSchedNode@2@@Z");
//};

//public: void * XGRAPHICS::Vector<class XGRAPHICS::SchedNode *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@PAVSchedNode@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: XGRAPHICS::ParallelGroup::~ParallelGroup(void)
//{
//    mangled_ppc("??1ParallelGroup@XGRAPHICS@@QAA@XZ");
//};

//private: void XGRAPHICS::Scheduler::Preprocess(void)
//{
//    mangled_ppc("?Preprocess@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//private: class XGRAPHICS::SchedNode * XGRAPHICS::Scheduler::FindOrCreateInputDefNode(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?FindOrCreateInputDefNode@Scheduler@XGRAPHICS@@AAAPAVSchedNode@2@PAVIRInst@2@@Z");
//};

//public: void * XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//private: void XGRAPHICS::Scheduler::ComputeNumbers(void)
//{
//    mangled_ppc("?ComputeNumbers@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//public: void * XGRAPHICS::Vector<struct XGRAPHICS::DepEdge *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@PAUDepEdge@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//private: void XGRAPHICS::Scheduler::AddToReadyList(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?AddToReadyList@Scheduler@XGRAPHICS@@AAAXPAVSchedNode@2@@Z");
//};

//private: bool XGRAPHICS::Scheduler::IsInstReady(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?IsInstReady@Scheduler@XGRAPHICS@@AAA_NPAVSchedNode@2@@Z");
//};

//private: void XGRAPHICS::Scheduler::AddToHoldOrReadyList(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?AddToHoldOrReadyList@Scheduler@XGRAPHICS@@AAAXPAVSchedNode@2@@Z");
//};

//private: void XGRAPHICS::Scheduler::EnableDepSuccessors(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?EnableDepSuccessors@Scheduler@XGRAPHICS@@AAAXPAVSchedNode@2@@Z");
//};

//private: class XGRAPHICS::SchedNode * XGRAPHICS::Scheduler::SelectReadyPartialWrite(bool &)
//{
//    mangled_ppc("?SelectReadyPartialWrite@Scheduler@XGRAPHICS@@AAAPAVSchedNode@2@AA_N@Z");
//};

//private: void XGRAPHICS::Scheduler::CycleForward(void)
//{
//    mangled_ppc("?CycleForward@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::Scheduler::AllocateLocalRegister(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?AllocateLocalRegister@Scheduler@XGRAPHICS@@AAAXPAVSchedNode@2@@Z");
//};

//public: int XGRAPHICS::IRMovBase::GetComponent(void)
//{
//    mangled_ppc("?GetComponent@IRMovBase@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::IRInst::DefIsLocalTemp(void) const
//{
//    mangled_ppc("?DefIsLocalTemp@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: XGRAPHICS::ResourceModel::ResourceModel(void)
//{
//    mangled_ppc("??0ResourceModel@XGRAPHICS@@QAA@XZ");
//};

//public: virtual void XGRAPHICS::ResourceModel::AdvanceCycle(void)
//{
//    mangled_ppc("?AdvanceCycle@ResourceModel@XGRAPHICS@@UAAXXZ");
//};

//public: virtual bool XGRAPHICS::ResourceModel::FullState(void)
//{
//    mangled_ppc("?FullState@ResourceModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::ResourceModel::ZeroState(void)
//{
//    mangled_ppc("?ZeroState@ResourceModel@XGRAPHICS@@UAA_NXZ");
//};

//public: XGRAPHICS::R400SlotModel::R400SlotModel(void)
//{
//    mangled_ppc("??0R400SlotModel@XGRAPHICS@@QAA@XZ");
//};

//public: virtual void XGRAPHICS::R400SlotModel::AdvanceCycle(void)
//{
//    mangled_ppc("?AdvanceCycle@R400SlotModel@XGRAPHICS@@UAAXXZ");
//};

//public: virtual bool XGRAPHICS::R400SlotModel::FullState(void)
//{
//    mangled_ppc("?FullState@R400SlotModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::R400SlotModel::HasRoomForVector(void)
//{
//    mangled_ppc("?HasRoomForVector@R400SlotModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::R400SlotModel::HasRoomForScalar(void)
//{
//    mangled_ppc("?HasRoomForScalar@R400SlotModel@XGRAPHICS@@UAA_NXZ");
//};

//public: XGRAPHICS::R400ConstantModel::R400ConstantModel(void)
//{
//    mangled_ppc("??0R400ConstantModel@XGRAPHICS@@QAA@XZ");
//};

//public: virtual bool XGRAPHICS::R400ConstantModel::HasRoomForVector(void)
//{
//    mangled_ppc("?HasRoomForVector@R400ConstantModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::R400ConstantModel::HasRoomForScalar(void)
//{
//    mangled_ppc("?HasRoomForScalar@R400ConstantModel@XGRAPHICS@@UAA_NXZ");
//};

//public: XGRAPHICS::R400SchedModel::R400SchedModel(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0R400SchedModel@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: virtual bool XGRAPHICS::R400SchedModel::Check(class XGRAPHICS::IRInst const *)
//{
//    mangled_ppc("?Check@R400SchedModel@XGRAPHICS@@UAA_NPBVIRInst@2@@Z");
//};

//public: virtual void XGRAPHICS::R400SchedModel::Apply(class XGRAPHICS::IRInst const *)
//{
//    mangled_ppc("?Apply@R400SchedModel@XGRAPHICS@@UAAXPBVIRInst@2@@Z");
//};

//public: virtual void XGRAPHICS::R400SchedModel::AdvanceCycle(void)
//{
//    mangled_ppc("?AdvanceCycle@R400SchedModel@XGRAPHICS@@UAAXXZ");
//};

//public: virtual bool XGRAPHICS::R400SchedModel::FullState(void)
//{
//    mangled_ppc("?FullState@R400SchedModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::R400SchedModel::ZeroState(void)
//{
//    mangled_ppc("?ZeroState@R400SchedModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::R400SchedModel::HasRoomForVector(void)
//{
//    mangled_ppc("?HasRoomForVector@R400SchedModel@XGRAPHICS@@UAA_NXZ");
//};

//public: virtual bool XGRAPHICS::R400SchedModel::HasRoomForScalar(void)
//{
//    mangled_ppc("?HasRoomForScalar@R400SchedModel@XGRAPHICS@@UAA_NXZ");
//};

//merged_83E4A340
//{
//    mangled_ppc("merged_83E4A340");
//};

//bool XGRAPHICS::EquivalentMovBase(class XGRAPHICS::IRInst const *, class XGRAPHICS::IRInst const *)
//{
//    mangled_ppc("?EquivalentMovBase@XGRAPHICS@@YA_NPBVIRInst@1@0@Z");
//};

//public: void * XGRAPHICS::ParallelGroup::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GParallelGroup@XGRAPHICS@@QAAPAXI@Z");
//};

//private: void XGRAPHICS::Scheduler::MarkGlobalDefs(void)
//{
//    mangled_ppc("?MarkGlobalDefs@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::Scheduler::BuildPhysicalLiveness(void)
//{
//    mangled_ppc("?BuildPhysicalLiveness@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::Scheduler::BuildGraph(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?BuildGraph@Scheduler@XGRAPHICS@@AAAXPAVBlock@2@@Z");
//};

//private: void XGRAPHICS::Scheduler::CleanGraph(void)
//{
//    mangled_ppc("?CleanGraph@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::Scheduler::ScheduleInst(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?ScheduleInst@Scheduler@XGRAPHICS@@AAAXPAVSchedNode@2@@Z");
//};

//private: void XGRAPHICS::Scheduler::CollapseExtraMova(class XGRAPHICS::SchedNode *)
//{
//    mangled_ppc("?CollapseExtraMova@Scheduler@XGRAPHICS@@AAAXPAVSchedNode@2@@Z");
//};

//private: class XGRAPHICS::SchedNode * XGRAPHICS::Scheduler::SelectFromReadyList(void)
//{
//    mangled_ppc("?SelectFromReadyList@Scheduler@XGRAPHICS@@AAAPAVSchedNode@2@XZ");
//};

//private: void XGRAPHICS::Scheduler::ScheduleParallelGroup(void)
//{
//    mangled_ppc("?ScheduleParallelGroup@Scheduler@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::Scheduler::ScheduleBlock(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?ScheduleBlock@Scheduler@XGRAPHICS@@AAAXPAVBlock@2@@Z");
//};

//public: void XGRAPHICS::Scheduler::Run(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?Run@Scheduler@XGRAPHICS@@QAAXPAVCFG@2@@Z");
//};

//public: void XGRAPHICS::CFG::ScheduleInstructions(void)
//{
//    mangled_ppc("?ScheduleInstructions@CFG@XGRAPHICS@@QAAXXZ");
//};

