/* ---------- headers */

#include "omaha\interface\cui\cui_render_context.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static float const c_cui_render_context::k_default_texture_camera_pixel_aspect_ratio; // "?k_default_texture_camera_pixel_aspect_ratio@c_cui_render_context@@2MB"
// public: static float const c_cui_render_context::k_default_texture_camera_exposure; // "?k_default_texture_camera_exposure@c_cui_render_context@@2MB"
// public: static float const c_cui_render_context::k_default_texture_camera_illum_scale; // "?k_default_texture_camera_illum_scale@c_cui_render_context@@2MB"
// public: static float const c_cui_render_context::k_default_texture_camera_near_plane; // "?k_default_texture_camera_near_plane@c_cui_render_context@@2MB"
// public: static float const c_cui_render_context::k_default_texture_camera_far_plane; // "?k_default_texture_camera_far_plane@c_cui_render_context@@2MB"
// public: static float const c_cui_render_context::k_default_texture_camera_alpha_matte_distance; // "?k_default_texture_camera_alpha_matte_distance@c_cui_render_context@@2MB"
// public: static unsigned long const c_cui_render_context::k_default_texture_camera_render_flags; // "?k_default_texture_camera_render_flags@c_cui_render_context@@2KB"
// public: static float const c_cui_render_context::k_default_horizontal_blur_size; // "?k_default_horizontal_blur_size@c_cui_render_context@@2MB"
// public: static float const c_cui_render_context::k_default_vertical_blur_size; // "?k_default_vertical_blur_size@c_cui_render_context@@2MB"

