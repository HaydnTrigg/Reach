/* ---------- headers */

#include "xdk\xonlined\endian.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void CBaseEndianBuffer::Bind(unsigned char *, unsigned long, unsigned long, int);
// public: long CBaseEndianBuffer::Rebind(unsigned char *, unsigned long);
// public: long CBaseEndianBuffer::Append(unsigned char *, unsigned long);
// public: long CBaseEndianBuffer::AppendInPlace(unsigned long);
// public: void CBaseEndianBuffer::GetAppendLocationAndSize(unsigned char **, unsigned long *);
// public: long CBaseEndianBuffer::SeekTo(unsigned long);
// public: long CBaseEndianBuffer::SeekToRelative(long);
// protected: long CBaseEndianBuffer::GetPointerAndAdvance(unsigned char **, unsigned long *);
// protected: long CBaseEndianBuffer::GetDataAndAdvance(void *, unsigned long *, int);
// protected: long CBaseEndianBuffer::GetStringPointerAndAdvance(unsigned char **, unsigned long *, int);
// protected: long CBaseEndianBuffer::GetStringAndAdvance(void *, unsigned long *, int);
// public: long CBaseEndianBuffer::WriteBytes(unsigned char *, unsigned long);
// public: long CBaseEndianBuffer::WriteWords(unsigned short *, unsigned long);
// public: long CBaseEndianBuffer::WriteDwords(unsigned long *, unsigned long);
// public: long CBaseEndianBuffer::WriteQwords(unsigned __int64*, unsigned long);
// public: long CBaseEndianBuffer::AppendBytes(unsigned long);
// public: long CBaseEndianBuffer::GetByte(unsigned char *);
// public: long CBaseEndianBuffer::GetWord(unsigned short *);
// public: long CBaseEndianBuffer::GetDword(unsigned long *);
// public: long CBaseEndianBuffer::GetQword(unsigned __int64*);
// public: long CBaseEndianBuffer::GetFloat(float *);
// public: long CBaseEndianBuffer::GetDouble(double *);
// public: long CBaseEndianBuffer::GetString(char *, unsigned long *);
// public: long CBaseEndianBuffer::GetUnicodeString(wchar_t *, unsigned long *);
// public: long CBaseEndianBuffer::GetData(unsigned char *, unsigned long *);
// public: long CBaseEndianBuffer::GetStringPointer(char **, unsigned long *);
// public: long CBaseEndianBuffer::GetUnicodeStringPointer(wchar_t **, unsigned long *);
// public: long CBaseEndianBuffer::GetDataPointer(unsigned char **, unsigned long *);
// public: long CBaseEndianBuffer::GetValue(unsigned __int64*, unsigned long);

//public: void CBaseEndianBuffer::Bind(unsigned char *, unsigned long, unsigned long, int)
//{
//    mangled_ppc("?Bind@CBaseEndianBuffer@@QAAXPAEKKH@Z");
//};

//public: long CBaseEndianBuffer::Rebind(unsigned char *, unsigned long)
//{
//    mangled_ppc("?Rebind@CBaseEndianBuffer@@QAAJPAEK@Z");
//};

//public: long CBaseEndianBuffer::Append(unsigned char *, unsigned long)
//{
//    mangled_ppc("?Append@CBaseEndianBuffer@@QAAJPAEK@Z");
//};

//public: long CBaseEndianBuffer::AppendInPlace(unsigned long)
//{
//    mangled_ppc("?AppendInPlace@CBaseEndianBuffer@@QAAJK@Z");
//};

//public: void CBaseEndianBuffer::GetAppendLocationAndSize(unsigned char **, unsigned long *)
//{
//    mangled_ppc("?GetAppendLocationAndSize@CBaseEndianBuffer@@QAAXPAPAEPAK@Z");
//};

//public: long CBaseEndianBuffer::SeekTo(unsigned long)
//{
//    mangled_ppc("?SeekTo@CBaseEndianBuffer@@QAAJK@Z");
//};

//public: long CBaseEndianBuffer::SeekToRelative(long)
//{
//    mangled_ppc("?SeekToRelative@CBaseEndianBuffer@@QAAJJ@Z");
//};

//protected: long CBaseEndianBuffer::GetPointerAndAdvance(unsigned char **, unsigned long *)
//{
//    mangled_ppc("?GetPointerAndAdvance@CBaseEndianBuffer@@IAAJPAPAEPAK@Z");
//};

