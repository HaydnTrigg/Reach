/* ---------- headers */

#include "havok\hkbase\hkMonitorStreamAnalyzer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const HK_CAPTURE_FRAME_STRING; // "?HK_CAPTURE_FRAME_STRING@@3PBDB"
// char const *const HK_CAPTURE_PARAMS_STRING; // "?HK_CAPTURE_PARAMS_STRING@@3PBDB"
// public: static float hkMonitorStreamAnalyzer::g_lastFrameTime; // "?g_lastFrameTime@hkMonitorStreamAnalyzer@@2MA"

// public: hkMonitorStreamStringMap::hkMonitorStreamStringMap(void);
// public: hkMonitorStreamStringMap::hkMonitorStreamStringMap(class hkFinishLoadedObjectFlag);
// public: hkMonitorStreamStringMap::StringMap::StringMap(void);
// public: hkMonitorStreamStringMap::StringMap::StringMap(class hkFinishLoadedObjectFlag);
// public: hkMonitorStreamAnalyzer::Node::Node(struct hkMonitorStreamAnalyzer::Node *, char const *, enum hkMonitorStreamAnalyzer::Node::NodeType);
// public: hkMonitorStreamAnalyzer::Node::~Node(void);
// public: char * hkMonitorStreamAnalyzer::getStreamBegin(void);
// public: hkMonitorStreamAnalyzer::hkMonitorStreamAnalyzer(int, int, int);
// public: void hkMonitorStreamAnalyzer::resetNumThreads(int, int);
// public: void hkMonitorStreamAnalyzer::reset(void);
// public: hkMonitorStreamFrameInfo::hkMonitorStreamFrameInfo(void);
// public: static void hkMonitorStreamAnalyzer::applyStringMap(char const *, char const *, class hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator> const &, class hkBool);
// public: static void hkMonitorStreamAnalyzer::extractStringMap(char const *, char const *, class hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator> &);
// public: class hkBool hkMonitorStreamAnalyzer::captureFrameDetails(char const *, char const *, struct hkMonitorStreamFrameInfo &);
// public: void hkMonitorStreamAnalyzer::Node::setTimers(struct hkMonitorStreamFrameInfo const &, struct hkMonitorStream::TimerCommand const &, struct hkMonitorStream::TimerCommand const &);
// public: static void hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *, int, int, float);
// void reduceMainTree(struct hkMonitorStreamAnalyzer::Node *, int, float);
// void mergeSubTree(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *, int, int, float);
// bool findChildWithHint(struct hkMonitorStreamAnalyzer::Node *, char const *, int &);
// public: static struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::navigateMonitors(struct hkMonitorStreamAnalyzer::CursorKeys const &, struct hkMonitorStreamAnalyzer::Node *);
// public: static int hkMonitorStreamAnalyzer::findMaxTimerNameIndent(struct hkMonitorStreamAnalyzer::Node *, int, int, bool);
// public: static void hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec(class hkOstream &, struct hkMonitorStreamAnalyzer::Node *, int, int, int, struct hkMonitorStreamAnalyzer::CombinedThreadSummaryOptions const &);
// public: static struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame(char const *, char const *, struct hkMonitorStreamFrameInfo const &, char const *, class hkBool);
// struct hkMonitorStreamAnalyzer::Node * createNewNode(struct hkMonitorStreamAnalyzer::Node *, char const *, enum hkMonitorStreamAnalyzer::Node::NodeType, bool);
// public: struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::makeStatisticsTreeForMultipleFrames(int, class hkBool);
// public: static void hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame(struct hkMonitorStreamAnalyzer::Node *, int, int, class hkOstream &, struct hkMonitorStreamAnalyzer::CombinedThreadSummaryOptions &);
// public: static void hkMonitorStreamAnalyzer::writeStatisticsDetails(class hkOstream &, class hkArrayBase<struct hkMonitorStreamAnalyzer::Node *> &, int, int, int, char const *, bool);
// void printStatisticsByType(class hkOstream &, struct hkMonitorStreamAnalyzer::Node *, float);
// void hkBuildSizePerName(struct hkMonitorStreamAnalyzer::Node const *, class hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *> &);
// void hkMakeSum(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node const *);
// void printSingleNodeValues(class hkOstream &, float, struct hkMonitorStreamAnalyzer::Node const *);
// void hkWriteRec(class hkOstream &, struct hkMonitorStreamAnalyzer::Node *, int, float);
// struct hkMonitorStreamAnalyzer::Node * hkFindChildByName(struct hkMonitorStreamAnalyzer::Node *, char const *, class hkBool);
// struct hkMonitorStreamAnalyzer::Node * hkFindNextChildByName(struct hkMonitorStreamAnalyzer::Node *, char const *, struct hkMonitorStreamAnalyzer::Node const *);
// void hkMakeSumRecursive(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *);
// public: void hkMonitorStreamAnalyzer::writeStatistics(class hkOstream &, int);
// public: void hkMonitorStreamAnalyzer::writeRawStatistics(class hkOstream &);
// struct hkMonitorStreamAnalyzer::Node * getNodeAtSample(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *, double, int);
// public: void hkMonitorStreamColorTable::setupDefaultColorTable(void);
// public: unsigned int hkMonitorStreamColorTable::findColor(char const *);
// public: void hkMonitorStreamColorTable::addColor(char const *, enum hkColor::ExtendedColors);
// bool saveToTGA(int *, class hkOstream &, int, int);
// public: void hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames(void) const;
// public: static int hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit(int, int, int, int, int);
// public: static void hkMonitorStreamAnalyzer::getTimerLimits(class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &, float &, class hkArray<float, struct hkContainerHeapAllocator> &);
// float __hkMin(float, float);
// float __hkMax(float, float);
// unsigned int hkRoundUpPow2(unsigned int);
// public: static void hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture(class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &, int *&, int &, struct hkMonitorStreamAnalyzer::SampleInfo *);
// void drawNumber(int, int, int, int *);
// void drawDigit(int, int, int, int *);
// void drawStatistics(struct hkMonitorStreamFrameInfo &, int, class hkArrayBase<struct hkMonitorStreamAnalyzer::Node *> const &, int *, int, struct hkMonitorStreamColorTable &, int, int, float, float, class hkPointerMap<char const *, int, struct hkContainerHeapAllocator> &);
// void outputStatsForFrame(struct hkMonitorStreamAnalyzer::Node *, float, float, int, class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, int);
// public: static void hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga(class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &, class hkOstream &, struct hkMonitorStreamAnalyzer::SampleInfo *);
// public: void hkMonitorStreamAnalyzer::drawThreadsToTga(struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkOstream &);
// public: static struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample(int, int, class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &);
// struct hkMonitorStreamAnalyzer::Node * getNodeSampledAtTick(struct hkMonitorStreamFrameInfo &, int, int, class hkArrayBase<struct hkMonitorStreamAnalyzer::Node *> const &, int, float, float);
// public: void * hkMonitorStreamAnalyzer::Node::`scalar deleting destructor'(unsigned int);
// public: static void hkMonitorStreamAnalyzer::Node::operator delete(void *);
// void _byteSwapUint32(unsigned int &);
// void _byteSwapFloat(float &);
// public: static void * hkMonitorStreamAnalyzer::Node::operator new(unsigned int);
// bool hkCompareInfosBySize(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo const *);
// public: bool hkMonitorStreamAnalyzerPrintByTypeInfo::operator<(struct hkMonitorStreamAnalyzerPrintByTypeInfo const &) const;
// public: static void * hkMonitorStreamAnalyzer::Node::operator new(unsigned int, void *);
// public: static void * hkMonitorStreamAnalyzerPrintByTypeInfo::operator new(unsigned int);
// public: hkMonitorStreamAnalyzerPrintByTypeInfo::hkMonitorStreamAnalyzerPrintByTypeInfo(void);
// public: hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::~hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void);
// public: void * hkMonitorStreamAnalyzerPrintByTypeInfo::`scalar deleting destructor'(unsigned int);
// public: static void hkMonitorStreamAnalyzerPrintByTypeInfo::operator delete(void *);
// public: hkMonitorStreamAnalyzerPrintByTypeInfo::~hkMonitorStreamAnalyzerPrintByTypeInfo(void);
// public: `anonymous namespace'::Indenter::Indenter(void);
// public: char const * `anonymous namespace'::Indenter::get(void) const;
// public: void `anonymous namespace'::Indenter::left(void);
// public: void `anonymous namespace'::Indenter::right(void);
// public: void `anonymous namespace'::Indenter::clear(void);
// public: `anonymous namespace'::Indenter::~Indenter(void);
// struct hkMonitorStreamAnalyzer::Node * findChildNode(struct hkMonitorStreamAnalyzer::Node *, double, int);
// public: hkMonitorStreamColorTable::ColorPair::ColorPair(char const *, enum hkColor::ExtendedColors);
// public: hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::~hkPointerMap<char const *, int, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>(enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter);
// public: enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::operator enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter(void) const;
// public: class hkBool hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::operator==(enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter) const;
// public: class hkBool hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::operator!=(enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter) const;
// public: hkEnum<enum hkColor::ExtendedColors, unsigned int>::hkEnum<enum hkColor::ExtendedColors, unsigned int>(enum hkColor::ExtendedColors);
// public: enum hkColor::ExtendedColors hkEnum<enum hkColor::ExtendedColors, unsigned int>::operator enum hkColor::ExtendedColors(void) const;
// public: void hkArray<struct hkMonitorStreamColorTable::ColorPair, struct hkContainerHeapAllocator>::pushBack(struct hkMonitorStreamColorTable::ColorPair const &);
// public: hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::pushBack(struct hkMonitorStreamAnalyzer::Node *const &);
// public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::setSize(int);
// public: hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>(enum hkMonitorStreamAnalyzer::Node::NodeType);
// public: enum hkMonitorStreamAnalyzer::Node::NodeType hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::operator enum hkMonitorStreamAnalyzer::Node::NodeType(void) const;
// public: class hkBool hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::operator==(enum hkMonitorStreamAnalyzer::Node::NodeType) const;
// public: hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int);
// public: struct hkMonitorStreamFrameInfo & hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::expandOne(void);
// public: int hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::insert(void const *, char const *);
// public: enum hkResult hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::get(void const *, char const **) const;
// public: hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::pushBack(struct hkMonitorStream::TimerCommand const &);
// public: void hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>(void);
// public: struct hkMonitorStreamAnalyzer::Node * hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::expandBy(int);
// public: hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void);
// public: void hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::insert(char const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *);
// public: struct hkMonitorStreamAnalyzerPrintByTypeInfo * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getWithDefault(char const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *) const;
// public: int hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getSize(void) const;
// public: class Dummy * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getIterator(void) const;
// public: struct hkMonitorStreamAnalyzerPrintByTypeInfo * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getValue(class Dummy *) const;
// public: class Dummy * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getNext(class Dummy *) const;
// public: class hkBool hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::isValid(class Dummy *) const;
// public: hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>(void);
// public: void hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::reserve(int);
// public: hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>::hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>(int);
// public: hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>::~hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>(void);
// public: hkArray<char, struct hkContainerDebugAllocator>::hkArray<char, struct hkContainerDebugAllocator>(void);
// public: void hkArray<char, struct hkContainerDebugAllocator>::pushBack(char const &);
// public: void hkArray<char, struct hkContainerDebugAllocator>::reserve(int);
// public: void hkArray<char, struct hkContainerDebugAllocator>::setSize(int);
// public: hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::hkPointerMap<char const *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::insert(char const *, int);
// public: enum hkResult hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::get(char const *, int *) const;
// public: class Dummy * hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: char const * hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const;
// public: class Dummy * hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkArray<float, struct hkContainerHeapAllocator>::hkArray<float, struct hkContainerHeapAllocator>(void);
// public: void hkArray<float, struct hkContainerHeapAllocator>::setSize(int, float const &);
// public: hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkMonitorStreamStringMap::StringMap>::hkArrayBase<struct hkMonitorStreamStringMap::StringMap>(class hkFinishLoadedObjectFlag);
// public: int hkCachedHashMap<struct hkStringMapOperations>::getSize(void) const;
// public: hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int);
// public: int hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, unsigned long);
// public: class hkBool hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>::wasReallocated(void) const;
// public: void hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int);
// public: hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >(void);
// public: hkArrayBase<struct hkMonitorStreamStringMap::StringMap>::hkArrayBase<struct hkMonitorStreamStringMap::StringMap>(void);
// public: struct hkMonitorStreamColorTable::ColorPair & hkArrayBase<struct hkMonitorStreamColorTable::ColorPair>::operator[](int);
// public: int hkArrayBase<struct hkMonitorStreamColorTable::ColorPair>::getSize(void) const;
// public: void hkArrayBase<struct hkMonitorStreamColorTable::ColorPair>::_pushBack(class hkMemoryAllocator &, struct hkMonitorStreamColorTable::ColorPair const &);
// public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>(void);
// public: struct hkMonitorStreamAnalyzer::Node *const & hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::operator[](int) const;
// public: struct hkMonitorStreamAnalyzer::Node *& hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::operator[](int);
// public: struct hkMonitorStreamAnalyzer::Node *& hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::back(void);
// public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::getSize(void) const;
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::clear(void);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_pushBack(class hkMemoryAllocator &, struct hkMonitorStreamAnalyzer::Node *const &);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_reserveExactly(class hkMemoryAllocator &, int);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::~hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::~hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>(void);
// public: hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >(void);
// public: class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> const & hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::operator[](int) const;
// public: class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::operator[](int);
// public: int hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: void hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int);
// public: char & hkArrayBase<char>::back(void);
// public: void hkArrayBase<char>::popBack(int);
// public: void hkArrayBase<char>::_pushBack(class hkMemoryAllocator &, char const &);
// public: char * hkArrayBase<char>::expandByUnchecked(int);
// public: struct hkMonitorStreamFrameInfo const & hkArrayBase<struct hkMonitorStreamFrameInfo>::operator[](int) const;
// public: struct hkMonitorStreamFrameInfo & hkArrayBase<struct hkMonitorStreamFrameInfo>::operator[](int);
// public: int hkArrayBase<struct hkMonitorStreamFrameInfo>::getSize(void) const;
// public: void hkArrayBase<struct hkMonitorStreamFrameInfo>::clear(void);
// public: struct hkMonitorStreamFrameInfo & hkArrayBase<struct hkMonitorStreamFrameInfo>::_expandOne(class hkMemoryAllocator &);
// public: class Dummy * hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::getIterator(void) const;
// public: unsigned long hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const;
// public: class Dummy * hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const;
// public: struct hkMonitorStream::TimerCommand & hkArrayBase<struct hkMonitorStream::TimerCommand>::operator[](int);
// public: int hkArrayBase<struct hkMonitorStream::TimerCommand>::getSize(void) const;
// public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::popBack(int);
// public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_pushBack(class hkMemoryAllocator &, struct hkMonitorStream::TimerCommand const &);
// public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::~hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>(int);
// public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::hkArrayBase<struct hkMonitorStreamAnalyzer::Node>(void);
// public: struct hkMonitorStreamAnalyzer::Node const & hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::operator[](int) const;
// public: struct hkMonitorStreamAnalyzer::Node & hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::operator[](int);
// public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::getSize(void) const;
// public: struct hkMonitorStreamAnalyzer::Node * hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::_expandBy(class hkMemoryAllocator &, int);
// public: hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::~hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>(void);
// public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::~hkArrayBase<struct hkMonitorStreamAnalyzer::Node>(void);
// public: hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void);
// public: struct hkMonitorStreamAnalyzerPrintByTypeInfo *& hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::operator[](int);
// public: struct hkMonitorStreamAnalyzerPrintByTypeInfo *& hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::back(void);
// public: int hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getSize(void) const;
// public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::pushBackUnchecked(struct hkMonitorStreamAnalyzerPrintByTypeInfo *const &);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::_reserve(class hkMemoryAllocator &, int);
// public: struct hkMonitorStreamAnalyzerPrintByTypeInfo ** hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::begin(void);
// public: hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::~hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>(void);
// public: hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::~hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void);
// void hkAlgorithm::quickSort<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *)>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo const *));
// public: hkArray<char, struct hkContainerDebugAllocator>::~hkArray<char, struct hkContainerDebugAllocator>(void);
// public: hkArrayBase<float>::hkArrayBase<float>(void);
// public: float & hkArrayBase<float>::operator[](int);
// public: void hkArrayBase<float>::_setSize(class hkMemoryAllocator &, int, float const &);
// public: hkArray<float, struct hkContainerHeapAllocator>::~hkArray<float, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<float>::~hkArrayBase<float>(void);
// int * hkAllocate<int>(int, int);
// void hkDeallocate<int>(int *);
// public: hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>(int);
// struct hkMonitorStreamAnalyzer::Node ** hkAllocateStack<struct hkMonitorStreamAnalyzer::Node *>(int, char const *);
// void hkDeallocateStack<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **);
// public: hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>(struct hkMonitorStreamAnalyzer::Node **, int, int);
// public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>(struct hkMonitorStream::TimerCommand *, int, int);
// public: void hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<char, struct hkContainerDebugAllocator>::clearAndDeallocate(void);
// public: void hkArray<float, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: static int hkMapOperations<unsigned long>::isValid(unsigned long);
// public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStreamColorTable::ColorPair>(struct hkMonitorStreamColorTable::ColorPair *, int, struct hkMonitorStreamColorTable::ColorPair const &, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, int);
// public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, struct hkMonitorStreamAnalyzer::Node *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >(class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >(class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkMonitorStreamFrameInfo>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<struct hkMonitorStreamFrameInfo>(struct hkMonitorStreamFrameInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkMonitorStreamFrameInfo>(struct hkMonitorStreamFrameInfo *, int, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkMonitorStream::TimerCommand>::hkArrayBase<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, int);
// public: hkArrayBase<struct hkMonitorStream::TimerCommand>::~hkArrayBase<struct hkMonitorStream::TimerCommand>(void);
// public: int hkArrayBase<struct hkMonitorStream::TimerCommand>::getCapacity(void) const;
// public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, struct hkMonitorStream::TimerCommand const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<struct hkMonitorStreamAnalyzer::Node>(struct hkMonitorStreamAnalyzer::Node *, int, struct hkTraitBool<0>);
// public: hkMonitorStreamAnalyzer::Node::Node(void);
// public: hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>(void);
// public: int hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, struct hkMonitorStreamAnalyzerPrintByTypeInfo *const &, struct hkTraitBool<1>);
// void hkAlgorithm::quickSortRecursive<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *)>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, int, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo const *));
// public: void hkArrayBase<float>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<float>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<float>(float *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<float>(float *, int, float const &, struct hkTraitBool<1>);
// public: hkMonitorStreamColorTable::ColorPair::ColorPair(struct hkMonitorStreamColorTable::ColorPair const &);
// public: void * hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>(void);
// public: static void hkArrayBase<struct hkMonitorStreamFrameInfo>::operator delete(void *);
// public: int hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::getCapacity(void) const;
// public: hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkMonitorStreamFrameInfo>::hkArrayBase<struct hkMonitorStreamFrameInfo>(void);
// public: hkArrayBase<struct hkMonitorStreamFrameInfo>::~hkArrayBase<struct hkMonitorStreamFrameInfo>(void);
// public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::clear(void);
// public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::getCapacity(void) const;
// public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::clear(void);
// public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::clear(void);
// public: int hkArrayBase<float>::getCapacity(void) const;
// public: void hkArrayBase<float>::clear(void);
// public: void hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkMonitorStreamFrameInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkMonitorStreamAnalyzer::Node>(struct hkMonitorStreamAnalyzer::Node *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, struct hkTraitBool<1>);

