/* ---------- headers */

#include "omaha\interface\cui\cui_render_renderer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: bool c_cui_render_command_renderer::render(struct s_cui_render_command_header const *);
// void const * cui_render_command_get_data(struct s_cui_render_command_header const *);
// void cui_buffer_read_length_encoded_wchar_string(unsigned char const **, unsigned int *, wchar_t const **, unsigned int *);
// void cui_buffer_read_length_encoded_char_string(unsigned char const **, unsigned int *, char const **, unsigned int *);
// public: class c_rasterizer_texture_ref c_custom_bitmap::get_texture_ref(void) const;
// public: void c_cui_render_command_renderer::push_model_view_matrix(void);
// public: void c_cui_render_command_renderer::clear_model_view_matrix(void);
// public: void c_cui_render_command_renderer::load_model_view_matrix(struct real_matrix4x3const *);
// public: void c_cui_render_command_renderer::load_default_camera_model_view_matrix(void);
// public: struct real_matrix4x3const * c_cui_render_view::get_default_camera_matrix(void) const;
// public: void c_cui_render_command_renderer::load_2d_camera_model_view_matrix(void);
// public: struct real_matrix4x3const * c_cui_render_view::get_2d_camera_matrix(void) const;
// public: void c_cui_render_command_renderer::load_3d_camera_model_view_matrix(void);
// public: struct real_matrix4x3const * c_cui_render_view::get_3d_camera_matrix(void) const;
// public: void c_cui_render_command_renderer::multiply_model_view_matrix(struct real_matrix4x3const *);
// public: void c_cui_render_command_renderer::translate_model_view_matrix(union real_point3d const *);
// public: void c_cui_render_command_renderer::pop_model_view_matrix(void);
// public: void c_cui_render_command_renderer::push_projection_matrix(void);
// public: void c_cui_render_command_renderer::load_default_projection_matrix(void);
// public: float const * c_cui_render_view::get_default_projection_matrix(void) const;
// public: void c_cui_render_command_renderer::load_perspective_projection_matrix(void);
// public: float const * c_cui_render_view::get_perspective_projection_matrix(void) const;
// public: void c_cui_render_command_renderer::load_orthographic_projection_matrix(void);
// public: float const * c_cui_render_view::get_orthographic_projection_matrix(void) const;
// public: void c_cui_render_command_renderer::pop_projection_matrix(void);
// public: c_cui_render_buffer_renderer::c_cui_render_buffer_renderer(class c_cui_render_views *, class c_cui_render_command_renderer *);
// public: class c_cui_render_buffer_iterator c_cui_render_buffer_renderer::render(enum e_surface, class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator);
// public: c_cui_render_buffer_iterator::c_cui_render_buffer_iterator(void);
// public: unsigned int c_cui_render_surface_allocator::get_surface_count(void) const;
// public: unsigned int c_cui_render_surface_allocator::get_texture_count(void) const;
// private: class c_cui_render_buffer_iterator c_cui_render_buffer_renderer::render(long, enum e_surface, class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator, union real_rectangle2d const *);
// public: struct s_cui_render_command_header const * c_cui_render_buffer_iterator::operator->(void) const;
// public: void const * c_cui_render_buffer_iterator::get_data(void) const;
// public: bool c_cui_render_buffer_iterator::operator!=(class c_cui_render_buffer_iterator const &) const;
// public: class c_cui_render_buffer_iterator & c_cui_render_buffer_iterator::operator++(void);
// private: void c_cui_render_buffer_iterator::read_page(class c_cui_render_buffer_page *);
// public: struct s_cui_render_command_header const * c_cui_render_buffer_iterator::get_header(void) const;
// public: void c_cui_render_surface_allocator::release_textures(unsigned int);
// public: class c_cui_render_view const * c_cui_render_command_renderer::get_view(void) const;
// public: void c_cui_render_command_renderer::set_view(class c_cui_render_view const *);
// public: class c_cui_render_view const * c_cui_render_views::get_window_view(void) const;
// public: class c_cui_render_view const * c_cui_render_views::get_offscreen_surface_view(void) const;
// public: bool c_custom_bitmap::is_ready(void) const;
// private: void c_cui_render_buffer_renderer::render_texture_camera(struct s_cui_render_texture_camera_command const *);
// public: void c_cui_render_surface_allocator::release_surfaces(unsigned int);
// private: void c_cui_render_buffer_renderer::render_texture_camera_snapshot(struct s_cui_render_texture_camera_snapshot_command const *);
// public: struct D3DTexture * c_custom_bitmap::get_texture(void);
// public: unsigned int c_custom_bitmap::get_width(void) const;
// public: unsigned int c_custom_bitmap_key::get_width(void) const;
// public: unsigned int c_custom_bitmap_size::get_width(void) const;
// public: unsigned int c_custom_bitmap::get_height(void) const;
// public: unsigned int c_custom_bitmap_key::get_height(void) const;
// public: unsigned int c_custom_bitmap_size::get_height(void) const;
// public: void c_custom_bitmap::set_ready(bool);
// private: void c_cui_render_buffer_renderer::render_background_blur(enum e_surface, struct s_cui_render_background_blur_command const *);
// private: void c_cui_render_buffer_renderer::set_render_target(enum e_surface, enum c_cui_render_buffer_renderer::e_render_target_type, union real_rectangle2d const *);
// private: void c_cui_render_buffer_renderer::allocate_and_resolve_texture(union real_rectangle2d const *);
// private: void c_cui_render_buffer_renderer::render_resolved_explicit_shader(long, struct s_cui_render_command_header const *);
// public: struct c_cui_render_surface_allocator::s_texture_allocation * c_cui_render_surface_allocator::get_texture(unsigned int);
// private: void c_cui_render_buffer_renderer::render_resolved_texture_camera(long, struct s_cui_render_command_header const *);
// private: void c_cui_render_buffer_renderer::render_explicitly_shaded_resolved_texture_camera(long, struct s_cui_render_command_header const *);
// private: void c_cui_render_buffer_renderer::render_resolved_background_blur(enum e_surface, struct s_cui_render_background_blur_command const *, long);
// void cui_render(enum e_surface, enum e_window_index, class c_cui_render_buffer *, bool);
// public: class c_cui_render_buffer_iterator c_cui_render_buffer::begin(void) const;
// public: c_cui_render_buffer_iterator::c_cui_render_buffer_iterator(class c_cui_render_buffer_page *);
// public: class c_cui_render_buffer_iterator c_cui_render_buffer::end(void) const;
// public: c_cui_render_command_renderer::c_cui_render_command_renderer(class c_cui_render_view const *);
// class c_cui_render_buffer_iterator find_end_explicit_shader(class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator);
// void get_resolve_rect(union real_rectangle2d const *, union short_rectangle2d *);
// void read_explicit_shader_constant_list(unsigned char const **, unsigned int *, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> *);
// class c_cui_render_buffer_iterator find_begin_screen(class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator);
// public: enum e_cui_render_command_type c_enum_no_init<enum e_cui_render_command_type, short, 0, 31, struct s_default_enum_string_resolver>::operator enum e_cui_render_command_type(void) const;
// public: bool c_enum_no_init<enum e_cui_render_command_type, short, 0, 31, struct s_default_enum_string_resolver>::operator==(enum e_cui_render_command_type) const;
// public: enum e_text_justification c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_text_justification(void) const;
// public: enum e_text_drop_shadow_style c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_text_drop_shadow_style(void) const;
// public: long c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::count(void) const;
// public: long c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::count(void) const;
// public: struct c_cui_render_surface_allocator::s_texture_allocation & c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::operator[](long);
// public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::empty(void) const;
// public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::full(void) const;
// public: long c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::top(void) const;
// public: long c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::push(void);
// public: void c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::pop(void);
// public: struct c_cui_render_command_renderer::s_projection_matrix & c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::operator[](long);
// public: c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>(void);
// public: bool c_static_stack<struct real_matrix4x3, 96>::empty(void) const;
// public: bool c_static_stack<struct real_matrix4x3, 96>::full(void) const;
// public: long c_static_stack<struct real_matrix4x3, 96>::top(void) const;
// public: long c_static_stack<struct real_matrix4x3, 96>::push(void);
// public: void c_static_stack<struct real_matrix4x3, 96>::pop(void);
// public: struct real_matrix4x3& c_static_stack<struct real_matrix4x3, 96>::operator[](long);
// public: c_static_stack<struct real_matrix4x3, 96>::c_static_stack<struct real_matrix4x3, 96>(void);
// public: struct s_cui_render_explicit_shader_constant & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::add_element(void);
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::valid(long) const;
// public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::valid(void) const;
// public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::valid(long) const;
// public: bool c_static_stack<struct real_matrix4x3, 96>::valid(void) const;
// public: bool c_static_stack<struct real_matrix4x3, 96>::valid(long) const;
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::new_element_index(void);
// public: struct s_cui_render_explicit_shader_constant * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::get_element(long);
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::valid(void) const;
// public: long c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::new_element_index(void);
// private: class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::get_super_class(void);
// public: struct s_cui_render_explicit_shader_constant * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::begin(void);
// public: struct s_cui_render_explicit_shader_constant * c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void);
// public: class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> >::get_super_class(void);
// public: struct s_cui_render_explicit_shader_constant * s_static_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void);
// void cui_buffer_read<unsigned int>(unsigned char const **, unsigned int *, unsigned int *);
// void cui_buffer_get_read_ptr<struct s_cui_render_simple_text_command>(unsigned char const **, unsigned int *, struct s_cui_render_simple_text_command const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_complex_text_command>(unsigned char const **, unsigned int *, struct s_cui_render_complex_text_command const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_debug_text_command>(unsigned char const **, unsigned int *, struct s_cui_render_debug_text_command const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_explicitly_shaded_quad_command>(unsigned char const **, unsigned int *, struct s_cui_render_explicitly_shaded_quad_command const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(unsigned char const **, unsigned int *, struct s_cui_render_explicitly_shaded_custom_bitmap_command const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_begin_explicit_shader_command>(unsigned char const **, unsigned int *, struct s_cui_render_begin_explicit_shader_command const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(unsigned char const **, unsigned int *, struct s_cui_render_explicitly_shaded_texture_camera_command const **);
// void cui_buffer_read<struct s_cui_render_explicit_shader_constant>(unsigned char const **, unsigned int *, struct s_cui_render_explicit_shader_constant *);
// public: static bool s_static_array<struct s_cui_render_explicit_shader_constant, 14>::valid<long>(long);
// void cui_buffer_get_read_ptr<unsigned int>(unsigned char const **, unsigned int *, unsigned int const **);
// void cui_buffer_get_read_ptr<struct s_cui_render_explicit_shader_constant>(unsigned char const **, unsigned int *, struct s_cui_render_explicit_shader_constant const **);

