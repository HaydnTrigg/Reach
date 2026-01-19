/* ---------- headers */

#include "xdk\xgraphicsd\vregtable.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static int XGRAPHICS::VRegTable::HashKonstant1(void *);
// private: static int XGRAPHICS::VRegTable::HashKonstant2(void *);
// private: static int XGRAPHICS::VRegTable::HashKonstant3(void *);
// private: static int XGRAPHICS::VRegTable::HashKonstant4(void *);
// private: static int XGRAPHICS::VRegTable::CompareKonstant1(void *, void *);
// private: static int XGRAPHICS::VRegTable::CompareKonstant2(void *, void *);
// private: static int XGRAPHICS::VRegTable::CompareKonstant3(void *, void *);
// private: static int XGRAPHICS::VRegTable::CompareKonstant4(void *, void *);
// public: int XGRAPHICS::VRegTable::NextKonstNum(void);
// public: XGRAPHICS::VRegTable::VRegTable(class XGRAPHICS::Compiler *);
// int XGRAPHICS::compare_floats(void *, void *);
// int XGRAPHICS::len(class XGRAPHICS::IRInst *);
// int XGRAPHICS::find_bit(int *, int);
// void XGRAPHICS::print_konst(struct XGRAPHICS::konst, char *);
// public: static void * XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::operator delete(void *);
// public: XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::~HashTable<class XGRAPHICS::VRegInfo *>(void);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::Lookup(class XGRAPHICS::VRegInfo *);
// public: void XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::Insert(class XGRAPHICS::VRegInfo *);
// public: static void * XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: class XGRAPHICS::IRInst * XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::Lookup(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::Insert(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::Remove(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::sort(int (*)(void *, void *));
// public: static void * XGRAPHICS::Vector<struct XGRAPHICS::konst *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: void XGRAPHICS::Vector<struct XGRAPHICS::konst *>::sort(int (*)(void *, void *));
// protected: XGRAPHICS::InternalHashTable::InternalHashTable(class XGRAPHICS::Arena *, int (*)(void *, void *), int (*)(void *), unsigned int);
// public: class XGRAPHICS::EntryBlock * XGRAPHICS::CFG::GetEntryBlock(void);
// public: bool XGRAPHICS::konst::operator==(struct XGRAPHICS::konst const &) const;
// public: bool XGRAPHICS::konst::operator<(struct XGRAPHICS::konst const &) const;
// public: bool XGRAPHICS::konst::operator!=(struct XGRAPHICS::konst const &) const;
// public: struct XGRAPHICS::konst const & XGRAPHICS::konst::operator=(struct XGRAPHICS::konst const &);
// public: static void * XGRAPHICS::VRegInfo::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: void XGRAPHICS::VRegInfo::SetUsage(int);
// public: class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> * XGRAPHICS::VRegInfo::GetDefs(void);
// private: void XGRAPHICS::VRegInfo::SetType(enum R400Tables::RegType);
// int XGRAPHICS::HashVRegInfo(void *);
// int XGRAPHICS::CompareVRegInfo(void *, void *);
// private: int XGRAPHICS::VRegTable::NextKonstRegNum(void);
// public: void * XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::`scalar deleting destructor'(unsigned int);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Find(class XGRAPHICS::IRInst &, int);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Find(enum R400Tables::RegType, int);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Create(enum R400Tables::RegType, int);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Create(enum R400Tables::RegType, int, int);
// private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(int, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// int XGRAPHICS::compare_loadconsts(void *, void *);
// public: void XGRAPHICS::VRegTable::RemoveConstant(class XGRAPHICS::IRLoadConst *);
// public: XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::HashTable<class XGRAPHICS::VRegInfo *>(class XGRAPHICS::Arena const *, int (*)(void *, void *), int (*)(void *), int);
// public: XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::HashTable<class XGRAPHICS::IRInst *>(class XGRAPHICS::Arena const *, int (*)(void *, void *), int (*)(void *), int);
// public: XGRAPHICS::Vector<struct XGRAPHICS::konst *>::Vector<struct XGRAPHICS::konst *>(class XGRAPHICS::Arena const *);
// public: struct XGRAPHICS::konst *& XGRAPHICS::Vector<struct XGRAPHICS::konst *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<struct XGRAPHICS::konst *>::Size(void) const;
// public: void XGRAPHICS::Vector<struct XGRAPHICS::konst *>::push_back(struct XGRAPHICS::konst *const &);
// public: void XGRAPHICS::VRegTable::Init(bool);
// public: int XGRAPHICS::VRegTable::NumTempsInList(void) const;
// public: void XGRAPHICS::VRegTable::Clear(void);
// public: XGRAPHICS::VRegTable::~VRegTable(void);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreate(enum R400Tables::RegType, int);
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreate(enum R400Tables::RegType, int, int);
// private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(int, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst);
// private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// int XGRAPHICS::get_index(class XGRAPHICS::Vector<struct XGRAPHICS::konst *> *, struct XGRAPHICS::konst);
// public: void XGRAPHICS::VRegTable::AssignKonstantRegisters(class XGRAPHICS::CFG *);
// private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst);
// private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// public: void XGRAPHICS::CFG::AssignKonstantRegisters(void);

