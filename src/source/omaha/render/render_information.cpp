/* ---------- headers */

#include "omaha\render\render_information.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long c_render_information::lighting_raycast_count; // "?lighting_raycast_count@c_render_information@@2JA"
// public: static long *c_render_information::shader_count; // "?shader_count@c_render_information@@2PAJA"
// public: static long *c_render_information::object_imposter_count; // "?object_imposter_count@c_render_information@@2PAJA"
// public: static long *c_render_information::total_object_count; // "?total_object_count@c_render_information@@2PAJA"
// public: static long c_render_information::sky_count; // "?sky_count@c_render_information@@2JA"
// public: static long *c_render_information::instance_imposter_individual_count; // "?instance_imposter_individual_count@c_render_information@@2PAJA"
// public: static long *c_render_information::instance_imposter_group_count; // "?instance_imposter_group_count@c_render_information@@2PAJA"
// public: static long *c_render_information::instance_count; // "?instance_count@c_render_information@@2PAJA"
// public: static long *c_render_information::cluster_count; // "?cluster_count@c_render_information@@2PAJA"
// public: static long c_render_information::dynamic_shadow_count; // "?dynamic_shadow_count@c_render_information@@2JA"
// public: static long *c_render_information::screenspace_dynamic_light_count; // "?screenspace_dynamic_light_count@c_render_information@@2PAJA"
// public: static long *c_render_information::gpu_dynamic_light_count; // "?gpu_dynamic_light_count@c_render_information@@2PAJA"
// public: static long *c_render_information::cpu_dynamic_light_count; // "?cpu_dynamic_light_count@c_render_information@@2PAJA"
// public: static enum c_render_information::e_modifier c_render_information::current_modifyee; // "?current_modifyee@c_render_information@@2W4e_modifier@1@A"
// public: static enum c_render_information::e_attribution c_render_information::current_attributee; // "?current_attributee@c_render_information@@2W4e_attribution@1@A"
// public: static long (*c_render_information::object_types)[4]; // "?object_types@c_render_information@@2PAY03JA"
// public: static long (*c_render_information::vertices_counters)[6]; // "?vertices_counters@c_render_information@@2PAY05JA"
// public: static long (*c_render_information::indices_counters)[6]; // "?indices_counters@c_render_information@@2PAY05JA"

// public: static void c_render_information::clear_frame(void);
// public: static void c_render_information::set_attribution(enum c_render_information::e_attribution, enum c_render_information::e_modifier);
// public: static void c_render_information::add_index_count(long);
// public: static void c_render_information::add_vertex_count(long);
// public: static void c_render_information::add_shader_count(long);
// public: static void c_render_information::add_shadow_count(long);
// public: static void c_render_information::add_raycast_count(long);
// public: static enum c_render_information::e_modifier c_render_information::pass_to_modifier(enum e_pass);
// public: static void c_render_information::add_visibility_counters(enum e_collection_type);
// enum e_object_type object_get_type(long);
// void profile_environment_artist_display(char *, long);
// void profile_environment_artist_fetch(struct s_profile_environment_artist_data *);
// public: struct s_visible_object_render_visibility * c_simple_list<struct s_visible_object_render_visibility, 1024>::list_iterator_next(long *);
// public: struct s_visible_object_render_visibility * c_simple_list<struct s_visible_object_render_visibility, 1024>::list_iterator_new(long *);
// public: struct s_visible_instances * c_simple_list<struct s_visible_instances, 8192>::list_iterator_next(long *);
// public: struct s_visible_instances * c_simple_list<struct s_visible_instances, 8192>::list_iterator_new(long *);
// public: long c_simple_list<struct s_visible_clusters, 75>::get_count(void);
// public: struct s_visible_instance_imposter_group * c_simple_list<struct s_visible_instance_imposter_group, 512>::list_iterator_next(long *);
// public: struct s_visible_instance_imposter_group * c_simple_list<struct s_visible_instance_imposter_group, 512>::list_iterator_new(long *);
// public: struct s_visible_instance_imposter * c_simple_list<struct s_visible_instance_imposter, 2048>::list_iterator_next(long *);
// public: struct s_visible_instance_imposter * c_simple_list<struct s_visible_instance_imposter, 2048>::list_iterator_new(long *);

//public: static void c_render_information::clear_frame(void)
//{
//    mangled_ppc("?clear_frame@c_render_information@@SAXXZ");
//};

//public: static void c_render_information::set_attribution(enum c_render_information::e_attribution, enum c_render_information::e_modifier)
//{
//    mangled_ppc("?set_attribution@c_render_information@@SAXW4e_attribution@1@W4e_modifier@1@@Z");
//};

