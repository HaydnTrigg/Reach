/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: static bool __cdecl c_xml_tag_parser<wchar_t>::xml_get_string_attribute(wchar_t const *, wchar_t const *, wchar_t *, long)'::`71'::x_event_category_index; // "?x_event_category_index@?EH@??xml_get_string_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PA_WJ@Z@4JC"
// long volatile `public: bool __cdecl c_xml_parser<wchar_t>::parse_text(wchar_t const *, wchar_t *, long)'::`89'::x_event_category_index; // "?x_event_category_index@?FJ@??parse_text@?$c_xml_parser@_W@@QAA_NPB_WPA_WJ@Z@4JC"
// long volatile `public: bool __cdecl c_xml_parser<wchar_t>::parse_text(wchar_t const *, wchar_t *, long)'::`43'::x_event_category_index; // "?x_event_category_index@?CL@??parse_text@?$c_xml_parser@_W@@QAA_NPB_WPA_WJ@Z@4JC"

// long xstrlen(char const *);
// long xstrlen(wchar_t const *);
// long xstrcmp(char const *, char const *);
// long xstrcmp(wchar_t const *, wchar_t const *);
// long xstrncmp(char const *, char const *, long);
// long xstrncmp(wchar_t const *, wchar_t const *, long);
// long xstrcasecmp(char const *, char const *);
// long xstrcasecmp(wchar_t const *, wchar_t const *);
// long xstrncasecmp(char const *, char const *, long);
// long xstrncasecmp(wchar_t const *, wchar_t const *, long);
// char const * xstrchr(char const *, char);
// wchar_t const * xstrchr(wchar_t const *, wchar_t);
// char const * xstrstr(char const *, char const *);
// wchar_t const * xstrstr(wchar_t const *, wchar_t const *);
// unsigned long xstrtoul(char const *, char **, unsigned long);
// unsigned long xstrtoul(wchar_t const *, wchar_t **, unsigned long);
// long xstrtol(char const *, char **, unsigned long);
// long xstrtol(wchar_t const *, wchar_t **, unsigned long);
// double xstrtod(char const *, char **);
// double xstrtod(wchar_t const *, wchar_t **);
// bool xisspace(wchar_t);
// bool xisnonbreakingspace(wchar_t);
// bool xisbreakingspace(wchar_t);
// bool xisalnum(wchar_t);
// bool xisdigit(wchar_t);
// bool xisxdigit(wchar_t);
// bool xisalpha(wchar_t);
// bool xisprint(wchar_t);
// long xatol(char const *);
// long xatol(wchar_t const *);
// double xatof(char const *);
// double xatof(wchar_t const *);
// void this_is_retrad(void);
// public: c_wchar_retrad_parser::c_wchar_retrad_parser(wchar_t const *);
// public: virtual bool c_wchar_retrad_parser::parse_tag(wchar_t const *, long *, wchar_t *, long, long *);
// merged_84C2F650;
// public: virtual c_wchar_retrad_parser::~c_wchar_retrad_parser(void);
// public: c_xml_tag_parser<wchar_t>::c_xml_tag_parser<wchar_t>(wchar_t const *);
// public: virtual c_xml_tag_parser<wchar_t>::~c_xml_tag_parser<wchar_t>(void);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_string_attribute(wchar_t const *, wchar_t const *, wchar_t *, long);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_hexidecimal_attribute(wchar_t const *, wchar_t const *, unsigned long *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_boolean_attribute(wchar_t const *, wchar_t const *, bool *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_byte_attribute(wchar_t const *, wchar_t const *, unsigned char *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_word_attribute(wchar_t const *, wchar_t const *, unsigned short *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_short_attribute(wchar_t const *, wchar_t const *, short *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_dword_attribute(wchar_t const *, wchar_t const *, unsigned long *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_long_attribute(wchar_t const *, wchar_t const *, long *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_qword_attribute(wchar_t const *, wchar_t const *, unsigned __int64*);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_real_attribute(wchar_t const *, wchar_t const *, float *);
// public: static bool c_xml_tag_parser<wchar_t>::xml_get_double_attribute(wchar_t const *, wchar_t const *, double *);
// public: static char c_xml_tag_parser<wchar_t>::html_get_special_character(wchar_t const *, long *);
// public: c_xml_parser<wchar_t>::c_xml_parser<wchar_t>(void);
// public: virtual c_xml_parser<wchar_t>::~c_xml_parser<wchar_t>(void);
// public: void c_xml_parser<wchar_t>::set_parsers(class c_xml_tag_parser<wchar_t> **const, long);
// public: bool c_xml_parser<wchar_t>::parse_text(wchar_t const *, wchar_t *, long);
// public: virtual bool c_xml_parser<wchar_t>::parse_non_tag(wchar_t const *, long *, wchar_t *, long, long *);
// merged_84C32850;
// merged_84C32898;
// public: static void c_xml_tag_parser<wchar_t>::warn_missing_attribute(wchar_t const *);
// public: bool c_xml_parser<wchar_t>::parse_xml_tag(wchar_t const *, long *, wchar_t *, long, long *);

