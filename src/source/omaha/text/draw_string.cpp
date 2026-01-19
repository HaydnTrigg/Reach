/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_draw_string::c_draw_string(void);
// merged_82DCF610;
// public: virtual c_draw_string::~c_draw_string(void);
// public: bool c_draw_string::valid_state(void) const;
// public: void c_draw_string::set_permutation_proc(bool (*)(struct dynamic_screen_vertex *, void *), void *);
// public: short c_draw_string::get_line_height(void) const;
// public: unsigned long c_draw_string::get_color(void) const;
// public: union argb_color * c_draw_string::get_color(union argb_color *) const;
// public: unsigned long c_draw_string::get_shadow_color(void) const;
// public: union argb_color * c_draw_string::get_shadow_color(union argb_color *) const;
// public: void c_draw_string::set_color(unsigned long);
// public: void c_draw_string::set_color_deprecated(unsigned long, bool);
// public: void c_draw_string::set_color(union argb_color const *);
// public: void c_draw_string::set_color_deprecated(union argb_color const *, bool);
// public: void c_draw_string::set_shadow_color(unsigned long);
// public: void c_draw_string::set_shadow_color(union argb_color const *);
// public: void c_draw_string::set_tab_stops(short const *, short);
// public: void c_draw_string::set_indents(short, short);
// public: void c_draw_string::set_font(enum e_font_id);
// public: void c_draw_string::set_style(enum e_text_style);
// public: void c_draw_string::set_justification(enum e_text_justification);
// public: void c_draw_string::set_wrap_horizontally(bool);
// public: void c_draw_string::set_wrap_vertically(bool);
// public: void c_draw_string::set_center_vertically(bool);
// public: void c_draw_string::set_align_bottom_vertically(bool);
// public: void c_draw_string::set_height_adjust(short);
// public: void c_draw_string::set_initial_indent(short);
// public: void c_draw_string::set_paragraph_indent(short);
// public: void c_draw_string::set_bounds(union short_rectangle2d const *, union short_rectangle2d const *);
// public: void c_draw_string::set_bounds(union real_rectangle2d const *, union real_rectangle2d const *);
// public: void c_draw_string::set_bounds(union short_rectangle2d const *);
// public: void c_draw_string::set_bounds(union real_rectangle2d const *);
// public: union short_rectangle2d * c_draw_string::get_bounds(union short_rectangle2d *) const;
// public: union real_rectangle2d * c_draw_string::get_bounds(union real_rectangle2d *) const;
// public: void c_draw_string::set_precache_required(bool);
// public: virtual bool c_draw_string::draw(class c_font_cache_base *, char const *);
// public: virtual bool c_draw_string::draw(class c_font_cache_base *, wchar_t const *);
// public: virtual bool c_draw_string::draw(class c_font_cache_base *, struct utf32const *);
// public: bool c_draw_string::draw_more(class c_font_cache_base *, char const *);
// public: bool c_draw_string::draw_more(class c_font_cache_base *, wchar_t const *);
// public: bool c_draw_string::draw_more(class c_font_cache_base *, struct utf32const *);
// private: virtual void c_draw_string::draw_character(class c_font_cache_base *, enum e_font_id, enum e_utf32, unsigned long, unsigned long, float, float, float, float, float, float);
// public: void c_draw_string::get_cursor(union int16_point2d *) const;
// public: void c_draw_string::get_cursor(union real_point2d *) const;
// public: bool c_draw_string::compute_char_string_bounds(class c_font_cache_base *, char const *, union short_rectangle2d *, union short_rectangle2d *);
// public: bool c_draw_string::compute_wchar_string_bounds(class c_font_cache_base *, wchar_t const *, union short_rectangle2d *, union short_rectangle2d *);
// public: bool c_draw_string::compute_utf32_string_bounds(class c_font_cache_base *, struct utf32const *, union short_rectangle2d *, union short_rectangle2d *);
// public: bool c_draw_string::precache_char_string_for_font(class c_font_cache_base *, char const *, enum e_font_id);
// public: bool c_draw_string::precache_wchar_string_for_font(class c_font_cache_base *, wchar_t const *, enum e_font_id);
// public: bool c_draw_string::precache_utf32_string_for_font(class c_font_cache_base *, struct utf32const *, enum e_font_id);
// public: bool c_draw_string::precache_char_string(class c_font_cache_base *, char const *);
// public: bool c_draw_string::precache_wchar_string(class c_font_cache_base *, wchar_t const *);
// public: bool c_draw_string::precache_utf32_string(class c_font_cache_base *, struct utf32const *);
// private: bool c_draw_string::draw_internal(class c_font_cache_base *, struct utf32const *);
// private: void c_draw_string::adjust_bounds_for_vertical_alignment(class c_font_cache_base *, struct utf32const *, union real_rectangle2d *, bool, bool);
// private: enum e_font_id c_draw_string::get_styled_font(void) const;
// private: bool c_draw_string::parse_string_new(enum e_font_id, struct utf32const *, struct c_draw_string::s_parse_string_state *);
// public: enum e_text_justification c_draw_string::get_justification(void) const;
// private: void c_draw_string::parse_string(struct c_draw_string::s_parse_string_state *);
// private: void c_draw_string::draw_partial(class c_font_cache_base *, struct c_draw_string::s_parse_string_state *, long);
// private: bool c_draw_string::recache_font_header(void);
// private: void c_draw_string::text_bounds_draw_character(float, float, float, float);
// private: struct c_draw_string::s_line_results c_draw_string::build_one_line_of_text_to_draw(class c_font_cache_base *, struct c_draw_string::s_parse_string_state *, union real_rectangle2d const *, float);
// float draw_string_get_glyph_scaling_for_display_settings(void);
// void unicode_set_font_change_character_sequence(enum e_font_id, wchar_t *const);
// bool utf32_get_font_change_character_sequence(struct utf32const *, long *, enum e_font_id *);
// void unicode_set_color_change_character_sequence(unsigned long, wchar_t *const);
// bool utf32_get_color_change_character_sequence(struct utf32const *, long *, unsigned long *);
// void ascii_parse_set_color_sequence(char const *, char const **, struct utf32*, long, long *);
// bool parse_ascii_hexadecimal_digit(char, long, unsigned long *);
// void wchar_parse_set_color_sequence(wchar_t const *, wchar_t const **, struct utf32*, long, long *);
// bool parse_wchar_hexadecimal_digit(wchar_t, long, unsigned long *);
// void wchar_string_to_clean_wchar_string(wchar_t const *, wchar_t *, long, long *);
// public: bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::test(enum c_draw_string::e_text_flags) const;
// public: void c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::set(enum c_draw_string::e_text_flags, bool);
// public: bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::valid(void) const;
// public: c_flags<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::c_flags<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::valid_bit(enum c_draw_string::e_text_flags);
// private: static unsigned long c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::flag_size_type(enum c_draw_string::e_text_flags);
// private: static unsigned long c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_draw_string::e_text_flags);
// union real_rectangle2d * offset_real_rectangle2d(union real_rectangle2d *, float, float);

