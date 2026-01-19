/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkOstream::`RTTI Complete Object Locator'; // "??_R4hkOstream@@6B@"
// const hkReferencedObject::`RTTI Complete Object Locator'; // "??_R4hkReferencedObject@@6B@"
// const hkBaseObject::`RTTI Complete Object Locator'; // "??_R4hkBaseObject@@6B@"
// const hkArrayStreamWriter::`RTTI Complete Object Locator'; // "??_R4hkArrayStreamWriter@@6B@"
// hkArrayStreamWriter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkArrayStreamWriter@@8"
// hkArrayStreamWriter::`RTTI Base Class Array'; // "??_R2hkArrayStreamWriter@@8"
// hkArrayStreamWriter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkArrayStreamWriter@@8"
// hkStreamWriter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkStreamWriter@@8"
// hkStreamWriter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkStreamWriter@@8"
// hkStreamWriter::`RTTI Base Class Array'; // "??_R2hkStreamWriter@@8"
// const hkStreamWriter::`RTTI Complete Object Locator'; // "??_R4hkStreamWriter@@6B@"
// const hkMemoryTrackStreamWriter::`RTTI Complete Object Locator'; // "??_R4hkMemoryTrackStreamWriter@@6B@"
// hkMemoryTrackStreamWriter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkMemoryTrackStreamWriter@@8"
// hkMemoryTrackStreamWriter::`RTTI Base Class Array'; // "??_R2hkMemoryTrackStreamWriter@@8"
// hkMemoryTrackStreamWriter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkMemoryTrackStreamWriter@@8"
// class hkArrayStreamWriter::`RTTI Type Descriptor'; // "??_R0?AVhkArrayStreamWriter@@@8"
// class hkStreamWriter::`RTTI Type Descriptor'; // "??_R0?AVhkStreamWriter@@@8"
// class hkMemoryTrackStreamWriter::`RTTI Type Descriptor'; // "??_R0?AVhkMemoryTrackStreamWriter@@@8"