//public: bool c_cui_render_command_renderer::render(struct s_cui_render_command_header const *)
//{
//    mangled_ppc("?render@c_cui_render_command_renderer@@QAA_NPBUs_cui_render_command_header@@@Z");
//};

//void const * cui_render_command_get_data(struct s_cui_render_command_header const *)
//{
//    mangled_ppc("?cui_render_command_get_data@@YAPBXPBUs_cui_render_command_header@@@Z");
//};

//void cui_buffer_read_length_encoded_wchar_string(unsigned char const **, unsigned int *, wchar_t const **, unsigned int *)
//{
//    mangled_ppc("?cui_buffer_read_length_encoded_wchar_string@@YAXPAPBEPAIPAPB_W1@Z");
//};

//void cui_buffer_read_length_encoded_char_string(unsigned char const **, unsigned int *, char const **, unsigned int *)
//{
//    mangled_ppc("?cui_buffer_read_length_encoded_char_string@@YAXPAPBEPAIPAPBD1@Z");
//};

//public: class c_rasterizer_texture_ref c_custom_bitmap::get_texture_ref(void) const
//{
//    mangled_ppc("?get_texture_ref@c_custom_bitmap@@QBA?AVc_rasterizer_texture_ref@@XZ");
//};

//public: void c_cui_render_command_renderer::push_model_view_matrix(void)
//{
//    mangled_ppc("?push_model_view_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: void c_cui_render_command_renderer::clear_model_view_matrix(void)
//{
//    mangled_ppc("?clear_model_view_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: void c_cui_render_command_renderer::load_model_view_matrix(struct real_matrix4x3const *)
//{
//    mangled_ppc("?load_model_view_matrix@c_cui_render_command_renderer@@QAAXPBUreal_matrix4x3@@@Z");
//};

