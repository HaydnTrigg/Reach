/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void cui_component_animation_animate(struct s_cui_animation_component_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *const *, unsigned int, bool *, bool *);
// bool cui_property_animation_is_looping(struct s_cui_animation_component_property_definition const *);
// public: long c_cui_property_animator::get_property_name(void) const;
// public: enum e_cui_property_type c_cui_property_animator::get_property_type(void) const;
// void animate_and_composite_long(struct s_cui_animation_component_property_real_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *);
// public: long c_cui_property_animator::get_initial_relative_long(void) const;
// public: bool c_cui_property_animator::composite_absolute_long(unsigned long, long);
// private: void c_cui_property_animator::set_absolute_long(long);
// public: bool c_cui_property_animator::composite_relative_long(long);
// private: void c_cui_property_animator::set_relative_long(long);
// private: bool c_cui_property_animator::should_overwrite_absolute(unsigned long) const;
// void animate_and_composite_real(struct s_cui_animation_component_property_real_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *);
// public: float c_cui_property_animator::get_initial_relative_real(void) const;
// public: bool c_cui_property_animator::composite_absolute_real(unsigned long, float);
// private: void c_cui_property_animator::set_absolute_real(float);
// public: bool c_cui_property_animator::composite_relative_real(float);
// private: void c_cui_property_animator::set_relative_real(float);
// void animate_and_composite_argb_color(struct s_cui_animation_component_property_argb_color_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *);
// public: void c_cui_property_animator::get_initial_relative_argb_color(union argb_color *) const;
// public: bool c_cui_property_animator::composite_absolute_argb_color(unsigned long, union argb_color const *);
// public: bool c_cui_property_animator::composite_relative_argb_color(union argb_color const *);
// private: void c_cui_property_animator::set_absolute_argb_color(union argb_color const *);
// public: enum e_cui_animation_property_composition_type c_enum_no_init<enum e_cui_animation_property_composition_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_cui_animation_property_composition_type(void) const;
// public: bool c_enum_no_init<enum e_cui_property_absolute_composition_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_cui_property_absolute_composition_type) const;
// public: bool c_flags_no_init<enum c_cui_property_animator::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_cui_property_animator::e_flags) const;

//void cui_component_animation_animate(struct s_cui_animation_component_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *const *, unsigned int, bool *, bool *)
//{
//    mangled_ppc("?cui_component_animation_animate@@YAXPBUs_cui_animation_component_definition@@KK_NPBQAVc_cui_property_animator@@IPA_N3@Z");
//};

//bool cui_property_animation_is_looping(struct s_cui_animation_component_property_definition const *)
//{
//    mangled_ppc("?cui_property_animation_is_looping@@YA_NPBUs_cui_animation_component_property_definition@@@Z");
//};

//public: long c_cui_property_animator::get_property_name(void) const
//{
//    mangled_ppc("?get_property_name@c_cui_property_animator@@QBAJXZ");
//};

//public: enum e_cui_property_type c_cui_property_animator::get_property_type(void) const
//{
//    mangled_ppc("?get_property_type@c_cui_property_animator@@QBA?AW4e_cui_property_type@@XZ");
//};

//void animate_and_composite_long(struct s_cui_animation_component_property_real_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *)
//{
//    mangled_ppc("?animate_and_composite_long@@YAXPBUs_cui_animation_component_property_real_definition@@KK_NPAVc_cui_property_animator@@@Z");
//};

//public: long c_cui_property_animator::get_initial_relative_long(void) const
//{
//    mangled_ppc("?get_initial_relative_long@c_cui_property_animator@@QBAJXZ");
//};

//public: bool c_cui_property_animator::composite_absolute_long(unsigned long, long)
//{
//    mangled_ppc("?composite_absolute_long@c_cui_property_animator@@QAA_NKJ@Z");
//};