//public: hkMonitorStreamStringMap::hkMonitorStreamStringMap(void)
//{
//    mangled_ppc("??0hkMonitorStreamStringMap@@QAA@XZ");
//};

//public: hkMonitorStreamStringMap::hkMonitorStreamStringMap(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkMonitorStreamStringMap@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkMonitorStreamStringMap::StringMap::StringMap(void)
//{
//    mangled_ppc("??0StringMap@hkMonitorStreamStringMap@@QAA@XZ");
//};

//public: hkMonitorStreamStringMap::StringMap::StringMap(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0StringMap@hkMonitorStreamStringMap@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkMonitorStreamAnalyzer::Node::Node(struct hkMonitorStreamAnalyzer::Node *, char const *, enum hkMonitorStreamAnalyzer::Node::NodeType)
//{
//    mangled_ppc("??0Node@hkMonitorStreamAnalyzer@@QAA@PAU01@PBDW4NodeType@01@@Z");
//};

//public: hkMonitorStreamAnalyzer::Node::~Node(void)
//{
//    mangled_ppc("??1Node@hkMonitorStreamAnalyzer@@QAA@XZ");
//};

//public: char * hkMonitorStreamAnalyzer::getStreamBegin(void)
//{
//    mangled_ppc("?getStreamBegin@hkMonitorStreamAnalyzer@@QAAPADXZ");
//};

