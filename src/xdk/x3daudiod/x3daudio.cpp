/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void (__cdecl *g_pfnX3DValidationCallback)(void); // "?g_pfnX3DValidationCallback@@3P6AXXZA"

// X3DAudioInitialize;
// void CalculateEmitterToListenerDistance(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *);
// float CalculateEmitterToListenerAngle(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *);
// float CalculateDistanceCurveValue(struct X3DAUDIO_DISTANCE_CURVE const *, float);
// float CalculateDistanceInverseSquareCurveValue(float);
// void CalculateDistanceCurves(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *);
// void CalculateEmitterCone(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *);
// void CalculateListenerCone(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *);
// void CalculateDopplerFactor(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *);
// void DistributeSignal(struct X3DAUDIO_HANDLE_PRIVATE const *, float, float, unsigned int, struct X3DAUDIO_DSP_SETTINGS *, unsigned int);
// void CalculateMatrixCoefficients(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *);
// void CalculateDelay(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *);
// X3DAudioCalculate;
// void DebugMessage(enum EDebugMessageType, char const *, unsigned int, char const *, ...);
// void AssertIsGoodReadPointer(void const *, unsigned int);
// void AssertIsGoodWritePointer(void *, unsigned int);

//X3DAudioInitialize
//{
//    mangled_ppc("X3DAudioInitialize");
//};

//void CalculateEmitterToListenerDistance(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateEmitterToListenerDistance@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@PAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//float CalculateEmitterToListenerAngle(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateEmitterToListenerAngle@@YAMPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@PAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//float CalculateDistanceCurveValue(struct X3DAUDIO_DISTANCE_CURVE const *, float)
//{
//    mangled_ppc("?CalculateDistanceCurveValue@@YAMPBUX3DAUDIO_DISTANCE_CURVE@@M@Z");
//};

//float CalculateDistanceInverseSquareCurveValue(float)
//{
//    mangled_ppc("?CalculateDistanceInverseSquareCurveValue@@YAMM@Z");
//};

//void CalculateDistanceCurves(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateDistanceCurves@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_EMITTER@@IPAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//void CalculateEmitterCone(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateEmitterCone@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@IPAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//void CalculateListenerCone(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateListenerCone@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@IPAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//void CalculateDopplerFactor(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateDopplerFactor@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@PAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//void DistributeSignal(struct X3DAUDIO_HANDLE_PRIVATE const *, float, float, unsigned int, struct X3DAUDIO_DSP_SETTINGS *, unsigned int)
//{
//    mangled_ppc("?DistributeSignal@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@MMIPAUX3DAUDIO_DSP_SETTINGS@@I@Z");
//};

//void CalculateMatrixCoefficients(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, unsigned int, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateMatrixCoefficients@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@IPAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//void CalculateDelay(struct X3DAUDIO_HANDLE_PRIVATE const *, struct X3DAUDIO_LISTENER const *, struct X3DAUDIO_EMITTER const *, struct X3DAUDIO_DSP_SETTINGS *)
//{
//    mangled_ppc("?CalculateDelay@@YAXPBUX3DAUDIO_HANDLE_PRIVATE@@PBUX3DAUDIO_LISTENER@@PBUX3DAUDIO_EMITTER@@PAUX3DAUDIO_DSP_SETTINGS@@@Z");
//};

//X3DAudioCalculate
//{
//    mangled_ppc("X3DAudioCalculate");
//};

//void DebugMessage(enum EDebugMessageType, char const *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?DebugMessage@@YAXW4EDebugMessageType@@PBDI1ZZ");
//};

//void AssertIsGoodReadPointer(void const *, unsigned int)
//{
//    mangled_ppc("?AssertIsGoodReadPointer@@YAXPBXI@Z");
//};

//void AssertIsGoodWritePointer(void *, unsigned int)
//{
//    mangled_ppc("?AssertIsGoodWritePointer@@YAXPAXI@Z");
//};

