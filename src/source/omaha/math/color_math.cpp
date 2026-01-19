/* ---------- headers */

#include "omaha\math\color_math.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float value_degamma(float);
// float value_regamma(float);
// void color_degamma(union rgb_color const *, struct real_linear_rgb_color *);
// void color_regamma(struct real_linear_rgb_color const *, union rgb_color *);
// void color_degamma_xRGB(union rgb_color const *, struct real_linear_rgb_color *);
// float value_degamma_xRGB(float);
// float convert_xrgb_to_linear(float);
// void color_regamma_xRGB(struct real_linear_rgb_color const *, union rgb_color *);
// float value_regamma_xRGB(float);
// float convert_linear_to_xrgb(float);
// void rgb_radiance_to_xyz(struct real_rgb_radiance const *, struct real_xyz_radiance *);
// void xyz_radiance_to_rgb(struct real_xyz_radiance const *, struct real_rgb_radiance *);
// void linear_rgb_to_xyz(struct real_linear_rgb_color const *, struct real_linear_xyz_color *);
// void linear_xyz_to_rgb(struct real_linear_xyz_color const *, struct real_linear_rgb_color *);
// void set_real_linear_rgb_color(struct real_linear_rgb_color *, float, float, float);
// void linear_colors_add(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, struct real_linear_rgb_color *);
// void linear_colors_multiply(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, struct real_linear_rgb_color *);
// void linear_color_scale(struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *);
// void linear_color_bias(struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *);
// void linear_colors_blend(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *);
// void linear_colors_additive_blend(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *);
// float linear_color_luminance(struct real_linear_rgb_color const *);
// void scale_xyz_radiance(struct real_xyz_radiance *, float);
// void scale_xyz_color(struct real_linear_xyz_color *, float);
// void scale_rgb_color_xyz(struct real_linear_rgb_color *, float);
// void scale_color_to_safe_rgb_boundaries(struct real_linear_rgb_color const *, struct real_linear_rgb_color *);
// void real_linear_rgb_color_to_half(struct real_linear_rgb_color const *, struct half_linear_rgb_color *);
// void real_linear_rgb_color_from_half(struct half_linear_rgb_color const *, struct real_linear_rgb_color *);
// void real_rgb_lightprobe_to_half(struct real_rgb_lightprobe const *, struct half_rgb_lightprobe *);
// void real_rgb_lightprobe_from_half(struct half_rgb_lightprobe const *, struct real_rgb_lightprobe *);
// void real_rgb_lightprobe_to_mini(struct real_rgb_lightprobe const *, struct real_rgb_mini_lightprobe *);
// void real_rgb_lightprobe_from_mini(struct real_rgb_mini_lightprobe const *, struct real_rgb_lightprobe *);
// void real_rgb_colors_add(union rgb_color const *, union rgb_color const *, union rgb_color *);
// void real_rgb_colors_multiply(union rgb_color const *, union rgb_color const *, union rgb_color *);
// void real_rgb_color_scale(union rgb_color const *, float, union rgb_color *);
// void real_rgb_color_bias(union rgb_color const *, float, union rgb_color *);
// void real_argb_colors_add(union argb_color const *, union argb_color const *, union argb_color *);
// void real_argb_colors_multiply(union argb_color const *, union argb_color const *, union argb_color *);
// void real_argb_color_scale(union argb_color const *, float, union argb_color *);
// void real_argb_color_bias(union argb_color const *, float, union argb_color *);
// float brightness_to_luminance(float, float, float, float);
// float luminance_to_brightness(float, float, float, float);
// void radiance_to_color(struct real_rgb_radiance const *, struct real_linear_rgb_color *, float, float, float);
// void color_to_radiance(struct real_linear_rgb_color const *, struct real_rgb_radiance *, float, float, float);
// float logluv_get_real_luminance(unsigned long);
// unsigned long logluv_build(float, long, long);
// void logluv_extract(unsigned long, float *, long *, long *);
// unsigned long logluv_from_real_linear_rgb_color(struct real_linear_rgb_color const *);
// void logluv_to_real_linear_rgb_color(unsigned long, struct real_linear_rgb_color *);
// void logluv_from_real_linear_rgb_color_array(struct real_linear_rgb_color const *, unsigned long *, long);
// void logluv_to_real_linear_rgb_color_array(unsigned long const *, struct real_linear_rgb_color *, long);
// void logluv_probe_from_real_probe(struct real_rgb_lightprobe const *, struct s_faux_logluv_lightprobe *);
// void logluv_probe_to_real_probe(struct s_faux_logluv_lightprobe const *, struct real_rgb_lightprobe *);
// void real_linear_rgb_color_from_ycbcr(struct real_ycbcr_color const *, struct real_linear_rgb_color *);
// void real_linear_rgb_color_to_ycbcr(struct real_linear_rgb_color const *, struct real_ycbcr_color *);
// void real_rgb_probe_to_ycbcr(struct real_rgb_lightprobe const *, struct real_ycbcr_lightprobe *);
// void real_rgb_probe_from_ycbcr(struct real_ycbcr_lightprobe const *, struct real_rgb_lightprobe *);
// float real_rgb_color_brightness(union rgb_color const *);
// union word_hsv_color * word_rgb_color_to_word_hsv_color(union word_rgb_color const *, union word_hsv_color *);
// union word_rgb_color * word_hsv_color_to_word_rgb_color(union word_hsv_color const *, union word_rgb_color *);
// union hsv_color * real_rgb_color_to_real_hsv_color(union rgb_color const *, union hsv_color *);
// union rgb_color * real_hsv_color_to_real_rgb_color(union hsv_color const *, union rgb_color *);
// union argb_color * argb_color_to_real_argb_color(union argb_color const *, union argb_color *);
// union rgb_color * word_rgb_color_to_real_rgb_color(union word_rgb_color const *, union rgb_color *);
// union argb_color * pixel32_to_real_argb_color(unsigned long, union argb_color *);
// union argb_color * pixel32_to_real_argb_color_signed(unsigned long, union argb_color *);
// union rgb_color * pixel32_to_real_rgb_color(unsigned long, union rgb_color *);
// union rgb_color * rgb_colors_interpolate(union rgb_color *, unsigned long, union rgb_color const *, union rgb_color const *, float);
// union rgb_color * rgb_colors_interpolate_and_scale(union rgb_color *, unsigned long, union argb_color const *, union argb_color const *, union rgb_color const *, float);
// union argb_color * real_argb_color_to_argb_color(union argb_color const *, union argb_color *);
// union word_rgb_color * real_rgb_color_to_word_rgb_color(union rgb_color const *, union word_rgb_color *);
// unsigned long scaled_real_argb_color_to_pixel32(union argb_color const *);
// unsigned long real_argb_color_to_pixel32(union argb_color const *);
// unsigned long real_rgb_color_to_pixel32(union rgb_color const *);
// unsigned long real_a_rgb_color_to_pixel32(float, union rgb_color const *);
// unsigned long real_alpha_to_pixel32(float);
// unsigned long real_intensity_to_pixel32(float);
// unsigned long real_alpha_intensity_to_pixel32(float, float);
// bool valid_real_rgb_color(union rgb_color const *);
// bool valid_real_argb_color(union argb_color const *);
// float logluv_L16_to_Y(long);
// long logluv_Y_to_L16(float);
// unsigned long pixel32_swizzle_ABGR(unsigned long);
// union rgb_color * pixel32_RGBE_to_real_rgb_color(unsigned long, union rgb_color *, bool);
// unsigned long real_rgb_color_to_pixel32_RGBE(union rgb_color const *, bool);
// public: void real_rgb_lightprobe::convert(struct half_rgb_lightprobe const *);
// public: void half_rgb_lightprobe::convert(struct real_rgb_lightprobe const *);
// float half_to_real_all_finite(unsigned short);
// bool is_half_nan(unsigned short);

