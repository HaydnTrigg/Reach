/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `void __cdecl check_source_string_against_copy_buffer_size(wchar_t const *, long)'::`9'::x_event_category_index; // "?x_event_category_index@?8??check_source_string_against_copy_buffer_size@@YAXPB_WJ@Z@4JC"
// long volatile `void __cdecl converstion_truncation_warning(wchar_t const *, long)'::`6'::x_event_category_index; // "?x_event_category_index@?5??converstion_truncation_warning@@YAXPB_WJ@Z@4JC"
// long volatile `void __cdecl check_source_string_against_copy_buffer_size(struct utf8const *, long)'::`9'::x_event_category_index; // "?x_event_category_index@?8??check_source_string_against_copy_buffer_size@@YAXPBUutf8@@J@Z@4JC"
// bool g_unicode_warn_on_string_truncation; // "?g_unicode_warn_on_string_truncation@@3_NA"

// int ustrcmp(wchar_t const *, wchar_t const *);
// unsigned int ustrlen(wchar_t const *);
// unsigned int ustrnlen(wchar_t const *, long);
// wchar_t const * ustrchr(wchar_t const *, wchar_t);
// int ustrcoll(wchar_t const *, wchar_t const *);
// unsigned int ustrcspn(wchar_t const *, wchar_t const *);
// wchar_t * ustrnzcat(wchar_t *, wchar_t const *, long);
// void check_source_string_against_copy_buffer_size(wchar_t const *, long);
// int ustrncmp(wchar_t const *, wchar_t const *, long);
// wchar_t * ustrncpy(wchar_t *, wchar_t const *, long);
// wchar_t * ustrnzcpy(wchar_t *, wchar_t const *, long);
// wchar_t const * ustrpbrk(wchar_t const *, wchar_t const *);
// wchar_t const * ustrrchr(wchar_t const *, wchar_t);
// unsigned int ustrspn(wchar_t const *, wchar_t const *);
// wchar_t const * ustrstr(wchar_t const *, wchar_t const *);
// wchar_t * ustrtok(wchar_t *, wchar_t const *);
// unsigned int ustrxfrm(wchar_t *, wchar_t const *, long);
// wchar_t * ustrnlwr(wchar_t *, long);
// wchar_t * ustrnupr(wchar_t *, long);
// int ustricmp(wchar_t const *, wchar_t const *);
// int ustrnicmp(wchar_t const *, wchar_t const *, long);
// int uisalpha(wchar_t);
// int uisupper(wchar_t);
// int uislower(wchar_t);
// int uisdigit(wchar_t);
// int uisxdigit(wchar_t);
// int uisspace(wchar_t);
// int uispunct(wchar_t);
// int uisalnum(wchar_t);
// int uisprint(wchar_t);
// int uisgraph(wchar_t);
// int uiscntrl(wchar_t);
// wchar_t utoupper(wchar_t);
// wchar_t xbox_towupper(wchar_t);
// int utolower(wchar_t);
// wchar_t xbox_towlower(wchar_t);
// wchar_t ufgetc(struct _iobuf *);
// wchar_t ufputc(wchar_t, struct _iobuf *);
// wchar_t uungetc(wchar_t, struct _iobuf *);
// wchar_t * ufgets(wchar_t *, int, struct _iobuf *);
// int ufputs(wchar_t const *, struct _iobuf *);
// int uputs(wchar_t const *);
// int ufprintf(struct _iobuf *, wchar_t const *, ...);
// int uprintf(wchar_t const *, ...);
// int usnprintf(wchar_t *, long, wchar_t const *, ...);
// int usnzprintf(wchar_t *, long, wchar_t const *, ...);
// int uvfprintf(struct _iobuf *, wchar_t const *, char *);
// int uvprintf(wchar_t const *, char *);
// int uvsnzprintf(wchar_t *, long, wchar_t const *, char *);
// struct _iobuf * ufdopen(int, wchar_t const *);
// struct _iobuf * ufopen(wchar_t const *, wchar_t const *);
// int ufclose(struct _iobuf *);
// struct _iobuf * ufreopen(wchar_t const *, wchar_t const *, struct _iobuf *);
// void uperror(wchar_t const *);
// int uremove(wchar_t const *);
// wchar_t * utmpnam(wchar_t *);
// long ustrtol(wchar_t const *, wchar_t **, int);
// unsigned long ustrtoul(wchar_t const *, wchar_t **, int);
// double ustrtod(wchar_t const *, wchar_t **);
// wchar_t * ustrftime_tm(wchar_t *, long, wchar_t const *, struct tm const *);
// wchar_t * ustrftime(wchar_t *, long, wchar_t const *, __int64);
// int uatoi(wchar_t const *);
// void wchar_string_to_ascii_string(wchar_t const *, char *, long, long *);
// void truncate_wchar_string_to_ascii_string(wchar_t const *, char *, long, long *);
// void wchar_string_to_utf8_string(wchar_t const *, struct utf8*, long, long *);
// void converstion_truncation_warning(wchar_t const *, long);
// void utf8_string_to_ascii_string(struct utf8const *, char *, long, long *);
// struct utf32 ascii_string_to_utf32_characters(char const *, struct s_escape_table const *, char const **, long *, struct utf32*, long, long *);
// struct utf32 wchar_string_to_utf32_characters(wchar_t const *, struct s_escape_table const *, wchar_t const **, long *, struct utf32*, long, long *);
// void ascii_string_to_utf32_string(char const *, struct s_escape_table const *, struct utf32*, long, long *);
// void check_source_string_against_copy_buffer_size(char const *, long);
// void wchar_string_to_utf32_string(wchar_t const *, struct s_escape_table const *, struct utf32*, long, long *);
// void ascii_string_to_wchar_string(char const *, wchar_t *, long, long *);
// long utf32_character_to_utf16_string(struct utf32, struct utf16*, long);
// struct utf32 utf16_string_to_utf32_character(struct utf16const *, struct utf16const **);
// bool utf32_in_list(struct utf32, struct s_utf32_range const *, long);
// bool utf32_is_id_start(struct utf32);
// bool utf32_is_id_continue(struct utf32);
// bool utf32_isspace(struct utf32);
// bool utf32_isalpha(struct utf32);
// bool utf32_isprint(struct utf32);
// bool utf32_ismonochrome(struct utf32);
// bool utf32_can_line_break(struct utf32, struct utf32);
// unsigned int utf32_strlen(struct utf32const *);
// unsigned int utf8_strlen(struct utf8const *);
// wchar_t * unicode_byte_swap_wchar_string(wchar_t *, long, enum e_byte_order);
// struct utf32* unicode_byte_swap_utf32_string(struct utf32*, long, enum e_byte_order);
// void utf8_string_to_wchar_string(struct utf8const *, wchar_t *, long, long *);
// void check_source_string_against_copy_buffer_size(struct utf8const *, long);
// bool is_private_use_character(wchar_t);
// bool utf32_has_Lu_property(struct utf32);
// bool utf32_has_Ll_property(struct utf32);
// bool utf32_has_Lt_property(struct utf32);
// bool utf32_has_Lm_property(struct utf32);
// bool utf32_has_Lo_property(struct utf32);
// bool utf32_has_Nl_property(struct utf32);
// bool utf32_has_Mn_property(struct utf32);
// bool utf32_has_Mc_property(struct utf32);
// bool utf32_has_Nd_property(struct utf32);
// bool utf32_has_Pc_property(struct utf32);
// bool utf32_has_other_id_start_property(struct utf32);
// bool utf32_has_other_alphabetic_property(struct utf32);
// bool utf32_is_east_asian_character(struct utf32);
// bool utf32_is_non_beginning_character(struct utf32);
// bool utf32_is_non_ending_character(struct utf32);
// struct utf32 wchar_escape_character_to_utf32(wchar_t, struct s_escape_table const *, bool *, void (**)(char const *, char const **, struct utf32*, long, long *), void (**)(wchar_t const *, wchar_t const **, struct utf32*, long, long *));
// long e_utf32_character_to_utf8_string(enum e_utf32, struct utf8*, long);
// void string_to_utf32_string<char, 8>(char const *, struct s_escape_table const *, struct utf32*, struct utf32(*)(char const *, struct s_escape_table const *, char const **, long *, struct utf32*, long, long *), long, long *);
// void converstion_truncation_warning(char const *, long);
// void string_to_utf32_string<wchar_t, 8>(wchar_t const *, struct s_escape_table const *, struct utf32*, struct utf32(*)(wchar_t const *, struct s_escape_table const *, wchar_t const **, long *, struct utf32*, long, long *), long, long *);
// localtime;

