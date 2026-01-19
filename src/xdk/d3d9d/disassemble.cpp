/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const D3D::Disassembler::kMaxCFInstructions; // "?kMaxCFInstructions@Disassembler@D3D@@0IB"
// private: static int const D3D::CTBitSet<8192, unsigned long>::DWORD_SIZE; // "?DWORD_SIZE@?$CTBitSet@$0CAAA@K@D3D@@0HB"
// private: static int const D3D::CTBitSet<8192, unsigned long>::BITS_PER_DWORD; // "?BITS_PER_DWORD@?$CTBitSet@$0CAAA@K@D3D@@0HB"
// char const **D3D::fetch_const_pos; // "?fetch_const_pos@D3D@@3PAPBDA"

// unsigned long D3D::byte_move(unsigned char const *);
// unsigned long D3D::bfx(unsigned char const *, unsigned long, unsigned long);
// void D3D::bfi(unsigned char *, unsigned long, unsigned long, long);
// public: D3D::Disassembler::~Disassembler(void);
// private: bool D3D::Disassembler::IsPixelShader(void);
// private: bool D3D::Disassembler::ShowDefaults(void);
// private: bool D3D::Disassembler::ShowInstructionStart(void);
// int D3D::WhoContributesToExport(struct D3D::aluFormat *);
// bool D3D::IsScalarNOP(struct D3D::aluFormat *);
// bool D3D::IsVectorNOP(struct D3D::aluFormat *);
// bool D3D::IsVectorNOP(union GPUALU_INSTRUCTION const *);
// bool D3D::IsScalarNOP(union GPUALU_INSTRUCTION const *);
// bool D3D::IsVectorMov(struct D3D::aluFormat *);
// bool D3D::IsVectorMova(struct D3D::aluFormat *);
// private: int D3D::Disassembler::IsUsed(struct D3D::textureFetchFormat *, unsigned long);
// bool D3D::IsRTFDelimiter(char);
// private: void D3D::Disassembler::DoPrint(char const *, char *);
// private: void D3D::Disassembler::DXGPRINT(char const *, ...);
// private: void D3D::Disassembler::PrintOpcodeIndent(void);
// private: void D3D::Disassembler::PrintYieldAndPredicateClean(int, int, bool);
// private: void D3D::Disassembler::PrintPredicated(int);
// private: void D3D::Disassembler::PrintRTF(char const *);
// private: void D3D::Disassembler::PrintOpcode(char const *, bool);
// private: void D3D::Disassembler::PrintCFOpcode(char const *);
// private: void D3D::Disassembler::StartUnimportantText(void);
// private: void D3D::Disassembler::EndUnimportantText(void);
// private: void D3D::Disassembler::PrintCFLineNumber(int);
// private: void D3D::Disassembler::PrintALULineNumber(int);
// private: void D3D::Disassembler::PrintLineNumberIndent(void);
// private: void D3D::Disassembler::PrintCommentStart(void);
// public: D3D::BufferedOutputContext::BufferedOutputContext(void);
// private: void D3D::BufferedOutputContext::Flush(void);
// public: D3D::CTBitSet<8192, unsigned long>::CTBitSet<8192, unsigned long>(void);
// public: bool D3D::CTBitSet<8192, unsigned long>::test(unsigned int);
// public: void D3D::CTBitSet<8192, unsigned long>::set(unsigned int);
// public: D3D::Disassembler::Disassembler(long (*)(void *, char const *, unsigned long), void *, long (*)(void *, unsigned long, unsigned int, void *, unsigned int), void *);
// private: void D3D::Disassembler::PrintALUAddress(char const *, int);
// private: void D3D::Disassembler::PrintCFAddress(int);
// private: void D3D::Disassembler::PrintSwizzle(int, char const *);
// private: void D3D::Disassembler::PrintDestReg(int, int, int, int, int, int, bool);
// private: void D3D::Disassembler::PrintSourceReg(int, int, int, int, int, int, int, int, bool);
// private: void D3D::Disassembler::PrintInternalKonstantReg(int, int, int);
// private: void D3D::Disassembler::PrintSel(int);
// private: void D3D::Disassembler::PrintAluVector(struct D3D::aluFormat *);
// private: void D3D::Disassembler::PrintAluScalar(struct D3D::aluFormat *);
// private: void D3D::Disassembler::PrintFetchDestRegBody(unsigned int, unsigned int);
// private: void D3D::Disassembler::PrintArgument(char const *, char const **, unsigned long, unsigned long);
// private: void D3D::Disassembler::PrintBooleanArgument(char const *, unsigned long, unsigned long);
// private: void D3D::Disassembler::DoPrintImp(char const *, ...);
// private: void D3D::Disassembler::PrintSerialize(void);
// public: D3D::BufferedOutputContext::~BufferedOutputContext(void);
// public: long D3D::BufferedOutputContext::Output(char const *, unsigned long);
// public: static long D3D::BufferedOutputContext::Callback(void *, char const *, unsigned long);
// private: void D3D::Disassembler::ForceStartLine(void);
// private: void D3D::Disassembler::StartLine(void);
// private: void D3D::Disassembler::StartInstruction(void);
// private: void D3D::Disassembler::PrintCommentEnd(void);
// private: void D3D::Disassembler::PrintWarning(bool, int, char const *, ...);
// private: void D3D::Disassembler::PrintFetchArgComma(void);
// private: void D3D::Disassembler::PrintFetch(char const *, int, unsigned long);
// private: long D3D::Disassembler::DoDisassembly_InstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *);
// private: long D3D::Disassembler::FindBranchTargets_InstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *);
// private: static long D3D::Disassembler::DoDisassembly_StaticInstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// private: static long D3D::Disassembler::FindBranchTargets_StaticInstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// private: void D3D::Disassembler::FindBranchTargets(char *, unsigned int);
// public: long D3D::Disassembler::DoDisassembly(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, char *, unsigned int, unsigned int);
// XDisassembleMicrocodeShaderRaw;
// void D3D::DisassembleShader(unsigned long *, unsigned long, unsigned long);

