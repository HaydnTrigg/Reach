/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkServerDebugDisplayHandler::`vftable'{for `hkDebugDisplayHandler'}; // "??_7hkServerDebugDisplayHandler@@6BhkDebugDisplayHandler@@@"
// const hkServerDebugDisplayHandler::`vftable'{for `hkReferencedObject'}; // "??_7hkServerDebugDisplayHandler@@6BhkReferencedObject@@@"
// const hkServerDebugDisplayHandler::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkServerDebugDisplayHandler@@6BhkReferencedObject@@@"
// hkServerDebugDisplayHandler::`RTTI Class Hierarchy Descriptor'; // "??_R3hkServerDebugDisplayHandler@@8"
// hkServerDebugDisplayHandler::`RTTI Base Class Array'; // "??_R2hkServerDebugDisplayHandler@@8"
// hkServerDebugDisplayHandler::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkServerDebugDisplayHandler@@8"
// hkDebugDisplayHandler::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@hkDebugDisplayHandler@@8"
// const hkServerDebugDisplayHandler::`RTTI Complete Object Locator'{for `hkDebugDisplayHandler'}; // "??_R4hkServerDebugDisplayHandler@@6BhkDebugDisplayHandler@@@"
// class hkServerDebugDisplayHandler::`RTTI Type Descriptor'; // "??_R0?AVhkServerDebugDisplayHandler@@@8"

// public: hkServerDebugDisplayHandler::hkServerDebugDisplayHandler(class hkDisplaySerializeOStream *);
// public: virtual hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler(void);
// protected: void hkServerDebugDisplayHandler::sendGeometryData(class hkArrayBase<class hkDisplayGeometry *> const &);
// public: virtual enum hkResult hkServerDebugDisplayHandler::addGeometry(class hkArray<class hkDisplayGeometry *, struct hkContainerHeapAllocator> const &, class hkTransform const &, unsigned long, int, unsigned long);
// unsigned int _getGeometryByteSize(class hkArrayBase<class hkDisplayGeometry *> const &);
// public: virtual enum hkResult hkServerDebugDisplayHandler::addGeometryInstance(unsigned long, class hkTransform const &, unsigned long, int, unsigned long);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, class hkTransform const &, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::setGeometryColor(int, unsigned long, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::updateGeometry(class hkTransform const &, unsigned long, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::removeGeometry(unsigned long, int, unsigned long);
// public: virtual enum hkResult hkServerDebugDisplayHandler::updateCamera(class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, float, char const *);
// public: virtual enum hkResult hkServerDebugDisplayHandler::updateBehavior(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, class hkArray<char *, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkQsTransform, struct hkContainerHeapAllocator> &);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayPoint(class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayLine(class hkVector4const &, class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayText(char const *, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::display3dText(char const *, class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::displayAnnotation(char const *, int, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::sendMemStatsDump(char const *, int);
// public: virtual enum hkResult hkServerDebugDisplayHandler::holdImmediate(void);
// merged_84826360;
// public: static void hkServerDebugDisplayHandler::operator delete(void *);
// public: class hkDisplayGeometry *const & hkArrayBase<class hkDisplayGeometry *>::operator[](int) const;
// public: class hkQsTransform & hkArrayBase<class hkQsTransform>::operator[](int);
// public: int hkArrayBase<class hkQsTransform>::getSize(void) const;
// [thunk]: public: virtual void * hkServerDebugDisplayHandler::`vector deleting destructor'(unsigned int);

//public: hkServerDebugDisplayHandler::hkServerDebugDisplayHandler(class hkDisplaySerializeOStream *)
//{
//    mangled_ppc("??0hkServerDebugDisplayHandler@@QAA@PAVhkDisplaySerializeOStream@@@Z");
//};

//public: virtual hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler(void)
//{
//    mangled_ppc("??1hkServerDebugDisplayHandler@@UAA@XZ");
//};

