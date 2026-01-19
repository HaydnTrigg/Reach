/* ---------- headers */

#include "omaha\scenario\scenario_pvs_builder.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_cluster_reference, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_cluster_reference@@$0BA@@@2JB"
// bool g_pvs_building_disabled; // "?g_pvs_building_disabled@@3_NA"

// void scenario_build_zone_set_pvs(long, long);
// void scenario_build_zone_set_pvs(long, long, bool);
// void build_zone_set_pvs(long, long);
// void build_pvs_row(long, struct s_cluster_reference, float, struct s_scenario_pvs_row *, bool, bool *, bool *);
// void portal_section_from_portal(long, struct cluster_portal const *, long, struct portal_section *, short);
// bool clip_portal_by_plane(long, struct portal_section const *, struct plane3d const *, struct portal_section *);
// bool build_pvs_can_traverse_portal(long, struct s_cluster_reference, long, bool, bool *, bool *);
// void build_pvs_traverse_connected_clusters(long, struct s_game_cluster_bit_vectors *, struct s_scenario_pvs_row *, struct s_cluster_reference, struct portal_section const *, struct portal_section const *, float, bool, bool *, bool *);
// void build_pvs_traverse(long, struct s_game_cluster_bit_vectors *, struct s_scenario_pvs_row *, struct s_cluster_reference, struct portal_section const *, struct portal_section const *, float, bool, bool *, bool *);
// bool clip_portal_to_portals(long, struct portal_section const *, struct portal_section const *, struct portal_section const *, struct portal_section *);
// bool clip_portal_to_portal_edge_and_vertex(long, struct portal_section const *, long, struct portal_section const *, long, struct portal_section *);
// float portals_inside_distance(long, struct portal_section const *, struct portal_section const *, float);
// void commute_pvs(long, long, struct s_game_cluster_bit_vectors *, struct s_game_cluster_bit_vectors *);
// void build_sky_visibility(long, long);
// void bleed_cluster_colors(struct s_cluster_reference, struct s_cluster_reference, class c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16> const &, class c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16> const &, class c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16> &, float);
// void build_zone_set_cluster_mappings(long, long);
// public: short & s_static_array<short, 2>::operator[]<bool>(bool);
// public: void c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::resize(long);
// public: class c_static_stack<class c_static_stack<char, 8>, 255> const & c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::operator[](long) const;
// public: class c_static_stack<class c_static_stack<char, 8>, 255> & c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::operator[](long);
// public: c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>(void);
// public: void c_static_stack<class c_static_stack<char, 8>, 255>::resize(long);
// public: class c_static_stack<char, 8> const & c_static_stack<class c_static_stack<char, 8>, 255>::operator[](long) const;
// public: class c_static_stack<char, 8> & c_static_stack<class c_static_stack<char, 8>, 255>::operator[](long);
// public: bool c_static_stack<char, 8>::full(void) const;
// public: long c_static_stack<char, 8>::count(void) const;
// public: void c_static_stack<char, 8>::push_back(char const &);
// public: char const & c_static_stack<char, 8>::operator[](long) const;
// public: char & c_static_stack<char, 8>::operator[](long);
// public: char * c_static_stack<char, 8>::begin(void);
// public: char * c_static_stack<char, 8>::end(void);
// public: void c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::resize(long);
// public: class c_static_stack<class c_static_stack<float, 8>, 255> const & c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::operator[](long) const;
// public: class c_static_stack<class c_static_stack<float, 8>, 255> & c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::operator[](long);
// public: c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>(void);
// public: void c_static_stack<class c_static_stack<float, 8>, 255>::resize(long);
// public: class c_static_stack<float, 8> const & c_static_stack<class c_static_stack<float, 8>, 255>::operator[](long) const;
// public: class c_static_stack<float, 8> & c_static_stack<class c_static_stack<float, 8>, 255>::operator[](long);
// public: long c_static_stack<float, 8>::count(void) const;
// public: void c_static_stack<float, 8>::resize(long);
// public: float const & c_static_stack<float, 8>::operator[](long) const;
// public: float & c_static_stack<float, 8>::operator[](long);
// public: struct s_cluster_reference * c_static_stack<struct s_cluster_reference, 1024>::get_elements(void);
// public: void s_static_array<struct s_cluster_reference, 16>::set_all(struct s_cluster_reference const &);
// public: bool c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::valid(void) const;
// public: bool c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::valid(long) const;
// public: bool c_static_stack<class c_static_stack<char, 8>, 255>::valid(void) const;
// public: bool c_static_stack<class c_static_stack<char, 8>, 255>::valid(long) const;
// public: c_static_stack<class c_static_stack<char, 8>, 255>::c_static_stack<class c_static_stack<char, 8>, 255>(void);
// public: bool c_static_stack<char, 8>::valid(void) const;
// public: bool c_static_stack<char, 8>::valid(long) const;
// public: long c_static_stack<char, 8>::push(void);
// public: char * c_static_stack<char, 8>::get(long);
// public: bool c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::valid(void) const;
// public: bool c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::valid(long) const;
// public: bool c_static_stack<class c_static_stack<float, 8>, 255>::valid(void) const;
// public: bool c_static_stack<class c_static_stack<float, 8>, 255>::valid(long) const;
// public: c_static_stack<class c_static_stack<float, 8>, 255>::c_static_stack<class c_static_stack<float, 8>, 255>(void);
// public: bool c_static_stack<float, 8>::valid(void) const;
// public: bool c_static_stack<float, 8>::valid(long) const;
// public: c_static_stack<char, 8>::c_static_stack<char, 8>(void);
// public: c_static_stack<float, 8>::c_static_stack<float, 8>(void);
// public: bool c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum s_scenario_zone_set_pvs::e_flag) const;
// public: void c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum s_scenario_zone_set_pvs::e_flag, bool);
// char * std::find<char *, char>(char *, char *, char const &);
// public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 16>::operator[]<char>(char);
// public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 16>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_scenario_zone_set_pvs::e_flag);
// private: static unsigned short c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_scenario_zone_set_pvs::e_flag);
// char * std::_Checked_base<char *>(char *&);
// char * std::_Find<char *, char>(char *, char *, char const &);
// void std::_Checked_assign_from_base<char *>(char *&, char *const &);
// public: static bool s_static_array<struct s_cluster_reference, 16>::valid<char>(char);
// public: static bool s_static_array<struct s_cluster_reference, 16>::valid<long>(long);
// char * std::_Checked_base<char *>(char *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<char *>(char *, char *, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<char *>(char *const &);
// void std::_Debug_range2<char *>(char *, char *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<char>(char *, wchar_t const *, unsigned int);