//private: void c_cui_property_animator::set_absolute_long(long)
//{
//    mangled_ppc("?set_absolute_long@c_cui_property_animator@@AAAXJ@Z");
//};

//public: bool c_cui_property_animator::composite_relative_long(long)
//{
//    mangled_ppc("?composite_relative_long@c_cui_property_animator@@QAA_NJ@Z");
//};

//private: void c_cui_property_animator::set_relative_long(long)
//{
//    mangled_ppc("?set_relative_long@c_cui_property_animator@@AAAXJ@Z");
//};

//private: bool c_cui_property_animator::should_overwrite_absolute(unsigned long) const
//{
//    mangled_ppc("?should_overwrite_absolute@c_cui_property_animator@@ABA_NK@Z");
//};

//void animate_and_composite_real(struct s_cui_animation_component_property_real_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *)
//{
//    mangled_ppc("?animate_and_composite_real@@YAXPBUs_cui_animation_component_property_real_definition@@KK_NPAVc_cui_property_animator@@@Z");
//};

//public: float c_cui_property_animator::get_initial_relative_real(void) const
//{
//    mangled_ppc("?get_initial_relative_real@c_cui_property_animator@@QBAMXZ");
//};

//public: bool c_cui_property_animator::composite_absolute_real(unsigned long, float)
//{
//    mangled_ppc("?composite_absolute_real@c_cui_property_animator@@QAA_NKM@Z");
//};

//private: void c_cui_property_animator::set_absolute_real(float)
//{
//    mangled_ppc("?set_absolute_real@c_cui_property_animator@@AAAXM@Z");
//};

//public: bool c_cui_property_animator::composite_relative_real(float)
//{
//    mangled_ppc("?composite_relative_real@c_cui_property_animator@@QAA_NM@Z");
//};

//private: void c_cui_property_animator::set_relative_real(float)
//{
//    mangled_ppc("?set_relative_real@c_cui_property_animator@@AAAXM@Z");
//};

//void animate_and_composite_argb_color(struct s_cui_animation_component_property_argb_color_definition const *, unsigned long, unsigned long, bool, class c_cui_property_animator *)
//{
//    mangled_ppc("?animate_and_composite_argb_color@@YAXPBUs_cui_animation_component_property_argb_color_definition@@KK_NPAVc_cui_property_animator@@@Z");
//};

//public: void c_cui_property_animator::get_initial_relative_argb_color(union argb_color *) const
//{
//    mangled_ppc("?get_initial_relative_argb_color@c_cui_property_animator@@QBAXPATargb_color@@@Z");
//};

//public: bool c_cui_property_animator::composite_absolute_argb_color(unsigned long, union argb_color const *)
//{
//    mangled_ppc("?composite_absolute_argb_color@c_cui_property_animator@@QAA_NKPBTargb_color@@@Z");
//};

//public: bool c_cui_property_animator::composite_relative_argb_color(union argb_color const *)
//{
//    mangled_ppc("?composite_relative_argb_color@c_cui_property_animator@@QAA_NPBTargb_color@@@Z");
//};

//private: void c_cui_property_animator::set_absolute_argb_color(union argb_color const *)
//{
//    mangled_ppc("?set_absolute_argb_color@c_cui_property_animator@@AAAXPBTargb_color@@@Z");
//};

//public: enum e_cui_animation_property_composition_type c_enum_no_init<enum e_cui_animation_property_composition_type, short, 0, 3, struct s_default_enum_string_resolver>::operator enum e_cui_animation_property_composition_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_cui_animation_property_composition_type@@F$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_cui_animation_property_composition_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_cui_property_absolute_composition_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_cui_property_absolute_composition_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_cui_property_absolute_composition_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_cui_property_absolute_composition_type@@@Z");
//};

//public: bool c_flags_no_init<enum c_cui_property_animator::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_cui_property_animator::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@c_cui_property_animator@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_flags@c_cui_property_animator@@@Z");
//};