//int ustrcmp(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustrcmp@@YAHPB_W0@Z");
//};

//unsigned int ustrlen(wchar_t const *)
//{
//    mangled_ppc("?ustrlen@@YAIPB_W@Z");
//};

//unsigned int ustrnlen(wchar_t const *, long)
//{
//    mangled_ppc("?ustrnlen@@YAIPB_WJ@Z");
//};

//wchar_t const * ustrchr(wchar_t const *, wchar_t)
//{
//    mangled_ppc("?ustrchr@@YAPB_WPB_W_W@Z");
//};

//int ustrcoll(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustrcoll@@YAHPB_W0@Z");
//};

//unsigned int ustrcspn(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustrcspn@@YAIPB_W0@Z");
//};

//wchar_t * ustrnzcat(wchar_t *, wchar_t const *, long)
//{
//    mangled_ppc("?ustrnzcat@@YAPA_WPA_WPB_WJ@Z");
//};

//void check_source_string_against_copy_buffer_size(wchar_t const *, long)
//{
//    mangled_ppc("?check_source_string_against_copy_buffer_size@@YAXPB_WJ@Z");
//};

//int ustrncmp(wchar_t const *, wchar_t const *, long)
//{
//    mangled_ppc("?ustrncmp@@YAHPB_W0J@Z");
//};