//void scenario_build_zone_set_pvs(long, long)
//{
//    mangled_ppc("?scenario_build_zone_set_pvs@@YAXJJ@Z");
//};

//void scenario_build_zone_set_pvs(long, long, bool)
//{
//    mangled_ppc("?scenario_build_zone_set_pvs@@YAXJJ_N@Z");
//};

//void build_zone_set_pvs(long, long)
//{
//    mangled_ppc("?build_zone_set_pvs@@YAXJJ@Z");
//};

//void build_pvs_row(long, struct s_cluster_reference, float, struct s_scenario_pvs_row *, bool, bool *, bool *)
//{
//    mangled_ppc("?build_pvs_row@@YAXJUs_cluster_reference@@MPAUs_scenario_pvs_row@@_NPA_N3@Z");
//};

//void portal_section_from_portal(long, struct cluster_portal const *, long, struct portal_section *, short)
//{
//    mangled_ppc("?portal_section_from_portal@@YAXJPBUcluster_portal@@JPAUportal_section@@F@Z");
//};

//bool clip_portal_by_plane(long, struct portal_section const *, struct plane3d const *, struct portal_section *)
//{
//    mangled_ppc("?clip_portal_by_plane@@YA_NJPBUportal_section@@PBUplane3d@@PAU1@@Z");
//};

//bool build_pvs_can_traverse_portal(long, struct s_cluster_reference, long, bool, bool *, bool *)
//{
//    mangled_ppc("?build_pvs_can_traverse_portal@@YA_NJUs_cluster_reference@@J_NPA_N2@Z");
//};

//void build_pvs_traverse_connected_clusters(long, struct s_game_cluster_bit_vectors *, struct s_scenario_pvs_row *, struct s_cluster_reference, struct portal_section const *, struct portal_section const *, float, bool, bool *, bool *)
//{
//    mangled_ppc("?build_pvs_traverse_connected_clusters@@YAXJPAUs_game_cluster_bit_vectors@@PAUs_scenario_pvs_row@@Us_cluster_reference@@PBUportal_section@@3M_NPA_N5@Z");
//};

//void build_pvs_traverse(long, struct s_game_cluster_bit_vectors *, struct s_scenario_pvs_row *, struct s_cluster_reference, struct portal_section const *, struct portal_section const *, float, bool, bool *, bool *)
//{
//    mangled_ppc("?build_pvs_traverse@@YAXJPAUs_game_cluster_bit_vectors@@PAUs_scenario_pvs_row@@Us_cluster_reference@@PBUportal_section@@3M_NPA_N5@Z");
//};