//public: void c_cui_render_command_renderer::load_default_camera_model_view_matrix(void)
//{
//    mangled_ppc("?load_default_camera_model_view_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: struct real_matrix4x3const * c_cui_render_view::get_default_camera_matrix(void) const
//{
//    mangled_ppc("?get_default_camera_matrix@c_cui_render_view@@QBAPBUreal_matrix4x3@@XZ");
//};

//public: void c_cui_render_command_renderer::load_2d_camera_model_view_matrix(void)
//{
//    mangled_ppc("?load_2d_camera_model_view_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: struct real_matrix4x3const * c_cui_render_view::get_2d_camera_matrix(void) const
//{
//    mangled_ppc("?get_2d_camera_matrix@c_cui_render_view@@QBAPBUreal_matrix4x3@@XZ");
//};

//public: void c_cui_render_command_renderer::load_3d_camera_model_view_matrix(void)
//{
//    mangled_ppc("?load_3d_camera_model_view_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: struct real_matrix4x3const * c_cui_render_view::get_3d_camera_matrix(void) const
//{
//    mangled_ppc("?get_3d_camera_matrix@c_cui_render_view@@QBAPBUreal_matrix4x3@@XZ");
//};

//public: void c_cui_render_command_renderer::multiply_model_view_matrix(struct real_matrix4x3const *)
//{
//    mangled_ppc("?multiply_model_view_matrix@c_cui_render_command_renderer@@QAAXPBUreal_matrix4x3@@@Z");
//};