//public: c_draw_string::c_draw_string(void)
//{
//    mangled_ppc("??0c_draw_string@@QAA@XZ");
//};

//merged_82DCF610
//{
//    mangled_ppc("merged_82DCF610");
//};

//public: virtual c_draw_string::~c_draw_string(void)
//{
//    mangled_ppc("??1c_draw_string@@UAA@XZ");
//};

//public: bool c_draw_string::valid_state(void) const
//{
//    mangled_ppc("?valid_state@c_draw_string@@QBA_NXZ");
//};

//public: void c_draw_string::set_permutation_proc(bool (*)(struct dynamic_screen_vertex *, void *), void *)
//{
//    mangled_ppc("?set_permutation_proc@c_draw_string@@QAAXP6A_NPAUdynamic_screen_vertex@@PAX@Z1@Z");
//};

//public: short c_draw_string::get_line_height(void) const
//{
//    mangled_ppc("?get_line_height@c_draw_string@@QBAFXZ");
//};

//public: unsigned long c_draw_string::get_color(void) const
//{
//    mangled_ppc("?get_color@c_draw_string@@QBAKXZ");
//};

//public: union argb_color * c_draw_string::get_color(union argb_color *) const
//{
//    mangled_ppc("?get_color@c_draw_string@@QBAPATargb_color@@PAT2@@Z");
//};