//unsigned long D3D::byte_move(unsigned char const *)
//{
//    mangled_ppc("?byte_move@D3D@@YAKPBE@Z");
//};

//unsigned long D3D::bfx(unsigned char const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?bfx@D3D@@YAKPBEKK@Z");
//};

//void D3D::bfi(unsigned char *, unsigned long, unsigned long, long)
//{
//    mangled_ppc("?bfi@D3D@@YAXPAEKKJ@Z");
//};

//public: D3D::Disassembler::~Disassembler(void)
//{
//    mangled_ppc("??1Disassembler@D3D@@QAA@XZ");
//};

//private: bool D3D::Disassembler::IsPixelShader(void)
//{
//    mangled_ppc("?IsPixelShader@Disassembler@D3D@@AAA_NXZ");
//};

//private: bool D3D::Disassembler::ShowDefaults(void)
//{
//    mangled_ppc("?ShowDefaults@Disassembler@D3D@@AAA_NXZ");
//};

//private: bool D3D::Disassembler::ShowInstructionStart(void)
//{
//    mangled_ppc("?ShowInstructionStart@Disassembler@D3D@@AAA_NXZ");
//};

//int D3D::WhoContributesToExport(struct D3D::aluFormat *)
//{
//    mangled_ppc("?WhoContributesToExport@D3D@@YAHPAUaluFormat@1@@Z");
//};

//bool D3D::IsScalarNOP(struct D3D::aluFormat *)
//{
//    mangled_ppc("?IsScalarNOP@D3D@@YA_NPAUaluFormat@1@@Z");
//};

//bool D3D::IsVectorNOP(struct D3D::aluFormat *)
//{
//    mangled_ppc("?IsVectorNOP@D3D@@YA_NPAUaluFormat@1@@Z");
//};

//bool D3D::IsVectorNOP(union GPUALU_INSTRUCTION const *)
//{
//    mangled_ppc("?IsVectorNOP@D3D@@YA_NPBTGPUALU_INSTRUCTION@@@Z");
//};

//bool D3D::IsScalarNOP(union GPUALU_INSTRUCTION const *)
//{
//    mangled_ppc("?IsScalarNOP@D3D@@YA_NPBTGPUALU_INSTRUCTION@@@Z");
//};

//bool D3D::IsVectorMov(struct D3D::aluFormat *)
//{
//    mangled_ppc("?IsVectorMov@D3D@@YA_NPAUaluFormat@1@@Z");
//};

//bool D3D::IsVectorMova(struct D3D::aluFormat *)
//{
//    mangled_ppc("?IsVectorMova@D3D@@YA_NPAUaluFormat@1@@Z");
//};

//private: int D3D::Disassembler::IsUsed(struct D3D::textureFetchFormat *, unsigned long)
//{
//    mangled_ppc("?IsUsed@Disassembler@D3D@@AAAHPAUtextureFetchFormat@2@K@Z");
//};

//bool D3D::IsRTFDelimiter(char)
//{
//    mangled_ppc("?IsRTFDelimiter@D3D@@YA_ND@Z");
//};

//private: void D3D::Disassembler::DoPrint(char const *, char *)
//{
//    mangled_ppc("?DoPrint@Disassembler@D3D@@AAAXPBDPAD@Z");
//};

//private: void D3D::Disassembler::DXGPRINT(char const *, ...)
//{
//    mangled_ppc("?DXGPRINT@Disassembler@D3D@@AAAXPBDZZ");
//};