//public: hkMonitorStreamAnalyzer::hkMonitorStreamAnalyzer(int, int, int)
//{
//    mangled_ppc("??0hkMonitorStreamAnalyzer@@QAA@HHH@Z");
//};

//public: void hkMonitorStreamAnalyzer::resetNumThreads(int, int)
//{
//    mangled_ppc("?resetNumThreads@hkMonitorStreamAnalyzer@@QAAXHH@Z");
//};

//public: void hkMonitorStreamAnalyzer::reset(void)
//{
//    mangled_ppc("?reset@hkMonitorStreamAnalyzer@@QAAXXZ");
//};

//public: hkMonitorStreamFrameInfo::hkMonitorStreamFrameInfo(void)
//{
//    mangled_ppc("??0hkMonitorStreamFrameInfo@@QAA@XZ");
//};

//public: static void hkMonitorStreamAnalyzer::applyStringMap(char const *, char const *, class hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator> const &, class hkBool)
//{
//    mangled_ppc("?applyStringMap@hkMonitorStreamAnalyzer@@SAXPBD0ABV?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@VhkBool@@@Z");
//};

//public: static void hkMonitorStreamAnalyzer::extractStringMap(char const *, char const *, class hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?extractStringMap@hkMonitorStreamAnalyzer@@SAXPBD0AAV?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkBool hkMonitorStreamAnalyzer::captureFrameDetails(char const *, char const *, struct hkMonitorStreamFrameInfo &)
//{
//    mangled_ppc("?captureFrameDetails@hkMonitorStreamAnalyzer@@QAA?AVhkBool@@PBD0AAUhkMonitorStreamFrameInfo@@@Z");
//};