//public: unsigned long c_draw_string::get_shadow_color(void) const
//{
//    mangled_ppc("?get_shadow_color@c_draw_string@@QBAKXZ");
//};

//public: union argb_color * c_draw_string::get_shadow_color(union argb_color *) const
//{
//    mangled_ppc("?get_shadow_color@c_draw_string@@QBAPATargb_color@@PAT2@@Z");
//};

//public: void c_draw_string::set_color(unsigned long)
//{
//    mangled_ppc("?set_color@c_draw_string@@QAAXK@Z");
//};

//public: void c_draw_string::set_color_deprecated(unsigned long, bool)
//{
//    mangled_ppc("?set_color_deprecated@c_draw_string@@QAAXK_N@Z");
//};

//public: void c_draw_string::set_color(union argb_color const *)
//{
//    mangled_ppc("?set_color@c_draw_string@@QAAXPBTargb_color@@@Z");
//};

//public: void c_draw_string::set_color_deprecated(union argb_color const *, bool)
//{
//    mangled_ppc("?set_color_deprecated@c_draw_string@@QAAXPBTargb_color@@_N@Z");
//};

//public: void c_draw_string::set_shadow_color(unsigned long)
//{
//    mangled_ppc("?set_shadow_color@c_draw_string@@QAAXK@Z");
//};

//public: void c_draw_string::set_shadow_color(union argb_color const *)
//{
//    mangled_ppc("?set_shadow_color@c_draw_string@@QAAXPBTargb_color@@@Z");
//};

//public: void c_draw_string::set_tab_stops(short const *, short)
//{
//    mangled_ppc("?set_tab_stops@c_draw_string@@QAAXPBFF@Z");
//};

//public: void c_draw_string::set_indents(short, short)
//{
//    mangled_ppc("?set_indents@c_draw_string@@QAAXFF@Z");
//};

//public: void c_draw_string::set_font(enum e_font_id)
//{
//    mangled_ppc("?set_font@c_draw_string@@QAAXW4e_font_id@@@Z");
//};

//public: void c_draw_string::set_style(enum e_text_style)
//{
//    mangled_ppc("?set_style@c_draw_string@@QAAXW4e_text_style@@@Z");
//};

//public: void c_draw_string::set_justification(enum e_text_justification)
//{
//    mangled_ppc("?set_justification@c_draw_string@@QAAXW4e_text_justification@@@Z");
//};

//public: void c_draw_string::set_wrap_horizontally(bool)
//{
//    mangled_ppc("?set_wrap_horizontally@c_draw_string@@QAAX_N@Z");
//};

//public: void c_draw_string::set_wrap_vertically(bool)
//{
//    mangled_ppc("?set_wrap_vertically@c_draw_string@@QAAX_N@Z");
//};

//public: void c_draw_string::set_center_vertically(bool)
//{
//    mangled_ppc("?set_center_vertically@c_draw_string@@QAAX_N@Z");
//};

//public: void c_draw_string::set_align_bottom_vertically(bool)
//{
//    mangled_ppc("?set_align_bottom_vertically@c_draw_string@@QAAX_N@Z");
//};

//public: void c_draw_string::set_height_adjust(short)
//{
//    mangled_ppc("?set_height_adjust@c_draw_string@@QAAXF@Z");
//};

//public: void c_draw_string::set_initial_indent(short)
//{
//    mangled_ppc("?set_initial_indent@c_draw_string@@QAAXF@Z");
//};

//public: void c_draw_string::set_paragraph_indent(short)
//{
//    mangled_ppc("?set_paragraph_indent@c_draw_string@@QAAXF@Z");
//};

