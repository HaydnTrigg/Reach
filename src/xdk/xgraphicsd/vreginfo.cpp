/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void XGRAPHICS::DefStack::Replace(struct XGRAPHICS::CurrentValue *);
// public: static class XGRAPHICS::VRegInfo * XGRAPHICS::VRegInfo::Make(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// void XGRAPHICS::CreateSimpleDestMask(union XGRAPHICS::SwizzleOrMaskInfo &, union XGRAPHICS::SwizzleOrMaskInfo);
// public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::ExportValue::GetReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *);
// public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::Interpolator::GetReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *);
// public: void XGRAPHICS::IRLoadTemp::AdjustDestModifer(char *);
// public: static void * XGRAPHICS::DefStack::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::DefStack::operator delete(void *);
// public: XGRAPHICS::DefStack::DefStack(class XGRAPHICS::Compiler *);
// public: int XGRAPHICS::DefStack::DefBlockId(void);
// public: static void * XGRAPHICS::DefStack::DefInst::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::DefStack::DefInst::operator delete(void *);
// public: XGRAPHICS::DefStack::DefInst::DefInst(int, struct XGRAPHICS::CurrentValue *);
// public: bool XGRAPHICS::VRegInfo::IsGlobal(void) const;
// public: void XGRAPHICS::VRegInfo::SetLoadStatus(bool);
// public: void XGRAPHICS::VRegInfo::SetInitStatus(bool);
// public: int XGRAPHICS::VRegInfo::GetTopDefBlockId(void) const;
// public: void XGRAPHICS::DefStack::Push(int, struct XGRAPHICS::CurrentValue *);
// public: void XGRAPHICS::DefStack::Pop(void);
// public: void XGRAPHICS::VRegInfo::PopDef(void);
// public: void XGRAPHICS::VRegInfo::PushDef(int, struct XGRAPHICS::CurrentValue *);
// public: bool XGRAPHICS::VRegInfo::operator==(class XGRAPHICS::VRegInfo const &);
// public: XGRAPHICS::DefStack::~DefStack(void);
// protected: XGRAPHICS::VRegInfo::VRegInfo(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: static void XGRAPHICS::VRegInfo::operator delete(void *);
// public: virtual void XGRAPHICS::VRegInfo::SetGlobal(bool);
// public: virtual bool XGRAPHICS::VRegInfo::IsInterpolator(void) const;
// public: virtual bool XGRAPHICS::VRegInfo::IsFixed(void) const;
// public: virtual bool XGRAPHICS::VRegInfo::IsTemp(void) const;
// public: virtual bool XGRAPHICS::VRegInfo::IsLoopIndexedSet(void) const;
// public: virtual bool XGRAPHICS::VRegInfo::IsResource(void) const;
// public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::VRegInfo::CreateReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *, class XGRAPHICS::Compiler *);
// public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::VRegInfo::GetReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *);
// public: void * XGRAPHICS::DefStack::`scalar deleting destructor'(unsigned int);
// public: void XGRAPHICS::VRegInfo::BumpDefs(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::VRegInfo::BumpUses(int, class XGRAPHICS::IRInst *);
// public: struct XGRAPHICS::CurrentValue * XGRAPHICS::VRegInfo::GetActiveDefinition(class XGRAPHICS::Block *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::VRegInfo::ReplaceUse(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::VRegInfo::RemoveUse(class XGRAPHICS::IRInst *);
// public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::ExportValue::CreateReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *, class XGRAPHICS::Compiler *);
// public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::Interpolator::CreateReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::VRegInfo::~VRegInfo(void);
// public: XGRAPHICS::FixedValue::FixedValue(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::FixedValue::IsFixed(void) const;
// public: virtual XGRAPHICS::FixedValue::~FixedValue(void);
// public: XGRAPHICS::TempValue::TempValue(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::TempValue::IsTemp(void) const;
// public: virtual XGRAPHICS::TempValue::~TempValue(void);
// protected: XGRAPHICS::ExportValue::ExportValue(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::ExportValue::~ExportValue(void);
// public: XGRAPHICS::Interpolator::Interpolator(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::Interpolator::IsInterpolator(void) const;
// public: virtual XGRAPHICS::Interpolator::~Interpolator(void);
// public: XGRAPHICS::Interpolator::Interpolator(int, enum R400Tables::RegType, int, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::Physical::Physical(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::Physical::~Physical(void);
// private: XGRAPHICS::Resource::Resource(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::Resource::IsResource(void) const;
// public: virtual XGRAPHICS::Resource::~Resource(void);
// public: XGRAPHICS::StandardIndex::StandardIndex(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::StandardIndex::~StandardIndex(void);
// public: XGRAPHICS::AutoIndexVtx::AutoIndexVtx(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::AutoIndexVtx::IsTemp(void) const;
// public: virtual XGRAPHICS::AutoIndexVtx::~AutoIndexVtx(void);
// public: XGRAPHICS::HosCoord::HosCoord(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::HosCoord::~HosCoord(void);
// public: XGRAPHICS::BaseAddr::BaseAddr(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::BaseAddr::~BaseAddr(void);
// public: XGRAPHICS::AddrIndexedSet::AddrIndexedSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::AddrIndexedSet::~AddrIndexedSet(void);
// public: XGRAPHICS::LoopRegister::LoopRegister(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::LoopRegister::~LoopRegister(void);
// public: XGRAPHICS::ExportAddress::ExportAddress(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::ExportAddress::~ExportAddress(void);
// public: XGRAPHICS::ExportSlot::ExportSlot(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::ExportSlot::~ExportSlot(void);
// protected: XGRAPHICS::LoopIndexedSet::LoopIndexedSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::LoopIndexedSet::IsLoopIndexedSet(void) const;
// public: virtual XGRAPHICS::LoopIndexedSet::~LoopIndexedSet(void);
// merged_83E5C418;
// merged_83E5C480;
// merged_83E5C4E8;
// merged_83E5C550;
// merged_83E5C5B8;
// merged_83E5C620;
// merged_83E5C688;
// merged_83E5C6F0;
// merged_83E5C758;
// merged_83E5C7C0;
// merged_83E5C828;
// merged_83E5C890;
// merged_83E5C8F8;
// public: XGRAPHICS::LoopIndexedConstSet::LoopIndexedConstSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::LoopIndexedConstSet::~LoopIndexedConstSet(void);
// public: XGRAPHICS::LoopIndexedInputSet::LoopIndexedInputSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::LoopIndexedInputSet::~LoopIndexedInputSet(void);
// public: XGRAPHICS::LoopIndexedOutputSet::LoopIndexedOutputSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::LoopIndexedOutputSet::~LoopIndexedOutputSet(void);
// merged_83E5CB40;
// merged_83E5CBA8;
// merged_83E5CC10;
// merged_83E5CC78;
// merged_83E5CCE0;
// merged_83E5CD48;

