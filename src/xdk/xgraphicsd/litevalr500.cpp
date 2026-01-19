/* ---------- headers */

#include "xdk\xgraphicsd\litevalr500.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// GPU_GET_FLOW_INSTRUCTIONS;
// UCodeToNativeWORD;
// UCodeToNativeDWORD;
// UCodeGetUCodeHeader;
// UCodeMicrocodeIsValidVersion;
// UCodeGetShaderType;
// void * ValLiteMemAlloc(unsigned long);
// void ValLiteMemFree(void *);
// long ResetExpectedEndStack(struct EXPECTED_END_STACK *);
// long PushExpectedEnd(struct EXPECTED_END_STACK *, enum EXPECTED_END);
// long PopExpectedEnd(struct EXPECTED_END_STACK *);
// enum EXPECTED_END GetExpectedEnd(struct TODO_ENTRY const *);
// long AddTodo(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *);
// long AddTodo_Push(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *, enum EXPECTED_END);
// long AddTodo_Change(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *, enum EXPECTED_END);
// long AddTodo_Pop(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *);
// union GPUFLOW_INSTRUCTION GetCF(union GPUFLOW_INSTRUCTION const *, int);
// int OpJumpsOrForcesEnd(unsigned long);
// int OpCanEnd(unsigned long);
// int CfUsesPred(union GPUFLOW_INSTRUCTION const *);
// long ValidateRange(void const *, unsigned long, unsigned long, void const *, unsigned long);
// long ValidateTFetch(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *);
// long ValidateVFetchFormat(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *);
// long ValidateVFetch(union GPUSHADER_INSTRUCTION const *, int, int, struct R500StuffLite const *);
// long ValidateALUOpcodes(union GPUSHADER_INSTRUCTION const *, int, bool, struct R500StuffLite const *, struct TODO_LIST *);
// long ValidateALUOutputs(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *, struct TODO_LIST *);
// long ValidateALUInputs(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *, struct TODO_LIST const *);
// long ValidateALU(union GPUSHADER_INSTRUCTION const *, int, bool, struct R500StuffLite const *, struct TODO_LIST *);
// long ValidateAluOrFetchInstruction(union GPUSHADER_INSTRUCTION const *, int, bool, bool, bool, bool, struct InstructionUsageLite *, struct R500StuffLite const *, struct TODO_LIST *);
// long ValidateNop(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *);
// long ValidateExecCommon(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *);
// long ValidateExec(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *);
// long ValidatePredExec(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *);
// long ValidateBoolExec(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *);
// long ValidateLoopStart(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int);
// long ValidateLoopEnd(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int);
// long ValidateCondCall(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int);
// long ValidateReturn(union GPUFLOW_INSTRUCTION, struct TODO_LIST const *, struct InstructionUsageLite *);
// long ValidateCondJump(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int);
// long ValidateAlloc(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, struct R500StuffLite const *);
// long ValidateVFetchEnd(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, struct R500StuffLite const *);
// long ParseControlFlowLite(union GPUFLOW_INSTRUCTION const *, struct TODO_LIST *, struct InstructionUsageLite *, struct R500StuffLite const *);
// long ValidateOffset(unsigned long, unsigned long, unsigned long, unsigned long);
// long ValidateString(void const *, unsigned long, unsigned long, unsigned long);
// long ValidateStructMemberInfo(struct _D3DXSHADER_STRUCTMEMBERINFO const *, struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long, struct _PREV_TYPE_INFO *);
// long ValidateTypeInfo(struct _D3DXSHADER_TYPEINFO const *, struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long, struct _PREV_TYPE_INFO *);
// long ValidateConstantInfo(struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long);
// long ValidateConstantTable(struct _UCODE_CONSTANT_TABLE const *, struct R500StuffLite const *);
// long ValidateLiteralConstants(struct _UCODE_DEFINITION_TABLE const *, struct R500StuffLite const *);
// long ValidateDebuggerHint(struct _UCODE_R500_DEBUGGER_HINT_HEADER const *, struct R500StuffLite const *);
// long ValidatePsInputDecls(union _UCODE_PSINPUTDECLARATION const *, struct R500StuffLite const *);
// long ValidateVsIndexInputDecls(union _UCODE_VSINDEXDECLARATION const *, struct R500StuffLite const *);
// long ValidateVsInputDecls(union _UCODE_VSINPUTDECLARATION const *, struct R500StuffLite const *);
// long ValidateVsOutputPatches(union _UCODE_VSOUTPUTPATCH const *, struct R500StuffLite const *);
// long ValidateVsOutputDecls(union _UCODE_VSOUTPUTDECLARATION const *, struct R500StuffLite const *);
// long ValidateMicrocodeInstructions(struct R500StuffLite *);
// long CheckForProperPadding(struct InstructionUsageLite const *);
// long XGValidateMicrocodeLite2(struct R500StuffLite *);
// long GetR500UCodeInfo(void const *, unsigned long, int, struct R500StuffLite *);
// int MemoryOverlaps(void const *, unsigned long, void const *, unsigned long);
// long ValidateMemoryRanges(struct R500StuffLite *, struct R500StuffLite *, int);
// int XGValidateMicrocodeLite(unsigned long const *, int);
// XGValidateVertexShaderMicrocodeLite;
// XGValidatePixelShaderMicrocodeLite;
// XGValidateShaderMemory;