//public: void c_cui_render_command_renderer::translate_model_view_matrix(union real_point3d const *)
//{
//    mangled_ppc("?translate_model_view_matrix@c_cui_render_command_renderer@@QAAXPBTreal_point3d@@@Z");
//};

//public: void c_cui_render_command_renderer::pop_model_view_matrix(void)
//{
//    mangled_ppc("?pop_model_view_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: void c_cui_render_command_renderer::push_projection_matrix(void)
//{
//    mangled_ppc("?push_projection_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: void c_cui_render_command_renderer::load_default_projection_matrix(void)
//{
//    mangled_ppc("?load_default_projection_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: float const * c_cui_render_view::get_default_projection_matrix(void) const
//{
//    mangled_ppc("?get_default_projection_matrix@c_cui_render_view@@QBAPBMXZ");
//};

//public: void c_cui_render_command_renderer::load_perspective_projection_matrix(void)
//{
//    mangled_ppc("?load_perspective_projection_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: float const * c_cui_render_view::get_perspective_projection_matrix(void) const
//{
//    mangled_ppc("?get_perspective_projection_matrix@c_cui_render_view@@QBAPBMXZ");
//};

//public: void c_cui_render_command_renderer::load_orthographic_projection_matrix(void)
//{
//    mangled_ppc("?load_orthographic_projection_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: float const * c_cui_render_view::get_orthographic_projection_matrix(void) const
//{
//    mangled_ppc("?get_orthographic_projection_matrix@c_cui_render_view@@QBAPBMXZ");
//};

//public: void c_cui_render_command_renderer::pop_projection_matrix(void)
//{
//    mangled_ppc("?pop_projection_matrix@c_cui_render_command_renderer@@QAAXXZ");
//};

//public: c_cui_render_buffer_renderer::c_cui_render_buffer_renderer(class c_cui_render_views *, class c_cui_render_command_renderer *)
//{
//    mangled_ppc("??0c_cui_render_buffer_renderer@@QAA@PAVc_cui_render_views@@PAVc_cui_render_command_renderer@@@Z");
//};

//public: class c_cui_render_buffer_iterator c_cui_render_buffer_renderer::render(enum e_surface, class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator)
//{
//    mangled_ppc("?render@c_cui_render_buffer_renderer@@QAA?AVc_cui_render_buffer_iterator@@W4e_surface@@V2@1@Z");
//};

//public: c_cui_render_buffer_iterator::c_cui_render_buffer_iterator(void)
//{
//    mangled_ppc("??0c_cui_render_buffer_iterator@@QAA@XZ");
//};

//public: unsigned int c_cui_render_surface_allocator::get_surface_count(void) const
//{
//    mangled_ppc("?get_surface_count@c_cui_render_surface_allocator@@QBAIXZ");
//};