//float value_degamma(float)
//{
//    mangled_ppc("?value_degamma@@YAMM@Z");
//};

//float value_regamma(float)
//{
//    mangled_ppc("?value_regamma@@YAMM@Z");
//};

//void color_degamma(union rgb_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?color_degamma@@YAXPBTrgb_color@@PAUreal_linear_rgb_color@@@Z");
//};

//void color_regamma(struct real_linear_rgb_color const *, union rgb_color *)
//{
//    mangled_ppc("?color_regamma@@YAXPBUreal_linear_rgb_color@@PATrgb_color@@@Z");
//};

//void color_degamma_xRGB(union rgb_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?color_degamma_xRGB@@YAXPBTrgb_color@@PAUreal_linear_rgb_color@@@Z");
//};

//float value_degamma_xRGB(float)
//{
//    mangled_ppc("?value_degamma_xRGB@@YAMM@Z");
//};

//float convert_xrgb_to_linear(float)
//{
//    mangled_ppc("?convert_xrgb_to_linear@@YAMM@Z");
//};

//void color_regamma_xRGB(struct real_linear_rgb_color const *, union rgb_color *)
//{
//    mangled_ppc("?color_regamma_xRGB@@YAXPBUreal_linear_rgb_color@@PATrgb_color@@@Z");
//};