// public: hkOstream::hkOstream(class hkStreamWriter *);
// public: hkOstream::hkOstream(char const *);
// public: hkOstream::hkOstream(void *, int, class hkBool);
// public: hkOstream::hkOstream(class hkArray<char, struct hkContainerHeapAllocator> &);
// public: hkOstream::hkOstream(class hkMemoryTrack *);
// public: virtual hkOstream::~hkOstream(void);
// public: class hkBool hkOstream::isOk(void) const;
// public: class hkOstream & hkOstream::operator<<(void const *);
// void writeString(class hkStreamWriter *, char const *);
// public: class hkOstream & hkOstream::operator<<(class hkBool);
// public: class hkOstream & hkOstream::operator<<(char);
// public: class hkOstream & hkOstream::operator<<(char const *);
// public: class hkOstream & hkOstream::operator<<(short);
// public: class hkOstream & hkOstream::operator<<(unsigned short);
// public: class hkOstream & hkOstream::operator<<(int);
// public: class hkOstream & hkOstream::operator<<(unsigned int);
// public: class hkOstream & hkOstream::operator<<(float);
// public: class hkOstream & hkOstream::operator<<(__int64);
// public: class hkOstream & hkOstream::operator<<(unsigned __int64);
// public: void hkOstream::printf(char const *, ...);
// public: class hkOstream & hkOstream::operator<<(class hkStringPtr const &);
// public: class hkOstream & hkOstream::operator<<(class hkStringBuf const &);
// public: void hkOstream::flush(void);
// public: int hkOstream::write(char const *, int);
// public: void hkOstream::setStreamWriter(class hkStreamWriter *);
// public: virtual void hkOstream::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual class hkClass const * hkOstream::getClassType(void) const;
// merged_83EB25A0;
// public: static void * hkStreamWriter::operator new(unsigned int);
// public: hkArrayStreamWriter::hkArrayStreamWriter(class hkArray<char, struct hkContainerHeapAllocator> *, enum hkArrayStreamWriter::ArrayOwnership);
// public: hkStreamWriter::hkStreamWriter(void);
// public: virtual void hkStreamWriter::flush(void);
// merged_83EB2710;
// public: static void hkStreamWriter::operator delete(void *);
// public: virtual hkStreamWriter::~hkStreamWriter(void);
// public: void hkArrayStreamWriter::nullTerminate(void);
// public: virtual class hkBool hkArrayStreamWriter::isOk(void) const;
// public: virtual class hkBool hkArrayStreamWriter::seekTellSupported(void) const;
// public: virtual int hkArrayStreamWriter::tell(void) const;
// public: virtual class hkClass const * hkArrayStreamWriter::getClassType(void) const;
// merged_83EB28D0;
// public: virtual hkArrayStreamWriter::~hkArrayStreamWriter(void);
// public: void * hkArray<char, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkMemoryTrackStreamWriter::hkMemoryTrackStreamWriter(class hkMemoryTrack *, enum hkMemoryTrackStreamWriter::TrackOwnership);
// public: virtual class hkBool hkMemoryTrackStreamWriter::isOk(void) const;
// public: virtual class hkBool hkMemoryTrackStreamWriter::seekTellSupported(void) const;
// public: virtual enum hkResult hkMemoryTrackStreamWriter::seek(int, enum hkStreamWriter::SeekWhence);
// public: virtual int hkMemoryTrackStreamWriter::tell(void) const;
// public: int hkMemoryTrack::getSize(void) const;
// merged_83EB2B48;
// public: virtual hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter(void);
// public: void * hkMemoryTrack::`scalar deleting destructor'(unsigned int);
// public: static void hkMemoryTrack::operator delete(void *);
// public: static void hkArrayBase<char>::operator delete(void *);
// public: static class hkFileSystem & hkSingleton<class hkFileSystem>::getInstance(void);
// public: int hkArrayBase<unsigned char *>::getSize(void) const;
// public: char const * hkStringBuf::cString(void) const;
// public: int hkStringBuf::getLength(void) const;
// public: char const * hkStringPtr::cString(void) const;
// public: void hkArray<char, struct hkContainerHeapAllocator>::reserve(int);
// public: char const * hkArrayBase<char>::begin(void) const;
// public: char * hkArrayBase<char>::begin(void);

//public: hkOstream::hkOstream(class hkStreamWriter *)
//{
//    mangled_ppc("??0hkOstream@@QAA@PAVhkStreamWriter@@@Z");
//};

//public: hkOstream::hkOstream(char const *)
//{
//    mangled_ppc("??0hkOstream@@QAA@PBD@Z");
//};

//public: hkOstream::hkOstream(void *, int, class hkBool)
//{
//    mangled_ppc("??0hkOstream@@QAA@PAXHVhkBool@@@Z");
//};

//public: hkOstream::hkOstream(class hkArray<char, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??0hkOstream@@QAA@AAV?$hkArray@DUhkContainerHeapAllocator@@@@@Z");
//};

//public: hkOstream::hkOstream(class hkMemoryTrack *)
//{
//    mangled_ppc("??0hkOstream@@QAA@PAVhkMemoryTrack@@@Z");
//};

//public: virtual hkOstream::~hkOstream(void)
//{
//    mangled_ppc("??1hkOstream@@UAA@XZ");
//};

//public: class hkBool hkOstream::isOk(void) const
//{
//    mangled_ppc("?isOk@hkOstream@@QBA?AVhkBool@@XZ");
//};

//public: class hkOstream & hkOstream::operator<<(void const *)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@PBX@Z");
//};

//void writeString(class hkStreamWriter *, char const *)
//{
//    mangled_ppc("?writeString@@YAXPAVhkStreamWriter@@PBD@Z");
//};

//public: class hkOstream & hkOstream::operator<<(class hkBool)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@VhkBool@@@Z");
//};