//public: void c_draw_string::set_bounds(union short_rectangle2d const *, union short_rectangle2d const *)
//{
//    mangled_ppc("?set_bounds@c_draw_string@@QAAXPBTshort_rectangle2d@@0@Z");
//};

//public: void c_draw_string::set_bounds(union real_rectangle2d const *, union real_rectangle2d const *)
//{
//    mangled_ppc("?set_bounds@c_draw_string@@QAAXPBTreal_rectangle2d@@0@Z");
//};

//public: void c_draw_string::set_bounds(union short_rectangle2d const *)
//{
//    mangled_ppc("?set_bounds@c_draw_string@@QAAXPBTshort_rectangle2d@@@Z");
//};

//public: void c_draw_string::set_bounds(union real_rectangle2d const *)
//{
//    mangled_ppc("?set_bounds@c_draw_string@@QAAXPBTreal_rectangle2d@@@Z");
//};

//public: union short_rectangle2d * c_draw_string::get_bounds(union short_rectangle2d *) const
//{
//    mangled_ppc("?get_bounds@c_draw_string@@QBAPATshort_rectangle2d@@PAT2@@Z");
//};

//public: union real_rectangle2d * c_draw_string::get_bounds(union real_rectangle2d *) const
//{
//    mangled_ppc("?get_bounds@c_draw_string@@QBAPATreal_rectangle2d@@PAT2@@Z");
//};

//public: void c_draw_string::set_precache_required(bool)
//{
//    mangled_ppc("?set_precache_required@c_draw_string@@QAAX_N@Z");
//};

//public: virtual bool c_draw_string::draw(class c_font_cache_base *, char const *)
//{
//    mangled_ppc("?draw@c_draw_string@@UAA_NPAVc_font_cache_base@@PBD@Z");
//};

//public: virtual bool c_draw_string::draw(class c_font_cache_base *, wchar_t const *)
//{
//    mangled_ppc("?draw@c_draw_string@@UAA_NPAVc_font_cache_base@@PB_W@Z");
//};

//public: virtual bool c_draw_string::draw(class c_font_cache_base *, struct utf32const *)
//{
//    mangled_ppc("?draw@c_draw_string@@UAA_NPAVc_font_cache_base@@PBUutf32@@@Z");
//};

//public: bool c_draw_string::draw_more(class c_font_cache_base *, char const *)
//{
//    mangled_ppc("?draw_more@c_draw_string@@QAA_NPAVc_font_cache_base@@PBD@Z");
//};

//public: bool c_draw_string::draw_more(class c_font_cache_base *, wchar_t const *)
//{
//    mangled_ppc("?draw_more@c_draw_string@@QAA_NPAVc_font_cache_base@@PB_W@Z");
//};

//public: bool c_draw_string::draw_more(class c_font_cache_base *, struct utf32const *)
//{
//    mangled_ppc("?draw_more@c_draw_string@@QAA_NPAVc_font_cache_base@@PBUutf32@@@Z");
//};

//private: virtual void c_draw_string::draw_character(class c_font_cache_base *, enum e_font_id, enum e_utf32, unsigned long, unsigned long, float, float, float, float, float, float)
//{
//    mangled_ppc("?draw_character@c_draw_string@@EAAXPAVc_font_cache_base@@W4e_font_id@@W4e_utf32@@KKMMMMMM@Z");
//};

//public: void c_draw_string::get_cursor(union int16_point2d *) const
//{
//    mangled_ppc("?get_cursor@c_draw_string@@QBAXPATint16_point2d@@@Z");
//};

//public: void c_draw_string::get_cursor(union real_point2d *) const
//{
//    mangled_ppc("?get_cursor@c_draw_string@@QBAXPATreal_point2d@@@Z");
//};

//public: bool c_draw_string::compute_char_string_bounds(class c_font_cache_base *, char const *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?compute_char_string_bounds@c_draw_string@@QAA_NPAVc_font_cache_base@@PBDPATshort_rectangle2d@@2@Z");
//};

//public: bool c_draw_string::compute_wchar_string_bounds(class c_font_cache_base *, wchar_t const *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?compute_wchar_string_bounds@c_draw_string@@QAA_NPAVc_font_cache_base@@PB_WPATshort_rectangle2d@@2@Z");
//};