//float value_regamma_xRGB(float)
//{
//    mangled_ppc("?value_regamma_xRGB@@YAMM@Z");
//};

//float convert_linear_to_xrgb(float)
//{
//    mangled_ppc("?convert_linear_to_xrgb@@YAMM@Z");
//};

//void rgb_radiance_to_xyz(struct real_rgb_radiance const *, struct real_xyz_radiance *)
//{
//    mangled_ppc("?rgb_radiance_to_xyz@@YAXPBUreal_rgb_radiance@@PAUreal_xyz_radiance@@@Z");
//};

//void xyz_radiance_to_rgb(struct real_xyz_radiance const *, struct real_rgb_radiance *)
//{
//    mangled_ppc("?xyz_radiance_to_rgb@@YAXPBUreal_xyz_radiance@@PAUreal_rgb_radiance@@@Z");
//};

//void linear_rgb_to_xyz(struct real_linear_rgb_color const *, struct real_linear_xyz_color *)
//{
//    mangled_ppc("?linear_rgb_to_xyz@@YAXPBUreal_linear_rgb_color@@PAUreal_linear_xyz_color@@@Z");
//};

//void linear_xyz_to_rgb(struct real_linear_xyz_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_xyz_to_rgb@@YAXPBUreal_linear_xyz_color@@PAUreal_linear_rgb_color@@@Z");
//};

//void set_real_linear_rgb_color(struct real_linear_rgb_color *, float, float, float)
//{
//    mangled_ppc("?set_real_linear_rgb_color@@YAXPAUreal_linear_rgb_color@@MMM@Z");
//};

//void linear_colors_add(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_colors_add@@YAXPBUreal_linear_rgb_color@@0PAU1@@Z");
//};

//void linear_colors_multiply(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_colors_multiply@@YAXPBUreal_linear_rgb_color@@0PAU1@@Z");
//};

//void linear_color_scale(struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_color_scale@@YAXPBUreal_linear_rgb_color@@MPAU1@@Z");
//};

//void linear_color_bias(struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_color_bias@@YAXPBUreal_linear_rgb_color@@MPAU1@@Z");
//};

//void linear_colors_blend(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_colors_blend@@YAXPBUreal_linear_rgb_color@@0MPAU1@@Z");
//};

//void linear_colors_additive_blend(struct real_linear_rgb_color const *, struct real_linear_rgb_color const *, float, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?linear_colors_additive_blend@@YAXPBUreal_linear_rgb_color@@0MPAU1@@Z");
//};

//float linear_color_luminance(struct real_linear_rgb_color const *)
//{
//    mangled_ppc("?linear_color_luminance@@YAMPBUreal_linear_rgb_color@@@Z");
//};