//public: void hkMonitorStreamAnalyzer::Node::setTimers(struct hkMonitorStreamFrameInfo const &, struct hkMonitorStream::TimerCommand const &, struct hkMonitorStream::TimerCommand const &)
//{
//    mangled_ppc("?setTimers@Node@hkMonitorStreamAnalyzer@@QAAXABUhkMonitorStreamFrameInfo@@ABUTimerCommand@hkMonitorStream@@1@Z");
//};

//public: static void hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *, int, int, float)
//{
//    mangled_ppc("?mergeTreesForCombinedThreadSummary@hkMonitorStreamAnalyzer@@SAXPAUNode@1@0HHM@Z");
//};

//void reduceMainTree(struct hkMonitorStreamAnalyzer::Node *, int, float)
//{
//    mangled_ppc("?reduceMainTree@@YAXPAUNode@hkMonitorStreamAnalyzer@@HM@Z");
//};

//void mergeSubTree(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *, int, int, float)
//{
//    mangled_ppc("?mergeSubTree@@YAXPAUNode@hkMonitorStreamAnalyzer@@0HHM@Z");
//};

//bool findChildWithHint(struct hkMonitorStreamAnalyzer::Node *, char const *, int &)
//{
//    mangled_ppc("?findChildWithHint@@YA_NPAUNode@hkMonitorStreamAnalyzer@@PBDAAH@Z");
//};

//public: static struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::navigateMonitors(struct hkMonitorStreamAnalyzer::CursorKeys const &, struct hkMonitorStreamAnalyzer::Node *)
//{
//    mangled_ppc("?navigateMonitors@hkMonitorStreamAnalyzer@@SAPAUNode@1@ABUCursorKeys@1@PAU21@@Z");
//};

//public: static int hkMonitorStreamAnalyzer::findMaxTimerNameIndent(struct hkMonitorStreamAnalyzer::Node *, int, int, bool)
//{
//    mangled_ppc("?findMaxTimerNameIndent@hkMonitorStreamAnalyzer@@SAHPAUNode@1@HH_N@Z");
//};

//public: static void hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec(class hkOstream &, struct hkMonitorStreamAnalyzer::Node *, int, int, int, struct hkMonitorStreamAnalyzer::CombinedThreadSummaryOptions const &)
//{
//    mangled_ppc("?showCombinedThreadSummaryRec@hkMonitorStreamAnalyzer@@SAXAAVhkOstream@@PAUNode@1@HHHABUCombinedThreadSummaryOptions@1@@Z");
//};

//public: static struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame(char const *, char const *, struct hkMonitorStreamFrameInfo const &, char const *, class hkBool)
//{
//    mangled_ppc("?makeStatisticsTreeForSingleFrame@hkMonitorStreamAnalyzer@@SAPAUNode@1@PBD0ABUhkMonitorStreamFrameInfo@@0VhkBool@@@Z");
//};

//struct hkMonitorStreamAnalyzer::Node * createNewNode(struct hkMonitorStreamAnalyzer::Node *, char const *, enum hkMonitorStreamAnalyzer::Node::NodeType, bool)
//{
//    mangled_ppc("?createNewNode@@YAPAUNode@hkMonitorStreamAnalyzer@@PAU12@PBDW4NodeType@12@_N@Z");
//};

//public: struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::makeStatisticsTreeForMultipleFrames(int, class hkBool)
//{
//    mangled_ppc("?makeStatisticsTreeForMultipleFrames@hkMonitorStreamAnalyzer@@QAAPAUNode@1@HVhkBool@@@Z");
//};

//public: static void hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame(struct hkMonitorStreamAnalyzer::Node *, int, int, class hkOstream &, struct hkMonitorStreamAnalyzer::CombinedThreadSummaryOptions &)
//{
//    mangled_ppc("?showCombinedThreadSummaryForSingleFrame@hkMonitorStreamAnalyzer@@SAXPAUNode@1@HHAAVhkOstream@@AAUCombinedThreadSummaryOptions@1@@Z");
//};

//public: static void hkMonitorStreamAnalyzer::writeStatisticsDetails(class hkOstream &, class hkArrayBase<struct hkMonitorStreamAnalyzer::Node *> &, int, int, int, char const *, bool)
//{
//    mangled_ppc("?writeStatisticsDetails@hkMonitorStreamAnalyzer@@SAXAAVhkOstream@@AAV?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@HHHPBD_N@Z");
//};

//void printStatisticsByType(class hkOstream &, struct hkMonitorStreamAnalyzer::Node *, float)
//{
//    mangled_ppc("?printStatisticsByType@@YAXAAVhkOstream@@PAUNode@hkMonitorStreamAnalyzer@@M@Z");
//};

//void hkBuildSizePerName(struct hkMonitorStreamAnalyzer::Node const *, class hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *> &)
//{
//    mangled_ppc("?hkBuildSizePerName@@YAXPBUNode@hkMonitorStreamAnalyzer@@AAV?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@@Z");
//};

//void hkMakeSum(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node const *)
//{
//    mangled_ppc("?hkMakeSum@@YAXPAUNode@hkMonitorStreamAnalyzer@@PBU12@@Z");
//};

//void printSingleNodeValues(class hkOstream &, float, struct hkMonitorStreamAnalyzer::Node const *)
//{
//    mangled_ppc("?printSingleNodeValues@@YAXAAVhkOstream@@MPBUNode@hkMonitorStreamAnalyzer@@@Z");
//};

//void hkWriteRec(class hkOstream &, struct hkMonitorStreamAnalyzer::Node *, int, float)
//{
//    mangled_ppc("?hkWriteRec@@YAXAAVhkOstream@@PAUNode@hkMonitorStreamAnalyzer@@HM@Z");
//};

//struct hkMonitorStreamAnalyzer::Node * hkFindChildByName(struct hkMonitorStreamAnalyzer::Node *, char const *, class hkBool)
//{
//    mangled_ppc("?hkFindChildByName@@YAPAUNode@hkMonitorStreamAnalyzer@@PAU12@PBDVhkBool@@@Z");
//};

//struct hkMonitorStreamAnalyzer::Node * hkFindNextChildByName(struct hkMonitorStreamAnalyzer::Node *, char const *, struct hkMonitorStreamAnalyzer::Node const *)
//{
//    mangled_ppc("?hkFindNextChildByName@@YAPAUNode@hkMonitorStreamAnalyzer@@PAU12@PBDPBU12@@Z");
//};

//void hkMakeSumRecursive(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *)
//{
//    mangled_ppc("?hkMakeSumRecursive@@YAXPAUNode@hkMonitorStreamAnalyzer@@0@Z");
//};

//public: void hkMonitorStreamAnalyzer::writeStatistics(class hkOstream &, int)
//{
//    mangled_ppc("?writeStatistics@hkMonitorStreamAnalyzer@@QAAXAAVhkOstream@@H@Z");
//};

//public: void hkMonitorStreamAnalyzer::writeRawStatistics(class hkOstream &)
//{
//    mangled_ppc("?writeRawStatistics@hkMonitorStreamAnalyzer@@QAAXAAVhkOstream@@@Z");
//};