//wchar_t * ustrncpy(wchar_t *, wchar_t const *, long)
//{
//    mangled_ppc("?ustrncpy@@YAPA_WPA_WPB_WJ@Z");
//};

//wchar_t * ustrnzcpy(wchar_t *, wchar_t const *, long)
//{
//    mangled_ppc("?ustrnzcpy@@YAPA_WPA_WPB_WJ@Z");
//};

//wchar_t const * ustrpbrk(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustrpbrk@@YAPB_WPB_W0@Z");
//};

//wchar_t const * ustrrchr(wchar_t const *, wchar_t)
//{
//    mangled_ppc("?ustrrchr@@YAPB_WPB_W_W@Z");
//};

//unsigned int ustrspn(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustrspn@@YAIPB_W0@Z");
//};

//wchar_t const * ustrstr(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustrstr@@YAPB_WPB_W0@Z");
//};

//wchar_t * ustrtok(wchar_t *, wchar_t const *)
//{
//    mangled_ppc("?ustrtok@@YAPA_WPA_WPB_W@Z");
//};

//unsigned int ustrxfrm(wchar_t *, wchar_t const *, long)
//{
//    mangled_ppc("?ustrxfrm@@YAIPA_WPB_WJ@Z");
//};

//wchar_t * ustrnlwr(wchar_t *, long)
//{
//    mangled_ppc("?ustrnlwr@@YAPA_WPA_WJ@Z");
//};

//wchar_t * ustrnupr(wchar_t *, long)
//{
//    mangled_ppc("?ustrnupr@@YAPA_WPA_WJ@Z");
//};