//public: bool c_draw_string::compute_utf32_string_bounds(class c_font_cache_base *, struct utf32const *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?compute_utf32_string_bounds@c_draw_string@@QAA_NPAVc_font_cache_base@@PBUutf32@@PATshort_rectangle2d@@2@Z");
//};

//public: bool c_draw_string::precache_char_string_for_font(class c_font_cache_base *, char const *, enum e_font_id)
//{
//    mangled_ppc("?precache_char_string_for_font@c_draw_string@@QAA_NPAVc_font_cache_base@@PBDW4e_font_id@@@Z");
//};

//public: bool c_draw_string::precache_wchar_string_for_font(class c_font_cache_base *, wchar_t const *, enum e_font_id)
//{
//    mangled_ppc("?precache_wchar_string_for_font@c_draw_string@@QAA_NPAVc_font_cache_base@@PB_WW4e_font_id@@@Z");
//};

//public: bool c_draw_string::precache_utf32_string_for_font(class c_font_cache_base *, struct utf32const *, enum e_font_id)
//{
//    mangled_ppc("?precache_utf32_string_for_font@c_draw_string@@QAA_NPAVc_font_cache_base@@PBUutf32@@W4e_font_id@@@Z");
//};

//public: bool c_draw_string::precache_char_string(class c_font_cache_base *, char const *)
//{
//    mangled_ppc("?precache_char_string@c_draw_string@@QAA_NPAVc_font_cache_base@@PBD@Z");
//};

//public: bool c_draw_string::precache_wchar_string(class c_font_cache_base *, wchar_t const *)
//{
//    mangled_ppc("?precache_wchar_string@c_draw_string@@QAA_NPAVc_font_cache_base@@PB_W@Z");
//};

//public: bool c_draw_string::precache_utf32_string(class c_font_cache_base *, struct utf32const *)
//{
//    mangled_ppc("?precache_utf32_string@c_draw_string@@QAA_NPAVc_font_cache_base@@PBUutf32@@@Z");
//};

//private: bool c_draw_string::draw_internal(class c_font_cache_base *, struct utf32const *)
//{
//    mangled_ppc("?draw_internal@c_draw_string@@AAA_NPAVc_font_cache_base@@PBUutf32@@@Z");
//};

//private: void c_draw_string::adjust_bounds_for_vertical_alignment(class c_font_cache_base *, struct utf32const *, union real_rectangle2d *, bool, bool)
//{
//    mangled_ppc("?adjust_bounds_for_vertical_alignment@c_draw_string@@AAAXPAVc_font_cache_base@@PBUutf32@@PATreal_rectangle2d@@_N3@Z");
//};

//private: enum e_font_id c_draw_string::get_styled_font(void) const
//{
//    mangled_ppc("?get_styled_font@c_draw_string@@ABA?AW4e_font_id@@XZ");
//};

//private: bool c_draw_string::parse_string_new(enum e_font_id, struct utf32const *, struct c_draw_string::s_parse_string_state *)
//{
//    mangled_ppc("?parse_string_new@c_draw_string@@AAA_NW4e_font_id@@PBUutf32@@PAUs_parse_string_state@1@@Z");
//};

//public: enum e_text_justification c_draw_string::get_justification(void) const
//{
//    mangled_ppc("?get_justification@c_draw_string@@QBA?AW4e_text_justification@@XZ");
//};

//private: void c_draw_string::parse_string(struct c_draw_string::s_parse_string_state *)
//{
//    mangled_ppc("?parse_string@c_draw_string@@AAAXPAUs_parse_string_state@1@@Z");
//};

//private: void c_draw_string::draw_partial(class c_font_cache_base *, struct c_draw_string::s_parse_string_state *, long)
//{
//    mangled_ppc("?draw_partial@c_draw_string@@AAAXPAVc_font_cache_base@@PAUs_parse_string_state@1@J@Z");
//};

//private: bool c_draw_string::recache_font_header(void)
//{
//    mangled_ppc("?recache_font_header@c_draw_string@@AAA_NXZ");
//};