//GPU_GET_FLOW_INSTRUCTIONS
//{
//    mangled_ppc("GPU_GET_FLOW_INSTRUCTIONS");
//};

//UCodeToNativeWORD
//{
//    mangled_ppc("UCodeToNativeWORD");
//};

//UCodeToNativeDWORD
//{
//    mangled_ppc("UCodeToNativeDWORD");
//};

//UCodeGetUCodeHeader
//{
//    mangled_ppc("UCodeGetUCodeHeader");
//};

//UCodeMicrocodeIsValidVersion
//{
//    mangled_ppc("UCodeMicrocodeIsValidVersion");
//};

//UCodeGetShaderType
//{
//    mangled_ppc("UCodeGetShaderType");
//};

//void * ValLiteMemAlloc(unsigned long)
//{
//    mangled_ppc("?ValLiteMemAlloc@@YAPAXK@Z");
//};

//void ValLiteMemFree(void *)
//{
//    mangled_ppc("?ValLiteMemFree@@YAXPAX@Z");
//};

//long ResetExpectedEndStack(struct EXPECTED_END_STACK *)
//{
//    mangled_ppc("?ResetExpectedEndStack@@YAJPAUEXPECTED_END_STACK@@@Z");
//};

//long PushExpectedEnd(struct EXPECTED_END_STACK *, enum EXPECTED_END)
//{
//    mangled_ppc("?PushExpectedEnd@@YAJPAUEXPECTED_END_STACK@@W4EXPECTED_END@@@Z");
//};

//long PopExpectedEnd(struct EXPECTED_END_STACK *)
//{
//    mangled_ppc("?PopExpectedEnd@@YAJPAUEXPECTED_END_STACK@@@Z");
//};

//enum EXPECTED_END GetExpectedEnd(struct TODO_ENTRY const *)
//{
//    mangled_ppc("?GetExpectedEnd@@YA?AW4EXPECTED_END@@PBUTODO_ENTRY@@@Z");
//};

//long AddTodo(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *)
//{
//    mangled_ppc("?AddTodo@@YAJPAUTODO_LIST@@KKKPBUEXPECTED_END_STACK@@@Z");
//};

//long AddTodo_Push(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *, enum EXPECTED_END)
//{
//    mangled_ppc("?AddTodo_Push@@YAJPAUTODO_LIST@@KKKPBUEXPECTED_END_STACK@@W4EXPECTED_END@@@Z");
//};