//void scale_xyz_radiance(struct real_xyz_radiance *, float)
//{
//    mangled_ppc("?scale_xyz_radiance@@YAXPAUreal_xyz_radiance@@M@Z");
//};

//void scale_xyz_color(struct real_linear_xyz_color *, float)
//{
//    mangled_ppc("?scale_xyz_color@@YAXPAUreal_linear_xyz_color@@M@Z");
//};

//void scale_rgb_color_xyz(struct real_linear_rgb_color *, float)
//{
//    mangled_ppc("?scale_rgb_color_xyz@@YAXPAUreal_linear_rgb_color@@M@Z");
//};

//void scale_color_to_safe_rgb_boundaries(struct real_linear_rgb_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?scale_color_to_safe_rgb_boundaries@@YAXPBUreal_linear_rgb_color@@PAU1@@Z");
//};

//void real_linear_rgb_color_to_half(struct real_linear_rgb_color const *, struct half_linear_rgb_color *)
//{
//    mangled_ppc("?real_linear_rgb_color_to_half@@YAXPBUreal_linear_rgb_color@@PAUhalf_linear_rgb_color@@@Z");
//};

//void real_linear_rgb_color_from_half(struct half_linear_rgb_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?real_linear_rgb_color_from_half@@YAXPBUhalf_linear_rgb_color@@PAUreal_linear_rgb_color@@@Z");
//};

//void real_rgb_lightprobe_to_half(struct real_rgb_lightprobe const *, struct half_rgb_lightprobe *)
//{
//    mangled_ppc("?real_rgb_lightprobe_to_half@@YAXPBUreal_rgb_lightprobe@@PAUhalf_rgb_lightprobe@@@Z");
//};

//void real_rgb_lightprobe_from_half(struct half_rgb_lightprobe const *, struct real_rgb_lightprobe *)
//{
//    mangled_ppc("?real_rgb_lightprobe_from_half@@YAXPBUhalf_rgb_lightprobe@@PAUreal_rgb_lightprobe@@@Z");
//};

//void real_rgb_lightprobe_to_mini(struct real_rgb_lightprobe const *, struct real_rgb_mini_lightprobe *)
//{
//    mangled_ppc("?real_rgb_lightprobe_to_mini@@YAXPBUreal_rgb_lightprobe@@PAUreal_rgb_mini_lightprobe@@@Z");
//};

//void real_rgb_lightprobe_from_mini(struct real_rgb_mini_lightprobe const *, struct real_rgb_lightprobe *)
//{
//    mangled_ppc("?real_rgb_lightprobe_from_mini@@YAXPBUreal_rgb_mini_lightprobe@@PAUreal_rgb_lightprobe@@@Z");
//};

//void real_rgb_colors_add(union rgb_color const *, union rgb_color const *, union rgb_color *)
//{
//    mangled_ppc("?real_rgb_colors_add@@YAXPBTrgb_color@@0PAT1@@Z");
//};

//void real_rgb_colors_multiply(union rgb_color const *, union rgb_color const *, union rgb_color *)
//{
//    mangled_ppc("?real_rgb_colors_multiply@@YAXPBTrgb_color@@0PAT1@@Z");
//};

//void real_rgb_color_scale(union rgb_color const *, float, union rgb_color *)
//{
//    mangled_ppc("?real_rgb_color_scale@@YAXPBTrgb_color@@MPAT1@@Z");
//};

//void real_rgb_color_bias(union rgb_color const *, float, union rgb_color *)
//{
//    mangled_ppc("?real_rgb_color_bias@@YAXPBTrgb_color@@MPAT1@@Z");
//};

//void real_argb_colors_add(union argb_color const *, union argb_color const *, union argb_color *)
//{
//    mangled_ppc("?real_argb_colors_add@@YAXPBTargb_color@@0PAT1@@Z");
//};

//void real_argb_colors_multiply(union argb_color const *, union argb_color const *, union argb_color *)
//{
//    mangled_ppc("?real_argb_colors_multiply@@YAXPBTargb_color@@0PAT1@@Z");
//};

