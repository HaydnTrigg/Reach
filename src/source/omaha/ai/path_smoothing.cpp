/* ---------- headers */

#include "omaha\ai\path_smoothing.h"
#include "omaha\math\real_math.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

//void path_smooth(struct path_state const *, short, struct path_step const *, short *, struct path_step *, bool *)
//{
//    mangled_ppc("?path_smooth@@YAXPBUpath_state@@FPBUpath_step@@PAFPAU2@PA_N@Z");
//};

//void find_avoidance_point(real_point3d const *, real_point3d const *, real_point3d const *, float, bool, short, bool, real_point3d *)
//{
//    mangled_ppc("?find_avoidance_point@@YAXPBTreal_point3d@@00M_NF1PAT1@@Z");
//};

void find_tangent_point(real_point2d const * point, real_point2d const * center, float radius, bool clockwise, real_point2d * tangent_point)
{
    mangled_ppc("?find_tangent_point@@YAXPBTreal_point2d@@0M_NPAT1@@Z");

    real_vector2d center_to_point;
    vector_from_points2d(center, point, &center_to_point);

    float center_to_point_magnitude_squared = magnitude_squared2d(&center_to_point);

    float factor;
    if(center_to_point_magnitude_squared > 0.0f)
    {
        factor = radius / center_to_point_magnitude_squared;
    }
    else
    {
        factor = 0.0f;
    }

    float radical = center_to_point_magnitude_squared - radius * radius;
    if(radical > 0.0f)
    {
        radical = square_root(radical);
        
        real_point2d tangent_points[2];
        set_real_point2d(
            &tangent_points[0], 
            center->x + factor * (center_to_point.i * radius + center_to_point.j * radical), 
            center->y + factor * (center_to_point.j * radius - center_to_point.i * radical));
        set_real_point2d(
            &tangent_points[1], 
            center->x + factor * (center_to_point.i * radius - center_to_point.j * radical), 
            center->y + factor * (center_to_point.j * radius + center_to_point.i * radical));

        real_vector2d tangent_vectors[2];
        vector_from_points2d(point, &tangent_points[0], &tangent_vectors[0]);
        vector_from_points2d(point, &tangent_points[1], &tangent_vectors[1]);

        *tangent_point = tangent_points[cross_product2d(&tangent_vectors[0], &tangent_vectors[1]) > 0.0f != clockwise];
    }
    else
    {
        real_vector2d radius_vector;
        vector_from_points2d(center, point, &radius_vector);
        if(normalize2d(&radius_vector) == 0.0f)
        {
            radius_vector = *global_left2d;
        }
        point_from_line2d(center, &radius_vector, radius, tangent_point);
    }
};

//bool find_turning_point(short, real_point3d const *, float, long, bool, short, bool, bool, real_point3d *)
//{
//    mangled_ppc("?find_turning_point@@YA_NFPBTreal_point3d@@MJ_NF11PAT1@@Z");
//};

//bool choose_turning_point(real_point3d const *, real_point3d const *, real_point3d const *, real_point3d const *, real_point3d const *)
//{
//    mangled_ppc("?choose_turning_point@@YA_NPBTreal_point3d@@0000@Z");
//};

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83985430; // "except_record_83985430"

// void path_smooth(struct path_state const *, short, struct path_step const *, short *, struct path_step *, bool *);
// void find_avoidance_point(real_point3d const *, real_point3d const *, real_point3d const *, float, bool, short, bool, real_point3d *);
// void find_tangent_point(real_point2d const *, real_point2d const *, float, bool, real_point2d *);
// bool find_turning_point(short, real_point3d const *, float, long, bool, short, bool, bool, real_point3d *);
// bool choose_turning_point(real_point3d const *, real_point3d const *, real_point3d const *, real_point3d const *, real_point3d const *);