//long AddTodo_Change(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *, enum EXPECTED_END)
//{
//    mangled_ppc("?AddTodo_Change@@YAJPAUTODO_LIST@@KKKPBUEXPECTED_END_STACK@@W4EXPECTED_END@@@Z");
//};

//long AddTodo_Pop(struct TODO_LIST *, unsigned long, unsigned long, unsigned long, struct EXPECTED_END_STACK const *)
//{
//    mangled_ppc("?AddTodo_Pop@@YAJPAUTODO_LIST@@KKKPBUEXPECTED_END_STACK@@@Z");
//};

//union GPUFLOW_INSTRUCTION GetCF(union GPUFLOW_INSTRUCTION const *, int)
//{
//    mangled_ppc("?GetCF@@YA?ATGPUFLOW_INSTRUCTION@@PBT1@H@Z");
//};

//int OpJumpsOrForcesEnd(unsigned long)
//{
//    mangled_ppc("?OpJumpsOrForcesEnd@@YAHK@Z");
//};

//int OpCanEnd(unsigned long)
//{
//    mangled_ppc("?OpCanEnd@@YAHK@Z");
//};

//int CfUsesPred(union GPUFLOW_INSTRUCTION const *)
//{
//    mangled_ppc("?CfUsesPred@@YAHPBTGPUFLOW_INSTRUCTION@@@Z");
//};

//long ValidateRange(void const *, unsigned long, unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?ValidateRange@@YAJPBXKK0K@Z");
//};

//long ValidateTFetch(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateTFetch@@YAJPBTGPUSHADER_INSTRUCTION@@HPBUR500StuffLite@@@Z");
//};

//long ValidateVFetchFormat(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVFetchFormat@@YAJPBTGPUSHADER_INSTRUCTION@@HPBUR500StuffLite@@@Z");
//};

//long ValidateVFetch(union GPUSHADER_INSTRUCTION const *, int, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVFetch@@YAJPBTGPUSHADER_INSTRUCTION@@HHPBUR500StuffLite@@@Z");
//};

//long ValidateALUOpcodes(union GPUSHADER_INSTRUCTION const *, int, bool, struct R500StuffLite const *, struct TODO_LIST *)
//{
//    mangled_ppc("?ValidateALUOpcodes@@YAJPBTGPUSHADER_INSTRUCTION@@H_NPBUR500StuffLite@@PAUTODO_LIST@@@Z");
//};

//long ValidateALUOutputs(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *, struct TODO_LIST *)
//{
//    mangled_ppc("?ValidateALUOutputs@@YAJPBTGPUSHADER_INSTRUCTION@@HPBUR500StuffLite@@PAUTODO_LIST@@@Z");
//};

//long ValidateALUInputs(union GPUSHADER_INSTRUCTION const *, int, struct R500StuffLite const *, struct TODO_LIST const *)
//{
//    mangled_ppc("?ValidateALUInputs@@YAJPBTGPUSHADER_INSTRUCTION@@HPBUR500StuffLite@@PBUTODO_LIST@@@Z");
//};

//long ValidateALU(union GPUSHADER_INSTRUCTION const *, int, bool, struct R500StuffLite const *, struct TODO_LIST *)
//{
//    mangled_ppc("?ValidateALU@@YAJPBTGPUSHADER_INSTRUCTION@@H_NPBUR500StuffLite@@PAUTODO_LIST@@@Z");
//};

//long ValidateAluOrFetchInstruction(union GPUSHADER_INSTRUCTION const *, int, bool, bool, bool, bool, struct InstructionUsageLite *, struct R500StuffLite const *, struct TODO_LIST *)
//{
//    mangled_ppc("?ValidateAluOrFetchInstruction@@YAJPBTGPUSHADER_INSTRUCTION@@H_N111PAUInstructionUsageLite@@PBUR500StuffLite@@PAUTODO_LIST@@@Z");
//};