//long xstrlen(char const *)
//{
//    mangled_ppc("?xstrlen@@YAJPBD@Z");
//};

//long xstrlen(wchar_t const *)
//{
//    mangled_ppc("?xstrlen@@YAJPB_W@Z");
//};

//long xstrcmp(char const *, char const *)
//{
//    mangled_ppc("?xstrcmp@@YAJPBD0@Z");
//};

//long xstrcmp(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?xstrcmp@@YAJPB_W0@Z");
//};

//long xstrncmp(char const *, char const *, long)
//{
//    mangled_ppc("?xstrncmp@@YAJPBD0J@Z");
//};

//long xstrncmp(wchar_t const *, wchar_t const *, long)
//{
//    mangled_ppc("?xstrncmp@@YAJPB_W0J@Z");
//};

//long xstrcasecmp(char const *, char const *)
//{
//    mangled_ppc("?xstrcasecmp@@YAJPBD0@Z");
//};

//long xstrcasecmp(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?xstrcasecmp@@YAJPB_W0@Z");
//};

//long xstrncasecmp(char const *, char const *, long)
//{
//    mangled_ppc("?xstrncasecmp@@YAJPBD0J@Z");
//};

//long xstrncasecmp(wchar_t const *, wchar_t const *, long)
//{
//    mangled_ppc("?xstrncasecmp@@YAJPB_W0J@Z");
//};

//char const * xstrchr(char const *, char)
//{
//    mangled_ppc("?xstrchr@@YAPBDPBDD@Z");
//};

//wchar_t const * xstrchr(wchar_t const *, wchar_t)
//{
//    mangled_ppc("?xstrchr@@YAPB_WPB_W_W@Z");
//};

//char const * xstrstr(char const *, char const *)
//{
//    mangled_ppc("?xstrstr@@YAPBDPBD0@Z");
//};

//wchar_t const * xstrstr(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?xstrstr@@YAPB_WPB_W0@Z");
//};

//unsigned long xstrtoul(char const *, char **, unsigned long)
//{
//    mangled_ppc("?xstrtoul@@YAKPBDPAPADK@Z");
//};

//unsigned long xstrtoul(wchar_t const *, wchar_t **, unsigned long)
//{
//    mangled_ppc("?xstrtoul@@YAKPB_WPAPA_WK@Z");
//};

//long xstrtol(char const *, char **, unsigned long)
//{
//    mangled_ppc("?xstrtol@@YAJPBDPAPADK@Z");
//};

//long xstrtol(wchar_t const *, wchar_t **, unsigned long)
//{
//    mangled_ppc("?xstrtol@@YAJPB_WPAPA_WK@Z");
//};

//double xstrtod(char const *, char **)
//{
//    mangled_ppc("?xstrtod@@YANPBDPAPAD@Z");
//};

//double xstrtod(wchar_t const *, wchar_t **)
//{
//    mangled_ppc("?xstrtod@@YANPB_WPAPA_W@Z");
//};

//bool xisspace(wchar_t)
//{
//    mangled_ppc("?xisspace@@YA_N_W@Z");
//};

//bool xisnonbreakingspace(wchar_t)
//{
//    mangled_ppc("?xisnonbreakingspace@@YA_N_W@Z");
//};

//bool xisbreakingspace(wchar_t)
//{
//    mangled_ppc("?xisbreakingspace@@YA_N_W@Z");
//};

//bool xisalnum(wchar_t)
//{
//    mangled_ppc("?xisalnum@@YA_N_W@Z");
//};

//bool xisdigit(wchar_t)
//{
//    mangled_ppc("?xisdigit@@YA_N_W@Z");
//};

//bool xisxdigit(wchar_t)
//{
//    mangled_ppc("?xisxdigit@@YA_N_W@Z");
//};

//bool xisalpha(wchar_t)
//{
//    mangled_ppc("?xisalpha@@YA_N_W@Z");
//};

//bool xisprint(wchar_t)
//{
//    mangled_ppc("?xisprint@@YA_N_W@Z");
//};

//long xatol(char const *)
//{
//    mangled_ppc("?xatol@@YAJPBD@Z");
//};

//long xatol(wchar_t const *)
//{
//    mangled_ppc("?xatol@@YAJPB_W@Z");
//};

//double xatof(char const *)
//{
//    mangled_ppc("?xatof@@YANPBD@Z");
//};

//double xatof(wchar_t const *)
//{
//    mangled_ppc("?xatof@@YANPB_W@Z");
//};

//void this_is_retrad(void)
//{
//    mangled_ppc("?this_is_retrad@@YAXXZ");
//};

//public: c_wchar_retrad_parser::c_wchar_retrad_parser(wchar_t const *)
//{
//    mangled_ppc("??0c_wchar_retrad_parser@@QAA@PB_W@Z");
//};