//int ustricmp(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ustricmp@@YAHPB_W0@Z");
//};

//int ustrnicmp(wchar_t const *, wchar_t const *, long)
//{
//    mangled_ppc("?ustrnicmp@@YAHPB_W0J@Z");
//};

//int uisalpha(wchar_t)
//{
//    mangled_ppc("?uisalpha@@YAH_W@Z");
//};

//int uisupper(wchar_t)
//{
//    mangled_ppc("?uisupper@@YAH_W@Z");
//};

//int uislower(wchar_t)
//{
//    mangled_ppc("?uislower@@YAH_W@Z");
//};

//int uisdigit(wchar_t)
//{
//    mangled_ppc("?uisdigit@@YAH_W@Z");
//};

//int uisxdigit(wchar_t)
//{
//    mangled_ppc("?uisxdigit@@YAH_W@Z");
//};

//int uisspace(wchar_t)
//{
//    mangled_ppc("?uisspace@@YAH_W@Z");
//};

//int uispunct(wchar_t)
//{
//    mangled_ppc("?uispunct@@YAH_W@Z");
//};

//int uisalnum(wchar_t)
//{
//    mangled_ppc("?uisalnum@@YAH_W@Z");
//};

//int uisprint(wchar_t)
//{
//    mangled_ppc("?uisprint@@YAH_W@Z");
//};

//int uisgraph(wchar_t)
//{
//    mangled_ppc("?uisgraph@@YAH_W@Z");
//};

//int uiscntrl(wchar_t)
//{
//    mangled_ppc("?uiscntrl@@YAH_W@Z");
//};

//wchar_t utoupper(wchar_t)
//{
//    mangled_ppc("?utoupper@@YA_W_W@Z");
//};

//wchar_t xbox_towupper(wchar_t)
//{
//    mangled_ppc("?xbox_towupper@@YA_W_W@Z");
//};

//int utolower(wchar_t)
//{
//    mangled_ppc("?utolower@@YAH_W@Z");
//};

//wchar_t xbox_towlower(wchar_t)
//{
//    mangled_ppc("?xbox_towlower@@YA_W_W@Z");
//};

//wchar_t ufgetc(struct _iobuf *)
//{
//    mangled_ppc("?ufgetc@@YA_WPAU_iobuf@@@Z");
//};

//wchar_t ufputc(wchar_t, struct _iobuf *)
//{
//    mangled_ppc("?ufputc@@YA_W_WPAU_iobuf@@@Z");
//};

//wchar_t uungetc(wchar_t, struct _iobuf *)
//{
//    mangled_ppc("?uungetc@@YA_W_WPAU_iobuf@@@Z");
//};

//wchar_t * ufgets(wchar_t *, int, struct _iobuf *)
//{
//    mangled_ppc("?ufgets@@YAPA_WPA_WHPAU_iobuf@@@Z");
//};

//int ufputs(wchar_t const *, struct _iobuf *)
//{
//    mangled_ppc("?ufputs@@YAHPB_WPAU_iobuf@@@Z");
//};

//int uputs(wchar_t const *)
//{
//    mangled_ppc("?uputs@@YAHPB_W@Z");
//};

//int ufprintf(struct _iobuf *, wchar_t const *, ...)
//{
//    mangled_ppc("?ufprintf@@YAHPAU_iobuf@@PB_WZZ");
//};

//int uprintf(wchar_t const *, ...)
//{
//    mangled_ppc("?uprintf@@YAHPB_WZZ");
//};

//int usnprintf(wchar_t *, long, wchar_t const *, ...)
//{
//    mangled_ppc("?usnprintf@@YAHPA_WJPB_WZZ");
//};

//int usnzprintf(wchar_t *, long, wchar_t const *, ...)
//{
//    mangled_ppc("?usnzprintf@@YAHPA_WJPB_WZZ");
//};