// public: c_cui_render_context::c_cui_render_context(class c_cui_screen_widget *, class c_cui_render_buffer *);
// public: bool c_cui_render_context::evaluate_string(class c_cui_component const *, long, wchar_t *, unsigned int);
// public: void c_cui_render_context::add_resource(void (*)(void *), void *) const;
// public: void c_cui_render_context::render_begin_container(long) const;
// public: void c_cui_render_context::render_end_container(long) const;
// public: void c_cui_render_context::render_textured_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, union real_rectangle2d const *) const;
// protected: union argb_color c_cui_render_context::get_final_color(union argb_color const *) const;
// public: void c_cui_render_buffer::end_command(void);
// public: void c_cui_render_buffer_page::end_command(void);
// public: void c_cui_render_context::render_simple_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, wchar_t const *) const;
// unsigned int cui_buffer_get_length_encoded_wchar_string_size(unsigned int);
// unsigned int cui_buffer_get_padded_size(unsigned int);
// public: void c_cui_render_buffer::write_string(wchar_t const *, unsigned int);
// public: void c_cui_render_buffer_page::write_string(wchar_t const *, unsigned int);
// void cui_buffer_write_length_encoded_wchar_string(unsigned char **, unsigned int *, wchar_t const *, unsigned int);
// public: void c_cui_render_context::render_complex_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, enum e_text_justification, enum e_text_drop_shadow_style, union argb_color const *, bool, bool, union real_point2d const *, float, float, wchar_t const *) const;
// public: void c_cui_render_context::render_debug_text(union real_rectangle2d const *, union argb_color const *, char const *) const;
// unsigned int cui_buffer_get_length_encoded_char_string_size(unsigned int);
// public: void c_cui_render_buffer::write_string(char const *, unsigned int);
// public: void c_cui_render_buffer_page::write_string(char const *, unsigned int);
// void cui_buffer_write_length_encoded_char_string(unsigned char **, unsigned int *, char const *, unsigned int);
// public: void c_cui_render_context::render_debug_rect(union real_rectangle2d const *, union argb_color const *) const;
// public: void c_cui_render_context::render_explicitly_shaded_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, class c_rasterizer_texture_ref, union real_rectangle2d const *, long, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const;
// unsigned int get_explicit_shader_constant_list_size(class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *);
// public: void c_cui_render_context::begin_explicit_shader(union real_rectangle2d const *, union argb_color const *, long, class c_rasterizer_texture_ref, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const;
// public: void c_cui_render_context::end_explicit_shader(void) const;
// public: void c_cui_render_context::render_texture_camera(union real_rectangle2d const *, union argb_color const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long, struct s_emblem_info const *) const;
// public: void c_cui_render_context::render_explicitly_shaded_texture_camera(union real_rectangle2d const *, union argb_color const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long, struct s_emblem_info const *, long, class c_rasterizer_texture_ref, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const;
// public: void c_cui_render_context::render_texture_camera_snapshot(union real_rectangle2d const *, union argb_color const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long, struct s_emblem_info const *, class c_custom_bitmap *) const;
// public: void c_cui_render_context::render_emblem(union real_rectangle2d const *, long, long, union argb_color const *, union argb_color const *, union argb_color const *, class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>, union real_rectangle2d const *) const;
// public: void c_cui_render_context::render_custom_bitmap(union real_rectangle2d const *, union argb_color const *, class c_custom_bitmap *, union real_rectangle2d const *) const;
// public: void c_cui_render_context::render_explicitly_shaded_custom_bitmap(union real_rectangle2d const *, union argb_color const *, class c_custom_bitmap *, class c_rasterizer_texture_ref, union real_rectangle2d const *, long, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const;
// public: void c_cui_render_context::render_background_blur(union real_rectangle2d const *, float, float) const;
// private: void c_cui_render_context::begin_screen(bool) const;
// private: void c_cui_render_context::end_screen(void) const;
// public: void c_cui_render_context::push_model_view_matrix(void) const;
// public: void c_cui_render_context::clear_model_view_matrix(void) const;
// public: void c_cui_render_context::load_model_view_matrix(struct real_matrix4x3const *) const;
// public: void c_cui_render_context::load_2d_camera_model_view_matrix(void) const;
// public: void c_cui_render_context::multiply_model_view_matrix(struct real_matrix4x3const *) const;
// public: void c_cui_render_context::translate_model_view_matrix(union real_point3d const *) const;
// public: void c_cui_render_context::pop_model_view_matrix(void) const;
// public: void c_cui_render_context::push_projection_matrix(void) const;
// public: void c_cui_render_context::load_orthographic_projection_matrix(void) const;
// public: void c_cui_render_context::pop_projection_matrix(void) const;
// void write_empty_command(class c_cui_render_buffer *, enum e_cui_render_command_type);
// void write_matrix_command(class c_cui_render_buffer *, enum e_cui_render_command_type, struct real_matrix4x3const *);
// void write_point_command(class c_cui_render_buffer *, enum e_cui_render_command_type, union real_point3d const *);
// void write_explicit_shader_constant_list(class c_cui_render_buffer *, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *);
// void write_debug_widget_name_command(class c_cui_render_buffer *, enum e_cui_render_command_type, long);
// void release_custom_bitmap_resource(void *);
// public: class c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_text_justification);
// public: class c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_text_drop_shadow_style);
// public: long c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::count(void) const;
// public: struct s_cui_render_explicit_shader_constant const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::get_element(long) const;
// public: struct s_cui_render_explicit_shader_constant const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::begin(void) const;
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::valid_index(long) const;
// public: struct s_cui_render_explicit_shader_constant const * c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void) const;
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> >::get_super_class(void) const;
// public: struct s_cui_render_explicit_shader_constant const * s_static_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void) const;
// void cui_buffer_write<unsigned int>(unsigned char **, unsigned int *, unsigned int const &);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_textured_quad_command>(struct s_cui_render_textured_quad_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_simple_text_command>(struct s_cui_render_simple_text_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_complex_text_command>(struct s_cui_render_complex_text_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_debug_text_command>(struct s_cui_render_debug_text_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_debug_rect_command>(struct s_cui_render_debug_rect_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_explicitly_shaded_quad_command>(struct s_cui_render_explicitly_shaded_quad_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_begin_explicit_shader_command>(struct s_cui_render_begin_explicit_shader_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_texture_camera_command>(struct s_cui_render_texture_camera_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(struct s_cui_render_explicitly_shaded_texture_camera_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_texture_camera_snapshot_command>(struct s_cui_render_texture_camera_snapshot_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_emblem_command>(struct s_cui_render_emblem_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_custom_bitmap_command>(struct s_cui_render_custom_bitmap_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(struct s_cui_render_explicitly_shaded_custom_bitmap_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_background_blur_command>(struct s_cui_render_background_blur_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_begin_screen_command>(struct s_cui_render_begin_screen_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_matrix_command>(struct s_cui_render_matrix_command **);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_point_command>(struct s_cui_render_point_command **);
// public: void c_cui_render_buffer::write<unsigned int>(unsigned int const &);
// public: void c_cui_render_buffer::write<struct s_cui_render_explicit_shader_constant>(struct s_cui_render_explicit_shader_constant const *, unsigned int);
// public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_debug_widget_name_command>(struct s_cui_render_debug_widget_name_command **);
// void cui_buffer_get_write_ptr<unsigned int>(unsigned char **, unsigned int *, unsigned int **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_textured_quad_command>(struct s_cui_render_textured_quad_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_simple_text_command>(struct s_cui_render_simple_text_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_complex_text_command>(struct s_cui_render_complex_text_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_debug_text_command>(struct s_cui_render_debug_text_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_debug_rect_command>(struct s_cui_render_debug_rect_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_explicitly_shaded_quad_command>(struct s_cui_render_explicitly_shaded_quad_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_begin_explicit_shader_command>(struct s_cui_render_begin_explicit_shader_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_texture_camera_command>(struct s_cui_render_texture_camera_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(struct s_cui_render_explicitly_shaded_texture_camera_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_texture_camera_snapshot_command>(struct s_cui_render_texture_camera_snapshot_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_emblem_command>(struct s_cui_render_emblem_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_custom_bitmap_command>(struct s_cui_render_custom_bitmap_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(struct s_cui_render_explicitly_shaded_custom_bitmap_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_background_blur_command>(struct s_cui_render_background_blur_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_begin_screen_command>(struct s_cui_render_begin_screen_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_matrix_command>(struct s_cui_render_matrix_command **);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_point_command>(struct s_cui_render_point_command **);
// public: void c_cui_render_buffer_page::write<unsigned int>(unsigned int const &);
// public: void c_cui_render_buffer_page::write<struct s_cui_render_explicit_shader_constant>(struct s_cui_render_explicit_shader_constant const *, unsigned int);
// public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_debug_widget_name_command>(struct s_cui_render_debug_widget_name_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_textured_quad_command>(unsigned char **, unsigned int *, struct s_cui_render_textured_quad_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_simple_text_command>(unsigned char **, unsigned int *, struct s_cui_render_simple_text_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_complex_text_command>(unsigned char **, unsigned int *, struct s_cui_render_complex_text_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_debug_text_command>(unsigned char **, unsigned int *, struct s_cui_render_debug_text_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_debug_rect_command>(unsigned char **, unsigned int *, struct s_cui_render_debug_rect_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_explicitly_shaded_quad_command>(unsigned char **, unsigned int *, struct s_cui_render_explicitly_shaded_quad_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_begin_explicit_shader_command>(unsigned char **, unsigned int *, struct s_cui_render_begin_explicit_shader_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_texture_camera_command>(unsigned char **, unsigned int *, struct s_cui_render_texture_camera_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(unsigned char **, unsigned int *, struct s_cui_render_explicitly_shaded_texture_camera_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_texture_camera_snapshot_command>(unsigned char **, unsigned int *, struct s_cui_render_texture_camera_snapshot_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_emblem_command>(unsigned char **, unsigned int *, struct s_cui_render_emblem_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_custom_bitmap_command>(unsigned char **, unsigned int *, struct s_cui_render_custom_bitmap_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(unsigned char **, unsigned int *, struct s_cui_render_explicitly_shaded_custom_bitmap_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_background_blur_command>(unsigned char **, unsigned int *, struct s_cui_render_background_blur_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_begin_screen_command>(unsigned char **, unsigned int *, struct s_cui_render_begin_screen_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_matrix_command>(unsigned char **, unsigned int *, struct s_cui_render_matrix_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_point_command>(unsigned char **, unsigned int *, struct s_cui_render_point_command **);
// void cui_buffer_write<struct s_cui_render_explicit_shader_constant>(unsigned char **, unsigned int *, struct s_cui_render_explicit_shader_constant const *, unsigned int);
// void cui_buffer_get_write_ptr<struct s_cui_render_debug_widget_name_command>(unsigned char **, unsigned int *, struct s_cui_render_debug_widget_name_command **);
// void cui_buffer_get_write_ptr<struct s_cui_render_explicit_shader_constant>(unsigned char **, unsigned int *, struct s_cui_render_explicit_shader_constant **, unsigned int);