//private: void D3D::Disassembler::PrintOpcodeIndent(void)
//{
//    mangled_ppc("?PrintOpcodeIndent@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::PrintYieldAndPredicateClean(int, int, bool)
//{
//    mangled_ppc("?PrintYieldAndPredicateClean@Disassembler@D3D@@AAAXHH_N@Z");
//};

//private: void D3D::Disassembler::PrintPredicated(int)
//{
//    mangled_ppc("?PrintPredicated@Disassembler@D3D@@AAAXH@Z");
//};

//private: void D3D::Disassembler::PrintRTF(char const *)
//{
//    mangled_ppc("?PrintRTF@Disassembler@D3D@@AAAXPBD@Z");
//};

//private: void D3D::Disassembler::PrintOpcode(char const *, bool)
//{
//    mangled_ppc("?PrintOpcode@Disassembler@D3D@@AAAXPBD_N@Z");
//};

//private: void D3D::Disassembler::PrintCFOpcode(char const *)
//{
//    mangled_ppc("?PrintCFOpcode@Disassembler@D3D@@AAAXPBD@Z");
//};

//private: void D3D::Disassembler::StartUnimportantText(void)
//{
//    mangled_ppc("?StartUnimportantText@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::EndUnimportantText(void)
//{
//    mangled_ppc("?EndUnimportantText@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::PrintCFLineNumber(int)
//{
//    mangled_ppc("?PrintCFLineNumber@Disassembler@D3D@@AAAXH@Z");
//};

//private: void D3D::Disassembler::PrintALULineNumber(int)
//{
//    mangled_ppc("?PrintALULineNumber@Disassembler@D3D@@AAAXH@Z");
//};

//private: void D3D::Disassembler::PrintLineNumberIndent(void)
//{
//    mangled_ppc("?PrintLineNumberIndent@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::PrintCommentStart(void)
//{
//    mangled_ppc("?PrintCommentStart@Disassembler@D3D@@AAAXXZ");
//};

//public: D3D::BufferedOutputContext::BufferedOutputContext(void)
//{
//    mangled_ppc("??0BufferedOutputContext@D3D@@QAA@XZ");
//};

//private: void D3D::BufferedOutputContext::Flush(void)
//{
//    mangled_ppc("?Flush@BufferedOutputContext@D3D@@AAAXXZ");
//};

//public: D3D::CTBitSet<8192, unsigned long>::CTBitSet<8192, unsigned long>(void)
//{
//    mangled_ppc("??0?$CTBitSet@$0CAAA@K@D3D@@QAA@XZ");
//};

//public: bool D3D::CTBitSet<8192, unsigned long>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0CAAA@K@D3D@@QAA_NI@Z");
//};

//public: void D3D::CTBitSet<8192, unsigned long>::set(unsigned int)
//{
//    mangled_ppc("?set@?$CTBitSet@$0CAAA@K@D3D@@QAAXI@Z");
//};

//public: D3D::Disassembler::Disassembler(long (*)(void *, char const *, unsigned long), void *, long (*)(void *, unsigned long, unsigned int, void *, unsigned int), void *)
//{
//    mangled_ppc("??0Disassembler@D3D@@QAA@P6AJPAXPBDK@Z0P6AJ0KI0I@Z0@Z");
//};

//private: void D3D::Disassembler::PrintALUAddress(char const *, int)
//{
//    mangled_ppc("?PrintALUAddress@Disassembler@D3D@@AAAXPBDH@Z");
//};

//private: void D3D::Disassembler::PrintCFAddress(int)
//{
//    mangled_ppc("?PrintCFAddress@Disassembler@D3D@@AAAXH@Z");
//};

//private: void D3D::Disassembler::PrintSwizzle(int, char const *)
//{
//    mangled_ppc("?PrintSwizzle@Disassembler@D3D@@AAAXHPBD@Z");
//};

//private: void D3D::Disassembler::PrintDestReg(int, int, int, int, int, int, bool)
//{
//    mangled_ppc("?PrintDestReg@Disassembler@D3D@@AAAXHHHHHH_N@Z");
//};

//private: void D3D::Disassembler::PrintSourceReg(int, int, int, int, int, int, int, int, bool)
//{
//    mangled_ppc("?PrintSourceReg@Disassembler@D3D@@AAAXHHHHHHHH_N@Z");
//};

//private: void D3D::Disassembler::PrintInternalKonstantReg(int, int, int)
//{
//    mangled_ppc("?PrintInternalKonstantReg@Disassembler@D3D@@AAAXHHH@Z");
//};

//private: void D3D::Disassembler::PrintSel(int)
//{
//    mangled_ppc("?PrintSel@Disassembler@D3D@@AAAXH@Z");
//};

