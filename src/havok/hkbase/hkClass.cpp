/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkClass::hkClass(char const *, class hkClass const *, int, class hkClass const **, int, class hkClassEnum const *, int, class hkClassMember const *, int, void const *, class hkCustomAttributes const *, unsigned int, unsigned int);
// public: char const * hkClass::getName(void) const;
// public: class hkClass const * hkClass::getParent(void) const;
// public: class hkClass * hkClass::getParent(void);
// public: int hkClass::getInheritanceDepth(void) const;
// public: class hkBool hkClass::isSuperClass(class hkClass const &) const;
// public: int hkClass::getNumInterfaces(void) const;
// public: class hkClass const * hkClass::getInterface(int) const;
// public: class hkClass const * hkClass::getDeclaredInterface(int) const;
// public: int hkClass::getNumDeclaredInterfaces(void) const;
// public: int hkClass::getNumEnums(void) const;
// public: class hkClassEnum const & hkClass::getEnum(int) const;
// public: class hkClassEnum const * hkClass::getEnumByName(char const *) const;
// public: class hkClassEnum const * hkClass::getDeclaredEnumByName(char const *) const;
// public: class hkClassEnum const & hkClass::getDeclaredEnum(int) const;
// public: int hkClass::getNumDeclaredEnums(void) const;
// public: int hkClass::getNumMembers(void) const;
// public: class hkClassMember const & hkClass::getMember(int) const;
// public: class hkClassMember & hkClass::getMember(int);
// public: int hkClass::getNumDeclaredMembers(void) const;
// public: class hkClassMember const & hkClass::getDeclaredMember(int) const;
// public: class hkClassMember const * hkClass::getDeclaredMemberByName(char const *) const;
// public: class hkClassMember const * hkClass::getMemberByName(char const *) const;
// public: int hkClass::getMemberIndexByName(char const *) const;
// public: int hkClass::getDeclaredMemberIndexByName(char const *) const;
// public: int hkClass::getObjectSize(void) const;
// public: void hkClass::setObjectSize(int);
// public: class hkBool hkClass::hasVtable(void) const;
// public: unsigned int hkClass::getSignature(int) const;
// public: int hkClass::getDescribedVersion(void) const;
// private: enum hkResult hkClass::retrieveMember(int, void const *&, class hkClassMember const *&) const;
// public: int hkClass::hasDefault(int) const;
// public: int hkClass::hasDeclaredDefault(int) const;
// public: enum hkResult hkClass::getDefault(int, class hkStreamWriter *) const;
// public: enum hkResult hkClass::getDeclaredDefault(int, class hkStreamWriter *) const;
// public: enum hkResult hkClass::getDefault(int, class hkTypedUnion &) const;
// public: enum hkResult hkClass::getDeclaredDefault(int, class hkTypedUnion &) const;
// public: void hkClass::writeSignature(class hkStreamWriter *) const;
// public: struct hkVariant const * hkClass::getAttribute(char const *) const;
// public: class hkFlags<enum hkClass::FlagValues, unsigned int> const & hkClass::getFlags(void) const;
// public: class hkFlags<enum hkClass::FlagValues, unsigned int> & hkClass::getFlags(void);
// public: int hkClassMember::getOffset(void) const;
// public: char const * hkClassEnum::getName(void) const;
// public: char const * hkClassMember::getName(void) const;
// public: virtual hkCrc32StreamWriter::~hkCrc32StreamWriter(void);
// public: enum hkClassMember::Type hkClassMember::getType(void) const;
// public: void hkTypedUnion::setObject(void const *, class hkClass const *);
// public: void hkTypedUnion::setEnum(int, class hkClassEnum const *);
// public: enum hkResult hkTypedUnion::setSimple(void const *, enum hkClassMember::Type);
// public: enum hkClassMember::Type hkClassMember::getSubType(void) const;
// public: struct hkVariant const * hkCustomAttributes::getAttribute(char const *) const;
// public: enum hkClassMember::Type hkEnum<enum hkClassMember::Type, unsigned char>::operator enum hkClassMember::Type(void) const;
// public: hkFlags<enum hkClass::FlagValues, unsigned int>::hkFlags<enum hkClass::FlagValues, unsigned int>(unsigned int);
// public: void hkEnum<enum hkClassMember::Type, int>::operator=(enum hkClassMember::Type);

//public: hkClass::hkClass(char const *, class hkClass const *, int, class hkClass const **, int, class hkClassEnum const *, int, class hkClassMember const *, int, void const *, class hkCustomAttributes const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0hkClass@@QAA@PBDPBV0@HPAPBV0@HPBVhkClassEnum@@HPBVhkClassMember@@HPBXPBVhkCustomAttributes@@II@Z");
//};

//public: char const * hkClass::getName(void) const
//{
//    mangled_ppc("?getName@hkClass@@QBAPBDXZ");
//};

//public: class hkClass const * hkClass::getParent(void) const
//{
//    mangled_ppc("?getParent@hkClass@@QBAPBV1@XZ");
//};