//public: unsigned int c_cui_render_surface_allocator::get_texture_count(void) const
//{
//    mangled_ppc("?get_texture_count@c_cui_render_surface_allocator@@QBAIXZ");
//};

//private: class c_cui_render_buffer_iterator c_cui_render_buffer_renderer::render(long, enum e_surface, class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator, union real_rectangle2d const *)
//{
//    mangled_ppc("?render@c_cui_render_buffer_renderer@@AAA?AVc_cui_render_buffer_iterator@@JW4e_surface@@V2@1PBTreal_rectangle2d@@@Z");
//};

//public: struct s_cui_render_command_header const * c_cui_render_buffer_iterator::operator->(void) const
//{
//    mangled_ppc("??Cc_cui_render_buffer_iterator@@QBAPBUs_cui_render_command_header@@XZ");
//};

//public: void const * c_cui_render_buffer_iterator::get_data(void) const
//{
//    mangled_ppc("?get_data@c_cui_render_buffer_iterator@@QBAPBXXZ");
//};

//public: bool c_cui_render_buffer_iterator::operator!=(class c_cui_render_buffer_iterator const &) const
//{
//    mangled_ppc("??9c_cui_render_buffer_iterator@@QBA_NABV0@@Z");
//};

//public: class c_cui_render_buffer_iterator & c_cui_render_buffer_iterator::operator++(void)
//{
//    mangled_ppc("??Ec_cui_render_buffer_iterator@@QAAAAV0@XZ");
//};

//private: void c_cui_render_buffer_iterator::read_page(class c_cui_render_buffer_page *)
//{
//    mangled_ppc("?read_page@c_cui_render_buffer_iterator@@AAAXPAVc_cui_render_buffer_page@@@Z");
//};

//public: struct s_cui_render_command_header const * c_cui_render_buffer_iterator::get_header(void) const
//{
//    mangled_ppc("?get_header@c_cui_render_buffer_iterator@@QBAPBUs_cui_render_command_header@@XZ");
//};

//public: void c_cui_render_surface_allocator::release_textures(unsigned int)
//{
//    mangled_ppc("?release_textures@c_cui_render_surface_allocator@@QAAXI@Z");
//};

//public: class c_cui_render_view const * c_cui_render_command_renderer::get_view(void) const
//{
//    mangled_ppc("?get_view@c_cui_render_command_renderer@@QBAPBVc_cui_render_view@@XZ");
//};

//public: void c_cui_render_command_renderer::set_view(class c_cui_render_view const *)
//{
//    mangled_ppc("?set_view@c_cui_render_command_renderer@@QAAXPBVc_cui_render_view@@@Z");
//};

//public: class c_cui_render_view const * c_cui_render_views::get_window_view(void) const
//{
//    mangled_ppc("?get_window_view@c_cui_render_views@@QBAPBVc_cui_render_view@@XZ");
//};

//public: class c_cui_render_view const * c_cui_render_views::get_offscreen_surface_view(void) const
//{
//    mangled_ppc("?get_offscreen_surface_view@c_cui_render_views@@QBAPBVc_cui_render_view@@XZ");
//};

//public: bool c_custom_bitmap::is_ready(void) const
//{
//    mangled_ppc("?is_ready@c_custom_bitmap@@QBA_NXZ");
//};

//private: void c_cui_render_buffer_renderer::render_texture_camera(struct s_cui_render_texture_camera_command const *)
//{
//    mangled_ppc("?render_texture_camera@c_cui_render_buffer_renderer@@AAAXPBUs_cui_render_texture_camera_command@@@Z");
//};

//public: void c_cui_render_surface_allocator::release_surfaces(unsigned int)
//{
//    mangled_ppc("?release_surfaces@c_cui_render_surface_allocator@@QAAXI@Z");
//};

//private: void c_cui_render_buffer_renderer::render_texture_camera_snapshot(struct s_cui_render_texture_camera_snapshot_command const *)
//{
//    mangled_ppc("?render_texture_camera_snapshot@c_cui_render_buffer_renderer@@AAAXPBUs_cui_render_texture_camera_snapshot_command@@@Z");
//};

