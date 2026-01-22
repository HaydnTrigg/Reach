/* ---------- headers */

#include "omaha\cubemaps\cubemap.h"
#include "omaha/cseries/cseries.h"

#include <math.h>

/* ---------- constants */

/* ---------- definitions */

real_vector3d const c_cubemap::face_forward[k_cube_face_count] =
{
    { 1.0, 0.0, 0.0},
    { -1.0, 0.0, 0.0},
    { 0.0, -1.0, 0.0},
    { 0.0, 1.0, 0.0},
    { 0.0, 0.0, 1.0},
    { 0.0, 0.0, -1.0}
};

real_vector3d const c_cubemap::face_up[k_cube_face_count] =
{
    {0.0, -1.0, 0.0},
    {0.0, -1.0, 0.0},
    {0.0, 0.0, -1.0},
    {0.0, 0.0, 1.0},
    {0.0, -1.0, 0.0},
    {0.0, -1.0, 0.0}
};

real_vector3d const c_cubemap::face_left[k_cube_face_count] =
{
    {0.0, 0.0, 1.0},
    {0.0, 0.0, -1.0},
    {-1.0, 0.0, 0.0},
    {-1.0, 0.0, 0.0},
    {-1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0}
};

real_vector3d const c_cubemap::face_up_bungie[k_cube_face_count] =
{
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {-1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0}
};

real_vector3d const c_cubemap::face_left_bungie[k_cube_face_count] =
{
    {0.0, 1.0, 0.0},
    {0.0, -1.0, 0.0},
    {1.0, 0.0, 0.0},
    {-1.0, 0.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0}
};

unsigned long const c_cubemap::face_D3D_mapping_table[k_cube_face_count] = 
{
    0,
    2,
    1,
    3,
    4,
    5
};

c_cubemap::s_cube_edge const c_cubemap::cube_edge[k_cube_edge_count] = 
{
    {   0,    0,    2,    1},
    {   0,    2,    3,    1},
    {   0,    3,    4,    1},
    {   0,    1,    5,    3},
    {   1,    0,    2,    3},
    {   1,    2,    3,    3},
    {   1,    1,    4,    3},
    {   1,    3,    5,    1},
    {   2,    2,    4,    0},
    {   2,    0,    5,    0},
    {   3,    0,    4,    2},
    {   3,    2,    5,    2}
};

c_cubemap::s_cube_corner const c_cubemap::cube_corner[k_cube_corner_count] = 
{
    {   0,    0,    2,    2,    4,    1},
    {   0,    1,    2,    1,    5,    0},
    {   0,    3,    3,    1,    4,    2},
    {   0,    2,    3,    2,    5,    3},
    {   1,    1,    2,    3,    4,    0},
    {   1,    0,    2,    0,    5,    1},
    {   1,    2,    3,    0,    4,    3},
    {   1,    3,    3,    3,    5,    2}
};

c_cubemap::s_face_edge const c_cubemap::face_edge_clockwise[k_face_edge_count] = 
{
    {   0,    0,   1,    0},
    {   1,    0,   0,    1},
    {   1,    1,   -1,   0},
    {   0,    1,   0,    -1}
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

long c_cubemap::get_tile_face_index_d3d(long tile_x, long tile_y)
{
    mangled_ppc("?get_tile_face_index_d3d@c_cubemap@@SAJJJ@Z");

    // $todo cleanup, are these enums?

    long face_index = NONE;

    if(tile_y == 1)
    {
        switch(tile_x)
        {
            case 0:
            face_index = 1;
            break;
            case 1:
            face_index = 4;
            break;
            case 2:
            face_index = 0;
            break;
            case 3:
            face_index = 5;
            break;
        }
    }
    else if(tile_x == 1)
    {
        if(tile_y == 0)
        {
            face_index = 2;
        }
        else if(tile_y == 2)
        {
            face_index = 3;
        }
    }

    return face_index;
};

long c_cubemap::get_tile_face_index(long tile_x, long tile_y)
{
    mangled_ppc("?get_tile_face_index@c_cubemap@@SAJJJ@Z");

    // $todo cleanup, are these enums?

    long face_index = NONE;

    if(tile_y == 1)
    {
        switch(tile_x)
        {
            case 0:
            face_index = 0;
            break;
            case 1:
            face_index = 2;
            break;
            case 2:
            face_index = 1;
            break;
            case 3:
            face_index = 3;
            break;
        }
    }
    else if(tile_x == 0)
    {
        if(tile_y == 0)
        {
            face_index = 4;
        }
        else if(tile_y == 2)
        {
            face_index = 5;
        }
    }

    return face_index;
};

float c_cubemap::minimum_angular_variance(int cubemap_size)
{
    mangled_ppc("?minimum_angular_variance@c_cubemap@@SAMH@Z");

    float minimum_pixel_angle_radians = atan(1.0f / (cubemap_size / 2.0f)) / sqrt(3.0f);
    float minimum_angular_variance = minimum_pixel_angle_radians * minimum_pixel_angle_radians;
    return minimum_angular_variance;
};

/* ---------- private code */

/* ---------- reverse engineering */
