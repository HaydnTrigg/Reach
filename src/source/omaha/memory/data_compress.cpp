/* ---------- headers */

#include "omaha\memory\data_compress.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool data_compress(void const *, unsigned long, void *, unsigned long *, unsigned long);
// bool data_decompress(void const *, unsigned long, void *, unsigned long *, unsigned long);
// unsigned long data_decompressed_size(void const *, unsigned long);
// bool runtime_data_compress(void const *, unsigned long, void *, unsigned long *, unsigned long, enum e_zlib_compression_level, unsigned long, void *);
// bool runtime_data_decompress(void const *, unsigned long, void *, unsigned long *, unsigned long, unsigned long, void *);
// bool runtime_data_compress_file_to_file(struct s_file_reference *, struct s_file_reference *, enum e_zlib_compression_level);
// bool runtime_data_compress_stream_start(struct s_blam_zlib_memory *, char *, long, struct z_stream_s *, enum e_zlib_compression_level);
// bool runtime_data_compress_stream_write(struct s_blam_zlib_memory *, struct z_stream_s *, char *, long, long *, char *, long, long *, bool, bool *);
// void runtime_data_compress_stream_end(struct z_stream_s *, struct s_blam_zlib_memory *);
// bool runtime_data_decompress_stream_start(struct s_blam_zlib_memory *, char *, long, struct z_stream_s *);
// bool runtime_data_decompress_stream_write(struct s_blam_zlib_memory *, struct z_stream_s *, char *, long, long *, char *, long, long *, bool, bool *);
// void runtime_data_decompress_stream_end(struct z_stream_s *, struct s_blam_zlib_memory *);
// bool agnostic_stream_start(bool, struct s_blam_zlib_memory *, char *, long, struct z_stream_s *, enum e_zlib_compression_level);
// bool agnostic_stream_write(bool, struct s_blam_zlib_memory *, struct z_stream_s *, char *, long, long *, char *, long, long *, bool, bool *);
// void agnostic_stream_end(bool, struct z_stream_s *, struct s_blam_zlib_memory *);
// char * file_reference_get_fullpath<260>(struct s_file_reference const *, char (&)[260]);

//bool data_compress(void const *, unsigned long, void *, unsigned long *, unsigned long)
//{
//    mangled_ppc("?data_compress@@YA_NPBXKPAXPAKK@Z");
//};

//bool data_decompress(void const *, unsigned long, void *, unsigned long *, unsigned long)
//{
//    mangled_ppc("?data_decompress@@YA_NPBXKPAXPAKK@Z");
//};

//unsigned long data_decompressed_size(void const *, unsigned long)
//{
//    mangled_ppc("?data_decompressed_size@@YAKPBXK@Z");
//};

//bool runtime_data_compress(void const *, unsigned long, void *, unsigned long *, unsigned long, enum e_zlib_compression_level, unsigned long, void *)
//{
//    mangled_ppc("?runtime_data_compress@@YA_NPBXKPAXPAKKW4e_zlib_compression_level@@K1@Z");
//};

//bool runtime_data_decompress(void const *, unsigned long, void *, unsigned long *, unsigned long, unsigned long, void *)
//{
//    mangled_ppc("?runtime_data_decompress@@YA_NPBXKPAXPAKKK1@Z");
//};

//bool runtime_data_compress_file_to_file(struct s_file_reference *, struct s_file_reference *, enum e_zlib_compression_level)
//{
//    mangled_ppc("?runtime_data_compress_file_to_file@@YA_NPAUs_file_reference@@0W4e_zlib_compression_level@@@Z");
//};

//bool runtime_data_compress_stream_start(struct s_blam_zlib_memory *, char *, long, struct z_stream_s *, enum e_zlib_compression_level)
//{
//    mangled_ppc("?runtime_data_compress_stream_start@@YA_NPAUs_blam_zlib_memory@@PADJPAUz_stream_s@@W4e_zlib_compression_level@@@Z");
//};

//bool runtime_data_compress_stream_write(struct s_blam_zlib_memory *, struct z_stream_s *, char *, long, long *, char *, long, long *, bool, bool *)
//{
//    mangled_ppc("?runtime_data_compress_stream_write@@YA_NPAUs_blam_zlib_memory@@PAUz_stream_s@@PADJPAJ2J3_NPA_N@Z");
//};

//void runtime_data_compress_stream_end(struct z_stream_s *, struct s_blam_zlib_memory *)
//{
//    mangled_ppc("?runtime_data_compress_stream_end@@YAXPAUz_stream_s@@PAUs_blam_zlib_memory@@@Z");
//};

//bool runtime_data_decompress_stream_start(struct s_blam_zlib_memory *, char *, long, struct z_stream_s *)
//{
//    mangled_ppc("?runtime_data_decompress_stream_start@@YA_NPAUs_blam_zlib_memory@@PADJPAUz_stream_s@@@Z");
//};

//bool runtime_data_decompress_stream_write(struct s_blam_zlib_memory *, struct z_stream_s *, char *, long, long *, char *, long, long *, bool, bool *)
//{
//    mangled_ppc("?runtime_data_decompress_stream_write@@YA_NPAUs_blam_zlib_memory@@PAUz_stream_s@@PADJPAJ2J3_NPA_N@Z");
//};

//void runtime_data_decompress_stream_end(struct z_stream_s *, struct s_blam_zlib_memory *)
//{
//    mangled_ppc("?runtime_data_decompress_stream_end@@YAXPAUz_stream_s@@PAUs_blam_zlib_memory@@@Z");
//};

//bool agnostic_stream_start(bool, struct s_blam_zlib_memory *, char *, long, struct z_stream_s *, enum e_zlib_compression_level)
//{
//    mangled_ppc("?agnostic_stream_start@@YA_N_NPAUs_blam_zlib_memory@@PADJPAUz_stream_s@@W4e_zlib_compression_level@@@Z");
//};

//bool agnostic_stream_write(bool, struct s_blam_zlib_memory *, struct z_stream_s *, char *, long, long *, char *, long, long *, bool, bool *)
//{
//    mangled_ppc("?agnostic_stream_write@@YA_N_NPAUs_blam_zlib_memory@@PAUz_stream_s@@PADJPAJ3J40PA_N@Z");
//};

//void agnostic_stream_end(bool, struct z_stream_s *, struct s_blam_zlib_memory *)
//{
//    mangled_ppc("?agnostic_stream_end@@YAX_NPAUz_stream_s@@PAUs_blam_zlib_memory@@@Z");
//};

//char * file_reference_get_fullpath<260>(struct s_file_reference const *, char (&)[260])
//{
//    mangled_ppc("??$file_reference_get_fullpath@$0BAE@@@YAPADPBUs_file_reference@@AAY0BAE@D@Z");
//};