//public: struct D3DTexture * c_custom_bitmap::get_texture(void)
//{
//    mangled_ppc("?get_texture@c_custom_bitmap@@QAAPAUD3DTexture@@XZ");
//};

//public: unsigned int c_custom_bitmap::get_width(void) const
//{
//    mangled_ppc("?get_width@c_custom_bitmap@@QBAIXZ");
//};

//public: unsigned int c_custom_bitmap_key::get_width(void) const
//{
//    mangled_ppc("?get_width@c_custom_bitmap_key@@QBAIXZ");
//};

//public: unsigned int c_custom_bitmap_size::get_width(void) const
//{
//    mangled_ppc("?get_width@c_custom_bitmap_size@@QBAIXZ");
//};

//public: unsigned int c_custom_bitmap::get_height(void) const
//{
//    mangled_ppc("?get_height@c_custom_bitmap@@QBAIXZ");
//};

//public: unsigned int c_custom_bitmap_key::get_height(void) const
//{
//    mangled_ppc("?get_height@c_custom_bitmap_key@@QBAIXZ");
//};

//public: unsigned int c_custom_bitmap_size::get_height(void) const
//{
//    mangled_ppc("?get_height@c_custom_bitmap_size@@QBAIXZ");
//};

//public: void c_custom_bitmap::set_ready(bool)
//{
//    mangled_ppc("?set_ready@c_custom_bitmap@@QAAX_N@Z");
//};

//private: void c_cui_render_buffer_renderer::render_background_blur(enum e_surface, struct s_cui_render_background_blur_command const *)
//{
//    mangled_ppc("?render_background_blur@c_cui_render_buffer_renderer@@AAAXW4e_surface@@PBUs_cui_render_background_blur_command@@@Z");
//};

//private: void c_cui_render_buffer_renderer::set_render_target(enum e_surface, enum c_cui_render_buffer_renderer::e_render_target_type, union real_rectangle2d const *)
//{
//    mangled_ppc("?set_render_target@c_cui_render_buffer_renderer@@AAAXW4e_surface@@W4e_render_target_type@1@PBTreal_rectangle2d@@@Z");
//};

//private: void c_cui_render_buffer_renderer::allocate_and_resolve_texture(union real_rectangle2d const *)
//{
//    mangled_ppc("?allocate_and_resolve_texture@c_cui_render_buffer_renderer@@AAAXPBTreal_rectangle2d@@@Z");
//};

//private: void c_cui_render_buffer_renderer::render_resolved_explicit_shader(long, struct s_cui_render_command_header const *)
//{
//    mangled_ppc("?render_resolved_explicit_shader@c_cui_render_buffer_renderer@@AAAXJPBUs_cui_render_command_header@@@Z");
//};

//public: struct c_cui_render_surface_allocator::s_texture_allocation * c_cui_render_surface_allocator::get_texture(unsigned int)
//{
//    mangled_ppc("?get_texture@c_cui_render_surface_allocator@@QAAPAUs_texture_allocation@1@I@Z");
//};

//private: void c_cui_render_buffer_renderer::render_resolved_texture_camera(long, struct s_cui_render_command_header const *)
//{
//    mangled_ppc("?render_resolved_texture_camera@c_cui_render_buffer_renderer@@AAAXJPBUs_cui_render_command_header@@@Z");
//};

//private: void c_cui_render_buffer_renderer::render_explicitly_shaded_resolved_texture_camera(long, struct s_cui_render_command_header const *)
//{
//    mangled_ppc("?render_explicitly_shaded_resolved_texture_camera@c_cui_render_buffer_renderer@@AAAXJPBUs_cui_render_command_header@@@Z");
//};

//private: void c_cui_render_buffer_renderer::render_resolved_background_blur(enum e_surface, struct s_cui_render_background_blur_command const *, long)
//{
//    mangled_ppc("?render_resolved_background_blur@c_cui_render_buffer_renderer@@AAAXW4e_surface@@PBUs_cui_render_background_blur_command@@J@Z");
//};

//void cui_render(enum e_surface, enum e_window_index, class c_cui_render_buffer *, bool)
//{
//    mangled_ppc("?cui_render@@YAXW4e_surface@@W4e_window_index@@PAVc_cui_render_buffer@@_N@Z");
//};