//public: class hkClass * hkClass::getParent(void)
//{
//    mangled_ppc("?getParent@hkClass@@QAAPAV1@XZ");
//};

//public: int hkClass::getInheritanceDepth(void) const
//{
//    mangled_ppc("?getInheritanceDepth@hkClass@@QBAHXZ");
//};

//public: class hkBool hkClass::isSuperClass(class hkClass const &) const
//{
//    mangled_ppc("?isSuperClass@hkClass@@QBA?AVhkBool@@ABV1@@Z");
//};

//public: int hkClass::getNumInterfaces(void) const
//{
//    mangled_ppc("?getNumInterfaces@hkClass@@QBAHXZ");
//};

//public: class hkClass const * hkClass::getInterface(int) const
//{
//    mangled_ppc("?getInterface@hkClass@@QBAPBV1@H@Z");
//};

//public: class hkClass const * hkClass::getDeclaredInterface(int) const
//{
//    mangled_ppc("?getDeclaredInterface@hkClass@@QBAPBV1@H@Z");
//};

//public: int hkClass::getNumDeclaredInterfaces(void) const
//{
//    mangled_ppc("?getNumDeclaredInterfaces@hkClass@@QBAHXZ");
//};

//public: int hkClass::getNumEnums(void) const
//{
//    mangled_ppc("?getNumEnums@hkClass@@QBAHXZ");
//};

//public: class hkClassEnum const & hkClass::getEnum(int) const
//{
//    mangled_ppc("?getEnum@hkClass@@QBAABVhkClassEnum@@H@Z");
//};

//public: class hkClassEnum const * hkClass::getEnumByName(char const *) const
//{
//    mangled_ppc("?getEnumByName@hkClass@@QBAPBVhkClassEnum@@PBD@Z");
//};

//public: class hkClassEnum const * hkClass::getDeclaredEnumByName(char const *) const
//{
//    mangled_ppc("?getDeclaredEnumByName@hkClass@@QBAPBVhkClassEnum@@PBD@Z");
//};

//public: class hkClassEnum const & hkClass::getDeclaredEnum(int) const
//{
//    mangled_ppc("?getDeclaredEnum@hkClass@@QBAABVhkClassEnum@@H@Z");
//};

//public: int hkClass::getNumDeclaredEnums(void) const
//{
//    mangled_ppc("?getNumDeclaredEnums@hkClass@@QBAHXZ");
//};

//public: int hkClass::getNumMembers(void) const
//{
//    mangled_ppc("?getNumMembers@hkClass@@QBAHXZ");
//};

//public: class hkClassMember const & hkClass::getMember(int) const
//{
//    mangled_ppc("?getMember@hkClass@@QBAABVhkClassMember@@H@Z");
//};

//public: class hkClassMember & hkClass::getMember(int)
//{
//    mangled_ppc("?getMember@hkClass@@QAAAAVhkClassMember@@H@Z");
//};

//public: int hkClass::getNumDeclaredMembers(void) const
//{
//    mangled_ppc("?getNumDeclaredMembers@hkClass@@QBAHXZ");
//};

//public: class hkClassMember const & hkClass::getDeclaredMember(int) const
//{
//    mangled_ppc("?getDeclaredMember@hkClass@@QBAABVhkClassMember@@H@Z");
//};

//public: class hkClassMember const * hkClass::getDeclaredMemberByName(char const *) const
//{
//    mangled_ppc("?getDeclaredMemberByName@hkClass@@QBAPBVhkClassMember@@PBD@Z");
//};

//public: class hkClassMember const * hkClass::getMemberByName(char const *) const
//{
//    mangled_ppc("?getMemberByName@hkClass@@QBAPBVhkClassMember@@PBD@Z");
//};

//public: int hkClass::getMemberIndexByName(char const *) const
//{
//    mangled_ppc("?getMemberIndexByName@hkClass@@QBAHPBD@Z");
//};

//public: int hkClass::getDeclaredMemberIndexByName(char const *) const
//{
//    mangled_ppc("?getDeclaredMemberIndexByName@hkClass@@QBAHPBD@Z");
//};

//public: int hkClass::getObjectSize(void) const
//{
//    mangled_ppc("?getObjectSize@hkClass@@QBAHXZ");
//};

//public: void hkClass::setObjectSize(int)
//{
//    mangled_ppc("?setObjectSize@hkClass@@QAAXH@Z");
//};

//public: class hkBool hkClass::hasVtable(void) const
//{
//    mangled_ppc("?hasVtable@hkClass@@QBA?AVhkBool@@XZ");
//};

//public: unsigned int hkClass::getSignature(int) const
//{
//    mangled_ppc("?getSignature@hkClass@@QBAIH@Z");
//};

//public: int hkClass::getDescribedVersion(void) const
//{
//    mangled_ppc("?getDescribedVersion@hkClass@@QBAHXZ");
//};

//private: enum hkResult hkClass::retrieveMember(int, void const *&, class hkClassMember const *&) const
//{
//    mangled_ppc("?retrieveMember@hkClass@@ABA?AW4hkResult@@HAAPBXAAPBVhkClassMember@@@Z");
//};