//public: class hkOstream & hkOstream::operator<<(char)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@D@Z");
//};

//public: class hkOstream & hkOstream::operator<<(char const *)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@PBD@Z");
//};

//public: class hkOstream & hkOstream::operator<<(short)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@F@Z");
//};

//public: class hkOstream & hkOstream::operator<<(unsigned short)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@G@Z");
//};

//public: class hkOstream & hkOstream::operator<<(int)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@H@Z");
//};

//public: class hkOstream & hkOstream::operator<<(unsigned int)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@I@Z");
//};

//public: class hkOstream & hkOstream::operator<<(float)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@M@Z");
//};

//public: class hkOstream & hkOstream::operator<<(__int64)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@_J@Z");
//};

//public: class hkOstream & hkOstream::operator<<(unsigned __int64)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@_K@Z");
//};

//public: void hkOstream::printf(char const *, ...)
//{
//    mangled_ppc("?printf@hkOstream@@QAAXPBDZZ");
//};

//public: class hkOstream & hkOstream::operator<<(class hkStringPtr const &)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@ABVhkStringPtr@@@Z");
//};

//public: class hkOstream & hkOstream::operator<<(class hkStringBuf const &)
//{
//    mangled_ppc("??6hkOstream@@QAAAAV0@ABVhkStringBuf@@@Z");
//};

//public: void hkOstream::flush(void)
//{
//    mangled_ppc("?flush@hkOstream@@QAAXXZ");
//};

//public: int hkOstream::write(char const *, int)
//{
//    mangled_ppc("?write@hkOstream@@QAAHPBDH@Z");
//};

//public: void hkOstream::setStreamWriter(class hkStreamWriter *)
//{
//    mangled_ppc("?setStreamWriter@hkOstream@@QAAXPAVhkStreamWriter@@@Z");
//};

//public: virtual void hkOstream::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkOstream@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual class hkClass const * hkOstream::getClassType(void) const
//{
//    mangled_ppc("?getClassType@hkOstream@@UBAPBVhkClass@@XZ");
//};

//merged_83EB25A0
//{
//    mangled_ppc("merged_83EB25A0");
//};

//public: static void * hkStreamWriter::operator new(unsigned int)
//{
//    mangled_ppc("??2hkStreamWriter@@SAPAXI@Z");
//};

//public: hkArrayStreamWriter::hkArrayStreamWriter(class hkArray<char, struct hkContainerHeapAllocator> *, enum hkArrayStreamWriter::ArrayOwnership)
//{
//    mangled_ppc("??0hkArrayStreamWriter@@QAA@PAV?$hkArray@DUhkContainerHeapAllocator@@@@W4ArrayOwnership@0@@Z");
//};

//public: hkStreamWriter::hkStreamWriter(void)
//{
//    mangled_ppc("??0hkStreamWriter@@QAA@XZ");
//};

//public: virtual void hkStreamWriter::flush(void)
//{
//    mangled_ppc("?flush@hkStreamWriter@@UAAXXZ");
//};

//merged_83EB2710
//{
//    mangled_ppc("merged_83EB2710");
//};

//public: static void hkStreamWriter::operator delete(void *)
//{
//    mangled_ppc("??3hkStreamWriter@@SAXPAX@Z");
//};

//public: virtual hkStreamWriter::~hkStreamWriter(void)
//{
//    mangled_ppc("??1hkStreamWriter@@UAA@XZ");
//};

//public: void hkArrayStreamWriter::nullTerminate(void)
//{
//    mangled_ppc("?nullTerminate@hkArrayStreamWriter@@QAAXXZ");
//};

//public: virtual class hkBool hkArrayStreamWriter::isOk(void) const
//{
//    mangled_ppc("?isOk@hkArrayStreamWriter@@UBA?AVhkBool@@XZ");
//};

//public: virtual class hkBool hkArrayStreamWriter::seekTellSupported(void) const
//{
//    mangled_ppc("?seekTellSupported@hkArrayStreamWriter@@UBA?AVhkBool@@XZ");
//};