//struct hkMonitorStreamAnalyzer::Node * getNodeAtSample(struct hkMonitorStreamAnalyzer::Node *, struct hkMonitorStreamAnalyzer::Node *, double, int)
//{
//    mangled_ppc("?getNodeAtSample@@YAPAUNode@hkMonitorStreamAnalyzer@@PAU12@0NH@Z");
//};

//public: void hkMonitorStreamColorTable::setupDefaultColorTable(void)
//{
//    mangled_ppc("?setupDefaultColorTable@hkMonitorStreamColorTable@@QAAXXZ");
//};

//public: unsigned int hkMonitorStreamColorTable::findColor(char const *)
//{
//    mangled_ppc("?findColor@hkMonitorStreamColorTable@@QAAIPBD@Z");
//};

//public: void hkMonitorStreamColorTable::addColor(char const *, enum hkColor::ExtendedColors)
//{
//    mangled_ppc("?addColor@hkMonitorStreamColorTable@@QAAXPBDW4ExtendedColors@hkColor@@@Z");
//};

//bool saveToTGA(int *, class hkOstream &, int, int)
//{
//    mangled_ppc("?saveToTGA@@YA_NPAHAAVhkOstream@@HH@Z");
//};

//public: void hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames(void) const
//{
//    mangled_ppc("?checkAllThreadsCapturedSameNumFrames@hkMonitorStreamAnalyzer@@QBAXXZ");
//};

//public: static int hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit(int, int, int, int, int)
//{
//    mangled_ppc("?computePerThreadHeightToFit@ThreadDrawInput@hkMonitorStreamAnalyzer@@SAHHHHHH@Z");
//};

//public: static void hkMonitorStreamAnalyzer::getTimerLimits(class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &, float &, class hkArray<float, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getTimerLimits@hkMonitorStreamAnalyzer@@SAXAAV?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@ABUThreadDrawInput@1@AAV?$hkArray@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@AAMAAV?$hkArray@MUhkContainerHeapAllocator@@@@@Z");
//};

//float __hkMin(float, float)
//{
//    mangled_ppc("?__hkMin@@YAMMM@Z");
//};

//float __hkMax(float, float)
//{
//    mangled_ppc("?__hkMax@@YAMMM@Z");
//};

//unsigned int hkRoundUpPow2(unsigned int)
//{
//    mangled_ppc("?hkRoundUpPow2@@YAII@Z");
//};

//public: static void hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture(class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &, int *&, int &, struct hkMonitorStreamAnalyzer::SampleInfo *)
//{
//    mangled_ppc("?writeStatisticsDetailsToTexture@hkMonitorStreamAnalyzer@@SAXAAV?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@ABUThreadDrawInput@1@AAV?$hkArray@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@AAPAHAAHPAUSampleInfo@1@@Z");
//};

//void drawNumber(int, int, int, int *)
//{
//    mangled_ppc("?drawNumber@@YAXHHHPAH@Z");
//};

//void drawDigit(int, int, int, int *)
//{
//    mangled_ppc("?drawDigit@@YAXHHHPAH@Z");
//};

//void drawStatistics(struct hkMonitorStreamFrameInfo &, int, class hkArrayBase<struct hkMonitorStreamAnalyzer::Node *> const &, int *, int, struct hkMonitorStreamColorTable &, int, int, float, float, class hkPointerMap<char const *, int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?drawStatistics@@YAXAAUhkMonitorStreamFrameInfo@@HABV?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@PAHHAAUhkMonitorStreamColorTable@@HHMMAAV?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@@Z");
//};

//void outputStatsForFrame(struct hkMonitorStreamAnalyzer::Node *, float, float, int, class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, int)
//{
//    mangled_ppc("?outputStatsForFrame@@YAXPAUNode@hkMonitorStreamAnalyzer@@MMHAAV?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: static void hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga(class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &, class hkOstream &, struct hkMonitorStreamAnalyzer::SampleInfo *)
//{
//    mangled_ppc("?writeStatisticsDetailsToTga@hkMonitorStreamAnalyzer@@SAXAAV?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@ABUThreadDrawInput@1@AAV?$hkArray@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@AAVhkOstream@@PAUSampleInfo@1@@Z");
//};

//public: void hkMonitorStreamAnalyzer::drawThreadsToTga(struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkOstream &)
//{
//    mangled_ppc("?drawThreadsToTga@hkMonitorStreamAnalyzer@@QAAXABUThreadDrawInput@1@AAVhkOstream@@@Z");
//};

//public: static struct hkMonitorStreamAnalyzer::Node * hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample(int, int, class hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator> &, struct hkMonitorStreamAnalyzer::ThreadDrawInput const &, class hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?reverseLookupNodeAtTgaSample@hkMonitorStreamAnalyzer@@SAPAUNode@1@HHAAV?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@ABUThreadDrawInput@1@AAV?$hkArray@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@@Z");
//};

//struct hkMonitorStreamAnalyzer::Node * getNodeSampledAtTick(struct hkMonitorStreamFrameInfo &, int, int, class hkArrayBase<struct hkMonitorStreamAnalyzer::Node *> const &, int, float, float)
//{
//    mangled_ppc("?getNodeSampledAtTick@@YAPAUNode@hkMonitorStreamAnalyzer@@AAUhkMonitorStreamFrameInfo@@HHABV?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@HMM@Z");
//};

//public: void * hkMonitorStreamAnalyzer::Node::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GNode@hkMonitorStreamAnalyzer@@QAAPAXI@Z");
//};

//public: static void hkMonitorStreamAnalyzer::Node::operator delete(void *)
//{
//    mangled_ppc("??3Node@hkMonitorStreamAnalyzer@@SAXPAX@Z");
//};

//void _byteSwapUint32(unsigned int &)
//{
//    mangled_ppc("?_byteSwapUint32@@YAXAAI@Z");
//};

//void _byteSwapFloat(float &)
//{
//    mangled_ppc("?_byteSwapFloat@@YAXAAM@Z");
//};

//public: static void * hkMonitorStreamAnalyzer::Node::operator new(unsigned int)
//{
//    mangled_ppc("??2Node@hkMonitorStreamAnalyzer@@SAPAXI@Z");
//};

//bool hkCompareInfosBySize(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo const *)
//{
//    mangled_ppc("?hkCompareInfosBySize@@YA_NPBUhkMonitorStreamAnalyzerPrintByTypeInfo@@0@Z");
//};

//public: bool hkMonitorStreamAnalyzerPrintByTypeInfo::operator<(struct hkMonitorStreamAnalyzerPrintByTypeInfo const &) const
//{
//    mangled_ppc("??MhkMonitorStreamAnalyzerPrintByTypeInfo@@QBA_NABU0@@Z");
//};

//public: static void * hkMonitorStreamAnalyzer::Node::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Node@hkMonitorStreamAnalyzer@@SAPAXIPAX@Z");
//};

//public: static void * hkMonitorStreamAnalyzerPrintByTypeInfo::operator new(unsigned int)
//{
//    mangled_ppc("??2hkMonitorStreamAnalyzerPrintByTypeInfo@@SAPAXI@Z");
//};

//public: hkMonitorStreamAnalyzerPrintByTypeInfo::hkMonitorStreamAnalyzerPrintByTypeInfo(void)
//{
//    mangled_ppc("??0hkMonitorStreamAnalyzerPrintByTypeInfo@@QAA@XZ");
//};

//public: hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::~hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void)
//{
//    mangled_ppc("??1?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAA@XZ");
//};