//public: void XGRAPHICS::DefStack::Replace(struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?Replace@DefStack@XGRAPHICS@@QAAXPAUCurrentValue@2@@Z");
//};

//public: static class XGRAPHICS::VRegInfo * XGRAPHICS::VRegInfo::Make(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Make@VRegInfo@XGRAPHICS@@SAPAV12@HW4RegType@R400Tables@@PAVCompiler@2@@Z");
//};

//void XGRAPHICS::CreateSimpleDestMask(union XGRAPHICS::SwizzleOrMaskInfo &, union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?CreateSimpleDestMask@XGRAPHICS@@YAXAATSwizzleOrMaskInfo@1@T21@@Z");
//};

//public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::ExportValue::GetReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?GetReplacingTempIfNecessary@ExportValue@XGRAPHICS@@UAAPAVVRegInfo@2@TSwizzleOrMaskInfo@2@PAVCFG@2@@Z");
//};

//public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::Interpolator::GetReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?GetReplacingTempIfNecessary@Interpolator@XGRAPHICS@@UAAPAVVRegInfo@2@TSwizzleOrMaskInfo@2@PAVCFG@2@@Z");
//};

//public: void XGRAPHICS::IRLoadTemp::AdjustDestModifer(char *)
//{
//    mangled_ppc("?AdjustDestModifer@IRLoadTemp@XGRAPHICS@@QAAXPAD@Z");
//};

