/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int *XGRAPHICS::range_color; // "?range_color@XGRAPHICS@@3PAHA"
// int *XGRAPHICS::range_root; // "?range_root@XGRAPHICS@@3PAHA"

// public: int const XGRAPHICS::Range::Id(void) const;
// public: int const XGRAPHICS::Range::Root(void) const;
// public: void XGRAPHICS::Range::LastUsedSlot(int &, struct XGRAPHICS::AdjacencyList *&);
// public: void XGRAPHICS::Range::RemoveEdge(int);
// public: int XGRAPHICS::Interference::Find(int, bool) const;
// public: void XGRAPHICS::Interference::Union(int, int);
// private: int XGRAPHICS::Interference::Index(int, int) const;
// public: static void * XGRAPHICS::Set<int>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::Range *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Vector<class XGRAPHICS::Range *>::operator delete(void *);
// public: int XGRAPHICS::Interference::FindFast(int) const;
// public: static void * XGRAPHICS::AdjacencyList::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::AdjacencyList::operator delete(void *);
// public: static void * XGRAPHICS::Range::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Range::operator delete(void *);
// private: void XGRAPHICS::Range::AdvanceSlot(int &, struct XGRAPHICS::AdjacencyList *&, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::Range::AddNeighbor(int, int &, struct XGRAPHICS::AdjacencyList *&, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::Interference::ClearMatrix(void);
// public: bool XGRAPHICS::Interference::Interfere(int, int) const;
// public: void XGRAPHICS::Interference::AddAdjMatrix(int, int);
// public: int XGRAPHICS::CFG::Number(class XGRAPHICS::IRInst *) const;
// public: XGRAPHICS::Vector<class XGRAPHICS::Range *>::Vector<class XGRAPHICS::Range *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::Range *>::~Vector<class XGRAPHICS::Range *>(void);
// public: class XGRAPHICS::Range *& XGRAPHICS::Vector<class XGRAPHICS::Range *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Range *>::Size(void) const;
// public: void XGRAPHICS::Vector<class XGRAPHICS::Range *>::push_back(class XGRAPHICS::Range *const &);
// public: XGRAPHICS::Range::Range(int, int, class XGRAPHICS::Compiler *);
// public: void * XGRAPHICS::Vector<class XGRAPHICS::Range *>::`scalar deleting destructor'(unsigned int);
// public: void XGRAPHICS::Range::MergeEdges(int, class XGRAPHICS::Interference *);
// public: XGRAPHICS::Interference::Interference(int, int, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::Interference::AddPreference(int, int);
// public: void XGRAPHICS::Interference::AddNode(void);
// public: void XGRAPHICS::Interference::AddEdge(int, int);
// public: void XGRAPHICS::Interference::ClearDegree(void);
// public: bool XGRAPHICS::Interference::Coalesce(int, int);
// private: void XGRAPHICS::Interference::Remove(int, class XGRAPHICS::Set<int> *, int);
// public: bool XGRAPHICS::stack<int>::Empty(void) const;
// public: XGRAPHICS::Range::~Range(void);
// public: void * XGRAPHICS::Range::`scalar deleting destructor'(unsigned int);
// public: void XGRAPHICS::Interference::ColorGraph(void);
// public: XGRAPHICS::Interference::~Interference(void);

//public: int const XGRAPHICS::Range::Id(void) const
//{
//    mangled_ppc("?Id@Range@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::Range::Root(void) const
//{
//    mangled_ppc("?Root@Range@XGRAPHICS@@QBA?BHXZ");
//};

//public: void XGRAPHICS::Range::LastUsedSlot(int &, struct XGRAPHICS::AdjacencyList *&)
//{
//    mangled_ppc("?LastUsedSlot@Range@XGRAPHICS@@QAAXAAHAAPAUAdjacencyList@2@@Z");
//};

//public: void XGRAPHICS::Range::RemoveEdge(int)
//{
//    mangled_ppc("?RemoveEdge@Range@XGRAPHICS@@QAAXH@Z");
//};

//public: int XGRAPHICS::Interference::Find(int, bool) const
//{
//    mangled_ppc("?Find@Interference@XGRAPHICS@@QBAHH_N@Z");
//};

//public: void XGRAPHICS::Interference::Union(int, int)
//{
//    mangled_ppc("?Union@Interference@XGRAPHICS@@QAAXHH@Z");
//};

//private: int XGRAPHICS::Interference::Index(int, int) const
//{
//    mangled_ppc("?Index@Interference@XGRAPHICS@@ABAHHH@Z");
//};