//void real_argb_color_scale(union argb_color const *, float, union argb_color *)
//{
//    mangled_ppc("?real_argb_color_scale@@YAXPBTargb_color@@MPAT1@@Z");
//};

//void real_argb_color_bias(union argb_color const *, float, union argb_color *)
//{
//    mangled_ppc("?real_argb_color_bias@@YAXPBTargb_color@@MPAT1@@Z");
//};

//float brightness_to_luminance(float, float, float, float)
//{
//    mangled_ppc("?brightness_to_luminance@@YAMMMMM@Z");
//};

//float luminance_to_brightness(float, float, float, float)
//{
//    mangled_ppc("?luminance_to_brightness@@YAMMMMM@Z");
//};

//void radiance_to_color(struct real_rgb_radiance const *, struct real_linear_rgb_color *, float, float, float)
//{
//    mangled_ppc("?radiance_to_color@@YAXPBUreal_rgb_radiance@@PAUreal_linear_rgb_color@@MMM@Z");
//};

//void color_to_radiance(struct real_linear_rgb_color const *, struct real_rgb_radiance *, float, float, float)
//{
//    mangled_ppc("?color_to_radiance@@YAXPBUreal_linear_rgb_color@@PAUreal_rgb_radiance@@MMM@Z");
//};

//float logluv_get_real_luminance(unsigned long)
//{
//    mangled_ppc("?logluv_get_real_luminance@@YAMK@Z");
//};

//unsigned long logluv_build(float, long, long)
//{
//    mangled_ppc("?logluv_build@@YAKMJJ@Z");
//};

//void logluv_extract(unsigned long, float *, long *, long *)
//{
//    mangled_ppc("?logluv_extract@@YAXKPAMPAJ1@Z");
//};

//unsigned long logluv_from_real_linear_rgb_color(struct real_linear_rgb_color const *)
//{
//    mangled_ppc("?logluv_from_real_linear_rgb_color@@YAKPBUreal_linear_rgb_color@@@Z");
//};

//void logluv_to_real_linear_rgb_color(unsigned long, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?logluv_to_real_linear_rgb_color@@YAXKPAUreal_linear_rgb_color@@@Z");
//};

//void logluv_from_real_linear_rgb_color_array(struct real_linear_rgb_color const *, unsigned long *, long)
//{
//    mangled_ppc("?logluv_from_real_linear_rgb_color_array@@YAXPBUreal_linear_rgb_color@@PAKJ@Z");
//};

//void logluv_to_real_linear_rgb_color_array(unsigned long const *, struct real_linear_rgb_color *, long)
//{
//    mangled_ppc("?logluv_to_real_linear_rgb_color_array@@YAXPBKPAUreal_linear_rgb_color@@J@Z");
//};

//void logluv_probe_from_real_probe(struct real_rgb_lightprobe const *, struct s_faux_logluv_lightprobe *)
//{
//    mangled_ppc("?logluv_probe_from_real_probe@@YAXPBUreal_rgb_lightprobe@@PAUs_faux_logluv_lightprobe@@@Z");
//};

//void logluv_probe_to_real_probe(struct s_faux_logluv_lightprobe const *, struct real_rgb_lightprobe *)
//{
//    mangled_ppc("?logluv_probe_to_real_probe@@YAXPBUs_faux_logluv_lightprobe@@PAUreal_rgb_lightprobe@@@Z");
//};

//void real_linear_rgb_color_from_ycbcr(struct real_ycbcr_color const *, struct real_linear_rgb_color *)
//{
//    mangled_ppc("?real_linear_rgb_color_from_ycbcr@@YAXPBUreal_ycbcr_color@@PAUreal_linear_rgb_color@@@Z");
//};

//void real_linear_rgb_color_to_ycbcr(struct real_linear_rgb_color const *, struct real_ycbcr_color *)
//{
//    mangled_ppc("?real_linear_rgb_color_to_ycbcr@@YAXPBUreal_linear_rgb_color@@PAUreal_ycbcr_color@@@Z");
//};