//private: void c_draw_string::text_bounds_draw_character(float, float, float, float)
//{
//    mangled_ppc("?text_bounds_draw_character@c_draw_string@@AAAXMMMM@Z");
//};

//private: struct c_draw_string::s_line_results c_draw_string::build_one_line_of_text_to_draw(class c_font_cache_base *, struct c_draw_string::s_parse_string_state *, union real_rectangle2d const *, float)
//{
//    mangled_ppc("?build_one_line_of_text_to_draw@c_draw_string@@AAA?AUs_line_results@1@PAVc_font_cache_base@@PAUs_parse_string_state@1@PBTreal_rectangle2d@@M@Z");
//};

//float draw_string_get_glyph_scaling_for_display_settings(void)
//{
//    mangled_ppc("?draw_string_get_glyph_scaling_for_display_settings@@YAMXZ");
//};

//void unicode_set_font_change_character_sequence(enum e_font_id, wchar_t *const)
//{
//    mangled_ppc("?unicode_set_font_change_character_sequence@@YAXW4e_font_id@@QA_W@Z");
//};

//bool utf32_get_font_change_character_sequence(struct utf32const *, long *, enum e_font_id *)
//{
//    mangled_ppc("?utf32_get_font_change_character_sequence@@YA_NPBUutf32@@PAJPAW4e_font_id@@@Z");
//};

//void unicode_set_color_change_character_sequence(unsigned long, wchar_t *const)
//{
//    mangled_ppc("?unicode_set_color_change_character_sequence@@YAXKQA_W@Z");
//};

//bool utf32_get_color_change_character_sequence(struct utf32const *, long *, unsigned long *)
//{
//    mangled_ppc("?utf32_get_color_change_character_sequence@@YA_NPBUutf32@@PAJPAK@Z");
//};

//void ascii_parse_set_color_sequence(char const *, char const **, struct utf32*, long, long *)
//{
//    mangled_ppc("?ascii_parse_set_color_sequence@@YAXPBDPAPBDPAUutf32@@JPAJ@Z");
//};

//bool parse_ascii_hexadecimal_digit(char, long, unsigned long *)
//{
//    mangled_ppc("?parse_ascii_hexadecimal_digit@@YA_NDJPAK@Z");
//};

//void wchar_parse_set_color_sequence(wchar_t const *, wchar_t const **, struct utf32*, long, long *)
//{
//    mangled_ppc("?wchar_parse_set_color_sequence@@YAXPB_WPAPB_WPAUutf32@@JPAJ@Z");
//};

//bool parse_wchar_hexadecimal_digit(wchar_t, long, unsigned long *)
//{
//    mangled_ppc("?parse_wchar_hexadecimal_digit@@YA_N_WJPAK@Z");
//};

//void wchar_string_to_clean_wchar_string(wchar_t const *, wchar_t *, long, long *)
//{
//    mangled_ppc("?wchar_string_to_clean_wchar_string@@YAXPB_WPA_WJPAJ@Z");
//};

//public: bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::test(enum c_draw_string::e_text_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@QBA_NW4e_text_flags@c_draw_string@@@Z");
//};

//public: void c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::set(enum c_draw_string::e_text_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@QAAXW4e_text_flags@c_draw_string@@_N@Z");
//};

//public: bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: c_flags<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::c_flags<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::valid_bit(enum c_draw_string::e_text_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@SA_NW4e_text_flags@c_draw_string@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::flag_size_type(enum c_draw_string::e_text_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@CAKW4e_text_flags@c_draw_string@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum c_draw_string::e_text_flags, unsigned long, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_draw_string::e_text_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_text_flags@c_draw_string@@K$06Us_default_enum_string_resolver@@@@CAKW4e_text_flags@c_draw_string@@@Z");
//};

//union real_rectangle2d * offset_real_rectangle2d(union real_rectangle2d *, float, float)
//{
//    mangled_ppc("?offset_real_rectangle2d@@YAPATreal_rectangle2d@@PAT1@MM@Z");
//};

