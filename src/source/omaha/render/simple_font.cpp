/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct simple_font::s_font_data **simple_font::g_fonts; // "?g_fonts@simple_font@@3PAPAUs_font_data@1@A"
// struct simple_font::s_simple_font_globals simple_font::g_simple_font_globals; // "?g_simple_font_globals@simple_font@@3Us_simple_font_globals@1@A"
// struct simple_font::s_font_data simple_font::g_font_6x10; // "?g_font_6x10@simple_font@@3Us_font_data@1@A"
// struct simple_font::s_font_data simple_font::g_font_4x6; // "?g_font_4x6@simple_font@@3Us_font_data@1@A"
// struct simple_font::s_font_data *simple_font::g_activeFont; // "?g_activeFont@simple_font@@3PAUs_font_data@1@A"

// void simple_font::install(void);
// public: void simple_font::s_font_data::install(void);
// void simple_font::remove(void);
// public: void simple_font::s_font_data::remove(void);
// void simple_font::select(long);
// bool simple_font::begin_rendering(float, bool);
// void simple_font::end_rendering(void);
// void simple_font::vprintf(long, long, long, unsigned long, char const *, char *);
// void simple_font::printf(long, long, char const *, ...);
// void simple_font::printf(long, long, unsigned long, char const *, ...);
// void simple_font::printf_down(long, long, unsigned long, char const *, ...);
// void simple_font::printf_up(long, long, unsigned long, char const *, ...);
// void simple_font::printf_left(long, long, unsigned long, char const *, ...);
// void simple_font::print_white(long, long, char const *, long);
// void simple_font::print(long, long, unsigned long, char const *, long);
// void simple_font::print_block(long, long, long, long, unsigned long, char const *);
// long simple_font::get_width(void);
// long simple_font::get_height(void);
// void simple_font::render_text(struct simple_font::s_font_data const *, long, long, long, long, unsigned long, char const *, unsigned int, bool, float);
// void simple_font::draw_quads(struct rasterizer_vertex_screen *, long, bool);
// long simple_font::make_quad(long, long, float, float, long, long, float, float, unsigned long, long, struct rasterizer_vertex_screen *);
// public: bool c_simple_font_screen_display::open_session(float);
// public: void c_simple_font_screen_display::close_session(void);
// public: void c_simple_font_screen_display::draw(long, long, unsigned long, char const *, ...);
// public: c_simple_font_draw_string::c_simple_font_draw_string(void);
// public: c_simple_font_draw_string::s_character_group_render_data::s_character_group_render_data(void);
// merged_8273C880;
// public: virtual bool c_simple_font_draw_string::draw(class c_font_cache_base *, char const *);
// public: virtual bool c_simple_font_draw_string::draw(class c_font_cache_base *, wchar_t const *);
// public: virtual bool c_simple_font_draw_string::draw(class c_font_cache_base *, struct utf32const *);
// public: float c_draw_string::get_scale(void) const;
// public: c_simple_font_cache::c_simple_font_cache(void);
// public: c_font_cache_base::c_font_cache_base(void);
// public: c_simple_font_cache::~c_simple_font_cache(void);
// public: virtual long c_simple_font_cache::character_data_get_hardware_block_index(enum e_character_data_index);
// public: virtual void c_simple_font_cache::character_data_set_hardware_block_index(enum e_character_data_index, long);
// public: virtual void c_simple_font_cache::character_data_hardware_block_touched(enum e_character_data_index);
// public: virtual bool c_simple_font_cache::get_pixels(unsigned long, enum e_character_data_index, struct s_font_character const *, class s_static_array<unsigned short, 16384> *);
// public: virtual bool c_simple_font_cache::character_predict(enum e_font_id, enum e_utf32);
// public: virtual bool c_simple_font_cache::character_load(enum e_font_id, enum e_utf32, bool, unsigned long *, enum e_character_data_index *, struct s_font_character const **);
// private: struct s_font_character const * c_simple_font_cache::update_font_character(void);
// public: static char c_simple_font_draw_string::utf32_to_printable_ascii(enum e_utf32);
// public: static char c_simple_font_draw_string::char_to_printable_ascii(char);
// private: virtual bool c_simple_font_draw_string::predict_character(class c_font_cache_base *, enum e_font_id, enum e_utf32);
// private: virtual bool c_simple_font_draw_string::precache_character(class c_font_cache_base *, enum e_font_id, enum e_utf32, struct s_font_character const **);
// private: virtual void c_simple_font_draw_string::draw_character(class c_font_cache_base *, enum e_font_id, enum e_utf32, unsigned long, unsigned long, float, float, float, float, float, float);
// private: void c_simple_font_draw_string::add_character_to_glyph_cache(enum e_utf32, unsigned long, long, long);
// public: bool c_simple_font_draw_string::s_character_group_render_data::is_full(void) const;
// private: void c_simple_font_draw_string::render_and_flush_character_cache(void);
// public: void c_simple_font_draw_string::s_character_group_render_data::reset(void);

//void simple_font::install(void)
//{
//    mangled_ppc("?install@simple_font@@YAXXZ");
//};

