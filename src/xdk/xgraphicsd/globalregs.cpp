/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: unsigned int XGRAPHICS::bitset::size(void) const;
// private: unsigned int XGRAPHICS::bitset::getbit(unsigned int) const;
// private: void XGRAPHICS::bitset::setbit(unsigned int);
// private: void XGRAPHICS::bitset::clearbit(unsigned int);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::reset(unsigned int);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::set(unsigned int);
// public: int XGRAPHICS::bitset::get(unsigned int) const;
// public: int XGRAPHICS::bitset::first(void) const;
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator=(class XGRAPHICS::bitset const &);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::CopyFromSmaller(class XGRAPHICS::bitset const &);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator+=(unsigned int);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator-=(unsigned int);
// public: static void * XGRAPHICS::SparseIntSet::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: int XGRAPHICS::Compiler::GetNumGlobals(void) const;
// public: void XGRAPHICS::LiveSet::Clear(void);
// public: bool const XGRAPHICS::IRInst::DefIsPhysical(void) const;
// public: void XGRAPHICS::IRInst::SetPWInput(class XGRAPHICS::IRInst *);
// public: static void * XGRAPHICS::Interference::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Interference::operator delete(void *);
// public: XGRAPHICS::Set<int>::Set<int>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Set<int>::~Set<int>(void);
// public: int XGRAPHICS::Set<int>::Size(void) const;
// public: void XGRAPHICS::Set<int>::Add(int);
// public: int XGRAPHICS::Set<int>::Remove(void);
// public: class XGRAPHICS::LiveSet & XGRAPHICS::LiveSet::operator=(class XGRAPHICS::LiveSet const &);
// public: void * XGRAPHICS::Interference::`scalar deleting destructor'(unsigned int);
// public: void XGRAPHICS::CFG::MakeRegisterNonAllocatable(int);
// public: bool XGRAPHICS::CFG::IsRegisterAllocatable(int) const;
// public: void XGRAPHICS::CFG::ReservePhysicalRegister(int);
// public: bool XGRAPHICS::CFG::IsRegisterAvailable(int) const;
// public: bool XGRAPHICS::bitset::grow(unsigned int);
// public: XGRAPHICS::SparseIntSet::SparseIntSet(int, class XGRAPHICS::Arena const *);
// public: void XGRAPHICS::SparseIntSet::Add(int);
// public: int XGRAPHICS::SparseIntSet::Remove(void);
// public: bool XGRAPHICS::Set<int>::Empty(void) const;
// public: void XGRAPHICS::CFG::SetMaxTempNumber(void);
// public: int XGRAPHICS::CFG::AllocatePhysicalRegister(void);
// public: void XGRAPHICS::CFG::ReleasePhysicalRegister(int);
// public: bool XGRAPHICS::SparseIntSet::Empty(void) const;
// public: void XGRAPHICS::CFG::BuildIGraph(class XGRAPHICS::Interference *, int, int, bool);
// public: void XGRAPHICS::CFG::AllocateGlobalRegisters(void);

//public: unsigned int XGRAPHICS::bitset::size(void) const
//{
//    mangled_ppc("?size@bitset@XGRAPHICS@@QBAIXZ");
//};

//private: unsigned int XGRAPHICS::bitset::getbit(unsigned int) const
//{
//    mangled_ppc("?getbit@bitset@XGRAPHICS@@ABAII@Z");
//};

//private: void XGRAPHICS::bitset::setbit(unsigned int)
//{
//    mangled_ppc("?setbit@bitset@XGRAPHICS@@AAAXI@Z");
//};

//private: void XGRAPHICS::bitset::clearbit(unsigned int)
//{
//    mangled_ppc("?clearbit@bitset@XGRAPHICS@@AAAXI@Z");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::reset(unsigned int)
//{
//    mangled_ppc("?reset@bitset@XGRAPHICS@@QAAAAV12@I@Z");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::set(unsigned int)
//{
//    mangled_ppc("?set@bitset@XGRAPHICS@@QAAAAV12@I@Z");
//};

//public: int XGRAPHICS::bitset::get(unsigned int) const
//{
//    mangled_ppc("?get@bitset@XGRAPHICS@@QBAHI@Z");
//};

//public: int XGRAPHICS::bitset::first(void) const
//{
//    mangled_ppc("?first@bitset@XGRAPHICS@@QBAHXZ");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator=(class XGRAPHICS::bitset const &)
//{
//    mangled_ppc("??4bitset@XGRAPHICS@@QAAAAV01@ABV01@@Z");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::CopyFromSmaller(class XGRAPHICS::bitset const &)
//{
//    mangled_ppc("?CopyFromSmaller@bitset@XGRAPHICS@@QAAAAV12@ABV12@@Z");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator+=(unsigned int)
//{
//    mangled_ppc("??Ybitset@XGRAPHICS@@QAAAAV01@I@Z");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::operator-=(unsigned int)
//{
//    mangled_ppc("??Zbitset@XGRAPHICS@@QAAAAV01@I@Z");
//};