//public: void * hkMonitorStreamAnalyzerPrintByTypeInfo::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkMonitorStreamAnalyzerPrintByTypeInfo@@QAAPAXI@Z");
//};

//public: static void hkMonitorStreamAnalyzerPrintByTypeInfo::operator delete(void *)
//{
//    mangled_ppc("??3hkMonitorStreamAnalyzerPrintByTypeInfo@@SAXPAX@Z");
//};

//public: hkMonitorStreamAnalyzerPrintByTypeInfo::~hkMonitorStreamAnalyzerPrintByTypeInfo(void)
//{
//    mangled_ppc("??1hkMonitorStreamAnalyzerPrintByTypeInfo@@QAA@XZ");
//};

//public: `anonymous namespace'::Indenter::Indenter(void)
//{
//    mangled_ppc("??0Indenter@?A0x3fcb32eb@@QAA@XZ");
//};

//public: char const * `anonymous namespace'::Indenter::get(void) const
//{
//    mangled_ppc("?get@Indenter@?A0x3fcb32eb@@QBAPBDXZ");
//};

//public: void `anonymous namespace'::Indenter::left(void)
//{
//    mangled_ppc("?left@Indenter@?A0x3fcb32eb@@QAAXXZ");
//};

//public: void `anonymous namespace'::Indenter::right(void)
//{
//    mangled_ppc("?right@Indenter@?A0x3fcb32eb@@QAAXXZ");
//};

//public: void `anonymous namespace'::Indenter::clear(void)
//{
//    mangled_ppc("?clear@Indenter@?A0x3fcb32eb@@QAAXXZ");
//};

//public: `anonymous namespace'::Indenter::~Indenter(void)
//{
//    mangled_ppc("??1Indenter@?A0x3fcb32eb@@QAA@XZ");
//};

//struct hkMonitorStreamAnalyzer::Node * findChildNode(struct hkMonitorStreamAnalyzer::Node *, double, int)
//{
//    mangled_ppc("?findChildNode@@YAPAUNode@hkMonitorStreamAnalyzer@@PAU12@NH@Z");
//};

//public: hkMonitorStreamColorTable::ColorPair::ColorPair(char const *, enum hkColor::ExtendedColors)
//{
//    mangled_ppc("??0ColorPair@hkMonitorStreamColorTable@@QAA@PBDW4ExtendedColors@hkColor@@@Z");
//};

//public: hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::~hkPointerMap<char const *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UStringMap@hkMonitorStreamStringMap@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamStringMap::StringMap, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UStringMap@hkMonitorStreamStringMap@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>(enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter)
//{
//    mangled_ppc("??0?$hkEnum@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@I@@QAA@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@@Z");
//};

//public: enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::operator enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@I@@QBA?AW4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@XZ");
//};

//public: class hkBool hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::operator==(enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter) const
//{
//    mangled_ppc("??8?$hkEnum@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@I@@QBA?AVhkBool@@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@@Z");
//};

//public: class hkBool hkEnum<enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter, unsigned int>::operator!=(enum hkMonitorStreamFrameInfo::AbsoluteTimeCounter) const
//{
//    mangled_ppc("??9?$hkEnum@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@I@@QBA?AVhkBool@@W4AbsoluteTimeCounter@hkMonitorStreamFrameInfo@@@Z");
//};

//public: hkEnum<enum hkColor::ExtendedColors, unsigned int>::hkEnum<enum hkColor::ExtendedColors, unsigned int>(enum hkColor::ExtendedColors)
//{
//    mangled_ppc("??0?$hkEnum@W4ExtendedColors@hkColor@@I@@QAA@W4ExtendedColors@hkColor@@@Z");
//};

//public: enum hkColor::ExtendedColors hkEnum<enum hkColor::ExtendedColors, unsigned int>::operator enum hkColor::ExtendedColors(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4ExtendedColors@hkColor@@I@@QBA?AW4ExtendedColors@hkColor@@XZ");
//};

//public: void hkArray<struct hkMonitorStreamColorTable::ColorPair, struct hkContainerHeapAllocator>::pushBack(struct hkMonitorStreamColorTable::ColorPair const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UColorPair@hkMonitorStreamColorTable@@UhkContainerHeapAllocator@@@@QAAXABUColorPair@hkMonitorStreamColorTable@@@Z");
//};

//public: hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::pushBack(struct hkMonitorStreamAnalyzer::Node *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAAXABQAUNode@hkMonitorStreamAnalyzer@@@Z");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>(enum hkMonitorStreamAnalyzer::Node::NodeType)
//{
//    mangled_ppc("??0?$hkEnum@W4NodeType@Node@hkMonitorStreamAnalyzer@@I@@QAA@W4NodeType@Node@hkMonitorStreamAnalyzer@@@Z");
//};

//public: enum hkMonitorStreamAnalyzer::Node::NodeType hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::operator enum hkMonitorStreamAnalyzer::Node::NodeType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4NodeType@Node@hkMonitorStreamAnalyzer@@I@@QBA?AW4NodeType@Node@hkMonitorStreamAnalyzer@@XZ");
//};

//public: class hkBool hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::operator==(enum hkMonitorStreamAnalyzer::Node::NodeType) const
//{
//    mangled_ppc("??8?$hkEnum@W4NodeType@Node@hkMonitorStreamAnalyzer@@I@@QBA?AVhkBool@@W4NodeType@Node@hkMonitorStreamAnalyzer@@@Z");
//};

//public: hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkMonitorStreamFrameInfo & hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@QAAAAUhkMonitorStreamFrameInfo@@XZ");
//};

//public: int hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::insert(void const *, char const *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QAAHPBXPBD@Z");
//};

//public: enum hkResult hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::get(void const *, char const **) const
//{
//    mangled_ppc("?get@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QBA?AW4hkResult@@PBXPAPBD@Z");
//};

//public: hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@KKU?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UTimerCommand@hkMonitorStream@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::pushBack(struct hkMonitorStream::TimerCommand const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UTimerCommand@hkMonitorStream@@UhkContainerHeapAllocator@@@@QAAXABUTimerCommand@hkMonitorStream@@@Z");
//};

//public: void hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UTimerCommand@hkMonitorStream@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UNode@hkMonitorStreamAnalyzer@@UhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: struct hkMonitorStreamAnalyzer::Node * hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@UNode@hkMonitorStreamAnalyzer@@UhkContainerDebugAllocator@@@@QAAPAUNode@hkMonitorStreamAnalyzer@@H@Z");
//};

//public: hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void)
//{
//    mangled_ppc("??0?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAA@XZ");
//};

//public: void hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::insert(char const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *)
//{
//    mangled_ppc("?insert@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAXPBDPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@Z");
//};

//public: struct hkMonitorStreamAnalyzerPrintByTypeInfo * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getWithDefault(char const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@PBDPAU2@@Z");
//};

//public: int hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAHXZ");
//};

//public: class Dummy * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAPAVDummy@@XZ");
//};

//public: struct hkMonitorStreamAnalyzerPrintByTypeInfo * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@PAVDummy@@@Z");
//};

//public: class Dummy * hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkStringMap<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkStringMap@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@UhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>::hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PAUNode@hkMonitorStreamAnalyzer@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>::~hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PAUNode@hkMonitorStreamAnalyzer@@@@QAA@XZ");
//};

//public: hkArray<char, struct hkContainerDebugAllocator>::hkArray<char, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@DUhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: void hkArray<char, struct hkContainerDebugAllocator>::pushBack(char const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@DUhkContainerDebugAllocator@@@@QAAXABD@Z");
//};

