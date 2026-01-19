/* ---------- headers */

#include "Rockall\Bucket.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: BUCKET::BUCKET(int, int, int);
// private: void * BUCKET::ComputeAddressBestCase(char *, int);
// private: void * BUCKET::ComputeAddressGoodCase(char *, int);
// private: void * BUCKET::ComputeAddressPoorCase(char *, int);
// private: void * BUCKET::ComputeAddressWorstCase(char *, int);
// private: int BUCKET::ComputeOffsetBestCase(int, unsigned char *);
// private: int BUCKET::ComputeOffsetGoodCase(int, unsigned char *);
// private: int BUCKET::ComputeOffsetPoorCase(int, unsigned char *);
// private: int BUCKET::ComputeOffsetWorstCase(int, unsigned char *);
// public: unsigned char BUCKET::Delete(void *, class PAGE *, int);
// public: void BUCKET::DeleteFromBucketList(class PAGE *);
// public: void BUCKET::InsertInBucketList(class PAGE *);
// public: unsigned char BUCKET::MultipleDelete(struct ADDRESS_AND_PAGE *, int *, int);
// public: unsigned char BUCKET::MultipleNew(int *, void **const, int);
// public: void * BUCKET::New(unsigned char, int);
// public: void BUCKET::ReleaseSpace(int);
// public: void BUCKET::UpdateBucket(class HEAP *, class NEW_PAGE *, class CACHE *, class FIND *, class FIND *);
// public: BUCKET::~BUCKET(void);
// public: void BUCKET_LIST::DeleteFromBucketList(class LIST *);
// public: unsigned char BUCKET_LIST::EndOfBucketList(void);
// public: static class PAGE * BUCKET_LIST::FirstInBucketList(class LIST *);
// public: void BUCKET_LIST::InsertInBucketList(class LIST *);
// public: void BUCKET_LIST::InsertAfterInBucketList(class LIST *, class PAGE *);
// public: void BUCKET_LIST::InsertBeforeInBucketList(class LIST *, class PAGE *);
// public: static class PAGE * BUCKET_LIST::LastInBucketList(class LIST *);
// public: class PAGE * BUCKET_LIST::NextInBucketList(void);
// public: class PAGE * BUCKET_LIST::PreviousInBucketList(void);
// public: class LIST * LIST::Previous(void);
// public: void CONNECTIONS::DeletePage(class PAGE *);

//public: BUCKET::BUCKET(int, int, int)
//{
//    mangled_ppc("??0BUCKET@@QAA@HHH@Z");
//};

//private: void * BUCKET::ComputeAddressBestCase(char *, int)
//{
//    mangled_ppc("?ComputeAddressBestCase@BUCKET@@AAAPAXPADH@Z");
//};

//private: void * BUCKET::ComputeAddressGoodCase(char *, int)
//{
//    mangled_ppc("?ComputeAddressGoodCase@BUCKET@@AAAPAXPADH@Z");
//};

//private: void * BUCKET::ComputeAddressPoorCase(char *, int)
//{
//    mangled_ppc("?ComputeAddressPoorCase@BUCKET@@AAAPAXPADH@Z");
//};

//private: void * BUCKET::ComputeAddressWorstCase(char *, int)
//{
//    mangled_ppc("?ComputeAddressWorstCase@BUCKET@@AAAPAXPADH@Z");
//};

//private: int BUCKET::ComputeOffsetBestCase(int, unsigned char *)
//{
//    mangled_ppc("?ComputeOffsetBestCase@BUCKET@@AAAHHPAE@Z");
//};

//private: int BUCKET::ComputeOffsetGoodCase(int, unsigned char *)
//{
//    mangled_ppc("?ComputeOffsetGoodCase@BUCKET@@AAAHHPAE@Z");
//};

//private: int BUCKET::ComputeOffsetPoorCase(int, unsigned char *)
//{
//    mangled_ppc("?ComputeOffsetPoorCase@BUCKET@@AAAHHPAE@Z");
//};

//private: int BUCKET::ComputeOffsetWorstCase(int, unsigned char *)
//{
//    mangled_ppc("?ComputeOffsetWorstCase@BUCKET@@AAAHHPAE@Z");
//};