//public: static void * XGRAPHICS::Set<int>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Set@H@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::Range *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Vector<class XGRAPHICS::Range *>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: int XGRAPHICS::Interference::FindFast(int) const
//{
//    mangled_ppc("?FindFast@Interference@XGRAPHICS@@QBAHH@Z");
//};

//public: static void * XGRAPHICS::AdjacencyList::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2AdjacencyList@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::AdjacencyList::operator delete(void *)
//{
//    mangled_ppc("??3AdjacencyList@XGRAPHICS@@SAXPAX@Z");
//};

//public: static void * XGRAPHICS::Range::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2Range@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Range::operator delete(void *)
//{
//    mangled_ppc("??3Range@XGRAPHICS@@SAXPAX@Z");
//};

//private: void XGRAPHICS::Range::AdvanceSlot(int &, struct XGRAPHICS::AdjacencyList *&, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?AdvanceSlot@Range@XGRAPHICS@@AAAXAAHAAPAUAdjacencyList@2@PAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::Range::AddNeighbor(int, int &, struct XGRAPHICS::AdjacencyList *&, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?AddNeighbor@Range@XGRAPHICS@@QAAXHAAHAAPAUAdjacencyList@2@PAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::Interference::ClearMatrix(void)
//{
//    mangled_ppc("?ClearMatrix@Interference@XGRAPHICS@@QAAXXZ");
//};

//public: bool XGRAPHICS::Interference::Interfere(int, int) const
//{
//    mangled_ppc("?Interfere@Interference@XGRAPHICS@@QBA_NHH@Z");
//};

//public: void XGRAPHICS::Interference::AddAdjMatrix(int, int)
//{
//    mangled_ppc("?AddAdjMatrix@Interference@XGRAPHICS@@QAAXHH@Z");
//};

//public: int XGRAPHICS::CFG::Number(class XGRAPHICS::IRInst *) const
//{
//    mangled_ppc("?Number@CFG@XGRAPHICS@@QBAHPAVIRInst@2@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::Range *>::Vector<class XGRAPHICS::Range *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::Range *>::~Vector<class XGRAPHICS::Range *>(void)
//{
//    mangled_ppc("??1?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::Range *& XGRAPHICS::Vector<class XGRAPHICS::Range *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVRange@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Range *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::Range *>::push_back(class XGRAPHICS::Range *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVRange@2@@Z");
//};

//public: XGRAPHICS::Range::Range(int, int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Range@XGRAPHICS@@QAA@HHPAVCompiler@1@@Z");
//};

//public: void * XGRAPHICS::Vector<class XGRAPHICS::Range *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@PAVRange@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void XGRAPHICS::Range::MergeEdges(int, class XGRAPHICS::Interference *)
//{
//    mangled_ppc("?MergeEdges@Range@XGRAPHICS@@QAAXHPAVInterference@2@@Z");
//};

//public: XGRAPHICS::Interference::Interference(int, int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Interference@XGRAPHICS@@QAA@HHPAVCompiler@1@@Z");
//};

//public: void XGRAPHICS::Interference::AddPreference(int, int)
//{
//    mangled_ppc("?AddPreference@Interference@XGRAPHICS@@QAAXHH@Z");
//};

//public: void XGRAPHICS::Interference::AddNode(void)
//{
//    mangled_ppc("?AddNode@Interference@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Interference::AddEdge(int, int)
//{
//    mangled_ppc("?AddEdge@Interference@XGRAPHICS@@QAAXHH@Z");
//};

//public: void XGRAPHICS::Interference::ClearDegree(void)
//{
//    mangled_ppc("?ClearDegree@Interference@XGRAPHICS@@QAAXXZ");
//};

//public: bool XGRAPHICS::Interference::Coalesce(int, int)
//{
//    mangled_ppc("?Coalesce@Interference@XGRAPHICS@@QAA_NHH@Z");
//};

//private: void XGRAPHICS::Interference::Remove(int, class XGRAPHICS::Set<int> *, int)
//{
//    mangled_ppc("?Remove@Interference@XGRAPHICS@@AAAXHPAV?$Set@H@2@H@Z");
//};

//public: bool XGRAPHICS::stack<int>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@H@XGRAPHICS@@QBA_NXZ");
//};

//public: XGRAPHICS::Range::~Range(void)
//{
//    mangled_ppc("??1Range@XGRAPHICS@@QAA@XZ");
//};

//public: void * XGRAPHICS::Range::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GRange@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void XGRAPHICS::Interference::ColorGraph(void)
//{
//    mangled_ppc("?ColorGraph@Interference@XGRAPHICS@@QAAXXZ");
//};

//public: XGRAPHICS::Interference::~Interference(void)
//{
//    mangled_ppc("??1Interference@XGRAPHICS@@QAA@XZ");
//};