//int uvfprintf(struct _iobuf *, wchar_t const *, char *)
//{
//    mangled_ppc("?uvfprintf@@YAHPAU_iobuf@@PB_WPAD@Z");
//};

//int uvprintf(wchar_t const *, char *)
//{
//    mangled_ppc("?uvprintf@@YAHPB_WPAD@Z");
//};

//int uvsnzprintf(wchar_t *, long, wchar_t const *, char *)
//{
//    mangled_ppc("?uvsnzprintf@@YAHPA_WJPB_WPAD@Z");
//};

//struct _iobuf * ufdopen(int, wchar_t const *)
//{
//    mangled_ppc("?ufdopen@@YAPAU_iobuf@@HPB_W@Z");
//};

//struct _iobuf * ufopen(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?ufopen@@YAPAU_iobuf@@PB_W0@Z");
//};

//int ufclose(struct _iobuf *)
//{
//    mangled_ppc("?ufclose@@YAHPAU_iobuf@@@Z");
//};

//struct _iobuf * ufreopen(wchar_t const *, wchar_t const *, struct _iobuf *)
//{
//    mangled_ppc("?ufreopen@@YAPAU_iobuf@@PB_W0PAU1@@Z");
//};

//void uperror(wchar_t const *)
//{
//    mangled_ppc("?uperror@@YAXPB_W@Z");
//};

//int uremove(wchar_t const *)
//{
//    mangled_ppc("?uremove@@YAHPB_W@Z");
//};

//wchar_t * utmpnam(wchar_t *)
//{
//    mangled_ppc("?utmpnam@@YAPA_WPA_W@Z");
//};

//long ustrtol(wchar_t const *, wchar_t **, int)
//{
//    mangled_ppc("?ustrtol@@YAJPB_WPAPA_WH@Z");
//};

//unsigned long ustrtoul(wchar_t const *, wchar_t **, int)
//{
//    mangled_ppc("?ustrtoul@@YAKPB_WPAPA_WH@Z");
//};

//double ustrtod(wchar_t const *, wchar_t **)
//{
//    mangled_ppc("?ustrtod@@YANPB_WPAPA_W@Z");
//};

//wchar_t * ustrftime_tm(wchar_t *, long, wchar_t const *, struct tm const *)
//{
//    mangled_ppc("?ustrftime_tm@@YAPA_WPA_WJPB_WPBUtm@@@Z");
//};

//wchar_t * ustrftime(wchar_t *, long, wchar_t const *, __int64)
//{
//    mangled_ppc("?ustrftime@@YAPA_WPA_WJPB_W_J@Z");
//};

//int uatoi(wchar_t const *)
//{
//    mangled_ppc("?uatoi@@YAHPB_W@Z");
//};

//void wchar_string_to_ascii_string(wchar_t const *, char *, long, long *)
//{
//    mangled_ppc("?wchar_string_to_ascii_string@@YAXPB_WPADJPAJ@Z");
//};

//void truncate_wchar_string_to_ascii_string(wchar_t const *, char *, long, long *)
//{
//    mangled_ppc("?truncate_wchar_string_to_ascii_string@@YAXPB_WPADJPAJ@Z");
//};

//void wchar_string_to_utf8_string(wchar_t const *, struct utf8*, long, long *)
//{
//    mangled_ppc("?wchar_string_to_utf8_string@@YAXPB_WPAUutf8@@JPAJ@Z");
//};

//void converstion_truncation_warning(wchar_t const *, long)
//{
//    mangled_ppc("?converstion_truncation_warning@@YAXPB_WJ@Z");
//};

//void utf8_string_to_ascii_string(struct utf8const *, char *, long, long *)
//{
//    mangled_ppc("?utf8_string_to_ascii_string@@YAXPBUutf8@@PADJPAJ@Z");
//};

//struct utf32 ascii_string_to_utf32_characters(char const *, struct s_escape_table const *, char const **, long *, struct utf32*, long, long *)
//{
//    mangled_ppc("?ascii_string_to_utf32_characters@@YA?AUutf32@@PBDPBUs_escape_table@@PAPBDPAJPAU1@J3@Z");
//};