//public: static void c_render_information::add_index_count(long)
//{
//    mangled_ppc("?add_index_count@c_render_information@@SAXJ@Z");
//};

//public: static void c_render_information::add_vertex_count(long)
//{
//    mangled_ppc("?add_vertex_count@c_render_information@@SAXJ@Z");
//};

//public: static void c_render_information::add_shader_count(long)
//{
//    mangled_ppc("?add_shader_count@c_render_information@@SAXJ@Z");
//};

//public: static void c_render_information::add_shadow_count(long)
//{
//    mangled_ppc("?add_shadow_count@c_render_information@@SAXJ@Z");
//};

//public: static void c_render_information::add_raycast_count(long)
//{
//    mangled_ppc("?add_raycast_count@c_render_information@@SAXJ@Z");
//};

//public: static enum c_render_information::e_modifier c_render_information::pass_to_modifier(enum e_pass)
//{
//    mangled_ppc("?pass_to_modifier@c_render_information@@SA?AW4e_modifier@1@W4e_pass@@@Z");
//};

//public: static void c_render_information::add_visibility_counters(enum e_collection_type)
//{
//    mangled_ppc("?add_visibility_counters@c_render_information@@SAXW4e_collection_type@@@Z");
//};

//enum e_object_type object_get_type(long)
//{
//    mangled_ppc("?object_get_type@@YA?AW4e_object_type@@J@Z");
//};

//void profile_environment_artist_display(char *, long)
//{
//    mangled_ppc("?profile_environment_artist_display@@YAXPADJ@Z");
//};

//void profile_environment_artist_fetch(struct s_profile_environment_artist_data *)
//{
//    mangled_ppc("?profile_environment_artist_fetch@@YAXPAUs_profile_environment_artist_data@@@Z");
//};

//public: struct s_visible_object_render_visibility * c_simple_list<struct s_visible_object_render_visibility, 1024>::list_iterator_next(long *)
//{
//    mangled_ppc("?list_iterator_next@?$c_simple_list@Us_visible_object_render_visibility@@$0EAA@@@QAAPAUs_visible_object_render_visibility@@PAJ@Z");
//};

//public: struct s_visible_object_render_visibility * c_simple_list<struct s_visible_object_render_visibility, 1024>::list_iterator_new(long *)
//{
//    mangled_ppc("?list_iterator_new@?$c_simple_list@Us_visible_object_render_visibility@@$0EAA@@@QAAPAUs_visible_object_render_visibility@@PAJ@Z");
//};

//public: struct s_visible_instances * c_simple_list<struct s_visible_instances, 8192>::list_iterator_next(long *)
//{
//    mangled_ppc("?list_iterator_next@?$c_simple_list@Us_visible_instances@@$0CAAA@@@QAAPAUs_visible_instances@@PAJ@Z");
//};

//public: struct s_visible_instances * c_simple_list<struct s_visible_instances, 8192>::list_iterator_new(long *)
//{
//    mangled_ppc("?list_iterator_new@?$c_simple_list@Us_visible_instances@@$0CAAA@@@QAAPAUs_visible_instances@@PAJ@Z");
//};

//public: long c_simple_list<struct s_visible_clusters, 75>::get_count(void)
//{
//    mangled_ppc("?get_count@?$c_simple_list@Us_visible_clusters@@$0EL@@@QAAJXZ");
//};

//public: struct s_visible_instance_imposter_group * c_simple_list<struct s_visible_instance_imposter_group, 512>::list_iterator_next(long *)
//{
//    mangled_ppc("?list_iterator_next@?$c_simple_list@Us_visible_instance_imposter_group@@$0CAA@@@QAAPAUs_visible_instance_imposter_group@@PAJ@Z");
//};

//public: struct s_visible_instance_imposter_group * c_simple_list<struct s_visible_instance_imposter_group, 512>::list_iterator_new(long *)
//{
//    mangled_ppc("?list_iterator_new@?$c_simple_list@Us_visible_instance_imposter_group@@$0CAA@@@QAAPAUs_visible_instance_imposter_group@@PAJ@Z");
//};

//public: struct s_visible_instance_imposter * c_simple_list<struct s_visible_instance_imposter, 2048>::list_iterator_next(long *)
//{
//    mangled_ppc("?list_iterator_next@?$c_simple_list@Us_visible_instance_imposter@@$0IAA@@@QAAPAUs_visible_instance_imposter@@PAJ@Z");
//};

//public: struct s_visible_instance_imposter * c_simple_list<struct s_visible_instance_imposter, 2048>::list_iterator_new(long *)
//{
//    mangled_ppc("?list_iterator_new@?$c_simple_list@Us_visible_instance_imposter@@$0IAA@@@QAAPAUs_visible_instance_imposter@@PAJ@Z");
//};