//long ValidateNop(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *)
//{
//    mangled_ppc("?ValidateNop@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PAUInstructionUsageLite@@@Z");
//};

//long ValidateExecCommon(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateExecCommon@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PAUInstructionUsageLite@@PBT1@HPBUR500StuffLite@@@Z");
//};

//long ValidateExec(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateExec@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PAUInstructionUsageLite@@PBT1@HPBUR500StuffLite@@@Z");
//};

//long ValidatePredExec(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidatePredExec@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PAUInstructionUsageLite@@PBT1@HPBUR500StuffLite@@@Z");
//};

//long ValidateBoolExec(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite *, union GPUFLOW_INSTRUCTION const *, int, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateBoolExec@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PAUInstructionUsageLite@@PBT1@HPBUR500StuffLite@@@Z");
//};

//long ValidateLoopStart(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int)
//{
//    mangled_ppc("?ValidateLoopStart@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PBUInstructionUsageLite@@PBT1@H@Z");
//};

//long ValidateLoopEnd(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int)
//{
//    mangled_ppc("?ValidateLoopEnd@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PBUInstructionUsageLite@@PBT1@H@Z");
//};

//long ValidateCondCall(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int)
//{
//    mangled_ppc("?ValidateCondCall@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PBUInstructionUsageLite@@PBT1@H@Z");
//};

//long ValidateReturn(union GPUFLOW_INSTRUCTION, struct TODO_LIST const *, struct InstructionUsageLite *)
//{
//    mangled_ppc("?ValidateReturn@@YAJTGPUFLOW_INSTRUCTION@@PBUTODO_LIST@@PAUInstructionUsageLite@@@Z");
//};

//long ValidateCondJump(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, union GPUFLOW_INSTRUCTION const *, int)
//{
//    mangled_ppc("?ValidateCondJump@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PBUInstructionUsageLite@@PBT1@H@Z");
//};

//long ValidateAlloc(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateAlloc@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PBUInstructionUsageLite@@PBUR500StuffLite@@@Z");
//};

//long ValidateVFetchEnd(union GPUFLOW_INSTRUCTION, struct TODO_LIST *, struct InstructionUsageLite const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVFetchEnd@@YAJTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PBUInstructionUsageLite@@PBUR500StuffLite@@@Z");
//};

//long ParseControlFlowLite(union GPUFLOW_INSTRUCTION const *, struct TODO_LIST *, struct InstructionUsageLite *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ParseControlFlowLite@@YAJPBTGPUFLOW_INSTRUCTION@@PAUTODO_LIST@@PAUInstructionUsageLite@@PBUR500StuffLite@@@Z");
//};

//long ValidateOffset(unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?ValidateOffset@@YAJKKKK@Z");
//};

//long ValidateString(void const *, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?ValidateString@@YAJPBXKKK@Z");
//};

//long ValidateStructMemberInfo(struct _D3DXSHADER_STRUCTMEMBERINFO const *, struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long, struct _PREV_TYPE_INFO *)
//{
//    mangled_ppc("?ValidateStructMemberInfo@@YAJPBU_D3DXSHADER_STRUCTMEMBERINFO@@PBU_D3DXSHADER_CONSTANTTABLE@@KPAU_PREV_TYPE_INFO@@@Z");
//};

//long ValidateTypeInfo(struct _D3DXSHADER_TYPEINFO const *, struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long, struct _PREV_TYPE_INFO *)
//{
//    mangled_ppc("?ValidateTypeInfo@@YAJPBU_D3DXSHADER_TYPEINFO@@PBU_D3DXSHADER_CONSTANTTABLE@@KPAU_PREV_TYPE_INFO@@@Z");
//};

//long ValidateConstantInfo(struct _D3DXSHADER_CONSTANTINFO const *, struct _D3DXSHADER_CONSTANTTABLE const *, unsigned long)
//{
//    mangled_ppc("?ValidateConstantInfo@@YAJPBU_D3DXSHADER_CONSTANTINFO@@PBU_D3DXSHADER_CONSTANTTABLE@@K@Z");
//};