//public: c_cui_render_context::c_cui_render_context(class c_cui_screen_widget *, class c_cui_render_buffer *)
//{
//    mangled_ppc("??0c_cui_render_context@@QAA@PAVc_cui_screen_widget@@PAVc_cui_render_buffer@@@Z");
//};

//public: bool c_cui_render_context::evaluate_string(class c_cui_component const *, long, wchar_t *, unsigned int)
//{
//    mangled_ppc("?evaluate_string@c_cui_render_context@@QAA_NPBVc_cui_component@@JPA_WI@Z");
//};

//public: void c_cui_render_context::add_resource(void (*)(void *), void *) const
//{
//    mangled_ppc("?add_resource@c_cui_render_context@@QBAXP6AXPAX@Z0@Z");
//};

//public: void c_cui_render_context::render_begin_container(long) const
//{
//    mangled_ppc("?render_begin_container@c_cui_render_context@@QBAXJ@Z");
//};

//public: void c_cui_render_context::render_end_container(long) const
//{
//    mangled_ppc("?render_end_container@c_cui_render_context@@QBAXJ@Z");
//};

//public: void c_cui_render_context::render_textured_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, union real_rectangle2d const *) const
//{
//    mangled_ppc("?render_textured_quad@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@Vc_rasterizer_texture_ref@@0@Z");
//};

