/* ---------- headers */

#include "xdk\xgraphicsd\compress.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void XGRAPHICS::Insert(void **, int, char *);
// void ** XGRAPHICS::Get(void **, int);
// bool XGRAPHICS::CodeEqual(void **, void **);
// public: XGRAPHICS::TNode::TNode(void);
// private: class XGRAPHICS::TNode * XGRAPHICS::TNode::HasEdge(void **, void **);
// public: int XGRAPHICS::Reference::IsEndPoint(int, void **);
// public: void XGRAPHICS::Reference::Canonize(void **);
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::TNode *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::stack<class XGRAPHICS::TNode *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::Fragment::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::TNode::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: class XGRAPHICS::TNode * XGRAPHICS::Reference::MakeNodeExplicit(void **);
// public: void XGRAPHICS::Reference::Update(class XGRAPHICS::TNode *, int, void **);
// public: static class XGRAPHICS::TNode * XGRAPHICS::TNode::BuildSuffixTree(int, void **, class XGRAPHICS::Compiler *);
// class XGRAPHICS::IRInst * XGRAPHICS::FirstInBlock(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst *);
// class XGRAPHICS::IRInst * XGRAPHICS::LastInBlock(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst *);
// public: XGRAPHICS::Vector<class XGRAPHICS::TNode *>::Vector<class XGRAPHICS::TNode *>(class XGRAPHICS::Arena const *);
// public: class XGRAPHICS::TNode *& XGRAPHICS::Vector<class XGRAPHICS::TNode *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::TNode *>::Size(void) const;
// public: void XGRAPHICS::Vector<class XGRAPHICS::TNode *>::push_back(class XGRAPHICS::TNode *const &);
// public: XGRAPHICS::stack<class XGRAPHICS::TNode *>::stack<class XGRAPHICS::TNode *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::Vector<class XGRAPHICS::Fragment *>(class XGRAPHICS::Arena const *);
// public: class XGRAPHICS::Fragment *& XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::Size(void) const;
// public: void XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::push_back(class XGRAPHICS::Fragment *const &);
// public: int XGRAPHICS::stack<class XGRAPHICS::TNode *>::Size(void) const;
// public: XGRAPHICS::Fragment::Fragment(class XGRAPHICS::Compiler *);
// private: void XGRAPHICS::TNode::FillInPositions(class XGRAPHICS::Fragment *);
// public: void XGRAPHICS::Assembler::SortFragments(void);
// public: bool XGRAPHICS::stack<class XGRAPHICS::TNode *>::Empty(void) const;
// public: void XGRAPHICS::stack<class XGRAPHICS::TNode *>::Push(class XGRAPHICS::TNode *);
// public: class XGRAPHICS::TNode * XGRAPHICS::stack<class XGRAPHICS::TNode *>::Pop(void);
// public: void XGRAPHICS::TNode::FindRepeatedFragments(class XGRAPHICS::Assembler *, int, void **, class XGRAPHICS::Compiler *);
// void XGRAPHICS::CompressCode(class XGRAPHICS::Assembler *, int, char *, class XGRAPHICS::Compiler *);

//void XGRAPHICS::Insert(void **, int, char *)
//{
//    mangled_ppc("?Insert@XGRAPHICS@@YAXPAPAXHPAD@Z");
//};

//void ** XGRAPHICS::Get(void **, int)
//{
//    mangled_ppc("?Get@XGRAPHICS@@YAPAPAXPAPAXH@Z");
//};

//bool XGRAPHICS::CodeEqual(void **, void **)
//{
//    mangled_ppc("?CodeEqual@XGRAPHICS@@YA_NPAPAX0@Z");
//};

//public: XGRAPHICS::TNode::TNode(void)
//{
//    mangled_ppc("??0TNode@XGRAPHICS@@QAA@XZ");
//};

//private: class XGRAPHICS::TNode * XGRAPHICS::TNode::HasEdge(void **, void **)
//{
//    mangled_ppc("?HasEdge@TNode@XGRAPHICS@@AAAPAV12@PAPAX0@Z");
//};