//public: void hkArray<char, struct hkContainerDebugAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@DUhkContainerDebugAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<char, struct hkContainerDebugAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@DUhkContainerDebugAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::hkPointerMap<char const *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::insert(char const *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QAAHPBDH@Z");
//};

//public: enum hkResult hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::get(char const *, int *) const
//{
//    mangled_ppc("?get@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QBA?AW4hkResult@@PBDPAH@Z");
//};

//public: class Dummy * hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: char const * hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QBAPBDPAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkArray<float, struct hkContainerHeapAllocator>::hkArray<float, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@MUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<float, struct hkContainerHeapAllocator>::setSize(int, float const &)
//{
//    mangled_ppc("?setSize@?$hkArray@MUhkContainerHeapAllocator@@@@QAAXHABM@Z");
//};

//public: hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAUNode@hkMonitorStreamAnalyzer@@$05UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamStringMap::StringMap>::hkArrayBase<struct hkMonitorStreamStringMap::StringMap>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UStringMap@hkMonitorStreamStringMap@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: int hkCachedHashMap<struct hkStringMapOperations>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkCachedHashMap@UhkStringMapOperations@@@@QBAHXZ");
//};

//public: hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@KKU?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: int hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, unsigned long)
//{
//    mangled_ppc("?insert@?$hkMap@KKU?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAHKK@Z");
//};

//public: class hkBool hkLocalArray<struct hkMonitorStreamAnalyzer::Node *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PAUNode@hkMonitorStreamAnalyzer@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMap<unsigned long, unsigned long, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@KKU?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??0?$hkMapBase@KKU?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamStringMap::StringMap>::hkArrayBase<struct hkMonitorStreamStringMap::StringMap>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UStringMap@hkMonitorStreamStringMap@@@@QAA@XZ");
//};

//public: struct hkMonitorStreamColorTable::ColorPair & hkArrayBase<struct hkMonitorStreamColorTable::ColorPair>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UColorPair@hkMonitorStreamColorTable@@@@QAAAAUColorPair@hkMonitorStreamColorTable@@H@Z");
//};

//public: int hkArrayBase<struct hkMonitorStreamColorTable::ColorPair>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UColorPair@hkMonitorStreamColorTable@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamColorTable::ColorPair>::_pushBack(class hkMemoryAllocator &, struct hkMonitorStreamColorTable::ColorPair const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UColorPair@hkMonitorStreamColorTable@@@@QAAXAAVhkMemoryAllocator@@ABUColorPair@hkMonitorStreamColorTable@@@Z");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAA@XZ");
//};

//public: struct hkMonitorStreamAnalyzer::Node *const & hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QBAABQAUNode@hkMonitorStreamAnalyzer@@H@Z");
//};

//public: struct hkMonitorStreamAnalyzer::Node *& hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAAAPAUNode@hkMonitorStreamAnalyzer@@H@Z");
//};

//public: struct hkMonitorStreamAnalyzer::Node *& hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAAAPAUNode@hkMonitorStreamAnalyzer@@XZ");
//};

//public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_pushBack(class hkMemoryAllocator &, struct hkMonitorStreamAnalyzer::Node *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@ABQAUNode@hkMonitorStreamAnalyzer@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::~hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::~hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> const & hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QBAABV?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QAAAAV?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: int hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: char & hkArrayBase<char>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@D@@QAAAADXZ");
//};

//public: void hkArrayBase<char>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@D@@QAAXH@Z");
//};

//public: void hkArrayBase<char>::_pushBack(class hkMemoryAllocator &, char const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@ABD@Z");
//};

//public: char * hkArrayBase<char>::expandByUnchecked(int)
//{
//    mangled_ppc("?expandByUnchecked@?$hkArrayBase@D@@QAAPADH@Z");
//};

//public: struct hkMonitorStreamFrameInfo const & hkArrayBase<struct hkMonitorStreamFrameInfo>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QBAABUhkMonitorStreamFrameInfo@@H@Z");
//};

//public: struct hkMonitorStreamFrameInfo & hkArrayBase<struct hkMonitorStreamFrameInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QAAAAUhkMonitorStreamFrameInfo@@H@Z");
//};

//public: int hkArrayBase<struct hkMonitorStreamFrameInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamFrameInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QAAXXZ");
//};

//public: struct hkMonitorStreamFrameInfo & hkArrayBase<struct hkMonitorStreamFrameInfo>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QAAAAUhkMonitorStreamFrameInfo@@AAVhkMemoryAllocator@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@KKU?$hkMapOperations@K@@@@QBAPAVDummy@@XZ");
//};

//public: unsigned long hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@KKU?$hkMapOperations@K@@@@QBAKPAVDummy@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@KKU?$hkMapOperations@K@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<unsigned long, unsigned long, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@KKU?$hkMapOperations@K@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: struct hkMonitorStream::TimerCommand & hkArrayBase<struct hkMonitorStream::TimerCommand>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAAAUTimerCommand@hkMonitorStream@@H@Z");
//};

//public: int hkArrayBase<struct hkMonitorStream::TimerCommand>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_pushBack(class hkMemoryAllocator &, struct hkMonitorStream::TimerCommand const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAXAAVhkMemoryAllocator@@ABUTimerCommand@hkMonitorStream@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::~hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UTimerCommand@hkMonitorStream@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkMonitorStream::TimerCommand, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UTimerCommand@hkMonitorStream@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::hkArrayBase<struct hkMonitorStreamAnalyzer::Node>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAA@XZ");
//};

//public: struct hkMonitorStreamAnalyzer::Node const & hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QBAABUNode@hkMonitorStreamAnalyzer@@H@Z");
//};

//public: struct hkMonitorStreamAnalyzer::Node & hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAAAAUNode@hkMonitorStreamAnalyzer@@H@Z");
//};

//public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QBAHXZ");
//};

//public: struct hkMonitorStreamAnalyzer::Node * hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAAPAUNode@hkMonitorStreamAnalyzer@@AAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::~hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UNode@hkMonitorStreamAnalyzer@@UhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::~hkArrayBase<struct hkMonitorStreamAnalyzer::Node>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAA@XZ");
//};

//public: struct hkMonitorStreamAnalyzerPrintByTypeInfo *& hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAAAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@H@Z");
//};

//public: struct hkMonitorStreamAnalyzerPrintByTypeInfo *& hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAAAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@XZ");
//};

//public: int hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::pushBackUnchecked(struct hkMonitorStreamAnalyzerPrintByTypeInfo *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAXABQAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkMonitorStreamAnalyzerPrintByTypeInfo ** hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAPAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@XZ");
//};

//public: hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::~hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::~hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *)>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo const *))
//{
//    mangled_ppc("??$quickSort@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@P6A_NPBU1@0@Z@hkAlgorithm@@YAXPAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@HP6A_NPBU1@1@Z@Z");
//};

//public: hkArray<char, struct hkContainerDebugAllocator>::~hkArray<char, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@DUhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<float>::hkArrayBase<float>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@M@@QAA@XZ");
//};

//public: float & hkArrayBase<float>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@M@@QAAAAMH@Z");
//};

//public: void hkArrayBase<float>::_setSize(class hkMemoryAllocator &, int, float const &)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@M@@QAAXAAVhkMemoryAllocator@@HABM@Z");
//};

//public: hkArray<float, struct hkContainerHeapAllocator>::~hkArray<float, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@MUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<float>::~hkArrayBase<float>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@M@@QAA@XZ");
//};

