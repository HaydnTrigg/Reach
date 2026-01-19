/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int XGRAPHICS::IsTxCreated(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int);
// void * XGRAPHICS::TX_AllocMemory(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_FreeMemory(struct XGRAPHICS::_TS_TEXTURE_SERVER *, void *);
// struct XGRAPHICS::_TS_TEXTURE_SERVER * XGRAPHICS::TX_Create(struct XGRAPHICS::_TS_TXCREATE_INFO const *, struct XGRAPHICS::_SSM_SSMDEVICE2CLIENT_INTERFACE const *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_IntTxRelease(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int);
// float XGRAPHICS::AS_GetStateF(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_SysMemBltTx(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int);
// unsigned char XGRAPHICS::TX_CalcAAPtCoverage(int, int, int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcFogFactorLinear(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_Destroy(struct XGRAPHICS::_TS_TEXTURE_SERVER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CreateTexture(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int, unsigned int, unsigned int, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_InitTxReserve(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcPointAATx(struct XGRAPHICS::_TS_TEXTURE_SERVER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcLineAATx(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcFogFactorExp(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcPolyStipple(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcFogFactors(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int XGRAPHICS::TX_IntTxCommit(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *, struct XGRAPHICS::_ABSTRACT_STATE *);

//unsigned int XGRAPHICS::IsTxCreated(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int)
//{
//    mangled_ppc("?IsTxCreated@XGRAPHICS@@YAIPAU_TS_TEXTURE_SERVER@1@I@Z");
//};

//void * XGRAPHICS::TX_AllocMemory(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int)
//{
//    mangled_ppc("?TX_AllocMemory@XGRAPHICS@@YAPAXPAU_TS_TEXTURE_SERVER@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_FreeMemory(struct XGRAPHICS::_TS_TEXTURE_SERVER *, void *)
//{
//    mangled_ppc("?TX_FreeMemory@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@PAX@Z");
//};

//struct XGRAPHICS::_TS_TEXTURE_SERVER * XGRAPHICS::TX_Create(struct XGRAPHICS::_TS_TXCREATE_INFO const *, struct XGRAPHICS::_SSM_SSMDEVICE2CLIENT_INTERFACE const *)
//{
//    mangled_ppc("?TX_Create@XGRAPHICS@@YAPAU_TS_TEXTURE_SERVER@1@PBU_TS_TXCREATE_INFO@1@PBU_SSM_SSMDEVICE2CLIENT_INTERFACE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_IntTxRelease(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int)
//{
//    mangled_ppc("?TX_IntTxRelease@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@I@Z");
//};

//float XGRAPHICS::AS_GetStateF(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE)
//{
//    mangled_ppc("?AS_GetStateF@XGRAPHICS@@YAMPAU_ABSTRACT_STATE@1@W4_E_AS_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_SysMemBltTx(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int)
//{
//    mangled_ppc("?TX_SysMemBltTx@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@I@Z");
//};

//unsigned char XGRAPHICS::TX_CalcAAPtCoverage(int, int, int)
//{
//    mangled_ppc("?TX_CalcAAPtCoverage@XGRAPHICS@@YAEHHH@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcFogFactorLinear(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?TX_CalcFogFactorLinear@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_Destroy(struct XGRAPHICS::_TS_TEXTURE_SERVER *)
//{
//    mangled_ppc("?TX_Destroy@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CreateTexture(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?TX_CreateTexture@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@IIII@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_InitTxReserve(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int)
//{
//    mangled_ppc("?TX_InitTxReserve@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcPointAATx(struct XGRAPHICS::_TS_TEXTURE_SERVER *)
//{
//    mangled_ppc("?TX_CalcPointAATx@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcLineAATx(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?TX_CalcLineAATx@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcFogFactorExp(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?TX_CalcFogFactorExp@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcPolyStipple(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?TX_CalcPolyStipple@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::TX_CalcFogFactors(struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?TX_CalcFogFactors@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_TS_TEXTURE_SERVER@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int XGRAPHICS::TX_IntTxCommit(struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?TX_IntTxCommit@XGRAPHICS@@YAIPAU_TS_TEXTURE_SERVER@1@IPAU_CP_FETCHCONST_BLOCK@1@PAU_ABSTRACT_STATE@1@@Z");
//};