//protected: union argb_color c_cui_render_context::get_final_color(union argb_color const *) const
//{
//    mangled_ppc("?get_final_color@c_cui_render_context@@IBA?ATargb_color@@PBT2@@Z");
//};

//public: void c_cui_render_buffer::end_command(void)
//{
//    mangled_ppc("?end_command@c_cui_render_buffer@@QAAXXZ");
//};

//public: void c_cui_render_buffer_page::end_command(void)
//{
//    mangled_ppc("?end_command@c_cui_render_buffer_page@@QAAXXZ");
//};

//public: void c_cui_render_context::render_simple_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, wchar_t const *) const
//{
//    mangled_ppc("?render_simple_text@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@W4e_font_id@@PB_W@Z");
//};

//unsigned int cui_buffer_get_length_encoded_wchar_string_size(unsigned int)
//{
//    mangled_ppc("?cui_buffer_get_length_encoded_wchar_string_size@@YAII@Z");
//};

//unsigned int cui_buffer_get_padded_size(unsigned int)
//{
//    mangled_ppc("?cui_buffer_get_padded_size@@YAII@Z");
//};

//public: void c_cui_render_buffer::write_string(wchar_t const *, unsigned int)
//{
//    mangled_ppc("?write_string@c_cui_render_buffer@@QAAXPB_WI@Z");
//};

//public: void c_cui_render_buffer_page::write_string(wchar_t const *, unsigned int)
//{
//    mangled_ppc("?write_string@c_cui_render_buffer_page@@QAAXPB_WI@Z");
//};

//void cui_buffer_write_length_encoded_wchar_string(unsigned char **, unsigned int *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("?cui_buffer_write_length_encoded_wchar_string@@YAXPAPAEPAIPB_WI@Z");
//};

//public: void c_cui_render_context::render_complex_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, enum e_text_justification, enum e_text_drop_shadow_style, union argb_color const *, bool, bool, union real_point2d const *, float, float, wchar_t const *) const
//{
//    mangled_ppc("?render_complex_text@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@W4e_font_id@@W4e_text_justification@@W4e_text_drop_shadow_style@@1_N5PBTreal_point2d@@MMPB_W@Z");
//};

//public: void c_cui_render_context::render_debug_text(union real_rectangle2d const *, union argb_color const *, char const *) const
//{
//    mangled_ppc("?render_debug_text@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@PBD@Z");
//};

//unsigned int cui_buffer_get_length_encoded_char_string_size(unsigned int)
//{
//    mangled_ppc("?cui_buffer_get_length_encoded_char_string_size@@YAII@Z");
//};

//public: void c_cui_render_buffer::write_string(char const *, unsigned int)
//{
//    mangled_ppc("?write_string@c_cui_render_buffer@@QAAXPBDI@Z");
//};

//public: void c_cui_render_buffer_page::write_string(char const *, unsigned int)
//{
//    mangled_ppc("?write_string@c_cui_render_buffer_page@@QAAXPBDI@Z");
//};

//void cui_buffer_write_length_encoded_char_string(unsigned char **, unsigned int *, char const *, unsigned int)
//{
//    mangled_ppc("?cui_buffer_write_length_encoded_char_string@@YAXPAPAEPAIPBDI@Z");
//};

//public: void c_cui_render_context::render_debug_rect(union real_rectangle2d const *, union argb_color const *) const
//{
//    mangled_ppc("?render_debug_rect@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@@Z");
//};

//public: void c_cui_render_context::render_explicitly_shaded_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, class c_rasterizer_texture_ref, union real_rectangle2d const *, long, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const
//{
//    mangled_ppc("?render_explicitly_shaded_quad@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@Vc_rasterizer_texture_ref@@20JPBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//unsigned int get_explicit_shader_constant_list_size(class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *)
//{
//    mangled_ppc("?get_explicit_shader_constant_list_size@@YAIPBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//public: void c_cui_render_context::begin_explicit_shader(union real_rectangle2d const *, union argb_color const *, long, class c_rasterizer_texture_ref, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const
//{
//    mangled_ppc("?begin_explicit_shader@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@JVc_rasterizer_texture_ref@@PBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//public: void c_cui_render_context::end_explicit_shader(void) const
//{
//    mangled_ppc("?end_explicit_shader@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::render_texture_camera(union real_rectangle2d const *, union argb_color const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long, struct s_emblem_info const *) const
//{
//    mangled_ppc("?render_texture_camera@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@PBTreal_point3d@@PBTvector3d@@3MMMMMMMKPBUs_emblem_info@@@Z");
//};

