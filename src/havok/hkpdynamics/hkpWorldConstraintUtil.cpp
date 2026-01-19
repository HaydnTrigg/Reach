/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void hkpWorldConstraintUtil::addConstraint(class hkpWorld *, class hkpConstraintInstance *);
// public: static void hkpWorldConstraintUtil::removeConstraint(class hkpConstraintInstance *);
// public: static class hkpConstraintInstance * hkpWorldConstraintUtil::getConstraint(class hkpEntity const *, class hkpEntity const *);
// public: static void hkpWorldConstraintUtil::addModifier(class hkpConstraintInstance *, class hkpConstraintOwner &, struct hkpModifierConstraintAtom *);
// public: static void hkpWorldConstraintUtil::removeAndDeleteModifier(class hkpConstraintInstance *, class hkpConstraintOwner &, enum hkpConstraintAtom::AtomType);
// public: static struct hkpModifierConstraintAtom * hkpWorldConstraintUtil::findModifier(class hkpConstraintInstance *, enum hkpConstraintAtom::AtomType);
// public: static struct hkpModifierConstraintAtom * hkpWorldConstraintUtil::findLastModifier(class hkpConstraintInstance *);
// public: static void hkpWorldConstraintUtil::updateFatherOfMovedAtom(class hkpConstraintInstance *, struct hkpConstraintAtom const *, struct hkpConstraintAtom const *, int);
// public: hkConstraintInternal::hkConstraintInternal(void);
// public: void hkArray<unsigned char, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: void hkArrayBase<unsigned char>::popBack(int);
// public: void hkArrayBase<unsigned char>::_reserveExactly(class hkMemoryAllocator &, int);
// public: void hkArrayBase<unsigned char>::setSizeUnchecked(int);
// public: unsigned char * hkArrayBase<unsigned char>::end(void);
// public: void hkSmallArray<struct hkConstraintInternal>::insertAt(int, struct hkConstraintInternal const &);
// public: void hkSmallArray<struct hkConstraintInternal>::popBack(int);
// public: struct hkConstraintInternal & hkSmallArray<struct hkConstraintInternal>::back(void);
// public: void hkSmallArray<struct hkConstraintInternal>::insertAt(int, struct hkConstraintInternal const *, int);
// public: void hkSmallArray<struct hkConstraintInternal>::reserve(int);
// public: class hkBool hkSmallArray<struct hkConstraintInternal>::isLocked(void);
// public: void hkpConstraintData::removeInstance(class hkpConstraintInstance *, void *, int) const;
// public: void hkConstraintInternal::clearConstraintInfo(void);

//public: static void hkpWorldConstraintUtil::addConstraint(class hkpWorld *, class hkpConstraintInstance *)
//{
//    mangled_ppc("?addConstraint@hkpWorldConstraintUtil@@SAXPAVhkpWorld@@PAVhkpConstraintInstance@@@Z");
//};

//public: static void hkpWorldConstraintUtil::removeConstraint(class hkpConstraintInstance *)
//{
//    mangled_ppc("?removeConstraint@hkpWorldConstraintUtil@@SAXPAVhkpConstraintInstance@@@Z");
//};

//public: static class hkpConstraintInstance * hkpWorldConstraintUtil::getConstraint(class hkpEntity const *, class hkpEntity const *)
//{
//    mangled_ppc("?getConstraint@hkpWorldConstraintUtil@@SAPAVhkpConstraintInstance@@PBVhkpEntity@@0@Z");
//};

//public: static void hkpWorldConstraintUtil::addModifier(class hkpConstraintInstance *, class hkpConstraintOwner &, struct hkpModifierConstraintAtom *)
//{
//    mangled_ppc("?addModifier@hkpWorldConstraintUtil@@SAXPAVhkpConstraintInstance@@AAVhkpConstraintOwner@@PAUhkpModifierConstraintAtom@@@Z");
//};