//public: virtual int hkArrayStreamWriter::tell(void) const
//{
//    mangled_ppc("?tell@hkArrayStreamWriter@@UBAHXZ");
//};

//public: virtual class hkClass const * hkArrayStreamWriter::getClassType(void) const
//{
//    mangled_ppc("?getClassType@hkArrayStreamWriter@@UBAPBVhkClass@@XZ");
//};

//merged_83EB28D0
//{
//    mangled_ppc("merged_83EB28D0");
//};

//public: virtual hkArrayStreamWriter::~hkArrayStreamWriter(void)
//{
//    mangled_ppc("??1hkArrayStreamWriter@@UAA@XZ");
//};

//public: void * hkArray<char, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@DUhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: hkMemoryTrackStreamWriter::hkMemoryTrackStreamWriter(class hkMemoryTrack *, enum hkMemoryTrackStreamWriter::TrackOwnership)
//{
//    mangled_ppc("??0hkMemoryTrackStreamWriter@@QAA@PAVhkMemoryTrack@@W4TrackOwnership@0@@Z");
//};

//public: virtual class hkBool hkMemoryTrackStreamWriter::isOk(void) const
//{
//    mangled_ppc("?isOk@hkMemoryTrackStreamWriter@@UBA?AVhkBool@@XZ");
//};

//public: virtual class hkBool hkMemoryTrackStreamWriter::seekTellSupported(void) const
//{
//    mangled_ppc("?seekTellSupported@hkMemoryTrackStreamWriter@@UBA?AVhkBool@@XZ");
//};

//public: virtual enum hkResult hkMemoryTrackStreamWriter::seek(int, enum hkStreamWriter::SeekWhence)
//{
//    mangled_ppc("?seek@hkMemoryTrackStreamWriter@@UAA?AW4hkResult@@HW4SeekWhence@hkStreamWriter@@@Z");
//};

//public: virtual int hkMemoryTrackStreamWriter::tell(void) const
//{
//    mangled_ppc("?tell@hkMemoryTrackStreamWriter@@UBAHXZ");
//};

//public: int hkMemoryTrack::getSize(void) const
//{
//    mangled_ppc("?getSize@hkMemoryTrack@@QBAHXZ");
//};

//merged_83EB2B48
//{
//    mangled_ppc("merged_83EB2B48");
//};

//public: virtual hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter(void)
//{
//    mangled_ppc("??1hkMemoryTrackStreamWriter@@UAA@XZ");
//};

//public: void * hkMemoryTrack::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkMemoryTrack@@QAAPAXI@Z");
//};

//public: static void hkMemoryTrack::operator delete(void *)
//{
//    mangled_ppc("??3hkMemoryTrack@@SAXPAX@Z");
//};

//public: static void hkArrayBase<char>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@D@@SAXPAX@Z");
//};

//public: static class hkFileSystem & hkSingleton<class hkFileSystem>::getInstance(void)
//{
//    mangled_ppc("?getInstance@?$hkSingleton@VhkFileSystem@@@@SAAAVhkFileSystem@@XZ");
//};

//public: int hkArrayBase<unsigned char *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAE@@QBAHXZ");
//};

//public: char const * hkStringBuf::cString(void) const
//{
//    mangled_ppc("?cString@hkStringBuf@@QBAPBDXZ");
//};

//public: int hkStringBuf::getLength(void) const
//{
//    mangled_ppc("?getLength@hkStringBuf@@QBAHXZ");
//};

//public: char const * hkStringPtr::cString(void) const
//{
//    mangled_ppc("?cString@hkStringPtr@@QBAPBDXZ");
//};

//public: void hkArray<char, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@DUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: char const * hkArrayBase<char>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@D@@QBAPBDXZ");
//};

//public: char * hkArrayBase<char>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@D@@QAAPADXZ");
//};