//public: void c_cui_render_context::render_explicitly_shaded_texture_camera(union real_rectangle2d const *, union argb_color const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long, struct s_emblem_info const *, long, class c_rasterizer_texture_ref, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const
//{
//    mangled_ppc("?render_explicitly_shaded_texture_camera@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@PBTreal_point3d@@PBTvector3d@@3MMMMMMMKPBUs_emblem_info@@JVc_rasterizer_texture_ref@@PBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//public: void c_cui_render_context::render_texture_camera_snapshot(union real_rectangle2d const *, union argb_color const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long, struct s_emblem_info const *, class c_custom_bitmap *) const
//{
//    mangled_ppc("?render_texture_camera_snapshot@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@PBTreal_point3d@@PBTvector3d@@3MMMMMMMKPBUs_emblem_info@@PAVc_custom_bitmap@@@Z");
//};

//public: void c_cui_render_context::render_emblem(union real_rectangle2d const *, long, long, union argb_color const *, union argb_color const *, union argb_color const *, class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>, union real_rectangle2d const *) const
//{
//    mangled_ppc("?render_emblem@c_cui_render_context@@QBAXPBTreal_rectangle2d@@JJPBTargb_color@@11V?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@0@Z");
//};

//public: void c_cui_render_context::render_custom_bitmap(union real_rectangle2d const *, union argb_color const *, class c_custom_bitmap *, union real_rectangle2d const *) const
//{
//    mangled_ppc("?render_custom_bitmap@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@PAVc_custom_bitmap@@0@Z");
//};

//public: void c_cui_render_context::render_explicitly_shaded_custom_bitmap(union real_rectangle2d const *, union argb_color const *, class c_custom_bitmap *, class c_rasterizer_texture_ref, union real_rectangle2d const *, long, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *) const
//{
//    mangled_ppc("?render_explicitly_shaded_custom_bitmap@c_cui_render_context@@QBAXPBTreal_rectangle2d@@PBTargb_color@@PAVc_custom_bitmap@@Vc_rasterizer_texture_ref@@0JPBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//public: void c_cui_render_context::render_background_blur(union real_rectangle2d const *, float, float) const
//{
//    mangled_ppc("?render_background_blur@c_cui_render_context@@QBAXPBTreal_rectangle2d@@MM@Z");
//};

//private: void c_cui_render_context::begin_screen(bool) const
//{
//    mangled_ppc("?begin_screen@c_cui_render_context@@ABAX_N@Z");
//};

//private: void c_cui_render_context::end_screen(void) const
//{
//    mangled_ppc("?end_screen@c_cui_render_context@@ABAXXZ");
//};

//public: void c_cui_render_context::push_model_view_matrix(void) const
//{
//    mangled_ppc("?push_model_view_matrix@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::clear_model_view_matrix(void) const
//{
//    mangled_ppc("?clear_model_view_matrix@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::load_model_view_matrix(struct real_matrix4x3const *) const
//{
//    mangled_ppc("?load_model_view_matrix@c_cui_render_context@@QBAXPBUreal_matrix4x3@@@Z");
//};

//public: void c_cui_render_context::load_2d_camera_model_view_matrix(void) const
//{
//    mangled_ppc("?load_2d_camera_model_view_matrix@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::multiply_model_view_matrix(struct real_matrix4x3const *) const
//{
//    mangled_ppc("?multiply_model_view_matrix@c_cui_render_context@@QBAXPBUreal_matrix4x3@@@Z");
//};

//public: void c_cui_render_context::translate_model_view_matrix(union real_point3d const *) const
//{
//    mangled_ppc("?translate_model_view_matrix@c_cui_render_context@@QBAXPBTreal_point3d@@@Z");
//};

//public: void c_cui_render_context::pop_model_view_matrix(void) const
//{
//    mangled_ppc("?pop_model_view_matrix@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::push_projection_matrix(void) const
//{
//    mangled_ppc("?push_projection_matrix@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::load_orthographic_projection_matrix(void) const
//{
//    mangled_ppc("?load_orthographic_projection_matrix@c_cui_render_context@@QBAXXZ");
//};