//public: void simple_font::s_font_data::install(void)
//{
//    mangled_ppc("?install@s_font_data@simple_font@@QAAXXZ");
//};

//void simple_font::remove(void)
//{
//    mangled_ppc("?remove@simple_font@@YAXXZ");
//};

//public: void simple_font::s_font_data::remove(void)
//{
//    mangled_ppc("?remove@s_font_data@simple_font@@QAAXXZ");
//};

//void simple_font::select(long)
//{
//    mangled_ppc("?select@simple_font@@YAXJ@Z");
//};

//bool simple_font::begin_rendering(float, bool)
//{
//    mangled_ppc("?begin_rendering@simple_font@@YA_NM_N@Z");
//};

//void simple_font::end_rendering(void)
//{
//    mangled_ppc("?end_rendering@simple_font@@YAXXZ");
//};

//void simple_font::vprintf(long, long, long, unsigned long, char const *, char *)
//{
//    mangled_ppc("?vprintf@simple_font@@YAXJJJKPBDPAD@Z");
//};

//void simple_font::printf(long, long, char const *, ...)
//{
//    mangled_ppc("?printf@simple_font@@YAXJJPBDZZ");
//};

//void simple_font::printf(long, long, unsigned long, char const *, ...)
//{
//    mangled_ppc("?printf@simple_font@@YAXJJKPBDZZ");
//};

//void simple_font::printf_down(long, long, unsigned long, char const *, ...)
//{
//    mangled_ppc("?printf_down@simple_font@@YAXJJKPBDZZ");
//};

//void simple_font::printf_up(long, long, unsigned long, char const *, ...)
//{
//    mangled_ppc("?printf_up@simple_font@@YAXJJKPBDZZ");
//};

//void simple_font::printf_left(long, long, unsigned long, char const *, ...)
//{
//    mangled_ppc("?printf_left@simple_font@@YAXJJKPBDZZ");
//};

//void simple_font::print_white(long, long, char const *, long)
//{
//    mangled_ppc("?print_white@simple_font@@YAXJJPBDJ@Z");
//};

//void simple_font::print(long, long, unsigned long, char const *, long)
//{
//    mangled_ppc("?print@simple_font@@YAXJJKPBDJ@Z");
//};

//void simple_font::print_block(long, long, long, long, unsigned long, char const *)
//{
//    mangled_ppc("?print_block@simple_font@@YAXJJJJKPBD@Z");
//};

//long simple_font::get_width(void)
//{
//    mangled_ppc("?get_width@simple_font@@YAJXZ");
//};

//long simple_font::get_height(void)
//{
//    mangled_ppc("?get_height@simple_font@@YAJXZ");
//};

//void simple_font::render_text(struct simple_font::s_font_data const *, long, long, long, long, unsigned long, char const *, unsigned int, bool, float)
//{
//    mangled_ppc("?render_text@simple_font@@YAXPBUs_font_data@1@JJJJKPBDI_NM@Z");
//};

//void simple_font::draw_quads(struct rasterizer_vertex_screen *, long, bool)
//{
//    mangled_ppc("?draw_quads@simple_font@@YAXPAUrasterizer_vertex_screen@@J_N@Z");
//};

//long simple_font::make_quad(long, long, float, float, long, long, float, float, unsigned long, long, struct rasterizer_vertex_screen *)
//{
//    mangled_ppc("?make_quad@simple_font@@YAJJJMMJJMMKJPAUrasterizer_vertex_screen@@@Z");
//};

//public: bool c_simple_font_screen_display::open_session(float)
//{
//    mangled_ppc("?open_session@c_simple_font_screen_display@@QAA_NM@Z");
//};

//public: void c_simple_font_screen_display::close_session(void)
//{
//    mangled_ppc("?close_session@c_simple_font_screen_display@@QAAXXZ");
//};

//public: void c_simple_font_screen_display::draw(long, long, unsigned long, char const *, ...)
//{
//    mangled_ppc("?draw@c_simple_font_screen_display@@QAAXJJKPBDZZ");
//};

//public: c_simple_font_draw_string::c_simple_font_draw_string(void)
//{
//    mangled_ppc("??0c_simple_font_draw_string@@QAA@XZ");
//};

//public: c_simple_font_draw_string::s_character_group_render_data::s_character_group_render_data(void)
//{
//    mangled_ppc("??0s_character_group_render_data@c_simple_font_draw_string@@QAA@XZ");
//};

//merged_8273C880
//{
//    mangled_ppc("merged_8273C880");
//};

//public: virtual bool c_simple_font_draw_string::draw(class c_font_cache_base *, char const *)
//{
//    mangled_ppc("?draw@c_simple_font_draw_string@@UAA_NPAVc_font_cache_base@@PBD@Z");
//};

//public: virtual bool c_simple_font_draw_string::draw(class c_font_cache_base *, wchar_t const *)
//{
//    mangled_ppc("?draw@c_simple_font_draw_string@@UAA_NPAVc_font_cache_base@@PB_W@Z");
//};

//public: virtual bool c_simple_font_draw_string::draw(class c_font_cache_base *, struct utf32const *)
//{
//    mangled_ppc("?draw@c_simple_font_draw_string@@UAA_NPAVc_font_cache_base@@PBUutf32@@@Z");
//};

