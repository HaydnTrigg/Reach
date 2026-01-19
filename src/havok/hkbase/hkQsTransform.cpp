/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float *hkQsTransformIdentity_storage; // "?hkQsTransformIdentity_storage@@3PAMA"
// class hkQsTransform hkQsTransformIdentity; // "?hkQsTransformIdentity@@3VhkQsTransform@@A"

// public: static void hkQsTransform::fastRenormalizeBatch(class hkQsTransform *, float *, unsigned int);
// public: void hkQsTransform::get4x4ColumnMajor(float *) const;
// public: class hkBool hkQsTransform::set4x4ColumnMajor(float const *);
// public: void hkQsTransform::setFromTransformNoScale(class hkTransform const &);
// public: void hkQsTransform::copyToTransformNoScale(class hkTransform &) const;
// public: void hkQsTransform::setFromTransform(class hkTransform const &);
// public: void hkQsTransform::copyToTransform(class hkTransform &) const;
// public: class hkBool hkQsTransform::isOk(void) const;
// public: class hkBool hkQsTransform::isApproximatelyEqual(class hkQsTransform const &, float) const;
// void hkVector4Util::dot4_4vs4(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&);
// public: hkMathUtil::Decomposition::Decomposition(void);
// public: struct __vector4 hkVector4::operator struct __vector4(void) const;
// public: hkMatrix4::hkMatrix4(void);
// public: void hkVector4::setSqrtInverse4(class hkVector4const &);
// struct __vector4 hkMath::quadReciprocalSquareRoot(struct __vector4);
// public: int hkVector4::equals4(class hkVector4const &, float) const;
// public: void hkMatrix3::setDiagonal(float, float, float);
// public: hkTransform::hkTransform(class hkRotation const &, class hkVector4const &);
// public: float & hkTransform::operator()(int, int);
// public: float const & hkTransform::operator()(int, int) const;
// public: void hkTransform::set(class hkQuaternion const &, class hkVector4const &);
// public: void hkQsTransform::set(class hkVector4const &, class hkQuaternion const &, class hkVector4const &);
// public: hkQsTransform::hkQsTransform(class hkQsTransform const &);

//public: static void hkQsTransform::fastRenormalizeBatch(class hkQsTransform *, float *, unsigned int)
//{
//    mangled_ppc("?fastRenormalizeBatch@hkQsTransform@@SAXPAV1@PAMI@Z");
//};

//public: void hkQsTransform::get4x4ColumnMajor(float *) const
//{
//    mangled_ppc("?get4x4ColumnMajor@hkQsTransform@@QBAXPAM@Z");
//};

//public: class hkBool hkQsTransform::set4x4ColumnMajor(float const *)
//{
//    mangled_ppc("?set4x4ColumnMajor@hkQsTransform@@QAA?AVhkBool@@PBM@Z");
//};

//public: void hkQsTransform::setFromTransformNoScale(class hkTransform const &)
//{
//    mangled_ppc("?setFromTransformNoScale@hkQsTransform@@QAAXABVhkTransform@@@Z");
//};

//public: void hkQsTransform::copyToTransformNoScale(class hkTransform &) const
//{
//    mangled_ppc("?copyToTransformNoScale@hkQsTransform@@QBAXAAVhkTransform@@@Z");
//};

//public: void hkQsTransform::setFromTransform(class hkTransform const &)
//{
//    mangled_ppc("?setFromTransform@hkQsTransform@@QAAXABVhkTransform@@@Z");
//};

//public: void hkQsTransform::copyToTransform(class hkTransform &) const
//{
//    mangled_ppc("?copyToTransform@hkQsTransform@@QBAXAAVhkTransform@@@Z");
//};

//public: class hkBool hkQsTransform::isOk(void) const
//{
//    mangled_ppc("?isOk@hkQsTransform@@QBA?AVhkBool@@XZ");
//};

//public: class hkBool hkQsTransform::isApproximatelyEqual(class hkQsTransform const &, float) const
//{
//    mangled_ppc("?isApproximatelyEqual@hkQsTransform@@QBA?AVhkBool@@ABV1@M@Z");
//};

//void hkVector4Util::dot4_4vs4(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&)
//{
//    mangled_ppc("?dot4_4vs4@hkVector4Util@@YAXABVhkVector4@@0000000AAV2@@Z");
//};

//public: hkMathUtil::Decomposition::Decomposition(void)
//{
//    mangled_ppc("??0Decomposition@hkMathUtil@@QAA@XZ");
//};

//public: struct __vector4 hkVector4::operator struct __vector4(void) const
//{
//    mangled_ppc("??BhkVector4@@QBA?AU__vector4@@XZ");
//};

//public: hkMatrix4::hkMatrix4(void)
//{
//    mangled_ppc("??0hkMatrix4@@QAA@XZ");
//};

//public: void hkVector4::setSqrtInverse4(class hkVector4const &)
//{
//    mangled_ppc("?setSqrtInverse4@hkVector4@@QAAXABV1@@Z");
//};

//struct __vector4 hkMath::quadReciprocalSquareRoot(struct __vector4)
//{
//    mangled_ppc("?quadReciprocalSquareRoot@hkMath@@YA?AU__vector4@@U2@@Z");
//};

//public: int hkVector4::equals4(class hkVector4const &, float) const
//{
//    mangled_ppc("?equals4@hkVector4@@QBAHABV1@M@Z");
//};

//public: void hkMatrix3::setDiagonal(float, float, float)
//{
//    mangled_ppc("?setDiagonal@hkMatrix3@@QAAXMMM@Z");
//};

//public: hkTransform::hkTransform(class hkRotation const &, class hkVector4const &)
//{
//    mangled_ppc("??0hkTransform@@QAA@ABVhkRotation@@ABVhkVector4@@@Z");
//};

//public: float & hkTransform::operator()(int, int)
//{
//    mangled_ppc("??RhkTransform@@QAAAAMHH@Z");
//};

//public: float const & hkTransform::operator()(int, int) const
//{
//    mangled_ppc("??RhkTransform@@QBAABMHH@Z");
//};

//public: void hkTransform::set(class hkQuaternion const &, class hkVector4const &)
//{
//    mangled_ppc("?set@hkTransform@@QAAXABVhkQuaternion@@ABVhkVector4@@@Z");
//};

//public: void hkQsTransform::set(class hkVector4const &, class hkQuaternion const &, class hkVector4const &)
//{
//    mangled_ppc("?set@hkQsTransform@@QAAXABVhkVector4@@ABVhkQuaternion@@0@Z");
//};

//public: hkQsTransform::hkQsTransform(class hkQsTransform const &)
//{
//    mangled_ppc("??0hkQsTransform@@QAA@ABV0@@Z");
//};