//private: static int XGRAPHICS::VRegTable::HashKonstant1(void *)
//{
//    mangled_ppc("?HashKonstant1@VRegTable@XGRAPHICS@@CAHPAX@Z");
//};

//private: static int XGRAPHICS::VRegTable::HashKonstant2(void *)
//{
//    mangled_ppc("?HashKonstant2@VRegTable@XGRAPHICS@@CAHPAX@Z");
//};

//private: static int XGRAPHICS::VRegTable::HashKonstant3(void *)
//{
//    mangled_ppc("?HashKonstant3@VRegTable@XGRAPHICS@@CAHPAX@Z");
//};

//private: static int XGRAPHICS::VRegTable::HashKonstant4(void *)
//{
//    mangled_ppc("?HashKonstant4@VRegTable@XGRAPHICS@@CAHPAX@Z");
//};

//private: static int XGRAPHICS::VRegTable::CompareKonstant1(void *, void *)
//{
//    mangled_ppc("?CompareKonstant1@VRegTable@XGRAPHICS@@CAHPAX0@Z");
//};

//private: static int XGRAPHICS::VRegTable::CompareKonstant2(void *, void *)
//{
//    mangled_ppc("?CompareKonstant2@VRegTable@XGRAPHICS@@CAHPAX0@Z");
//};

//private: static int XGRAPHICS::VRegTable::CompareKonstant3(void *, void *)
//{
//    mangled_ppc("?CompareKonstant3@VRegTable@XGRAPHICS@@CAHPAX0@Z");
//};

//private: static int XGRAPHICS::VRegTable::CompareKonstant4(void *, void *)
//{
//    mangled_ppc("?CompareKonstant4@VRegTable@XGRAPHICS@@CAHPAX0@Z");
//};

//public: int XGRAPHICS::VRegTable::NextKonstNum(void)
//{
//    mangled_ppc("?NextKonstNum@VRegTable@XGRAPHICS@@QAAHXZ");
//};

//public: XGRAPHICS::VRegTable::VRegTable(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0VRegTable@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//int XGRAPHICS::compare_floats(void *, void *)
//{
//    mangled_ppc("?compare_floats@XGRAPHICS@@YAHPAX0@Z");
//};

//int XGRAPHICS::len(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?len@XGRAPHICS@@YAHPAVIRInst@1@@Z");
//};

//int XGRAPHICS::find_bit(int *, int)
//{
//    mangled_ppc("?find_bit@XGRAPHICS@@YAHPAHH@Z");
//};

//void XGRAPHICS::print_konst(struct XGRAPHICS::konst, char *)
//{
//    mangled_ppc("?print_konst@XGRAPHICS@@YAXUkonst@1@PAD@Z");
//};

//public: static void * XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::operator delete(void *)
//{
//    mangled_ppc("??3?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::~HashTable<class XGRAPHICS::VRegInfo *>(void)
//{
//    mangled_ppc("??1?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::Lookup(class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?Lookup@?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAPAVVRegInfo@2@PAV32@@Z");
//};

//public: void XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::Insert(class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?Insert@?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAXPAVVRegInfo@2@@Z");
//};

//public: static void * XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::Lookup(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?Lookup@?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAPAVIRInst@2@PAV32@@Z");
//};

//public: void XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::Insert(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?Insert@?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::Remove(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?Remove@?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::sort(int (*)(void *, void *))
//{
//    mangled_ppc("?sort@?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXP6AHPAX0@Z@Z");
//};

//public: static void * XGRAPHICS::Vector<struct XGRAPHICS::konst *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAUkonst@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: void XGRAPHICS::Vector<struct XGRAPHICS::konst *>::sort(int (*)(void *, void *))
//{
//    mangled_ppc("?sort@?$Vector@PAUkonst@XGRAPHICS@@@XGRAPHICS@@QAAXP6AHPAX0@Z@Z");
//};