//struct utf32 wchar_string_to_utf32_characters(wchar_t const *, struct s_escape_table const *, wchar_t const **, long *, struct utf32*, long, long *)
//{
//    mangled_ppc("?wchar_string_to_utf32_characters@@YA?AUutf32@@PB_WPBUs_escape_table@@PAPB_WPAJPAU1@J3@Z");
//};

//void ascii_string_to_utf32_string(char const *, struct s_escape_table const *, struct utf32*, long, long *)
//{
//    mangled_ppc("?ascii_string_to_utf32_string@@YAXPBDPBUs_escape_table@@PAUutf32@@JPAJ@Z");
//};

//void check_source_string_against_copy_buffer_size(char const *, long)
//{
//    mangled_ppc("?check_source_string_against_copy_buffer_size@@YAXPBDJ@Z");
//};

//void wchar_string_to_utf32_string(wchar_t const *, struct s_escape_table const *, struct utf32*, long, long *)
//{
//    mangled_ppc("?wchar_string_to_utf32_string@@YAXPB_WPBUs_escape_table@@PAUutf32@@JPAJ@Z");
//};

//void ascii_string_to_wchar_string(char const *, wchar_t *, long, long *)
//{
//    mangled_ppc("?ascii_string_to_wchar_string@@YAXPBDPA_WJPAJ@Z");
//};

//long utf32_character_to_utf16_string(struct utf32, struct utf16*, long)
//{
//    mangled_ppc("?utf32_character_to_utf16_string@@YAJUutf32@@PAUutf16@@J@Z");
//};

//struct utf32 utf16_string_to_utf32_character(struct utf16const *, struct utf16const **)
//{
//    mangled_ppc("?utf16_string_to_utf32_character@@YA?AUutf32@@PBUutf16@@PAPBU2@@Z");
//};

//bool utf32_in_list(struct utf32, struct s_utf32_range const *, long)
//{
//    mangled_ppc("?utf32_in_list@@YA_NUutf32@@PBUs_utf32_range@@J@Z");
//};

//bool utf32_is_id_start(struct utf32)
//{
//    mangled_ppc("?utf32_is_id_start@@YA_NUutf32@@@Z");
//};

//bool utf32_is_id_continue(struct utf32)
//{
//    mangled_ppc("?utf32_is_id_continue@@YA_NUutf32@@@Z");
//};

//bool utf32_isspace(struct utf32)
//{
//    mangled_ppc("?utf32_isspace@@YA_NUutf32@@@Z");
//};

//bool utf32_isalpha(struct utf32)
//{
//    mangled_ppc("?utf32_isalpha@@YA_NUutf32@@@Z");
//};

//bool utf32_isprint(struct utf32)
//{
//    mangled_ppc("?utf32_isprint@@YA_NUutf32@@@Z");
//};

//bool utf32_ismonochrome(struct utf32)
//{
//    mangled_ppc("?utf32_ismonochrome@@YA_NUutf32@@@Z");
//};

//bool utf32_can_line_break(struct utf32, struct utf32)
//{
//    mangled_ppc("?utf32_can_line_break@@YA_NUutf32@@0@Z");
//};

//unsigned int utf32_strlen(struct utf32const *)
//{
//    mangled_ppc("?utf32_strlen@@YAIPBUutf32@@@Z");
//};

//unsigned int utf8_strlen(struct utf8const *)
//{
//    mangled_ppc("?utf8_strlen@@YAIPBUutf8@@@Z");
//};

//wchar_t * unicode_byte_swap_wchar_string(wchar_t *, long, enum e_byte_order)
//{
//    mangled_ppc("?unicode_byte_swap_wchar_string@@YAPA_WPA_WJW4e_byte_order@@@Z");
//};