//bool clip_portal_to_portals(long, struct portal_section const *, struct portal_section const *, struct portal_section const *, struct portal_section *)
//{
//    mangled_ppc("?clip_portal_to_portals@@YA_NJPBUportal_section@@00PAU1@@Z");
//};

//bool clip_portal_to_portal_edge_and_vertex(long, struct portal_section const *, long, struct portal_section const *, long, struct portal_section *)
//{
//    mangled_ppc("?clip_portal_to_portal_edge_and_vertex@@YA_NJPBUportal_section@@J0JPAU1@@Z");
//};

//float portals_inside_distance(long, struct portal_section const *, struct portal_section const *, float)
//{
//    mangled_ppc("?portals_inside_distance@@YAMJPBUportal_section@@0M@Z");
//};

//void commute_pvs(long, long, struct s_game_cluster_bit_vectors *, struct s_game_cluster_bit_vectors *)
//{
//    mangled_ppc("?commute_pvs@@YAXJJPAUs_game_cluster_bit_vectors@@0@Z");
//};

//void build_sky_visibility(long, long)
//{
//    mangled_ppc("?build_sky_visibility@@YAXJJ@Z");
//};

//void bleed_cluster_colors(struct s_cluster_reference, struct s_cluster_reference, class c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16> const &, class c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16> const &, class c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16> &, float)
//{
//    mangled_ppc("?bleed_cluster_colors@@YAXUs_cluster_reference@@0ABV?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@ABV?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@AAV3@M@Z");
//};

//void build_zone_set_cluster_mappings(long, long)
//{
//    mangled_ppc("?build_zone_set_cluster_mappings@@YAXJJ@Z");
//};

//public: short & s_static_array<short, 2>::operator[]<bool>(bool)
//{
//    mangled_ppc("??$?A_N@?$s_static_array@F$01@@QAAAAF_N@Z");
//};

//public: void c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@QAAXJ@Z");
//};

//public: class c_static_stack<class c_static_stack<char, 8>, 255> const & c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@QBAABV?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@J@Z");
//};

//public: class c_static_stack<class c_static_stack<char, 8>, 255> & c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@QAAAAV?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@J@Z");
//};

//public: c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@QAA@XZ");
//};

//public: void c_static_stack<class c_static_stack<char, 8>, 255>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@QAAXJ@Z");
//};

//public: class c_static_stack<char, 8> const & c_static_stack<class c_static_stack<char, 8>, 255>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@QBAABV?$c_static_stack@D$07@@J@Z");
//};

//public: class c_static_stack<char, 8> & c_static_stack<class c_static_stack<char, 8>, 255>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@QAAAAV?$c_static_stack@D$07@@J@Z");
//};

//public: bool c_static_stack<char, 8>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@D$07@@QBA_NXZ");
//};

//public: long c_static_stack<char, 8>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@D$07@@QBAJXZ");
//};

//public: void c_static_stack<char, 8>::push_back(char const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@D$07@@QAAXABD@Z");
//};

//public: char const & c_static_stack<char, 8>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@D$07@@QBAABDJ@Z");
//};

//public: char & c_static_stack<char, 8>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@D$07@@QAAAADJ@Z");
//};

//public: char * c_static_stack<char, 8>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@D$07@@QAAPADXZ");
//};

//public: char * c_static_stack<char, 8>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@D$07@@QAAPADXZ");
//};

//public: void c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@QAAXJ@Z");
//};

//public: class c_static_stack<class c_static_stack<float, 8>, 255> const & c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@QBAABV?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@J@Z");
//};

//public: class c_static_stack<class c_static_stack<float, 8>, 255> & c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@QAAAAV?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@J@Z");
//};

//public: c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@QAA@XZ");
//};

//public: void c_static_stack<class c_static_stack<float, 8>, 255>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@QAAXJ@Z");
//};

//public: class c_static_stack<float, 8> const & c_static_stack<class c_static_stack<float, 8>, 255>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@QBAABV?$c_static_stack@M$07@@J@Z");
//};

//public: class c_static_stack<float, 8> & c_static_stack<class c_static_stack<float, 8>, 255>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@QAAAAV?$c_static_stack@M$07@@J@Z");
//};

//public: long c_static_stack<float, 8>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@M$07@@QBAJXZ");
//};

//public: void c_static_stack<float, 8>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@M$07@@QAAXJ@Z");
//};

//public: float const & c_static_stack<float, 8>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@M$07@@QBAABMJ@Z");
//};

//public: float & c_static_stack<float, 8>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@M$07@@QAAAAMJ@Z");
//};