//protected: XGRAPHICS::InternalHashTable::InternalHashTable(class XGRAPHICS::Arena *, int (*)(void *, void *), int (*)(void *), unsigned int)
//{
//    mangled_ppc("??0InternalHashTable@XGRAPHICS@@IAA@PAVArena@1@P6AHPAX1@ZP6AH1@ZI@Z");
//};

//public: class XGRAPHICS::EntryBlock * XGRAPHICS::CFG::GetEntryBlock(void)
//{
//    mangled_ppc("?GetEntryBlock@CFG@XGRAPHICS@@QAAPAVEntryBlock@2@XZ");
//};

//public: bool XGRAPHICS::konst::operator==(struct XGRAPHICS::konst const &) const
//{
//    mangled_ppc("??8konst@XGRAPHICS@@QBA_NABU01@@Z");
//};

//public: bool XGRAPHICS::konst::operator<(struct XGRAPHICS::konst const &) const
//{
//    mangled_ppc("??Mkonst@XGRAPHICS@@QBA_NABU01@@Z");
//};

//public: bool XGRAPHICS::konst::operator!=(struct XGRAPHICS::konst const &) const
//{
//    mangled_ppc("??9konst@XGRAPHICS@@QBA_NABU01@@Z");
//};

//public: struct XGRAPHICS::konst const & XGRAPHICS::konst::operator=(struct XGRAPHICS::konst const &)
//{
//    mangled_ppc("??4konst@XGRAPHICS@@QAAABU01@ABU01@@Z");
//};

//public: static void * XGRAPHICS::VRegInfo::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2VRegInfo@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: void XGRAPHICS::VRegInfo::SetUsage(int)
//{
//    mangled_ppc("?SetUsage@VRegInfo@XGRAPHICS@@QAAXH@Z");
//};

//public: class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> * XGRAPHICS::VRegInfo::GetDefs(void)
//{
//    mangled_ppc("?GetDefs@VRegInfo@XGRAPHICS@@QAAPAV?$Vector@PAVIRInst@XGRAPHICS@@@2@XZ");
//};

//private: void XGRAPHICS::VRegInfo::SetType(enum R400Tables::RegType)
//{
//    mangled_ppc("?SetType@VRegInfo@XGRAPHICS@@AAAXW4RegType@R400Tables@@@Z");
//};

//int XGRAPHICS::HashVRegInfo(void *)
//{
//    mangled_ppc("?HashVRegInfo@XGRAPHICS@@YAHPAX@Z");
//};

//int XGRAPHICS::CompareVRegInfo(void *, void *)
//{
//    mangled_ppc("?CompareVRegInfo@XGRAPHICS@@YAHPAX0@Z");
//};

//private: int XGRAPHICS::VRegTable::NextKonstRegNum(void)
//{
//    mangled_ppc("?NextKonstRegNum@VRegTable@XGRAPHICS@@AAAHXZ");
//};

//public: void * XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Find(class XGRAPHICS::IRInst &, int)
//{
//    mangled_ppc("?Find@VRegTable@XGRAPHICS@@QAAPAVVRegInfo@2@AAVIRInst@2@H@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Find(enum R400Tables::RegType, int)
//{
//    mangled_ppc("?Find@VRegTable@XGRAPHICS@@QAAPAVVRegInfo@2@W4RegType@R400Tables@@H@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Create(enum R400Tables::RegType, int)
//{
//    mangled_ppc("?Create@VRegTable@XGRAPHICS@@QAAPAVVRegInfo@2@W4RegType@R400Tables@@H@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::Create(enum R400Tables::RegType, int, int)
//{
//    mangled_ppc("?Create@VRegTable@XGRAPHICS@@QAAPAVVRegInfo@2@W4RegType@R400Tables@@HH@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(int, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateInst@VRegTable@XGRAPHICS@@AAAPAVIRInst@2@HUkonst@2@000@Z");
//};

//int XGRAPHICS::compare_loadconsts(void *, void *)
//{
//    mangled_ppc("?compare_loadconsts@XGRAPHICS@@YAHPAX0@Z");
//};

//public: void XGRAPHICS::VRegTable::RemoveConstant(class XGRAPHICS::IRLoadConst *)
//{
//    mangled_ppc("?RemoveConstant@VRegTable@XGRAPHICS@@QAAXPAVIRLoadConst@2@@Z");
//};