//struct utf32* unicode_byte_swap_utf32_string(struct utf32*, long, enum e_byte_order)
//{
//    mangled_ppc("?unicode_byte_swap_utf32_string@@YAPAUutf32@@PAU1@JW4e_byte_order@@@Z");
//};

//void utf8_string_to_wchar_string(struct utf8const *, wchar_t *, long, long *)
//{
//    mangled_ppc("?utf8_string_to_wchar_string@@YAXPBUutf8@@PA_WJPAJ@Z");
//};

//void check_source_string_against_copy_buffer_size(struct utf8const *, long)
//{
//    mangled_ppc("?check_source_string_against_copy_buffer_size@@YAXPBUutf8@@J@Z");
//};

//bool is_private_use_character(wchar_t)
//{
//    mangled_ppc("?is_private_use_character@@YA_N_W@Z");
//};

//bool utf32_has_Lu_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Lu_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Ll_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Ll_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Lt_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Lt_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Lm_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Lm_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Lo_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Lo_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Nl_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Nl_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Mn_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Mn_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Mc_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Mc_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Nd_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Nd_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_Pc_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_Pc_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_other_id_start_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_other_id_start_property@@YA_NUutf32@@@Z");
//};

//bool utf32_has_other_alphabetic_property(struct utf32)
//{
//    mangled_ppc("?utf32_has_other_alphabetic_property@@YA_NUutf32@@@Z");
//};

//bool utf32_is_east_asian_character(struct utf32)
//{
//    mangled_ppc("?utf32_is_east_asian_character@@YA_NUutf32@@@Z");
//};

//bool utf32_is_non_beginning_character(struct utf32)
//{
//    mangled_ppc("?utf32_is_non_beginning_character@@YA_NUutf32@@@Z");
//};

//bool utf32_is_non_ending_character(struct utf32)
//{
//    mangled_ppc("?utf32_is_non_ending_character@@YA_NUutf32@@@Z");
//};

//struct utf32 wchar_escape_character_to_utf32(wchar_t, struct s_escape_table const *, bool *, void (**)(char const *, char const **, struct utf32*, long, long *), void (**)(wchar_t const *, wchar_t const **, struct utf32*, long, long *))
//{
//    mangled_ppc("?wchar_escape_character_to_utf32@@YA?AUutf32@@_WPBUs_escape_table@@PA_NPAP6AXPBDPAPBDPAU1@JPAJ@ZPAP6AXPB_WPAPB_W5J6@Z@Z");
//};

//long e_utf32_character_to_utf8_string(enum e_utf32, struct utf8*, long)
//{
//    mangled_ppc("?e_utf32_character_to_utf8_string@@YAJW4e_utf32@@PAUutf8@@J@Z");
//};

//void string_to_utf32_string<char, 8>(char const *, struct s_escape_table const *, struct utf32*, struct utf32(*)(char const *, struct s_escape_table const *, char const **, long *, struct utf32*, long, long *), long, long *)
//{
//    mangled_ppc("??$string_to_utf32_string@D$07@@YAXPBDPBUs_escape_table@@PAUutf32@@P6A?AU1@01PAPBDPAJ2J4@ZJ4@Z");
//};

//void converstion_truncation_warning(char const *, long)
//{
//    mangled_ppc("?converstion_truncation_warning@@YAXPBDJ@Z");
//};

//void string_to_utf32_string<wchar_t, 8>(wchar_t const *, struct s_escape_table const *, struct utf32*, struct utf32(*)(wchar_t const *, struct s_escape_table const *, wchar_t const **, long *, struct utf32*, long, long *), long, long *)
//{
//    mangled_ppc("??$string_to_utf32_string@_W$07@@YAXPB_WPBUs_escape_table@@PAUutf32@@P6A?AU1@01PAPB_WPAJ2J4@ZJ4@Z");
//};

//localtime
//{
//    mangled_ppc("localtime");
//};