//public: int hkClass::hasDefault(int) const
//{
//    mangled_ppc("?hasDefault@hkClass@@QBAHH@Z");
//};

//public: int hkClass::hasDeclaredDefault(int) const
//{
//    mangled_ppc("?hasDeclaredDefault@hkClass@@QBAHH@Z");
//};

//public: enum hkResult hkClass::getDefault(int, class hkStreamWriter *) const
//{
//    mangled_ppc("?getDefault@hkClass@@QBA?AW4hkResult@@HPAVhkStreamWriter@@@Z");
//};

//public: enum hkResult hkClass::getDeclaredDefault(int, class hkStreamWriter *) const
//{
//    mangled_ppc("?getDeclaredDefault@hkClass@@QBA?AW4hkResult@@HPAVhkStreamWriter@@@Z");
//};

//public: enum hkResult hkClass::getDefault(int, class hkTypedUnion &) const
//{
//    mangled_ppc("?getDefault@hkClass@@QBA?AW4hkResult@@HAAVhkTypedUnion@@@Z");
//};

//public: enum hkResult hkClass::getDeclaredDefault(int, class hkTypedUnion &) const
//{
//    mangled_ppc("?getDeclaredDefault@hkClass@@QBA?AW4hkResult@@HAAVhkTypedUnion@@@Z");
//};

//public: void hkClass::writeSignature(class hkStreamWriter *) const
//{
//    mangled_ppc("?writeSignature@hkClass@@QBAXPAVhkStreamWriter@@@Z");
//};

//public: struct hkVariant const * hkClass::getAttribute(char const *) const
//{
//    mangled_ppc("?getAttribute@hkClass@@QBAPBUhkVariant@@PBD@Z");
//};

//public: class hkFlags<enum hkClass::FlagValues, unsigned int> const & hkClass::getFlags(void) const
//{
//    mangled_ppc("?getFlags@hkClass@@QBAABV?$hkFlags@W4FlagValues@hkClass@@I@@XZ");
//};

//public: class hkFlags<enum hkClass::FlagValues, unsigned int> & hkClass::getFlags(void)
//{
//    mangled_ppc("?getFlags@hkClass@@QAAAAV?$hkFlags@W4FlagValues@hkClass@@I@@XZ");
//};

//public: int hkClassMember::getOffset(void) const
//{
//    mangled_ppc("?getOffset@hkClassMember@@QBAHXZ");
//};

//public: char const * hkClassEnum::getName(void) const
//{
//    mangled_ppc("?getName@hkClassEnum@@QBAPBDXZ");
//};

//public: char const * hkClassMember::getName(void) const
//{
//    mangled_ppc("?getName@hkClassMember@@QBAPBDXZ");
//};

//public: virtual hkCrc32StreamWriter::~hkCrc32StreamWriter(void)
//{
//    mangled_ppc("??1hkCrc32StreamWriter@@UAA@XZ");
//};

//public: enum hkClassMember::Type hkClassMember::getType(void) const
//{
//    mangled_ppc("?getType@hkClassMember@@QBA?AW4Type@1@XZ");
//};

//public: void hkTypedUnion::setObject(void const *, class hkClass const *)
//{
//    mangled_ppc("?setObject@hkTypedUnion@@QAAXPBXPBVhkClass@@@Z");
//};

//public: void hkTypedUnion::setEnum(int, class hkClassEnum const *)
//{
//    mangled_ppc("?setEnum@hkTypedUnion@@QAAXHPBVhkClassEnum@@@Z");
//};

//public: enum hkResult hkTypedUnion::setSimple(void const *, enum hkClassMember::Type)
//{
//    mangled_ppc("?setSimple@hkTypedUnion@@QAA?AW4hkResult@@PBXW4Type@hkClassMember@@@Z");
//};

//public: enum hkClassMember::Type hkClassMember::getSubType(void) const
//{
//    mangled_ppc("?getSubType@hkClassMember@@QBA?AW4Type@1@XZ");
//};

//public: struct hkVariant const * hkCustomAttributes::getAttribute(char const *) const
//{
//    mangled_ppc("?getAttribute@hkCustomAttributes@@QBAPBUhkVariant@@PBD@Z");
//};

//public: enum hkClassMember::Type hkEnum<enum hkClassMember::Type, unsigned char>::operator enum hkClassMember::Type(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4Type@hkClassMember@@E@@QBA?AW4Type@hkClassMember@@XZ");
//};

//public: hkFlags<enum hkClass::FlagValues, unsigned int>::hkFlags<enum hkClass::FlagValues, unsigned int>(unsigned int)
//{
//    mangled_ppc("??0?$hkFlags@W4FlagValues@hkClass@@I@@QAA@I@Z");
//};

//public: void hkEnum<enum hkClassMember::Type, int>::operator=(enum hkClassMember::Type)
//{
//    mangled_ppc("??4?$hkEnum@W4Type@hkClassMember@@H@@QAAXW4Type@hkClassMember@@@Z");
//};