//public: XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *>::HashTable<class XGRAPHICS::VRegInfo *>(class XGRAPHICS::Arena const *, int (*)(void *, void *), int (*)(void *), int)
//{
//    mangled_ppc("??0?$HashTable@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@P6AHPAX1@ZP6AH1@ZH@Z");
//};

//public: XGRAPHICS::HashTable<class XGRAPHICS::IRInst *>::HashTable<class XGRAPHICS::IRInst *>(class XGRAPHICS::Arena const *, int (*)(void *, void *), int (*)(void *), int)
//{
//    mangled_ppc("??0?$HashTable@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@P6AHPAX1@ZP6AH1@ZH@Z");
//};

//public: XGRAPHICS::Vector<struct XGRAPHICS::konst *>::Vector<struct XGRAPHICS::konst *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAUkonst@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: struct XGRAPHICS::konst *& XGRAPHICS::Vector<struct XGRAPHICS::konst *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAUkonst@XGRAPHICS@@@XGRAPHICS@@QAAAAPAUkonst@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<struct XGRAPHICS::konst *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAUkonst@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<struct XGRAPHICS::konst *>::push_back(struct XGRAPHICS::konst *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAUkonst@XGRAPHICS@@@XGRAPHICS@@QAAXABQAUkonst@2@@Z");
//};

//public: void XGRAPHICS::VRegTable::Init(bool)
//{
//    mangled_ppc("?Init@VRegTable@XGRAPHICS@@QAAX_N@Z");
//};

//public: int XGRAPHICS::VRegTable::NumTempsInList(void) const
//{
//    mangled_ppc("?NumTempsInList@VRegTable@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::VRegTable::Clear(void)
//{
//    mangled_ppc("?Clear@VRegTable@XGRAPHICS@@QAAXXZ");
//};

//public: XGRAPHICS::VRegTable::~VRegTable(void)
//{
//    mangled_ppc("??1VRegTable@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreate(enum R400Tables::RegType, int)
//{
//    mangled_ppc("?FindOrCreate@VRegTable@XGRAPHICS@@QAAPAVVRegInfo@2@W4RegType@R400Tables@@H@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreate(enum R400Tables::RegType, int, int)
//{
//    mangled_ppc("?FindOrCreate@VRegTable@XGRAPHICS@@QAAPAVVRegInfo@2@W4RegType@R400Tables@@HH@Z");
//};

//private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(int, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateVReg@VRegTable@XGRAPHICS@@AAAPAVVRegInfo@2@HUkonst@2@000@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateInst@VRegTable@XGRAPHICS@@AAAPAVIRInst@2@Ukonst@2@@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateInst@VRegTable@XGRAPHICS@@AAAPAVIRInst@2@Ukonst@2@0@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateInst@VRegTable@XGRAPHICS@@AAAPAVIRInst@2@Ukonst@2@00@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::VRegTable::FindOrCreateInst(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateInst@VRegTable@XGRAPHICS@@AAAPAVIRInst@2@Ukonst@2@000@Z");
//};

//int XGRAPHICS::get_index(class XGRAPHICS::Vector<struct XGRAPHICS::konst *> *, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?get_index@XGRAPHICS@@YAHPAV?$Vector@PAUkonst@XGRAPHICS@@@1@Ukonst@1@@Z");
//};

//public: void XGRAPHICS::VRegTable::AssignKonstantRegisters(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?AssignKonstantRegisters@VRegTable@XGRAPHICS@@QAAXPAVCFG@2@@Z");
//};

//private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateVReg@VRegTable@XGRAPHICS@@AAAPAVVRegInfo@2@Ukonst@2@@Z");
//};

//private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateVReg@VRegTable@XGRAPHICS@@AAAPAVVRegInfo@2@Ukonst@2@0@Z");
//};

//private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateVReg@VRegTable@XGRAPHICS@@AAAPAVVRegInfo@2@Ukonst@2@00@Z");
//};

//private: class XGRAPHICS::VRegInfo * XGRAPHICS::VRegTable::FindOrCreateVReg(struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?FindOrCreateVReg@VRegTable@XGRAPHICS@@AAAPAVVRegInfo@2@Ukonst@2@000@Z");
//};

//public: void XGRAPHICS::CFG::AssignKonstantRegisters(void)
//{
//    mangled_ppc("?AssignKonstantRegisters@CFG@XGRAPHICS@@QAAXXZ");
//};