//public: static void * XGRAPHICS::SparseIntSet::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2SparseIntSet@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: int XGRAPHICS::Compiler::GetNumGlobals(void) const
//{
//    mangled_ppc("?GetNumGlobals@Compiler@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::LiveSet::Clear(void)
//{
//    mangled_ppc("?Clear@LiveSet@XGRAPHICS@@QAAXXZ");
//};

//public: bool const XGRAPHICS::IRInst::DefIsPhysical(void) const
//{
//    mangled_ppc("?DefIsPhysical@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: void XGRAPHICS::IRInst::SetPWInput(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?SetPWInput@IRInst@XGRAPHICS@@QAAXPAV12@@Z");
//};

//public: static void * XGRAPHICS::Interference::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2Interference@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Interference::operator delete(void *)
//{
//    mangled_ppc("??3Interference@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::Set<int>::Set<int>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Set@H@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Set<int>::~Set<int>(void)
//{
//    mangled_ppc("??1?$Set@H@XGRAPHICS@@QAA@XZ");
//};

//public: int XGRAPHICS::Set<int>::Size(void) const
//{
//    mangled_ppc("?Size@?$Set@H@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::Set<int>::Add(int)
//{
//    mangled_ppc("?Add@?$Set@H@XGRAPHICS@@QAAXH@Z");
//};

//public: int XGRAPHICS::Set<int>::Remove(void)
//{
//    mangled_ppc("?Remove@?$Set@H@XGRAPHICS@@QAAHXZ");
//};

//public: class XGRAPHICS::LiveSet & XGRAPHICS::LiveSet::operator=(class XGRAPHICS::LiveSet const &)
//{
//    mangled_ppc("??4LiveSet@XGRAPHICS@@QAAAAV01@ABV01@@Z");
//};

//public: void * XGRAPHICS::Interference::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GInterference@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void XGRAPHICS::CFG::MakeRegisterNonAllocatable(int)
//{
//    mangled_ppc("?MakeRegisterNonAllocatable@CFG@XGRAPHICS@@QAAXH@Z");
//};

//public: bool XGRAPHICS::CFG::IsRegisterAllocatable(int) const
//{
//    mangled_ppc("?IsRegisterAllocatable@CFG@XGRAPHICS@@QBA_NH@Z");
//};

//public: void XGRAPHICS::CFG::ReservePhysicalRegister(int)
//{
//    mangled_ppc("?ReservePhysicalRegister@CFG@XGRAPHICS@@QAAXH@Z");
//};

//public: bool XGRAPHICS::CFG::IsRegisterAvailable(int) const
//{
//    mangled_ppc("?IsRegisterAvailable@CFG@XGRAPHICS@@QBA_NH@Z");
//};

//public: bool XGRAPHICS::bitset::grow(unsigned int)
//{
//    mangled_ppc("?grow@bitset@XGRAPHICS@@QAA_NI@Z");
//};

//public: XGRAPHICS::SparseIntSet::SparseIntSet(int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0SparseIntSet@XGRAPHICS@@QAA@HPBVArena@1@@Z");
//};

//public: void XGRAPHICS::SparseIntSet::Add(int)
//{
//    mangled_ppc("?Add@SparseIntSet@XGRAPHICS@@QAAXH@Z");
//};

//public: int XGRAPHICS::SparseIntSet::Remove(void)
//{
//    mangled_ppc("?Remove@SparseIntSet@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::Set<int>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$Set@H@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::CFG::SetMaxTempNumber(void)
//{
//    mangled_ppc("?SetMaxTempNumber@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: int XGRAPHICS::CFG::AllocatePhysicalRegister(void)
//{
//    mangled_ppc("?AllocatePhysicalRegister@CFG@XGRAPHICS@@QAAHXZ");
//};

//public: void XGRAPHICS::CFG::ReleasePhysicalRegister(int)
//{
//    mangled_ppc("?ReleasePhysicalRegister@CFG@XGRAPHICS@@QAAXH@Z");
//};

//public: bool XGRAPHICS::SparseIntSet::Empty(void) const
//{
//    mangled_ppc("?Empty@SparseIntSet@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::CFG::BuildIGraph(class XGRAPHICS::Interference *, int, int, bool)
//{
//    mangled_ppc("?BuildIGraph@CFG@XGRAPHICS@@QAAXPAVInterference@2@HH_N@Z");
//};

//public: void XGRAPHICS::CFG::AllocateGlobalRegisters(void)
//{
//    mangled_ppc("?AllocateGlobalRegisters@CFG@XGRAPHICS@@QAAXXZ");
//};