//int * hkAllocate<int>(int, int)
//{
//    mangled_ppc("??$hkAllocate@H@@YAPAHHH@Z");
//};

//void hkDeallocate<int>(int *)
//{
//    mangled_ppc("??$hkDeallocate@H@@YAXPAH@Z");
//};

//public: hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkMonitorStreamAnalyzer::Node *, 6, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAUNode@hkMonitorStreamAnalyzer@@$05UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//struct hkMonitorStreamAnalyzer::Node ** hkAllocateStack<struct hkMonitorStreamAnalyzer::Node *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PAUNode@hkMonitorStreamAnalyzer@@@@YAPAPAUNode@hkMonitorStreamAnalyzer@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **)
//{
//    mangled_ppc("??$hkDeallocateStack@PAUNode@hkMonitorStreamAnalyzer@@@@YAXPAPAUNode@hkMonitorStreamAnalyzer@@@Z");
//};

//public: hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>(struct hkMonitorStreamAnalyzer::Node **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAA@PAPAUNode@hkMonitorStreamAnalyzer@@HH@Z");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzer::Node *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUNode@hkMonitorStreamAnalyzer@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>(struct hkMonitorStream::TimerCommand *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UTimerCommand@hkMonitorStream@@UhkContainerHeapAllocator@@@@QAA@PAUTimerCommand@hkMonitorStream@@HH@Z");
//};

//public: void hkArray<struct hkMonitorStream::TimerCommand, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UTimerCommand@hkMonitorStream@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzer::Node, struct hkContainerDebugAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UNode@hkMonitorStreamAnalyzer@@UhkContainerDebugAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<char, struct hkContainerDebugAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@DUhkContainerDebugAllocator@@@@QAAXXZ");
//};

//public: void hkArray<float, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@MUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: static int hkMapOperations<unsigned long>::isValid(unsigned long)
//{
//    mangled_ppc("?isValid@?$hkMapOperations@K@@SAHK@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStreamColorTable::ColorPair>(struct hkMonitorStreamColorTable::ColorPair *, int, struct hkMonitorStreamColorTable::ColorPair const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UColorPair@hkMonitorStreamColorTable@@@hkArrayUtil@@SAXPAUColorPair@hkMonitorStreamColorTable@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAA@PAPAUNode@hkMonitorStreamAnalyzer@@HH@Z");
//};

//public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAUNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUNode@hkMonitorStreamAnalyzer@@@hkArrayUtil@@SAXPAPAUNode@hkMonitorStreamAnalyzer@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, struct hkMonitorStreamAnalyzer::Node *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUNode@hkMonitorStreamAnalyzer@@@hkArrayUtil@@SAXPAPAUNode@hkMonitorStreamAnalyzer@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkMonitorStreamAnalyzer::Node *>(struct hkMonitorStreamAnalyzer::Node **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAUNode@hkMonitorStreamAnalyzer@@@hkArrayUtil@@SAXPAPAUNode@hkMonitorStreamAnalyzer@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >(class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >(class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkMonitorStreamFrameInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkMonitorStreamFrameInfo>(struct hkMonitorStreamFrameInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkMonitorStreamFrameInfo@@@hkArrayUtil@@SAXPAUhkMonitorStreamFrameInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkMonitorStreamFrameInfo>(struct hkMonitorStreamFrameInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkMonitorStreamFrameInfo@@@hkArrayUtil@@SAXPAUhkMonitorStreamFrameInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkMonitorStream::TimerCommand>::hkArrayBase<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAA@PAUTimerCommand@hkMonitorStream@@HH@Z");
//};

//public: hkArrayBase<struct hkMonitorStream::TimerCommand>::~hkArrayBase<struct hkMonitorStream::TimerCommand>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkMonitorStream::TimerCommand>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UTimerCommand@hkMonitorStream@@@hkArrayUtil@@SAXPAUTimerCommand@hkMonitorStream@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, struct hkMonitorStream::TimerCommand const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UTimerCommand@hkMonitorStream@@@hkArrayUtil@@SAXPAUTimerCommand@hkMonitorStream@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkMonitorStream::TimerCommand>(struct hkMonitorStream::TimerCommand *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UTimerCommand@hkMonitorStream@@@hkArrayUtil@@SAXPAUTimerCommand@hkMonitorStream@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<struct hkMonitorStreamAnalyzer::Node>(struct hkMonitorStreamAnalyzer::Node *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UNode@hkMonitorStreamAnalyzer@@@hkArrayUtil@@SAXPAUNode@hkMonitorStreamAnalyzer@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkMonitorStreamAnalyzer::Node::Node(void)
//{
//    mangled_ppc("??0Node@hkMonitorStreamAnalyzer@@QAA@XZ");
//};

//public: hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>::hkEnum<enum hkMonitorStreamAnalyzer::Node::NodeType, unsigned int>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4NodeType@Node@hkMonitorStreamAnalyzer@@I@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, struct hkMonitorStreamAnalyzerPrintByTypeInfo *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@hkArrayUtil@@SAXPAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@HABQAU1@U?$hkTraitBool@$00@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkMonitorStreamAnalyzerPrintByTypeInfo *, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo *)>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, int, bool (*)(struct hkMonitorStreamAnalyzerPrintByTypeInfo const *, struct hkMonitorStreamAnalyzerPrintByTypeInfo const *))
//{
//    mangled_ppc("??$quickSortRecursive@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@P6A_NPBU1@0@Z@hkAlgorithm@@YAXPAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@HHP6A_NPBU1@1@Z@Z");
//};

//public: void hkArrayBase<float>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@M@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<float>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@M@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<float>(float *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@M@hkArrayUtil@@SAXPAMHU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<float>(float *, int, float const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@M@hkArrayUtil@@SAXPAMHABMU?$hkTraitBool@$00@@@Z");
//};

//public: hkMonitorStreamColorTable::ColorPair::ColorPair(struct hkMonitorStreamColorTable::ColorPair const &)
//{
//    mangled_ppc("??0ColorPair@hkMonitorStreamColorTable@@QAA@ABU01@@Z");
//};

//public: void * hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: static void hkArrayBase<struct hkMonitorStreamFrameInfo>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@SAXPAX@Z");
//};

//public: int hkArrayBase<class hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamFrameInfo>::hkArrayBase<struct hkMonitorStreamFrameInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkMonitorStreamFrameInfo>::~hkArrayBase<struct hkMonitorStreamFrameInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkMonitorStream::TimerCommand>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UTimerCommand@hkMonitorStream@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzer::Node>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UNode@hkMonitorStreamAnalyzer@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@@QAAXXZ");
//};

//public: int hkArrayBase<float>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@M@@QBAHXZ");
//};

//public: void hkArrayBase<float>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@M@@QAAXXZ");
//};

//public: void hkArray<struct hkMonitorStreamFrameInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkMonitorStreamFrameInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkMonitorStreamFrameInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkMonitorStreamFrameInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkMonitorStreamAnalyzer::Node>(struct hkMonitorStreamAnalyzer::Node *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UNode@hkMonitorStreamAnalyzer@@@hkArrayUtil@@SAXPAUNode@hkMonitorStreamAnalyzer@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkMonitorStreamAnalyzerPrintByTypeInfo *>(struct hkMonitorStreamAnalyzerPrintByTypeInfo **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUhkMonitorStreamAnalyzerPrintByTypeInfo@@@hkArrayUtil@@SAXPAPAUhkMonitorStreamAnalyzerPrintByTypeInfo@@HU?$hkTraitBool@$00@@@Z");
//};