//protected: void hkServerDebugDisplayHandler::sendGeometryData(class hkArrayBase<class hkDisplayGeometry *> const &)
//{
//    mangled_ppc("?sendGeometryData@hkServerDebugDisplayHandler@@IAAXABV?$hkArrayBase@PAVhkDisplayGeometry@@@@@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::addGeometry(class hkArray<class hkDisplayGeometry *, struct hkContainerHeapAllocator> const &, class hkTransform const &, unsigned long, int, unsigned long)
//{
//    mangled_ppc("?addGeometry@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABV?$hkArray@PAVhkDisplayGeometry@@UhkContainerHeapAllocator@@@@ABVhkTransform@@KHK@Z");
//};

//unsigned int _getGeometryByteSize(class hkArrayBase<class hkDisplayGeometry *> const &)
//{
//    mangled_ppc("?_getGeometryByteSize@@YAIABV?$hkArrayBase@PAVhkDisplayGeometry@@@@@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::addGeometryInstance(unsigned long, class hkTransform const &, unsigned long, int, unsigned long)
//{
//    mangled_ppc("?addGeometryInstance@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@KABVhkTransform@@KHK@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, class hkTransform const &, int, int, int)
//{
//    mangled_ppc("?displayGeometry@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABV?$hkArrayBase@PAVhkDisplayGeometry@@@@ABVhkTransform@@HHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, int, int, int)
//{
//    mangled_ppc("?displayGeometry@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABV?$hkArrayBase@PAVhkDisplayGeometry@@@@HHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::setGeometryColor(int, unsigned long, int)
//{
//    mangled_ppc("?setGeometryColor@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@HKH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::updateGeometry(class hkTransform const &, unsigned long, int)
//{
//    mangled_ppc("?updateGeometry@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABVhkTransform@@KH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::removeGeometry(unsigned long, int, unsigned long)
//{
//    mangled_ppc("?removeGeometry@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@KHK@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::updateCamera(class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, float, char const *)
//{
//    mangled_ppc("?updateCamera@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABVhkVector4@@00MMMPBD@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::updateBehavior(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, class hkArray<char *, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkQsTransform, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateBehavior@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@AAV?$hkArray@HUhkContainerHeapAllocator@@@@00AAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV?$hkArray@PADUhkContainerHeapAllocator@@@@00AAV?$hkArray@VhkQsTransform@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayPoint(class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?displayPoint@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABVhkVector4@@HHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayLine(class hkVector4const &, class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?displayLine@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABVhkVector4@@0HHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?displayTriangle@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@ABVhkVector4@@00HHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayText(char const *, int, int, int)
//{
//    mangled_ppc("?displayText@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@PBDHHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::display3dText(char const *, class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?display3dText@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@PBDABVhkVector4@@HHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::displayAnnotation(char const *, int, int)
//{
//    mangled_ppc("?displayAnnotation@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@PBDHH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::sendMemStatsDump(char const *, int)
//{
//    mangled_ppc("?sendMemStatsDump@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@PBDH@Z");
//};

//public: virtual enum hkResult hkServerDebugDisplayHandler::holdImmediate(void)
//{
//    mangled_ppc("?holdImmediate@hkServerDebugDisplayHandler@@UAA?AW4hkResult@@XZ");
//};

//merged_84826360
//{
//    mangled_ppc("merged_84826360");
//};

//public: static void hkServerDebugDisplayHandler::operator delete(void *)
//{
//    mangled_ppc("??3hkServerDebugDisplayHandler@@SAXPAX@Z");
//};

//public: class hkDisplayGeometry *const & hkArrayBase<class hkDisplayGeometry *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkDisplayGeometry@@@@QBAABQAVhkDisplayGeometry@@H@Z");
//};

//public: class hkQsTransform & hkArrayBase<class hkQsTransform>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkQsTransform@@@@QAAAAVhkQsTransform@@H@Z");
//};

//public: int hkArrayBase<class hkQsTransform>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkQsTransform@@@@QBAHXZ");
//};

//[thunk]: public: virtual void * hkServerDebugDisplayHandler::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkServerDebugDisplayHandler@@W7AAPAXI@Z");
//};