//public: class c_cui_render_buffer_iterator c_cui_render_buffer::begin(void) const
//{
//    mangled_ppc("?begin@c_cui_render_buffer@@QBA?AVc_cui_render_buffer_iterator@@XZ");
//};

//public: c_cui_render_buffer_iterator::c_cui_render_buffer_iterator(class c_cui_render_buffer_page *)
//{
//    mangled_ppc("??0c_cui_render_buffer_iterator@@QAA@PAVc_cui_render_buffer_page@@@Z");
//};

//public: class c_cui_render_buffer_iterator c_cui_render_buffer::end(void) const
//{
//    mangled_ppc("?end@c_cui_render_buffer@@QBA?AVc_cui_render_buffer_iterator@@XZ");
//};

//public: c_cui_render_command_renderer::c_cui_render_command_renderer(class c_cui_render_view const *)
//{
//    mangled_ppc("??0c_cui_render_command_renderer@@QAA@PBVc_cui_render_view@@@Z");
//};

//class c_cui_render_buffer_iterator find_end_explicit_shader(class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator)
//{
//    mangled_ppc("?find_end_explicit_shader@@YA?AVc_cui_render_buffer_iterator@@V1@0@Z");
//};

//void get_resolve_rect(union real_rectangle2d const *, union short_rectangle2d *)
//{
//    mangled_ppc("?get_resolve_rect@@YAXPBTreal_rectangle2d@@PATshort_rectangle2d@@@Z");
//};

//void read_explicit_shader_constant_list(unsigned char const **, unsigned int *, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> *)
//{
//    mangled_ppc("?read_explicit_shader_constant_list@@YAXPAPBEPAIPAV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//class c_cui_render_buffer_iterator find_begin_screen(class c_cui_render_buffer_iterator, class c_cui_render_buffer_iterator)
//{
//    mangled_ppc("?find_begin_screen@@YA?AVc_cui_render_buffer_iterator@@V1@0@Z");
//};

//public: enum e_cui_render_command_type c_enum_no_init<enum e_cui_render_command_type, short, 0, 31, struct s_default_enum_string_resolver>::operator enum e_cui_render_command_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_cui_render_command_type@@F$0A@$0BP@Us_default_enum_string_resolver@@@@QBA?AW4e_cui_render_command_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_cui_render_command_type, short, 0, 31, struct s_default_enum_string_resolver>::operator==(enum e_cui_render_command_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_cui_render_command_type@@F$0A@$0BP@Us_default_enum_string_resolver@@@@QBA_NW4e_cui_render_command_type@@@Z");
//};

//public: enum e_text_justification c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_text_justification(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_text_justification@@XZ");
//};

//public: enum e_text_drop_shadow_style c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_text_drop_shadow_style(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_text_drop_shadow_style@@XZ");
//};

//public: long c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QBAJXZ");
//};

//public: long c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QBAJXZ");
//};

//public: struct c_cui_render_surface_allocator::s_texture_allocation & c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QAAAAUs_texture_allocation@c_cui_render_surface_allocator@@J@Z");
//};

//public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QBAJXZ");
//};

//public: long c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QAAJXZ");
//};

//public: void c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QAAXXZ");
//};

//public: struct c_cui_render_command_renderer::s_projection_matrix & c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QAAAAUs_projection_matrix@c_cui_render_command_renderer@@J@Z");
//};

//public: c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct real_matrix4x3, 96>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct real_matrix4x3, 96>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct real_matrix4x3, 96>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QBAJXZ");
//};

//public: long c_static_stack<struct real_matrix4x3, 96>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QAAJXZ");
//};

//public: void c_static_stack<struct real_matrix4x3, 96>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QAAXXZ");
//};

//public: struct real_matrix4x3& c_static_stack<struct real_matrix4x3, 96>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QAAAAUreal_matrix4x3@@J@Z");
//};

//public: c_static_stack<struct real_matrix4x3, 96>::c_static_stack<struct real_matrix4x3, 96>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QAA@XZ");
//};

//public: struct s_cui_render_explicit_shader_constant & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QAAAAUs_cui_render_explicit_shader_constant@@XZ");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_cui_render_command_renderer::s_projection_matrix, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_projection_matrix@c_cui_render_command_renderer@@$0CA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct real_matrix4x3, 96>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct real_matrix4x3, 96>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Ureal_matrix4x3@@$0GA@@@QBA_NJ@Z");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QAAJXZ");
//};