//public: static void * XGRAPHICS::DefStack::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2DefStack@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::DefStack::operator delete(void *)
//{
//    mangled_ppc("??3DefStack@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::DefStack::DefStack(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0DefStack@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: int XGRAPHICS::DefStack::DefBlockId(void)
//{
//    mangled_ppc("?DefBlockId@DefStack@XGRAPHICS@@QAAHXZ");
//};

//public: static void * XGRAPHICS::DefStack::DefInst::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2DefInst@DefStack@XGRAPHICS@@SAPAXIPBVArena@2@@Z");
//};

//public: static void XGRAPHICS::DefStack::DefInst::operator delete(void *)
//{
//    mangled_ppc("??3DefInst@DefStack@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::DefStack::DefInst::DefInst(int, struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("??0DefInst@DefStack@XGRAPHICS@@QAA@HPAUCurrentValue@2@@Z");
//};

//public: bool XGRAPHICS::VRegInfo::IsGlobal(void) const
//{
//    mangled_ppc("?IsGlobal@VRegInfo@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::VRegInfo::SetLoadStatus(bool)
//{
//    mangled_ppc("?SetLoadStatus@VRegInfo@XGRAPHICS@@QAAX_N@Z");
//};

//public: void XGRAPHICS::VRegInfo::SetInitStatus(bool)
//{
//    mangled_ppc("?SetInitStatus@VRegInfo@XGRAPHICS@@QAAX_N@Z");
//};

//public: int XGRAPHICS::VRegInfo::GetTopDefBlockId(void) const
//{
//    mangled_ppc("?GetTopDefBlockId@VRegInfo@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::DefStack::Push(int, struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?Push@DefStack@XGRAPHICS@@QAAXHPAUCurrentValue@2@@Z");
//};

//public: void XGRAPHICS::DefStack::Pop(void)
//{
//    mangled_ppc("?Pop@DefStack@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::VRegInfo::PopDef(void)
//{
//    mangled_ppc("?PopDef@VRegInfo@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::VRegInfo::PushDef(int, struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?PushDef@VRegInfo@XGRAPHICS@@QAAXHPAUCurrentValue@2@@Z");
//};

//public: bool XGRAPHICS::VRegInfo::operator==(class XGRAPHICS::VRegInfo const &)
//{
//    mangled_ppc("??8VRegInfo@XGRAPHICS@@QAA_NABV01@@Z");
//};

//public: XGRAPHICS::DefStack::~DefStack(void)
//{
//    mangled_ppc("??1DefStack@XGRAPHICS@@QAA@XZ");
//};

//protected: XGRAPHICS::VRegInfo::VRegInfo(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0VRegInfo@XGRAPHICS@@IAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: static void XGRAPHICS::VRegInfo::operator delete(void *)
//{
//    mangled_ppc("??3VRegInfo@XGRAPHICS@@SAXPAX@Z");
//};

//public: virtual void XGRAPHICS::VRegInfo::SetGlobal(bool)
//{
//    mangled_ppc("?SetGlobal@VRegInfo@XGRAPHICS@@UAAX_N@Z");
//};

//public: virtual bool XGRAPHICS::VRegInfo::IsInterpolator(void) const
//{
//    mangled_ppc("?IsInterpolator@VRegInfo@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::VRegInfo::IsFixed(void) const
//{
//    mangled_ppc("?IsFixed@VRegInfo@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::VRegInfo::IsTemp(void) const
//{
//    mangled_ppc("?IsTemp@VRegInfo@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::VRegInfo::IsLoopIndexedSet(void) const
//{
//    mangled_ppc("?IsLoopIndexedSet@VRegInfo@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::VRegInfo::IsResource(void) const
//{
//    mangled_ppc("?IsResource@VRegInfo@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::VRegInfo::CreateReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?CreateReplacingTempIfNecessary@VRegInfo@XGRAPHICS@@UAAPAV12@TSwizzleOrMaskInfo@2@PAVCFG@2@PAVCompiler@2@@Z");
//};