//public: struct s_cluster_reference * c_static_stack<struct s_cluster_reference, 1024>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QAAPAUs_cluster_reference@@XZ");
//};

//public: void s_static_array<struct s_cluster_reference, 16>::set_all(struct s_cluster_reference const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Us_cluster_reference@@$0BA@@@QAAXABUs_cluster_reference@@@Z");
//};

//public: bool c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_static_stack<class c_static_stack<char, 8>, 255>, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class c_static_stack<char, 8>, 255>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_static_stack<char, 8>, 255>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@QBA_NJ@Z");
//};

//public: c_static_stack<class c_static_stack<char, 8>, 255>::c_static_stack<class c_static_stack<char, 8>, 255>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$c_static_stack@D$07@@$0PP@@@QAA@XZ");
//};

//public: bool c_static_stack<char, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@D$07@@QBA_NXZ");
//};

//public: bool c_static_stack<char, 8>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@D$07@@QBA_NJ@Z");
//};

//public: long c_static_stack<char, 8>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@D$07@@QAAJXZ");
//};

//public: char * c_static_stack<char, 8>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@D$07@@QAAPADJ@Z");
//};

//public: bool c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_static_stack<class c_static_stack<float, 8>, 255>, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class c_static_stack<float, 8>, 255>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_static_stack<float, 8>, 255>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@QBA_NJ@Z");
//};

//public: c_static_stack<class c_static_stack<float, 8>, 255>::c_static_stack<class c_static_stack<float, 8>, 255>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$c_static_stack@M$07@@$0PP@@@QAA@XZ");
//};

//public: bool c_static_stack<float, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@M$07@@QBA_NXZ");
//};

//public: bool c_static_stack<float, 8>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@M$07@@QBA_NJ@Z");
//};

//public: c_static_stack<char, 8>::c_static_stack<char, 8>(void)
//{
//    mangled_ppc("??0?$c_static_stack@D$07@@QAA@XZ");
//};

//public: c_static_stack<float, 8>::c_static_stack<float, 8>(void)
//{
//    mangled_ppc("??0?$c_static_stack@M$07@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum s_scenario_zone_set_pvs::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_scenario_zone_set_pvs@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_scenario_zone_set_pvs@@@Z");
//};

//public: void c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum s_scenario_zone_set_pvs::e_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flag@s_scenario_zone_set_pvs@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_flag@s_scenario_zone_set_pvs@@_N@Z");
//};

//char * std::find<char *, char>(char *, char *, char const &)
//{
//    mangled_ppc("??$find@PADD@std@@YAPADPAD0ABD@Z");
//};

//public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 16>::operator[]<char>(char)
//{
//    mangled_ppc("??$?AD@?$s_static_array@Us_cluster_reference@@$0BA@@@QAAAAUs_cluster_reference@@D@Z");
//};

//public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cluster_reference@@$0BA@@@QAAAAUs_cluster_reference@@J@Z");
//};

//public: static bool c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_scenario_zone_set_pvs::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_scenario_zone_set_pvs@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_scenario_zone_set_pvs@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_scenario_zone_set_pvs::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_scenario_zone_set_pvs::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_scenario_zone_set_pvs@@G$00Us_default_enum_string_resolver@@@@CAGW4e_flag@s_scenario_zone_set_pvs@@@Z");
//};

//char * std::_Checked_base<char *>(char *&)
//{
//    mangled_ppc("??$_Checked_base@PAD@std@@YAPADAAPAD@Z");
//};

//char * std::_Find<char *, char>(char *, char *, char const &)
//{
//    mangled_ppc("??$_Find@PADD@std@@YAPADPAD0ABD@Z");
//};

//void std::_Checked_assign_from_base<char *>(char *&, char *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PAD@std@@YAXAAPADABQAD@Z");
//};

//public: static bool s_static_array<struct s_cluster_reference, 16>::valid<char>(char)
//{
//    mangled_ppc("??$valid@D@?$s_static_array@Us_cluster_reference@@$0BA@@@SA_ND@Z");
//};

//public: static bool s_static_array<struct s_cluster_reference, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cluster_reference@@$0BA@@@SA_NJ@Z");
//};

//char * std::_Checked_base<char *>(char *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PAD@std@@YAPADAAPADU_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<char *>(char *, char *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PAD@std@@YAXPAD0PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<char *>(char *const &)
//{
//    mangled_ppc("??$_Iter_cat@PAD@std@@YA?AUrandom_access_iterator_tag@0@ABQAD@Z");
//};

//void std::_Debug_range2<char *>(char *, char *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PAD@std@@YAXPAD0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<char>(char *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@D@std@@YAXPADPB_WI@Z");
//};