//public: int XGRAPHICS::Reference::IsEndPoint(int, void **)
//{
//    mangled_ppc("?IsEndPoint@Reference@XGRAPHICS@@QAAHHPAPAX@Z");
//};

//public: void XGRAPHICS::Reference::Canonize(void **)
//{
//    mangled_ppc("?Canonize@Reference@XGRAPHICS@@QAAXPAPAX@Z");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::TNode *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVTNode@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::stack<class XGRAPHICS::TNode *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAVTNode@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVFragment@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::Fragment::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2Fragment@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::TNode::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2TNode@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: class XGRAPHICS::TNode * XGRAPHICS::Reference::MakeNodeExplicit(void **)
//{
//    mangled_ppc("?MakeNodeExplicit@Reference@XGRAPHICS@@QAAPAVTNode@2@PAPAX@Z");
//};

//public: void XGRAPHICS::Reference::Update(class XGRAPHICS::TNode *, int, void **)
//{
//    mangled_ppc("?Update@Reference@XGRAPHICS@@QAAXPAVTNode@2@HPAPAX@Z");
//};

//public: static class XGRAPHICS::TNode * XGRAPHICS::TNode::BuildSuffixTree(int, void **, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?BuildSuffixTree@TNode@XGRAPHICS@@SAPAV12@HPAPAXPAVCompiler@2@@Z");
//};

//class XGRAPHICS::IRInst * XGRAPHICS::FirstInBlock(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?FirstInBlock@XGRAPHICS@@YAPAVIRInst@1@PAV21@0@Z");
//};

//class XGRAPHICS::IRInst * XGRAPHICS::LastInBlock(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?LastInBlock@XGRAPHICS@@YAPAVIRInst@1@PAV21@0@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::TNode *>::Vector<class XGRAPHICS::TNode *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: class XGRAPHICS::TNode *& XGRAPHICS::Vector<class XGRAPHICS::TNode *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVTNode@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::TNode *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::TNode *>::push_back(class XGRAPHICS::TNode *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVTNode@2@@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::TNode *>::stack<class XGRAPHICS::TNode *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::Vector<class XGRAPHICS::Fragment *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVFragment@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: class XGRAPHICS::Fragment *& XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVFragment@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVFragment@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVFragment@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::Fragment *>::push_back(class XGRAPHICS::Fragment *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVFragment@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVFragment@2@@Z");
//};

//public: int XGRAPHICS::stack<class XGRAPHICS::TNode *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: XGRAPHICS::Fragment::Fragment(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Fragment@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//private: void XGRAPHICS::TNode::FillInPositions(class XGRAPHICS::Fragment *)
//{
//    mangled_ppc("?FillInPositions@TNode@XGRAPHICS@@AAAXPAVFragment@2@@Z");
//};

//public: void XGRAPHICS::Assembler::SortFragments(void)
//{
//    mangled_ppc("?SortFragments@Assembler@XGRAPHICS@@QAAXXZ");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::TNode *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::TNode *>::Push(class XGRAPHICS::TNode *)
//{
//    mangled_ppc("?Push@?$stack@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QAAXPAVTNode@2@@Z");
//};

//public: class XGRAPHICS::TNode * XGRAPHICS::stack<class XGRAPHICS::TNode *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAVTNode@XGRAPHICS@@@XGRAPHICS@@QAAPAVTNode@2@XZ");
//};

//public: void XGRAPHICS::TNode::FindRepeatedFragments(class XGRAPHICS::Assembler *, int, void **, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?FindRepeatedFragments@TNode@XGRAPHICS@@QAAXPAVAssembler@2@HPAPAXPAVCompiler@2@@Z");
//};

//void XGRAPHICS::CompressCode(class XGRAPHICS::Assembler *, int, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?CompressCode@XGRAPHICS@@YAXPAVAssembler@1@HPADPAVCompiler@1@@Z");
//};