//public: virtual bool c_wchar_retrad_parser::parse_tag(wchar_t const *, long *, wchar_t *, long, long *)
//{
//    mangled_ppc("?parse_tag@c_wchar_retrad_parser@@UAA_NPB_WPAJPA_WJ1@Z");
//};

//merged_84C2F650
//{
//    mangled_ppc("merged_84C2F650");
//};

//public: virtual c_wchar_retrad_parser::~c_wchar_retrad_parser(void)
//{
//    mangled_ppc("??1c_wchar_retrad_parser@@UAA@XZ");
//};

//public: c_xml_tag_parser<wchar_t>::c_xml_tag_parser<wchar_t>(wchar_t const *)
//{
//    mangled_ppc("??0?$c_xml_tag_parser@_W@@QAA@PB_W@Z");
//};

//public: virtual c_xml_tag_parser<wchar_t>::~c_xml_tag_parser<wchar_t>(void)
//{
//    mangled_ppc("??1?$c_xml_tag_parser@_W@@UAA@XZ");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_string_attribute(wchar_t const *, wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?xml_get_string_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PA_WJ@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_hexidecimal_attribute(wchar_t const *, wchar_t const *, unsigned long *)
//{
//    mangled_ppc("?xml_get_hexidecimal_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAK@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_boolean_attribute(wchar_t const *, wchar_t const *, bool *)
//{
//    mangled_ppc("?xml_get_boolean_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PA_N@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_byte_attribute(wchar_t const *, wchar_t const *, unsigned char *)
//{
//    mangled_ppc("?xml_get_byte_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAE@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_word_attribute(wchar_t const *, wchar_t const *, unsigned short *)
//{
//    mangled_ppc("?xml_get_word_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAG@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_short_attribute(wchar_t const *, wchar_t const *, short *)
//{
//    mangled_ppc("?xml_get_short_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAF@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_dword_attribute(wchar_t const *, wchar_t const *, unsigned long *)
//{
//    mangled_ppc("?xml_get_dword_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAK@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_long_attribute(wchar_t const *, wchar_t const *, long *)
//{
//    mangled_ppc("?xml_get_long_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAJ@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_qword_attribute(wchar_t const *, wchar_t const *, unsigned __int64*)
//{
//    mangled_ppc("?xml_get_qword_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PA_K@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_real_attribute(wchar_t const *, wchar_t const *, float *)
//{
//    mangled_ppc("?xml_get_real_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAM@Z");
//};

//public: static bool c_xml_tag_parser<wchar_t>::xml_get_double_attribute(wchar_t const *, wchar_t const *, double *)
//{
//    mangled_ppc("?xml_get_double_attribute@?$c_xml_tag_parser@_W@@SA_NPB_W0PAN@Z");
//};

//public: static char c_xml_tag_parser<wchar_t>::html_get_special_character(wchar_t const *, long *)
//{
//    mangled_ppc("?html_get_special_character@?$c_xml_tag_parser@_W@@SADPB_WPAJ@Z");
//};

//public: c_xml_parser<wchar_t>::c_xml_parser<wchar_t>(void)
//{
//    mangled_ppc("??0?$c_xml_parser@_W@@QAA@XZ");
//};

//public: virtual c_xml_parser<wchar_t>::~c_xml_parser<wchar_t>(void)
//{
//    mangled_ppc("??1?$c_xml_parser@_W@@UAA@XZ");
//};

//public: void c_xml_parser<wchar_t>::set_parsers(class c_xml_tag_parser<wchar_t> **const, long)
//{
//    mangled_ppc("?set_parsers@?$c_xml_parser@_W@@QAAXQAPAV?$c_xml_tag_parser@_W@@J@Z");
//};

//public: bool c_xml_parser<wchar_t>::parse_text(wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?parse_text@?$c_xml_parser@_W@@QAA_NPB_WPA_WJ@Z");
//};

//public: virtual bool c_xml_parser<wchar_t>::parse_non_tag(wchar_t const *, long *, wchar_t *, long, long *)
//{
//    mangled_ppc("?parse_non_tag@?$c_xml_parser@_W@@UAA_NPB_WPAJPA_WJ1@Z");
//};

//merged_84C32850
//{
//    mangled_ppc("merged_84C32850");
//};

//merged_84C32898
//{
//    mangled_ppc("merged_84C32898");
//};

//public: static void c_xml_tag_parser<wchar_t>::warn_missing_attribute(wchar_t const *)
//{
//    mangled_ppc("?warn_missing_attribute@?$c_xml_tag_parser@_W@@SAXPB_W@Z");
//};

//public: bool c_xml_parser<wchar_t>::parse_xml_tag(wchar_t const *, long *, wchar_t *, long, long *)
//{
//    mangled_ppc("?parse_xml_tag@?$c_xml_parser@_W@@QAA_NPB_WPAJPA_WJ1@Z");
//};