//public: struct s_cui_render_explicit_shader_constant * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QAAPAUs_cui_render_explicit_shader_constant@@J@Z");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QBA_NXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@AAAPAV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@XZ");
//};

//public: struct s_cui_render_explicit_shader_constant * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>, struct s_cui_render_explicit_shader_constant>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@Us_cui_render_explicit_shader_constant@@@@QAAPAUs_cui_render_explicit_shader_constant@@XZ");
//};

//public: struct s_cui_render_explicit_shader_constant * c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@QAAPAUs_cui_render_explicit_shader_constant@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@XZ");
//};

//public: struct s_cui_render_explicit_shader_constant * s_static_array<struct s_cui_render_explicit_shader_constant, 14>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_cui_render_explicit_shader_constant@@$0O@@@QAAPAUs_cui_render_explicit_shader_constant@@XZ");
//};

//void cui_buffer_read<unsigned int>(unsigned char const **, unsigned int *, unsigned int *)
//{
//    mangled_ppc("??$cui_buffer_read@I@@YAXPAPBEPAI1@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_simple_text_command>(unsigned char const **, unsigned int *, struct s_cui_render_simple_text_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_simple_text_command@@@@YAXPAPBEPAIPAPBUs_cui_render_simple_text_command@@@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_complex_text_command>(unsigned char const **, unsigned int *, struct s_cui_render_complex_text_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_complex_text_command@@@@YAXPAPBEPAIPAPBUs_cui_render_complex_text_command@@@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_debug_text_command>(unsigned char const **, unsigned int *, struct s_cui_render_debug_text_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_debug_text_command@@@@YAXPAPBEPAIPAPBUs_cui_render_debug_text_command@@@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_explicitly_shaded_quad_command>(unsigned char const **, unsigned int *, struct s_cui_render_explicitly_shaded_quad_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_explicitly_shaded_quad_command@@@@YAXPAPBEPAIPAPBUs_cui_render_explicitly_shaded_quad_command@@@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_explicitly_shaded_custom_bitmap_command>(unsigned char const **, unsigned int *, struct s_cui_render_explicitly_shaded_custom_bitmap_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_explicitly_shaded_custom_bitmap_command@@@@YAXPAPBEPAIPAPBUs_cui_render_explicitly_shaded_custom_bitmap_command@@@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_begin_explicit_shader_command>(unsigned char const **, unsigned int *, struct s_cui_render_begin_explicit_shader_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_begin_explicit_shader_command@@@@YAXPAPBEPAIPAPBUs_cui_render_begin_explicit_shader_command@@@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_explicitly_shaded_texture_camera_command>(unsigned char const **, unsigned int *, struct s_cui_render_explicitly_shaded_texture_camera_command const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_explicitly_shaded_texture_camera_command@@@@YAXPAPBEPAIPAPBUs_cui_render_explicitly_shaded_texture_camera_command@@@Z");
//};

//void cui_buffer_read<struct s_cui_render_explicit_shader_constant>(unsigned char const **, unsigned int *, struct s_cui_render_explicit_shader_constant *)
//{
//    mangled_ppc("??$cui_buffer_read@Us_cui_render_explicit_shader_constant@@@@YAXPAPBEPAIPAUs_cui_render_explicit_shader_constant@@@Z");
//};

//public: static bool s_static_array<struct s_cui_render_explicit_shader_constant, 14>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cui_render_explicit_shader_constant@@$0O@@@SA_NJ@Z");
//};

//void cui_buffer_get_read_ptr<unsigned int>(unsigned char const **, unsigned int *, unsigned int const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@I@@YAXPAPBEPAIPAPBI@Z");
//};

//void cui_buffer_get_read_ptr<struct s_cui_render_explicit_shader_constant>(unsigned char const **, unsigned int *, struct s_cui_render_explicit_shader_constant const **)
//{
//    mangled_ppc("??$cui_buffer_get_read_ptr@Us_cui_render_explicit_shader_constant@@@@YAXPAPBEPAIPAPBUs_cui_render_explicit_shader_constant@@@Z");
//};