//long ValidateConstantTable(struct _UCODE_CONSTANT_TABLE const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateConstantTable@@YAJPBU_UCODE_CONSTANT_TABLE@@PBUR500StuffLite@@@Z");
//};

//long ValidateLiteralConstants(struct _UCODE_DEFINITION_TABLE const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateLiteralConstants@@YAJPBU_UCODE_DEFINITION_TABLE@@PBUR500StuffLite@@@Z");
//};

//long ValidateDebuggerHint(struct _UCODE_R500_DEBUGGER_HINT_HEADER const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateDebuggerHint@@YAJPBU_UCODE_R500_DEBUGGER_HINT_HEADER@@PBUR500StuffLite@@@Z");
//};

//long ValidatePsInputDecls(union _UCODE_PSINPUTDECLARATION const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidatePsInputDecls@@YAJPBT_UCODE_PSINPUTDECLARATION@@PBUR500StuffLite@@@Z");
//};

//long ValidateVsIndexInputDecls(union _UCODE_VSINDEXDECLARATION const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVsIndexInputDecls@@YAJPBT_UCODE_VSINDEXDECLARATION@@PBUR500StuffLite@@@Z");
//};

//long ValidateVsInputDecls(union _UCODE_VSINPUTDECLARATION const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVsInputDecls@@YAJPBT_UCODE_VSINPUTDECLARATION@@PBUR500StuffLite@@@Z");
//};

//long ValidateVsOutputPatches(union _UCODE_VSOUTPUTPATCH const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVsOutputPatches@@YAJPBT_UCODE_VSOUTPUTPATCH@@PBUR500StuffLite@@@Z");
//};

//long ValidateVsOutputDecls(union _UCODE_VSOUTPUTDECLARATION const *, struct R500StuffLite const *)
//{
//    mangled_ppc("?ValidateVsOutputDecls@@YAJPBT_UCODE_VSOUTPUTDECLARATION@@PBUR500StuffLite@@@Z");
//};

//long ValidateMicrocodeInstructions(struct R500StuffLite *)
//{
//    mangled_ppc("?ValidateMicrocodeInstructions@@YAJPAUR500StuffLite@@@Z");
//};

//long CheckForProperPadding(struct InstructionUsageLite const *)
//{
//    mangled_ppc("?CheckForProperPadding@@YAJPBUInstructionUsageLite@@@Z");
//};

//long XGValidateMicrocodeLite2(struct R500StuffLite *)
//{
//    mangled_ppc("?XGValidateMicrocodeLite2@@YAJPAUR500StuffLite@@@Z");
//};

//long GetR500UCodeInfo(void const *, unsigned long, int, struct R500StuffLite *)
//{
//    mangled_ppc("?GetR500UCodeInfo@@YAJPBXKHPAUR500StuffLite@@@Z");
//};

//int MemoryOverlaps(void const *, unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?MemoryOverlaps@@YAHPBXK0K@Z");
//};

//long ValidateMemoryRanges(struct R500StuffLite *, struct R500StuffLite *, int)
//{
//    mangled_ppc("?ValidateMemoryRanges@@YAJPAUR500StuffLite@@0H@Z");
//};

//int XGValidateMicrocodeLite(unsigned long const *, int)
//{
//    mangled_ppc("?XGValidateMicrocodeLite@@YAHPBKH@Z");
//};

//XGValidateVertexShaderMicrocodeLite
//{
//    mangled_ppc("XGValidateVertexShaderMicrocodeLite");
//};

//XGValidatePixelShaderMicrocodeLite
//{
//    mangled_ppc("XGValidatePixelShaderMicrocodeLite");
//};

//XGValidateShaderMemory
//{
//    mangled_ppc("XGValidateShaderMemory");
//};