//protected: long CBaseEndianBuffer::GetDataAndAdvance(void *, unsigned long *, int)
//{
//    mangled_ppc("?GetDataAndAdvance@CBaseEndianBuffer@@IAAJPAXPAKH@Z");
//};

//protected: long CBaseEndianBuffer::GetStringPointerAndAdvance(unsigned char **, unsigned long *, int)
//{
//    mangled_ppc("?GetStringPointerAndAdvance@CBaseEndianBuffer@@IAAJPAPAEPAKH@Z");
//};

//protected: long CBaseEndianBuffer::GetStringAndAdvance(void *, unsigned long *, int)
//{
//    mangled_ppc("?GetStringAndAdvance@CBaseEndianBuffer@@IAAJPAXPAKH@Z");
//};

//public: long CBaseEndianBuffer::WriteBytes(unsigned char *, unsigned long)
//{
//    mangled_ppc("?WriteBytes@CBaseEndianBuffer@@QAAJPAEK@Z");
//};

//public: long CBaseEndianBuffer::WriteWords(unsigned short *, unsigned long)
//{
//    mangled_ppc("?WriteWords@CBaseEndianBuffer@@QAAJPAGK@Z");
//};

//public: long CBaseEndianBuffer::WriteDwords(unsigned long *, unsigned long)
//{
//    mangled_ppc("?WriteDwords@CBaseEndianBuffer@@QAAJPAKK@Z");
//};

//public: long CBaseEndianBuffer::WriteQwords(unsigned __int64*, unsigned long)
//{
//    mangled_ppc("?WriteQwords@CBaseEndianBuffer@@QAAJPA_KK@Z");
//};

//public: long CBaseEndianBuffer::AppendBytes(unsigned long)
//{
//    mangled_ppc("?AppendBytes@CBaseEndianBuffer@@QAAJK@Z");
//};

//public: long CBaseEndianBuffer::GetByte(unsigned char *)
//{
//    mangled_ppc("?GetByte@CBaseEndianBuffer@@QAAJPAE@Z");
//};

//public: long CBaseEndianBuffer::GetWord(unsigned short *)
//{
//    mangled_ppc("?GetWord@CBaseEndianBuffer@@QAAJPAG@Z");
//};

//public: long CBaseEndianBuffer::GetDword(unsigned long *)
//{
//    mangled_ppc("?GetDword@CBaseEndianBuffer@@QAAJPAK@Z");
//};

//public: long CBaseEndianBuffer::GetQword(unsigned __int64*)
//{
//    mangled_ppc("?GetQword@CBaseEndianBuffer@@QAAJPA_K@Z");
//};

//public: long CBaseEndianBuffer::GetFloat(float *)
//{
//    mangled_ppc("?GetFloat@CBaseEndianBuffer@@QAAJPAM@Z");
//};

//public: long CBaseEndianBuffer::GetDouble(double *)
//{
//    mangled_ppc("?GetDouble@CBaseEndianBuffer@@QAAJPAN@Z");
//};

//public: long CBaseEndianBuffer::GetString(char *, unsigned long *)
//{
//    mangled_ppc("?GetString@CBaseEndianBuffer@@QAAJPADPAK@Z");
//};

//public: long CBaseEndianBuffer::GetUnicodeString(wchar_t *, unsigned long *)
//{
//    mangled_ppc("?GetUnicodeString@CBaseEndianBuffer@@QAAJPA_WPAK@Z");
//};

//public: long CBaseEndianBuffer::GetData(unsigned char *, unsigned long *)
//{
//    mangled_ppc("?GetData@CBaseEndianBuffer@@QAAJPAEPAK@Z");
//};

//public: long CBaseEndianBuffer::GetStringPointer(char **, unsigned long *)
//{
//    mangled_ppc("?GetStringPointer@CBaseEndianBuffer@@QAAJPAPADPAK@Z");
//};

//public: long CBaseEndianBuffer::GetUnicodeStringPointer(wchar_t **, unsigned long *)
//{
//    mangled_ppc("?GetUnicodeStringPointer@CBaseEndianBuffer@@QAAJPAPA_WPAK@Z");
//};

//public: long CBaseEndianBuffer::GetDataPointer(unsigned char **, unsigned long *)
//{
//    mangled_ppc("?GetDataPointer@CBaseEndianBuffer@@QAAJPAPAEPAK@Z");
//};

//public: long CBaseEndianBuffer::GetValue(unsigned __int64*, unsigned long)
//{
//    mangled_ppc("?GetValue@CBaseEndianBuffer@@QAAJPA_KK@Z");
//};