//public: static void hkpWorldConstraintUtil::removeAndDeleteModifier(class hkpConstraintInstance *, class hkpConstraintOwner &, enum hkpConstraintAtom::AtomType)
//{
//    mangled_ppc("?removeAndDeleteModifier@hkpWorldConstraintUtil@@SAXPAVhkpConstraintInstance@@AAVhkpConstraintOwner@@W4AtomType@hkpConstraintAtom@@@Z");
//};

//public: static struct hkpModifierConstraintAtom * hkpWorldConstraintUtil::findModifier(class hkpConstraintInstance *, enum hkpConstraintAtom::AtomType)
//{
//    mangled_ppc("?findModifier@hkpWorldConstraintUtil@@SAPAUhkpModifierConstraintAtom@@PAVhkpConstraintInstance@@W4AtomType@hkpConstraintAtom@@@Z");
//};

//public: static struct hkpModifierConstraintAtom * hkpWorldConstraintUtil::findLastModifier(class hkpConstraintInstance *)
//{
//    mangled_ppc("?findLastModifier@hkpWorldConstraintUtil@@SAPAUhkpModifierConstraintAtom@@PAVhkpConstraintInstance@@@Z");
//};

//public: static void hkpWorldConstraintUtil::updateFatherOfMovedAtom(class hkpConstraintInstance *, struct hkpConstraintAtom const *, struct hkpConstraintAtom const *, int)
//{
//    mangled_ppc("?updateFatherOfMovedAtom@hkpWorldConstraintUtil@@SAXPAVhkpConstraintInstance@@PBUhkpConstraintAtom@@1H@Z");
//};

//public: hkConstraintInternal::hkConstraintInternal(void)
//{
//    mangled_ppc("??0hkConstraintInternal@@QAA@XZ");
//};

//public: void hkArray<unsigned char, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@EUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArrayBase<unsigned char>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@E@@QAAXH@Z");
//};

//public: void hkArrayBase<unsigned char>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@E@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<unsigned char>::setSizeUnchecked(int)
//{
//    mangled_ppc("?setSizeUnchecked@?$hkArrayBase@E@@QAAXH@Z");
//};

//public: unsigned char * hkArrayBase<unsigned char>::end(void)
//{
//    mangled_ppc("?end@?$hkArrayBase@E@@QAAPAEXZ");
//};

//public: void hkSmallArray<struct hkConstraintInternal>::insertAt(int, struct hkConstraintInternal const &)
//{
//    mangled_ppc("?insertAt@?$hkSmallArray@UhkConstraintInternal@@@@QAAXHABUhkConstraintInternal@@@Z");
//};

//public: void hkSmallArray<struct hkConstraintInternal>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkSmallArray@UhkConstraintInternal@@@@QAAXH@Z");
//};

//public: struct hkConstraintInternal & hkSmallArray<struct hkConstraintInternal>::back(void)
//{
//    mangled_ppc("?back@?$hkSmallArray@UhkConstraintInternal@@@@QAAAAUhkConstraintInternal@@XZ");
//};

//public: void hkSmallArray<struct hkConstraintInternal>::insertAt(int, struct hkConstraintInternal const *, int)
//{
//    mangled_ppc("?insertAt@?$hkSmallArray@UhkConstraintInternal@@@@QAAXHPBUhkConstraintInternal@@H@Z");
//};

//public: void hkSmallArray<struct hkConstraintInternal>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkSmallArray@UhkConstraintInternal@@@@QAAXH@Z");
//};

//public: class hkBool hkSmallArray<struct hkConstraintInternal>::isLocked(void)
//{
//    mangled_ppc("?isLocked@?$hkSmallArray@UhkConstraintInternal@@@@QAA?AVhkBool@@XZ");
//};

//public: void hkpConstraintData::removeInstance(class hkpConstraintInstance *, void *, int) const
//{
//    mangled_ppc("?removeInstance@hkpConstraintData@@QBAXPAVhkpConstraintInstance@@PAXH@Z");
//};

//public: void hkConstraintInternal::clearConstraintInfo(void)
//{
//    mangled_ppc("?clearConstraintInfo@hkConstraintInternal@@QAAXXZ");
//};