//void real_rgb_probe_to_ycbcr(struct real_rgb_lightprobe const *, struct real_ycbcr_lightprobe *)
//{
//    mangled_ppc("?real_rgb_probe_to_ycbcr@@YAXPBUreal_rgb_lightprobe@@PAUreal_ycbcr_lightprobe@@@Z");
//};

//void real_rgb_probe_from_ycbcr(struct real_ycbcr_lightprobe const *, struct real_rgb_lightprobe *)
//{
//    mangled_ppc("?real_rgb_probe_from_ycbcr@@YAXPBUreal_ycbcr_lightprobe@@PAUreal_rgb_lightprobe@@@Z");
//};

//float real_rgb_color_brightness(union rgb_color const *)
//{
//    mangled_ppc("?real_rgb_color_brightness@@YAMPBTrgb_color@@@Z");
//};

//union word_hsv_color * word_rgb_color_to_word_hsv_color(union word_rgb_color const *, union word_hsv_color *)
//{
//    mangled_ppc("?word_rgb_color_to_word_hsv_color@@YAPATword_hsv_color@@PBTword_rgb_color@@PAT1@@Z");
//};

//union word_rgb_color * word_hsv_color_to_word_rgb_color(union word_hsv_color const *, union word_rgb_color *)
//{
//    mangled_ppc("?word_hsv_color_to_word_rgb_color@@YAPATword_rgb_color@@PBTword_hsv_color@@PAT1@@Z");
//};

//union hsv_color * real_rgb_color_to_real_hsv_color(union rgb_color const *, union hsv_color *)
//{
//    mangled_ppc("?real_rgb_color_to_real_hsv_color@@YAPAThsv_color@@PBTrgb_color@@PAT1@@Z");
//};

//union rgb_color * real_hsv_color_to_real_rgb_color(union hsv_color const *, union rgb_color *)
//{
//    mangled_ppc("?real_hsv_color_to_real_rgb_color@@YAPATrgb_color@@PBThsv_color@@PAT1@@Z");
//};

//union argb_color * argb_color_to_real_argb_color(union argb_color const *, union argb_color *)
//{
//    mangled_ppc("?argb_color_to_real_argb_color@@YAPATargb_color@@PBT1@PAT1@@Z");
//};

//union rgb_color * word_rgb_color_to_real_rgb_color(union word_rgb_color const *, union rgb_color *)
//{
//    mangled_ppc("?word_rgb_color_to_real_rgb_color@@YAPATrgb_color@@PBTword_rgb_color@@PAT1@@Z");
//};

//union argb_color * pixel32_to_real_argb_color(unsigned long, union argb_color *)
//{
//    mangled_ppc("?pixel32_to_real_argb_color@@YAPATargb_color@@KPAT1@@Z");
//};

//union argb_color * pixel32_to_real_argb_color_signed(unsigned long, union argb_color *)
//{
//    mangled_ppc("?pixel32_to_real_argb_color_signed@@YAPATargb_color@@KPAT1@@Z");
//};

//union rgb_color * pixel32_to_real_rgb_color(unsigned long, union rgb_color *)
//{
//    mangled_ppc("?pixel32_to_real_rgb_color@@YAPATrgb_color@@KPAT1@@Z");
//};

//union rgb_color * rgb_colors_interpolate(union rgb_color *, unsigned long, union rgb_color const *, union rgb_color const *, float)
//{
//    mangled_ppc("?rgb_colors_interpolate@@YAPATrgb_color@@PAT1@KPBT1@1M@Z");
//};

//union rgb_color * rgb_colors_interpolate_and_scale(union rgb_color *, unsigned long, union argb_color const *, union argb_color const *, union rgb_color const *, float)
//{
//    mangled_ppc("?rgb_colors_interpolate_and_scale@@YAPATrgb_color@@PAT1@KPBTargb_color@@1PBT1@M@Z");
//};