//public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::VRegInfo::GetReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?GetReplacingTempIfNecessary@VRegInfo@XGRAPHICS@@UAAPAV12@TSwizzleOrMaskInfo@2@PAVCFG@2@@Z");
//};

//public: void * XGRAPHICS::DefStack::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GDefStack@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void XGRAPHICS::VRegInfo::BumpDefs(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?BumpDefs@VRegInfo@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::VRegInfo::BumpUses(int, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?BumpUses@VRegInfo@XGRAPHICS@@QAAXHPAVIRInst@2@@Z");
//};

//public: struct XGRAPHICS::CurrentValue * XGRAPHICS::VRegInfo::GetActiveDefinition(class XGRAPHICS::Block *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?GetActiveDefinition@VRegInfo@XGRAPHICS@@QAAPAUCurrentValue@2@PAVBlock@2@PAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::VRegInfo::ReplaceUse(class XGRAPHICS::IRInst *, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?ReplaceUse@VRegInfo@XGRAPHICS@@QAAXPAVIRInst@2@0@Z");
//};

//public: void XGRAPHICS::VRegInfo::RemoveUse(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?RemoveUse@VRegInfo@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::ExportValue::CreateReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?CreateReplacingTempIfNecessary@ExportValue@XGRAPHICS@@UAAPAVVRegInfo@2@TSwizzleOrMaskInfo@2@PAVCFG@2@PAVCompiler@2@@Z");
//};

//public: virtual class XGRAPHICS::VRegInfo * XGRAPHICS::Interpolator::CreateReplacingTempIfNecessary(union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::CFG *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?CreateReplacingTempIfNecessary@Interpolator@XGRAPHICS@@UAAPAVVRegInfo@2@TSwizzleOrMaskInfo@2@PAVCFG@2@PAVCompiler@2@@Z");
//};

//public: virtual XGRAPHICS::VRegInfo::~VRegInfo(void)
//{
//    mangled_ppc("??1VRegInfo@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::FixedValue::FixedValue(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0FixedValue@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::FixedValue::IsFixed(void) const
//{
//    mangled_ppc("?IsFixed@FixedValue@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::FixedValue::~FixedValue(void)
//{
//    mangled_ppc("??1FixedValue@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::TempValue::TempValue(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0TempValue@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::TempValue::IsTemp(void) const
//{
//    mangled_ppc("?IsTemp@TempValue@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::TempValue::~TempValue(void)
//{
//    mangled_ppc("??1TempValue@XGRAPHICS@@UAA@XZ");
//};

//protected: XGRAPHICS::ExportValue::ExportValue(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ExportValue@XGRAPHICS@@IAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::ExportValue::~ExportValue(void)
//{
//    mangled_ppc("??1ExportValue@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::Interpolator::Interpolator(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Interpolator@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::Interpolator::IsInterpolator(void) const
//{
//    mangled_ppc("?IsInterpolator@Interpolator@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::Interpolator::~Interpolator(void)
//{
//    mangled_ppc("??1Interpolator@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::Interpolator::Interpolator(int, enum R400Tables::RegType, int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Interpolator@XGRAPHICS@@QAA@HW4RegType@R400Tables@@HPAVCompiler@1@@Z");
//};

//public: XGRAPHICS::Physical::Physical(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Physical@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::Physical::~Physical(void)
//{
//    mangled_ppc("??1Physical@XGRAPHICS@@UAA@XZ");
//};