//public: void c_cui_render_context::pop_projection_matrix(void) const
//{
//    mangled_ppc("?pop_projection_matrix@c_cui_render_context@@QBAXXZ");
//};

//void write_empty_command(class c_cui_render_buffer *, enum e_cui_render_command_type)
//{
//    mangled_ppc("?write_empty_command@@YAXPAVc_cui_render_buffer@@W4e_cui_render_command_type@@@Z");
//};

//void write_matrix_command(class c_cui_render_buffer *, enum e_cui_render_command_type, struct real_matrix4x3const *)
//{
//    mangled_ppc("?write_matrix_command@@YAXPAVc_cui_render_buffer@@W4e_cui_render_command_type@@PBUreal_matrix4x3@@@Z");
//};

//void write_point_command(class c_cui_render_buffer *, enum e_cui_render_command_type, union real_point3d const *)
//{
//    mangled_ppc("?write_point_command@@YAXPAVc_cui_render_buffer@@W4e_cui_render_command_type@@PBTreal_point3d@@@Z");
//};

//void write_explicit_shader_constant_list(class c_cui_render_buffer *, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *)
//{
//    mangled_ppc("?write_explicit_shader_constant_list@@YAXPAVc_cui_render_buffer@@PBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//void write_debug_widget_name_command(class c_cui_render_buffer *, enum e_cui_render_command_type, long)
//{
//    mangled_ppc("?write_debug_widget_name_command@@YAXPAVc_cui_render_buffer@@W4e_cui_render_command_type@@J@Z");
//};

//void release_custom_bitmap_resource(void *)
//{
//    mangled_ppc("?release_custom_bitmap_resource@@YAXPAX@Z");
//};

//public: class c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_text_justification)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_text_justification@@@Z");
//};

//public: class c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_text_drop_shadow_style)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_text_drop_shadow_style@@@Z");
//};

//public: long c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@QBAJXZ");
//};

//public: struct s_cui_render_explicit_shader_constant const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QBAPBUs_cui_render_explicit_shader_constant@@J@Z");
//};

//public: struct s_cui_render_explicit_shader_constant const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QBAPBUs_cui_render_explicit_shader_constant@@XZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QBA_NJ@Z");
//};

//public: struct s_cui_render_explicit_shader_constant const * c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@QBAPBUs_cui_render_explicit_shader_constant@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@XZ");
//};

//public: struct s_cui_render_explicit_shader_constant const * s_static_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_cui_render_explicit_shader_constant@@$0O@@@QBAPBUs_cui_render_explicit_shader_constant@@XZ");
//};

//void cui_buffer_write<unsigned int>(unsigned char **, unsigned int *, unsigned int const &)
//{
//    mangled_ppc("??$cui_buffer_write@I@@YAXPAPAEPAIABI@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_textured_quad_command>(struct s_cui_render_textured_quad_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_textured_quad_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_textured_quad_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_simple_text_command>(struct s_cui_render_simple_text_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_simple_text_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_simple_text_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_complex_text_command>(struct s_cui_render_complex_text_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_complex_text_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_complex_text_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_debug_text_command>(struct s_cui_render_debug_text_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_debug_text_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_debug_text_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_debug_rect_command>(struct s_cui_render_debug_rect_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_debug_rect_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_debug_rect_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_explicitly_shaded_quad_command>(struct s_cui_render_explicitly_shaded_quad_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_explicitly_shaded_quad_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_explicitly_shaded_quad_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_begin_explicit_shader_command>(struct s_cui_render_begin_explicit_shader_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_begin_explicit_shader_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_begin_explicit_shader_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_texture_camera_command>(struct s_cui_render_texture_camera_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_texture_camera_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_texture_camera_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(struct s_cui_render_explicitly_shaded_texture_camera_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_explicitly_shaded_texture_camera_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_explicitly_shaded_texture_camera_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_texture_camera_snapshot_command>(struct s_cui_render_texture_camera_snapshot_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_texture_camera_snapshot_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_texture_camera_snapshot_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_emblem_command>(struct s_cui_render_emblem_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_emblem_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_emblem_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_custom_bitmap_command>(struct s_cui_render_custom_bitmap_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_custom_bitmap_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_custom_bitmap_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(struct s_cui_render_explicitly_shaded_custom_bitmap_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_explicitly_shaded_custom_bitmap_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_explicitly_shaded_custom_bitmap_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_background_blur_command>(struct s_cui_render_background_blur_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_background_blur_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_background_blur_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_begin_screen_command>(struct s_cui_render_begin_screen_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_begin_screen_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_begin_screen_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_matrix_command>(struct s_cui_render_matrix_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_matrix_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_matrix_command@@@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_point_command>(struct s_cui_render_point_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_point_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_point_command@@@Z");
//};

