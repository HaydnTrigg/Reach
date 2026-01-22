#pragma once
#ifndef __CUBEMAP_H__
#define __CUBEMAP_H__

/* ---------- headers */

#include "omaha/math/real_math.h"

/* ---------- constants */

/* ---------- definitions */

class c_cubemap
{
public:
    enum
    {
        k_default_render_resolution = 256, // 0x0100
        k_default_compressed_resolution = 64, // 0x0040 '@'
        k_default_compressed_mipmaps = 6, // 0x0006
    };

    enum e_cube_face
    {
        _cube_face_0 = 0,
        _cube_face_1,
        _cube_face_2,
        _cube_face_3,
        _cube_face_4,
        _cube_face_5,
        k_cube_face_count,
    };

    enum e_cube_edge
    {
        _cube_edge_02 = 0,
        _cube_edge_03,
        _cube_edge_04,
        _cube_edge_05,
        _cube_edge_12,
        _cube_edge_13,
        _cube_edge_14,
        _cube_edge_15,
        _cube_edge_24,
        _cube_edge_25,
        _cube_edge_34,
        _cube_edge_35,
        k_cube_edge_count,
    };

    enum e_cube_corner
    {
        _cube_corner_024 = 0,
        _cube_corner_025,
        _cube_corner_034,
        _cube_corner_035,
        _cube_corner_124,
        _cube_corner_125,
        _cube_corner_134,
        _cube_corner_135,
        k_cube_corner_count,
    };

    enum e_face_corner
    {
        _face_corner_top_left = 0,
        _face_corner_top_right,
        _face_corner_bottom_right,
        _face_corner_bottom_left,
        k_face_corner_count,
    };

    enum e_face_edge
    {
        _face_edge_top = 0,
        _face_edge_right,
        _face_edge_bottom,
        _face_edge_left,
        k_face_edge_count,
    };

    struct s_cube_edge
    {
        char face_0; // 0x0
        char face_edge_0; // 0x1
        char face_1; // 0x2
        char face_edge_1; // 0x3
    };

    struct s_cube_corner
    {
        char face_0; // 0x0
        char face_corner_0; // 0x1
        char face_1; // 0x2
        char face_corner_1; // 0x3
        char face_2; // 0x4
        char face_corner_2; // 0x5
    };

    struct s_face_edge
    {
        char start_x; // 0x0
        char start_y; // 0x1
        char delta_x; // 0x2
        char delta_y; // 0x3
    };

    static unsigned long const face_D3D_mapping_table[k_cube_face_count];
    static real_vector3d const face_forward[k_cube_face_count];
    static real_vector3d const face_up[k_cube_face_count];
    static real_vector3d const face_left[k_cube_face_count];
    static real_vector3d const face_up_bungie[k_cube_face_count];
    static real_vector3d const face_left_bungie[k_cube_face_count];
    static s_cube_edge const cube_edge[k_cube_edge_count];
    static s_cube_corner const cube_corner[k_cube_corner_count];
    static s_face_edge const face_edge_clockwise[k_face_edge_count];

    static long get_tile_face_index_d3d(long tile_x, long tile_y);
    static long get_tile_face_index(long tile_x, long tile_y);
    static float minimum_angular_variance(int cubemap_size);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __CUBEMAP_H__