//private: XGRAPHICS::Resource::Resource(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Resource@XGRAPHICS@@AAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::Resource::IsResource(void) const
//{
//    mangled_ppc("?IsResource@Resource@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::Resource::~Resource(void)
//{
//    mangled_ppc("??1Resource@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::StandardIndex::StandardIndex(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0StandardIndex@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::StandardIndex::~StandardIndex(void)
//{
//    mangled_ppc("??1StandardIndex@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::AutoIndexVtx::AutoIndexVtx(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0AutoIndexVtx@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::AutoIndexVtx::IsTemp(void) const
//{
//    mangled_ppc("?IsTemp@AutoIndexVtx@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::AutoIndexVtx::~AutoIndexVtx(void)
//{
//    mangled_ppc("??1AutoIndexVtx@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::HosCoord::HosCoord(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0HosCoord@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::HosCoord::~HosCoord(void)
//{
//    mangled_ppc("??1HosCoord@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::BaseAddr::BaseAddr(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0BaseAddr@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::BaseAddr::~BaseAddr(void)
//{
//    mangled_ppc("??1BaseAddr@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::AddrIndexedSet::AddrIndexedSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0AddrIndexedSet@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::AddrIndexedSet::~AddrIndexedSet(void)
//{
//    mangled_ppc("??1AddrIndexedSet@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::LoopRegister::LoopRegister(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopRegister@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::LoopRegister::~LoopRegister(void)
//{
//    mangled_ppc("??1LoopRegister@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::ExportAddress::ExportAddress(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ExportAddress@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::ExportAddress::~ExportAddress(void)
//{
//    mangled_ppc("??1ExportAddress@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::ExportSlot::ExportSlot(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ExportSlot@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::ExportSlot::~ExportSlot(void)
//{
//    mangled_ppc("??1ExportSlot@XGRAPHICS@@UAA@XZ");
//};

//protected: XGRAPHICS::LoopIndexedSet::LoopIndexedSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopIndexedSet@XGRAPHICS@@IAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::LoopIndexedSet::IsLoopIndexedSet(void) const
//{
//    mangled_ppc("?IsLoopIndexedSet@LoopIndexedSet@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::LoopIndexedSet::~LoopIndexedSet(void)
//{
//    mangled_ppc("??1LoopIndexedSet@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5C418
//{
//    mangled_ppc("merged_83E5C418");
//};

//merged_83E5C480
//{
//    mangled_ppc("merged_83E5C480");
//};

//merged_83E5C4E8
//{
//    mangled_ppc("merged_83E5C4E8");
//};

//merged_83E5C550
//{
//    mangled_ppc("merged_83E5C550");
//};

//merged_83E5C5B8
//{
//    mangled_ppc("merged_83E5C5B8");
//};

//merged_83E5C620
//{
//    mangled_ppc("merged_83E5C620");
//};

//merged_83E5C688
//{
//    mangled_ppc("merged_83E5C688");
//};

//merged_83E5C6F0
//{
//    mangled_ppc("merged_83E5C6F0");
//};

//merged_83E5C758
//{
//    mangled_ppc("merged_83E5C758");
//};

//merged_83E5C7C0
//{
//    mangled_ppc("merged_83E5C7C0");
//};

//merged_83E5C828
//{
//    mangled_ppc("merged_83E5C828");
//};

//merged_83E5C890
//{
//    mangled_ppc("merged_83E5C890");
//};

//merged_83E5C8F8
//{
//    mangled_ppc("merged_83E5C8F8");
//};

//public: XGRAPHICS::LoopIndexedConstSet::LoopIndexedConstSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopIndexedConstSet@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::LoopIndexedConstSet::~LoopIndexedConstSet(void)
//{
//    mangled_ppc("??1LoopIndexedConstSet@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::LoopIndexedInputSet::LoopIndexedInputSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopIndexedInputSet@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::LoopIndexedInputSet::~LoopIndexedInputSet(void)
//{
//    mangled_ppc("??1LoopIndexedInputSet@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::LoopIndexedOutputSet::LoopIndexedOutputSet(int, enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopIndexedOutputSet@XGRAPHICS@@QAA@HW4RegType@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::LoopIndexedOutputSet::~LoopIndexedOutputSet(void)
//{
//    mangled_ppc("??1LoopIndexedOutputSet@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5CB40
//{
//    mangled_ppc("merged_83E5CB40");
//};

//merged_83E5CBA8
//{
//    mangled_ppc("merged_83E5CBA8");
//};

//merged_83E5CC10
//{
//    mangled_ppc("merged_83E5CC10");
//};

//merged_83E5CC78
//{
//    mangled_ppc("merged_83E5CC78");
//};

//merged_83E5CCE0
//{
//    mangled_ppc("merged_83E5CCE0");
//};

//merged_83E5CD48
//{
//    mangled_ppc("merged_83E5CD48");
//};

