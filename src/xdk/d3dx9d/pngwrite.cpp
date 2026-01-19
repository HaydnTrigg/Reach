/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void D3DX::png_write_info(struct D3DX::png_struct_def *, struct D3DX::png_info_struct *);
// void D3DX::png_write_end(struct D3DX::png_struct_def *, struct D3DX::png_info_struct *);
// void D3DX::png_write_row(struct D3DX::png_struct_def *, unsigned char *);
// void D3DX::png_set_flush(struct D3DX::png_struct_def *, int);
// void D3DX::png_write_flush(struct D3DX::png_struct_def *);
// void D3DX::png_write_destroy(struct D3DX::png_struct_def *);
// void D3DX::png_set_filter(struct D3DX::png_struct_def *, int, int);
// void D3DX::png_set_filter_heuristics(struct D3DX::png_struct_def *, int, int, double *, double *);
// void D3DX::png_set_compression_level(struct D3DX::png_struct_def *, int);
// void D3DX::png_set_compression_mem_level(struct D3DX::png_struct_def *, int);
// void D3DX::png_set_compression_strategy(struct D3DX::png_struct_def *, int);
// void D3DX::png_set_compression_window_bits(struct D3DX::png_struct_def *, int);
// void D3DX::png_set_compression_method(struct D3DX::png_struct_def *, int);
// void D3DX::png_set_write_status_fn(struct D3DX::png_struct_def *, void (*)(struct D3DX::png_struct_def *, unsigned long, int));
// struct D3DX::png_struct_def * D3DX::png_create_write_struct(char const *, void *, void (*)(struct D3DX::png_struct_def *, char const *), void (*)(struct D3DX::png_struct_def *, char const *));
// void D3DX::png_write_init(struct D3DX::png_struct_def *);
// void D3DX::png_write_rows(struct D3DX::png_struct_def *, unsigned char **, unsigned long);
// void D3DX::png_write_image(struct D3DX::png_struct_def *, unsigned char **);
// void D3DX::png_destroy_write_struct(struct D3DX::png_struct_def **, struct D3DX::png_info_struct **);

//void D3DX::png_write_info(struct D3DX::png_struct_def *, struct D3DX::png_info_struct *)
//{
//    mangled_ppc("?png_write_info@D3DX@@YAXPAUpng_struct_def@1@PAUpng_info_struct@1@@Z");
//};

//void D3DX::png_write_end(struct D3DX::png_struct_def *, struct D3DX::png_info_struct *)
//{
//    mangled_ppc("?png_write_end@D3DX@@YAXPAUpng_struct_def@1@PAUpng_info_struct@1@@Z");
//};

//void D3DX::png_write_row(struct D3DX::png_struct_def *, unsigned char *)
//{
//    mangled_ppc("?png_write_row@D3DX@@YAXPAUpng_struct_def@1@PAE@Z");
//};

//void D3DX::png_set_flush(struct D3DX::png_struct_def *, int)
//{
//    mangled_ppc("?png_set_flush@D3DX@@YAXPAUpng_struct_def@1@H@Z");
//};

//void D3DX::png_write_flush(struct D3DX::png_struct_def *)
//{
//    mangled_ppc("?png_write_flush@D3DX@@YAXPAUpng_struct_def@1@@Z");
//};

//void D3DX::png_write_destroy(struct D3DX::png_struct_def *)
//{
//    mangled_ppc("?png_write_destroy@D3DX@@YAXPAUpng_struct_def@1@@Z");
//};

//void D3DX::png_set_filter(struct D3DX::png_struct_def *, int, int)
//{
//    mangled_ppc("?png_set_filter@D3DX@@YAXPAUpng_struct_def@1@HH@Z");
//};

//void D3DX::png_set_filter_heuristics(struct D3DX::png_struct_def *, int, int, double *, double *)
//{
//    mangled_ppc("?png_set_filter_heuristics@D3DX@@YAXPAUpng_struct_def@1@HHPAN1@Z");
//};

//void D3DX::png_set_compression_level(struct D3DX::png_struct_def *, int)
//{
//    mangled_ppc("?png_set_compression_level@D3DX@@YAXPAUpng_struct_def@1@H@Z");
//};

//void D3DX::png_set_compression_mem_level(struct D3DX::png_struct_def *, int)
//{
//    mangled_ppc("?png_set_compression_mem_level@D3DX@@YAXPAUpng_struct_def@1@H@Z");
//};

//void D3DX::png_set_compression_strategy(struct D3DX::png_struct_def *, int)
//{
//    mangled_ppc("?png_set_compression_strategy@D3DX@@YAXPAUpng_struct_def@1@H@Z");
//};

//void D3DX::png_set_compression_window_bits(struct D3DX::png_struct_def *, int)
//{
//    mangled_ppc("?png_set_compression_window_bits@D3DX@@YAXPAUpng_struct_def@1@H@Z");
//};

//void D3DX::png_set_compression_method(struct D3DX::png_struct_def *, int)
//{
//    mangled_ppc("?png_set_compression_method@D3DX@@YAXPAUpng_struct_def@1@H@Z");
//};

//void D3DX::png_set_write_status_fn(struct D3DX::png_struct_def *, void (*)(struct D3DX::png_struct_def *, unsigned long, int))
//{
//    mangled_ppc("?png_set_write_status_fn@D3DX@@YAXPAUpng_struct_def@1@P6AX0KH@Z@Z");
//};

//struct D3DX::png_struct_def * D3DX::png_create_write_struct(char const *, void *, void (*)(struct D3DX::png_struct_def *, char const *), void (*)(struct D3DX::png_struct_def *, char const *))
//{
//    mangled_ppc("?png_create_write_struct@D3DX@@YAPAUpng_struct_def@1@PBDPAXP6AXPAU21@0@Z3@Z");
//};

//void D3DX::png_write_init(struct D3DX::png_struct_def *)
//{
//    mangled_ppc("?png_write_init@D3DX@@YAXPAUpng_struct_def@1@@Z");
//};

//void D3DX::png_write_rows(struct D3DX::png_struct_def *, unsigned char **, unsigned long)
//{
//    mangled_ppc("?png_write_rows@D3DX@@YAXPAUpng_struct_def@1@PAPAEK@Z");
//};

//void D3DX::png_write_image(struct D3DX::png_struct_def *, unsigned char **)
//{
//    mangled_ppc("?png_write_image@D3DX@@YAXPAUpng_struct_def@1@PAPAE@Z");
//};

//void D3DX::png_destroy_write_struct(struct D3DX::png_struct_def **, struct D3DX::png_info_struct **)
//{
//    mangled_ppc("?png_destroy_write_struct@D3DX@@YAXPAPAUpng_struct_def@1@PAPAUpng_info_struct@1@@Z");
//};