//public: void c_cui_render_buffer::write<unsigned int>(unsigned int const &)
//{
//    mangled_ppc("??$write@I@c_cui_render_buffer@@QAAXABI@Z");
//};

//public: void c_cui_render_buffer::write<struct s_cui_render_explicit_shader_constant>(struct s_cui_render_explicit_shader_constant const *, unsigned int)
//{
//    mangled_ppc("??$write@Us_cui_render_explicit_shader_constant@@@c_cui_render_buffer@@QAAXPBUs_cui_render_explicit_shader_constant@@I@Z");
//};

//public: void c_cui_render_buffer::get_write_ptr<struct s_cui_render_debug_widget_name_command>(struct s_cui_render_debug_widget_name_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_debug_widget_name_command@@@c_cui_render_buffer@@QAAXPAPAUs_cui_render_debug_widget_name_command@@@Z");
//};

//void cui_buffer_get_write_ptr<unsigned int>(unsigned char **, unsigned int *, unsigned int **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@I@@YAXPAPAEPAIPAPAI@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_textured_quad_command>(struct s_cui_render_textured_quad_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_textured_quad_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_textured_quad_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_simple_text_command>(struct s_cui_render_simple_text_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_simple_text_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_simple_text_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_complex_text_command>(struct s_cui_render_complex_text_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_complex_text_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_complex_text_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_debug_text_command>(struct s_cui_render_debug_text_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_debug_text_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_debug_text_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_debug_rect_command>(struct s_cui_render_debug_rect_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_debug_rect_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_debug_rect_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_explicitly_shaded_quad_command>(struct s_cui_render_explicitly_shaded_quad_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_explicitly_shaded_quad_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_explicitly_shaded_quad_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_begin_explicit_shader_command>(struct s_cui_render_begin_explicit_shader_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_begin_explicit_shader_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_begin_explicit_shader_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_texture_camera_command>(struct s_cui_render_texture_camera_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_texture_camera_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_texture_camera_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(struct s_cui_render_explicitly_shaded_texture_camera_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_explicitly_shaded_texture_camera_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_explicitly_shaded_texture_camera_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_texture_camera_snapshot_command>(struct s_cui_render_texture_camera_snapshot_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_texture_camera_snapshot_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_texture_camera_snapshot_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_emblem_command>(struct s_cui_render_emblem_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_emblem_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_emblem_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_custom_bitmap_command>(struct s_cui_render_custom_bitmap_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_custom_bitmap_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_custom_bitmap_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(struct s_cui_render_explicitly_shaded_custom_bitmap_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_explicitly_shaded_custom_bitmap_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_explicitly_shaded_custom_bitmap_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_background_blur_command>(struct s_cui_render_background_blur_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_background_blur_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_background_blur_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_begin_screen_command>(struct s_cui_render_begin_screen_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_begin_screen_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_begin_screen_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_matrix_command>(struct s_cui_render_matrix_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_matrix_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_matrix_command@@@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_point_command>(struct s_cui_render_point_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_point_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_point_command@@@Z");
//};

//public: void c_cui_render_buffer_page::write<unsigned int>(unsigned int const &)
//{
//    mangled_ppc("??$write@I@c_cui_render_buffer_page@@QAAXABI@Z");
//};

//public: void c_cui_render_buffer_page::write<struct s_cui_render_explicit_shader_constant>(struct s_cui_render_explicit_shader_constant const *, unsigned int)
//{
//    mangled_ppc("??$write@Us_cui_render_explicit_shader_constant@@@c_cui_render_buffer_page@@QAAXPBUs_cui_render_explicit_shader_constant@@I@Z");
//};

