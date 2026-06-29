/* ---------- headers */

#include "omaha\editor\editor_stubs.h"
#include "omaha\scenario\scenario.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_tag_memory_usage_bit const c_flags_no_init<enum e_tag_memory_usage_bit, unsigned long, 6, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_tag_memory_usage_bit@@K$05Us_default_enum_string_resolver@@@@2W4e_tag_memory_usage_bit@@B"
// public: static long const c_big_flags_typed_no_init<long, 62>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0DO@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 62>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0DO@@@2JB"

// bool game_in_editor(void);
// bool game_in_editor_player_simulation(void);
// bool editor_using_wpf_rendering(void);
// bool editor_should_render_object(long);
// bool editor_should_render_transparent_geometry(void);
// void editor_initialize(void);
// void editor_dispose(void);
// void editor_initialize_for_new_map(void);
// void editor_dispose_from_old_map(void);
// void editor_initialize_for_new_structure_bsp(unsigned long);
// void editor_dispose_from_old_structure_bsp(unsigned long);
// bool editor_switch_zone_set(long);
// void editor_update(void);
// void editor_orphan_object(enum e_object_type, long);
// void editor_register_new_object(enum e_object_type, long, long);
// void editor_prepare_for_tag_reload(bool);
// void editor_handle_tag_reload(bool);
// void editor_reset_script_referenced_blocks(void);
// void editor_register_script_referenced_block(struct s_tag_block *);
// void editor_flag_new(char const *, char const *, union real_point3d const *);
// bool editor_should_resolve_block_references(struct s_tag_field const *);
// bool editor_should_resolve_tag_reference(struct s_tag_field const *);
// void editor_save_progress(void);
// void editor_get_cluster_color(struct s_cluster_reference const *, union argb_color *);
// bool editor_input_inhibited(void);
// void editor_add_output_window_category(char const *);
// void editor_remove_output_window_category(char const *);
// void editor_list_output_window_categories(void);
// void editor_show_pregame_progress(enum e_main_pregame_frame, wchar_t const *);

bool game_in_editor(void)
{
    mangled_ppc("?game_in_editor@@YA_NXZ");

    return false;
};

bool game_in_editor_player_simulation(void)
{
    mangled_ppc("?game_in_editor_player_simulation@@YA_NXZ");

    return false;
};

bool editor_using_wpf_rendering(void)
{
    mangled_ppc("?editor_using_wpf_rendering@@YA_NXZ");

    return false;
};

bool editor_should_render_object(long)
{
    mangled_ppc("?editor_should_render_object@@YA_NJ@Z");

    return true;
};

bool editor_should_render_transparent_geometry(void)
{
    mangled_ppc("?editor_should_render_transparent_geometry@@YA_NXZ");

    return false;
};

void editor_initialize(void)
{
    mangled_ppc("?editor_initialize@@YAXXZ");

    // empty
};

void editor_dispose(void)
{
    mangled_ppc("?editor_dispose@@YAXXZ");

    // empty
};

void editor_initialize_for_new_map(void)
{
    mangled_ppc("?editor_initialize_for_new_map@@YAXXZ");

    // empty
};

void editor_dispose_from_old_map(void)
{
    mangled_ppc("?editor_dispose_from_old_map@@YAXXZ");

    // empty
};

void editor_initialize_for_new_structure_bsp(unsigned long)
{
    mangled_ppc("?editor_initialize_for_new_structure_bsp@@YAXK@Z");

    // empty
};

void editor_dispose_from_old_structure_bsp(unsigned long)
{
    mangled_ppc("?editor_dispose_from_old_structure_bsp@@YAXK@Z");

    // empty
};

bool editor_switch_zone_set(long zone_set_index)
{
    mangled_ppc("?editor_switch_zone_set@@YA_NJ@Z");
    
    return scenario_switch_zone_set(zone_set_index);
};

void editor_update(void)
{
    mangled_ppc("?editor_update@@YAXXZ");

    // empty
};

void editor_orphan_object(enum e_object_type, long)
{
    mangled_ppc("?editor_orphan_object@@YAXW4e_object_type@@J@Z");

    // empty
};

void editor_register_new_object(enum e_object_type, long, long)
{
    mangled_ppc("?editor_register_new_object@@YAXW4e_object_type@@JJ@Z");

    // empty
};

void editor_prepare_for_tag_reload(bool)
{
    mangled_ppc("?editor_prepare_for_tag_reload@@YAX_N@Z");

    // empty
};

void editor_handle_tag_reload(bool)
{
    mangled_ppc("?editor_handle_tag_reload@@YAX_N@Z");

    // empty
};

void editor_reset_script_referenced_blocks(void)
{
    mangled_ppc("?editor_reset_script_referenced_blocks@@YAXXZ");

    // empty
};

void editor_register_script_referenced_block(struct s_tag_block *)
{
    mangled_ppc("?editor_register_script_referenced_block@@YAXPAUs_tag_block@@@Z");

    // empty
};

void editor_flag_new(char const *, char const *, union real_point3d const *)
{
    mangled_ppc("?editor_flag_new@@YAXPBD0PBTreal_point3d@@@Z");

    // empty
};

bool editor_should_resolve_block_references(struct s_tag_field const *)
{
    mangled_ppc("?editor_should_resolve_block_references@@YA_NPBUs_tag_field@@@Z");

    return true;
};

bool editor_should_resolve_tag_reference(struct s_tag_field const *)
{
    mangled_ppc("?editor_should_resolve_tag_reference@@YA_NPBUs_tag_field@@@Z");

    return true;
};

void editor_save_progress(void)
{
    mangled_ppc("?editor_save_progress@@YAXXZ");

    // empty
};

void editor_get_cluster_color(struct s_cluster_reference const *, union argb_color *)
{
    mangled_ppc("?editor_get_cluster_color@@YAXPBUs_cluster_reference@@PATargb_color@@@Z");

    // empty
};

bool editor_input_inhibited(void)
{
    mangled_ppc("?editor_input_inhibited@@YA_NXZ");

    return true;
};

void editor_add_output_window_category(char const *)
{
    mangled_ppc("?editor_add_output_window_category@@YAXPBD@Z");

    // empty
};

void editor_remove_output_window_category(char const *)
{
    mangled_ppc("?editor_remove_output_window_category@@YAXPBD@Z");

    // empty
};

void editor_list_output_window_categories(void)
{
    mangled_ppc("?editor_list_output_window_categories@@YAXXZ");

    // empty

    // empty
};

void editor_show_pregame_progress(enum e_main_pregame_frame pregame_frame_type, wchar_t const * pregame_frame_text)
{
    mangled_ppc("?editor_show_pregame_progress@@YAXW4e_main_pregame_frame@@PB_W@Z");

    // empty
};