//public: float c_draw_string::get_scale(void) const
//{
//    mangled_ppc("?get_scale@c_draw_string@@QBAMXZ");
//};

//public: c_simple_font_cache::c_simple_font_cache(void)
//{
//    mangled_ppc("??0c_simple_font_cache@@QAA@XZ");
//};

//public: c_font_cache_base::c_font_cache_base(void)
//{
//    mangled_ppc("??0c_font_cache_base@@QAA@XZ");
//};

//public: c_simple_font_cache::~c_simple_font_cache(void)
//{
//    mangled_ppc("??1c_simple_font_cache@@QAA@XZ");
//};

//public: virtual long c_simple_font_cache::character_data_get_hardware_block_index(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_get_hardware_block_index@c_simple_font_cache@@UAAJW4e_character_data_index@@@Z");
//};

//public: virtual void c_simple_font_cache::character_data_set_hardware_block_index(enum e_character_data_index, long)
//{
//    mangled_ppc("?character_data_set_hardware_block_index@c_simple_font_cache@@UAAXW4e_character_data_index@@J@Z");
//};

//public: virtual void c_simple_font_cache::character_data_hardware_block_touched(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_hardware_block_touched@c_simple_font_cache@@UAAXW4e_character_data_index@@@Z");
//};

//public: virtual bool c_simple_font_cache::get_pixels(unsigned long, enum e_character_data_index, struct s_font_character const *, class s_static_array<unsigned short, 16384> *)
//{
//    mangled_ppc("?get_pixels@c_simple_font_cache@@UAA_NKW4e_character_data_index@@PBUs_font_character@@PAV?$s_static_array@G$0EAAA@@@@Z");
//};

//public: virtual bool c_simple_font_cache::character_predict(enum e_font_id, enum e_utf32)
//{
//    mangled_ppc("?character_predict@c_simple_font_cache@@UAA_NW4e_font_id@@W4e_utf32@@@Z");
//};

//public: virtual bool c_simple_font_cache::character_load(enum e_font_id, enum e_utf32, bool, unsigned long *, enum e_character_data_index *, struct s_font_character const **)
//{
//    mangled_ppc("?character_load@c_simple_font_cache@@UAA_NW4e_font_id@@W4e_utf32@@_NPAKPAW4e_character_data_index@@PAPBUs_font_character@@@Z");
//};

//private: struct s_font_character const * c_simple_font_cache::update_font_character(void)
//{
//    mangled_ppc("?update_font_character@c_simple_font_cache@@AAAPBUs_font_character@@XZ");
//};

//public: static char c_simple_font_draw_string::utf32_to_printable_ascii(enum e_utf32)
//{
//    mangled_ppc("?utf32_to_printable_ascii@c_simple_font_draw_string@@SADW4e_utf32@@@Z");
//};

//public: static char c_simple_font_draw_string::char_to_printable_ascii(char)
//{
//    mangled_ppc("?char_to_printable_ascii@c_simple_font_draw_string@@SADD@Z");
//};

//private: virtual bool c_simple_font_draw_string::predict_character(class c_font_cache_base *, enum e_font_id, enum e_utf32)
//{
//    mangled_ppc("?predict_character@c_simple_font_draw_string@@EAA_NPAVc_font_cache_base@@W4e_font_id@@W4e_utf32@@@Z");
//};

//private: virtual bool c_simple_font_draw_string::precache_character(class c_font_cache_base *, enum e_font_id, enum e_utf32, struct s_font_character const **)
//{
//    mangled_ppc("?precache_character@c_simple_font_draw_string@@EAA_NPAVc_font_cache_base@@W4e_font_id@@W4e_utf32@@PAPBUs_font_character@@@Z");
//};

//private: virtual void c_simple_font_draw_string::draw_character(class c_font_cache_base *, enum e_font_id, enum e_utf32, unsigned long, unsigned long, float, float, float, float, float, float)
//{
//    mangled_ppc("?draw_character@c_simple_font_draw_string@@EAAXPAVc_font_cache_base@@W4e_font_id@@W4e_utf32@@KKMMMMMM@Z");
//};

//private: void c_simple_font_draw_string::add_character_to_glyph_cache(enum e_utf32, unsigned long, long, long)
//{
//    mangled_ppc("?add_character_to_glyph_cache@c_simple_font_draw_string@@AAAXW4e_utf32@@KJJ@Z");
//};

//public: bool c_simple_font_draw_string::s_character_group_render_data::is_full(void) const
//{
//    mangled_ppc("?is_full@s_character_group_render_data@c_simple_font_draw_string@@QBA_NXZ");
//};

//private: void c_simple_font_draw_string::render_and_flush_character_cache(void)
//{
//    mangled_ppc("?render_and_flush_character_cache@c_simple_font_draw_string@@AAAXXZ");
//};

//public: void c_simple_font_draw_string::s_character_group_render_data::reset(void)
//{
//    mangled_ppc("?reset@s_character_group_render_data@c_simple_font_draw_string@@QAAXXZ");
//};