//public: void c_cui_render_buffer_page::get_write_ptr<struct s_cui_render_debug_widget_name_command>(struct s_cui_render_debug_widget_name_command **)
//{
//    mangled_ppc("??$get_write_ptr@Us_cui_render_debug_widget_name_command@@@c_cui_render_buffer_page@@QAAXPAPAUs_cui_render_debug_widget_name_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_textured_quad_command>(unsigned char **, unsigned int *, struct s_cui_render_textured_quad_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_textured_quad_command@@@@YAXPAPAEPAIPAPAUs_cui_render_textured_quad_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_simple_text_command>(unsigned char **, unsigned int *, struct s_cui_render_simple_text_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_simple_text_command@@@@YAXPAPAEPAIPAPAUs_cui_render_simple_text_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_complex_text_command>(unsigned char **, unsigned int *, struct s_cui_render_complex_text_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_complex_text_command@@@@YAXPAPAEPAIPAPAUs_cui_render_complex_text_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_debug_text_command>(unsigned char **, unsigned int *, struct s_cui_render_debug_text_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_debug_text_command@@@@YAXPAPAEPAIPAPAUs_cui_render_debug_text_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_debug_rect_command>(unsigned char **, unsigned int *, struct s_cui_render_debug_rect_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_debug_rect_command@@@@YAXPAPAEPAIPAPAUs_cui_render_debug_rect_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_explicitly_shaded_quad_command>(unsigned char **, unsigned int *, struct s_cui_render_explicitly_shaded_quad_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_explicitly_shaded_quad_command@@@@YAXPAPAEPAIPAPAUs_cui_render_explicitly_shaded_quad_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_begin_explicit_shader_command>(unsigned char **, unsigned int *, struct s_cui_render_begin_explicit_shader_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_begin_explicit_shader_command@@@@YAXPAPAEPAIPAPAUs_cui_render_begin_explicit_shader_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_texture_camera_command>(unsigned char **, unsigned int *, struct s_cui_render_texture_camera_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_texture_camera_command@@@@YAXPAPAEPAIPAPAUs_cui_render_texture_camera_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(unsigned char **, unsigned int *, struct s_cui_render_explicitly_shaded_texture_camera_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_explicitly_shaded_texture_camera_command@@@@YAXPAPAEPAIPAPAUs_cui_render_explicitly_shaded_texture_camera_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_texture_camera_snapshot_command>(unsigned char **, unsigned int *, struct s_cui_render_texture_camera_snapshot_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_texture_camera_snapshot_command@@@@YAXPAPAEPAIPAPAUs_cui_render_texture_camera_snapshot_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_emblem_command>(unsigned char **, unsigned int *, struct s_cui_render_emblem_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_emblem_command@@@@YAXPAPAEPAIPAPAUs_cui_render_emblem_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_custom_bitmap_command>(unsigned char **, unsigned int *, struct s_cui_render_custom_bitmap_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_custom_bitmap_command@@@@YAXPAPAEPAIPAPAUs_cui_render_custom_bitmap_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(unsigned char **, unsigned int *, struct s_cui_render_explicitly_shaded_custom_bitmap_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_explicitly_shaded_custom_bitmap_command@@@@YAXPAPAEPAIPAPAUs_cui_render_explicitly_shaded_custom_bitmap_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_background_blur_command>(unsigned char **, unsigned int *, struct s_cui_render_background_blur_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_background_blur_command@@@@YAXPAPAEPAIPAPAUs_cui_render_background_blur_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_begin_screen_command>(unsigned char **, unsigned int *, struct s_cui_render_begin_screen_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_begin_screen_command@@@@YAXPAPAEPAIPAPAUs_cui_render_begin_screen_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_matrix_command>(unsigned char **, unsigned int *, struct s_cui_render_matrix_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_matrix_command@@@@YAXPAPAEPAIPAPAUs_cui_render_matrix_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_point_command>(unsigned char **, unsigned int *, struct s_cui_render_point_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_point_command@@@@YAXPAPAEPAIPAPAUs_cui_render_point_command@@@Z");
//};

//void cui_buffer_write<struct s_cui_render_explicit_shader_constant>(unsigned char **, unsigned int *, struct s_cui_render_explicit_shader_constant const *, unsigned int)
//{
//    mangled_ppc("??$cui_buffer_write@Us_cui_render_explicit_shader_constant@@@@YAXPAPAEPAIPBUs_cui_render_explicit_shader_constant@@I@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_debug_widget_name_command>(unsigned char **, unsigned int *, struct s_cui_render_debug_widget_name_command **)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_debug_widget_name_command@@@@YAXPAPAEPAIPAPAUs_cui_render_debug_widget_name_command@@@Z");
//};

//void cui_buffer_get_write_ptr<struct s_cui_render_explicit_shader_constant>(unsigned char **, unsigned int *, struct s_cui_render_explicit_shader_constant **, unsigned int)
//{
//    mangled_ppc("??$cui_buffer_get_write_ptr@Us_cui_render_explicit_shader_constant@@@@YAXPAPAEPAIPAPAUs_cui_render_explicit_shader_constant@@I@Z");
//};