//private: void D3D::Disassembler::PrintAluVector(struct D3D::aluFormat *)
//{
//    mangled_ppc("?PrintAluVector@Disassembler@D3D@@AAAXPAUaluFormat@2@@Z");
//};

//private: void D3D::Disassembler::PrintAluScalar(struct D3D::aluFormat *)
//{
//    mangled_ppc("?PrintAluScalar@Disassembler@D3D@@AAAXPAUaluFormat@2@@Z");
//};

//private: void D3D::Disassembler::PrintFetchDestRegBody(unsigned int, unsigned int)
//{
//    mangled_ppc("?PrintFetchDestRegBody@Disassembler@D3D@@AAAXII@Z");
//};

//private: void D3D::Disassembler::PrintArgument(char const *, char const **, unsigned long, unsigned long)
//{
//    mangled_ppc("?PrintArgument@Disassembler@D3D@@AAAXPBDPAPBDKK@Z");
//};

//private: void D3D::Disassembler::PrintBooleanArgument(char const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?PrintBooleanArgument@Disassembler@D3D@@AAAXPBDKK@Z");
//};

//private: void D3D::Disassembler::DoPrintImp(char const *, ...)
//{
//    mangled_ppc("?DoPrintImp@Disassembler@D3D@@AAAXPBDZZ");
//};

//private: void D3D::Disassembler::PrintSerialize(void)
//{
//    mangled_ppc("?PrintSerialize@Disassembler@D3D@@AAAXXZ");
//};

//public: D3D::BufferedOutputContext::~BufferedOutputContext(void)
//{
//    mangled_ppc("??1BufferedOutputContext@D3D@@QAA@XZ");
//};

//public: long D3D::BufferedOutputContext::Output(char const *, unsigned long)
//{
//    mangled_ppc("?Output@BufferedOutputContext@D3D@@QAAJPBDK@Z");
//};

//public: static long D3D::BufferedOutputContext::Callback(void *, char const *, unsigned long)
//{
//    mangled_ppc("?Callback@BufferedOutputContext@D3D@@SAJPAXPBDK@Z");
//};

//private: void D3D::Disassembler::ForceStartLine(void)
//{
//    mangled_ppc("?ForceStartLine@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::StartLine(void)
//{
//    mangled_ppc("?StartLine@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::StartInstruction(void)
//{
//    mangled_ppc("?StartInstruction@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::PrintCommentEnd(void)
//{
//    mangled_ppc("?PrintCommentEnd@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::PrintWarning(bool, int, char const *, ...)
//{
//    mangled_ppc("?PrintWarning@Disassembler@D3D@@AAAX_NHPBDZZ");
//};

//private: void D3D::Disassembler::PrintFetchArgComma(void)
//{
//    mangled_ppc("?PrintFetchArgComma@Disassembler@D3D@@AAAXXZ");
//};

//private: void D3D::Disassembler::PrintFetch(char const *, int, unsigned long)
//{
//    mangled_ppc("?PrintFetch@Disassembler@D3D@@AAAXPBDHK@Z");
//};

//private: long D3D::Disassembler::DoDisassembly_InstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *)
//{
//    mangled_ppc("?DoDisassembly_InstructionCallback@Disassembler@D3D@@AAAJKKPATGPUSHADER_INSTRUCTION@@@Z");
//};

//private: long D3D::Disassembler::FindBranchTargets_InstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *)
//{
//    mangled_ppc("?FindBranchTargets_InstructionCallback@Disassembler@D3D@@AAAJKKPATGPUSHADER_INSTRUCTION@@@Z");
//};

//private: static long D3D::Disassembler::DoDisassembly_StaticInstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?DoDisassembly_StaticInstructionCallback@Disassembler@D3D@@CAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//private: static long D3D::Disassembler::FindBranchTargets_StaticInstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?FindBranchTargets_StaticInstructionCallback@Disassembler@D3D@@CAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//private: void D3D::Disassembler::FindBranchTargets(char *, unsigned int)
//{
//    mangled_ppc("?FindBranchTargets@Disassembler@D3D@@AAAXPADI@Z");
//};

//public: long D3D::Disassembler::DoDisassembly(union GPU_PROGRAMCONTROL, union GPU_CONTEXTMISC, char *, unsigned int, unsigned int)
//{
//    mangled_ppc("?DoDisassembly@Disassembler@D3D@@QAAJTGPU_PROGRAMCONTROL@@TGPU_CONTEXTMISC@@PADII@Z");
//};

//XDisassembleMicrocodeShaderRaw
//{
//    mangled_ppc("XDisassembleMicrocodeShaderRaw");
//};

//void D3D::DisassembleShader(unsigned long *, unsigned long, unsigned long)
//{
//    mangled_ppc("?DisassembleShader@D3D@@YAXPAKKK@Z");
//};