//union argb_color * real_argb_color_to_argb_color(union argb_color const *, union argb_color *)
//{
//    mangled_ppc("?real_argb_color_to_argb_color@@YAPATargb_color@@PBT1@PAT1@@Z");
//};

//union word_rgb_color * real_rgb_color_to_word_rgb_color(union rgb_color const *, union word_rgb_color *)
//{
//    mangled_ppc("?real_rgb_color_to_word_rgb_color@@YAPATword_rgb_color@@PBTrgb_color@@PAT1@@Z");
//};

//unsigned long scaled_real_argb_color_to_pixel32(union argb_color const *)
//{
//    mangled_ppc("?scaled_real_argb_color_to_pixel32@@YAKPBTargb_color@@@Z");
//};

//unsigned long real_argb_color_to_pixel32(union argb_color const *)
//{
//    mangled_ppc("?real_argb_color_to_pixel32@@YAKPBTargb_color@@@Z");
//};

//unsigned long real_rgb_color_to_pixel32(union rgb_color const *)
//{
//    mangled_ppc("?real_rgb_color_to_pixel32@@YAKPBTrgb_color@@@Z");
//};

//unsigned long real_a_rgb_color_to_pixel32(float, union rgb_color const *)
//{
//    mangled_ppc("?real_a_rgb_color_to_pixel32@@YAKMPBTrgb_color@@@Z");
//};

//unsigned long real_alpha_to_pixel32(float)
//{
//    mangled_ppc("?real_alpha_to_pixel32@@YAKM@Z");
//};

//unsigned long real_intensity_to_pixel32(float)
//{
//    mangled_ppc("?real_intensity_to_pixel32@@YAKM@Z");
//};

//unsigned long real_alpha_intensity_to_pixel32(float, float)
//{
//    mangled_ppc("?real_alpha_intensity_to_pixel32@@YAKMM@Z");
//};

//bool valid_real_rgb_color(union rgb_color const *)
//{
//    mangled_ppc("?valid_real_rgb_color@@YA_NPBTrgb_color@@@Z");
//};

//bool valid_real_argb_color(union argb_color const *)
//{
//    mangled_ppc("?valid_real_argb_color@@YA_NPBTargb_color@@@Z");
//};

//float logluv_L16_to_Y(long)
//{
//    mangled_ppc("?logluv_L16_to_Y@@YAMJ@Z");
//};

//long logluv_Y_to_L16(float)
//{
//    mangled_ppc("?logluv_Y_to_L16@@YAJM@Z");
//};

//unsigned long pixel32_swizzle_ABGR(unsigned long)
//{
//    mangled_ppc("?pixel32_swizzle_ABGR@@YAKK@Z");
//};

//union rgb_color * pixel32_RGBE_to_real_rgb_color(unsigned long, union rgb_color *, bool)
//{
//    mangled_ppc("?pixel32_RGBE_to_real_rgb_color@@YAPATrgb_color@@KPAT1@_N@Z");
//};

//unsigned long real_rgb_color_to_pixel32_RGBE(union rgb_color const *, bool)
//{
//    mangled_ppc("?real_rgb_color_to_pixel32_RGBE@@YAKPBTrgb_color@@_N@Z");
//};

//public: void real_rgb_lightprobe::convert(struct half_rgb_lightprobe const *)
//{
//    mangled_ppc("?convert@real_rgb_lightprobe@@QAAXPBUhalf_rgb_lightprobe@@@Z");
//};

//public: void half_rgb_lightprobe::convert(struct real_rgb_lightprobe const *)
//{
//    mangled_ppc("?convert@half_rgb_lightprobe@@QAAXPBUreal_rgb_lightprobe@@@Z");
//};

//float half_to_real_all_finite(unsigned short)
//{
//    mangled_ppc("?half_to_real_all_finite@@YAMG@Z");
//};

//bool is_half_nan(unsigned short)
//{
//    mangled_ppc("?is_half_nan@@YA_NG@Z");
//};