//public: unsigned char BUCKET::Delete(void *, class PAGE *, int)
//{
//    mangled_ppc("?Delete@BUCKET@@QAAEPAXPAVPAGE@@H@Z");
//};

//public: void BUCKET::DeleteFromBucketList(class PAGE *)
//{
//    mangled_ppc("?DeleteFromBucketList@BUCKET@@QAAXPAVPAGE@@@Z");
//};

//public: void BUCKET::InsertInBucketList(class PAGE *)
//{
//    mangled_ppc("?InsertInBucketList@BUCKET@@QAAXPAVPAGE@@@Z");
//};

//public: unsigned char BUCKET::MultipleDelete(struct ADDRESS_AND_PAGE *, int *, int)
//{
//    mangled_ppc("?MultipleDelete@BUCKET@@QAAEPAUADDRESS_AND_PAGE@@PAHH@Z");
//};

//public: unsigned char BUCKET::MultipleNew(int *, void **const, int)
//{
//    mangled_ppc("?MultipleNew@BUCKET@@QAAEPAHQAPAXH@Z");
//};

//public: void * BUCKET::New(unsigned char, int)
//{
//    mangled_ppc("?New@BUCKET@@QAAPAXEH@Z");
//};

//public: void BUCKET::ReleaseSpace(int)
//{
//    mangled_ppc("?ReleaseSpace@BUCKET@@QAAXH@Z");
//};

//public: void BUCKET::UpdateBucket(class HEAP *, class NEW_PAGE *, class CACHE *, class FIND *, class FIND *)
//{
//    mangled_ppc("?UpdateBucket@BUCKET@@QAAXPAVHEAP@@PAVNEW_PAGE@@PAVCACHE@@PAVFIND@@3@Z");
//};

//public: BUCKET::~BUCKET(void)
//{
//    mangled_ppc("??1BUCKET@@QAA@XZ");
//};

//public: void BUCKET_LIST::DeleteFromBucketList(class LIST *)
//{
//    mangled_ppc("?DeleteFromBucketList@BUCKET_LIST@@QAAXPAVLIST@@@Z");
//};

//public: unsigned char BUCKET_LIST::EndOfBucketList(void)
//{
//    mangled_ppc("?EndOfBucketList@BUCKET_LIST@@QAAEXZ");
//};

//public: static class PAGE * BUCKET_LIST::FirstInBucketList(class LIST *)
//{
//    mangled_ppc("?FirstInBucketList@BUCKET_LIST@@SAPAVPAGE@@PAVLIST@@@Z");
//};

//public: void BUCKET_LIST::InsertInBucketList(class LIST *)
//{
//    mangled_ppc("?InsertInBucketList@BUCKET_LIST@@QAAXPAVLIST@@@Z");
//};

//public: void BUCKET_LIST::InsertAfterInBucketList(class LIST *, class PAGE *)
//{
//    mangled_ppc("?InsertAfterInBucketList@BUCKET_LIST@@QAAXPAVLIST@@PAVPAGE@@@Z");
//};

//public: void BUCKET_LIST::InsertBeforeInBucketList(class LIST *, class PAGE *)
//{
//    mangled_ppc("?InsertBeforeInBucketList@BUCKET_LIST@@QAAXPAVLIST@@PAVPAGE@@@Z");
//};

//public: static class PAGE * BUCKET_LIST::LastInBucketList(class LIST *)
//{
//    mangled_ppc("?LastInBucketList@BUCKET_LIST@@SAPAVPAGE@@PAVLIST@@@Z");
//};

//public: class PAGE * BUCKET_LIST::NextInBucketList(void)
//{
//    mangled_ppc("?NextInBucketList@BUCKET_LIST@@QAAPAVPAGE@@XZ");
//};

//public: class PAGE * BUCKET_LIST::PreviousInBucketList(void)
//{
//    mangled_ppc("?PreviousInBucketList@BUCKET_LIST@@QAAPAVPAGE@@XZ");
//};

//public: class LIST * LIST::Previous(void)
//{
//    mangled_ppc("?Previous@LIST@@QAAPAV1@XZ");
//};

//public: void CONNECTIONS::DeletePage(class PAGE *)
//{
//    mangled_ppc("?DeletePage@CONNECTIONS@@QAAXPAVPAGE@@@Z");
//};

